// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx2 @ 140a46f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx2
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
               double *param_5,undefined1 (*param_6) [24],uint param_7,undefined1 (*param_8) [32])

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [32];
  undefined4 uVar22;
  byte bVar23;
  char cVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  byte bVar28;
  char cVar29;
  int iVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar38 [16];
  undefined8 uVar37;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  longlong lVar76;
  undefined1 auVar39 [16];
  longlong lVar82;
  longlong lVar88;
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
  undefined1 auVar40 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar77;
  undefined1 in_ZMM0 [64];
  double dVar89;
  double dVar114;
  double dVar117;
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
  double dVar90;
  double dVar91;
  double dVar115;
  double dVar116;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined8 uVar92;
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  double dVar123;
  undefined1 auVar125 [16];
  undefined8 uVar124;
  double dVar131;
  double dVar132;
  double dVar133;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  double dVar134;
  undefined1 auVar136 [16];
  undefined8 uVar135;
  double dVar143;
  undefined1 auVar137 [32];
  double dVar142;
  double dVar144;
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined8 uVar145;
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  double dVar156;
  undefined8 uVar157;
  double dVar182;
  double dVar183;
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  double dVar184;
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [64];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [64];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 auVar212 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [32];
  undefined1 in_ZMM11 [64];
  double dVar225;
  double dVar229;
  undefined1 auVar226 [32];
  double dVar227;
  double dVar228;
  undefined1 in_ZMM12 [64];
  undefined1 auVar230 [32];
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar235 [16];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar240 [32];
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_21e0 [16];
  double dStack_21d0;
  double dStack_21c8;
  ulonglong local_21c0;
  undefined8 uStack_21b8;
  undefined8 uStack_21b0;
  undefined8 uStack_21a8;
  undefined1 local_21a0 [16];
  double dStack_2190;
  double dStack_2188;
  undefined1 local_2180 [16];
  double dStack_2170;
  double dStack_2168;
  undefined8 local_2160;
  undefined8 uStack_2158;
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  undefined8 local_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 local_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 local_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 local_20e0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined8 uStack_20c8;
  undefined8 local_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 local_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 local_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  double local_2040;
  double dStack_2038;
  double dStack_2030;
  double dStack_2028;
  double local_2020;
  double dStack_2018;
  double dStack_2010;
  double dStack_2008;
  double local_2000 [24];
  undefined1 local_1f40 [8];
  double adStack_1f38 [3];
  undefined1 local_1f20 [8];
  double adStack_1f18 [3];
  undefined1 local_1f00 [16];
  double dStack_1ef0;
  double dStack_1ee8;
  undefined1 local_1ee0 [16];
  double dStack_1ed0;
  double dStack_1ec8;
  undefined1 local_1ec0 [16];
  double dStack_1eb0;
  double dStack_1ea8;
  undefined1 local_1ea0 [16];
  double dStack_1e90;
  double dStack_1e88;
  undefined1 local_1e80 [32];
  undefined1 local_1e60 [32];
  undefined1 local_1e40 [16];
  double dStack_1e30;
  double dStack_1e28;
  undefined1 local_1e20 [16];
  double dStack_1e10;
  double dStack_1e08;
  undefined1 local_1e00 [16];
  double dStack_1df0;
  double dStack_1de8;
  undefined1 local_1de0 [16];
  double dStack_1dd0;
  double dStack_1dc8;
  undefined1 local_1dc0;
  undefined1 uStack_1dbf;
  undefined1 uStack_1dbe;
  undefined1 uStack_1dbd;
  undefined1 uStack_1dbc;
  undefined1 uStack_1dbb;
  undefined1 uStack_1dba;
  undefined1 uStack_1db9;
  double dStack_1db8;
  double dStack_1db0;
  double dStack_1da8;
  double local_1da0;
  double dStack_1d98;
  double dStack_1d90;
  double dStack_1d88;
  double local_1d40;
  double dStack_1d38;
  double dStack_1d30;
  double dStack_1d28;
  double local_1d20;
  double dStack_1d18;
  double dStack_1d10;
  double dStack_1d08;
  double local_1d00;
  double dStack_1cf8;
  double dStack_1cf0;
  double dStack_1ce8;
  double local_1ce0;
  double dStack_1cd8;
  double dStack_1cd0;
  double dStack_1cc8;
  double local_1cc0;
  double dStack_1cb8;
  double dStack_1cb0;
  double dStack_1ca8;
  double local_1ca0;
  double dStack_1c98;
  double dStack_1c90;
  double dStack_1c88;
  double local_1c40;
  double dStack_1c38;
  double dStack_1c30;
  double dStack_1c28;
  double local_1c20;
  double dStack_1c18;
  double dStack_1c10;
  double dStack_1c08;
  double local_1c00;
  double dStack_1bf8;
  double dStack_1bf0;
  double dStack_1be8;
  double local_1be0;
  double dStack_1bd8;
  double dStack_1bd0;
  double dStack_1bc8;
  double local_1bc0;
  double dStack_1bb8;
  double dStack_1bb0;
  double dStack_1ba8;
  double local_1ba0;
  double dStack_1b98;
  double dStack_1b90;
  double dStack_1b88;
  undefined1 local_1b40 [24];
  undefined8 uStack_1b28;
  undefined1 local_1b20 [32];
  undefined1 local_1b00 [32];
  undefined1 local_1ae0 [32];
  undefined1 local_1ac0 [16];
  double dStack_1ab0;
  double dStack_1aa8;
  undefined1 local_1aa0 [32];
  undefined1 local_1a80 [32];
  undefined1 local_1a60 [32];
  undefined1 local_1a40 [32];
  undefined1 local_1a20 [32];
  undefined1 local_1a00 [32];
  undefined1 local_19e0 [32];
  undefined1 local_19c0 [32];
  undefined1 local_19a0 [32];
  undefined1 local_1980 [32];
  undefined1 local_1960 [32];
  undefined1 local_1940 [32];
  undefined1 local_1920 [32];
  undefined1 local_1900 [32];
  undefined1 local_18e0 [32];
  undefined1 local_18c0 [32];
  undefined1 local_18a0 [32];
  undefined1 local_1880 [32];
  undefined1 local_1860 [32];
  undefined1 local_1840 [32];
  undefined1 local_1820 [32];
  undefined8 local_1800;
  undefined1 local_17a0 [32];
  undefined1 local_1780 [32];
  undefined1 local_1760 [32];
  undefined1 local_1740 [32];
  undefined1 local_1720 [32];
  undefined1 local_1700 [32];
  undefined1 local_16e0 [32];
  undefined1 local_16c0 [32];
  undefined1 local_16a0 [32];
  undefined1 local_1680 [32];
  undefined1 local_1660 [32];
  undefined1 local_1640 [32];
  undefined1 local_1620 [32];
  undefined8 local_1600;
  undefined8 local_15c0;
  undefined8 auStack_15b8 [2];
  undefined8 local_15a8 [2];
  undefined8 local_1598;
  char local_1590 [8];
  undefined8 local_1588;
  undefined8 local_1580;
  undefined8 local_1578;
  undefined8 local_1570;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined1 local_1558;
  undefined8 local_1550;
  undefined8 local_1548;
  undefined8 local_1540;
  undefined8 local_1538;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined1 local_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined1 local_14e8;
  undefined8 local_14e0;
  undefined8 local_14d8;
  undefined8 local_14d0;
  undefined8 local_14c8;
  undefined8 local_14c0;
  undefined8 local_14b8;
  undefined1 local_14b0;
  undefined8 local_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined1 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_1458;
  undefined8 local_1450;
  undefined8 local_1448;
  undefined1 local_1440;
  undefined8 local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined8 local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined1 local_1408;
  longlong local_1400;
  longlong lStack_13f8;
  longlong lStack_13f0;
  longlong lStack_13e8;
  longlong local_13e0;
  longlong lStack_13d8;
  longlong lStack_13d0;
  longlong lStack_13c8;
  longlong local_13c0;
  longlong lStack_13b8;
  longlong lStack_13b0;
  longlong lStack_13a8;
  longlong local_13a0;
  longlong lStack_1398;
  longlong lStack_1390;
  longlong lStack_1388;
  longlong local_1380;
  longlong lStack_1378;
  longlong lStack_1370;
  longlong lStack_1368;
  undefined1 local_1360 [32];
  longlong local_1340;
  longlong lStack_1338;
  longlong lStack_1330;
  longlong lStack_1328;
  double local_1320;
  double dStack_1318;
  double dStack_1310;
  double dStack_1308;
  double local_1300;
  double dStack_12f8;
  double dStack_12f0;
  double dStack_12e8;
  undefined1 local_12e0 [16];
  undefined8 local_12d0;
  undefined1 local_12c8 [16];
  undefined8 local_12b8;
  char local_12b0 [8];
  undefined1 local_12a8 [16];
  undefined8 local_1298;
  undefined1 local_1290 [16];
  undefined8 local_1280;
  undefined1 local_1278;
  undefined1 local_1270 [16];
  undefined8 local_1260;
  undefined1 local_1258 [16];
  undefined8 local_1248;
  undefined1 local_1240;
  undefined1 local_1238 [16];
  undefined8 local_1228;
  undefined1 local_1220 [16];
  undefined8 local_1210;
  undefined1 local_1208;
  undefined1 local_1200 [16];
  undefined8 local_11f0;
  undefined1 local_11e8 [16];
  undefined8 local_11d8;
  undefined1 local_11d0;
  undefined1 local_11c8 [16];
  double local_11b8;
  undefined1 local_11b0 [16];
  double local_11a0;
  undefined1 local_1198 [8];
  undefined1 local_1190 [16];
  double local_1180;
  undefined1 local_1178 [16];
  double local_1168;
  undefined1 local_1160 [8];
  undefined1 local_1158 [16];
  double local_1148;
  undefined1 local_1140 [16];
  double local_1130;
  undefined1 local_1128 [8];
  undefined1 local_1120 [16];
  double adStack_1110 [2];
  undefined1 local_1100 [16];
  double adStack_10f0 [9];
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined1 local_ec0 [32];
  undefined1 local_ea0 [32];
  undefined1 local_e80 [32];
  undefined1 local_e60 [32];
  undefined1 local_e40 [32];
  undefined1 local_e20 [32];
  undefined1 local_e00 [32];
  undefined1 local_de0 [32];
  undefined1 local_dc0 [16];
  double adStack_db0 [2];
  undefined1 local_da0 [16];
  double adStack_d90 [2];
  undefined1 local_d80 [16];
  double adStack_d70 [2];
  undefined1 local_d60 [16];
  double adStack_d50 [2];
  undefined1 local_d40 [16];
  double adStack_d30 [2];
  undefined1 local_d20 [16];
  double adStack_d10 [2];
  undefined1 local_d00 [16];
  double adStack_cf0 [9];
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  double local_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined1 local_aa0 [32];
  undefined1 local_a80 [32];
  undefined1 local_a60 [32];
  undefined1 local_a40 [32];
  undefined1 local_a20 [32];
  undefined1 local_a00 [32];
  undefined1 local_9e0 [32];
  undefined1 local_9c0 [16];
  double adStack_9b0 [2];
  undefined1 local_9a0 [16];
  double adStack_990 [2];
  undefined1 local_980 [16];
  double adStack_970 [2];
  undefined1 local_960 [16];
  double adStack_950 [2];
  undefined1 local_940 [16];
  double adStack_930 [2];
  undefined1 local_920 [16];
  double adStack_910 [2];
  undefined1 local_900 [16];
  double adStack_8f0 [9];
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  double local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 local_680 [32];
  undefined1 local_660 [32];
  undefined1 local_640 [32];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [16];
  double adStack_5b0 [2];
  undefined1 local_5a0 [16];
  double adStack_590 [2];
  undefined1 local_580 [16];
  double adStack_570 [2];
  undefined1 local_560 [16];
  double adStack_550 [2];
  undefined1 local_540 [16];
  double adStack_530 [2];
  undefined1 local_520 [16];
  double adStack_510 [2];
  undefined1 local_500 [16];
  double adStack_4f0 [9];
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140a46fa6;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_1a60._0_8_ = param_2;
  auVar47 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  uVar26 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar26 = param_7;
  }
  uVar26 = uVar26 & 0xfffffff8;
  auVar47 = auVar47 & ~*param_8;
  local_17a0._0_4_ = uVar26;
  if ((((((((SUB321(auVar47 >> 0x1f,0) & 1) == 0 && (SUB321(auVar47 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar47 >> 0x5f,0) & 1) == 0) && SUB321(auVar47 >> 0x7f,0) == '\0') &&
        (SUB321(auVar47 >> 0x9f,0) & 1) == 0) && SUB321(auVar47 >> 0xbf,0) == '\0') &&
      (SUB321(auVar47 >> 0xdf,0) & 1) == 0) && -1 < auVar47[0x1f]) {
    local_1820 = ZEXT1632(ZEXT816(0));
    local_1840 = ZEXT1632(ZEXT816(0));
    local_1860._0_16_ = ZEXT816(0);
    local_1860 = ZEXT1632(local_1860._0_16_);
    local_1880._0_16_ = ZEXT816(0);
    local_1880 = ZEXT1632(local_1880._0_16_);
    local_18a0._0_16_ = ZEXT816(0);
    local_18a0 = ZEXT1632(local_18a0._0_16_);
    local_18c0._0_16_ = ZEXT816(0);
    local_18c0 = ZEXT1632(local_18c0._0_16_);
    local_18e0 = ZEXT1632(ZEXT816(0));
    local_1900 = ZEXT1632(ZEXT816(0));
    local_1920._0_16_ = ZEXT816(0);
    local_1920 = ZEXT1632(local_1920._0_16_);
    local_1940._0_16_ = ZEXT816(0);
    local_1940 = ZEXT1632(local_1940._0_16_);
    local_1960._0_16_ = ZEXT816(0);
    local_1960 = ZEXT1632(local_1960._0_16_);
    local_1980._0_16_ = ZEXT816(0);
    local_1980 = ZEXT1632(local_1980._0_16_);
    local_1800 = 0;
    if ((int)uVar26 < 1) {
      iVar27 = 0;
    }
    else {
      iVar27 = 0;
      local_1360._4_4_ = __real_00000038;
      local_1360._0_4_ = __real_00000038;
      local_1360._8_4_ = __real_00000038;
      local_1360._12_4_ = __real_00000038;
      local_1360._16_4_ = __real_00000038;
      local_1360._20_4_ = __real_00000038;
      local_1360._24_4_ = __real_00000038;
      local_1360._28_4_ = __real_00000038;
      auVar200 = ZEXT3264(local_1360);
      local_1380 = __real_0000000000000008;
      lStack_1378 = __real_0000000000000008;
      lStack_1370 = __real_0000000000000008;
      lStack_1368 = __real_0000000000000008;
      local_13a0 = __real_0000000000000010;
      lStack_1398 = __real_0000000000000010;
      lStack_1390 = __real_0000000000000010;
      lStack_1388 = __real_0000000000000010;
      local_13c0 = __real_0000000000000018;
      lStack_13b8 = __real_0000000000000018;
      lStack_13b0 = __real_0000000000000018;
      lStack_13a8 = __real_0000000000000018;
      local_13e0 = __real_0000000000000020;
      lStack_13d8 = __real_0000000000000020;
      lStack_13d0 = __real_0000000000000020;
      lStack_13c8 = __real_0000000000000020;
      local_1400 = __real_0000000000000028;
      lStack_13f8 = __real_0000000000000028;
      lStack_13f0 = __real_0000000000000028;
      lStack_13e8 = __real_0000000000000028;
      local_1340 = __real_0000000000000030;
      lStack_1338 = __real_0000000000000030;
      lStack_1330 = __real_0000000000000030;
      lStack_1328 = __real_0000000000000030;
      auVar209 = ZEXT1664((undefined1  [16])0x0);
      do {
        auVar47._4_4_ = iVar27;
        auVar47._0_4_ = iVar27;
        auVar47._8_4_ = iVar27;
        auVar47._12_4_ = iVar27;
        auVar47._16_4_ = iVar27;
        auVar47._20_4_ = iVar27;
        auVar47._24_4_ = iVar27;
        auVar47._28_4_ = iVar27;
        auVar137 = vpor_avx2(auVar47,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
        auVar47 = *(undefined1 (*) [32])(local_1a60._0_8_ + (ulonglong)(uint)(iVar27 * 4));
        auVar44 = vpmulld_avx2(auVar137,auVar200._0_32_);
        auVar146 = vpmovzxdq_avx2(auVar44._0_16_);
        auVar44 = vpmovzxdq_avx2(auVar44._16_16_);
        lVar31 = auVar146._0_8_;
        lVar76 = auVar146._8_8_;
        lVar82 = auVar146._16_8_;
        lVar88 = auVar146._24_8_;
        auVar42 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + lVar31 + local_1340)),
                              (uint)*(byte *)(param_4 + lVar76 + lStack_1338),1);
        auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + lVar82 + lStack_1330),2);
        auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + lVar88 + lStack_1328),3);
        auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._0_8_ + local_1340),4);
        auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._8_8_ + lStack_1338),5);
        auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._16_8_ + lStack_1330),6);
        vpslld_avx2(auVar47,2);
        auVar146 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
        auVar188 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
        auVar39 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._24_8_ + lStack_1328),7);
        uVar22 = local_17a0._0_4_;
        auVar146 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
        auVar44 = vpcmpeqd_avx2(auVar188,auVar146);
        auVar42 = SUB3216(auVar44 ^ auVar146,0x10);
        in_ZMM6 = ZEXT1664(auVar42);
        auVar42 = vpackssdw_avx(SUB3216(auVar44 ^ auVar146,0),auVar42);
        auVar39 = vpcmpeqb_avx(auVar209._0_16_,auVar39);
        auVar39 = vpmovsxbw_avx(auVar39 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar39 = vpand_avx(auVar42,auVar39);
        if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x1f,0) & 1) != 0) || (SUB161(auVar39 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
          auVar146 = vpslld_avx2(auVar137,3);
          auVar146 = vpsubd_avx2(auVar146,auVar137);
          vpmovzxdq_avx2(auVar146._16_16_);
          auVar44 = vpmovzxdq_avx2(auVar146._0_16_);
          auVar146 = vpcmpeqd_avx2(ZEXT1632(auVar42),ZEXT1632(auVar42));
          local_19a0 = vgatherqpd(ZEXT1632((undefined1  [16])0x0),auVar146);
          auVar146 = vpcmpeqd_avx2(auVar44,auVar44);
          auVar177 = vgatherqpd(ZEXT832(0),auVar146);
          auVar146._0_8_ = lVar31 + local_1380;
          auVar146._8_8_ = lVar76 + lStack_1378;
          auVar146._16_8_ = lVar82 + lStack_1370;
          auVar146._24_8_ = lVar88 + lStack_1368;
          auVar44 = vpcmpeqd_avx2(auVar177,auVar177);
          local_19c0 = vgatherqpd(ZEXT832(0) << 0x40,auVar44);
          auVar146 = vpcmpeqd_avx2(auVar146,auVar146);
          auVar178 = vgatherqpd(ZEXT832(0),auVar146);
          auVar44._0_8_ = lVar31 + local_13a0;
          auVar44._8_8_ = lVar76 + lStack_1398;
          auVar44._16_8_ = lVar82 + lStack_1390;
          auVar44._24_8_ = lVar88 + lStack_1388;
          auVar146 = vpcmpeqd_avx2(auVar178,auVar178);
          local_19e0 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
          auVar146 = vpcmpeqd_avx2(auVar44,auVar44);
          local_1a00 = vgatherqpd(ZEXT832(0),auVar146);
          auVar137._0_8_ = lVar31 + local_13c0;
          auVar137._8_8_ = lVar76 + lStack_13b8;
          auVar137._16_8_ = lVar82 + lStack_13b0;
          auVar137._24_8_ = lVar88 + lStack_13a8;
          auVar146 = vpcmpeqd_avx2(local_1a00,local_1a00);
          local_1a20 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
          auVar146 = vpcmpeqd_avx2(auVar137,auVar137);
          auVar179 = vgatherqpd(ZEXT832(0),auVar146);
          auVar188._0_8_ = lVar31 + local_13e0;
          auVar188._8_8_ = lVar76 + lStack_13d8;
          auVar188._16_8_ = lVar82 + lStack_13d0;
          auVar188._24_8_ = lVar88 + lStack_13c8;
          auVar146 = vpcmpeqd_avx2(auVar179,auVar179);
          local_1ae0 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
          auVar146 = vpcmpeqd_avx2(auVar188,auVar188);
          _local_1ac0 = vgatherqpd(ZEXT832(0),auVar146);
          auVar159._8_8_ = lStack_13f8;
          auVar159._0_8_ = local_1400;
          auVar159._16_8_ = lStack_13f0;
          auVar159._24_8_ = lStack_13e8;
          auVar158._0_8_ = lVar31 + local_1400;
          auVar158._8_8_ = lVar76 + lStack_13f8;
          auVar158._16_8_ = lVar82 + lStack_13f0;
          auVar158._24_8_ = lVar88 + lStack_13e8;
          auVar146 = vpcmpeqd_avx2(auVar159,auVar159);
          local_1b00 = vgatherqpd(ZEXT832(0),auVar146);
          auVar146 = vpcmpeqd_avx2(auVar158,auVar158);
          local_1b20 = vgatherqpd(ZEXT832(0),auVar146);
          auVar240 = vpslld_avx2(auVar47,7);
          auVar42 = vpshufd_avx(auVar39,0xee);
          auVar47 = vpmovsxwq_avx2(auVar42);
          auVar44 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar160._4_4_ = __real_00000008;
          auVar160._0_4_ = __real_00000008;
          auVar160._8_4_ = __real_00000008;
          auVar160._12_4_ = __real_00000008;
          auVar160._16_4_ = __real_00000008;
          auVar160._20_4_ = __real_00000008;
          auVar160._24_4_ = __real_00000008;
          auVar160._28_4_ = __real_00000008;
          vpor_avx2(auVar240,auVar160);
          auVar146 = vpmovsxwq_avx2(auVar39);
          auVar137 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar188 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar161._4_4_ = __real_00000010;
          auVar161._0_4_ = __real_00000010;
          auVar161._8_4_ = __real_00000010;
          auVar161._12_4_ = __real_00000010;
          auVar161._16_4_ = __real_00000010;
          auVar161._20_4_ = __real_00000010;
          auVar161._24_4_ = __real_00000010;
          auVar161._28_4_ = __real_00000010;
          vpor_avx2(auVar240,auVar161);
          auVar158 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar159 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar162._4_4_ = __real_00000018;
          auVar162._0_4_ = __real_00000018;
          auVar162._8_4_ = __real_00000018;
          auVar162._12_4_ = __real_00000018;
          auVar162._16_4_ = __real_00000018;
          auVar162._20_4_ = __real_00000018;
          auVar162._24_4_ = __real_00000018;
          auVar162._28_4_ = __real_00000018;
          vpor_avx2(auVar240,auVar162);
          auVar160 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar161 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar163._4_4_ = __real_00000020;
          auVar163._0_4_ = __real_00000020;
          auVar163._8_4_ = __real_00000020;
          auVar163._12_4_ = __real_00000020;
          auVar163._16_4_ = __real_00000020;
          auVar163._20_4_ = __real_00000020;
          auVar163._24_4_ = __real_00000020;
          auVar163._28_4_ = __real_00000020;
          vpor_avx2(auVar240,auVar163);
          auVar162 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar163 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar164._4_4_ = __real_00000028;
          auVar164._0_4_ = __real_00000028;
          auVar164._8_4_ = __real_00000028;
          auVar164._12_4_ = __real_00000028;
          auVar164._16_4_ = __real_00000028;
          auVar164._20_4_ = __real_00000028;
          auVar164._24_4_ = __real_00000028;
          auVar164._28_4_ = __real_00000028;
          vpor_avx2(auVar240,auVar164);
          auVar164 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar173 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar165._4_4_ = __real_00000030;
          auVar165._0_4_ = __real_00000030;
          auVar165._8_4_ = __real_00000030;
          auVar165._12_4_ = __real_00000030;
          auVar165._16_4_ = __real_00000030;
          auVar165._20_4_ = __real_00000030;
          auVar165._24_4_ = __real_00000030;
          auVar165._28_4_ = __real_00000030;
          vpor_avx2(auVar240,auVar165);
          auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar174 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          vpor_avx2(auVar240,auVar200._0_32_);
          auVar175 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar176 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar166._4_4_ = __real_00000040;
          auVar166._0_4_ = __real_00000040;
          auVar166._8_4_ = __real_00000040;
          auVar166._12_4_ = __real_00000040;
          auVar166._16_4_ = __real_00000040;
          auVar166._20_4_ = __real_00000040;
          auVar166._24_4_ = __real_00000040;
          auVar166._28_4_ = __real_00000040;
          vpor_avx2(auVar240,auVar166);
          auVar166 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar197 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar167._4_4_ = __real_00000048;
          auVar167._0_4_ = __real_00000048;
          auVar167._8_4_ = __real_00000048;
          auVar167._12_4_ = __real_00000048;
          auVar167._16_4_ = __real_00000048;
          auVar167._20_4_ = __real_00000048;
          auVar167._24_4_ = __real_00000048;
          auVar167._28_4_ = __real_00000048;
          vpor_avx2(auVar240,auVar167);
          auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          auVar149 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar168._4_4_ = __real_00000050;
          auVar168._0_4_ = __real_00000050;
          auVar168._8_4_ = __real_00000050;
          auVar168._12_4_ = __real_00000050;
          auVar168._16_4_ = __real_00000050;
          auVar168._20_4_ = __real_00000050;
          auVar168._24_4_ = __real_00000050;
          auVar168._28_4_ = __real_00000050;
          vpor_avx2(auVar240,auVar168);
          local_280 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
          local_260 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar47);
          auVar169._4_4_ = __real_00000058;
          auVar169._0_4_ = __real_00000058;
          auVar169._8_4_ = __real_00000058;
          auVar169._12_4_ = __real_00000058;
          auVar169._16_4_ = __real_00000058;
          auVar169._20_4_ = __real_00000058;
          auVar169._24_4_ = __real_00000058;
          auVar169._28_4_ = __real_00000058;
          vpor_avx2(auVar240,auVar169);
          local_240 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
          local_220 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
          auVar170._4_4_ = __real_00000060;
          auVar170._0_4_ = __real_00000060;
          auVar170._8_4_ = __real_00000060;
          auVar170._12_4_ = __real_00000060;
          auVar170._16_4_ = __real_00000060;
          auVar170._20_4_ = __real_00000060;
          auVar170._24_4_ = __real_00000060;
          auVar170._28_4_ = __real_00000060;
          vpor_avx2(auVar240,auVar170);
          local_200 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
          local_1e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
          auVar171._4_4_ = __real_00000068;
          auVar171._0_4_ = __real_00000068;
          auVar171._8_4_ = __real_00000068;
          auVar171._12_4_ = __real_00000068;
          auVar171._16_4_ = __real_00000068;
          auVar171._20_4_ = __real_00000068;
          auVar171._24_4_ = __real_00000068;
          auVar171._28_4_ = __real_00000068;
          vpor_avx2(auVar240,auVar171);
          local_1c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          local_1a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar172._4_4_ = __real_00000070;
          auVar172._0_4_ = __real_00000070;
          auVar172._8_4_ = __real_00000070;
          auVar172._12_4_ = __real_00000070;
          auVar172._16_4_ = __real_00000070;
          auVar172._20_4_ = __real_00000070;
          auVar172._24_4_ = __real_00000070;
          auVar172._28_4_ = __real_00000070;
          vpor_avx2(auVar240,auVar172);
          local_180 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
          local_1a80._0_16_ = auVar39;
          local_160 = vgatherdpd(ZEXT832(0),auVar47);
          _local_500 = vgatherdpd(ZEXT832(0),auVar146);
          local_140 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
          local_120 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
          auVar42 = vpacksswb_avx(auVar39,auVar39);
          bVar28 = SUB161(auVar42 >> 7,0) & 1;
          bVar5 = SUB161(auVar42 >> 0xf,0) & 1;
          bVar6 = SUB161(auVar42 >> 0x17,0) & 1;
          bVar7 = SUB161(auVar42 >> 0x1f,0) & 1;
          bVar8 = SUB161(auVar42 >> 0x27,0) & 1;
          bVar9 = SUB161(auVar42 >> 0x2f,0) & 1;
          bVar10 = SUB161(auVar42 >> 0x37,0) & 1;
          bVar11 = SUB161(auVar42 >> 0x3f,0) << 7;
          local_21c0 = auVar44._0_8_;
          uStack_21b8 = auVar44._8_8_;
          uStack_21b0 = auVar44._16_8_;
          uStack_21a8 = auVar44._24_8_;
          adStack_4f0[2] = (double)local_21c0;
          adStack_4f0[3] = (double)uStack_21b8;
          adStack_4f0[4] = (double)uStack_21b0;
          adStack_4f0[5] = (double)uStack_21a8;
          local_21a0._0_8_ = auVar188._0_8_;
          local_21a0._8_8_ = auVar188._8_8_;
          dStack_2190 = auVar188._16_8_;
          dStack_2188 = auVar188._24_8_;
          local_4a0 = local_21a0._0_8_;
          uStack_498 = local_21a0._8_8_;
          uStack_490 = dStack_2190;
          uStack_488 = dStack_2188;
          local_21e0._0_8_ = auVar137._0_8_;
          local_21e0._8_8_ = auVar137._8_8_;
          dStack_21d0 = auVar137._16_8_;
          dStack_21c8 = auVar137._24_8_;
          adStack_4f0[6] = (double)local_21e0._0_8_;
          adStack_4f0[7] = (double)local_21e0._8_8_;
          adStack_4f0[8] = dStack_21d0;
          uStack_4a8 = dStack_21c8;
          local_2160 = auVar159._0_8_;
          uStack_2158 = auVar159._8_8_;
          uStack_2150 = auVar159._16_8_;
          uStack_2148 = auVar159._24_8_;
          local_460 = local_2160;
          uStack_458 = uStack_2158;
          uStack_450 = uStack_2150;
          uStack_448 = uStack_2148;
          local_2180._0_8_ = auVar158._0_8_;
          local_2180._8_8_ = auVar158._8_8_;
          dStack_2170 = auVar158._16_8_;
          dStack_2168 = auVar158._24_8_;
          local_480 = local_2180._0_8_;
          uStack_478 = local_2180._8_8_;
          uStack_470 = dStack_2170;
          uStack_468 = dStack_2168;
          local_2120 = auVar161._0_8_;
          uStack_2118 = auVar161._8_8_;
          uStack_2110 = auVar161._16_8_;
          uStack_2108 = auVar161._24_8_;
          local_420 = local_2120;
          uStack_418 = uStack_2118;
          uStack_410 = uStack_2110;
          uStack_408 = uStack_2108;
          local_2100 = auVar160._0_8_;
          uStack_20f8 = auVar160._8_8_;
          uStack_20f0 = auVar160._16_8_;
          uStack_20e8 = auVar160._24_8_;
          local_440 = local_2100;
          uStack_438 = uStack_20f8;
          uStack_430 = uStack_20f0;
          uStack_428 = uStack_20e8;
          local_2060 = auVar163._0_8_;
          uStack_2058 = auVar163._8_8_;
          uStack_2050 = auVar163._16_8_;
          uStack_2048 = auVar163._24_8_;
          local_3e0 = local_2060;
          uStack_3d8 = uStack_2058;
          uStack_3d0 = uStack_2050;
          uStack_3c8 = uStack_2048;
          local_2140 = auVar162._0_8_;
          uStack_2138 = auVar162._8_8_;
          uStack_2130 = auVar162._16_8_;
          uStack_2128 = auVar162._24_8_;
          local_400 = local_2140;
          uStack_3f8 = uStack_2138;
          uStack_3f0 = uStack_2130;
          uStack_3e8 = uStack_2128;
          local_20a0 = auVar173._0_8_;
          uStack_2098 = auVar173._8_8_;
          uStack_2090 = auVar173._16_8_;
          uStack_2088 = auVar173._24_8_;
          local_3a0 = local_20a0;
          uStack_398 = uStack_2098;
          uStack_390 = uStack_2090;
          uStack_388 = uStack_2088;
          local_2080 = auVar164._0_8_;
          uStack_2078 = auVar164._8_8_;
          uStack_2070 = auVar164._16_8_;
          uStack_2068 = auVar164._24_8_;
          local_3c0 = local_2080;
          uStack_3b8 = uStack_2078;
          uStack_3b0 = uStack_2070;
          uStack_3a8 = uStack_2068;
          local_20e0 = auVar174._0_8_;
          uStack_20d8 = auVar174._8_8_;
          uStack_20d0 = auVar174._16_8_;
          uStack_20c8 = auVar174._24_8_;
          local_360 = local_20e0;
          uStack_358 = uStack_20d8;
          uStack_350 = uStack_20d0;
          uStack_348 = uStack_20c8;
          local_20c0 = auVar165._0_8_;
          uStack_20b8 = auVar165._8_8_;
          uStack_20b0 = auVar165._16_8_;
          uStack_20a8 = auVar165._24_8_;
          local_380 = local_20c0;
          uStack_378 = uStack_20b8;
          uStack_370 = uStack_20b0;
          uStack_368 = uStack_20a8;
          local_2000[0xc] = auVar176._0_8_;
          local_2000[0xd] = auVar176._8_8_;
          local_2000[0xe] = auVar176._16_8_;
          local_2000[0xf] = auVar176._24_8_;
          local_320 = local_2000[0xc];
          uStack_318 = local_2000[0xd];
          uStack_310 = local_2000[0xe];
          uStack_308 = local_2000[0xf];
          local_2000[0x10] = auVar175._0_8_;
          local_2000[0x11] = auVar175._8_8_;
          local_2000[0x12] = auVar175._16_8_;
          local_2000[0x13] = auVar175._24_8_;
          local_340 = local_2000[0x10];
          uStack_338 = local_2000[0x11];
          uStack_330 = local_2000[0x12];
          uStack_328 = local_2000[0x13];
          local_2000[4] = auVar197._0_8_;
          local_2000[5] = auVar197._8_8_;
          local_2000[6] = auVar197._16_8_;
          local_2000[7] = auVar197._24_8_;
          local_2e0 = local_2000[4];
          uStack_2d8 = local_2000[5];
          uStack_2d0 = local_2000[6];
          uStack_2c8 = local_2000[7];
          local_2000[8] = auVar166._0_8_;
          local_2000[9] = auVar166._8_8_;
          local_2000[10] = auVar166._16_8_;
          local_2000[0xb] = auVar166._24_8_;
          local_300 = local_2000[8];
          uStack_2f8 = local_2000[9];
          uStack_2f0 = local_2000[10];
          uStack_2e8 = local_2000[0xb];
          local_1b40._0_8_ = auVar149._0_8_;
          local_1b40._8_8_ = auVar149._8_8_;
          local_1b40._16_8_ = auVar149._16_8_;
          uStack_1b28 = auVar149._24_8_;
          local_2a0 = local_1b40._0_8_;
          uStack_298 = local_1b40._8_8_;
          uStack_290 = local_1b40._16_8_;
          uStack_288 = uStack_1b28;
          local_2000[0] = auVar167._0_8_;
          local_2000[1] = auVar167._8_8_;
          local_2000[2] = auVar167._16_8_;
          local_2000[3] = auVar167._24_8_;
          local_2c0 = local_2000[0];
          uStack_2b8 = local_2000[1];
          uStack_2b0 = local_2000[2];
          uStack_2a8 = local_2000[3];
          dVar1 = param_5[8];
          dVar32 = param_5[0xc];
          dVar33 = *param_5;
          dVar34 = param_5[1];
          lVar31 = 0xc0;
          dVar35 = param_5[5];
          dVar36 = param_5[9];
          dVar71 = param_5[0xd];
          dVar72 = param_5[2];
          dVar73 = param_5[6];
          dVar74 = param_5[10];
          dVar75 = param_5[0xe];
          dVar77 = param_5[3];
          dVar78 = param_5[7];
          dVar79 = param_5[0xb];
          dVar80 = param_5[0xf];
          auVar47 = vpmovsxwd_avx2(auVar39);
          do {
            dVar83 = *(double *)(local_5c0 + lVar31);
            dVar84 = *(double *)(local_5c0 + lVar31 + 8);
            dVar85 = *(double *)(local_5c0 + lVar31 + 0x10);
            dVar86 = *(double *)(local_5c0 + lVar31 + 0x18);
            dVar87 = *(double *)(local_5a0 + lVar31);
            dVar89 = *(double *)(local_5a0 + lVar31 + 8);
            dVar90 = *(double *)(local_5a0 + lVar31 + 0x10);
            dVar91 = *(double *)(local_5a0 + lVar31 + 0x18);
            dVar114 = *(double *)(local_580 + lVar31);
            dVar115 = *(double *)(local_580 + lVar31 + 8);
            dVar116 = *(double *)(local_580 + lVar31 + 0x10);
            dVar117 = *(double *)(local_580 + lVar31 + 0x18);
            dVar118 = *(double *)(local_560 + lVar31);
            dVar119 = *(double *)(local_560 + lVar31 + 8);
            dVar120 = *(double *)(local_560 + lVar31 + 0x10);
            dVar121 = *(double *)(local_560 + lVar31 + 0x18);
            dVar122 = *(double *)(local_540 + lVar31);
            dVar123 = *(double *)(local_540 + lVar31 + 8);
            dVar131 = *(double *)(local_540 + lVar31 + 0x10);
            dVar132 = *(double *)(local_540 + lVar31 + 0x18);
            dVar133 = *(double *)(local_520 + lVar31);
            dVar134 = *(double *)(local_520 + lVar31 + 8);
            dVar142 = *(double *)(local_520 + lVar31 + 0x10);
            dVar143 = *(double *)(local_520 + lVar31 + 0x18);
            dVar144 = *(double *)((longlong)adStack_4f0 + lVar31 + 0x10);
            dVar156 = *(double *)((longlong)adStack_4f0 + lVar31 + 0x18);
            dVar182 = *(double *)((longlong)adStack_4f0 + lVar31 + 0x20);
            dVar183 = *(double *)((longlong)adStack_4f0 + lVar31 + 0x28);
            dVar81 = param_5[4];
            *(double *)((longlong)local_2000 + lVar31 + 0x20) =
                 dVar144 * dVar32 + dVar133 * dVar1 + dVar118 * dVar81 + dVar87 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x28) =
                 dVar156 * dVar32 + dVar134 * dVar1 + dVar119 * dVar81 + dVar89 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x30) =
                 dVar182 * dVar32 + dVar142 * dVar1 + dVar120 * dVar81 + dVar90 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x38) =
                 dVar183 * dVar32 + dVar143 * dVar1 + dVar121 * dVar81 + dVar91 * dVar33 + 0.0;
            dVar184 = *(double *)(local_500 + lVar31);
            dVar225 = *(double *)(local_500 + lVar31 + 8);
            dVar227 = *(double *)(local_500 + lVar31 + 0x10);
            dVar228 = *(double *)(local_500 + lVar31 + 0x18);
            *(double *)((longlong)local_2000 + lVar31) =
                 dVar184 * dVar32 + dVar122 * dVar1 + dVar114 * dVar81 + dVar83 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 8) =
                 dVar225 * dVar32 + dVar123 * dVar1 + dVar115 * dVar81 + dVar84 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x10) =
                 dVar227 * dVar32 + dVar131 * dVar1 + dVar116 * dVar81 + dVar85 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x18) =
                 dVar228 * dVar32 + dVar132 * dVar1 + dVar117 * dVar81 + dVar86 * dVar33 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x60) =
                 dVar144 * dVar71 + dVar133 * dVar36 + dVar118 * dVar35 + dVar87 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x68) =
                 dVar156 * dVar71 + dVar134 * dVar36 + dVar119 * dVar35 + dVar89 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x70) =
                 dVar182 * dVar71 + dVar142 * dVar36 + dVar120 * dVar35 + dVar90 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x78) =
                 dVar183 * dVar71 + dVar143 * dVar36 + dVar121 * dVar35 + dVar91 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x40) =
                 dVar184 * dVar71 + dVar122 * dVar36 + dVar114 * dVar35 + dVar83 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x48) =
                 dVar225 * dVar71 + dVar123 * dVar36 + dVar115 * dVar35 + dVar84 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x50) =
                 dVar227 * dVar71 + dVar131 * dVar36 + dVar116 * dVar35 + dVar85 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x58) =
                 dVar228 * dVar71 + dVar132 * dVar36 + dVar117 * dVar35 + dVar86 * dVar34 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0xa0) =
                 dVar144 * dVar75 + dVar133 * dVar74 + dVar118 * dVar73 + dVar87 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0xa8) =
                 dVar156 * dVar75 + dVar134 * dVar74 + dVar119 * dVar73 + dVar89 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0xb0) =
                 dVar182 * dVar75 + dVar142 * dVar74 + dVar120 * dVar73 + dVar90 * dVar72 + 0.0;
            *(double *)(local_1f40 + lVar31 + -8) =
                 dVar183 * dVar75 + dVar143 * dVar74 + dVar121 * dVar73 + dVar91 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x80) =
                 dVar184 * dVar75 + dVar122 * dVar74 + dVar114 * dVar73 + dVar83 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x88) =
                 dVar225 * dVar75 + dVar123 * dVar74 + dVar115 * dVar73 + dVar84 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x90) =
                 dVar227 * dVar75 + dVar131 * dVar74 + dVar116 * dVar73 + dVar85 * dVar72 + 0.0;
            *(double *)((longlong)local_2000 + lVar31 + 0x98) =
                 dVar228 * dVar75 + dVar132 * dVar74 + dVar117 * dVar73 + dVar86 * dVar72 + 0.0;
            *(double *)(local_1f20 + lVar31) =
                 dVar80 * dVar144 + dVar79 * dVar133 + dVar78 * dVar118 + dVar77 * dVar87 + 0.0;
            *(double *)(local_1f20 + lVar31 + 8) =
                 dVar80 * dVar156 + dVar79 * dVar134 + dVar78 * dVar119 + dVar77 * dVar89 + 0.0;
            *(double *)(local_1f20 + lVar31 + 0x10) =
                 dVar80 * dVar182 + dVar79 * dVar142 + dVar78 * dVar120 + dVar77 * dVar90 + 0.0;
            *(double *)(local_1f20 + lVar31 + 0x18) =
                 dVar80 * dVar183 + dVar79 * dVar143 + dVar78 * dVar121 + dVar77 * dVar91 + 0.0;
            *(double *)(local_1f40 + lVar31) =
                 dVar80 * dVar184 + dVar79 * dVar122 + dVar78 * dVar114 + dVar77 * dVar83 + 0.0;
            *(double *)(local_1f40 + lVar31 + 8) =
                 dVar80 * dVar225 + dVar79 * dVar123 + dVar78 * dVar115 + dVar77 * dVar84 + 0.0;
            *(double *)(local_1f40 + lVar31 + 0x10) =
                 dVar80 * dVar227 + dVar79 * dVar131 + dVar78 * dVar116 + dVar77 * dVar85 + 0.0;
            *(double *)(local_1f40 + lVar31 + 0x18) =
                 dVar80 * dVar228 + dVar79 * dVar132 + dVar78 * dVar117 + dVar77 * dVar86 + 0.0;
            lVar31 = lVar31 + 0x100;
          } while (lVar31 != 0x4c0);
          local_2040 = auVar177._0_8_;
          dStack_2038 = auVar177._8_8_;
          dStack_2030 = auVar177._16_8_;
          dStack_2028 = auVar177._24_8_;
          local_2000[0x14] = auVar179._0_8_;
          local_2000[0x15] = auVar179._8_8_;
          local_2000[0x16] = auVar179._16_8_;
          local_2000[0x17] = auVar179._24_8_;
          local_2020 = auVar178._0_8_;
          dStack_2018 = auVar178._8_8_;
          dStack_2010 = auVar178._16_8_;
          dStack_2008 = auVar178._24_8_;
          dVar32 = __real_3fe0000000000000 * (local_2040 + local_2000[0x14]);
          dVar71 = __real_3fe0000000000000 * (dStack_2038 + local_2000[0x15]);
          dVar77 = __real_3fe0000000000000 * (dStack_2030 + local_2000[0x16]);
          dVar83 = __real_3fe0000000000000 * (dStack_2028 + local_2000[0x17]);
          dVar89 = __real_3fe0000000000000 * (local_2020 + (double)local_1ac0._0_8_);
          dVar114 = __real_3fe0000000000000 * (dStack_2018 + (double)local_1ac0._8_8_);
          dVar117 = __real_3fe0000000000000 * (dStack_2010 + dStack_1ab0);
          dVar120 = __real_3fe0000000000000 * (dStack_2008 + dStack_1aa8);
          dVar33 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
          dVar72 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
          dVar78 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
          dVar84 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
          dVar90 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1ae0._0_8_);
          dVar115 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1ae0._8_8_);
          dVar118 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1ae0._16_8_);
          dVar121 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1ae0._24_8_);
          local_1300 = (double)local_1f00._0_8_;
          dStack_12f8 = (double)local_1f00._8_8_;
          dStack_12f0 = dStack_1ef0;
          dStack_12e8 = dStack_1ee8;
          dVar1 = (double)CONCAT17(uStack_1db9,
                                   CONCAT16(uStack_1dba,
                                            CONCAT15(uStack_1dbb,
                                                     CONCAT14(uStack_1dbc,
                                                              CONCAT13(uStack_1dbd,
                                                                       CONCAT12(uStack_1dbe,
                                                                                CONCAT11(uStack_1dbf
                                                                                         ,local_1dc0
                                                                                        )))))));
          local_1320 = (double)local_1ec0._0_8_;
          dStack_1318 = (double)local_1ec0._8_8_;
          dStack_1310 = dStack_1eb0;
          dStack_1308 = dStack_1ea8;
          dVar34 = __real_3fe0000000000000 * (local_19e0._0_8_ + local_1b00._0_8_);
          dVar73 = __real_3fe0000000000000 * (local_19e0._8_8_ + local_1b00._8_8_);
          dVar79 = __real_3fe0000000000000 * (local_19e0._16_8_ + local_1b00._16_8_);
          dVar85 = __real_3fe0000000000000 * (local_19e0._24_8_ + local_1b00._24_8_);
          dVar35 = __real_3fe0000000000000 * (local_1a00._0_8_ + local_1b20._0_8_);
          dVar74 = __real_3fe0000000000000 * (local_1a00._8_8_ + local_1b20._8_8_);
          dVar80 = __real_3fe0000000000000 * (local_1a00._16_8_ + local_1b20._16_8_);
          dVar86 = __real_3fe0000000000000 * (local_1a00._24_8_ + local_1b20._24_8_);
          auVar146 = vsubpd_avx(local_1a20,local_19a0);
          auVar44 = vsubpd_avx(auVar179,auVar177);
          auVar137 = vsubpd_avx(local_1ae0,local_19c0);
          auVar188 = vsubpd_avx(_local_1ac0,auVar178);
          auVar158 = vsubpd_avx(local_1b20,local_1a00);
          auVar159 = vsubpd_avx(local_1b00,local_19e0);
          dVar36 = __real_3fe0000000000000 * auVar44._0_8_;
          dVar75 = __real_3fe0000000000000 * auVar44._8_8_;
          dVar81 = __real_3fe0000000000000 * auVar44._16_8_;
          dVar87 = __real_3fe0000000000000 * auVar44._24_8_;
          dVar134 = __real_3fe0000000000000 * auVar146._0_8_;
          dVar142 = __real_3fe0000000000000 * auVar146._8_8_;
          dVar143 = __real_3fe0000000000000 * auVar146._16_8_;
          dVar144 = __real_3fe0000000000000 * auVar146._24_8_;
          dVar123 = auVar188._0_8_ * __real_3fe0000000000000;
          dVar131 = auVar188._8_8_ * __real_3fe0000000000000;
          dVar132 = auVar188._16_8_ * __real_3fe0000000000000;
          dVar133 = auVar188._24_8_ * __real_3fe0000000000000;
          dVar91 = __real_3fe0000000000000 * auVar137._0_8_;
          dVar116 = __real_3fe0000000000000 * auVar137._8_8_;
          dVar119 = __real_3fe0000000000000 * auVar137._16_8_;
          dVar122 = __real_3fe0000000000000 * auVar137._24_8_;
          dVar156 = __real_3fe0000000000000 * auVar159._0_8_;
          dVar182 = __real_3fe0000000000000 * auVar159._8_8_;
          dVar183 = __real_3fe0000000000000 * auVar159._16_8_;
          dVar184 = __real_3fe0000000000000 * auVar159._24_8_;
          dVar225 = __real_3fe0000000000000 * auVar158._0_8_;
          dVar227 = __real_3fe0000000000000 * auVar158._8_8_;
          dVar228 = __real_3fe0000000000000 * auVar158._16_8_;
          dVar229 = __real_3fe0000000000000 * auVar158._24_8_;
          auVar176._0_8_ =
               dVar35 * local_1d20 + dVar32 * (double)local_1f20 + dVar89 * (double)local_1e20._0_8_
               + local_1c20;
          auVar176._8_8_ =
               dVar74 * dStack_1d18 + dVar71 * adStack_1f18[0] + dVar114 * (double)local_1e20._8_8_
               + dStack_1c18;
          auVar176._16_8_ =
               dVar80 * dStack_1d10 + dVar77 * adStack_1f18[1] + dVar117 * dStack_1e10 + dStack_1c10
          ;
          auVar176._24_8_ =
               dVar86 * dStack_1d08 + dVar83 * adStack_1f18[2] + dVar120 * dStack_1e08 + dStack_1c08
          ;
          auVar240._0_8_ =
               dVar34 * local_1d40 + dVar33 * (double)local_1f40 + dVar90 * (double)local_1e40._0_8_
               + local_1c40;
          auVar240._8_8_ =
               dVar73 * dStack_1d38 + dVar72 * adStack_1f38[0] + dVar115 * (double)local_1e40._8_8_
               + dStack_1c38;
          auVar240._16_8_ =
               dVar79 * dStack_1d30 + dVar78 * adStack_1f38[1] + dVar118 * dStack_1e30 + dStack_1c30
          ;
          auVar240._24_8_ =
               dVar85 * dStack_1d28 + dVar84 * adStack_1f38[2] + dVar121 * dStack_1e28 + dStack_1c28
          ;
          auVar237._0_8_ =
               dVar35 * local_1ce0 +
               dVar32 * (double)local_1ee0._0_8_ + dVar89 * (double)local_1de0._0_8_ + local_1be0;
          auVar237._8_8_ =
               dVar74 * dStack_1cd8 +
               dVar71 * (double)local_1ee0._8_8_ + dVar114 * (double)local_1de0._8_8_ + dStack_1bd8;
          auVar237._16_8_ =
               dVar80 * dStack_1cd0 + dVar77 * dStack_1ed0 + dVar117 * dStack_1dd0 + dStack_1bd0;
          auVar237._24_8_ =
               dVar86 * dStack_1cc8 + dVar83 * dStack_1ec8 + dVar120 * dStack_1dc8 + dStack_1bc8;
          auVar173._0_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar134 * (double)local_1f40)) +
               (double)((ulonglong)(dVar91 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar156 * local_1d40) & __real_7fffffffffffffff);
          auVar173._8_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar142 * adStack_1f38[0])) +
               (double)((ulonglong)(dVar116 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar182 * dStack_1d38) & __real_7fffffffffffffff);
          auVar173._16_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar143 * adStack_1f38[1])) +
               (double)((ulonglong)(dVar119 * dStack_1e30) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar183 * dStack_1d30) & __real_7fffffffffffffff);
          auVar173._24_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar144 * adStack_1f38[2])) +
               (double)((ulonglong)(dVar122 * dStack_1e28) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar184 * dStack_1d28) & __real_7fffffffffffffff);
          auVar197._0_8_ =
               dVar34 * local_1d00 +
               dVar33 * (double)local_1f00._0_8_ + dVar90 * (double)local_1e00._0_8_ + local_1c00;
          auVar197._8_8_ =
               dVar73 * dStack_1cf8 +
               dVar72 * (double)local_1f00._8_8_ + dVar115 * (double)local_1e00._8_8_ + dStack_1bf8;
          auVar197._16_8_ =
               dVar79 * dStack_1cf0 + dVar78 * dStack_1ef0 + dVar118 * dStack_1df0 + dStack_1bf0;
          auVar197._24_8_ =
               dVar85 * dStack_1ce8 + dVar84 * dStack_1ee8 + dVar121 * dStack_1de8 + dStack_1be8;
          auVar178._0_8_ =
               (double)((ulonglong)(dVar225 * local_1d20) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar36 * (double)local_1f20) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar123 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
          auVar178._8_8_ =
               (double)((ulonglong)(dVar227 * dStack_1d18) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar75 * adStack_1f18[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar131 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
          auVar178._16_8_ =
               (double)((ulonglong)(dVar228 * dStack_1d10) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar81 * adStack_1f18[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar132 * dStack_1e10) & __real_7fffffffffffffff);
          auVar178._24_8_ =
               (double)((ulonglong)(dVar229 * dStack_1d08) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar87 * adStack_1f18[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar133 * dStack_1e08) & __real_7fffffffffffffff);
          auVar219._0_8_ =
               local_1ca0 * dVar35 + (double)local_1ea0._0_8_ * dVar32 + dVar89 * local_1da0 +
               local_1ba0;
          auVar219._8_8_ =
               dStack_1c98 * dVar74 + (double)local_1ea0._8_8_ * dVar71 + dVar114 * dStack_1d98 +
               dStack_1b98;
          auVar219._16_8_ =
               dStack_1c90 * dVar80 + dStack_1e90 * dVar77 + dVar117 * dStack_1d90 + dStack_1b90;
          auVar219._24_8_ =
               dStack_1c88 * dVar86 + dStack_1e88 * dVar83 + dVar120 * dStack_1d88 + dStack_1b88;
          auVar175._0_8_ =
               (double)((ulonglong)(dVar134 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar91 * (double)local_1e00._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar156 * local_1d00) & __real_7fffffffffffffff);
          auVar175._8_8_ =
               (double)((ulonglong)(dVar142 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar116 * (double)local_1e00._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar182 * dStack_1cf8) & __real_7fffffffffffffff);
          auVar175._16_8_ =
               (double)((ulonglong)(dVar143 * dStack_1ef0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar119 * dStack_1df0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar183 * dStack_1cf0) & __real_7fffffffffffffff);
          auVar175._24_8_ =
               (double)((ulonglong)(dVar144 * dStack_1ee8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar122 * dStack_1de8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar184 * dStack_1ce8) & __real_7fffffffffffffff);
          auVar177._0_8_ =
               local_1cc0 * dVar34 + (double)local_1ec0._0_8_ * dVar33 + dVar90 * dVar1 + local_1bc0
          ;
          auVar177._8_8_ =
               dStack_1cb8 * dVar73 + (double)local_1ec0._8_8_ * dVar72 + dVar115 * dStack_1db8 +
               dStack_1bb8;
          auVar177._16_8_ =
               dStack_1cb0 * dVar79 + dStack_1eb0 * dVar78 + dVar118 * dStack_1db0 + dStack_1bb0;
          auVar177._24_8_ =
               dStack_1ca8 * dVar85 + dStack_1ea8 * dVar84 + dVar121 * dStack_1da8 + dStack_1ba8;
          auVar203._0_8_ =
               (double)((ulonglong)(dVar225 * local_1ce0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar36 * (double)local_1ee0._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar123 * (double)local_1de0._0_8_) & __real_7fffffffffffffff);
          auVar203._8_8_ =
               (double)((ulonglong)(dVar227 * dStack_1cd8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar75 * (double)local_1ee0._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar131 * (double)local_1de0._8_8_) & __real_7fffffffffffffff);
          auVar203._16_8_ =
               (double)((ulonglong)(dVar228 * dStack_1cd0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar81 * dStack_1ed0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar132 * dStack_1dd0) & __real_7fffffffffffffff);
          auVar203._24_8_ =
               (double)((ulonglong)(dVar229 * dStack_1cc8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar87 * dStack_1ec8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar133 * dStack_1dc8) & __real_7fffffffffffffff);
          auVar212._0_8_ =
               (double)((ulonglong)(dVar134 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar91 * dVar1) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar156 * local_1cc0) & __real_7fffffffffffffff);
          auVar212._8_8_ =
               (double)((ulonglong)(dVar142 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar116 * dStack_1db8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar182 * dStack_1cb8) & __real_7fffffffffffffff);
          auVar212._16_8_ =
               (double)((ulonglong)(dVar143 * dStack_1eb0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar119 * dStack_1db0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar183 * dStack_1cb0) & __real_7fffffffffffffff);
          auVar212._24_8_ =
               (double)((ulonglong)(dVar144 * dStack_1ea8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar122 * dStack_1da8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar184 * dStack_1ca8) & __real_7fffffffffffffff);
          auVar174._0_8_ =
               (double)((ulonglong)(dVar225 * local_1ca0) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar36 * (double)local_1ea0._0_8_)) +
               (double)((ulonglong)(dVar123 * local_1da0) & __real_7fffffffffffffff);
          auVar174._8_8_ =
               (double)((ulonglong)(dVar227 * dStack_1c98) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1ea0._8_8_)) +
               (double)((ulonglong)(dVar131 * dStack_1d98) & __real_7fffffffffffffff);
          auVar174._16_8_ =
               (double)((ulonglong)(dVar228 * dStack_1c90) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar81 * dStack_1e90)) +
               (double)((ulonglong)(dVar132 * dStack_1d90) & __real_7fffffffffffffff);
          auVar174._24_8_ =
               (double)((ulonglong)(dVar229 * dStack_1c88) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar87 * dStack_1e88)) +
               (double)((ulonglong)(dVar133 * dStack_1d88) & __real_7fffffffffffffff);
          auVar146 = vsubpd_avx(auVar240,auVar173);
          auVar44 = vsubpd_avx(auVar176,auVar178);
          auVar137 = vsubpd_avx(auVar197,auVar175);
          auVar188 = vsubpd_avx(auVar237,auVar203);
          local_2180._8_8_ = auVar240._8_8_ + auVar173._8_8_;
          local_2180._0_8_ = auVar240._0_8_ + auVar173._0_8_;
          dStack_2170 = auVar240._16_8_ + auVar173._16_8_;
          dStack_2168 = auVar240._24_8_ + auVar173._24_8_;
          auVar158 = vsubpd_avx(auVar177,auVar212);
          local_21a0._8_8_ = auVar178._8_8_ + auVar176._8_8_;
          local_21a0._0_8_ = auVar178._0_8_ + auVar176._0_8_;
          dStack_2190 = auVar178._16_8_ + auVar176._16_8_;
          dStack_2188 = auVar178._24_8_ + auVar176._24_8_;
          auVar159 = vsubpd_avx(auVar219,auVar174);
          auVar196._0_8_ = auVar175._0_8_ + auVar197._0_8_;
          auVar196._8_8_ = auVar175._8_8_ + auVar197._8_8_;
          auVar196._16_8_ = auVar175._16_8_ + auVar197._16_8_;
          auVar196._24_8_ = auVar175._24_8_ + auVar197._24_8_;
          auVar149._0_8_ = auVar203._0_8_ + auVar237._0_8_;
          auVar149._8_8_ = auVar203._8_8_ + auVar237._8_8_;
          auVar149._16_8_ = auVar203._16_8_ + auVar237._16_8_;
          auVar149._24_8_ = auVar203._24_8_ + auVar237._24_8_;
          auVar179._0_8_ = auVar212._0_8_ + auVar177._0_8_;
          auVar179._8_8_ = auVar212._8_8_ + auVar177._8_8_;
          auVar179._16_8_ = auVar212._16_8_ + auVar177._16_8_;
          auVar179._24_8_ = auVar212._24_8_ + auVar177._24_8_;
          auVar220._0_8_ = auVar219._0_8_ + auVar174._0_8_;
          auVar220._8_8_ = auVar219._8_8_ + auVar174._8_8_;
          auVar220._16_8_ = auVar219._16_8_ + auVar174._16_8_;
          auVar220._24_8_ = auVar219._24_8_ + auVar174._24_8_;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = local_1800;
          auVar42 = vpcmpeqb_avx(auVar42,ZEXT816(0) << 0x40);
          auVar161 = vpmovsxbd_avx2(auVar42 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          auVar160 = vpand_avx2(auVar47,auVar161);
          iVar30 = vmovmskps_avx(auVar160);
          if (iVar30 == 0) {
            auVar160 = ZEXT832(0) << 0x20;
LAB_140a49c20:
            auVar39 = vpmovzxbw_avx(auVar42);
            auVar42 = vpand_avx(auVar39,local_1a80._0_16_);
            auVar42 = vpshufb_avx(auVar42,___xmm_00000000000000000e0c0a0806040200);
            if ((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
              auVar161 = vpmovzxwd_avx2(auVar39);
              auVar161 = vpslld_avx2(auVar161,0x1f);
              auVar162 = vpsrad_avx2(auVar161,0x1f);
              auVar161 = auVar47 & auVar162;
              if ((((((((SUB321(auVar161 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar161 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar161 >> 0x5f,0) & 1) != 0) || SUB321(auVar161 >> 0x7f,0) != '\0')
                    || (SUB321(auVar161 >> 0x9f,0) & 1) != 0) || SUB321(auVar161 >> 0xbf,0) != '\0')
                  || (SUB321(auVar161 >> 0xdf,0) & 1) != 0) || auVar161[0x1f] < '\0') {
                auVar163 = vpermpd_avx2(auVar162,0xd8);
                auVar161 = vshufps_avx(auVar163,auVar163,0x50);
                auVar163 = vshufps_avx(auVar163,auVar163,0xfa);
                _local_1f40 = vmaskmovpd_avx(auVar161,auVar146);
                _local_1f20 = vmaskmovpd_avx(auVar163,auVar44);
                _local_1f00 = vmaskmovpd_avx(auVar161,auVar137);
                _local_1ee0 = vmaskmovpd_avx(auVar163,auVar188);
                _local_1ec0 = vmaskmovpd_avx(auVar161,auVar158);
                _local_1ea0 = vmaskmovpd_avx(auVar163,auVar159);
                local_1e80 = vmaskmovpd_avx(auVar161,_local_2180);
                local_1e60 = vmaskmovpd_avx(auVar163,_local_21a0);
                _local_1e40 = vmaskmovpd_avx(auVar161,auVar196);
                _local_1e20 = vmaskmovpd_avx(auVar163,auVar149);
                _local_1e00 = vmaskmovpd_avx(auVar161,auVar179);
                _local_1de0 = vmaskmovpd_avx(auVar163,auVar220);
                auVar42 = vpsllw_avx(auVar39,0xf);
                auVar42 = vpacksswb_avx(auVar42,auVar42);
                if ((SUB161(auVar42 >> 7,0) & 1) != 0) {
                  local_1dc0 = 1;
                }
                if ((SUB161(auVar42 >> 0xf,0) & 1) != 0) {
                  uStack_1dbf = 1;
                }
                if ((SUB161(auVar42 >> 0x17,0) & 1) != 0) {
                  uStack_1dbe = 1;
                }
                if ((SUB161(auVar42 >> 0x1f,0) & 1) != 0) {
                  uStack_1dbd = 1;
                }
                if ((SUB161(auVar42 >> 0x27,0) & 1) != 0) {
                  uStack_1dbc = 1;
                }
                if ((SUB161(auVar42 >> 0x2f,0) & 1) != 0) {
                  uStack_1dbb = 1;
                }
                if ((SUB161(auVar42 >> 0x37,0) & 1) != 0) {
                  uStack_1dba = 1;
                }
                if ((SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
                  uStack_1db9 = 1;
                }
                auVar48._0_4_ = auVar47._0_4_ & auVar162._0_4_;
                auVar48._4_4_ = auVar47._4_4_ & auVar162._4_4_;
                auVar48._8_4_ = auVar47._8_4_ & auVar162._8_4_;
                auVar48._12_4_ = auVar47._12_4_ & auVar162._12_4_;
                auVar48._16_4_ = auVar47._16_4_ & auVar162._16_4_;
                auVar48._20_4_ = auVar47._20_4_ & auVar162._20_4_;
                auVar48._24_4_ = auVar47._24_4_ & auVar162._24_4_;
                auVar48._28_4_ = auVar47._28_4_ & auVar162._28_4_;
                vmovmskps_avx(auVar160 | auVar48);
              }
            }
          }
          else {
            auVar162 = vminpd_avx(local_1980,auVar146);
            auVar164 = vpermq_avx2(auVar161,0xd8);
            auVar163 = vpshufd_avx2(auVar164,0x50);
            _local_1f40 = vmaskmovpd_avx(auVar163,auVar162);
            auVar161 = vminpd_avx(local_1960,auVar44);
            auVar162 = vpshufd_avx2(auVar164,0xfa);
            _local_1f20 = vmaskmovpd_avx(auVar162,auVar161);
            auVar161 = vminpd_avx(local_1940,auVar137);
            _local_1f00 = vmaskmovpd_avx(auVar163,auVar161);
            auVar161 = vminpd_avx(local_1920,auVar188);
            _local_1ee0 = vmaskmovpd_avx(auVar162,auVar161);
            auVar161 = vminpd_avx(local_1900,auVar158);
            _local_1ec0 = vmaskmovpd_avx(auVar163,auVar161);
            auVar161 = vminpd_avx(local_18e0,auVar159);
            _local_1ea0 = vmaskmovpd_avx(auVar162,auVar161);
            auVar161 = vmaxpd_avx(local_18c0,_local_2180);
            local_1e80 = vmaskmovpd_avx(auVar163,auVar161);
            auVar161 = vmaxpd_avx(local_18a0,_local_21a0);
            local_1e60 = vmaskmovpd_avx(auVar162,auVar161);
            auVar161 = vmaxpd_avx(local_1880,auVar196);
            _local_1e40 = vmaskmovpd_avx(auVar163,auVar161);
            auVar161 = vmaxpd_avx(local_1860,auVar149);
            _local_1e20 = vmaskmovpd_avx(auVar162,auVar161);
            auVar161 = vmaxpd_avx(local_1840,auVar179);
            _local_1e00 = vmaskmovpd_avx(auVar163,auVar161);
            auVar161 = vmaxpd_avx(local_1820,auVar220);
            _local_1de0 = vmaskmovpd_avx(auVar162,auVar161);
            auVar39._8_8_ = local_1800;
            auVar39._0_8_ = local_1800;
            auVar39 = vpcmpeqb_avx(auVar39,ZEXT816(0) << 0x40);
            bVar23 = ~(SUB161(auVar39 >> 7,0) & 1 | (SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar39 >> 0x17,0) & 1) << 2 | (SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar39 >> 0x27,0) & 1) << 4 | (SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar39 >> 0x37,0) & 1) << 6);
            if ((bVar23 & 1) != 0) {
              local_1dc0 = (undefined1)local_1800;
            }
            if ((bVar23 & 2) != 0) {
              uStack_1dbf = (undefined1)(local_1800 >> 8);
            }
            if ((bVar23 & 4) != 0) {
              uStack_1dbe = (undefined1)(local_1800 >> 0x10);
            }
            if ((bVar23 & 8) != 0) {
              uStack_1dbd = (undefined1)(local_1800 >> 0x18);
            }
            if ((bVar23 & 0x10) != 0) {
              uStack_1dbc = (undefined1)(local_1800 >> 0x20);
            }
            if ((bVar23 & 0x20) != 0) {
              uStack_1dbb = (undefined1)(local_1800 >> 0x28);
            }
            if ((bVar23 & 0x40) != 0) {
              uStack_1dba = (undefined1)(local_1800 >> 0x30);
            }
            if ((SUB161(auVar39 >> 0x3f,0) & 1) == 0) {
              uStack_1db9 = (undefined1)(local_1800 >> 0x38);
            }
            if ((byte)(bVar28 | bVar5 << 1 | bVar6 << 2 | bVar7 << 3 | bVar8 << 4 | bVar9 << 5 |
                       bVar10 << 6 | bVar11) != (byte)iVar30) goto LAB_140a49c20;
          }
          in_ZMM6 = ZEXT3264(local_1e80);
          auVar146 = vpermpd_avx2(auVar47,0xd8);
          auVar47 = vshufps_avx(auVar146,auVar146,0x50);
          auVar146 = vshufps_avx(auVar146,auVar146,0xfa);
          local_1980 = vmaskmovpd_avx(auVar47,_local_1f40);
          local_1960 = vmaskmovpd_avx(auVar146,_local_1f20);
          local_1940 = vmaskmovpd_avx(auVar47,_local_1f00);
          local_1920 = vmaskmovpd_avx(auVar146,_local_1ee0);
          local_1900 = vmaskmovpd_avx(auVar47,_local_1ec0);
          local_18e0 = vmaskmovpd_avx(auVar146,_local_1ea0);
          local_18c0 = vmaskmovpd_avx(auVar47,local_1e80);
          local_18a0 = vmaskmovpd_avx(auVar146,local_1e60);
          local_1880 = vmaskmovpd_avx(auVar47,_local_1e40);
          local_1860 = vmaskmovpd_avx(auVar146,_local_1e20);
          local_1840 = vmaskmovpd_avx(auVar47,_local_1e00);
          local_1820 = vmaskmovpd_avx(auVar146,_local_1de0);
          uVar25 = local_1800;
          if (bVar28 != 0) {
            local_1800 = CONCAT71(local_1800._1_7_,local_1dc0);
            uVar25 = local_1800;
          }
          auVar209 = ZEXT864(0) << 0x40;
          if (bVar5 != 0) {
            local_1800._2_6_ = (undefined6)(uVar25 >> 0x10);
            local_1800._0_1_ = (undefined1)uVar25;
            local_1800._0_2_ = CONCAT11(uStack_1dbf,(undefined1)local_1800);
            uVar25 = local_1800;
          }
          if (bVar6 != 0) {
            local_1800._3_5_ = (undefined5)(uVar25 >> 0x18);
            local_1800._0_2_ = (undefined2)uVar25;
            local_1800._0_3_ = CONCAT12(uStack_1dbe,(undefined2)local_1800);
            uVar25 = local_1800;
          }
          if (bVar7 != 0) {
            local_1800._4_4_ = (undefined4)(uVar25 >> 0x20);
            local_1800._0_3_ = (undefined3)uVar25;
            local_1800._0_4_ = CONCAT13(uStack_1dbd,(undefined3)local_1800);
            uVar25 = local_1800;
          }
          if (bVar8 != 0) {
            local_1800._5_3_ = (undefined3)(uVar25 >> 0x28);
            local_1800._0_4_ = (undefined4)uVar25;
            local_1800._0_5_ = CONCAT14(uStack_1dbc,(undefined4)local_1800);
            uVar25 = local_1800;
          }
          if (bVar9 != 0) {
            local_1800._6_2_ = (undefined2)(uVar25 >> 0x30);
            local_1800._0_5_ = (undefined5)uVar25;
            local_1800._0_6_ = CONCAT15(uStack_1dbb,(undefined5)local_1800);
            uVar25 = local_1800;
          }
          local_1800 = uVar25;
          if (bVar10 != 0) {
            local_1800._7_1_ = (undefined1)(uVar25 >> 0x38);
            local_1800._0_6_ = (undefined6)uVar25;
            local_1800._0_7_ = CONCAT16(uStack_1dba,(undefined6)local_1800);
          }
          auVar200 = ZEXT3264(local_1360);
          if (bVar11 != 0) {
            local_1800 = CONCAT17(uStack_1db9,(undefined7)local_1800);
          }
        }
        iVar27 = iVar27 + 8;
      } while (iVar27 < (int)uVar22);
    }
    if ((int)param_7 <= iVar27) {
      local_1a60._4_4_ = param_7;
      local_1a60._0_4_ = param_7;
      local_1a60._8_4_ = param_7;
      local_1a60._12_4_ = param_7;
      local_1a60._16_4_ = param_7;
      local_1a60._20_4_ = param_7;
      local_1a60._24_4_ = param_7;
      local_1a60._28_4_ = param_7;
      goto LAB_140a4d504;
    }
    auVar59._4_4_ = iVar27;
    auVar59._0_4_ = iVar27;
    auVar59._8_4_ = iVar27;
    auVar59._12_4_ = iVar27;
    auVar59._16_4_ = iVar27;
    auVar59._20_4_ = iVar27;
    auVar59._24_4_ = iVar27;
    auVar59._28_4_ = iVar27;
    auVar137 = vpor_avx2(auVar59,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar206._4_4_ = param_7;
    auVar206._0_4_ = param_7;
    auVar206._8_4_ = param_7;
    auVar206._12_4_ = param_7;
    auVar206._16_4_ = param_7;
    auVar206._20_4_ = param_7;
    auVar206._24_4_ = param_7;
    auVar206._28_4_ = param_7;
    local_1a40 = vpcmpgtd_avx2(auVar206,auVar137);
    auVar47 = vmaskmovps_avx(local_1a40,
                             *(undefined1 (*) [32])(local_1a60._0_8_ + (longlong)(iVar27 << 2)));
    auVar232._4_4_ = __real_00000038;
    auVar232._0_4_ = __real_00000038;
    auVar232._8_4_ = __real_00000038;
    auVar232._12_4_ = __real_00000038;
    auVar232._16_4_ = __real_00000038;
    auVar232._20_4_ = __real_00000038;
    auVar232._24_4_ = __real_00000038;
    auVar232._28_4_ = __real_00000038;
    auVar146 = vpmulld_avx2(auVar137,auVar232);
    auVar152._4_4_ = __real_00000030;
    auVar152._0_4_ = __real_00000030;
    auVar152._8_4_ = __real_00000030;
    auVar152._12_4_ = __real_00000030;
    auVar152._16_4_ = __real_00000030;
    auVar152._20_4_ = __real_00000030;
    auVar152._24_4_ = __real_00000030;
    auVar152._28_4_ = __real_00000030;
    auVar13._0_4_ = auVar146._0_4_ + __real_00000030;
    auVar13._4_4_ = auVar146._4_4_ + __real_00000030;
    auVar13._8_4_ = auVar146._8_4_ + __real_00000030;
    auVar13._12_4_ = auVar146._12_4_ + __real_00000030;
    auVar13._16_4_ = auVar146._16_4_ + __real_00000030;
    auVar13._20_4_ = auVar146._20_4_ + __real_00000030;
    auVar13._24_4_ = auVar146._24_4_ + __real_00000030;
    auVar13._28_4_ = auVar146._28_4_ + __real_00000030;
    auVar146 = vpand_avx2(local_1a40,auVar13);
    auVar42 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + auVar146._0_4_)),
                          (uint)*(byte *)(param_4 + auVar146._4_4_),1);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._8_4_),2);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._12_4_),3);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._16_4_),4);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._20_4_),5);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._24_4_),6);
    auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._28_4_),7);
    auVar146 = vpslld_avx2(auVar47,2);
    auVar44 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),local_1a40);
    auVar146 = vpcmpeqd_avx2(auVar146,auVar146);
    auVar44 = vpcmpeqd_avx2(auVar44,auVar146);
    auVar42 = vpcmpeqb_avx(auVar42,(undefined1  [16])0x0);
    auVar39 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
    auVar146 = vpmovsxbd_avx2(auVar42 ^ auVar39);
    auVar146 = vpandn_avx2(auVar44,auVar146);
    local_1aa0 = vpand_avx2(local_1a40,auVar146);
    uVar26 = vmovmskps_avx(local_1aa0);
    local_1a60 = auVar206;
    if (uVar26 == 0) goto LAB_140a4d504;
    auVar146 = vpslld_avx2(auVar137,3);
    vpsubd_avx2(auVar146,auVar137);
    auVar146 = vpmovsxdq_avx2(local_1a40._0_16_);
    local_17a0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
    auVar137 = vpmovsxdq_avx2(local_1a40._16_16_);
    auVar149 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar137);
    auVar108._4_4_ = __real_00000008;
    auVar108._0_4_ = __real_00000008;
    auVar108._8_4_ = __real_00000008;
    auVar108._12_4_ = __real_00000008;
    auVar108._16_4_ = __real_00000008;
    auVar108._20_4_ = __real_00000008;
    auVar108._24_4_ = __real_00000008;
    auVar108._28_4_ = __real_00000008;
    local_1a80 = vgatherdpd(ZEXT832(0) << 0x20,auVar146);
    auVar177 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
    auVar223._4_4_ = __real_00000010;
    auVar223._0_4_ = __real_00000010;
    auVar223._8_4_ = __real_00000010;
    auVar223._12_4_ = __real_00000010;
    auVar223._16_4_ = __real_00000010;
    auVar223._20_4_ = __real_00000010;
    auVar223._24_4_ = __real_00000010;
    auVar223._28_4_ = __real_00000010;
    auVar188 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    local_19a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
    auVar191._4_4_ = __real_00000018;
    auVar191._0_4_ = __real_00000018;
    auVar191._8_4_ = __real_00000018;
    auVar191._12_4_ = __real_00000018;
    auVar191._16_4_ = __real_00000018;
    auVar191._20_4_ = __real_00000018;
    auVar191._24_4_ = __real_00000018;
    auVar191._28_4_ = __real_00000018;
    local_19c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar158 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
    auVar199._4_4_ = __real_00000020;
    auVar199._0_4_ = __real_00000020;
    auVar199._8_4_ = __real_00000020;
    auVar199._12_4_ = __real_00000020;
    auVar199._16_4_ = __real_00000020;
    auVar199._20_4_ = __real_00000020;
    auVar199._24_4_ = __real_00000020;
    auVar199._28_4_ = __real_00000020;
    local_19e0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    _local_1ac0 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
    auVar215._4_4_ = __real_00000028;
    auVar215._0_4_ = __real_00000028;
    auVar215._8_4_ = __real_00000028;
    auVar215._12_4_ = __real_00000028;
    auVar215._16_4_ = __real_00000028;
    auVar215._20_4_ = __real_00000028;
    auVar215._24_4_ = __real_00000028;
    auVar215._28_4_ = __real_00000028;
    local_1a00 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    local_1a20 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
    auVar197 = vpslld_avx2(auVar47,7);
    auVar47 = vpmovsxdq_avx2(local_1aa0._16_16_);
    auVar166 = vgatherdpd(ZEXT832(0),auVar47);
    vpor_avx2(auVar197,auVar108);
    auVar146 = vpmovsxdq_avx2(local_1aa0._0_16_);
    auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar168 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar223,auVar197);
    auVar169 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar170 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar197,auVar191);
    auVar171 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar172 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar199,auVar197);
    auVar173 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar174 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar215,auVar197);
    auVar175 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar176 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar197,auVar152);
    auVar137 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
    auVar159 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    vpor_avx2(auVar232,auVar197);
    auVar160 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar161 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    auVar60._4_4_ = __real_00000040;
    auVar60._0_4_ = __real_00000040;
    auVar60._8_4_ = __real_00000040;
    auVar60._12_4_ = __real_00000040;
    auVar60._16_4_ = __real_00000040;
    auVar60._20_4_ = __real_00000040;
    auVar60._24_4_ = __real_00000040;
    auVar60._28_4_ = __real_00000040;
    vpor_avx2(auVar197,auVar60);
    auVar162 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar163 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    auVar61._4_4_ = __real_00000048;
    auVar61._0_4_ = __real_00000048;
    auVar61._8_4_ = __real_00000048;
    auVar61._12_4_ = __real_00000048;
    auVar61._16_4_ = __real_00000048;
    auVar61._20_4_ = __real_00000048;
    auVar61._24_4_ = __real_00000048;
    auVar61._28_4_ = __real_00000048;
    vpor_avx2(auVar197,auVar61);
    auVar164 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    auVar62._4_4_ = __real_00000050;
    auVar62._0_4_ = __real_00000050;
    auVar62._8_4_ = __real_00000050;
    auVar62._12_4_ = __real_00000050;
    auVar62._16_4_ = __real_00000050;
    auVar62._20_4_ = __real_00000050;
    auVar62._24_4_ = __real_00000050;
    auVar62._28_4_ = __real_00000050;
    vpor_avx2(auVar197,auVar62);
    local_680 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
    local_660 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar47);
    auVar63._4_4_ = __real_00000058;
    auVar63._0_4_ = __real_00000058;
    auVar63._8_4_ = __real_00000058;
    auVar63._12_4_ = __real_00000058;
    auVar63._16_4_ = __real_00000058;
    auVar63._20_4_ = __real_00000058;
    auVar63._24_4_ = __real_00000058;
    auVar63._28_4_ = __real_00000058;
    vpor_avx2(auVar197,auVar63);
    local_640 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
    local_620 = vgatherdpd(ZEXT832(0) << 0x20,auVar47);
    auVar64._4_4_ = __real_00000060;
    auVar64._0_4_ = __real_00000060;
    auVar64._8_4_ = __real_00000060;
    auVar64._12_4_ = __real_00000060;
    auVar64._16_4_ = __real_00000060;
    auVar64._20_4_ = __real_00000060;
    auVar64._24_4_ = __real_00000060;
    auVar64._28_4_ = __real_00000060;
    vpor_avx2(auVar197,auVar64);
    local_600 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
    local_5e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    auVar65._4_4_ = __real_00000068;
    auVar65._0_4_ = __real_00000068;
    auVar65._8_4_ = __real_00000068;
    auVar65._12_4_ = __real_00000068;
    auVar65._16_4_ = __real_00000068;
    auVar65._20_4_ = __real_00000068;
    auVar65._24_4_ = __real_00000068;
    auVar65._28_4_ = __real_00000068;
    vpor_avx2(auVar197,auVar65);
    _local_5c0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
    _local_5a0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    auVar66._4_4_ = __real_00000070;
    auVar66._0_4_ = __real_00000070;
    auVar66._8_4_ = __real_00000070;
    auVar66._12_4_ = __real_00000070;
    auVar66._16_4_ = __real_00000070;
    auVar66._20_4_ = __real_00000070;
    auVar66._24_4_ = __real_00000070;
    auVar66._28_4_ = __real_00000070;
    vpor_avx2(auVar197,auVar66);
    _local_580 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    _local_560 = vgatherdpd(ZEXT832(0),auVar47);
    _local_900 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    _local_540 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
    _local_520 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
    local_21a0._0_8_ = auVar166._0_8_;
    local_21a0._8_8_ = auVar166._8_8_;
    dStack_2190 = auVar166._16_8_;
    dStack_2188 = auVar166._24_8_;
    adStack_8f0[2] = (double)local_21a0._0_8_;
    adStack_8f0[3] = (double)local_21a0._8_8_;
    adStack_8f0[4] = dStack_2190;
    adStack_8f0[5] = dStack_2188;
    local_2160 = auVar168._0_8_;
    uStack_2158 = auVar168._8_8_;
    uStack_2150 = auVar168._16_8_;
    uStack_2148 = auVar168._24_8_;
    local_8a0 = local_2160;
    uStack_898 = uStack_2158;
    uStack_890 = uStack_2150;
    uStack_888 = uStack_2148;
    local_2180._0_8_ = auVar167._0_8_;
    local_2180._8_8_ = auVar167._8_8_;
    dStack_2170 = auVar167._16_8_;
    dStack_2168 = auVar167._24_8_;
    adStack_8f0[6] = (double)local_2180._0_8_;
    adStack_8f0[7] = (double)local_2180._8_8_;
    adStack_8f0[8] = dStack_2170;
    uStack_8a8 = dStack_2168;
    local_2120 = auVar170._0_8_;
    uStack_2118 = auVar170._8_8_;
    uStack_2110 = auVar170._16_8_;
    uStack_2108 = auVar170._24_8_;
    local_860 = local_2120;
    uStack_858 = uStack_2118;
    uStack_850 = uStack_2110;
    uStack_848 = uStack_2108;
    local_2100 = auVar169._0_8_;
    uStack_20f8 = auVar169._8_8_;
    uStack_20f0 = auVar169._16_8_;
    uStack_20e8 = auVar169._24_8_;
    local_880 = local_2100;
    uStack_878 = uStack_20f8;
    uStack_870 = uStack_20f0;
    uStack_868 = uStack_20e8;
    local_2060 = auVar172._0_8_;
    uStack_2058 = auVar172._8_8_;
    uStack_2050 = auVar172._16_8_;
    uStack_2048 = auVar172._24_8_;
    local_820 = local_2060;
    uStack_818 = uStack_2058;
    uStack_810 = uStack_2050;
    uStack_808 = uStack_2048;
    local_2140 = auVar171._0_8_;
    uStack_2138 = auVar171._8_8_;
    uStack_2130 = auVar171._16_8_;
    uStack_2128 = auVar171._24_8_;
    local_840 = local_2140;
    uStack_838 = uStack_2138;
    uStack_830 = uStack_2130;
    uStack_828 = uStack_2128;
    local_20a0 = auVar174._0_8_;
    uStack_2098 = auVar174._8_8_;
    uStack_2090 = auVar174._16_8_;
    uStack_2088 = auVar174._24_8_;
    local_7e0 = local_20a0;
    uStack_7d8 = uStack_2098;
    uStack_7d0 = uStack_2090;
    uStack_7c8 = uStack_2088;
    local_2080 = auVar173._0_8_;
    uStack_2078 = auVar173._8_8_;
    uStack_2070 = auVar173._16_8_;
    uStack_2068 = auVar173._24_8_;
    local_800 = local_2080;
    uStack_7f8 = uStack_2078;
    uStack_7f0 = uStack_2070;
    uStack_7e8 = uStack_2068;
    local_20e0 = auVar176._0_8_;
    uStack_20d8 = auVar176._8_8_;
    uStack_20d0 = auVar176._16_8_;
    uStack_20c8 = auVar176._24_8_;
    local_7a0 = local_20e0;
    uStack_798 = uStack_20d8;
    uStack_790 = uStack_20d0;
    uStack_788 = uStack_20c8;
    local_20c0 = auVar175._0_8_;
    uStack_20b8 = auVar175._8_8_;
    uStack_20b0 = auVar175._16_8_;
    uStack_20a8 = auVar175._24_8_;
    local_7c0 = local_20c0;
    uStack_7b8 = uStack_20b8;
    uStack_7b0 = uStack_20b0;
    uStack_7a8 = uStack_20a8;
    local_1b00._0_8_ = auVar159._0_8_;
    local_1b00._8_8_ = auVar159._8_8_;
    local_1b00._16_8_ = auVar159._16_8_;
    local_1b00._24_8_ = auVar159._24_8_;
    local_760 = local_1b00._0_8_;
    uStack_758 = local_1b00._8_8_;
    uStack_750 = local_1b00._16_8_;
    uStack_748 = local_1b00._24_8_;
    local_1ae0._0_8_ = auVar137._0_8_;
    local_1ae0._8_8_ = auVar137._8_8_;
    local_1ae0._16_8_ = auVar137._16_8_;
    local_1ae0._24_8_ = auVar137._24_8_;
    local_780 = local_1ae0._0_8_;
    uStack_778 = local_1ae0._8_8_;
    uStack_770 = local_1ae0._16_8_;
    uStack_768 = local_1ae0._24_8_;
    local_2000[0xc] = auVar161._0_8_;
    local_2000[0xd] = auVar161._8_8_;
    local_2000[0xe] = auVar161._16_8_;
    local_2000[0xf] = auVar161._24_8_;
    local_720 = local_2000[0xc];
    uStack_718 = local_2000[0xd];
    uStack_710 = local_2000[0xe];
    uStack_708 = local_2000[0xf];
    local_1b20._0_8_ = auVar160._0_8_;
    local_1b20._8_8_ = auVar160._8_8_;
    local_1b20._16_8_ = auVar160._16_8_;
    local_1b20._24_8_ = auVar160._24_8_;
    local_740 = local_1b20._0_8_;
    uStack_738 = local_1b20._8_8_;
    uStack_730 = local_1b20._16_8_;
    uStack_728 = local_1b20._24_8_;
    local_2000[4] = auVar163._0_8_;
    local_2000[5] = auVar163._8_8_;
    local_2000[6] = auVar163._16_8_;
    local_2000[7] = auVar163._24_8_;
    local_6e0 = local_2000[4];
    uStack_6d8 = local_2000[5];
    uStack_6d0 = local_2000[6];
    uStack_6c8 = local_2000[7];
    local_2000[8] = auVar162._0_8_;
    local_2000[9] = auVar162._8_8_;
    local_2000[10] = auVar162._16_8_;
    local_2000[0xb] = auVar162._24_8_;
    local_700 = local_2000[8];
    uStack_6f8 = local_2000[9];
    uStack_6f0 = local_2000[10];
    uStack_6e8 = local_2000[0xb];
    local_1b40._0_8_ = auVar165._0_8_;
    local_1b40._8_8_ = auVar165._8_8_;
    local_1b40._16_8_ = auVar165._16_8_;
    uStack_1b28 = auVar165._24_8_;
    local_6a0 = local_1b40._0_8_;
    uStack_698 = local_1b40._8_8_;
    uStack_690 = local_1b40._16_8_;
    uStack_688 = uStack_1b28;
    local_2000[0] = auVar164._0_8_;
    local_2000[1] = auVar164._8_8_;
    local_2000[2] = auVar164._16_8_;
    local_2000[3] = auVar164._24_8_;
    local_6c0 = local_2000[0];
    uStack_6b8 = local_2000[1];
    uStack_6b0 = local_2000[2];
    uStack_6a8 = local_2000[3];
    auVar125 = vpackssdw_avx(SUB3216(auVar44 ^ 
                                     ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                     ,0),
                             SUB3216(auVar44 ^ 
                                     ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                     ,0x10));
    local_21c0 = SUB168(auVar42 ^ auVar39,0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_21c0;
    auVar42 = vpmovsxbw_avx(auVar4);
    local_1b40._0_16_ = vpand_avx(auVar125,auVar42);
    stack0xffffffffffffe4d0 = auVar165._16_16_;
    dVar1 = param_5[8];
    dVar32 = param_5[0xc];
    dVar33 = *param_5;
    lVar31 = 0xc0;
    dVar34 = param_5[1];
    dVar35 = param_5[5];
    dVar36 = param_5[9];
    dVar71 = param_5[0xd];
    dVar72 = param_5[2];
    dVar73 = param_5[6];
    dVar74 = param_5[10];
    dVar75 = param_5[0xe];
    dVar77 = param_5[3];
    dVar78 = param_5[7];
    dVar79 = param_5[0xb];
    dVar80 = param_5[0xf];
    do {
      dVar83 = *(double *)(local_9c0 + lVar31);
      dVar84 = *(double *)(local_9c0 + lVar31 + 8);
      dVar85 = *(double *)(local_9c0 + lVar31 + 0x10);
      dVar86 = *(double *)(local_9c0 + lVar31 + 0x18);
      dVar87 = *(double *)(local_9a0 + lVar31);
      dVar89 = *(double *)(local_9a0 + lVar31 + 8);
      dVar90 = *(double *)(local_9a0 + lVar31 + 0x10);
      dVar91 = *(double *)(local_9a0 + lVar31 + 0x18);
      dVar114 = *(double *)(local_980 + lVar31);
      dVar115 = *(double *)(local_980 + lVar31 + 8);
      dVar116 = *(double *)(local_980 + lVar31 + 0x10);
      dVar117 = *(double *)(local_980 + lVar31 + 0x18);
      dVar118 = *(double *)(local_960 + lVar31);
      dVar119 = *(double *)(local_960 + lVar31 + 8);
      dVar120 = *(double *)(local_960 + lVar31 + 0x10);
      dVar121 = *(double *)(local_960 + lVar31 + 0x18);
      dVar122 = *(double *)(local_940 + lVar31);
      dVar123 = *(double *)(local_940 + lVar31 + 8);
      dVar131 = *(double *)(local_940 + lVar31 + 0x10);
      dVar132 = *(double *)(local_940 + lVar31 + 0x18);
      dVar133 = *(double *)(local_920 + lVar31);
      dVar134 = *(double *)(local_920 + lVar31 + 8);
      dVar142 = *(double *)(local_920 + lVar31 + 0x10);
      dVar143 = *(double *)(local_920 + lVar31 + 0x18);
      dVar144 = *(double *)((longlong)adStack_8f0 + lVar31 + 0x10);
      dVar156 = *(double *)((longlong)adStack_8f0 + lVar31 + 0x18);
      dVar182 = *(double *)((longlong)adStack_8f0 + lVar31 + 0x20);
      dVar183 = *(double *)((longlong)adStack_8f0 + lVar31 + 0x28);
      dVar81 = param_5[4];
      *(double *)((longlong)local_2000 + lVar31 + 0x20) =
           dVar144 * dVar32 + dVar133 * dVar1 + dVar118 * dVar81 + dVar87 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x28) =
           dVar156 * dVar32 + dVar134 * dVar1 + dVar119 * dVar81 + dVar89 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x30) =
           dVar182 * dVar32 + dVar142 * dVar1 + dVar120 * dVar81 + dVar90 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x38) =
           dVar183 * dVar32 + dVar143 * dVar1 + dVar121 * dVar81 + dVar91 * dVar33 + 0.0;
      dVar184 = *(double *)(local_900 + lVar31);
      dVar225 = *(double *)(local_900 + lVar31 + 8);
      dVar227 = *(double *)(local_900 + lVar31 + 0x10);
      dVar228 = *(double *)(local_900 + lVar31 + 0x18);
      *(double *)((longlong)local_2000 + lVar31) =
           dVar184 * dVar32 + dVar122 * dVar1 + dVar114 * dVar81 + dVar83 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 8) =
           dVar225 * dVar32 + dVar123 * dVar1 + dVar115 * dVar81 + dVar84 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x10) =
           dVar227 * dVar32 + dVar131 * dVar1 + dVar116 * dVar81 + dVar85 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x18) =
           dVar228 * dVar32 + dVar132 * dVar1 + dVar117 * dVar81 + dVar86 * dVar33 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x60) =
           dVar144 * dVar71 + dVar133 * dVar36 + dVar118 * dVar35 + dVar87 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x68) =
           dVar156 * dVar71 + dVar134 * dVar36 + dVar119 * dVar35 + dVar89 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x70) =
           dVar182 * dVar71 + dVar142 * dVar36 + dVar120 * dVar35 + dVar90 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x78) =
           dVar183 * dVar71 + dVar143 * dVar36 + dVar121 * dVar35 + dVar91 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x40) =
           dVar184 * dVar71 + dVar122 * dVar36 + dVar114 * dVar35 + dVar83 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x48) =
           dVar225 * dVar71 + dVar123 * dVar36 + dVar115 * dVar35 + dVar84 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x50) =
           dVar227 * dVar71 + dVar131 * dVar36 + dVar116 * dVar35 + dVar85 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x58) =
           dVar228 * dVar71 + dVar132 * dVar36 + dVar117 * dVar35 + dVar86 * dVar34 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0xa0) =
           dVar144 * dVar75 + dVar133 * dVar74 + dVar118 * dVar73 + dVar87 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0xa8) =
           dVar156 * dVar75 + dVar134 * dVar74 + dVar119 * dVar73 + dVar89 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0xb0) =
           dVar182 * dVar75 + dVar142 * dVar74 + dVar120 * dVar73 + dVar90 * dVar72 + 0.0;
      *(double *)(local_1f40 + lVar31 + -8) =
           dVar183 * dVar75 + dVar143 * dVar74 + dVar121 * dVar73 + dVar91 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x80) =
           dVar184 * dVar75 + dVar122 * dVar74 + dVar114 * dVar73 + dVar83 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x88) =
           dVar225 * dVar75 + dVar123 * dVar74 + dVar115 * dVar73 + dVar84 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x90) =
           dVar227 * dVar75 + dVar131 * dVar74 + dVar116 * dVar73 + dVar85 * dVar72 + 0.0;
      *(double *)((longlong)local_2000 + lVar31 + 0x98) =
           dVar228 * dVar75 + dVar132 * dVar74 + dVar117 * dVar73 + dVar86 * dVar72 + 0.0;
      *(double *)(local_1f20 + lVar31) =
           dVar80 * dVar144 + dVar79 * dVar133 + dVar78 * dVar118 + dVar77 * dVar87 + 0.0;
      *(double *)(local_1f20 + lVar31 + 8) =
           dVar80 * dVar156 + dVar79 * dVar134 + dVar78 * dVar119 + dVar77 * dVar89 + 0.0;
      *(double *)(local_1f20 + lVar31 + 0x10) =
           dVar80 * dVar182 + dVar79 * dVar142 + dVar78 * dVar120 + dVar77 * dVar90 + 0.0;
      *(double *)(local_1f20 + lVar31 + 0x18) =
           dVar80 * dVar183 + dVar79 * dVar143 + dVar78 * dVar121 + dVar77 * dVar91 + 0.0;
      *(double *)(local_1f40 + lVar31) =
           dVar80 * dVar184 + dVar79 * dVar122 + dVar78 * dVar114 + dVar77 * dVar83 + 0.0;
      *(double *)(local_1f40 + lVar31 + 8) =
           dVar80 * dVar225 + dVar79 * dVar123 + dVar78 * dVar115 + dVar77 * dVar84 + 0.0;
      *(double *)(local_1f40 + lVar31 + 0x10) =
           dVar80 * dVar227 + dVar79 * dVar131 + dVar78 * dVar116 + dVar77 * dVar85 + 0.0;
      *(double *)(local_1f40 + lVar31 + 0x18) =
           dVar80 * dVar228 + dVar79 * dVar132 + dVar78 * dVar117 + dVar77 * dVar86 + 0.0;
      lVar31 = lVar31 + 0x100;
    } while (lVar31 != 0x4c0);
    local_2040 = auVar149._0_8_;
    dStack_2038 = auVar149._8_8_;
    dStack_2030 = auVar149._16_8_;
    dStack_2028 = auVar149._24_8_;
    local_2000[0x14] = auVar158._0_8_;
    local_2000[0x15] = auVar158._8_8_;
    local_2000[0x16] = auVar158._16_8_;
    local_2000[0x17] = auVar158._24_8_;
    local_2020 = auVar177._0_8_;
    dStack_2018 = auVar177._8_8_;
    dStack_2010 = auVar177._16_8_;
    dStack_2008 = auVar177._24_8_;
    dVar32 = __real_3fe0000000000000 * (local_2040 + local_2000[0x14]);
    dVar71 = __real_3fe0000000000000 * (dStack_2038 + local_2000[0x15]);
    dVar77 = __real_3fe0000000000000 * (dStack_2030 + local_2000[0x16]);
    dVar83 = __real_3fe0000000000000 * (dStack_2028 + local_2000[0x17]);
    dVar115 = __real_3fe0000000000000 * (local_2020 + (double)local_1ac0._0_8_);
    dVar116 = __real_3fe0000000000000 * (dStack_2018 + (double)local_1ac0._8_8_);
    dVar117 = __real_3fe0000000000000 * (dStack_2010 + dStack_1ab0);
    dVar118 = __real_3fe0000000000000 * (dStack_2008 + dStack_1aa8);
    dVar33 = __real_3fe0000000000000 * (local_17a0._0_8_ + local_19c0._0_8_);
    dVar72 = __real_3fe0000000000000 * (local_17a0._8_8_ + local_19c0._8_8_);
    dVar78 = __real_3fe0000000000000 * (local_17a0._16_8_ + local_19c0._16_8_);
    dVar84 = __real_3fe0000000000000 * (local_17a0._24_8_ + local_19c0._24_8_);
    dVar119 = __real_3fe0000000000000 * (local_1a80._0_8_ + local_19e0._0_8_);
    dVar121 = __real_3fe0000000000000 * (local_1a80._8_8_ + local_19e0._8_8_);
    dVar123 = __real_3fe0000000000000 * (local_1a80._16_8_ + local_19e0._16_8_);
    dVar132 = __real_3fe0000000000000 * (local_1a80._24_8_ + local_19e0._24_8_);
    dVar1 = (double)CONCAT17(uStack_1db9,
                             CONCAT16(uStack_1dba,
                                      CONCAT15(uStack_1dbb,
                                               CONCAT14(uStack_1dbc,
                                                        CONCAT13(uStack_1dbd,
                                                                 CONCAT12(uStack_1dbe,
                                                                          CONCAT11(uStack_1dbf,
                                                                                   local_1dc0)))))))
    ;
    dVar34 = __real_3fe0000000000000 * (auVar188._0_8_ + local_1a00._0_8_);
    dVar73 = __real_3fe0000000000000 * (auVar188._8_8_ + local_1a00._8_8_);
    dVar79 = __real_3fe0000000000000 * (auVar188._16_8_ + local_1a00._16_8_);
    dVar85 = __real_3fe0000000000000 * (auVar188._24_8_ + local_1a00._24_8_);
    dVar35 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
    dVar74 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
    dVar80 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
    dVar86 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
    auVar47 = vsubpd_avx(local_19c0,local_17a0);
    auVar146 = vsubpd_avx(auVar158,auVar149);
    auVar44 = vsubpd_avx(local_19e0,local_1a80);
    auVar137 = vsubpd_avx(_local_1ac0,auVar177);
    auVar158 = vsubpd_avx(local_1a20,local_19a0);
    auVar188 = vsubpd_avx(local_1a00,auVar188);
    dVar36 = __real_3fe0000000000000 * auVar146._0_8_;
    dVar75 = __real_3fe0000000000000 * auVar146._8_8_;
    dVar81 = __real_3fe0000000000000 * auVar146._16_8_;
    dVar87 = __real_3fe0000000000000 * auVar146._24_8_;
    dVar120 = auVar47._0_8_ * __real_3fe0000000000000;
    dVar122 = auVar47._8_8_ * __real_3fe0000000000000;
    dVar131 = auVar47._16_8_ * __real_3fe0000000000000;
    dVar133 = auVar47._24_8_ * __real_3fe0000000000000;
    dVar89 = __real_3fe0000000000000 * auVar137._0_8_;
    dVar90 = __real_3fe0000000000000 * auVar137._8_8_;
    dVar91 = __real_3fe0000000000000 * auVar137._16_8_;
    dVar114 = __real_3fe0000000000000 * auVar137._24_8_;
    dVar134 = __real_3fe0000000000000 * auVar44._0_8_;
    dVar142 = __real_3fe0000000000000 * auVar44._8_8_;
    dVar143 = __real_3fe0000000000000 * auVar44._16_8_;
    dVar144 = __real_3fe0000000000000 * auVar44._24_8_;
    dVar156 = __real_3fe0000000000000 * auVar188._0_8_;
    dVar182 = __real_3fe0000000000000 * auVar188._8_8_;
    dVar183 = __real_3fe0000000000000 * auVar188._16_8_;
    dVar184 = __real_3fe0000000000000 * auVar188._24_8_;
    dVar225 = __real_3fe0000000000000 * auVar158._0_8_;
    dVar227 = __real_3fe0000000000000 * auVar158._8_8_;
    dVar228 = __real_3fe0000000000000 * auVar158._16_8_;
    dVar229 = __real_3fe0000000000000 * auVar158._24_8_;
    auVar130._0_8_ =
         dVar35 * local_1d20 + dVar32 * (double)local_1f20 + dVar115 * (double)local_1e20._0_8_ +
         local_1c20;
    auVar130._8_8_ =
         dVar74 * dStack_1d18 + dVar71 * adStack_1f18[0] + dVar116 * (double)local_1e20._8_8_ +
         dStack_1c18;
    auVar130._16_8_ =
         dVar80 * dStack_1d10 + dVar77 * adStack_1f18[1] + dVar117 * dStack_1e10 + dStack_1c10;
    auVar130._24_8_ =
         dVar86 * dStack_1d08 + dVar83 * adStack_1f18[2] + dVar118 * dStack_1e08 + dStack_1c08;
    auVar192._0_8_ =
         dVar34 * local_1d40 + dVar33 * (double)local_1f40 + dVar119 * (double)local_1e40._0_8_ +
         local_1c40;
    auVar192._8_8_ =
         dVar73 * dStack_1d38 + dVar72 * adStack_1f38[0] + dVar121 * (double)local_1e40._8_8_ +
         dStack_1c38;
    auVar192._16_8_ =
         dVar79 * dStack_1d30 + dVar78 * adStack_1f38[1] + dVar123 * dStack_1e30 + dStack_1c30;
    auVar192._24_8_ =
         dVar85 * dStack_1d28 + dVar84 * adStack_1f38[2] + dVar132 * dStack_1e28 + dStack_1c28;
    auVar233._0_8_ =
         dVar35 * local_1ce0 +
         dVar32 * (double)local_1ee0._0_8_ + dVar115 * (double)local_1de0._0_8_ + local_1be0;
    auVar233._8_8_ =
         dVar74 * dStack_1cd8 +
         dVar71 * (double)local_1ee0._8_8_ + dVar116 * (double)local_1de0._8_8_ + dStack_1bd8;
    auVar233._16_8_ =
         dVar80 * dStack_1cd0 + dVar77 * dStack_1ed0 + dVar117 * dStack_1dd0 + dStack_1bd0;
    auVar233._24_8_ =
         dVar86 * dStack_1cc8 + dVar83 * dStack_1ec8 + dVar118 * dStack_1dc8 + dStack_1bc8;
    auVar207._0_8_ =
         dVar34 * local_1d00 +
         dVar33 * (double)local_1f00._0_8_ + dVar119 * (double)local_1e00._0_8_ + local_1c00;
    auVar207._8_8_ =
         dVar73 * dStack_1cf8 +
         dVar72 * (double)local_1f00._8_8_ + dVar121 * (double)local_1e00._8_8_ + dStack_1bf8;
    auVar207._16_8_ =
         dVar79 * dStack_1cf0 + dVar78 * dStack_1ef0 + dVar123 * dStack_1df0 + dStack_1bf0;
    auVar207._24_8_ =
         dVar85 * dStack_1ce8 + dVar84 * dStack_1ee8 + dVar132 * dStack_1de8 + dStack_1be8;
    auVar67._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f40)) +
         (double)((ulonglong)(dVar134 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar156 * local_1d40) & __real_7fffffffffffffff);
    auVar67._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * adStack_1f38[0])) +
         (double)((ulonglong)(dVar142 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar182 * dStack_1d38) & __real_7fffffffffffffff);
    auVar67._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar131 * adStack_1f38[1])) +
         (double)((ulonglong)(dVar143 * dStack_1e30) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar183 * dStack_1d30) & __real_7fffffffffffffff);
    auVar67._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * adStack_1f38[2])) +
         (double)((ulonglong)(dVar144 * dStack_1e28) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar184 * dStack_1d28) & __real_7fffffffffffffff);
    auVar239._0_8_ =
         local_1ca0 * dVar35 + (double)local_1ea0._0_8_ * dVar32 + dVar115 * local_1da0 + local_1ba0
    ;
    auVar239._8_8_ =
         dStack_1c98 * dVar74 + (double)local_1ea0._8_8_ * dVar71 + dVar116 * dStack_1d98 +
         dStack_1b98;
    auVar239._16_8_ =
         dStack_1c90 * dVar80 + dStack_1e90 * dVar77 + dVar117 * dStack_1d90 + dStack_1b90;
    auVar239._24_8_ =
         dStack_1c88 * dVar86 + dStack_1e88 * dVar83 + dVar118 * dStack_1d88 + dStack_1b88;
    auVar224._0_8_ =
         (double)((ulonglong)(dVar225 * local_1d20) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar36 * (double)local_1f20) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar89 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
    auVar224._8_8_ =
         (double)((ulonglong)(dVar227 * dStack_1d18) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar75 * adStack_1f18[0]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar90 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
    auVar224._16_8_ =
         (double)((ulonglong)(dVar228 * dStack_1d10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar81 * adStack_1f18[1]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar91 * dStack_1e10) & __real_7fffffffffffffff);
    auVar224._24_8_ =
         (double)((ulonglong)(dVar229 * dStack_1d08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar87 * adStack_1f18[2]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar114 * dStack_1e08) & __real_7fffffffffffffff);
    auVar216._0_8_ =
         local_1cc0 * dVar34 + (double)local_1ec0._0_8_ * dVar33 + dVar119 * dVar1 + local_1bc0;
    auVar216._8_8_ =
         dStack_1cb8 * dVar73 + (double)local_1ec0._8_8_ * dVar72 + dVar121 * dStack_1db8 +
         dStack_1bb8;
    auVar216._16_8_ =
         dStack_1cb0 * dVar79 + dStack_1eb0 * dVar78 + dVar123 * dStack_1db0 + dStack_1bb0;
    auVar216._24_8_ =
         dStack_1ca8 * dVar85 + dStack_1ea8 * dVar84 + dVar132 * dStack_1da8 + dStack_1ba8;
    auVar109._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f00._0_8_)) +
         (double)((ulonglong)(dVar134 * (double)local_1e00._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar156 * local_1d00) & __real_7fffffffffffffff);
    auVar109._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * (double)local_1f00._8_8_)) +
         (double)((ulonglong)(dVar142 * (double)local_1e00._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar182 * dStack_1cf8) & __real_7fffffffffffffff);
    auVar109._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar131 * dStack_1ef0)) +
         (double)((ulonglong)(dVar143 * dStack_1df0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar183 * dStack_1cf0) & __real_7fffffffffffffff);
    auVar109._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * dStack_1ee8)) +
         (double)((ulonglong)(dVar144 * dStack_1de8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar184 * dStack_1ce8) & __real_7fffffffffffffff);
    auVar242._0_8_ =
         (double)((ulonglong)(dVar225 * local_1ce0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar36 * (double)local_1ee0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar89 * (double)local_1de0._0_8_) & __real_7fffffffffffffff);
    auVar242._8_8_ =
         (double)((ulonglong)(dVar227 * dStack_1cd8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar75 * (double)local_1ee0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar90 * (double)local_1de0._8_8_) & __real_7fffffffffffffff);
    auVar242._16_8_ =
         (double)((ulonglong)(dVar228 * dStack_1cd0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar81 * dStack_1ed0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar91 * dStack_1dd0) & __real_7fffffffffffffff);
    auVar242._24_8_ =
         (double)((ulonglong)(dVar229 * dStack_1cc8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar87 * dStack_1ec8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar114 * dStack_1dc8) & __real_7fffffffffffffff);
    auVar153._0_8_ =
         (double)((ulonglong)(dVar120 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar134 * dVar1) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar156 * local_1cc0) & __real_7fffffffffffffff);
    auVar153._8_8_ =
         (double)((ulonglong)(dVar122 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar142 * dStack_1db8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar182 * dStack_1cb8) & __real_7fffffffffffffff);
    auVar153._16_8_ =
         (double)((ulonglong)(dVar131 * dStack_1eb0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar143 * dStack_1db0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar183 * dStack_1cb0) & __real_7fffffffffffffff);
    auVar153._24_8_ =
         (double)((ulonglong)(dVar133 * dStack_1ea8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar144 * dStack_1da8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar184 * dStack_1ca8) & __real_7fffffffffffffff);
    auVar181._0_8_ =
         (double)((ulonglong)(dVar225 * local_1ca0) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar36 * (double)local_1ea0._0_8_)) +
         (double)((ulonglong)(dVar89 * local_1da0) & __real_7fffffffffffffff);
    auVar181._8_8_ =
         (double)((ulonglong)(dVar227 * dStack_1c98) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1ea0._8_8_)) +
         (double)((ulonglong)(dVar90 * dStack_1d98) & __real_7fffffffffffffff);
    auVar181._16_8_ =
         (double)((ulonglong)(dVar228 * dStack_1c90) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar81 * dStack_1e90)) +
         (double)((ulonglong)(dVar91 * dStack_1d90) & __real_7fffffffffffffff);
    auVar181._24_8_ =
         (double)((ulonglong)(dVar229 * dStack_1c88) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar87 * dStack_1e88)) +
         (double)((ulonglong)(dVar114 * dStack_1d88) & __real_7fffffffffffffff);
    auVar47 = vsubpd_avx(auVar192,auVar67);
    auVar146 = vsubpd_avx(auVar130,auVar224);
    auVar44 = vsubpd_avx(auVar207,auVar109);
    auVar137 = vsubpd_avx(auVar233,auVar242);
    auVar193._0_8_ = auVar67._0_8_ + auVar192._0_8_;
    auVar193._8_8_ = auVar67._8_8_ + auVar192._8_8_;
    auVar193._16_8_ = auVar67._16_8_ + auVar192._16_8_;
    auVar193._24_8_ = auVar67._24_8_ + auVar192._24_8_;
    auVar188 = vsubpd_avx(auVar216,auVar153);
    local_21a0._8_8_ = auVar224._8_8_ + auVar130._8_8_;
    local_21a0._0_8_ = auVar224._0_8_ + auVar130._0_8_;
    dStack_2190 = auVar224._16_8_ + auVar130._16_8_;
    dStack_2188 = auVar224._24_8_ + auVar130._24_8_;
    auVar158 = vsubpd_avx(auVar239,auVar181);
    auVar208._0_8_ = auVar207._0_8_ + auVar109._0_8_;
    auVar208._8_8_ = auVar207._8_8_ + auVar109._8_8_;
    auVar208._16_8_ = auVar207._16_8_ + auVar109._16_8_;
    auVar208._24_8_ = auVar207._24_8_ + auVar109._24_8_;
    auVar187._0_8_ = auVar242._0_8_ + auVar233._0_8_;
    auVar187._8_8_ = auVar242._8_8_ + auVar233._8_8_;
    auVar187._16_8_ = auVar242._16_8_ + auVar233._16_8_;
    auVar187._24_8_ = auVar242._24_8_ + auVar233._24_8_;
    auVar234._0_8_ = auVar216._0_8_ + auVar153._0_8_;
    auVar234._8_8_ = auVar216._8_8_ + auVar153._8_8_;
    auVar234._16_8_ = auVar216._16_8_ + auVar153._16_8_;
    auVar234._24_8_ = auVar216._24_8_ + auVar153._24_8_;
    auVar243._0_8_ = auVar239._0_8_ + auVar181._0_8_;
    auVar243._8_8_ = auVar239._8_8_ + auVar181._8_8_;
    auVar243._16_8_ = auVar239._16_8_ + auVar181._16_8_;
    auVar243._24_8_ = auVar239._24_8_ + auVar181._24_8_;
    auVar39 = ZEXT816(0) << 0x40;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = local_1800;
    auVar42 = vpcmpeqb_avx(auVar125,auVar39);
    auVar39 = vpcmpeqd_avx(auVar39,auVar39);
    auVar160 = vpmovsxbd_avx2(auVar42 ^ auVar39);
    auVar159 = vpand_avx2(local_1aa0,auVar160);
    iVar27 = vmovmskps_avx(auVar159);
    if (iVar27 == 0) {
      auVar159 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a4d251:
      auVar39 = vpmovsxbw_avx(auVar42);
      auVar39 = vpand_avx(auVar39,local_1b40._0_16_);
      auVar160 = vpmovsxwd_avx2(auVar39);
      auVar160 = local_1a40 & auVar160;
      if ((((((((SUB321(auVar160 >> 0x1f,0) & 1) != 0 || (SUB321(auVar160 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar160 >> 0x5f,0) & 1) != 0) || SUB321(auVar160 >> 0x7f,0) != '\0') ||
            (SUB321(auVar160 >> 0x9f,0) & 1) != 0) || SUB321(auVar160 >> 0xbf,0) != '\0') ||
          (SUB321(auVar160 >> 0xdf,0) & 1) != 0) || auVar160[0x1f] < '\0') {
        auVar42 = vpmovzxbw_avx(auVar42);
        auVar160 = vpmovzxwd_avx2(auVar42);
        auVar160 = vpslld_avx2(auVar160,0x1f);
        auVar161 = vpsrad_avx2(auVar160,0x1f);
        auVar160 = auVar161 & local_1aa0;
        if ((((((((SUB321(auVar160 >> 0x1f,0) & 1) != 0 || (SUB321(auVar160 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar160 >> 0x5f,0) & 1) != 0) || SUB321(auVar160 >> 0x7f,0) != '\0') ||
              (SUB321(auVar160 >> 0x9f,0) & 1) != 0) || SUB321(auVar160 >> 0xbf,0) != '\0') ||
            (SUB321(auVar160 >> 0xdf,0) & 1) != 0) || auVar160[0x1f] < '\0') {
          auVar162 = vpermpd_avx2(auVar161,0xd8);
          auVar160 = vshufps_avx(auVar162,auVar162,0x50);
          auVar162 = vshufps_avx(auVar162,auVar162,0xfa);
          _local_1f40 = vmaskmovpd_avx(auVar160,auVar47);
          _local_1f20 = vmaskmovpd_avx(auVar162,auVar146);
          _local_1f00 = vmaskmovpd_avx(auVar160,auVar44);
          _local_1ee0 = vmaskmovpd_avx(auVar162,auVar137);
          _local_1ec0 = vmaskmovpd_avx(auVar160,auVar188);
          _local_1ea0 = vmaskmovpd_avx(auVar162,auVar158);
          local_1e80 = vmaskmovpd_avx(auVar160,auVar193);
          local_1e60 = vmaskmovpd_avx(auVar162,_local_21a0);
          _local_1e40 = vmaskmovpd_avx(auVar160,auVar208);
          _local_1e20 = vmaskmovpd_avx(auVar162,auVar187);
          _local_1e00 = vmaskmovpd_avx(auVar160,auVar234);
          _local_1de0 = vmaskmovpd_avx(auVar162,auVar243);
          auVar42 = vpsllw_avx(auVar42,0xf);
          auVar42 = vpacksswb_avx(auVar42,auVar42);
          bVar28 = SUB161(auVar42 >> 0xf,0) & 1;
          bVar5 = SUB161(auVar42 >> 0x17,0) & 1;
          bVar6 = SUB161(auVar42 >> 0x1f,0) & 1;
          bVar7 = SUB161(auVar42 >> 0x27,0) & 1;
          bVar8 = SUB161(auVar42 >> 0x2f,0) & 1;
          bVar9 = SUB161(auVar42 >> 0x37,0) & 1;
          if ((SUB161(auVar42 >> 7,0) & 1) == 0) {
            if (bVar28 != 0) goto LAB_140a4daf0;
LAB_140a4d36a:
            if (bVar5 != 0) goto LAB_140a4db0a;
LAB_140a4d37c:
            if (bVar6 != 0) goto LAB_140a4db1b;
LAB_140a4d385:
            if (bVar7 != 0) goto LAB_140a4db2c;
LAB_140a4d38e:
            if (bVar8 != 0) goto LAB_140a4db3d;
LAB_140a4d397:
            if (bVar9 != 0) goto LAB_140a4db4e;
LAB_140a4d3a0:
            auVar112._0_4_ = local_1aa0._0_4_ & auVar161._0_4_;
            auVar112._4_4_ = local_1aa0._4_4_ & auVar161._4_4_;
            auVar112._8_4_ = local_1aa0._8_4_ & auVar161._8_4_;
            auVar112._12_4_ = local_1aa0._12_4_ & auVar161._12_4_;
            auVar112._16_4_ = local_1aa0._16_4_ & auVar161._16_4_;
            auVar112._20_4_ = local_1aa0._20_4_ & auVar161._20_4_;
            auVar112._24_4_ = local_1aa0._24_4_ & auVar161._24_4_;
            auVar112._28_4_ = local_1aa0._28_4_ & auVar161._28_4_;
          }
          else {
            local_1dc0 = 1;
            if (bVar28 == 0) goto LAB_140a4d36a;
LAB_140a4daf0:
            uStack_1dbf = 1;
            if (bVar5 == 0) goto LAB_140a4d37c;
LAB_140a4db0a:
            uStack_1dbe = 1;
            if (bVar6 == 0) goto LAB_140a4d385;
LAB_140a4db1b:
            uStack_1dbd = 1;
            if (bVar7 == 0) goto LAB_140a4d38e;
LAB_140a4db2c:
            uStack_1dbc = 1;
            if (bVar8 == 0) goto LAB_140a4d397;
LAB_140a4db3d:
            uStack_1dbb = 1;
            if (bVar9 == 0) goto LAB_140a4d3a0;
LAB_140a4db4e:
            uStack_1dba = 1;
            auVar112._0_4_ = local_1aa0._0_4_ & auVar161._0_4_;
            auVar112._4_4_ = local_1aa0._4_4_ & auVar161._4_4_;
            auVar112._8_4_ = local_1aa0._8_4_ & auVar161._8_4_;
            auVar112._12_4_ = local_1aa0._12_4_ & auVar161._12_4_;
            auVar112._16_4_ = local_1aa0._16_4_ & auVar161._16_4_;
            auVar112._20_4_ = local_1aa0._20_4_ & auVar161._20_4_;
            auVar112._24_4_ = local_1aa0._24_4_ & auVar161._24_4_;
            auVar112._28_4_ = local_1aa0._28_4_ & auVar161._28_4_;
          }
          if ((SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
            uStack_1db9 = 1;
          }
          vmovmskps_avx(auVar159 | auVar112);
        }
      }
    }
    else {
      auVar161 = vminpd_avx(local_1980,auVar47);
      auVar163 = vpermq_avx2(auVar160,0xd8);
      auVar162 = vpshufd_avx2(auVar163,0x50);
      _local_1f40 = vmaskmovpd_avx(auVar162,auVar161);
      auVar160 = vminpd_avx(local_1960,auVar146);
      auVar161 = vpshufd_avx2(auVar163,0xfa);
      _local_1f20 = vmaskmovpd_avx(auVar161,auVar160);
      auVar160 = vminpd_avx(local_1940,auVar44);
      _local_1f00 = vmaskmovpd_avx(auVar162,auVar160);
      auVar160 = vminpd_avx(local_1920,auVar137);
      _local_1ee0 = vmaskmovpd_avx(auVar161,auVar160);
      auVar160 = vminpd_avx(local_1900,auVar188);
      _local_1ec0 = vmaskmovpd_avx(auVar162,auVar160);
      auVar160 = vminpd_avx(local_18e0,auVar158);
      _local_1ea0 = vmaskmovpd_avx(auVar161,auVar160);
      auVar160 = vmaxpd_avx(local_18c0,auVar193);
      local_1e80 = vmaskmovpd_avx(auVar162,auVar160);
      auVar160 = vmaxpd_avx(local_18a0,_local_21a0);
      local_1e60 = vmaskmovpd_avx(auVar161,auVar160);
      auVar160 = vmaxpd_avx(local_1880,auVar208);
      _local_1e40 = vmaskmovpd_avx(auVar162,auVar160);
      auVar160 = vmaxpd_avx(local_1860,auVar187);
      _local_1e20 = vmaskmovpd_avx(auVar161,auVar160);
      auVar160 = vmaxpd_avx(local_1840,auVar234);
      _local_1e00 = vmaskmovpd_avx(auVar162,auVar160);
      auVar160 = vmaxpd_avx(local_1820,auVar243);
      _local_1de0 = vmaskmovpd_avx(auVar161,auVar160);
      auVar41._8_8_ = local_1800;
      auVar41._0_8_ = local_1800;
      auVar39 = vpcmpeqb_avx(auVar41,___xmm_00000000000000000000000000000000);
      bVar28 = ~(SUB161(auVar39 >> 7,0) & 1 | (SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar39 >> 0x17,0) & 1) << 2 | (SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar39 >> 0x27,0) & 1) << 4 | (SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar39 >> 0x37,0) & 1) << 6);
      if ((bVar28 & 1) != 0) {
        local_1dc0 = (undefined1)local_1800;
      }
      if ((bVar28 & 2) != 0) {
        uStack_1dbf = (undefined1)(local_1800 >> 8);
      }
      if ((bVar28 & 4) != 0) {
        uStack_1dbe = (undefined1)(local_1800 >> 0x10);
      }
      if ((bVar28 & 8) != 0) {
        uStack_1dbd = (undefined1)(local_1800 >> 0x18);
      }
      if ((bVar28 & 0x10) != 0) {
        uStack_1dbc = (undefined1)(local_1800 >> 0x20);
      }
      if ((bVar28 & 0x20) != 0) {
        uStack_1dbb = (undefined1)(local_1800 >> 0x28);
      }
      if ((bVar28 & 0x40) != 0) {
        uStack_1dba = (undefined1)(local_1800 >> 0x30);
      }
      if ((SUB161(auVar39 >> 0x3f,0) & 1) == 0) {
        uStack_1db9 = (undefined1)(local_1800 >> 0x38);
      }
      if ((char)uVar26 != (char)iVar27) goto LAB_140a4d251;
    }
    auVar146 = vpermpd_avx2(local_1aa0,0xd8);
    auVar47 = vshufps_avx(auVar146,auVar146,0x50);
    auVar146 = vshufps_avx(auVar146,auVar146,0xfa);
    local_1980 = vmaskmovpd_avx(auVar47,_local_1f40);
    local_1960 = vmaskmovpd_avx(auVar146,_local_1f20);
    local_1940 = vmaskmovpd_avx(auVar47,_local_1f00);
    local_1920 = vmaskmovpd_avx(auVar146,_local_1ee0);
    local_1900 = vmaskmovpd_avx(auVar47,_local_1ec0);
    local_18e0 = vmaskmovpd_avx(auVar146,_local_1ea0);
    local_18c0 = vmaskmovpd_avx(auVar47,local_1e80);
    local_18a0 = vmaskmovpd_avx(auVar146,local_1e60);
    local_1880 = vmaskmovpd_avx(auVar47,_local_1e40);
    local_1860 = vmaskmovpd_avx(auVar146,_local_1e20);
    local_1840 = vmaskmovpd_avx(auVar47,_local_1e00);
    local_1820 = vmaskmovpd_avx(auVar146,_local_1de0);
    uVar25 = local_1800;
    if ((uVar26 & 1) != 0) {
      local_1800 = CONCAT71(local_1800._1_7_,local_1dc0);
      uVar25 = local_1800;
    }
    if ((uVar26 & 2) != 0) {
      local_1800._2_6_ = (undefined6)(uVar25 >> 0x10);
      local_1800._0_1_ = (undefined1)uVar25;
      local_1800._0_2_ = CONCAT11(uStack_1dbf,(undefined1)local_1800);
      uVar25 = local_1800;
    }
    if ((uVar26 & 4) != 0) {
      local_1800._3_5_ = (undefined5)(uVar25 >> 0x18);
      local_1800._0_2_ = (undefined2)uVar25;
      local_1800._0_3_ = CONCAT12(uStack_1dbe,(undefined2)local_1800);
      uVar25 = local_1800;
    }
    if ((uVar26 & 8) != 0) {
      local_1800._4_4_ = (undefined4)(uVar25 >> 0x20);
      local_1800._0_3_ = (undefined3)uVar25;
      local_1800._0_4_ = CONCAT13(uStack_1dbd,(undefined3)local_1800);
      uVar25 = local_1800;
    }
    if ((uVar26 & 0x10) != 0) {
      local_1800._5_3_ = (undefined3)(uVar25 >> 0x28);
      local_1800._0_4_ = (undefined4)uVar25;
      local_1800._0_5_ = CONCAT14(uStack_1dbc,(undefined4)local_1800);
      uVar25 = local_1800;
    }
    if ((uVar26 & 0x20) != 0) {
      local_1800._6_2_ = (undefined2)(uVar25 >> 0x30);
      local_1800._0_5_ = (undefined5)uVar25;
      local_1800._0_6_ = CONCAT15(uStack_1dbb,(undefined5)local_1800);
      uVar25 = local_1800;
    }
    local_1800 = uVar25;
    if ((uVar26 & 0x40) != 0) {
      local_1800._7_1_ = (undefined1)(uVar25 >> 0x38);
      local_1800._0_6_ = (undefined6)uVar25;
      local_1800._0_7_ = CONCAT16(uStack_1dba,(undefined6)local_1800);
    }
    if ((char)uVar26 < '\0') {
      local_1800 = CONCAT17(uStack_1db9,(undefined7)local_1800);
    }
LAB_140a4d504:
    local_12e0 = vmovlhps_avx(local_1980._0_16_,local_1940._0_16_);
    local_12a8 = vunpckhpd_avx(local_1980._0_16_,local_1940._0_16_);
    local_1270 = vmovlhps_avx(local_1980._16_16_,local_1940._16_16_);
    local_1238 = vunpckhpd_avx(local_1980._16_16_,local_1940._16_16_);
    local_1200 = vmovlhps_avx(local_1960._0_16_,local_1920._0_16_);
    local_11c8 = vunpckhpd_avx(local_1960._0_16_,local_1920._0_16_);
    local_1190 = vmovlhps_avx(local_1960._16_16_,local_1920._16_16_);
    local_1158 = vunpckhpd_avx(local_1960._16_16_,local_1920._16_16_);
    local_12d0 = local_1900._0_8_;
    local_1298 = local_1900._8_8_;
    local_1260 = local_1900._16_8_;
    local_1228 = local_1900._24_8_;
    local_11f0 = local_18e0._0_8_;
    local_11b8 = (double)local_18e0._8_8_;
    local_1180 = (double)local_18e0._16_8_;
    local_1148 = (double)local_18e0._24_8_;
    local_12c8 = vmovlhps_avx(local_18c0._0_16_,local_1880._0_16_);
    local_1290 = vunpckhpd_avx(local_18c0._0_16_,local_1880._0_16_);
    local_1258 = vmovlhps_avx(local_18c0._16_16_,local_1880._16_16_);
    local_1220 = vunpckhpd_avx(local_18c0._16_16_,local_1880._16_16_);
    local_11e8 = vmovlhps_avx(local_18a0._0_16_,local_1860._0_16_);
    local_11b0 = vunpckhpd_avx(local_18a0._0_16_,local_1860._0_16_);
    local_1178 = vunpcklpd_avx(local_18a0._16_16_,local_1860._16_16_);
    local_1140 = vunpckhpd_avx(local_18a0._16_16_,local_1860._16_16_);
    local_12b8 = local_1840._0_8_;
    local_1280 = local_1840._8_8_;
    local_1248 = local_1840._16_8_;
    local_1210 = local_1840._24_8_;
    local_11d8 = local_1820._0_8_;
    local_11a0 = (double)local_1820._8_8_;
    local_1168 = (double)local_1820._16_8_;
    local_1130 = (double)local_1820._24_8_;
    auVar47 = vpcmpgtd_avx2(local_1a60,
                            ___ymm_0000000700000006000000050000000400000003000000020000000100000000)
    ;
    uVar26 = vmovmskps_avx(auVar47);
    local_12b0[0] = (char)local_1800;
    local_1278 = (char)(local_1800 >> 8);
    local_1240 = (char)(local_1800 >> 0x10);
    local_1208 = (char)(local_1800 >> 0x18);
    local_11d0 = (char)(local_1800 >> 0x20);
    local_1198[0] = (char)(local_1800 >> 0x28);
    local_1160[0] = (char)(local_1800 >> 0x30);
    local_1128[0] = (char)(local_1800 >> 0x38);
    if (uVar26 == 0) {
      return;
    }
    uVar25 = (ulonglong)(uVar26 & 0xff);
    do {
      uVar19 = 0;
      for (uVar20 = uVar25; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
        uVar19 = uVar19 + 1;
      }
      lVar31 = uVar19 * 0x38;
      cVar29 = param_6[2][0];
      cVar24 = local_12b0[lVar31];
      if ((cVar29 == '\0') || (cVar24 == '\0')) {
        if (cVar24 == '\0') {
          cVar29 = param_6[2][0];
          uVar157 = *(undefined8 *)(param_6[1] + 0x10);
          uVar145 = *(undefined8 *)(param_6[1] + 8);
          uVar135 = *(undefined8 *)param_6[1];
          uVar124 = *(undefined8 *)(*param_6 + 0x10);
          uVar37 = *(undefined8 *)*param_6;
          uVar92 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          uVar37 = *(undefined8 *)*(undefined1 (*) [24])(local_12e0 + lVar31);
          uVar92 = *(undefined8 *)(local_12e0 + lVar31 + 8);
          uVar124 = *(undefined8 *)(local_12c8 + lVar31 + -8);
          uVar135 = *(undefined8 *)(local_12c8 + lVar31);
          uVar145 = *(undefined8 *)(local_12c8 + lVar31 + 8);
          uVar157 = *(undefined8 *)(local_12b0 + lVar31 + -8);
          cVar29 = cVar24;
        }
      }
      else {
        auVar70._24_8_ = 0;
        auVar70._0_24_ = *param_6;
        auVar113._24_8_ = 0;
        auVar113._0_24_ = *(undefined1 (*) [24])(local_12e0 + lVar31);
        auVar47 = vminpd_avx(auVar70,auVar113);
        uVar37 = auVar47._0_8_;
        auVar42 = vshufpd_avx(auVar47._0_16_,auVar47._0_16_,1);
        uVar92 = auVar42._0_8_;
        uVar124 = auVar47._16_8_;
        auVar141._24_8_ = 0;
        auVar141._0_24_ = param_6[1];
        auVar155._16_8_ = *(undefined8 *)(local_12b0 + lVar31 + -8);
        auVar155._0_16_ = *(undefined1 (*) [16])(local_12c8 + lVar31);
        auVar155._24_8_ = 0;
        auVar47 = vmaxpd_avx(auVar141,auVar155);
        uVar135 = auVar47._0_8_;
        auVar42 = vshufpd_avx(auVar47._0_16_,auVar47._0_16_,1);
        uVar145 = auVar42._0_8_;
        uVar157 = auVar47._16_8_;
      }
      uVar25 = uVar25 & ~(1L << (uVar19 & 0x3f));
      *(undefined8 *)*param_6 = uVar37;
      *(undefined8 *)(*param_6 + 8) = uVar92;
      *(undefined8 *)(*param_6 + 0x10) = uVar124;
      *(undefined8 *)param_6[1] = uVar135;
      *(undefined8 *)(param_6[1] + 8) = uVar145;
      *(undefined8 *)(param_6[1] + 0x10) = uVar157;
      param_6[2][0] = cVar29;
    } while (uVar25 != 0);
    return;
  }
  _local_1120 = *param_8;
  local_1620 = ZEXT1632(ZEXT816(0));
  local_1640 = ZEXT1632(ZEXT816(0));
  local_1660 = ZEXT1632(ZEXT816(0));
  local_1680 = ZEXT1632(ZEXT816(0));
  local_16a0 = ZEXT1632(ZEXT816(0));
  local_16c0 = ZEXT1632(ZEXT816(0));
  local_16e0 = ZEXT1632(ZEXT816(0));
  local_1700 = ZEXT1632(ZEXT816(0));
  local_1720 = ZEXT1632(ZEXT816(0));
  local_1740 = ZEXT1632(ZEXT816(0));
  local_1760 = ZEXT1632(ZEXT816(0));
  local_1780 = ZEXT1632(ZEXT816(0));
  local_1600 = 0;
  if ((int)uVar26 < 1) {
    iVar27 = 0;
  }
  else {
    iVar27 = 0;
    local_1360._4_4_ = __real_00000038;
    local_1360._0_4_ = __real_00000038;
    local_1360._8_4_ = __real_00000038;
    local_1360._12_4_ = __real_00000038;
    local_1360._16_4_ = __real_00000038;
    local_1360._20_4_ = __real_00000038;
    local_1360._24_4_ = __real_00000038;
    local_1360._28_4_ = __real_00000038;
    auVar200 = ZEXT3264(local_1360);
    local_1380 = __real_0000000000000008;
    lStack_1378 = __real_0000000000000008;
    lStack_1370 = __real_0000000000000008;
    lStack_1368 = __real_0000000000000008;
    local_13a0 = __real_0000000000000010;
    lStack_1398 = __real_0000000000000010;
    lStack_1390 = __real_0000000000000010;
    lStack_1388 = __real_0000000000000010;
    local_13c0 = __real_0000000000000018;
    lStack_13b8 = __real_0000000000000018;
    lStack_13b0 = __real_0000000000000018;
    lStack_13a8 = __real_0000000000000018;
    local_13e0 = __real_0000000000000020;
    lStack_13d8 = __real_0000000000000020;
    lStack_13d0 = __real_0000000000000020;
    lStack_13c8 = __real_0000000000000020;
    local_1400 = __real_0000000000000028;
    lStack_13f8 = __real_0000000000000028;
    lStack_13f0 = __real_0000000000000028;
    lStack_13e8 = __real_0000000000000028;
    local_1340 = __real_0000000000000030;
    lStack_1338 = __real_0000000000000030;
    lStack_1330 = __real_0000000000000030;
    lStack_1328 = __real_0000000000000030;
    auVar209 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar43._4_4_ = iVar27;
      auVar43._0_4_ = iVar27;
      auVar43._8_4_ = iVar27;
      auVar43._12_4_ = iVar27;
      auVar43._16_4_ = iVar27;
      auVar43._20_4_ = iVar27;
      auVar43._24_4_ = iVar27;
      auVar43._28_4_ = iVar27;
      auVar137 = vpor_avx2(auVar43,
                           ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar47 = *(undefined1 (*) [32])(local_1a60._0_8_ + (ulonglong)(uint)(iVar27 * 4));
      auVar44 = vpmulld_avx2(auVar137,auVar200._0_32_);
      auVar146 = vpmovzxdq_avx2(auVar44._0_16_);
      auVar44 = vpmovzxdq_avx2(auVar44._16_16_);
      lVar31 = auVar146._0_8_;
      lVar76 = auVar146._8_8_;
      lVar82 = auVar146._16_8_;
      lVar88 = auVar146._24_8_;
      auVar42 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + lVar31 + local_1340)),
                            (uint)*(byte *)(param_4 + lVar76 + lStack_1338),1);
      uVar22 = local_17a0._0_4_;
      auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + lVar82 + lStack_1330),2);
      auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + lVar88 + lStack_1328),3);
      auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._0_8_ + local_1340),4);
      auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._8_8_ + lStack_1338),5);
      auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._16_8_ + lStack_1330),6);
      vpslld_avx2(auVar47,2);
      auVar146 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar188 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
      auVar39 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar44._24_8_ + lStack_1328),7);
      auVar146 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar44 = vpcmpeqd_avx2(auVar188,auVar146);
      auVar42 = vpackssdw_avx(SUB3216(auVar44 ^ auVar146,0),SUB3216(auVar44 ^ auVar146,0x10));
      auVar39 = vpcmpeqb_avx(auVar209._0_16_,auVar39);
      auVar39 = vpmovsxbw_avx(auVar39 ^ ___xmm_ffffffffffffffffffffffffffffffff);
      auVar39 = vpand_avx(auVar42,auVar39);
      in_ZMM6 = ZEXT1664(auVar39);
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') {
        auVar146 = vpslld_avx2(auVar137,3);
        auVar146 = vpsubd_avx2(auVar146,auVar137);
        vpmovzxdq_avx2(auVar146._16_16_);
        auVar44 = vpmovzxdq_avx2(auVar146._0_16_);
        auVar146 = vpcmpeqd_avx2(ZEXT1632(auVar42),ZEXT1632(auVar42));
        local_19a0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
        auVar146 = vpcmpeqd_avx2(auVar44,auVar44);
        auVar188 = vgatherqpd(ZEXT832(0),auVar146);
        auVar14._0_8_ = lVar31 + local_1380;
        auVar14._8_8_ = lVar76 + lStack_1378;
        auVar14._16_8_ = lVar82 + lStack_1370;
        auVar14._24_8_ = lVar88 + lStack_1368;
        auVar146 = vpcmpeqd_avx2(auVar188,auVar188);
        local_19c0 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
        auVar146 = vpcmpeqd_avx2(auVar14,auVar14);
        auVar158 = vgatherqpd(ZEXT832(0),auVar146);
        auVar15._0_8_ = lVar31 + local_13a0;
        auVar15._8_8_ = lVar76 + lStack_1398;
        auVar15._16_8_ = lVar82 + lStack_1390;
        auVar15._24_8_ = lVar88 + lStack_1388;
        auVar146 = vpcmpeqd_avx2(auVar158,auVar158);
        local_19e0 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
        auVar146 = vpcmpeqd_avx2(auVar15,auVar15);
        local_1a00 = vgatherqpd(ZEXT832(0),auVar146);
        auVar16._0_8_ = lVar31 + local_13c0;
        auVar16._8_8_ = lVar76 + lStack_13b8;
        auVar16._16_8_ = lVar82 + lStack_13b0;
        auVar16._24_8_ = lVar88 + lStack_13a8;
        auVar146 = vpcmpeqd_avx2(local_1a00,local_1a00);
        local_1a20 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
        auVar146 = vpcmpeqd_avx2(auVar16,auVar16);
        auVar159 = vgatherqpd(ZEXT832(0),auVar146);
        auVar17._0_8_ = lVar31 + local_13e0;
        auVar17._8_8_ = lVar76 + lStack_13d8;
        auVar17._16_8_ = lVar82 + lStack_13d0;
        auVar17._24_8_ = lVar88 + lStack_13c8;
        auVar146 = vpcmpeqd_avx2(auVar159,auVar159);
        local_1ae0 = vgatherqpd(ZEXT832(0) << 0x40,auVar146);
        auVar146 = vpcmpeqd_avx2(auVar17,auVar17);
        _local_1ac0 = vgatherqpd(ZEXT832(0),auVar146);
        auVar21._8_8_ = lStack_13f8;
        auVar21._0_8_ = local_1400;
        auVar21._16_8_ = lStack_13f0;
        auVar21._24_8_ = lStack_13e8;
        auVar18._0_8_ = lVar31 + local_1400;
        auVar18._8_8_ = lVar76 + lStack_13f8;
        auVar18._16_8_ = lVar82 + lStack_13f0;
        auVar18._24_8_ = lVar88 + lStack_13e8;
        auVar146 = vpcmpeqd_avx2(auVar21,auVar21);
        local_1b00 = vgatherqpd(ZEXT832(0),auVar146);
        auVar146 = vpcmpeqd_avx2(auVar18,auVar18);
        local_1b20 = vgatherqpd(ZEXT832(0),auVar146);
        auVar137 = vpslld_avx2(auVar47,7);
        auVar42 = vpshufd_avx(auVar39,0xee);
        auVar47 = vpmovsxwq_avx2(auVar42);
        auVar44 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
        auVar93._4_4_ = __real_00000008;
        auVar93._0_4_ = __real_00000008;
        auVar93._8_4_ = __real_00000008;
        auVar93._12_4_ = __real_00000008;
        auVar93._16_4_ = __real_00000008;
        auVar93._20_4_ = __real_00000008;
        auVar93._24_4_ = __real_00000008;
        auVar93._28_4_ = __real_00000008;
        vpor_avx2(auVar137,auVar93);
        auVar146 = vpmovsxwq_avx2(auVar39);
        auVar160 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar161 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar94._4_4_ = __real_00000010;
        auVar94._0_4_ = __real_00000010;
        auVar94._8_4_ = __real_00000010;
        auVar94._12_4_ = __real_00000010;
        auVar94._16_4_ = __real_00000010;
        auVar94._20_4_ = __real_00000010;
        auVar94._24_4_ = __real_00000010;
        auVar94._28_4_ = __real_00000010;
        vpor_avx2(auVar137,auVar94);
        auVar162 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar163 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar95._4_4_ = __real_00000018;
        auVar95._0_4_ = __real_00000018;
        auVar95._8_4_ = __real_00000018;
        auVar95._12_4_ = __real_00000018;
        auVar95._16_4_ = __real_00000018;
        auVar95._20_4_ = __real_00000018;
        auVar95._24_4_ = __real_00000018;
        auVar95._28_4_ = __real_00000018;
        vpor_avx2(auVar137,auVar95);
        auVar164 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar96._4_4_ = __real_00000020;
        auVar96._0_4_ = __real_00000020;
        auVar96._8_4_ = __real_00000020;
        auVar96._12_4_ = __real_00000020;
        auVar96._16_4_ = __real_00000020;
        auVar96._20_4_ = __real_00000020;
        auVar96._24_4_ = __real_00000020;
        auVar96._28_4_ = __real_00000020;
        vpor_avx2(auVar137,auVar96);
        auVar166 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar97._4_4_ = __real_00000028;
        auVar97._0_4_ = __real_00000028;
        auVar97._8_4_ = __real_00000028;
        auVar97._12_4_ = __real_00000028;
        auVar97._16_4_ = __real_00000028;
        auVar97._20_4_ = __real_00000028;
        auVar97._24_4_ = __real_00000028;
        auVar97._28_4_ = __real_00000028;
        vpor_avx2(auVar137,auVar97);
        auVar168 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar169 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar98._4_4_ = __real_00000030;
        auVar98._0_4_ = __real_00000030;
        auVar98._8_4_ = __real_00000030;
        auVar98._12_4_ = __real_00000030;
        auVar98._16_4_ = __real_00000030;
        auVar98._20_4_ = __real_00000030;
        auVar98._24_4_ = __real_00000030;
        auVar98._28_4_ = __real_00000030;
        vpor_avx2(auVar137,auVar98);
        auVar170 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar171 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        vpor_avx2(auVar200._0_32_,auVar137);
        auVar172 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar173 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar99._4_4_ = __real_00000040;
        auVar99._0_4_ = __real_00000040;
        auVar99._8_4_ = __real_00000040;
        auVar99._12_4_ = __real_00000040;
        auVar99._16_4_ = __real_00000040;
        auVar99._20_4_ = __real_00000040;
        auVar99._24_4_ = __real_00000040;
        auVar99._28_4_ = __real_00000040;
        vpor_avx2(auVar137,auVar99);
        auVar174 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        auVar175 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar100._4_4_ = __real_00000048;
        auVar100._0_4_ = __real_00000048;
        auVar100._8_4_ = __real_00000048;
        auVar100._12_4_ = __real_00000048;
        auVar100._16_4_ = __real_00000048;
        auVar100._20_4_ = __real_00000048;
        auVar100._24_4_ = __real_00000048;
        auVar100._28_4_ = __real_00000048;
        vpor_avx2(auVar137,auVar100);
        auVar176 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        local_1a80._0_16_ = auVar39;
        local_aa0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar47);
        auVar101._4_4_ = __real_00000050;
        auVar101._0_4_ = __real_00000050;
        auVar101._8_4_ = __real_00000050;
        auVar101._12_4_ = __real_00000050;
        auVar101._16_4_ = __real_00000050;
        auVar101._20_4_ = __real_00000050;
        auVar101._24_4_ = __real_00000050;
        auVar101._28_4_ = __real_00000050;
        vpor_avx2(auVar137,auVar101);
        local_a80 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
        local_a60 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar47);
        auVar102._4_4_ = __real_00000058;
        auVar102._0_4_ = __real_00000058;
        auVar102._8_4_ = __real_00000058;
        auVar102._12_4_ = __real_00000058;
        auVar102._16_4_ = __real_00000058;
        auVar102._20_4_ = __real_00000058;
        auVar102._24_4_ = __real_00000058;
        auVar102._28_4_ = __real_00000058;
        vpor_avx2(auVar137,auVar102);
        local_a40 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
        local_a20 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
        auVar103._4_4_ = __real_00000060;
        auVar103._0_4_ = __real_00000060;
        auVar103._8_4_ = __real_00000060;
        auVar103._12_4_ = __real_00000060;
        auVar103._16_4_ = __real_00000060;
        auVar103._20_4_ = __real_00000060;
        auVar103._24_4_ = __real_00000060;
        auVar103._28_4_ = __real_00000060;
        vpor_avx2(auVar137,auVar103);
        local_a00 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
        local_9e0 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar104._4_4_ = __real_00000068;
        auVar104._0_4_ = __real_00000068;
        auVar104._8_4_ = __real_00000068;
        auVar104._12_4_ = __real_00000068;
        auVar104._16_4_ = __real_00000068;
        auVar104._20_4_ = __real_00000068;
        auVar104._24_4_ = __real_00000068;
        auVar104._28_4_ = __real_00000068;
        vpor_avx2(auVar137,auVar104);
        _local_9c0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
        _local_9a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar105._4_4_ = __real_00000070;
        auVar105._0_4_ = __real_00000070;
        auVar105._8_4_ = __real_00000070;
        auVar105._12_4_ = __real_00000070;
        auVar105._16_4_ = __real_00000070;
        auVar105._20_4_ = __real_00000070;
        auVar105._24_4_ = __real_00000070;
        auVar105._28_4_ = __real_00000070;
        vpor_avx2(auVar137,auVar105);
        _local_980 = vgatherdpd(ZEXT832(0),auVar146);
        _local_960 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        _local_d00 = vgatherdpd(ZEXT832(0),auVar146);
        _local_940 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
        _local_920 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
        auVar42 = vpacksswb_avx(auVar39,auVar39);
        bVar28 = SUB161(auVar42 >> 7,0) & 1;
        bVar5 = SUB161(auVar42 >> 0xf,0) & 1;
        bVar6 = SUB161(auVar42 >> 0x17,0) & 1;
        bVar7 = SUB161(auVar42 >> 0x1f,0) & 1;
        bVar8 = SUB161(auVar42 >> 0x27,0) & 1;
        bVar9 = SUB161(auVar42 >> 0x2f,0) & 1;
        bVar10 = SUB161(auVar42 >> 0x37,0) & 1;
        bVar11 = SUB161(auVar42 >> 0x3f,0) << 7;
        local_21c0 = auVar44._0_8_;
        uStack_21b8 = auVar44._8_8_;
        uStack_21b0 = auVar44._16_8_;
        uStack_21a8 = auVar44._24_8_;
        adStack_cf0[2] = (double)local_21c0;
        adStack_cf0[3] = (double)uStack_21b8;
        adStack_cf0[4] = (double)uStack_21b0;
        adStack_cf0[5] = (double)uStack_21a8;
        local_21a0._0_8_ = auVar161._0_8_;
        local_21a0._8_8_ = auVar161._8_8_;
        dStack_2190 = auVar161._16_8_;
        dStack_2188 = auVar161._24_8_;
        local_ca0 = local_21a0._0_8_;
        uStack_c98 = local_21a0._8_8_;
        uStack_c90 = dStack_2190;
        uStack_c88 = dStack_2188;
        local_21e0._0_8_ = auVar160._0_8_;
        local_21e0._8_8_ = auVar160._8_8_;
        dStack_21d0 = auVar160._16_8_;
        dStack_21c8 = auVar160._24_8_;
        adStack_cf0[6] = (double)local_21e0._0_8_;
        adStack_cf0[7] = (double)local_21e0._8_8_;
        adStack_cf0[8] = dStack_21d0;
        uStack_ca8 = dStack_21c8;
        local_2160 = auVar163._0_8_;
        uStack_2158 = auVar163._8_8_;
        uStack_2150 = auVar163._16_8_;
        uStack_2148 = auVar163._24_8_;
        local_c60 = local_2160;
        uStack_c58 = uStack_2158;
        uStack_c50 = uStack_2150;
        uStack_c48 = uStack_2148;
        local_2180._0_8_ = auVar162._0_8_;
        local_2180._8_8_ = auVar162._8_8_;
        dStack_2170 = auVar162._16_8_;
        dStack_2168 = auVar162._24_8_;
        local_c80 = local_2180._0_8_;
        uStack_c78 = local_2180._8_8_;
        uStack_c70 = dStack_2170;
        uStack_c68 = dStack_2168;
        local_2120 = auVar165._0_8_;
        uStack_2118 = auVar165._8_8_;
        uStack_2110 = auVar165._16_8_;
        uStack_2108 = auVar165._24_8_;
        local_c20 = local_2120;
        uStack_c18 = uStack_2118;
        uStack_c10 = uStack_2110;
        uStack_c08 = uStack_2108;
        local_2100 = auVar164._0_8_;
        uStack_20f8 = auVar164._8_8_;
        uStack_20f0 = auVar164._16_8_;
        uStack_20e8 = auVar164._24_8_;
        local_c40 = local_2100;
        uStack_c38 = uStack_20f8;
        uStack_c30 = uStack_20f0;
        uStack_c28 = uStack_20e8;
        local_2060 = auVar167._0_8_;
        uStack_2058 = auVar167._8_8_;
        uStack_2050 = auVar167._16_8_;
        uStack_2048 = auVar167._24_8_;
        local_be0 = local_2060;
        uStack_bd8 = uStack_2058;
        uStack_bd0 = uStack_2050;
        uStack_bc8 = uStack_2048;
        local_2140 = auVar166._0_8_;
        uStack_2138 = auVar166._8_8_;
        uStack_2130 = auVar166._16_8_;
        uStack_2128 = auVar166._24_8_;
        local_c00 = local_2140;
        uStack_bf8 = uStack_2138;
        uStack_bf0 = uStack_2130;
        uStack_be8 = uStack_2128;
        local_20a0 = auVar169._0_8_;
        uStack_2098 = auVar169._8_8_;
        uStack_2090 = auVar169._16_8_;
        uStack_2088 = auVar169._24_8_;
        local_ba0 = local_20a0;
        uStack_b98 = uStack_2098;
        uStack_b90 = uStack_2090;
        uStack_b88 = uStack_2088;
        local_2080 = auVar168._0_8_;
        uStack_2078 = auVar168._8_8_;
        uStack_2070 = auVar168._16_8_;
        uStack_2068 = auVar168._24_8_;
        local_bc0 = local_2080;
        uStack_bb8 = uStack_2078;
        uStack_bb0 = uStack_2070;
        uStack_ba8 = uStack_2068;
        local_20e0 = auVar171._0_8_;
        uStack_20d8 = auVar171._8_8_;
        uStack_20d0 = auVar171._16_8_;
        uStack_20c8 = auVar171._24_8_;
        local_b60 = local_20e0;
        uStack_b58 = uStack_20d8;
        uStack_b50 = uStack_20d0;
        uStack_b48 = uStack_20c8;
        local_20c0 = auVar170._0_8_;
        uStack_20b8 = auVar170._8_8_;
        uStack_20b0 = auVar170._16_8_;
        uStack_20a8 = auVar170._24_8_;
        local_b80 = local_20c0;
        uStack_b78 = uStack_20b8;
        uStack_b70 = uStack_20b0;
        uStack_b68 = uStack_20a8;
        local_2000[0xc] = auVar173._0_8_;
        local_2000[0xd] = auVar173._8_8_;
        local_2000[0xe] = auVar173._16_8_;
        local_2000[0xf] = auVar173._24_8_;
        local_b20 = local_2000[0xc];
        uStack_b18 = local_2000[0xd];
        uStack_b10 = local_2000[0xe];
        uStack_b08 = local_2000[0xf];
        local_2000[0x10] = auVar172._0_8_;
        local_2000[0x11] = auVar172._8_8_;
        local_2000[0x12] = auVar172._16_8_;
        local_2000[0x13] = auVar172._24_8_;
        local_b40 = local_2000[0x10];
        uStack_b38 = local_2000[0x11];
        uStack_b30 = local_2000[0x12];
        uStack_b28 = local_2000[0x13];
        local_2000[4] = auVar175._0_8_;
        local_2000[5] = auVar175._8_8_;
        local_2000[6] = auVar175._16_8_;
        local_2000[7] = auVar175._24_8_;
        local_ae0 = local_2000[4];
        uStack_ad8 = local_2000[5];
        uStack_ad0 = local_2000[6];
        uStack_ac8 = local_2000[7];
        local_2000[8] = auVar174._0_8_;
        local_2000[9] = auVar174._8_8_;
        local_2000[10] = auVar174._16_8_;
        local_2000[0xb] = auVar174._24_8_;
        local_b00 = local_2000[8];
        uStack_af8 = local_2000[9];
        uStack_af0 = local_2000[10];
        uStack_ae8 = local_2000[0xb];
        local_2000[0] = auVar176._0_8_;
        local_2000[1] = auVar176._8_8_;
        local_2000[2] = auVar176._16_8_;
        local_2000[3] = auVar176._24_8_;
        local_ac0 = local_2000[0];
        uStack_ab8 = local_2000[1];
        uStack_ab0 = local_2000[2];
        uStack_aa8 = local_2000[3];
        dVar1 = param_5[8];
        dVar32 = param_5[0xc];
        dVar33 = *param_5;
        dVar34 = param_5[1];
        lVar31 = 0xc0;
        dVar35 = param_5[5];
        dVar36 = param_5[9];
        dVar71 = param_5[0xd];
        dVar72 = param_5[2];
        dVar73 = param_5[6];
        dVar74 = param_5[10];
        dVar75 = param_5[0xe];
        dVar77 = param_5[3];
        dVar78 = param_5[7];
        dVar79 = param_5[0xb];
        dVar80 = param_5[0xf];
        auVar47 = vpmovsxwd_avx2(auVar39);
        do {
          dVar83 = *(double *)(local_dc0 + lVar31);
          dVar84 = *(double *)(local_dc0 + lVar31 + 8);
          dVar85 = *(double *)(local_dc0 + lVar31 + 0x10);
          dVar86 = *(double *)(local_dc0 + lVar31 + 0x18);
          dVar87 = *(double *)(local_da0 + lVar31);
          dVar89 = *(double *)(local_da0 + lVar31 + 8);
          dVar90 = *(double *)(local_da0 + lVar31 + 0x10);
          dVar91 = *(double *)(local_da0 + lVar31 + 0x18);
          dVar114 = *(double *)(local_d80 + lVar31);
          dVar115 = *(double *)(local_d80 + lVar31 + 8);
          dVar116 = *(double *)(local_d80 + lVar31 + 0x10);
          dVar117 = *(double *)(local_d80 + lVar31 + 0x18);
          dVar118 = *(double *)(local_d60 + lVar31);
          dVar119 = *(double *)(local_d60 + lVar31 + 8);
          dVar120 = *(double *)(local_d60 + lVar31 + 0x10);
          dVar121 = *(double *)(local_d60 + lVar31 + 0x18);
          dVar122 = *(double *)(local_d40 + lVar31);
          dVar123 = *(double *)(local_d40 + lVar31 + 8);
          dVar131 = *(double *)(local_d40 + lVar31 + 0x10);
          dVar132 = *(double *)(local_d40 + lVar31 + 0x18);
          dVar133 = *(double *)(local_d20 + lVar31);
          dVar134 = *(double *)(local_d20 + lVar31 + 8);
          dVar142 = *(double *)(local_d20 + lVar31 + 0x10);
          dVar143 = *(double *)(local_d20 + lVar31 + 0x18);
          dVar144 = *(double *)((longlong)adStack_cf0 + lVar31 + 0x10);
          dVar156 = *(double *)((longlong)adStack_cf0 + lVar31 + 0x18);
          dVar182 = *(double *)((longlong)adStack_cf0 + lVar31 + 0x20);
          dVar183 = *(double *)((longlong)adStack_cf0 + lVar31 + 0x28);
          dVar81 = param_5[4];
          *(double *)((longlong)local_2000 + lVar31 + 0x20) =
               dVar144 * dVar32 + dVar133 * dVar1 + dVar118 * dVar81 + dVar87 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x28) =
               dVar156 * dVar32 + dVar134 * dVar1 + dVar119 * dVar81 + dVar89 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x30) =
               dVar182 * dVar32 + dVar142 * dVar1 + dVar120 * dVar81 + dVar90 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x38) =
               dVar183 * dVar32 + dVar143 * dVar1 + dVar121 * dVar81 + dVar91 * dVar33 + 0.0;
          dVar184 = *(double *)(local_d00 + lVar31);
          dVar225 = *(double *)(local_d00 + lVar31 + 8);
          dVar227 = *(double *)(local_d00 + lVar31 + 0x10);
          dVar228 = *(double *)(local_d00 + lVar31 + 0x18);
          *(double *)((longlong)local_2000 + lVar31) =
               dVar184 * dVar32 + dVar122 * dVar1 + dVar114 * dVar81 + dVar83 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 8) =
               dVar225 * dVar32 + dVar123 * dVar1 + dVar115 * dVar81 + dVar84 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x10) =
               dVar227 * dVar32 + dVar131 * dVar1 + dVar116 * dVar81 + dVar85 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x18) =
               dVar228 * dVar32 + dVar132 * dVar1 + dVar117 * dVar81 + dVar86 * dVar33 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x60) =
               dVar144 * dVar71 + dVar133 * dVar36 + dVar118 * dVar35 + dVar87 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x68) =
               dVar156 * dVar71 + dVar134 * dVar36 + dVar119 * dVar35 + dVar89 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x70) =
               dVar182 * dVar71 + dVar142 * dVar36 + dVar120 * dVar35 + dVar90 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x78) =
               dVar183 * dVar71 + dVar143 * dVar36 + dVar121 * dVar35 + dVar91 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x40) =
               dVar184 * dVar71 + dVar122 * dVar36 + dVar114 * dVar35 + dVar83 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x48) =
               dVar225 * dVar71 + dVar123 * dVar36 + dVar115 * dVar35 + dVar84 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x50) =
               dVar227 * dVar71 + dVar131 * dVar36 + dVar116 * dVar35 + dVar85 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x58) =
               dVar228 * dVar71 + dVar132 * dVar36 + dVar117 * dVar35 + dVar86 * dVar34 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0xa0) =
               dVar144 * dVar75 + dVar133 * dVar74 + dVar118 * dVar73 + dVar87 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0xa8) =
               dVar156 * dVar75 + dVar134 * dVar74 + dVar119 * dVar73 + dVar89 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0xb0) =
               dVar182 * dVar75 + dVar142 * dVar74 + dVar120 * dVar73 + dVar90 * dVar72 + 0.0;
          *(double *)(local_1f40 + lVar31 + -8) =
               dVar183 * dVar75 + dVar143 * dVar74 + dVar121 * dVar73 + dVar91 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x80) =
               dVar184 * dVar75 + dVar122 * dVar74 + dVar114 * dVar73 + dVar83 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x88) =
               dVar225 * dVar75 + dVar123 * dVar74 + dVar115 * dVar73 + dVar84 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x90) =
               dVar227 * dVar75 + dVar131 * dVar74 + dVar116 * dVar73 + dVar85 * dVar72 + 0.0;
          *(double *)((longlong)local_2000 + lVar31 + 0x98) =
               dVar228 * dVar75 + dVar132 * dVar74 + dVar117 * dVar73 + dVar86 * dVar72 + 0.0;
          *(double *)(local_1f20 + lVar31) =
               dVar80 * dVar144 + dVar79 * dVar133 + dVar78 * dVar118 + dVar77 * dVar87 + 0.0;
          *(double *)(local_1f20 + lVar31 + 8) =
               dVar80 * dVar156 + dVar79 * dVar134 + dVar78 * dVar119 + dVar77 * dVar89 + 0.0;
          *(double *)(local_1f20 + lVar31 + 0x10) =
               dVar80 * dVar182 + dVar79 * dVar142 + dVar78 * dVar120 + dVar77 * dVar90 + 0.0;
          *(double *)(local_1f20 + lVar31 + 0x18) =
               dVar80 * dVar183 + dVar79 * dVar143 + dVar78 * dVar121 + dVar77 * dVar91 + 0.0;
          *(double *)(local_1f40 + lVar31) =
               dVar80 * dVar184 + dVar79 * dVar122 + dVar78 * dVar114 + dVar77 * dVar83 + 0.0;
          *(double *)(local_1f40 + lVar31 + 8) =
               dVar80 * dVar225 + dVar79 * dVar123 + dVar78 * dVar115 + dVar77 * dVar84 + 0.0;
          *(double *)(local_1f40 + lVar31 + 0x10) =
               dVar80 * dVar227 + dVar79 * dVar131 + dVar78 * dVar116 + dVar77 * dVar85 + 0.0;
          *(double *)(local_1f40 + lVar31 + 0x18) =
               dVar80 * dVar228 + dVar79 * dVar132 + dVar78 * dVar117 + dVar77 * dVar86 + 0.0;
          lVar31 = lVar31 + 0x100;
        } while (lVar31 != 0x4c0);
        local_2040 = auVar188._0_8_;
        dStack_2038 = auVar188._8_8_;
        dStack_2030 = auVar188._16_8_;
        dStack_2028 = auVar188._24_8_;
        local_2000[0x14] = auVar159._0_8_;
        local_2000[0x15] = auVar159._8_8_;
        local_2000[0x16] = auVar159._16_8_;
        local_2000[0x17] = auVar159._24_8_;
        local_2020 = auVar158._0_8_;
        dStack_2018 = auVar158._8_8_;
        dStack_2010 = auVar158._16_8_;
        dStack_2008 = auVar158._24_8_;
        dVar32 = __real_3fe0000000000000 * (local_2040 + local_2000[0x14]);
        dVar71 = __real_3fe0000000000000 * (dStack_2038 + local_2000[0x15]);
        dVar77 = __real_3fe0000000000000 * (dStack_2030 + local_2000[0x16]);
        dVar83 = __real_3fe0000000000000 * (dStack_2028 + local_2000[0x17]);
        dVar89 = __real_3fe0000000000000 * (local_2020 + (double)local_1ac0._0_8_);
        dVar114 = __real_3fe0000000000000 * (dStack_2018 + (double)local_1ac0._8_8_);
        dVar117 = __real_3fe0000000000000 * (dStack_2010 + dStack_1ab0);
        dVar120 = __real_3fe0000000000000 * (dStack_2008 + dStack_1aa8);
        dVar33 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
        dVar72 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
        dVar78 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
        dVar84 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
        dVar90 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1ae0._0_8_);
        dVar115 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1ae0._8_8_);
        dVar118 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1ae0._16_8_);
        dVar121 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1ae0._24_8_);
        local_1a40 = _local_1f40;
        local_1300 = (double)local_1f00._0_8_;
        dStack_12f8 = (double)local_1f00._8_8_;
        dStack_12f0 = dStack_1ef0;
        dStack_12e8 = dStack_1ee8;
        dVar1 = (double)CONCAT17(uStack_1db9,
                                 CONCAT16(uStack_1dba,
                                          CONCAT15(uStack_1dbb,
                                                   CONCAT14(uStack_1dbc,
                                                            CONCAT13(uStack_1dbd,
                                                                     CONCAT12(uStack_1dbe,
                                                                              CONCAT11(uStack_1dbf,
                                                                                       local_1dc0)))
                                                           ))));
        local_1320 = (double)local_1ec0._0_8_;
        dStack_1318 = (double)local_1ec0._8_8_;
        dStack_1310 = dStack_1eb0;
        dStack_1308 = dStack_1ea8;
        dVar34 = __real_3fe0000000000000 * (local_19e0._0_8_ + local_1b00._0_8_);
        dVar73 = __real_3fe0000000000000 * (local_19e0._8_8_ + local_1b00._8_8_);
        dVar79 = __real_3fe0000000000000 * (local_19e0._16_8_ + local_1b00._16_8_);
        dVar85 = __real_3fe0000000000000 * (local_19e0._24_8_ + local_1b00._24_8_);
        dVar35 = __real_3fe0000000000000 * (local_1a00._0_8_ + local_1b20._0_8_);
        dVar74 = __real_3fe0000000000000 * (local_1a00._8_8_ + local_1b20._8_8_);
        dVar80 = __real_3fe0000000000000 * (local_1a00._16_8_ + local_1b20._16_8_);
        dVar86 = __real_3fe0000000000000 * (local_1a00._24_8_ + local_1b20._24_8_);
        auVar146 = vsubpd_avx(local_1a20,local_19a0);
        auVar44 = vsubpd_avx(auVar159,auVar188);
        auVar137 = vsubpd_avx(local_1ae0,local_19c0);
        auVar188 = vsubpd_avx(_local_1ac0,auVar158);
        auVar158 = vsubpd_avx(local_1b20,local_1a00);
        auVar159 = vsubpd_avx(local_1b00,local_19e0);
        dVar36 = __real_3fe0000000000000 * auVar44._0_8_;
        dVar75 = __real_3fe0000000000000 * auVar44._8_8_;
        dVar81 = __real_3fe0000000000000 * auVar44._16_8_;
        dVar87 = __real_3fe0000000000000 * auVar44._24_8_;
        dVar134 = __real_3fe0000000000000 * auVar146._0_8_;
        dVar142 = __real_3fe0000000000000 * auVar146._8_8_;
        dVar143 = __real_3fe0000000000000 * auVar146._16_8_;
        dVar144 = __real_3fe0000000000000 * auVar146._24_8_;
        dVar123 = auVar188._0_8_ * __real_3fe0000000000000;
        dVar131 = auVar188._8_8_ * __real_3fe0000000000000;
        dVar132 = auVar188._16_8_ * __real_3fe0000000000000;
        dVar133 = auVar188._24_8_ * __real_3fe0000000000000;
        dVar91 = __real_3fe0000000000000 * auVar137._0_8_;
        dVar116 = __real_3fe0000000000000 * auVar137._8_8_;
        dVar119 = __real_3fe0000000000000 * auVar137._16_8_;
        dVar122 = __real_3fe0000000000000 * auVar137._24_8_;
        dVar156 = __real_3fe0000000000000 * auVar159._0_8_;
        dVar182 = __real_3fe0000000000000 * auVar159._8_8_;
        dVar183 = __real_3fe0000000000000 * auVar159._16_8_;
        dVar184 = __real_3fe0000000000000 * auVar159._24_8_;
        dVar225 = __real_3fe0000000000000 * auVar158._0_8_;
        dVar227 = __real_3fe0000000000000 * auVar158._8_8_;
        dVar228 = __real_3fe0000000000000 * auVar158._16_8_;
        dVar229 = __real_3fe0000000000000 * auVar158._24_8_;
        auVar138._0_8_ =
             dVar35 * local_1d20 + dVar32 * (double)local_1f20 + dVar89 * (double)local_1e20._0_8_ +
             local_1c20;
        auVar138._8_8_ =
             dVar74 * dStack_1d18 + dVar71 * adStack_1f18[0] + dVar114 * (double)local_1e20._8_8_ +
             dStack_1c18;
        auVar138._16_8_ =
             dVar80 * dStack_1d10 + dVar77 * adStack_1f18[1] + dVar117 * dStack_1e10 + dStack_1c10;
        auVar138._24_8_ =
             dVar86 * dStack_1d08 + dVar83 * adStack_1f18[2] + dVar120 * dStack_1e08 + dStack_1c08;
        auVar194._0_8_ =
             dVar34 * local_1d40 + dVar33 * (double)local_1f40 + dVar90 * (double)local_1e40._0_8_ +
             local_1c40;
        auVar194._8_8_ =
             dVar73 * dStack_1d38 + dVar72 * adStack_1f38[0] + dVar115 * (double)local_1e40._8_8_ +
             dStack_1c38;
        auVar194._16_8_ =
             dVar79 * dStack_1d30 + dVar78 * adStack_1f38[1] + dVar118 * dStack_1e30 + dStack_1c30;
        auVar194._24_8_ =
             dVar85 * dStack_1d28 + dVar84 * adStack_1f38[2] + dVar121 * dStack_1e28 + dStack_1c28;
        auVar236._0_8_ =
             dVar35 * local_1ce0 +
             dVar32 * (double)local_1ee0._0_8_ + dVar89 * (double)local_1de0._0_8_ + local_1be0;
        auVar236._8_8_ =
             dVar74 * dStack_1cd8 +
             dVar71 * (double)local_1ee0._8_8_ + dVar114 * (double)local_1de0._8_8_ + dStack_1bd8;
        auVar236._16_8_ =
             dVar80 * dStack_1cd0 + dVar77 * dStack_1ed0 + dVar117 * dStack_1dd0 + dStack_1bd0;
        auVar236._24_8_ =
             dVar86 * dStack_1cc8 + dVar83 * dStack_1ec8 + dVar120 * dStack_1dc8 + dStack_1bc8;
        auVar45._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar134 * (double)local_1f40)) +
             (double)((ulonglong)(dVar91 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar156 * local_1d40) & __real_7fffffffffffffff);
        auVar45._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar142 * adStack_1f38[0])) +
             (double)((ulonglong)(dVar116 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * dStack_1d38) & __real_7fffffffffffffff);
        auVar45._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar143 * adStack_1f38[1])) +
             (double)((ulonglong)(dVar119 * dStack_1e30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_1d30) & __real_7fffffffffffffff);
        auVar45._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar144 * adStack_1f38[2])) +
             (double)((ulonglong)(dVar122 * dStack_1e28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * dStack_1d28) & __real_7fffffffffffffff);
        auVar147._0_8_ =
             dVar34 * local_1d00 +
             dVar33 * (double)local_1f00._0_8_ + dVar90 * (double)local_1e00._0_8_ + local_1c00;
        auVar147._8_8_ =
             dVar73 * dStack_1cf8 +
             dVar72 * (double)local_1f00._8_8_ + dVar115 * (double)local_1e00._8_8_ + dStack_1bf8;
        auVar147._16_8_ =
             dVar79 * dStack_1cf0 + dVar78 * dStack_1ef0 + dVar118 * dStack_1df0 + dStack_1bf0;
        auVar147._24_8_ =
             dVar85 * dStack_1ce8 + dVar84 * dStack_1ee8 + dVar121 * dStack_1de8 + dStack_1be8;
        auVar189._0_8_ =
             (double)((ulonglong)(dVar225 * local_1d20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar36 * (double)local_1f20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
        auVar189._8_8_ =
             (double)((ulonglong)(dVar227 * dStack_1d18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar75 * adStack_1f18[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar131 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
        auVar189._16_8_ =
             (double)((ulonglong)(dVar228 * dStack_1d10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar81 * adStack_1f18[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar132 * dStack_1e10) & __real_7fffffffffffffff);
        auVar189._24_8_ =
             (double)((ulonglong)(dVar229 * dStack_1d08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar87 * adStack_1f18[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar133 * dStack_1e08) & __real_7fffffffffffffff);
        auVar217._0_8_ =
             local_1ca0 * dVar35 + (double)local_1ea0._0_8_ * dVar32 + dVar89 * local_1da0 +
             local_1ba0;
        auVar217._8_8_ =
             dStack_1c98 * dVar74 + (double)local_1ea0._8_8_ * dVar71 + dVar114 * dStack_1d98 +
             dStack_1b98;
        auVar217._16_8_ =
             dStack_1c90 * dVar80 + dStack_1e90 * dVar77 + dVar117 * dStack_1d90 + dStack_1b90;
        auVar217._24_8_ =
             dStack_1c88 * dVar86 + dStack_1e88 * dVar83 + dVar120 * dStack_1d88 + dStack_1b88;
        auVar126._0_8_ =
             (double)((ulonglong)(dVar134 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar91 * (double)local_1e00._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar156 * local_1d00) & __real_7fffffffffffffff);
        auVar126._8_8_ =
             (double)((ulonglong)(dVar142 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar116 * (double)local_1e00._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * dStack_1cf8) & __real_7fffffffffffffff);
        auVar126._16_8_ =
             (double)((ulonglong)(dVar143 * dStack_1ef0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar119 * dStack_1df0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_1cf0) & __real_7fffffffffffffff);
        auVar126._24_8_ =
             (double)((ulonglong)(dVar144 * dStack_1ee8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_1de8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * dStack_1ce8) & __real_7fffffffffffffff);
        auVar185._0_8_ =
             local_1cc0 * dVar34 + (double)local_1ec0._0_8_ * dVar33 + dVar90 * dVar1 + local_1bc0;
        auVar185._8_8_ =
             dStack_1cb8 * dVar73 + (double)local_1ec0._8_8_ * dVar72 + dVar115 * dStack_1db8 +
             dStack_1bb8;
        auVar185._16_8_ =
             dStack_1cb0 * dVar79 + dStack_1eb0 * dVar78 + dVar118 * dStack_1db0 + dStack_1bb0;
        auVar185._24_8_ =
             dStack_1ca8 * dVar85 + dStack_1ea8 * dVar84 + dVar121 * dStack_1da8 + dStack_1ba8;
        auVar201._0_8_ =
             (double)((ulonglong)(dVar225 * local_1ce0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar36 * (double)local_1ee0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * (double)local_1de0._0_8_) & __real_7fffffffffffffff);
        auVar201._8_8_ =
             (double)((ulonglong)(dVar227 * dStack_1cd8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar75 * (double)local_1ee0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar131 * (double)local_1de0._8_8_) & __real_7fffffffffffffff);
        auVar201._16_8_ =
             (double)((ulonglong)(dVar228 * dStack_1cd0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar81 * dStack_1ed0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar132 * dStack_1dd0) & __real_7fffffffffffffff);
        auVar201._24_8_ =
             (double)((ulonglong)(dVar229 * dStack_1cc8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar87 * dStack_1ec8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar133 * dStack_1dc8) & __real_7fffffffffffffff);
        auVar210._0_8_ =
             (double)((ulonglong)(dVar134 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar91 * dVar1) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar156 * local_1cc0) & __real_7fffffffffffffff);
        auVar210._8_8_ =
             (double)((ulonglong)(dVar142 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar116 * dStack_1db8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar182 * dStack_1cb8) & __real_7fffffffffffffff);
        auVar210._16_8_ =
             (double)((ulonglong)(dVar143 * dStack_1eb0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar119 * dStack_1db0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar183 * dStack_1cb0) & __real_7fffffffffffffff);
        auVar210._24_8_ =
             (double)((ulonglong)(dVar144 * dStack_1ea8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_1da8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar184 * dStack_1ca8) & __real_7fffffffffffffff);
        auVar106._0_8_ =
             (double)((ulonglong)(dVar225 * local_1ca0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar36 * (double)local_1ea0._0_8_)) +
             (double)((ulonglong)(dVar123 * local_1da0) & __real_7fffffffffffffff);
        auVar106._8_8_ =
             (double)((ulonglong)(dVar227 * dStack_1c98) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1ea0._8_8_)) +
             (double)((ulonglong)(dVar131 * dStack_1d98) & __real_7fffffffffffffff);
        auVar106._16_8_ =
             (double)((ulonglong)(dVar228 * dStack_1c90) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar81 * dStack_1e90)) +
             (double)((ulonglong)(dVar132 * dStack_1d90) & __real_7fffffffffffffff);
        auVar106._24_8_ =
             (double)((ulonglong)(dVar229 * dStack_1c88) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar87 * dStack_1e88)) +
             (double)((ulonglong)(dVar133 * dStack_1d88) & __real_7fffffffffffffff);
        auVar146 = vsubpd_avx(auVar194,auVar45);
        auVar44 = vsubpd_avx(auVar138,auVar189);
        auVar137 = vsubpd_avx(auVar147,auVar126);
        auVar188 = vsubpd_avx(auVar236,auVar201);
        local_21e0._8_8_ = auVar194._8_8_ + auVar45._8_8_;
        local_21e0._0_8_ = auVar194._0_8_ + auVar45._0_8_;
        dStack_21d0 = auVar194._16_8_ + auVar45._16_8_;
        dStack_21c8 = auVar194._24_8_ + auVar45._24_8_;
        auVar158 = vsubpd_avx(auVar185,auVar210);
        auVar195._0_8_ = auVar189._0_8_ + auVar138._0_8_;
        auVar195._8_8_ = auVar189._8_8_ + auVar138._8_8_;
        auVar195._16_8_ = auVar189._16_8_ + auVar138._16_8_;
        auVar195._24_8_ = auVar189._24_8_ + auVar138._24_8_;
        auVar159 = vsubpd_avx(auVar217,auVar106);
        auVar148._0_8_ = auVar126._0_8_ + auVar147._0_8_;
        auVar148._8_8_ = auVar126._8_8_ + auVar147._8_8_;
        auVar148._16_8_ = auVar126._16_8_ + auVar147._16_8_;
        auVar148._24_8_ = auVar126._24_8_ + auVar147._24_8_;
        auVar202._0_8_ = auVar201._0_8_ + auVar236._0_8_;
        auVar202._8_8_ = auVar201._8_8_ + auVar236._8_8_;
        auVar202._16_8_ = auVar201._16_8_ + auVar236._16_8_;
        auVar202._24_8_ = auVar201._24_8_ + auVar236._24_8_;
        auVar211._0_8_ = auVar210._0_8_ + auVar185._0_8_;
        auVar211._8_8_ = auVar210._8_8_ + auVar185._8_8_;
        auVar211._16_8_ = auVar210._16_8_ + auVar185._16_8_;
        auVar211._24_8_ = auVar210._24_8_ + auVar185._24_8_;
        auVar218._0_8_ = auVar217._0_8_ + auVar106._0_8_;
        auVar218._8_8_ = auVar217._8_8_ + auVar106._8_8_;
        auVar218._16_8_ = auVar217._16_8_ + auVar106._16_8_;
        auVar218._24_8_ = auVar217._24_8_ + auVar106._24_8_;
        auVar235._8_8_ = 0;
        auVar235._0_8_ = local_1600;
        auVar42 = vpcmpeqb_avx(auVar235,ZEXT816(0) << 0x40);
        auVar161 = vpmovsxbd_avx2(auVar42 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar160 = vpand_avx2(auVar161,auVar47);
        iVar30 = vmovmskps_avx(auVar160);
        if (iVar30 == 0) {
          auVar160 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a48470:
          local_21a0._0_8_ = auVar42._0_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_21a0._0_8_;
          auVar39 = vpmovzxbw_avx(auVar2);
          auVar42 = vpand_avx(auVar39,local_1a80._0_16_);
          auVar42 = vpshufb_avx(auVar42,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
            auVar161 = vpmovzxwd_avx2(auVar39);
            auVar161 = vpslld_avx2(auVar161,0x1f);
            auVar162 = vpsrad_avx2(auVar161,0x1f);
            auVar161 = auVar47 & auVar162;
            if ((((((((SUB321(auVar161 >> 0x1f,0) & 1) != 0 || (SUB321(auVar161 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar161 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar161 >> 0x7f,0) != '\0') || (SUB321(auVar161 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar161 >> 0xbf,0) != '\0') || (SUB321(auVar161 >> 0xdf,0) & 1) != 0) ||
                auVar161[0x1f] < '\0') {
              auVar163 = vpermpd_avx2(auVar162,0xd8);
              auVar161 = vshufps_avx(auVar163,auVar163,0x50);
              auVar163 = vshufps_avx(auVar163,auVar163,0xfa);
              _local_1f40 = vmaskmovpd_avx(auVar161,auVar146);
              _local_1f20 = vmaskmovpd_avx(auVar163,auVar44);
              _local_1f00 = vmaskmovpd_avx(auVar161,auVar137);
              _local_1ee0 = vmaskmovpd_avx(auVar163,auVar188);
              _local_1ec0 = vmaskmovpd_avx(auVar161,auVar158);
              _local_1ea0 = vmaskmovpd_avx(auVar163,auVar159);
              local_1e80 = vmaskmovpd_avx(auVar161,_local_21e0);
              local_1e60 = vmaskmovpd_avx(auVar163,auVar195);
              _local_1e40 = vmaskmovpd_avx(auVar161,auVar148);
              _local_1e20 = vmaskmovpd_avx(auVar163,auVar202);
              _local_1e00 = vmaskmovpd_avx(auVar161,auVar211);
              _local_1de0 = vmaskmovpd_avx(auVar163,auVar218);
              auVar42 = vpsllw_avx(auVar39,0xf);
              auVar42 = vpacksswb_avx(auVar42,auVar42);
              if ((SUB161(auVar42 >> 7,0) & 1) != 0) {
                local_1dc0 = 1;
              }
              if ((SUB161(auVar42 >> 0xf,0) & 1) != 0) {
                uStack_1dbf = 1;
              }
              if ((SUB161(auVar42 >> 0x17,0) & 1) != 0) {
                uStack_1dbe = 1;
              }
              if ((SUB161(auVar42 >> 0x1f,0) & 1) != 0) {
                uStack_1dbd = 1;
              }
              if ((SUB161(auVar42 >> 0x27,0) & 1) != 0) {
                uStack_1dbc = 1;
              }
              if ((SUB161(auVar42 >> 0x2f,0) & 1) != 0) {
                uStack_1dbb = 1;
              }
              if ((SUB161(auVar42 >> 0x37,0) & 1) != 0) {
                uStack_1dba = 1;
              }
              if ((SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
                uStack_1db9 = 1;
              }
              auVar46._0_4_ = auVar47._0_4_ & auVar162._0_4_;
              auVar46._4_4_ = auVar47._4_4_ & auVar162._4_4_;
              auVar46._8_4_ = auVar47._8_4_ & auVar162._8_4_;
              auVar46._12_4_ = auVar47._12_4_ & auVar162._12_4_;
              auVar46._16_4_ = auVar47._16_4_ & auVar162._16_4_;
              auVar46._20_4_ = auVar47._20_4_ & auVar162._20_4_;
              auVar46._24_4_ = auVar47._24_4_ & auVar162._24_4_;
              auVar46._28_4_ = auVar47._28_4_ & auVar162._28_4_;
              vmovmskps_avx(auVar160 | auVar46);
            }
          }
        }
        else {
          auVar162 = vminpd_avx(local_1780,auVar146);
          auVar164 = vpermq_avx2(auVar161,0xd8);
          auVar163 = vpshufd_avx2(auVar164,0x50);
          _local_1f40 = vmaskmovpd_avx(auVar163,auVar162);
          auVar161 = vminpd_avx(local_1760,auVar44);
          auVar162 = vpshufd_avx2(auVar164,0xfa);
          _local_1f20 = vmaskmovpd_avx(auVar162,auVar161);
          auVar161 = vminpd_avx(local_1740,auVar137);
          _local_1f00 = vmaskmovpd_avx(auVar163,auVar161);
          auVar161 = vminpd_avx(local_1720,auVar188);
          _local_1ee0 = vmaskmovpd_avx(auVar162,auVar161);
          auVar161 = vminpd_avx(local_1700,auVar158);
          _local_1ec0 = vmaskmovpd_avx(auVar163,auVar161);
          auVar161 = vminpd_avx(local_16e0,auVar159);
          _local_1ea0 = vmaskmovpd_avx(auVar162,auVar161);
          auVar161 = vmaxpd_avx(local_16c0,_local_21e0);
          local_1e80 = vmaskmovpd_avx(auVar163,auVar161);
          auVar161 = vmaxpd_avx(local_16a0,auVar195);
          local_1e60 = vmaskmovpd_avx(auVar162,auVar161);
          auVar161 = vmaxpd_avx(local_1680,auVar148);
          _local_1e40 = vmaskmovpd_avx(auVar163,auVar161);
          auVar161 = vmaxpd_avx(local_1660,auVar202);
          _local_1e20 = vmaskmovpd_avx(auVar162,auVar161);
          auVar161 = vmaxpd_avx(local_1640,auVar211);
          _local_1e00 = vmaskmovpd_avx(auVar163,auVar161);
          auVar161 = vmaxpd_avx(local_1620,auVar218);
          _local_1de0 = vmaskmovpd_avx(auVar162,auVar161);
          auVar38._8_8_ = local_1600;
          auVar38._0_8_ = local_1600;
          auVar39 = vpcmpeqb_avx(auVar38,ZEXT816(0) << 0x40);
          bVar23 = ~(SUB161(auVar39 >> 7,0) & 1 | (SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar39 >> 0x17,0) & 1) << 2 | (SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar39 >> 0x27,0) & 1) << 4 | (SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar39 >> 0x37,0) & 1) << 6);
          if ((bVar23 & 1) != 0) {
            local_1dc0 = (undefined1)local_1600;
          }
          if ((bVar23 & 2) != 0) {
            uStack_1dbf = (undefined1)(local_1600 >> 8);
          }
          if ((bVar23 & 4) != 0) {
            uStack_1dbe = (undefined1)(local_1600 >> 0x10);
          }
          if ((bVar23 & 8) != 0) {
            uStack_1dbd = (undefined1)(local_1600 >> 0x18);
          }
          if ((bVar23 & 0x10) != 0) {
            uStack_1dbc = (undefined1)(local_1600 >> 0x20);
          }
          if ((bVar23 & 0x20) != 0) {
            uStack_1dbb = (undefined1)(local_1600 >> 0x28);
          }
          if ((bVar23 & 0x40) != 0) {
            uStack_1dba = (undefined1)(local_1600 >> 0x30);
          }
          if ((SUB161(auVar39 >> 0x3f,0) & 1) == 0) {
            uStack_1db9 = (undefined1)(local_1600 >> 0x38);
          }
          if ((byte)(bVar28 | bVar5 << 1 | bVar6 << 2 | bVar7 << 3 | bVar8 << 4 | bVar9 << 5 |
                     bVar10 << 6 | bVar11) != (byte)iVar30) goto LAB_140a48470;
        }
        in_ZMM6 = ZEXT3264(local_1e80);
        auVar146 = vpermpd_avx2(auVar47,0xd8);
        auVar47 = vshufps_avx(auVar146,auVar146,0x50);
        auVar146 = vshufps_avx(auVar146,auVar146,0xfa);
        local_1780 = vmaskmovpd_avx(auVar47,_local_1f40);
        local_1760 = vmaskmovpd_avx(auVar146,_local_1f20);
        local_1740 = vmaskmovpd_avx(auVar47,_local_1f00);
        local_1720 = vmaskmovpd_avx(auVar146,_local_1ee0);
        local_1700 = vmaskmovpd_avx(auVar47,_local_1ec0);
        local_16e0 = vmaskmovpd_avx(auVar146,_local_1ea0);
        local_16c0 = vmaskmovpd_avx(auVar47,local_1e80);
        local_16a0 = vmaskmovpd_avx(auVar146,local_1e60);
        local_1680 = vmaskmovpd_avx(auVar47,_local_1e40);
        local_1660 = vmaskmovpd_avx(auVar146,_local_1e20);
        local_1640 = vmaskmovpd_avx(auVar47,_local_1e00);
        local_1620 = vmaskmovpd_avx(auVar146,_local_1de0);
        uVar25 = local_1600;
        if (bVar28 != 0) {
          local_1600 = CONCAT71(local_1600._1_7_,local_1dc0);
          uVar25 = local_1600;
        }
        auVar209 = ZEXT864(0) << 0x40;
        if (bVar5 != 0) {
          local_1600._2_6_ = (undefined6)(uVar25 >> 0x10);
          local_1600._0_1_ = (char)uVar25;
          local_1600._0_2_ = CONCAT11(uStack_1dbf,(char)local_1600);
          uVar25 = local_1600;
        }
        if (bVar6 != 0) {
          local_1600._3_5_ = (undefined5)(uVar25 >> 0x18);
          local_1600._0_2_ = (undefined2)uVar25;
          local_1600._0_3_ = CONCAT12(uStack_1dbe,(undefined2)local_1600);
          uVar25 = local_1600;
        }
        if (bVar7 != 0) {
          local_1600._4_4_ = (undefined4)(uVar25 >> 0x20);
          local_1600._0_3_ = (undefined3)uVar25;
          local_1600._0_4_ = CONCAT13(uStack_1dbd,(undefined3)local_1600);
          uVar25 = local_1600;
        }
        if (bVar8 != 0) {
          local_1600._5_3_ = (undefined3)(uVar25 >> 0x28);
          local_1600._0_4_ = (undefined4)uVar25;
          local_1600._0_5_ = CONCAT14(uStack_1dbc,(undefined4)local_1600);
          uVar25 = local_1600;
        }
        if (bVar9 != 0) {
          local_1600._6_2_ = (undefined2)(uVar25 >> 0x30);
          local_1600._0_5_ = (undefined5)uVar25;
          local_1600._0_6_ = CONCAT15(uStack_1dbb,(undefined5)local_1600);
          uVar25 = local_1600;
        }
        local_1600 = uVar25;
        if (bVar10 != 0) {
          local_1600._7_1_ = (undefined1)(uVar25 >> 0x38);
          local_1600._0_6_ = (undefined6)uVar25;
          local_1600._0_7_ = CONCAT16(uStack_1dba,(undefined6)local_1600);
        }
        auVar200 = ZEXT3264(local_1360);
        if (bVar11 != 0) {
          local_1600 = CONCAT17(uStack_1db9,(undefined7)local_1600);
        }
      }
      iVar27 = iVar27 + 8;
    } while (iVar27 < (int)uVar22);
  }
  if ((int)param_7 <= iVar27) goto LAB_140a4c845;
  auVar49._4_4_ = iVar27;
  auVar49._0_4_ = iVar27;
  auVar49._8_4_ = iVar27;
  auVar49._12_4_ = iVar27;
  auVar49._16_4_ = iVar27;
  auVar49._20_4_ = iVar27;
  auVar49._24_4_ = iVar27;
  auVar49._28_4_ = iVar27;
  auVar137 = vpor_avx2(auVar49,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar50._4_4_ = param_7;
  auVar50._0_4_ = param_7;
  auVar50._8_4_ = param_7;
  auVar50._12_4_ = param_7;
  auVar50._16_4_ = param_7;
  auVar50._20_4_ = param_7;
  auVar50._24_4_ = param_7;
  auVar50._28_4_ = param_7;
  _local_1b40 = vpcmpgtd_avx2(auVar50,auVar137);
  auVar47 = vmaskmovps_avx(_local_1b40,
                           *(undefined1 (*) [32])(local_1a60._0_8_ + (longlong)(iVar27 << 2)));
  auVar230._4_4_ = __real_00000038;
  auVar230._0_4_ = __real_00000038;
  auVar230._8_4_ = __real_00000038;
  auVar230._12_4_ = __real_00000038;
  auVar230._16_4_ = __real_00000038;
  auVar230._20_4_ = __real_00000038;
  auVar230._24_4_ = __real_00000038;
  auVar230._28_4_ = __real_00000038;
  auVar146 = vpmulld_avx2(auVar137,auVar230);
  auVar180._4_4_ = __real_00000030;
  auVar180._0_4_ = __real_00000030;
  auVar180._8_4_ = __real_00000030;
  auVar180._12_4_ = __real_00000030;
  auVar180._16_4_ = __real_00000030;
  auVar180._20_4_ = __real_00000030;
  auVar180._24_4_ = __real_00000030;
  auVar180._28_4_ = __real_00000030;
  auVar12._0_4_ = auVar146._0_4_ + __real_00000030;
  auVar12._4_4_ = auVar146._4_4_ + __real_00000030;
  auVar12._8_4_ = auVar146._8_4_ + __real_00000030;
  auVar12._12_4_ = auVar146._12_4_ + __real_00000030;
  auVar12._16_4_ = auVar146._16_4_ + __real_00000030;
  auVar12._20_4_ = auVar146._20_4_ + __real_00000030;
  auVar12._24_4_ = auVar146._24_4_ + __real_00000030;
  auVar12._28_4_ = auVar146._28_4_ + __real_00000030;
  auVar146 = vpand_avx2(_local_1b40,auVar12);
  auVar42 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + auVar146._0_4_)),
                        (uint)*(byte *)(param_4 + auVar146._4_4_),1);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._8_4_),2);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._12_4_),3);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._16_4_),4);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._20_4_),5);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._24_4_),6);
  auVar42 = vpinsrb_avx(auVar42,(uint)*(byte *)(param_4 + auVar146._28_4_),7);
  auVar146 = vpslld_avx2(auVar47,2);
  auVar44 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),_local_1b40);
  auVar146 = vpcmpeqd_avx2(auVar146,auVar146);
  auVar44 = vpcmpeqd_avx2(auVar44,auVar146);
  auVar42 = vpcmpeqb_avx(auVar42,(undefined1  [16])0x0);
  auVar39 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
  auVar146 = vpmovsxbd_avx2(auVar42 ^ auVar39);
  auVar146 = vpandn_avx2(auVar44,auVar146);
  local_1aa0 = vpand_avx2(_local_1b40,auVar146);
  uVar26 = vmovmskps_avx(local_1aa0);
  if (uVar26 == 0) goto LAB_140a4c845;
  local_1a60._0_16_ = ZEXT416(param_7);
  auVar146 = vpslld_avx2(auVar137,3);
  vpsubd_avx2(auVar146,auVar137);
  auVar146 = vpmovsxdq_avx2(local_1b40._0_16_);
  local_17a0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
  auVar137 = vpmovsxdq_avx2(local_1b40._16_16_);
  auVar159 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar127._4_4_ = __real_00000008;
  auVar127._0_4_ = __real_00000008;
  auVar127._8_4_ = __real_00000008;
  auVar127._12_4_ = __real_00000008;
  auVar127._16_4_ = __real_00000008;
  auVar127._20_4_ = __real_00000008;
  auVar127._24_4_ = __real_00000008;
  auVar127._28_4_ = __real_00000008;
  local_1a80 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
  auVar197 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar221._4_4_ = __real_00000010;
  auVar221._0_4_ = __real_00000010;
  auVar221._8_4_ = __real_00000010;
  auVar221._12_4_ = __real_00000010;
  auVar221._16_4_ = __real_00000010;
  auVar221._20_4_ = __real_00000010;
  auVar221._24_4_ = __real_00000010;
  auVar221._28_4_ = __real_00000010;
  auVar188 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  local_19a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar150._4_4_ = __real_00000018;
  auVar150._0_4_ = __real_00000018;
  auVar150._8_4_ = __real_00000018;
  auVar150._12_4_ = __real_00000018;
  auVar150._16_4_ = __real_00000018;
  auVar150._20_4_ = __real_00000018;
  auVar150._24_4_ = __real_00000018;
  auVar150._28_4_ = __real_00000018;
  local_19c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar158 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar198._4_4_ = __real_00000020;
  auVar198._0_4_ = __real_00000020;
  auVar198._8_4_ = __real_00000020;
  auVar198._12_4_ = __real_00000020;
  auVar198._16_4_ = __real_00000020;
  auVar198._20_4_ = __real_00000020;
  auVar198._24_4_ = __real_00000020;
  auVar198._28_4_ = __real_00000020;
  local_19e0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  _local_1ac0 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar213._4_4_ = __real_00000028;
  auVar213._0_4_ = __real_00000028;
  auVar213._8_4_ = __real_00000028;
  auVar213._12_4_ = __real_00000028;
  auVar213._16_4_ = __real_00000028;
  auVar213._20_4_ = __real_00000028;
  auVar213._24_4_ = __real_00000028;
  auVar213._28_4_ = __real_00000028;
  local_1a00 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  local_1a20 = vgatherdpd(ZEXT832(0) << 0x40,auVar137);
  auVar176 = vpslld_avx2(auVar47,7);
  auVar47 = vpmovsxdq_avx2(local_1aa0._16_16_);
  auVar171 = vgatherdpd(ZEXT832(0),auVar47);
  vpor_avx2(auVar176,auVar127);
  auVar146 = vpmovsxdq_avx2(local_1aa0._0_16_);
  auVar172 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar173 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar221,auVar176);
  auVar174 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar175 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar176,auVar150);
  auVar137 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
  auVar160 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar198,auVar176);
  auVar161 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar162 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar213,auVar176);
  auVar163 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar164 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar176,auVar180);
  auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar166 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  vpor_avx2(auVar230,auVar176);
  auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar168 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  auVar51._4_4_ = __real_00000040;
  auVar51._0_4_ = __real_00000040;
  auVar51._8_4_ = __real_00000040;
  auVar51._12_4_ = __real_00000040;
  auVar51._16_4_ = __real_00000040;
  auVar51._20_4_ = __real_00000040;
  auVar51._24_4_ = __real_00000040;
  auVar51._28_4_ = __real_00000040;
  vpor_avx2(auVar176,auVar51);
  auVar169 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  auVar170 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  auVar52._4_4_ = __real_00000048;
  auVar52._0_4_ = __real_00000048;
  auVar52._8_4_ = __real_00000048;
  auVar52._12_4_ = __real_00000048;
  auVar52._16_4_ = __real_00000048;
  auVar52._20_4_ = __real_00000048;
  auVar52._24_4_ = __real_00000048;
  auVar52._28_4_ = __real_00000048;
  vpor_avx2(auVar176,auVar52);
  local_ec0 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  local_ea0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar47);
  auVar53._4_4_ = __real_00000050;
  auVar53._0_4_ = __real_00000050;
  auVar53._8_4_ = __real_00000050;
  auVar53._12_4_ = __real_00000050;
  auVar53._16_4_ = __real_00000050;
  auVar53._20_4_ = __real_00000050;
  auVar53._24_4_ = __real_00000050;
  auVar53._28_4_ = __real_00000050;
  vpor_avx2(auVar176,auVar53);
  local_e80 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar146);
  local_e60 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar54._4_4_ = __real_00000058;
  auVar54._0_4_ = __real_00000058;
  auVar54._8_4_ = __real_00000058;
  auVar54._12_4_ = __real_00000058;
  auVar54._16_4_ = __real_00000058;
  auVar54._20_4_ = __real_00000058;
  auVar54._24_4_ = __real_00000058;
  auVar54._28_4_ = __real_00000058;
  vpor_avx2(auVar176,auVar54);
  local_e40 = vgatherdpd(ZEXT832(0) << 0x20,auVar146);
  local_e20 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar55._4_4_ = __real_00000060;
  auVar55._0_4_ = __real_00000060;
  auVar55._8_4_ = __real_00000060;
  auVar55._12_4_ = __real_00000060;
  auVar55._16_4_ = __real_00000060;
  auVar55._20_4_ = __real_00000060;
  auVar55._24_4_ = __real_00000060;
  auVar55._28_4_ = __real_00000060;
  vpor_avx2(auVar176,auVar55);
  local_e00 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
  local_de0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar56._4_4_ = __real_00000068;
  auVar56._0_4_ = __real_00000068;
  auVar56._8_4_ = __real_00000068;
  auVar56._12_4_ = __real_00000068;
  auVar56._16_4_ = __real_00000068;
  auVar56._20_4_ = __real_00000068;
  auVar56._24_4_ = __real_00000068;
  auVar56._28_4_ = __real_00000068;
  vpor_avx2(auVar176,auVar56);
  _local_dc0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar146);
  _local_da0 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  auVar57._4_4_ = __real_00000070;
  auVar57._0_4_ = __real_00000070;
  auVar57._8_4_ = __real_00000070;
  auVar57._12_4_ = __real_00000070;
  auVar57._16_4_ = __real_00000070;
  auVar57._20_4_ = __real_00000070;
  auVar57._24_4_ = __real_00000070;
  auVar57._28_4_ = __real_00000070;
  vpor_avx2(auVar176,auVar57);
  _local_d80 = vgatherdpd(ZEXT832(0),auVar146);
  _local_d60 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  _local_1100 = vgatherdpd(ZEXT832(0),auVar146);
  _local_d40 = vgatherdpd(ZEXT832(0) << 0x40,auVar146);
  _local_d20 = vgatherdpd(ZEXT832(0) << 0x40,auVar47);
  local_21a0._0_8_ = auVar171._0_8_;
  local_21a0._8_8_ = auVar171._8_8_;
  dStack_2190 = auVar171._16_8_;
  dStack_2188 = auVar171._24_8_;
  adStack_10f0[2] = (double)local_21a0._0_8_;
  adStack_10f0[3] = (double)local_21a0._8_8_;
  adStack_10f0[4] = dStack_2190;
  adStack_10f0[5] = dStack_2188;
  local_2160 = auVar173._0_8_;
  uStack_2158 = auVar173._8_8_;
  uStack_2150 = auVar173._16_8_;
  uStack_2148 = auVar173._24_8_;
  local_10a0 = local_2160;
  uStack_1098 = uStack_2158;
  uStack_1090 = uStack_2150;
  uStack_1088 = uStack_2148;
  local_2180._0_8_ = auVar172._0_8_;
  local_2180._8_8_ = auVar172._8_8_;
  dStack_2170 = auVar172._16_8_;
  dStack_2168 = auVar172._24_8_;
  adStack_10f0[6] = (double)local_2180._0_8_;
  adStack_10f0[7] = (double)local_2180._8_8_;
  adStack_10f0[8] = dStack_2170;
  uStack_10a8 = dStack_2168;
  local_2120 = auVar175._0_8_;
  uStack_2118 = auVar175._8_8_;
  uStack_2110 = auVar175._16_8_;
  uStack_2108 = auVar175._24_8_;
  local_1060 = local_2120;
  uStack_1058 = uStack_2118;
  uStack_1050 = uStack_2110;
  uStack_1048 = uStack_2108;
  local_2100 = auVar174._0_8_;
  uStack_20f8 = auVar174._8_8_;
  uStack_20f0 = auVar174._16_8_;
  uStack_20e8 = auVar174._24_8_;
  local_1080 = local_2100;
  uStack_1078 = uStack_20f8;
  uStack_1070 = uStack_20f0;
  uStack_1068 = uStack_20e8;
  local_2060 = auVar160._0_8_;
  uStack_2058 = auVar160._8_8_;
  uStack_2050 = auVar160._16_8_;
  uStack_2048 = auVar160._24_8_;
  local_1020 = local_2060;
  uStack_1018 = uStack_2058;
  uStack_1010 = uStack_2050;
  uStack_1008 = uStack_2048;
  local_2140 = auVar137._0_8_;
  uStack_2138 = auVar137._8_8_;
  uStack_2130 = auVar137._16_8_;
  uStack_2128 = auVar137._24_8_;
  local_1040 = local_2140;
  uStack_1038 = uStack_2138;
  uStack_1030 = uStack_2130;
  uStack_1028 = uStack_2128;
  local_20a0 = auVar162._0_8_;
  uStack_2098 = auVar162._8_8_;
  uStack_2090 = auVar162._16_8_;
  uStack_2088 = auVar162._24_8_;
  local_fe0 = local_20a0;
  uStack_fd8 = uStack_2098;
  uStack_fd0 = uStack_2090;
  uStack_fc8 = uStack_2088;
  local_2080 = auVar161._0_8_;
  uStack_2078 = auVar161._8_8_;
  uStack_2070 = auVar161._16_8_;
  uStack_2068 = auVar161._24_8_;
  local_1000 = local_2080;
  uStack_ff8 = uStack_2078;
  uStack_ff0 = uStack_2070;
  uStack_fe8 = uStack_2068;
  local_20e0 = auVar164._0_8_;
  uStack_20d8 = auVar164._8_8_;
  uStack_20d0 = auVar164._16_8_;
  uStack_20c8 = auVar164._24_8_;
  local_fa0 = local_20e0;
  uStack_f98 = uStack_20d8;
  uStack_f90 = uStack_20d0;
  uStack_f88 = uStack_20c8;
  local_20c0 = auVar163._0_8_;
  uStack_20b8 = auVar163._8_8_;
  uStack_20b0 = auVar163._16_8_;
  uStack_20a8 = auVar163._24_8_;
  local_fc0 = local_20c0;
  uStack_fb8 = uStack_20b8;
  uStack_fb0 = uStack_20b0;
  uStack_fa8 = uStack_20a8;
  local_1b00._0_8_ = auVar166._0_8_;
  local_1b00._8_8_ = auVar166._8_8_;
  local_1b00._16_8_ = auVar166._16_8_;
  local_1b00._24_8_ = auVar166._24_8_;
  local_f60 = local_1b00._0_8_;
  uStack_f58 = local_1b00._8_8_;
  uStack_f50 = local_1b00._16_8_;
  uStack_f48 = local_1b00._24_8_;
  local_1ae0._0_8_ = auVar165._0_8_;
  local_1ae0._8_8_ = auVar165._8_8_;
  local_1ae0._16_8_ = auVar165._16_8_;
  local_1ae0._24_8_ = auVar165._24_8_;
  local_f80 = local_1ae0._0_8_;
  uStack_f78 = local_1ae0._8_8_;
  uStack_f70 = local_1ae0._16_8_;
  uStack_f68 = local_1ae0._24_8_;
  local_2000[0xc] = auVar168._0_8_;
  local_2000[0xd] = auVar168._8_8_;
  local_2000[0xe] = auVar168._16_8_;
  local_2000[0xf] = auVar168._24_8_;
  local_f20 = local_2000[0xc];
  uStack_f18 = local_2000[0xd];
  uStack_f10 = local_2000[0xe];
  uStack_f08 = local_2000[0xf];
  local_1b20._0_8_ = auVar167._0_8_;
  local_1b20._8_8_ = auVar167._8_8_;
  local_1b20._16_8_ = auVar167._16_8_;
  local_1b20._24_8_ = auVar167._24_8_;
  local_f40 = local_1b20._0_8_;
  uStack_f38 = local_1b20._8_8_;
  uStack_f30 = local_1b20._16_8_;
  uStack_f28 = local_1b20._24_8_;
  local_2000[4] = auVar170._0_8_;
  local_2000[5] = auVar170._8_8_;
  local_2000[6] = auVar170._16_8_;
  local_2000[7] = auVar170._24_8_;
  local_ee0 = local_2000[4];
  uStack_ed8 = local_2000[5];
  uStack_ed0 = local_2000[6];
  uStack_ec8 = local_2000[7];
  local_2000[8] = auVar169._0_8_;
  local_2000[9] = auVar169._8_8_;
  local_2000[10] = auVar169._16_8_;
  local_2000[0xb] = auVar169._24_8_;
  local_f00 = local_2000[8];
  uStack_ef8 = local_2000[9];
  uStack_ef0 = local_2000[10];
  uStack_ee8 = local_2000[0xb];
  auVar47 = vpcmpeqd_avx2(local_ec0,local_ec0);
  auVar4 = vpackssdw_avx(SUB3216(auVar47 ^ auVar44,0),SUB3216(auVar47 ^ auVar44,0x10));
  local_21c0 = SUB168(auVar42 ^ auVar39,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_21c0;
  auVar42 = vpmovsxbw_avx(auVar3);
  auVar42 = vpand_avx(auVar4,auVar42);
  local_1a40._0_16_ = auVar42;
  dVar1 = param_5[8];
  dVar32 = param_5[0xc];
  dVar33 = *param_5;
  lVar31 = 0xc0;
  dVar34 = param_5[1];
  dVar35 = param_5[5];
  dVar36 = param_5[9];
  dVar71 = param_5[0xd];
  dVar72 = param_5[2];
  dVar73 = param_5[6];
  dVar74 = param_5[10];
  dVar75 = param_5[0xe];
  dVar77 = param_5[3];
  dVar78 = param_5[7];
  dVar79 = param_5[0xb];
  dVar80 = param_5[0xf];
  do {
    dVar83 = *(double *)(local_11c8 + lVar31 + 8);
    dVar84 = *(double *)(local_11b0 + lVar31 + -8);
    dVar85 = *(double *)(local_11b0 + lVar31);
    dVar86 = *(double *)(local_11b0 + lVar31 + 8);
    dVar87 = *(double *)(local_1198 + lVar31 + -8);
    dVar89 = *(double *)(local_1198 + lVar31);
    dVar90 = *(double *)(local_1190 + lVar31);
    dVar91 = *(double *)(local_1190 + lVar31 + 8);
    dVar114 = *(double *)(local_1178 + lVar31 + -8);
    dVar115 = *(double *)(local_1178 + lVar31);
    dVar116 = *(double *)(local_1178 + lVar31 + 8);
    dVar117 = *(double *)(local_1160 + lVar31 + -8);
    dVar118 = *(double *)(local_1160 + lVar31);
    dVar119 = *(double *)(local_1158 + lVar31);
    dVar120 = *(double *)(local_1158 + lVar31 + 8);
    dVar121 = *(double *)(local_1140 + lVar31 + -8);
    dVar122 = *(double *)(local_1140 + lVar31);
    dVar123 = *(double *)(local_1140 + lVar31 + 8);
    dVar131 = *(double *)(local_1128 + lVar31 + -8);
    dVar132 = *(double *)(local_1128 + lVar31);
    dVar133 = *(double *)(local_1120 + lVar31);
    dVar134 = *(double *)(local_1120 + lVar31 + 8);
    dVar142 = *(double *)(local_1120 + lVar31 + 0x10);
    dVar143 = *(double *)(local_1120 + lVar31 + 0x18);
    dVar144 = *(double *)((longlong)adStack_10f0 + lVar31 + 0x10);
    dVar156 = *(double *)((longlong)adStack_10f0 + lVar31 + 0x18);
    dVar182 = *(double *)((longlong)adStack_10f0 + lVar31 + 0x20);
    dVar183 = *(double *)((longlong)adStack_10f0 + lVar31 + 0x28);
    dVar81 = param_5[4];
    *(double *)((longlong)local_2000 + lVar31 + 0x20) =
         dVar144 * dVar32 + dVar133 * dVar1 + dVar118 * dVar81 + dVar87 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x28) =
         dVar156 * dVar32 + dVar134 * dVar1 + dVar119 * dVar81 + dVar89 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x30) =
         dVar182 * dVar32 + dVar142 * dVar1 + dVar120 * dVar81 + dVar90 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x38) =
         dVar183 * dVar32 + dVar143 * dVar1 + dVar121 * dVar81 + dVar91 * dVar33 + 0.0;
    dVar184 = *(double *)(local_1100 + lVar31);
    dVar225 = *(double *)(local_1100 + lVar31 + 8);
    dVar227 = *(double *)(local_1100 + lVar31 + 0x10);
    dVar228 = *(double *)(local_1100 + lVar31 + 0x18);
    *(double *)((longlong)local_2000 + lVar31) =
         dVar184 * dVar32 + dVar122 * dVar1 + dVar114 * dVar81 + dVar83 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 8) =
         dVar225 * dVar32 + dVar123 * dVar1 + dVar115 * dVar81 + dVar84 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x10) =
         dVar227 * dVar32 + dVar131 * dVar1 + dVar116 * dVar81 + dVar85 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x18) =
         dVar228 * dVar32 + dVar132 * dVar1 + dVar117 * dVar81 + dVar86 * dVar33 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x60) =
         dVar144 * dVar71 + dVar133 * dVar36 + dVar118 * dVar35 + dVar87 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x68) =
         dVar156 * dVar71 + dVar134 * dVar36 + dVar119 * dVar35 + dVar89 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x70) =
         dVar182 * dVar71 + dVar142 * dVar36 + dVar120 * dVar35 + dVar90 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x78) =
         dVar183 * dVar71 + dVar143 * dVar36 + dVar121 * dVar35 + dVar91 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x40) =
         dVar184 * dVar71 + dVar122 * dVar36 + dVar114 * dVar35 + dVar83 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x48) =
         dVar225 * dVar71 + dVar123 * dVar36 + dVar115 * dVar35 + dVar84 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x50) =
         dVar227 * dVar71 + dVar131 * dVar36 + dVar116 * dVar35 + dVar85 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x58) =
         dVar228 * dVar71 + dVar132 * dVar36 + dVar117 * dVar35 + dVar86 * dVar34 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0xa0) =
         dVar144 * dVar75 + dVar133 * dVar74 + dVar118 * dVar73 + dVar87 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0xa8) =
         dVar156 * dVar75 + dVar134 * dVar74 + dVar119 * dVar73 + dVar89 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0xb0) =
         dVar182 * dVar75 + dVar142 * dVar74 + dVar120 * dVar73 + dVar90 * dVar72 + 0.0;
    *(double *)(local_1f40 + lVar31 + -8) =
         dVar183 * dVar75 + dVar143 * dVar74 + dVar121 * dVar73 + dVar91 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x80) =
         dVar184 * dVar75 + dVar122 * dVar74 + dVar114 * dVar73 + dVar83 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x88) =
         dVar225 * dVar75 + dVar123 * dVar74 + dVar115 * dVar73 + dVar84 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x90) =
         dVar227 * dVar75 + dVar131 * dVar74 + dVar116 * dVar73 + dVar85 * dVar72 + 0.0;
    *(double *)((longlong)local_2000 + lVar31 + 0x98) =
         dVar228 * dVar75 + dVar132 * dVar74 + dVar117 * dVar73 + dVar86 * dVar72 + 0.0;
    *(double *)(local_1f20 + lVar31) =
         dVar80 * dVar144 + dVar79 * dVar133 + dVar78 * dVar118 + dVar77 * dVar87 + 0.0;
    *(double *)(local_1f20 + lVar31 + 8) =
         dVar80 * dVar156 + dVar79 * dVar134 + dVar78 * dVar119 + dVar77 * dVar89 + 0.0;
    *(double *)(local_1f20 + lVar31 + 0x10) =
         dVar80 * dVar182 + dVar79 * dVar142 + dVar78 * dVar120 + dVar77 * dVar90 + 0.0;
    *(double *)(local_1f20 + lVar31 + 0x18) =
         dVar80 * dVar183 + dVar79 * dVar143 + dVar78 * dVar121 + dVar77 * dVar91 + 0.0;
    *(double *)(local_1f40 + lVar31) =
         dVar80 * dVar184 + dVar79 * dVar122 + dVar78 * dVar114 + dVar77 * dVar83 + 0.0;
    *(double *)(local_1f40 + lVar31 + 8) =
         dVar80 * dVar225 + dVar79 * dVar123 + dVar78 * dVar115 + dVar77 * dVar84 + 0.0;
    *(double *)(local_1f40 + lVar31 + 0x10) =
         dVar80 * dVar227 + dVar79 * dVar131 + dVar78 * dVar116 + dVar77 * dVar85 + 0.0;
    *(double *)(local_1f40 + lVar31 + 0x18) =
         dVar80 * dVar228 + dVar79 * dVar132 + dVar78 * dVar117 + dVar77 * dVar86 + 0.0;
    lVar31 = lVar31 + 0x100;
  } while (lVar31 != 0x4c0);
  local_2040 = auVar159._0_8_;
  dStack_2038 = auVar159._8_8_;
  dStack_2030 = auVar159._16_8_;
  dStack_2028 = auVar159._24_8_;
  local_2000[0x14] = auVar158._0_8_;
  local_2000[0x15] = auVar158._8_8_;
  local_2000[0x16] = auVar158._16_8_;
  local_2000[0x17] = auVar158._24_8_;
  local_2020 = auVar197._0_8_;
  dStack_2018 = auVar197._8_8_;
  dStack_2010 = auVar197._16_8_;
  dStack_2008 = auVar197._24_8_;
  dVar32 = __real_3fe0000000000000 * (local_2040 + local_2000[0x14]);
  dVar71 = __real_3fe0000000000000 * (dStack_2038 + local_2000[0x15]);
  dVar77 = __real_3fe0000000000000 * (dStack_2030 + local_2000[0x16]);
  dVar83 = __real_3fe0000000000000 * (dStack_2028 + local_2000[0x17]);
  dVar115 = __real_3fe0000000000000 * (local_2020 + (double)local_1ac0._0_8_);
  dVar116 = __real_3fe0000000000000 * (dStack_2018 + (double)local_1ac0._8_8_);
  dVar117 = __real_3fe0000000000000 * (dStack_2010 + dStack_1ab0);
  dVar118 = __real_3fe0000000000000 * (dStack_2008 + dStack_1aa8);
  dVar33 = __real_3fe0000000000000 * (local_17a0._0_8_ + local_19c0._0_8_);
  dVar72 = __real_3fe0000000000000 * (local_17a0._8_8_ + local_19c0._8_8_);
  dVar78 = __real_3fe0000000000000 * (local_17a0._16_8_ + local_19c0._16_8_);
  dVar84 = __real_3fe0000000000000 * (local_17a0._24_8_ + local_19c0._24_8_);
  dVar119 = __real_3fe0000000000000 * (local_1a80._0_8_ + local_19e0._0_8_);
  dVar121 = __real_3fe0000000000000 * (local_1a80._8_8_ + local_19e0._8_8_);
  dVar123 = __real_3fe0000000000000 * (local_1a80._16_8_ + local_19e0._16_8_);
  dVar132 = __real_3fe0000000000000 * (local_1a80._24_8_ + local_19e0._24_8_);
  dVar1 = (double)CONCAT17(uStack_1db9,
                           CONCAT16(uStack_1dba,
                                    CONCAT15(uStack_1dbb,
                                             CONCAT14(uStack_1dbc,
                                                      CONCAT13(uStack_1dbd,
                                                               CONCAT12(uStack_1dbe,
                                                                        CONCAT11(uStack_1dbf,
                                                                                 local_1dc0)))))));
  dVar34 = __real_3fe0000000000000 * (auVar188._0_8_ + local_1a00._0_8_);
  dVar73 = __real_3fe0000000000000 * (auVar188._8_8_ + local_1a00._8_8_);
  dVar79 = __real_3fe0000000000000 * (auVar188._16_8_ + local_1a00._16_8_);
  dVar85 = __real_3fe0000000000000 * (auVar188._24_8_ + local_1a00._24_8_);
  dVar35 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
  dVar74 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
  dVar80 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
  dVar86 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
  auVar47 = vsubpd_avx(local_19c0,local_17a0);
  auVar146 = vsubpd_avx(auVar158,auVar159);
  auVar44 = vsubpd_avx(local_19e0,local_1a80);
  auVar137 = vsubpd_avx(_local_1ac0,auVar197);
  auVar158 = vsubpd_avx(local_1a20,local_19a0);
  auVar188 = vsubpd_avx(local_1a00,auVar188);
  dVar36 = __real_3fe0000000000000 * auVar146._0_8_;
  dVar75 = __real_3fe0000000000000 * auVar146._8_8_;
  dVar81 = __real_3fe0000000000000 * auVar146._16_8_;
  dVar87 = __real_3fe0000000000000 * auVar146._24_8_;
  dVar120 = auVar47._0_8_ * __real_3fe0000000000000;
  dVar122 = auVar47._8_8_ * __real_3fe0000000000000;
  dVar131 = auVar47._16_8_ * __real_3fe0000000000000;
  dVar133 = auVar47._24_8_ * __real_3fe0000000000000;
  dVar89 = __real_3fe0000000000000 * auVar137._0_8_;
  dVar90 = __real_3fe0000000000000 * auVar137._8_8_;
  dVar91 = __real_3fe0000000000000 * auVar137._16_8_;
  dVar114 = __real_3fe0000000000000 * auVar137._24_8_;
  dVar134 = __real_3fe0000000000000 * auVar44._0_8_;
  dVar142 = __real_3fe0000000000000 * auVar44._8_8_;
  dVar143 = __real_3fe0000000000000 * auVar44._16_8_;
  dVar144 = __real_3fe0000000000000 * auVar44._24_8_;
  dVar156 = __real_3fe0000000000000 * auVar188._0_8_;
  dVar182 = __real_3fe0000000000000 * auVar188._8_8_;
  dVar183 = __real_3fe0000000000000 * auVar188._16_8_;
  dVar184 = __real_3fe0000000000000 * auVar188._24_8_;
  dVar225 = __real_3fe0000000000000 * auVar158._0_8_;
  dVar227 = __real_3fe0000000000000 * auVar158._8_8_;
  dVar228 = __real_3fe0000000000000 * auVar158._16_8_;
  dVar229 = __real_3fe0000000000000 * auVar158._24_8_;
  auVar128._0_8_ =
       dVar35 * local_1d20 + dVar32 * (double)local_1f20 + dVar115 * (double)local_1e20._0_8_ +
       local_1c20;
  auVar128._8_8_ =
       dVar74 * dStack_1d18 + dVar71 * adStack_1f18[0] + dVar116 * (double)local_1e20._8_8_ +
       dStack_1c18;
  auVar128._16_8_ =
       dVar80 * dStack_1d10 + dVar77 * adStack_1f18[1] + dVar117 * dStack_1e10 + dStack_1c10;
  auVar128._24_8_ =
       dVar86 * dStack_1d08 + dVar83 * adStack_1f18[2] + dVar118 * dStack_1e08 + dStack_1c08;
  auVar190._0_8_ =
       dVar34 * local_1d40 + dVar33 * (double)local_1f40 + dVar119 * (double)local_1e40._0_8_ +
       local_1c40;
  auVar190._8_8_ =
       dVar73 * dStack_1d38 + dVar72 * adStack_1f38[0] + dVar121 * (double)local_1e40._8_8_ +
       dStack_1c38;
  auVar190._16_8_ =
       dVar79 * dStack_1d30 + dVar78 * adStack_1f38[1] + dVar123 * dStack_1e30 + dStack_1c30;
  auVar190._24_8_ =
       dVar85 * dStack_1d28 + dVar84 * adStack_1f38[2] + dVar132 * dStack_1e28 + dStack_1c28;
  auVar231._0_8_ =
       dVar35 * local_1ce0 + dVar32 * (double)local_1ee0._0_8_ + dVar115 * (double)local_1de0._0_8_
       + local_1be0;
  auVar231._8_8_ =
       dVar74 * dStack_1cd8 + dVar71 * (double)local_1ee0._8_8_ + dVar116 * (double)local_1de0._8_8_
       + dStack_1bd8;
  auVar231._16_8_ =
       dVar80 * dStack_1cd0 + dVar77 * dStack_1ed0 + dVar117 * dStack_1dd0 + dStack_1bd0;
  auVar231._24_8_ =
       dVar86 * dStack_1cc8 + dVar83 * dStack_1ec8 + dVar118 * dStack_1dc8 + dStack_1bc8;
  auVar204._0_8_ =
       dVar34 * local_1d00 + dVar33 * (double)local_1f00._0_8_ + dVar119 * (double)local_1e00._0_8_
       + local_1c00;
  auVar204._8_8_ =
       dVar73 * dStack_1cf8 + dVar72 * (double)local_1f00._8_8_ + dVar121 * (double)local_1e00._8_8_
       + dStack_1bf8;
  auVar204._16_8_ =
       dVar79 * dStack_1cf0 + dVar78 * dStack_1ef0 + dVar123 * dStack_1df0 + dStack_1bf0;
  auVar204._24_8_ =
       dVar85 * dStack_1ce8 + dVar84 * dStack_1ee8 + dVar132 * dStack_1de8 + dStack_1be8;
  auVar58._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f40)) +
       (double)((ulonglong)(dVar134 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar156 * local_1d40) & __real_7fffffffffffffff);
  auVar58._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * adStack_1f38[0])) +
       (double)((ulonglong)(dVar142 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar182 * dStack_1d38) & __real_7fffffffffffffff);
  auVar58._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar131 * adStack_1f38[1])) +
       (double)((ulonglong)(dVar143 * dStack_1e30) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar183 * dStack_1d30) & __real_7fffffffffffffff);
  auVar58._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * adStack_1f38[2])) +
       (double)((ulonglong)(dVar144 * dStack_1e28) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar184 * dStack_1d28) & __real_7fffffffffffffff);
  auVar238._0_8_ =
       local_1ca0 * dVar35 + (double)local_1ea0._0_8_ * dVar32 + dVar115 * local_1da0 + local_1ba0;
  auVar238._8_8_ =
       dStack_1c98 * dVar74 + (double)local_1ea0._8_8_ * dVar71 + dVar116 * dStack_1d98 +
       dStack_1b98;
  auVar238._16_8_ =
       dStack_1c90 * dVar80 + dStack_1e90 * dVar77 + dVar117 * dStack_1d90 + dStack_1b90;
  auVar238._24_8_ =
       dStack_1c88 * dVar86 + dStack_1e88 * dVar83 + dVar118 * dStack_1d88 + dStack_1b88;
  auVar222._0_8_ =
       (double)((ulonglong)(dVar225 * local_1d20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar36 * (double)local_1f20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar89 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
  auVar222._8_8_ =
       (double)((ulonglong)(dVar227 * dStack_1d18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar75 * adStack_1f18[0]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar90 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
  auVar222._16_8_ =
       (double)((ulonglong)(dVar228 * dStack_1d10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar81 * adStack_1f18[1]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar91 * dStack_1e10) & __real_7fffffffffffffff);
  auVar222._24_8_ =
       (double)((ulonglong)(dVar229 * dStack_1d08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar87 * adStack_1f18[2]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar114 * dStack_1e08) & __real_7fffffffffffffff);
  auVar214._0_8_ =
       local_1cc0 * dVar34 + (double)local_1ec0._0_8_ * dVar33 + dVar119 * dVar1 + local_1bc0;
  auVar214._8_8_ =
       dStack_1cb8 * dVar73 + (double)local_1ec0._8_8_ * dVar72 + dVar121 * dStack_1db8 +
       dStack_1bb8;
  auVar214._16_8_ =
       dStack_1cb0 * dVar79 + dStack_1eb0 * dVar78 + dVar123 * dStack_1db0 + dStack_1bb0;
  auVar214._24_8_ =
       dStack_1ca8 * dVar85 + dStack_1ea8 * dVar84 + dVar132 * dStack_1da8 + dStack_1ba8;
  auVar107._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f00._0_8_)) +
       (double)((ulonglong)(dVar134 * (double)local_1e00._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar156 * local_1d00) & __real_7fffffffffffffff);
  auVar107._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * (double)local_1f00._8_8_)) +
       (double)((ulonglong)(dVar142 * (double)local_1e00._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar182 * dStack_1cf8) & __real_7fffffffffffffff);
  auVar107._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar131 * dStack_1ef0)) +
       (double)((ulonglong)(dVar143 * dStack_1df0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar183 * dStack_1cf0) & __real_7fffffffffffffff);
  auVar107._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * dStack_1ee8)) +
       (double)((ulonglong)(dVar144 * dStack_1de8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar184 * dStack_1ce8) & __real_7fffffffffffffff);
  auVar241._0_8_ =
       (double)((ulonglong)(dVar225 * local_1ce0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar36 * (double)local_1ee0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar89 * (double)local_1de0._0_8_) & __real_7fffffffffffffff);
  auVar241._8_8_ =
       (double)((ulonglong)(dVar227 * dStack_1cd8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar75 * (double)local_1ee0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar90 * (double)local_1de0._8_8_) & __real_7fffffffffffffff);
  auVar241._16_8_ =
       (double)((ulonglong)(dVar228 * dStack_1cd0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar81 * dStack_1ed0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar91 * dStack_1dd0) & __real_7fffffffffffffff);
  auVar241._24_8_ =
       (double)((ulonglong)(dVar229 * dStack_1cc8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar87 * dStack_1ec8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar114 * dStack_1dc8) & __real_7fffffffffffffff);
  auVar151._0_8_ =
       (double)((ulonglong)(dVar120 * (double)local_1ec0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar134 * dVar1) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar156 * local_1cc0) & __real_7fffffffffffffff);
  auVar151._8_8_ =
       (double)((ulonglong)(dVar122 * (double)local_1ec0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar142 * dStack_1db8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar182 * dStack_1cb8) & __real_7fffffffffffffff);
  auVar151._16_8_ =
       (double)((ulonglong)(dVar131 * dStack_1eb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar143 * dStack_1db0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar183 * dStack_1cb0) & __real_7fffffffffffffff);
  auVar151._24_8_ =
       (double)((ulonglong)(dVar133 * dStack_1ea8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar144 * dStack_1da8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar184 * dStack_1ca8) & __real_7fffffffffffffff);
  auVar139._0_8_ =
       (double)((ulonglong)(dVar225 * local_1ca0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar36 * (double)local_1ea0._0_8_)) +
       (double)((ulonglong)(dVar89 * local_1da0) & __real_7fffffffffffffff);
  auVar139._8_8_ =
       (double)((ulonglong)(dVar227 * dStack_1c98) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1ea0._8_8_)) +
       (double)((ulonglong)(dVar90 * dStack_1d98) & __real_7fffffffffffffff);
  auVar139._16_8_ =
       (double)((ulonglong)(dVar228 * dStack_1c90) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar81 * dStack_1e90)) +
       (double)((ulonglong)(dVar91 * dStack_1d90) & __real_7fffffffffffffff);
  auVar139._24_8_ =
       (double)((ulonglong)(dVar229 * dStack_1c88) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar87 * dStack_1e88)) +
       (double)((ulonglong)(dVar114 * dStack_1d88) & __real_7fffffffffffffff);
  auVar47 = vsubpd_avx(auVar190,auVar58);
  auVar146 = vsubpd_avx(auVar128,auVar222);
  auVar44 = vsubpd_avx(auVar204,auVar107);
  auVar137 = vsubpd_avx(auVar231,auVar241);
  local_21a0._8_8_ = auVar58._8_8_ + auVar190._8_8_;
  local_21a0._0_8_ = auVar58._0_8_ + auVar190._0_8_;
  dStack_2190 = auVar58._16_8_ + auVar190._16_8_;
  dStack_2188 = auVar58._24_8_ + auVar190._24_8_;
  auVar188 = vsubpd_avx(auVar214,auVar151);
  local_2180._8_8_ = auVar222._8_8_ + auVar128._8_8_;
  local_2180._0_8_ = auVar222._0_8_ + auVar128._0_8_;
  dStack_2170 = auVar222._16_8_ + auVar128._16_8_;
  dStack_2168 = auVar222._24_8_ + auVar128._24_8_;
  auVar158 = vsubpd_avx(auVar238,auVar139);
  auVar186._0_8_ = auVar204._0_8_ + auVar107._0_8_;
  auVar186._8_8_ = auVar204._8_8_ + auVar107._8_8_;
  auVar186._16_8_ = auVar204._16_8_ + auVar107._16_8_;
  auVar186._24_8_ = auVar204._24_8_ + auVar107._24_8_;
  auVar226._0_8_ = auVar241._0_8_ + auVar231._0_8_;
  auVar226._8_8_ = auVar241._8_8_ + auVar231._8_8_;
  auVar226._16_8_ = auVar241._16_8_ + auVar231._16_8_;
  auVar226._24_8_ = auVar241._24_8_ + auVar231._24_8_;
  auVar205._0_8_ = auVar214._0_8_ + auVar151._0_8_;
  auVar205._8_8_ = auVar214._8_8_ + auVar151._8_8_;
  auVar205._16_8_ = auVar214._16_8_ + auVar151._16_8_;
  auVar205._24_8_ = auVar214._24_8_ + auVar151._24_8_;
  auVar129._0_8_ = auVar238._0_8_ + auVar139._0_8_;
  auVar129._8_8_ = auVar238._8_8_ + auVar139._8_8_;
  auVar129._16_8_ = auVar238._16_8_ + auVar139._16_8_;
  auVar129._24_8_ = auVar238._24_8_ + auVar139._24_8_;
  auVar39 = ZEXT816(0) << 0x40;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = local_1600;
  auVar42 = vpcmpeqb_avx(auVar136,auVar39);
  auVar39 = vpcmpeqd_avx(auVar39,auVar39);
  auVar160 = vpmovsxbd_avx2(auVar42 ^ auVar39);
  auVar159 = vpand_avx2(local_1aa0,auVar160);
  iVar27 = vmovmskps_avx(auVar159);
  if (iVar27 == 0) {
    auVar159 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a4c592:
    auVar39 = vpmovsxbw_avx(auVar42);
    auVar39 = vpand_avx(auVar39,local_1a40._0_16_);
    auVar160 = vpmovsxwd_avx2(auVar39);
    _local_1b40 = _local_1b40 & auVar160;
    if ((((((((SUB321(_local_1b40 >> 0x1f,0) & 1) != 0 || (SUB321(_local_1b40 >> 0x3f,0) & 1) != 0)
            || (SUB321(_local_1b40 >> 0x5f,0) & 1) != 0) || SUB321(_local_1b40 >> 0x7f,0) != '\0')
          || (SUB321(_local_1b40 >> 0x9f,0) & 1) != 0) || SUB321(_local_1b40 >> 0xbf,0) != '\0') ||
        (SUB321(_local_1b40 >> 0xdf,0) & 1) != 0) || local_1b40[0x1f] < '\0') {
      auVar42 = vpmovzxbw_avx(auVar42);
      auVar160 = vpmovzxwd_avx2(auVar42);
      auVar160 = vpslld_avx2(auVar160,0x1f);
      auVar161 = vpsrad_avx2(auVar160,0x1f);
      auVar160 = auVar161 & local_1aa0;
      if ((((((((SUB321(auVar160 >> 0x1f,0) & 1) != 0 || (SUB321(auVar160 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar160 >> 0x5f,0) & 1) != 0) || SUB321(auVar160 >> 0x7f,0) != '\0') ||
            (SUB321(auVar160 >> 0x9f,0) & 1) != 0) || SUB321(auVar160 >> 0xbf,0) != '\0') ||
          (SUB321(auVar160 >> 0xdf,0) & 1) != 0) || auVar160[0x1f] < '\0') {
        auVar162 = vpermpd_avx2(auVar161,0xd8);
        auVar160 = vshufps_avx(auVar162,auVar162,0x50);
        auVar162 = vshufps_avx(auVar162,auVar162,0xfa);
        _local_1f40 = vmaskmovpd_avx(auVar160,auVar47);
        _local_1f20 = vmaskmovpd_avx(auVar162,auVar146);
        _local_1f00 = vmaskmovpd_avx(auVar160,auVar44);
        _local_1ee0 = vmaskmovpd_avx(auVar162,auVar137);
        _local_1ec0 = vmaskmovpd_avx(auVar160,auVar188);
        _local_1ea0 = vmaskmovpd_avx(auVar162,auVar158);
        local_1e80 = vmaskmovpd_avx(auVar160,_local_21a0);
        local_1e60 = vmaskmovpd_avx(auVar162,_local_2180);
        _local_1e40 = vmaskmovpd_avx(auVar160,auVar186);
        _local_1e20 = vmaskmovpd_avx(auVar162,auVar226);
        _local_1e00 = vmaskmovpd_avx(auVar160,auVar205);
        _local_1de0 = vmaskmovpd_avx(auVar162,auVar129);
        auVar42 = vpsllw_avx(auVar42,0xf);
        auVar42 = vpacksswb_avx(auVar42,auVar42);
        bVar28 = SUB161(auVar42 >> 0xf,0) & 1;
        bVar5 = SUB161(auVar42 >> 0x17,0) & 1;
        bVar6 = SUB161(auVar42 >> 0x1f,0) & 1;
        bVar7 = SUB161(auVar42 >> 0x27,0) & 1;
        bVar8 = SUB161(auVar42 >> 0x2f,0) & 1;
        bVar9 = SUB161(auVar42 >> 0x37,0) & 1;
        if ((SUB161(auVar42 >> 7,0) & 1) == 0) {
          if (bVar28 != 0) goto LAB_140a4da5f;
LAB_140a4c6aa:
          if (bVar5 != 0) goto LAB_140a4da79;
LAB_140a4c6bc:
          if (bVar6 != 0) goto LAB_140a4da8a;
LAB_140a4c6c5:
          if (bVar7 != 0) goto LAB_140a4da9b;
LAB_140a4c6ce:
          if (bVar8 != 0) goto LAB_140a4daac;
LAB_140a4c6d7:
          if (bVar9 != 0) goto LAB_140a4dabd;
LAB_140a4c6e0:
          auVar110._0_4_ = local_1aa0._0_4_ & auVar161._0_4_;
          auVar110._4_4_ = local_1aa0._4_4_ & auVar161._4_4_;
          auVar110._8_4_ = local_1aa0._8_4_ & auVar161._8_4_;
          auVar110._12_4_ = local_1aa0._12_4_ & auVar161._12_4_;
          auVar110._16_4_ = local_1aa0._16_4_ & auVar161._16_4_;
          auVar110._20_4_ = local_1aa0._20_4_ & auVar161._20_4_;
          auVar110._24_4_ = local_1aa0._24_4_ & auVar161._24_4_;
          auVar110._28_4_ = local_1aa0._28_4_ & auVar161._28_4_;
        }
        else {
          local_1dc0 = 1;
          if (bVar28 == 0) goto LAB_140a4c6aa;
LAB_140a4da5f:
          uStack_1dbf = 1;
          if (bVar5 == 0) goto LAB_140a4c6bc;
LAB_140a4da79:
          uStack_1dbe = 1;
          if (bVar6 == 0) goto LAB_140a4c6c5;
LAB_140a4da8a:
          uStack_1dbd = 1;
          if (bVar7 == 0) goto LAB_140a4c6ce;
LAB_140a4da9b:
          uStack_1dbc = 1;
          if (bVar8 == 0) goto LAB_140a4c6d7;
LAB_140a4daac:
          uStack_1dbb = 1;
          if (bVar9 == 0) goto LAB_140a4c6e0;
LAB_140a4dabd:
          uStack_1dba = 1;
          auVar110._0_4_ = local_1aa0._0_4_ & auVar161._0_4_;
          auVar110._4_4_ = local_1aa0._4_4_ & auVar161._4_4_;
          auVar110._8_4_ = local_1aa0._8_4_ & auVar161._8_4_;
          auVar110._12_4_ = local_1aa0._12_4_ & auVar161._12_4_;
          auVar110._16_4_ = local_1aa0._16_4_ & auVar161._16_4_;
          auVar110._20_4_ = local_1aa0._20_4_ & auVar161._20_4_;
          auVar110._24_4_ = local_1aa0._24_4_ & auVar161._24_4_;
          auVar110._28_4_ = local_1aa0._28_4_ & auVar161._28_4_;
        }
        if ((SUB161(auVar42 >> 0x3f,0) & 1) != 0) {
          uStack_1db9 = 1;
        }
        vmovmskps_avx(auVar159 | auVar110);
      }
    }
  }
  else {
    auVar161 = vminpd_avx(local_1780,auVar47);
    auVar163 = vpermq_avx2(auVar160,0xd8);
    auVar162 = vpshufd_avx2(auVar163,0x50);
    _local_1f40 = vmaskmovpd_avx(auVar162,auVar161);
    auVar160 = vminpd_avx(local_1760,auVar146);
    auVar161 = vpshufd_avx2(auVar163,0xfa);
    _local_1f20 = vmaskmovpd_avx(auVar161,auVar160);
    auVar160 = vminpd_avx(local_1740,auVar44);
    _local_1f00 = vmaskmovpd_avx(auVar162,auVar160);
    auVar160 = vminpd_avx(local_1720,auVar137);
    _local_1ee0 = vmaskmovpd_avx(auVar161,auVar160);
    auVar160 = vminpd_avx(local_1700,auVar188);
    _local_1ec0 = vmaskmovpd_avx(auVar162,auVar160);
    auVar160 = vminpd_avx(local_16e0,auVar158);
    _local_1ea0 = vmaskmovpd_avx(auVar161,auVar160);
    auVar160 = vmaxpd_avx(local_16c0,_local_21a0);
    local_1e80 = vmaskmovpd_avx(auVar162,auVar160);
    auVar160 = vmaxpd_avx(local_16a0,_local_2180);
    local_1e60 = vmaskmovpd_avx(auVar161,auVar160);
    auVar160 = vmaxpd_avx(local_1680,auVar186);
    _local_1e40 = vmaskmovpd_avx(auVar162,auVar160);
    auVar160 = vmaxpd_avx(local_1660,auVar226);
    _local_1e20 = vmaskmovpd_avx(auVar161,auVar160);
    auVar160 = vmaxpd_avx(local_1640,auVar205);
    _local_1e00 = vmaskmovpd_avx(auVar162,auVar160);
    auVar160 = vmaxpd_avx(local_1620,auVar129);
    _local_1de0 = vmaskmovpd_avx(auVar161,auVar160);
    auVar40._8_8_ = local_1600;
    auVar40._0_8_ = local_1600;
    auVar39 = vpcmpeqb_avx(auVar40,___xmm_00000000000000000000000000000000);
    bVar28 = ~(SUB161(auVar39 >> 7,0) & 1 | (SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar39 >> 0x17,0) & 1) << 2 | (SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar39 >> 0x27,0) & 1) << 4 | (SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar39 >> 0x37,0) & 1) << 6);
    if ((bVar28 & 1) != 0) {
      local_1dc0 = (undefined1)local_1600;
    }
    if ((bVar28 & 2) != 0) {
      uStack_1dbf = (undefined1)(local_1600 >> 8);
    }
    if ((bVar28 & 4) != 0) {
      uStack_1dbe = (undefined1)(local_1600 >> 0x10);
    }
    if ((bVar28 & 8) != 0) {
      uStack_1dbd = (undefined1)(local_1600 >> 0x18);
    }
    if ((bVar28 & 0x10) != 0) {
      uStack_1dbc = (undefined1)(local_1600 >> 0x20);
    }
    if ((bVar28 & 0x20) != 0) {
      uStack_1dbb = (undefined1)(local_1600 >> 0x28);
    }
    if ((bVar28 & 0x40) != 0) {
      uStack_1dba = (undefined1)(local_1600 >> 0x30);
    }
    if ((SUB161(auVar39 >> 0x3f,0) & 1) == 0) {
      uStack_1db9 = (undefined1)(local_1600 >> 0x38);
    }
    if ((char)uVar26 != (char)iVar27) goto LAB_140a4c592;
  }
  auVar146 = vpermpd_avx2(local_1aa0,0xd8);
  auVar47 = vshufps_avx(auVar146,auVar146,0x50);
  auVar146 = vshufps_avx(auVar146,auVar146,0xfa);
  local_1780 = vmaskmovpd_avx(auVar47,_local_1f40);
  local_1760 = vmaskmovpd_avx(auVar146,_local_1f20);
  local_1740 = vmaskmovpd_avx(auVar47,_local_1f00);
  local_1720 = vmaskmovpd_avx(auVar146,_local_1ee0);
  local_1700 = vmaskmovpd_avx(auVar47,_local_1ec0);
  local_16e0 = vmaskmovpd_avx(auVar146,_local_1ea0);
  local_16c0 = vmaskmovpd_avx(auVar47,local_1e80);
  local_16a0 = vmaskmovpd_avx(auVar146,local_1e60);
  local_1680 = vmaskmovpd_avx(auVar47,_local_1e40);
  local_1660 = vmaskmovpd_avx(auVar146,_local_1e20);
  local_1640 = vmaskmovpd_avx(auVar47,_local_1e00);
  local_1620 = vmaskmovpd_avx(auVar146,_local_1de0);
  uVar25 = local_1600;
  if ((uVar26 & 1) != 0) {
    local_1600 = CONCAT71(local_1600._1_7_,local_1dc0);
    uVar25 = local_1600;
  }
  if ((uVar26 & 2) != 0) {
    local_1600._2_6_ = (undefined6)(uVar25 >> 0x10);
    local_1600._0_1_ = (char)uVar25;
    local_1600._0_2_ = CONCAT11(uStack_1dbf,(char)local_1600);
    uVar25 = local_1600;
  }
  if ((uVar26 & 4) != 0) {
    local_1600._3_5_ = (undefined5)(uVar25 >> 0x18);
    local_1600._0_2_ = (undefined2)uVar25;
    local_1600._0_3_ = CONCAT12(uStack_1dbe,(undefined2)local_1600);
    uVar25 = local_1600;
  }
  if ((uVar26 & 8) != 0) {
    local_1600._4_4_ = (undefined4)(uVar25 >> 0x20);
    local_1600._0_3_ = (undefined3)uVar25;
    local_1600._0_4_ = CONCAT13(uStack_1dbd,(undefined3)local_1600);
    uVar25 = local_1600;
  }
  if ((uVar26 & 0x10) != 0) {
    local_1600._5_3_ = (undefined3)(uVar25 >> 0x28);
    local_1600._0_4_ = (undefined4)uVar25;
    local_1600._0_5_ = CONCAT14(uStack_1dbc,(undefined4)local_1600);
    uVar25 = local_1600;
  }
  if ((uVar26 & 0x20) != 0) {
    local_1600._6_2_ = (undefined2)(uVar25 >> 0x30);
    local_1600._0_5_ = (undefined5)uVar25;
    local_1600._0_6_ = CONCAT15(uStack_1dbb,(undefined5)local_1600);
    uVar25 = local_1600;
  }
  local_1600 = uVar25;
  if ((uVar26 & 0x40) != 0) {
    local_1600._7_1_ = (undefined1)(uVar25 >> 0x38);
    local_1600._0_6_ = (undefined6)uVar25;
    local_1600._0_7_ = CONCAT16(uStack_1dba,(undefined6)local_1600);
  }
  param_7 = local_1a60._0_4_;
  if ((char)uVar26 < '\0') {
    local_1600 = CONCAT17(uStack_1db9,(undefined7)local_1600);
  }
LAB_140a4c845:
  uVar26 = vmovmskps_avx(_local_1120);
  cVar24 = (char)uVar26;
  if ((uVar26 & 1) != 0) {
    local_15c0 = vmovlps_avx(local_1780._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1588 = vmovhps_avx(local_1780._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1550 = vmovlps_avx(local_1780._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_1518 = vmovhps_avx(local_1780._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14e0 = vmovlps_avx(local_1760._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_14a8 = vmovhps_avx(local_1760._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1470 = vmovlps_avx(local_1760._16_16_);
  }
  if (cVar24 < '\0') {
    local_1438 = vmovhps_avx(local_1760._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    auStack_15b8[0] = vmovlps_avx(local_1740._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1580 = vmovhps_avx(local_1740._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1548 = vmovlps_avx(local_1740._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_1510 = vmovhps_avx(local_1740._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14d8 = vmovlps_avx(local_1720._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_14a0 = vmovhps_avx(local_1720._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1468 = vmovlps_avx(local_1720._16_16_);
  }
  if (cVar24 < '\0') {
    local_1430 = vmovhps_avx(local_1720._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    auStack_15b8[1] = vmovlps_avx(local_1700._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1578 = vmovhps_avx(local_1700._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1540 = vmovlps_avx(local_1700._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_1508 = vmovhps_avx(local_1700._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14d0 = vmovlps_avx(local_16e0._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_1498 = vmovhps_avx(local_16e0._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1460 = vmovlps_avx(local_16e0._16_16_);
  }
  if (cVar24 < '\0') {
    local_1428 = vmovhps_avx(local_16e0._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    local_15a8[0] = vmovlps_avx(local_16c0._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1570 = vmovhps_avx(local_16c0._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1538 = vmovlps_avx(local_16c0._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_1500 = vmovhps_avx(local_16c0._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14c8 = vmovlps_avx(local_16a0._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_1490 = vmovhps_avx(local_16a0._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1458 = vmovlps_avx(local_16a0._16_16_);
  }
  if (cVar24 < '\0') {
    local_1420 = vmovhps_avx(local_16a0._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    local_15a8[1] = vmovlps_avx(local_1680._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1568 = vmovhps_avx(local_1680._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1530 = vmovlps_avx(local_1680._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_14f8 = vmovhps_avx(local_1680._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14c0 = vmovlps_avx(local_1660._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_1488 = vmovhps_avx(local_1660._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1450 = vmovlps_avx(local_1660._16_16_);
  }
  if (cVar24 < '\0') {
    local_1418 = vmovhps_avx(local_1660._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    local_1598 = vmovlps_avx(local_1640._0_16_);
  }
  if ((uVar26 & 2) != 0) {
    local_1560 = vmovhps_avx(local_1640._0_16_);
  }
  if ((uVar26 & 4) != 0) {
    local_1528 = vmovlps_avx(local_1640._16_16_);
  }
  if ((uVar26 & 8) != 0) {
    local_14f0 = vmovhps_avx(local_1640._16_16_);
  }
  if ((uVar26 & 0x10) != 0) {
    local_14b8 = vmovlps_avx(local_1620._0_16_);
  }
  if ((uVar26 & 0x20) != 0) {
    local_1480 = vmovhps_avx(local_1620._0_16_);
  }
  if ((uVar26 & 0x40) != 0) {
    local_1448 = vmovlps_avx(local_1620._16_16_);
  }
  if (cVar24 < '\0') {
    local_1410 = vmovhps_avx(local_1620._16_16_);
  }
  if ((uVar26 & 1) != 0) {
    local_1590[0] = (char)local_1600;
  }
  if ((uVar26 & 2) != 0) {
    local_1558 = local_1600._1_1_;
  }
  if ((uVar26 & 4) != 0) {
    local_1520 = local_1600._2_1_;
  }
  if ((uVar26 & 8) != 0) {
    local_14e8 = local_1600._3_1_;
  }
  if ((uVar26 & 0x10) != 0) {
    local_14b0 = local_1600._4_1_;
  }
  if ((uVar26 & 0x20) != 0) {
    local_1478 = local_1600._5_1_;
  }
  if ((uVar26 & 0x40) != 0) {
    local_1440 = local_1600._6_1_;
  }
  if (cVar24 < '\0') {
    local_1408 = local_1600._7_1_;
  }
  auVar68._4_4_ = param_7;
  auVar68._0_4_ = param_7;
  auVar68._8_4_ = param_7;
  auVar68._12_4_ = param_7;
  auVar68._16_4_ = param_7;
  auVar68._20_4_ = param_7;
  auVar68._24_4_ = param_7;
  auVar68._28_4_ = param_7;
  auVar47 = vpcmpgtd_avx2(auVar68,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar47 = vpand_avx2(auVar47,_local_1120);
  uVar26 = vmovmskps_avx(auVar47);
  if (uVar26 != 0) {
    uVar25 = (ulonglong)(uVar26 & 0xff);
    do {
      uVar19 = 0;
      for (uVar20 = uVar25; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
        uVar19 = uVar19 + 1;
      }
      lVar31 = uVar19 * 0x38;
      cVar29 = param_6[2][0];
      cVar24 = local_1590[lVar31];
      if ((cVar29 == '\0') || (cVar24 == '\0')) {
        if (cVar24 == '\0') {
          cVar29 = param_6[2][0];
          uVar157 = *(undefined8 *)(param_6[1] + 0x10);
          uVar145 = *(undefined8 *)(param_6[1] + 8);
          uVar135 = *(undefined8 *)param_6[1];
          uVar124 = *(undefined8 *)(*param_6 + 0x10);
          uVar37 = *(undefined8 *)*param_6;
          uVar92 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          uVar37 = *(undefined8 *)*(undefined1 (*) [24])(&local_15c0 + uVar19 * 7);
          uVar92 = auStack_15b8[uVar19 * 7];
          uVar124 = auStack_15b8[uVar19 * 7 + 1];
          uVar135 = local_15a8[uVar19 * 7];
          uVar145 = local_15a8[uVar19 * 7 + 1];
          uVar157 = *(undefined8 *)(local_1590 + lVar31 + -8);
          cVar29 = cVar24;
        }
      }
      else {
        auVar69._24_8_ = 0;
        auVar69._0_24_ = *param_6;
        auVar111._24_8_ = 0;
        auVar111._0_24_ = *(undefined1 (*) [24])(&local_15c0 + uVar19 * 7);
        auVar47 = vminpd_avx(auVar69,auVar111);
        uVar37 = auVar47._0_8_;
        auVar42 = vshufpd_avx(auVar47._0_16_,auVar47._0_16_,1);
        uVar92 = auVar42._0_8_;
        uVar124 = auVar47._16_8_;
        auVar140._24_8_ = 0;
        auVar140._0_24_ = param_6[1];
        auVar154._16_8_ = *(undefined8 *)(local_1590 + lVar31 + -8);
        auVar154._0_16_ = *(undefined1 (*) [16])(local_15a8 + uVar19 * 7);
        auVar154._24_8_ = 0;
        auVar47 = vmaxpd_avx(auVar140,auVar154);
        uVar135 = auVar47._0_8_;
        auVar42 = vshufpd_avx(auVar47._0_16_,auVar47._0_16_,1);
        uVar145 = auVar42._0_8_;
        uVar157 = auVar47._16_8_;
      }
      uVar25 = uVar25 & ~(1L << (uVar19 & 0x3f));
      *(undefined8 *)*param_6 = uVar37;
      *(undefined8 *)(*param_6 + 8) = uVar92;
      *(undefined8 *)(*param_6 + 0x10) = uVar124;
      *(undefined8 *)param_6[1] = uVar135;
      *(undefined8 *)(param_6[1] + 8) = uVar145;
      *(undefined8 *)(param_6[1] + 0x10) = uVar157;
      param_6[2][0] = cVar29;
    } while (uVar25 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx2 @ 140a4db70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,double *param_4,
               undefined1 (*param_5) [24],uint param_6,undefined1 (*param_7) [32])

{
  double dVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [32];
  undefined4 uVar21;
  byte bVar22;
  char cVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  char cVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auVar37 [16];
  undefined1 auVar42 [32];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  longlong lVar68;
  undefined1 auVar38 [16];
  longlong lVar74;
  longlong lVar80;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar39 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar59 [32];
  undefined8 uVar36;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  double dVar69;
  undefined1 in_ZMM0 [64];
  double dVar81;
  undefined1 auVar85 [16];
  undefined8 uVar84;
  double dVar117;
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
  double dVar82;
  double dVar83;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
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
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  double dVar123;
  undefined1 auVar125 [16];
  undefined8 uVar124;
  double dVar130;
  double dVar131;
  double dVar132;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  double dVar133;
  undefined8 uVar134;
  double dVar144;
  double dVar145;
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  double dVar146;
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined8 uVar147;
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  double dVar163;
  undefined8 uVar164;
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  double dVar176;
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  double dVar174;
  double dVar175;
  undefined1 in_ZMM5 [64];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [64];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [64];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar212 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 in_ZMM11 [64];
  double dVar220;
  double dVar226;
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  double dVar224;
  double dVar225;
  undefined1 in_ZMM12 [64];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar230 [32];
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar234 [16];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_2200 [16];
  double dStack_21f0;
  double dStack_21e8;
  undefined1 local_21e0 [16];
  double dStack_21d0;
  double dStack_21c8;
  undefined8 local_21c0;
  undefined8 uStack_21b8;
  undefined8 uStack_21b0;
  undefined8 uStack_21a8;
  undefined1 local_21a0 [16];
  double dStack_2190;
  double dStack_2188;
  undefined1 local_2180 [16];
  double dStack_2170;
  double dStack_2168;
  undefined8 local_2160;
  undefined8 uStack_2158;
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  undefined8 local_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 local_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 local_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 local_20e0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined8 uStack_20c8;
  undefined8 local_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 local_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 local_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  double local_2040 [24];
  undefined1 local_1f80 [8];
  double adStack_1f78 [3];
  undefined1 local_1f60 [8];
  double adStack_1f58 [3];
  undefined1 local_1f40 [16];
  double dStack_1f30;
  double dStack_1f28;
  undefined1 local_1f20 [16];
  double dStack_1f10;
  double dStack_1f08;
  undefined1 local_1f00 [16];
  double dStack_1ef0;
  double dStack_1ee8;
  undefined1 local_1ee0 [16];
  double dStack_1ed0;
  double dStack_1ec8;
  undefined1 local_1ec0 [32];
  undefined1 local_1ea0 [32];
  undefined1 local_1e80 [16];
  double dStack_1e70;
  double dStack_1e68;
  undefined1 local_1e60 [16];
  double dStack_1e50;
  double dStack_1e48;
  undefined1 local_1e40 [16];
  double dStack_1e30;
  double dStack_1e28;
  undefined1 local_1e20 [16];
  double dStack_1e10;
  double dStack_1e08;
  undefined1 local_1e00;
  undefined1 uStack_1dff;
  undefined1 uStack_1dfe;
  undefined1 uStack_1dfd;
  undefined1 uStack_1dfc;
  undefined1 uStack_1dfb;
  undefined1 uStack_1dfa;
  undefined1 uStack_1df9;
  double dStack_1df8;
  double dStack_1df0;
  double dStack_1de8;
  double local_1de0;
  double dStack_1dd8;
  double dStack_1dd0;
  double dStack_1dc8;
  double local_1d80;
  double dStack_1d78;
  double dStack_1d70;
  double dStack_1d68;
  double local_1d60;
  double dStack_1d58;
  double dStack_1d50;
  double dStack_1d48;
  double local_1d40;
  double dStack_1d38;
  double dStack_1d30;
  double dStack_1d28;
  double local_1d20;
  double dStack_1d18;
  double dStack_1d10;
  double dStack_1d08;
  double local_1d00;
  double dStack_1cf8;
  double dStack_1cf0;
  double dStack_1ce8;
  double local_1ce0;
  double dStack_1cd8;
  double dStack_1cd0;
  double dStack_1cc8;
  double local_1c80;
  double dStack_1c78;
  double dStack_1c70;
  double dStack_1c68;
  double local_1c60;
  double dStack_1c58;
  double dStack_1c50;
  double dStack_1c48;
  double local_1c40;
  double dStack_1c38;
  double dStack_1c30;
  double dStack_1c28;
  double local_1c20;
  double dStack_1c18;
  double dStack_1c10;
  double dStack_1c08;
  double local_1c00;
  double dStack_1bf8;
  double dStack_1bf0;
  double dStack_1be8;
  double local_1be0;
  double dStack_1bd8;
  double dStack_1bd0;
  double dStack_1bc8;
  undefined8 local_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 local_1b40;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined1 local_1b20 [32];
  undefined1 local_1b00 [32];
  undefined1 local_1ae0 [32];
  undefined1 local_1ac0 [16];
  double dStack_1ab0;
  double dStack_1aa8;
  undefined1 local_1aa0 [16];
  double dStack_1a90;
  double dStack_1a88;
  undefined1 local_1a80 [16];
  undefined1 local_1a60 [32];
  undefined1 local_1a40 [32];
  undefined1 local_1a20 [32];
  undefined1 local_1a00 [32];
  undefined1 local_19e0 [32];
  undefined1 local_19c0 [32];
  undefined1 local_19a0 [32];
  undefined1 local_1980 [32];
  undefined1 local_1960 [32];
  undefined1 local_1940 [32];
  undefined1 local_1920 [32];
  undefined1 local_1900 [32];
  undefined1 local_18e0 [32];
  undefined1 local_18c0 [32];
  undefined1 local_18a0 [32];
  undefined1 local_1880 [32];
  undefined1 local_1860 [32];
  undefined1 local_1840 [32];
  undefined1 local_1820 [32];
  undefined8 local_1800;
  undefined1 local_17a0 [32];
  undefined1 local_1780 [32];
  undefined1 local_1760 [32];
  undefined1 local_1740 [32];
  undefined1 local_1720 [32];
  undefined1 local_1700 [32];
  undefined1 local_16e0 [32];
  undefined1 local_16c0 [32];
  undefined1 local_16a0 [32];
  undefined1 local_1680 [32];
  undefined1 local_1660 [32];
  undefined1 local_1640 [32];
  undefined1 local_1620 [32];
  undefined8 local_1600;
  undefined8 local_15a0;
  undefined8 auStack_1598 [2];
  undefined8 local_1588 [2];
  undefined8 local_1578;
  char local_1570 [8];
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 local_1558;
  undefined8 local_1550;
  undefined8 local_1548;
  undefined8 local_1540;
  undefined1 local_1538;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined8 local_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  undefined1 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined8 local_14e8;
  undefined8 local_14e0;
  undefined8 local_14d8;
  undefined8 local_14d0;
  undefined1 local_14c8;
  undefined8 local_14c0;
  undefined8 local_14b8;
  undefined8 local_14b0;
  undefined8 local_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined1 local_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined1 local_1458;
  undefined8 local_1450;
  undefined8 local_1448;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined1 local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 local_1408;
  undefined8 local_1400;
  undefined8 local_13f8;
  undefined8 local_13f0;
  undefined1 local_13e8;
  longlong local_13e0;
  longlong lStack_13d8;
  longlong lStack_13d0;
  longlong lStack_13c8;
  longlong local_13c0;
  longlong lStack_13b8;
  longlong lStack_13b0;
  longlong lStack_13a8;
  longlong local_13a0;
  longlong lStack_1398;
  longlong lStack_1390;
  longlong lStack_1388;
  longlong local_1380;
  longlong lStack_1378;
  longlong lStack_1370;
  longlong lStack_1368;
  longlong local_1360;
  longlong lStack_1358;
  longlong lStack_1350;
  longlong lStack_1348;
  undefined1 local_1340 [32];
  longlong local_1320;
  longlong lStack_1318;
  longlong lStack_1310;
  longlong lStack_1308;
  double local_1300;
  double dStack_12f8;
  double dStack_12f0;
  double dStack_12e8;
  undefined1 local_12e0 [16];
  undefined8 local_12d0;
  undefined1 local_12c8 [16];
  undefined8 local_12b8;
  char local_12b0 [8];
  undefined1 local_12a8 [16];
  undefined8 local_1298;
  undefined1 local_1290 [16];
  undefined8 local_1280;
  undefined1 local_1278;
  undefined1 local_1270 [16];
  undefined8 local_1260;
  undefined1 local_1258 [16];
  undefined8 local_1248;
  undefined1 local_1240;
  undefined1 local_1238 [16];
  undefined8 local_1228;
  undefined1 local_1220 [16];
  undefined8 local_1210;
  undefined1 local_1208;
  undefined1 local_1200 [16];
  undefined8 local_11f0;
  undefined1 local_11e8 [16];
  undefined8 local_11d8;
  undefined1 local_11d0;
  undefined1 local_11c8 [16];
  double local_11b8;
  undefined1 local_11b0 [16];
  double local_11a0;
  undefined1 local_1198 [8];
  undefined1 local_1190 [16];
  double local_1180;
  undefined1 local_1178 [16];
  double local_1168;
  undefined1 local_1160 [8];
  undefined1 local_1158 [16];
  double local_1148;
  undefined1 local_1140 [16];
  double local_1130;
  undefined1 local_1128 [8];
  undefined1 local_1120 [16];
  double adStack_1110 [2];
  undefined1 local_1100 [16];
  double adStack_10f0 [9];
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined1 local_ea0 [32];
  undefined1 local_e80 [32];
  undefined1 local_e60 [32];
  undefined1 local_e40 [32];
  undefined1 local_e20 [32];
  undefined1 local_e00 [32];
  undefined1 local_de0 [32];
  undefined1 local_dc0 [16];
  double adStack_db0 [2];
  undefined1 local_da0 [16];
  double adStack_d90 [2];
  undefined1 local_d80 [16];
  double adStack_d70 [2];
  undefined1 local_d60 [16];
  double adStack_d50 [2];
  undefined1 local_d40 [16];
  double adStack_d30 [2];
  undefined1 local_d20 [16];
  double adStack_d10 [13];
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined1 local_aa0 [32];
  undefined1 local_a80 [32];
  undefined1 local_a60 [32];
  undefined1 local_a40 [32];
  undefined1 local_a20 [32];
  undefined1 local_a00 [32];
  undefined1 local_9e0 [32];
  undefined1 local_9c0 [16];
  double adStack_9b0 [2];
  undefined1 local_9a0 [16];
  double adStack_990 [2];
  undefined1 local_980 [16];
  double adStack_970 [2];
  undefined1 local_960 [16];
  double adStack_950 [2];
  undefined1 local_940 [16];
  double adStack_930 [2];
  undefined1 local_920 [16];
  double adStack_910 [2];
  undefined1 local_900 [16];
  double adStack_8f0 [9];
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined1 local_6a0 [32];
  undefined1 local_680 [32];
  undefined1 local_660 [32];
  undefined1 local_640 [32];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [16];
  double adStack_5b0 [2];
  undefined1 local_5a0 [16];
  double adStack_590 [2];
  undefined1 local_580 [16];
  double adStack_570 [2];
  undefined1 local_560 [16];
  double adStack_550 [2];
  undefined1 local_540 [16];
  double adStack_530 [2];
  undefined1 local_520 [16];
  double adStack_510 [13];
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140a4db86;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  auVar135 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  uVar28 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar28 = param_6;
  }
  uVar28 = uVar28 & 0xfffffff8;
  auVar135 = auVar135 & ~*param_7;
  local_17a0._0_4_ = uVar28;
  if ((((((((SUB321(auVar135 >> 0x1f,0) & 1) == 0 && (SUB321(auVar135 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar135 >> 0x5f,0) & 1) == 0) && SUB321(auVar135 >> 0x7f,0) == '\0') &&
        (SUB321(auVar135 >> 0x9f,0) & 1) == 0) && SUB321(auVar135 >> 0xbf,0) == '\0') &&
      (SUB321(auVar135 >> 0xdf,0) & 1) == 0) && -1 < auVar135[0x1f]) {
    local_1820 = ZEXT1632(ZEXT816(0));
    local_1840 = ZEXT1632(ZEXT816(0));
    local_1860._0_16_ = ZEXT816(0);
    local_1860 = ZEXT1632(local_1860._0_16_);
    local_1880._0_16_ = ZEXT816(0);
    local_1880 = ZEXT1632(local_1880._0_16_);
    local_18a0._0_16_ = ZEXT816(0);
    local_18a0 = ZEXT1632(local_18a0._0_16_);
    local_18c0._0_16_ = ZEXT816(0);
    local_18c0 = ZEXT1632(local_18c0._0_16_);
    local_18e0 = ZEXT1632(ZEXT816(0));
    local_1900 = ZEXT1632(ZEXT816(0));
    local_1920._0_16_ = ZEXT816(0);
    local_1920 = ZEXT1632(local_1920._0_16_);
    local_1940._0_16_ = ZEXT816(0);
    local_1940 = ZEXT1632(local_1940._0_16_);
    local_1960._0_16_ = ZEXT816(0);
    local_1960 = ZEXT1632(local_1960._0_16_);
    local_1980._0_16_ = ZEXT816(0);
    local_1980 = ZEXT1632(local_1980._0_16_);
    local_1800 = 0;
    if ((int)uVar28 < 1) {
      iVar25 = 0;
    }
    else {
      iVar25 = 0;
      local_1340._4_4_ = __real_00000038;
      local_1340._0_4_ = __real_00000038;
      local_1340._8_4_ = __real_00000038;
      local_1340._12_4_ = __real_00000038;
      local_1340._16_4_ = __real_00000038;
      local_1340._20_4_ = __real_00000038;
      local_1340._24_4_ = __real_00000038;
      local_1340._28_4_ = __real_00000038;
      auVar182 = ZEXT3264(local_1340);
      local_1360 = __real_0000000000000008;
      lStack_1358 = __real_0000000000000008;
      lStack_1350 = __real_0000000000000008;
      lStack_1348 = __real_0000000000000008;
      local_1380 = __real_0000000000000010;
      lStack_1378 = __real_0000000000000010;
      lStack_1370 = __real_0000000000000010;
      lStack_1368 = __real_0000000000000010;
      local_13a0 = __real_0000000000000018;
      lStack_1398 = __real_0000000000000018;
      lStack_1390 = __real_0000000000000018;
      lStack_1388 = __real_0000000000000018;
      local_13c0 = __real_0000000000000020;
      lStack_13b8 = __real_0000000000000020;
      lStack_13b0 = __real_0000000000000020;
      lStack_13a8 = __real_0000000000000020;
      local_13e0 = __real_0000000000000028;
      lStack_13d8 = __real_0000000000000028;
      lStack_13d0 = __real_0000000000000028;
      lStack_13c8 = __real_0000000000000028;
      local_1320 = __real_0000000000000030;
      lStack_1318 = __real_0000000000000030;
      lStack_1310 = __real_0000000000000030;
      lStack_1308 = __real_0000000000000030;
      auVar195 = ZEXT1664((undefined1  [16])0x0);
      do {
        auVar135._4_4_ = iVar25;
        auVar135._0_4_ = iVar25;
        auVar135._8_4_ = iVar25;
        auVar135._12_4_ = iVar25;
        auVar135._16_4_ = iVar25;
        auVar135._20_4_ = iVar25;
        auVar135._24_4_ = iVar25;
        auVar135._28_4_ = iVar25;
        auVar47 = vpor_avx2(auVar135,
                            ___ymm_0000000700000006000000050000000400000003000000020000000100000000)
        ;
        auVar17 = vpmulld_avx2(auVar47,auVar182._0_32_);
        auVar135 = vpmovzxdq_avx2(auVar17._0_16_);
        auVar17 = vpmovzxdq_avx2(auVar17._16_16_);
        lVar30 = auVar135._0_8_;
        lVar68 = auVar135._8_8_;
        lVar74 = auVar135._16_8_;
        lVar80 = auVar135._24_8_;
        auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar30 + local_1320)),
                              (uint)*(byte *)(param_3 + lVar68 + lStack_1318),1);
        auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + lVar74 + lStack_1310),2);
        auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + lVar80 + lStack_1308),3);
        auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._0_8_ + local_1320),4);
        auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._8_8_ + lStack_1318),5);
        auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._16_8_ + lStack_1310),6);
        auVar38 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._24_8_ + lStack_1308),7);
        auVar135 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
        auVar17 = vpcmpeqd_avx2(auVar135,*(undefined1 (*) [32])
                                          (param_1 + (ulonglong)(uint)(iVar25 * 4)));
        uVar21 = local_17a0._0_4_;
        auVar85 = SUB3216(auVar17 ^ auVar135,0x10);
        in_ZMM5 = ZEXT1664(auVar85);
        auVar41 = vpackssdw_avx(SUB3216(auVar17 ^ auVar135,0),auVar85);
        auVar38 = vpcmpeqb_avx(auVar195._0_16_,auVar38);
        auVar38 = vpmovsxbw_avx(auVar38 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar41 = vpand_avx(auVar41,auVar38);
        if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x1f,0) & 1) != 0) || (SUB161(auVar41 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') {
          auVar135 = vpslld_avx2(auVar47,3);
          auVar135 = vpsubd_avx2(auVar135,auVar47);
          vpmovzxdq_avx2(auVar135._16_16_);
          auVar17 = vpmovzxdq_avx2(auVar135._0_16_);
          auVar135 = vpcmpeqd_avx2(ZEXT1632(auVar85),ZEXT1632(auVar85));
          local_19a0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
          auVar135 = vpcmpeqd_avx2(auVar17,auVar17);
          auVar184 = vgatherqpd(ZEXT832(0),auVar135);
          auVar17._0_8_ = lVar30 + local_1360;
          auVar17._8_8_ = lVar68 + lStack_1358;
          auVar17._16_8_ = lVar74 + lStack_1350;
          auVar17._24_8_ = lVar80 + lStack_1348;
          auVar135 = vpcmpeqd_avx2(auVar184,auVar184);
          local_19c0 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          auVar135 = vpcmpeqd_avx2(auVar17,auVar17);
          auVar185 = vgatherqpd(ZEXT832(0),auVar135);
          auVar136._0_8_ = lVar30 + local_1380;
          auVar136._8_8_ = lVar68 + lStack_1378;
          auVar136._16_8_ = lVar74 + lStack_1370;
          auVar136._24_8_ = lVar80 + lStack_1368;
          auVar135 = vpcmpeqd_avx2(auVar185,auVar185);
          local_19e0 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          auVar135 = vpcmpeqd_avx2(auVar136,auVar136);
          local_1a00 = vgatherqpd(ZEXT832(0),auVar135);
          auVar148._0_8_ = lVar30 + local_13a0;
          auVar148._8_8_ = lVar68 + lStack_1398;
          auVar148._16_8_ = lVar74 + lStack_1390;
          auVar148._24_8_ = lVar80 + lStack_1388;
          auVar135 = vpcmpeqd_avx2(local_1a00,local_1a00);
          local_1a20 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          auVar135 = vpcmpeqd_avx2(auVar148,auVar148);
          _local_1ac0 = vgatherqpd(ZEXT832(0),auVar135);
          auVar149._0_8_ = lVar30 + local_13c0;
          auVar149._8_8_ = lVar68 + lStack_13b8;
          auVar149._16_8_ = lVar74 + lStack_13b0;
          auVar149._24_8_ = lVar80 + lStack_13a8;
          auVar135 = vpcmpeqd_avx2(_local_1ac0,_local_1ac0);
          local_1a40 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          auVar135 = vpcmpeqd_avx2(auVar149,auVar149);
          _local_1aa0 = vgatherqpd(ZEXT832(0),auVar135);
          auVar151._8_8_ = lStack_13d8;
          auVar151._0_8_ = local_13e0;
          auVar151._16_8_ = lStack_13d0;
          auVar151._24_8_ = lStack_13c8;
          auVar150._0_8_ = lVar30 + local_13e0;
          auVar150._8_8_ = lVar68 + lStack_13d8;
          auVar150._16_8_ = lVar74 + lStack_13d0;
          auVar150._24_8_ = lVar80 + lStack_13c8;
          auVar135 = vpcmpeqd_avx2(auVar151,auVar151);
          local_1b00 = vgatherqpd(ZEXT832(0),auVar135);
          auVar135 = vpcmpeqd_avx2(auVar150,auVar150);
          local_1b20 = vgatherqpd(ZEXT832(0),auVar135);
          auVar235 = vpslld_avx2(auVar47,7);
          vpmovzxdq_avx2(auVar235._0_16_);
          auVar135 = vpmovsxwq_avx2(auVar41);
          auVar136 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar235._16_16_);
          auVar38 = vpshufd_avx(auVar41,0xee);
          auVar17 = vpmovsxwq_avx2(auVar38);
          auVar148 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
          auVar47._4_4_ = __real_00000008;
          auVar47._0_4_ = __real_00000008;
          auVar47._8_4_ = __real_00000008;
          auVar47._12_4_ = __real_00000008;
          auVar47._16_4_ = __real_00000008;
          auVar47._20_4_ = __real_00000008;
          auVar47._24_4_ = __real_00000008;
          auVar47._28_4_ = __real_00000008;
          auVar47 = vpor_avx2(auVar235,auVar47);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar186 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar149 = vgatherqpd(ZEXT832(0),auVar17);
          auVar152._4_4_ = __real_00000010;
          auVar152._0_4_ = __real_00000010;
          auVar152._8_4_ = __real_00000010;
          auVar152._12_4_ = __real_00000010;
          auVar152._16_4_ = __real_00000010;
          auVar152._20_4_ = __real_00000010;
          auVar152._24_4_ = __real_00000010;
          auVar152._28_4_ = __real_00000010;
          auVar47 = vpor_avx2(auVar235,auVar152);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar187 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar150 = vgatherqpd(ZEXT832(0),auVar17);
          auVar153._4_4_ = __real_00000018;
          auVar153._0_4_ = __real_00000018;
          auVar153._8_4_ = __real_00000018;
          auVar153._12_4_ = __real_00000018;
          auVar153._16_4_ = __real_00000018;
          auVar153._20_4_ = __real_00000018;
          auVar153._24_4_ = __real_00000018;
          auVar153._28_4_ = __real_00000018;
          auVar47 = vpor_avx2(auVar235,auVar153);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar188 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar151 = vgatherqpd(ZEXT832(0),auVar17);
          auVar154._4_4_ = __real_00000020;
          auVar154._0_4_ = __real_00000020;
          auVar154._8_4_ = __real_00000020;
          auVar154._12_4_ = __real_00000020;
          auVar154._16_4_ = __real_00000020;
          auVar154._20_4_ = __real_00000020;
          auVar154._24_4_ = __real_00000020;
          auVar154._28_4_ = __real_00000020;
          auVar47 = vpor_avx2(auVar235,auVar154);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar169 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar152 = vgatherqpd(ZEXT832(0),auVar17);
          auVar155._4_4_ = __real_00000028;
          auVar155._0_4_ = __real_00000028;
          auVar155._8_4_ = __real_00000028;
          auVar155._12_4_ = __real_00000028;
          auVar155._16_4_ = __real_00000028;
          auVar155._20_4_ = __real_00000028;
          auVar155._24_4_ = __real_00000028;
          auVar155._28_4_ = __real_00000028;
          auVar47 = vpor_avx2(auVar235,auVar155);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar170 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar153 = vgatherqpd(ZEXT832(0),auVar17);
          auVar156._4_4_ = __real_00000030;
          auVar156._0_4_ = __real_00000030;
          auVar156._8_4_ = __real_00000030;
          auVar156._12_4_ = __real_00000030;
          auVar156._16_4_ = __real_00000030;
          auVar156._20_4_ = __real_00000030;
          auVar156._24_4_ = __real_00000030;
          auVar156._28_4_ = __real_00000030;
          auVar47 = vpor_avx2(auVar235,auVar156);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar171 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar154 = vgatherqpd(ZEXT832(0),auVar17);
          auVar47 = vpor_avx2(auVar235,auVar182._0_32_);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar172 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar155 = vgatherqpd(ZEXT832(0),auVar17);
          auVar165._4_4_ = __real_00000040;
          auVar165._0_4_ = __real_00000040;
          auVar165._8_4_ = __real_00000040;
          auVar165._12_4_ = __real_00000040;
          auVar165._16_4_ = __real_00000040;
          auVar165._20_4_ = __real_00000040;
          auVar165._24_4_ = __real_00000040;
          auVar165._28_4_ = __real_00000040;
          auVar47 = vpor_avx2(auVar235,auVar165);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar165 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          auVar156 = vgatherqpd(ZEXT832(0),auVar17);
          auVar166._4_4_ = __real_00000048;
          auVar166._0_4_ = __real_00000048;
          auVar166._8_4_ = __real_00000048;
          auVar166._12_4_ = __real_00000048;
          auVar166._16_4_ = __real_00000048;
          auVar166._20_4_ = __real_00000048;
          auVar166._24_4_ = __real_00000048;
          auVar166._28_4_ = __real_00000048;
          auVar47 = vpor_avx2(auVar235,auVar166);
          vpmovzxdq_avx2(auVar47._0_16_);
          auVar166 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_2a0 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
          auVar167._4_4_ = __real_00000050;
          auVar167._0_4_ = __real_00000050;
          auVar167._8_4_ = __real_00000050;
          auVar167._12_4_ = __real_00000050;
          auVar167._16_4_ = __real_00000050;
          auVar167._20_4_ = __real_00000050;
          auVar167._24_4_ = __real_00000050;
          auVar167._28_4_ = __real_00000050;
          auVar47 = vpor_avx2(auVar235,auVar167);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_1ae0._0_16_ = auVar41;
          local_280 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_260 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
          auVar168._4_4_ = __real_00000058;
          auVar168._0_4_ = __real_00000058;
          auVar168._8_4_ = __real_00000058;
          auVar168._12_4_ = __real_00000058;
          auVar168._16_4_ = __real_00000058;
          auVar168._20_4_ = __real_00000058;
          auVar168._24_4_ = __real_00000058;
          auVar168._28_4_ = __real_00000058;
          auVar47 = vpor_avx2(auVar235,auVar168);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_240 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_220 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
          auVar177._4_4_ = __real_00000060;
          auVar177._0_4_ = __real_00000060;
          auVar177._8_4_ = __real_00000060;
          auVar177._12_4_ = __real_00000060;
          auVar177._16_4_ = __real_00000060;
          auVar177._20_4_ = __real_00000060;
          auVar177._24_4_ = __real_00000060;
          auVar177._28_4_ = __real_00000060;
          auVar47 = vpor_avx2(auVar235,auVar177);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_200 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_1e0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
          auVar178._4_4_ = __real_00000068;
          auVar178._0_4_ = __real_00000068;
          auVar178._8_4_ = __real_00000068;
          auVar178._12_4_ = __real_00000068;
          auVar178._16_4_ = __real_00000068;
          auVar178._20_4_ = __real_00000068;
          auVar178._24_4_ = __real_00000068;
          auVar178._28_4_ = __real_00000068;
          auVar47 = vpor_avx2(auVar235,auVar178);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_1c0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_1a0 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
          auVar179._4_4_ = __real_00000070;
          auVar179._0_4_ = __real_00000070;
          auVar179._8_4_ = __real_00000070;
          auVar179._12_4_ = __real_00000070;
          auVar179._16_4_ = __real_00000070;
          auVar179._20_4_ = __real_00000070;
          auVar179._24_4_ = __real_00000070;
          auVar179._28_4_ = __real_00000070;
          auVar47 = vpor_avx2(auVar235,auVar179);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_180 = vgatherqpd(ZEXT832(0),auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_160 = vgatherqpd(ZEXT1632((undefined1  [16])0x0),auVar17);
          auVar183._4_4_ = __real_00000078;
          auVar183._0_4_ = __real_00000078;
          auVar183._8_4_ = __real_00000078;
          auVar183._12_4_ = __real_00000078;
          auVar183._16_4_ = __real_00000078;
          auVar183._20_4_ = __real_00000078;
          auVar183._24_4_ = __real_00000078;
          auVar183._28_4_ = __real_00000078;
          auVar47 = vpor_avx2(auVar235,auVar183);
          vpmovzxdq_avx2(auVar47._0_16_);
          local_140 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
          vpmovzxdq_avx2(auVar47._16_16_);
          local_120 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
          auVar38 = vpacksswb_avx(auVar41,auVar41);
          bVar26 = SUB161(auVar38 >> 7,0) & 1;
          bVar3 = SUB161(auVar38 >> 0xf,0) & 1;
          bVar4 = SUB161(auVar38 >> 0x17,0) & 1;
          bVar5 = SUB161(auVar38 >> 0x1f,0) & 1;
          bVar6 = SUB161(auVar38 >> 0x27,0) & 1;
          bVar7 = SUB161(auVar38 >> 0x2f,0) & 1;
          bVar8 = SUB161(auVar38 >> 0x37,0) & 1;
          bVar9 = SUB161(auVar38 >> 0x3f,0) << 7;
          local_21e0._0_8_ = auVar148._0_8_;
          local_21e0._8_8_ = auVar148._8_8_;
          dStack_21d0 = auVar148._16_8_;
          dStack_21c8 = auVar148._24_8_;
          adStack_510[6] = (double)local_21e0._0_8_;
          adStack_510[7] = (double)local_21e0._8_8_;
          adStack_510[8] = dStack_21d0;
          adStack_510[9] = dStack_21c8;
          local_21c0 = auVar136._0_8_;
          uStack_21b8 = auVar136._8_8_;
          uStack_21b0 = auVar136._16_8_;
          uStack_21a8 = auVar136._24_8_;
          adStack_510[2] = (double)local_21c0;
          adStack_510[3] = (double)uStack_21b8;
          adStack_510[4] = (double)uStack_21b0;
          adStack_510[5] = (double)uStack_21a8;
          local_2180._0_8_ = auVar149._0_8_;
          local_2180._8_8_ = auVar149._8_8_;
          dStack_2170 = auVar149._16_8_;
          dStack_2168 = auVar149._24_8_;
          local_4a0 = local_2180._0_8_;
          uStack_498 = local_2180._8_8_;
          uStack_490 = dStack_2170;
          uStack_488 = dStack_2168;
          local_2200._0_8_ = auVar186._0_8_;
          local_2200._8_8_ = auVar186._8_8_;
          dStack_21f0 = auVar186._16_8_;
          dStack_21e8 = auVar186._24_8_;
          adStack_510[10] = (double)local_2200._0_8_;
          adStack_510[0xb] = (double)local_2200._8_8_;
          adStack_510[0xc] = dStack_21f0;
          uStack_4a8 = dStack_21e8;
          local_2120 = auVar150._0_8_;
          uStack_2118 = auVar150._8_8_;
          uStack_2110 = auVar150._16_8_;
          uStack_2108 = auVar150._24_8_;
          local_460 = local_2120;
          uStack_458 = uStack_2118;
          uStack_450 = uStack_2110;
          uStack_448 = uStack_2108;
          local_21a0._0_8_ = auVar187._0_8_;
          local_21a0._8_8_ = auVar187._8_8_;
          dStack_2190 = auVar187._16_8_;
          dStack_2188 = auVar187._24_8_;
          local_480 = local_21a0._0_8_;
          uStack_478 = local_21a0._8_8_;
          uStack_470 = dStack_2190;
          uStack_468 = dStack_2188;
          local_2160 = auVar151._0_8_;
          uStack_2158 = auVar151._8_8_;
          uStack_2150 = auVar151._16_8_;
          uStack_2148 = auVar151._24_8_;
          local_420 = local_2160;
          uStack_418 = uStack_2158;
          uStack_410 = uStack_2150;
          uStack_408 = uStack_2148;
          local_2140 = auVar188._0_8_;
          uStack_2138 = auVar188._8_8_;
          uStack_2130 = auVar188._16_8_;
          uStack_2128 = auVar188._24_8_;
          local_440 = local_2140;
          uStack_438 = uStack_2138;
          uStack_430 = uStack_2130;
          uStack_428 = uStack_2128;
          local_20a0 = auVar152._0_8_;
          uStack_2098 = auVar152._8_8_;
          uStack_2090 = auVar152._16_8_;
          uStack_2088 = auVar152._24_8_;
          local_3e0 = local_20a0;
          uStack_3d8 = uStack_2098;
          uStack_3d0 = uStack_2090;
          uStack_3c8 = uStack_2088;
          local_2080 = auVar169._0_8_;
          uStack_2078 = auVar169._8_8_;
          uStack_2070 = auVar169._16_8_;
          uStack_2068 = auVar169._24_8_;
          local_400 = local_2080;
          uStack_3f8 = uStack_2078;
          uStack_3f0 = uStack_2070;
          uStack_3e8 = uStack_2068;
          local_20e0 = auVar153._0_8_;
          uStack_20d8 = auVar153._8_8_;
          uStack_20d0 = auVar153._16_8_;
          uStack_20c8 = auVar153._24_8_;
          local_3a0 = local_20e0;
          uStack_398 = uStack_20d8;
          uStack_390 = uStack_20d0;
          uStack_388 = uStack_20c8;
          local_20c0 = auVar170._0_8_;
          uStack_20b8 = auVar170._8_8_;
          uStack_20b0 = auVar170._16_8_;
          uStack_20a8 = auVar170._24_8_;
          local_3c0 = local_20c0;
          uStack_3b8 = uStack_20b8;
          uStack_3b0 = uStack_20b0;
          uStack_3a8 = uStack_20a8;
          local_2060 = auVar154._0_8_;
          uStack_2058 = auVar154._8_8_;
          uStack_2050 = auVar154._16_8_;
          uStack_2048 = auVar154._24_8_;
          local_360 = local_2060;
          uStack_358 = uStack_2058;
          uStack_350 = uStack_2050;
          uStack_348 = uStack_2048;
          local_2100 = auVar171._0_8_;
          uStack_20f8 = auVar171._8_8_;
          uStack_20f0 = auVar171._16_8_;
          uStack_20e8 = auVar171._24_8_;
          local_380 = local_2100;
          uStack_378 = uStack_20f8;
          uStack_370 = uStack_20f0;
          uStack_368 = uStack_20e8;
          local_2040[0xc] = auVar155._0_8_;
          local_2040[0xd] = auVar155._8_8_;
          local_2040[0xe] = auVar155._16_8_;
          local_2040[0xf] = auVar155._24_8_;
          local_320 = local_2040[0xc];
          uStack_318 = local_2040[0xd];
          uStack_310 = local_2040[0xe];
          uStack_308 = local_2040[0xf];
          local_2040[0x10] = auVar172._0_8_;
          local_2040[0x11] = auVar172._8_8_;
          local_2040[0x12] = auVar172._16_8_;
          local_2040[0x13] = auVar172._24_8_;
          local_340 = local_2040[0x10];
          uStack_338 = local_2040[0x11];
          uStack_330 = local_2040[0x12];
          uStack_328 = local_2040[0x13];
          local_1b40 = auVar156._0_8_;
          uStack_1b38 = auVar156._8_8_;
          uStack_1b30 = auVar156._16_8_;
          uStack_1b28 = auVar156._24_8_;
          local_2e0 = local_1b40;
          uStack_2d8 = uStack_1b38;
          uStack_2d0 = uStack_1b30;
          uStack_2c8 = uStack_1b28;
          local_2040[8] = auVar165._0_8_;
          local_2040[9] = auVar165._8_8_;
          local_2040[10] = auVar165._16_8_;
          local_2040[0xb] = auVar165._24_8_;
          local_300 = local_2040[8];
          uStack_2f8 = local_2040[9];
          uStack_2f0 = local_2040[10];
          uStack_2e8 = local_2040[0xb];
          local_1b60 = auVar166._0_8_;
          uStack_1b58 = auVar166._8_8_;
          uStack_1b50 = auVar166._16_8_;
          uStack_1b48 = auVar166._24_8_;
          local_2c0 = local_1b60;
          uStack_2b8 = uStack_1b58;
          uStack_2b0 = uStack_1b50;
          uStack_2a8 = uStack_1b48;
          dVar1 = param_4[8];
          dVar31 = param_4[0xc];
          dVar32 = *param_4;
          dVar33 = param_4[1];
          lVar30 = 0xc0;
          dVar34 = param_4[5];
          dVar35 = param_4[9];
          dVar63 = param_4[0xd];
          dVar64 = param_4[2];
          dVar65 = param_4[6];
          dVar66 = param_4[10];
          dVar67 = param_4[0xe];
          dVar69 = param_4[3];
          dVar70 = param_4[7];
          dVar71 = param_4[0xb];
          dVar72 = param_4[0xf];
          auVar135 = vpmovsxwd_avx2(auVar41);
          do {
            dVar75 = *(double *)(local_5c0 + lVar30);
            dVar76 = *(double *)(local_5c0 + lVar30 + 8);
            dVar77 = *(double *)(local_5c0 + lVar30 + 0x10);
            dVar78 = *(double *)(local_5c0 + lVar30 + 0x18);
            dVar79 = *(double *)(local_5a0 + lVar30);
            dVar81 = *(double *)(local_5a0 + lVar30 + 8);
            dVar82 = *(double *)(local_5a0 + lVar30 + 0x10);
            dVar83 = *(double *)(local_5a0 + lVar30 + 0x18);
            dVar114 = *(double *)(local_580 + lVar30);
            dVar115 = *(double *)(local_580 + lVar30 + 8);
            dVar116 = *(double *)(local_580 + lVar30 + 0x10);
            dVar117 = *(double *)(local_580 + lVar30 + 0x18);
            dVar118 = *(double *)(local_560 + lVar30);
            dVar119 = *(double *)(local_560 + lVar30 + 8);
            dVar120 = *(double *)(local_560 + lVar30 + 0x10);
            dVar121 = *(double *)(local_560 + lVar30 + 0x18);
            dVar122 = *(double *)(local_540 + lVar30);
            dVar123 = *(double *)(local_540 + lVar30 + 8);
            dVar130 = *(double *)(local_540 + lVar30 + 0x10);
            dVar131 = *(double *)(local_540 + lVar30 + 0x18);
            dVar132 = *(double *)(local_520 + lVar30);
            dVar133 = *(double *)(local_520 + lVar30 + 8);
            dVar144 = *(double *)(local_520 + lVar30 + 0x10);
            dVar145 = *(double *)(local_520 + lVar30 + 0x18);
            dVar146 = *(double *)((longlong)adStack_510 + lVar30 + 0x30);
            dVar163 = *(double *)((longlong)adStack_510 + lVar30 + 0x38);
            dVar174 = *(double *)((longlong)adStack_510 + lVar30 + 0x40);
            dVar175 = *(double *)((longlong)adStack_510 + lVar30 + 0x48);
            dVar73 = param_4[4];
            *(double *)((longlong)local_2040 + lVar30 + 0x20) =
                 dVar146 * dVar31 + dVar132 * dVar1 + dVar118 * dVar73 + dVar79 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x28) =
                 dVar163 * dVar31 + dVar133 * dVar1 + dVar119 * dVar73 + dVar81 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x30) =
                 dVar174 * dVar31 + dVar144 * dVar1 + dVar120 * dVar73 + dVar82 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x38) =
                 dVar175 * dVar31 + dVar145 * dVar1 + dVar121 * dVar73 + dVar83 * dVar32 + 0.0;
            dVar176 = *(double *)((longlong)adStack_510 + lVar30 + 0x10);
            dVar220 = *(double *)((longlong)adStack_510 + lVar30 + 0x18);
            dVar224 = *(double *)((longlong)adStack_510 + lVar30 + 0x20);
            dVar225 = *(double *)((longlong)adStack_510 + lVar30 + 0x28);
            *(double *)((longlong)local_2040 + lVar30) =
                 dVar176 * dVar31 + dVar122 * dVar1 + dVar114 * dVar73 + dVar75 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 8) =
                 dVar220 * dVar31 + dVar123 * dVar1 + dVar115 * dVar73 + dVar76 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x10) =
                 dVar224 * dVar31 + dVar130 * dVar1 + dVar116 * dVar73 + dVar77 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x18) =
                 dVar225 * dVar31 + dVar131 * dVar1 + dVar117 * dVar73 + dVar78 * dVar32 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x60) =
                 dVar146 * dVar63 + dVar132 * dVar35 + dVar118 * dVar34 + dVar79 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x68) =
                 dVar163 * dVar63 + dVar133 * dVar35 + dVar119 * dVar34 + dVar81 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x70) =
                 dVar174 * dVar63 + dVar144 * dVar35 + dVar120 * dVar34 + dVar82 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x78) =
                 dVar175 * dVar63 + dVar145 * dVar35 + dVar121 * dVar34 + dVar83 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x40) =
                 dVar176 * dVar63 + dVar122 * dVar35 + dVar114 * dVar34 + dVar75 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x48) =
                 dVar220 * dVar63 + dVar123 * dVar35 + dVar115 * dVar34 + dVar76 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x50) =
                 dVar224 * dVar63 + dVar130 * dVar35 + dVar116 * dVar34 + dVar77 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x58) =
                 dVar225 * dVar63 + dVar131 * dVar35 + dVar117 * dVar34 + dVar78 * dVar33 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0xa0) =
                 dVar146 * dVar67 + dVar132 * dVar66 + dVar118 * dVar65 + dVar79 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0xa8) =
                 dVar163 * dVar67 + dVar133 * dVar66 + dVar119 * dVar65 + dVar81 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0xb0) =
                 dVar174 * dVar67 + dVar144 * dVar66 + dVar120 * dVar65 + dVar82 * dVar64 + 0.0;
            *(double *)(local_1f80 + lVar30 + -8) =
                 dVar175 * dVar67 + dVar145 * dVar66 + dVar121 * dVar65 + dVar83 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x80) =
                 dVar176 * dVar67 + dVar122 * dVar66 + dVar114 * dVar65 + dVar75 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x88) =
                 dVar220 * dVar67 + dVar123 * dVar66 + dVar115 * dVar65 + dVar76 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x90) =
                 dVar224 * dVar67 + dVar130 * dVar66 + dVar116 * dVar65 + dVar77 * dVar64 + 0.0;
            *(double *)((longlong)local_2040 + lVar30 + 0x98) =
                 dVar225 * dVar67 + dVar131 * dVar66 + dVar117 * dVar65 + dVar78 * dVar64 + 0.0;
            *(double *)(local_1f60 + lVar30) =
                 dVar72 * dVar146 + dVar71 * dVar132 + dVar70 * dVar118 + dVar69 * dVar79 + 0.0;
            *(double *)(local_1f60 + lVar30 + 8) =
                 dVar72 * dVar163 + dVar71 * dVar133 + dVar70 * dVar119 + dVar69 * dVar81 + 0.0;
            *(double *)(local_1f60 + lVar30 + 0x10) =
                 dVar72 * dVar174 + dVar71 * dVar144 + dVar70 * dVar120 + dVar69 * dVar82 + 0.0;
            *(double *)(local_1f60 + lVar30 + 0x18) =
                 dVar72 * dVar175 + dVar71 * dVar145 + dVar70 * dVar121 + dVar69 * dVar83 + 0.0;
            *(double *)(local_1f80 + lVar30) =
                 dVar72 * dVar176 + dVar71 * dVar122 + dVar70 * dVar114 + dVar69 * dVar75 + 0.0;
            *(double *)(local_1f80 + lVar30 + 8) =
                 dVar72 * dVar220 + dVar71 * dVar123 + dVar70 * dVar115 + dVar69 * dVar76 + 0.0;
            *(double *)(local_1f80 + lVar30 + 0x10) =
                 dVar72 * dVar224 + dVar71 * dVar130 + dVar70 * dVar116 + dVar69 * dVar77 + 0.0;
            *(double *)(local_1f80 + lVar30 + 0x18) =
                 dVar72 * dVar225 + dVar71 * dVar131 + dVar70 * dVar117 + dVar69 * dVar78 + 0.0;
            lVar30 = lVar30 + 0x100;
          } while (lVar30 != 0x4c0);
          local_2040[0] = auVar184._0_8_;
          local_2040[1] = auVar184._8_8_;
          local_2040[2] = auVar184._16_8_;
          local_2040[3] = auVar184._24_8_;
          local_2040[0x14] = auVar185._0_8_;
          local_2040[0x15] = auVar185._8_8_;
          local_2040[0x16] = auVar185._16_8_;
          local_2040[0x17] = auVar185._24_8_;
          dVar31 = __real_3fe0000000000000 * (local_2040[0] + (double)local_1ac0._0_8_);
          dVar63 = __real_3fe0000000000000 * (local_2040[1] + (double)local_1ac0._8_8_);
          dVar69 = __real_3fe0000000000000 * (local_2040[2] + dStack_1ab0);
          dVar75 = __real_3fe0000000000000 * (local_2040[3] + dStack_1aa8);
          dVar81 = __real_3fe0000000000000 * (local_2040[0x14] + (double)local_1aa0._0_8_);
          dVar114 = __real_3fe0000000000000 * (local_2040[0x15] + (double)local_1aa0._8_8_);
          dVar117 = __real_3fe0000000000000 * (local_2040[0x16] + dStack_1a90);
          dVar120 = __real_3fe0000000000000 * (local_2040[0x17] + dStack_1a88);
          dVar32 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
          dVar64 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
          dVar70 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
          dVar76 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
          dVar82 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1a40._0_8_);
          dVar115 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1a40._8_8_);
          dVar118 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1a40._16_8_);
          dVar121 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1a40._24_8_);
          dVar1 = (double)CONCAT17(uStack_1df9,
                                   CONCAT16(uStack_1dfa,
                                            CONCAT15(uStack_1dfb,
                                                     CONCAT14(uStack_1dfc,
                                                              CONCAT13(uStack_1dfd,
                                                                       CONCAT12(uStack_1dfe,
                                                                                CONCAT11(uStack_1dff
                                                                                         ,local_1e00
                                                                                        )))))));
          local_1300 = (double)local_1f00._0_8_;
          dStack_12f8 = (double)local_1f00._8_8_;
          dStack_12f0 = dStack_1ef0;
          dStack_12e8 = dStack_1ee8;
          dVar33 = __real_3fe0000000000000 * (local_19e0._0_8_ + local_1b00._0_8_);
          dVar65 = __real_3fe0000000000000 * (local_19e0._8_8_ + local_1b00._8_8_);
          dVar71 = __real_3fe0000000000000 * (local_19e0._16_8_ + local_1b00._16_8_);
          dVar77 = __real_3fe0000000000000 * (local_19e0._24_8_ + local_1b00._24_8_);
          dVar34 = __real_3fe0000000000000 * (local_1a00._0_8_ + local_1b20._0_8_);
          dVar66 = __real_3fe0000000000000 * (local_1a00._8_8_ + local_1b20._8_8_);
          dVar72 = __real_3fe0000000000000 * (local_1a00._16_8_ + local_1b20._16_8_);
          dVar78 = __real_3fe0000000000000 * (local_1a00._24_8_ + local_1b20._24_8_);
          auVar17 = vsubpd_avx(local_1a20,local_19a0);
          auVar47 = vsubpd_avx(_local_1ac0,auVar184);
          auVar136 = vsubpd_avx(local_1a40,local_19c0);
          auVar148 = vsubpd_avx(_local_1aa0,auVar185);
          auVar149 = vsubpd_avx(local_1b20,local_1a00);
          auVar150 = vsubpd_avx(local_1b00,local_19e0);
          dVar35 = __real_3fe0000000000000 * auVar47._0_8_;
          dVar67 = __real_3fe0000000000000 * auVar47._8_8_;
          dVar73 = __real_3fe0000000000000 * auVar47._16_8_;
          dVar79 = __real_3fe0000000000000 * auVar47._24_8_;
          dVar133 = __real_3fe0000000000000 * auVar17._0_8_;
          dVar144 = __real_3fe0000000000000 * auVar17._8_8_;
          dVar145 = __real_3fe0000000000000 * auVar17._16_8_;
          dVar146 = __real_3fe0000000000000 * auVar17._24_8_;
          dVar123 = auVar148._0_8_ * __real_3fe0000000000000;
          dVar130 = auVar148._8_8_ * __real_3fe0000000000000;
          dVar131 = auVar148._16_8_ * __real_3fe0000000000000;
          dVar132 = auVar148._24_8_ * __real_3fe0000000000000;
          dVar83 = __real_3fe0000000000000 * auVar136._0_8_;
          dVar116 = __real_3fe0000000000000 * auVar136._8_8_;
          dVar119 = __real_3fe0000000000000 * auVar136._16_8_;
          dVar122 = __real_3fe0000000000000 * auVar136._24_8_;
          dVar163 = __real_3fe0000000000000 * auVar150._0_8_;
          dVar174 = __real_3fe0000000000000 * auVar150._8_8_;
          dVar175 = __real_3fe0000000000000 * auVar150._16_8_;
          dVar176 = __real_3fe0000000000000 * auVar150._24_8_;
          dVar220 = __real_3fe0000000000000 * auVar149._0_8_;
          dVar224 = __real_3fe0000000000000 * auVar149._8_8_;
          dVar225 = __real_3fe0000000000000 * auVar149._16_8_;
          dVar226 = __real_3fe0000000000000 * auVar149._24_8_;
          auVar187._0_8_ =
               dVar34 * local_1d60 + dVar31 * (double)local_1f60 + dVar81 * (double)local_1e60._0_8_
               + local_1c60;
          auVar187._8_8_ =
               dVar66 * dStack_1d58 + dVar63 * adStack_1f58[0] + dVar114 * (double)local_1e60._8_8_
               + dStack_1c58;
          auVar187._16_8_ =
               dVar72 * dStack_1d50 + dVar69 * adStack_1f58[1] + dVar117 * dStack_1e50 + dStack_1c50
          ;
          auVar187._24_8_ =
               dVar78 * dStack_1d48 + dVar75 * adStack_1f58[2] + dVar120 * dStack_1e48 + dStack_1c48
          ;
          auVar235._0_8_ =
               dVar33 * local_1d80 + dVar32 * (double)local_1f80 + dVar82 * (double)local_1e80._0_8_
               + local_1c80;
          auVar235._8_8_ =
               dVar65 * dStack_1d78 + dVar64 * adStack_1f78[0] + dVar115 * (double)local_1e80._8_8_
               + dStack_1c78;
          auVar235._16_8_ =
               dVar71 * dStack_1d70 + dVar70 * adStack_1f78[1] + dVar118 * dStack_1e70 + dStack_1c70
          ;
          auVar235._24_8_ =
               dVar77 * dStack_1d68 + dVar76 * adStack_1f78[2] + dVar121 * dStack_1e68 + dStack_1c68
          ;
          auVar232._0_8_ =
               dVar34 * local_1d20 +
               dVar31 * (double)local_1f20._0_8_ + dVar81 * (double)local_1e20._0_8_ + local_1c20;
          auVar232._8_8_ =
               dVar66 * dStack_1d18 +
               dVar63 * (double)local_1f20._8_8_ + dVar114 * (double)local_1e20._8_8_ + dStack_1c18;
          auVar232._16_8_ =
               dVar72 * dStack_1d10 + dVar69 * dStack_1f10 + dVar117 * dStack_1e10 + dStack_1c10;
          auVar232._24_8_ =
               dVar78 * dStack_1d08 + dVar75 * dStack_1f08 + dVar120 * dStack_1e08 + dStack_1c08;
          auVar184._0_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * (double)local_1f80)) +
               (double)((ulonglong)(dVar83 * (double)local_1e80._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar163 * local_1d80) & __real_7fffffffffffffff);
          auVar184._8_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar144 * adStack_1f78[0])) +
               (double)((ulonglong)(dVar116 * (double)local_1e80._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar174 * dStack_1d78) & __real_7fffffffffffffff);
          auVar184._16_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar145 * adStack_1f78[1])) +
               (double)((ulonglong)(dVar119 * dStack_1e70) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar175 * dStack_1d70) & __real_7fffffffffffffff);
          auVar184._24_8_ =
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar146 * adStack_1f78[2])) +
               (double)((ulonglong)(dVar122 * dStack_1e68) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar176 * dStack_1d68) & __real_7fffffffffffffff);
          auVar169._0_8_ =
               dVar33 * local_1d40 +
               dVar32 * (double)local_1f40._0_8_ + dVar82 * (double)local_1e40._0_8_ + local_1c40;
          auVar169._8_8_ =
               dVar65 * dStack_1d38 +
               dVar64 * (double)local_1f40._8_8_ + dVar115 * (double)local_1e40._8_8_ + dStack_1c38;
          auVar169._16_8_ =
               dVar71 * dStack_1d30 + dVar70 * dStack_1f30 + dVar118 * dStack_1e30 + dStack_1c30;
          auVar169._24_8_ =
               dVar77 * dStack_1d28 + dVar76 * dStack_1f28 + dVar121 * dStack_1e28 + dStack_1c28;
          auVar172._0_8_ =
               (double)((ulonglong)(dVar220 * local_1d60) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar35 * (double)local_1f60) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar123 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
          auVar172._8_8_ =
               (double)((ulonglong)(dVar224 * dStack_1d58) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar67 * adStack_1f58[0]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar130 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
          auVar172._16_8_ =
               (double)((ulonglong)(dVar225 * dStack_1d50) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar73 * adStack_1f58[1]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar131 * dStack_1e50) & __real_7fffffffffffffff);
          auVar172._24_8_ =
               (double)((ulonglong)(dVar226 * dStack_1d48) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar79 * adStack_1f58[2]) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar132 * dStack_1e48) & __real_7fffffffffffffff);
          auVar213._0_8_ =
               local_1ce0 * dVar34 + (double)local_1ee0._0_8_ * dVar31 + dVar81 * local_1de0 +
               local_1be0;
          auVar213._8_8_ =
               dStack_1cd8 * dVar66 + (double)local_1ee0._8_8_ * dVar63 + dVar114 * dStack_1dd8 +
               dStack_1bd8;
          auVar213._16_8_ =
               dStack_1cd0 * dVar72 + dStack_1ed0 * dVar69 + dVar117 * dStack_1dd0 + dStack_1bd0;
          auVar213._24_8_ =
               dStack_1cc8 * dVar78 + dStack_1ec8 * dVar75 + dVar120 * dStack_1dc8 + dStack_1bc8;
          auVar227._0_8_ =
               (double)((ulonglong)(dVar133 * (double)local_1f40._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar83 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar163 * local_1d40) & __real_7fffffffffffffff);
          auVar227._8_8_ =
               (double)((ulonglong)(dVar144 * (double)local_1f40._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar116 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar174 * dStack_1d38) & __real_7fffffffffffffff);
          auVar227._16_8_ =
               (double)((ulonglong)(dVar145 * dStack_1f30) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar119 * dStack_1e30) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar175 * dStack_1d30) & __real_7fffffffffffffff);
          auVar227._24_8_ =
               (double)((ulonglong)(dVar146 * dStack_1f28) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar122 * dStack_1e28) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar176 * dStack_1d28) & __real_7fffffffffffffff);
          auVar186._0_8_ =
               local_1d00 * dVar33 + (double)local_1f00._0_8_ * dVar32 + dVar82 * dVar1 + local_1c00
          ;
          auVar186._8_8_ =
               dStack_1cf8 * dVar65 + (double)local_1f00._8_8_ * dVar64 + dVar115 * dStack_1df8 +
               dStack_1bf8;
          auVar186._16_8_ =
               dStack_1cf0 * dVar71 + dStack_1ef0 * dVar70 + dVar118 * dStack_1df0 + dStack_1bf0;
          auVar186._24_8_ =
               dStack_1ce8 * dVar77 + dStack_1ee8 * dVar76 + dVar121 * dStack_1de8 + dStack_1be8;
          auVar201._0_8_ =
               (double)((ulonglong)(dVar220 * local_1d20) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar35 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar123 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
          auVar201._8_8_ =
               (double)((ulonglong)(dVar224 * dStack_1d18) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar67 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar130 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
          auVar201._16_8_ =
               (double)((ulonglong)(dVar225 * dStack_1d10) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar73 * dStack_1f10) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar131 * dStack_1e10) & __real_7fffffffffffffff);
          auVar201._24_8_ =
               (double)((ulonglong)(dVar226 * dStack_1d08) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar79 * dStack_1f08) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar132 * dStack_1e08) & __real_7fffffffffffffff);
          auVar207._0_8_ =
               (double)((ulonglong)(dVar133 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar83 * dVar1) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar163 * local_1d00) & __real_7fffffffffffffff);
          auVar207._8_8_ =
               (double)((ulonglong)(dVar144 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar116 * dStack_1df8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar174 * dStack_1cf8) & __real_7fffffffffffffff);
          auVar207._16_8_ =
               (double)((ulonglong)(dVar145 * dStack_1ef0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar119 * dStack_1df0) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar175 * dStack_1cf0) & __real_7fffffffffffffff);
          auVar207._24_8_ =
               (double)((ulonglong)(dVar146 * dStack_1ee8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar122 * dStack_1de8) & __real_7fffffffffffffff) +
               (double)((ulonglong)(dVar176 * dStack_1ce8) & __real_7fffffffffffffff);
          auVar185._0_8_ =
               (double)((ulonglong)(dVar220 * local_1ce0) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar35 * (double)local_1ee0._0_8_)) +
               (double)((ulonglong)(dVar123 * local_1de0) & __real_7fffffffffffffff);
          auVar185._8_8_ =
               (double)((ulonglong)(dVar224 * dStack_1cd8) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar67 * (double)local_1ee0._8_8_)) +
               (double)((ulonglong)(dVar130 * dStack_1dd8) & __real_7fffffffffffffff);
          auVar185._16_8_ =
               (double)((ulonglong)(dVar225 * dStack_1cd0) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar73 * dStack_1ed0)) +
               (double)((ulonglong)(dVar131 * dStack_1dd0) & __real_7fffffffffffffff);
          auVar185._24_8_ =
               (double)((ulonglong)(dVar226 * dStack_1cc8) & __real_7fffffffffffffff) +
               (double)(__real_7fffffffffffffff & (ulonglong)(dVar79 * dStack_1ec8)) +
               (double)((ulonglong)(dVar132 * dStack_1dc8) & __real_7fffffffffffffff);
          auVar17 = vsubpd_avx(auVar235,auVar184);
          auVar47 = vsubpd_avx(auVar187,auVar172);
          auVar136 = vsubpd_avx(auVar169,auVar227);
          auVar148 = vsubpd_avx(auVar232,auVar201);
          local_2200._8_8_ = auVar235._8_8_ + auVar184._8_8_;
          local_2200._0_8_ = auVar235._0_8_ + auVar184._0_8_;
          dStack_21f0 = auVar235._16_8_ + auVar184._16_8_;
          dStack_21e8 = auVar235._24_8_ + auVar184._24_8_;
          auVar149 = vsubpd_avx(auVar186,auVar207);
          local_21e0._8_8_ = auVar172._8_8_ + auVar187._8_8_;
          local_21e0._0_8_ = auVar172._0_8_ + auVar187._0_8_;
          dStack_21d0 = auVar172._16_8_ + auVar187._16_8_;
          dStack_21c8 = auVar172._24_8_ + auVar187._24_8_;
          auVar150 = vsubpd_avx(auVar213,auVar185);
          auVar171._0_8_ = auVar227._0_8_ + auVar169._0_8_;
          auVar171._8_8_ = auVar227._8_8_ + auVar169._8_8_;
          auVar171._16_8_ = auVar227._16_8_ + auVar169._16_8_;
          auVar171._24_8_ = auVar227._24_8_ + auVar169._24_8_;
          auVar188._0_8_ = auVar201._0_8_ + auVar232._0_8_;
          auVar188._8_8_ = auVar201._8_8_ + auVar232._8_8_;
          auVar188._16_8_ = auVar201._16_8_ + auVar232._16_8_;
          auVar188._24_8_ = auVar201._24_8_ + auVar232._24_8_;
          auVar170._0_8_ = auVar207._0_8_ + auVar186._0_8_;
          auVar170._8_8_ = auVar207._8_8_ + auVar186._8_8_;
          auVar170._16_8_ = auVar207._16_8_ + auVar186._16_8_;
          auVar170._24_8_ = auVar207._24_8_ + auVar186._24_8_;
          auVar214._0_8_ = auVar213._0_8_ + auVar185._0_8_;
          auVar214._8_8_ = auVar213._8_8_ + auVar185._8_8_;
          auVar214._16_8_ = auVar213._16_8_ + auVar185._16_8_;
          auVar214._24_8_ = auVar213._24_8_ + auVar185._24_8_;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = local_1800;
          auVar41 = vpcmpeqb_avx(auVar41,ZEXT816(0) << 0x40);
          auVar152 = vpmovsxbd_avx2(auVar41 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          auVar151 = vpand_avx2(auVar152,auVar135);
          iVar29 = vmovmskps_avx(auVar151);
          if (iVar29 == 0) {
            auVar151 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a508e0:
            auVar38 = vpmovzxbw_avx(auVar41);
            auVar41 = vpand_avx(auVar38,local_1ae0._0_16_);
            auVar41 = vpshufb_avx(auVar41,___xmm_00000000000000000e0c0a0806040200);
            if ((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
              auVar152 = vpmovzxwd_avx2(auVar38);
              auVar152 = vpslld_avx2(auVar152,0x1f);
              auVar153 = vpsrad_avx2(auVar152,0x1f);
              auVar152 = auVar135 & auVar153;
              if ((((((((SUB321(auVar152 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar152 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar152 >> 0x5f,0) & 1) != 0) || SUB321(auVar152 >> 0x7f,0) != '\0')
                    || (SUB321(auVar152 >> 0x9f,0) & 1) != 0) || SUB321(auVar152 >> 0xbf,0) != '\0')
                  || (SUB321(auVar152 >> 0xdf,0) & 1) != 0) || auVar152[0x1f] < '\0') {
                auVar154 = vpermpd_avx2(auVar153,0xd8);
                auVar152 = vshufps_avx(auVar154,auVar154,0x50);
                auVar154 = vshufps_avx(auVar154,auVar154,0xfa);
                _local_1f80 = vmaskmovpd_avx(auVar152,auVar17);
                _local_1f60 = vmaskmovpd_avx(auVar154,auVar47);
                _local_1f40 = vmaskmovpd_avx(auVar152,auVar136);
                _local_1f20 = vmaskmovpd_avx(auVar154,auVar148);
                _local_1f00 = vmaskmovpd_avx(auVar152,auVar149);
                _local_1ee0 = vmaskmovpd_avx(auVar154,auVar150);
                local_1ec0 = vmaskmovpd_avx(auVar152,_local_2200);
                local_1ea0 = vmaskmovpd_avx(auVar154,_local_21e0);
                _local_1e80 = vmaskmovpd_avx(auVar152,auVar171);
                _local_1e60 = vmaskmovpd_avx(auVar154,auVar188);
                _local_1e40 = vmaskmovpd_avx(auVar152,auVar170);
                _local_1e20 = vmaskmovpd_avx(auVar154,auVar214);
                auVar41 = vpsllw_avx(auVar38,0xf);
                auVar41 = vpacksswb_avx(auVar41,auVar41);
                if ((SUB161(auVar41 >> 7,0) & 1) != 0) {
                  local_1e00 = 1;
                }
                if ((SUB161(auVar41 >> 0xf,0) & 1) != 0) {
                  uStack_1dff = 1;
                }
                if ((SUB161(auVar41 >> 0x17,0) & 1) != 0) {
                  uStack_1dfe = 1;
                }
                if ((SUB161(auVar41 >> 0x1f,0) & 1) != 0) {
                  uStack_1dfd = 1;
                }
                if ((SUB161(auVar41 >> 0x27,0) & 1) != 0) {
                  uStack_1dfc = 1;
                }
                if ((SUB161(auVar41 >> 0x2f,0) & 1) != 0) {
                  uStack_1dfb = 1;
                }
                if ((SUB161(auVar41 >> 0x37,0) & 1) != 0) {
                  uStack_1dfa = 1;
                }
                if ((SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
                  uStack_1df9 = 1;
                }
                local_2060._0_4_ = auVar135._0_4_;
                local_2060._4_4_ = auVar135._4_4_;
                uStack_2058._0_4_ = auVar135._8_4_;
                uStack_2058._4_4_ = auVar135._12_4_;
                uStack_2050._0_4_ = auVar135._16_4_;
                uStack_2050._4_4_ = auVar135._20_4_;
                uStack_2048._0_4_ = auVar135._24_4_;
                uStack_2048._4_4_ = auVar135._28_4_;
                auVar45._0_4_ = auVar153._0_4_ & (uint)local_2060;
                auVar45._4_4_ = auVar153._4_4_ & local_2060._4_4_;
                auVar45._8_4_ = auVar153._8_4_ & (uint)uStack_2058;
                auVar45._12_4_ = auVar153._12_4_ & uStack_2058._4_4_;
                auVar45._16_4_ = auVar153._16_4_ & (uint)uStack_2050;
                auVar45._20_4_ = auVar153._20_4_ & uStack_2050._4_4_;
                auVar45._24_4_ = auVar153._24_4_ & (uint)uStack_2048;
                auVar45._28_4_ = auVar153._28_4_ & uStack_2048._4_4_;
                vmovmskps_avx(auVar151 | auVar45);
              }
            }
          }
          else {
            auVar153 = vminpd_avx(local_1980,auVar17);
            auVar155 = vpermq_avx2(auVar152,0xd8);
            auVar154 = vpshufd_avx2(auVar155,0x50);
            _local_1f80 = vmaskmovpd_avx(auVar154,auVar153);
            auVar152 = vminpd_avx(local_1960,auVar47);
            auVar153 = vpshufd_avx2(auVar155,0xfa);
            _local_1f60 = vmaskmovpd_avx(auVar153,auVar152);
            auVar152 = vminpd_avx(local_1940,auVar136);
            _local_1f40 = vmaskmovpd_avx(auVar154,auVar152);
            auVar152 = vminpd_avx(local_1920,auVar148);
            _local_1f20 = vmaskmovpd_avx(auVar153,auVar152);
            auVar152 = vminpd_avx(local_1900,auVar149);
            _local_1f00 = vmaskmovpd_avx(auVar154,auVar152);
            auVar152 = vminpd_avx(local_18e0,auVar150);
            _local_1ee0 = vmaskmovpd_avx(auVar153,auVar152);
            auVar152 = vmaxpd_avx(local_18c0,_local_2200);
            local_1ec0 = vmaskmovpd_avx(auVar154,auVar152);
            auVar152 = vmaxpd_avx(local_18a0,_local_21e0);
            local_1ea0 = vmaskmovpd_avx(auVar153,auVar152);
            auVar152 = vmaxpd_avx(local_1880,auVar171);
            _local_1e80 = vmaskmovpd_avx(auVar154,auVar152);
            auVar152 = vmaxpd_avx(local_1860,auVar188);
            _local_1e60 = vmaskmovpd_avx(auVar153,auVar152);
            auVar152 = vmaxpd_avx(local_1840,auVar170);
            _local_1e40 = vmaskmovpd_avx(auVar154,auVar152);
            auVar152 = vmaxpd_avx(local_1820,auVar214);
            _local_1e20 = vmaskmovpd_avx(auVar153,auVar152);
            auVar38._8_8_ = local_1800;
            auVar38._0_8_ = local_1800;
            auVar38 = vpcmpeqb_avx(auVar38,ZEXT816(0) << 0x40);
            bVar22 = ~(SUB161(auVar38 >> 7,0) & 1 | (SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar38 >> 0x17,0) & 1) << 2 | (SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar38 >> 0x27,0) & 1) << 4 | (SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar38 >> 0x37,0) & 1) << 6);
            if ((bVar22 & 1) != 0) {
              local_1e00 = (undefined1)local_1800;
            }
            if ((bVar22 & 2) != 0) {
              uStack_1dff = (undefined1)(local_1800 >> 8);
            }
            if ((bVar22 & 4) != 0) {
              uStack_1dfe = (undefined1)(local_1800 >> 0x10);
            }
            if ((bVar22 & 8) != 0) {
              uStack_1dfd = (undefined1)(local_1800 >> 0x18);
            }
            if ((bVar22 & 0x10) != 0) {
              uStack_1dfc = (undefined1)(local_1800 >> 0x20);
            }
            if ((bVar22 & 0x20) != 0) {
              uStack_1dfb = (undefined1)(local_1800 >> 0x28);
            }
            if ((bVar22 & 0x40) != 0) {
              uStack_1dfa = (undefined1)(local_1800 >> 0x30);
            }
            if ((SUB161(auVar38 >> 0x3f,0) & 1) == 0) {
              uStack_1df9 = (undefined1)(local_1800 >> 0x38);
            }
            if ((byte)(bVar26 | bVar3 << 1 | bVar4 << 2 | bVar5 << 3 | bVar6 << 4 | bVar7 << 5 |
                       bVar8 << 6 | bVar9) != (byte)iVar29) goto LAB_140a508e0;
          }
          in_ZMM5 = ZEXT3264(local_1ea0);
          auVar17 = vpermpd_avx2(auVar135,0xd8);
          auVar135 = vshufps_avx(auVar17,auVar17,0x50);
          auVar17 = vshufps_avx(auVar17,auVar17,0xfa);
          local_1980 = vmaskmovpd_avx(auVar135,_local_1f80);
          local_1960 = vmaskmovpd_avx(auVar17,_local_1f60);
          local_1940 = vmaskmovpd_avx(auVar135,_local_1f40);
          local_1920 = vmaskmovpd_avx(auVar17,_local_1f20);
          local_1900 = vmaskmovpd_avx(auVar135,_local_1f00);
          local_18e0 = vmaskmovpd_avx(auVar17,_local_1ee0);
          local_18c0 = vmaskmovpd_avx(auVar135,local_1ec0);
          local_18a0 = vmaskmovpd_avx(auVar17,local_1ea0);
          local_1880 = vmaskmovpd_avx(auVar135,_local_1e80);
          local_1860 = vmaskmovpd_avx(auVar17,_local_1e60);
          local_1840 = vmaskmovpd_avx(auVar135,_local_1e40);
          local_1820 = vmaskmovpd_avx(auVar17,_local_1e20);
          uVar24 = local_1800;
          if (bVar26 != 0) {
            local_1800 = CONCAT71(local_1800._1_7_,local_1e00);
            uVar24 = local_1800;
          }
          auVar195 = ZEXT864(0) << 0x40;
          if (bVar3 != 0) {
            local_1800._2_6_ = (undefined6)(uVar24 >> 0x10);
            local_1800._0_1_ = (undefined1)uVar24;
            local_1800._0_2_ = CONCAT11(uStack_1dff,(undefined1)local_1800);
            uVar24 = local_1800;
          }
          if (bVar4 != 0) {
            local_1800._3_5_ = (undefined5)(uVar24 >> 0x18);
            local_1800._0_2_ = (undefined2)uVar24;
            local_1800._0_3_ = CONCAT12(uStack_1dfe,(undefined2)local_1800);
            uVar24 = local_1800;
          }
          if (bVar5 != 0) {
            local_1800._4_4_ = (undefined4)(uVar24 >> 0x20);
            local_1800._0_3_ = (undefined3)uVar24;
            local_1800._0_4_ = CONCAT13(uStack_1dfd,(undefined3)local_1800);
            uVar24 = local_1800;
          }
          if (bVar6 != 0) {
            local_1800._5_3_ = (undefined3)(uVar24 >> 0x28);
            local_1800._0_4_ = (undefined4)uVar24;
            local_1800._0_5_ = CONCAT14(uStack_1dfc,(undefined4)local_1800);
            uVar24 = local_1800;
          }
          if (bVar7 != 0) {
            local_1800._6_2_ = (undefined2)(uVar24 >> 0x30);
            local_1800._0_5_ = (undefined5)uVar24;
            local_1800._0_6_ = CONCAT15(uStack_1dfb,(undefined5)local_1800);
            uVar24 = local_1800;
          }
          local_1800 = uVar24;
          if (bVar8 != 0) {
            local_1800._7_1_ = (undefined1)(uVar24 >> 0x38);
            local_1800._0_6_ = (undefined6)uVar24;
            local_1800._0_7_ = CONCAT16(uStack_1dfa,(undefined6)local_1800);
          }
          auVar182 = ZEXT3264(local_1340);
          if (bVar9 != 0) {
            local_1800 = CONCAT17(uStack_1df9,(undefined7)local_1800);
          }
        }
        iVar25 = iVar25 + 8;
      } while (iVar25 < (int)uVar21);
    }
    if ((int)param_6 <= iVar25) {
      local_17a0._4_4_ = param_6;
      local_17a0._0_4_ = param_6;
      local_17a0._8_4_ = param_6;
      local_17a0._12_4_ = param_6;
      local_17a0._16_4_ = param_6;
      local_17a0._20_4_ = param_6;
      local_17a0._24_4_ = param_6;
      local_17a0._28_4_ = param_6;
      goto LAB_140a54128;
    }
    auVar49._4_4_ = iVar25;
    auVar49._0_4_ = iVar25;
    auVar49._8_4_ = iVar25;
    auVar49._12_4_ = iVar25;
    auVar49._16_4_ = iVar25;
    auVar49._20_4_ = iVar25;
    auVar49._24_4_ = iVar25;
    auVar49._28_4_ = iVar25;
    auVar47 = vpor_avx2(auVar49,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    local_17a0._4_4_ = param_6;
    local_17a0._0_4_ = param_6;
    local_17a0._8_4_ = param_6;
    local_17a0._12_4_ = param_6;
    local_17a0._16_4_ = param_6;
    local_17a0._20_4_ = param_6;
    local_17a0._24_4_ = param_6;
    local_17a0._28_4_ = param_6;
    auVar199._4_4_ = __real_00000038;
    auVar199._0_4_ = __real_00000038;
    auVar199._8_4_ = __real_00000038;
    auVar199._12_4_ = __real_00000038;
    auVar199._16_4_ = __real_00000038;
    auVar199._20_4_ = __real_00000038;
    auVar199._24_4_ = __real_00000038;
    auVar199._28_4_ = __real_00000038;
    auVar135 = vpmulld_avx2(auVar47,auVar199);
    local_1a60 = vpcmpgtd_avx2(local_17a0,auVar47);
    auVar50._4_4_ = __real_00000030;
    auVar50._0_4_ = __real_00000030;
    auVar50._8_4_ = __real_00000030;
    auVar50._12_4_ = __real_00000030;
    auVar50._16_4_ = __real_00000030;
    auVar50._20_4_ = __real_00000030;
    auVar50._24_4_ = __real_00000030;
    auVar50._28_4_ = __real_00000030;
    auVar11._0_4_ = auVar135._0_4_ + __real_00000030;
    auVar11._4_4_ = auVar135._4_4_ + __real_00000030;
    auVar11._8_4_ = auVar135._8_4_ + __real_00000030;
    auVar11._12_4_ = auVar135._12_4_ + __real_00000030;
    auVar11._16_4_ = auVar135._16_4_ + __real_00000030;
    auVar11._20_4_ = auVar135._20_4_ + __real_00000030;
    auVar11._24_4_ = auVar135._24_4_ + __real_00000030;
    auVar11._28_4_ = auVar135._28_4_ + __real_00000030;
    auVar135 = vpand_avx2(local_1a60,auVar11);
    auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar135._0_4_)),
                          (uint)*(byte *)(param_3 + auVar135._4_4_),1);
    auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._8_4_),2);
    auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._12_4_),3);
    auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._16_4_),4);
    auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._20_4_),5);
    auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._24_4_),6);
    auVar38 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._28_4_),7);
    auVar135 = vmaskmovps_avx(local_1a60,*(undefined1 (*) [32])(param_1 + (iVar25 << 2)));
    auVar17 = vpcmpeqd_avx2(ZEXT1632(auVar41),ZEXT1632(auVar41));
    auVar17 = vpcmpeqd_avx2(auVar135,auVar17);
    auVar41 = vpcmpeqb_avx(auVar38,(undefined1  [16])0x0);
    auVar38 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
    auVar135 = vpmovsxbd_avx2(auVar41 ^ auVar38);
    auVar135 = vpandn_avx2(auVar17,auVar135);
    auVar135 = vpand_avx2(local_1a60,auVar135);
    uVar28 = vmovmskps_avx(auVar135);
    if (uVar28 == 0) goto LAB_140a54128;
    auVar135 = vpslld_avx2(auVar47,3);
    vpsubd_avx2(auVar135,auVar47);
    auVar136 = vpmovsxdq_avx2(local_1a60._0_16_);
    _local_1aa0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
    auVar148 = vpmovsxdq_avx2(local_1a60._16_16_);
    auVar184 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar148);
    auVar193._4_4_ = __real_00000008;
    auVar193._0_4_ = __real_00000008;
    auVar193._8_4_ = __real_00000008;
    auVar193._12_4_ = __real_00000008;
    auVar193._16_4_ = __real_00000008;
    auVar193._20_4_ = __real_00000008;
    auVar193._24_4_ = __real_00000008;
    auVar193._28_4_ = __real_00000008;
    local_1ae0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
    auVar185 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
    auVar204._4_4_ = __real_00000010;
    auVar204._0_4_ = __real_00000010;
    auVar204._8_4_ = __real_00000010;
    auVar204._12_4_ = __real_00000010;
    auVar204._16_4_ = __real_00000010;
    auVar204._20_4_ = __real_00000010;
    auVar204._24_4_ = __real_00000010;
    auVar204._28_4_ = __real_00000010;
    local_19a0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
    local_19c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
    auVar210._4_4_ = __real_00000018;
    auVar210._0_4_ = __real_00000018;
    auVar210._8_4_ = __real_00000018;
    auVar210._12_4_ = __real_00000018;
    auVar210._16_4_ = __real_00000018;
    auVar210._20_4_ = __real_00000018;
    auVar210._24_4_ = __real_00000018;
    auVar210._28_4_ = __real_00000018;
    local_19e0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
    auVar186 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
    auVar217._4_4_ = __real_00000020;
    auVar217._0_4_ = __real_00000020;
    auVar217._8_4_ = __real_00000020;
    auVar217._12_4_ = __real_00000020;
    auVar217._16_4_ = __real_00000020;
    auVar217._20_4_ = __real_00000020;
    auVar217._24_4_ = __real_00000020;
    auVar217._28_4_ = __real_00000020;
    auVar135 = vpcmpeqd_avx2(auVar50,auVar50);
    local_1a00 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar136);
    _local_1ac0 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
    auVar223._4_4_ = __real_00000028;
    auVar223._0_4_ = __real_00000028;
    auVar223._8_4_ = __real_00000028;
    auVar223._12_4_ = __real_00000028;
    auVar223._16_4_ = __real_00000028;
    auVar223._20_4_ = __real_00000028;
    auVar223._24_4_ = __real_00000028;
    auVar223._28_4_ = __real_00000028;
    local_1a20 = vgatherdpd(ZEXT832(0) << 0x40,auVar136);
    local_1a40 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
    auVar85 = vpackssdw_avx(SUB3216(auVar17 ^ auVar135,0),SUB3216(auVar17 ^ auVar135,0x10));
    auVar41 = vpmovsxbw_avx(auVar41 ^ auVar38);
    local_1a80 = vpand_avx(auVar85,auVar41);
    auVar41 = vpackssdw_avx(local_1a60._0_16_,local_1a60._16_16_);
    auVar41 = vpand_avx(local_1a80,auVar41);
    auVar183 = vpslld_avx2(auVar47,7);
    auVar38 = vpshufd_avx(auVar41,0xee);
    auVar135 = vpmovsxwq_avx2(auVar38);
    auVar153 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
    vpor_avx2(auVar183,auVar193);
    auVar17 = vpmovsxwq_avx2(auVar41);
    auVar154 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar155 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar204,auVar183);
    auVar156 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar210,auVar183);
    auVar166 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar217,auVar183);
    auVar168 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar177 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar223,auVar183);
    auVar178 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar179 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar183,auVar50);
    auVar47 = vgatherdpd(ZEXT832(0),auVar17);
    auVar136 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    vpor_avx2(auVar183,auVar199);
    auVar148 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar149 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    auVar51._4_4_ = __real_00000040;
    auVar51._0_4_ = __real_00000040;
    auVar51._8_4_ = __real_00000040;
    auVar51._12_4_ = __real_00000040;
    auVar51._16_4_ = __real_00000040;
    auVar51._20_4_ = __real_00000040;
    auVar51._24_4_ = __real_00000040;
    auVar51._28_4_ = __real_00000040;
    vpor_avx2(auVar183,auVar51);
    auVar150 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    auVar151 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    auVar52._4_4_ = __real_00000048;
    auVar52._0_4_ = __real_00000048;
    auVar52._8_4_ = __real_00000048;
    auVar52._12_4_ = __real_00000048;
    auVar52._16_4_ = __real_00000048;
    auVar52._20_4_ = __real_00000048;
    auVar52._24_4_ = __real_00000048;
    auVar52._28_4_ = __real_00000048;
    vpor_avx2(auVar183,auVar52);
    auVar152 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    local_6a0 = vgatherdpd(ZEXT832(0) << 0x20,auVar135);
    auVar53._4_4_ = __real_00000050;
    auVar53._0_4_ = __real_00000050;
    auVar53._8_4_ = __real_00000050;
    auVar53._12_4_ = __real_00000050;
    auVar53._16_4_ = __real_00000050;
    auVar53._20_4_ = __real_00000050;
    auVar53._24_4_ = __real_00000050;
    auVar53._28_4_ = __real_00000050;
    vpor_avx2(auVar183,auVar53);
    local_680 = vgatherdpd(ZEXT832(0),auVar17);
    local_660 = vgatherdpd(ZEXT832(0),auVar135);
    auVar54._4_4_ = __real_00000058;
    auVar54._0_4_ = __real_00000058;
    auVar54._8_4_ = __real_00000058;
    auVar54._12_4_ = __real_00000058;
    auVar54._16_4_ = __real_00000058;
    auVar54._20_4_ = __real_00000058;
    auVar54._24_4_ = __real_00000058;
    auVar54._28_4_ = __real_00000058;
    vpor_avx2(auVar183,auVar54);
    local_640 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
    local_620 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
    auVar55._4_4_ = __real_00000060;
    auVar55._0_4_ = __real_00000060;
    auVar55._8_4_ = __real_00000060;
    auVar55._12_4_ = __real_00000060;
    auVar55._16_4_ = __real_00000060;
    auVar55._20_4_ = __real_00000060;
    auVar55._24_4_ = __real_00000060;
    auVar55._28_4_ = __real_00000060;
    vpor_avx2(auVar183,auVar55);
    local_600 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
    local_5e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
    auVar56._4_4_ = __real_00000068;
    auVar56._0_4_ = __real_00000068;
    auVar56._8_4_ = __real_00000068;
    auVar56._12_4_ = __real_00000068;
    auVar56._16_4_ = __real_00000068;
    auVar56._20_4_ = __real_00000068;
    auVar56._24_4_ = __real_00000068;
    auVar56._28_4_ = __real_00000068;
    vpor_avx2(auVar183,auVar56);
    _local_5c0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
    _local_5a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    auVar57._4_4_ = __real_00000070;
    auVar57._0_4_ = __real_00000070;
    auVar57._8_4_ = __real_00000070;
    auVar57._12_4_ = __real_00000070;
    auVar57._16_4_ = __real_00000070;
    auVar57._20_4_ = __real_00000070;
    auVar57._24_4_ = __real_00000070;
    auVar57._28_4_ = __real_00000070;
    vpor_avx2(auVar183,auVar57);
    _local_580 = vgatherdpd(ZEXT832(0),auVar17);
    _local_560 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    _local_900 = vgatherdpd(ZEXT832(0),auVar17);
    _local_540 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
    _local_520 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
    local_21e0._0_8_ = auVar153._0_8_;
    local_21e0._8_8_ = auVar153._8_8_;
    dStack_21d0 = auVar153._16_8_;
    dStack_21c8 = auVar153._24_8_;
    adStack_8f0[2] = (double)local_21e0._0_8_;
    adStack_8f0[3] = (double)local_21e0._8_8_;
    adStack_8f0[4] = dStack_21d0;
    adStack_8f0[5] = dStack_21c8;
    local_2180._0_8_ = auVar155._0_8_;
    local_2180._8_8_ = auVar155._8_8_;
    dStack_2170 = auVar155._16_8_;
    dStack_2168 = auVar155._24_8_;
    local_8a0 = local_2180._0_8_;
    uStack_898 = local_2180._8_8_;
    uStack_890 = dStack_2170;
    uStack_888 = dStack_2168;
    local_2200._0_8_ = auVar154._0_8_;
    local_2200._8_8_ = auVar154._8_8_;
    dStack_21f0 = auVar154._16_8_;
    dStack_21e8 = auVar154._24_8_;
    adStack_8f0[6] = (double)local_2200._0_8_;
    adStack_8f0[7] = (double)local_2200._8_8_;
    adStack_8f0[8] = dStack_21f0;
    uStack_8a8 = dStack_21e8;
    local_2140 = auVar165._0_8_;
    uStack_2138 = auVar165._8_8_;
    uStack_2130 = auVar165._16_8_;
    uStack_2128 = auVar165._24_8_;
    local_860 = local_2140;
    uStack_858 = uStack_2138;
    uStack_850 = uStack_2130;
    uStack_848 = uStack_2128;
    local_2120 = auVar156._0_8_;
    uStack_2118 = auVar156._8_8_;
    uStack_2110 = auVar156._16_8_;
    uStack_2108 = auVar156._24_8_;
    local_880 = local_2120;
    uStack_878 = uStack_2118;
    uStack_870 = uStack_2110;
    uStack_868 = uStack_2108;
    local_2080 = auVar167._0_8_;
    uStack_2078 = auVar167._8_8_;
    uStack_2070 = auVar167._16_8_;
    uStack_2068 = auVar167._24_8_;
    local_820 = local_2080;
    uStack_818 = uStack_2078;
    uStack_810 = uStack_2070;
    uStack_808 = uStack_2068;
    local_2160 = auVar166._0_8_;
    uStack_2158 = auVar166._8_8_;
    uStack_2150 = auVar166._16_8_;
    uStack_2148 = auVar166._24_8_;
    local_840 = local_2160;
    uStack_838 = uStack_2158;
    uStack_830 = uStack_2150;
    uStack_828 = uStack_2148;
    local_20c0 = auVar177._0_8_;
    uStack_20b8 = auVar177._8_8_;
    uStack_20b0 = auVar177._16_8_;
    uStack_20a8 = auVar177._24_8_;
    local_7e0 = local_20c0;
    uStack_7d8 = uStack_20b8;
    uStack_7d0 = uStack_20b0;
    uStack_7c8 = uStack_20a8;
    local_20a0 = auVar168._0_8_;
    uStack_2098 = auVar168._8_8_;
    uStack_2090 = auVar168._16_8_;
    uStack_2088 = auVar168._24_8_;
    local_800 = local_20a0;
    uStack_7f8 = uStack_2098;
    uStack_7f0 = uStack_2090;
    uStack_7e8 = uStack_2088;
    local_2100 = auVar179._0_8_;
    uStack_20f8 = auVar179._8_8_;
    uStack_20f0 = auVar179._16_8_;
    uStack_20e8 = auVar179._24_8_;
    local_7a0 = local_2100;
    uStack_798 = uStack_20f8;
    uStack_790 = uStack_20f0;
    uStack_788 = uStack_20e8;
    local_20e0 = auVar178._0_8_;
    uStack_20d8 = auVar178._8_8_;
    uStack_20d0 = auVar178._16_8_;
    uStack_20c8 = auVar178._24_8_;
    local_7c0 = local_20e0;
    uStack_7b8 = uStack_20d8;
    uStack_7b0 = uStack_20d0;
    uStack_7a8 = uStack_20c8;
    local_1b00._0_8_ = auVar136._0_8_;
    local_1b00._8_8_ = auVar136._8_8_;
    local_1b00._16_8_ = auVar136._16_8_;
    local_1b00._24_8_ = auVar136._24_8_;
    local_760 = local_1b00._0_8_;
    uStack_758 = local_1b00._8_8_;
    uStack_750 = local_1b00._16_8_;
    uStack_748 = local_1b00._24_8_;
    local_2040[4] = auVar47._0_8_;
    local_2040[5] = auVar47._8_8_;
    local_2040[6] = auVar47._16_8_;
    local_2040[7] = auVar47._24_8_;
    local_780 = local_2040[4];
    uStack_778 = local_2040[5];
    uStack_770 = local_2040[6];
    uStack_768 = local_2040[7];
    local_1b20._0_8_ = auVar149._0_8_;
    local_1b20._8_8_ = auVar149._8_8_;
    local_1b20._16_8_ = auVar149._16_8_;
    local_1b20._24_8_ = auVar149._24_8_;
    local_720 = local_1b20._0_8_;
    uStack_718 = local_1b20._8_8_;
    uStack_710 = local_1b20._16_8_;
    uStack_708 = local_1b20._24_8_;
    local_21a0._0_8_ = auVar148._0_8_;
    local_21a0._8_8_ = auVar148._8_8_;
    dStack_2190 = auVar148._16_8_;
    dStack_2188 = auVar148._24_8_;
    local_740 = local_21a0._0_8_;
    uStack_738 = local_21a0._8_8_;
    uStack_730 = dStack_2190;
    uStack_728 = dStack_2188;
    local_2040[0xc] = auVar151._0_8_;
    local_2040[0xd] = auVar151._8_8_;
    local_2040[0xe] = auVar151._16_8_;
    local_2040[0xf] = auVar151._24_8_;
    local_6e0 = local_2040[0xc];
    uStack_6d8 = local_2040[0xd];
    uStack_6d0 = local_2040[0xe];
    uStack_6c8 = local_2040[0xf];
    local_2040[0x10] = auVar150._0_8_;
    local_2040[0x11] = auVar150._8_8_;
    local_2040[0x12] = auVar150._16_8_;
    local_2040[0x13] = auVar150._24_8_;
    local_700 = local_2040[0x10];
    uStack_6f8 = local_2040[0x11];
    uStack_6f0 = local_2040[0x12];
    uStack_6e8 = local_2040[0x13];
    local_2040[8] = auVar152._0_8_;
    local_2040[9] = auVar152._8_8_;
    local_2040[10] = auVar152._16_8_;
    local_2040[0xb] = auVar152._24_8_;
    local_6c0 = local_2040[8];
    uStack_6b8 = local_2040[9];
    uStack_6b0 = local_2040[10];
    uStack_6a8 = local_2040[0xb];
    auVar135 = vpmovsxwd_avx2(auVar41);
    dVar1 = param_4[8];
    dVar31 = *param_4;
    lVar30 = 0xc0;
    dVar32 = param_4[0xc];
    dVar33 = param_4[1];
    dVar34 = param_4[5];
    dVar35 = param_4[9];
    dVar63 = param_4[0xd];
    dVar64 = param_4[2];
    dVar65 = param_4[6];
    dVar66 = param_4[10];
    dVar67 = param_4[0xe];
    dVar69 = param_4[3];
    dVar70 = param_4[7];
    dVar71 = param_4[0xb];
    dVar72 = param_4[0xf];
    do {
      dVar75 = *(double *)(local_9c0 + lVar30);
      dVar76 = *(double *)(local_9c0 + lVar30 + 8);
      dVar77 = *(double *)(local_9c0 + lVar30 + 0x10);
      dVar78 = *(double *)(local_9c0 + lVar30 + 0x18);
      dVar79 = *(double *)(local_9a0 + lVar30);
      dVar81 = *(double *)(local_9a0 + lVar30 + 8);
      dVar82 = *(double *)(local_9a0 + lVar30 + 0x10);
      dVar83 = *(double *)(local_9a0 + lVar30 + 0x18);
      dVar114 = *(double *)(local_980 + lVar30);
      dVar115 = *(double *)(local_980 + lVar30 + 8);
      dVar116 = *(double *)(local_980 + lVar30 + 0x10);
      dVar117 = *(double *)(local_980 + lVar30 + 0x18);
      dVar118 = *(double *)(local_960 + lVar30);
      dVar119 = *(double *)(local_960 + lVar30 + 8);
      dVar120 = *(double *)(local_960 + lVar30 + 0x10);
      dVar121 = *(double *)(local_960 + lVar30 + 0x18);
      dVar122 = *(double *)(local_940 + lVar30);
      dVar123 = *(double *)(local_940 + lVar30 + 8);
      dVar130 = *(double *)(local_940 + lVar30 + 0x10);
      dVar131 = *(double *)(local_940 + lVar30 + 0x18);
      dVar132 = *(double *)(local_920 + lVar30);
      dVar133 = *(double *)(local_920 + lVar30 + 8);
      dVar144 = *(double *)(local_920 + lVar30 + 0x10);
      dVar145 = *(double *)(local_920 + lVar30 + 0x18);
      dVar146 = *(double *)((longlong)adStack_8f0 + lVar30 + 0x10);
      dVar163 = *(double *)((longlong)adStack_8f0 + lVar30 + 0x18);
      dVar174 = *(double *)((longlong)adStack_8f0 + lVar30 + 0x20);
      dVar175 = *(double *)((longlong)adStack_8f0 + lVar30 + 0x28);
      dVar73 = param_4[4];
      *(double *)((longlong)local_2040 + lVar30 + 0x20) =
           dVar146 * dVar32 + dVar132 * dVar1 + dVar118 * dVar73 + dVar79 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x28) =
           dVar163 * dVar32 + dVar133 * dVar1 + dVar119 * dVar73 + dVar81 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x30) =
           dVar174 * dVar32 + dVar144 * dVar1 + dVar120 * dVar73 + dVar82 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x38) =
           dVar175 * dVar32 + dVar145 * dVar1 + dVar121 * dVar73 + dVar83 * dVar31 + 0.0;
      dVar176 = *(double *)(local_900 + lVar30);
      dVar220 = *(double *)(local_900 + lVar30 + 8);
      dVar224 = *(double *)(local_900 + lVar30 + 0x10);
      dVar225 = *(double *)(local_900 + lVar30 + 0x18);
      *(double *)((longlong)local_2040 + lVar30) =
           dVar176 * dVar32 + dVar122 * dVar1 + dVar114 * dVar73 + dVar75 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 8) =
           dVar220 * dVar32 + dVar123 * dVar1 + dVar115 * dVar73 + dVar76 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x10) =
           dVar224 * dVar32 + dVar130 * dVar1 + dVar116 * dVar73 + dVar77 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x18) =
           dVar225 * dVar32 + dVar131 * dVar1 + dVar117 * dVar73 + dVar78 * dVar31 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x60) =
           dVar146 * dVar63 + dVar132 * dVar35 + dVar118 * dVar34 + dVar79 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x68) =
           dVar163 * dVar63 + dVar133 * dVar35 + dVar119 * dVar34 + dVar81 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x70) =
           dVar174 * dVar63 + dVar144 * dVar35 + dVar120 * dVar34 + dVar82 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x78) =
           dVar175 * dVar63 + dVar145 * dVar35 + dVar121 * dVar34 + dVar83 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x40) =
           dVar176 * dVar63 + dVar122 * dVar35 + dVar114 * dVar34 + dVar75 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x48) =
           dVar220 * dVar63 + dVar123 * dVar35 + dVar115 * dVar34 + dVar76 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x50) =
           dVar224 * dVar63 + dVar130 * dVar35 + dVar116 * dVar34 + dVar77 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x58) =
           dVar225 * dVar63 + dVar131 * dVar35 + dVar117 * dVar34 + dVar78 * dVar33 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0xa0) =
           dVar146 * dVar67 + dVar132 * dVar66 + dVar118 * dVar65 + dVar79 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0xa8) =
           dVar163 * dVar67 + dVar133 * dVar66 + dVar119 * dVar65 + dVar81 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0xb0) =
           dVar174 * dVar67 + dVar144 * dVar66 + dVar120 * dVar65 + dVar82 * dVar64 + 0.0;
      *(double *)(local_1f80 + lVar30 + -8) =
           dVar175 * dVar67 + dVar145 * dVar66 + dVar121 * dVar65 + dVar83 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x80) =
           dVar176 * dVar67 + dVar122 * dVar66 + dVar114 * dVar65 + dVar75 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x88) =
           dVar220 * dVar67 + dVar123 * dVar66 + dVar115 * dVar65 + dVar76 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x90) =
           dVar224 * dVar67 + dVar130 * dVar66 + dVar116 * dVar65 + dVar77 * dVar64 + 0.0;
      *(double *)((longlong)local_2040 + lVar30 + 0x98) =
           dVar225 * dVar67 + dVar131 * dVar66 + dVar117 * dVar65 + dVar78 * dVar64 + 0.0;
      *(double *)(local_1f60 + lVar30) =
           dVar72 * dVar146 + dVar71 * dVar132 + dVar70 * dVar118 + dVar69 * dVar79 + 0.0;
      *(double *)(local_1f60 + lVar30 + 8) =
           dVar72 * dVar163 + dVar71 * dVar133 + dVar70 * dVar119 + dVar69 * dVar81 + 0.0;
      *(double *)(local_1f60 + lVar30 + 0x10) =
           dVar72 * dVar174 + dVar71 * dVar144 + dVar70 * dVar120 + dVar69 * dVar82 + 0.0;
      *(double *)(local_1f60 + lVar30 + 0x18) =
           dVar72 * dVar175 + dVar71 * dVar145 + dVar70 * dVar121 + dVar69 * dVar83 + 0.0;
      *(double *)(local_1f80 + lVar30) =
           dVar72 * dVar176 + dVar71 * dVar122 + dVar70 * dVar114 + dVar69 * dVar75 + 0.0;
      *(double *)(local_1f80 + lVar30 + 8) =
           dVar72 * dVar220 + dVar71 * dVar123 + dVar70 * dVar115 + dVar69 * dVar76 + 0.0;
      *(double *)(local_1f80 + lVar30 + 0x10) =
           dVar72 * dVar224 + dVar71 * dVar130 + dVar70 * dVar116 + dVar69 * dVar77 + 0.0;
      *(double *)(local_1f80 + lVar30 + 0x18) =
           dVar72 * dVar225 + dVar71 * dVar131 + dVar70 * dVar117 + dVar69 * dVar78 + 0.0;
      lVar30 = lVar30 + 0x100;
    } while (lVar30 != 0x4c0);
    local_2060 = auVar184._0_8_;
    uStack_2058 = auVar184._8_8_;
    uStack_2050 = auVar184._16_8_;
    uStack_2048 = auVar184._24_8_;
    local_2040[0x14] = auVar186._0_8_;
    local_2040[0x15] = auVar186._8_8_;
    local_2040[0x16] = auVar186._16_8_;
    local_2040[0x17] = auVar186._24_8_;
    local_2040[0] = auVar185._0_8_;
    local_2040[1] = auVar185._8_8_;
    local_2040[2] = auVar185._16_8_;
    local_2040[3] = auVar185._24_8_;
    dVar31 = __real_3fe0000000000000 * (local_2060 + local_2040[0x14]);
    dVar63 = __real_3fe0000000000000 * (uStack_2058 + local_2040[0x15]);
    dVar69 = __real_3fe0000000000000 * (uStack_2050 + local_2040[0x16]);
    dVar75 = __real_3fe0000000000000 * (uStack_2048 + local_2040[0x17]);
    dVar115 = __real_3fe0000000000000 * (local_2040[0] + (double)local_1ac0._0_8_);
    dVar116 = __real_3fe0000000000000 * (local_2040[1] + (double)local_1ac0._8_8_);
    dVar117 = __real_3fe0000000000000 * (local_2040[2] + dStack_1ab0);
    dVar118 = __real_3fe0000000000000 * (local_2040[3] + dStack_1aa8);
    dVar32 = __real_3fe0000000000000 * (local_1aa0._0_8_ + local_19e0._0_8_);
    dVar64 = __real_3fe0000000000000 * (local_1aa0._8_8_ + local_19e0._8_8_);
    dVar70 = __real_3fe0000000000000 * (local_1aa0._16_8_ + local_19e0._16_8_);
    dVar76 = __real_3fe0000000000000 * (local_1aa0._24_8_ + local_19e0._24_8_);
    dVar119 = __real_3fe0000000000000 * (local_1ae0._0_8_ + local_1a00._0_8_);
    dVar121 = __real_3fe0000000000000 * (local_1ae0._8_8_ + local_1a00._8_8_);
    dVar123 = __real_3fe0000000000000 * (local_1ae0._16_8_ + local_1a00._16_8_);
    dVar131 = __real_3fe0000000000000 * (local_1ae0._24_8_ + local_1a00._24_8_);
    dVar1 = (double)CONCAT17(uStack_1df9,
                             CONCAT16(uStack_1dfa,
                                      CONCAT15(uStack_1dfb,
                                               CONCAT14(uStack_1dfc,
                                                        CONCAT13(uStack_1dfd,
                                                                 CONCAT12(uStack_1dfe,
                                                                          CONCAT11(uStack_1dff,
                                                                                   local_1e00)))))))
    ;
    dVar33 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
    dVar65 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
    dVar71 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
    dVar77 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
    dVar34 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1a40._0_8_);
    dVar66 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1a40._8_8_);
    dVar72 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1a40._16_8_);
    dVar78 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1a40._24_8_);
    auVar17 = vsubpd_avx(local_19e0,_local_1aa0);
    auVar47 = vsubpd_avx(auVar186,auVar184);
    auVar136 = vsubpd_avx(local_1a00,local_1ae0);
    auVar148 = vsubpd_avx(_local_1ac0,auVar185);
    auVar149 = vsubpd_avx(local_1a40,local_19c0);
    auVar150 = vsubpd_avx(local_1a20,local_19a0);
    dVar35 = __real_3fe0000000000000 * auVar47._0_8_;
    dVar67 = __real_3fe0000000000000 * auVar47._8_8_;
    dVar73 = __real_3fe0000000000000 * auVar47._16_8_;
    dVar79 = __real_3fe0000000000000 * auVar47._24_8_;
    dVar120 = auVar17._0_8_ * __real_3fe0000000000000;
    dVar122 = auVar17._8_8_ * __real_3fe0000000000000;
    dVar130 = auVar17._16_8_ * __real_3fe0000000000000;
    dVar132 = auVar17._24_8_ * __real_3fe0000000000000;
    dVar81 = __real_3fe0000000000000 * auVar148._0_8_;
    dVar82 = __real_3fe0000000000000 * auVar148._8_8_;
    dVar83 = __real_3fe0000000000000 * auVar148._16_8_;
    dVar114 = __real_3fe0000000000000 * auVar148._24_8_;
    dVar133 = __real_3fe0000000000000 * auVar136._0_8_;
    dVar144 = __real_3fe0000000000000 * auVar136._8_8_;
    dVar145 = __real_3fe0000000000000 * auVar136._16_8_;
    dVar146 = __real_3fe0000000000000 * auVar136._24_8_;
    dVar163 = __real_3fe0000000000000 * auVar150._0_8_;
    dVar174 = __real_3fe0000000000000 * auVar150._8_8_;
    dVar175 = __real_3fe0000000000000 * auVar150._16_8_;
    dVar176 = __real_3fe0000000000000 * auVar150._24_8_;
    dVar220 = __real_3fe0000000000000 * auVar149._0_8_;
    dVar224 = __real_3fe0000000000000 * auVar149._8_8_;
    dVar225 = __real_3fe0000000000000 * auVar149._16_8_;
    dVar226 = __real_3fe0000000000000 * auVar149._24_8_;
    auVar129._0_8_ =
         dVar34 * local_1d60 + dVar31 * (double)local_1f60 + dVar115 * (double)local_1e60._0_8_ +
         local_1c60;
    auVar129._8_8_ =
         dVar66 * dStack_1d58 + dVar63 * adStack_1f58[0] + dVar116 * (double)local_1e60._8_8_ +
         dStack_1c58;
    auVar129._16_8_ =
         dVar72 * dStack_1d50 + dVar69 * adStack_1f58[1] + dVar117 * dStack_1e50 + dStack_1c50;
    auVar129._24_8_ =
         dVar78 * dStack_1d48 + dVar75 * adStack_1f58[2] + dVar118 * dStack_1e48 + dStack_1c48;
    auVar194._0_8_ =
         dVar33 * local_1d80 + dVar32 * (double)local_1f80 + dVar119 * (double)local_1e80._0_8_ +
         local_1c80;
    auVar194._8_8_ =
         dVar65 * dStack_1d78 + dVar64 * adStack_1f78[0] + dVar121 * (double)local_1e80._8_8_ +
         dStack_1c78;
    auVar194._16_8_ =
         dVar71 * dStack_1d70 + dVar70 * adStack_1f78[1] + dVar123 * dStack_1e70 + dStack_1c70;
    auVar194._24_8_ =
         dVar77 * dStack_1d68 + dVar76 * adStack_1f78[2] + dVar131 * dStack_1e68 + dStack_1c68;
    auVar229._0_8_ =
         dVar34 * local_1d20 +
         dVar31 * (double)local_1f20._0_8_ + dVar115 * (double)local_1e20._0_8_ + local_1c20;
    auVar229._8_8_ =
         dVar66 * dStack_1d18 +
         dVar63 * (double)local_1f20._8_8_ + dVar116 * (double)local_1e20._8_8_ + dStack_1c18;
    auVar229._16_8_ =
         dVar72 * dStack_1d10 + dVar69 * dStack_1f10 + dVar117 * dStack_1e10 + dStack_1c10;
    auVar229._24_8_ =
         dVar78 * dStack_1d08 + dVar75 * dStack_1f08 + dVar118 * dStack_1e08 + dStack_1c08;
    auVar205._0_8_ =
         dVar33 * local_1d40 +
         dVar32 * (double)local_1f40._0_8_ + dVar119 * (double)local_1e40._0_8_ + local_1c40;
    auVar205._8_8_ =
         dVar65 * dStack_1d38 +
         dVar64 * (double)local_1f40._8_8_ + dVar121 * (double)local_1e40._8_8_ + dStack_1c38;
    auVar205._16_8_ =
         dVar71 * dStack_1d30 + dVar70 * dStack_1f30 + dVar123 * dStack_1e30 + dStack_1c30;
    auVar205._24_8_ =
         dVar77 * dStack_1d28 + dVar76 * dStack_1f28 + dVar131 * dStack_1e28 + dStack_1c28;
    auVar58._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f80)) +
         (double)((ulonglong)(dVar133 * (double)local_1e80._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar163 * local_1d80) & __real_7fffffffffffffff);
    auVar58._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * adStack_1f78[0])) +
         (double)((ulonglong)(dVar144 * (double)local_1e80._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar174 * dStack_1d78) & __real_7fffffffffffffff);
    auVar58._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar130 * adStack_1f78[1])) +
         (double)((ulonglong)(dVar145 * dStack_1e70) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar175 * dStack_1d70) & __real_7fffffffffffffff);
    auVar58._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar132 * adStack_1f78[2])) +
         (double)((ulonglong)(dVar146 * dStack_1e68) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar176 * dStack_1d68) & __real_7fffffffffffffff);
    auVar140._0_8_ =
         local_1ce0 * dVar34 + (double)local_1ee0._0_8_ * dVar31 + dVar115 * local_1de0 + local_1be0
    ;
    auVar140._8_8_ =
         dStack_1cd8 * dVar66 + (double)local_1ee0._8_8_ * dVar63 + dVar116 * dStack_1dd8 +
         dStack_1bd8;
    auVar140._16_8_ =
         dStack_1cd0 * dVar72 + dStack_1ed0 * dVar69 + dVar117 * dStack_1dd0 + dStack_1bd0;
    auVar140._24_8_ =
         dStack_1cc8 * dVar78 + dStack_1ec8 * dVar75 + dVar118 * dStack_1dc8 + dStack_1bc8;
    auVar218._0_8_ =
         (double)((ulonglong)(dVar220 * local_1d60) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar35 * (double)local_1f60) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar81 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
    auVar218._8_8_ =
         (double)((ulonglong)(dVar224 * dStack_1d58) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar67 * adStack_1f58[0]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar82 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
    auVar218._16_8_ =
         (double)((ulonglong)(dVar225 * dStack_1d50) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar73 * adStack_1f58[1]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar83 * dStack_1e50) & __real_7fffffffffffffff);
    auVar218._24_8_ =
         (double)((ulonglong)(dVar226 * dStack_1d48) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar79 * adStack_1f58[2]) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar114 * dStack_1e48) & __real_7fffffffffffffff);
    auVar211._0_8_ =
         local_1d00 * dVar33 + (double)local_1f00._0_8_ * dVar32 + dVar119 * dVar1 + local_1c00;
    auVar211._8_8_ =
         dStack_1cf8 * dVar65 + (double)local_1f00._8_8_ * dVar64 + dVar121 * dStack_1df8 +
         dStack_1bf8;
    auVar211._16_8_ =
         dStack_1cf0 * dVar71 + dStack_1ef0 * dVar70 + dVar123 * dStack_1df0 + dStack_1bf0;
    auVar211._24_8_ =
         dStack_1ce8 * dVar77 + dStack_1ee8 * dVar76 + dVar131 * dStack_1de8 + dStack_1be8;
    auVar110._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f40._0_8_)) +
         (double)((ulonglong)(dVar133 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar163 * local_1d40) & __real_7fffffffffffffff);
    auVar110._8_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * (double)local_1f40._8_8_)) +
         (double)((ulonglong)(dVar144 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar174 * dStack_1d38) & __real_7fffffffffffffff);
    auVar110._16_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar130 * dStack_1f30)) +
         (double)((ulonglong)(dVar145 * dStack_1e30) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar175 * dStack_1d30) & __real_7fffffffffffffff);
    auVar110._24_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar132 * dStack_1f28)) +
         (double)((ulonglong)(dVar146 * dStack_1e28) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar176 * dStack_1d28) & __real_7fffffffffffffff);
    auVar238._0_8_ =
         (double)((ulonglong)(dVar220 * local_1d20) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar35 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar81 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
    auVar238._8_8_ =
         (double)((ulonglong)(dVar224 * dStack_1d18) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar67 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar82 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
    auVar238._16_8_ =
         (double)((ulonglong)(dVar225 * dStack_1d10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar73 * dStack_1f10) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar83 * dStack_1e10) & __real_7fffffffffffffff);
    auVar238._24_8_ =
         (double)((ulonglong)(dVar226 * dStack_1d08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar79 * dStack_1f08) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar114 * dStack_1e08) & __real_7fffffffffffffff);
    auVar181._0_8_ =
         (double)((ulonglong)(dVar120 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar133 * dVar1) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar163 * local_1d00) & __real_7fffffffffffffff);
    auVar181._8_8_ =
         (double)((ulonglong)(dVar122 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar144 * dStack_1df8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar174 * dStack_1cf8) & __real_7fffffffffffffff);
    auVar181._16_8_ =
         (double)((ulonglong)(dVar130 * dStack_1ef0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar145 * dStack_1df0) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar175 * dStack_1cf0) & __real_7fffffffffffffff);
    auVar181._24_8_ =
         (double)((ulonglong)(dVar132 * dStack_1ee8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar146 * dStack_1de8) & __real_7fffffffffffffff) +
         (double)((ulonglong)(dVar176 * dStack_1ce8) & __real_7fffffffffffffff);
    auVar160._0_8_ =
         (double)((ulonglong)(dVar220 * local_1ce0) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar35 * (double)local_1ee0._0_8_)) +
         (double)((ulonglong)(dVar81 * local_1de0) & __real_7fffffffffffffff);
    auVar160._8_8_ =
         (double)((ulonglong)(dVar224 * dStack_1cd8) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar67 * (double)local_1ee0._8_8_)) +
         (double)((ulonglong)(dVar82 * dStack_1dd8) & __real_7fffffffffffffff);
    auVar160._16_8_ =
         (double)((ulonglong)(dVar225 * dStack_1cd0) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar73 * dStack_1ed0)) +
         (double)((ulonglong)(dVar83 * dStack_1dd0) & __real_7fffffffffffffff);
    auVar160._24_8_ =
         (double)((ulonglong)(dVar226 * dStack_1cc8) & __real_7fffffffffffffff) +
         (double)(__real_7fffffffffffffff & (ulonglong)(dVar79 * dStack_1ec8)) +
         (double)((ulonglong)(dVar114 * dStack_1dc8) & __real_7fffffffffffffff);
    auVar17 = vsubpd_avx(auVar194,auVar58);
    auVar47 = vsubpd_avx(auVar129,auVar218);
    auVar136 = vsubpd_avx(auVar205,auVar110);
    auVar148 = vsubpd_avx(auVar229,auVar238);
    local_2200._8_8_ = auVar58._8_8_ + auVar194._8_8_;
    local_2200._0_8_ = auVar58._0_8_ + auVar194._0_8_;
    dStack_21f0 = auVar58._16_8_ + auVar194._16_8_;
    dStack_21e8 = auVar58._24_8_ + auVar194._24_8_;
    auVar149 = vsubpd_avx(auVar211,auVar181);
    auVar219._0_8_ = auVar218._0_8_ + auVar129._0_8_;
    auVar219._8_8_ = auVar218._8_8_ + auVar129._8_8_;
    auVar219._16_8_ = auVar218._16_8_ + auVar129._16_8_;
    auVar219._24_8_ = auVar218._24_8_ + auVar129._24_8_;
    auVar150 = vsubpd_avx(auVar140,auVar160);
    local_2180._8_8_ = auVar205._8_8_ + auVar110._8_8_;
    local_2180._0_8_ = auVar205._0_8_ + auVar110._0_8_;
    dStack_2170 = auVar205._16_8_ + auVar110._16_8_;
    dStack_2168 = auVar205._24_8_ + auVar110._24_8_;
    auVar239._0_8_ = auVar238._0_8_ + auVar229._0_8_;
    auVar239._8_8_ = auVar238._8_8_ + auVar229._8_8_;
    auVar239._16_8_ = auVar238._16_8_ + auVar229._16_8_;
    auVar239._24_8_ = auVar238._24_8_ + auVar229._24_8_;
    auVar233._0_8_ = auVar211._0_8_ + auVar181._0_8_;
    auVar233._8_8_ = auVar211._8_8_ + auVar181._8_8_;
    auVar233._16_8_ = auVar211._16_8_ + auVar181._16_8_;
    auVar233._24_8_ = auVar211._24_8_ + auVar181._24_8_;
    auVar141._0_8_ = auVar160._0_8_ + auVar140._0_8_;
    auVar141._8_8_ = auVar160._8_8_ + auVar140._8_8_;
    auVar141._16_8_ = auVar160._16_8_ + auVar140._16_8_;
    auVar141._24_8_ = auVar160._24_8_ + auVar140._24_8_;
    auVar38 = ZEXT816(0) << 0x40;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = local_1800;
    auVar41 = vpcmpeqb_avx(auVar85,auVar38);
    auVar38 = vpcmpeqd_avx(auVar38,auVar38);
    auVar152 = vpmovsxbd_avx2(auVar41 ^ auVar38);
    auVar151 = vpand_avx2(auVar135,auVar152);
    iVar25 = vmovmskps_avx(auVar151);
    if (iVar25 == 0) {
      auVar151 = ZEXT832(0) << 0x40;
LAB_140a53e86:
      auVar38 = vpmovsxbw_avx(auVar41);
      auVar38 = vpand_avx(auVar38,local_1a80);
      auVar152 = vpmovsxwd_avx2(auVar38);
      local_1a60 = local_1a60 & auVar152;
      if ((((((((SUB321(local_1a60 >> 0x1f,0) & 1) != 0 || (SUB321(local_1a60 >> 0x3f,0) & 1) != 0)
              || (SUB321(local_1a60 >> 0x5f,0) & 1) != 0) || SUB321(local_1a60 >> 0x7f,0) != '\0')
            || (SUB321(local_1a60 >> 0x9f,0) & 1) != 0) || SUB321(local_1a60 >> 0xbf,0) != '\0') ||
          (SUB321(local_1a60 >> 0xdf,0) & 1) != 0) || local_1a60[0x1f] < '\0') {
        auVar41 = vpmovzxbw_avx(auVar41);
        auVar152 = vpmovzxwd_avx2(auVar41);
        auVar152 = vpslld_avx2(auVar152,0x1f);
        auVar153 = vpsrad_avx2(auVar152,0x1f);
        auVar152 = auVar135 & auVar153;
        if ((((((((SUB321(auVar152 >> 0x1f,0) & 1) != 0 || (SUB321(auVar152 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar152 >> 0x5f,0) & 1) != 0) || SUB321(auVar152 >> 0x7f,0) != '\0') ||
              (SUB321(auVar152 >> 0x9f,0) & 1) != 0) || SUB321(auVar152 >> 0xbf,0) != '\0') ||
            (SUB321(auVar152 >> 0xdf,0) & 1) != 0) || auVar152[0x1f] < '\0') {
          auVar154 = vpermpd_avx2(auVar153,0xd8);
          auVar152 = vshufps_avx(auVar154,auVar154,0x50);
          auVar154 = vshufps_avx(auVar154,auVar154,0xfa);
          _local_1f80 = vmaskmovpd_avx(auVar152,auVar17);
          _local_1f60 = vmaskmovpd_avx(auVar154,auVar47);
          _local_1f40 = vmaskmovpd_avx(auVar152,auVar136);
          _local_1f20 = vmaskmovpd_avx(auVar154,auVar148);
          _local_1f00 = vmaskmovpd_avx(auVar152,auVar149);
          _local_1ee0 = vmaskmovpd_avx(auVar154,auVar150);
          local_1ec0 = vmaskmovpd_avx(auVar152,_local_2200);
          local_1ea0 = vmaskmovpd_avx(auVar154,auVar219);
          _local_1e80 = vmaskmovpd_avx(auVar152,_local_2180);
          _local_1e60 = vmaskmovpd_avx(auVar154,auVar239);
          _local_1e40 = vmaskmovpd_avx(auVar152,auVar233);
          _local_1e20 = vmaskmovpd_avx(auVar154,auVar141);
          auVar41 = vpsllw_avx(auVar41,0xf);
          auVar41 = vpacksswb_avx(auVar41,auVar41);
          bVar26 = SUB161(auVar41 >> 0xf,0) & 1;
          bVar3 = SUB161(auVar41 >> 0x17,0) & 1;
          bVar4 = SUB161(auVar41 >> 0x1f,0) & 1;
          bVar5 = SUB161(auVar41 >> 0x27,0) & 1;
          bVar6 = SUB161(auVar41 >> 0x2f,0) & 1;
          bVar7 = SUB161(auVar41 >> 0x37,0) & 1;
          if ((SUB161(auVar41 >> 7,0) & 1) == 0) {
            if (bVar26 != 0) goto LAB_140a54706;
LAB_140a53f97:
            if (bVar3 != 0) goto LAB_140a54717;
LAB_140a53fa0:
            if (bVar4 != 0) goto LAB_140a54728;
LAB_140a53fa9:
            if (bVar5 != 0) goto LAB_140a54739;
LAB_140a53fb2:
            if (bVar6 != 0) goto LAB_140a5474a;
LAB_140a53fbb:
            if (bVar7 != 0) goto LAB_140a5475b;
LAB_140a53fc4:
            auVar61._0_4_ = auVar135._0_4_ & auVar153._0_4_;
            auVar61._4_4_ = auVar135._4_4_ & auVar153._4_4_;
            auVar61._8_4_ = auVar135._8_4_ & auVar153._8_4_;
            auVar61._12_4_ = auVar135._12_4_ & auVar153._12_4_;
            auVar61._16_4_ = auVar135._16_4_ & auVar153._16_4_;
            auVar61._20_4_ = auVar135._20_4_ & auVar153._20_4_;
            auVar61._24_4_ = auVar135._24_4_ & auVar153._24_4_;
            auVar61._28_4_ = auVar135._28_4_ & auVar153._28_4_;
          }
          else {
            local_1e00 = 1;
            if (bVar26 == 0) goto LAB_140a53f97;
LAB_140a54706:
            uStack_1dff = 1;
            if (bVar3 == 0) goto LAB_140a53fa0;
LAB_140a54717:
            uStack_1dfe = 1;
            if (bVar4 == 0) goto LAB_140a53fa9;
LAB_140a54728:
            uStack_1dfd = 1;
            if (bVar5 == 0) goto LAB_140a53fb2;
LAB_140a54739:
            uStack_1dfc = 1;
            if (bVar6 == 0) goto LAB_140a53fbb;
LAB_140a5474a:
            uStack_1dfb = 1;
            if (bVar7 == 0) goto LAB_140a53fc4;
LAB_140a5475b:
            uStack_1dfa = 1;
            auVar61._0_4_ = auVar135._0_4_ & auVar153._0_4_;
            auVar61._4_4_ = auVar135._4_4_ & auVar153._4_4_;
            auVar61._8_4_ = auVar135._8_4_ & auVar153._8_4_;
            auVar61._12_4_ = auVar135._12_4_ & auVar153._12_4_;
            auVar61._16_4_ = auVar135._16_4_ & auVar153._16_4_;
            auVar61._20_4_ = auVar135._20_4_ & auVar153._20_4_;
            auVar61._24_4_ = auVar135._24_4_ & auVar153._24_4_;
            auVar61._28_4_ = auVar135._28_4_ & auVar153._28_4_;
          }
          if ((SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
            uStack_1df9 = 1;
          }
          vmovmskps_avx(auVar151 | auVar61);
        }
      }
    }
    else {
      auVar153 = vminpd_avx(local_1980,auVar17);
      auVar155 = vpermq_avx2(auVar152,0xd8);
      auVar154 = vpshufd_avx2(auVar155,0x50);
      _local_1f80 = vmaskmovpd_avx(auVar154,auVar153);
      auVar152 = vminpd_avx(local_1960,auVar47);
      auVar153 = vpshufd_avx2(auVar155,0xfa);
      _local_1f60 = vmaskmovpd_avx(auVar153,auVar152);
      auVar152 = vminpd_avx(local_1940,auVar136);
      _local_1f40 = vmaskmovpd_avx(auVar154,auVar152);
      auVar152 = vminpd_avx(local_1920,auVar148);
      _local_1f20 = vmaskmovpd_avx(auVar153,auVar152);
      auVar152 = vminpd_avx(local_1900,auVar149);
      _local_1f00 = vmaskmovpd_avx(auVar154,auVar152);
      auVar152 = vminpd_avx(local_18e0,auVar150);
      _local_1ee0 = vmaskmovpd_avx(auVar153,auVar152);
      auVar152 = vmaxpd_avx(local_18c0,_local_2200);
      local_1ec0 = vmaskmovpd_avx(auVar154,auVar152);
      auVar152 = vmaxpd_avx(local_18a0,auVar219);
      local_1ea0 = vmaskmovpd_avx(auVar153,auVar152);
      auVar152 = vmaxpd_avx(local_1880,_local_2180);
      _local_1e80 = vmaskmovpd_avx(auVar154,auVar152);
      auVar152 = vmaxpd_avx(local_1860,auVar239);
      _local_1e60 = vmaskmovpd_avx(auVar153,auVar152);
      auVar152 = vmaxpd_avx(local_1840,auVar233);
      _local_1e40 = vmaskmovpd_avx(auVar154,auVar152);
      auVar152 = vmaxpd_avx(local_1820,auVar141);
      _local_1e20 = vmaskmovpd_avx(auVar153,auVar152);
      auVar40._8_8_ = local_1800;
      auVar40._0_8_ = local_1800;
      auVar38 = vpcmpeqb_avx(auVar40,___xmm_00000000000000000000000000000000);
      bVar26 = ~(SUB161(auVar38 >> 7,0) & 1 | (SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar38 >> 0x17,0) & 1) << 2 | (SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar38 >> 0x27,0) & 1) << 4 | (SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar38 >> 0x37,0) & 1) << 6);
      if ((bVar26 & 1) != 0) {
        local_1e00 = (undefined1)local_1800;
      }
      if ((bVar26 & 2) != 0) {
        uStack_1dff = (undefined1)(local_1800 >> 8);
      }
      if ((bVar26 & 4) != 0) {
        uStack_1dfe = (undefined1)(local_1800 >> 0x10);
      }
      if ((bVar26 & 8) != 0) {
        uStack_1dfd = (undefined1)(local_1800 >> 0x18);
      }
      if ((bVar26 & 0x10) != 0) {
        uStack_1dfc = (undefined1)(local_1800 >> 0x20);
      }
      if ((bVar26 & 0x20) != 0) {
        uStack_1dfb = (undefined1)(local_1800 >> 0x28);
      }
      if ((bVar26 & 0x40) != 0) {
        uStack_1dfa = (undefined1)(local_1800 >> 0x30);
      }
      if ((SUB161(auVar38 >> 0x3f,0) & 1) == 0) {
        uStack_1df9 = (undefined1)(local_1800 >> 0x38);
      }
      if ((char)uVar28 != (char)iVar25) goto LAB_140a53e86;
    }
    auVar17 = vpermpd_avx2(auVar135,0xd8);
    auVar135 = vshufps_avx(auVar17,auVar17,0x50);
    auVar17 = vshufps_avx(auVar17,auVar17,0xfa);
    local_1980 = vmaskmovpd_avx(auVar135,_local_1f80);
    local_1960 = vmaskmovpd_avx(auVar17,_local_1f60);
    local_1940 = vmaskmovpd_avx(auVar135,_local_1f40);
    local_1920 = vmaskmovpd_avx(auVar17,_local_1f20);
    local_1900 = vmaskmovpd_avx(auVar135,_local_1f00);
    local_18e0 = vmaskmovpd_avx(auVar17,_local_1ee0);
    local_18c0 = vmaskmovpd_avx(auVar135,local_1ec0);
    local_18a0 = vmaskmovpd_avx(auVar17,local_1ea0);
    local_1880 = vmaskmovpd_avx(auVar135,_local_1e80);
    local_1860 = vmaskmovpd_avx(auVar17,_local_1e60);
    local_1840 = vmaskmovpd_avx(auVar135,_local_1e40);
    local_1820 = vmaskmovpd_avx(auVar17,_local_1e20);
    uVar24 = local_1800;
    if ((uVar28 & 1) != 0) {
      local_1800 = CONCAT71(local_1800._1_7_,local_1e00);
      uVar24 = local_1800;
    }
    if ((uVar28 & 2) != 0) {
      local_1800._2_6_ = (undefined6)(uVar24 >> 0x10);
      local_1800._0_1_ = (undefined1)uVar24;
      local_1800._0_2_ = CONCAT11(uStack_1dff,(undefined1)local_1800);
      uVar24 = local_1800;
    }
    if ((uVar28 & 4) != 0) {
      local_1800._3_5_ = (undefined5)(uVar24 >> 0x18);
      local_1800._0_2_ = (undefined2)uVar24;
      local_1800._0_3_ = CONCAT12(uStack_1dfe,(undefined2)local_1800);
      uVar24 = local_1800;
    }
    if ((uVar28 & 8) != 0) {
      local_1800._4_4_ = (undefined4)(uVar24 >> 0x20);
      local_1800._0_3_ = (undefined3)uVar24;
      local_1800._0_4_ = CONCAT13(uStack_1dfd,(undefined3)local_1800);
      uVar24 = local_1800;
    }
    if ((uVar28 & 0x10) != 0) {
      local_1800._5_3_ = (undefined3)(uVar24 >> 0x28);
      local_1800._0_4_ = (undefined4)uVar24;
      local_1800._0_5_ = CONCAT14(uStack_1dfc,(undefined4)local_1800);
      uVar24 = local_1800;
    }
    if ((uVar28 & 0x20) != 0) {
      local_1800._6_2_ = (undefined2)(uVar24 >> 0x30);
      local_1800._0_5_ = (undefined5)uVar24;
      local_1800._0_6_ = CONCAT15(uStack_1dfb,(undefined5)local_1800);
      uVar24 = local_1800;
    }
    local_1800 = uVar24;
    if ((uVar28 & 0x40) != 0) {
      local_1800._7_1_ = (undefined1)(uVar24 >> 0x38);
      local_1800._0_6_ = (undefined6)uVar24;
      local_1800._0_7_ = CONCAT16(uStack_1dfa,(undefined6)local_1800);
    }
    if ((char)uVar28 < '\0') {
      local_1800 = CONCAT17(uStack_1df9,(undefined7)local_1800);
    }
LAB_140a54128:
    local_12e0 = vmovlhps_avx(local_1980._0_16_,local_1940._0_16_);
    local_12a8 = vunpckhpd_avx(local_1980._0_16_,local_1940._0_16_);
    local_1270 = vmovlhps_avx(local_1980._16_16_,local_1940._16_16_);
    local_1238 = vunpckhpd_avx(local_1980._16_16_,local_1940._16_16_);
    local_1200 = vmovlhps_avx(local_1960._0_16_,local_1920._0_16_);
    local_11c8 = vunpckhpd_avx(local_1960._0_16_,local_1920._0_16_);
    local_1190 = vmovlhps_avx(local_1960._16_16_,local_1920._16_16_);
    local_1158 = vunpckhpd_avx(local_1960._16_16_,local_1920._16_16_);
    local_12d0 = local_1900._0_8_;
    local_1298 = local_1900._8_8_;
    local_1260 = local_1900._16_8_;
    local_1228 = local_1900._24_8_;
    local_11f0 = local_18e0._0_8_;
    local_11b8 = (double)local_18e0._8_8_;
    local_1180 = (double)local_18e0._16_8_;
    local_1148 = (double)local_18e0._24_8_;
    local_12c8 = vmovlhps_avx(local_18c0._0_16_,local_1880._0_16_);
    local_1290 = vunpckhpd_avx(local_18c0._0_16_,local_1880._0_16_);
    local_1258 = vmovlhps_avx(local_18c0._16_16_,local_1880._16_16_);
    local_1220 = vunpckhpd_avx(local_18c0._16_16_,local_1880._16_16_);
    local_11e8 = vmovlhps_avx(local_18a0._0_16_,local_1860._0_16_);
    local_11b0 = vunpckhpd_avx(local_18a0._0_16_,local_1860._0_16_);
    local_1178 = vunpcklpd_avx(local_18a0._16_16_,local_1860._16_16_);
    local_1140 = vunpckhpd_avx(local_18a0._16_16_,local_1860._16_16_);
    local_12b8 = local_1840._0_8_;
    local_1280 = local_1840._8_8_;
    local_1248 = local_1840._16_8_;
    local_1210 = local_1840._24_8_;
    local_11d8 = local_1820._0_8_;
    local_11a0 = (double)local_1820._8_8_;
    local_1168 = (double)local_1820._16_8_;
    local_1130 = (double)local_1820._24_8_;
    auVar135 = vpcmpgtd_avx2(local_17a0,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar28 = vmovmskps_avx(auVar135);
    local_12b0[0] = (char)local_1800;
    local_1278 = (char)(local_1800 >> 8);
    local_1240 = (char)(local_1800 >> 0x10);
    local_1208 = (char)(local_1800 >> 0x18);
    local_11d0 = (char)(local_1800 >> 0x20);
    local_1198[0] = (char)(local_1800 >> 0x28);
    local_1160[0] = (char)(local_1800 >> 0x30);
    local_1128[0] = (char)(local_1800 >> 0x38);
    if (uVar28 == 0) {
      return;
    }
    uVar24 = (ulonglong)(uVar28 & 0xff);
    do {
      uVar18 = 0;
      for (uVar19 = uVar24; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
        uVar18 = uVar18 + 1;
      }
      lVar30 = uVar18 * 0x38;
      cVar27 = param_5[2][0];
      cVar23 = local_12b0[lVar30];
      if ((cVar27 == '\0') || (cVar23 == '\0')) {
        if (cVar23 == '\0') {
          cVar27 = param_5[2][0];
          uVar164 = *(undefined8 *)(param_5[1] + 0x10);
          uVar147 = *(undefined8 *)(param_5[1] + 8);
          uVar134 = *(undefined8 *)param_5[1];
          uVar124 = *(undefined8 *)(*param_5 + 0x10);
          uVar36 = *(undefined8 *)*param_5;
          uVar84 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar36 = *(undefined8 *)*(undefined1 (*) [24])(local_12e0 + lVar30);
          uVar84 = *(undefined8 *)(local_12e0 + lVar30 + 8);
          uVar124 = *(undefined8 *)(local_12c8 + lVar30 + -8);
          uVar134 = *(undefined8 *)(local_12c8 + lVar30);
          uVar147 = *(undefined8 *)(local_12c8 + lVar30 + 8);
          uVar164 = *(undefined8 *)(local_12b0 + lVar30 + -8);
          cVar27 = cVar23;
        }
      }
      else {
        auVar62._24_8_ = 0;
        auVar62._0_24_ = *param_5;
        auVar113._24_8_ = 0;
        auVar113._0_24_ = *(undefined1 (*) [24])(local_12e0 + lVar30);
        auVar135 = vminpd_avx(auVar62,auVar113);
        uVar36 = auVar135._0_8_;
        auVar41 = vshufpd_avx(auVar135._0_16_,auVar135._0_16_,1);
        uVar84 = auVar41._0_8_;
        uVar124 = auVar135._16_8_;
        auVar143._24_8_ = 0;
        auVar143._0_24_ = param_5[1];
        auVar162._16_8_ = *(undefined8 *)(local_12b0 + lVar30 + -8);
        auVar162._0_16_ = *(undefined1 (*) [16])(local_12c8 + lVar30);
        auVar162._24_8_ = 0;
        auVar135 = vmaxpd_avx(auVar143,auVar162);
        uVar134 = auVar135._0_8_;
        auVar41 = vshufpd_avx(auVar135._0_16_,auVar135._0_16_,1);
        uVar147 = auVar41._0_8_;
        uVar164 = auVar135._16_8_;
      }
      uVar24 = uVar24 & ~(1L << (uVar18 & 0x3f));
      *(undefined8 *)*param_5 = uVar36;
      *(undefined8 *)(*param_5 + 8) = uVar84;
      *(undefined8 *)(*param_5 + 0x10) = uVar124;
      *(undefined8 *)param_5[1] = uVar134;
      *(undefined8 *)(param_5[1] + 8) = uVar147;
      *(undefined8 *)(param_5[1] + 0x10) = uVar164;
      param_5[2][0] = cVar27;
    } while (uVar24 != 0);
    return;
  }
  _local_1120 = *param_7;
  local_1620 = ZEXT1632(ZEXT816(0));
  local_1640 = ZEXT1632(ZEXT816(0));
  local_1660 = ZEXT1632(ZEXT816(0));
  local_1680 = ZEXT1632(ZEXT816(0));
  local_16a0 = ZEXT1632(ZEXT816(0));
  local_16c0 = ZEXT1632(ZEXT816(0));
  local_16e0 = ZEXT1632(ZEXT816(0));
  local_1700 = ZEXT1632(ZEXT816(0));
  local_1720 = ZEXT1632(ZEXT816(0));
  local_1740 = ZEXT1632(ZEXT816(0));
  local_1760 = ZEXT1632(ZEXT816(0));
  local_1780 = ZEXT1632(ZEXT816(0));
  local_1600 = 0;
  if ((int)uVar28 < 1) {
    iVar25 = 0;
  }
  else {
    iVar25 = 0;
    local_1340._4_4_ = __real_00000038;
    local_1340._0_4_ = __real_00000038;
    local_1340._8_4_ = __real_00000038;
    local_1340._12_4_ = __real_00000038;
    local_1340._16_4_ = __real_00000038;
    local_1340._20_4_ = __real_00000038;
    local_1340._24_4_ = __real_00000038;
    local_1340._28_4_ = __real_00000038;
    auVar182 = ZEXT3264(local_1340);
    local_1360 = __real_0000000000000008;
    lStack_1358 = __real_0000000000000008;
    lStack_1350 = __real_0000000000000008;
    lStack_1348 = __real_0000000000000008;
    local_1380 = __real_0000000000000010;
    lStack_1378 = __real_0000000000000010;
    lStack_1370 = __real_0000000000000010;
    lStack_1368 = __real_0000000000000010;
    local_13a0 = __real_0000000000000018;
    lStack_1398 = __real_0000000000000018;
    lStack_1390 = __real_0000000000000018;
    lStack_1388 = __real_0000000000000018;
    local_13c0 = __real_0000000000000020;
    lStack_13b8 = __real_0000000000000020;
    lStack_13b0 = __real_0000000000000020;
    lStack_13a8 = __real_0000000000000020;
    local_13e0 = __real_0000000000000028;
    lStack_13d8 = __real_0000000000000028;
    lStack_13d0 = __real_0000000000000028;
    lStack_13c8 = __real_0000000000000028;
    local_1320 = __real_0000000000000030;
    lStack_1318 = __real_0000000000000030;
    lStack_1310 = __real_0000000000000030;
    lStack_1308 = __real_0000000000000030;
    auVar195 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar42._4_4_ = iVar25;
      auVar42._0_4_ = iVar25;
      auVar42._8_4_ = iVar25;
      auVar42._12_4_ = iVar25;
      auVar42._16_4_ = iVar25;
      auVar42._20_4_ = iVar25;
      auVar42._24_4_ = iVar25;
      auVar42._28_4_ = iVar25;
      auVar47 = vpor_avx2(auVar42,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar17 = vpmulld_avx2(auVar47,auVar182._0_32_);
      auVar135 = vpmovzxdq_avx2(auVar17._0_16_);
      auVar17 = vpmovzxdq_avx2(auVar17._16_16_);
      lVar30 = auVar135._0_8_;
      lVar68 = auVar135._8_8_;
      lVar74 = auVar135._16_8_;
      lVar80 = auVar135._24_8_;
      auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar30 + local_1320)),
                            (uint)*(byte *)(param_3 + lVar68 + lStack_1318),1);
      auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + lVar74 + lStack_1310),2);
      auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + lVar80 + lStack_1308),3);
      auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._0_8_ + local_1320),4);
      auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._8_8_ + lStack_1318),5);
      auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._16_8_ + lStack_1310),6);
      auVar38 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar17._24_8_ + lStack_1308),7);
      auVar135 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar17 = vpcmpeqd_avx2(auVar135,*(undefined1 (*) [32])
                                        (param_1 + (ulonglong)(uint)(iVar25 * 4)));
      uVar21 = local_17a0._0_4_;
      auVar85 = SUB3216(auVar17 ^ auVar135,0x10);
      in_ZMM5 = ZEXT1664(auVar85);
      auVar41 = vpackssdw_avx(SUB3216(auVar17 ^ auVar135,0),auVar85);
      auVar38 = vpcmpeqb_avx(auVar38,auVar195._0_16_);
      auVar38 = vpmovsxbw_avx(auVar38 ^ ___xmm_ffffffffffffffffffffffffffffffff);
      auVar41 = vpand_avx(auVar41,auVar38);
      if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar41 >> 0x4f,0) & 1) != 0) || (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar41 >> 0x5f,0) & 1) != 0) || (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0) ||
          auVar41[0xf] < '\0') {
        auVar135 = vpslld_avx2(auVar47,3);
        auVar135 = vpsubd_avx2(auVar135,auVar47);
        vpmovzxdq_avx2(auVar135._16_16_);
        auVar17 = vpmovzxdq_avx2(auVar135._0_16_);
        auVar135 = vpcmpeqd_avx2(ZEXT1632(auVar85),ZEXT1632(auVar85));
        local_19a0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
        auVar135 = vpcmpeqd_avx2(auVar17,auVar17);
        auVar165 = vgatherqpd(ZEXT832(0),auVar135);
        auVar12._0_8_ = lVar30 + local_1360;
        auVar12._8_8_ = lVar68 + lStack_1358;
        auVar12._16_8_ = lVar74 + lStack_1350;
        auVar12._24_8_ = lVar80 + lStack_1348;
        auVar135 = vpcmpeqd_avx2(auVar165,auVar165);
        local_19c0 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        auVar135 = vpcmpeqd_avx2(auVar12,auVar12);
        auVar166 = vgatherqpd(ZEXT832(0),auVar135);
        auVar13._0_8_ = lVar30 + local_1380;
        auVar13._8_8_ = lVar68 + lStack_1378;
        auVar13._16_8_ = lVar74 + lStack_1370;
        auVar13._24_8_ = lVar80 + lStack_1368;
        auVar135 = vpcmpeqd_avx2(auVar166,auVar166);
        local_19e0 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        auVar135 = vpcmpeqd_avx2(auVar13,auVar13);
        local_1a00 = vgatherqpd(ZEXT832(0),auVar135);
        auVar14._0_8_ = lVar30 + local_13a0;
        auVar14._8_8_ = lVar68 + lStack_1398;
        auVar14._16_8_ = lVar74 + lStack_1390;
        auVar14._24_8_ = lVar80 + lStack_1388;
        auVar135 = vpcmpeqd_avx2(local_1a00,local_1a00);
        local_1a20 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        auVar135 = vpcmpeqd_avx2(auVar14,auVar14);
        auVar167 = vgatherqpd(ZEXT832(0),auVar135);
        auVar15._0_8_ = lVar30 + local_13c0;
        auVar15._8_8_ = lVar68 + lStack_13b8;
        auVar15._16_8_ = lVar74 + lStack_13b0;
        auVar15._24_8_ = lVar80 + lStack_13a8;
        auVar135 = vpcmpeqd_avx2(auVar167,auVar167);
        local_1a40 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        auVar135 = vpcmpeqd_avx2(auVar15,auVar15);
        _local_1ac0 = vgatherqpd(ZEXT832(0),auVar135);
        auVar20._8_8_ = lStack_13d8;
        auVar20._0_8_ = local_13e0;
        auVar20._16_8_ = lStack_13d0;
        auVar20._24_8_ = lStack_13c8;
        auVar16._0_8_ = lVar30 + local_13e0;
        auVar16._8_8_ = lVar68 + lStack_13d8;
        auVar16._16_8_ = lVar74 + lStack_13d0;
        auVar16._24_8_ = lVar80 + lStack_13c8;
        auVar135 = vpcmpeqd_avx2(auVar20,auVar20);
        local_1b00 = vgatherqpd(ZEXT832(0),auVar135);
        auVar135 = vpcmpeqd_avx2(auVar16,auVar16);
        local_1b20 = vgatherqpd(ZEXT832(0),auVar135);
        auVar168 = vpslld_avx2(auVar47,7);
        vpmovzxdq_avx2(auVar168._0_16_);
        auVar135 = vpmovsxwq_avx2(auVar41);
        auVar136 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar168._16_16_);
        auVar38 = vpshufd_avx(auVar41,0xee);
        auVar17 = vpmovsxwq_avx2(auVar38);
        auVar148 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
        auVar86._4_4_ = __real_00000008;
        auVar86._0_4_ = __real_00000008;
        auVar86._8_4_ = __real_00000008;
        auVar86._12_4_ = __real_00000008;
        auVar86._16_4_ = __real_00000008;
        auVar86._20_4_ = __real_00000008;
        auVar86._24_4_ = __real_00000008;
        auVar86._28_4_ = __real_00000008;
        auVar47 = vpor_avx2(auVar168,auVar86);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar183 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar149 = vgatherqpd(ZEXT832(0),auVar17);
        auVar87._4_4_ = __real_00000010;
        auVar87._0_4_ = __real_00000010;
        auVar87._8_4_ = __real_00000010;
        auVar87._12_4_ = __real_00000010;
        auVar87._16_4_ = __real_00000010;
        auVar87._20_4_ = __real_00000010;
        auVar87._24_4_ = __real_00000010;
        auVar87._28_4_ = __real_00000010;
        auVar47 = vpor_avx2(auVar168,auVar87);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar184 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar150 = vgatherqpd(ZEXT832(0),auVar17);
        auVar88._4_4_ = __real_00000018;
        auVar88._0_4_ = __real_00000018;
        auVar88._8_4_ = __real_00000018;
        auVar88._12_4_ = __real_00000018;
        auVar88._16_4_ = __real_00000018;
        auVar88._20_4_ = __real_00000018;
        auVar88._24_4_ = __real_00000018;
        auVar88._28_4_ = __real_00000018;
        auVar47 = vpor_avx2(auVar168,auVar88);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar185 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar151 = vgatherqpd(ZEXT832(0),auVar17);
        auVar89._4_4_ = __real_00000020;
        auVar89._0_4_ = __real_00000020;
        auVar89._8_4_ = __real_00000020;
        auVar89._12_4_ = __real_00000020;
        auVar89._16_4_ = __real_00000020;
        auVar89._20_4_ = __real_00000020;
        auVar89._24_4_ = __real_00000020;
        auVar89._28_4_ = __real_00000020;
        auVar47 = vpor_avx2(auVar168,auVar89);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar186 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar152 = vgatherqpd(ZEXT832(0),auVar17);
        auVar90._4_4_ = __real_00000028;
        auVar90._0_4_ = __real_00000028;
        auVar90._8_4_ = __real_00000028;
        auVar90._12_4_ = __real_00000028;
        auVar90._16_4_ = __real_00000028;
        auVar90._20_4_ = __real_00000028;
        auVar90._24_4_ = __real_00000028;
        auVar90._28_4_ = __real_00000028;
        auVar47 = vpor_avx2(auVar168,auVar90);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar187 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar153 = vgatherqpd(ZEXT832(0),auVar17);
        auVar91._4_4_ = __real_00000030;
        auVar91._0_4_ = __real_00000030;
        auVar91._8_4_ = __real_00000030;
        auVar91._12_4_ = __real_00000030;
        auVar91._16_4_ = __real_00000030;
        auVar91._20_4_ = __real_00000030;
        auVar91._24_4_ = __real_00000030;
        auVar91._28_4_ = __real_00000030;
        auVar47 = vpor_avx2(auVar168,auVar91);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar188 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar154 = vgatherqpd(ZEXT832(0),auVar17);
        auVar47 = vpor_avx2(auVar168,auVar182._0_32_);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar177 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar155 = vgatherqpd(ZEXT832(0),auVar17);
        auVar92._4_4_ = __real_00000040;
        auVar92._0_4_ = __real_00000040;
        auVar92._8_4_ = __real_00000040;
        auVar92._12_4_ = __real_00000040;
        auVar92._16_4_ = __real_00000040;
        auVar92._20_4_ = __real_00000040;
        auVar92._24_4_ = __real_00000040;
        auVar92._28_4_ = __real_00000040;
        auVar47 = vpor_avx2(auVar168,auVar92);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar178 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        auVar156 = vgatherqpd(ZEXT832(0),auVar17);
        auVar93._4_4_ = __real_00000048;
        auVar93._0_4_ = __real_00000048;
        auVar93._8_4_ = __real_00000048;
        auVar93._12_4_ = __real_00000048;
        auVar93._16_4_ = __real_00000048;
        auVar93._20_4_ = __real_00000048;
        auVar93._24_4_ = __real_00000048;
        auVar93._28_4_ = __real_00000048;
        auVar47 = vpor_avx2(auVar168,auVar93);
        vpmovzxdq_avx2(auVar47._0_16_);
        auVar179 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        local_aa0 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
        auVar94._4_4_ = __real_00000050;
        auVar94._0_4_ = __real_00000050;
        auVar94._8_4_ = __real_00000050;
        auVar94._12_4_ = __real_00000050;
        auVar94._16_4_ = __real_00000050;
        auVar94._20_4_ = __real_00000050;
        auVar94._24_4_ = __real_00000050;
        auVar94._28_4_ = __real_00000050;
        auVar47 = vpor_avx2(auVar168,auVar94);
        vpmovzxdq_avx2(auVar47._0_16_);
        local_1aa0 = auVar41;
        local_a80 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        local_a60 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
        auVar95._4_4_ = __real_00000058;
        auVar95._0_4_ = __real_00000058;
        auVar95._8_4_ = __real_00000058;
        auVar95._12_4_ = __real_00000058;
        auVar95._16_4_ = __real_00000058;
        auVar95._20_4_ = __real_00000058;
        auVar95._24_4_ = __real_00000058;
        auVar95._28_4_ = __real_00000058;
        auVar47 = vpor_avx2(auVar168,auVar95);
        vpmovzxdq_avx2(auVar47._0_16_);
        local_a40 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        local_a20 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar17);
        auVar96._4_4_ = __real_00000060;
        auVar96._0_4_ = __real_00000060;
        auVar96._8_4_ = __real_00000060;
        auVar96._12_4_ = __real_00000060;
        auVar96._16_4_ = __real_00000060;
        auVar96._20_4_ = __real_00000060;
        auVar96._24_4_ = __real_00000060;
        auVar96._28_4_ = __real_00000060;
        auVar47 = vpor_avx2(auVar168,auVar96);
        vpmovzxdq_avx2(auVar47._0_16_);
        local_a00 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        local_9e0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
        auVar97._4_4_ = __real_00000068;
        auVar97._0_4_ = __real_00000068;
        auVar97._8_4_ = __real_00000068;
        auVar97._12_4_ = __real_00000068;
        auVar97._16_4_ = __real_00000068;
        auVar97._20_4_ = __real_00000068;
        auVar97._24_4_ = __real_00000068;
        auVar97._28_4_ = __real_00000068;
        auVar47 = vpor_avx2(auVar168,auVar97);
        vpmovzxdq_avx2(auVar47._0_16_);
        _local_9c0 = vgatherqpd(ZEXT832(0) << 0x40,auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        _local_9a0 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
        auVar98._4_4_ = __real_00000070;
        auVar98._0_4_ = __real_00000070;
        auVar98._8_4_ = __real_00000070;
        auVar98._12_4_ = __real_00000070;
        auVar98._16_4_ = __real_00000070;
        auVar98._20_4_ = __real_00000070;
        auVar98._24_4_ = __real_00000070;
        auVar98._28_4_ = __real_00000070;
        auVar47 = vpor_avx2(auVar168,auVar98);
        vpmovzxdq_avx2(auVar47._0_16_);
        _local_980 = vgatherqpd(ZEXT832(0),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        _local_960 = vgatherqpd(ZEXT1632((undefined1  [16])0x0),auVar17);
        auVar137._4_4_ = __real_00000078;
        auVar137._0_4_ = __real_00000078;
        auVar137._8_4_ = __real_00000078;
        auVar137._12_4_ = __real_00000078;
        auVar137._16_4_ = __real_00000078;
        auVar137._20_4_ = __real_00000078;
        auVar137._24_4_ = __real_00000078;
        auVar137._28_4_ = __real_00000078;
        auVar47 = vpor_avx2(auVar168,auVar137);
        vpmovzxdq_avx2(auVar47._0_16_);
        _local_940 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
        vpmovzxdq_avx2(auVar47._16_16_);
        _local_920 = vgatherqpd(ZEXT832(0) << 0x40,auVar17);
        auVar38 = vpacksswb_avx(auVar41,auVar41);
        bVar26 = SUB161(auVar38 >> 7,0) & 1;
        bVar3 = SUB161(auVar38 >> 0xf,0) & 1;
        bVar4 = SUB161(auVar38 >> 0x17,0) & 1;
        bVar5 = SUB161(auVar38 >> 0x1f,0) & 1;
        bVar6 = SUB161(auVar38 >> 0x27,0) & 1;
        bVar7 = SUB161(auVar38 >> 0x2f,0) & 1;
        bVar8 = SUB161(auVar38 >> 0x37,0) & 1;
        bVar9 = SUB161(auVar38 >> 0x3f,0) << 7;
        local_21e0._0_8_ = auVar148._0_8_;
        local_21e0._8_8_ = auVar148._8_8_;
        dStack_21d0 = auVar148._16_8_;
        dStack_21c8 = auVar148._24_8_;
        adStack_d10[6] = (double)local_21e0._0_8_;
        adStack_d10[7] = (double)local_21e0._8_8_;
        adStack_d10[8] = dStack_21d0;
        adStack_d10[9] = dStack_21c8;
        local_21c0 = auVar136._0_8_;
        uStack_21b8 = auVar136._8_8_;
        uStack_21b0 = auVar136._16_8_;
        uStack_21a8 = auVar136._24_8_;
        adStack_d10[2] = (double)local_21c0;
        adStack_d10[3] = (double)uStack_21b8;
        adStack_d10[4] = (double)uStack_21b0;
        adStack_d10[5] = (double)uStack_21a8;
        local_2180._0_8_ = auVar149._0_8_;
        local_2180._8_8_ = auVar149._8_8_;
        dStack_2170 = auVar149._16_8_;
        dStack_2168 = auVar149._24_8_;
        local_ca0 = local_2180._0_8_;
        uStack_c98 = local_2180._8_8_;
        uStack_c90 = dStack_2170;
        uStack_c88 = dStack_2168;
        local_2200._0_8_ = auVar183._0_8_;
        local_2200._8_8_ = auVar183._8_8_;
        dStack_21f0 = auVar183._16_8_;
        dStack_21e8 = auVar183._24_8_;
        adStack_d10[10] = (double)local_2200._0_8_;
        adStack_d10[0xb] = (double)local_2200._8_8_;
        adStack_d10[0xc] = dStack_21f0;
        uStack_ca8 = dStack_21e8;
        local_2120 = auVar150._0_8_;
        uStack_2118 = auVar150._8_8_;
        uStack_2110 = auVar150._16_8_;
        uStack_2108 = auVar150._24_8_;
        local_c60 = local_2120;
        uStack_c58 = uStack_2118;
        uStack_c50 = uStack_2110;
        uStack_c48 = uStack_2108;
        local_21a0._0_8_ = auVar184._0_8_;
        local_21a0._8_8_ = auVar184._8_8_;
        dStack_2190 = auVar184._16_8_;
        dStack_2188 = auVar184._24_8_;
        local_c80 = local_21a0._0_8_;
        uStack_c78 = local_21a0._8_8_;
        uStack_c70 = dStack_2190;
        uStack_c68 = dStack_2188;
        local_2160 = auVar151._0_8_;
        uStack_2158 = auVar151._8_8_;
        uStack_2150 = auVar151._16_8_;
        uStack_2148 = auVar151._24_8_;
        local_c20 = local_2160;
        uStack_c18 = uStack_2158;
        uStack_c10 = uStack_2150;
        uStack_c08 = uStack_2148;
        local_2140 = auVar185._0_8_;
        uStack_2138 = auVar185._8_8_;
        uStack_2130 = auVar185._16_8_;
        uStack_2128 = auVar185._24_8_;
        local_c40 = local_2140;
        uStack_c38 = uStack_2138;
        uStack_c30 = uStack_2130;
        uStack_c28 = uStack_2128;
        local_20a0 = auVar152._0_8_;
        uStack_2098 = auVar152._8_8_;
        uStack_2090 = auVar152._16_8_;
        uStack_2088 = auVar152._24_8_;
        local_be0 = local_20a0;
        uStack_bd8 = uStack_2098;
        uStack_bd0 = uStack_2090;
        uStack_bc8 = uStack_2088;
        local_2080 = auVar186._0_8_;
        uStack_2078 = auVar186._8_8_;
        uStack_2070 = auVar186._16_8_;
        uStack_2068 = auVar186._24_8_;
        local_c00 = local_2080;
        uStack_bf8 = uStack_2078;
        uStack_bf0 = uStack_2070;
        uStack_be8 = uStack_2068;
        local_20e0 = auVar153._0_8_;
        uStack_20d8 = auVar153._8_8_;
        uStack_20d0 = auVar153._16_8_;
        uStack_20c8 = auVar153._24_8_;
        local_ba0 = local_20e0;
        uStack_b98 = uStack_20d8;
        uStack_b90 = uStack_20d0;
        uStack_b88 = uStack_20c8;
        local_20c0 = auVar187._0_8_;
        uStack_20b8 = auVar187._8_8_;
        uStack_20b0 = auVar187._16_8_;
        uStack_20a8 = auVar187._24_8_;
        local_bc0 = local_20c0;
        uStack_bb8 = uStack_20b8;
        uStack_bb0 = uStack_20b0;
        uStack_ba8 = uStack_20a8;
        local_1ae0._0_8_ = auVar154._0_8_;
        local_1ae0._8_8_ = auVar154._8_8_;
        local_1ae0._16_8_ = auVar154._16_8_;
        local_1ae0._24_8_ = auVar154._24_8_;
        local_b60 = local_1ae0._0_8_;
        uStack_b58 = local_1ae0._8_8_;
        uStack_b50 = local_1ae0._16_8_;
        uStack_b48 = local_1ae0._24_8_;
        local_2100 = auVar188._0_8_;
        uStack_20f8 = auVar188._8_8_;
        uStack_20f0 = auVar188._16_8_;
        uStack_20e8 = auVar188._24_8_;
        local_b80 = local_2100;
        uStack_b78 = uStack_20f8;
        uStack_b70 = uStack_20f0;
        uStack_b68 = uStack_20e8;
        local_2040[0xc] = auVar155._0_8_;
        local_2040[0xd] = auVar155._8_8_;
        local_2040[0xe] = auVar155._16_8_;
        local_2040[0xf] = auVar155._24_8_;
        local_b20 = local_2040[0xc];
        uStack_b18 = local_2040[0xd];
        uStack_b10 = local_2040[0xe];
        uStack_b08 = local_2040[0xf];
        local_2040[0x10] = auVar177._0_8_;
        local_2040[0x11] = auVar177._8_8_;
        local_2040[0x12] = auVar177._16_8_;
        local_2040[0x13] = auVar177._24_8_;
        local_b40 = local_2040[0x10];
        uStack_b38 = local_2040[0x11];
        uStack_b30 = local_2040[0x12];
        uStack_b28 = local_2040[0x13];
        local_1b40 = auVar156._0_8_;
        uStack_1b38 = auVar156._8_8_;
        uStack_1b30 = auVar156._16_8_;
        uStack_1b28 = auVar156._24_8_;
        local_ae0 = local_1b40;
        uStack_ad8 = uStack_1b38;
        uStack_ad0 = uStack_1b30;
        uStack_ac8 = uStack_1b28;
        local_2040[8] = auVar178._0_8_;
        local_2040[9] = auVar178._8_8_;
        local_2040[10] = auVar178._16_8_;
        local_2040[0xb] = auVar178._24_8_;
        local_b00 = local_2040[8];
        uStack_af8 = local_2040[9];
        uStack_af0 = local_2040[10];
        uStack_ae8 = local_2040[0xb];
        local_1b60 = auVar179._0_8_;
        uStack_1b58 = auVar179._8_8_;
        uStack_1b50 = auVar179._16_8_;
        uStack_1b48 = auVar179._24_8_;
        local_ac0 = local_1b60;
        uStack_ab8 = uStack_1b58;
        uStack_ab0 = uStack_1b50;
        uStack_aa8 = uStack_1b48;
        dVar1 = param_4[8];
        dVar31 = param_4[0xc];
        dVar32 = *param_4;
        dVar33 = param_4[1];
        lVar30 = 0xc0;
        dVar34 = param_4[5];
        dVar35 = param_4[9];
        dVar63 = param_4[0xd];
        dVar64 = param_4[2];
        dVar65 = param_4[6];
        dVar66 = param_4[10];
        dVar67 = param_4[0xe];
        dVar69 = param_4[3];
        dVar70 = param_4[7];
        dVar71 = param_4[0xb];
        dVar72 = param_4[0xf];
        local_1ae0 = vpmovsxwd_avx2(auVar41);
        do {
          dVar75 = *(double *)(local_dc0 + lVar30);
          dVar76 = *(double *)(local_dc0 + lVar30 + 8);
          dVar77 = *(double *)(local_dc0 + lVar30 + 0x10);
          dVar78 = *(double *)(local_dc0 + lVar30 + 0x18);
          dVar79 = *(double *)(local_da0 + lVar30);
          dVar81 = *(double *)(local_da0 + lVar30 + 8);
          dVar82 = *(double *)(local_da0 + lVar30 + 0x10);
          dVar83 = *(double *)(local_da0 + lVar30 + 0x18);
          dVar114 = *(double *)(local_d80 + lVar30);
          dVar115 = *(double *)(local_d80 + lVar30 + 8);
          dVar116 = *(double *)(local_d80 + lVar30 + 0x10);
          dVar117 = *(double *)(local_d80 + lVar30 + 0x18);
          dVar118 = *(double *)(local_d60 + lVar30);
          dVar119 = *(double *)(local_d60 + lVar30 + 8);
          dVar120 = *(double *)(local_d60 + lVar30 + 0x10);
          dVar121 = *(double *)(local_d60 + lVar30 + 0x18);
          dVar122 = *(double *)(local_d40 + lVar30);
          dVar123 = *(double *)(local_d40 + lVar30 + 8);
          dVar130 = *(double *)(local_d40 + lVar30 + 0x10);
          dVar131 = *(double *)(local_d40 + lVar30 + 0x18);
          dVar132 = *(double *)(local_d20 + lVar30);
          dVar133 = *(double *)(local_d20 + lVar30 + 8);
          dVar144 = *(double *)(local_d20 + lVar30 + 0x10);
          dVar145 = *(double *)(local_d20 + lVar30 + 0x18);
          dVar146 = *(double *)((longlong)adStack_d10 + lVar30 + 0x30);
          dVar163 = *(double *)((longlong)adStack_d10 + lVar30 + 0x38);
          dVar174 = *(double *)((longlong)adStack_d10 + lVar30 + 0x40);
          dVar175 = *(double *)((longlong)adStack_d10 + lVar30 + 0x48);
          dVar73 = param_4[4];
          *(double *)((longlong)local_2040 + lVar30 + 0x20) =
               dVar146 * dVar31 + dVar132 * dVar1 + dVar118 * dVar73 + dVar79 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x28) =
               dVar163 * dVar31 + dVar133 * dVar1 + dVar119 * dVar73 + dVar81 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x30) =
               dVar174 * dVar31 + dVar144 * dVar1 + dVar120 * dVar73 + dVar82 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x38) =
               dVar175 * dVar31 + dVar145 * dVar1 + dVar121 * dVar73 + dVar83 * dVar32 + 0.0;
          dVar176 = *(double *)((longlong)adStack_d10 + lVar30 + 0x10);
          dVar220 = *(double *)((longlong)adStack_d10 + lVar30 + 0x18);
          dVar224 = *(double *)((longlong)adStack_d10 + lVar30 + 0x20);
          dVar225 = *(double *)((longlong)adStack_d10 + lVar30 + 0x28);
          *(double *)((longlong)local_2040 + lVar30) =
               dVar176 * dVar31 + dVar122 * dVar1 + dVar114 * dVar73 + dVar75 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 8) =
               dVar220 * dVar31 + dVar123 * dVar1 + dVar115 * dVar73 + dVar76 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x10) =
               dVar224 * dVar31 + dVar130 * dVar1 + dVar116 * dVar73 + dVar77 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x18) =
               dVar225 * dVar31 + dVar131 * dVar1 + dVar117 * dVar73 + dVar78 * dVar32 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x60) =
               dVar146 * dVar63 + dVar132 * dVar35 + dVar118 * dVar34 + dVar79 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x68) =
               dVar163 * dVar63 + dVar133 * dVar35 + dVar119 * dVar34 + dVar81 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x70) =
               dVar174 * dVar63 + dVar144 * dVar35 + dVar120 * dVar34 + dVar82 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x78) =
               dVar175 * dVar63 + dVar145 * dVar35 + dVar121 * dVar34 + dVar83 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x40) =
               dVar176 * dVar63 + dVar122 * dVar35 + dVar114 * dVar34 + dVar75 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x48) =
               dVar220 * dVar63 + dVar123 * dVar35 + dVar115 * dVar34 + dVar76 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x50) =
               dVar224 * dVar63 + dVar130 * dVar35 + dVar116 * dVar34 + dVar77 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x58) =
               dVar225 * dVar63 + dVar131 * dVar35 + dVar117 * dVar34 + dVar78 * dVar33 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0xa0) =
               dVar146 * dVar67 + dVar132 * dVar66 + dVar118 * dVar65 + dVar79 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0xa8) =
               dVar163 * dVar67 + dVar133 * dVar66 + dVar119 * dVar65 + dVar81 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0xb0) =
               dVar174 * dVar67 + dVar144 * dVar66 + dVar120 * dVar65 + dVar82 * dVar64 + 0.0;
          *(double *)(local_1f80 + lVar30 + -8) =
               dVar175 * dVar67 + dVar145 * dVar66 + dVar121 * dVar65 + dVar83 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x80) =
               dVar176 * dVar67 + dVar122 * dVar66 + dVar114 * dVar65 + dVar75 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x88) =
               dVar220 * dVar67 + dVar123 * dVar66 + dVar115 * dVar65 + dVar76 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x90) =
               dVar224 * dVar67 + dVar130 * dVar66 + dVar116 * dVar65 + dVar77 * dVar64 + 0.0;
          *(double *)((longlong)local_2040 + lVar30 + 0x98) =
               dVar225 * dVar67 + dVar131 * dVar66 + dVar117 * dVar65 + dVar78 * dVar64 + 0.0;
          *(double *)(local_1f60 + lVar30) =
               dVar72 * dVar146 + dVar71 * dVar132 + dVar70 * dVar118 + dVar69 * dVar79 + 0.0;
          *(double *)(local_1f60 + lVar30 + 8) =
               dVar72 * dVar163 + dVar71 * dVar133 + dVar70 * dVar119 + dVar69 * dVar81 + 0.0;
          *(double *)(local_1f60 + lVar30 + 0x10) =
               dVar72 * dVar174 + dVar71 * dVar144 + dVar70 * dVar120 + dVar69 * dVar82 + 0.0;
          *(double *)(local_1f60 + lVar30 + 0x18) =
               dVar72 * dVar175 + dVar71 * dVar145 + dVar70 * dVar121 + dVar69 * dVar83 + 0.0;
          *(double *)(local_1f80 + lVar30) =
               dVar72 * dVar176 + dVar71 * dVar122 + dVar70 * dVar114 + dVar69 * dVar75 + 0.0;
          *(double *)(local_1f80 + lVar30 + 8) =
               dVar72 * dVar220 + dVar71 * dVar123 + dVar70 * dVar115 + dVar69 * dVar76 + 0.0;
          *(double *)(local_1f80 + lVar30 + 0x10) =
               dVar72 * dVar224 + dVar71 * dVar130 + dVar70 * dVar116 + dVar69 * dVar77 + 0.0;
          *(double *)(local_1f80 + lVar30 + 0x18) =
               dVar72 * dVar225 + dVar71 * dVar131 + dVar70 * dVar117 + dVar69 * dVar78 + 0.0;
          lVar30 = lVar30 + 0x100;
        } while (lVar30 != 0x4c0);
        local_2060 = auVar165._0_8_;
        uStack_2058 = auVar165._8_8_;
        uStack_2050 = auVar165._16_8_;
        uStack_2048 = auVar165._24_8_;
        local_2040[0x14] = auVar167._0_8_;
        local_2040[0x15] = auVar167._8_8_;
        local_2040[0x16] = auVar167._16_8_;
        local_2040[0x17] = auVar167._24_8_;
        local_2040[0] = auVar166._0_8_;
        local_2040[1] = auVar166._8_8_;
        local_2040[2] = auVar166._16_8_;
        local_2040[3] = auVar166._24_8_;
        dVar31 = __real_3fe0000000000000 * (local_2060 + local_2040[0x14]);
        dVar63 = __real_3fe0000000000000 * (uStack_2058 + local_2040[0x15]);
        dVar69 = __real_3fe0000000000000 * (uStack_2050 + local_2040[0x16]);
        dVar75 = __real_3fe0000000000000 * (uStack_2048 + local_2040[0x17]);
        dVar81 = __real_3fe0000000000000 * (local_2040[0] + (double)local_1ac0._0_8_);
        dVar114 = __real_3fe0000000000000 * (local_2040[1] + (double)local_1ac0._8_8_);
        dVar117 = __real_3fe0000000000000 * (local_2040[2] + dStack_1ab0);
        dVar120 = __real_3fe0000000000000 * (local_2040[3] + dStack_1aa8);
        dVar32 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
        dVar64 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
        dVar70 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
        dVar76 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
        dVar82 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1a40._0_8_);
        dVar115 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1a40._8_8_);
        dVar118 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1a40._16_8_);
        dVar121 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1a40._24_8_);
        dVar1 = (double)CONCAT17(uStack_1df9,
                                 CONCAT16(uStack_1dfa,
                                          CONCAT15(uStack_1dfb,
                                                   CONCAT14(uStack_1dfc,
                                                            CONCAT13(uStack_1dfd,
                                                                     CONCAT12(uStack_1dfe,
                                                                              CONCAT11(uStack_1dff,
                                                                                       local_1e00)))
                                                           ))));
        local_1300 = (double)local_1f00._0_8_;
        dStack_12f8 = (double)local_1f00._8_8_;
        dStack_12f0 = dStack_1ef0;
        dStack_12e8 = dStack_1ee8;
        dVar33 = __real_3fe0000000000000 * (local_19e0._0_8_ + local_1b00._0_8_);
        dVar65 = __real_3fe0000000000000 * (local_19e0._8_8_ + local_1b00._8_8_);
        dVar71 = __real_3fe0000000000000 * (local_19e0._16_8_ + local_1b00._16_8_);
        dVar77 = __real_3fe0000000000000 * (local_19e0._24_8_ + local_1b00._24_8_);
        dVar34 = __real_3fe0000000000000 * (local_1a00._0_8_ + local_1b20._0_8_);
        dVar66 = __real_3fe0000000000000 * (local_1a00._8_8_ + local_1b20._8_8_);
        dVar72 = __real_3fe0000000000000 * (local_1a00._16_8_ + local_1b20._16_8_);
        dVar78 = __real_3fe0000000000000 * (local_1a00._24_8_ + local_1b20._24_8_);
        auVar135 = vsubpd_avx(local_1a20,local_19a0);
        auVar17 = vsubpd_avx(auVar167,auVar165);
        auVar47 = vsubpd_avx(local_1a40,local_19c0);
        auVar136 = vsubpd_avx(_local_1ac0,auVar166);
        auVar148 = vsubpd_avx(local_1b20,local_1a00);
        auVar149 = vsubpd_avx(local_1b00,local_19e0);
        dVar35 = __real_3fe0000000000000 * auVar17._0_8_;
        dVar67 = __real_3fe0000000000000 * auVar17._8_8_;
        dVar73 = __real_3fe0000000000000 * auVar17._16_8_;
        dVar79 = __real_3fe0000000000000 * auVar17._24_8_;
        dVar133 = __real_3fe0000000000000 * auVar135._0_8_;
        dVar144 = __real_3fe0000000000000 * auVar135._8_8_;
        dVar145 = __real_3fe0000000000000 * auVar135._16_8_;
        dVar146 = __real_3fe0000000000000 * auVar135._24_8_;
        dVar123 = auVar136._0_8_ * __real_3fe0000000000000;
        dVar130 = auVar136._8_8_ * __real_3fe0000000000000;
        dVar131 = auVar136._16_8_ * __real_3fe0000000000000;
        dVar132 = auVar136._24_8_ * __real_3fe0000000000000;
        dVar83 = __real_3fe0000000000000 * auVar47._0_8_;
        dVar116 = __real_3fe0000000000000 * auVar47._8_8_;
        dVar119 = __real_3fe0000000000000 * auVar47._16_8_;
        dVar122 = __real_3fe0000000000000 * auVar47._24_8_;
        dVar163 = __real_3fe0000000000000 * auVar149._0_8_;
        dVar174 = __real_3fe0000000000000 * auVar149._8_8_;
        dVar175 = __real_3fe0000000000000 * auVar149._16_8_;
        dVar176 = __real_3fe0000000000000 * auVar149._24_8_;
        dVar220 = __real_3fe0000000000000 * auVar148._0_8_;
        dVar224 = __real_3fe0000000000000 * auVar148._8_8_;
        dVar225 = __real_3fe0000000000000 * auVar148._16_8_;
        dVar226 = __real_3fe0000000000000 * auVar148._24_8_;
        auVar138._0_8_ =
             dVar34 * local_1d60 + dVar31 * (double)local_1f60 + dVar81 * (double)local_1e60._0_8_ +
             local_1c60;
        auVar138._8_8_ =
             dVar66 * dStack_1d58 + dVar63 * adStack_1f58[0] + dVar114 * (double)local_1e60._8_8_ +
             dStack_1c58;
        auVar138._16_8_ =
             dVar72 * dStack_1d50 + dVar69 * adStack_1f58[1] + dVar117 * dStack_1e50 + dStack_1c50;
        auVar138._24_8_ =
             dVar78 * dStack_1d48 + dVar75 * adStack_1f58[2] + dVar120 * dStack_1e48 + dStack_1c48;
        auVar196._0_8_ =
             dVar33 * local_1d80 + dVar32 * (double)local_1f80 + dVar82 * (double)local_1e80._0_8_ +
             local_1c80;
        auVar196._8_8_ =
             dVar65 * dStack_1d78 + dVar64 * adStack_1f78[0] + dVar115 * (double)local_1e80._8_8_ +
             dStack_1c78;
        auVar196._16_8_ =
             dVar71 * dStack_1d70 + dVar70 * adStack_1f78[1] + dVar118 * dStack_1e70 + dStack_1c70;
        auVar196._24_8_ =
             dVar77 * dStack_1d68 + dVar76 * adStack_1f78[2] + dVar121 * dStack_1e68 + dStack_1c68;
        auVar230._0_8_ =
             dVar34 * local_1d20 +
             dVar31 * (double)local_1f20._0_8_ + dVar81 * (double)local_1e20._0_8_ + local_1c20;
        auVar230._8_8_ =
             dVar66 * dStack_1d18 +
             dVar63 * (double)local_1f20._8_8_ + dVar114 * (double)local_1e20._8_8_ + dStack_1c18;
        auVar230._16_8_ =
             dVar72 * dStack_1d10 + dVar69 * dStack_1f10 + dVar117 * dStack_1e10 + dStack_1c10;
        auVar230._24_8_ =
             dVar78 * dStack_1d08 + dVar75 * dStack_1f08 + dVar120 * dStack_1e08 + dStack_1c08;
        auVar43._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar133 * (double)local_1f80)) +
             (double)((ulonglong)(dVar83 * (double)local_1e80._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar163 * local_1d80) & __real_7fffffffffffffff);
        auVar43._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar144 * adStack_1f78[0])) +
             (double)((ulonglong)(dVar116 * (double)local_1e80._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar174 * dStack_1d78) & __real_7fffffffffffffff);
        auVar43._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar145 * adStack_1f78[1])) +
             (double)((ulonglong)(dVar119 * dStack_1e70) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar175 * dStack_1d70) & __real_7fffffffffffffff);
        auVar43._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar146 * adStack_1f78[2])) +
             (double)((ulonglong)(dVar122 * dStack_1e68) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar176 * dStack_1d68) & __real_7fffffffffffffff);
        auVar157._0_8_ =
             dVar33 * local_1d40 +
             dVar32 * (double)local_1f40._0_8_ + dVar82 * (double)local_1e40._0_8_ + local_1c40;
        auVar157._8_8_ =
             dVar65 * dStack_1d38 +
             dVar64 * (double)local_1f40._8_8_ + dVar115 * (double)local_1e40._8_8_ + dStack_1c38;
        auVar157._16_8_ =
             dVar71 * dStack_1d30 + dVar70 * dStack_1f30 + dVar118 * dStack_1e30 + dStack_1c30;
        auVar157._24_8_ =
             dVar77 * dStack_1d28 + dVar76 * dStack_1f28 + dVar121 * dStack_1e28 + dStack_1c28;
        auVar189._0_8_ =
             (double)((ulonglong)(dVar220 * local_1d60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar35 * (double)local_1f60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
        auVar189._8_8_ =
             (double)((ulonglong)(dVar224 * dStack_1d58) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar67 * adStack_1f58[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar130 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
        auVar189._16_8_ =
             (double)((ulonglong)(dVar225 * dStack_1d50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar73 * adStack_1f58[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar131 * dStack_1e50) & __real_7fffffffffffffff);
        auVar189._24_8_ =
             (double)((ulonglong)(dVar226 * dStack_1d48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar79 * adStack_1f58[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar132 * dStack_1e48) & __real_7fffffffffffffff);
        auVar212._0_8_ =
             local_1ce0 * dVar34 + (double)local_1ee0._0_8_ * dVar31 + dVar81 * local_1de0 +
             local_1be0;
        auVar212._8_8_ =
             dStack_1cd8 * dVar66 + (double)local_1ee0._8_8_ * dVar63 + dVar114 * dStack_1dd8 +
             dStack_1bd8;
        auVar212._16_8_ =
             dStack_1cd0 * dVar72 + dStack_1ed0 * dVar69 + dVar117 * dStack_1dd0 + dStack_1bd0;
        auVar212._24_8_ =
             dStack_1cc8 * dVar78 + dStack_1ec8 * dVar75 + dVar120 * dStack_1dc8 + dStack_1bc8;
        auVar126._0_8_ =
             (double)((ulonglong)(dVar133 * (double)local_1f40._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar163 * local_1d40) & __real_7fffffffffffffff);
        auVar126._8_8_ =
             (double)((ulonglong)(dVar144 * (double)local_1f40._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar116 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar174 * dStack_1d38) & __real_7fffffffffffffff);
        auVar126._16_8_ =
             (double)((ulonglong)(dVar145 * dStack_1f30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar119 * dStack_1e30) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar175 * dStack_1d30) & __real_7fffffffffffffff);
        auVar126._24_8_ =
             (double)((ulonglong)(dVar146 * dStack_1f28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_1e28) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar176 * dStack_1d28) & __real_7fffffffffffffff);
        auVar180._0_8_ =
             local_1d00 * dVar33 + (double)local_1f00._0_8_ * dVar32 + dVar82 * dVar1 + local_1c00;
        auVar180._8_8_ =
             dStack_1cf8 * dVar65 + (double)local_1f00._8_8_ * dVar64 + dVar115 * dStack_1df8 +
             dStack_1bf8;
        auVar180._16_8_ =
             dStack_1cf0 * dVar71 + dStack_1ef0 * dVar70 + dVar118 * dStack_1df0 + dStack_1bf0;
        auVar180._24_8_ =
             dStack_1ce8 * dVar77 + dStack_1ee8 * dVar76 + dVar121 * dStack_1de8 + dStack_1be8;
        auVar200._0_8_ =
             (double)((ulonglong)(dVar220 * local_1d20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar35 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
        auVar200._8_8_ =
             (double)((ulonglong)(dVar224 * dStack_1d18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar67 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar130 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
        auVar200._16_8_ =
             (double)((ulonglong)(dVar225 * dStack_1d10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar73 * dStack_1f10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar131 * dStack_1e10) & __real_7fffffffffffffff);
        auVar200._24_8_ =
             (double)((ulonglong)(dVar226 * dStack_1d08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar79 * dStack_1f08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar132 * dStack_1e08) & __real_7fffffffffffffff);
        auVar206._0_8_ =
             (double)((ulonglong)(dVar133 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * dVar1) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar163 * local_1d00) & __real_7fffffffffffffff);
        auVar206._8_8_ =
             (double)((ulonglong)(dVar144 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar116 * dStack_1df8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar174 * dStack_1cf8) & __real_7fffffffffffffff);
        auVar206._16_8_ =
             (double)((ulonglong)(dVar145 * dStack_1ef0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar119 * dStack_1df0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar175 * dStack_1cf0) & __real_7fffffffffffffff);
        auVar206._24_8_ =
             (double)((ulonglong)(dVar146 * dStack_1ee8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_1de8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar176 * dStack_1ce8) & __real_7fffffffffffffff);
        auVar99._0_8_ =
             (double)((ulonglong)(dVar220 * local_1ce0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar35 * (double)local_1ee0._0_8_)) +
             (double)((ulonglong)(dVar123 * local_1de0) & __real_7fffffffffffffff);
        auVar99._8_8_ =
             (double)((ulonglong)(dVar224 * dStack_1cd8) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar67 * (double)local_1ee0._8_8_)) +
             (double)((ulonglong)(dVar130 * dStack_1dd8) & __real_7fffffffffffffff);
        auVar99._16_8_ =
             (double)((ulonglong)(dVar225 * dStack_1cd0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar73 * dStack_1ed0)) +
             (double)((ulonglong)(dVar131 * dStack_1dd0) & __real_7fffffffffffffff);
        auVar99._24_8_ =
             (double)((ulonglong)(dVar226 * dStack_1cc8) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar79 * dStack_1ec8)) +
             (double)((ulonglong)(dVar132 * dStack_1dc8) & __real_7fffffffffffffff);
        auVar135 = vsubpd_avx(auVar196,auVar43);
        auVar17 = vsubpd_avx(auVar138,auVar189);
        auVar47 = vsubpd_avx(auVar157,auVar126);
        auVar136 = vsubpd_avx(auVar230,auVar200);
        local_2200._8_8_ = auVar196._8_8_ + auVar43._8_8_;
        local_2200._0_8_ = auVar196._0_8_ + auVar43._0_8_;
        dStack_21f0 = auVar196._16_8_ + auVar43._16_8_;
        dStack_21e8 = auVar196._24_8_ + auVar43._24_8_;
        auVar148 = vsubpd_avx(auVar180,auVar206);
        auVar197._0_8_ = auVar189._0_8_ + auVar138._0_8_;
        auVar197._8_8_ = auVar189._8_8_ + auVar138._8_8_;
        auVar197._16_8_ = auVar189._16_8_ + auVar138._16_8_;
        auVar197._24_8_ = auVar189._24_8_ + auVar138._24_8_;
        auVar149 = vsubpd_avx(auVar212,auVar99);
        auVar158._0_8_ = auVar126._0_8_ + auVar157._0_8_;
        auVar158._8_8_ = auVar126._8_8_ + auVar157._8_8_;
        auVar158._16_8_ = auVar126._16_8_ + auVar157._16_8_;
        auVar158._24_8_ = auVar126._24_8_ + auVar157._24_8_;
        auVar139._0_8_ = auVar200._0_8_ + auVar230._0_8_;
        auVar139._8_8_ = auVar200._8_8_ + auVar230._8_8_;
        auVar139._16_8_ = auVar200._16_8_ + auVar230._16_8_;
        auVar139._24_8_ = auVar200._24_8_ + auVar230._24_8_;
        auVar231._0_8_ = auVar206._0_8_ + auVar180._0_8_;
        auVar231._8_8_ = auVar206._8_8_ + auVar180._8_8_;
        auVar231._16_8_ = auVar206._16_8_ + auVar180._16_8_;
        auVar231._24_8_ = auVar206._24_8_ + auVar180._24_8_;
        auVar127._0_8_ = auVar212._0_8_ + auVar99._0_8_;
        auVar127._8_8_ = auVar212._8_8_ + auVar99._8_8_;
        auVar127._16_8_ = auVar212._16_8_ + auVar99._16_8_;
        auVar127._24_8_ = auVar212._24_8_ + auVar99._24_8_;
        auVar234._8_8_ = 0;
        auVar234._0_8_ = local_1600;
        auVar41 = vpcmpeqb_avx(auVar234,ZEXT816(0) << 0x40);
        auVar151 = vpmovsxbd_avx2(auVar41 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar150 = vpand_avx2(local_1ae0,auVar151);
        iVar29 = vmovmskps_avx(auVar150);
        if (iVar29 == 0) {
          auVar150 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a4f0d0:
          local_2180._0_8_ = auVar41._0_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_2180._0_8_;
          auVar38 = vpmovzxbw_avx(auVar2);
          auVar41 = vpand_avx(auVar38,local_1aa0);
          auVar41 = vpshufb_avx(auVar41,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
            auVar151 = vpmovzxwd_avx2(auVar38);
            auVar151 = vpslld_avx2(auVar151,0x1f);
            auVar152 = vpsrad_avx2(auVar151,0x1f);
            auVar151 = local_1ae0 & auVar152;
            if ((((((((SUB321(auVar151 >> 0x1f,0) & 1) != 0 || (SUB321(auVar151 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar151 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar151 >> 0x7f,0) != '\0') || (SUB321(auVar151 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar151 >> 0xbf,0) != '\0') || (SUB321(auVar151 >> 0xdf,0) & 1) != 0) ||
                auVar151[0x1f] < '\0') {
              auVar153 = vpermpd_avx2(auVar152,0xd8);
              auVar151 = vshufps_avx(auVar153,auVar153,0x50);
              auVar153 = vshufps_avx(auVar153,auVar153,0xfa);
              _local_1f80 = vmaskmovpd_avx(auVar151,auVar135);
              _local_1f60 = vmaskmovpd_avx(auVar153,auVar17);
              _local_1f40 = vmaskmovpd_avx(auVar151,auVar47);
              _local_1f20 = vmaskmovpd_avx(auVar153,auVar136);
              _local_1f00 = vmaskmovpd_avx(auVar151,auVar148);
              _local_1ee0 = vmaskmovpd_avx(auVar153,auVar149);
              local_1ec0 = vmaskmovpd_avx(auVar151,_local_2200);
              local_1ea0 = vmaskmovpd_avx(auVar153,auVar197);
              _local_1e80 = vmaskmovpd_avx(auVar151,auVar158);
              _local_1e60 = vmaskmovpd_avx(auVar153,auVar139);
              _local_1e40 = vmaskmovpd_avx(auVar151,auVar231);
              _local_1e20 = vmaskmovpd_avx(auVar153,auVar127);
              auVar41 = vpsllw_avx(auVar38,0xf);
              auVar41 = vpacksswb_avx(auVar41,auVar41);
              if ((SUB161(auVar41 >> 7,0) & 1) != 0) {
                local_1e00 = 1;
              }
              if ((SUB161(auVar41 >> 0xf,0) & 1) != 0) {
                uStack_1dff = 1;
              }
              if ((SUB161(auVar41 >> 0x17,0) & 1) != 0) {
                uStack_1dfe = 1;
              }
              if ((SUB161(auVar41 >> 0x1f,0) & 1) != 0) {
                uStack_1dfd = 1;
              }
              if ((SUB161(auVar41 >> 0x27,0) & 1) != 0) {
                uStack_1dfc = 1;
              }
              if ((SUB161(auVar41 >> 0x2f,0) & 1) != 0) {
                uStack_1dfb = 1;
              }
              if ((SUB161(auVar41 >> 0x37,0) & 1) != 0) {
                uStack_1dfa = 1;
              }
              if ((SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
                uStack_1df9 = 1;
              }
              auVar44._0_4_ = local_1ae0._0_4_ & auVar152._0_4_;
              auVar44._4_4_ = local_1ae0._4_4_ & auVar152._4_4_;
              auVar44._8_4_ = local_1ae0._8_4_ & auVar152._8_4_;
              auVar44._12_4_ = local_1ae0._12_4_ & auVar152._12_4_;
              auVar44._16_4_ = local_1ae0._16_4_ & auVar152._16_4_;
              auVar44._20_4_ = local_1ae0._20_4_ & auVar152._20_4_;
              auVar44._24_4_ = local_1ae0._24_4_ & auVar152._24_4_;
              auVar44._28_4_ = local_1ae0._28_4_ & auVar152._28_4_;
              vmovmskps_avx(auVar150 | auVar44);
            }
          }
        }
        else {
          auVar152 = vminpd_avx(local_1780,auVar135);
          auVar154 = vpermq_avx2(auVar151,0xd8);
          auVar153 = vpshufd_avx2(auVar154,0x50);
          _local_1f80 = vmaskmovpd_avx(auVar153,auVar152);
          auVar151 = vminpd_avx(local_1760,auVar17);
          auVar152 = vpshufd_avx2(auVar154,0xfa);
          _local_1f60 = vmaskmovpd_avx(auVar152,auVar151);
          auVar151 = vminpd_avx(local_1740,auVar47);
          _local_1f40 = vmaskmovpd_avx(auVar153,auVar151);
          auVar151 = vminpd_avx(local_1720,auVar136);
          _local_1f20 = vmaskmovpd_avx(auVar152,auVar151);
          auVar151 = vminpd_avx(local_1700,auVar148);
          _local_1f00 = vmaskmovpd_avx(auVar153,auVar151);
          auVar151 = vminpd_avx(local_16e0,auVar149);
          _local_1ee0 = vmaskmovpd_avx(auVar152,auVar151);
          auVar151 = vmaxpd_avx(local_16c0,_local_2200);
          local_1ec0 = vmaskmovpd_avx(auVar153,auVar151);
          auVar151 = vmaxpd_avx(local_16a0,auVar197);
          local_1ea0 = vmaskmovpd_avx(auVar152,auVar151);
          auVar151 = vmaxpd_avx(local_1680,auVar158);
          _local_1e80 = vmaskmovpd_avx(auVar153,auVar151);
          auVar151 = vmaxpd_avx(local_1660,auVar139);
          _local_1e60 = vmaskmovpd_avx(auVar152,auVar151);
          auVar151 = vmaxpd_avx(local_1640,auVar231);
          _local_1e40 = vmaskmovpd_avx(auVar153,auVar151);
          auVar151 = vmaxpd_avx(local_1620,auVar127);
          _local_1e20 = vmaskmovpd_avx(auVar152,auVar151);
          auVar37._8_8_ = local_1600;
          auVar37._0_8_ = local_1600;
          auVar38 = vpcmpeqb_avx(auVar37,___xmm_00000000000000000000000000000000);
          bVar22 = ~(SUB161(auVar38 >> 7,0) & 1 | (SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar38 >> 0x17,0) & 1) << 2 | (SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar38 >> 0x27,0) & 1) << 4 | (SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar38 >> 0x37,0) & 1) << 6);
          if ((bVar22 & 1) != 0) {
            local_1e00 = (undefined1)local_1600;
          }
          if ((bVar22 & 2) != 0) {
            uStack_1dff = (undefined1)(local_1600 >> 8);
          }
          if ((bVar22 & 4) != 0) {
            uStack_1dfe = (undefined1)(local_1600 >> 0x10);
          }
          if ((bVar22 & 8) != 0) {
            uStack_1dfd = (undefined1)(local_1600 >> 0x18);
          }
          if ((bVar22 & 0x10) != 0) {
            uStack_1dfc = (undefined1)(local_1600 >> 0x20);
          }
          if ((bVar22 & 0x20) != 0) {
            uStack_1dfb = (undefined1)(local_1600 >> 0x28);
          }
          if ((bVar22 & 0x40) != 0) {
            uStack_1dfa = (undefined1)(local_1600 >> 0x30);
          }
          if ((SUB161(auVar38 >> 0x3f,0) & 1) == 0) {
            uStack_1df9 = (undefined1)(local_1600 >> 0x38);
          }
          if ((byte)(bVar26 | bVar3 << 1 | bVar4 << 2 | bVar5 << 3 | bVar6 << 4 | bVar7 << 5 |
                     bVar8 << 6 | bVar9) != (byte)iVar29) goto LAB_140a4f0d0;
        }
        in_ZMM5 = ZEXT3264(local_1ea0);
        auVar17 = vpermpd_avx2(local_1ae0,0xd8);
        auVar135 = vshufps_avx(auVar17,auVar17,0x50);
        auVar17 = vshufps_avx(auVar17,auVar17,0xfa);
        local_1780 = vmaskmovpd_avx(auVar135,_local_1f80);
        local_1760 = vmaskmovpd_avx(auVar17,_local_1f60);
        local_1740 = vmaskmovpd_avx(auVar135,_local_1f40);
        local_1720 = vmaskmovpd_avx(auVar17,_local_1f20);
        local_1700 = vmaskmovpd_avx(auVar135,_local_1f00);
        local_16e0 = vmaskmovpd_avx(auVar17,_local_1ee0);
        local_16c0 = vmaskmovpd_avx(auVar135,local_1ec0);
        local_16a0 = vmaskmovpd_avx(auVar17,local_1ea0);
        local_1680 = vmaskmovpd_avx(auVar135,_local_1e80);
        local_1660 = vmaskmovpd_avx(auVar17,_local_1e60);
        local_1640 = vmaskmovpd_avx(auVar135,_local_1e40);
        local_1620 = vmaskmovpd_avx(auVar17,_local_1e20);
        uVar24 = local_1600;
        if (bVar26 != 0) {
          local_1600 = CONCAT71(local_1600._1_7_,local_1e00);
          uVar24 = local_1600;
        }
        auVar195 = ZEXT864(0) << 0x40;
        if (bVar3 != 0) {
          local_1600._2_6_ = (undefined6)(uVar24 >> 0x10);
          local_1600._0_1_ = (char)uVar24;
          local_1600._0_2_ = CONCAT11(uStack_1dff,(char)local_1600);
          uVar24 = local_1600;
        }
        if (bVar4 != 0) {
          local_1600._3_5_ = (undefined5)(uVar24 >> 0x18);
          local_1600._0_2_ = (undefined2)uVar24;
          local_1600._0_3_ = CONCAT12(uStack_1dfe,(undefined2)local_1600);
          uVar24 = local_1600;
        }
        if (bVar5 != 0) {
          local_1600._4_4_ = (undefined4)(uVar24 >> 0x20);
          local_1600._0_3_ = (undefined3)uVar24;
          local_1600._0_4_ = CONCAT13(uStack_1dfd,(undefined3)local_1600);
          uVar24 = local_1600;
        }
        if (bVar6 != 0) {
          local_1600._5_3_ = (undefined3)(uVar24 >> 0x28);
          local_1600._0_4_ = (undefined4)uVar24;
          local_1600._0_5_ = CONCAT14(uStack_1dfc,(undefined4)local_1600);
          uVar24 = local_1600;
        }
        if (bVar7 != 0) {
          local_1600._6_2_ = (undefined2)(uVar24 >> 0x30);
          local_1600._0_5_ = (undefined5)uVar24;
          local_1600._0_6_ = CONCAT15(uStack_1dfb,(undefined5)local_1600);
          uVar24 = local_1600;
        }
        local_1600 = uVar24;
        if (bVar8 != 0) {
          local_1600._7_1_ = (undefined1)(uVar24 >> 0x38);
          local_1600._0_6_ = (undefined6)uVar24;
          local_1600._0_7_ = CONCAT16(uStack_1dfa,(undefined6)local_1600);
        }
        auVar182 = ZEXT3264(local_1340);
        if (bVar9 != 0) {
          local_1600 = CONCAT17(uStack_1df9,(undefined7)local_1600);
        }
      }
      iVar25 = iVar25 + 8;
    } while (iVar25 < (int)uVar21);
  }
  if ((int)param_6 <= iVar25) goto LAB_140a53488;
  auVar46._4_4_ = iVar25;
  auVar46._0_4_ = iVar25;
  auVar46._8_4_ = iVar25;
  auVar46._12_4_ = iVar25;
  auVar46._16_4_ = iVar25;
  auVar46._20_4_ = iVar25;
  auVar46._24_4_ = iVar25;
  auVar46._28_4_ = iVar25;
  auVar47 = vpor_avx2(auVar46,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar100._4_4_ = param_6;
  auVar100._0_4_ = param_6;
  auVar100._8_4_ = param_6;
  auVar100._12_4_ = param_6;
  auVar100._16_4_ = param_6;
  auVar100._20_4_ = param_6;
  auVar100._24_4_ = param_6;
  auVar100._28_4_ = param_6;
  auVar198._4_4_ = __real_00000038;
  auVar198._0_4_ = __real_00000038;
  auVar198._8_4_ = __real_00000038;
  auVar198._12_4_ = __real_00000038;
  auVar198._16_4_ = __real_00000038;
  auVar198._20_4_ = __real_00000038;
  auVar198._24_4_ = __real_00000038;
  auVar198._28_4_ = __real_00000038;
  auVar135 = vpmulld_avx2(auVar47,auVar198);
  local_1a60 = vpcmpgtd_avx2(auVar100,auVar47);
  auVar101._4_4_ = __real_00000030;
  auVar101._0_4_ = __real_00000030;
  auVar101._8_4_ = __real_00000030;
  auVar101._12_4_ = __real_00000030;
  auVar101._16_4_ = __real_00000030;
  auVar101._20_4_ = __real_00000030;
  auVar101._24_4_ = __real_00000030;
  auVar101._28_4_ = __real_00000030;
  auVar10._0_4_ = auVar135._0_4_ + __real_00000030;
  auVar10._4_4_ = auVar135._4_4_ + __real_00000030;
  auVar10._8_4_ = auVar135._8_4_ + __real_00000030;
  auVar10._12_4_ = auVar135._12_4_ + __real_00000030;
  auVar10._16_4_ = auVar135._16_4_ + __real_00000030;
  auVar10._20_4_ = auVar135._20_4_ + __real_00000030;
  auVar10._24_4_ = auVar135._24_4_ + __real_00000030;
  auVar10._28_4_ = auVar135._28_4_ + __real_00000030;
  auVar135 = vpand_avx2(local_1a60,auVar10);
  auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar135._0_4_)),
                        (uint)*(byte *)(param_3 + auVar135._4_4_),1);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._8_4_),2);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._12_4_),3);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._16_4_),4);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._20_4_),5);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._24_4_),6);
  auVar38 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + auVar135._28_4_),7);
  auVar135 = vmaskmovps_avx(local_1a60,*(undefined1 (*) [32])(param_1 + (iVar25 << 2)));
  auVar17 = vpcmpeqd_avx2(ZEXT1632(auVar41),ZEXT1632(auVar41));
  auVar17 = vpcmpeqd_avx2(auVar135,auVar17);
  auVar41 = vpcmpeqb_avx(auVar38,(undefined1  [16])0x0);
  auVar38 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
  auVar135 = vpmovsxbd_avx2(auVar41 ^ auVar38);
  auVar135 = vpandn_avx2(auVar17,auVar135);
  auVar135 = vpand_avx2(local_1a60,auVar135);
  uVar28 = vmovmskps_avx(auVar135);
  if (uVar28 == 0) goto LAB_140a53488;
  local_17a0._0_16_ = ZEXT416(param_6);
  auVar135 = vpslld_avx2(auVar47,3);
  vpsubd_avx2(auVar135,auVar47);
  auVar136 = vpmovsxdq_avx2(local_1a60._0_16_);
  _local_1aa0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
  auVar148 = vpmovsxdq_avx2(local_1a60._16_16_);
  auVar184 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar148);
  auVar190._4_4_ = __real_00000008;
  auVar190._0_4_ = __real_00000008;
  auVar190._8_4_ = __real_00000008;
  auVar190._12_4_ = __real_00000008;
  auVar190._16_4_ = __real_00000008;
  auVar190._20_4_ = __real_00000008;
  auVar190._24_4_ = __real_00000008;
  auVar190._28_4_ = __real_00000008;
  local_1ae0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
  auVar185 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
  auVar202._4_4_ = __real_00000010;
  auVar202._0_4_ = __real_00000010;
  auVar202._8_4_ = __real_00000010;
  auVar202._12_4_ = __real_00000010;
  auVar202._16_4_ = __real_00000010;
  auVar202._20_4_ = __real_00000010;
  auVar202._24_4_ = __real_00000010;
  auVar202._28_4_ = __real_00000010;
  local_19a0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
  local_19c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
  auVar208._4_4_ = __real_00000018;
  auVar208._0_4_ = __real_00000018;
  auVar208._8_4_ = __real_00000018;
  auVar208._12_4_ = __real_00000018;
  auVar208._16_4_ = __real_00000018;
  auVar208._20_4_ = __real_00000018;
  auVar208._24_4_ = __real_00000018;
  auVar208._28_4_ = __real_00000018;
  local_19e0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar136);
  auVar186 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
  auVar215._4_4_ = __real_00000020;
  auVar215._0_4_ = __real_00000020;
  auVar215._8_4_ = __real_00000020;
  auVar215._12_4_ = __real_00000020;
  auVar215._16_4_ = __real_00000020;
  auVar215._20_4_ = __real_00000020;
  auVar215._24_4_ = __real_00000020;
  auVar215._28_4_ = __real_00000020;
  auVar135 = vpcmpeqd_avx2(auVar101,auVar101);
  local_1a00 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar136);
  _local_1ac0 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
  auVar221._4_4_ = __real_00000028;
  auVar221._0_4_ = __real_00000028;
  auVar221._8_4_ = __real_00000028;
  auVar221._12_4_ = __real_00000028;
  auVar221._16_4_ = __real_00000028;
  auVar221._20_4_ = __real_00000028;
  auVar221._24_4_ = __real_00000028;
  auVar221._28_4_ = __real_00000028;
  local_1a20 = vgatherdpd(ZEXT832(0) << 0x40,auVar136);
  local_1a40 = vgatherdpd(ZEXT832(0) << 0x40,auVar148);
  auVar85 = vpackssdw_avx(SUB3216(auVar17 ^ auVar135,0),SUB3216(auVar17 ^ auVar135,0x10));
  auVar41 = vpmovsxbw_avx(auVar41 ^ auVar38);
  local_1a80 = vpand_avx(auVar85,auVar41);
  auVar41 = vpackssdw_avx(local_1a60._0_16_,local_1a60._16_16_);
  auVar41 = vpand_avx(local_1a80,auVar41);
  auVar183 = vpslld_avx2(auVar47,7);
  auVar38 = vpshufd_avx(auVar41,0xee);
  auVar135 = vpmovsxwq_avx2(auVar38);
  auVar47 = vgatherdpd(ZEXT1632((undefined1  [16])0x0),auVar135);
  vpor_avx2(auVar183,auVar190);
  auVar17 = vpmovsxwq_avx2(auVar41);
  auVar154 = vgatherdpd(ZEXT1632((undefined1  [16])0x0),auVar17);
  auVar155 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar202,auVar183);
  auVar156 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar165 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar208,auVar183);
  auVar166 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar167 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar215,auVar183);
  auVar168 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar177 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar221,auVar183);
  auVar178 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar179 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar183,auVar101);
  auVar136 = vgatherdpd(ZEXT832(0),auVar17);
  auVar148 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  vpor_avx2(auVar183,auVar198);
  auVar149 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar150 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  auVar102._4_4_ = __real_00000040;
  auVar102._0_4_ = __real_00000040;
  auVar102._8_4_ = __real_00000040;
  auVar102._12_4_ = __real_00000040;
  auVar102._16_4_ = __real_00000040;
  auVar102._20_4_ = __real_00000040;
  auVar102._24_4_ = __real_00000040;
  auVar102._28_4_ = __real_00000040;
  vpor_avx2(auVar183,auVar102);
  auVar151 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  auVar152 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  auVar103._4_4_ = __real_00000048;
  auVar103._0_4_ = __real_00000048;
  auVar103._8_4_ = __real_00000048;
  auVar103._12_4_ = __real_00000048;
  auVar103._16_4_ = __real_00000048;
  auVar103._20_4_ = __real_00000048;
  auVar103._24_4_ = __real_00000048;
  auVar103._28_4_ = __real_00000048;
  vpor_avx2(auVar183,auVar103);
  auVar153 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  local_ea0 = vgatherdpd(ZEXT832(0) << 0x20,auVar135);
  auVar104._4_4_ = __real_00000050;
  auVar104._0_4_ = __real_00000050;
  auVar104._8_4_ = __real_00000050;
  auVar104._12_4_ = __real_00000050;
  auVar104._16_4_ = __real_00000050;
  auVar104._20_4_ = __real_00000050;
  auVar104._24_4_ = __real_00000050;
  auVar104._28_4_ = __real_00000050;
  vpor_avx2(auVar183,auVar104);
  local_e80 = vgatherdpd(ZEXT832(0),auVar17);
  local_e60 = vgatherdpd(ZEXT832(0),auVar135);
  auVar105._4_4_ = __real_00000058;
  auVar105._0_4_ = __real_00000058;
  auVar105._8_4_ = __real_00000058;
  auVar105._12_4_ = __real_00000058;
  auVar105._16_4_ = __real_00000058;
  auVar105._20_4_ = __real_00000058;
  auVar105._24_4_ = __real_00000058;
  auVar105._28_4_ = __real_00000058;
  vpor_avx2(auVar183,auVar105);
  local_e40 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
  local_e20 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
  auVar106._4_4_ = __real_00000060;
  auVar106._0_4_ = __real_00000060;
  auVar106._8_4_ = __real_00000060;
  auVar106._12_4_ = __real_00000060;
  auVar106._16_4_ = __real_00000060;
  auVar106._20_4_ = __real_00000060;
  auVar106._24_4_ = __real_00000060;
  auVar106._28_4_ = __real_00000060;
  vpor_avx2(auVar183,auVar106);
  local_e00 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
  local_de0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar135);
  auVar107._4_4_ = __real_00000068;
  auVar107._0_4_ = __real_00000068;
  auVar107._8_4_ = __real_00000068;
  auVar107._12_4_ = __real_00000068;
  auVar107._16_4_ = __real_00000068;
  auVar107._20_4_ = __real_00000068;
  auVar107._24_4_ = __real_00000068;
  auVar107._28_4_ = __real_00000068;
  vpor_avx2(auVar183,auVar107);
  _local_dc0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
  _local_da0 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  auVar108._4_4_ = __real_00000070;
  auVar108._0_4_ = __real_00000070;
  auVar108._8_4_ = __real_00000070;
  auVar108._12_4_ = __real_00000070;
  auVar108._16_4_ = __real_00000070;
  auVar108._20_4_ = __real_00000070;
  auVar108._24_4_ = __real_00000070;
  auVar108._28_4_ = __real_00000070;
  vpor_avx2(auVar183,auVar108);
  _local_d80 = vgatherdpd(ZEXT832(0),auVar17);
  _local_d60 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  _local_1100 = vgatherdpd(ZEXT832(0),auVar17);
  _local_d40 = vgatherdpd(ZEXT832(0) << 0x40,auVar17);
  _local_d20 = vgatherdpd(ZEXT832(0) << 0x40,auVar135);
  local_21e0._0_8_ = auVar47._0_8_;
  local_21e0._8_8_ = auVar47._8_8_;
  dStack_21d0 = auVar47._16_8_;
  dStack_21c8 = auVar47._24_8_;
  adStack_10f0[2] = (double)local_21e0._0_8_;
  adStack_10f0[3] = (double)local_21e0._8_8_;
  adStack_10f0[4] = dStack_21d0;
  adStack_10f0[5] = dStack_21c8;
  local_2180._0_8_ = auVar155._0_8_;
  local_2180._8_8_ = auVar155._8_8_;
  dStack_2170 = auVar155._16_8_;
  dStack_2168 = auVar155._24_8_;
  local_10a0 = local_2180._0_8_;
  uStack_1098 = local_2180._8_8_;
  uStack_1090 = dStack_2170;
  uStack_1088 = dStack_2168;
  local_2200._0_8_ = auVar154._0_8_;
  local_2200._8_8_ = auVar154._8_8_;
  dStack_21f0 = auVar154._16_8_;
  dStack_21e8 = auVar154._24_8_;
  adStack_10f0[6] = (double)local_2200._0_8_;
  adStack_10f0[7] = (double)local_2200._8_8_;
  adStack_10f0[8] = dStack_21f0;
  uStack_10a8 = dStack_21e8;
  local_2140 = auVar165._0_8_;
  uStack_2138 = auVar165._8_8_;
  uStack_2130 = auVar165._16_8_;
  uStack_2128 = auVar165._24_8_;
  local_1060 = local_2140;
  uStack_1058 = uStack_2138;
  uStack_1050 = uStack_2130;
  uStack_1048 = uStack_2128;
  local_2120 = auVar156._0_8_;
  uStack_2118 = auVar156._8_8_;
  uStack_2110 = auVar156._16_8_;
  uStack_2108 = auVar156._24_8_;
  local_1080 = local_2120;
  uStack_1078 = uStack_2118;
  uStack_1070 = uStack_2110;
  uStack_1068 = uStack_2108;
  local_2080 = auVar167._0_8_;
  uStack_2078 = auVar167._8_8_;
  uStack_2070 = auVar167._16_8_;
  uStack_2068 = auVar167._24_8_;
  local_1020 = local_2080;
  uStack_1018 = uStack_2078;
  uStack_1010 = uStack_2070;
  uStack_1008 = uStack_2068;
  local_2160 = auVar166._0_8_;
  uStack_2158 = auVar166._8_8_;
  uStack_2150 = auVar166._16_8_;
  uStack_2148 = auVar166._24_8_;
  local_1040 = local_2160;
  uStack_1038 = uStack_2158;
  uStack_1030 = uStack_2150;
  uStack_1028 = uStack_2148;
  local_20c0 = auVar177._0_8_;
  uStack_20b8 = auVar177._8_8_;
  uStack_20b0 = auVar177._16_8_;
  uStack_20a8 = auVar177._24_8_;
  local_fe0 = local_20c0;
  uStack_fd8 = uStack_20b8;
  uStack_fd0 = uStack_20b0;
  uStack_fc8 = uStack_20a8;
  local_20a0 = auVar168._0_8_;
  uStack_2098 = auVar168._8_8_;
  uStack_2090 = auVar168._16_8_;
  uStack_2088 = auVar168._24_8_;
  local_1000 = local_20a0;
  uStack_ff8 = uStack_2098;
  uStack_ff0 = uStack_2090;
  uStack_fe8 = uStack_2088;
  local_2100 = auVar179._0_8_;
  uStack_20f8 = auVar179._8_8_;
  uStack_20f0 = auVar179._16_8_;
  uStack_20e8 = auVar179._24_8_;
  local_fa0 = local_2100;
  uStack_f98 = uStack_20f8;
  uStack_f90 = uStack_20f0;
  uStack_f88 = uStack_20e8;
  local_20e0 = auVar178._0_8_;
  uStack_20d8 = auVar178._8_8_;
  uStack_20d0 = auVar178._16_8_;
  uStack_20c8 = auVar178._24_8_;
  local_fc0 = local_20e0;
  uStack_fb8 = uStack_20d8;
  uStack_fb0 = uStack_20d0;
  uStack_fa8 = uStack_20c8;
  local_1b00._0_8_ = auVar148._0_8_;
  local_1b00._8_8_ = auVar148._8_8_;
  local_1b00._16_8_ = auVar148._16_8_;
  local_1b00._24_8_ = auVar148._24_8_;
  local_f60 = local_1b00._0_8_;
  uStack_f58 = local_1b00._8_8_;
  uStack_f50 = local_1b00._16_8_;
  uStack_f48 = local_1b00._24_8_;
  local_2040[4] = auVar136._0_8_;
  local_2040[5] = auVar136._8_8_;
  local_2040[6] = auVar136._16_8_;
  local_2040[7] = auVar136._24_8_;
  local_f80 = local_2040[4];
  uStack_f78 = local_2040[5];
  uStack_f70 = local_2040[6];
  uStack_f68 = local_2040[7];
  local_1b20._0_8_ = auVar150._0_8_;
  local_1b20._8_8_ = auVar150._8_8_;
  local_1b20._16_8_ = auVar150._16_8_;
  local_1b20._24_8_ = auVar150._24_8_;
  local_f20 = local_1b20._0_8_;
  uStack_f18 = local_1b20._8_8_;
  uStack_f10 = local_1b20._16_8_;
  uStack_f08 = local_1b20._24_8_;
  local_21a0._0_8_ = auVar149._0_8_;
  local_21a0._8_8_ = auVar149._8_8_;
  dStack_2190 = auVar149._16_8_;
  dStack_2188 = auVar149._24_8_;
  local_f40 = local_21a0._0_8_;
  uStack_f38 = local_21a0._8_8_;
  uStack_f30 = dStack_2190;
  uStack_f28 = dStack_2188;
  local_2040[0xc] = auVar152._0_8_;
  local_2040[0xd] = auVar152._8_8_;
  local_2040[0xe] = auVar152._16_8_;
  local_2040[0xf] = auVar152._24_8_;
  local_ee0 = local_2040[0xc];
  uStack_ed8 = local_2040[0xd];
  uStack_ed0 = local_2040[0xe];
  uStack_ec8 = local_2040[0xf];
  local_2040[0x10] = auVar151._0_8_;
  local_2040[0x11] = auVar151._8_8_;
  local_2040[0x12] = auVar151._16_8_;
  local_2040[0x13] = auVar151._24_8_;
  local_f00 = local_2040[0x10];
  uStack_ef8 = local_2040[0x11];
  uStack_ef0 = local_2040[0x12];
  uStack_ee8 = local_2040[0x13];
  local_2040[8] = auVar153._0_8_;
  local_2040[9] = auVar153._8_8_;
  local_2040[10] = auVar153._16_8_;
  local_2040[0xb] = auVar153._24_8_;
  local_ec0 = local_2040[8];
  uStack_eb8 = local_2040[9];
  uStack_eb0 = local_2040[10];
  uStack_ea8 = local_2040[0xb];
  auVar135 = vpmovsxwd_avx2(auVar41);
  dVar1 = param_4[8];
  dVar31 = *param_4;
  lVar30 = 0xc0;
  dVar32 = param_4[0xc];
  dVar33 = param_4[1];
  dVar34 = param_4[5];
  dVar35 = param_4[9];
  dVar63 = param_4[0xd];
  dVar64 = param_4[2];
  dVar65 = param_4[6];
  dVar66 = param_4[10];
  dVar67 = param_4[0xe];
  dVar69 = param_4[3];
  dVar70 = param_4[7];
  dVar71 = param_4[0xb];
  dVar72 = param_4[0xf];
  do {
    dVar75 = *(double *)(local_11c8 + lVar30 + 8);
    dVar76 = *(double *)(local_11b0 + lVar30 + -8);
    dVar77 = *(double *)(local_11b0 + lVar30);
    dVar78 = *(double *)(local_11b0 + lVar30 + 8);
    dVar79 = *(double *)(local_1198 + lVar30 + -8);
    dVar81 = *(double *)(local_1198 + lVar30);
    dVar82 = *(double *)(local_1190 + lVar30);
    dVar83 = *(double *)(local_1190 + lVar30 + 8);
    dVar114 = *(double *)(local_1178 + lVar30 + -8);
    dVar115 = *(double *)(local_1178 + lVar30);
    dVar116 = *(double *)(local_1178 + lVar30 + 8);
    dVar117 = *(double *)(local_1160 + lVar30 + -8);
    dVar118 = *(double *)(local_1160 + lVar30);
    dVar119 = *(double *)(local_1158 + lVar30);
    dVar120 = *(double *)(local_1158 + lVar30 + 8);
    dVar121 = *(double *)(local_1140 + lVar30 + -8);
    dVar122 = *(double *)(local_1140 + lVar30);
    dVar123 = *(double *)(local_1140 + lVar30 + 8);
    dVar130 = *(double *)(local_1128 + lVar30 + -8);
    dVar131 = *(double *)(local_1128 + lVar30);
    dVar132 = *(double *)(local_1120 + lVar30);
    dVar133 = *(double *)(local_1120 + lVar30 + 8);
    dVar144 = *(double *)(local_1120 + lVar30 + 0x10);
    dVar145 = *(double *)(local_1120 + lVar30 + 0x18);
    dVar146 = *(double *)((longlong)adStack_10f0 + lVar30 + 0x10);
    dVar163 = *(double *)((longlong)adStack_10f0 + lVar30 + 0x18);
    dVar174 = *(double *)((longlong)adStack_10f0 + lVar30 + 0x20);
    dVar175 = *(double *)((longlong)adStack_10f0 + lVar30 + 0x28);
    dVar73 = param_4[4];
    *(double *)((longlong)local_2040 + lVar30 + 0x20) =
         dVar146 * dVar32 + dVar132 * dVar1 + dVar118 * dVar73 + dVar79 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x28) =
         dVar163 * dVar32 + dVar133 * dVar1 + dVar119 * dVar73 + dVar81 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x30) =
         dVar174 * dVar32 + dVar144 * dVar1 + dVar120 * dVar73 + dVar82 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x38) =
         dVar175 * dVar32 + dVar145 * dVar1 + dVar121 * dVar73 + dVar83 * dVar31 + 0.0;
    dVar176 = *(double *)(local_1100 + lVar30);
    dVar220 = *(double *)(local_1100 + lVar30 + 8);
    dVar224 = *(double *)(local_1100 + lVar30 + 0x10);
    dVar225 = *(double *)(local_1100 + lVar30 + 0x18);
    *(double *)((longlong)local_2040 + lVar30) =
         dVar176 * dVar32 + dVar122 * dVar1 + dVar114 * dVar73 + dVar75 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 8) =
         dVar220 * dVar32 + dVar123 * dVar1 + dVar115 * dVar73 + dVar76 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x10) =
         dVar224 * dVar32 + dVar130 * dVar1 + dVar116 * dVar73 + dVar77 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x18) =
         dVar225 * dVar32 + dVar131 * dVar1 + dVar117 * dVar73 + dVar78 * dVar31 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x60) =
         dVar146 * dVar63 + dVar132 * dVar35 + dVar118 * dVar34 + dVar79 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x68) =
         dVar163 * dVar63 + dVar133 * dVar35 + dVar119 * dVar34 + dVar81 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x70) =
         dVar174 * dVar63 + dVar144 * dVar35 + dVar120 * dVar34 + dVar82 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x78) =
         dVar175 * dVar63 + dVar145 * dVar35 + dVar121 * dVar34 + dVar83 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x40) =
         dVar176 * dVar63 + dVar122 * dVar35 + dVar114 * dVar34 + dVar75 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x48) =
         dVar220 * dVar63 + dVar123 * dVar35 + dVar115 * dVar34 + dVar76 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x50) =
         dVar224 * dVar63 + dVar130 * dVar35 + dVar116 * dVar34 + dVar77 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x58) =
         dVar225 * dVar63 + dVar131 * dVar35 + dVar117 * dVar34 + dVar78 * dVar33 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0xa0) =
         dVar146 * dVar67 + dVar132 * dVar66 + dVar118 * dVar65 + dVar79 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0xa8) =
         dVar163 * dVar67 + dVar133 * dVar66 + dVar119 * dVar65 + dVar81 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0xb0) =
         dVar174 * dVar67 + dVar144 * dVar66 + dVar120 * dVar65 + dVar82 * dVar64 + 0.0;
    *(double *)(local_1f80 + lVar30 + -8) =
         dVar175 * dVar67 + dVar145 * dVar66 + dVar121 * dVar65 + dVar83 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x80) =
         dVar176 * dVar67 + dVar122 * dVar66 + dVar114 * dVar65 + dVar75 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x88) =
         dVar220 * dVar67 + dVar123 * dVar66 + dVar115 * dVar65 + dVar76 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x90) =
         dVar224 * dVar67 + dVar130 * dVar66 + dVar116 * dVar65 + dVar77 * dVar64 + 0.0;
    *(double *)((longlong)local_2040 + lVar30 + 0x98) =
         dVar225 * dVar67 + dVar131 * dVar66 + dVar117 * dVar65 + dVar78 * dVar64 + 0.0;
    *(double *)(local_1f60 + lVar30) =
         dVar72 * dVar146 + dVar71 * dVar132 + dVar70 * dVar118 + dVar69 * dVar79 + 0.0;
    *(double *)(local_1f60 + lVar30 + 8) =
         dVar72 * dVar163 + dVar71 * dVar133 + dVar70 * dVar119 + dVar69 * dVar81 + 0.0;
    *(double *)(local_1f60 + lVar30 + 0x10) =
         dVar72 * dVar174 + dVar71 * dVar144 + dVar70 * dVar120 + dVar69 * dVar82 + 0.0;
    *(double *)(local_1f60 + lVar30 + 0x18) =
         dVar72 * dVar175 + dVar71 * dVar145 + dVar70 * dVar121 + dVar69 * dVar83 + 0.0;
    *(double *)(local_1f80 + lVar30) =
         dVar72 * dVar176 + dVar71 * dVar122 + dVar70 * dVar114 + dVar69 * dVar75 + 0.0;
    *(double *)(local_1f80 + lVar30 + 8) =
         dVar72 * dVar220 + dVar71 * dVar123 + dVar70 * dVar115 + dVar69 * dVar76 + 0.0;
    *(double *)(local_1f80 + lVar30 + 0x10) =
         dVar72 * dVar224 + dVar71 * dVar130 + dVar70 * dVar116 + dVar69 * dVar77 + 0.0;
    *(double *)(local_1f80 + lVar30 + 0x18) =
         dVar72 * dVar225 + dVar71 * dVar131 + dVar70 * dVar117 + dVar69 * dVar78 + 0.0;
    lVar30 = lVar30 + 0x100;
  } while (lVar30 != 0x4c0);
  local_2060 = auVar184._0_8_;
  uStack_2058 = auVar184._8_8_;
  uStack_2050 = auVar184._16_8_;
  uStack_2048 = auVar184._24_8_;
  local_2040[0x14] = auVar186._0_8_;
  local_2040[0x15] = auVar186._8_8_;
  local_2040[0x16] = auVar186._16_8_;
  local_2040[0x17] = auVar186._24_8_;
  local_2040[0] = auVar185._0_8_;
  local_2040[1] = auVar185._8_8_;
  local_2040[2] = auVar185._16_8_;
  local_2040[3] = auVar185._24_8_;
  dVar31 = __real_3fe0000000000000 * (local_2060 + local_2040[0x14]);
  dVar63 = __real_3fe0000000000000 * (uStack_2058 + local_2040[0x15]);
  dVar69 = __real_3fe0000000000000 * (uStack_2050 + local_2040[0x16]);
  dVar75 = __real_3fe0000000000000 * (uStack_2048 + local_2040[0x17]);
  dVar115 = __real_3fe0000000000000 * (local_2040[0] + (double)local_1ac0._0_8_);
  dVar116 = __real_3fe0000000000000 * (local_2040[1] + (double)local_1ac0._8_8_);
  dVar117 = __real_3fe0000000000000 * (local_2040[2] + dStack_1ab0);
  dVar118 = __real_3fe0000000000000 * (local_2040[3] + dStack_1aa8);
  dVar32 = __real_3fe0000000000000 * (local_1aa0._0_8_ + local_19e0._0_8_);
  dVar64 = __real_3fe0000000000000 * (local_1aa0._8_8_ + local_19e0._8_8_);
  dVar70 = __real_3fe0000000000000 * (local_1aa0._16_8_ + local_19e0._16_8_);
  dVar76 = __real_3fe0000000000000 * (local_1aa0._24_8_ + local_19e0._24_8_);
  dVar119 = __real_3fe0000000000000 * (local_1ae0._0_8_ + local_1a00._0_8_);
  dVar121 = __real_3fe0000000000000 * (local_1ae0._8_8_ + local_1a00._8_8_);
  dVar123 = __real_3fe0000000000000 * (local_1ae0._16_8_ + local_1a00._16_8_);
  dVar131 = __real_3fe0000000000000 * (local_1ae0._24_8_ + local_1a00._24_8_);
  dVar1 = (double)CONCAT17(uStack_1df9,
                           CONCAT16(uStack_1dfa,
                                    CONCAT15(uStack_1dfb,
                                             CONCAT14(uStack_1dfc,
                                                      CONCAT13(uStack_1dfd,
                                                               CONCAT12(uStack_1dfe,
                                                                        CONCAT11(uStack_1dff,
                                                                                 local_1e00)))))));
  dVar33 = __real_3fe0000000000000 * (local_19a0._0_8_ + local_1a20._0_8_);
  dVar65 = __real_3fe0000000000000 * (local_19a0._8_8_ + local_1a20._8_8_);
  dVar71 = __real_3fe0000000000000 * (local_19a0._16_8_ + local_1a20._16_8_);
  dVar77 = __real_3fe0000000000000 * (local_19a0._24_8_ + local_1a20._24_8_);
  dVar34 = __real_3fe0000000000000 * (local_19c0._0_8_ + local_1a40._0_8_);
  dVar66 = __real_3fe0000000000000 * (local_19c0._8_8_ + local_1a40._8_8_);
  dVar72 = __real_3fe0000000000000 * (local_19c0._16_8_ + local_1a40._16_8_);
  dVar78 = __real_3fe0000000000000 * (local_19c0._24_8_ + local_1a40._24_8_);
  auVar17 = vsubpd_avx(local_19e0,_local_1aa0);
  auVar47 = vsubpd_avx(auVar186,auVar184);
  auVar136 = vsubpd_avx(local_1a00,local_1ae0);
  auVar148 = vsubpd_avx(_local_1ac0,auVar185);
  auVar149 = vsubpd_avx(local_1a40,local_19c0);
  auVar150 = vsubpd_avx(local_1a20,local_19a0);
  dVar35 = __real_3fe0000000000000 * auVar47._0_8_;
  dVar67 = __real_3fe0000000000000 * auVar47._8_8_;
  dVar73 = __real_3fe0000000000000 * auVar47._16_8_;
  dVar79 = __real_3fe0000000000000 * auVar47._24_8_;
  dVar120 = auVar17._0_8_ * __real_3fe0000000000000;
  dVar122 = auVar17._8_8_ * __real_3fe0000000000000;
  dVar130 = auVar17._16_8_ * __real_3fe0000000000000;
  dVar132 = auVar17._24_8_ * __real_3fe0000000000000;
  dVar81 = __real_3fe0000000000000 * auVar148._0_8_;
  dVar82 = __real_3fe0000000000000 * auVar148._8_8_;
  dVar83 = __real_3fe0000000000000 * auVar148._16_8_;
  dVar114 = __real_3fe0000000000000 * auVar148._24_8_;
  dVar133 = __real_3fe0000000000000 * auVar136._0_8_;
  dVar144 = __real_3fe0000000000000 * auVar136._8_8_;
  dVar145 = __real_3fe0000000000000 * auVar136._16_8_;
  dVar146 = __real_3fe0000000000000 * auVar136._24_8_;
  dVar163 = __real_3fe0000000000000 * auVar150._0_8_;
  dVar174 = __real_3fe0000000000000 * auVar150._8_8_;
  dVar175 = __real_3fe0000000000000 * auVar150._16_8_;
  dVar176 = __real_3fe0000000000000 * auVar150._24_8_;
  dVar220 = __real_3fe0000000000000 * auVar149._0_8_;
  dVar224 = __real_3fe0000000000000 * auVar149._8_8_;
  dVar225 = __real_3fe0000000000000 * auVar149._16_8_;
  dVar226 = __real_3fe0000000000000 * auVar149._24_8_;
  auVar128._0_8_ =
       dVar34 * local_1d60 + dVar31 * (double)local_1f60 + dVar115 * (double)local_1e60._0_8_ +
       local_1c60;
  auVar128._8_8_ =
       dVar66 * dStack_1d58 + dVar63 * adStack_1f58[0] + dVar116 * (double)local_1e60._8_8_ +
       dStack_1c58;
  auVar128._16_8_ =
       dVar72 * dStack_1d50 + dVar69 * adStack_1f58[1] + dVar117 * dStack_1e50 + dStack_1c50;
  auVar128._24_8_ =
       dVar78 * dStack_1d48 + dVar75 * adStack_1f58[2] + dVar118 * dStack_1e48 + dStack_1c48;
  auVar191._0_8_ =
       dVar33 * local_1d80 + dVar32 * (double)local_1f80 + dVar119 * (double)local_1e80._0_8_ +
       local_1c80;
  auVar191._8_8_ =
       dVar65 * dStack_1d78 + dVar64 * adStack_1f78[0] + dVar121 * (double)local_1e80._8_8_ +
       dStack_1c78;
  auVar191._16_8_ =
       dVar71 * dStack_1d70 + dVar70 * adStack_1f78[1] + dVar123 * dStack_1e70 + dStack_1c70;
  auVar191._24_8_ =
       dVar77 * dStack_1d68 + dVar76 * adStack_1f78[2] + dVar131 * dStack_1e68 + dStack_1c68;
  auVar228._0_8_ =
       dVar34 * local_1d20 + dVar31 * (double)local_1f20._0_8_ + dVar115 * (double)local_1e20._0_8_
       + local_1c20;
  auVar228._8_8_ =
       dVar66 * dStack_1d18 + dVar63 * (double)local_1f20._8_8_ + dVar116 * (double)local_1e20._8_8_
       + dStack_1c18;
  auVar228._16_8_ =
       dVar72 * dStack_1d10 + dVar69 * dStack_1f10 + dVar117 * dStack_1e10 + dStack_1c10;
  auVar228._24_8_ =
       dVar78 * dStack_1d08 + dVar75 * dStack_1f08 + dVar118 * dStack_1e08 + dStack_1c08;
  auVar203._0_8_ =
       dVar33 * local_1d40 + dVar32 * (double)local_1f40._0_8_ + dVar119 * (double)local_1e40._0_8_
       + local_1c40;
  auVar203._8_8_ =
       dVar65 * dStack_1d38 + dVar64 * (double)local_1f40._8_8_ + dVar121 * (double)local_1e40._8_8_
       + dStack_1c38;
  auVar203._16_8_ =
       dVar71 * dStack_1d30 + dVar70 * dStack_1f30 + dVar123 * dStack_1e30 + dStack_1c30;
  auVar203._24_8_ =
       dVar77 * dStack_1d28 + dVar76 * dStack_1f28 + dVar131 * dStack_1e28 + dStack_1c28;
  auVar48._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f80)) +
       (double)((ulonglong)(dVar133 * (double)local_1e80._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar163 * local_1d80) & __real_7fffffffffffffff);
  auVar48._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * adStack_1f78[0])) +
       (double)((ulonglong)(dVar144 * (double)local_1e80._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar174 * dStack_1d78) & __real_7fffffffffffffff);
  auVar48._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar130 * adStack_1f78[1])) +
       (double)((ulonglong)(dVar145 * dStack_1e70) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar175 * dStack_1d70) & __real_7fffffffffffffff);
  auVar48._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar132 * adStack_1f78[2])) +
       (double)((ulonglong)(dVar146 * dStack_1e68) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar176 * dStack_1d68) & __real_7fffffffffffffff);
  auVar159._0_8_ =
       local_1ce0 * dVar34 + (double)local_1ee0._0_8_ * dVar31 + dVar115 * local_1de0 + local_1be0;
  auVar159._8_8_ =
       dStack_1cd8 * dVar66 + (double)local_1ee0._8_8_ * dVar63 + dVar116 * dStack_1dd8 +
       dStack_1bd8;
  auVar159._16_8_ =
       dStack_1cd0 * dVar72 + dStack_1ed0 * dVar69 + dVar117 * dStack_1dd0 + dStack_1bd0;
  auVar159._24_8_ =
       dStack_1cc8 * dVar78 + dStack_1ec8 * dVar75 + dVar118 * dStack_1dc8 + dStack_1bc8;
  auVar216._0_8_ =
       (double)((ulonglong)(dVar220 * local_1d60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar35 * (double)local_1f60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar81 * (double)local_1e60._0_8_) & __real_7fffffffffffffff);
  auVar216._8_8_ =
       (double)((ulonglong)(dVar224 * dStack_1d58) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar67 * adStack_1f58[0]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar82 * (double)local_1e60._8_8_) & __real_7fffffffffffffff);
  auVar216._16_8_ =
       (double)((ulonglong)(dVar225 * dStack_1d50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar73 * adStack_1f58[1]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar83 * dStack_1e50) & __real_7fffffffffffffff);
  auVar216._24_8_ =
       (double)((ulonglong)(dVar226 * dStack_1d48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar79 * adStack_1f58[2]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar114 * dStack_1e48) & __real_7fffffffffffffff);
  auVar209._0_8_ =
       local_1d00 * dVar33 + (double)local_1f00._0_8_ * dVar32 + dVar119 * dVar1 + local_1c00;
  auVar209._8_8_ =
       dStack_1cf8 * dVar65 + (double)local_1f00._8_8_ * dVar64 + dVar121 * dStack_1df8 +
       dStack_1bf8;
  auVar209._16_8_ =
       dStack_1cf0 * dVar71 + dStack_1ef0 * dVar70 + dVar123 * dStack_1df0 + dStack_1bf0;
  auVar209._24_8_ =
       dStack_1ce8 * dVar77 + dStack_1ee8 * dVar76 + dVar131 * dStack_1de8 + dStack_1be8;
  auVar109._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar120 * (double)local_1f40._0_8_)) +
       (double)((ulonglong)(dVar133 * (double)local_1e40._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar163 * local_1d40) & __real_7fffffffffffffff);
  auVar109._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar122 * (double)local_1f40._8_8_)) +
       (double)((ulonglong)(dVar144 * (double)local_1e40._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar174 * dStack_1d38) & __real_7fffffffffffffff);
  auVar109._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar130 * dStack_1f30)) +
       (double)((ulonglong)(dVar145 * dStack_1e30) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar175 * dStack_1d30) & __real_7fffffffffffffff);
  auVar109._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar132 * dStack_1f28)) +
       (double)((ulonglong)(dVar146 * dStack_1e28) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar176 * dStack_1d28) & __real_7fffffffffffffff);
  auVar236._0_8_ =
       (double)((ulonglong)(dVar220 * local_1d20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar35 * (double)local_1f20._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar81 * (double)local_1e20._0_8_) & __real_7fffffffffffffff);
  auVar236._8_8_ =
       (double)((ulonglong)(dVar224 * dStack_1d18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar67 * (double)local_1f20._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar82 * (double)local_1e20._8_8_) & __real_7fffffffffffffff);
  auVar236._16_8_ =
       (double)((ulonglong)(dVar225 * dStack_1d10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar73 * dStack_1f10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar83 * dStack_1e10) & __real_7fffffffffffffff);
  auVar236._24_8_ =
       (double)((ulonglong)(dVar226 * dStack_1d08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar79 * dStack_1f08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar114 * dStack_1e08) & __real_7fffffffffffffff);
  auVar173._0_8_ =
       (double)((ulonglong)(dVar120 * (double)local_1f00._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar133 * dVar1) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar163 * local_1d00) & __real_7fffffffffffffff);
  auVar173._8_8_ =
       (double)((ulonglong)(dVar122 * (double)local_1f00._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar144 * dStack_1df8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar174 * dStack_1cf8) & __real_7fffffffffffffff);
  auVar173._16_8_ =
       (double)((ulonglong)(dVar130 * dStack_1ef0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar145 * dStack_1df0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar175 * dStack_1cf0) & __real_7fffffffffffffff);
  auVar173._24_8_ =
       (double)((ulonglong)(dVar132 * dStack_1ee8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar146 * dStack_1de8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar176 * dStack_1ce8) & __real_7fffffffffffffff);
  auVar222._0_8_ =
       (double)((ulonglong)(dVar220 * local_1ce0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar35 * (double)local_1ee0._0_8_)) +
       (double)((ulonglong)(dVar81 * local_1de0) & __real_7fffffffffffffff);
  auVar222._8_8_ =
       (double)((ulonglong)(dVar224 * dStack_1cd8) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar67 * (double)local_1ee0._8_8_)) +
       (double)((ulonglong)(dVar82 * dStack_1dd8) & __real_7fffffffffffffff);
  auVar222._16_8_ =
       (double)((ulonglong)(dVar225 * dStack_1cd0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar73 * dStack_1ed0)) +
       (double)((ulonglong)(dVar83 * dStack_1dd0) & __real_7fffffffffffffff);
  auVar222._24_8_ =
       (double)((ulonglong)(dVar226 * dStack_1cc8) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar79 * dStack_1ec8)) +
       (double)((ulonglong)(dVar114 * dStack_1dc8) & __real_7fffffffffffffff);
  auVar17 = vsubpd_avx(auVar191,auVar48);
  auVar47 = vsubpd_avx(auVar128,auVar216);
  auVar136 = vsubpd_avx(auVar203,auVar109);
  auVar148 = vsubpd_avx(auVar228,auVar236);
  local_21e0._8_8_ = auVar48._8_8_ + auVar191._8_8_;
  local_21e0._0_8_ = auVar48._0_8_ + auVar191._0_8_;
  dStack_21d0 = auVar48._16_8_ + auVar191._16_8_;
  dStack_21c8 = auVar48._24_8_ + auVar191._24_8_;
  auVar149 = vsubpd_avx(auVar209,auVar173);
  local_2180._8_8_ = auVar216._8_8_ + auVar128._8_8_;
  local_2180._0_8_ = auVar216._0_8_ + auVar128._0_8_;
  dStack_2170 = auVar216._16_8_ + auVar128._16_8_;
  dStack_2168 = auVar216._24_8_ + auVar128._24_8_;
  auVar150 = vsubpd_avx(auVar159,auVar222);
  auVar192._0_8_ = auVar203._0_8_ + auVar109._0_8_;
  auVar192._8_8_ = auVar203._8_8_ + auVar109._8_8_;
  auVar192._16_8_ = auVar203._16_8_ + auVar109._16_8_;
  auVar192._24_8_ = auVar203._24_8_ + auVar109._24_8_;
  local_2200._8_8_ = auVar236._8_8_ + auVar228._8_8_;
  local_2200._0_8_ = auVar236._0_8_ + auVar228._0_8_;
  dStack_21f0 = auVar236._16_8_ + auVar228._16_8_;
  dStack_21e8 = auVar236._24_8_ + auVar228._24_8_;
  auVar237._0_8_ = auVar209._0_8_ + auVar173._0_8_;
  auVar237._8_8_ = auVar209._8_8_ + auVar173._8_8_;
  auVar237._16_8_ = auVar209._16_8_ + auVar173._16_8_;
  auVar237._24_8_ = auVar209._24_8_ + auVar173._24_8_;
  local_21a0._8_8_ = auVar222._8_8_ + auVar159._8_8_;
  local_21a0._0_8_ = auVar222._0_8_ + auVar159._0_8_;
  dStack_2190 = auVar222._16_8_ + auVar159._16_8_;
  dStack_2188 = auVar222._24_8_ + auVar159._24_8_;
  auVar38 = ZEXT816(0) << 0x40;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = local_1600;
  auVar41 = vpcmpeqb_avx(auVar125,auVar38);
  auVar38 = vpcmpeqd_avx(auVar38,auVar38);
  auVar152 = vpmovsxbd_avx2(auVar41 ^ auVar38);
  auVar151 = vpand_avx2(auVar135,auVar152);
  iVar25 = vmovmskps_avx(auVar151);
  if (iVar25 == 0) {
    auVar151 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a531ee:
    auVar38 = vpmovsxbw_avx(auVar41);
    auVar38 = vpand_avx(auVar38,local_1a80);
    auVar152 = vpmovsxwd_avx2(auVar38);
    local_1a60 = local_1a60 & auVar152;
    if ((((((((SUB321(local_1a60 >> 0x1f,0) & 1) != 0 || (SUB321(local_1a60 >> 0x3f,0) & 1) != 0) ||
            (SUB321(local_1a60 >> 0x5f,0) & 1) != 0) || SUB321(local_1a60 >> 0x7f,0) != '\0') ||
          (SUB321(local_1a60 >> 0x9f,0) & 1) != 0) || SUB321(local_1a60 >> 0xbf,0) != '\0') ||
        (SUB321(local_1a60 >> 0xdf,0) & 1) != 0) || local_1a60[0x1f] < '\0') {
      auVar41 = vpmovzxbw_avx(auVar41);
      auVar152 = vpmovzxwd_avx2(auVar41);
      auVar152 = vpslld_avx2(auVar152,0x1f);
      auVar153 = vpsrad_avx2(auVar152,0x1f);
      auVar152 = auVar135 & auVar153;
      if ((((((((SUB321(auVar152 >> 0x1f,0) & 1) != 0 || (SUB321(auVar152 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar152 >> 0x5f,0) & 1) != 0) || SUB321(auVar152 >> 0x7f,0) != '\0') ||
            (SUB321(auVar152 >> 0x9f,0) & 1) != 0) || SUB321(auVar152 >> 0xbf,0) != '\0') ||
          (SUB321(auVar152 >> 0xdf,0) & 1) != 0) || auVar152[0x1f] < '\0') {
        auVar154 = vpermpd_avx2(auVar153,0xd8);
        auVar152 = vshufps_avx(auVar154,auVar154,0x50);
        auVar154 = vshufps_avx(auVar154,auVar154,0xfa);
        _local_1f80 = vmaskmovpd_avx(auVar152,auVar17);
        _local_1f60 = vmaskmovpd_avx(auVar154,auVar47);
        _local_1f40 = vmaskmovpd_avx(auVar152,auVar136);
        _local_1f20 = vmaskmovpd_avx(auVar154,auVar148);
        _local_1f00 = vmaskmovpd_avx(auVar152,auVar149);
        _local_1ee0 = vmaskmovpd_avx(auVar154,auVar150);
        local_1ec0 = vmaskmovpd_avx(auVar152,_local_21e0);
        local_1ea0 = vmaskmovpd_avx(auVar154,_local_2180);
        _local_1e80 = vmaskmovpd_avx(auVar152,auVar192);
        _local_1e60 = vmaskmovpd_avx(auVar154,_local_2200);
        _local_1e40 = vmaskmovpd_avx(auVar152,auVar237);
        _local_1e20 = vmaskmovpd_avx(auVar154,_local_21a0);
        auVar41 = vpsllw_avx(auVar41,0xf);
        auVar41 = vpacksswb_avx(auVar41,auVar41);
        bVar26 = SUB161(auVar41 >> 0xf,0) & 1;
        bVar3 = SUB161(auVar41 >> 0x17,0) & 1;
        bVar4 = SUB161(auVar41 >> 0x1f,0) & 1;
        bVar5 = SUB161(auVar41 >> 0x27,0) & 1;
        bVar6 = SUB161(auVar41 >> 0x2f,0) & 1;
        bVar7 = SUB161(auVar41 >> 0x37,0) & 1;
        if ((SUB161(auVar41 >> 7,0) & 1) == 0) {
          if (bVar26 != 0) goto LAB_140a5467f;
LAB_140a532f7:
          if (bVar3 != 0) goto LAB_140a54690;
LAB_140a53300:
          if (bVar4 != 0) goto LAB_140a546a1;
LAB_140a53309:
          if (bVar5 != 0) goto LAB_140a546b2;
LAB_140a53312:
          if (bVar6 != 0) goto LAB_140a546c3;
LAB_140a5331b:
          if (bVar7 != 0) goto LAB_140a546d4;
LAB_140a53324:
          auVar111._0_4_ = auVar135._0_4_ & auVar153._0_4_;
          auVar111._4_4_ = auVar135._4_4_ & auVar153._4_4_;
          auVar111._8_4_ = auVar135._8_4_ & auVar153._8_4_;
          auVar111._12_4_ = auVar135._12_4_ & auVar153._12_4_;
          auVar111._16_4_ = auVar135._16_4_ & auVar153._16_4_;
          auVar111._20_4_ = auVar135._20_4_ & auVar153._20_4_;
          auVar111._24_4_ = auVar135._24_4_ & auVar153._24_4_;
          auVar111._28_4_ = auVar135._28_4_ & auVar153._28_4_;
        }
        else {
          local_1e00 = 1;
          if (bVar26 == 0) goto LAB_140a532f7;
LAB_140a5467f:
          uStack_1dff = 1;
          if (bVar3 == 0) goto LAB_140a53300;
LAB_140a54690:
          uStack_1dfe = 1;
          if (bVar4 == 0) goto LAB_140a53309;
LAB_140a546a1:
          uStack_1dfd = 1;
          if (bVar5 == 0) goto LAB_140a53312;
LAB_140a546b2:
          uStack_1dfc = 1;
          if (bVar6 == 0) goto LAB_140a5331b;
LAB_140a546c3:
          uStack_1dfb = 1;
          if (bVar7 == 0) goto LAB_140a53324;
LAB_140a546d4:
          uStack_1dfa = 1;
          auVar111._0_4_ = auVar135._0_4_ & auVar153._0_4_;
          auVar111._4_4_ = auVar135._4_4_ & auVar153._4_4_;
          auVar111._8_4_ = auVar135._8_4_ & auVar153._8_4_;
          auVar111._12_4_ = auVar135._12_4_ & auVar153._12_4_;
          auVar111._16_4_ = auVar135._16_4_ & auVar153._16_4_;
          auVar111._20_4_ = auVar135._20_4_ & auVar153._20_4_;
          auVar111._24_4_ = auVar135._24_4_ & auVar153._24_4_;
          auVar111._28_4_ = auVar135._28_4_ & auVar153._28_4_;
        }
        if ((SUB161(auVar41 >> 0x3f,0) & 1) != 0) {
          uStack_1df9 = 1;
        }
        vmovmskps_avx(auVar151 | auVar111);
      }
    }
  }
  else {
    auVar153 = vminpd_avx(local_1780,auVar17);
    auVar155 = vpermq_avx2(auVar152,0xd8);
    auVar154 = vpshufd_avx2(auVar155,0x50);
    _local_1f80 = vmaskmovpd_avx(auVar154,auVar153);
    auVar152 = vminpd_avx(local_1760,auVar47);
    auVar153 = vpshufd_avx2(auVar155,0xfa);
    _local_1f60 = vmaskmovpd_avx(auVar153,auVar152);
    auVar152 = vminpd_avx(local_1740,auVar136);
    _local_1f40 = vmaskmovpd_avx(auVar154,auVar152);
    auVar152 = vminpd_avx(local_1720,auVar148);
    _local_1f20 = vmaskmovpd_avx(auVar153,auVar152);
    auVar152 = vminpd_avx(local_1700,auVar149);
    _local_1f00 = vmaskmovpd_avx(auVar154,auVar152);
    auVar152 = vminpd_avx(local_16e0,auVar150);
    _local_1ee0 = vmaskmovpd_avx(auVar153,auVar152);
    auVar152 = vmaxpd_avx(local_16c0,_local_21e0);
    local_1ec0 = vmaskmovpd_avx(auVar154,auVar152);
    auVar152 = vmaxpd_avx(local_16a0,_local_2180);
    local_1ea0 = vmaskmovpd_avx(auVar153,auVar152);
    auVar152 = vmaxpd_avx(local_1680,auVar192);
    _local_1e80 = vmaskmovpd_avx(auVar154,auVar152);
    auVar152 = vmaxpd_avx(local_1660,_local_2200);
    _local_1e60 = vmaskmovpd_avx(auVar153,auVar152);
    auVar152 = vmaxpd_avx(local_1640,auVar237);
    _local_1e40 = vmaskmovpd_avx(auVar154,auVar152);
    auVar152 = vmaxpd_avx(local_1620,_local_21a0);
    _local_1e20 = vmaskmovpd_avx(auVar153,auVar152);
    auVar39._8_8_ = local_1600;
    auVar39._0_8_ = local_1600;
    auVar38 = vpcmpeqb_avx(auVar39,___xmm_00000000000000000000000000000000);
    bVar26 = ~(SUB161(auVar38 >> 7,0) & 1 | (SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar38 >> 0x17,0) & 1) << 2 | (SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar38 >> 0x27,0) & 1) << 4 | (SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar38 >> 0x37,0) & 1) << 6);
    if ((bVar26 & 1) != 0) {
      local_1e00 = (undefined1)local_1600;
    }
    if ((bVar26 & 2) != 0) {
      uStack_1dff = (undefined1)(local_1600 >> 8);
    }
    if ((bVar26 & 4) != 0) {
      uStack_1dfe = (undefined1)(local_1600 >> 0x10);
    }
    if ((bVar26 & 8) != 0) {
      uStack_1dfd = (undefined1)(local_1600 >> 0x18);
    }
    if ((bVar26 & 0x10) != 0) {
      uStack_1dfc = (undefined1)(local_1600 >> 0x20);
    }
    if ((bVar26 & 0x20) != 0) {
      uStack_1dfb = (undefined1)(local_1600 >> 0x28);
    }
    if ((bVar26 & 0x40) != 0) {
      uStack_1dfa = (undefined1)(local_1600 >> 0x30);
    }
    if ((SUB161(auVar38 >> 0x3f,0) & 1) == 0) {
      uStack_1df9 = (undefined1)(local_1600 >> 0x38);
    }
    if ((char)uVar28 != (char)iVar25) goto LAB_140a531ee;
  }
  auVar17 = vpermpd_avx2(auVar135,0xd8);
  auVar135 = vshufps_avx(auVar17,auVar17,0x50);
  auVar17 = vshufps_avx(auVar17,auVar17,0xfa);
  local_1780 = vmaskmovpd_avx(auVar135,_local_1f80);
  local_1760 = vmaskmovpd_avx(auVar17,_local_1f60);
  local_1740 = vmaskmovpd_avx(auVar135,_local_1f40);
  local_1720 = vmaskmovpd_avx(auVar17,_local_1f20);
  local_1700 = vmaskmovpd_avx(auVar135,_local_1f00);
  local_16e0 = vmaskmovpd_avx(auVar17,_local_1ee0);
  local_16c0 = vmaskmovpd_avx(auVar135,local_1ec0);
  local_16a0 = vmaskmovpd_avx(auVar17,local_1ea0);
  local_1680 = vmaskmovpd_avx(auVar135,_local_1e80);
  local_1660 = vmaskmovpd_avx(auVar17,_local_1e60);
  local_1640 = vmaskmovpd_avx(auVar135,_local_1e40);
  local_1620 = vmaskmovpd_avx(auVar17,_local_1e20);
  uVar24 = local_1600;
  if ((uVar28 & 1) != 0) {
    local_1600 = CONCAT71(local_1600._1_7_,local_1e00);
    uVar24 = local_1600;
  }
  if ((uVar28 & 2) != 0) {
    local_1600._2_6_ = (undefined6)(uVar24 >> 0x10);
    local_1600._0_1_ = (char)uVar24;
    local_1600._0_2_ = CONCAT11(uStack_1dff,(char)local_1600);
    uVar24 = local_1600;
  }
  if ((uVar28 & 4) != 0) {
    local_1600._3_5_ = (undefined5)(uVar24 >> 0x18);
    local_1600._0_2_ = (undefined2)uVar24;
    local_1600._0_3_ = CONCAT12(uStack_1dfe,(undefined2)local_1600);
    uVar24 = local_1600;
  }
  if ((uVar28 & 8) != 0) {
    local_1600._4_4_ = (undefined4)(uVar24 >> 0x20);
    local_1600._0_3_ = (undefined3)uVar24;
    local_1600._0_4_ = CONCAT13(uStack_1dfd,(undefined3)local_1600);
    uVar24 = local_1600;
  }
  if ((uVar28 & 0x10) != 0) {
    local_1600._5_3_ = (undefined3)(uVar24 >> 0x28);
    local_1600._0_4_ = (undefined4)uVar24;
    local_1600._0_5_ = CONCAT14(uStack_1dfc,(undefined4)local_1600);
    uVar24 = local_1600;
  }
  if ((uVar28 & 0x20) != 0) {
    local_1600._6_2_ = (undefined2)(uVar24 >> 0x30);
    local_1600._0_5_ = (undefined5)uVar24;
    local_1600._0_6_ = CONCAT15(uStack_1dfb,(undefined5)local_1600);
    uVar24 = local_1600;
  }
  local_1600 = uVar24;
  if ((uVar28 & 0x40) != 0) {
    local_1600._7_1_ = (undefined1)(uVar24 >> 0x38);
    local_1600._0_6_ = (undefined6)uVar24;
    local_1600._0_7_ = CONCAT16(uStack_1dfa,(undefined6)local_1600);
  }
  param_6 = local_17a0._0_4_;
  if ((char)uVar28 < '\0') {
    local_1600 = CONCAT17(uStack_1df9,(undefined7)local_1600);
  }
LAB_140a53488:
  uVar28 = vmovmskps_avx(_local_1120);
  cVar23 = (char)uVar28;
  if ((uVar28 & 1) != 0) {
    local_15a0 = vmovlps_avx(local_1780._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1568 = vmovhps_avx(local_1780._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1530 = vmovlps_avx(local_1780._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14f8 = vmovhps_avx(local_1780._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_14c0 = vmovlps_avx(local_1760._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1488 = vmovhps_avx(local_1760._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1450 = vmovlps_avx(local_1760._16_16_);
  }
  if (cVar23 < '\0') {
    local_1418 = vmovhps_avx(local_1760._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    auStack_1598[0] = vmovlps_avx(local_1740._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1560 = vmovhps_avx(local_1740._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1528 = vmovlps_avx(local_1740._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14f0 = vmovhps_avx(local_1740._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_14b8 = vmovlps_avx(local_1720._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1480 = vmovhps_avx(local_1720._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1448 = vmovlps_avx(local_1720._16_16_);
  }
  if (cVar23 < '\0') {
    local_1410 = vmovhps_avx(local_1720._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    auStack_1598[1] = vmovlps_avx(local_1700._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1558 = vmovhps_avx(local_1700._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1520 = vmovlps_avx(local_1700._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14e8 = vmovhps_avx(local_1700._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_14b0 = vmovlps_avx(local_16e0._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1478 = vmovhps_avx(local_16e0._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1440 = vmovlps_avx(local_16e0._16_16_);
  }
  if (cVar23 < '\0') {
    local_1408 = vmovhps_avx(local_16e0._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    local_1588[0] = vmovlps_avx(local_16c0._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1550 = vmovhps_avx(local_16c0._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1518 = vmovlps_avx(local_16c0._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14e0 = vmovhps_avx(local_16c0._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_14a8 = vmovlps_avx(local_16a0._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1470 = vmovhps_avx(local_16a0._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1438 = vmovlps_avx(local_16a0._16_16_);
  }
  if (cVar23 < '\0') {
    local_1400 = vmovhps_avx(local_16a0._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    local_1588[1] = vmovlps_avx(local_1680._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1548 = vmovhps_avx(local_1680._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1510 = vmovlps_avx(local_1680._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14d8 = vmovhps_avx(local_1680._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_14a0 = vmovlps_avx(local_1660._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1468 = vmovhps_avx(local_1660._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1430 = vmovlps_avx(local_1660._16_16_);
  }
  if (cVar23 < '\0') {
    local_13f8 = vmovhps_avx(local_1660._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    local_1578 = vmovlps_avx(local_1640._0_16_);
  }
  if ((uVar28 & 2) != 0) {
    local_1540 = vmovhps_avx(local_1640._0_16_);
  }
  if ((uVar28 & 4) != 0) {
    local_1508 = vmovlps_avx(local_1640._16_16_);
  }
  if ((uVar28 & 8) != 0) {
    local_14d0 = vmovhps_avx(local_1640._16_16_);
  }
  if ((uVar28 & 0x10) != 0) {
    local_1498 = vmovlps_avx(local_1620._0_16_);
  }
  if ((uVar28 & 0x20) != 0) {
    local_1460 = vmovhps_avx(local_1620._0_16_);
  }
  if ((uVar28 & 0x40) != 0) {
    local_1428 = vmovlps_avx(local_1620._16_16_);
  }
  if (cVar23 < '\0') {
    local_13f0 = vmovhps_avx(local_1620._16_16_);
  }
  if ((uVar28 & 1) != 0) {
    local_1570[0] = (char)local_1600;
  }
  if ((uVar28 & 2) != 0) {
    local_1538 = local_1600._1_1_;
  }
  if ((uVar28 & 4) != 0) {
    local_1500 = local_1600._2_1_;
  }
  if ((uVar28 & 8) != 0) {
    local_14c8 = local_1600._3_1_;
  }
  if ((uVar28 & 0x10) != 0) {
    local_1490 = local_1600._4_1_;
  }
  if ((uVar28 & 0x20) != 0) {
    local_1458 = local_1600._5_1_;
  }
  if ((uVar28 & 0x40) != 0) {
    local_1420 = local_1600._6_1_;
  }
  if (cVar23 < '\0') {
    local_13e8 = local_1600._7_1_;
  }
  auVar59._4_4_ = param_6;
  auVar59._0_4_ = param_6;
  auVar59._8_4_ = param_6;
  auVar59._12_4_ = param_6;
  auVar59._16_4_ = param_6;
  auVar59._20_4_ = param_6;
  auVar59._24_4_ = param_6;
  auVar59._28_4_ = param_6;
  auVar135 = vpcmpgtd_avx2(auVar59,
                           ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar135 = vpand_avx2(auVar135,_local_1120);
  uVar28 = vmovmskps_avx(auVar135);
  if (uVar28 != 0) {
    uVar24 = (ulonglong)(uVar28 & 0xff);
    do {
      uVar18 = 0;
      for (uVar19 = uVar24; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
        uVar18 = uVar18 + 1;
      }
      lVar30 = uVar18 * 0x38;
      cVar27 = param_5[2][0];
      cVar23 = local_1570[lVar30];
      if ((cVar27 == '\0') || (cVar23 == '\0')) {
        if (cVar23 == '\0') {
          cVar27 = param_5[2][0];
          uVar164 = *(undefined8 *)(param_5[1] + 0x10);
          uVar147 = *(undefined8 *)(param_5[1] + 8);
          uVar134 = *(undefined8 *)param_5[1];
          uVar124 = *(undefined8 *)(*param_5 + 0x10);
          uVar36 = *(undefined8 *)*param_5;
          uVar84 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar36 = *(undefined8 *)*(undefined1 (*) [24])(&local_15a0 + uVar18 * 7);
          uVar84 = auStack_1598[uVar18 * 7];
          uVar124 = auStack_1598[uVar18 * 7 + 1];
          uVar134 = local_1588[uVar18 * 7];
          uVar147 = local_1588[uVar18 * 7 + 1];
          uVar164 = *(undefined8 *)(local_1570 + lVar30 + -8);
          cVar27 = cVar23;
        }
      }
      else {
        auVar60._24_8_ = 0;
        auVar60._0_24_ = *param_5;
        auVar112._24_8_ = 0;
        auVar112._0_24_ = *(undefined1 (*) [24])(&local_15a0 + uVar18 * 7);
        auVar135 = vminpd_avx(auVar60,auVar112);
        uVar36 = auVar135._0_8_;
        auVar41 = vshufpd_avx(auVar135._0_16_,auVar135._0_16_,1);
        uVar84 = auVar41._0_8_;
        uVar124 = auVar135._16_8_;
        auVar142._24_8_ = 0;
        auVar142._0_24_ = param_5[1];
        auVar161._16_8_ = *(undefined8 *)(local_1570 + lVar30 + -8);
        auVar161._0_16_ = *(undefined1 (*) [16])(local_1588 + uVar18 * 7);
        auVar161._24_8_ = 0;
        auVar135 = vmaxpd_avx(auVar142,auVar161);
        uVar134 = auVar135._0_8_;
        auVar41 = vshufpd_avx(auVar135._0_16_,auVar135._0_16_,1);
        uVar147 = auVar41._0_8_;
        uVar164 = auVar135._16_8_;
      }
      uVar24 = uVar24 & ~(1L << (uVar18 & 0x3f));
      *(undefined8 *)*param_5 = uVar36;
      *(undefined8 *)(*param_5 + 8) = uVar84;
      *(undefined8 *)(*param_5 + 0x10) = uVar124;
      *(undefined8 *)param_5[1] = uVar134;
      *(undefined8 *)(param_5[1] + 8) = uVar147;
      *(undefined8 *)(param_5[1] + 0x10) = uVar164;
      param_5[2][0] = cVar27;
    } while (uVar24 != 0);
  }
  return;
}

// BoxCalcBoundsFromGeometryGroup_avx2 @ 140a54780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup_avx2
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
               double *param_5,undefined1 (*param_6) [24],uint param_7)

{
  double dVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [32];
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  longlong lVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar27;
  undefined1 auVar30 [16];
  longlong lVar48;
  undefined1 auVar31 [32];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  longlong lVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
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
  double dVar60;
  double dVar61;
  double dVar62;
  undefined8 uVar63;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  double dVar78;
  undefined1 auVar80 [16];
  undefined8 uVar79;
  double dVar84;
  undefined1 auVar81 [32];
  double dVar83;
  double dVar85;
  undefined1 auVar82 [32];
  double dVar86;
  undefined8 uVar87;
  double dVar89;
  double dVar90;
  double dVar91;
  undefined1 auVar88 [32];
  undefined8 uVar92;
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
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  double dVar113;
  undefined8 uVar114;
  double dVar122;
  double dVar123;
  undefined1 auVar115 [32];
  double dVar124;
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [64];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [64];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 in_ZMM11 [64];
  double dVar144;
  double dVar148;
  undefined1 auVar145 [32];
  double dVar146;
  double dVar147;
  undefined1 in_ZMM12 [64];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 in_ZMM15 [64];
  undefined8 local_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined1 local_15e0 [16];
  double dStack_15d0;
  double dStack_15c8;
  undefined1 local_15c0 [16];
  double dStack_15b0;
  double dStack_15a8;
  undefined8 local_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined1 local_1580 [16];
  double dStack_1570;
  double dStack_1568;
  undefined8 local_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 local_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 local_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 local_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  double local_1420;
  double dStack_1418;
  double dStack_1410;
  double dStack_1408;
  double local_1400;
  double dStack_13f8;
  double dStack_13f0;
  double dStack_13e8;
  undefined8 local_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 local_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined1 local_1340 [32];
  undefined1 local_1320 [32];
  undefined1 local_1300 [32];
  undefined1 local_12e0 [32];
  undefined1 local_12c0 [32];
  undefined1 local_12a0 [32];
  undefined1 local_1280 [32];
  undefined1 local_1260 [32];
  undefined1 local_1240 [16];
  undefined1 auStack_1230 [16];
  undefined1 local_1220 [16];
  undefined1 auStack_1210 [16];
  undefined1 local_1200 [8];
  double adStack_11f8 [3];
  undefined1 local_11e0 [8];
  double adStack_11d8 [3];
  undefined8 local_11c0;
  double adStack_11b8 [7];
  undefined1 local_1180 [8];
  double adStack_1178 [3];
  undefined1 local_1160 [8];
  double adStack_1158 [3];
  undefined1 local_1140 [16];
  double dStack_1130;
  double dStack_1128;
  undefined1 local_1120 [16];
  double dStack_1110;
  double dStack_1108;
  undefined1 local_1100 [16];
  double dStack_10f0;
  double dStack_10e8;
  undefined1 local_10e0 [16];
  double dStack_10d0;
  double dStack_10c8;
  undefined1 local_10c0 [32];
  undefined1 local_10a0 [32];
  undefined1 local_1080 [16];
  double dStack_1070;
  double dStack_1068;
  undefined1 local_1060 [16];
  double dStack_1050;
  double dStack_1048;
  undefined1 local_1040 [16];
  double dStack_1030;
  double dStack_1028;
  undefined1 local_1020 [16];
  double dStack_1010;
  double dStack_1008;
  undefined1 local_1000;
  undefined1 uStack_fff;
  undefined1 uStack_ffe;
  undefined1 uStack_ffd;
  undefined1 uStack_ffc;
  undefined1 uStack_ffb;
  undefined1 uStack_ffa;
  undefined1 uStack_ff9;
  double dStack_ff8;
  double dStack_ff0;
  double dStack_fe8;
  double local_fe0;
  double dStack_fd8;
  double dStack_fd0;
  double dStack_fc8;
  double local_f80;
  double dStack_f78;
  double dStack_f70;
  double dStack_f68;
  double local_f60;
  double dStack_f58;
  double dStack_f50;
  double dStack_f48;
  double local_f40;
  double dStack_f38;
  double dStack_f30;
  double dStack_f28;
  double local_f20;
  double dStack_f18;
  double dStack_f10;
  double dStack_f08;
  double local_f00;
  double dStack_ef8;
  double dStack_ef0;
  double dStack_ee8;
  double local_ee0;
  double dStack_ed8;
  double dStack_ed0;
  double dStack_ec8;
  double local_e80;
  double dStack_e78;
  double dStack_e70;
  double dStack_e68;
  double local_e60;
  double dStack_e58;
  double dStack_e50;
  double dStack_e48;
  double local_e40;
  double dStack_e38;
  double dStack_e30;
  double dStack_e28;
  double local_e20;
  double dStack_e18;
  double dStack_e10;
  double dStack_e08;
  double local_e00;
  double dStack_df8;
  double dStack_df0;
  double dStack_de8;
  double local_de0;
  double dStack_dd8;
  double dStack_dd0;
  double dStack_dc8;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined1 local_d20 [16];
  double dStack_d10;
  double dStack_d08;
  undefined1 local_d00 [16];
  double dStack_cf0;
  double dStack_ce8;
  undefined1 local_ce0 [16];
  double dStack_cd0;
  double dStack_cc8;
  undefined1 local_cc0 [32];
  undefined1 local_ca0 [32];
  undefined1 local_c80 [32];
  undefined1 local_c60 [32];
  undefined1 local_c40 [32];
  undefined1 local_c20 [32];
  undefined1 local_c00 [32];
  undefined1 local_be0 [32];
  undefined1 local_bc0 [32];
  undefined1 local_ba0 [16];
  undefined8 local_b90;
  undefined1 local_b88 [16];
  undefined8 local_b78;
  char local_b70 [8];
  undefined1 local_b68 [16];
  undefined8 local_b58;
  undefined1 local_b50 [16];
  undefined8 local_b40;
  undefined1 local_b38;
  undefined1 local_b30 [16];
  undefined8 local_b20;
  undefined1 local_b18 [16];
  undefined8 local_b08;
  undefined1 local_b00;
  undefined1 local_af8 [16];
  undefined8 local_ae8;
  undefined1 local_ae0 [16];
  undefined8 local_ad0;
  undefined1 local_ac8;
  undefined1 local_ac0 [16];
  undefined8 local_ab0;
  undefined1 local_aa8 [16];
  undefined8 local_a98;
  undefined1 local_a90;
  undefined1 local_a88 [16];
  undefined8 local_a78;
  undefined1 local_a70 [16];
  undefined8 local_a60;
  undefined1 local_a58;
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined1 local_a20;
  undefined1 local_a18 [16];
  undefined8 local_a08;
  undefined1 local_a00 [16];
  undefined8 local_9f0;
  undefined1 local_9e8;
  longlong local_9e0;
  longlong lStack_9d8;
  longlong lStack_9d0;
  longlong lStack_9c8;
  double local_9c0 [16];
  undefined1 local_940 [16];
  double adStack_930 [6];
  undefined1 local_900 [16];
  double adStack_8f0 [9];
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 local_6c0 [32];
  undefined1 local_6a0 [32];
  undefined1 local_680 [32];
  undefined1 local_660 [32];
  undefined1 local_640 [32];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [16];
  double adStack_5b0 [2];
  undefined1 local_5a0 [16];
  double adStack_590 [2];
  undefined1 local_580 [16];
  double adStack_570 [2];
  undefined1 local_560 [16];
  double adStack_550 [2];
  undefined1 local_540 [16];
  double adStack_530 [2];
  undefined1 local_520 [16];
  double adStack_510 [2];
  undefined1 local_500 [16];
  double adStack_4f0 [9];
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140a54796;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_e8 = in_ZMM6._0_16_;
  uVar16 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar16 = param_7;
  }
  _local_11e0 = ZEXT1632(ZEXT816(0));
  _local_1200 = ZEXT1632(ZEXT816(0));
  local_1220 = ZEXT816(0);
  _local_1220 = ZEXT1632(local_1220);
  local_1240 = ZEXT816(0);
  _local_1240 = ZEXT1632(local_1240);
  local_1260._0_16_ = ZEXT816(0);
  local_1260 = ZEXT1632(local_1260._0_16_);
  local_1280._0_16_ = ZEXT816(0);
  local_1280 = ZEXT1632(local_1280._0_16_);
  local_12a0 = ZEXT1632(ZEXT816(0));
  local_12c0 = ZEXT1632(ZEXT816(0));
  local_12e0._0_16_ = ZEXT816(0);
  local_12e0 = ZEXT1632(local_12e0._0_16_);
  local_1300._0_16_ = ZEXT816(0);
  local_1300 = ZEXT1632(local_1300._0_16_);
  local_1320._0_16_ = ZEXT816(0);
  local_1320 = ZEXT1632(local_1320._0_16_);
  local_1340._0_16_ = ZEXT816(0);
  local_1340 = ZEXT1632(local_1340._0_16_);
  local_11c0 = 0;
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    local_940._4_4_ = __real_00000038;
    local_940._0_4_ = __real_00000038;
    local_940._8_4_ = __real_00000038;
    local_940._12_4_ = __real_00000038;
    register0x00001410 = __real_00000038;
    register0x00001414 = __real_00000038;
    register0x00001418 = __real_00000038;
    register0x0000141c = __real_00000038;
    auVar131 = ZEXT3264(_local_940);
    local_9c0[0xc] = (double)__real_0000000000000008;
    local_9c0[0xd] = (double)__real_0000000000000008;
    local_9c0[0xe] = (double)__real_0000000000000008;
    local_9c0[0xf] = (double)__real_0000000000000008;
    local_9c0[8] = (double)__real_0000000000000010;
    local_9c0[9] = (double)__real_0000000000000010;
    local_9c0[10] = (double)__real_0000000000000010;
    local_9c0[0xb] = (double)__real_0000000000000010;
    local_9c0[4] = (double)__real_0000000000000018;
    local_9c0[5] = (double)__real_0000000000000018;
    local_9c0[6] = (double)__real_0000000000000018;
    local_9c0[7] = (double)__real_0000000000000018;
    local_9c0[0] = __real_0000000000000020;
    local_9c0[1] = __real_0000000000000020;
    local_9c0[2] = __real_0000000000000020;
    local_9c0[3] = __real_0000000000000020;
    local_9e0 = __real_0000000000000028;
    lStack_9d8 = __real_0000000000000028;
    lStack_9d0 = __real_0000000000000028;
    lStack_9c8 = __real_0000000000000028;
    adStack_930[2] = (double)__real_0000000000000030;
    adStack_930[3] = (double)__real_0000000000000030;
    adStack_930[4] = (double)__real_0000000000000030;
    adStack_930[5] = (double)__real_0000000000000030;
    auVar135 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar31._4_4_ = iVar18;
      auVar31._0_4_ = iVar18;
      auVar31._8_4_ = iVar18;
      auVar31._12_4_ = iVar18;
      auVar31._16_4_ = iVar18;
      auVar31._20_4_ = iVar18;
      auVar31._24_4_ = iVar18;
      auVar31._28_4_ = iVar18;
      auVar94 = vpor_avx2(auVar31,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar31 = *(undefined1 (*) [32])(param_2 + (ulonglong)(uint)(iVar18 * 4));
      auVar81 = vpmulld_avx2(auVar94,auVar131._0_32_);
      auVar93 = vpmovzxdq_avx2(auVar81._0_16_);
      auVar81 = vpmovzxdq_avx2(auVar81._16_16_);
      lVar21 = auVar93._0_8_;
      lVar42 = auVar93._8_8_;
      lVar48 = auVar93._16_8_;
      lVar54 = auVar93._24_8_;
      auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + lVar21 + (longlong)adStack_930[2])),
                            (uint)*(byte *)(param_4 + lVar42 + (longlong)adStack_930[3]),1);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + lVar48 + (longlong)adStack_930[4]),2);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + lVar54 + (longlong)adStack_930[5]),3);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 +
                                                   auVar81._0_8_ + (longlong)adStack_930[2]),4);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 +
                                                   auVar81._8_8_ + (longlong)adStack_930[3]),5);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 +
                                                   auVar81._16_8_ + (longlong)adStack_930[4]),6);
      vpslld_avx2(auVar31,2);
      auVar93 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar125 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
      auVar3 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 +
                                                  auVar81._24_8_ + (longlong)adStack_930[5]),7);
      auVar93 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar81 = vpcmpeqd_avx2(auVar125,auVar93);
      auVar30 = vpackssdw_avx(SUB3216(auVar81 ^ auVar93,0),SUB3216(auVar81 ^ auVar93,0x10));
      auVar3 = vpcmpeqb_avx(auVar135._0_16_,auVar3);
      auVar3 = vpmovsxbw_avx(auVar3 ^ ___xmm_ffffffffffffffffffffffffffffffff);
      auVar3 = vpand_avx(auVar30,auVar3);
      in_ZMM6 = ZEXT1664(auVar3);
      if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') {
        auVar93 = vpslld_avx2(auVar94,3);
        auVar93 = vpsubd_avx2(auVar93,auVar94);
        vpmovzxdq_avx2(auVar93._16_16_);
        auVar81 = vpmovzxdq_avx2(auVar93._0_16_);
        auVar93 = vpcmpeqd_avx2(ZEXT1632(auVar30),ZEXT1632(auVar30));
        local_bc0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
        auVar93 = vpcmpeqd_avx2(auVar81,auVar81);
        auVar115 = vgatherqpd(ZEXT832(0),auVar93);
        auVar93._0_8_ = lVar21 + (longlong)local_9c0[0xc];
        auVar93._8_8_ = lVar42 + (longlong)local_9c0[0xd];
        auVar93._16_8_ = lVar48 + (longlong)local_9c0[0xe];
        auVar93._24_8_ = lVar54 + (longlong)local_9c0[0xf];
        auVar81 = vpcmpeqd_avx2(auVar115,auVar115);
        local_be0 = vgatherqpd(ZEXT832(0) << 0x40,auVar81);
        auVar93 = vpcmpeqd_avx2(auVar93,auVar93);
        _local_d00 = vgatherqpd(ZEXT832(0),auVar93);
        auVar81._0_8_ = lVar21 + (longlong)local_9c0[8];
        auVar81._8_8_ = lVar42 + (longlong)local_9c0[9];
        auVar81._16_8_ = lVar48 + (longlong)local_9c0[10];
        auVar81._24_8_ = lVar54 + (longlong)local_9c0[0xb];
        auVar93 = vpcmpeqd_avx2(_local_d00,_local_d00);
        local_c00 = vgatherqpd(ZEXT832(0) << 0x40,auVar93);
        auVar93 = vpcmpeqd_avx2(auVar81,auVar81);
        local_c20 = vgatherqpd(ZEXT832(0),auVar93);
        auVar94._0_8_ = lVar21 + (longlong)local_9c0[4];
        auVar94._8_8_ = lVar42 + (longlong)local_9c0[5];
        auVar94._16_8_ = lVar48 + (longlong)local_9c0[6];
        auVar94._24_8_ = lVar54 + (longlong)local_9c0[7];
        auVar93 = vpcmpeqd_avx2(local_c20,local_c20);
        local_c40 = vgatherqpd(ZEXT832(0) << 0x40,auVar93);
        auVar93 = vpcmpeqd_avx2(auVar94,auVar94);
        _local_d20 = vgatherqpd(ZEXT832(0),auVar93);
        auVar125._0_8_ = lVar21 + (longlong)local_9c0[0];
        auVar125._8_8_ = lVar42 + (longlong)local_9c0[1];
        auVar125._16_8_ = lVar48 + (longlong)local_9c0[2];
        auVar125._24_8_ = lVar54 + (longlong)local_9c0[3];
        auVar93 = vpcmpeqd_avx2(_local_d20,_local_d20);
        local_c60 = vgatherqpd(ZEXT832(0) << 0x40,auVar93);
        auVar93 = vpcmpeqd_avx2(auVar125,auVar125);
        _local_ce0 = vgatherqpd(ZEXT832(0),auVar93);
        auVar96._8_8_ = lStack_9d8;
        auVar96._0_8_ = local_9e0;
        auVar96._16_8_ = lStack_9d0;
        auVar96._24_8_ = lStack_9c8;
        auVar95._0_8_ = lVar21 + local_9e0;
        auVar95._8_8_ = lVar42 + lStack_9d8;
        auVar95._16_8_ = lVar48 + lStack_9d0;
        auVar95._24_8_ = lVar54 + lStack_9c8;
        auVar93 = vpcmpeqd_avx2(auVar96,auVar96);
        local_c80 = vgatherqpd(ZEXT832(0),auVar93);
        auVar93 = vpcmpeqd_avx2(auVar95,auVar95);
        local_ca0 = vgatherqpd(ZEXT832(0),auVar93);
        auVar155 = vpslld_avx2(auVar31,7);
        auVar30 = vpshufd_avx(auVar3,0xee);
        auVar31 = vpmovsxwq_avx2(auVar30);
        auVar81 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar97._4_4_ = __real_00000008;
        auVar97._0_4_ = __real_00000008;
        auVar97._8_4_ = __real_00000008;
        auVar97._12_4_ = __real_00000008;
        auVar97._16_4_ = __real_00000008;
        auVar97._20_4_ = __real_00000008;
        auVar97._24_4_ = __real_00000008;
        auVar97._28_4_ = __real_00000008;
        vpor_avx2(auVar155,auVar97);
        auVar93 = vpmovsxwq_avx2(auVar3);
        auVar94 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar125 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar98._4_4_ = __real_00000010;
        auVar98._0_4_ = __real_00000010;
        auVar98._8_4_ = __real_00000010;
        auVar98._12_4_ = __real_00000010;
        auVar98._16_4_ = __real_00000010;
        auVar98._20_4_ = __real_00000010;
        auVar98._24_4_ = __real_00000010;
        auVar98._28_4_ = __real_00000010;
        vpor_avx2(auVar155,auVar98);
        auVar95 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar96 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar99._4_4_ = __real_00000018;
        auVar99._0_4_ = __real_00000018;
        auVar99._8_4_ = __real_00000018;
        auVar99._12_4_ = __real_00000018;
        auVar99._16_4_ = __real_00000018;
        auVar99._20_4_ = __real_00000018;
        auVar99._24_4_ = __real_00000018;
        auVar99._28_4_ = __real_00000018;
        vpor_avx2(auVar155,auVar99);
        auVar97 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar98 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar100._4_4_ = __real_00000020;
        auVar100._0_4_ = __real_00000020;
        auVar100._8_4_ = __real_00000020;
        auVar100._12_4_ = __real_00000020;
        auVar100._16_4_ = __real_00000020;
        auVar100._20_4_ = __real_00000020;
        auVar100._24_4_ = __real_00000020;
        auVar100._28_4_ = __real_00000020;
        vpor_avx2(auVar155,auVar100);
        auVar99 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar100 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar101._4_4_ = __real_00000028;
        auVar101._0_4_ = __real_00000028;
        auVar101._8_4_ = __real_00000028;
        auVar101._12_4_ = __real_00000028;
        auVar101._16_4_ = __real_00000028;
        auVar101._20_4_ = __real_00000028;
        auVar101._24_4_ = __real_00000028;
        auVar101._28_4_ = __real_00000028;
        vpor_avx2(auVar155,auVar101);
        auVar101 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar102 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar103._4_4_ = __real_00000030;
        auVar103._0_4_ = __real_00000030;
        auVar103._8_4_ = __real_00000030;
        auVar103._12_4_ = __real_00000030;
        auVar103._16_4_ = __real_00000030;
        auVar103._20_4_ = __real_00000030;
        auVar103._24_4_ = __real_00000030;
        auVar103._28_4_ = __real_00000030;
        vpor_avx2(auVar155,auVar103);
        auVar103 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar104 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        vpor_avx2(auVar155,auVar131._0_32_);
        auVar105 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar106 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar107._4_4_ = __real_00000040;
        auVar107._0_4_ = __real_00000040;
        auVar107._8_4_ = __real_00000040;
        auVar107._12_4_ = __real_00000040;
        auVar107._16_4_ = __real_00000040;
        auVar107._20_4_ = __real_00000040;
        auVar107._24_4_ = __real_00000040;
        auVar107._28_4_ = __real_00000040;
        vpor_avx2(auVar155,auVar107);
        auVar107 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        auVar108 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar109._4_4_ = __real_00000048;
        auVar109._0_4_ = __real_00000048;
        auVar109._8_4_ = __real_00000048;
        auVar109._12_4_ = __real_00000048;
        auVar109._16_4_ = __real_00000048;
        auVar109._20_4_ = __real_00000048;
        auVar109._24_4_ = __real_00000048;
        auVar109._28_4_ = __real_00000048;
        vpor_avx2(auVar155,auVar109);
        auVar109 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        local_2a0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar31);
        auVar116._4_4_ = __real_00000050;
        auVar116._0_4_ = __real_00000050;
        auVar116._8_4_ = __real_00000050;
        auVar116._12_4_ = __real_00000050;
        auVar116._16_4_ = __real_00000050;
        auVar116._20_4_ = __real_00000050;
        auVar116._24_4_ = __real_00000050;
        auVar116._28_4_ = __real_00000050;
        vpor_avx2(auVar155,auVar116);
        local_280 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar93);
        local_260 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar31);
        auVar117._4_4_ = __real_00000058;
        auVar117._0_4_ = __real_00000058;
        auVar117._8_4_ = __real_00000058;
        auVar117._12_4_ = __real_00000058;
        auVar117._16_4_ = __real_00000058;
        auVar117._20_4_ = __real_00000058;
        auVar117._24_4_ = __real_00000058;
        auVar117._28_4_ = __real_00000058;
        vpor_avx2(auVar155,auVar117);
        local_240 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
        local_220 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar31);
        auVar118._4_4_ = __real_00000060;
        auVar118._0_4_ = __real_00000060;
        auVar118._8_4_ = __real_00000060;
        auVar118._12_4_ = __real_00000060;
        auVar118._16_4_ = __real_00000060;
        auVar118._20_4_ = __real_00000060;
        auVar118._24_4_ = __real_00000060;
        auVar118._28_4_ = __real_00000060;
        vpor_avx2(auVar155,auVar118);
        local_200 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        local_1e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar31);
        auVar119._4_4_ = __real_00000068;
        auVar119._0_4_ = __real_00000068;
        auVar119._8_4_ = __real_00000068;
        auVar119._12_4_ = __real_00000068;
        auVar119._16_4_ = __real_00000068;
        auVar119._20_4_ = __real_00000068;
        auVar119._24_4_ = __real_00000068;
        auVar119._28_4_ = __real_00000068;
        vpor_avx2(auVar155,auVar119);
        local_1c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
        local_1a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar120._4_4_ = __real_00000070;
        auVar120._0_4_ = __real_00000070;
        auVar120._8_4_ = __real_00000070;
        auVar120._12_4_ = __real_00000070;
        auVar120._16_4_ = __real_00000070;
        auVar120._20_4_ = __real_00000070;
        auVar120._24_4_ = __real_00000070;
        auVar120._28_4_ = __real_00000070;
        vpor_avx2(auVar155,auVar120);
        local_180 = vgatherdpd(ZEXT832(0),auVar93);
        local_160 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        _local_500 = vgatherdpd(ZEXT832(0),auVar93);
        local_140 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar93);
        local_120 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
        auVar30 = vpacksswb_avx(auVar3,auVar3);
        bVar15 = SUB161(auVar30 >> 7,0) & 1;
        bVar4 = SUB161(auVar30 >> 0xf,0) & 1;
        bVar5 = SUB161(auVar30 >> 0x17,0) & 1;
        bVar6 = SUB161(auVar30 >> 0x1f,0) & 1;
        bVar7 = SUB161(auVar30 >> 0x27,0) & 1;
        bVar8 = SUB161(auVar30 >> 0x2f,0) & 1;
        bVar9 = SUB161(auVar30 >> 0x37,0) & 1;
        bVar10 = SUB161(auVar30 >> 0x3f,0) << 7;
        local_1600 = auVar81._0_8_;
        uStack_15f8 = auVar81._8_8_;
        uStack_15f0 = auVar81._16_8_;
        uStack_15e8 = auVar81._24_8_;
        adStack_4f0[2] = (double)local_1600;
        adStack_4f0[3] = (double)uStack_15f8;
        adStack_4f0[4] = (double)uStack_15f0;
        adStack_4f0[5] = (double)uStack_15e8;
        local_15e0._0_8_ = auVar125._0_8_;
        local_15e0._8_8_ = auVar125._8_8_;
        dStack_15d0 = auVar125._16_8_;
        dStack_15c8 = auVar125._24_8_;
        local_4a0 = local_15e0._0_8_;
        uStack_498 = local_15e0._8_8_;
        uStack_490 = dStack_15d0;
        uStack_488 = dStack_15c8;
        local_15c0._0_8_ = auVar94._0_8_;
        local_15c0._8_8_ = auVar94._8_8_;
        dStack_15b0 = auVar94._16_8_;
        dStack_15a8 = auVar94._24_8_;
        adStack_4f0[6] = (double)local_15c0._0_8_;
        adStack_4f0[7] = (double)local_15c0._8_8_;
        adStack_4f0[8] = dStack_15b0;
        uStack_4a8 = dStack_15a8;
        local_15a0 = auVar96._0_8_;
        uStack_1598 = auVar96._8_8_;
        uStack_1590 = auVar96._16_8_;
        uStack_1588 = auVar96._24_8_;
        local_460 = local_15a0;
        uStack_458 = uStack_1598;
        uStack_450 = uStack_1590;
        uStack_448 = uStack_1588;
        local_1580._0_8_ = auVar95._0_8_;
        local_1580._8_8_ = auVar95._8_8_;
        dStack_1570 = auVar95._16_8_;
        dStack_1568 = auVar95._24_8_;
        local_480 = local_1580._0_8_;
        uStack_478 = local_1580._8_8_;
        uStack_470 = dStack_1570;
        uStack_468 = dStack_1568;
        local_1540 = auVar98._0_8_;
        uStack_1538 = auVar98._8_8_;
        uStack_1530 = auVar98._16_8_;
        uStack_1528 = auVar98._24_8_;
        local_420 = local_1540;
        uStack_418 = uStack_1538;
        uStack_410 = uStack_1530;
        uStack_408 = uStack_1528;
        local_1520 = auVar97._0_8_;
        uStack_1518 = auVar97._8_8_;
        uStack_1510 = auVar97._16_8_;
        uStack_1508 = auVar97._24_8_;
        local_440 = local_1520;
        uStack_438 = uStack_1518;
        uStack_430 = uStack_1510;
        uStack_428 = uStack_1508;
        local_1480 = auVar100._0_8_;
        uStack_1478 = auVar100._8_8_;
        uStack_1470 = auVar100._16_8_;
        uStack_1468 = auVar100._24_8_;
        local_3e0 = local_1480;
        uStack_3d8 = uStack_1478;
        uStack_3d0 = uStack_1470;
        uStack_3c8 = uStack_1468;
        local_1560 = auVar99._0_8_;
        uStack_1558 = auVar99._8_8_;
        uStack_1550 = auVar99._16_8_;
        uStack_1548 = auVar99._24_8_;
        local_400 = local_1560;
        uStack_3f8 = uStack_1558;
        uStack_3f0 = uStack_1550;
        uStack_3e8 = uStack_1548;
        local_14c0 = auVar102._0_8_;
        uStack_14b8 = auVar102._8_8_;
        uStack_14b0 = auVar102._16_8_;
        uStack_14a8 = auVar102._24_8_;
        local_3a0 = local_14c0;
        uStack_398 = uStack_14b8;
        uStack_390 = uStack_14b0;
        uStack_388 = uStack_14a8;
        local_14a0 = auVar101._0_8_;
        uStack_1498 = auVar101._8_8_;
        uStack_1490 = auVar101._16_8_;
        uStack_1488 = auVar101._24_8_;
        local_3c0 = local_14a0;
        uStack_3b8 = uStack_1498;
        uStack_3b0 = uStack_1490;
        uStack_3a8 = uStack_1488;
        local_1500 = auVar104._0_8_;
        uStack_14f8 = auVar104._8_8_;
        uStack_14f0 = auVar104._16_8_;
        uStack_14e8 = auVar104._24_8_;
        local_360 = local_1500;
        uStack_358 = uStack_14f8;
        uStack_350 = uStack_14f0;
        uStack_348 = uStack_14e8;
        local_14e0 = auVar103._0_8_;
        uStack_14d8 = auVar103._8_8_;
        uStack_14d0 = auVar103._16_8_;
        uStack_14c8 = auVar103._24_8_;
        local_380 = local_14e0;
        uStack_378 = uStack_14d8;
        uStack_370 = uStack_14d0;
        uStack_368 = uStack_14c8;
        local_1360 = auVar106._0_8_;
        uStack_1358 = auVar106._8_8_;
        uStack_1350 = auVar106._16_8_;
        uStack_1348 = auVar106._24_8_;
        local_320 = local_1360;
        uStack_318 = uStack_1358;
        uStack_310 = uStack_1350;
        uStack_308 = uStack_1348;
        local_1460 = auVar105._0_8_;
        uStack_1458 = auVar105._8_8_;
        uStack_1450 = auVar105._16_8_;
        uStack_1448 = auVar105._24_8_;
        local_340 = local_1460;
        uStack_338 = uStack_1458;
        uStack_330 = uStack_1450;
        uStack_328 = uStack_1448;
        local_13a0 = auVar108._0_8_;
        uStack_1398 = auVar108._8_8_;
        uStack_1390 = auVar108._16_8_;
        uStack_1388 = auVar108._24_8_;
        local_2e0 = local_13a0;
        uStack_2d8 = uStack_1398;
        uStack_2d0 = uStack_1390;
        uStack_2c8 = uStack_1388;
        local_1380 = auVar107._0_8_;
        uStack_1378 = auVar107._8_8_;
        uStack_1370 = auVar107._16_8_;
        uStack_1368 = auVar107._24_8_;
        local_300 = local_1380;
        uStack_2f8 = uStack_1378;
        uStack_2f0 = uStack_1370;
        uStack_2e8 = uStack_1368;
        local_13c0 = auVar109._0_8_;
        uStack_13b8 = auVar109._8_8_;
        uStack_13b0 = auVar109._16_8_;
        uStack_13a8 = auVar109._24_8_;
        local_2c0 = local_13c0;
        uStack_2b8 = uStack_13b8;
        uStack_2b0 = uStack_13b0;
        uStack_2a8 = uStack_13a8;
        dVar1 = param_5[8];
        dVar22 = param_5[0xc];
        dVar23 = *param_5;
        dVar24 = param_5[1];
        lVar21 = 0xc0;
        dVar25 = param_5[5];
        dVar26 = param_5[9];
        dVar43 = param_5[0xd];
        dVar44 = param_5[2];
        dVar45 = param_5[6];
        dVar46 = param_5[10];
        dVar47 = param_5[0xe];
        dVar49 = param_5[3];
        dVar50 = param_5[7];
        dVar51 = param_5[0xb];
        dVar52 = param_5[0xf];
        auVar31 = vpmovsxwd_avx2(auVar3);
        do {
          dVar55 = *(double *)(local_5c0 + lVar21);
          dVar56 = *(double *)(local_5c0 + lVar21 + 8);
          dVar57 = *(double *)(local_5c0 + lVar21 + 0x10);
          dVar58 = *(double *)(local_5c0 + lVar21 + 0x18);
          dVar59 = *(double *)(local_5a0 + lVar21);
          dVar60 = *(double *)(local_5a0 + lVar21 + 8);
          dVar61 = *(double *)(local_5a0 + lVar21 + 0x10);
          dVar62 = *(double *)(local_5a0 + lVar21 + 0x18);
          dVar69 = *(double *)(local_580 + lVar21);
          dVar70 = *(double *)(local_580 + lVar21 + 8);
          dVar71 = *(double *)(local_580 + lVar21 + 0x10);
          dVar72 = *(double *)(local_580 + lVar21 + 0x18);
          dVar73 = *(double *)(local_560 + lVar21);
          dVar74 = *(double *)(local_560 + lVar21 + 8);
          dVar75 = *(double *)(local_560 + lVar21 + 0x10);
          dVar76 = *(double *)(local_560 + lVar21 + 0x18);
          dVar77 = *(double *)(local_540 + lVar21);
          dVar78 = *(double *)(local_540 + lVar21 + 8);
          dVar83 = *(double *)(local_540 + lVar21 + 0x10);
          dVar84 = *(double *)(local_540 + lVar21 + 0x18);
          dVar85 = *(double *)(local_520 + lVar21);
          dVar86 = *(double *)(local_520 + lVar21 + 8);
          dVar89 = *(double *)(local_520 + lVar21 + 0x10);
          dVar90 = *(double *)(local_520 + lVar21 + 0x18);
          dVar91 = *(double *)((longlong)adStack_4f0 + lVar21 + 0x10);
          dVar113 = *(double *)((longlong)adStack_4f0 + lVar21 + 0x18);
          dVar122 = *(double *)((longlong)adStack_4f0 + lVar21 + 0x20);
          dVar123 = *(double *)((longlong)adStack_4f0 + lVar21 + 0x28);
          dVar53 = param_5[4];
          *(double *)(local_1220 + lVar21) =
               dVar91 * dVar22 + dVar85 * dVar1 + dVar73 * dVar53 + dVar59 * dVar23 + 0.0;
          *(double *)(local_1220 + lVar21 + 8) =
               dVar113 * dVar22 + dVar86 * dVar1 + dVar74 * dVar53 + dVar60 * dVar23 + 0.0;
          *(double *)(local_1220 + lVar21 + 0x10) =
               dVar122 * dVar22 + dVar89 * dVar1 + dVar75 * dVar53 + dVar61 * dVar23 + 0.0;
          *(double *)(auStack_1210 + lVar21 + 8) =
               dVar123 * dVar22 + dVar90 * dVar1 + dVar76 * dVar53 + dVar62 * dVar23 + 0.0;
          dVar124 = *(double *)(local_500 + lVar21);
          dVar144 = *(double *)(local_500 + lVar21 + 8);
          dVar146 = *(double *)(local_500 + lVar21 + 0x10);
          dVar147 = *(double *)(local_500 + lVar21 + 0x18);
          *(double *)(local_1240 + lVar21) =
               dVar124 * dVar22 + dVar77 * dVar1 + dVar69 * dVar53 + dVar55 * dVar23 + 0.0;
          *(double *)(local_1240 + lVar21 + 8) =
               dVar144 * dVar22 + dVar78 * dVar1 + dVar70 * dVar53 + dVar56 * dVar23 + 0.0;
          *(double *)(local_1240 + lVar21 + 0x10) =
               dVar146 * dVar22 + dVar83 * dVar1 + dVar71 * dVar53 + dVar57 * dVar23 + 0.0;
          *(double *)(auStack_1230 + lVar21 + 8) =
               dVar147 * dVar22 + dVar84 * dVar1 + dVar72 * dVar53 + dVar58 * dVar23 + 0.0;
          *(double *)(local_11e0 + lVar21) =
               dVar91 * dVar43 + dVar85 * dVar26 + dVar73 * dVar25 + dVar59 * dVar24 + 0.0;
          *(double *)(local_11e0 + lVar21 + 8) =
               dVar113 * dVar43 + dVar86 * dVar26 + dVar74 * dVar25 + dVar60 * dVar24 + 0.0;
          *(double *)(local_11e0 + lVar21 + 0x10) =
               dVar122 * dVar43 + dVar89 * dVar26 + dVar75 * dVar25 + dVar61 * dVar24 + 0.0;
          *(double *)(local_11e0 + lVar21 + 0x18) =
               dVar123 * dVar43 + dVar90 * dVar26 + dVar76 * dVar25 + dVar62 * dVar24 + 0.0;
          *(double *)(local_1200 + lVar21) =
               dVar124 * dVar43 + dVar77 * dVar26 + dVar69 * dVar25 + dVar55 * dVar24 + 0.0;
          *(double *)(local_1200 + lVar21 + 8) =
               dVar144 * dVar43 + dVar78 * dVar26 + dVar70 * dVar25 + dVar56 * dVar24 + 0.0;
          *(double *)(local_1200 + lVar21 + 0x10) =
               dVar146 * dVar43 + dVar83 * dVar26 + dVar71 * dVar25 + dVar57 * dVar24 + 0.0;
          *(double *)(local_1200 + lVar21 + 0x18) =
               dVar147 * dVar43 + dVar84 * dVar26 + dVar72 * dVar25 + dVar58 * dVar24 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x18) =
               dVar91 * dVar47 + dVar85 * dVar46 + dVar73 * dVar45 + dVar59 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x20) =
               dVar113 * dVar47 + dVar86 * dVar46 + dVar74 * dVar45 + dVar60 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x28) =
               dVar122 * dVar47 + dVar89 * dVar46 + dVar75 * dVar45 + dVar61 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x30) =
               dVar123 * dVar47 + dVar90 * dVar46 + dVar76 * dVar45 + dVar62 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + -8) =
               dVar124 * dVar47 + dVar77 * dVar46 + dVar69 * dVar45 + dVar55 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21) =
               dVar144 * dVar47 + dVar78 * dVar46 + dVar70 * dVar45 + dVar56 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 8) =
               dVar146 * dVar47 + dVar83 * dVar46 + dVar71 * dVar45 + dVar57 * dVar44 + 0.0;
          *(double *)((longlong)adStack_11b8 + lVar21 + 0x10) =
               dVar147 * dVar47 + dVar84 * dVar46 + dVar72 * dVar45 + dVar58 * dVar44 + 0.0;
          *(double *)(local_1160 + lVar21) =
               dVar52 * dVar91 + dVar51 * dVar85 + dVar50 * dVar73 + dVar49 * dVar59 + 0.0;
          *(double *)(local_1160 + lVar21 + 8) =
               dVar52 * dVar113 + dVar51 * dVar86 + dVar50 * dVar74 + dVar49 * dVar60 + 0.0;
          *(double *)(local_1160 + lVar21 + 0x10) =
               dVar52 * dVar122 + dVar51 * dVar89 + dVar50 * dVar75 + dVar49 * dVar61 + 0.0;
          *(double *)(local_1160 + lVar21 + 0x18) =
               dVar52 * dVar123 + dVar51 * dVar90 + dVar50 * dVar76 + dVar49 * dVar62 + 0.0;
          *(double *)(local_1180 + lVar21) =
               dVar52 * dVar124 + dVar51 * dVar77 + dVar50 * dVar69 + dVar49 * dVar55 + 0.0;
          *(double *)(local_1180 + lVar21 + 8) =
               dVar52 * dVar144 + dVar51 * dVar78 + dVar50 * dVar70 + dVar49 * dVar56 + 0.0;
          *(double *)(local_1180 + lVar21 + 0x10) =
               dVar52 * dVar146 + dVar51 * dVar83 + dVar50 * dVar71 + dVar49 * dVar57 + 0.0;
          *(double *)(local_1180 + lVar21 + 0x18) =
               dVar52 * dVar147 + dVar51 * dVar84 + dVar50 * dVar72 + dVar49 * dVar58 + 0.0;
          lVar21 = lVar21 + 0x100;
        } while (lVar21 != 0x4c0);
        local_1400 = auVar115._0_8_;
        dStack_13f8 = auVar115._8_8_;
        dStack_13f0 = auVar115._16_8_;
        dStack_13e8 = auVar115._24_8_;
        dVar22 = __real_3fe0000000000000 * (local_1400 + (double)local_d20._0_8_);
        dVar43 = __real_3fe0000000000000 * (dStack_13f8 + (double)local_d20._8_8_);
        dVar49 = __real_3fe0000000000000 * (dStack_13f0 + dStack_d10);
        dVar55 = __real_3fe0000000000000 * (dStack_13e8 + dStack_d08);
        dVar60 = __real_3fe0000000000000 * ((double)local_d00._0_8_ + (double)local_ce0._0_8_);
        dVar69 = __real_3fe0000000000000 * ((double)local_d00._8_8_ + (double)local_ce0._8_8_);
        dVar72 = __real_3fe0000000000000 * (dStack_cf0 + dStack_cd0);
        dVar75 = __real_3fe0000000000000 * (dStack_ce8 + dStack_cc8);
        dVar23 = __real_3fe0000000000000 * (local_bc0._0_8_ + local_c40._0_8_);
        dVar44 = __real_3fe0000000000000 * (local_bc0._8_8_ + local_c40._8_8_);
        dVar50 = __real_3fe0000000000000 * (local_bc0._16_8_ + local_c40._16_8_);
        dVar56 = __real_3fe0000000000000 * (local_bc0._24_8_ + local_c40._24_8_);
        dVar61 = __real_3fe0000000000000 * (local_be0._0_8_ + local_c60._0_8_);
        dVar70 = __real_3fe0000000000000 * (local_be0._8_8_ + local_c60._8_8_);
        dVar73 = __real_3fe0000000000000 * (local_be0._16_8_ + local_c60._16_8_);
        dVar76 = __real_3fe0000000000000 * (local_be0._24_8_ + local_c60._24_8_);
        dVar1 = (double)CONCAT17(uStack_ff9,
                                 CONCAT16(uStack_ffa,
                                          CONCAT15(uStack_ffb,
                                                   CONCAT14(uStack_ffc,
                                                            CONCAT13(uStack_ffd,
                                                                     CONCAT12(uStack_ffe,
                                                                              CONCAT11(uStack_fff,
                                                                                       local_1000)))
                                                           ))));
        dVar24 = __real_3fe0000000000000 * (local_c00._0_8_ + local_c80._0_8_);
        dVar45 = __real_3fe0000000000000 * (local_c00._8_8_ + local_c80._8_8_);
        dVar51 = __real_3fe0000000000000 * (local_c00._16_8_ + local_c80._16_8_);
        dVar57 = __real_3fe0000000000000 * (local_c00._24_8_ + local_c80._24_8_);
        dVar25 = __real_3fe0000000000000 * (local_c20._0_8_ + local_ca0._0_8_);
        dVar46 = __real_3fe0000000000000 * (local_c20._8_8_ + local_ca0._8_8_);
        dVar52 = __real_3fe0000000000000 * (local_c20._16_8_ + local_ca0._16_8_);
        dVar58 = __real_3fe0000000000000 * (local_c20._24_8_ + local_ca0._24_8_);
        auVar93 = vsubpd_avx(local_c40,local_bc0);
        auVar81 = vsubpd_avx(_local_d20,auVar115);
        auVar94 = vsubpd_avx(local_c60,local_be0);
        auVar125 = vsubpd_avx(_local_ce0,_local_d00);
        auVar95 = vsubpd_avx(local_ca0,local_c20);
        auVar96 = vsubpd_avx(local_c80,local_c00);
        dVar26 = __real_3fe0000000000000 * auVar81._0_8_;
        dVar47 = __real_3fe0000000000000 * auVar81._8_8_;
        dVar53 = __real_3fe0000000000000 * auVar81._16_8_;
        dVar59 = __real_3fe0000000000000 * auVar81._24_8_;
        dVar86 = __real_3fe0000000000000 * auVar93._0_8_;
        dVar89 = __real_3fe0000000000000 * auVar93._8_8_;
        dVar90 = __real_3fe0000000000000 * auVar93._16_8_;
        dVar91 = __real_3fe0000000000000 * auVar93._24_8_;
        dVar78 = auVar125._0_8_ * __real_3fe0000000000000;
        dVar83 = auVar125._8_8_ * __real_3fe0000000000000;
        dVar84 = auVar125._16_8_ * __real_3fe0000000000000;
        dVar85 = auVar125._24_8_ * __real_3fe0000000000000;
        dVar62 = __real_3fe0000000000000 * auVar94._0_8_;
        dVar71 = __real_3fe0000000000000 * auVar94._8_8_;
        dVar74 = __real_3fe0000000000000 * auVar94._16_8_;
        dVar77 = __real_3fe0000000000000 * auVar94._24_8_;
        dVar113 = __real_3fe0000000000000 * auVar96._0_8_;
        dVar122 = __real_3fe0000000000000 * auVar96._8_8_;
        dVar123 = __real_3fe0000000000000 * auVar96._16_8_;
        dVar124 = __real_3fe0000000000000 * auVar96._24_8_;
        dVar144 = __real_3fe0000000000000 * auVar95._0_8_;
        dVar146 = __real_3fe0000000000000 * auVar95._8_8_;
        dVar147 = __real_3fe0000000000000 * auVar95._16_8_;
        dVar148 = __real_3fe0000000000000 * auVar95._24_8_;
        auVar106._0_8_ =
             dVar25 * local_f60 + dVar22 * (double)local_1160 + dVar60 * (double)local_1060._0_8_ +
             local_e60;
        auVar106._8_8_ =
             dVar46 * dStack_f58 + dVar43 * adStack_1158[0] + dVar69 * (double)local_1060._8_8_ +
             dStack_e58;
        auVar106._16_8_ =
             dVar52 * dStack_f50 + dVar49 * adStack_1158[1] + dVar72 * dStack_1050 + dStack_e50;
        auVar106._24_8_ =
             dVar58 * dStack_f48 + dVar55 * adStack_1158[2] + dVar75 * dStack_1048 + dStack_e48;
        auVar129._0_8_ =
             dVar24 * local_f80 + dVar23 * (double)local_1180 + dVar61 * (double)local_1080._0_8_ +
             local_e80;
        auVar129._8_8_ =
             dVar45 * dStack_f78 + dVar44 * adStack_1178[0] + dVar70 * (double)local_1080._8_8_ +
             dStack_e78;
        auVar129._16_8_ =
             dVar51 * dStack_f70 + dVar50 * adStack_1178[1] + dVar73 * dStack_1070 + dStack_e70;
        auVar129._24_8_ =
             dVar57 * dStack_f68 + dVar56 * adStack_1178[2] + dVar76 * dStack_1068 + dStack_e68;
        auVar152._0_8_ =
             dVar25 * local_f20 +
             dVar22 * (double)local_1120._0_8_ + dVar60 * (double)local_1020._0_8_ + local_e20;
        auVar152._8_8_ =
             dVar46 * dStack_f18 +
             dVar43 * (double)local_1120._8_8_ + dVar69 * (double)local_1020._8_8_ + dStack_e18;
        auVar152._16_8_ =
             dVar52 * dStack_f10 + dVar49 * dStack_1110 + dVar72 * dStack_1010 + dStack_e10;
        auVar152._24_8_ =
             dVar58 * dStack_f08 + dVar55 * dStack_1108 + dVar75 * dStack_1008 + dStack_e08;
        auVar102._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar86 * (double)local_1180)) +
             (double)((ulonglong)(dVar62 * (double)local_1080._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar113 * local_f80) & __real_7fffffffffffffff);
        auVar102._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar89 * adStack_1178[0])) +
             (double)((ulonglong)(dVar71 * (double)local_1080._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_f78) & __real_7fffffffffffffff);
        auVar102._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar90 * adStack_1178[1])) +
             (double)((ulonglong)(dVar74 * dStack_1070) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * dStack_f70) & __real_7fffffffffffffff);
        auVar102._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar91 * adStack_1178[2])) +
             (double)((ulonglong)(dVar77 * dStack_1068) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar124 * dStack_f68) & __real_7fffffffffffffff);
        auVar115._0_8_ =
             dVar24 * local_f40 +
             dVar23 * (double)local_1140._0_8_ + dVar61 * (double)local_1040._0_8_ + local_e40;
        auVar115._8_8_ =
             dVar45 * dStack_f38 +
             dVar44 * (double)local_1140._8_8_ + dVar70 * (double)local_1040._8_8_ + dStack_e38;
        auVar115._16_8_ =
             dVar51 * dStack_f30 + dVar50 * dStack_1130 + dVar73 * dStack_1030 + dStack_e30;
        auVar115._24_8_ =
             dVar57 * dStack_f28 + dVar56 * dStack_1128 + dVar76 * dStack_1028 + dStack_e28;
        auVar155._0_8_ =
             (double)((ulonglong)(dVar144 * local_f60) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar26 * (double)local_1160) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_1060._0_8_) & __real_7fffffffffffffff);
        auVar155._8_8_ =
             (double)((ulonglong)(dVar146 * dStack_f58) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar47 * adStack_1158[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * (double)local_1060._8_8_) & __real_7fffffffffffffff);
        auVar155._16_8_ =
             (double)((ulonglong)(dVar147 * dStack_f50) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar53 * adStack_1158[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar84 * dStack_1050) & __real_7fffffffffffffff);
        auVar155._24_8_ =
             (double)((ulonglong)(dVar148 * dStack_f48) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar59 * adStack_1158[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar85 * dStack_1048) & __real_7fffffffffffffff);
        auVar139._0_8_ =
             local_ee0 * dVar25 + (double)local_10e0._0_8_ * dVar22 + dVar60 * local_fe0 + local_de0
        ;
        auVar139._8_8_ =
             dStack_ed8 * dVar46 + (double)local_10e0._8_8_ * dVar43 + dVar69 * dStack_fd8 +
             dStack_dd8;
        auVar139._16_8_ =
             dStack_ed0 * dVar52 + dStack_10d0 * dVar49 + dVar72 * dStack_fd0 + dStack_dd0;
        auVar139._24_8_ =
             dStack_ec8 * dVar58 + dStack_10c8 * dVar55 + dVar75 * dStack_fc8 + dStack_dc8;
        auVar149._0_8_ =
             (double)((ulonglong)(dVar86 * (double)local_1140._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar62 * (double)local_1040._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar113 * local_f40) & __real_7fffffffffffffff);
        auVar149._8_8_ =
             (double)((ulonglong)(dVar89 * (double)local_1140._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * (double)local_1040._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_f38) & __real_7fffffffffffffff);
        auVar149._16_8_ =
             (double)((ulonglong)(dVar90 * dStack_1130) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar74 * dStack_1030) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * dStack_f30) & __real_7fffffffffffffff);
        auVar149._24_8_ =
             (double)((ulonglong)(dVar91 * dStack_1128) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * dStack_1028) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar124 * dStack_f28) & __real_7fffffffffffffff);
        auVar105._0_8_ =
             local_f00 * dVar24 + (double)local_1100._0_8_ * dVar23 + dVar61 * dVar1 + local_e00;
        auVar105._8_8_ =
             dStack_ef8 * dVar45 + (double)local_1100._8_8_ * dVar44 + dVar70 * dStack_ff8 +
             dStack_df8;
        auVar105._16_8_ =
             dStack_ef0 * dVar51 + dStack_10f0 * dVar50 + dVar73 * dStack_ff0 + dStack_df0;
        auVar105._24_8_ =
             dStack_ee8 * dVar57 + dStack_10e8 * dVar56 + dVar76 * dStack_fe8 + dStack_de8;
        auVar132._0_8_ =
             (double)((ulonglong)(dVar144 * local_f20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar26 * (double)local_1120._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_1020._0_8_) & __real_7fffffffffffffff);
        auVar132._8_8_ =
             (double)((ulonglong)(dVar146 * dStack_f18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar47 * (double)local_1120._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * (double)local_1020._8_8_) & __real_7fffffffffffffff);
        auVar132._16_8_ =
             (double)((ulonglong)(dVar147 * dStack_f10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar53 * dStack_1110) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar84 * dStack_1010) & __real_7fffffffffffffff);
        auVar132._24_8_ =
             (double)((ulonglong)(dVar148 * dStack_f08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar59 * dStack_1108) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar85 * dStack_1008) & __real_7fffffffffffffff);
        auVar136._0_8_ =
             (double)((ulonglong)(dVar86 * (double)local_1100._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar62 * dVar1) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar113 * local_f00) & __real_7fffffffffffffff);
        auVar136._8_8_ =
             (double)((ulonglong)(dVar89 * (double)local_1100._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * dStack_ff8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar122 * dStack_ef8) & __real_7fffffffffffffff);
        auVar136._16_8_ =
             (double)((ulonglong)(dVar90 * dStack_10f0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar74 * dStack_ff0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar123 * dStack_ef0) & __real_7fffffffffffffff);
        auVar136._24_8_ =
             (double)((ulonglong)(dVar91 * dStack_10e8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * dStack_fe8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar124 * dStack_ee8) & __real_7fffffffffffffff);
        auVar104._0_8_ =
             (double)((ulonglong)(dVar144 * local_ee0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar26 * (double)local_10e0._0_8_)) +
             (double)((ulonglong)(dVar78 * local_fe0) & __real_7fffffffffffffff);
        auVar104._8_8_ =
             (double)((ulonglong)(dVar146 * dStack_ed8) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar47 * (double)local_10e0._8_8_)) +
             (double)((ulonglong)(dVar83 * dStack_fd8) & __real_7fffffffffffffff);
        auVar104._16_8_ =
             (double)((ulonglong)(dVar147 * dStack_ed0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar53 * dStack_10d0)) +
             (double)((ulonglong)(dVar84 * dStack_fd0) & __real_7fffffffffffffff);
        auVar104._24_8_ =
             (double)((ulonglong)(dVar148 * dStack_ec8) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar59 * dStack_10c8)) +
             (double)((ulonglong)(dVar85 * dStack_fc8) & __real_7fffffffffffffff);
        auVar93 = vsubpd_avx(auVar129,auVar102);
        auVar81 = vsubpd_avx(auVar106,auVar155);
        auVar94 = vsubpd_avx(auVar115,auVar149);
        auVar125 = vsubpd_avx(auVar152,auVar132);
        local_15e0._8_8_ = auVar129._8_8_ + auVar102._8_8_;
        local_15e0._0_8_ = auVar129._0_8_ + auVar102._0_8_;
        dStack_15d0 = auVar129._16_8_ + auVar102._16_8_;
        dStack_15c8 = auVar129._24_8_ + auVar102._24_8_;
        auVar95 = vsubpd_avx(auVar105,auVar136);
        local_15c0._8_8_ = auVar155._8_8_ + auVar106._8_8_;
        local_15c0._0_8_ = auVar155._0_8_ + auVar106._0_8_;
        dStack_15b0 = auVar155._16_8_ + auVar106._16_8_;
        dStack_15a8 = auVar155._24_8_ + auVar106._24_8_;
        auVar96 = vsubpd_avx(auVar139,auVar104);
        auVar126._0_8_ = auVar149._0_8_ + auVar115._0_8_;
        auVar126._8_8_ = auVar149._8_8_ + auVar115._8_8_;
        auVar126._16_8_ = auVar149._16_8_ + auVar115._16_8_;
        auVar126._24_8_ = auVar149._24_8_ + auVar115._24_8_;
        auVar153._0_8_ = auVar132._0_8_ + auVar152._0_8_;
        auVar153._8_8_ = auVar132._8_8_ + auVar152._8_8_;
        auVar153._16_8_ = auVar132._16_8_ + auVar152._16_8_;
        auVar153._24_8_ = auVar132._24_8_ + auVar152._24_8_;
        auVar108._0_8_ = auVar136._0_8_ + auVar105._0_8_;
        auVar108._8_8_ = auVar136._8_8_ + auVar105._8_8_;
        auVar108._16_8_ = auVar136._16_8_ + auVar105._16_8_;
        auVar108._24_8_ = auVar136._24_8_ + auVar105._24_8_;
        auVar140._0_8_ = auVar139._0_8_ + auVar104._0_8_;
        auVar140._8_8_ = auVar139._8_8_ + auVar104._8_8_;
        auVar140._16_8_ = auVar139._16_8_ + auVar104._16_8_;
        auVar140._24_8_ = auVar139._24_8_ + auVar104._24_8_;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = local_11c0;
        auVar30 = vpcmpeqb_avx(auVar30,ZEXT816(0) << 0x40);
        auVar98 = vpmovsxbd_avx2(auVar30 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar97 = vpand_avx2(auVar98,auVar31);
        iVar20 = vmovmskps_avx(auVar97);
        if (iVar20 == 0) {
          auVar97 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a55c10:
          auVar28 = vpmovzxbw_avx(auVar30);
          auVar30 = vpand_avx(auVar28,auVar3);
          auVar30 = vpshufb_avx(auVar30,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
            auVar98 = vpmovzxwd_avx2(auVar28);
            auVar98 = vpslld_avx2(auVar98,0x1f);
            auVar99 = vpsrad_avx2(auVar98,0x1f);
            auVar98 = auVar31 & auVar99;
            if ((((((((SUB321(auVar98 >> 0x1f,0) & 1) != 0 || (SUB321(auVar98 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar98 >> 0x5f,0) & 1) != 0) || SUB321(auVar98 >> 0x7f,0) != '\0')
                  || (SUB321(auVar98 >> 0x9f,0) & 1) != 0) || SUB321(auVar98 >> 0xbf,0) != '\0') ||
                (SUB321(auVar98 >> 0xdf,0) & 1) != 0) || auVar98[0x1f] < '\0') {
              auVar100 = vpermpd_avx2(auVar99,0xd8);
              auVar98 = vshufps_avx(auVar100,auVar100,0x50);
              auVar100 = vshufps_avx(auVar100,auVar100,0xfa);
              _local_1180 = vmaskmovpd_avx(auVar98,auVar93);
              _local_1160 = vmaskmovpd_avx(auVar100,auVar81);
              _local_1140 = vmaskmovpd_avx(auVar98,auVar94);
              _local_1120 = vmaskmovpd_avx(auVar100,auVar125);
              _local_1100 = vmaskmovpd_avx(auVar98,auVar95);
              _local_10e0 = vmaskmovpd_avx(auVar100,auVar96);
              local_10c0 = vmaskmovpd_avx(auVar98,_local_15e0);
              local_10a0 = vmaskmovpd_avx(auVar100,_local_15c0);
              _local_1080 = vmaskmovpd_avx(auVar98,auVar126);
              _local_1060 = vmaskmovpd_avx(auVar100,auVar153);
              _local_1040 = vmaskmovpd_avx(auVar98,auVar108);
              _local_1020 = vmaskmovpd_avx(auVar100,auVar140);
              auVar30 = vpsllw_avx(auVar28,0xf);
              auVar30 = vpacksswb_avx(auVar30,auVar30);
              if ((SUB161(auVar30 >> 7,0) & 1) != 0) {
                local_1000 = 1;
              }
              if ((SUB161(auVar30 >> 0xf,0) & 1) != 0) {
                uStack_fff = 1;
              }
              if ((SUB161(auVar30 >> 0x17,0) & 1) != 0) {
                uStack_ffe = 1;
              }
              if ((SUB161(auVar30 >> 0x1f,0) & 1) != 0) {
                uStack_ffd = 1;
              }
              if ((SUB161(auVar30 >> 0x27,0) & 1) != 0) {
                uStack_ffc = 1;
              }
              if ((SUB161(auVar30 >> 0x2f,0) & 1) != 0) {
                uStack_ffb = 1;
              }
              if ((SUB161(auVar30 >> 0x37,0) & 1) != 0) {
                uStack_ffa = 1;
              }
              if ((SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
                uStack_ff9 = 1;
              }
              local_1460._0_4_ = auVar31._0_4_;
              local_1460._4_4_ = auVar31._4_4_;
              uStack_1458._0_4_ = auVar31._8_4_;
              uStack_1458._4_4_ = auVar31._12_4_;
              uStack_1450._0_4_ = auVar31._16_4_;
              uStack_1450._4_4_ = auVar31._20_4_;
              uStack_1448._0_4_ = auVar31._24_4_;
              uStack_1448._4_4_ = auVar31._28_4_;
              auVar32._0_4_ = auVar99._0_4_ & (uint)local_1460;
              auVar32._4_4_ = auVar99._4_4_ & local_1460._4_4_;
              auVar32._8_4_ = auVar99._8_4_ & (uint)uStack_1458;
              auVar32._12_4_ = auVar99._12_4_ & uStack_1458._4_4_;
              auVar32._16_4_ = auVar99._16_4_ & (uint)uStack_1450;
              auVar32._20_4_ = auVar99._20_4_ & uStack_1450._4_4_;
              auVar32._24_4_ = auVar99._24_4_ & (uint)uStack_1448;
              auVar32._28_4_ = auVar99._28_4_ & uStack_1448._4_4_;
              vmovmskps_avx(auVar97 | auVar32);
            }
          }
        }
        else {
          auVar99 = vminpd_avx(local_1340,auVar93);
          auVar101 = vpermq_avx2(auVar98,0xd8);
          auVar100 = vpshufd_avx2(auVar101,0x50);
          _local_1180 = vmaskmovpd_avx(auVar100,auVar99);
          auVar98 = vminpd_avx(local_1320,auVar81);
          auVar99 = vpshufd_avx2(auVar101,0xfa);
          _local_1160 = vmaskmovpd_avx(auVar99,auVar98);
          auVar98 = vminpd_avx(local_1300,auVar94);
          _local_1140 = vmaskmovpd_avx(auVar100,auVar98);
          auVar98 = vminpd_avx(local_12e0,auVar125);
          _local_1120 = vmaskmovpd_avx(auVar99,auVar98);
          auVar98 = vminpd_avx(local_12c0,auVar95);
          _local_1100 = vmaskmovpd_avx(auVar100,auVar98);
          auVar98 = vminpd_avx(local_12a0,auVar96);
          _local_10e0 = vmaskmovpd_avx(auVar99,auVar98);
          auVar98 = vmaxpd_avx(local_1280,_local_15e0);
          local_10c0 = vmaskmovpd_avx(auVar100,auVar98);
          auVar98 = vmaxpd_avx(local_1260,_local_15c0);
          local_10a0 = vmaskmovpd_avx(auVar99,auVar98);
          auVar98 = vmaxpd_avx(_local_1240,auVar126);
          _local_1080 = vmaskmovpd_avx(auVar100,auVar98);
          auVar98 = vmaxpd_avx(_local_1220,auVar153);
          _local_1060 = vmaskmovpd_avx(auVar99,auVar98);
          auVar98 = vmaxpd_avx(_local_1200,auVar108);
          _local_1040 = vmaskmovpd_avx(auVar100,auVar98);
          auVar98 = vmaxpd_avx(_local_11e0,auVar140);
          _local_1020 = vmaskmovpd_avx(auVar99,auVar98);
          auVar28._8_8_ = local_11c0;
          auVar28._0_8_ = local_11c0;
          auVar28 = vpcmpeqb_avx(auVar28,ZEXT816(0) << 0x40);
          bVar14 = ~(SUB161(auVar28 >> 7,0) & 1 | (SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar28 >> 0x17,0) & 1) << 2 | (SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar28 >> 0x27,0) & 1) << 4 | (SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar28 >> 0x37,0) & 1) << 6);
          if ((bVar14 & 1) != 0) {
            local_1000 = (undefined1)local_11c0;
          }
          if ((bVar14 & 2) != 0) {
            uStack_fff = (undefined1)(local_11c0 >> 8);
          }
          if ((bVar14 & 4) != 0) {
            uStack_ffe = (undefined1)(local_11c0 >> 0x10);
          }
          if ((bVar14 & 8) != 0) {
            uStack_ffd = (undefined1)(local_11c0 >> 0x18);
          }
          if ((bVar14 & 0x10) != 0) {
            uStack_ffc = (undefined1)(local_11c0 >> 0x20);
          }
          if ((bVar14 & 0x20) != 0) {
            uStack_ffb = (undefined1)(local_11c0 >> 0x28);
          }
          if ((bVar14 & 0x40) != 0) {
            uStack_ffa = (undefined1)(local_11c0 >> 0x30);
          }
          if ((SUB161(auVar28 >> 0x3f,0) & 1) == 0) {
            uStack_ff9 = (undefined1)(local_11c0 >> 0x38);
          }
          if ((byte)(bVar15 | bVar4 << 1 | bVar5 << 2 | bVar6 << 3 | bVar7 << 4 | bVar8 << 5 |
                     bVar9 << 6 | bVar10) != (byte)iVar20) goto LAB_140a55c10;
        }
        in_ZMM6 = ZEXT3264(local_10c0);
        auVar93 = vpermpd_avx2(auVar31,0xd8);
        auVar31 = vshufps_avx(auVar93,auVar93,0x50);
        auVar93 = vshufps_avx(auVar93,auVar93,0xfa);
        local_1340 = vmaskmovpd_avx(auVar31,_local_1180);
        local_1320 = vmaskmovpd_avx(auVar93,_local_1160);
        local_1300 = vmaskmovpd_avx(auVar31,_local_1140);
        local_12e0 = vmaskmovpd_avx(auVar93,_local_1120);
        local_12c0 = vmaskmovpd_avx(auVar31,_local_1100);
        local_12a0 = vmaskmovpd_avx(auVar93,_local_10e0);
        local_1280 = vmaskmovpd_avx(auVar31,local_10c0);
        local_1260 = vmaskmovpd_avx(auVar93,local_10a0);
        _local_1240 = vmaskmovpd_avx(auVar31,_local_1080);
        _local_1220 = vmaskmovpd_avx(auVar93,_local_1060);
        _local_1200 = vmaskmovpd_avx(auVar31,_local_1040);
        _local_11e0 = vmaskmovpd_avx(auVar93,_local_1020);
        uVar17 = local_11c0;
        if (bVar15 != 0) {
          local_11c0 = CONCAT71(local_11c0._1_7_,local_1000);
          uVar17 = local_11c0;
        }
        auVar135 = ZEXT864(0) << 0x40;
        if (bVar4 != 0) {
          local_11c0._2_6_ = (undefined6)(uVar17 >> 0x10);
          local_11c0._0_1_ = (undefined1)uVar17;
          local_11c0._0_2_ = CONCAT11(uStack_fff,(undefined1)local_11c0);
          uVar17 = local_11c0;
        }
        if (bVar5 != 0) {
          local_11c0._3_5_ = (undefined5)(uVar17 >> 0x18);
          local_11c0._0_2_ = (undefined2)uVar17;
          local_11c0._0_3_ = CONCAT12(uStack_ffe,(undefined2)local_11c0);
          uVar17 = local_11c0;
        }
        if (bVar6 != 0) {
          local_11c0._4_4_ = (undefined4)(uVar17 >> 0x20);
          local_11c0._0_3_ = (undefined3)uVar17;
          local_11c0._0_4_ = CONCAT13(uStack_ffd,(undefined3)local_11c0);
          uVar17 = local_11c0;
        }
        if (bVar7 != 0) {
          local_11c0._5_3_ = (undefined3)(uVar17 >> 0x28);
          local_11c0._0_4_ = (undefined4)uVar17;
          local_11c0._0_5_ = CONCAT14(uStack_ffc,(undefined4)local_11c0);
          uVar17 = local_11c0;
        }
        if (bVar8 != 0) {
          local_11c0._6_2_ = (undefined2)(uVar17 >> 0x30);
          local_11c0._0_5_ = (undefined5)uVar17;
          local_11c0._0_6_ = CONCAT15(uStack_ffb,(undefined5)local_11c0);
          uVar17 = local_11c0;
        }
        local_11c0 = uVar17;
        if (bVar9 != 0) {
          local_11c0._7_1_ = (undefined1)(uVar17 >> 0x38);
          local_11c0._0_6_ = (undefined6)uVar17;
          local_11c0._0_7_ = CONCAT16(uStack_ffa,(undefined6)local_11c0);
        }
        auVar131 = ZEXT3264(_local_940);
        if (bVar10 != 0) {
          local_11c0 = CONCAT17(uStack_ff9,(undefined7)local_11c0);
        }
      }
      iVar18 = iVar18 + 8;
    } while (iVar18 < (int)(uVar16 & 0xfffffff8));
  }
  if ((int)param_7 <= iVar18) {
    local_ce0._4_4_ = param_7;
    local_ce0._0_4_ = param_7;
    local_ce0._8_4_ = param_7;
    local_ce0._12_4_ = param_7;
    register0x00001410 = param_7;
    register0x00001414 = param_7;
    register0x00001418 = param_7;
    register0x0000141c = param_7;
    goto LAB_140a5756a;
  }
  auVar64._4_4_ = iVar18;
  auVar64._0_4_ = iVar18;
  auVar64._8_4_ = iVar18;
  auVar64._12_4_ = iVar18;
  auVar64._16_4_ = iVar18;
  auVar64._20_4_ = iVar18;
  auVar64._24_4_ = iVar18;
  auVar64._28_4_ = iVar18;
  auVar94 = vpor_avx2(auVar64,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  local_ce0._4_4_ = param_7;
  local_ce0._0_4_ = param_7;
  local_ce0._8_4_ = param_7;
  local_ce0._12_4_ = param_7;
  register0x00001410 = param_7;
  register0x00001414 = param_7;
  register0x00001418 = param_7;
  register0x0000141c = param_7;
  local_cc0 = vpcmpgtd_avx2(_local_ce0,auVar94);
  auVar31 = vmaskmovps_avx(local_cc0,*(undefined1 (*) [32])(param_2 + (iVar18 << 2)));
  auVar150._4_4_ = __real_00000038;
  auVar150._0_4_ = __real_00000038;
  auVar150._8_4_ = __real_00000038;
  auVar150._12_4_ = __real_00000038;
  auVar150._16_4_ = __real_00000038;
  auVar150._20_4_ = __real_00000038;
  auVar150._24_4_ = __real_00000038;
  auVar150._28_4_ = __real_00000038;
  auVar93 = vpmulld_avx2(auVar94,auVar150);
  auVar110._4_4_ = __real_00000030;
  auVar110._0_4_ = __real_00000030;
  auVar110._8_4_ = __real_00000030;
  auVar110._12_4_ = __real_00000030;
  auVar110._16_4_ = __real_00000030;
  auVar110._20_4_ = __real_00000030;
  auVar110._24_4_ = __real_00000030;
  auVar110._28_4_ = __real_00000030;
  auVar11._0_4_ = auVar93._0_4_ + __real_00000030;
  auVar11._4_4_ = auVar93._4_4_ + __real_00000030;
  auVar11._8_4_ = auVar93._8_4_ + __real_00000030;
  auVar11._12_4_ = auVar93._12_4_ + __real_00000030;
  auVar11._16_4_ = auVar93._16_4_ + __real_00000030;
  auVar11._20_4_ = auVar93._20_4_ + __real_00000030;
  auVar11._24_4_ = auVar93._24_4_ + __real_00000030;
  auVar11._28_4_ = auVar93._28_4_ + __real_00000030;
  auVar93 = vpand_avx2(local_cc0,auVar11);
  auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + auVar93._0_4_)),
                        (uint)*(byte *)(param_4 + auVar93._4_4_),1);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._8_4_),2);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._12_4_),3);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._16_4_),4);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._20_4_),5);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._24_4_),6);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar93._28_4_),7);
  auVar93 = vpslld_avx2(auVar31,2);
  auVar81 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),local_cc0);
  auVar93 = vpcmpeqd_avx2(auVar93,auVar93);
  auVar81 = vpcmpeqd_avx2(auVar81,auVar93);
  auVar30 = vpcmpeqb_avx(auVar30,(undefined1  [16])0x0);
  auVar3 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
  auVar93 = vpmovsxbd_avx2(auVar30 ^ auVar3);
  auVar93 = vpandn_avx2(auVar81,auVar93);
  _local_d20 = vpand_avx2(local_cc0,auVar93);
  uVar16 = vmovmskps_avx(_local_d20);
  if (uVar16 == 0) goto LAB_140a5756a;
  auVar93 = vpslld_avx2(auVar94,3);
  vpsubd_avx2(auVar93,auVar94);
  auVar93 = vpmovsxdq_avx2(local_cc0._0_16_);
  local_bc0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
  auVar94 = vpmovsxdq_avx2(local_cc0._16_16_);
  auVar105 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar94);
  auVar65._4_4_ = __real_00000008;
  auVar65._0_4_ = __real_00000008;
  auVar65._8_4_ = __real_00000008;
  auVar65._12_4_ = __real_00000008;
  auVar65._16_4_ = __real_00000008;
  auVar65._20_4_ = __real_00000008;
  auVar65._24_4_ = __real_00000008;
  auVar65._28_4_ = __real_00000008;
  local_be0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
  auVar106 = vgatherdpd(ZEXT832(0) << 0x40,auVar94);
  auVar141._4_4_ = __real_00000010;
  auVar141._0_4_ = __real_00000010;
  auVar141._8_4_ = __real_00000010;
  auVar141._12_4_ = __real_00000010;
  auVar141._16_4_ = __real_00000010;
  auVar141._20_4_ = __real_00000010;
  auVar141._24_4_ = __real_00000010;
  auVar141._28_4_ = __real_00000010;
  local_c00 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  local_c20 = vgatherdpd(ZEXT832(0) << 0x40,auVar94);
  auVar127._4_4_ = __real_00000018;
  auVar127._0_4_ = __real_00000018;
  auVar127._8_4_ = __real_00000018;
  auVar127._12_4_ = __real_00000018;
  auVar127._16_4_ = __real_00000018;
  auVar127._20_4_ = __real_00000018;
  auVar127._24_4_ = __real_00000018;
  auVar127._28_4_ = __real_00000018;
  local_c40 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar125 = vgatherdpd(ZEXT832(0) << 0x40,auVar94);
  auVar130._4_4_ = __real_00000020;
  auVar130._0_4_ = __real_00000020;
  auVar130._8_4_ = __real_00000020;
  auVar130._12_4_ = __real_00000020;
  auVar130._16_4_ = __real_00000020;
  auVar130._20_4_ = __real_00000020;
  auVar130._24_4_ = __real_00000020;
  auVar130._28_4_ = __real_00000020;
  local_c60 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  _local_d00 = vgatherdpd(ZEXT832(0) << 0x40,auVar94);
  auVar137._4_4_ = __real_00000028;
  auVar137._0_4_ = __real_00000028;
  auVar137._8_4_ = __real_00000028;
  auVar137._12_4_ = __real_00000028;
  auVar137._16_4_ = __real_00000028;
  auVar137._20_4_ = __real_00000028;
  auVar137._24_4_ = __real_00000028;
  auVar137._28_4_ = __real_00000028;
  local_c80 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  local_ca0 = vgatherdpd(ZEXT832(0) << 0x40,auVar94);
  auVar104 = vpslld_avx2(auVar31,7);
  auVar31 = vpmovsxdq_avx2(local_d20._16_16_);
  auVar100 = vgatherdpd(ZEXT832(0),auVar31);
  vpor_avx2(auVar104,auVar65);
  auVar93 = vpmovsxdq_avx2(local_d20);
  auVar101 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar103 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar141,auVar104);
  auVar107 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar109 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar104,auVar127);
  auVar116 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar117 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar130,auVar104);
  auVar118 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar119 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar137,auVar104);
  auVar120 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar102 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar104,auVar110);
  auVar94 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
  auVar95 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  vpor_avx2(auVar150,auVar104);
  auVar96 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar97 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  auVar33._4_4_ = __real_00000040;
  auVar33._0_4_ = __real_00000040;
  auVar33._8_4_ = __real_00000040;
  auVar33._12_4_ = __real_00000040;
  auVar33._16_4_ = __real_00000040;
  auVar33._20_4_ = __real_00000040;
  auVar33._24_4_ = __real_00000040;
  auVar33._28_4_ = __real_00000040;
  vpor_avx2(auVar104,auVar33);
  auVar98 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  auVar99 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  auVar34._4_4_ = __real_00000048;
  auVar34._0_4_ = __real_00000048;
  auVar34._8_4_ = __real_00000048;
  auVar34._12_4_ = __real_00000048;
  auVar34._16_4_ = __real_00000048;
  auVar34._20_4_ = __real_00000048;
  auVar34._24_4_ = __real_00000048;
  auVar34._28_4_ = __real_00000048;
  vpor_avx2(auVar104,auVar34);
  local_6c0 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  local_6a0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar31);
  auVar35._4_4_ = __real_00000050;
  auVar35._0_4_ = __real_00000050;
  auVar35._8_4_ = __real_00000050;
  auVar35._12_4_ = __real_00000050;
  auVar35._16_4_ = __real_00000050;
  auVar35._20_4_ = __real_00000050;
  auVar35._24_4_ = __real_00000050;
  auVar35._28_4_ = __real_00000050;
  vpor_avx2(auVar104,auVar35);
  local_680 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar93);
  local_660 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar31);
  auVar36._4_4_ = __real_00000058;
  auVar36._0_4_ = __real_00000058;
  auVar36._8_4_ = __real_00000058;
  auVar36._12_4_ = __real_00000058;
  auVar36._16_4_ = __real_00000058;
  auVar36._20_4_ = __real_00000058;
  auVar36._24_4_ = __real_00000058;
  auVar36._28_4_ = __real_00000058;
  vpor_avx2(auVar104,auVar36);
  local_640 = vgatherdpd(ZEXT832(0) << 0x20,auVar93);
  local_620 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar31);
  auVar37._4_4_ = __real_00000060;
  auVar37._0_4_ = __real_00000060;
  auVar37._8_4_ = __real_00000060;
  auVar37._12_4_ = __real_00000060;
  auVar37._16_4_ = __real_00000060;
  auVar37._20_4_ = __real_00000060;
  auVar37._24_4_ = __real_00000060;
  auVar37._28_4_ = __real_00000060;
  vpor_avx2(auVar104,auVar37);
  local_600 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
  local_5e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar31);
  auVar38._4_4_ = __real_00000068;
  auVar38._0_4_ = __real_00000068;
  auVar38._8_4_ = __real_00000068;
  auVar38._12_4_ = __real_00000068;
  auVar38._16_4_ = __real_00000068;
  auVar38._20_4_ = __real_00000068;
  auVar38._24_4_ = __real_00000068;
  auVar38._28_4_ = __real_00000068;
  vpor_avx2(auVar104,auVar38);
  _local_5c0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar93);
  _local_5a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  auVar39._4_4_ = __real_00000070;
  auVar39._0_4_ = __real_00000070;
  auVar39._8_4_ = __real_00000070;
  auVar39._12_4_ = __real_00000070;
  auVar39._16_4_ = __real_00000070;
  auVar39._20_4_ = __real_00000070;
  auVar39._24_4_ = __real_00000070;
  auVar39._28_4_ = __real_00000070;
  vpor_avx2(auVar104,auVar39);
  _local_580 = vgatherdpd(ZEXT832(0),auVar93);
  _local_560 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  _local_900 = vgatherdpd(ZEXT832(0),auVar93);
  _local_540 = vgatherdpd(ZEXT832(0) << 0x40,auVar93);
  _local_520 = vgatherdpd(ZEXT832(0) << 0x40,auVar31);
  local_15e0._0_8_ = auVar100._0_8_;
  local_15e0._8_8_ = auVar100._8_8_;
  dStack_15d0 = auVar100._16_8_;
  dStack_15c8 = auVar100._24_8_;
  adStack_8f0[2] = (double)local_15e0._0_8_;
  adStack_8f0[3] = (double)local_15e0._8_8_;
  adStack_8f0[4] = dStack_15d0;
  adStack_8f0[5] = dStack_15c8;
  local_15a0 = auVar103._0_8_;
  uStack_1598 = auVar103._8_8_;
  uStack_1590 = auVar103._16_8_;
  uStack_1588 = auVar103._24_8_;
  local_8a0 = local_15a0;
  uStack_898 = uStack_1598;
  uStack_890 = uStack_1590;
  uStack_888 = uStack_1588;
  local_1580._0_8_ = auVar101._0_8_;
  local_1580._8_8_ = auVar101._8_8_;
  dStack_1570 = auVar101._16_8_;
  dStack_1568 = auVar101._24_8_;
  adStack_8f0[6] = (double)local_1580._0_8_;
  adStack_8f0[7] = (double)local_1580._8_8_;
  adStack_8f0[8] = dStack_1570;
  uStack_8a8 = dStack_1568;
  local_1540 = auVar109._0_8_;
  uStack_1538 = auVar109._8_8_;
  uStack_1530 = auVar109._16_8_;
  uStack_1528 = auVar109._24_8_;
  local_860 = local_1540;
  uStack_858 = uStack_1538;
  uStack_850 = uStack_1530;
  uStack_848 = uStack_1528;
  local_1520 = auVar107._0_8_;
  uStack_1518 = auVar107._8_8_;
  uStack_1510 = auVar107._16_8_;
  uStack_1508 = auVar107._24_8_;
  local_880 = local_1520;
  uStack_878 = uStack_1518;
  uStack_870 = uStack_1510;
  uStack_868 = uStack_1508;
  local_1480 = auVar117._0_8_;
  uStack_1478 = auVar117._8_8_;
  uStack_1470 = auVar117._16_8_;
  uStack_1468 = auVar117._24_8_;
  local_820 = local_1480;
  uStack_818 = uStack_1478;
  uStack_810 = uStack_1470;
  uStack_808 = uStack_1468;
  local_1560 = auVar116._0_8_;
  uStack_1558 = auVar116._8_8_;
  uStack_1550 = auVar116._16_8_;
  uStack_1548 = auVar116._24_8_;
  local_840 = local_1560;
  uStack_838 = uStack_1558;
  uStack_830 = uStack_1550;
  uStack_828 = uStack_1548;
  local_14c0 = auVar119._0_8_;
  uStack_14b8 = auVar119._8_8_;
  uStack_14b0 = auVar119._16_8_;
  uStack_14a8 = auVar119._24_8_;
  local_7e0 = local_14c0;
  uStack_7d8 = uStack_14b8;
  uStack_7d0 = uStack_14b0;
  uStack_7c8 = uStack_14a8;
  local_14a0 = auVar118._0_8_;
  uStack_1498 = auVar118._8_8_;
  uStack_1490 = auVar118._16_8_;
  uStack_1488 = auVar118._24_8_;
  local_800 = local_14a0;
  uStack_7f8 = uStack_1498;
  uStack_7f0 = uStack_1490;
  uStack_7e8 = uStack_1488;
  local_1500 = auVar102._0_8_;
  uStack_14f8 = auVar102._8_8_;
  uStack_14f0 = auVar102._16_8_;
  uStack_14e8 = auVar102._24_8_;
  local_7a0 = local_1500;
  uStack_798 = uStack_14f8;
  uStack_790 = uStack_14f0;
  uStack_788 = uStack_14e8;
  local_14e0 = auVar120._0_8_;
  uStack_14d8 = auVar120._8_8_;
  uStack_14d0 = auVar120._16_8_;
  uStack_14c8 = auVar120._24_8_;
  local_7c0 = local_14e0;
  uStack_7b8 = uStack_14d8;
  uStack_7b0 = uStack_14d0;
  uStack_7a8 = uStack_14c8;
  local_1380 = auVar95._0_8_;
  uStack_1378 = auVar95._8_8_;
  uStack_1370 = auVar95._16_8_;
  uStack_1368 = auVar95._24_8_;
  local_760 = local_1380;
  uStack_758 = uStack_1378;
  uStack_750 = uStack_1370;
  uStack_748 = uStack_1368;
  local_1360 = auVar94._0_8_;
  uStack_1358 = auVar94._8_8_;
  uStack_1350 = auVar94._16_8_;
  uStack_1348 = auVar94._24_8_;
  local_780 = local_1360;
  uStack_778 = uStack_1358;
  uStack_770 = uStack_1350;
  uStack_768 = uStack_1348;
  local_13c0 = auVar97._0_8_;
  uStack_13b8 = auVar97._8_8_;
  uStack_13b0 = auVar97._16_8_;
  uStack_13a8 = auVar97._24_8_;
  local_720 = local_13c0;
  uStack_718 = uStack_13b8;
  uStack_710 = uStack_13b0;
  uStack_708 = uStack_13a8;
  local_13a0 = auVar96._0_8_;
  uStack_1398 = auVar96._8_8_;
  uStack_1390 = auVar96._16_8_;
  uStack_1388 = auVar96._24_8_;
  local_740 = local_13a0;
  uStack_738 = uStack_1398;
  uStack_730 = uStack_1390;
  uStack_728 = uStack_1388;
  local_d60 = auVar99._0_8_;
  uStack_d58 = auVar99._8_8_;
  uStack_d50 = auVar99._16_8_;
  uStack_d48 = auVar99._24_8_;
  local_6e0 = local_d60;
  uStack_6d8 = uStack_d58;
  uStack_6d0 = uStack_d50;
  uStack_6c8 = uStack_d48;
  local_d40 = auVar98._0_8_;
  uStack_d38 = auVar98._8_8_;
  uStack_d30 = auVar98._16_8_;
  uStack_d28 = auVar98._24_8_;
  local_700 = local_d40;
  uStack_6f8 = uStack_d38;
  uStack_6f0 = uStack_d30;
  uStack_6e8 = uStack_d28;
  auVar31 = vpcmpeqd_avx2(local_6c0,local_6c0);
  auVar28 = vpackssdw_avx(SUB3216(auVar31 ^ auVar81,0),SUB3216(auVar31 ^ auVar81,0x10));
  local_1600 = SUB168(auVar30 ^ auVar3,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_1600;
  auVar30 = vpmovsxbw_avx(auVar3);
  auVar30 = vpand_avx(auVar28,auVar30);
  dVar1 = param_5[8];
  dVar22 = param_5[0xc];
  dVar23 = *param_5;
  lVar21 = 0xc0;
  dVar24 = param_5[1];
  dVar25 = param_5[5];
  dVar26 = param_5[9];
  dVar43 = param_5[0xd];
  dVar44 = param_5[2];
  dVar45 = param_5[6];
  dVar46 = param_5[10];
  dVar47 = param_5[0xe];
  dVar49 = param_5[3];
  dVar50 = param_5[7];
  dVar51 = param_5[0xb];
  dVar52 = param_5[0xf];
  do {
    dVar55 = *(double *)((longlong)local_9c0 + lVar21);
    dVar56 = *(double *)((longlong)local_9c0 + lVar21 + 8);
    dVar57 = *(double *)((longlong)local_9c0 + lVar21 + 0x10);
    dVar58 = *(double *)((longlong)local_9c0 + lVar21 + 0x18);
    dVar59 = *(double *)((longlong)local_9c0 + lVar21 + 0x20);
    dVar60 = *(double *)((longlong)local_9c0 + lVar21 + 0x28);
    dVar61 = *(double *)((longlong)local_9c0 + lVar21 + 0x30);
    dVar62 = *(double *)((longlong)local_9c0 + lVar21 + 0x38);
    dVar69 = *(double *)((longlong)local_9c0 + lVar21 + 0x40);
    dVar70 = *(double *)((longlong)local_9c0 + lVar21 + 0x48);
    dVar71 = *(double *)((longlong)local_9c0 + lVar21 + 0x50);
    dVar72 = *(double *)((longlong)local_9c0 + lVar21 + 0x58);
    dVar73 = *(double *)((longlong)local_9c0 + lVar21 + 0x60);
    dVar74 = *(double *)((longlong)local_9c0 + lVar21 + 0x68);
    dVar75 = *(double *)((longlong)local_9c0 + lVar21 + 0x70);
    dVar76 = *(double *)(local_940 + lVar21 + -8);
    dVar77 = *(double *)(local_940 + lVar21);
    dVar78 = *(double *)(local_940 + lVar21 + 8);
    dVar83 = *(double *)(local_940 + lVar21 + 0x10);
    dVar84 = *(double *)(local_940 + lVar21 + 0x18);
    dVar85 = *(double *)((longlong)adStack_930 + lVar21 + 0x10);
    dVar86 = *(double *)((longlong)adStack_930 + lVar21 + 0x18);
    dVar89 = *(double *)((longlong)adStack_930 + lVar21 + 0x20);
    dVar90 = *(double *)(local_900 + lVar21 + -8);
    dVar91 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x10);
    dVar113 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x18);
    dVar122 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x20);
    dVar123 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x28);
    dVar53 = param_5[4];
    *(double *)(local_1220 + lVar21) =
         dVar91 * dVar22 + dVar85 * dVar1 + dVar73 * dVar53 + dVar59 * dVar23 + 0.0;
    *(double *)(local_1220 + lVar21 + 8) =
         dVar113 * dVar22 + dVar86 * dVar1 + dVar74 * dVar53 + dVar60 * dVar23 + 0.0;
    *(double *)(local_1220 + lVar21 + 0x10) =
         dVar122 * dVar22 + dVar89 * dVar1 + dVar75 * dVar53 + dVar61 * dVar23 + 0.0;
    *(double *)(auStack_1210 + lVar21 + 8) =
         dVar123 * dVar22 + dVar90 * dVar1 + dVar76 * dVar53 + dVar62 * dVar23 + 0.0;
    dVar124 = *(double *)(local_900 + lVar21);
    dVar144 = *(double *)(local_900 + lVar21 + 8);
    dVar146 = *(double *)(local_900 + lVar21 + 0x10);
    dVar147 = *(double *)(local_900 + lVar21 + 0x18);
    *(double *)(local_1240 + lVar21) =
         dVar124 * dVar22 + dVar77 * dVar1 + dVar69 * dVar53 + dVar55 * dVar23 + 0.0;
    *(double *)(local_1240 + lVar21 + 8) =
         dVar144 * dVar22 + dVar78 * dVar1 + dVar70 * dVar53 + dVar56 * dVar23 + 0.0;
    *(double *)(local_1240 + lVar21 + 0x10) =
         dVar146 * dVar22 + dVar83 * dVar1 + dVar71 * dVar53 + dVar57 * dVar23 + 0.0;
    *(double *)(auStack_1230 + lVar21 + 8) =
         dVar147 * dVar22 + dVar84 * dVar1 + dVar72 * dVar53 + dVar58 * dVar23 + 0.0;
    *(double *)(local_11e0 + lVar21) =
         dVar91 * dVar43 + dVar85 * dVar26 + dVar73 * dVar25 + dVar59 * dVar24 + 0.0;
    *(double *)(local_11e0 + lVar21 + 8) =
         dVar113 * dVar43 + dVar86 * dVar26 + dVar74 * dVar25 + dVar60 * dVar24 + 0.0;
    *(double *)(local_11e0 + lVar21 + 0x10) =
         dVar122 * dVar43 + dVar89 * dVar26 + dVar75 * dVar25 + dVar61 * dVar24 + 0.0;
    *(double *)(local_11e0 + lVar21 + 0x18) =
         dVar123 * dVar43 + dVar90 * dVar26 + dVar76 * dVar25 + dVar62 * dVar24 + 0.0;
    *(double *)(local_1200 + lVar21) =
         dVar124 * dVar43 + dVar77 * dVar26 + dVar69 * dVar25 + dVar55 * dVar24 + 0.0;
    *(double *)(local_1200 + lVar21 + 8) =
         dVar144 * dVar43 + dVar78 * dVar26 + dVar70 * dVar25 + dVar56 * dVar24 + 0.0;
    *(double *)(local_1200 + lVar21 + 0x10) =
         dVar146 * dVar43 + dVar83 * dVar26 + dVar71 * dVar25 + dVar57 * dVar24 + 0.0;
    *(double *)(local_1200 + lVar21 + 0x18) =
         dVar147 * dVar43 + dVar84 * dVar26 + dVar72 * dVar25 + dVar58 * dVar24 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x18) =
         dVar91 * dVar47 + dVar85 * dVar46 + dVar73 * dVar45 + dVar59 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x20) =
         dVar113 * dVar47 + dVar86 * dVar46 + dVar74 * dVar45 + dVar60 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x28) =
         dVar122 * dVar47 + dVar89 * dVar46 + dVar75 * dVar45 + dVar61 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x30) =
         dVar123 * dVar47 + dVar90 * dVar46 + dVar76 * dVar45 + dVar62 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + -8) =
         dVar124 * dVar47 + dVar77 * dVar46 + dVar69 * dVar45 + dVar55 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21) =
         dVar144 * dVar47 + dVar78 * dVar46 + dVar70 * dVar45 + dVar56 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 8) =
         dVar146 * dVar47 + dVar83 * dVar46 + dVar71 * dVar45 + dVar57 * dVar44 + 0.0;
    *(double *)((longlong)adStack_11b8 + lVar21 + 0x10) =
         dVar147 * dVar47 + dVar84 * dVar46 + dVar72 * dVar45 + dVar58 * dVar44 + 0.0;
    *(double *)(local_1160 + lVar21) =
         dVar52 * dVar91 + dVar51 * dVar85 + dVar50 * dVar73 + dVar49 * dVar59 + 0.0;
    *(double *)(local_1160 + lVar21 + 8) =
         dVar52 * dVar113 + dVar51 * dVar86 + dVar50 * dVar74 + dVar49 * dVar60 + 0.0;
    *(double *)(local_1160 + lVar21 + 0x10) =
         dVar52 * dVar122 + dVar51 * dVar89 + dVar50 * dVar75 + dVar49 * dVar61 + 0.0;
    *(double *)(local_1160 + lVar21 + 0x18) =
         dVar52 * dVar123 + dVar51 * dVar90 + dVar50 * dVar76 + dVar49 * dVar62 + 0.0;
    *(double *)(local_1180 + lVar21) =
         dVar52 * dVar124 + dVar51 * dVar77 + dVar50 * dVar69 + dVar49 * dVar55 + 0.0;
    *(double *)(local_1180 + lVar21 + 8) =
         dVar52 * dVar144 + dVar51 * dVar78 + dVar50 * dVar70 + dVar49 * dVar56 + 0.0;
    *(double *)(local_1180 + lVar21 + 0x10) =
         dVar52 * dVar146 + dVar51 * dVar83 + dVar50 * dVar71 + dVar49 * dVar57 + 0.0;
    *(double *)(local_1180 + lVar21 + 0x18) =
         dVar52 * dVar147 + dVar51 * dVar84 + dVar50 * dVar72 + dVar49 * dVar58 + 0.0;
    lVar21 = lVar21 + 0x100;
  } while (lVar21 != 0x4c0);
  local_1460 = auVar105._0_8_;
  uStack_1458 = auVar105._8_8_;
  uStack_1450 = auVar105._16_8_;
  uStack_1448 = auVar105._24_8_;
  local_1400 = auVar125._0_8_;
  dStack_13f8 = auVar125._8_8_;
  dStack_13f0 = auVar125._16_8_;
  dStack_13e8 = auVar125._24_8_;
  local_1420 = auVar106._0_8_;
  dStack_1418 = auVar106._8_8_;
  dStack_1410 = auVar106._16_8_;
  dStack_1408 = auVar106._24_8_;
  dVar22 = __real_3fe0000000000000 * (local_1460 + local_1400);
  dVar43 = __real_3fe0000000000000 * (uStack_1458 + dStack_13f8);
  dVar49 = __real_3fe0000000000000 * (uStack_1450 + dStack_13f0);
  dVar55 = __real_3fe0000000000000 * (uStack_1448 + dStack_13e8);
  dVar70 = __real_3fe0000000000000 * (local_1420 + (double)local_d00._0_8_);
  dVar71 = __real_3fe0000000000000 * (dStack_1418 + (double)local_d00._8_8_);
  dVar72 = __real_3fe0000000000000 * (dStack_1410 + dStack_cf0);
  dVar73 = __real_3fe0000000000000 * (dStack_1408 + dStack_ce8);
  dVar23 = __real_3fe0000000000000 * (local_bc0._0_8_ + local_c40._0_8_);
  dVar44 = __real_3fe0000000000000 * (local_bc0._8_8_ + local_c40._8_8_);
  dVar50 = __real_3fe0000000000000 * (local_bc0._16_8_ + local_c40._16_8_);
  dVar56 = __real_3fe0000000000000 * (local_bc0._24_8_ + local_c40._24_8_);
  dVar74 = __real_3fe0000000000000 * (local_be0._0_8_ + local_c60._0_8_);
  dVar76 = __real_3fe0000000000000 * (local_be0._8_8_ + local_c60._8_8_);
  dVar78 = __real_3fe0000000000000 * (local_be0._16_8_ + local_c60._16_8_);
  dVar84 = __real_3fe0000000000000 * (local_be0._24_8_ + local_c60._24_8_);
  dVar1 = (double)CONCAT17(uStack_ff9,
                           CONCAT16(uStack_ffa,
                                    CONCAT15(uStack_ffb,
                                             CONCAT14(uStack_ffc,
                                                      CONCAT13(uStack_ffd,
                                                               CONCAT12(uStack_ffe,
                                                                        CONCAT11(uStack_fff,
                                                                                 local_1000)))))));
  dVar24 = __real_3fe0000000000000 * (local_c00._0_8_ + local_c80._0_8_);
  dVar45 = __real_3fe0000000000000 * (local_c00._8_8_ + local_c80._8_8_);
  dVar51 = __real_3fe0000000000000 * (local_c00._16_8_ + local_c80._16_8_);
  dVar57 = __real_3fe0000000000000 * (local_c00._24_8_ + local_c80._24_8_);
  dVar25 = __real_3fe0000000000000 * (local_c20._0_8_ + local_ca0._0_8_);
  dVar46 = __real_3fe0000000000000 * (local_c20._8_8_ + local_ca0._8_8_);
  dVar52 = __real_3fe0000000000000 * (local_c20._16_8_ + local_ca0._16_8_);
  dVar58 = __real_3fe0000000000000 * (local_c20._24_8_ + local_ca0._24_8_);
  auVar31 = vsubpd_avx(local_c40,local_bc0);
  auVar93 = vsubpd_avx(auVar125,auVar105);
  auVar81 = vsubpd_avx(local_c60,local_be0);
  auVar94 = vsubpd_avx(_local_d00,auVar106);
  auVar125 = vsubpd_avx(local_ca0,local_c20);
  auVar95 = vsubpd_avx(local_c80,local_c00);
  dVar26 = __real_3fe0000000000000 * auVar93._0_8_;
  dVar47 = __real_3fe0000000000000 * auVar93._8_8_;
  dVar53 = __real_3fe0000000000000 * auVar93._16_8_;
  dVar59 = __real_3fe0000000000000 * auVar93._24_8_;
  dVar75 = auVar31._0_8_ * __real_3fe0000000000000;
  dVar77 = auVar31._8_8_ * __real_3fe0000000000000;
  dVar83 = auVar31._16_8_ * __real_3fe0000000000000;
  dVar85 = auVar31._24_8_ * __real_3fe0000000000000;
  dVar60 = __real_3fe0000000000000 * auVar94._0_8_;
  dVar61 = __real_3fe0000000000000 * auVar94._8_8_;
  dVar62 = __real_3fe0000000000000 * auVar94._16_8_;
  dVar69 = __real_3fe0000000000000 * auVar94._24_8_;
  dVar86 = __real_3fe0000000000000 * auVar81._0_8_;
  dVar89 = __real_3fe0000000000000 * auVar81._8_8_;
  dVar90 = __real_3fe0000000000000 * auVar81._16_8_;
  dVar91 = __real_3fe0000000000000 * auVar81._24_8_;
  dVar113 = __real_3fe0000000000000 * auVar95._0_8_;
  dVar122 = __real_3fe0000000000000 * auVar95._8_8_;
  dVar123 = __real_3fe0000000000000 * auVar95._16_8_;
  dVar124 = __real_3fe0000000000000 * auVar95._24_8_;
  dVar144 = __real_3fe0000000000000 * auVar125._0_8_;
  dVar146 = __real_3fe0000000000000 * auVar125._8_8_;
  dVar147 = __real_3fe0000000000000 * auVar125._16_8_;
  dVar148 = __real_3fe0000000000000 * auVar125._24_8_;
  auVar82._0_8_ =
       dVar25 * local_f60 + dVar22 * (double)local_1160 + dVar70 * (double)local_1060._0_8_ +
       local_e60;
  auVar82._8_8_ =
       dVar46 * dStack_f58 + dVar43 * adStack_1158[0] + dVar71 * (double)local_1060._8_8_ +
       dStack_e58;
  auVar82._16_8_ =
       dVar52 * dStack_f50 + dVar49 * adStack_1158[1] + dVar72 * dStack_1050 + dStack_e50;
  auVar82._24_8_ =
       dVar58 * dStack_f48 + dVar55 * adStack_1158[2] + dVar73 * dStack_1048 + dStack_e48;
  auVar128._0_8_ =
       dVar24 * local_f80 + dVar23 * (double)local_1180 + dVar74 * (double)local_1080._0_8_ +
       local_e80;
  auVar128._8_8_ =
       dVar45 * dStack_f78 + dVar44 * adStack_1178[0] + dVar76 * (double)local_1080._8_8_ +
       dStack_e78;
  auVar128._16_8_ =
       dVar51 * dStack_f70 + dVar50 * adStack_1178[1] + dVar78 * dStack_1070 + dStack_e70;
  auVar128._24_8_ =
       dVar57 * dStack_f68 + dVar56 * adStack_1178[2] + dVar84 * dStack_1068 + dStack_e68;
  auVar151._0_8_ =
       dVar25 * local_f20 + dVar22 * (double)local_1120._0_8_ + dVar70 * (double)local_1020._0_8_ +
       local_e20;
  auVar151._8_8_ =
       dVar46 * dStack_f18 + dVar43 * (double)local_1120._8_8_ + dVar71 * (double)local_1020._8_8_ +
       dStack_e18;
  auVar151._16_8_ = dVar52 * dStack_f10 + dVar49 * dStack_1110 + dVar72 * dStack_1010 + dStack_e10;
  auVar151._24_8_ = dVar58 * dStack_f08 + dVar55 * dStack_1108 + dVar73 * dStack_1008 + dStack_e08;
  auVar133._0_8_ =
       dVar24 * local_f40 + dVar23 * (double)local_1140._0_8_ + dVar74 * (double)local_1040._0_8_ +
       local_e40;
  auVar133._8_8_ =
       dVar45 * dStack_f38 + dVar44 * (double)local_1140._8_8_ + dVar76 * (double)local_1040._8_8_ +
       dStack_e38;
  auVar133._16_8_ = dVar51 * dStack_f30 + dVar50 * dStack_1130 + dVar78 * dStack_1030 + dStack_e30;
  auVar133._24_8_ = dVar57 * dStack_f28 + dVar56 * dStack_1128 + dVar84 * dStack_1028 + dStack_e28;
  auVar40._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1180)) +
       (double)((ulonglong)(dVar86 * (double)local_1080._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar113 * local_f80) & __real_7fffffffffffffff);
  auVar40._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * adStack_1178[0])) +
       (double)((ulonglong)(dVar89 * (double)local_1080._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar122 * dStack_f78) & __real_7fffffffffffffff);
  auVar40._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar83 * adStack_1178[1])) +
       (double)((ulonglong)(dVar90 * dStack_1070) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar123 * dStack_f70) & __real_7fffffffffffffff);
  auVar40._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar85 * adStack_1178[2])) +
       (double)((ulonglong)(dVar91 * dStack_1068) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar124 * dStack_f68) & __real_7fffffffffffffff);
  auVar154._0_8_ =
       local_ee0 * dVar25 + (double)local_10e0._0_8_ * dVar22 + dVar70 * local_fe0 + local_de0;
  auVar154._8_8_ =
       dStack_ed8 * dVar46 + (double)local_10e0._8_8_ * dVar43 + dVar71 * dStack_fd8 + dStack_dd8;
  auVar154._16_8_ = dStack_ed0 * dVar52 + dStack_10d0 * dVar49 + dVar72 * dStack_fd0 + dStack_dd0;
  auVar154._24_8_ = dStack_ec8 * dVar58 + dStack_10c8 * dVar55 + dVar73 * dStack_fc8 + dStack_dc8;
  auVar142._0_8_ =
       (double)((ulonglong)(dVar144 * local_f60) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar26 * (double)local_1160) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar60 * (double)local_1060._0_8_) & __real_7fffffffffffffff);
  auVar142._8_8_ =
       (double)((ulonglong)(dVar146 * dStack_f58) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar47 * adStack_1158[0]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar61 * (double)local_1060._8_8_) & __real_7fffffffffffffff);
  auVar142._16_8_ =
       (double)((ulonglong)(dVar147 * dStack_f50) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar53 * adStack_1158[1]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar62 * dStack_1050) & __real_7fffffffffffffff);
  auVar142._24_8_ =
       (double)((ulonglong)(dVar148 * dStack_f48) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar59 * adStack_1158[2]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * dStack_1048) & __real_7fffffffffffffff);
  auVar138._0_8_ =
       local_f00 * dVar24 + (double)local_1100._0_8_ * dVar23 + dVar74 * dVar1 + local_e00;
  auVar138._8_8_ =
       dStack_ef8 * dVar45 + (double)local_1100._8_8_ * dVar44 + dVar76 * dStack_ff8 + dStack_df8;
  auVar138._16_8_ = dStack_ef0 * dVar51 + dStack_10f0 * dVar50 + dVar78 * dStack_ff0 + dStack_df0;
  auVar138._24_8_ = dStack_ee8 * dVar57 + dStack_10e8 * dVar56 + dVar84 * dStack_fe8 + dStack_de8;
  auVar66._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1140._0_8_)) +
       (double)((ulonglong)(dVar86 * (double)local_1040._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar113 * local_f40) & __real_7fffffffffffffff);
  auVar66._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * (double)local_1140._8_8_)) +
       (double)((ulonglong)(dVar89 * (double)local_1040._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar122 * dStack_f38) & __real_7fffffffffffffff);
  auVar66._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar83 * dStack_1130)) +
       (double)((ulonglong)(dVar90 * dStack_1030) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar123 * dStack_f30) & __real_7fffffffffffffff);
  auVar66._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar85 * dStack_1128)) +
       (double)((ulonglong)(dVar91 * dStack_1028) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar124 * dStack_f28) & __real_7fffffffffffffff);
  auVar156._0_8_ =
       (double)((ulonglong)(dVar144 * local_f20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar26 * (double)local_1120._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar60 * (double)local_1020._0_8_) & __real_7fffffffffffffff);
  auVar156._8_8_ =
       (double)((ulonglong)(dVar146 * dStack_f18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar47 * (double)local_1120._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar61 * (double)local_1020._8_8_) & __real_7fffffffffffffff);
  auVar156._16_8_ =
       (double)((ulonglong)(dVar147 * dStack_f10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar53 * dStack_1110) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar62 * dStack_1010) & __real_7fffffffffffffff);
  auVar156._24_8_ =
       (double)((ulonglong)(dVar148 * dStack_f08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar59 * dStack_1108) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * dStack_1008) & __real_7fffffffffffffff);
  auVar111._0_8_ =
       (double)((ulonglong)(dVar75 * (double)local_1100._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar86 * dVar1) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar113 * local_f00) & __real_7fffffffffffffff);
  auVar111._8_8_ =
       (double)((ulonglong)(dVar77 * (double)local_1100._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar89 * dStack_ff8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar122 * dStack_ef8) & __real_7fffffffffffffff);
  auVar111._16_8_ =
       (double)((ulonglong)(dVar83 * dStack_10f0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar90 * dStack_ff0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar123 * dStack_ef0) & __real_7fffffffffffffff);
  auVar111._24_8_ =
       (double)((ulonglong)(dVar85 * dStack_10e8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar91 * dStack_fe8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar124 * dStack_ee8) & __real_7fffffffffffffff);
  auVar121._0_8_ =
       (double)((ulonglong)(dVar144 * local_ee0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar26 * (double)local_10e0._0_8_)) +
       (double)((ulonglong)(dVar60 * local_fe0) & __real_7fffffffffffffff);
  auVar121._8_8_ =
       (double)((ulonglong)(dVar146 * dStack_ed8) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar47 * (double)local_10e0._8_8_)) +
       (double)((ulonglong)(dVar61 * dStack_fd8) & __real_7fffffffffffffff);
  auVar121._16_8_ =
       (double)((ulonglong)(dVar147 * dStack_ed0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar53 * dStack_10d0)) +
       (double)((ulonglong)(dVar62 * dStack_fd0) & __real_7fffffffffffffff);
  auVar121._24_8_ =
       (double)((ulonglong)(dVar148 * dStack_ec8) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar59 * dStack_10c8)) +
       (double)((ulonglong)(dVar69 * dStack_fc8) & __real_7fffffffffffffff);
  auVar31 = vsubpd_avx(auVar128,auVar40);
  auVar93 = vsubpd_avx(auVar82,auVar142);
  auVar81 = vsubpd_avx(auVar133,auVar66);
  auVar94 = vsubpd_avx(auVar151,auVar156);
  local_15e0._8_8_ = auVar40._8_8_ + auVar128._8_8_;
  local_15e0._0_8_ = auVar40._0_8_ + auVar128._0_8_;
  dStack_15d0 = auVar40._16_8_ + auVar128._16_8_;
  dStack_15c8 = auVar40._24_8_ + auVar128._24_8_;
  auVar125 = vsubpd_avx(auVar138,auVar111);
  local_1580._8_8_ = auVar142._8_8_ + auVar82._8_8_;
  local_1580._0_8_ = auVar142._0_8_ + auVar82._0_8_;
  dStack_1570 = auVar142._16_8_ + auVar82._16_8_;
  dStack_1568 = auVar142._24_8_ + auVar82._24_8_;
  auVar95 = vsubpd_avx(auVar154,auVar121);
  auVar145._0_8_ = auVar133._0_8_ + auVar66._0_8_;
  auVar145._8_8_ = auVar133._8_8_ + auVar66._8_8_;
  auVar145._16_8_ = auVar133._16_8_ + auVar66._16_8_;
  auVar145._24_8_ = auVar133._24_8_ + auVar66._24_8_;
  auVar143._0_8_ = auVar156._0_8_ + auVar151._0_8_;
  auVar143._8_8_ = auVar156._8_8_ + auVar151._8_8_;
  auVar143._16_8_ = auVar156._16_8_ + auVar151._16_8_;
  auVar143._24_8_ = auVar156._24_8_ + auVar151._24_8_;
  auVar134._0_8_ = auVar138._0_8_ + auVar111._0_8_;
  auVar134._8_8_ = auVar138._8_8_ + auVar111._8_8_;
  auVar134._16_8_ = auVar138._16_8_ + auVar111._16_8_;
  auVar134._24_8_ = auVar138._24_8_ + auVar111._24_8_;
  auVar157._0_8_ = auVar154._0_8_ + auVar121._0_8_;
  auVar157._8_8_ = auVar154._8_8_ + auVar121._8_8_;
  auVar157._16_8_ = auVar154._16_8_ + auVar121._16_8_;
  auVar157._24_8_ = auVar154._24_8_ + auVar121._24_8_;
  auVar28 = ZEXT816(0) << 0x40;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = local_11c0;
  auVar3 = vpcmpeqb_avx(auVar80,auVar28);
  auVar28 = vpcmpeqd_avx(auVar28,auVar28);
  auVar97 = vpmovsxbd_avx2(auVar3 ^ auVar28);
  auVar96 = vpand_avx2(_local_d20,auVar97);
  iVar18 = vmovmskps_avx(auVar96);
  if (iVar18 == 0) {
    auVar96 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a572c0:
    auVar28 = vpmovsxbw_avx(auVar3);
    auVar30 = vpand_avx(auVar28,auVar30);
    auVar97 = vpmovsxwd_avx2(auVar30);
    local_cc0 = local_cc0 & auVar97;
    if ((((((((SUB321(local_cc0 >> 0x1f,0) & 1) != 0 || (SUB321(local_cc0 >> 0x3f,0) & 1) != 0) ||
            (SUB321(local_cc0 >> 0x5f,0) & 1) != 0) || SUB321(local_cc0 >> 0x7f,0) != '\0') ||
          (SUB321(local_cc0 >> 0x9f,0) & 1) != 0) || SUB321(local_cc0 >> 0xbf,0) != '\0') ||
        (SUB321(local_cc0 >> 0xdf,0) & 1) != 0) || local_cc0[0x1f] < '\0') {
      auVar30 = vpmovzxbw_avx(auVar3);
      auVar97 = vpmovzxwd_avx2(auVar30);
      auVar97 = vpslld_avx2(auVar97,0x1f);
      auVar98 = vpsrad_avx2(auVar97,0x1f);
      auVar97 = auVar98 & _local_d20;
      if ((((((((SUB321(auVar97 >> 0x1f,0) & 1) != 0 || (SUB321(auVar97 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar97 >> 0x5f,0) & 1) != 0) || SUB321(auVar97 >> 0x7f,0) != '\0') ||
            (SUB321(auVar97 >> 0x9f,0) & 1) != 0) || SUB321(auVar97 >> 0xbf,0) != '\0') ||
          (SUB321(auVar97 >> 0xdf,0) & 1) != 0) || auVar97[0x1f] < '\0') {
        auVar99 = vpermpd_avx2(auVar98,0xd8);
        auVar97 = vshufps_avx(auVar99,auVar99,0x50);
        auVar99 = vshufps_avx(auVar99,auVar99,0xfa);
        _local_1180 = vmaskmovpd_avx(auVar97,auVar31);
        _local_1160 = vmaskmovpd_avx(auVar99,auVar93);
        _local_1140 = vmaskmovpd_avx(auVar97,auVar81);
        _local_1120 = vmaskmovpd_avx(auVar99,auVar94);
        _local_1100 = vmaskmovpd_avx(auVar97,auVar125);
        _local_10e0 = vmaskmovpd_avx(auVar99,auVar95);
        local_10c0 = vmaskmovpd_avx(auVar97,_local_15e0);
        local_10a0 = vmaskmovpd_avx(auVar99,_local_1580);
        _local_1080 = vmaskmovpd_avx(auVar97,auVar145);
        _local_1060 = vmaskmovpd_avx(auVar99,auVar143);
        _local_1040 = vmaskmovpd_avx(auVar97,auVar134);
        _local_1020 = vmaskmovpd_avx(auVar99,auVar157);
        auVar30 = vpsllw_avx(auVar30,0xf);
        auVar30 = vpacksswb_avx(auVar30,auVar30);
        bVar15 = SUB161(auVar30 >> 0xf,0) & 1;
        bVar4 = SUB161(auVar30 >> 0x17,0) & 1;
        bVar5 = SUB161(auVar30 >> 0x1f,0) & 1;
        bVar6 = SUB161(auVar30 >> 0x27,0) & 1;
        bVar7 = SUB161(auVar30 >> 0x2f,0) & 1;
        bVar8 = SUB161(auVar30 >> 0x37,0) & 1;
        local_1600._0_4_ = auVar98._0_4_;
        local_1600._4_4_ = auVar98._4_4_;
        uStack_15f8._0_4_ = auVar98._8_4_;
        uStack_15f8._4_4_ = auVar98._12_4_;
        uStack_15f0._0_4_ = auVar98._16_4_;
        uStack_15f0._4_4_ = auVar98._20_4_;
        uStack_15e8._0_4_ = auVar98._24_4_;
        uStack_15e8._4_4_ = auVar98._28_4_;
        if ((SUB161(auVar30 >> 7,0) & 1) == 0) {
          if (bVar15 == 0) goto LAB_140a573d9;
LAB_140a57ab9:
          uStack_fff = 1;
          if (bVar4 != 0) goto LAB_140a57ad0;
LAB_140a573e8:
          if (bVar5 == 0) goto LAB_140a573f1;
LAB_140a57ae1:
          uStack_ffd = 1;
          if (bVar6 != 0) goto LAB_140a57af2;
LAB_140a573fa:
          if (bVar7 == 0) goto LAB_140a57403;
LAB_140a57b03:
          uStack_ffb = 1;
          if (bVar8 != 0) goto LAB_140a57b14;
LAB_140a5740c:
          auVar67._0_4_ = local_d20._0_4_ & (uint)local_1600;
          auVar67._4_4_ = local_d20._4_4_ & local_1600._4_4_;
          auVar67._8_4_ = local_d20._8_4_ & (uint)uStack_15f8;
          auVar67._12_4_ = local_d20._12_4_ & uStack_15f8._4_4_;
          auVar67._16_4_ = local_d20._16_4_ & (uint)uStack_15f0;
          auVar67._20_4_ = local_d20._20_4_ & uStack_15f0._4_4_;
          auVar67._24_4_ = local_d20._24_4_ & (uint)uStack_15e8;
          auVar67._28_4_ = local_d20._28_4_ & uStack_15e8._4_4_;
        }
        else {
          local_1000 = 1;
          if (bVar15 != 0) goto LAB_140a57ab9;
LAB_140a573d9:
          if (bVar4 == 0) goto LAB_140a573e8;
LAB_140a57ad0:
          uStack_ffe = 1;
          if (bVar5 != 0) goto LAB_140a57ae1;
LAB_140a573f1:
          if (bVar6 == 0) goto LAB_140a573fa;
LAB_140a57af2:
          uStack_ffc = 1;
          if (bVar7 != 0) goto LAB_140a57b03;
LAB_140a57403:
          if (bVar8 == 0) goto LAB_140a5740c;
LAB_140a57b14:
          uStack_ffa = 1;
          auVar67._0_4_ = local_d20._0_4_ & (uint)local_1600;
          auVar67._4_4_ = local_d20._4_4_ & local_1600._4_4_;
          auVar67._8_4_ = local_d20._8_4_ & (uint)uStack_15f8;
          auVar67._12_4_ = local_d20._12_4_ & uStack_15f8._4_4_;
          auVar67._16_4_ = local_d20._16_4_ & (uint)uStack_15f0;
          auVar67._20_4_ = local_d20._20_4_ & uStack_15f0._4_4_;
          auVar67._24_4_ = local_d20._24_4_ & (uint)uStack_15e8;
          auVar67._28_4_ = local_d20._28_4_ & uStack_15e8._4_4_;
        }
        if ((SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
          uStack_ff9 = 1;
        }
        vmovmskps_avx(auVar96 | auVar67);
      }
    }
  }
  else {
    auVar98 = vminpd_avx(local_1340,auVar31);
    auVar100 = vpermq_avx2(auVar97,0xd8);
    auVar99 = vpshufd_avx2(auVar100,0x50);
    _local_1180 = vmaskmovpd_avx(auVar99,auVar98);
    auVar97 = vminpd_avx(local_1320,auVar93);
    auVar98 = vpshufd_avx2(auVar100,0xfa);
    _local_1160 = vmaskmovpd_avx(auVar98,auVar97);
    auVar97 = vminpd_avx(local_1300,auVar81);
    _local_1140 = vmaskmovpd_avx(auVar99,auVar97);
    auVar97 = vminpd_avx(local_12e0,auVar94);
    _local_1120 = vmaskmovpd_avx(auVar98,auVar97);
    auVar97 = vminpd_avx(local_12c0,auVar125);
    _local_1100 = vmaskmovpd_avx(auVar99,auVar97);
    auVar97 = vminpd_avx(local_12a0,auVar95);
    _local_10e0 = vmaskmovpd_avx(auVar98,auVar97);
    auVar97 = vmaxpd_avx(local_1280,_local_15e0);
    local_10c0 = vmaskmovpd_avx(auVar99,auVar97);
    auVar97 = vmaxpd_avx(local_1260,_local_1580);
    local_10a0 = vmaskmovpd_avx(auVar98,auVar97);
    auVar97 = vmaxpd_avx(_local_1240,auVar145);
    _local_1080 = vmaskmovpd_avx(auVar99,auVar97);
    auVar97 = vmaxpd_avx(_local_1220,auVar143);
    _local_1060 = vmaskmovpd_avx(auVar98,auVar97);
    auVar97 = vmaxpd_avx(_local_1200,auVar134);
    _local_1040 = vmaskmovpd_avx(auVar99,auVar97);
    auVar97 = vmaxpd_avx(_local_11e0,auVar157);
    _local_1020 = vmaskmovpd_avx(auVar98,auVar97);
    auVar29._8_8_ = local_11c0;
    auVar29._0_8_ = local_11c0;
    auVar28 = vpcmpeqb_avx(auVar29,___xmm_00000000000000000000000000000000);
    bVar15 = ~(SUB161(auVar28 >> 7,0) & 1 | (SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar28 >> 0x17,0) & 1) << 2 | (SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar28 >> 0x27,0) & 1) << 4 | (SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar28 >> 0x37,0) & 1) << 6);
    if ((bVar15 & 1) != 0) {
      local_1000 = (undefined1)local_11c0;
    }
    if ((bVar15 & 2) != 0) {
      uStack_fff = (undefined1)(local_11c0 >> 8);
    }
    if ((bVar15 & 4) != 0) {
      uStack_ffe = (undefined1)(local_11c0 >> 0x10);
    }
    if ((bVar15 & 8) != 0) {
      uStack_ffd = (undefined1)(local_11c0 >> 0x18);
    }
    if ((bVar15 & 0x10) != 0) {
      uStack_ffc = (undefined1)(local_11c0 >> 0x20);
    }
    if ((bVar15 & 0x20) != 0) {
      uStack_ffb = (undefined1)(local_11c0 >> 0x28);
    }
    if ((bVar15 & 0x40) != 0) {
      uStack_ffa = (undefined1)(local_11c0 >> 0x30);
    }
    if ((SUB161(auVar28 >> 0x3f,0) & 1) == 0) {
      uStack_ff9 = (undefined1)(local_11c0 >> 0x38);
    }
    if ((char)uVar16 != (char)iVar18) goto LAB_140a572c0;
  }
  auVar93 = vpermpd_avx2(_local_d20,0xd8);
  auVar31 = vshufps_avx(auVar93,auVar93,0x50);
  auVar93 = vshufps_avx(auVar93,auVar93,0xfa);
  local_1340 = vmaskmovpd_avx(auVar31,_local_1180);
  local_1320 = vmaskmovpd_avx(auVar93,_local_1160);
  local_1300 = vmaskmovpd_avx(auVar31,_local_1140);
  local_12e0 = vmaskmovpd_avx(auVar93,_local_1120);
  local_12c0 = vmaskmovpd_avx(auVar31,_local_1100);
  local_12a0 = vmaskmovpd_avx(auVar93,_local_10e0);
  local_1280 = vmaskmovpd_avx(auVar31,local_10c0);
  local_1260 = vmaskmovpd_avx(auVar93,local_10a0);
  _local_1240 = vmaskmovpd_avx(auVar31,_local_1080);
  _local_1220 = vmaskmovpd_avx(auVar93,_local_1060);
  _local_1200 = vmaskmovpd_avx(auVar31,_local_1040);
  _local_11e0 = vmaskmovpd_avx(auVar93,_local_1020);
  uVar17 = local_11c0;
  if ((uVar16 & 1) != 0) {
    local_11c0 = CONCAT71(local_11c0._1_7_,local_1000);
    uVar17 = local_11c0;
  }
  if ((uVar16 & 2) != 0) {
    local_11c0._2_6_ = (undefined6)(uVar17 >> 0x10);
    local_11c0._0_1_ = (undefined1)uVar17;
    local_11c0._0_2_ = CONCAT11(uStack_fff,(undefined1)local_11c0);
    uVar17 = local_11c0;
  }
  if ((uVar16 & 4) != 0) {
    local_11c0._3_5_ = (undefined5)(uVar17 >> 0x18);
    local_11c0._0_2_ = (undefined2)uVar17;
    local_11c0._0_3_ = CONCAT12(uStack_ffe,(undefined2)local_11c0);
    uVar17 = local_11c0;
  }
  if ((uVar16 & 8) != 0) {
    local_11c0._4_4_ = (undefined4)(uVar17 >> 0x20);
    local_11c0._0_3_ = (undefined3)uVar17;
    local_11c0._0_4_ = CONCAT13(uStack_ffd,(undefined3)local_11c0);
    uVar17 = local_11c0;
  }
  if ((uVar16 & 0x10) != 0) {
    local_11c0._5_3_ = (undefined3)(uVar17 >> 0x28);
    local_11c0._0_4_ = (undefined4)uVar17;
    local_11c0._0_5_ = CONCAT14(uStack_ffc,(undefined4)local_11c0);
    uVar17 = local_11c0;
  }
  if ((uVar16 & 0x20) != 0) {
    local_11c0._6_2_ = (undefined2)(uVar17 >> 0x30);
    local_11c0._0_5_ = (undefined5)uVar17;
    local_11c0._0_6_ = CONCAT15(uStack_ffb,(undefined5)local_11c0);
    uVar17 = local_11c0;
  }
  local_11c0 = uVar17;
  if ((uVar16 & 0x40) != 0) {
    local_11c0._7_1_ = (undefined1)(uVar17 >> 0x38);
    local_11c0._0_6_ = (undefined6)uVar17;
    local_11c0._0_7_ = CONCAT16(uStack_ffa,(undefined6)local_11c0);
  }
  if ((char)uVar16 < '\0') {
    local_11c0 = CONCAT17(uStack_ff9,(undefined7)local_11c0);
  }
LAB_140a5756a:
  local_ba0 = vmovlhps_avx(local_1340._0_16_,local_1300._0_16_);
  local_b68 = vunpckhpd_avx(local_1340._0_16_,local_1300._0_16_);
  local_b30 = vmovlhps_avx(local_1340._16_16_,local_1300._16_16_);
  local_af8 = vunpckhpd_avx(local_1340._16_16_,local_1300._16_16_);
  local_ac0 = vmovlhps_avx(local_1320._0_16_,local_12e0._0_16_);
  local_a88 = vunpckhpd_avx(local_1320._0_16_,local_12e0._0_16_);
  local_a50 = vmovlhps_avx(local_1320._16_16_,local_12e0._16_16_);
  local_a18 = vunpckhpd_avx(local_1320._16_16_,local_12e0._16_16_);
  local_b90 = local_12c0._0_8_;
  local_b58 = local_12c0._8_8_;
  local_b20 = local_12c0._16_8_;
  local_ae8 = local_12c0._24_8_;
  local_ab0 = local_12a0._0_8_;
  local_a78 = local_12a0._8_8_;
  local_a40 = local_12a0._16_8_;
  local_a08 = local_12a0._24_8_;
  local_b88 = vmovlhps_avx(local_1280._0_16_,local_1240);
  local_b50 = vunpckhpd_avx(local_1280._0_16_,local_1240);
  local_b18 = vmovlhps_avx(local_1280._16_16_,auStack_1230);
  local_ae0 = vunpckhpd_avx(local_1280._16_16_,auStack_1230);
  local_aa8 = vmovlhps_avx(local_1260._0_16_,local_1220);
  local_a70 = vunpckhpd_avx(local_1260._0_16_,local_1220);
  local_a38 = vunpcklpd_avx(local_1260._16_16_,auStack_1210);
  local_a00 = vunpckhpd_avx(local_1260._16_16_,auStack_1210);
  local_b78 = local_1200;
  local_b40 = adStack_11f8[0];
  local_b08 = adStack_11f8[1];
  local_ad0 = adStack_11f8[2];
  local_a98 = local_11e0;
  local_a60 = adStack_11d8[0];
  local_a28 = adStack_11d8[1];
  local_9f0 = adStack_11d8[2];
  auVar31 = vpcmpgtd_avx2(_local_ce0,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  uVar16 = vmovmskps_avx(auVar31);
  local_b70[0] = (char)local_11c0;
  local_b38 = (char)(local_11c0 >> 8);
  local_b00 = (char)(local_11c0 >> 0x10);
  local_ac8 = (char)(local_11c0 >> 0x18);
  local_a90 = (char)(local_11c0 >> 0x20);
  local_a58 = (char)(local_11c0 >> 0x28);
  local_a20 = (char)(local_11c0 >> 0x30);
  local_9e8 = (char)(local_11c0 >> 0x38);
  if (uVar16 != 0) {
    uVar17 = (ulonglong)(uVar16 & 0xff);
    do {
      uVar12 = 0;
      for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
        uVar12 = uVar12 + 1;
      }
      lVar21 = uVar12 * 0x38;
      cVar19 = param_6[2][0];
      cVar2 = local_b70[lVar21];
      if ((cVar19 == '\0') || (cVar2 == '\0')) {
        if (cVar2 == '\0') {
          cVar19 = param_6[2][0];
          uVar114 = *(undefined8 *)(param_6[1] + 0x10);
          uVar92 = *(undefined8 *)(param_6[1] + 8);
          uVar87 = *(undefined8 *)param_6[1];
          uVar79 = *(undefined8 *)(*param_6 + 0x10);
          uVar27 = *(undefined8 *)*param_6;
          uVar63 = *(undefined8 *)(*param_6 + 8);
        }
        else {
          uVar27 = *(undefined8 *)*(undefined1 (*) [24])(local_ba0 + lVar21);
          uVar63 = *(undefined8 *)(local_ba0 + lVar21 + 8);
          uVar79 = *(undefined8 *)(local_b88 + lVar21 + -8);
          uVar87 = *(undefined8 *)(local_b88 + lVar21);
          uVar92 = *(undefined8 *)(local_b88 + lVar21 + 8);
          uVar114 = *(undefined8 *)(local_b70 + lVar21 + -8);
          cVar19 = cVar2;
        }
      }
      else {
        auVar41._24_8_ = 0;
        auVar41._0_24_ = *param_6;
        auVar68._24_8_ = 0;
        auVar68._0_24_ = *(undefined1 (*) [24])(local_ba0 + lVar21);
        auVar31 = vminpd_avx(auVar41,auVar68);
        uVar27 = auVar31._0_8_;
        auVar30 = vshufpd_avx(auVar31._0_16_,auVar31._0_16_,1);
        uVar63 = auVar30._0_8_;
        uVar79 = auVar31._16_8_;
        auVar88._24_8_ = 0;
        auVar88._0_24_ = param_6[1];
        auVar112._16_8_ = *(undefined8 *)(local_b70 + lVar21 + -8);
        auVar112._0_16_ = *(undefined1 (*) [16])(local_b88 + lVar21);
        auVar112._24_8_ = 0;
        auVar31 = vmaxpd_avx(auVar88,auVar112);
        uVar87 = auVar31._0_8_;
        auVar30 = vshufpd_avx(auVar31._0_16_,auVar31._0_16_,1);
        uVar92 = auVar30._0_8_;
        uVar114 = auVar31._16_8_;
      }
      uVar17 = uVar17 & ~(1L << (uVar12 & 0x3f));
      *(undefined8 *)*param_6 = uVar27;
      *(undefined8 *)(*param_6 + 8) = uVar63;
      *(undefined8 *)(*param_6 + 0x10) = uVar79;
      *(undefined8 *)param_6[1] = uVar87;
      *(undefined8 *)(param_6[1] + 8) = uVar92;
      *(undefined8 *)(param_6[1] + 0x10) = uVar114;
      param_6[2][0] = cVar19;
    } while (uVar17 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup_avx2 @ 140a57b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,double *param_4,
               undefined1 (*param_5) [24],uint param_6)

{
  double dVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  longlong lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar28 [16];
  longlong lVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  longlong lVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar65 [16];
  undefined8 uVar64;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  double dVar78;
  undefined8 uVar79;
  double dVar83;
  double dVar84;
  undefined1 auVar80 [32];
  double dVar85;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  double dVar86;
  undefined8 uVar87;
  double dVar101;
  double dVar102;
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
  double dVar103;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined8 uVar104;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  double dVar112;
  undefined8 uVar113;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  double dVar126;
  double dVar127;
  double dVar128;
  undefined1 in_ZMM5 [64];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [64];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [64];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 in_ZMM11 [64];
  double dVar146;
  double dVar150;
  undefined1 auVar147 [32];
  double dVar148;
  double dVar149;
  undefined1 in_ZMM12 [64];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 in_ZMM15 [64];
  undefined1 local_1600 [16];
  double dStack_15f0;
  double dStack_15e8;
  undefined1 local_15e0 [16];
  double dStack_15d0;
  double dStack_15c8;
  undefined8 local_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 local_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined1 local_1580 [16];
  double dStack_1570;
  double dStack_1568;
  undefined8 local_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 local_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 local_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 local_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  double local_1440;
  double dStack_1438;
  double dStack_1430;
  double dStack_1428;
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  double local_1400;
  double dStack_13f8;
  double dStack_13f0;
  double dStack_13e8;
  undefined8 local_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 local_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  double local_1320;
  double dStack_1318;
  double dStack_1310;
  double dStack_1308;
  undefined1 local_1300 [32];
  undefined1 local_12e0 [32];
  undefined1 local_12c0 [32];
  undefined1 local_12a0 [32];
  undefined1 local_1280 [32];
  undefined1 local_1260 [32];
  undefined1 local_1240 [32];
  undefined1 local_1220 [32];
  undefined1 local_1200 [16];
  undefined1 auStack_11f0 [16];
  undefined1 local_11e0 [16];
  undefined1 auStack_11d0 [16];
  undefined1 local_11c0 [8];
  double adStack_11b8 [3];
  undefined1 local_11a0 [8];
  double adStack_1198 [3];
  undefined8 local_1180;
  double adStack_1178 [7];
  undefined1 local_1140 [8];
  double adStack_1138 [3];
  undefined1 local_1120 [8];
  double adStack_1118 [3];
  undefined1 local_1100 [16];
  double dStack_10f0;
  double dStack_10e8;
  undefined1 local_10e0 [16];
  double dStack_10d0;
  double dStack_10c8;
  undefined1 local_10c0 [16];
  double dStack_10b0;
  double dStack_10a8;
  undefined1 local_10a0 [16];
  double dStack_1090;
  double dStack_1088;
  undefined1 local_1080 [32];
  undefined1 local_1060 [32];
  undefined1 local_1040 [16];
  double dStack_1030;
  double dStack_1028;
  undefined1 local_1020 [16];
  double dStack_1010;
  double dStack_1008;
  undefined1 local_1000 [16];
  double dStack_ff0;
  double dStack_fe8;
  undefined1 local_fe0 [16];
  double dStack_fd0;
  double dStack_fc8;
  undefined1 local_fc0;
  undefined1 uStack_fbf;
  undefined1 uStack_fbe;
  undefined1 uStack_fbd;
  undefined1 uStack_fbc;
  undefined1 uStack_fbb;
  undefined1 uStack_fba;
  undefined1 uStack_fb9;
  double dStack_fb8;
  double dStack_fb0;
  double dStack_fa8;
  double local_fa0;
  double dStack_f98;
  double dStack_f90;
  double dStack_f88;
  double local_f40;
  double dStack_f38;
  double dStack_f30;
  double dStack_f28;
  double local_f20;
  double dStack_f18;
  double dStack_f10;
  double dStack_f08;
  double local_f00;
  double dStack_ef8;
  double dStack_ef0;
  double dStack_ee8;
  double local_ee0;
  double dStack_ed8;
  double dStack_ed0;
  double dStack_ec8;
  double local_ec0;
  double dStack_eb8;
  double dStack_eb0;
  double dStack_ea8;
  double local_ea0;
  double dStack_e98;
  double dStack_e90;
  double dStack_e88;
  double local_e40;
  double dStack_e38;
  double dStack_e30;
  double dStack_e28;
  double local_e20;
  double dStack_e18;
  double dStack_e10;
  double dStack_e08;
  double local_e00;
  double dStack_df8;
  double dStack_df0;
  double dStack_de8;
  double local_de0;
  double dStack_dd8;
  double dStack_dd0;
  double dStack_dc8;
  double local_dc0;
  double dStack_db8;
  double dStack_db0;
  double dStack_da8;
  double local_da0;
  double dStack_d98;
  double dStack_d90;
  double dStack_d88;
  undefined1 local_d40 [16];
  double dStack_d30;
  double dStack_d28;
  undefined1 local_d20 [32];
  undefined1 local_d00 [32];
  undefined1 local_ca0 [32];
  undefined1 local_c80 [32];
  undefined1 local_c60 [32];
  undefined1 local_c40 [32];
  undefined1 local_c20 [32];
  undefined1 local_c00 [32];
  undefined1 local_be0 [32];
  undefined1 local_bc0 [32];
  undefined1 local_ba0 [16];
  undefined8 local_b90;
  undefined1 local_b88 [16];
  undefined8 local_b78;
  char local_b70 [8];
  undefined1 local_b68 [16];
  undefined8 local_b58;
  undefined1 local_b50 [16];
  undefined8 local_b40;
  undefined1 local_b38;
  undefined1 local_b30 [16];
  undefined8 local_b20;
  undefined1 local_b18 [16];
  undefined8 local_b08;
  undefined1 local_b00;
  undefined1 local_af8 [16];
  undefined8 local_ae8;
  undefined1 local_ae0 [16];
  undefined8 local_ad0;
  undefined1 local_ac8;
  undefined1 local_ac0 [16];
  undefined8 local_ab0;
  undefined1 local_aa8 [16];
  undefined8 local_a98;
  undefined1 local_a90;
  undefined1 local_a88 [16];
  undefined8 local_a78;
  undefined1 local_a70 [16];
  undefined8 local_a60;
  undefined1 local_a58;
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined1 local_a20;
  undefined1 local_a18 [16];
  undefined8 local_a08;
  undefined1 local_a00 [16];
  undefined8 local_9f0;
  undefined1 local_9e8;
  longlong local_9e0;
  longlong lStack_9d8;
  longlong lStack_9d0;
  longlong lStack_9c8;
  double local_9c0 [16];
  undefined1 local_940 [16];
  double adStack_930 [6];
  undefined1 local_900 [16];
  double adStack_8f0 [9];
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined1 local_6a0 [32];
  undefined1 local_680 [32];
  undefined1 local_660 [32];
  undefined1 local_640 [32];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [16];
  double adStack_5b0 [2];
  undefined1 local_5a0 [16];
  double adStack_590 [2];
  undefined1 local_580 [16];
  double adStack_570 [2];
  undefined1 local_560 [16];
  double adStack_550 [2];
  undefined1 local_540 [16];
  double adStack_530 [2];
  undefined1 local_520 [16];
  double adStack_510 [13];
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140a57b56;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  uVar16 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  _local_11a0 = ZEXT1632(ZEXT816(0));
  _local_11c0 = ZEXT1632(ZEXT816(0));
  local_11e0 = ZEXT816(0);
  _local_11e0 = ZEXT1632(local_11e0);
  local_1200 = ZEXT816(0);
  _local_1200 = ZEXT1632(local_1200);
  local_1220._0_16_ = ZEXT816(0);
  local_1220 = ZEXT1632(local_1220._0_16_);
  local_1240._0_16_ = ZEXT816(0);
  local_1240 = ZEXT1632(local_1240._0_16_);
  local_1260 = ZEXT1632(ZEXT816(0));
  local_1280 = ZEXT1632(ZEXT816(0));
  local_12a0._0_16_ = ZEXT816(0);
  local_12a0 = ZEXT1632(local_12a0._0_16_);
  local_12c0._0_16_ = ZEXT816(0);
  local_12c0 = ZEXT1632(local_12c0._0_16_);
  local_12e0._0_16_ = ZEXT816(0);
  local_12e0 = ZEXT1632(local_12e0._0_16_);
  local_1300._0_16_ = ZEXT816(0);
  local_1300 = ZEXT1632(local_1300._0_16_);
  local_1180 = 0;
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    local_940._4_4_ = __real_00000038;
    local_940._0_4_ = __real_00000038;
    local_940._8_4_ = __real_00000038;
    local_940._12_4_ = __real_00000038;
    register0x00001390 = __real_00000038;
    register0x00001394 = __real_00000038;
    register0x00001398 = __real_00000038;
    register0x0000139c = __real_00000038;
    auVar131 = ZEXT3264(_local_940);
    local_9c0[0xc] = (double)__real_0000000000000008;
    local_9c0[0xd] = (double)__real_0000000000000008;
    local_9c0[0xe] = (double)__real_0000000000000008;
    local_9c0[0xf] = (double)__real_0000000000000008;
    local_9c0[8] = (double)__real_0000000000000010;
    local_9c0[9] = (double)__real_0000000000000010;
    local_9c0[10] = (double)__real_0000000000000010;
    local_9c0[0xb] = (double)__real_0000000000000010;
    local_9c0[4] = (double)__real_0000000000000018;
    local_9c0[5] = (double)__real_0000000000000018;
    local_9c0[6] = (double)__real_0000000000000018;
    local_9c0[7] = (double)__real_0000000000000018;
    local_9c0[0] = __real_0000000000000020;
    local_9c0[1] = __real_0000000000000020;
    local_9c0[2] = __real_0000000000000020;
    local_9c0[3] = __real_0000000000000020;
    local_9e0 = __real_0000000000000028;
    lStack_9d8 = __real_0000000000000028;
    lStack_9d0 = __real_0000000000000028;
    lStack_9c8 = __real_0000000000000028;
    adStack_930[2] = (double)__real_0000000000000030;
    adStack_930[3] = (double)__real_0000000000000030;
    adStack_930[4] = (double)__real_0000000000000030;
    adStack_930[5] = (double)__real_0000000000000030;
    auVar135 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar88._4_4_ = iVar18;
      auVar88._0_4_ = iVar18;
      auVar88._8_4_ = iVar18;
      auVar88._12_4_ = iVar18;
      auVar88._16_4_ = iVar18;
      auVar88._20_4_ = iVar18;
      auVar88._24_4_ = iVar18;
      auVar88._28_4_ = iVar18;
      auVar81 = vpor_avx2(auVar88,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar11 = vpmulld_avx2(auVar81,auVar131._0_32_);
      auVar88 = vpmovzxdq_avx2(auVar11._0_16_);
      auVar11 = vpmovzxdq_avx2(auVar11._16_16_);
      lVar21 = auVar88._0_8_;
      lVar43 = auVar88._8_8_;
      lVar49 = auVar88._16_8_;
      lVar55 = auVar88._24_8_;
      auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar21 + (longlong)adStack_930[2])),
                            (uint)*(byte *)(param_3 + lVar43 + (longlong)adStack_930[3]),1);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + lVar49 + (longlong)adStack_930[4]),2);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + lVar55 + (longlong)adStack_930[5]),3);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 +
                                                   auVar11._0_8_ + (longlong)adStack_930[2]),4);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 +
                                                   auVar11._8_8_ + (longlong)adStack_930[3]),5);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 +
                                                   auVar11._16_8_ + (longlong)adStack_930[4]),6);
      auVar28 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 +
                                                   auVar11._24_8_ + (longlong)adStack_930[5]),7);
      auVar88 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar11 = vpcmpeqd_avx2(auVar88,*(undefined1 (*) [32])
                                       (param_1 + (ulonglong)(uint)(iVar18 * 4)));
      auVar29 = SUB3216(auVar11 ^ auVar88,0x10);
      in_ZMM5 = ZEXT1664(auVar29);
      auVar30 = vpackssdw_avx(SUB3216(auVar11 ^ auVar88,0),auVar29);
      auVar28 = vpcmpeqb_avx(auVar135._0_16_,auVar28);
      auVar28 = vpmovsxbw_avx(auVar28 ^ ___xmm_ffffffffffffffffffffffffffffffff);
      auVar30 = vpand_avx(auVar30,auVar28);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') {
        auVar88 = vpslld_avx2(auVar81,3);
        auVar88 = vpsubd_avx2(auVar88,auVar81);
        vpmovzxdq_avx2(auVar88._16_16_);
        auVar11 = vpmovzxdq_avx2(auVar88._0_16_);
        auVar88 = vpcmpeqd_avx2(ZEXT1632(auVar29),ZEXT1632(auVar29));
        local_bc0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
        auVar88 = vpcmpeqd_avx2(auVar11,auVar11);
        auVar114 = vgatherqpd(ZEXT832(0),auVar88);
        auVar11._0_8_ = lVar21 + (longlong)local_9c0[0xc];
        auVar11._8_8_ = lVar43 + (longlong)local_9c0[0xd];
        auVar11._16_8_ = lVar49 + (longlong)local_9c0[0xe];
        auVar11._24_8_ = lVar55 + (longlong)local_9c0[0xf];
        auVar88 = vpcmpeqd_avx2(auVar114,auVar114);
        local_be0 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        auVar88 = vpcmpeqd_avx2(auVar11,auVar11);
        auVar115 = vgatherqpd(ZEXT832(0),auVar88);
        auVar80._0_8_ = lVar21 + (longlong)local_9c0[8];
        auVar80._8_8_ = lVar43 + (longlong)local_9c0[9];
        auVar80._16_8_ = lVar49 + (longlong)local_9c0[10];
        auVar80._24_8_ = lVar55 + (longlong)local_9c0[0xb];
        auVar88 = vpcmpeqd_avx2(auVar115,auVar115);
        local_c00 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        auVar88 = vpcmpeqd_avx2(auVar80,auVar80);
        local_c20 = vgatherqpd(ZEXT832(0),auVar88);
        auVar89._0_8_ = lVar21 + (longlong)local_9c0[4];
        auVar89._8_8_ = lVar43 + (longlong)local_9c0[5];
        auVar89._16_8_ = lVar49 + (longlong)local_9c0[6];
        auVar89._24_8_ = lVar55 + (longlong)local_9c0[7];
        auVar88 = vpcmpeqd_avx2(local_c20,local_c20);
        local_c40 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        auVar88 = vpcmpeqd_avx2(auVar89,auVar89);
        _local_d40 = vgatherqpd(ZEXT832(0),auVar88);
        auVar90._0_8_ = lVar21 + (longlong)local_9c0[0];
        auVar90._8_8_ = lVar43 + (longlong)local_9c0[1];
        auVar90._16_8_ = lVar49 + (longlong)local_9c0[2];
        auVar90._24_8_ = lVar55 + (longlong)local_9c0[3];
        auVar88 = vpcmpeqd_avx2(_local_d40,_local_d40);
        local_c60 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        auVar88 = vpcmpeqd_avx2(auVar90,auVar90);
        auVar116 = vgatherqpd(ZEXT832(0),auVar88);
        auVar92._8_8_ = lStack_9d8;
        auVar92._0_8_ = local_9e0;
        auVar92._16_8_ = lStack_9d0;
        auVar92._24_8_ = lStack_9c8;
        auVar91._0_8_ = lVar21 + local_9e0;
        auVar91._8_8_ = lVar43 + lStack_9d8;
        auVar91._16_8_ = lVar49 + lStack_9d0;
        auVar91._24_8_ = lVar55 + lStack_9c8;
        auVar88 = vpcmpeqd_avx2(auVar92,auVar92);
        local_c80 = vgatherqpd(ZEXT832(0),auVar88);
        auVar88 = vpcmpeqd_avx2(auVar91,auVar91);
        local_ca0 = vgatherqpd(ZEXT832(0),auVar88);
        auVar155 = vpslld_avx2(auVar81,7);
        vpmovzxdq_avx2(auVar155._0_16_);
        auVar88 = vpmovsxwq_avx2(auVar30);
        auVar80 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar155._16_16_);
        auVar28 = vpshufd_avx(auVar30,0xee);
        auVar11 = vpmovsxwq_avx2(auVar28);
        auVar89 = vgatherqpd(ZEXT832(0) << 0x40,auVar11);
        auVar81._4_4_ = __real_00000008;
        auVar81._0_4_ = __real_00000008;
        auVar81._8_4_ = __real_00000008;
        auVar81._12_4_ = __real_00000008;
        auVar81._16_4_ = __real_00000008;
        auVar81._20_4_ = __real_00000008;
        auVar81._24_4_ = __real_00000008;
        auVar81._28_4_ = __real_00000008;
        auVar81 = vpor_avx2(auVar155,auVar81);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar117 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar90 = vgatherqpd(ZEXT832(0),auVar11);
        auVar93._4_4_ = __real_00000010;
        auVar93._0_4_ = __real_00000010;
        auVar93._8_4_ = __real_00000010;
        auVar93._12_4_ = __real_00000010;
        auVar93._16_4_ = __real_00000010;
        auVar93._20_4_ = __real_00000010;
        auVar93._24_4_ = __real_00000010;
        auVar93._28_4_ = __real_00000010;
        auVar81 = vpor_avx2(auVar155,auVar93);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar118 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar91 = vgatherqpd(ZEXT832(0),auVar11);
        auVar94._4_4_ = __real_00000018;
        auVar94._0_4_ = __real_00000018;
        auVar94._8_4_ = __real_00000018;
        auVar94._12_4_ = __real_00000018;
        auVar94._16_4_ = __real_00000018;
        auVar94._20_4_ = __real_00000018;
        auVar94._24_4_ = __real_00000018;
        auVar94._28_4_ = __real_00000018;
        auVar81 = vpor_avx2(auVar155,auVar94);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar119 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar92 = vgatherqpd(ZEXT832(0),auVar11);
        auVar95._4_4_ = __real_00000020;
        auVar95._0_4_ = __real_00000020;
        auVar95._8_4_ = __real_00000020;
        auVar95._12_4_ = __real_00000020;
        auVar95._16_4_ = __real_00000020;
        auVar95._20_4_ = __real_00000020;
        auVar95._24_4_ = __real_00000020;
        auVar95._28_4_ = __real_00000020;
        auVar81 = vpor_avx2(auVar155,auVar95);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar120 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar93 = vgatherqpd(ZEXT832(0),auVar11);
        auVar96._4_4_ = __real_00000028;
        auVar96._0_4_ = __real_00000028;
        auVar96._8_4_ = __real_00000028;
        auVar96._12_4_ = __real_00000028;
        auVar96._16_4_ = __real_00000028;
        auVar96._20_4_ = __real_00000028;
        auVar96._24_4_ = __real_00000028;
        auVar96._28_4_ = __real_00000028;
        auVar81 = vpor_avx2(auVar155,auVar96);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar121 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar94 = vgatherqpd(ZEXT832(0),auVar11);
        auVar97._4_4_ = __real_00000030;
        auVar97._0_4_ = __real_00000030;
        auVar97._8_4_ = __real_00000030;
        auVar97._12_4_ = __real_00000030;
        auVar97._16_4_ = __real_00000030;
        auVar97._20_4_ = __real_00000030;
        auVar97._24_4_ = __real_00000030;
        auVar97._28_4_ = __real_00000030;
        auVar81 = vpor_avx2(auVar155,auVar97);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar122 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar95 = vgatherqpd(ZEXT832(0),auVar11);
        auVar81 = vpor_avx2(auVar155,auVar131._0_32_);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar123 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar96 = vgatherqpd(ZEXT832(0),auVar11);
        auVar124._4_4_ = __real_00000040;
        auVar124._0_4_ = __real_00000040;
        auVar124._8_4_ = __real_00000040;
        auVar124._12_4_ = __real_00000040;
        auVar124._16_4_ = __real_00000040;
        auVar124._20_4_ = __real_00000040;
        auVar124._24_4_ = __real_00000040;
        auVar124._28_4_ = __real_00000040;
        auVar81 = vpor_avx2(auVar155,auVar124);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar124 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        auVar97 = vgatherqpd(ZEXT832(0),auVar11);
        auVar125._4_4_ = __real_00000048;
        auVar125._0_4_ = __real_00000048;
        auVar125._8_4_ = __real_00000048;
        auVar125._12_4_ = __real_00000048;
        auVar125._16_4_ = __real_00000048;
        auVar125._20_4_ = __real_00000048;
        auVar125._24_4_ = __real_00000048;
        auVar125._28_4_ = __real_00000048;
        auVar81 = vpor_avx2(auVar155,auVar125);
        vpmovzxdq_avx2(auVar81._0_16_);
        auVar125 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_2a0 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar11);
        auVar105._4_4_ = __real_00000050;
        auVar105._0_4_ = __real_00000050;
        auVar105._8_4_ = __real_00000050;
        auVar105._12_4_ = __real_00000050;
        auVar105._16_4_ = __real_00000050;
        auVar105._20_4_ = __real_00000050;
        auVar105._24_4_ = __real_00000050;
        auVar105._28_4_ = __real_00000050;
        auVar81 = vpor_avx2(auVar155,auVar105);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_d20._0_16_ = auVar30;
        local_280 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_260 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar11);
        auVar106._4_4_ = __real_00000058;
        auVar106._0_4_ = __real_00000058;
        auVar106._8_4_ = __real_00000058;
        auVar106._12_4_ = __real_00000058;
        auVar106._16_4_ = __real_00000058;
        auVar106._20_4_ = __real_00000058;
        auVar106._24_4_ = __real_00000058;
        auVar106._28_4_ = __real_00000058;
        auVar81 = vpor_avx2(auVar155,auVar106);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_240 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_220 = vgatherqpd(ZEXT1632(ZEXT816(0)),auVar11);
        auVar107._4_4_ = __real_00000060;
        auVar107._0_4_ = __real_00000060;
        auVar107._8_4_ = __real_00000060;
        auVar107._12_4_ = __real_00000060;
        auVar107._16_4_ = __real_00000060;
        auVar107._20_4_ = __real_00000060;
        auVar107._24_4_ = __real_00000060;
        auVar107._28_4_ = __real_00000060;
        auVar81 = vpor_avx2(auVar155,auVar107);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_200 = vgatherqpd(ZEXT832(0) << 0x40,auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_1e0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
        auVar108._4_4_ = __real_00000068;
        auVar108._0_4_ = __real_00000068;
        auVar108._8_4_ = __real_00000068;
        auVar108._12_4_ = __real_00000068;
        auVar108._16_4_ = __real_00000068;
        auVar108._20_4_ = __real_00000068;
        auVar108._24_4_ = __real_00000068;
        auVar108._28_4_ = __real_00000068;
        auVar81 = vpor_avx2(auVar155,auVar108);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_1c0 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_1a0 = vgatherqpd(ZEXT832(0) << 0x40,auVar11);
        auVar109._4_4_ = __real_00000070;
        auVar109._0_4_ = __real_00000070;
        auVar109._8_4_ = __real_00000070;
        auVar109._12_4_ = __real_00000070;
        auVar109._16_4_ = __real_00000070;
        auVar109._20_4_ = __real_00000070;
        auVar109._24_4_ = __real_00000070;
        auVar109._28_4_ = __real_00000070;
        auVar81 = vpor_avx2(auVar155,auVar109);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_180 = vgatherqpd(ZEXT832(0),auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_160 = vgatherqpd(ZEXT1632((undefined1  [16])0x0),auVar11);
        auVar129._4_4_ = __real_00000078;
        auVar129._0_4_ = __real_00000078;
        auVar129._8_4_ = __real_00000078;
        auVar129._12_4_ = __real_00000078;
        auVar129._16_4_ = __real_00000078;
        auVar129._20_4_ = __real_00000078;
        auVar129._24_4_ = __real_00000078;
        auVar129._28_4_ = __real_00000078;
        auVar81 = vpor_avx2(auVar155,auVar129);
        vpmovzxdq_avx2(auVar81._0_16_);
        local_140 = vgatherqpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
        vpmovzxdq_avx2(auVar81._16_16_);
        local_120 = vgatherqpd(ZEXT832(0) << 0x40,auVar11);
        auVar28 = vpacksswb_avx(auVar30,auVar30);
        bVar15 = SUB161(auVar28 >> 7,0) & 1;
        bVar3 = SUB161(auVar28 >> 0xf,0) & 1;
        bVar4 = SUB161(auVar28 >> 0x17,0) & 1;
        bVar5 = SUB161(auVar28 >> 0x1f,0) & 1;
        bVar6 = SUB161(auVar28 >> 0x27,0) & 1;
        bVar7 = SUB161(auVar28 >> 0x2f,0) & 1;
        bVar8 = SUB161(auVar28 >> 0x37,0) & 1;
        bVar9 = SUB161(auVar28 >> 0x3f,0) << 7;
        local_15e0._0_8_ = auVar89._0_8_;
        local_15e0._8_8_ = auVar89._8_8_;
        dStack_15d0 = auVar89._16_8_;
        dStack_15c8 = auVar89._24_8_;
        adStack_510[6] = (double)local_15e0._0_8_;
        adStack_510[7] = (double)local_15e0._8_8_;
        adStack_510[8] = dStack_15d0;
        adStack_510[9] = dStack_15c8;
        local_15c0 = auVar80._0_8_;
        uStack_15b8 = auVar80._8_8_;
        uStack_15b0 = auVar80._16_8_;
        uStack_15a8 = auVar80._24_8_;
        adStack_510[2] = (double)local_15c0;
        adStack_510[3] = (double)uStack_15b8;
        adStack_510[4] = (double)uStack_15b0;
        adStack_510[5] = (double)uStack_15a8;
        local_1580._0_8_ = auVar90._0_8_;
        local_1580._8_8_ = auVar90._8_8_;
        dStack_1570 = auVar90._16_8_;
        dStack_1568 = auVar90._24_8_;
        local_4a0 = local_1580._0_8_;
        uStack_498 = local_1580._8_8_;
        uStack_490 = dStack_1570;
        uStack_488 = dStack_1568;
        local_1600._0_8_ = auVar117._0_8_;
        local_1600._8_8_ = auVar117._8_8_;
        dStack_15f0 = auVar117._16_8_;
        dStack_15e8 = auVar117._24_8_;
        adStack_510[10] = (double)local_1600._0_8_;
        adStack_510[0xb] = (double)local_1600._8_8_;
        adStack_510[0xc] = dStack_15f0;
        uStack_4a8 = dStack_15e8;
        local_1520 = auVar91._0_8_;
        uStack_1518 = auVar91._8_8_;
        uStack_1510 = auVar91._16_8_;
        uStack_1508 = auVar91._24_8_;
        local_460 = local_1520;
        uStack_458 = uStack_1518;
        uStack_450 = uStack_1510;
        uStack_448 = uStack_1508;
        local_15a0 = auVar118._0_8_;
        uStack_1598 = auVar118._8_8_;
        uStack_1590 = auVar118._16_8_;
        uStack_1588 = auVar118._24_8_;
        local_480 = local_15a0;
        uStack_478 = uStack_1598;
        uStack_470 = uStack_1590;
        uStack_468 = uStack_1588;
        local_1560 = auVar92._0_8_;
        uStack_1558 = auVar92._8_8_;
        uStack_1550 = auVar92._16_8_;
        uStack_1548 = auVar92._24_8_;
        local_420 = local_1560;
        uStack_418 = uStack_1558;
        uStack_410 = uStack_1550;
        uStack_408 = uStack_1548;
        local_1540 = auVar119._0_8_;
        uStack_1538 = auVar119._8_8_;
        uStack_1530 = auVar119._16_8_;
        uStack_1528 = auVar119._24_8_;
        local_440 = local_1540;
        uStack_438 = uStack_1538;
        uStack_430 = uStack_1530;
        uStack_428 = uStack_1528;
        local_14a0 = auVar93._0_8_;
        uStack_1498 = auVar93._8_8_;
        uStack_1490 = auVar93._16_8_;
        uStack_1488 = auVar93._24_8_;
        local_3e0 = local_14a0;
        uStack_3d8 = uStack_1498;
        uStack_3d0 = uStack_1490;
        uStack_3c8 = uStack_1488;
        local_1480 = auVar120._0_8_;
        uStack_1478 = auVar120._8_8_;
        uStack_1470 = auVar120._16_8_;
        uStack_1468 = auVar120._24_8_;
        local_400 = local_1480;
        uStack_3f8 = uStack_1478;
        uStack_3f0 = uStack_1470;
        uStack_3e8 = uStack_1468;
        local_14e0 = auVar94._0_8_;
        uStack_14d8 = auVar94._8_8_;
        uStack_14d0 = auVar94._16_8_;
        uStack_14c8 = auVar94._24_8_;
        local_3a0 = local_14e0;
        uStack_398 = uStack_14d8;
        uStack_390 = uStack_14d0;
        uStack_388 = uStack_14c8;
        local_14c0 = auVar121._0_8_;
        uStack_14b8 = auVar121._8_8_;
        uStack_14b0 = auVar121._16_8_;
        uStack_14a8 = auVar121._24_8_;
        local_3c0 = local_14c0;
        uStack_3b8 = uStack_14b8;
        uStack_3b0 = uStack_14b0;
        uStack_3a8 = uStack_14a8;
        local_1420 = auVar95._0_8_;
        uStack_1418 = auVar95._8_8_;
        uStack_1410 = auVar95._16_8_;
        uStack_1408 = auVar95._24_8_;
        local_360 = local_1420;
        uStack_358 = uStack_1418;
        uStack_350 = uStack_1410;
        uStack_348 = uStack_1408;
        local_1500 = auVar122._0_8_;
        uStack_14f8 = auVar122._8_8_;
        uStack_14f0 = auVar122._16_8_;
        uStack_14e8 = auVar122._24_8_;
        local_380 = local_1500;
        uStack_378 = uStack_14f8;
        uStack_370 = uStack_14f0;
        uStack_368 = uStack_14e8;
        local_1360 = auVar96._0_8_;
        uStack_1358 = auVar96._8_8_;
        uStack_1350 = auVar96._16_8_;
        uStack_1348 = auVar96._24_8_;
        local_320 = local_1360;
        uStack_318 = uStack_1358;
        uStack_310 = uStack_1350;
        uStack_308 = uStack_1348;
        local_1340 = auVar123._0_8_;
        uStack_1338 = auVar123._8_8_;
        uStack_1330 = auVar123._16_8_;
        uStack_1328 = auVar123._24_8_;
        local_340 = local_1340;
        uStack_338 = uStack_1338;
        uStack_330 = uStack_1330;
        uStack_328 = uStack_1328;
        local_13a0 = auVar97._0_8_;
        uStack_1398 = auVar97._8_8_;
        uStack_1390 = auVar97._16_8_;
        uStack_1388 = auVar97._24_8_;
        local_2e0 = local_13a0;
        uStack_2d8 = uStack_1398;
        uStack_2d0 = uStack_1390;
        uStack_2c8 = uStack_1388;
        local_1380 = auVar124._0_8_;
        uStack_1378 = auVar124._8_8_;
        uStack_1370 = auVar124._16_8_;
        uStack_1368 = auVar124._24_8_;
        local_300 = local_1380;
        uStack_2f8 = uStack_1378;
        uStack_2f0 = uStack_1370;
        uStack_2e8 = uStack_1368;
        local_13c0 = auVar125._0_8_;
        uStack_13b8 = auVar125._8_8_;
        uStack_13b0 = auVar125._16_8_;
        uStack_13a8 = auVar125._24_8_;
        local_2c0 = local_13c0;
        uStack_2b8 = uStack_13b8;
        uStack_2b0 = uStack_13b0;
        uStack_2a8 = uStack_13a8;
        dVar1 = param_4[8];
        dVar22 = param_4[0xc];
        dVar23 = *param_4;
        dVar24 = param_4[1];
        lVar21 = 0xc0;
        dVar25 = param_4[5];
        dVar26 = param_4[9];
        dVar44 = param_4[0xd];
        dVar45 = param_4[2];
        dVar46 = param_4[6];
        dVar47 = param_4[10];
        dVar48 = param_4[0xe];
        dVar50 = param_4[3];
        dVar51 = param_4[7];
        dVar52 = param_4[0xb];
        dVar53 = param_4[0xf];
        auVar88 = vpmovsxwd_avx2(auVar30);
        do {
          dVar56 = *(double *)(local_5c0 + lVar21);
          dVar57 = *(double *)(local_5c0 + lVar21 + 8);
          dVar58 = *(double *)(local_5c0 + lVar21 + 0x10);
          dVar59 = *(double *)(local_5c0 + lVar21 + 0x18);
          dVar60 = *(double *)(local_5a0 + lVar21);
          dVar61 = *(double *)(local_5a0 + lVar21 + 8);
          dVar62 = *(double *)(local_5a0 + lVar21 + 0x10);
          dVar63 = *(double *)(local_5a0 + lVar21 + 0x18);
          dVar69 = *(double *)(local_580 + lVar21);
          dVar70 = *(double *)(local_580 + lVar21 + 8);
          dVar71 = *(double *)(local_580 + lVar21 + 0x10);
          dVar72 = *(double *)(local_580 + lVar21 + 0x18);
          dVar73 = *(double *)(local_560 + lVar21);
          dVar74 = *(double *)(local_560 + lVar21 + 8);
          dVar75 = *(double *)(local_560 + lVar21 + 0x10);
          dVar76 = *(double *)(local_560 + lVar21 + 0x18);
          dVar77 = *(double *)(local_540 + lVar21);
          dVar78 = *(double *)(local_540 + lVar21 + 8);
          dVar83 = *(double *)(local_540 + lVar21 + 0x10);
          dVar84 = *(double *)(local_540 + lVar21 + 0x18);
          dVar85 = *(double *)(local_520 + lVar21);
          dVar86 = *(double *)(local_520 + lVar21 + 8);
          dVar101 = *(double *)(local_520 + lVar21 + 0x10);
          dVar102 = *(double *)(local_520 + lVar21 + 0x18);
          dVar103 = *(double *)((longlong)adStack_510 + lVar21 + 0x30);
          dVar112 = *(double *)((longlong)adStack_510 + lVar21 + 0x38);
          dVar126 = *(double *)((longlong)adStack_510 + lVar21 + 0x40);
          dVar127 = *(double *)((longlong)adStack_510 + lVar21 + 0x48);
          dVar54 = param_4[4];
          *(double *)(local_11e0 + lVar21) =
               dVar103 * dVar22 + dVar85 * dVar1 + dVar73 * dVar54 + dVar60 * dVar23 + 0.0;
          *(double *)(local_11e0 + lVar21 + 8) =
               dVar112 * dVar22 + dVar86 * dVar1 + dVar74 * dVar54 + dVar61 * dVar23 + 0.0;
          *(double *)(local_11e0 + lVar21 + 0x10) =
               dVar126 * dVar22 + dVar101 * dVar1 + dVar75 * dVar54 + dVar62 * dVar23 + 0.0;
          *(double *)(auStack_11d0 + lVar21 + 8) =
               dVar127 * dVar22 + dVar102 * dVar1 + dVar76 * dVar54 + dVar63 * dVar23 + 0.0;
          dVar128 = *(double *)((longlong)adStack_510 + lVar21 + 0x10);
          dVar146 = *(double *)((longlong)adStack_510 + lVar21 + 0x18);
          dVar148 = *(double *)((longlong)adStack_510 + lVar21 + 0x20);
          dVar149 = *(double *)((longlong)adStack_510 + lVar21 + 0x28);
          *(double *)(local_1200 + lVar21) =
               dVar128 * dVar22 + dVar77 * dVar1 + dVar69 * dVar54 + dVar56 * dVar23 + 0.0;
          *(double *)(local_1200 + lVar21 + 8) =
               dVar146 * dVar22 + dVar78 * dVar1 + dVar70 * dVar54 + dVar57 * dVar23 + 0.0;
          *(double *)(local_1200 + lVar21 + 0x10) =
               dVar148 * dVar22 + dVar83 * dVar1 + dVar71 * dVar54 + dVar58 * dVar23 + 0.0;
          *(double *)(auStack_11f0 + lVar21 + 8) =
               dVar149 * dVar22 + dVar84 * dVar1 + dVar72 * dVar54 + dVar59 * dVar23 + 0.0;
          *(double *)(local_11a0 + lVar21) =
               dVar103 * dVar44 + dVar85 * dVar26 + dVar73 * dVar25 + dVar60 * dVar24 + 0.0;
          *(double *)(local_11a0 + lVar21 + 8) =
               dVar112 * dVar44 + dVar86 * dVar26 + dVar74 * dVar25 + dVar61 * dVar24 + 0.0;
          *(double *)(local_11a0 + lVar21 + 0x10) =
               dVar126 * dVar44 + dVar101 * dVar26 + dVar75 * dVar25 + dVar62 * dVar24 + 0.0;
          *(double *)(local_11a0 + lVar21 + 0x18) =
               dVar127 * dVar44 + dVar102 * dVar26 + dVar76 * dVar25 + dVar63 * dVar24 + 0.0;
          *(double *)(local_11c0 + lVar21) =
               dVar128 * dVar44 + dVar77 * dVar26 + dVar69 * dVar25 + dVar56 * dVar24 + 0.0;
          *(double *)(local_11c0 + lVar21 + 8) =
               dVar146 * dVar44 + dVar78 * dVar26 + dVar70 * dVar25 + dVar57 * dVar24 + 0.0;
          *(double *)(local_11c0 + lVar21 + 0x10) =
               dVar148 * dVar44 + dVar83 * dVar26 + dVar71 * dVar25 + dVar58 * dVar24 + 0.0;
          *(double *)(local_11c0 + lVar21 + 0x18) =
               dVar149 * dVar44 + dVar84 * dVar26 + dVar72 * dVar25 + dVar59 * dVar24 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 0x18) =
               dVar103 * dVar48 + dVar85 * dVar47 + dVar73 * dVar46 + dVar60 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 0x20) =
               dVar112 * dVar48 + dVar86 * dVar47 + dVar74 * dVar46 + dVar61 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 0x28) =
               dVar126 * dVar48 + dVar101 * dVar47 + dVar75 * dVar46 + dVar62 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 0x30) =
               dVar127 * dVar48 + dVar102 * dVar47 + dVar76 * dVar46 + dVar63 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + -8) =
               dVar128 * dVar48 + dVar77 * dVar47 + dVar69 * dVar46 + dVar56 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21) =
               dVar146 * dVar48 + dVar78 * dVar47 + dVar70 * dVar46 + dVar57 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 8) =
               dVar148 * dVar48 + dVar83 * dVar47 + dVar71 * dVar46 + dVar58 * dVar45 + 0.0;
          *(double *)((longlong)adStack_1178 + lVar21 + 0x10) =
               dVar149 * dVar48 + dVar84 * dVar47 + dVar72 * dVar46 + dVar59 * dVar45 + 0.0;
          *(double *)(local_1120 + lVar21) =
               dVar53 * dVar103 + dVar52 * dVar85 + dVar51 * dVar73 + dVar50 * dVar60 + 0.0;
          *(double *)(local_1120 + lVar21 + 8) =
               dVar53 * dVar112 + dVar52 * dVar86 + dVar51 * dVar74 + dVar50 * dVar61 + 0.0;
          *(double *)(local_1120 + lVar21 + 0x10) =
               dVar53 * dVar126 + dVar52 * dVar101 + dVar51 * dVar75 + dVar50 * dVar62 + 0.0;
          *(double *)(local_1120 + lVar21 + 0x18) =
               dVar53 * dVar127 + dVar52 * dVar102 + dVar51 * dVar76 + dVar50 * dVar63 + 0.0;
          *(double *)(local_1140 + lVar21) =
               dVar53 * dVar128 + dVar52 * dVar77 + dVar51 * dVar69 + dVar50 * dVar56 + 0.0;
          *(double *)(local_1140 + lVar21 + 8) =
               dVar53 * dVar146 + dVar52 * dVar78 + dVar51 * dVar70 + dVar50 * dVar57 + 0.0;
          *(double *)(local_1140 + lVar21 + 0x10) =
               dVar53 * dVar148 + dVar52 * dVar83 + dVar51 * dVar71 + dVar50 * dVar58 + 0.0;
          *(double *)(local_1140 + lVar21 + 0x18) =
               dVar53 * dVar149 + dVar52 * dVar84 + dVar51 * dVar72 + dVar50 * dVar59 + 0.0;
          lVar21 = lVar21 + 0x100;
        } while (lVar21 != 0x4c0);
        local_1440 = auVar114._0_8_;
        dStack_1438 = auVar114._8_8_;
        dStack_1430 = auVar114._16_8_;
        dStack_1428 = auVar114._24_8_;
        local_1320 = auVar115._0_8_;
        dStack_1318 = auVar115._8_8_;
        dStack_1310 = auVar115._16_8_;
        dStack_1308 = auVar115._24_8_;
        local_1400 = auVar116._0_8_;
        dStack_13f8 = auVar116._8_8_;
        dStack_13f0 = auVar116._16_8_;
        dStack_13e8 = auVar116._24_8_;
        dVar22 = __real_3fe0000000000000 * (local_1440 + (double)local_d40._0_8_);
        dVar44 = __real_3fe0000000000000 * (dStack_1438 + (double)local_d40._8_8_);
        dVar50 = __real_3fe0000000000000 * (dStack_1430 + dStack_d30);
        dVar56 = __real_3fe0000000000000 * (dStack_1428 + dStack_d28);
        dVar61 = __real_3fe0000000000000 * (local_1320 + local_1400);
        dVar69 = __real_3fe0000000000000 * (dStack_1318 + dStack_13f8);
        dVar72 = __real_3fe0000000000000 * (dStack_1310 + dStack_13f0);
        dVar75 = __real_3fe0000000000000 * (dStack_1308 + dStack_13e8);
        dVar23 = __real_3fe0000000000000 * (local_bc0._0_8_ + local_c40._0_8_);
        dVar45 = __real_3fe0000000000000 * (local_bc0._8_8_ + local_c40._8_8_);
        dVar51 = __real_3fe0000000000000 * (local_bc0._16_8_ + local_c40._16_8_);
        dVar57 = __real_3fe0000000000000 * (local_bc0._24_8_ + local_c40._24_8_);
        dVar62 = __real_3fe0000000000000 * (local_be0._0_8_ + local_c60._0_8_);
        dVar70 = __real_3fe0000000000000 * (local_be0._8_8_ + local_c60._8_8_);
        dVar73 = __real_3fe0000000000000 * (local_be0._16_8_ + local_c60._16_8_);
        dVar76 = __real_3fe0000000000000 * (local_be0._24_8_ + local_c60._24_8_);
        dVar1 = (double)CONCAT17(uStack_fb9,
                                 CONCAT16(uStack_fba,
                                          CONCAT15(uStack_fbb,
                                                   CONCAT14(uStack_fbc,
                                                            CONCAT13(uStack_fbd,
                                                                     CONCAT12(uStack_fbe,
                                                                              CONCAT11(uStack_fbf,
                                                                                       local_fc0))))
                                                  )));
        dVar24 = __real_3fe0000000000000 * (local_c00._0_8_ + local_c80._0_8_);
        dVar46 = __real_3fe0000000000000 * (local_c00._8_8_ + local_c80._8_8_);
        dVar52 = __real_3fe0000000000000 * (local_c00._16_8_ + local_c80._16_8_);
        dVar58 = __real_3fe0000000000000 * (local_c00._24_8_ + local_c80._24_8_);
        dVar25 = __real_3fe0000000000000 * (local_c20._0_8_ + local_ca0._0_8_);
        dVar47 = __real_3fe0000000000000 * (local_c20._8_8_ + local_ca0._8_8_);
        dVar53 = __real_3fe0000000000000 * (local_c20._16_8_ + local_ca0._16_8_);
        dVar59 = __real_3fe0000000000000 * (local_c20._24_8_ + local_ca0._24_8_);
        auVar11 = vsubpd_avx(local_c40,local_bc0);
        auVar81 = vsubpd_avx(_local_d40,auVar114);
        auVar80 = vsubpd_avx(local_c60,local_be0);
        auVar89 = vsubpd_avx(auVar116,auVar115);
        auVar90 = vsubpd_avx(local_ca0,local_c20);
        auVar91 = vsubpd_avx(local_c80,local_c00);
        dVar26 = __real_3fe0000000000000 * auVar81._0_8_;
        dVar48 = __real_3fe0000000000000 * auVar81._8_8_;
        dVar54 = __real_3fe0000000000000 * auVar81._16_8_;
        dVar60 = __real_3fe0000000000000 * auVar81._24_8_;
        dVar86 = __real_3fe0000000000000 * auVar11._0_8_;
        dVar101 = __real_3fe0000000000000 * auVar11._8_8_;
        dVar102 = __real_3fe0000000000000 * auVar11._16_8_;
        dVar103 = __real_3fe0000000000000 * auVar11._24_8_;
        dVar78 = auVar89._0_8_ * __real_3fe0000000000000;
        dVar83 = auVar89._8_8_ * __real_3fe0000000000000;
        dVar84 = auVar89._16_8_ * __real_3fe0000000000000;
        dVar85 = auVar89._24_8_ * __real_3fe0000000000000;
        dVar63 = __real_3fe0000000000000 * auVar80._0_8_;
        dVar71 = __real_3fe0000000000000 * auVar80._8_8_;
        dVar74 = __real_3fe0000000000000 * auVar80._16_8_;
        dVar77 = __real_3fe0000000000000 * auVar80._24_8_;
        dVar112 = __real_3fe0000000000000 * auVar91._0_8_;
        dVar126 = __real_3fe0000000000000 * auVar91._8_8_;
        dVar127 = __real_3fe0000000000000 * auVar91._16_8_;
        dVar128 = __real_3fe0000000000000 * auVar91._24_8_;
        dVar146 = __real_3fe0000000000000 * auVar90._0_8_;
        dVar148 = __real_3fe0000000000000 * auVar90._8_8_;
        dVar149 = __real_3fe0000000000000 * auVar90._16_8_;
        dVar150 = __real_3fe0000000000000 * auVar90._24_8_;
        auVar117._0_8_ =
             dVar25 * local_f20 + dVar22 * (double)local_1120 + dVar61 * (double)local_1020._0_8_ +
             local_e20;
        auVar117._8_8_ =
             dVar47 * dStack_f18 + dVar44 * adStack_1118[0] + dVar69 * (double)local_1020._8_8_ +
             dStack_e18;
        auVar117._16_8_ =
             dVar53 * dStack_f10 + dVar50 * adStack_1118[1] + dVar72 * dStack_1010 + dStack_e10;
        auVar117._24_8_ =
             dVar59 * dStack_f08 + dVar56 * adStack_1118[2] + dVar75 * dStack_1008 + dStack_e08;
        auVar123._0_8_ =
             dVar24 * local_f40 + dVar23 * (double)local_1140 + dVar62 * (double)local_1040._0_8_ +
             local_e40;
        auVar123._8_8_ =
             dVar46 * dStack_f38 + dVar45 * adStack_1138[0] + dVar70 * (double)local_1040._8_8_ +
             dStack_e38;
        auVar123._16_8_ =
             dVar52 * dStack_f30 + dVar51 * adStack_1138[1] + dVar73 * dStack_1030 + dStack_e30;
        auVar123._24_8_ =
             dVar58 * dStack_f28 + dVar57 * adStack_1138[2] + dVar76 * dStack_1028 + dStack_e28;
        auVar153._0_8_ =
             dVar25 * local_ee0 +
             dVar22 * (double)local_10e0._0_8_ + dVar61 * (double)local_fe0._0_8_ + local_de0;
        auVar153._8_8_ =
             dVar47 * dStack_ed8 +
             dVar44 * (double)local_10e0._8_8_ + dVar69 * (double)local_fe0._8_8_ + dStack_dd8;
        auVar153._16_8_ =
             dVar53 * dStack_ed0 + dVar50 * dStack_10d0 + dVar72 * dStack_fd0 + dStack_dd0;
        auVar153._24_8_ =
             dVar59 * dStack_ec8 + dVar56 * dStack_10c8 + dVar75 * dStack_fc8 + dStack_dc8;
        auVar114._0_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar86 * (double)local_1140)) +
             (double)((ulonglong)(dVar63 * (double)local_1040._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar112 * local_f40) & __real_7fffffffffffffff);
        auVar114._8_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar101 * adStack_1138[0])) +
             (double)((ulonglong)(dVar71 * (double)local_1040._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar126 * dStack_f38) & __real_7fffffffffffffff);
        auVar114._16_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar102 * adStack_1138[1])) +
             (double)((ulonglong)(dVar74 * dStack_1030) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar127 * dStack_f30) & __real_7fffffffffffffff);
        auVar114._24_8_ =
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar103 * adStack_1138[2])) +
             (double)((ulonglong)(dVar77 * dStack_1028) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar128 * dStack_f28) & __real_7fffffffffffffff);
        auVar119._0_8_ =
             dVar24 * local_f00 +
             dVar23 * (double)local_1100._0_8_ + dVar62 * (double)local_1000._0_8_ + local_e00;
        auVar119._8_8_ =
             dVar46 * dStack_ef8 +
             dVar45 * (double)local_1100._8_8_ + dVar70 * (double)local_1000._8_8_ + dStack_df8;
        auVar119._16_8_ =
             dVar52 * dStack_ef0 + dVar51 * dStack_10f0 + dVar73 * dStack_ff0 + dStack_df0;
        auVar119._24_8_ =
             dVar58 * dStack_ee8 + dVar57 * dStack_10e8 + dVar76 * dStack_fe8 + dStack_de8;
        auVar122._0_8_ =
             (double)((ulonglong)(dVar146 * local_f20) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar26 * (double)local_1120) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_1020._0_8_) & __real_7fffffffffffffff);
        auVar122._8_8_ =
             (double)((ulonglong)(dVar148 * dStack_f18) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar48 * adStack_1118[0]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * (double)local_1020._8_8_) & __real_7fffffffffffffff);
        auVar122._16_8_ =
             (double)((ulonglong)(dVar149 * dStack_f10) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar54 * adStack_1118[1]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar84 * dStack_1010) & __real_7fffffffffffffff);
        auVar122._24_8_ =
             (double)((ulonglong)(dVar150 * dStack_f08) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar60 * adStack_1118[2]) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar85 * dStack_1008) & __real_7fffffffffffffff);
        auVar141._0_8_ =
             local_ea0 * dVar25 + (double)local_10a0._0_8_ * dVar22 + dVar61 * local_fa0 + local_da0
        ;
        auVar141._8_8_ =
             dStack_e98 * dVar47 + (double)local_10a0._8_8_ * dVar44 + dVar69 * dStack_f98 +
             dStack_d98;
        auVar141._16_8_ =
             dStack_e90 * dVar53 + dStack_1090 * dVar50 + dVar72 * dStack_f90 + dStack_d90;
        auVar141._24_8_ =
             dStack_e88 * dVar59 + dStack_1088 * dVar56 + dVar75 * dStack_f88 + dStack_d88;
        auVar151._0_8_ =
             (double)((ulonglong)(dVar86 * (double)local_1100._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar63 * (double)local_1000._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar112 * local_f00) & __real_7fffffffffffffff);
        auVar151._8_8_ =
             (double)((ulonglong)(dVar101 * (double)local_1100._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * (double)local_1000._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar126 * dStack_ef8) & __real_7fffffffffffffff);
        auVar151._16_8_ =
             (double)((ulonglong)(dVar102 * dStack_10f0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar74 * dStack_ff0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar127 * dStack_ef0) & __real_7fffffffffffffff);
        auVar151._24_8_ =
             (double)((ulonglong)(dVar103 * dStack_10e8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * dStack_fe8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar128 * dStack_ee8) & __real_7fffffffffffffff);
        auVar116._0_8_ =
             local_ec0 * dVar24 + (double)local_10c0._0_8_ * dVar23 + dVar62 * dVar1 + local_dc0;
        auVar116._8_8_ =
             dStack_eb8 * dVar46 + (double)local_10c0._8_8_ * dVar45 + dVar70 * dStack_fb8 +
             dStack_db8;
        auVar116._16_8_ =
             dStack_eb0 * dVar52 + dStack_10b0 * dVar51 + dVar73 * dStack_fb0 + dStack_db0;
        auVar116._24_8_ =
             dStack_ea8 * dVar58 + dStack_10a8 * dVar57 + dVar76 * dStack_fa8 + dStack_da8;
        auVar155._0_8_ =
             (double)((ulonglong)(dVar146 * local_ee0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar26 * (double)local_10e0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar78 * (double)local_fe0._0_8_) & __real_7fffffffffffffff);
        auVar155._8_8_ =
             (double)((ulonglong)(dVar148 * dStack_ed8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar48 * (double)local_10e0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar83 * (double)local_fe0._8_8_) & __real_7fffffffffffffff);
        auVar155._16_8_ =
             (double)((ulonglong)(dVar149 * dStack_ed0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar54 * dStack_10d0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar84 * dStack_fd0) & __real_7fffffffffffffff);
        auVar155._24_8_ =
             (double)((ulonglong)(dVar150 * dStack_ec8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar60 * dStack_10c8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar85 * dStack_fc8) & __real_7fffffffffffffff);
        auVar138._0_8_ =
             (double)((ulonglong)(dVar86 * (double)local_10c0._0_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar63 * dVar1) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar112 * local_ec0) & __real_7fffffffffffffff);
        auVar138._8_8_ =
             (double)((ulonglong)(dVar101 * (double)local_10c0._8_8_) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar71 * dStack_fb8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar126 * dStack_eb8) & __real_7fffffffffffffff);
        auVar138._16_8_ =
             (double)((ulonglong)(dVar102 * dStack_10b0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar74 * dStack_fb0) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar127 * dStack_eb0) & __real_7fffffffffffffff);
        auVar138._24_8_ =
             (double)((ulonglong)(dVar103 * dStack_10a8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar77 * dStack_fa8) & __real_7fffffffffffffff) +
             (double)((ulonglong)(dVar128 * dStack_ea8) & __real_7fffffffffffffff);
        auVar115._0_8_ =
             (double)((ulonglong)(dVar146 * local_ea0) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar26 * (double)local_10a0._0_8_)) +
             (double)((ulonglong)(dVar78 * local_fa0) & __real_7fffffffffffffff);
        auVar115._8_8_ =
             (double)((ulonglong)(dVar148 * dStack_e98) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar48 * (double)local_10a0._8_8_)) +
             (double)((ulonglong)(dVar83 * dStack_f98) & __real_7fffffffffffffff);
        auVar115._16_8_ =
             (double)((ulonglong)(dVar149 * dStack_e90) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar54 * dStack_1090)) +
             (double)((ulonglong)(dVar84 * dStack_f90) & __real_7fffffffffffffff);
        auVar115._24_8_ =
             (double)((ulonglong)(dVar150 * dStack_e88) & __real_7fffffffffffffff) +
             (double)(__real_7fffffffffffffff & (ulonglong)(dVar60 * dStack_1088)) +
             (double)((ulonglong)(dVar85 * dStack_f88) & __real_7fffffffffffffff);
        auVar11 = vsubpd_avx(auVar123,auVar114);
        auVar81 = vsubpd_avx(auVar117,auVar122);
        auVar80 = vsubpd_avx(auVar119,auVar151);
        auVar89 = vsubpd_avx(auVar153,auVar155);
        local_1600._8_8_ = auVar123._8_8_ + auVar114._8_8_;
        local_1600._0_8_ = auVar123._0_8_ + auVar114._0_8_;
        dStack_15f0 = auVar123._16_8_ + auVar114._16_8_;
        dStack_15e8 = auVar123._24_8_ + auVar114._24_8_;
        auVar90 = vsubpd_avx(auVar116,auVar138);
        local_15e0._8_8_ = auVar122._8_8_ + auVar117._8_8_;
        local_15e0._0_8_ = auVar122._0_8_ + auVar117._0_8_;
        dStack_15d0 = auVar122._16_8_ + auVar117._16_8_;
        dStack_15c8 = auVar122._24_8_ + auVar117._24_8_;
        auVar91 = vsubpd_avx(auVar141,auVar115);
        auVar121._0_8_ = auVar151._0_8_ + auVar119._0_8_;
        auVar121._8_8_ = auVar151._8_8_ + auVar119._8_8_;
        auVar121._16_8_ = auVar151._16_8_ + auVar119._16_8_;
        auVar121._24_8_ = auVar151._24_8_ + auVar119._24_8_;
        auVar118._0_8_ = auVar155._0_8_ + auVar153._0_8_;
        auVar118._8_8_ = auVar155._8_8_ + auVar153._8_8_;
        auVar118._16_8_ = auVar155._16_8_ + auVar153._16_8_;
        auVar118._24_8_ = auVar155._24_8_ + auVar153._24_8_;
        auVar120._0_8_ = auVar138._0_8_ + auVar116._0_8_;
        auVar120._8_8_ = auVar138._8_8_ + auVar116._8_8_;
        auVar120._16_8_ = auVar138._16_8_ + auVar116._16_8_;
        auVar120._24_8_ = auVar138._24_8_ + auVar116._24_8_;
        auVar142._0_8_ = auVar141._0_8_ + auVar115._0_8_;
        auVar142._8_8_ = auVar141._8_8_ + auVar115._8_8_;
        auVar142._16_8_ = auVar141._16_8_ + auVar115._16_8_;
        auVar142._24_8_ = auVar141._24_8_ + auVar115._24_8_;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = local_1180;
        auVar30 = vpcmpeqb_avx(auVar30,ZEXT816(0) << 0x40);
        auVar93 = vpmovsxbd_avx2(auVar30 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        auVar92 = vpand_avx2(auVar93,auVar88);
        iVar20 = vmovmskps_avx(auVar92);
        if (iVar20 == 0) {
          auVar92 = SUB6432(ZEXT864(0),0) << 0x40;
LAB_140a59050:
          auVar28 = vpmovzxbw_avx(auVar30);
          auVar30 = vpand_avx(auVar28,local_d20._0_16_);
          auVar30 = vpshufb_avx(auVar30,___xmm_00000000000000000e0c0a0806040200);
          if ((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
            auVar93 = vpmovzxwd_avx2(auVar28);
            auVar93 = vpslld_avx2(auVar93,0x1f);
            auVar94 = vpsrad_avx2(auVar93,0x1f);
            auVar93 = auVar88 & auVar94;
            if ((((((((SUB321(auVar93 >> 0x1f,0) & 1) != 0 || (SUB321(auVar93 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar93 >> 0x5f,0) & 1) != 0) || SUB321(auVar93 >> 0x7f,0) != '\0')
                  || (SUB321(auVar93 >> 0x9f,0) & 1) != 0) || SUB321(auVar93 >> 0xbf,0) != '\0') ||
                (SUB321(auVar93 >> 0xdf,0) & 1) != 0) || auVar93[0x1f] < '\0') {
              auVar95 = vpermpd_avx2(auVar94,0xd8);
              auVar93 = vshufps_avx(auVar95,auVar95,0x50);
              auVar95 = vshufps_avx(auVar95,auVar95,0xfa);
              _local_1140 = vmaskmovpd_avx(auVar93,auVar11);
              _local_1120 = vmaskmovpd_avx(auVar95,auVar81);
              _local_1100 = vmaskmovpd_avx(auVar93,auVar80);
              _local_10e0 = vmaskmovpd_avx(auVar95,auVar89);
              _local_10c0 = vmaskmovpd_avx(auVar93,auVar90);
              _local_10a0 = vmaskmovpd_avx(auVar95,auVar91);
              local_1080 = vmaskmovpd_avx(auVar93,_local_1600);
              local_1060 = vmaskmovpd_avx(auVar95,_local_15e0);
              _local_1040 = vmaskmovpd_avx(auVar93,auVar121);
              _local_1020 = vmaskmovpd_avx(auVar95,auVar118);
              _local_1000 = vmaskmovpd_avx(auVar93,auVar120);
              _local_fe0 = vmaskmovpd_avx(auVar95,auVar142);
              auVar30 = vpsllw_avx(auVar28,0xf);
              auVar30 = vpacksswb_avx(auVar30,auVar30);
              if ((SUB161(auVar30 >> 7,0) & 1) != 0) {
                local_fc0 = 1;
              }
              if ((SUB161(auVar30 >> 0xf,0) & 1) != 0) {
                uStack_fbf = 1;
              }
              if ((SUB161(auVar30 >> 0x17,0) & 1) != 0) {
                uStack_fbe = 1;
              }
              if ((SUB161(auVar30 >> 0x1f,0) & 1) != 0) {
                uStack_fbd = 1;
              }
              if ((SUB161(auVar30 >> 0x27,0) & 1) != 0) {
                uStack_fbc = 1;
              }
              if ((SUB161(auVar30 >> 0x2f,0) & 1) != 0) {
                uStack_fbb = 1;
              }
              if ((SUB161(auVar30 >> 0x37,0) & 1) != 0) {
                uStack_fba = 1;
              }
              if ((SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
                uStack_fb9 = 1;
              }
              local_1420._0_4_ = auVar88._0_4_;
              local_1420._4_4_ = auVar88._4_4_;
              uStack_1418._0_4_ = auVar88._8_4_;
              uStack_1418._4_4_ = auVar88._12_4_;
              uStack_1410._0_4_ = auVar88._16_4_;
              uStack_1410._4_4_ = auVar88._20_4_;
              uStack_1408._0_4_ = auVar88._24_4_;
              uStack_1408._4_4_ = auVar88._28_4_;
              auVar31._0_4_ = auVar94._0_4_ & (uint)local_1420;
              auVar31._4_4_ = auVar94._4_4_ & local_1420._4_4_;
              auVar31._8_4_ = auVar94._8_4_ & (uint)uStack_1418;
              auVar31._12_4_ = auVar94._12_4_ & uStack_1418._4_4_;
              auVar31._16_4_ = auVar94._16_4_ & (uint)uStack_1410;
              auVar31._20_4_ = auVar94._20_4_ & uStack_1410._4_4_;
              auVar31._24_4_ = auVar94._24_4_ & (uint)uStack_1408;
              auVar31._28_4_ = auVar94._28_4_ & uStack_1408._4_4_;
              vmovmskps_avx(auVar92 | auVar31);
            }
          }
        }
        else {
          auVar94 = vminpd_avx(local_1300,auVar11);
          auVar96 = vpermq_avx2(auVar93,0xd8);
          auVar95 = vpshufd_avx2(auVar96,0x50);
          _local_1140 = vmaskmovpd_avx(auVar95,auVar94);
          auVar93 = vminpd_avx(local_12e0,auVar81);
          auVar94 = vpshufd_avx2(auVar96,0xfa);
          _local_1120 = vmaskmovpd_avx(auVar94,auVar93);
          auVar93 = vminpd_avx(local_12c0,auVar80);
          _local_1100 = vmaskmovpd_avx(auVar95,auVar93);
          auVar93 = vminpd_avx(local_12a0,auVar89);
          _local_10e0 = vmaskmovpd_avx(auVar94,auVar93);
          auVar93 = vminpd_avx(local_1280,auVar90);
          _local_10c0 = vmaskmovpd_avx(auVar95,auVar93);
          auVar93 = vminpd_avx(local_1260,auVar91);
          _local_10a0 = vmaskmovpd_avx(auVar94,auVar93);
          auVar93 = vmaxpd_avx(local_1240,_local_1600);
          local_1080 = vmaskmovpd_avx(auVar95,auVar93);
          auVar93 = vmaxpd_avx(local_1220,_local_15e0);
          local_1060 = vmaskmovpd_avx(auVar94,auVar93);
          auVar93 = vmaxpd_avx(_local_1200,auVar121);
          _local_1040 = vmaskmovpd_avx(auVar95,auVar93);
          auVar93 = vmaxpd_avx(_local_11e0,auVar118);
          _local_1020 = vmaskmovpd_avx(auVar94,auVar93);
          auVar93 = vmaxpd_avx(_local_11c0,auVar120);
          _local_1000 = vmaskmovpd_avx(auVar95,auVar93);
          auVar93 = vmaxpd_avx(_local_11a0,auVar142);
          _local_fe0 = vmaskmovpd_avx(auVar94,auVar93);
          auVar28._8_8_ = local_1180;
          auVar28._0_8_ = local_1180;
          auVar28 = vpcmpeqb_avx(auVar28,ZEXT816(0) << 0x40);
          bVar14 = ~(SUB161(auVar28 >> 7,0) & 1 | (SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar28 >> 0x17,0) & 1) << 2 | (SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar28 >> 0x27,0) & 1) << 4 | (SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar28 >> 0x37,0) & 1) << 6);
          if ((bVar14 & 1) != 0) {
            local_fc0 = (undefined1)local_1180;
          }
          if ((bVar14 & 2) != 0) {
            uStack_fbf = (undefined1)(local_1180 >> 8);
          }
          if ((bVar14 & 4) != 0) {
            uStack_fbe = (undefined1)(local_1180 >> 0x10);
          }
          if ((bVar14 & 8) != 0) {
            uStack_fbd = (undefined1)(local_1180 >> 0x18);
          }
          if ((bVar14 & 0x10) != 0) {
            uStack_fbc = (undefined1)(local_1180 >> 0x20);
          }
          if ((bVar14 & 0x20) != 0) {
            uStack_fbb = (undefined1)(local_1180 >> 0x28);
          }
          if ((bVar14 & 0x40) != 0) {
            uStack_fba = (undefined1)(local_1180 >> 0x30);
          }
          if ((SUB161(auVar28 >> 0x3f,0) & 1) == 0) {
            uStack_fb9 = (undefined1)(local_1180 >> 0x38);
          }
          if ((byte)(bVar15 | bVar3 << 1 | bVar4 << 2 | bVar5 << 3 | bVar6 << 4 | bVar7 << 5 |
                     bVar8 << 6 | bVar9) != (byte)iVar20) goto LAB_140a59050;
        }
        in_ZMM5 = ZEXT3264(local_1060);
        auVar11 = vpermpd_avx2(auVar88,0xd8);
        auVar88 = vshufps_avx(auVar11,auVar11,0x50);
        auVar11 = vshufps_avx(auVar11,auVar11,0xfa);
        local_1300 = vmaskmovpd_avx(auVar88,_local_1140);
        local_12e0 = vmaskmovpd_avx(auVar11,_local_1120);
        local_12c0 = vmaskmovpd_avx(auVar88,_local_1100);
        local_12a0 = vmaskmovpd_avx(auVar11,_local_10e0);
        local_1280 = vmaskmovpd_avx(auVar88,_local_10c0);
        local_1260 = vmaskmovpd_avx(auVar11,_local_10a0);
        local_1240 = vmaskmovpd_avx(auVar88,local_1080);
        local_1220 = vmaskmovpd_avx(auVar11,local_1060);
        _local_1200 = vmaskmovpd_avx(auVar88,_local_1040);
        _local_11e0 = vmaskmovpd_avx(auVar11,_local_1020);
        _local_11c0 = vmaskmovpd_avx(auVar88,_local_1000);
        _local_11a0 = vmaskmovpd_avx(auVar11,_local_fe0);
        uVar17 = local_1180;
        if (bVar15 != 0) {
          local_1180 = CONCAT71(local_1180._1_7_,local_fc0);
          uVar17 = local_1180;
        }
        auVar135 = ZEXT864(0) << 0x40;
        if (bVar3 != 0) {
          local_1180._2_6_ = (undefined6)(uVar17 >> 0x10);
          local_1180._0_1_ = (undefined1)uVar17;
          local_1180._0_2_ = CONCAT11(uStack_fbf,(undefined1)local_1180);
          uVar17 = local_1180;
        }
        if (bVar4 != 0) {
          local_1180._3_5_ = (undefined5)(uVar17 >> 0x18);
          local_1180._0_2_ = (undefined2)uVar17;
          local_1180._0_3_ = CONCAT12(uStack_fbe,(undefined2)local_1180);
          uVar17 = local_1180;
        }
        if (bVar5 != 0) {
          local_1180._4_4_ = (undefined4)(uVar17 >> 0x20);
          local_1180._0_3_ = (undefined3)uVar17;
          local_1180._0_4_ = CONCAT13(uStack_fbd,(undefined3)local_1180);
          uVar17 = local_1180;
        }
        if (bVar6 != 0) {
          local_1180._5_3_ = (undefined3)(uVar17 >> 0x28);
          local_1180._0_4_ = (undefined4)uVar17;
          local_1180._0_5_ = CONCAT14(uStack_fbc,(undefined4)local_1180);
          uVar17 = local_1180;
        }
        if (bVar7 != 0) {
          local_1180._6_2_ = (undefined2)(uVar17 >> 0x30);
          local_1180._0_5_ = (undefined5)uVar17;
          local_1180._0_6_ = CONCAT15(uStack_fbb,(undefined5)local_1180);
          uVar17 = local_1180;
        }
        local_1180 = uVar17;
        if (bVar8 != 0) {
          local_1180._7_1_ = (undefined1)(uVar17 >> 0x38);
          local_1180._0_6_ = (undefined6)uVar17;
          local_1180._0_7_ = CONCAT16(uStack_fba,(undefined6)local_1180);
        }
        auVar131 = ZEXT3264(_local_940);
        if (bVar9 != 0) {
          local_1180 = CONCAT17(uStack_fb9,(undefined7)local_1180);
        }
      }
      iVar18 = iVar18 + 8;
    } while (iVar18 < (int)(uVar16 & 0xfffffff8));
  }
  if ((int)param_6 <= iVar18) {
    local_d20._4_4_ = param_6;
    local_d20._0_4_ = param_6;
    local_d20._8_4_ = param_6;
    local_d20._12_4_ = param_6;
    local_d20._16_4_ = param_6;
    local_d20._20_4_ = param_6;
    local_d20._24_4_ = param_6;
    local_d20._28_4_ = param_6;
    goto LAB_140a5a964;
  }
  auVar66._4_4_ = iVar18;
  auVar66._0_4_ = iVar18;
  auVar66._8_4_ = iVar18;
  auVar66._12_4_ = iVar18;
  auVar66._16_4_ = iVar18;
  auVar66._20_4_ = iVar18;
  auVar66._24_4_ = iVar18;
  auVar66._28_4_ = iVar18;
  auVar81 = vpor_avx2(auVar66,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  local_d20._4_4_ = param_6;
  local_d20._0_4_ = param_6;
  local_d20._8_4_ = param_6;
  local_d20._12_4_ = param_6;
  local_d20._16_4_ = param_6;
  local_d20._20_4_ = param_6;
  local_d20._24_4_ = param_6;
  local_d20._28_4_ = param_6;
  auVar134._4_4_ = __real_00000038;
  auVar134._0_4_ = __real_00000038;
  auVar134._8_4_ = __real_00000038;
  auVar134._12_4_ = __real_00000038;
  auVar134._16_4_ = __real_00000038;
  auVar134._20_4_ = __real_00000038;
  auVar134._24_4_ = __real_00000038;
  auVar134._28_4_ = __real_00000038;
  auVar88 = vpmulld_avx2(auVar81,auVar134);
  local_d00 = vpcmpgtd_avx2(local_d20,auVar81);
  auVar32._4_4_ = __real_00000030;
  auVar32._0_4_ = __real_00000030;
  auVar32._8_4_ = __real_00000030;
  auVar32._12_4_ = __real_00000030;
  auVar32._16_4_ = __real_00000030;
  auVar32._20_4_ = __real_00000030;
  auVar32._24_4_ = __real_00000030;
  auVar32._28_4_ = __real_00000030;
  auVar10._0_4_ = auVar88._0_4_ + __real_00000030;
  auVar10._4_4_ = auVar88._4_4_ + __real_00000030;
  auVar10._8_4_ = auVar88._8_4_ + __real_00000030;
  auVar10._12_4_ = auVar88._12_4_ + __real_00000030;
  auVar10._16_4_ = auVar88._16_4_ + __real_00000030;
  auVar10._20_4_ = auVar88._20_4_ + __real_00000030;
  auVar10._24_4_ = auVar88._24_4_ + __real_00000030;
  auVar10._28_4_ = auVar88._28_4_ + __real_00000030;
  auVar88 = vpand_avx2(local_d00,auVar10);
  auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar88._0_4_)),
                        (uint)*(byte *)(param_3 + auVar88._4_4_),1);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._8_4_),2);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._12_4_),3);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._16_4_),4);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._20_4_),5);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._24_4_),6);
  auVar28 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_3 + auVar88._28_4_),7);
  auVar88 = vmaskmovps_avx(local_d00,*(undefined1 (*) [32])(param_1 + (iVar18 << 2)));
  auVar11 = vpcmpeqd_avx2(ZEXT1632(auVar30),ZEXT1632(auVar30));
  auVar11 = vpcmpeqd_avx2(auVar88,auVar11);
  auVar30 = vpcmpeqb_avx(auVar28,(undefined1  [16])0x0);
  auVar28 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
  auVar88 = vpmovsxbd_avx2(auVar30 ^ auVar28);
  auVar88 = vpandn_avx2(auVar11,auVar88);
  auVar88 = vpand_avx2(local_d00,auVar88);
  uVar16 = vmovmskps_avx(auVar88);
  if (uVar16 == 0) goto LAB_140a5a964;
  auVar88 = vpslld_avx2(auVar81,3);
  vpsubd_avx2(auVar88,auVar81);
  auVar80 = vpmovsxdq_avx2(local_d00._0_16_);
  local_bc0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar80);
  auVar89 = vpmovsxdq_avx2(local_d00._16_16_);
  auVar114 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar89);
  auVar132._4_4_ = __real_00000008;
  auVar132._0_4_ = __real_00000008;
  auVar132._8_4_ = __real_00000008;
  auVar132._12_4_ = __real_00000008;
  auVar132._16_4_ = __real_00000008;
  auVar132._20_4_ = __real_00000008;
  auVar132._24_4_ = __real_00000008;
  auVar132._28_4_ = __real_00000008;
  local_be0 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar80);
  auVar115 = vgatherdpd(ZEXT832(0) << 0x40,auVar89);
  auVar136._4_4_ = __real_00000010;
  auVar136._0_4_ = __real_00000010;
  auVar136._8_4_ = __real_00000010;
  auVar136._12_4_ = __real_00000010;
  auVar136._16_4_ = __real_00000010;
  auVar136._20_4_ = __real_00000010;
  auVar136._24_4_ = __real_00000010;
  auVar136._28_4_ = __real_00000010;
  local_c00 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar80);
  local_c20 = vgatherdpd(ZEXT832(0) << 0x40,auVar89);
  auVar139._4_4_ = __real_00000018;
  auVar139._0_4_ = __real_00000018;
  auVar139._8_4_ = __real_00000018;
  auVar139._12_4_ = __real_00000018;
  auVar139._16_4_ = __real_00000018;
  auVar139._20_4_ = __real_00000018;
  auVar139._24_4_ = __real_00000018;
  auVar139._28_4_ = __real_00000018;
  local_c40 = vgatherdpd(ZEXT1632(ZEXT816(0)),auVar80);
  auVar116 = vgatherdpd(ZEXT832(0) << 0x40,auVar89);
  auVar143._4_4_ = __real_00000020;
  auVar143._0_4_ = __real_00000020;
  auVar143._8_4_ = __real_00000020;
  auVar143._12_4_ = __real_00000020;
  auVar143._16_4_ = __real_00000020;
  auVar143._20_4_ = __real_00000020;
  auVar143._24_4_ = __real_00000020;
  auVar143._28_4_ = __real_00000020;
  auVar88 = vpcmpeqd_avx2(auVar32,auVar32);
  local_c60 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar80);
  _local_d40 = vgatherdpd(ZEXT832(0) << 0x40,auVar89);
  auVar147._4_4_ = __real_00000028;
  auVar147._0_4_ = __real_00000028;
  auVar147._8_4_ = __real_00000028;
  auVar147._12_4_ = __real_00000028;
  auVar147._16_4_ = __real_00000028;
  auVar147._20_4_ = __real_00000028;
  auVar147._24_4_ = __real_00000028;
  auVar147._28_4_ = __real_00000028;
  local_c80 = vgatherdpd(ZEXT832(0) << 0x40,auVar80);
  local_ca0 = vgatherdpd(ZEXT832(0) << 0x40,auVar89);
  auVar29 = vpackssdw_avx(SUB3216(auVar11 ^ auVar88,0),SUB3216(auVar11 ^ auVar88,0x10));
  auVar30 = vpmovsxbw_avx(auVar30 ^ auVar28);
  auVar28 = vpand_avx(auVar29,auVar30);
  auVar30 = vpackssdw_avx(local_d00._0_16_,local_d00._16_16_);
  auVar30 = vpand_avx(auVar28,auVar30);
  auVar129 = vpslld_avx2(auVar81,7);
  auVar29 = vpshufd_avx(auVar30,0xee);
  auVar88 = vpmovsxwq_avx2(auVar29);
  auVar94 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
  vpor_avx2(auVar129,auVar132);
  auVar11 = vpmovsxwq_avx2(auVar30);
  auVar95 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar96 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar136,auVar129);
  auVar97 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar124 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar139,auVar129);
  auVar125 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar105 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar143,auVar129);
  auVar106 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar107 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar147,auVar129);
  auVar108 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar109 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar129,auVar32);
  auVar81 = vgatherdpd(ZEXT832(0),auVar11);
  auVar80 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  vpor_avx2(auVar129,auVar134);
  auVar89 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar90 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  auVar33._4_4_ = __real_00000040;
  auVar33._0_4_ = __real_00000040;
  auVar33._8_4_ = __real_00000040;
  auVar33._12_4_ = __real_00000040;
  auVar33._16_4_ = __real_00000040;
  auVar33._20_4_ = __real_00000040;
  auVar33._24_4_ = __real_00000040;
  auVar33._28_4_ = __real_00000040;
  vpor_avx2(auVar129,auVar33);
  auVar91 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  auVar92 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  auVar34._4_4_ = __real_00000048;
  auVar34._0_4_ = __real_00000048;
  auVar34._8_4_ = __real_00000048;
  auVar34._12_4_ = __real_00000048;
  auVar34._16_4_ = __real_00000048;
  auVar34._20_4_ = __real_00000048;
  auVar34._24_4_ = __real_00000048;
  auVar34._28_4_ = __real_00000048;
  vpor_avx2(auVar129,auVar34);
  auVar93 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  local_6a0 = vgatherdpd(ZEXT832(0) << 0x20,auVar88);
  auVar35._4_4_ = __real_00000050;
  auVar35._0_4_ = __real_00000050;
  auVar35._8_4_ = __real_00000050;
  auVar35._12_4_ = __real_00000050;
  auVar35._16_4_ = __real_00000050;
  auVar35._20_4_ = __real_00000050;
  auVar35._24_4_ = __real_00000050;
  auVar35._28_4_ = __real_00000050;
  vpor_avx2(auVar129,auVar35);
  local_680 = vgatherdpd(ZEXT832(0),auVar11);
  local_660 = vgatherdpd(ZEXT832(0),auVar88);
  auVar36._4_4_ = __real_00000058;
  auVar36._0_4_ = __real_00000058;
  auVar36._8_4_ = __real_00000058;
  auVar36._12_4_ = __real_00000058;
  auVar36._16_4_ = __real_00000058;
  auVar36._20_4_ = __real_00000058;
  auVar36._24_4_ = __real_00000058;
  auVar36._28_4_ = __real_00000058;
  vpor_avx2(auVar129,auVar36);
  local_640 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
  local_620 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
  auVar37._4_4_ = __real_00000060;
  auVar37._0_4_ = __real_00000060;
  auVar37._8_4_ = __real_00000060;
  auVar37._12_4_ = __real_00000060;
  auVar37._16_4_ = __real_00000060;
  auVar37._20_4_ = __real_00000060;
  auVar37._24_4_ = __real_00000060;
  auVar37._28_4_ = __real_00000060;
  vpor_avx2(auVar129,auVar37);
  local_600 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
  local_5e0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
  auVar38._4_4_ = __real_00000068;
  auVar38._0_4_ = __real_00000068;
  auVar38._8_4_ = __real_00000068;
  auVar38._12_4_ = __real_00000068;
  auVar38._16_4_ = __real_00000068;
  auVar38._20_4_ = __real_00000068;
  auVar38._24_4_ = __real_00000068;
  auVar38._28_4_ = __real_00000068;
  vpor_avx2(auVar129,auVar38);
  _local_5c0 = vgatherdpd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
  _local_5a0 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  auVar39._4_4_ = __real_00000070;
  auVar39._0_4_ = __real_00000070;
  auVar39._8_4_ = __real_00000070;
  auVar39._12_4_ = __real_00000070;
  auVar39._16_4_ = __real_00000070;
  auVar39._20_4_ = __real_00000070;
  auVar39._24_4_ = __real_00000070;
  auVar39._28_4_ = __real_00000070;
  vpor_avx2(auVar129,auVar39);
  _local_580 = vgatherdpd(ZEXT832(0),auVar11);
  _local_560 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  _local_900 = vgatherdpd(ZEXT832(0),auVar11);
  _local_540 = vgatherdpd(ZEXT832(0) << 0x40,auVar11);
  _local_520 = vgatherdpd(ZEXT832(0) << 0x40,auVar88);
  local_15e0._0_8_ = auVar94._0_8_;
  local_15e0._8_8_ = auVar94._8_8_;
  dStack_15d0 = auVar94._16_8_;
  dStack_15c8 = auVar94._24_8_;
  adStack_8f0[2] = (double)local_15e0._0_8_;
  adStack_8f0[3] = (double)local_15e0._8_8_;
  adStack_8f0[4] = dStack_15d0;
  adStack_8f0[5] = dStack_15c8;
  local_1580._0_8_ = auVar96._0_8_;
  local_1580._8_8_ = auVar96._8_8_;
  dStack_1570 = auVar96._16_8_;
  dStack_1568 = auVar96._24_8_;
  local_8a0 = local_1580._0_8_;
  uStack_898 = local_1580._8_8_;
  uStack_890 = dStack_1570;
  uStack_888 = dStack_1568;
  local_1600._0_8_ = auVar95._0_8_;
  local_1600._8_8_ = auVar95._8_8_;
  dStack_15f0 = auVar95._16_8_;
  dStack_15e8 = auVar95._24_8_;
  adStack_8f0[6] = (double)local_1600._0_8_;
  adStack_8f0[7] = (double)local_1600._8_8_;
  adStack_8f0[8] = dStack_15f0;
  uStack_8a8 = dStack_15e8;
  local_1540 = auVar124._0_8_;
  uStack_1538 = auVar124._8_8_;
  uStack_1530 = auVar124._16_8_;
  uStack_1528 = auVar124._24_8_;
  local_860 = local_1540;
  uStack_858 = uStack_1538;
  uStack_850 = uStack_1530;
  uStack_848 = uStack_1528;
  local_1520 = auVar97._0_8_;
  uStack_1518 = auVar97._8_8_;
  uStack_1510 = auVar97._16_8_;
  uStack_1508 = auVar97._24_8_;
  local_880 = local_1520;
  uStack_878 = uStack_1518;
  uStack_870 = uStack_1510;
  uStack_868 = uStack_1508;
  local_1480 = auVar105._0_8_;
  uStack_1478 = auVar105._8_8_;
  uStack_1470 = auVar105._16_8_;
  uStack_1468 = auVar105._24_8_;
  local_820 = local_1480;
  uStack_818 = uStack_1478;
  uStack_810 = uStack_1470;
  uStack_808 = uStack_1468;
  local_1560 = auVar125._0_8_;
  uStack_1558 = auVar125._8_8_;
  uStack_1550 = auVar125._16_8_;
  uStack_1548 = auVar125._24_8_;
  local_840 = local_1560;
  uStack_838 = uStack_1558;
  uStack_830 = uStack_1550;
  uStack_828 = uStack_1548;
  local_14c0 = auVar107._0_8_;
  uStack_14b8 = auVar107._8_8_;
  uStack_14b0 = auVar107._16_8_;
  uStack_14a8 = auVar107._24_8_;
  local_7e0 = local_14c0;
  uStack_7d8 = uStack_14b8;
  uStack_7d0 = uStack_14b0;
  uStack_7c8 = uStack_14a8;
  local_14a0 = auVar106._0_8_;
  uStack_1498 = auVar106._8_8_;
  uStack_1490 = auVar106._16_8_;
  uStack_1488 = auVar106._24_8_;
  local_800 = local_14a0;
  uStack_7f8 = uStack_1498;
  uStack_7f0 = uStack_1490;
  uStack_7e8 = uStack_1488;
  local_1500 = auVar109._0_8_;
  uStack_14f8 = auVar109._8_8_;
  uStack_14f0 = auVar109._16_8_;
  uStack_14e8 = auVar109._24_8_;
  local_7a0 = local_1500;
  uStack_798 = uStack_14f8;
  uStack_790 = uStack_14f0;
  uStack_788 = uStack_14e8;
  local_14e0 = auVar108._0_8_;
  uStack_14d8 = auVar108._8_8_;
  uStack_14d0 = auVar108._16_8_;
  uStack_14c8 = auVar108._24_8_;
  local_7c0 = local_14e0;
  uStack_7b8 = uStack_14d8;
  uStack_7b0 = uStack_14d0;
  uStack_7a8 = uStack_14c8;
  local_1340 = auVar80._0_8_;
  uStack_1338 = auVar80._8_8_;
  uStack_1330 = auVar80._16_8_;
  uStack_1328 = auVar80._24_8_;
  local_760 = local_1340;
  uStack_758 = uStack_1338;
  uStack_750 = uStack_1330;
  uStack_748 = uStack_1328;
  local_1400 = auVar81._0_8_;
  dStack_13f8 = auVar81._8_8_;
  dStack_13f0 = auVar81._16_8_;
  dStack_13e8 = auVar81._24_8_;
  local_780 = local_1400;
  uStack_778 = dStack_13f8;
  uStack_770 = dStack_13f0;
  uStack_768 = dStack_13e8;
  local_1360 = auVar90._0_8_;
  uStack_1358 = auVar90._8_8_;
  uStack_1350 = auVar90._16_8_;
  uStack_1348 = auVar90._24_8_;
  local_720 = local_1360;
  uStack_718 = uStack_1358;
  uStack_710 = uStack_1350;
  uStack_708 = uStack_1348;
  local_15a0 = auVar89._0_8_;
  uStack_1598 = auVar89._8_8_;
  uStack_1590 = auVar89._16_8_;
  uStack_1588 = auVar89._24_8_;
  local_740 = local_15a0;
  uStack_738 = uStack_1598;
  uStack_730 = uStack_1590;
  uStack_728 = uStack_1588;
  local_13a0 = auVar92._0_8_;
  uStack_1398 = auVar92._8_8_;
  uStack_1390 = auVar92._16_8_;
  uStack_1388 = auVar92._24_8_;
  local_6e0 = local_13a0;
  uStack_6d8 = uStack_1398;
  uStack_6d0 = uStack_1390;
  uStack_6c8 = uStack_1388;
  local_1380 = auVar91._0_8_;
  uStack_1378 = auVar91._8_8_;
  uStack_1370 = auVar91._16_8_;
  uStack_1368 = auVar91._24_8_;
  local_700 = local_1380;
  uStack_6f8 = uStack_1378;
  uStack_6f0 = uStack_1370;
  uStack_6e8 = uStack_1368;
  local_13c0 = auVar93._0_8_;
  uStack_13b8 = auVar93._8_8_;
  uStack_13b0 = auVar93._16_8_;
  uStack_13a8 = auVar93._24_8_;
  local_6c0 = local_13c0;
  uStack_6b8 = uStack_13b8;
  uStack_6b0 = uStack_13b0;
  uStack_6a8 = uStack_13a8;
  auVar88 = vpmovsxwd_avx2(auVar30);
  dVar1 = param_4[8];
  dVar22 = *param_4;
  lVar21 = 0xc0;
  dVar23 = param_4[0xc];
  dVar24 = param_4[1];
  dVar25 = param_4[5];
  dVar26 = param_4[9];
  dVar44 = param_4[0xd];
  dVar45 = param_4[2];
  dVar46 = param_4[6];
  dVar47 = param_4[10];
  dVar48 = param_4[0xe];
  dVar50 = param_4[3];
  dVar51 = param_4[7];
  dVar52 = param_4[0xb];
  dVar53 = param_4[0xf];
  do {
    dVar56 = *(double *)((longlong)local_9c0 + lVar21);
    dVar57 = *(double *)((longlong)local_9c0 + lVar21 + 8);
    dVar58 = *(double *)((longlong)local_9c0 + lVar21 + 0x10);
    dVar59 = *(double *)((longlong)local_9c0 + lVar21 + 0x18);
    dVar60 = *(double *)((longlong)local_9c0 + lVar21 + 0x20);
    dVar61 = *(double *)((longlong)local_9c0 + lVar21 + 0x28);
    dVar62 = *(double *)((longlong)local_9c0 + lVar21 + 0x30);
    dVar63 = *(double *)((longlong)local_9c0 + lVar21 + 0x38);
    dVar69 = *(double *)((longlong)local_9c0 + lVar21 + 0x40);
    dVar70 = *(double *)((longlong)local_9c0 + lVar21 + 0x48);
    dVar71 = *(double *)((longlong)local_9c0 + lVar21 + 0x50);
    dVar72 = *(double *)((longlong)local_9c0 + lVar21 + 0x58);
    dVar73 = *(double *)((longlong)local_9c0 + lVar21 + 0x60);
    dVar74 = *(double *)((longlong)local_9c0 + lVar21 + 0x68);
    dVar75 = *(double *)((longlong)local_9c0 + lVar21 + 0x70);
    dVar76 = *(double *)(local_940 + lVar21 + -8);
    dVar77 = *(double *)(local_940 + lVar21);
    dVar78 = *(double *)(local_940 + lVar21 + 8);
    dVar83 = *(double *)(local_940 + lVar21 + 0x10);
    dVar84 = *(double *)(local_940 + lVar21 + 0x18);
    dVar85 = *(double *)((longlong)adStack_930 + lVar21 + 0x10);
    dVar86 = *(double *)((longlong)adStack_930 + lVar21 + 0x18);
    dVar101 = *(double *)((longlong)adStack_930 + lVar21 + 0x20);
    dVar102 = *(double *)(local_900 + lVar21 + -8);
    dVar103 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x10);
    dVar112 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x18);
    dVar126 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x20);
    dVar127 = *(double *)((longlong)adStack_8f0 + lVar21 + 0x28);
    dVar54 = param_4[4];
    *(double *)(local_11e0 + lVar21) =
         dVar103 * dVar23 + dVar85 * dVar1 + dVar73 * dVar54 + dVar60 * dVar22 + 0.0;
    *(double *)(local_11e0 + lVar21 + 8) =
         dVar112 * dVar23 + dVar86 * dVar1 + dVar74 * dVar54 + dVar61 * dVar22 + 0.0;
    *(double *)(local_11e0 + lVar21 + 0x10) =
         dVar126 * dVar23 + dVar101 * dVar1 + dVar75 * dVar54 + dVar62 * dVar22 + 0.0;
    *(double *)(auStack_11d0 + lVar21 + 8) =
         dVar127 * dVar23 + dVar102 * dVar1 + dVar76 * dVar54 + dVar63 * dVar22 + 0.0;
    dVar128 = *(double *)(local_900 + lVar21);
    dVar146 = *(double *)(local_900 + lVar21 + 8);
    dVar148 = *(double *)(local_900 + lVar21 + 0x10);
    dVar149 = *(double *)(local_900 + lVar21 + 0x18);
    *(double *)(local_1200 + lVar21) =
         dVar128 * dVar23 + dVar77 * dVar1 + dVar69 * dVar54 + dVar56 * dVar22 + 0.0;
    *(double *)(local_1200 + lVar21 + 8) =
         dVar146 * dVar23 + dVar78 * dVar1 + dVar70 * dVar54 + dVar57 * dVar22 + 0.0;
    *(double *)(local_1200 + lVar21 + 0x10) =
         dVar148 * dVar23 + dVar83 * dVar1 + dVar71 * dVar54 + dVar58 * dVar22 + 0.0;
    *(double *)(auStack_11f0 + lVar21 + 8) =
         dVar149 * dVar23 + dVar84 * dVar1 + dVar72 * dVar54 + dVar59 * dVar22 + 0.0;
    *(double *)(local_11a0 + lVar21) =
         dVar103 * dVar44 + dVar85 * dVar26 + dVar73 * dVar25 + dVar60 * dVar24 + 0.0;
    *(double *)(local_11a0 + lVar21 + 8) =
         dVar112 * dVar44 + dVar86 * dVar26 + dVar74 * dVar25 + dVar61 * dVar24 + 0.0;
    *(double *)(local_11a0 + lVar21 + 0x10) =
         dVar126 * dVar44 + dVar101 * dVar26 + dVar75 * dVar25 + dVar62 * dVar24 + 0.0;
    *(double *)(local_11a0 + lVar21 + 0x18) =
         dVar127 * dVar44 + dVar102 * dVar26 + dVar76 * dVar25 + dVar63 * dVar24 + 0.0;
    *(double *)(local_11c0 + lVar21) =
         dVar128 * dVar44 + dVar77 * dVar26 + dVar69 * dVar25 + dVar56 * dVar24 + 0.0;
    *(double *)(local_11c0 + lVar21 + 8) =
         dVar146 * dVar44 + dVar78 * dVar26 + dVar70 * dVar25 + dVar57 * dVar24 + 0.0;
    *(double *)(local_11c0 + lVar21 + 0x10) =
         dVar148 * dVar44 + dVar83 * dVar26 + dVar71 * dVar25 + dVar58 * dVar24 + 0.0;
    *(double *)(local_11c0 + lVar21 + 0x18) =
         dVar149 * dVar44 + dVar84 * dVar26 + dVar72 * dVar25 + dVar59 * dVar24 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 0x18) =
         dVar103 * dVar48 + dVar85 * dVar47 + dVar73 * dVar46 + dVar60 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 0x20) =
         dVar112 * dVar48 + dVar86 * dVar47 + dVar74 * dVar46 + dVar61 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 0x28) =
         dVar126 * dVar48 + dVar101 * dVar47 + dVar75 * dVar46 + dVar62 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 0x30) =
         dVar127 * dVar48 + dVar102 * dVar47 + dVar76 * dVar46 + dVar63 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + -8) =
         dVar128 * dVar48 + dVar77 * dVar47 + dVar69 * dVar46 + dVar56 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21) =
         dVar146 * dVar48 + dVar78 * dVar47 + dVar70 * dVar46 + dVar57 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 8) =
         dVar148 * dVar48 + dVar83 * dVar47 + dVar71 * dVar46 + dVar58 * dVar45 + 0.0;
    *(double *)((longlong)adStack_1178 + lVar21 + 0x10) =
         dVar149 * dVar48 + dVar84 * dVar47 + dVar72 * dVar46 + dVar59 * dVar45 + 0.0;
    *(double *)(local_1120 + lVar21) =
         dVar53 * dVar103 + dVar52 * dVar85 + dVar51 * dVar73 + dVar50 * dVar60 + 0.0;
    *(double *)(local_1120 + lVar21 + 8) =
         dVar53 * dVar112 + dVar52 * dVar86 + dVar51 * dVar74 + dVar50 * dVar61 + 0.0;
    *(double *)(local_1120 + lVar21 + 0x10) =
         dVar53 * dVar126 + dVar52 * dVar101 + dVar51 * dVar75 + dVar50 * dVar62 + 0.0;
    *(double *)(local_1120 + lVar21 + 0x18) =
         dVar53 * dVar127 + dVar52 * dVar102 + dVar51 * dVar76 + dVar50 * dVar63 + 0.0;
    *(double *)(local_1140 + lVar21) =
         dVar53 * dVar128 + dVar52 * dVar77 + dVar51 * dVar69 + dVar50 * dVar56 + 0.0;
    *(double *)(local_1140 + lVar21 + 8) =
         dVar53 * dVar146 + dVar52 * dVar78 + dVar51 * dVar70 + dVar50 * dVar57 + 0.0;
    *(double *)(local_1140 + lVar21 + 0x10) =
         dVar53 * dVar148 + dVar52 * dVar83 + dVar51 * dVar71 + dVar50 * dVar58 + 0.0;
    *(double *)(local_1140 + lVar21 + 0x18) =
         dVar53 * dVar149 + dVar52 * dVar84 + dVar51 * dVar72 + dVar50 * dVar59 + 0.0;
    lVar21 = lVar21 + 0x100;
  } while (lVar21 != 0x4c0);
  local_1420 = auVar114._0_8_;
  uStack_1418 = auVar114._8_8_;
  uStack_1410 = auVar114._16_8_;
  uStack_1408 = auVar114._24_8_;
  local_1320 = auVar116._0_8_;
  dStack_1318 = auVar116._8_8_;
  dStack_1310 = auVar116._16_8_;
  dStack_1308 = auVar116._24_8_;
  local_1440 = auVar115._0_8_;
  dStack_1438 = auVar115._8_8_;
  dStack_1430 = auVar115._16_8_;
  dStack_1428 = auVar115._24_8_;
  dVar22 = __real_3fe0000000000000 * (local_1420 + local_1320);
  dVar44 = __real_3fe0000000000000 * (uStack_1418 + dStack_1318);
  dVar50 = __real_3fe0000000000000 * (uStack_1410 + dStack_1310);
  dVar56 = __real_3fe0000000000000 * (uStack_1408 + dStack_1308);
  dVar70 = __real_3fe0000000000000 * (local_1440 + (double)local_d40._0_8_);
  dVar71 = __real_3fe0000000000000 * (dStack_1438 + (double)local_d40._8_8_);
  dVar72 = __real_3fe0000000000000 * (dStack_1430 + dStack_d30);
  dVar73 = __real_3fe0000000000000 * (dStack_1428 + dStack_d28);
  dVar23 = __real_3fe0000000000000 * (local_bc0._0_8_ + local_c40._0_8_);
  dVar45 = __real_3fe0000000000000 * (local_bc0._8_8_ + local_c40._8_8_);
  dVar51 = __real_3fe0000000000000 * (local_bc0._16_8_ + local_c40._16_8_);
  dVar57 = __real_3fe0000000000000 * (local_bc0._24_8_ + local_c40._24_8_);
  dVar74 = __real_3fe0000000000000 * (local_be0._0_8_ + local_c60._0_8_);
  dVar76 = __real_3fe0000000000000 * (local_be0._8_8_ + local_c60._8_8_);
  dVar78 = __real_3fe0000000000000 * (local_be0._16_8_ + local_c60._16_8_);
  dVar84 = __real_3fe0000000000000 * (local_be0._24_8_ + local_c60._24_8_);
  dVar1 = (double)CONCAT17(uStack_fb9,
                           CONCAT16(uStack_fba,
                                    CONCAT15(uStack_fbb,
                                             CONCAT14(uStack_fbc,
                                                      CONCAT13(uStack_fbd,
                                                               CONCAT12(uStack_fbe,
                                                                        CONCAT11(uStack_fbf,
                                                                                 local_fc0)))))));
  dVar24 = __real_3fe0000000000000 * (local_c00._0_8_ + local_c80._0_8_);
  dVar46 = __real_3fe0000000000000 * (local_c00._8_8_ + local_c80._8_8_);
  dVar52 = __real_3fe0000000000000 * (local_c00._16_8_ + local_c80._16_8_);
  dVar58 = __real_3fe0000000000000 * (local_c00._24_8_ + local_c80._24_8_);
  dVar25 = __real_3fe0000000000000 * (local_c20._0_8_ + local_ca0._0_8_);
  dVar47 = __real_3fe0000000000000 * (local_c20._8_8_ + local_ca0._8_8_);
  dVar53 = __real_3fe0000000000000 * (local_c20._16_8_ + local_ca0._16_8_);
  dVar59 = __real_3fe0000000000000 * (local_c20._24_8_ + local_ca0._24_8_);
  auVar11 = vsubpd_avx(local_c40,local_bc0);
  auVar81 = vsubpd_avx(auVar116,auVar114);
  auVar80 = vsubpd_avx(local_c60,local_be0);
  auVar89 = vsubpd_avx(_local_d40,auVar115);
  auVar90 = vsubpd_avx(local_ca0,local_c20);
  auVar91 = vsubpd_avx(local_c80,local_c00);
  dVar26 = __real_3fe0000000000000 * auVar81._0_8_;
  dVar48 = __real_3fe0000000000000 * auVar81._8_8_;
  dVar54 = __real_3fe0000000000000 * auVar81._16_8_;
  dVar60 = __real_3fe0000000000000 * auVar81._24_8_;
  dVar75 = auVar11._0_8_ * __real_3fe0000000000000;
  dVar77 = auVar11._8_8_ * __real_3fe0000000000000;
  dVar83 = auVar11._16_8_ * __real_3fe0000000000000;
  dVar85 = auVar11._24_8_ * __real_3fe0000000000000;
  dVar61 = __real_3fe0000000000000 * auVar89._0_8_;
  dVar62 = __real_3fe0000000000000 * auVar89._8_8_;
  dVar63 = __real_3fe0000000000000 * auVar89._16_8_;
  dVar69 = __real_3fe0000000000000 * auVar89._24_8_;
  dVar86 = __real_3fe0000000000000 * auVar80._0_8_;
  dVar101 = __real_3fe0000000000000 * auVar80._8_8_;
  dVar102 = __real_3fe0000000000000 * auVar80._16_8_;
  dVar103 = __real_3fe0000000000000 * auVar80._24_8_;
  dVar112 = __real_3fe0000000000000 * auVar91._0_8_;
  dVar126 = __real_3fe0000000000000 * auVar91._8_8_;
  dVar127 = __real_3fe0000000000000 * auVar91._16_8_;
  dVar128 = __real_3fe0000000000000 * auVar91._24_8_;
  dVar146 = __real_3fe0000000000000 * auVar90._0_8_;
  dVar148 = __real_3fe0000000000000 * auVar90._8_8_;
  dVar149 = __real_3fe0000000000000 * auVar90._16_8_;
  dVar150 = __real_3fe0000000000000 * auVar90._24_8_;
  auVar82._0_8_ =
       dVar25 * local_f20 + dVar22 * (double)local_1120 + dVar70 * (double)local_1020._0_8_ +
       local_e20;
  auVar82._8_8_ =
       dVar47 * dStack_f18 + dVar44 * adStack_1118[0] + dVar71 * (double)local_1020._8_8_ +
       dStack_e18;
  auVar82._16_8_ =
       dVar53 * dStack_f10 + dVar50 * adStack_1118[1] + dVar72 * dStack_1010 + dStack_e10;
  auVar82._24_8_ =
       dVar59 * dStack_f08 + dVar56 * adStack_1118[2] + dVar73 * dStack_1008 + dStack_e08;
  auVar133._0_8_ =
       dVar24 * local_f40 + dVar23 * (double)local_1140 + dVar74 * (double)local_1040._0_8_ +
       local_e40;
  auVar133._8_8_ =
       dVar46 * dStack_f38 + dVar45 * adStack_1138[0] + dVar76 * (double)local_1040._8_8_ +
       dStack_e38;
  auVar133._16_8_ =
       dVar52 * dStack_f30 + dVar51 * adStack_1138[1] + dVar78 * dStack_1030 + dStack_e30;
  auVar133._24_8_ =
       dVar58 * dStack_f28 + dVar57 * adStack_1138[2] + dVar84 * dStack_1028 + dStack_e28;
  auVar152._0_8_ =
       dVar25 * local_ee0 + dVar22 * (double)local_10e0._0_8_ + dVar70 * (double)local_fe0._0_8_ +
       local_de0;
  auVar152._8_8_ =
       dVar47 * dStack_ed8 + dVar44 * (double)local_10e0._8_8_ + dVar71 * (double)local_fe0._8_8_ +
       dStack_dd8;
  auVar152._16_8_ = dVar53 * dStack_ed0 + dVar50 * dStack_10d0 + dVar72 * dStack_fd0 + dStack_dd0;
  auVar152._24_8_ = dVar59 * dStack_ec8 + dVar56 * dStack_10c8 + dVar73 * dStack_fc8 + dStack_dc8;
  auVar137._0_8_ =
       dVar24 * local_f00 + dVar23 * (double)local_1100._0_8_ + dVar74 * (double)local_1000._0_8_ +
       local_e00;
  auVar137._8_8_ =
       dVar46 * dStack_ef8 + dVar45 * (double)local_1100._8_8_ + dVar76 * (double)local_1000._8_8_ +
       dStack_df8;
  auVar137._16_8_ = dVar52 * dStack_ef0 + dVar51 * dStack_10f0 + dVar78 * dStack_ff0 + dStack_df0;
  auVar137._24_8_ = dVar58 * dStack_ee8 + dVar57 * dStack_10e8 + dVar84 * dStack_fe8 + dStack_de8;
  auVar40._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1140)) +
       (double)((ulonglong)(dVar86 * (double)local_1040._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar112 * local_f40) & __real_7fffffffffffffff);
  auVar40._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * adStack_1138[0])) +
       (double)((ulonglong)(dVar101 * (double)local_1040._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar126 * dStack_f38) & __real_7fffffffffffffff);
  auVar40._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar83 * adStack_1138[1])) +
       (double)((ulonglong)(dVar102 * dStack_1030) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar127 * dStack_f30) & __real_7fffffffffffffff);
  auVar40._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar85 * adStack_1138[2])) +
       (double)((ulonglong)(dVar103 * dStack_1028) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar128 * dStack_f28) & __real_7fffffffffffffff);
  auVar98._0_8_ =
       local_ea0 * dVar25 + (double)local_10a0._0_8_ * dVar22 + dVar70 * local_fa0 + local_da0;
  auVar98._8_8_ =
       dStack_e98 * dVar47 + (double)local_10a0._8_8_ * dVar44 + dVar71 * dStack_f98 + dStack_d98;
  auVar98._16_8_ = dStack_e90 * dVar53 + dStack_1090 * dVar50 + dVar72 * dStack_f90 + dStack_d90;
  auVar98._24_8_ = dStack_e88 * dVar59 + dStack_1088 * dVar56 + dVar73 * dStack_f88 + dStack_d88;
  auVar144._0_8_ =
       (double)((ulonglong)(dVar146 * local_f20) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar26 * (double)local_1120) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar61 * (double)local_1020._0_8_) & __real_7fffffffffffffff);
  auVar144._8_8_ =
       (double)((ulonglong)(dVar148 * dStack_f18) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar48 * adStack_1118[0]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar62 * (double)local_1020._8_8_) & __real_7fffffffffffffff);
  auVar144._16_8_ =
       (double)((ulonglong)(dVar149 * dStack_f10) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar54 * adStack_1118[1]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar63 * dStack_1010) & __real_7fffffffffffffff);
  auVar144._24_8_ =
       (double)((ulonglong)(dVar150 * dStack_f08) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar60 * adStack_1118[2]) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * dStack_1008) & __real_7fffffffffffffff);
  auVar140._0_8_ =
       local_ec0 * dVar24 + (double)local_10c0._0_8_ * dVar23 + dVar74 * dVar1 + local_dc0;
  auVar140._8_8_ =
       dStack_eb8 * dVar46 + (double)local_10c0._8_8_ * dVar45 + dVar76 * dStack_fb8 + dStack_db8;
  auVar140._16_8_ = dStack_eb0 * dVar52 + dStack_10b0 * dVar51 + dVar78 * dStack_fb0 + dStack_db0;
  auVar140._24_8_ = dStack_ea8 * dVar58 + dStack_10a8 * dVar57 + dVar84 * dStack_fa8 + dStack_da8;
  auVar67._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar75 * (double)local_1100._0_8_)) +
       (double)((ulonglong)(dVar86 * (double)local_1000._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar112 * local_f00) & __real_7fffffffffffffff);
  auVar67._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar77 * (double)local_1100._8_8_)) +
       (double)((ulonglong)(dVar101 * (double)local_1000._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar126 * dStack_ef8) & __real_7fffffffffffffff);
  auVar67._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar83 * dStack_10f0)) +
       (double)((ulonglong)(dVar102 * dStack_ff0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar127 * dStack_ef0) & __real_7fffffffffffffff);
  auVar67._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar85 * dStack_10e8)) +
       (double)((ulonglong)(dVar103 * dStack_fe8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar128 * dStack_ee8) & __real_7fffffffffffffff);
  auVar156._0_8_ =
       (double)((ulonglong)(dVar146 * local_ee0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar26 * (double)local_10e0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar61 * (double)local_fe0._0_8_) & __real_7fffffffffffffff);
  auVar156._8_8_ =
       (double)((ulonglong)(dVar148 * dStack_ed8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar48 * (double)local_10e0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar62 * (double)local_fe0._8_8_) & __real_7fffffffffffffff);
  auVar156._16_8_ =
       (double)((ulonglong)(dVar149 * dStack_ed0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar54 * dStack_10d0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar63 * dStack_fd0) & __real_7fffffffffffffff);
  auVar156._24_8_ =
       (double)((ulonglong)(dVar150 * dStack_ec8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar60 * dStack_10c8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar69 * dStack_fc8) & __real_7fffffffffffffff);
  auVar130._0_8_ =
       (double)((ulonglong)(dVar75 * (double)local_10c0._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar86 * dVar1) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar112 * local_ec0) & __real_7fffffffffffffff);
  auVar130._8_8_ =
       (double)((ulonglong)(dVar77 * (double)local_10c0._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar101 * dStack_fb8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar126 * dStack_eb8) & __real_7fffffffffffffff);
  auVar130._16_8_ =
       (double)((ulonglong)(dVar83 * dStack_10b0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar102 * dStack_fb0) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar127 * dStack_eb0) & __real_7fffffffffffffff);
  auVar130._24_8_ =
       (double)((ulonglong)(dVar85 * dStack_10a8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar103 * dStack_fa8) & __real_7fffffffffffffff) +
       (double)((ulonglong)(dVar128 * dStack_ea8) & __real_7fffffffffffffff);
  auVar110._0_8_ =
       (double)((ulonglong)(dVar146 * local_ea0) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar26 * (double)local_10a0._0_8_)) +
       (double)((ulonglong)(dVar61 * local_fa0) & __real_7fffffffffffffff);
  auVar110._8_8_ =
       (double)((ulonglong)(dVar148 * dStack_e98) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar48 * (double)local_10a0._8_8_)) +
       (double)((ulonglong)(dVar62 * dStack_f98) & __real_7fffffffffffffff);
  auVar110._16_8_ =
       (double)((ulonglong)(dVar149 * dStack_e90) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar54 * dStack_1090)) +
       (double)((ulonglong)(dVar63 * dStack_f90) & __real_7fffffffffffffff);
  auVar110._24_8_ =
       (double)((ulonglong)(dVar150 * dStack_e88) & __real_7fffffffffffffff) +
       (double)(__real_7fffffffffffffff & (ulonglong)(dVar60 * dStack_1088)) +
       (double)((ulonglong)(dVar69 * dStack_f88) & __real_7fffffffffffffff);
  auVar11 = vsubpd_avx(auVar133,auVar40);
  auVar81 = vsubpd_avx(auVar82,auVar144);
  auVar80 = vsubpd_avx(auVar137,auVar67);
  auVar89 = vsubpd_avx(auVar152,auVar156);
  local_1600._8_8_ = auVar40._8_8_ + auVar133._8_8_;
  local_1600._0_8_ = auVar40._0_8_ + auVar133._0_8_;
  dStack_15f0 = auVar40._16_8_ + auVar133._16_8_;
  dStack_15e8 = auVar40._24_8_ + auVar133._24_8_;
  auVar90 = vsubpd_avx(auVar140,auVar130);
  auVar145._0_8_ = auVar144._0_8_ + auVar82._0_8_;
  auVar145._8_8_ = auVar144._8_8_ + auVar82._8_8_;
  auVar145._16_8_ = auVar144._16_8_ + auVar82._16_8_;
  auVar145._24_8_ = auVar144._24_8_ + auVar82._24_8_;
  auVar91 = vsubpd_avx(auVar98,auVar110);
  local_1580._8_8_ = auVar137._8_8_ + auVar67._8_8_;
  local_1580._0_8_ = auVar137._0_8_ + auVar67._0_8_;
  dStack_1570 = auVar137._16_8_ + auVar67._16_8_;
  dStack_1568 = auVar137._24_8_ + auVar67._24_8_;
  auVar157._0_8_ = auVar156._0_8_ + auVar152._0_8_;
  auVar157._8_8_ = auVar156._8_8_ + auVar152._8_8_;
  auVar157._16_8_ = auVar156._16_8_ + auVar152._16_8_;
  auVar157._24_8_ = auVar156._24_8_ + auVar152._24_8_;
  auVar154._0_8_ = auVar140._0_8_ + auVar130._0_8_;
  auVar154._8_8_ = auVar140._8_8_ + auVar130._8_8_;
  auVar154._16_8_ = auVar140._16_8_ + auVar130._16_8_;
  auVar154._24_8_ = auVar140._24_8_ + auVar130._24_8_;
  auVar99._0_8_ = auVar110._0_8_ + auVar98._0_8_;
  auVar99._8_8_ = auVar110._8_8_ + auVar98._8_8_;
  auVar99._16_8_ = auVar110._16_8_ + auVar98._16_8_;
  auVar99._24_8_ = auVar110._24_8_ + auVar98._24_8_;
  auVar29 = ZEXT816(0) << 0x40;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = local_1180;
  auVar30 = vpcmpeqb_avx(auVar65,auVar29);
  auVar29 = vpcmpeqd_avx(auVar29,auVar29);
  auVar93 = vpmovsxbd_avx2(auVar30 ^ auVar29);
  auVar92 = vpand_avx2(auVar88,auVar93);
  iVar18 = vmovmskps_avx(auVar92);
  if (iVar18 == 0) {
    auVar92 = ZEXT832(0) << 0x40;
LAB_140a5a6c9:
    auVar29 = vpmovsxbw_avx(auVar30);
    auVar28 = vpand_avx(auVar29,auVar28);
    auVar93 = vpmovsxwd_avx2(auVar28);
    local_d00 = local_d00 & auVar93;
    if ((((((((SUB321(local_d00 >> 0x1f,0) & 1) != 0 || (SUB321(local_d00 >> 0x3f,0) & 1) != 0) ||
            (SUB321(local_d00 >> 0x5f,0) & 1) != 0) || SUB321(local_d00 >> 0x7f,0) != '\0') ||
          (SUB321(local_d00 >> 0x9f,0) & 1) != 0) || SUB321(local_d00 >> 0xbf,0) != '\0') ||
        (SUB321(local_d00 >> 0xdf,0) & 1) != 0) || local_d00[0x1f] < '\0') {
      auVar30 = vpmovzxbw_avx(auVar30);
      auVar93 = vpmovzxwd_avx2(auVar30);
      auVar93 = vpslld_avx2(auVar93,0x1f);
      auVar94 = vpsrad_avx2(auVar93,0x1f);
      auVar93 = auVar88 & auVar94;
      if ((((((((SUB321(auVar93 >> 0x1f,0) & 1) != 0 || (SUB321(auVar93 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar93 >> 0x5f,0) & 1) != 0) || SUB321(auVar93 >> 0x7f,0) != '\0') ||
            (SUB321(auVar93 >> 0x9f,0) & 1) != 0) || SUB321(auVar93 >> 0xbf,0) != '\0') ||
          (SUB321(auVar93 >> 0xdf,0) & 1) != 0) || auVar93[0x1f] < '\0') {
        auVar95 = vpermpd_avx2(auVar94,0xd8);
        auVar93 = vshufps_avx(auVar95,auVar95,0x50);
        auVar95 = vshufps_avx(auVar95,auVar95,0xfa);
        _local_1140 = vmaskmovpd_avx(auVar93,auVar11);
        _local_1120 = vmaskmovpd_avx(auVar95,auVar81);
        _local_1100 = vmaskmovpd_avx(auVar93,auVar80);
        _local_10e0 = vmaskmovpd_avx(auVar95,auVar89);
        _local_10c0 = vmaskmovpd_avx(auVar93,auVar90);
        _local_10a0 = vmaskmovpd_avx(auVar95,auVar91);
        local_1080 = vmaskmovpd_avx(auVar93,_local_1600);
        local_1060 = vmaskmovpd_avx(auVar95,auVar145);
        _local_1040 = vmaskmovpd_avx(auVar93,_local_1580);
        _local_1020 = vmaskmovpd_avx(auVar95,auVar157);
        _local_1000 = vmaskmovpd_avx(auVar93,auVar154);
        _local_fe0 = vmaskmovpd_avx(auVar95,auVar99);
        auVar30 = vpsllw_avx(auVar30,0xf);
        auVar30 = vpacksswb_avx(auVar30,auVar30);
        bVar15 = SUB161(auVar30 >> 0xf,0) & 1;
        bVar3 = SUB161(auVar30 >> 0x17,0) & 1;
        bVar4 = SUB161(auVar30 >> 0x1f,0) & 1;
        bVar5 = SUB161(auVar30 >> 0x27,0) & 1;
        bVar6 = SUB161(auVar30 >> 0x2f,0) & 1;
        bVar7 = SUB161(auVar30 >> 0x37,0) & 1;
        if ((SUB161(auVar30 >> 7,0) & 1) == 0) {
          if (bVar15 == 0) goto LAB_140a5a7da;
LAB_140a5aeb9:
          uStack_fbf = 1;
          if (bVar3 != 0) goto LAB_140a5aeca;
LAB_140a5a7e3:
          if (bVar4 == 0) goto LAB_140a5a7ec;
LAB_140a5aedb:
          uStack_fbd = 1;
          if (bVar5 != 0) goto LAB_140a5aeec;
LAB_140a5a7f5:
          if (bVar6 == 0) goto LAB_140a5a7fe;
LAB_140a5aefd:
          uStack_fbb = 1;
          if (bVar7 != 0) goto LAB_140a5af0e;
LAB_140a5a807:
          auVar41._0_4_ = auVar88._0_4_ & auVar94._0_4_;
          auVar41._4_4_ = auVar88._4_4_ & auVar94._4_4_;
          auVar41._8_4_ = auVar88._8_4_ & auVar94._8_4_;
          auVar41._12_4_ = auVar88._12_4_ & auVar94._12_4_;
          auVar41._16_4_ = auVar88._16_4_ & auVar94._16_4_;
          auVar41._20_4_ = auVar88._20_4_ & auVar94._20_4_;
          auVar41._24_4_ = auVar88._24_4_ & auVar94._24_4_;
          auVar41._28_4_ = auVar88._28_4_ & auVar94._28_4_;
        }
        else {
          local_fc0 = 1;
          if (bVar15 != 0) goto LAB_140a5aeb9;
LAB_140a5a7da:
          if (bVar3 == 0) goto LAB_140a5a7e3;
LAB_140a5aeca:
          uStack_fbe = 1;
          if (bVar4 != 0) goto LAB_140a5aedb;
LAB_140a5a7ec:
          if (bVar5 == 0) goto LAB_140a5a7f5;
LAB_140a5aeec:
          uStack_fbc = 1;
          if (bVar6 != 0) goto LAB_140a5aefd;
LAB_140a5a7fe:
          if (bVar7 == 0) goto LAB_140a5a807;
LAB_140a5af0e:
          uStack_fba = 1;
          auVar41._0_4_ = auVar88._0_4_ & auVar94._0_4_;
          auVar41._4_4_ = auVar88._4_4_ & auVar94._4_4_;
          auVar41._8_4_ = auVar88._8_4_ & auVar94._8_4_;
          auVar41._12_4_ = auVar88._12_4_ & auVar94._12_4_;
          auVar41._16_4_ = auVar88._16_4_ & auVar94._16_4_;
          auVar41._20_4_ = auVar88._20_4_ & auVar94._20_4_;
          auVar41._24_4_ = auVar88._24_4_ & auVar94._24_4_;
          auVar41._28_4_ = auVar88._28_4_ & auVar94._28_4_;
        }
        if ((SUB161(auVar30 >> 0x3f,0) & 1) != 0) {
          uStack_fb9 = 1;
        }
        vmovmskps_avx(auVar92 | auVar41);
      }
    }
  }
  else {
    auVar94 = vminpd_avx(local_1300,auVar11);
    auVar96 = vpermq_avx2(auVar93,0xd8);
    auVar95 = vpshufd_avx2(auVar96,0x50);
    _local_1140 = vmaskmovpd_avx(auVar95,auVar94);
    auVar93 = vminpd_avx(local_12e0,auVar81);
    auVar94 = vpshufd_avx2(auVar96,0xfa);
    _local_1120 = vmaskmovpd_avx(auVar94,auVar93);
    auVar93 = vminpd_avx(local_12c0,auVar80);
    _local_1100 = vmaskmovpd_avx(auVar95,auVar93);
    auVar93 = vminpd_avx(local_12a0,auVar89);
    _local_10e0 = vmaskmovpd_avx(auVar94,auVar93);
    auVar93 = vminpd_avx(local_1280,auVar90);
    _local_10c0 = vmaskmovpd_avx(auVar95,auVar93);
    auVar93 = vminpd_avx(local_1260,auVar91);
    _local_10a0 = vmaskmovpd_avx(auVar94,auVar93);
    auVar93 = vmaxpd_avx(local_1240,_local_1600);
    local_1080 = vmaskmovpd_avx(auVar95,auVar93);
    auVar93 = vmaxpd_avx(local_1220,auVar145);
    local_1060 = vmaskmovpd_avx(auVar94,auVar93);
    auVar93 = vmaxpd_avx(_local_1200,_local_1580);
    _local_1040 = vmaskmovpd_avx(auVar95,auVar93);
    auVar93 = vmaxpd_avx(_local_11e0,auVar157);
    _local_1020 = vmaskmovpd_avx(auVar94,auVar93);
    auVar93 = vmaxpd_avx(_local_11c0,auVar154);
    _local_1000 = vmaskmovpd_avx(auVar95,auVar93);
    auVar93 = vmaxpd_avx(_local_11a0,auVar99);
    _local_fe0 = vmaskmovpd_avx(auVar94,auVar93);
    auVar29._8_8_ = local_1180;
    auVar29._0_8_ = local_1180;
    auVar29 = vpcmpeqb_avx(auVar29,___xmm_00000000000000000000000000000000);
    bVar15 = ~(SUB161(auVar29 >> 7,0) & 1 | (SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar29 >> 0x17,0) & 1) << 2 | (SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar29 >> 0x27,0) & 1) << 4 | (SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar29 >> 0x37,0) & 1) << 6);
    if ((bVar15 & 1) != 0) {
      local_fc0 = (undefined1)local_1180;
    }
    if ((bVar15 & 2) != 0) {
      uStack_fbf = (undefined1)(local_1180 >> 8);
    }
    if ((bVar15 & 4) != 0) {
      uStack_fbe = (undefined1)(local_1180 >> 0x10);
    }
    if ((bVar15 & 8) != 0) {
      uStack_fbd = (undefined1)(local_1180 >> 0x18);
    }
    if ((bVar15 & 0x10) != 0) {
      uStack_fbc = (undefined1)(local_1180 >> 0x20);
    }
    if ((bVar15 & 0x20) != 0) {
      uStack_fbb = (undefined1)(local_1180 >> 0x28);
    }
    if ((bVar15 & 0x40) != 0) {
      uStack_fba = (undefined1)(local_1180 >> 0x30);
    }
    if ((SUB161(auVar29 >> 0x3f,0) & 1) == 0) {
      uStack_fb9 = (undefined1)(local_1180 >> 0x38);
    }
    if ((char)uVar16 != (char)iVar18) goto LAB_140a5a6c9;
  }
  auVar11 = vpermpd_avx2(auVar88,0xd8);
  auVar88 = vshufps_avx(auVar11,auVar11,0x50);
  auVar11 = vshufps_avx(auVar11,auVar11,0xfa);
  local_1300 = vmaskmovpd_avx(auVar88,_local_1140);
  local_12e0 = vmaskmovpd_avx(auVar11,_local_1120);
  local_12c0 = vmaskmovpd_avx(auVar88,_local_1100);
  local_12a0 = vmaskmovpd_avx(auVar11,_local_10e0);
  local_1280 = vmaskmovpd_avx(auVar88,_local_10c0);
  local_1260 = vmaskmovpd_avx(auVar11,_local_10a0);
  local_1240 = vmaskmovpd_avx(auVar88,local_1080);
  local_1220 = vmaskmovpd_avx(auVar11,local_1060);
  _local_1200 = vmaskmovpd_avx(auVar88,_local_1040);
  _local_11e0 = vmaskmovpd_avx(auVar11,_local_1020);
  _local_11c0 = vmaskmovpd_avx(auVar88,_local_1000);
  _local_11a0 = vmaskmovpd_avx(auVar11,_local_fe0);
  uVar17 = local_1180;
  if ((uVar16 & 1) != 0) {
    local_1180 = CONCAT71(local_1180._1_7_,local_fc0);
    uVar17 = local_1180;
  }
  if ((uVar16 & 2) != 0) {
    local_1180._2_6_ = (undefined6)(uVar17 >> 0x10);
    local_1180._0_1_ = (undefined1)uVar17;
    local_1180._0_2_ = CONCAT11(uStack_fbf,(undefined1)local_1180);
    uVar17 = local_1180;
  }
  if ((uVar16 & 4) != 0) {
    local_1180._3_5_ = (undefined5)(uVar17 >> 0x18);
    local_1180._0_2_ = (undefined2)uVar17;
    local_1180._0_3_ = CONCAT12(uStack_fbe,(undefined2)local_1180);
    uVar17 = local_1180;
  }
  if ((uVar16 & 8) != 0) {
    local_1180._4_4_ = (undefined4)(uVar17 >> 0x20);
    local_1180._0_3_ = (undefined3)uVar17;
    local_1180._0_4_ = CONCAT13(uStack_fbd,(undefined3)local_1180);
    uVar17 = local_1180;
  }
  if ((uVar16 & 0x10) != 0) {
    local_1180._5_3_ = (undefined3)(uVar17 >> 0x28);
    local_1180._0_4_ = (undefined4)uVar17;
    local_1180._0_5_ = CONCAT14(uStack_fbc,(undefined4)local_1180);
    uVar17 = local_1180;
  }
  if ((uVar16 & 0x20) != 0) {
    local_1180._6_2_ = (undefined2)(uVar17 >> 0x30);
    local_1180._0_5_ = (undefined5)uVar17;
    local_1180._0_6_ = CONCAT15(uStack_fbb,(undefined5)local_1180);
    uVar17 = local_1180;
  }
  local_1180 = uVar17;
  if ((uVar16 & 0x40) != 0) {
    local_1180._7_1_ = (undefined1)(uVar17 >> 0x38);
    local_1180._0_6_ = (undefined6)uVar17;
    local_1180._0_7_ = CONCAT16(uStack_fba,(undefined6)local_1180);
  }
  if ((char)uVar16 < '\0') {
    local_1180 = CONCAT17(uStack_fb9,(undefined7)local_1180);
  }
LAB_140a5a964:
  local_ba0 = vmovlhps_avx(local_1300._0_16_,local_12c0._0_16_);
  local_b68 = vunpckhpd_avx(local_1300._0_16_,local_12c0._0_16_);
  local_b30 = vmovlhps_avx(local_1300._16_16_,local_12c0._16_16_);
  local_af8 = vunpckhpd_avx(local_1300._16_16_,local_12c0._16_16_);
  local_ac0 = vmovlhps_avx(local_12e0._0_16_,local_12a0._0_16_);
  local_a88 = vunpckhpd_avx(local_12e0._0_16_,local_12a0._0_16_);
  local_a50 = vmovlhps_avx(local_12e0._16_16_,local_12a0._16_16_);
  local_a18 = vunpckhpd_avx(local_12e0._16_16_,local_12a0._16_16_);
  local_b90 = local_1280._0_8_;
  local_b58 = local_1280._8_8_;
  local_b20 = local_1280._16_8_;
  local_ae8 = local_1280._24_8_;
  local_ab0 = local_1260._0_8_;
  local_a78 = local_1260._8_8_;
  local_a40 = local_1260._16_8_;
  local_a08 = local_1260._24_8_;
  local_b88 = vmovlhps_avx(local_1240._0_16_,local_1200);
  local_b50 = vunpckhpd_avx(local_1240._0_16_,local_1200);
  local_b18 = vmovlhps_avx(local_1240._16_16_,auStack_11f0);
  local_ae0 = vunpckhpd_avx(local_1240._16_16_,auStack_11f0);
  local_aa8 = vmovlhps_avx(local_1220._0_16_,local_11e0);
  local_a70 = vunpckhpd_avx(local_1220._0_16_,local_11e0);
  local_a38 = vunpcklpd_avx(local_1220._16_16_,auStack_11d0);
  local_a00 = vunpckhpd_avx(local_1220._16_16_,auStack_11d0);
  local_b78 = local_11c0;
  local_b40 = adStack_11b8[0];
  local_b08 = adStack_11b8[1];
  local_ad0 = adStack_11b8[2];
  local_a98 = local_11a0;
  local_a60 = adStack_1198[0];
  local_a28 = adStack_1198[1];
  local_9f0 = adStack_1198[2];
  auVar88 = vpcmpgtd_avx2(local_d20,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  uVar16 = vmovmskps_avx(auVar88);
  local_b70[0] = (char)local_1180;
  local_b38 = (char)(local_1180 >> 8);
  local_b00 = (char)(local_1180 >> 0x10);
  local_ac8 = (char)(local_1180 >> 0x18);
  local_a90 = (char)(local_1180 >> 0x20);
  local_a58 = (char)(local_1180 >> 0x28);
  local_a20 = (char)(local_1180 >> 0x30);
  local_9e8 = (char)(local_1180 >> 0x38);
  if (uVar16 != 0) {
    uVar17 = (ulonglong)(uVar16 & 0xff);
    do {
      uVar12 = 0;
      for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
        uVar12 = uVar12 + 1;
      }
      lVar21 = uVar12 * 0x38;
      cVar19 = param_5[2][0];
      cVar2 = local_b70[lVar21];
      if ((cVar19 == '\0') || (cVar2 == '\0')) {
        if (cVar2 == '\0') {
          cVar19 = param_5[2][0];
          uVar113 = *(undefined8 *)(param_5[1] + 0x10);
          uVar104 = *(undefined8 *)(param_5[1] + 8);
          uVar87 = *(undefined8 *)param_5[1];
          uVar79 = *(undefined8 *)(*param_5 + 0x10);
          uVar27 = *(undefined8 *)*param_5;
          uVar64 = *(undefined8 *)(*param_5 + 8);
        }
        else {
          uVar27 = *(undefined8 *)*(undefined1 (*) [24])(local_ba0 + lVar21);
          uVar64 = *(undefined8 *)(local_ba0 + lVar21 + 8);
          uVar79 = *(undefined8 *)(local_b88 + lVar21 + -8);
          uVar87 = *(undefined8 *)(local_b88 + lVar21);
          uVar104 = *(undefined8 *)(local_b88 + lVar21 + 8);
          uVar113 = *(undefined8 *)(local_b70 + lVar21 + -8);
          cVar19 = cVar2;
        }
      }
      else {
        auVar42._24_8_ = 0;
        auVar42._0_24_ = *param_5;
        auVar68._24_8_ = 0;
        auVar68._0_24_ = *(undefined1 (*) [24])(local_ba0 + lVar21);
        auVar88 = vminpd_avx(auVar42,auVar68);
        uVar27 = auVar88._0_8_;
        auVar30 = vshufpd_avx(auVar88._0_16_,auVar88._0_16_,1);
        uVar64 = auVar30._0_8_;
        uVar79 = auVar88._16_8_;
        auVar100._24_8_ = 0;
        auVar100._0_24_ = param_5[1];
        auVar111._16_8_ = *(undefined8 *)(local_b70 + lVar21 + -8);
        auVar111._0_16_ = *(undefined1 (*) [16])(local_b88 + lVar21);
        auVar111._24_8_ = 0;
        auVar88 = vmaxpd_avx(auVar100,auVar111);
        uVar87 = auVar88._0_8_;
        auVar30 = vshufpd_avx(auVar88._0_16_,auVar88._0_16_,1);
        uVar104 = auVar30._0_8_;
        uVar113 = auVar88._16_8_;
      }
      uVar17 = uVar17 & ~(1L << (uVar12 & 0x3f));
      *(undefined8 *)*param_5 = uVar27;
      *(undefined8 *)(*param_5 + 8) = uVar64;
      *(undefined8 *)(*param_5 + 0x10) = uVar79;
      *(undefined8 *)param_5[1] = uVar87;
      *(undefined8 *)(param_5[1] + 8) = uVar104;
      *(undefined8 *)(param_5[1] + 0x10) = uVar113;
      param_5[2][0] = cVar19;
    } while (uVar17 != 0);
  }
  return;
}

