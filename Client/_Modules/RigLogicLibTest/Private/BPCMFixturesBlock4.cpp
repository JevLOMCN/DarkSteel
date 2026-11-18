// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 121

// `dynamic_initializer_for_'floatValues'' @ 141340c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl block4::optimized::_dynamic_initializer_for__floatValues__(void)

{
  AlignedMemoryResource *pAVar1;
  _Compressed_pair<pma::PolyAllocator<float,64,pma::AlignedMemoryResource>,std::_Vector_val<std::_Simple_types<float>_>,0>
  *p_Var2;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar7;
  AlignedMemoryResource *pAVar8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar9;
  ulong64 uVar10;
  undefined4 *puVar11;
  AlignedMemoryResource **ppAVar12;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *this;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1948 [32];
  initializer_list<float> local_1928;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1918;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1910;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1908;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1900;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_18f8;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_18f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_18e8 [2];
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 local_1898;
  undefined8 uStack_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined8 local_1848;
  undefined8 uStack_1840;
  undefined8 local_1838;
  undefined8 uStack_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  AlignedMemoryResource *local_17e8;
  AlignedMemoryResource *local_17e0 [5];
  undefined4 *local_17b8;
  undefined4 *local_17b0;
  AlignedMemoryResource *local_17a8;
  undefined4 *local_17a0;
  undefined4 *local_1798;
  undefined4 *local_1790;
  AlignedMemoryResource *local_1788;
  undefined4 *local_1780;
  undefined4 *local_1778;
  undefined4 *local_1770;
  AlignedMemoryResource *local_1768;
  undefined4 *local_1760;
  undefined4 *local_1758;
  undefined4 *local_1750;
  AlignedMemoryResource *local_1748;
  undefined4 *local_1740;
  undefined4 *local_1738;
  undefined4 *local_1730;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1728;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1708;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_16e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_16c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_16a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1688;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1668;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1648;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1628;
  float *pfStack_1620;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1618;
  float *pfStack_1610;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1608;
  float *pfStack_1600;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15f8;
  float *pfStack_15f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15e8;
  float *pfStack_15e0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15d8;
  float *pfStack_15d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15c8;
  float *pfStack_15c0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15b8;
  float *pfStack_15b0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_15a8;
  float *pfStack_15a0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1598;
  float *pfStack_1590;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1588;
  float *pfStack_1580;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1578;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1558;
  float *pfStack_1550;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1548;
  float *pfStack_1540;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1538;
  float *pfStack_1530;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1528;
  float *pfStack_1520;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1518;
  float *pfStack_1510;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1508;
  float *pfStack_1500;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_14f8;
  float *pfStack_14f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_14e8;
  float *pfStack_14e0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_14d8;
  float *pfStack_14d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_14c8;
  float *pfStack_14c0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_14b8;
  float *pfStack_14b0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_14a8;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1488;
  float *pfStack_1480;
  float *local_1478;
  float *pfStack_1470;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1468;
  float *pfStack_1460;
  float *local_1458;
  float *pfStack_1450;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1448;
  float *pfStack_1440;
  float *local_1438;
  float *pfStack_1430;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1428;
  float *pfStack_1420;
  float *local_1418;
  float *pfStack_1410;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1408;
  float *pfStack_1400;
  float *local_13f8;
  float *pfStack_13f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_13e8;
  float *pfStack_13e0;
  float *local_13d8;
  float *pfStack_13d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_13c8;
  float *pfStack_13c0;
  float *local_13b8;
  float *pfStack_13b0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_13a8;
  float *pfStack_13a0;
  float *local_1398;
  float *pfStack_1390;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1388;
  float *pfStack_1380;
  float *local_1378;
  float *pfStack_1370;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1368;
  float *pfStack_1360;
  float *local_1358;
  float *pfStack_1350;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1348;
  float *pfStack_1340;
  float *local_1338;
  float *pfStack_1330;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1328;
  float *pfStack_1320;
  float *local_1318;
  float *pfStack_1310;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1308;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_12e8;
  float *pfStack_12e0;
  float *local_12d8;
  float *pfStack_12d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_12c8;
  float *pfStack_12c0;
  float *local_12b8;
  float *pfStack_12b0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_12a8;
  float *pfStack_12a0;
  float *local_1298;
  float *pfStack_1290;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1288;
  float *pfStack_1280;
  float *local_1278;
  float *pfStack_1270;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1268;
  float *pfStack_1260;
  float *local_1258;
  float *pfStack_1250;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1248;
  float *pfStack_1240;
  float *local_1238;
  float *pfStack_1230;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1228;
  float *pfStack_1220;
  float *local_1218;
  float *pfStack_1210;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1208;
  float *pfStack_1200;
  float *local_11f8;
  float *pfStack_11f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_11e8;
  float *pfStack_11e0;
  float *local_11d8;
  float *pfStack_11d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_11c8;
  float *pfStack_11c0;
  float *local_11b8;
  float *pfStack_11b0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_11a8;
  float *pfStack_11a0;
  float *local_1198;
  float *pfStack_1190;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1188;
  float *pfStack_1180;
  float *local_1178;
  float *pfStack_1170;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_1168;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1148;
  float *pfStack_1140;
  float *local_1138;
  float *pfStack_1130;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1128;
  float *pfStack_1120;
  float *local_1118;
  float *pfStack_1110;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1108;
  float *pfStack_1100;
  float *local_10f8;
  float *pfStack_10f0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_10e8;
  float *pfStack_10e0;
  float *local_10d8;
  float *pfStack_10d0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_10c8;
  float *pfStack_10c0;
  float *local_10b8;
  float *pfStack_10b0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_10a8;
  float *pfStack_10a0;
  float *local_1098;
  float *pfStack_1090;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1088;
  float *pfStack_1080;
  float *local_1078;
  float *pfStack_1070;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1068;
  float *pfStack_1060;
  float *local_1058;
  float *pfStack_1050;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1048;
  float *pfStack_1040;
  float *local_1038;
  float *pfStack_1030;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1028;
  float *pfStack_1020;
  float *local_1018;
  float *pfStack_1010;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1008;
  float *pfStack_1000;
  float *local_ff8;
  float *pfStack_ff0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_fe8;
  float *pfStack_fe0;
  float *local_fd8;
  float *pfStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_ef8;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_ed8;
  float *pfStack_ed0;
  float *local_ec8;
  float *pfStack_ec0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_eb8;
  float *pfStack_eb0;
  float *local_ea8;
  float *pfStack_ea0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_e98;
  float *pfStack_e90;
  float *local_e88;
  float *pfStack_e80;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_e78;
  float *pfStack_e70;
  float *local_e68;
  float *pfStack_e60;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_e58;
  float *pfStack_e50;
  float *local_e48;
  float *pfStack_e40;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_e38;
  float *pfStack_e30;
  float *local_e28;
  float *pfStack_e20;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_e18;
  float *pfStack_e10;
  float *local_e08;
  float *pfStack_e00;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_df8;
  float *pfStack_df0;
  float *local_de8;
  float *pfStack_de0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_dd8;
  float *pfStack_dd0;
  float *local_dc8;
  float *pfStack_dc0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_db8;
  float *pfStack_db0;
  float *local_da8;
  float *pfStack_da0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_d98;
  float *pfStack_d90;
  float *local_d88;
  float *pfStack_d80;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_d78;
  float *pfStack_d70;
  float *local_d68;
  float *pfStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_c88;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_a78;
  float *pfStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [6];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1948;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pfVar4 = _UNK_1506894f8;
  PVar3 = ___xmm_0000000000000000000000003f800000;
  local_1648._Mypair._Myval1 = ___xmm_0000000000000000000000003f800000;
  local_1648._Mypair._Myval2._Myfirst = _UNK_1506894f8;
  local_1648._Mypair._Myval2._Mylast = (float *)___xmm_0000000000000000000000003f800000;
  local_1648._Mypair._Myval2._Myend = _UNK_1506894f8;
  local_1628 = ___xmm_0000000000000000000000003f800000;
  pfStack_1620 = _UNK_1506894f8;
  local_1618 = ___xmm_0000000000000000000000003f800000;
  pfStack_1610 = _UNK_1506894f8;
  local_1608 = ___xmm_0000000000000000000000003f800000;
  pfStack_1600 = _UNK_1506894f8;
  local_15f8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15f0 = _UNK_1506894f8;
  local_15e8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15e0 = _UNK_1506894f8;
  local_15d8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15d0 = _UNK_1506894f8;
  local_15c8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15c0 = _UNK_1506894f8;
  local_15b8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15b0 = _UNK_1506894f8;
  local_15a8 = ___xmm_0000000000000000000000003f800000;
  pfStack_15a0 = _UNK_1506894f8;
  local_1598 = ___xmm_0000000000000000000000003f800000;
  pfStack_1590 = _UNK_1506894f8;
  local_1588 = ___xmm_0000000000000000000000003f800000;
  pfStack_1580 = _UNK_1506894f8;
  local_17e8 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_17e0[1] =
       (AlignedMemoryResource *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0xd0,0x40);
  local_17e0[0] = local_17e0[1];
  pvVar9 = &local_1648;
  local_17e0[2] = local_17e0[1] + 0x1a;
  do {
    p_Var2 = &pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             &(pvVar9->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)local_17e0[1] = *(undefined4 *)&p_Var2->_Myval1;
    local_17e0[1] = (AlignedMemoryResource *)&local_17e0[1]->field_0x4;
  } while (pvVar9 != &local_1578);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1578._Mypair._Myval1 = ___xmm_40a00000408000004040000040000000;
  local_1578._Mypair._Myval2._Myfirst = _UNK_152884c18;
  local_1578._Mypair._Myval2._Mylast = (float *)___xmm_40a00000408000004040000040000000;
  local_1578._Mypair._Myval2._Myend = _UNK_152884c18;
  local_1558 = ___xmm_40a00000408000004040000040000000;
  pfStack_1550 = _UNK_152884c18;
  local_1548 = ___xmm_40a00000408000004040000040000000;
  pfStack_1540 = _UNK_152884c18;
  local_1538 = ___xmm_40a00000408000004040000040000000;
  pfStack_1530 = _UNK_152884c18;
  local_1528 = ___xmm_40a00000408000004040000040000000;
  pfStack_1520 = _UNK_152884c18;
  local_1518 = ___xmm_40a00000408000004040000040000000;
  pfStack_1510 = _UNK_152884c18;
  local_1508 = ___xmm_40a00000408000004040000040000000;
  pfStack_1500 = _UNK_152884c18;
  local_14f8 = ___xmm_40a00000408000004040000040000000;
  pfStack_14f0 = _UNK_152884c18;
  local_14e8 = ___xmm_40a00000408000004040000040000000;
  pfStack_14e0 = _UNK_152884c18;
  local_14d8 = ___xmm_40a00000408000004040000040000000;
  pfStack_14d0 = _UNK_152884c18;
  local_14c8 = ___xmm_40a00000408000004040000040000000;
  pfStack_14c0 = _UNK_152884c18;
  local_14b8 = ___xmm_40a00000408000004040000040000000;
  pfStack_14b0 = _UNK_152884c18;
  local_17e0[3] =
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_17b8 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0xd0,0x40);
  local_17e0[4] = (AlignedMemoryResource *)local_17b8;
  pvVar9 = &local_1578;
  local_17b0 = local_17b8 + 0x34;
  do {
    p_Var2 = &pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             &(pvVar9->_Mypair)._Myval1.field_0x4;
    *local_17b8 = *(undefined4 *)&p_Var2->_Myval1;
    local_17b8 = local_17b8 + 1;
  } while (pvVar9 != &local_14a8);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_14a8._Mypair._Myval1 = ___xmm_411000004100000040e0000040c00000;
  local_14a8._Mypair._Myval2._Myfirst = _UNK_152884cb8;
  local_14a8._Mypair._Myval2._Mylast = ___xmm_00000000414000004130000041200000;
  local_14a8._Mypair._Myval2._Myend = _UNK_152884a08;
  local_1488 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1480 = _UNK_152884cb8;
  local_1478 = ___xmm_00000000414000004130000041200000;
  pfStack_1470 = _UNK_152884a08;
  local_1468 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1460 = _UNK_152884cb8;
  local_1458 = ___xmm_00000000414000004130000041200000;
  pfStack_1450 = _UNK_152884a08;
  local_1448 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1440 = _UNK_152884cb8;
  local_1438 = ___xmm_00000000414000004130000041200000;
  pfStack_1430 = _UNK_152884a08;
  local_1428 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1420 = _UNK_152884cb8;
  local_1418 = ___xmm_00000000414000004130000041200000;
  pfStack_1410 = _UNK_152884a08;
  local_1408 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1400 = _UNK_152884cb8;
  local_13f8 = ___xmm_00000000414000004130000041200000;
  pfStack_13f0 = _UNK_152884a08;
  local_13e8 = ___xmm_411000004100000040e0000040c00000;
  pfStack_13e0 = _UNK_152884cb8;
  local_13d8 = ___xmm_00000000414000004130000041200000;
  pfStack_13d0 = _UNK_152884a08;
  local_13c8 = ___xmm_411000004100000040e0000040c00000;
  pfStack_13c0 = _UNK_152884cb8;
  local_13b8 = ___xmm_00000000414000004130000041200000;
  pfStack_13b0 = _UNK_152884a08;
  local_13a8 = ___xmm_411000004100000040e0000040c00000;
  pfStack_13a0 = _UNK_152884cb8;
  local_1398 = ___xmm_00000000414000004130000041200000;
  pfStack_1390 = _UNK_152884a08;
  local_1388 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1380 = _UNK_152884cb8;
  local_1378 = ___xmm_00000000414000004130000041200000;
  pfStack_1370 = _UNK_152884a08;
  local_1368 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1360 = _UNK_152884cb8;
  local_1358 = ___xmm_00000000414000004130000041200000;
  pfStack_1350 = _UNK_152884a08;
  local_1348 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1340 = _UNK_152884cb8;
  local_1338 = ___xmm_00000000414000004130000041200000;
  pfStack_1330 = _UNK_152884a08;
  local_1328 = ___xmm_411000004100000040e0000040c00000;
  pfStack_1320 = _UNK_152884cb8;
  local_1318 = ___xmm_00000000414000004130000041200000;
  pfStack_1310 = _UNK_152884a08;
  local_17a8 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1798 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x1a0,0x40);
  local_17a0 = local_1798;
  pvVar9 = &local_14a8;
  local_1790 = local_1798 + 0x68;
  do {
    p_Var2 = &pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             &(pvVar9->_Mypair)._Myval1.field_0x4;
    *local_1798 = *(undefined4 *)&p_Var2->_Myval1;
    local_1798 = local_1798 + 1;
  } while (pvVar9 != &local_1308);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1308._Mypair._Myval1 = ___xmm_41800000417000004160000041500000;
  local_1308._Mypair._Myval2._Myfirst = _UNK_152884d88;
  local_1308._Mypair._Myval2._Mylast = ___xmm_41a00000419800004190000041880000;
  local_1308._Mypair._Myval2._Myend = _UNK_152884df8;
  local_12e8 = ___xmm_41800000417000004160000041500000;
  pfStack_12e0 = _UNK_152884d88;
  local_12d8 = ___xmm_41a00000419800004190000041880000;
  pfStack_12d0 = _UNK_152884df8;
  local_12c8 = ___xmm_41800000417000004160000041500000;
  pfStack_12c0 = _UNK_152884d88;
  local_12b8 = ___xmm_41a00000419800004190000041880000;
  pfStack_12b0 = _UNK_152884df8;
  local_12a8 = ___xmm_41800000417000004160000041500000;
  pfStack_12a0 = _UNK_152884d88;
  local_1298 = ___xmm_41a00000419800004190000041880000;
  pfStack_1290 = _UNK_152884df8;
  local_1288 = ___xmm_41800000417000004160000041500000;
  pfStack_1280 = _UNK_152884d88;
  local_1278 = ___xmm_41a00000419800004190000041880000;
  pfStack_1270 = _UNK_152884df8;
  local_1268 = ___xmm_41800000417000004160000041500000;
  pfStack_1260 = _UNK_152884d88;
  local_1258 = ___xmm_41a00000419800004190000041880000;
  pfStack_1250 = _UNK_152884df8;
  local_1248 = ___xmm_41800000417000004160000041500000;
  pfStack_1240 = _UNK_152884d88;
  local_1238 = ___xmm_41a00000419800004190000041880000;
  pfStack_1230 = _UNK_152884df8;
  local_1228 = ___xmm_41800000417000004160000041500000;
  pfStack_1220 = _UNK_152884d88;
  local_1218 = ___xmm_41a00000419800004190000041880000;
  pfStack_1210 = _UNK_152884df8;
  local_1208 = ___xmm_41800000417000004160000041500000;
  pfStack_1200 = _UNK_152884d88;
  local_11f8 = ___xmm_41a00000419800004190000041880000;
  pfStack_11f0 = _UNK_152884df8;
  local_11e8 = ___xmm_41800000417000004160000041500000;
  pfStack_11e0 = _UNK_152884d88;
  local_11d8 = ___xmm_41a00000419800004190000041880000;
  pfStack_11d0 = _UNK_152884df8;
  local_11c8 = ___xmm_41800000417000004160000041500000;
  pfStack_11c0 = _UNK_152884d88;
  local_11b8 = ___xmm_41a00000419800004190000041880000;
  pfStack_11b0 = _UNK_152884df8;
  local_11a8 = ___xmm_41800000417000004160000041500000;
  pfStack_11a0 = _UNK_152884d88;
  local_1198 = ___xmm_41a00000419800004190000041880000;
  pfStack_1190 = _UNK_152884df8;
  local_1188 = ___xmm_41800000417000004160000041500000;
  pfStack_1180 = _UNK_152884d88;
  local_1178 = ___xmm_41a00000419800004190000041880000;
  pfStack_1170 = _UNK_152884df8;
  local_1788 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1778 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x1a0,0x40);
  local_1780 = local_1778;
  pvVar9 = &local_1308;
  local_1770 = local_1778 + 0x68;
  do {
    p_Var2 = &pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             &(pvVar9->_Mypair)._Myval1.field_0x4;
    *local_1778 = *(undefined4 *)&p_Var2->_Myval1;
    local_1778 = local_1778 + 1;
  } while (pvVar9 != &local_1168);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1168._Mypair._Myval2._Mylast = ___xmm_41e0000041d8000041d0000041c80000;
  local_1168._Mypair._Myval2._Myend = _UNK_152884ee8;
  local_1138 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1130 = _UNK_152884ee8;
  local_1118 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1110 = _UNK_152884ee8;
  local_10f8 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_10f0 = _UNK_152884ee8;
  local_10d8 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_10d0 = _UNK_152884ee8;
  local_10b8 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_10b0 = _UNK_152884ee8;
  local_1098 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1090 = _UNK_152884ee8;
  local_1078 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1070 = _UNK_152884ee8;
  local_1058 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1050 = _UNK_152884ee8;
  local_1038 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1030 = _UNK_152884ee8;
  local_1018 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_1010 = _UNK_152884ee8;
  local_ff8 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_ff0 = _UNK_152884ee8;
  local_fd8 = ___xmm_41e0000041d8000041d0000041c80000;
  pfStack_fd0 = _UNK_152884ee8;
  local_fc8 = ___xmm_00000000000000000000000041e80000;
  uStack_fc0 = _UNK_152884628;
  local_fb8 = ___xmm_00000000000000000000000041e80000;
  uStack_fb0 = _UNK_152884628;
  local_fa8 = ___xmm_00000000000000000000000041e80000;
  uStack_fa0 = _UNK_152884628;
  local_f98 = ___xmm_00000000000000000000000041e80000;
  uStack_f90 = _UNK_152884628;
  local_f88 = ___xmm_00000000000000000000000041e80000;
  uStack_f80 = _UNK_152884628;
  local_f78 = ___xmm_00000000000000000000000041e80000;
  uStack_f70 = _UNK_152884628;
  local_f68 = ___xmm_00000000000000000000000041e80000;
  uStack_f60 = _UNK_152884628;
  local_f58 = ___xmm_00000000000000000000000041e80000;
  uStack_f50 = _UNK_152884628;
  local_f48 = ___xmm_00000000000000000000000041e80000;
  uStack_f40 = _UNK_152884628;
  local_f38 = ___xmm_00000000000000000000000041e80000;
  uStack_f30 = _UNK_152884628;
  local_f28 = ___xmm_00000000000000000000000041e80000;
  uStack_f20 = _UNK_152884628;
  local_f18 = ___xmm_00000000000000000000000041e80000;
  uStack_f10 = _UNK_152884628;
  local_f08 = ___xmm_00000000000000000000000041e80000;
  uStack_f00 = _UNK_152884628;
  local_1168._Mypair._Myval1 = ___xmm_41c0000041b8000041b0000041a80000;
  local_1168._Mypair._Myval2._Myfirst = _UNK_152884e68;
  local_1148 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1140 = _UNK_152884e68;
  local_1128 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1120 = _UNK_152884e68;
  local_1108 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1100 = _UNK_152884e68;
  local_10e8 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_10e0 = _UNK_152884e68;
  local_10c8 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_10c0 = _UNK_152884e68;
  local_10a8 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_10a0 = _UNK_152884e68;
  local_1088 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1080 = _UNK_152884e68;
  local_1068 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1060 = _UNK_152884e68;
  local_1048 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1040 = _UNK_152884e68;
  local_1028 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1020 = _UNK_152884e68;
  local_1008 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_1000 = _UNK_152884e68;
  local_fe8 = ___xmm_41c0000041b8000041b0000041a80000;
  pfStack_fe0 = _UNK_152884e68;
  local_1768 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1758 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x270,0x40);
  local_1760 = local_1758;
  pvVar9 = &local_1168;
  local_1750 = local_1758 + 0x9c;
  do {
    p_Var2 = &pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             ((longlong)&(pvVar9->_Mypair)._Myval1 + 4);
    *local_1758 = *(undefined4 *)&p_Var2->_Myval1;
    local_1758 = local_1758 + 1;
  } while (pvVar9 != &local_ef8);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_ef8._Mypair._Myval2._Mylast = ___xmm_4214000042100000420c000042080000;
  local_ef8._Mypair._Myval2._Myend = _UNK_152884ff8;
  local_ec8 = ___xmm_4214000042100000420c000042080000;
  pfStack_ec0 = _UNK_152884ff8;
  local_ea8 = ___xmm_4214000042100000420c000042080000;
  pfStack_ea0 = _UNK_152884ff8;
  local_e88 = ___xmm_4214000042100000420c000042080000;
  pfStack_e80 = _UNK_152884ff8;
  local_e68 = ___xmm_4214000042100000420c000042080000;
  pfStack_e60 = _UNK_152884ff8;
  local_e48 = ___xmm_4214000042100000420c000042080000;
  pfStack_e40 = _UNK_152884ff8;
  local_e28 = ___xmm_4214000042100000420c000042080000;
  pfStack_e20 = _UNK_152884ff8;
  local_e08 = ___xmm_4214000042100000420c000042080000;
  pfStack_e00 = _UNK_152884ff8;
  local_de8 = ___xmm_4214000042100000420c000042080000;
  pfStack_de0 = _UNK_152884ff8;
  local_dc8 = ___xmm_4214000042100000420c000042080000;
  pfStack_dc0 = _UNK_152884ff8;
  local_da8 = ___xmm_4214000042100000420c000042080000;
  pfStack_da0 = _UNK_152884ff8;
  local_d88 = ___xmm_4214000042100000420c000042080000;
  pfStack_d80 = _UNK_152884ff8;
  local_d68 = ___xmm_4214000042100000420c000042080000;
  pfStack_d60 = _UNK_152884ff8;
  local_d58 = ___xmm_4224000042200000421c000042180000;
  uStack_d50 = _UNK_152885088;
  local_d48 = ___xmm_4224000042200000421c000042180000;
  uStack_d40 = _UNK_152885088;
  local_d38 = ___xmm_4224000042200000421c000042180000;
  uStack_d30 = _UNK_152885088;
  local_d28 = ___xmm_4224000042200000421c000042180000;
  uStack_d20 = _UNK_152885088;
  local_d18 = ___xmm_4224000042200000421c000042180000;
  uStack_d10 = _UNK_152885088;
  local_d08 = ___xmm_4224000042200000421c000042180000;
  uStack_d00 = _UNK_152885088;
  local_cf8 = ___xmm_4224000042200000421c000042180000;
  uStack_cf0 = _UNK_152885088;
  local_ce8 = ___xmm_4224000042200000421c000042180000;
  uStack_ce0 = _UNK_152885088;
  local_cd8 = ___xmm_4224000042200000421c000042180000;
  uStack_cd0 = _UNK_152885088;
  local_cc8 = ___xmm_4224000042200000421c000042180000;
  uStack_cc0 = _UNK_152885088;
  local_cb8 = ___xmm_4224000042200000421c000042180000;
  uStack_cb0 = _UNK_152885088;
  local_ca8 = ___xmm_4224000042200000421c000042180000;
  uStack_ca0 = _UNK_152885088;
  local_c98 = ___xmm_4224000042200000421c000042180000;
  uStack_c90 = _UNK_152885088;
  local_ef8._Mypair._Myval1 = ___xmm_420400004200000041f8000041f00000;
  local_ef8._Mypair._Myval2._Myfirst = _UNK_152884f78;
  local_ed8 = ___xmm_420400004200000041f8000041f00000;
  pfStack_ed0 = _UNK_152884f78;
  local_eb8 = ___xmm_420400004200000041f8000041f00000;
  pfStack_eb0 = _UNK_152884f78;
  local_e98 = ___xmm_420400004200000041f8000041f00000;
  pfStack_e90 = _UNK_152884f78;
  local_e78 = ___xmm_420400004200000041f8000041f00000;
  pfStack_e70 = _UNK_152884f78;
  local_e58 = ___xmm_420400004200000041f8000041f00000;
  pfStack_e50 = _UNK_152884f78;
  local_e38 = ___xmm_420400004200000041f8000041f00000;
  pfStack_e30 = _UNK_152884f78;
  local_e18 = ___xmm_420400004200000041f8000041f00000;
  pfStack_e10 = _UNK_152884f78;
  local_df8 = ___xmm_420400004200000041f8000041f00000;
  pfStack_df0 = _UNK_152884f78;
  local_dd8 = ___xmm_420400004200000041f8000041f00000;
  pfStack_dd0 = _UNK_152884f78;
  local_db8 = ___xmm_420400004200000041f8000041f00000;
  pfStack_db0 = _UNK_152884f78;
  local_d98 = ___xmm_420400004200000041f8000041f00000;
  pfStack_d90 = _UNK_152884f78;
  local_d78 = ___xmm_420400004200000041f8000041f00000;
  pfStack_d70 = _UNK_152884f78;
  local_1748 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1738 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x270,0x40);
  local_1740 = local_1738;
  pvVar9 = &local_ef8;
  local_1730 = local_1738 + 0x9c;
  do {
    *local_1738 = *(undefined4 *)&pvVar9->_Mypair;
    pvVar9 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             ((longlong)&pvVar9->_Mypair + 4);
    local_1738 = local_1738 + 1;
  } while (pvVar9 != &local_c88);
  if ((*(int *)(lVar13 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1928._First = (float *)&local_a08;
  local_a08 = ___xmm_4234000042300000422c000042280000;
  uStack_a00 = _UNK_152885108;
  local_9f8 = ___xmm_4244000042400000423c000042380000;
  uStack_9f0 = _UNK_152885188;
  local_9e8 = ___xmm_4234000042300000422c000042280000;
  uStack_9e0 = _UNK_152885108;
  local_9d8 = ___xmm_4244000042400000423c000042380000;
  uStack_9d0 = _UNK_152885188;
  local_9c8 = ___xmm_4234000042300000422c000042280000;
  uStack_9c0 = _UNK_152885108;
  local_9b8 = ___xmm_4244000042400000423c000042380000;
  uStack_9b0 = _UNK_152885188;
  local_9a8 = ___xmm_4234000042300000422c000042280000;
  uStack_9a0 = _UNK_152885108;
  local_998 = ___xmm_4244000042400000423c000042380000;
  uStack_990 = _UNK_152885188;
  local_988 = ___xmm_4234000042300000422c000042280000;
  uStack_980 = _UNK_152885108;
  local_978 = ___xmm_4244000042400000423c000042380000;
  uStack_970 = _UNK_152885188;
  local_968 = ___xmm_4234000042300000422c000042280000;
  uStack_960 = _UNK_152885108;
  local_958 = ___xmm_4244000042400000423c000042380000;
  uStack_950 = _UNK_152885188;
  local_948 = ___xmm_4234000042300000422c000042280000;
  uStack_940 = _UNK_152885108;
  local_938 = ___xmm_4244000042400000423c000042380000;
  uStack_930 = _UNK_152885188;
  local_928 = ___xmm_4234000042300000422c000042280000;
  uStack_920 = _UNK_152885108;
  local_918 = ___xmm_4244000042400000423c000042380000;
  uStack_910 = _UNK_152885188;
  local_908 = ___xmm_4234000042300000422c000042280000;
  uStack_900 = _UNK_152885108;
  local_8f8 = ___xmm_4244000042400000423c000042380000;
  uStack_8f0 = _UNK_152885188;
  local_8e8 = ___xmm_4234000042300000422c000042280000;
  uStack_8e0 = _UNK_152885108;
  local_8d8 = ___xmm_4244000042400000423c000042380000;
  uStack_8d0 = _UNK_152885188;
  local_8c8 = ___xmm_4234000042300000422c000042280000;
  uStack_8c0 = _UNK_152885108;
  local_8b8 = ___xmm_4244000042400000423c000042380000;
  uStack_8b0 = _UNK_152885188;
  local_8a8 = ___xmm_4234000042300000422c000042280000;
  uStack_8a0 = _UNK_152885108;
  local_898 = ___xmm_4244000042400000423c000042380000;
  uStack_890 = _UNK_152885188;
  local_888 = ___xmm_4234000042300000422c000042280000;
  uStack_880 = _UNK_152885108;
  local_878 = ___xmm_4244000042400000423c000042380000;
  uStack_870 = _UNK_152885188;
  local_1928._Last = (float *)&local_6c8;
  local_868 = ___xmm_4254000042500000424c000042480000;
  uStack_860 = _UNK_152885208;
  local_858 = ___xmm_0000000000000000425c000042580000;
  uStack_850 = _UNK_152884808;
  local_848 = ___xmm_4254000042500000424c000042480000;
  uStack_840 = _UNK_152885208;
  local_838 = ___xmm_0000000000000000425c000042580000;
  uStack_830 = _UNK_152884808;
  local_828 = ___xmm_4254000042500000424c000042480000;
  uStack_820 = _UNK_152885208;
  local_818 = ___xmm_0000000000000000425c000042580000;
  uStack_810 = _UNK_152884808;
  local_808 = ___xmm_4254000042500000424c000042480000;
  uStack_800 = _UNK_152885208;
  local_7f8 = ___xmm_0000000000000000425c000042580000;
  uStack_7f0 = _UNK_152884808;
  local_7e8 = ___xmm_4254000042500000424c000042480000;
  uStack_7e0 = _UNK_152885208;
  local_7d8 = ___xmm_0000000000000000425c000042580000;
  uStack_7d0 = _UNK_152884808;
  local_7c8 = ___xmm_4254000042500000424c000042480000;
  uStack_7c0 = _UNK_152885208;
  local_7b8 = ___xmm_0000000000000000425c000042580000;
  uStack_7b0 = _UNK_152884808;
  local_7a8 = ___xmm_4254000042500000424c000042480000;
  uStack_7a0 = _UNK_152885208;
  local_798 = ___xmm_0000000000000000425c000042580000;
  uStack_790 = _UNK_152884808;
  local_788 = ___xmm_4254000042500000424c000042480000;
  uStack_780 = _UNK_152885208;
  local_778 = ___xmm_0000000000000000425c000042580000;
  uStack_770 = _UNK_152884808;
  local_768 = ___xmm_4254000042500000424c000042480000;
  uStack_760 = _UNK_152885208;
  local_758 = ___xmm_0000000000000000425c000042580000;
  uStack_750 = _UNK_152884808;
  local_748 = ___xmm_4254000042500000424c000042480000;
  uStack_740 = _UNK_152885208;
  local_738 = ___xmm_0000000000000000425c000042580000;
  uStack_730 = _UNK_152884808;
  local_728 = ___xmm_4254000042500000424c000042480000;
  uStack_720 = _UNK_152885208;
  local_718 = ___xmm_0000000000000000425c000042580000;
  uStack_710 = _UNK_152884808;
  local_708 = ___xmm_4254000042500000424c000042480000;
  uStack_700 = _UNK_152885208;
  local_6f8 = ___xmm_0000000000000000425c000042580000;
  uStack_6f0 = _UNK_152884808;
  local_6e8 = ___xmm_4254000042500000424c000042480000;
  uStack_6e0 = _UNK_152885208;
  local_6d8 = ___xmm_0000000000000000425c000042580000;
  uStack_6d0 = _UNK_152884808;
  local_18e8[0] =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_1728,&local_1928,local_18e8);
  local_1918.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1918);
  local_6c8 = ___xmm_426c0000426800004264000042600000;
  uStack_6c0 = _UNK_1528852e8;
  local_6b8 = ___xmm_427c0000427800004274000042700000;
  uStack_6b0 = _UNK_1528853a8;
  local_6a8 = ___xmm_426c0000426800004264000042600000;
  uStack_6a0 = _UNK_1528852e8;
  local_698 = ___xmm_427c0000427800004274000042700000;
  uStack_690 = _UNK_1528853a8;
  local_688 = ___xmm_426c0000426800004264000042600000;
  uStack_680 = _UNK_1528852e8;
  local_678 = ___xmm_427c0000427800004274000042700000;
  uStack_670 = _UNK_1528853a8;
  local_668 = ___xmm_426c0000426800004264000042600000;
  uStack_660 = _UNK_1528852e8;
  local_658 = ___xmm_427c0000427800004274000042700000;
  uStack_650 = _UNK_1528853a8;
  local_648 = ___xmm_426c0000426800004264000042600000;
  uStack_640 = _UNK_1528852e8;
  local_638 = ___xmm_427c0000427800004274000042700000;
  uStack_630 = _UNK_1528853a8;
  local_1928._First = (float *)&local_6c8;
  local_628 = ___xmm_426c0000426800004264000042600000;
  uStack_620 = _UNK_1528852e8;
  local_618 = ___xmm_427c0000427800004274000042700000;
  uStack_610 = _UNK_1528853a8;
  local_1928._Last = (float *)&local_388;
  local_608 = ___xmm_426c0000426800004264000042600000;
  uStack_600 = _UNK_1528852e8;
  local_5f8 = ___xmm_427c0000427800004274000042700000;
  uStack_5f0 = _UNK_1528853a8;
  local_5e8 = ___xmm_426c0000426800004264000042600000;
  uStack_5e0 = _UNK_1528852e8;
  local_5d8 = ___xmm_427c0000427800004274000042700000;
  uStack_5d0 = _UNK_1528853a8;
  local_5c8 = ___xmm_426c0000426800004264000042600000;
  uStack_5c0 = _UNK_1528852e8;
  local_5b8 = ___xmm_427c0000427800004274000042700000;
  uStack_5b0 = _UNK_1528853a8;
  local_5a8 = ___xmm_426c0000426800004264000042600000;
  uStack_5a0 = _UNK_1528852e8;
  local_598 = ___xmm_427c0000427800004274000042700000;
  uStack_590 = _UNK_1528853a8;
  local_588 = ___xmm_426c0000426800004264000042600000;
  uStack_580 = _UNK_1528852e8;
  local_578 = ___xmm_427c0000427800004274000042700000;
  uStack_570 = _UNK_1528853a8;
  local_568 = ___xmm_426c0000426800004264000042600000;
  uStack_560 = _UNK_1528852e8;
  local_558 = ___xmm_427c0000427800004274000042700000;
  uStack_550 = _UNK_1528853a8;
  local_548 = ___xmm_426c0000426800004264000042600000;
  uStack_540 = _UNK_1528852e8;
  local_538 = ___xmm_427c0000427800004274000042700000;
  uStack_530 = _UNK_1528853a8;
  local_528 = ___xmm_42860000428400004282000042800000;
  uStack_520 = _UNK_152885468;
  local_518 = ___xmm_428e0000428c0000428a000042880000;
  uStack_510 = _UNK_152885518;
  local_508 = ___xmm_42860000428400004282000042800000;
  uStack_500 = _UNK_152885468;
  local_4f8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_4f0 = _UNK_152885518;
  local_4e8 = ___xmm_42860000428400004282000042800000;
  uStack_4e0 = _UNK_152885468;
  local_4d8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_4d0 = _UNK_152885518;
  local_4c8 = ___xmm_42860000428400004282000042800000;
  uStack_4c0 = _UNK_152885468;
  local_4b8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_4b0 = _UNK_152885518;
  local_4a8 = ___xmm_42860000428400004282000042800000;
  uStack_4a0 = _UNK_152885468;
  local_498 = ___xmm_428e0000428c0000428a000042880000;
  uStack_490 = _UNK_152885518;
  local_488 = ___xmm_42860000428400004282000042800000;
  uStack_480 = _UNK_152885468;
  local_478 = ___xmm_428e0000428c0000428a000042880000;
  uStack_470 = _UNK_152885518;
  local_468 = ___xmm_42860000428400004282000042800000;
  uStack_460 = _UNK_152885468;
  local_458 = ___xmm_428e0000428c0000428a000042880000;
  uStack_450 = _UNK_152885518;
  local_448 = ___xmm_42860000428400004282000042800000;
  uStack_440 = _UNK_152885468;
  local_438 = ___xmm_428e0000428c0000428a000042880000;
  uStack_430 = _UNK_152885518;
  local_428 = ___xmm_42860000428400004282000042800000;
  uStack_420 = _UNK_152885468;
  local_418 = ___xmm_428e0000428c0000428a000042880000;
  uStack_410 = _UNK_152885518;
  local_408 = ___xmm_42860000428400004282000042800000;
  uStack_400 = _UNK_152885468;
  local_3f8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_3f0 = _UNK_152885518;
  local_3e8 = ___xmm_42860000428400004282000042800000;
  uStack_3e0 = _UNK_152885468;
  local_3d8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_3d0 = _UNK_152885518;
  local_3c8 = ___xmm_42860000428400004282000042800000;
  uStack_3c0 = _UNK_152885468;
  local_3b8 = ___xmm_428e0000428c0000428a000042880000;
  uStack_3b0 = _UNK_152885518;
  local_3a8 = ___xmm_42860000428400004282000042800000;
  uStack_3a0 = _UNK_152885468;
  local_398 = ___xmm_428e0000428c0000428a000042880000;
  uStack_390 = _UNK_152885518;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_1708,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_1918);
  local_1910.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1910);
  local_388 = ___xmm_42880000428600004284000042820000;
  uStack_380 = _UNK_1528854a8;
  local_378 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_370 = _UNK_152885278;
  local_368 = ___xmm_42880000428600004284000042820000;
  uStack_360 = _UNK_1528854a8;
  local_358 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_350 = _UNK_152885278;
  local_348 = ___xmm_42880000428600004284000042820000;
  uStack_340 = _UNK_1528854a8;
  local_338 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_330 = _UNK_152885278;
  local_328 = ___xmm_42880000428600004284000042820000;
  uStack_320 = _UNK_1528854a8;
  local_318 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_310 = _UNK_152885278;
  local_308 = ___xmm_42880000428600004284000042820000;
  uStack_300 = _UNK_1528854a8;
  local_2f8 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_2f0 = _UNK_152885278;
  local_2e8 = ___xmm_42880000428600004284000042820000;
  uStack_2e0 = _UNK_1528854a8;
  local_2d8 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_2d0 = _UNK_152885278;
  local_2c8 = ___xmm_42880000428600004284000042820000;
  uStack_2c0 = _UNK_1528854a8;
  local_2b8 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_2b0 = _UNK_152885278;
  local_2a8 = ___xmm_42880000428600004284000042820000;
  uStack_2a0 = _UNK_1528854a8;
  local_298 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_290 = _UNK_152885278;
  local_288 = ___xmm_42880000428600004284000042820000;
  uStack_280 = _UNK_1528854a8;
  local_278 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_270 = _UNK_152885278;
  local_268 = ___xmm_42880000428600004284000042820000;
  uStack_260 = _UNK_1528854a8;
  local_258 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_250 = _UNK_152885278;
  local_248 = ___xmm_42880000428600004284000042820000;
  uStack_240 = _UNK_1528854a8;
  local_238 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_230 = _UNK_152885278;
  local_228 = ___xmm_42880000428600004284000042820000;
  uStack_220 = _UNK_1528854a8;
  local_218 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_210 = _UNK_152885278;
  local_1928._First = (float *)&local_388;
  local_208 = ___xmm_42880000428600004284000042820000;
  uStack_200 = _UNK_1528854a8;
  local_1f8 = ___xmm_42600000428e0000428c0000428a0000;
  uStack_1f0 = _UNK_152885278;
  local_1928._Last = (float *)local_48;
  local_1e8 = ___xmm_42700000426c00004268000042640000;
  uStack_1e0 = _UNK_152885328;
  local_1d8 = ___xmm_42800000427c00004278000042740000;
  uStack_1d0 = _UNK_1528853e8;
  local_1c8 = ___xmm_42700000426c00004268000042640000;
  uStack_1c0 = _UNK_152885328;
  local_1b8 = ___xmm_42800000427c00004278000042740000;
  uStack_1b0 = _UNK_1528853e8;
  local_1a8 = ___xmm_42700000426c00004268000042640000;
  uStack_1a0 = _UNK_152885328;
  local_198 = ___xmm_42800000427c00004278000042740000;
  uStack_190 = _UNK_1528853e8;
  local_188 = ___xmm_42700000426c00004268000042640000;
  uStack_180 = _UNK_152885328;
  local_178 = ___xmm_42800000427c00004278000042740000;
  uStack_170 = _UNK_1528853e8;
  local_168 = ___xmm_42700000426c00004268000042640000;
  uStack_160 = _UNK_152885328;
  local_158 = ___xmm_42800000427c00004278000042740000;
  uStack_150 = _UNK_1528853e8;
  local_148 = ___xmm_42700000426c00004268000042640000;
  uStack_140 = _UNK_152885328;
  local_138 = ___xmm_42800000427c00004278000042740000;
  uStack_130 = _UNK_1528853e8;
  local_128 = ___xmm_42700000426c00004268000042640000;
  uStack_120 = _UNK_152885328;
  local_118 = ___xmm_42800000427c00004278000042740000;
  uStack_110 = _UNK_1528853e8;
  local_108 = ___xmm_42700000426c00004268000042640000;
  uStack_100 = _UNK_152885328;
  local_f8 = ___xmm_42800000427c00004278000042740000;
  uStack_f0 = _UNK_1528853e8;
  local_e8 = ___xmm_42700000426c00004268000042640000;
  uStack_e0 = _UNK_152885328;
  local_d8 = ___xmm_42800000427c00004278000042740000;
  uStack_d0 = _UNK_1528853e8;
  local_c8 = ___xmm_42700000426c00004268000042640000;
  uStack_c0 = _UNK_152885328;
  local_b8 = ___xmm_42800000427c00004278000042740000;
  uStack_b0 = _UNK_1528853e8;
  local_a8 = ___xmm_42700000426c00004268000042640000;
  uStack_a0 = _UNK_152885328;
  local_98 = ___xmm_42800000427c00004278000042740000;
  uStack_90 = _UNK_1528853e8;
  local_88 = ___xmm_42700000426c00004268000042640000;
  uStack_80 = _UNK_152885328;
  local_78 = ___xmm_42800000427c00004278000042740000;
  uStack_70 = _UNK_1528853e8;
  local_68 = ___xmm_42700000426c00004268000042640000;
  uStack_60 = _UNK_152885328;
  local_58 = ___xmm_42800000427c00004278000042740000;
  uStack_50 = _UNK_1528853e8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_16e8,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_1910);
  local_1908.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1908);
  uVar6 = _UNK_151a5ddc8;
  uVar5 = ___xmm_0000000000000000400000003f800000;
  local_1928._First = (float *)&local_18d8;
  local_1928._Last = (float *)&local_1888;
  local_18d8 = ___xmm_0000000000000000400000003f800000;
  uStack_18d0 = _UNK_151a5ddc8;
  local_18c8 = ___xmm_0000000000000000400000003f800000;
  uStack_18c0 = _UNK_151a5ddc8;
  local_18b8 = ___xmm_0000000000000000400000003f800000;
  uStack_18b0 = _UNK_151a5ddc8;
  local_18a8 = ___xmm_0000000000000000400000003f800000;
  uStack_18a0 = _UNK_151a5ddc8;
  local_1898 = ___xmm_0000000000000000400000003f800000;
  uStack_1890 = _UNK_151a5ddc8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_16c8,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_1908);
  local_1900.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1900);
  local_1928._First = (float *)&local_1888;
  local_1888 = uVar5;
  uStack_1880 = uVar6;
  local_1928._Last = (float *)&local_1838;
  local_1878 = uVar5;
  uStack_1870 = uVar6;
  local_1868 = uVar5;
  uStack_1860 = uVar6;
  local_1858 = uVar5;
  uStack_1850 = uVar6;
  local_1848 = uVar5;
  uStack_1840 = uVar6;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_16a8,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_1900);
  local_18f8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_18f8);
  local_1928._First = (float *)&local_1838;
  local_1838 = ___xmm_4080000040400000400000003f800000;
  uStack_1830 = _UNK_15076c058;
  local_1828 = ___xmm_4080000040400000400000003f800000;
  uStack_1820 = _UNK_15076c058;
  local_1818 = ___xmm_4080000040400000400000003f800000;
  uStack_1810 = _UNK_15076c058;
  local_1808 = ___xmm_4080000040400000400000003f800000;
  uStack_1800 = _UNK_15076c058;
  local_17f8 = ___xmm_4080000040400000400000003f800000;
  uStack_17f0 = _UNK_15076c058;
  local_1928._Last = (float *)&local_17e8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_1688,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_18f8);
  local_18f0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
  PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_18f0);
  local_1928._First = (float *)&local_c88;
  local_c88._Mypair._Myval1 = ___xmm_00000000410000004100000041000000;
  local_c88._Mypair._Myval2._Myfirst = _UNK_1528849f8;
  local_c88._Mypair._Myval2._Mylast = (float *)0x0;
  local_c88._Mypair._Myval2._Myend = (float *)0x0;
  local_c48 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_c40 = _UNK_150925428;
  local_c38 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_c30 = _UNK_150925428;
  local_c08 = ___xmm_40e00000000000000000000000000000;
  uStack_c00 = _UNK_152884c68;
  local_be8 = 0;
  uStack_be0 = 0;
  local_bc8 = 0;
  uStack_bc0 = 0;
  local_ba8 = 0;
  uStack_ba0 = 0;
  local_b88 = 0;
  uStack_b80 = 0;
  local_c28 = ___xmm_40800000408000004080000040800000;
  uStack_c20 = _UNK_1509253f8;
  local_c18 = ___xmm_40800000408000004080000040800000;
  uStack_c10 = _UNK_1509253f8;
  local_b48 = ___xmm_0000000040a0000040a0000040a00000;
  uStack_b40 = _UNK_1528849b8;
  local_bd8 = 0;
  uStack_bd0 = 0;
  local_bb8 = 0;
  uStack_bb0 = 0;
  local_b98 = 0;
  uStack_b90 = 0;
  local_b78 = 0;
  uStack_b70 = 0;
  local_b28 = ___xmm_00000000000000000000000040800000;
  uStack_b20 = _UNK_150924fd8;
  local_b38 = ___xmm_000000000000000040a0000040a00000;
  uStack_b30 = _UNK_1528847c8;
  local_b18 = 0;
  uStack_b10 = 0;
  local_ad8 = ___xmm_40000000400000004000000040000000;
  uStack_ad0 = _UNK_15076ba38;
  local_ae8 = ___xmm_40000000400000004000000000000000;
  uStack_ae0 = _UNK_152884bb8;
  local_ab8 = ___xmm_40c0000040c0000040c0000040c00000;
  uStack_ab0 = _UNK_152884c58;
  local_ac8 = ___xmm_40c0000040c0000040c0000000000000;
  uStack_ac0 = _UNK_152884c48;
  local_a98 = ___xmm_40400000000000000000000000000000;
  uStack_a90 = _UNK_152884bd8;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a58 = 0;
  uStack_a50 = 0;
  local_a48 = ___xmm_00000000000000000000000040e00000;
  uStack_a40 = _UNK_150957948;
  local_a38 = ___xmm_00000000000000000000000040000000;
  uStack_a30 = _UNK_15094b718;
  local_1928._Last = (float *)&local_a08;
  local_a28 = ___xmm_00000000000000000000000040c00000;
  uStack_a20 = _UNK_152884618;
  local_c68 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_c60 = _UNK_15076b1f8;
  local_c58 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_c50 = _UNK_15076b1f8;
  local_bf8 = ___xmm_40e0000040e0000040e0000040e00000;
  uStack_bf0 = _UNK_152884c88;
  local_b68 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_b60 = _UNK_15076b1f8;
  local_b58 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_b50 = _UNK_15076b1f8;
  local_b08 = ___xmm_40e0000040e0000040e0000040e00000;
  uStack_b00 = _UNK_152884c88;
  local_af8 = ___xmm_40e0000040e0000040e0000040e00000;
  uStack_af0 = _UNK_152884c88;
  local_a78 = PVar3;
  pfStack_a70 = pfVar4;
  local_a18 = ___xmm_00000000000000000000000040400000;
  uStack_a10 = _UNK_152884608;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_1668,&local_1928,
             (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_18f0);
  floatValues._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  floatValues._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  floatValues._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  floatValues._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  pPVar7 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
            *)(**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a0,8);
  lVar13 = 0xd;
  ppAVar12 = local_17e0;
  lVar14 = 0xd;
  floatValues._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)(pPVar7 + 0x34);
  this = pPVar7;
  floatValues._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)pPVar7;
  floatValues._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)pPVar7;
  do {
    *this = floatValues._Mypair._Myval1;
    *(undefined8 *)((longlong)ppAVar12 + (longlong)pPVar7 + (8 - (longlong)local_17e0)) = 0;
    *(undefined8 *)((longlong)ppAVar12 + (longlong)pPVar7 + (0x10 - (longlong)local_17e0)) = 0;
    *(undefined8 *)((longlong)ppAVar12 + (longlong)pPVar7 + (0x18 - (longlong)local_17e0)) = 0;
    uVar10 = (longlong)ppAVar12[1] - (longlong)*ppAVar12 >> 2;
    if (uVar10 != 0) {
      std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Buy_nonzero
                ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)this,
                 uVar10);
      pAVar1 = ppAVar12[1];
      puVar11 = *(undefined4 **)((longlong)ppAVar12 + (longlong)pPVar7 + (8 - (longlong)local_17e0))
      ;
      for (pAVar8 = *ppAVar12; pAVar8 != pAVar1;
          pAVar8 = (AlignedMemoryResource *)&pAVar8->field_0x4) {
        *puVar11 = *(undefined4 *)pAVar8;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 **)((longlong)ppAVar12 + (longlong)pPVar7 + (0x10 - (longlong)local_17e0)) =
           puVar11;
    }
    this = this + 4;
    ppAVar12 = ppAVar12 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  pvVar9 = &local_1648;
  floatValues._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)this;
  do {
    pvVar9 = pvVar9 + -1;
    std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(pvVar9);
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  atexit(_dynamic_atexit_destructor_for__floatValues__);
  return;
}

// `dynamic_initializer_for_'halfFloatValues'' @ 141341f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__halfFloatValues__(void)

{
  undefined2 uVar1;
  ushort **ppuVar2;
  _Compressed_pair<pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>,std::_Vector_val<std::_Simple_types<unsigned_short>_>,0>
  *p_Var3;
  _Vector_val<std::_Simple_types<unsigned_short>_> *p_Var4;
  undefined4 *puVar5;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar6;
  int *piVar7;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *this;
  longlong lVar8;
  undefined1 auStack_dd8 [32];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
  local_db8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_da8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_da0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_d98;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_d90;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_d88;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d80;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d78
  ;
  undefined8 local_d58;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d50
  ;
  undefined8 local_d30;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d28
  ;
  undefined4 local_d08;
  undefined4 local_d04;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d00
  ;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined4 local_c88;
  undefined4 local_c84;
  undefined4 local_c80;
  undefined4 local_c7c;
  undefined4 local_c78;
  undefined4 local_c74;
  undefined4 local_c70;
  undefined4 local_c6c;
  undefined4 local_c68;
  undefined4 local_c64;
  undefined4 local_c60;
  undefined4 local_c5c;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined4 local_c44;
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined4 local_c38;
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c20 [2];
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c10;
  undefined4 local_c0c;
  undefined4 local_c08;
  undefined4 local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined4 local_bbc;
  undefined4 local_bb8;
  undefined4 local_bb4;
  undefined4 local_bb0;
  undefined4 local_bac;
  undefined4 local_ba8;
  undefined4 local_ba4;
  undefined4 local_ba0;
  undefined4 local_b9c;
  undefined4 local_b98;
  undefined4 local_b94;
  undefined4 local_b90;
  undefined4 local_b8c;
  undefined4 local_b88;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined4 local_b7c;
  undefined4 local_b78;
  undefined4 local_b74;
  undefined4 local_b70;
  undefined4 local_b6c;
  undefined4 local_b68;
  undefined4 local_b64;
  undefined4 local_b60;
  undefined4 local_b5c;
  undefined4 local_b58;
  undefined4 local_b54;
  undefined4 local_b50;
  undefined4 local_b4c;
  undefined4 local_b48;
  undefined4 local_b44;
  undefined4 local_b40;
  undefined4 local_b3c;
  undefined4 local_b38;
  undefined4 local_b34;
  undefined4 local_b30;
  undefined4 local_b2c;
  undefined4 local_b28;
  undefined4 local_b24;
  undefined4 local_b20;
  undefined4 local_b1c;
  undefined4 local_b18;
  undefined4 local_b14;
  undefined4 local_b10;
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_b04;
  undefined4 local_b00;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined4 local_ae4;
  undefined4 local_ae0;
  undefined4 local_adc;
  undefined4 local_ad8;
  undefined4 local_ad4;
  undefined4 local_ad0;
  undefined4 local_acc;
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_aac;
  undefined4 local_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined4 local_a98;
  undefined4 local_a94;
  undefined4 local_a90;
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined4 local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  undefined4 local_9dc;
  undefined4 local_9d8;
  undefined4 local_9d4;
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  undefined4 local_9bc;
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined4 local_940 [2];
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_918;
  undefined4 local_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_7f8
  ;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined8 local_7bc;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined8 local_7ac;
  undefined8 local_7a4;
  undefined8 local_79c;
  undefined8 local_794;
  undefined8 local_78c;
  undefined8 local_784;
  undefined8 local_77c;
  undefined8 local_774;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined8 local_70c;
  undefined8 local_704;
  undefined8 local_6fc;
  undefined4 local_6f4;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_6b8
  ;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  undefined8 local_590;
  undefined4 local_588;
  undefined4 local_584;
  undefined8 local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined8 local_570;
  undefined4 local_568;
  undefined4 local_564;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined8 local_540;
  undefined4 local_538;
  undefined4 local_534;
  undefined8 local_530;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 local_520;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_518
  ;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_378
  ;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1d8
  ;
  AlignedMemoryResource *local_1b8;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  AlignedMemoryResource *local_198;
  undefined2 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  AlignedMemoryResource *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  AlignedMemoryResource *local_158;
  undefined2 *local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  AlignedMemoryResource *local_138;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  AlignedMemoryResource *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_100;
  AlignedMemoryResource *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_dd8);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_d80 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_d00._Mypair._Myval2._Myfirst = (ushort *)0x3c00;
  local_d00._Mypair._Myval2._Mylast = (ushort *)0x3c00;
  local_d00._Mypair._Myval2._Myend = (ushort *)0x3c00;
  local_ce0 = 0x3c00;
  local_cd8 = 0x3c00;
  local_cd0 = 0x3c00;
  local_cc8 = 0x3c00;
  local_cc0 = 0x3c00;
  local_cb8 = 0x3c00;
  local_cb0 = 0x3c00;
  local_ca8 = 0x3c00;
  local_ca0 = 0x3c00;
  local_c98 = 0x3c00;
  local_1d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x68,0x40);
  p_Var4 = &local_d00._Mypair._Myval2;
  local_1d8._Mypair._Myval2._Myend = local_1d8._Mypair._Myval2._Myfirst + 0x34;
  local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Myfirst;
  do {
    ppuVar2 = &p_Var4->_Myfirst;
    p_Var4 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)&p_Var4->_Myfirst + 2);
    *local_1d8._Mypair._Myval2._Mylast = *(ushort *)ppuVar2;
    local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Mylast + 1;
  } while (p_Var4 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)&local_c90);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_c88 = 0x42004000;
  local_c84 = 0x45004400;
  local_c80 = 0x42004000;
  local_c7c = 0x45004400;
  local_c78 = 0x42004000;
  local_c74 = 0x45004400;
  local_c70 = 0x42004000;
  local_c6c = 0x45004400;
  local_c68 = 0x42004000;
  local_c64 = 0x45004400;
  local_c60 = 0x42004000;
  local_c5c = 0x45004400;
  local_c58 = 0x42004000;
  local_c54 = 0x45004400;
  local_c50 = 0x42004000;
  local_c4c = 0x45004400;
  local_c48 = 0x42004000;
  local_c44 = 0x45004400;
  local_c40 = 0x42004000;
  local_c3c = 0x45004400;
  local_c38 = 0x42004000;
  local_c34 = 0x45004400;
  local_c30 = 0x42004000;
  local_c2c = 0x45004400;
  local_c28 = 0x42004000;
  local_c24 = 0x45004400;
  local_1b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x68,0x40);
  puVar5 = &local_c88;
  local_1a0 = local_1b0 + 0x34;
  local_1a8 = local_1b0;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_1a8 = uVar1;
    local_1a8 = local_1a8 + 1;
  } while (puVar5 != local_c20);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_c18 = 0x47004600;
  local_c14 = 0x48804800;
  local_c10 = 0x49804900;
  local_c0c = 0x4a00;
  local_c08 = 0x47004600;
  local_c04 = 0x48804800;
  local_c00 = 0x49804900;
  local_bfc = 0x4a00;
  local_bf8 = 0x47004600;
  local_bf4 = 0x48804800;
  local_bf0 = 0x49804900;
  local_bec = 0x4a00;
  local_be8 = 0x47004600;
  local_be4 = 0x48804800;
  local_be0 = 0x49804900;
  local_bdc = 0x4a00;
  local_bd8 = 0x47004600;
  local_bd4 = 0x48804800;
  local_bd0 = 0x49804900;
  local_bcc = 0x4a00;
  local_bc8 = 0x47004600;
  local_bc4 = 0x48804800;
  local_bc0 = 0x49804900;
  local_bbc = 0x4a00;
  local_bb8 = 0x47004600;
  local_bb4 = 0x48804800;
  local_bb0 = 0x49804900;
  local_bac = 0x4a00;
  local_ba8 = 0x47004600;
  local_ba4 = 0x48804800;
  local_ba0 = 0x49804900;
  local_b9c = 0x4a00;
  local_b98 = 0x47004600;
  local_b94 = 0x48804800;
  local_b90 = 0x49804900;
  local_b8c = 0x4a00;
  local_b88 = 0x47004600;
  local_b84 = 0x48804800;
  local_b80 = 0x49804900;
  local_b7c = 0x4a00;
  local_b78 = 0x47004600;
  local_b74 = 0x48804800;
  local_b70 = 0x49804900;
  local_b6c = 0x4a00;
  local_b68 = 0x47004600;
  local_b64 = 0x48804800;
  local_b60 = 0x49804900;
  local_b5c = 0x4a00;
  local_b58 = 0x47004600;
  local_b54 = 0x48804800;
  local_b50 = 0x49804900;
  local_b4c = 0x4a00;
  local_198 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_190 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0xd0,0x40);
  puVar5 = &local_c18;
  local_180 = local_190 + 0x68;
  local_188 = local_190;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_188 = uVar1;
    local_188 = local_188 + 1;
  } while (puVar5 != &local_b48);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b48 = 0x4b004a80;
  local_b44 = 0x4c004b80;
  local_b40 = 0x4c804c40;
  local_b3c = 0x4d004cc0;
  local_b38 = 0x4b004a80;
  local_b34 = 0x4c004b80;
  local_b30 = 0x4c804c40;
  local_b2c = 0x4d004cc0;
  local_b28 = 0x4b004a80;
  local_b24 = 0x4c004b80;
  local_b20 = 0x4c804c40;
  local_b1c = 0x4d004cc0;
  local_b18 = 0x4b004a80;
  local_b14 = 0x4c004b80;
  local_b10 = 0x4c804c40;
  local_b0c = 0x4d004cc0;
  local_b08 = 0x4b004a80;
  local_b04 = 0x4c004b80;
  local_b00 = 0x4c804c40;
  local_afc = 0x4d004cc0;
  local_af8 = 0x4b004a80;
  local_af4 = 0x4c004b80;
  local_af0 = 0x4c804c40;
  local_aec = 0x4d004cc0;
  local_ae8 = 0x4b004a80;
  local_ae4 = 0x4c004b80;
  local_ae0 = 0x4c804c40;
  local_adc = 0x4d004cc0;
  local_ad8 = 0x4b004a80;
  local_ad4 = 0x4c004b80;
  local_ad0 = 0x4c804c40;
  local_acc = 0x4d004cc0;
  local_ac8 = 0x4b004a80;
  local_ac4 = 0x4c004b80;
  local_ac0 = 0x4c804c40;
  local_abc = 0x4d004cc0;
  local_ab8 = 0x4b004a80;
  local_ab4 = 0x4c004b80;
  local_ab0 = 0x4c804c40;
  local_aac = 0x4d004cc0;
  local_aa8 = 0x4b004a80;
  local_aa4 = 0x4c004b80;
  local_aa0 = 0x4c804c40;
  local_a9c = 0x4d004cc0;
  local_a98 = 0x4b004a80;
  local_a94 = 0x4c004b80;
  local_a90 = 0x4c804c40;
  local_a8c = 0x4d004cc0;
  local_a88 = 0x4b004a80;
  local_a84 = 0x4c004b80;
  local_a80 = 0x4c804c40;
  local_a7c = 0x4d004cc0;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_170 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0xd0,0x40);
  puVar5 = &local_b48;
  local_160 = local_170 + 0x68;
  local_168 = local_170;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_168 = uVar1;
    local_168 = local_168 + 1;
  } while (puVar5 != &local_a78);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a78 = 0x4d804d40;
  local_a74 = 0x4e004dc0;
  local_a70 = 0x4e804e40;
  local_a6c = 0x4f004ec0;
  local_a68 = 0x4d804d40;
  local_a64 = 0x4e004dc0;
  local_a60 = 0x4e804e40;
  local_a5c = 0x4f004ec0;
  local_a58 = 0x4d804d40;
  local_a54 = 0x4e004dc0;
  local_a50 = 0x4e804e40;
  local_a4c = 0x4f004ec0;
  local_a48 = 0x4d804d40;
  local_a44 = 0x4e004dc0;
  local_a40 = 0x4e804e40;
  local_a3c = 0x4f004ec0;
  local_a38 = 0x4d804d40;
  local_a34 = 0x4e004dc0;
  local_a30 = 0x4e804e40;
  local_a2c = 0x4f004ec0;
  local_a28 = 0x4d804d40;
  local_a24 = 0x4e004dc0;
  local_a20 = 0x4e804e40;
  local_a1c = 0x4f004ec0;
  local_a18 = 0x4d804d40;
  local_a14 = 0x4e004dc0;
  local_a10 = 0x4e804e40;
  local_a0c = 0x4f004ec0;
  local_a08 = 0x4d804d40;
  local_a04 = 0x4e004dc0;
  local_a00 = 0x4e804e40;
  local_9fc = 0x4f004ec0;
  local_9f8 = 0x4d804d40;
  local_9f4 = 0x4e004dc0;
  local_9f0 = 0x4e804e40;
  local_9ec = 0x4f004ec0;
  local_9e8 = 0x4d804d40;
  local_9e4 = 0x4e004dc0;
  local_9e0 = 0x4e804e40;
  local_9dc = 0x4f004ec0;
  local_9d8 = 0x4d804d40;
  local_9d4 = 0x4e004dc0;
  local_9d0 = 0x4e804e40;
  local_9cc = 0x4f004ec0;
  local_9c8 = 0x4d804d40;
  local_9c4 = 0x4e004dc0;
  local_9c0 = 0x4e804e40;
  local_9bc = 0x4f004ec0;
  local_9b8 = 0x4d804d40;
  local_9b4 = 0x4e004dc0;
  local_9b0 = 0x4e804e40;
  local_9ac = 0x4f004ec0;
  local_9a8 = 0x4f40;
  local_9a0 = 0x4f40;
  local_998 = 0x4f40;
  local_990 = 0x4f40;
  local_988 = 0x4f40;
  local_980 = 0x4f40;
  local_978 = 0x4f40;
  local_970 = 0x4f40;
  local_968 = 0x4f40;
  local_960 = 0x4f40;
  local_958 = 0x4f40;
  local_950 = 0x4f40;
  local_948 = 0x4f40;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_150 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x138,0x40);
  puVar5 = &local_a78;
  local_140 = local_150 + 0x9c;
  local_148 = local_150;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_148 = uVar1;
    local_148 = local_148 + 1;
  } while (puVar5 != local_940);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_938 = 0x4fc04f80;
  local_934 = 0x50205000;
  local_930 = 0x50605040;
  local_92c = 0x50a05080;
  local_928 = 0x4fc04f80;
  local_924 = 0x50205000;
  local_920 = 0x50605040;
  local_91c = 0x50a05080;
  local_918 = 0x4fc04f80;
  local_914 = 0x50205000;
  local_910 = 0x50605040;
  local_90c = 0x50a05080;
  local_908 = 0x4fc04f80;
  local_904 = 0x50205000;
  local_900 = 0x50605040;
  local_8fc = 0x50a05080;
  local_8f8 = 0x4fc04f80;
  local_8f4 = 0x50205000;
  local_8f0 = 0x50605040;
  local_8ec = 0x50a05080;
  local_8e8 = 0x4fc04f80;
  local_8e4 = 0x50205000;
  local_8e0 = 0x50605040;
  local_8dc = 0x50a05080;
  local_8d8 = 0x4fc04f80;
  local_8d4 = 0x50205000;
  local_8d0 = 0x50605040;
  local_8cc = 0x50a05080;
  local_8c8 = 0x4fc04f80;
  local_8c4 = 0x50205000;
  local_8c0 = 0x50605040;
  local_8bc = 0x50a05080;
  local_8b8 = 0x4fc04f80;
  local_8b4 = 0x50205000;
  local_8b0 = 0x50605040;
  local_8ac = 0x50a05080;
  local_8a8 = 0x4fc04f80;
  local_8a4 = 0x50205000;
  local_8a0 = 0x50605040;
  local_89c = 0x50a05080;
  local_898 = 0x4fc04f80;
  local_894 = 0x50205000;
  local_890 = 0x50605040;
  local_88c = 0x50a05080;
  local_888 = 0x4fc04f80;
  local_884 = 0x50205000;
  local_880 = 0x50605040;
  local_87c = 0x50a05080;
  local_878 = 0x4fc04f80;
  local_874 = 0x50205000;
  local_870 = 0x50605040;
  local_86c = 0x50a05080;
  local_868 = 0x50e050c0;
  local_864 = 0x51205100;
  local_860 = 0x50e050c0;
  local_85c = 0x51205100;
  local_858 = 0x50e050c0;
  local_854 = 0x51205100;
  local_850 = 0x50e050c0;
  local_84c = 0x51205100;
  local_848 = 0x50e050c0;
  local_844 = 0x51205100;
  local_840 = 0x50e050c0;
  local_83c = 0x51205100;
  local_838 = 0x50e050c0;
  local_834 = 0x51205100;
  local_830 = 0x50e050c0;
  local_82c = 0x51205100;
  local_828 = 0x50e050c0;
  local_824 = 0x51205100;
  local_820 = 0x50e050c0;
  local_81c = 0x51205100;
  local_818 = 0x50e050c0;
  local_814 = 0x51205100;
  local_810 = 0x50e050c0;
  local_80c = 0x51205100;
  local_808 = 0x50e050c0;
  local_804 = 0x51205100;
  local_130 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x138,0x40);
  puVar5 = &local_938;
  local_120 = local_130 + 0x9c;
  local_128 = local_130;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_128 = uVar1;
    local_128 = local_128 + 1;
  } while (puVar5 != local_800);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_6b8._Mypair._Myval1._0_4_ = 0x51605140;
  local_6b8._Mypair._Myval1._4_4_ = 0x51a05180;
  local_6b8._Mypair._Myval2._Myfirst._0_4_ = 0x51e051c0;
  local_6b8._Mypair._Myval2._Myfirst._4_4_ = 0x52205200;
  local_6b8._Mypair._Myval2._Mylast._0_4_ = 0x51605140;
  local_6b8._Mypair._Myval2._Mylast._4_4_ = 0x51a05180;
  local_6b8._Mypair._Myval2._Myend._0_4_ = 0x51e051c0;
  local_6b8._Mypair._Myval2._Myend._4_4_ = 0x52205200;
  local_698 = 0x51605140;
  local_694 = 0x51a05180;
  local_690 = 0x51e051c0;
  local_68c = 0x52205200;
  local_688 = 0x51605140;
  local_684 = 0x51a05180;
  local_680 = 0x51e051c0;
  local_67c = 0x52205200;
  local_678 = 0x51605140;
  local_674 = 0x51a05180;
  local_670 = 0x51e051c0;
  local_66c = 0x52205200;
  local_668 = 0x51605140;
  local_664 = 0x51a05180;
  local_660 = 0x51e051c0;
  local_65c = 0x52205200;
  local_658 = 0x51605140;
  local_654 = 0x51a05180;
  local_650 = 0x51e051c0;
  local_64c = 0x52205200;
  local_648 = 0x51605140;
  local_644 = 0x51a05180;
  local_640 = 0x51e051c0;
  local_63c = 0x52205200;
  local_638 = 0x51605140;
  local_634 = 0x51a05180;
  local_630 = 0x51e051c0;
  local_62c = 0x52205200;
  local_628 = 0x51605140;
  local_624 = 0x51a05180;
  local_620 = 0x51e051c0;
  local_61c = 0x52205200;
  local_618 = 0x51605140;
  local_614 = 0x51a05180;
  local_610 = 0x51e051c0;
  local_60c = 0x52205200;
  local_608 = 0x51605140;
  local_604 = 0x51a05180;
  local_600 = 0x51e051c0;
  local_5fc = 0x52205200;
  local_5f8 = 0x51605140;
  local_5f4 = 0x51a05180;
  local_5f0 = 0x51e051c0;
  local_5ec = 0x52205200;
  local_5e8 = 0x52605240;
  local_5e4 = 0x52a05280;
  local_5e0 = 0x52e052c0;
  local_5d8 = 0x52605240;
  local_5d4 = 0x52a05280;
  local_5d0 = 0x52e052c0;
  local_5c8 = 0x52605240;
  local_5c4 = 0x52a05280;
  local_5c0 = 0x52e052c0;
  local_5b8 = 0x52605240;
  local_5b4 = 0x52a05280;
  local_5b0 = 0x52e052c0;
  local_5a8 = 0x52605240;
  local_5a4 = 0x52a05280;
  local_5a0 = 0x52e052c0;
  local_598 = 0x52605240;
  local_594 = 0x52a05280;
  local_590 = 0x52e052c0;
  local_588 = 0x52605240;
  local_584 = 0x52a05280;
  local_580 = 0x52e052c0;
  local_578 = 0x52605240;
  local_574 = 0x52a05280;
  local_570 = 0x52e052c0;
  local_568 = 0x52605240;
  local_564 = 0x52a05280;
  local_560 = 0x52e052c0;
  local_558 = 0x52605240;
  local_554 = 0x52a05280;
  local_550 = 0x52e052c0;
  local_548 = 0x52605240;
  local_544 = 0x52a05280;
  local_540 = 0x52e052c0;
  local_538 = 0x52605240;
  local_534 = 0x52a05280;
  local_530 = 0x52e052c0;
  local_528 = 0x52605240;
  local_524 = 0x52a05280;
  local_520 = 0x52e052c0;
  local_118 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_110 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a0,0x40);
  pvVar6 = &local_6b8;
  local_100 = local_110 + 0xd0;
  local_108 = local_110;
  do {
    p_Var3 = &pvVar6->_Mypair;
    pvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    *local_108 = *(undefined2 *)&p_Var3->_Myval1;
    local_108 = local_108 + 1;
  } while (pvVar6 != &local_518);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_518._Mypair._Myval1._0_4_ = 0x53205300;
  local_518._Mypair._Myval1._4_4_ = 0x53605340;
  local_518._Mypair._Myval2._Myfirst._0_4_ = 0x53a05380;
  local_518._Mypair._Myval2._Myfirst._4_4_ = 0x53e053c0;
  local_518._Mypair._Myval2._Mylast._0_4_ = 0x53205300;
  local_518._Mypair._Myval2._Mylast._4_4_ = 0x53605340;
  local_518._Mypair._Myval2._Myend._0_4_ = 0x53a05380;
  local_518._Mypair._Myval2._Myend._4_4_ = 0x53e053c0;
  local_4f8 = 0x53205300;
  local_4f4 = 0x53605340;
  local_4f0 = 0x53a05380;
  local_4ec = 0x53e053c0;
  local_4e8 = 0x53205300;
  local_4e4 = 0x53605340;
  local_4e0 = 0x53a05380;
  local_4dc = 0x53e053c0;
  local_4d8 = 0x53205300;
  local_4d4 = 0x53605340;
  local_4d0 = 0x53a05380;
  local_4cc = 0x53e053c0;
  local_4c8 = 0x53205300;
  local_4c4 = 0x53605340;
  local_4c0 = 0x53a05380;
  local_4bc = 0x53e053c0;
  local_4b8 = 0x53205300;
  local_4b4 = 0x53605340;
  local_4b0 = 0x53a05380;
  local_4ac = 0x53e053c0;
  local_4a8 = 0x53205300;
  local_4a4 = 0x53605340;
  local_4a0 = 0x53a05380;
  local_49c = 0x53e053c0;
  local_498 = 0x53205300;
  local_494 = 0x53605340;
  local_490 = 0x53a05380;
  local_48c = 0x53e053c0;
  local_488 = 0x53205300;
  local_484 = 0x53605340;
  local_480 = 0x53a05380;
  local_47c = 0x53e053c0;
  local_478 = 0x53205300;
  local_474 = 0x53605340;
  local_470 = 0x53a05380;
  local_46c = 0x53e053c0;
  local_468 = 0x53205300;
  local_464 = 0x53605340;
  local_460 = 0x53a05380;
  local_45c = 0x53e053c0;
  local_458 = 0x53205300;
  local_454 = 0x53605340;
  local_450 = 0x53a05380;
  local_44c = 0x53e053c0;
  local_448 = 0x54105400;
  local_444 = 0x54305420;
  local_440 = 0x54505440;
  local_43c = 0x54705460;
  local_438 = 0x54105400;
  local_434 = 0x54305420;
  local_430 = 0x54505440;
  local_42c = 0x54705460;
  local_428 = 0x54105400;
  local_424 = 0x54305420;
  local_420 = 0x54505440;
  local_41c = 0x54705460;
  local_418 = 0x54105400;
  local_414 = 0x54305420;
  local_410 = 0x54505440;
  local_40c = 0x54705460;
  local_408 = 0x54105400;
  local_404 = 0x54305420;
  local_400 = 0x54505440;
  local_3fc = 0x54705460;
  local_3f8 = 0x54105400;
  local_3f4 = 0x54305420;
  local_3f0 = 0x54505440;
  local_3ec = 0x54705460;
  local_3e8 = 0x54105400;
  local_3e4 = 0x54305420;
  local_3e0 = 0x54505440;
  local_3dc = 0x54705460;
  local_3d8 = 0x54105400;
  local_3d4 = 0x54305420;
  local_3d0 = 0x54505440;
  local_3cc = 0x54705460;
  local_3c8 = 0x54105400;
  local_3c4 = 0x54305420;
  local_3c0 = 0x54505440;
  local_3bc = 0x54705460;
  local_3b8 = 0x54105400;
  local_3b4 = 0x54305420;
  local_3b0 = 0x54505440;
  local_3ac = 0x54705460;
  local_3a8 = 0x54105400;
  local_3a4 = 0x54305420;
  local_3a0 = 0x54505440;
  local_39c = 0x54705460;
  local_398 = 0x54105400;
  local_394 = 0x54305420;
  local_390 = 0x54505440;
  local_38c = 0x54705460;
  local_388 = 0x54105400;
  local_384 = 0x54305420;
  local_380 = 0x54505440;
  local_37c = 0x54705460;
  local_f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_f0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x1a0,0x40);
  pvVar6 = &local_518;
  local_e0 = local_f0 + 0xd0;
  local_e8 = local_f0;
  do {
    p_Var3 = &pvVar6->_Mypair;
    pvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    *local_e8 = *(undefined2 *)&p_Var3->_Myval1;
    local_e8 = local_e8 + 1;
  } while (pvVar6 != &local_378);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_d90 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_378._Mypair._Myval1._0_4_ = 0x54205410;
  local_378._Mypair._Myval1._4_4_ = 0x54405430;
  local_378._Mypair._Myval2._Myfirst._0_4_ = 0x54605450;
  local_378._Mypair._Myval2._Myfirst._4_4_ = 0x53005470;
  local_378._Mypair._Myval2._Mylast._0_4_ = 0x54205410;
  local_378._Mypair._Myval2._Mylast._4_4_ = 0x54405430;
  local_378._Mypair._Myval2._Myend._0_4_ = 0x54605450;
  local_378._Mypair._Myval2._Myend._4_4_ = 0x53005470;
  local_358 = 0x54205410;
  local_354 = 0x54405430;
  local_350 = 0x54605450;
  local_34c = 0x53005470;
  local_348 = 0x54205410;
  local_344 = 0x54405430;
  local_340 = 0x54605450;
  local_33c = 0x53005470;
  local_338 = 0x54205410;
  local_334 = 0x54405430;
  local_330 = 0x54605450;
  local_32c = 0x53005470;
  local_328 = 0x54205410;
  local_324 = 0x54405430;
  local_320 = 0x54605450;
  local_31c = 0x53005470;
  local_318 = 0x54205410;
  local_314 = 0x54405430;
  local_310 = 0x54605450;
  local_30c = 0x53005470;
  local_308 = 0x54205410;
  local_304 = 0x54405430;
  local_300 = 0x54605450;
  local_2fc = 0x53005470;
  local_2f8 = 0x54205410;
  local_2f4 = 0x54405430;
  local_2f0 = 0x54605450;
  local_2ec = 0x53005470;
  local_2e8 = 0x54205410;
  local_2e4 = 0x54405430;
  local_2e0 = 0x54605450;
  local_2dc = 0x53005470;
  local_2d8 = 0x54205410;
  local_2d4 = 0x54405430;
  local_2d0 = 0x54605450;
  local_2cc = 0x53005470;
  local_2c8 = 0x54205410;
  local_2c4 = 0x54405430;
  local_2c0 = 0x54605450;
  local_2bc = 0x53005470;
  local_2b8 = 0x54205410;
  local_2b4 = 0x54405430;
  local_2b0 = 0x54605450;
  local_2ac = 0x53005470;
  local_2a8 = 0x53405320;
  local_2a4 = 0x53805360;
  local_2a0 = 0x53c053a0;
  local_29c = 0x540053e0;
  local_298 = 0x53405320;
  local_294 = 0x53805360;
  local_290 = 0x53c053a0;
  local_28c = 0x540053e0;
  local_288 = 0x53405320;
  local_284 = 0x53805360;
  local_280 = 0x53c053a0;
  local_27c = 0x540053e0;
  local_278 = 0x53405320;
  local_274 = 0x53805360;
  local_270 = 0x53c053a0;
  local_26c = 0x540053e0;
  local_268 = 0x53405320;
  local_264 = 0x53805360;
  local_260 = 0x53c053a0;
  local_25c = 0x540053e0;
  local_258 = 0x53405320;
  local_254 = 0x53805360;
  local_250 = 0x53c053a0;
  local_24c = 0x540053e0;
  local_248 = 0x53405320;
  local_244 = 0x53805360;
  local_240 = 0x53c053a0;
  local_23c = 0x540053e0;
  local_db8._First = &local_378;
  local_238 = 0x53405320;
  local_db8._Last = &local_1d8;
  local_234 = 0x53805360;
  local_230 = 0x53c053a0;
  local_22c = 0x540053e0;
  local_228 = 0x53405320;
  local_224 = 0x53805360;
  local_220 = 0x53c053a0;
  local_21c = 0x540053e0;
  local_218 = 0x53405320;
  local_214 = 0x53805360;
  local_210 = 0x53c053a0;
  local_20c = 0x540053e0;
  local_208 = 0x53405320;
  local_204 = 0x53805360;
  local_200 = 0x53c053a0;
  local_1fc = 0x540053e0;
  local_1f8 = 0x53405320;
  local_1f4 = 0x53805360;
  local_1f0 = 0x53c053a0;
  local_1ec = 0x540053e0;
  local_1e8 = 0x53405320;
  local_1e4 = 0x53805360;
  local_1e0 = 0x53c053a0;
  local_1dc = 0x540053e0;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_d8,(initializer_list<unsigned_short> *)&local_db8,&local_d90);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_db8._First = &local_d78;
  local_d88 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_db8._Last = &local_d50;
  local_d78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x40003c00;
  local_d78._Mypair._Myval2._Myfirst = (ushort *)0x40003c00;
  local_d78._Mypair._Myval2._Mylast = (ushort *)0x40003c00;
  local_d78._Mypair._Myval2._Myend = (ushort *)0x40003c00;
  local_d58 = 0x40003c00;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_b8,(initializer_list<unsigned_short> *)&local_db8,&local_d88);
  local_da8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_da8);
  local_db8._First = &local_d50;
  local_d50._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x40003c00;
  local_db8._Last = &local_d28;
  local_d50._Mypair._Myval2._Myfirst = (ushort *)0x40003c00;
  local_d50._Mypair._Myval2._Mylast = (ushort *)0x40003c00;
  local_d50._Mypair._Myval2._Myend = (ushort *)0x40003c00;
  local_d30 = 0x40003c00;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_db8,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_da8);
  local_da0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_da0);
  local_db8._First = &local_d28;
  local_d28._Mypair._Myval1._0_4_ = 0x40003c00;
  local_db8._Last = &local_d00;
  local_d28._Mypair._Myval1._4_4_ = 0x44004200;
  local_d28._Mypair._Myval2._Myfirst._0_4_ = 0x40003c00;
  local_d28._Mypair._Myval2._Myfirst._4_4_ = 0x44004200;
  local_d28._Mypair._Myval2._Mylast._0_4_ = 0x40003c00;
  local_d28._Mypair._Myval2._Mylast._4_4_ = 0x44004200;
  local_d28._Mypair._Myval2._Myend._0_4_ = 0x40003c00;
  local_d28._Mypair._Myval2._Myend._4_4_ = 0x44004200;
  local_d08 = 0x40003c00;
  local_d04 = 0x44004200;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_db8,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_da0);
  local_d98.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_d98);
  local_7f8._Mypair._Myval1._0_4_ = 0x48004800;
  local_7f8._Mypair._4_8_ = 0x4800;
  local_7f8._Mypair._Myval2._Myfirst._4_4_ = 0;
  local_7f8._Mypair._Myval2._Mylast._0_4_ = 0x3c003c00;
  local_7f8._Mypair._Myval2._Mylast._4_4_ = 0x3c003c00;
  local_7f8._Mypair._Myval2._Myend._0_4_ = 0x3c003c00;
  local_7f8._Mypair._Myval2._Myend._4_4_ = 0x3c003c00;
  local_7d8 = 0x45004500;
  local_7d4 = 0x45004500;
  local_7d0 = 0x45004500;
  local_7cc = 0x45004500;
  local_7c8 = 0x44004400;
  local_7c4 = 0x44004400;
  local_7c0 = 0x44004400;
  local_7bc = 0x44004400;
  local_7b4 = 0x47000000;
  local_7b0 = 0x47004700;
  local_7ac = 0x47004700;
  local_7a4 = 0;
  local_79c = 0;
  local_794 = 0;
  local_78c = 0;
  local_784 = 0;
  local_77c = 0;
  local_774 = 0;
  local_76c = 0;
  local_768 = 0x3c003c00;
  local_db8._First = &local_7f8;
  local_764 = 0x3c003c00;
  local_db8._Last = &local_6b8;
  local_760 = 0x3c003c00;
  local_75c = 0x3c003c00;
  local_758 = 0x45004500;
  local_754 = 0x4500;
  local_750 = 0x45004500;
  local_748 = 0x4400;
  local_740 = 0;
  local_738 = 0x47004700;
  local_734 = 0x47004700;
  local_730 = 0x47004700;
  local_72c = 0x47004700;
  local_728 = 0x40000000;
  local_724 = 0x40004000;
  local_720 = 0x40004000;
  local_71c = 0x40004000;
  local_718 = 0x46000000;
  local_714 = 0x46004600;
  local_710 = 0x46004600;
  local_70c = 0x46004600;
  local_704 = 0;
  local_6fc = 0x42000000;
  local_6f4 = 0;
  local_6f0 = 0x3c00;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6d8 = 0x4700;
  local_6d0 = 0x4000;
  local_6c8 = 0x4600;
  local_6c0 = 0x4200;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_db8,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_d98);
  local_db8._First = &local_1d8;
  local_db8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&halfFloatValues,&local_db8,&local_d80);
  this = local_38;
  lVar8 = 0xd;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)this);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  atexit(_dynamic_atexit_destructor_for__halfFloatValues__);
  return;
}

// `dynamic_initializer_for_'inputIndices'' @ 1413440c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__inputIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *this;
  longlong lVar6;
  undefined1 auStack_388 [32];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
  local_368;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_358;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_350;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_348;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined2 local_330;
  undefined4 local_32e;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [20];
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0;
  ushort local_2de [3];
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined2 local_2c0;
  undefined4 local_2be;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined2 local_2a0;
  undefined4 local_29e;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined2 local_280;
  undefined4 local_27e;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined2 local_260;
  undefined4 local_25e;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined2 local_240;
  undefined4 local_23e;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined2 local_220;
  undefined4 local_21e;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined4 local_1fe;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined2 local_1e0;
  undefined4 local_1de;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1d8
  ;
  AlignedMemoryResource *local_1b8;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  AlignedMemoryResource *local_198;
  undefined2 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  AlignedMemoryResource *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  AlignedMemoryResource *local_158;
  undefined2 *local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  AlignedMemoryResource *local_138;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  AlignedMemoryResource *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_100;
  AlignedMemoryResource *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  AlignedMemoryResource *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  AlignedMemoryResource *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_a0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_388);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_340 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_308._16_4_ = 0xb000c;
  local_2e0 = 0;
  local_2f4 = 0x9000a;
  local_2f0 = 0x70008;
  local_2ec = 0x50006;
  local_2e8 = 0x30004;
  local_2e4 = 0x10002;
  local_1d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1a,0x40);
  puVar3 = (ushort *)(local_308 + 0x10);
  local_1d8._Mypair._Myval2._Myend = local_1d8._Mypair._Myval2._Myfirst + 0xd;
  local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_1d8._Mypair._Myval2._Mylast = uVar1;
    local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != local_2de);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8 = 0xb000c;
  local_2c0 = 0;
  local_2d4 = 0x9000a;
  local_2d0 = 0x70008;
  local_2cc = 0x50006;
  local_2c8 = 0x30004;
  local_2c4 = 0x10002;
  local_1b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_2d8;
  local_1a0 = local_1b0 + 0xd;
  local_1a8 = local_1b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_1a8 = uVar2;
    local_1a8 = local_1a8 + 1;
  } while (puVar4 != &local_2be);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2b8 = 0xb000c;
  local_2a0 = 0;
  local_2b4 = 0x9000a;
  local_2b0 = 0x70008;
  local_2ac = 0x50006;
  local_2a8 = 0x30004;
  local_2a4 = 0x10002;
  local_198 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_190 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_2b8;
  local_180 = local_190 + 0xd;
  local_188 = local_190;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_188 = uVar2;
    local_188 = local_188 + 1;
  } while (puVar4 != &local_29e);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_298 = 0xb000c;
  local_280 = 0;
  local_294 = 0x9000a;
  local_290 = 0x70008;
  local_28c = 0x50006;
  local_288 = 0x30004;
  local_284 = 0x10002;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_170 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_298;
  local_160 = local_170 + 0xd;
  local_168 = local_170;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_168 = uVar2;
    local_168 = local_168 + 1;
  } while (puVar4 != &local_27e);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_278 = 0xb000c;
  local_260 = 0;
  local_274 = 0x9000a;
  local_270 = 0x70008;
  local_26c = 0x50006;
  local_268 = 0x30004;
  local_264 = 0x10002;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_150 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_278;
  local_140 = local_150 + 0xd;
  local_148 = local_150;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_148 = uVar2;
    local_148 = local_148 + 1;
  } while (puVar4 != &local_25e);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_258 = 0xb000c;
  local_240 = 0;
  local_254 = 0x9000a;
  local_250 = 0x70008;
  local_24c = 0x50006;
  local_248 = 0x30004;
  local_244 = 0x10002;
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_130 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_258;
  local_120 = local_130 + 0xd;
  local_128 = local_130;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_128 = uVar2;
    local_128 = local_128 + 1;
  } while (puVar4 != &local_23e);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_238 = 0xb000c;
  local_220 = 0;
  local_234 = 0x9000a;
  local_230 = 0x70008;
  local_22c = 0x50006;
  local_228 = 0x30004;
  local_224 = 0x10002;
  local_118 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_110 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_238;
  local_100 = local_110 + 0xd;
  local_108 = local_110;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_108 = uVar2;
    local_108 = local_108 + 1;
  } while (puVar4 != &local_21e);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_218 = 0xb000c;
  local_200 = 0;
  local_214 = 0x9000a;
  local_210 = 0x70008;
  local_20c = 0x50006;
  local_208 = 0x30004;
  local_204 = 0x10002;
  local_f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_f0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_218;
  local_e0 = local_f0 + 0xd;
  local_e8 = local_f0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_e8 = uVar2;
    local_e8 = local_e8 + 1;
  } while (puVar4 != &local_1fe);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1f8 = 0xb000c;
  local_1e0 = 0;
  local_1f4 = 0x9000a;
  local_1f0 = 0x70008;
  local_1ec = 0x50006;
  local_1e8 = 0x30004;
  local_1e4 = 0x10002;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_d0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x1a,0x40);
  puVar4 = &local_1f8;
  local_c0 = local_d0 + 0xd;
  local_c8 = local_d0;
  do {
    *local_c8 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_c8 = local_c8 + 1;
  } while (puVar4 != &local_1de);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_338 = 0x20001;
  local_334 = 0x40003;
  local_330 = 5;
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_b0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,10,0x40);
  puVar4 = &local_338;
  local_a0 = local_b0 + 5;
  local_a8 = local_b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_a8 = uVar2;
    local_a8 = local_a8 + 1;
  } while (puVar4 != &local_32e);
  local_358.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_358);
  local_328._0_4_ = 0x80007;
  local_328._8_2_ = 0xb;
  local_368._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       local_328;
  local_328._4_4_ = 0xa0009;
  local_368._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (local_328 + 10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_368,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_358);
  local_350.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_350);
  local_368._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       local_318;
  local_318._0_4_ = 0x20001;
  local_368._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (local_318 + 10);
  local_318._4_4_ = 0x40003;
  local_318._8_2_ = 5;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_368,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_350);
  local_348.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_348);
  local_368._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       local_308;
  local_308._0_4_ = 0x20009;
  local_368._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (local_308 + 0x10);
  local_308._4_4_ = 0x50006;
  local_308._8_4_ = 0x30008;
  local_308._12_4_ = 0x10007;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_368,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_348);
  local_368._First = &local_1d8;
  local_368._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&inputIndices,&local_368,&local_340);
  this = local_38;
  lVar6 = 0xd;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)this);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__inputIndices__);
  return;
}

// `dynamic_initializer_for_'inputIndices'' @ 141344b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__inputIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *this;
  longlong lVar6;
  undefined1 auStack_398 [32];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_378;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_368;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_360;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_358;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined2 local_340;
  undefined4 local_33e;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [24];
  ushort local_300 [16];
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined2 local_2c8;
  undefined4 local_2c6;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined2 local_2a8;
  undefined4 local_2a6;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined2 local_288;
  undefined4 local_286;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined4 local_266;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined2 local_248;
  undefined4 local_246;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined2 local_228;
  undefined4 local_226;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined2 local_208;
  undefined4 local_206;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined4 local_1e6 [3];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_1d8;
  DefaultMemoryResource *local_1b8;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  DefaultMemoryResource *local_198;
  undefined2 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  DefaultMemoryResource *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  DefaultMemoryResource *local_158;
  undefined2 *local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  DefaultMemoryResource *local_138;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  DefaultMemoryResource *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_100;
  DefaultMemoryResource *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  DefaultMemoryResource *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  DefaultMemoryResource *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_a0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_398);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_350 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_300[0] = 0xc;
  local_300[1] = 0xb;
  local_300[0xc] = 0;
  local_300[2] = 10;
  local_300[3] = 9;
  local_300[4] = 8;
  local_300[5] = 7;
  local_300[6] = 6;
  local_300[7] = 5;
  local_300[8] = 4;
  local_300[9] = 3;
  local_300[10] = 2;
  local_300[0xb] = 1;
  local_1d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1a,8);
  puVar3 = local_300;
  local_1d8._Mypair._Myval2._Myend = local_1d8._Mypair._Myval2._Myfirst + 0xd;
  local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_1d8._Mypair._Myval2._Mylast = uVar1;
    local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != local_300 + 0xd);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2e0 = 0xb000c;
  local_2c8 = 0;
  local_2dc = 0x9000a;
  local_2d8 = 0x70008;
  local_2d4 = 0x50006;
  local_2d0 = 0x30004;
  local_2cc = 0x10002;
  local_1b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_2e0;
  local_1a0 = local_1b0 + 0xd;
  local_1a8 = local_1b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_1a8 = uVar2;
    local_1a8 = local_1a8 + 1;
  } while (puVar4 != &local_2c6);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2c0 = 0xb000c;
  local_2a8 = 0;
  local_2bc = 0x9000a;
  local_2b8 = 0x70008;
  local_2b4 = 0x50006;
  local_2b0 = 0x30004;
  local_2ac = 0x10002;
  local_198 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_190 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_2c0;
  local_180 = local_190 + 0xd;
  local_188 = local_190;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_188 = uVar2;
    local_188 = local_188 + 1;
  } while (puVar4 != &local_2a6);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2a0 = 0xb000c;
  local_288 = 0;
  local_29c = 0x9000a;
  local_298 = 0x70008;
  local_294 = 0x50006;
  local_290 = 0x30004;
  local_28c = 0x10002;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_170 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_2a0;
  local_160 = local_170 + 0xd;
  local_168 = local_170;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_168 = uVar2;
    local_168 = local_168 + 1;
  } while (puVar4 != &local_286);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_280 = 0xb000c;
  local_268 = 0;
  local_27c = 0x9000a;
  local_278 = 0x70008;
  local_274 = 0x50006;
  local_270 = 0x30004;
  local_26c = 0x10002;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_150 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_280;
  local_140 = local_150 + 0xd;
  local_148 = local_150;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_148 = uVar2;
    local_148 = local_148 + 1;
  } while (puVar4 != &local_266);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_260 = 0xb000c;
  local_248 = 0;
  local_25c = 0x9000a;
  local_258 = 0x70008;
  local_254 = 0x50006;
  local_250 = 0x30004;
  local_24c = 0x10002;
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_130 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_260;
  local_120 = local_130 + 0xd;
  local_128 = local_130;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_128 = uVar2;
    local_128 = local_128 + 1;
  } while (puVar4 != &local_246);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_240 = 0xb000c;
  local_228 = 0;
  local_23c = 0x9000a;
  local_238 = 0x70008;
  local_234 = 0x50006;
  local_230 = 0x30004;
  local_22c = 0x10002;
  local_118 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_110 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1a,8);
  puVar4 = &local_240;
  local_100 = local_110 + 0xd;
  local_108 = local_110;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_108 = uVar2;
    local_108 = local_108 + 1;
  } while (puVar4 != &local_226);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_220 = 0xb000c;
  local_208 = 0;
  local_21c = 0x9000a;
  local_218 = 0x70008;
  local_214 = 0x50006;
  local_210 = 0x30004;
  local_20c = 0x10002;
  local_f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_f0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x1a,8);
  puVar4 = &local_220;
  local_e0 = local_f0 + 0xd;
  local_e8 = local_f0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_e8 = uVar2;
    local_e8 = local_e8 + 1;
  } while (puVar4 != &local_206);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_200 = 0xb000c;
  local_1e8 = 0;
  local_1fc = 0x9000a;
  local_1f8 = 0x70008;
  local_1f4 = 0x50006;
  local_1f0 = 0x30004;
  local_1ec = 0x10002;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_d0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x1a,8);
  puVar4 = &local_200;
  local_c0 = local_d0 + 0xd;
  local_c8 = local_d0;
  do {
    *local_c8 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_c8 = local_c8 + 1;
  } while (puVar4 != local_1e6);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_348 = 0x20001;
  local_340 = 5;
  local_344 = 0x40003;
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_b0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,10,8);
  puVar4 = &local_348;
  local_a0 = local_b0 + 5;
  local_a8 = local_b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_a8 = uVar2;
    local_a8 = local_a8 + 1;
  } while (puVar4 != &local_33e);
  local_368.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_368);
  local_338._0_4_ = 0x80007;
  local_338._8_2_ = 0xb;
  local_378._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_338;
  local_338._4_4_ = 0xa0009;
  local_378._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_338 + 10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_378,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_368);
  local_360.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_360);
  local_378._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_328;
  local_328._0_4_ = 0x20001;
  local_378._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_328 + 10);
  local_328._4_4_ = 0x40003;
  local_328._8_2_ = 5;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_378,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_360);
  local_358.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_358);
  local_378._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_318;
  local_318._0_4_ = 0x20001;
  local_378._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_318 + 0x14);
  local_318._4_4_ = 0x40003;
  local_318._8_4_ = 0x5000a;
  local_318._12_4_ = 0x70006;
  local_318._16_4_ = 0x90008;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_378,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_358);
  local_378._First = &local_1d8;
  local_378._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&inputIndices,&local_378,&local_350);
  this = local_38;
  lVar6 = 0xd;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )this);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__inputIndices__);
  return;
}

// `dynamic_initializer_for_'jointGroups'' @ 141345540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__jointGroups__(void)

{
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  uint *puVar2;
  JointGroup *pJVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar7;
  int *piVar8;
  undefined1 auStack_458 [32];
  PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_438 [2];
  initializer_list<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>_>
  local_428;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  local_418;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  local_3f8;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  local_3d8;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined1 local_204 [12];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_458;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_438[0] = (PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3d8._Mypair._Myval2._Myend._0_4_ = 0x34;
  local_3d8._Mypair._Myval1 = (PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>)0x0
  ;
  local_3d8._Mypair._Myval2._Myfirst = (JointGroup *)0x0;
  local_3d8._Mypair._Myval2._Mylast = (JointGroup *)0x0;
  local_3d8._Mypair._Myval2._Myend._4_4_ = 0xd;
  local_3b8 = 4;
  local_3b4 = 0x34;
  local_3b0 = 0xd;
  local_3ac = 4;
  local_3a8 = 4;
  local_3a0 = 4;
  local_39c = 0x34;
  local_398 = 0xd;
  local_394 = 4;
  local_390 = 0x68;
  local_38c = 0x1a;
  local_388 = 8;
  local_384 = 8;
  local_380 = 1;
  local_37c = 8;
  local_378 = 0x68;
  local_374 = 0xd;
  local_370 = 8;
  local_36c = 0xd0;
  local_368 = 0x27;
  local_364 = 0x10;
  local_360 = 0xc;
  local_35c = 2;
  local_358 = 0xc;
  local_354 = 0x68;
  local_350 = 0xd;
  local_34c = 8;
  local_348 = 0x138;
  local_344 = 0x34;
  local_340 = 0x18;
  local_33c = 0x10;
  local_338 = 3;
  local_334 = 0x10;
  local_330 = 0x9c;
  local_32c = 0xd;
  local_328 = 0xc;
  local_324 = 0x1d4;
  local_320 = 0x41;
  local_31c = 0x24;
  local_318 = 0x14;
  local_314 = 4;
  local_310 = 0x14;
  local_30c = 0x9c;
  local_308 = 0xd;
  local_304 = 0xc;
  local_300 = 0x270;
  local_2fc = 0x4e;
  local_2f8 = 0x30;
  local_2f4 = 0x18;
  local_2f0 = 5;
  local_2ec = 0x18;
  local_2e8 = 0xd0;
  local_2e4 = 0xd;
  local_2e0 = 0x10;
  local_2dc = 0x340;
  local_2d8 = 0x5b;
  local_2d4 = 0x40;
  local_2d0 = 0x1c;
  local_2cc = 7;
  local_2c8 = 0x1c;
  local_2c4 = 0xd0;
  local_2c0 = 0xd;
  local_2bc = 0x10;
  local_2b8 = 0x410;
  local_2b4 = 0x68;
  local_2b0 = 0x50;
  local_2ac = 0x20;
  local_2a8 = 9;
  local_2a4 = 0x20;
  local_2a0 = 0xd0;
  local_29c = 0xd;
  local_298 = 0x10;
  local_294 = 0x4e0;
  local_290 = 0x75;
  local_28c = 0x60;
  local_288 = 0x24;
  local_284 = 0xb;
  local_280 = 0x24;
  local_27c = 0x14;
  local_278 = 5;
  local_274 = 4;
  local_270 = 0x4f4;
  local_26c = 0x7a;
  local_268 = 100;
  local_264 = 0x28;
  local_260 = 0xb;
  local_25c = 0x28;
  local_258 = 0x14;
  local_254 = 5;
  local_250 = 4;
  local_24c = 0x508;
  local_248 = 0x7f;
  local_244 = 0x68;
  local_240 = 0x2c;
  local_23c = 0xb;
  local_238 = 0x2c;
  local_234 = 0x14;
  local_230 = 5;
  local_22c = 4;
  local_228 = 0x51c;
  local_224 = 0x84;
  local_220 = 0x6c;
  local_21c = 0x30;
  local_218 = 0xd;
  local_214 = 0x30;
  local_210 = 0xa0;
  local_20c = 8;
  local_208 = 0x14;
  local_418._Mypair._Myval1 =
       (PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_418._Mypair._Myval2._Myfirst =
       (JointGroup *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1d4,8);
  pvVar7 = &local_3d8;
  local_418._Mypair._Myval2._Myend = local_418._Mypair._Myval2._Myfirst + 0xd;
  local_418._Mypair._Myval2._Mylast = local_418._Mypair._Myval2._Myfirst;
  do {
    pJVar3 = (pvVar7->_Mypair)._Myval2._Myfirst;
    *(PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource> *)
     local_418._Mypair._Myval2._Mylast = (pvVar7->_Mypair)._Myval1;
    *(JointGroup **)&(local_418._Mypair._Myval2._Mylast)->outputIndicesOffset = pJVar3;
    pJVar3 = (pvVar7->_Mypair)._Myval2._Myend;
    *(JointGroup **)&(local_418._Mypair._Myval2._Mylast)->outputRotationIndicesOffset =
         (pvVar7->_Mypair)._Myval2._Mylast;
    *(JointGroup **)&(local_418._Mypair._Myval2._Mylast)->valuesSize = pJVar3;
    pvVar1 = pvVar7 + 1;
    pvVar7 = (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
              *)&pvVar7[1]._Mypair._Myval1.field_0x4;
    (local_418._Mypair._Myval2._Mylast)->rowCount = *(uint *)&(pvVar1->_Mypair)._Myval1;
    local_418._Mypair._Myval2._Mylast = local_418._Mypair._Myval2._Mylast + 1;
  } while (pvVar7 != (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
                      *)local_204);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0x34;
  uStack_1dc = 0xd;
  local_1d8 = 4;
  local_1d4 = 0x34;
  local_1d0 = 0xd;
  local_1cc = 4;
  local_1c8 = 4;
  local_1c0 = 0;
  local_1bc = 0x34;
  local_1b8 = 0xd;
  local_1b4 = 4;
  local_1b0 = 0x68;
  local_1ac = 0x1a;
  local_1a8 = 8;
  local_1a4 = 8;
  local_19c = 0;
  local_198 = 0x68;
  local_194 = 0xd;
  local_190 = 8;
  local_18c = 0xd0;
  local_188 = 0x27;
  local_184 = 0x10;
  local_180 = 0xc;
  local_178 = 0;
  local_174 = 0x68;
  local_170 = 0xd;
  local_16c = 8;
  local_168 = 0x138;
  local_164 = 0x34;
  local_160 = 0x18;
  local_15c = 0x10;
  local_154 = 0;
  local_150 = 0x9c;
  local_14c = 0xd;
  local_148 = 0xc;
  local_144 = 0x1d4;
  local_140 = 0x41;
  local_13c = 0x24;
  local_138 = 0x14;
  local_130 = 0;
  local_12c = 0x9c;
  local_128 = 0xd;
  local_124 = 0xc;
  local_120 = 0x270;
  local_11c = 0x4e;
  local_118 = 0x30;
  local_114 = 0x18;
  local_10c = 0;
  local_108 = 0xd0;
  local_104 = 0xd;
  local_100 = 0x10;
  local_fc = 0x340;
  local_f8 = 0x5b;
  local_f4 = 0x40;
  local_f0 = 0x1c;
  local_e8 = 0;
  local_e4 = 0xd0;
  local_e0 = 0xd;
  local_dc = 0x10;
  local_d8 = 0x410;
  local_d4 = 0x68;
  local_d0 = 0x50;
  local_cc = 0x20;
  local_c4 = 0;
  local_c0 = 0xd0;
  local_bc = 0xd;
  local_b8 = 0x10;
  local_b4 = 0x4e0;
  local_b0 = 0x75;
  local_ac = 0x60;
  local_a8 = 0x24;
  local_a0 = 0;
  local_9c = 0x14;
  local_98 = 5;
  local_94 = 4;
  local_90 = 0x4f4;
  local_8c = 0x7a;
  local_88 = 100;
  local_84 = 0x28;
  local_7c = 0;
  local_78 = 0x14;
  local_74 = 5;
  local_70 = 4;
  local_6c = 0x508;
  local_68 = 0x7f;
  local_64 = 0x68;
  local_60 = 0x2c;
  local_58 = 0;
  local_54 = 0x14;
  local_50 = 5;
  local_4c = 4;
  local_48 = 0x51c;
  local_44 = 0x84;
  local_40 = 0x6c;
  local_3c = 0x30;
  local_34 = 0;
  local_30 = 0xa0;
  local_2c = 8;
  local_28 = 0x14;
  local_3f8._Mypair._Myval1 =
       (PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_3f8._Mypair._Myval2._Myfirst =
       (JointGroup *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1d4,8);
  local_3f8._Mypair._Myval2._Myend = local_3f8._Mypair._Myval2._Myfirst + 0xd;
  puVar6 = (undefined8 *)(local_204 + 0xc);
  local_3f8._Mypair._Myval2._Mylast = local_3f8._Mypair._Myval2._Myfirst;
  do {
    uVar4 = *puVar6;
    uVar5 = puVar6[1];
    (local_3f8._Mypair._Myval2._Mylast)->valuesOffset = (int)uVar4;
    (local_3f8._Mypair._Myval2._Mylast)->inputIndicesOffset = (int)((ulonglong)uVar4 >> 0x20);
    (local_3f8._Mypair._Myval2._Mylast)->outputIndicesOffset = (int)uVar5;
    (local_3f8._Mypair._Myval2._Mylast)->lodsOffset = (int)((ulonglong)uVar5 >> 0x20);
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    (local_3f8._Mypair._Myval2._Mylast)->outputRotationIndicesOffset = (int)uVar4;
    (local_3f8._Mypair._Myval2._Mylast)->outputRotationLODsOffset = (int)((ulonglong)uVar4 >> 0x20);
    (local_3f8._Mypair._Myval2._Mylast)->valuesSize = (int)uVar5;
    (local_3f8._Mypair._Myval2._Mylast)->colCount = (int)((ulonglong)uVar5 >> 0x20);
    puVar2 = (uint *)(puVar6 + 4);
    puVar6 = (undefined8 *)((longlong)puVar6 + 0x24);
    (local_3f8._Mypair._Myval2._Mylast)->rowCount = *puVar2;
    local_3f8._Mypair._Myval2._Mylast = local_3f8._Mypair._Myval2._Mylast + 1;
  } while (puVar6 != &local_24);
  local_428._First = &local_418;
  local_428._Last = &local_3d8;
  std::
  vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&jointGroups,&local_428,local_438);
  std::
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_3f8);
  std::
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_418);
  atexit(_dynamic_atexit_destructor_for__jointGroups__);
  return;
}

// `dynamic_initializer_for_'lodRegions'' @ 141345f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl block4::optimized::_dynamic_initializer_for__lodRegions__(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  PaddedBlockView *pPVar3;
  undefined8 *puVar4;
  LODRegion *pLVar5;
  longlong lVar6;
  int *piVar7;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *this;
  undefined1 auStack_6f8 [32];
  initializer_list<rl4::LODRegion> local_6d8;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_6c8;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_6c0;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_6b8;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_6b0;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_6a8;
  PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined8 uStack_68c;
  undefined4 uStack_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined8 local_674;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined8 local_65c;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined8 local_644;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined8 uStack_62c;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined8 local_614;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined8 local_5fc;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined8 local_5e4;
  undefined4 local_5dc;
  LODRegion local_5d8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined8 local_580;
  LODRegion local_578;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 local_520;
  LODRegion local_518;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined8 local_4c0;
  LODRegion local_4b8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined8 local_460;
  LODRegion local_458;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  LODRegion local_3f8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  LODRegion local_398;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined8 local_340;
  LODRegion local_338;
  undefined4 local_320;
  undefined8 local_31c;
  undefined8 local_314;
  undefined4 local_30c;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e4;
  undefined4 local_2dc;
  LODRegion local_2d8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined4 local_294;
  undefined4 local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  LODRegion local_278;
  undefined4 local_260;
  undefined8 local_25c;
  undefined8 local_254;
  undefined4 local_24c;
  undefined4 local_248;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  LODRegion local_218;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  DefaultMemoryResource *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  DefaultMemoryResource *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  DefaultMemoryResource *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  DefaultMemoryResource *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  DefaultMemoryResource *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  DefaultMemoryResource *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  DefaultMemoryResource *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  DefaultMemoryResource *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> local_b8;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> local_98;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> local_78;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> local_58;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> local_38;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_6f8);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_6a0 = (PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uStack_694 = 0xc;
  lVar6 = 0xd;
  uStack_690 = 8;
  local_698 = 0xd;
  uStack_68c = 1;
  uStack_684 = 0;
  local_680 = 0xd;
  local_67c = 0xc;
  local_678 = 8;
  local_674 = 1;
  local_66c = 0;
  local_668 = 0xd;
  local_664 = 0xc;
  local_660 = 8;
  local_65c = 1;
  local_654 = 0;
  local_650 = 0xd;
  local_64c = 0xc;
  local_648 = 8;
  local_644 = 1;
  local_63c = 0;
  local_1b8 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1a8 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_1b0 = local_1a8;
  local_1a0 = local_1a8 + 0xc;
  puVar4 = (undefined8 *)&local_698;
  do {
    uVar2 = puVar4[1];
    *local_1a8 = *puVar4;
    local_1a8[1] = uVar2;
    puVar1 = puVar4 + 2;
    puVar4 = puVar4 + 3;
    local_1a8[2] = *puVar1;
    local_1a8 = local_1a8 + 3;
  } while (puVar4 != (undefined8 *)&local_638);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_638 = 0xd;
  uStack_634 = 0xc;
  uStack_630 = 8;
  uStack_62c = 4;
  uStack_624 = 0;
  local_620 = 0xd;
  local_61c = 0xc;
  local_618 = 8;
  local_614 = 3;
  local_60c = 0;
  local_608 = 0xd;
  local_604 = 0xc;
  local_600 = 8;
  local_5fc = 2;
  local_5f4 = 0;
  local_5f0 = 0xd;
  local_5ec = 0xc;
  local_5e8 = 8;
  local_5e4 = 1;
  local_5dc = 0;
  local_198 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_188 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_190 = local_188;
  local_180 = local_188 + 0xc;
  puVar4 = (undefined8 *)&local_638;
  do {
    uVar2 = puVar4[1];
    *local_188 = *puVar4;
    local_188[1] = uVar2;
    puVar1 = puVar4 + 2;
    puVar4 = puVar4 + 3;
    local_188[2] = *puVar1;
    local_188 = local_188 + 3;
  } while ((LODRegion *)puVar4 != &local_5d8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_5d8.inputLODs.size = 0xd;
  local_5d8.inputLODs.sizeAlignedTo4 = 0xc;
  local_5d8.inputLODs.sizeAlignedTo8 = 8;
  local_5d8.outputLODs.size = 7;
  local_5d8.outputLODs.sizePaddedToLastFullBlock = 8;
  local_5d8.outputLODs.sizePaddedToSecondLastFullBlock = 0;
  local_5c0 = 0xd;
  local_5bc = 0xc;
  local_5b8 = 8;
  local_5b4 = 5;
  local_5b0 = 8;
  local_5a8 = 0xd;
  local_5a4 = 0xc;
  local_5a0 = 8;
  local_59c = 4;
  local_598 = 8;
  local_590 = 0xd;
  local_58c = 0xc;
  local_588 = 8;
  local_584 = 1;
  local_580 = 8;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_168 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_170 = local_168;
  local_160 = local_168 + 0xc;
  pLVar5 = &local_5d8;
  do {
    uVar2 = *(undefined8 *)((longlong)&pLVar5->inputLODs + 8);
    *local_168 = *(undefined8 *)&pLVar5->inputLODs;
    local_168[1] = uVar2;
    uVar2 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_168[2] = *(undefined8 *)(uVar2 + 4);
    local_168 = local_168 + 3;
  } while (pLVar5 != &local_578);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_578.inputLODs.size = 0xd;
  local_578.inputLODs.sizeAlignedTo4 = 0xc;
  local_578.inputLODs.sizeAlignedTo8 = 8;
  local_578.outputLODs.size = 8;
  local_578.outputLODs.sizePaddedToLastFullBlock = 8;
  local_578.outputLODs.sizePaddedToSecondLastFullBlock = 8;
  local_560 = 0xd;
  local_55c = 0xc;
  local_558 = 8;
  local_554 = 6;
  local_550 = 8;
  local_548 = 0xd;
  local_544 = 0xc;
  local_540 = 8;
  local_53c = 4;
  local_538 = 8;
  local_530 = 0xd;
  local_52c = 0xc;
  local_528 = 8;
  local_524 = 3;
  local_520 = 8;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_148 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_150 = local_148;
  local_140 = local_148 + 0xc;
  pLVar5 = &local_578;
  do {
    uVar2 = *(undefined8 *)&(pLVar5->inputLODs).sizeAlignedTo8;
    *local_148 = *(undefined8 *)&pLVar5->inputLODs;
    local_148[1] = uVar2;
    pPVar3 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_148[2] = *(undefined8 *)&pPVar3->sizePaddedToLastFullBlock;
    local_148 = local_148 + 3;
  } while (pLVar5 != &local_518);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_518.inputLODs.size = 0xd;
  local_518.inputLODs.sizeAlignedTo4 = 0xc;
  local_518.inputLODs.sizeAlignedTo8 = 8;
  local_518.outputLODs.size = 9;
  local_518.outputLODs.sizePaddedToLastFullBlock = 8;
  local_518.outputLODs.sizePaddedToSecondLastFullBlock = 8;
  local_500 = 0xd;
  local_4fc = 0xc;
  local_4f8 = 8;
  local_4f4 = 7;
  local_4f0 = 8;
  local_4e8 = 0xd;
  local_4e4 = 0xc;
  local_4e0 = 8;
  local_4dc = 4;
  local_4d8 = 8;
  local_4d0 = 0xd;
  local_4cc = 0xc;
  local_4c8 = 8;
  local_4c4 = 2;
  local_4c0 = 8;
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_128 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_130 = local_128;
  local_120 = local_128 + 0xc;
  pLVar5 = &local_518;
  do {
    uVar2 = *(undefined8 *)&(pLVar5->inputLODs).sizeAlignedTo8;
    *local_128 = *(undefined8 *)&pLVar5->inputLODs;
    local_128[1] = uVar2;
    pPVar3 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_128[2] = *(undefined8 *)&pPVar3->sizePaddedToLastFullBlock;
    local_128 = local_128 + 3;
  } while (pLVar5 != &local_4b8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_4b8.inputLODs.size = 0xd;
  local_4b8.inputLODs.sizeAlignedTo4 = 0xc;
  local_4b8.inputLODs.sizeAlignedTo8 = 8;
  local_4b8.outputLODs.size = 0xc;
  local_4b8.outputLODs.sizePaddedToLastFullBlock = 8;
  local_4b8.outputLODs.sizePaddedToSecondLastFullBlock = 8;
  local_4a0 = 0xd;
  local_49c = 0xc;
  local_498 = 8;
  local_494 = 9;
  local_490 = 8;
  local_48c = 8;
  local_488 = 0xd;
  local_484 = 0xc;
  local_480 = 8;
  local_47c = 7;
  local_478 = 8;
  local_470 = 0xd;
  local_46c = 0xc;
  local_468 = 8;
  local_464 = 3;
  local_460 = 8;
  local_118 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_108 = (undefined8 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x60,8);
  local_110 = local_108;
  local_100 = local_108 + 0xc;
  pLVar5 = &local_4b8;
  do {
    uVar2 = *(undefined8 *)&(pLVar5->inputLODs).sizeAlignedTo8;
    *local_108 = *(undefined8 *)&pLVar5->inputLODs;
    local_108[1] = uVar2;
    pPVar3 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_108[2] = *(undefined8 *)&pPVar3->sizePaddedToLastFullBlock;
    local_108 = local_108 + 3;
  } while (pLVar5 != &local_458);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_458.inputLODs.size = 0xd;
  local_458.inputLODs.sizeAlignedTo4 = 0xc;
  local_458.inputLODs.sizeAlignedTo8 = 8;
  local_458.outputLODs.size = 0xe;
  local_458.outputLODs.sizePaddedToLastFullBlock = 0x10;
  local_458.outputLODs.sizePaddedToSecondLastFullBlock = 8;
  local_440 = 0xd;
  local_43c = 0xc;
  local_438 = 8;
  local_434 = 0xd;
  local_430 = 0x10;
  local_42c = 8;
  local_428 = 0xd;
  local_424 = 0xc;
  local_420 = 8;
  local_41c = 0xb;
  local_418 = 0x10;
  local_414 = 8;
  local_410 = 0xd;
  local_40c = 0xc;
  local_408 = 8;
  local_404 = 9;
  local_400 = 0x10;
  local_3fc = 8;
  local_f8 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e8 = (undefined8 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x60,8);
  local_f0 = local_e8;
  pLVar5 = &local_458;
  local_e0 = local_e8 + 0xc;
  do {
    uVar2 = *(undefined8 *)&(pLVar5->inputLODs).sizeAlignedTo8;
    *local_e8 = *(undefined8 *)&pLVar5->inputLODs;
    local_e8[1] = uVar2;
    pPVar3 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_e8[2] = *(undefined8 *)&pPVar3->sizePaddedToLastFullBlock;
    local_e8 = local_e8 + 3;
  } while (pLVar5 != &local_3f8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3f8.inputLODs.size = 0xd;
  local_3f8.inputLODs.sizeAlignedTo4 = 0xc;
  local_3f8.inputLODs.sizeAlignedTo8 = 8;
  local_3f8.outputLODs.size = 0x10;
  local_3f8.outputLODs.sizePaddedToLastFullBlock = 0x10;
  local_3f8.outputLODs.sizePaddedToSecondLastFullBlock = 0x10;
  local_3e0 = 0xd;
  local_3dc = 0xc;
  local_3d8 = 8;
  local_3d4 = 0xc;
  local_3d0 = 0x10;
  local_3cc = 8;
  local_3c8 = 0xd;
  local_3c4 = 0xc;
  local_3c0 = 8;
  local_3bc = 8;
  local_3b8 = 8;
  local_3b4 = 8;
  local_3b0 = 0xd;
  local_3ac = 0xc;
  local_3a8 = 8;
  local_3a4 = 4;
  local_3a0 = 8;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c8 = (undefined8 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x60,8);
  local_d0 = local_c8;
  local_c0 = local_c8 + 0xc;
  pLVar5 = &local_3f8;
  do {
    uVar2 = *(undefined8 *)&(pLVar5->inputLODs).sizeAlignedTo8;
    *local_c8 = *(undefined8 *)&pLVar5->inputLODs;
    local_c8[1] = uVar2;
    pPVar3 = &pLVar5->outputLODs;
    pLVar5 = pLVar5 + 1;
    local_c8[2] = *(undefined8 *)&pPVar3->sizePaddedToLastFullBlock;
    local_c8 = local_c8 + 3;
  } while (pLVar5 != &local_398);
  local_6c8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(&local_6c8);
  local_6d8._First = &local_398;
  local_398.inputLODs.size = 0xd;
  local_6d8._Last = &local_338;
  local_398.inputLODs.sizeAlignedTo4 = 0xc;
  local_398.inputLODs.sizeAlignedTo8 = 8;
  local_398.outputLODs.size = 0x10;
  local_398.outputLODs.sizePaddedToLastFullBlock = 0x10;
  local_398.outputLODs.sizePaddedToSecondLastFullBlock = 0x10;
  local_380 = 0xd;
  local_37c = 0xc;
  local_378 = 8;
  local_374 = 0xc;
  local_370 = 0x10;
  local_36c = 8;
  local_368 = 0xd;
  local_364 = 0xc;
  local_360 = 8;
  local_35c = 8;
  local_358 = 8;
  local_354 = 8;
  local_350 = 0xd;
  local_34c = 0xc;
  local_348 = 8;
  local_344 = 4;
  local_340 = 8;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
            (&local_b8,&local_6d8,
             (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)&local_6c8);
  local_6c0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(&local_6c0);
  local_6d8._First = &local_338;
  local_338.inputLODs.size = 5;
  local_6d8._Last = &local_2d8;
  local_338.inputLODs.sizeAlignedTo4 = 4;
  local_338.inputLODs.sizeAlignedTo8 = 0;
  local_338.outputLODs.size = 2;
  local_338.outputLODs.sizePaddedToLastFullBlock = 0;
  local_338.outputLODs.sizePaddedToSecondLastFullBlock = 0;
  local_320 = 5;
  local_31c = 4;
  local_314 = 2;
  local_30c = 0;
  local_308 = 5;
  local_304 = 4;
  local_2fc = 2;
  local_2f4 = 0;
  local_2f0 = 5;
  local_2ec = 4;
  local_2e4 = 2;
  local_2dc = 0;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
            (&local_98,&local_6d8,
             (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)&local_6c0);
  local_6b8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(&local_6b8);
  local_2d8.inputLODs.size = 5;
  local_2d8.inputLODs.sizeAlignedTo4 = 4;
  local_2d8.inputLODs.sizeAlignedTo8 = 0;
  local_2d8.outputLODs.size = 2;
  local_2d8.outputLODs.sizePaddedToLastFullBlock = 0;
  local_2d8.outputLODs.sizePaddedToSecondLastFullBlock = 0;
  local_2c0 = 5;
  local_2bc = 4;
  local_2b4 = 2;
  local_2ac = 0;
  local_2a8 = 5;
  local_2a4 = 4;
  local_29c = 2;
  local_294 = 0;
  local_290 = 5;
  local_28c = 4;
  local_284 = 2;
  local_27c = 0;
  local_6d8._First = &local_2d8;
  local_6d8._Last = &local_278;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
            (&local_78,&local_6d8,
             (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)&local_6b8);
  local_6b0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(&local_6b0);
  local_6d8._First = &local_278;
  local_278.inputLODs.size = 5;
  local_6d8._Last = &local_218;
  local_278.inputLODs.sizeAlignedTo4 = 4;
  local_278.inputLODs.sizeAlignedTo8 = 0;
  local_278.outputLODs.size = 4;
  local_278.outputLODs.sizePaddedToLastFullBlock = 0;
  local_278.outputLODs.sizePaddedToSecondLastFullBlock = 0;
  local_260 = 5;
  local_25c = 4;
  local_254 = 4;
  local_24c = 0;
  local_248 = 5;
  local_244 = 4;
  local_23c = 2;
  local_234 = 0;
  local_230 = 5;
  local_22c = 4;
  local_224 = 2;
  local_21c = 0;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
            (&local_58,&local_6d8,
             (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)&local_6b0);
  local_6a8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(&local_6a8);
  local_6d8._First = &local_218;
  local_218.inputLODs.size = 8;
  local_6d8._Last = (LODRegion *)&local_1b8;
  local_218.inputLODs.sizeAlignedTo4 = 8;
  local_218.inputLODs.sizeAlignedTo8 = 8;
  local_218.outputLODs.size = 0x11;
  local_218.outputLODs.sizePaddedToLastFullBlock = 0x10;
  local_218.outputLODs.sizePaddedToSecondLastFullBlock = 0x10;
  local_200 = 7;
  local_1fc = 4;
  local_1f4 = 0xf;
  local_1f0 = 0x10;
  local_1ec = 8;
  local_1e8 = 5;
  local_1e4 = 4;
  local_1dc = 9;
  local_1d8 = 0x10;
  local_1d4 = 8;
  local_1d0 = 4;
  local_1cc = 4;
  local_1c4 = 3;
  local_1c0 = 8;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
            (&local_38,&local_6d8,
             (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)&local_6a8);
  local_6d8._First = (LODRegion *)&local_1b8;
  local_6d8._Last = (LODRegion *)&stack0xffffffffffffffe8;
  std::
  vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&lodRegions,
             (initializer_list<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_>
              *)&local_6d8,&local_6a0);
  this = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
         &stack0xffffffffffffffe8;
  do {
    this = this + -1;
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Tidy(this);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__lodRegions__);
  return;
}

// `dynamic_initializer_for_'lods'' @ 141346ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__lods__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *this;
  longlong lVar6;
  undefined1 auStack_298 [32];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_278;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_268;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_260;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_258;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_250;
  ushort local_248 [4];
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_1d8;
  DefaultMemoryResource *local_1b8;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  DefaultMemoryResource *local_198;
  undefined2 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  DefaultMemoryResource *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  DefaultMemoryResource *local_158;
  undefined2 *local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  DefaultMemoryResource *local_138;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  DefaultMemoryResource *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_100;
  DefaultMemoryResource *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  DefaultMemoryResource *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  DefaultMemoryResource *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_a0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_298);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_250 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_248[0] = 1;
  local_248[1] = 1;
  local_248[2] = 1;
  local_248[3] = 1;
  local_1d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar3 = local_248;
  local_1d8._Mypair._Myval2._Myend = local_1d8._Mypair._Myval2._Myfirst + 4;
  local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_1d8._Mypair._Myval2._Mylast = uVar1;
    local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != (ushort *)&local_240);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_240 = 0x30004;
  local_23c = 0x10002;
  local_1b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_240;
  local_1a0 = local_1b0 + 4;
  local_1a8 = local_1b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_1a8 = uVar2;
    local_1a8 = local_1a8 + 1;
  } while (puVar4 != &local_238);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_238 = 0x50007;
  local_234 = 0x10004;
  local_198 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_190 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_238;
  local_180 = local_190 + 4;
  local_188 = local_190;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_188 = uVar2;
    local_188 = local_188 + 1;
  } while (puVar4 != &local_230);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_230 = 0x60008;
  local_22c = 0x30004;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_170 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_230;
  local_160 = local_170 + 4;
  local_168 = local_170;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_168 = uVar2;
    local_168 = local_168 + 1;
  } while (puVar4 != &local_228);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_228 = 0x70009;
  local_224 = 0x20004;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_150 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_228;
  local_140 = local_150 + 4;
  local_148 = local_150;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_148 = uVar2;
    local_148 = local_148 + 1;
  } while (puVar4 != &local_220);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_220 = 0x9000c;
  local_21c = 0x30007;
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_130 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_220;
  local_120 = local_130 + 4;
  local_128 = local_130;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_128 = uVar2;
    local_128 = local_128 + 1;
  } while (puVar4 != &local_218);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_218 = 0xd000e;
  local_214 = 0x9000b;
  lVar6 = 0xd;
  local_118 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_110 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar4 = &local_218;
  local_100 = local_110 + 4;
  local_108 = local_110;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_108 = uVar2;
    local_108 = local_108 + 1;
  } while (puVar4 != &local_210);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_210 = 0xc0010;
  local_20c = 0x40008;
  local_f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_f0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_210;
  local_e0 = local_f0 + 4;
  local_e8 = local_f0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_e8 = uVar2;
    local_e8 = local_e8 + 1;
  } while (puVar4 != &local_208);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_208 = 0xc0010;
  local_204 = 0x40008;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_d0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_208;
  local_c0 = local_d0 + 4;
  local_c8 = local_d0;
  do {
    *local_c8 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_c8 = local_c8 + 1;
  } while (puVar4 != &local_200);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_200 = 0x20002;
  local_1fc = 0x20002;
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_b0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_200;
  local_a0 = local_b0 + 4;
  local_a8 = local_b0;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_a8 = uVar2;
    local_a8 = local_a8 + 1;
  } while (puVar4 != (undefined4 *)local_1f8);
  local_268.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_268);
  local_278._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_1f8;
  local_1f8._0_4_ = 0x20002;
  local_278._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_1f8 + 8);
  local_1f8._4_4_ = 0x20002;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_278,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_268);
  local_260.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_260);
  local_278._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_1f8 + 8);
  local_1f8._8_4_ = 0x40004;
  local_278._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_1e8;
  local_1ec = 0x20002;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_278,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_260);
  local_258.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_258);
  local_278._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_1e8;
  local_1e8._0_4_ = 0x120016;
  local_278._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_1e8 + 8);
  local_1e8._4_4_ = 0x4000b;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_278,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_258);
  local_278._First = &local_1d8;
  local_278._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&lods,&local_278,&local_250);
  this = local_38;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )this);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__lods__);
  return;
}

// `dynamic_initializer_for_'neutralJointRotationXs'' @ 141347840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointRotationXs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 3.0;
  local_28[1] = 9.0;
  local_28[2] = 15.0;
  neutralJointRotationXs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointRotationXs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointRotationXs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointRotationXs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointRotationXs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointRotationXs._Mypair._Myval2._Myend = neutralJointRotationXs._Mypair._Myval2._Mylast + 3
  ;
  neutralJointRotationXs._Mypair._Myval2._Myfirst = neutralJointRotationXs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointRotationXs._Mypair._Myval2._Mylast = fVar1;
    neutralJointRotationXs._Mypair._Myval2._Mylast =
         neutralJointRotationXs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointRotationXs__);
  return;
}

// `dynamic_initializer_for_'neutralJointRotationYs'' @ 141347970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointRotationYs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 4.0;
  local_28[1] = 10.0;
  local_28[2] = 16.0;
  neutralJointRotationYs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointRotationYs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointRotationYs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointRotationYs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointRotationYs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointRotationYs._Mypair._Myval2._Myend = neutralJointRotationYs._Mypair._Myval2._Mylast + 3
  ;
  neutralJointRotationYs._Mypair._Myval2._Myfirst = neutralJointRotationYs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointRotationYs._Mypair._Myval2._Mylast = fVar1;
    neutralJointRotationYs._Mypair._Myval2._Mylast =
         neutralJointRotationYs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointRotationYs__);
  return;
}

// `dynamic_initializer_for_'neutralJointRotationZs'' @ 141347aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointRotationZs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 5.0;
  local_28[1] = 11.0;
  local_28[2] = 17.0;
  neutralJointRotationZs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointRotationZs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointRotationZs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointRotationZs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointRotationZs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointRotationZs._Mypair._Myval2._Myend = neutralJointRotationZs._Mypair._Myval2._Mylast + 3
  ;
  neutralJointRotationZs._Mypair._Myval2._Myfirst = neutralJointRotationZs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointRotationZs._Mypair._Myval2._Mylast = fVar1;
    neutralJointRotationZs._Mypair._Myval2._Mylast =
         neutralJointRotationZs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointRotationZs__);
  return;
}

// `dynamic_initializer_for_'neutralJointTranslationXs'' @ 141347bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointTranslationXs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 0.0;
  local_28[1] = 6.0;
  local_28[2] = 12.0;
  neutralJointTranslationXs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointTranslationXs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointTranslationXs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointTranslationXs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointTranslationXs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointTranslationXs._Mypair._Myval2._Myend =
       neutralJointTranslationXs._Mypair._Myval2._Mylast + 3;
  neutralJointTranslationXs._Mypair._Myval2._Myfirst =
       neutralJointTranslationXs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointTranslationXs._Mypair._Myval2._Mylast = fVar1;
    neutralJointTranslationXs._Mypair._Myval2._Mylast =
         neutralJointTranslationXs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointTranslationXs__);
  return;
}

// `dynamic_initializer_for_'neutralJointTranslationYs'' @ 141347d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointTranslationYs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 1.0;
  local_28[1] = 7.0;
  local_28[2] = 13.0;
  neutralJointTranslationYs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointTranslationYs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointTranslationYs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointTranslationYs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointTranslationYs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointTranslationYs._Mypair._Myval2._Myend =
       neutralJointTranslationYs._Mypair._Myval2._Mylast + 3;
  neutralJointTranslationYs._Mypair._Myval2._Myfirst =
       neutralJointTranslationYs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointTranslationYs._Mypair._Myval2._Mylast = fVar1;
    neutralJointTranslationYs._Mypair._Myval2._Mylast =
         neutralJointTranslationYs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointTranslationYs__);
  return;
}

// `dynamic_initializer_for_'neutralJointTranslationZs'' @ 141347e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__neutralJointTranslationZs__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = 2.0;
  local_28[1] = 8.0;
  local_28[2] = 14.0;
  neutralJointTranslationZs._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  neutralJointTranslationZs._Mypair._Myval2._Myfirst = (float *)0x0;
  neutralJointTranslationZs._Mypair._Myval2._Mylast = (float *)0x0;
  neutralJointTranslationZs._Mypair._Myval2._Myend = (float *)0x0;
  neutralJointTranslationZs._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  pfVar2 = local_28;
  neutralJointTranslationZs._Mypair._Myval2._Myend =
       neutralJointTranslationZs._Mypair._Myval2._Mylast + 3;
  neutralJointTranslationZs._Mypair._Myval2._Myfirst =
       neutralJointTranslationZs._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *neutralJointTranslationZs._Mypair._Myval2._Mylast = fVar1;
    neutralJointTranslationZs._Mypair._Myval2._Mylast =
         neutralJointTranslationZs._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__neutralJointTranslationZs__);
  return;
}

// `dynamic_initializer_for_'outputIndices'' @ 141347f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__outputIndices__(void)

{
  undefined2 uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var2;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar6;
  int *piVar7;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *this;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_688 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_668;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_658;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_650;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_648;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_640;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_638;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_630;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_628;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_620;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_618;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_610;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_608;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_600;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_5f8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_5f0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_5e8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_5e0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_5d8;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5d0;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5c8;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5c0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_5b8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_598;
  undefined1 local_578 [12];
  undefined4 local_56c;
  undefined1 local_568 [16];
  undefined8 local_558;
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [12];
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined1 local_518 [20];
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b8 [28];
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_488;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_468;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_448;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_428;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_408;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3e8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3c8;
  undefined8 local_3a8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3a0;
  undefined8 local_380;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_378;
  AlignedMemoryResource *local_358;
  undefined2 *local_350;
  undefined2 *local_348;
  undefined2 *local_340;
  AlignedMemoryResource *local_338;
  undefined2 *local_330;
  undefined2 *local_328;
  undefined2 *local_320;
  AlignedMemoryResource *local_318;
  undefined2 *local_310;
  undefined2 *local_308;
  undefined2 *local_300;
  AlignedMemoryResource *local_2f8;
  undefined2 *local_2f0;
  undefined2 *local_2e8;
  undefined2 *local_2e0;
  AlignedMemoryResource *local_2d8;
  undefined2 *local_2d0;
  undefined2 *local_2c8;
  undefined2 *local_2c0;
  AlignedMemoryResource *local_2b8;
  undefined2 *local_2b0;
  undefined2 *local_2a8;
  undefined2 *local_2a0;
  AlignedMemoryResource *local_298;
  undefined2 *local_290;
  undefined2 *local_288;
  undefined2 *local_280;
  AlignedMemoryResource *local_278;
  undefined2 *local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_258
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_238
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_218
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1f8
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1b8
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_198
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_178
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_158
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_138
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_118
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_f8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_688);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_5c0 = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_5d0 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_378._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_568._8_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_378._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  local_378._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &((local_378._Mypair._Myval2._Myfirst)->_Mypair)._Myval2;
  puVar4 = (undefined8 *)(local_568 + 8);
  local_378._Mypair._Myval2._Mylast = local_378._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(undefined2 *)puVar4;
    puVar4 = (undefined8 *)((longlong)puVar4 + 2);
    *(undefined2 *)&((local_378._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = uVar1;
    local_378._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_378._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while (puVar4 != &local_558);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_558._0_4_ = 0xb000a;
  local_558._4_4_ = 0xd000c;
  lVar9 = 0xd;
  local_358 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_350 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  puVar4 = &local_558;
  local_340 = local_350 + 4;
  local_348 = local_350;
  do {
    uVar1 = *(undefined2 *)puVar4;
    puVar4 = (undefined8 *)((longlong)puVar4 + 2);
    *local_348 = uVar1;
    local_348 = local_348 + 1;
  } while (puVar4 != (undefined8 *)local_550);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_518._16_4_ = 0x1f001e;
  local_504 = 0x210020;
  local_500 = 0x230022;
  local_4fc = 0x25;
  local_338 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_330 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x10,0x40);
  puVar5 = (undefined4 *)(local_518 + 0x10);
  local_320 = local_330 + 8;
  local_328 = local_330;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_328 = uVar1;
    local_328 = local_328 + 1;
  } while (puVar5 != &local_4f8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_4f8 = 0x290028;
  local_4f4 = 0x2b002a;
  local_4f0 = 0x2d002c;
  local_4ec = 0x30002f;
  local_318 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_310 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x10,0x40);
  puVar5 = &local_4f8;
  local_300 = local_310 + 8;
  local_308 = local_310;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_308 = uVar1;
    local_308 = local_308 + 1;
  } while (puVar5 != &local_4e8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_4e8 = 0x330032;
  local_4e4 = 0x350034;
  local_4e0 = 0x370036;
  local_4dc = 0x3a0039;
  local_4d8 = 0x3b;
  local_2f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2f0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x18,0x40);
  puVar5 = &local_4e8;
  local_2e0 = local_2f0 + 0xc;
  local_2e8 = local_2f0;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_2e8 = uVar1;
    local_2e8 = local_2e8 + 1;
  } while (puVar5 != &local_4d0);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_4d0 = 0x3d003c;
  local_4cc = 0x3f003e;
  local_4c8 = 0x410040;
  local_4c4 = 0x440043;
  local_4c0 = 0x460045;
  local_4bc = 0x480047;
  local_2d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2d0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x18,0x40);
  puVar5 = &local_4d0;
  local_2c0 = local_2d0 + 0xc;
  local_2c8 = local_2d0;
  do {
    uVar1 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_2c8 = uVar1;
    local_2c8 = local_2c8 + 1;
  } while (puVar5 != (undefined4 *)local_4b8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_488._Mypair._Myval1._0_4_ = 0x510050;
  local_488._Mypair._Myval1._4_4_ = 0x530052;
  local_488._Mypair._Myval2._Myfirst._0_4_ = 0x550054;
  local_488._Mypair._Myval2._Myfirst._4_4_ = 0x580057;
  local_488._Mypair._Myval2._Mylast._0_4_ = 0x5a0059;
  local_488._Mypair._Myval2._Mylast._4_4_ = 0x5c005b;
  local_488._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x5e005d;
  local_2b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x20,0x40);
  pvVar6 = &local_488;
  local_2a0 = local_2b0 + 0x10;
  local_2a8 = local_2b0;
  do {
    p_Var2 = &pvVar6->_Mypair;
    pvVar6 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    *local_2a8 = *(undefined2 *)&p_Var2->_Myval1;
    local_2a8 = local_2a8 + 1;
  } while (pvVar6 != &local_468);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_468._Mypair._Myval1._0_4_ = 0x650064;
  local_468._Mypair._Myval1._4_4_ = 0x670066;
  local_468._Mypair._Myval2._Myfirst._0_4_ = 0x690068;
  local_468._Mypair._Myval2._Myfirst._4_4_ = 0x6c006b;
  local_468._Mypair._Myval2._Mylast._0_4_ = 0x6e006d;
  local_468._Mypair._Myval2._Mylast._4_4_ = 0x70006f;
  local_468._Mypair._Myval2._Myend._0_4_ = 0x720071;
  local_468._Mypair._Myval2._Myend._4_4_ = 0x750073;
  local_298 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_290 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x20,0x40);
  pvVar6 = &local_468;
  local_280 = local_290 + 0x10;
  local_288 = local_290;
  do {
    p_Var2 = &pvVar6->_Mypair;
    pvVar6 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    *local_288 = *(undefined2 *)&p_Var2->_Myval1;
    local_288 = local_288 + 1;
  } while (pvVar6 != &local_448);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_448._Mypair._Myval1._0_4_ = 0x830082;
  local_448._Mypair._Myval1._4_4_ = 0x850084;
  local_448._Mypair._Myval2._Myfirst._0_4_ = 0x870086;
  local_448._Mypair._Myval2._Myfirst._4_4_ = 0x780089;
  local_448._Mypair._Myval2._Mylast._0_4_ = 0x7a0079;
  local_448._Mypair._Myval2._Mylast._4_4_ = 0x7c007b;
  local_448._Mypair._Myval2._Myend._0_4_ = 0x7f007d;
  local_448._Mypair._Myval2._Myend._4_4_ = 0x810080;
  local_278 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_270 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x20,0x40);
  pvVar6 = &local_448;
  local_260 = local_270 + 0x10;
  local_268 = local_270;
  do {
    *local_268 = *(undefined2 *)&(pvVar6->_Mypair)._Myval1;
    pvVar6 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    local_268 = local_268 + 1;
  } while (pvVar6 != &local_428);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_550;
  local_5d8 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_550 + 8);
  local_550._0_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x8d008c;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_258,(initializer_list<unsigned_short> *)&local_668,&local_5d8);
  local_608.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_608);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_550 + 8);
  local_550._8_8_ = 0x970096;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_540;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_238,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_608);
  local_600.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_600);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_540;
  local_540._0_4_ = 0xa500a3;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_540 + 8);
  local_540._4_4_ = 0xa400ad;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_218,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_600);
  local_658.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_658);
  local_668._First = &local_3c8;
  local_3c8._Mypair._Myval1._0_4_ = 0xb500b4;
  local_668._Last = &local_3a0;
  local_3c8._Mypair._Myval1._4_4_ = 0xb700b6;
  local_3c8._Mypair._Myval2._Myfirst._0_4_ = 0xb900b8;
  local_3c8._Mypair._Myval2._Myfirst._4_4_ = 0xbc00bb;
  local_3c8._Mypair._Myval2._Mylast._0_4_ = 0xbe00bd;
  local_3c8._Mypair._Myval2._Mylast._4_4_ = 0xc000bf;
  local_3c8._Mypair._Myval2._Myend._0_4_ = 0xc200c1;
  local_3c8._Mypair._Myval2._Myend._4_4_ = 0xc500c3;
  local_3a8 = 0xc6;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_1f8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_658);
  local_668._First = &local_378;
  local_668._Last = &local_1d8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_5b8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_668,&local_5d0);
  local_5c8 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar3 = pma::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_5c8);
  local_5f0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_5f0);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_540 + 8);
  local_540._8_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_530;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&local_1d8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_5f0);
  local_5e8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_5e8);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_568;
  local_568._0_4_ = 0xa0009;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_568 + 8);
  local_568._4_4_ = 0xc000b;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_1b8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_5e8);
  local_5e0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_5e0);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_530 + 8);
  local_530._8_4_ = 0x1c001b;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_518;
  local_524 = 0x1e001d;
  local_520 = 0x20001f;
  local_51c = 0x21;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_198,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_5e0);
  local_650.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_650);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_518;
  local_518._0_4_ = 0x250024;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_518 + 0x10);
  local_518._4_4_ = 0x270026;
  local_518._8_4_ = 0x290028;
  local_518._12_4_ = 0x2b002a;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_178,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_650);
  local_648.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_648);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_4b8;
  local_4b8._0_4_ = 0x2e002d;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_4b8 + 0x18);
  local_4b8._4_4_ = 0x30002f;
  local_4b8._8_4_ = 0x320031;
  local_4b8._12_4_ = 0x340033;
  local_4b8._16_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x35;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_158,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_648);
  local_640.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_640);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_4b8 + 0x18);
  local_4b8._24_4_ = 0x370036;
  local_668._Last = &local_488;
  local_49c = 0x390038;
  local_498 = 0x3b003a;
  local_494 = 0x3d003c;
  local_490 = 0x3f003e;
  local_48c = 0x410040;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_138,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_640);
  local_638.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_638);
  local_428._Mypair._Myval1._0_4_ = 0x490048;
  local_428._Mypair._Myval1._4_4_ = 0x4b004a;
  local_428._Mypair._Myval2._Myfirst._0_4_ = 0x4d004c;
  local_428._Mypair._Myval2._Myfirst._4_4_ = 0x4f004e;
  local_668._First = &local_428;
  local_428._Mypair._Myval2._Mylast._0_4_ = 0x510050;
  local_668._Last = &local_408;
  local_428._Mypair._Myval2._Mylast._4_4_ = 0x530052;
  local_428._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x550054;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_118,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_638);
  local_630.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_630);
  local_668._First = &local_408;
  local_408._Mypair._Myval1._0_4_ = 0x5b005a;
  local_668._Last = &local_3e8;
  local_408._Mypair._Myval1._4_4_ = 0x5d005c;
  local_408._Mypair._Myval2._Myfirst._0_4_ = 0x5f005e;
  local_408._Mypair._Myval2._Myfirst._4_4_ = 0x610060;
  local_408._Mypair._Myval2._Mylast._0_4_ = 0x630062;
  local_408._Mypair._Myval2._Mylast._4_4_ = 0x650064;
  local_408._Mypair._Myval2._Myend._0_4_ = 0x670066;
  local_408._Mypair._Myval2._Myend._4_4_ = 0x690068;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_f8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_630);
  local_620.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_620);
  local_668._First = &local_3e8;
  local_3e8._Mypair._Myval1._0_4_ = 0x760075;
  local_668._Last = &local_3c8;
  local_3e8._Mypair._Myval1._4_4_ = 0x780077;
  local_3e8._Mypair._Myval2._Myfirst._0_4_ = 0x7a0079;
  local_3e8._Mypair._Myval2._Myfirst._4_4_ = 0x6c007b;
  local_3e8._Mypair._Myval2._Mylast._0_4_ = 0x6e006d;
  local_3e8._Mypair._Myval2._Mylast._4_4_ = 0x70006f;
  local_3e8._Mypair._Myval2._Myend._0_4_ = 0x720071;
  local_3e8._Mypair._Myval2._Myend._4_4_ = 0x740073;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_d8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_620);
  local_618.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_618);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_530;
  local_530._0_8_ =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x7f007e;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_530 + 8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_b8,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_618);
  local_610.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_610);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_578;
  local_578._0_8_ =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x880087;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_578 + 8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_610);
  local_5f8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_5f8);
  local_668._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_578 + 8);
  local_578._8_4_ = 0x950093;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_568;
  local_56c = 0x94009c;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_5f8);
  local_628.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_628);
  local_668._First = &local_3a0;
  local_3a0._Mypair._Myval1._0_4_ = 0xa300a2;
  local_668._Last = &local_378;
  local_3a0._Mypair._Myval1._4_4_ = 0xa500a4;
  local_3a0._Mypair._Myval2._Myfirst._0_4_ = 0xa700a6;
  local_3a0._Mypair._Myval2._Myfirst._4_4_ = 0xa900a8;
  local_3a0._Mypair._Myval2._Mylast._0_4_ = 0xab00aa;
  local_3a0._Mypair._Myval2._Mylast._4_4_ = 0xad00ac;
  local_3a0._Mypair._Myval2._Myend._0_4_ = 0xaf00ae;
  local_3a0._Mypair._Myval2._Myend._4_4_ = 0xb100b0;
  local_380 = 0xb2;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_668,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_628);
  local_668._First = &local_1d8;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_598,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_668,pPVar3);
  local_668._First = &local_5b8;
  local_668._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_578;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&outputIndices,&local_668,&local_5c0);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_598);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_5b8);
  this = local_38;
  lVar8 = 0xd;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)this);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pvVar6 = &local_1d8;
  do {
    pvVar6 = pvVar6 + -1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)pvVar6);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  atexit(_dynamic_atexit_destructor_for__outputIndices__);
  return;
}

// `dynamic_initializer_for_'outputIndices'' @ 141348f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::unoptimized::_dynamic_initializer_for__outputIndices__(void)

{
  undefined2 uVar1;
  _Compressed_pair<pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<unsigned_short>_>,0>
  *p_Var2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar5;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar6;
  int *piVar7;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *this;
  longlong lVar8;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined1 local_2f4 [12];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_2e8;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_2d8;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_2d0;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_2c8;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0 [12];
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined2 local_29a;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined2 local_278;
  undefined4 local_276;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_238;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_218;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_1f8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc [12];
  undefined2 *local_1c0;
  undefined2 *local_1b8;
  undefined2 *local_1b0;
  DefaultMemoryResource *local_1a8;
  undefined2 *local_1a0;
  undefined2 *local_198;
  undefined2 *local_190;
  DefaultMemoryResource *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  DefaultMemoryResource *local_168;
  undefined2 *local_160;
  undefined2 *local_158;
  undefined2 *local_150;
  DefaultMemoryResource *local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  undefined2 *local_130;
  DefaultMemoryResource *local_128;
  undefined2 *local_120;
  undefined2 *local_118;
  undefined2 *local_110;
  DefaultMemoryResource *local_108;
  undefined2 *local_100;
  undefined2 *local_f8;
  undefined2 *local_f0;
  DefaultMemoryResource *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  DefaultMemoryResource *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  DefaultMemoryResource *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined2 *local_90;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_68;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_48;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_28 [2];
  
  pvVar6 = &local_218;
  local_28[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_318);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2c0 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1cc._4_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1c0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,8);
  local_1b8 = local_1c0 + 1;
  *local_1c0 = 0;
  local_1b0 = local_1b8;
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2b8 = 0xa0009;
  local_2b4 = 0xc000b;
  local_1a8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1a0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,8);
  puVar3 = &local_2b8;
  local_190 = local_1a0 + 4;
  local_198 = local_1a0;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_198 = uVar1;
    local_198 = local_198 + 1;
  } while (puVar3 != (undefined4 *)local_2b0);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2b0._8_4_ = 0x1c001b;
  local_29c = 0x21;
  local_2a4 = 0x1e001d;
  local_2a0 = 0x20001f;
  local_188 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_180 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0xe,8);
  puVar4 = (undefined2 *)(local_2b0 + 8);
  local_170 = local_180 + 7;
  local_178 = local_180;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_178 = uVar1;
    local_178 = local_178 + 1;
  } while (puVar4 != &local_29a);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_298 = 0x250024;
  local_294 = 0x270026;
  local_290 = 0x290028;
  local_28c = 0x2b002a;
  local_168 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_160 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x10,8);
  puVar3 = &local_298;
  local_150 = local_160 + 8;
  local_158 = local_160;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_158 = uVar1;
    local_158 = local_158 + 1;
  } while (puVar3 != &local_288);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_288 = 0x2e002d;
  local_278 = 0x35;
  local_284 = 0x30002f;
  local_280 = 0x320031;
  local_27c = 0x340033;
  local_148 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_140 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x12,8);
  puVar3 = &local_288;
  local_130 = local_140 + 9;
  local_138 = local_140;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_138 = uVar1;
    local_138 = local_138 + 1;
  } while (puVar3 != &local_276);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_270 = 0x370036;
  local_26c = 0x390038;
  local_268 = 0x3b003a;
  local_264 = 0x3d003c;
  local_260 = 0x3f003e;
  local_25c = 0x410040;
  local_128 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_120 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x18,8);
  puVar3 = &local_270;
  local_110 = local_120 + 0xc;
  local_118 = local_120;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_118 = uVar1;
    local_118 = local_118 + 1;
  } while (puVar3 != &local_258);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_258 = 0x490048;
  local_254 = 0x4b004a;
  local_250 = 0x4d004c;
  local_24c = 0x4f004e;
  local_248 = 0x510050;
  local_244 = 0x530052;
  local_240 = 0x550054;
  local_108 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_100 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x1c,8);
  puVar3 = &local_258;
  local_f0 = local_100 + 0xe;
  local_f8 = local_100;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_f8 = uVar1;
    local_f8 = local_f8 + 1;
  } while (puVar3 != &local_23c);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_238._Mypair._Myval1._0_4_ = 0x5b005a;
  local_238._Mypair._Myval1._4_4_ = 0x5d005c;
  local_238._Mypair._Myval2._Myfirst._0_4_ = 0x5f005e;
  local_238._Mypair._Myval2._Myfirst._4_4_ = 0x610060;
  local_238._Mypair._Myval2._Mylast._0_4_ = 0x630062;
  local_238._Mypair._Myval2._Mylast._4_4_ = 0x650064;
  local_238._Mypair._Myval2._Myend._0_4_ = 0x670066;
  local_238._Mypair._Myval2._Myend._4_4_ = 0x690068;
  local_e8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x20,8);
  pvVar5 = &local_238;
  local_d0 = local_e0 + 0x10;
  local_d8 = local_e0;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x2;
    *local_d8 = *(undefined2 *)&p_Var2->_Myval1;
    local_d8 = local_d8 + 1;
  } while (pvVar5 != pvVar6);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_218._Mypair._Myval1._0_4_ = 0x760075;
  local_218._Mypair._Myval1._4_4_ = 0x780077;
  local_218._Mypair._Myval2._Myfirst._0_4_ = 0x7a0079;
  local_218._Mypair._Myval2._Myfirst._4_4_ = 0x6c007b;
  local_218._Mypair._Myval2._Mylast._0_4_ = 0x6e006d;
  local_218._Mypair._Myval2._Mylast._4_4_ = 0x70006f;
  local_218._Mypair._Myval2._Myend._0_4_ = 0x720071;
  local_218._Mypair._Myval2._Myend._4_4_ = 0x740073;
  local_c8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x20,8);
  local_b0 = local_c0 + 0x10;
  local_b8 = local_c0;
  do {
    *local_b8 = *(undefined2 *)&(pvVar6->_Mypair)._Myval1;
    pvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)&(pvVar6->_Mypair)._Myval1.field_0x2;
    local_b8 = local_b8 + 1;
  } while (pvVar6 != &local_1f8);
  if (*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2f8 = 0x7f007e;
  local_a8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_a0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  puVar3 = &local_2f8;
  local_90 = local_a0 + 2;
  local_98 = local_a0;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_98 = uVar1;
    local_98 = local_98 + 1;
  } while (puVar3 != (undefined4 *)local_2f4);
  local_2d8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_2d8);
  local_2e8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_2f4;
  local_2f4._0_4_ = 0x880087;
  local_2e8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_2f4 + 4);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_88,(initializer_list<unsigned_short> *)&local_2e8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_2d8);
  local_2d0.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_2d0);
  local_2e8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_2b0;
  local_2b0._0_4_ = 0x950093;
  local_2e8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_2b0 + 8);
  local_2b0._4_4_ = 0x94009c;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_68,(initializer_list<unsigned_short> *)&local_2e8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_2d0);
  local_2c8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_2c8);
  local_2e8._First = &local_1f8;
  local_1f8._Mypair._Myval1._0_4_ = 0xa20099;
  local_2e8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_1cc;
  local_1f8._Mypair._Myval1._4_4_ = 0xa400a3;
  local_1f8._Mypair._Myval2._Myfirst._0_4_ = 0xa600a5;
  local_1f8._Mypair._Myval2._Myfirst._4_4_ = 0xa800a7;
  local_1f8._Mypair._Myval2._Mylast._0_4_ = 0xaa00a9;
  local_1f8._Mypair._Myval2._Mylast._4_4_ = 0x9b009a;
  local_1f8._Mypair._Myval2._Myend._0_4_ = 0xac00ab;
  local_1f8._Mypair._Myval2._Myend._4_4_ = 0xae00ad;
  local_1d8 = 0xb000af;
  local_1d4 = 0xb200b1;
  local_1d0 = 0x9d009c;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&local_48,(initializer_list<unsigned_short> *)&local_2e8,
             (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_2c8);
  local_2e8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (local_1cc + 4);
  local_2e8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&outputIndices,&local_2e8,&local_2c0);
  this = local_28;
  lVar8 = 0xd;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )this);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  atexit(_dynamic_atexit_destructor_for__outputIndices__);
  return;
}

// `dynamic_initializer_for_'outputRotationIndices'' @ 1413498d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__outputRotationIndices__(void)

{
  undefined2 uVar1;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar2;
  undefined4 *puVar3;
  int *piVar4;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *this;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *this_00;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_408 [32];
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4 [3];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_3c8;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3b8;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3b0;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3a8 [2];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_398;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_378;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_358;
  AlignedMemoryResource *local_338;
  undefined2 *local_330;
  undefined2 *local_328;
  undefined2 *puStack_320;
  AlignedMemoryResource *local_318;
  undefined2 *local_310;
  undefined2 *local_308;
  undefined2 *puStack_300;
  AlignedMemoryResource *local_2f8;
  undefined2 *local_2f0;
  undefined2 *local_2e8;
  undefined2 *puStack_2e0;
  AlignedMemoryResource *local_2d8;
  undefined2 *local_2d0;
  undefined2 *local_2c8;
  undefined2 *puStack_2c0;
  AlignedMemoryResource *local_2b8;
  undefined2 *local_2b0;
  undefined2 *local_2a8;
  undefined2 *puStack_2a0;
  AlignedMemoryResource *local_298;
  undefined2 *local_290;
  undefined2 *local_288;
  undefined2 *puStack_280;
  AlignedMemoryResource *local_278;
  undefined2 *local_270;
  undefined2 *local_268;
  undefined2 *puStack_260;
  AlignedMemoryResource *local_258;
  undefined2 *local_250;
  undefined2 *local_248;
  undefined2 *puStack_240;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  AlignedMemoryResource *local_1f8;
  undefined2 *local_1f0;
  undefined2 *local_1e8;
  undefined2 *puStack_1e0;
  AlignedMemoryResource *local_1d8;
  undefined2 *local_1d0;
  undefined2 *local_1c8;
  undefined2 *puStack_1c0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1b8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_18;
  
  local_18 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
              )(__security_cookie.value ^ (ulonglong)auStack_408);
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3a8[0] = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3b8 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_358._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>
            ((PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_358);
  local_358._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_358._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_358._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_338 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_330 = (undefined2 *)0x0;
  local_328 = (undefined2 *)0x0;
  puStack_320 = (undefined2 *)0x0;
  local_330 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,0x40);
  lVar6 = 0xd;
  local_328 = local_330 + 1;
  *local_330 = 0xd;
  puStack_320 = local_328;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_318 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_310 = (undefined2 *)0x0;
  local_308 = (undefined2 *)0x0;
  puStack_300 = (undefined2 *)0x0;
  local_310 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,0x40);
  local_308 = local_310 + 1;
  *local_310 = 0x21;
  puStack_300 = local_308;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2f0 = (undefined2 *)0x0;
  local_2e8 = (undefined2 *)0x0;
  puStack_2e0 = (undefined2 *)0x0;
  local_2f0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,0x40);
  local_2e8 = local_2f0 + 1;
  *local_2f0 = 0x2b;
  puStack_2e0 = local_2e8;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2d0 = (undefined2 *)0x0;
  local_2c8 = (undefined2 *)0x0;
  puStack_2c0 = (undefined2 *)0x0;
  local_2d0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,0x40);
  local_2c8 = local_2d0 + 1;
  *local_2d0 = 0x35;
  puStack_2c0 = local_2c8;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_2b0 = (undefined2 *)0x0;
  local_2a8 = (undefined2 *)0x0;
  puStack_2a0 = (undefined2 *)0x0;
  local_2b0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,2,0x40);
  local_2a8 = local_2b0 + 1;
  *local_2b0 = 0x3f;
  puStack_2a0 = local_2a8;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3e8 = 0x5d0053;
  local_298 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_290 = (undefined2 *)0x0;
  local_288 = (undefined2 *)0x0;
  puStack_280 = (undefined2 *)0x0;
  local_290 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,4,0x40);
  puVar3 = &local_3e8;
  puStack_280 = local_290 + 2;
  local_288 = local_290;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_288 = uVar1;
    local_288 = local_288 + 1;
  } while (puVar3 != &local_3e4);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3e4 = 0x710067;
  local_278 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_270 = (undefined2 *)0x0;
  local_268 = (undefined2 *)0x0;
  puStack_260 = (undefined2 *)0x0;
  local_270 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,4,0x40);
  puVar3 = &local_3e4;
  puStack_260 = local_270 + 2;
  local_268 = local_270;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_268 = uVar1;
    local_268 = local_268 + 1;
  } while (puVar3 != &local_3e0);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3e0 = 0x7b0085;
  local_258 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_250 = (undefined2 *)0x0;
  local_248 = (undefined2 *)0x0;
  puStack_240 = (undefined2 *)0x0;
  local_250 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,4,0x40);
  puVar3 = &local_3e0;
  puStack_240 = local_250 + 2;
  local_248 = local_250;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_248 = uVar1;
    local_248 = local_248 + 1;
  } while (puVar3 != &local_3dc);
  local_238.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_238);
  local_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_218);
  local_208 = 0;
  uStack_200 = 0;
  local_210 = 0;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3dc = 0xa300ad;
  local_1f8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1f0 = (undefined2 *)0x0;
  local_1e8 = (undefined2 *)0x0;
  puStack_1e0 = (undefined2 *)0x0;
  local_1f0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,4,0x40);
  puVar3 = &local_3dc;
  puStack_1e0 = local_1f0 + 2;
  local_1e8 = local_1f0;
  do {
    *local_1e8 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    local_1e8 = local_1e8 + 1;
  } while (puVar3 != &local_3d8);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3d8 = 0xc100b7;
  local_1d8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1d0 = (undefined2 *)0x0;
  local_1c8 = (undefined2 *)0x0;
  puStack_1c0 = (undefined2 *)0x0;
  local_1d0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,4,0x40);
  puVar3 = &local_3d8;
  puStack_1c0 = local_1d0 + 2;
  local_1c8 = local_1d0;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_1c8 = uVar1;
    local_1c8 = local_1c8 + 1;
  } while (puVar3 != local_3d4);
  local_3c8._First = &local_358;
  local_3c8._Last = &local_1b8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_398,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_3c8,&local_3b8);
  local_3b0 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar2 = pma::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_3b0);
  local_1b8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>
            ((PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_1b8);
  local_1b8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_1b8._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_1b8._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_198.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_198);
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_178);
  local_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_158);
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_138);
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_118);
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_f8);
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_d8);
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_b8);
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_98);
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_78);
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_58);
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_38);
  local_3c8._First = &local_1b8;
  local_30 = 0;
  local_3c8._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)&stack0xffffffffffffffe8;
  local_28 = 0;
  uStack_20 = 0;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_378,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_3c8,pPVar2);
  local_3c8._First = &local_398;
  local_3c8._Last = &local_358;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&outputRotationIndices,&local_3c8,local_3a8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_378);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_398);
  this = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&stack0xffffffffffffffe8;
  lVar5 = 0xd;
  do {
    this = this + -1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy(this);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  this_00 = &local_1b8;
  do {
    this_00 = this_00 + -1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)this_00);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  atexit(_dynamic_atexit_destructor_for__outputRotationIndices__);
  return;
}

// `dynamic_initializer_for_'outputRotationLODs'' @ 14134a3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl block4::optimized::_dynamic_initializer_for__outputRotationLODs__(void)

{
  undefined2 uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var2;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar3;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar4;
  _Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
  *p_Var5;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> **ppvVar6
  ;
  undefined8 *puVar7;
  int *piVar8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *this;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_478 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_458;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_448;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_440;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_438;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_430;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_428;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_420;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_418;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3f8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3d8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 local_388 [12];
  undefined4 local_37c;
  undefined1 local_378 [16];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_368;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1c8;
  AlignedMemoryResource *local_1a8;
  undefined2 *local_1a0;
  undefined2 *local_198;
  undefined2 *local_190;
  AlignedMemoryResource *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  AlignedMemoryResource *local_168;
  undefined2 *local_160;
  undefined2 *local_158;
  undefined2 *local_150;
  AlignedMemoryResource *local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  undefined2 *local_130;
  AlignedMemoryResource *local_128;
  undefined2 *local_120;
  undefined2 *local_118;
  undefined2 *local_110;
  AlignedMemoryResource *local_108;
  undefined2 *local_100;
  undefined2 *local_f8;
  undefined2 *local_f0;
  AlignedMemoryResource *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  AlignedMemoryResource *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  AlignedMemoryResource *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined2 *local_90;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_68;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_48;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_28 [2];
  
  local_28[0] = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_478);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_420 = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_430 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1c8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_3d8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  local_1c8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  pvVar4 = &local_3d8;
  local_1c8._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &((local_1c8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2;
  local_1c8._Mypair._Myval2._Mylast = local_1c8._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar4->_Mypair;
    pvVar4 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar4->_Mypair)._Myval1.field_0x2;
    *(undefined2 *)&((local_1c8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined2 *)&p_Var2->_Myval1;
    local_1c8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_1c8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
            *)pvVar4 != &local_3d8._Mypair._Myval2);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3d8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x1;
  local_1a8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_1a0 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  p_Var5 = &local_3d8._Mypair._Myval2;
  local_190 = local_1a0 + 4;
  local_198 = local_1a0;
  do {
    ppvVar6 = &p_Var5->_Myfirst;
    p_Var5 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
              *)((longlong)&p_Var5->_Myfirst + 2);
    *local_198 = *(undefined2 *)ppvVar6;
    local_198 = local_198 + 1;
  } while (p_Var5 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                      *)&local_3d8._Mypair._Myval2._Mylast);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3d8._Mypair._Myval2._Mylast._0_4_ = 0x10001;
  local_3d8._Mypair._Myval2._Mylast._4_4_ = 1;
  local_188 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_180 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  ppvVar6 = &local_3d8._Mypair._Myval2._Mylast;
  local_170 = local_180 + 4;
  local_178 = local_180;
  do {
    uVar1 = *(undefined2 *)ppvVar6;
    ppvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar6 + 2);
    *local_178 = uVar1;
    local_178 = local_178 + 1;
  } while (ppvVar6 != &local_3d8._Mypair._Myval2._Myend);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3d8._Mypair._Myval2._Myend._0_4_ = 0x10001;
  local_3d8._Mypair._Myval2._Myend._4_4_ = 1;
  local_168 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_160 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  ppvVar6 = &local_3d8._Mypair._Myval2._Myend;
  local_150 = local_160 + 4;
  local_158 = local_160;
  do {
    uVar1 = *(undefined2 *)ppvVar6;
    ppvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar6 + 2);
    *local_158 = uVar1;
    local_158 = local_158 + 1;
  } while (ppvVar6 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            **)&local_3b8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3b8._0_4_ = 0x10001;
  local_3b8._4_4_ = 1;
  local_148 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_140 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  puVar7 = &local_3b8;
  local_130 = local_140 + 4;
  local_138 = local_140;
  do {
    uVar1 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    *local_138 = uVar1;
    local_138 = local_138 + 1;
  } while (puVar7 != &local_3b0);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3b0._0_4_ = 0x10001;
  local_3b0._4_4_ = 1;
  local_128 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_120 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  puVar7 = &local_3b0;
  local_110 = local_120 + 4;
  local_118 = local_120;
  do {
    uVar1 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    *local_118 = uVar1;
    local_118 = local_118 + 1;
  } while (puVar7 != &local_3a8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3a8._0_4_ = 0x20002;
  local_3a8._4_4_ = 0x10001;
  local_108 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_100 = (undefined2 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,8,0x40);
  puVar7 = &local_3a8;
  local_f0 = local_100 + 4;
  local_f8 = local_100;
  do {
    uVar1 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    *local_f8 = uVar1;
    local_f8 = local_f8 + 1;
  } while (puVar7 != &local_3a0);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3a0._0_4_ = 0x10002;
  local_3a0._4_4_ = 0x10001;
  local_e8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,0x40);
  puVar7 = &local_3a0;
  local_d0 = local_e0 + 4;
  local_d8 = local_e0;
  do {
    uVar1 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    *local_d8 = uVar1;
    local_d8 = local_d8 + 1;
  } while (puVar7 != &local_398);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_398._0_4_ = 0x20002;
  local_398._4_4_ = 0x10001;
  local_c8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,0x40);
  puVar7 = &local_398;
  local_b0 = local_c0 + 4;
  local_b8 = local_c0;
  do {
    *local_b8 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    local_b8 = local_b8 + 1;
  } while (puVar7 != &local_390);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_390 = 0;
  local_a8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_a0 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,0x40);
  local_90 = local_a0 + 4;
  puVar7 = &local_390;
  local_98 = local_a0;
  do {
    uVar1 = *(undefined2 *)puVar7;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    *local_98 = uVar1;
    local_98 = local_98 + 1;
  } while (puVar7 != (undefined8 *)local_388);
  local_448.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_448);
  local_458._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_388;
  local_388._0_8_ = 0;
  local_458._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_388 + 8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_88,(initializer_list<unsigned_short> *)&local_458,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_448);
  local_440.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_440);
  local_458._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_388 + 8);
  local_388._8_4_ = 0x20002;
  local_37c = 0x20002;
  local_458._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_378;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_68,(initializer_list<unsigned_short> *)&local_458,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_440);
  local_438.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_438);
  local_378._0_4_ = 0x20002;
  local_458._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_378 + 8);
  local_378._4_4_ = 1;
  local_458._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_378;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_48,(initializer_list<unsigned_short> *)&local_458,
             (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_438);
  local_458._First = &local_1c8;
  local_458._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_418,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_458,&local_430);
  local_428 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar3 = pma::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_428);
  local_368._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>
            ((PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_368);
  local_368._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_368._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_368._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  local_348.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_348);
  local_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_328);
  local_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_308);
  local_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_2e8);
  local_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_2c8);
  local_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_2a8);
  local_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_288);
  local_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_268);
  local_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_248);
  local_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_228);
  local_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_208);
  local_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_1e8);
  local_458._First = &local_368;
  local_1e0 = 0;
  local_458._Last = &local_1c8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_3f8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_458,pPVar3);
  local_458._First = &local_418;
  local_458._Last = &local_3d8;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&outputRotationLODs,&local_458,&local_420);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_3f8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_418);
  lVar10 = 0xd;
  pvVar4 = &local_1c8;
  lVar9 = 0xd;
  do {
    pvVar4 = pvVar4 + -1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)pvVar4);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  this = local_28;
  do {
    this = this + -4;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)this);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  atexit(_dynamic_atexit_destructor_for__outputRotationLODs__);
  return;
}

// `dynamic_initializer_for_'values'' @ 14134aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl block4::input::_dynamic_initializer_for__values__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_48 = ___xmm_4080000040400000400000003f800000;
  uStack_40 = _UNK_15076c058;
  local_18 = 0x41500000;
  local_28 = ___xmm_41400000413000000000000041100000;
  uStack_20 = _UNK_152884cf8;
  values._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  values._Mypair._Myval2._Myend = (float *)0x0;
  values._Mypair._Myval2._Myfirst = (float *)0x0;
  values._Mypair._Myval2._Mylast = (float *)0x0;
  local_38 = ___xmm_4100000040e0000040c0000000000000;
  uStack_30 = _UNK_152884ca8;
  values._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x34,8);
  pfVar2 = (float *)&local_48;
  values._Mypair._Myval2._Myend = values._Mypair._Myval2._Mylast + 0xd;
  values._Mypair._Myval2._Myfirst = values._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *values._Mypair._Myval2._Mylast = fVar1;
    values._Mypair._Myval2._Mylast = values._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != &local_14);
  atexit(_dynamic_atexit_destructor_for__values__);
  return;
}

// `dynamic_initializer_for_'values'' @ 14134b010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl block4::unoptimized::_dynamic_initializer_for__values__(void)

{
  undefined4 uVar1;
  _Compressed_pair<pma::PolyAllocator<float,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<float>_>,0>
  *p_Var2;
  float **ppfVar3;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  PolyAllocator<float,8,pma::DefaultMemoryResource> *pPVar14;
  undefined8 *puVar15;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar16;
  _Vector_val<std::_Simple_types<float>_> *p_Var17;
  longlong lVar18;
  undefined1 auStack_1858 [32];
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_1838;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1828;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1820;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1818;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1810;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1808;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1800;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_17f8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_17f0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_17e8;
  undefined4 local_17c8;
  undefined4 local_17c4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_17c0;
  undefined4 local_17a0;
  undefined4 local_179c;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1798;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1778;
  float *pfStack_1770;
  undefined4 local_1768;
  undefined1 local_1764 [12];
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1758;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  undefined8 uStack_1710;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1708;
  DefaultMemoryResource *local_16e8;
  undefined4 *local_16e0;
  undefined4 *local_16d8;
  undefined4 *local_16d0;
  DefaultMemoryResource *local_16c8;
  undefined4 *local_16c0;
  undefined4 *local_16b8;
  undefined4 *local_16b0;
  DefaultMemoryResource *local_16a8;
  undefined4 *local_16a0;
  undefined4 *local_1698;
  undefined4 *local_1690;
  DefaultMemoryResource *local_1688;
  undefined4 *local_1680;
  undefined4 *local_1678;
  undefined4 *local_1670;
  DefaultMemoryResource *local_1668;
  undefined4 *local_1660;
  undefined4 *local_1658;
  undefined4 *local_1650;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1648;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1628;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1608;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_15e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_15c8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_15a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1588;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1568;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1548;
  float *pfStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined8 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined8 uStack_1480;
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined4 local_1408;
  undefined4 local_1404;
  undefined4 local_1400;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_13fc;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined4 local_1158;
  undefined8 local_1154;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1148;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_1128;
  float *pfStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_fa8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_f88;
  float *pfStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined4 local_cd8;
  undefined4 local_cd4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_cd0;
  float *pfStack_cb0;
  float *local_ca8;
  float *pfStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_a58;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_a38;
  float *pfStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_878;
  float *pfStack_870;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_868;
  float *pfStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_718;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_6f8;
  float *pfStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_5a8;
  float *pfStack_5a0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_598;
  float *pfStack_590;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_588;
  float *pfStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_3d8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_68 [3];
  
  local_68[0]._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_1858);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_17f0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pfVar5 = _UNK_15076b1f8;
  PVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  local_1768 = 0x3f800000;
  local_1708._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1798._Mypair._Myval1 = ___xmm_3f8000003f8000003f8000003f800000;
  local_1798._Mypair._Myval2._Myfirst = _UNK_15076b1f8;
  local_1798._Mypair._Myval2._Mylast = (float *)___xmm_3f8000003f8000003f8000003f800000;
  local_1798._Mypair._Myval2._Myend = _UNK_15076b1f8;
  local_1778 = ___xmm_3f8000003f8000003f8000003f800000;
  pfStack_1770 = _UNK_15076b1f8;
  local_1708._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x34,8);
  pvVar16 = &local_1798;
  local_1708._Mypair._Myval2._Myend = local_1708._Mypair._Myval2._Myfirst + 0xd;
  local_1708._Mypair._Myval2._Mylast = local_1708._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar16->_Mypair;
    pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
              &(pvVar16->_Mypair)._Myval1.field_0x4;
    *local_1708._Mypair._Myval2._Mylast = *(float *)&p_Var2->_Myval1;
    local_1708._Mypair._Myval2._Mylast = local_1708._Mypair._Myval2._Mylast + 1;
  } while (pvVar16 !=
           (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)local_1764);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_13fc._Mypair._4_8_ = ___xmm_40000000400000004000000040000000;
  local_13fc._Mypair._Myval2._4_8_ = _UNK_15076ba38;
  local_13fc._Mypair._Myval2._12_8_ = ___xmm_40000000400000004000000040000000;
  stack0xffffffffffffec20 = _UNK_15076ba38;
  local_13d8 = ___xmm_40000000400000004000000040000000;
  uStack_13d0 = _UNK_15076ba38;
  local_13c8 = ___xmm_40400000404000004040000040000000;
  uStack_13c0 = _UNK_152884be8;
  local_13b8 = ___xmm_40400000404000004040000040400000;
  uStack_13b0 = _UNK_15076be98;
  local_13a8 = ___xmm_40400000404000004040000040400000;
  uStack_13a0 = _UNK_15076be98;
  local_1398 = ___xmm_40800000408000004040000040400000;
  uStack_1390 = _UNK_152884c08;
  local_1388 = ___xmm_40800000408000004080000040800000;
  uStack_1380 = _UNK_1509253f8;
  local_1378 = ___xmm_40800000408000004080000040800000;
  uStack_1370 = _UNK_1509253f8;
  local_1368 = ___xmm_40a00000408000004080000040800000;
  uStack_1360 = _UNK_152874768;
  local_1358 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1350 = _UNK_150925428;
  local_1348 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1340 = _UNK_150925428;
  local_1338 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1330 = _UNK_150925428;
  local_16e8 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_16e0 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0xd0,8);
  puVar15 = (undefined8 *)&local_13fc._Mypair._Myval1.field_0x4;
  local_16d0 = local_16e0 + 0x34;
  local_16d8 = local_16e0;
  do {
    uVar1 = *(undefined4 *)puVar15;
    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
    *local_16d8 = uVar1;
    local_16d8 = local_16d8 + 1;
  } while (puVar15 != &local_1328);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1568._Mypair._Myval1 = ___xmm_40c0000040c0000040c0000040c00000;
  local_1568._Mypair._Myval2._Myfirst = _UNK_152884c58;
  local_1568._Mypair._Myval2._Mylast = (float *)___xmm_40c0000040c0000040c0000040c00000;
  local_1568._Mypair._Myval2._Myend = _UNK_152884c58;
  local_1548 = ___xmm_40c0000040c0000040c0000040c00000;
  pfStack_1540 = _UNK_152884c58;
  local_1538 = ___xmm_40e0000040e0000040e0000040c00000;
  uStack_1530 = _UNK_152884c78;
  local_1508 = ___xmm_410000004100000040e0000040e00000;
  uStack_1500 = _UNK_1528747c8;
  local_1528 = ___xmm_40e0000040e0000040e0000040e00000;
  uStack_1520 = _UNK_152884c88;
  local_1518 = ___xmm_40e0000040e0000040e0000040e00000;
  uStack_1510 = _UNK_152884c88;
  local_14d8 = ___xmm_41100000410000004100000041000000;
  uStack_14d0 = _UNK_152884cc8;
  local_14f8 = ___xmm_41000000410000004100000041000000;
  uStack_14f0 = _UNK_15093f338;
  local_14e8 = ___xmm_41000000410000004100000041000000;
  uStack_14e0 = _UNK_15093f338;
  local_1498 = ___xmm_41200000412000004120000041200000;
  uStack_1490 = _UNK_15076c1d8;
  local_1488 = ___xmm_41200000412000004120000041200000;
  uStack_1480 = _UNK_15076c1d8;
  local_1478 = ___xmm_41200000412000004120000041200000;
  uStack_1470 = _UNK_15076c1d8;
  local_14c8 = ___xmm_41100000411000004110000041100000;
  uStack_14c0 = _UNK_152884cd8;
  local_14b8 = ___xmm_41100000411000004110000041100000;
  uStack_14b0 = _UNK_152884cd8;
  local_14a8 = ___xmm_41100000411000004110000041100000;
  uStack_14a0 = _UNK_152884cd8;
  local_1468 = ___xmm_41300000413000004130000041200000;
  uStack_1460 = _UNK_152884ce8;
  local_1458 = ___xmm_41300000413000004130000041300000;
  uStack_1450 = _UNK_150978c08;
  local_1448 = ___xmm_41300000413000004130000041300000;
  uStack_1440 = _UNK_150978c08;
  local_1438 = ___xmm_41400000414000004130000041300000;
  uStack_1430 = _UNK_152884d08;
  local_1428 = ___xmm_41400000414000004140000041400000;
  uStack_1420 = _UNK_152884d18;
  local_1418 = ___xmm_41400000414000004140000041400000;
  uStack_1410 = _UNK_152884d18;
  local_1408 = 0x41400000;
  local_1404 = 0x41400000;
  local_1400 = 0x41400000;
  local_16c8 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_16c0 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x16c,8);
  pvVar16 = &local_1568;
  local_16b0 = local_16c0 + 0x5b;
  local_16b8 = local_16c0;
  do {
    p_Var2 = &pvVar16->_Mypair;
    pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
              &(pvVar16->_Mypair)._Myval1.field_0x4;
    *local_16b8 = *(undefined4 *)&p_Var2->_Myval1;
    local_16b8 = local_16b8 + 1;
  } while (pvVar16 != &local_13fc);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1148._Mypair._Myval1 = ___xmm_41500000415000004150000041500000;
  local_1148._Mypair._Myval2._Myfirst = _UNK_152884d28;
  local_1148._Mypair._Myval2._Mylast = (float *)___xmm_41500000415000004150000041500000;
  local_1148._Mypair._Myval2._Myend = _UNK_152884d28;
  local_1128 = ___xmm_41500000415000004150000041500000;
  pfStack_1120 = _UNK_152884d28;
  local_1118 = ___xmm_41600000416000004160000041500000;
  uStack_1110 = _UNK_152884d38;
  local_10e8 = ___xmm_41700000417000004160000041600000;
  uStack_10e0 = _UNK_152884d68;
  local_1108 = ___xmm_41600000416000004160000041600000;
  uStack_1100 = _UNK_152884d48;
  local_10f8 = ___xmm_41600000416000004160000041600000;
  uStack_10f0 = _UNK_152884d48;
  local_10b8 = ___xmm_41800000417000004170000041700000;
  uStack_10b0 = _UNK_152884d98;
  local_10d8 = ___xmm_41700000417000004170000041700000;
  uStack_10d0 = _UNK_152884d78;
  local_10c8 = ___xmm_41700000417000004170000041700000;
  uStack_10c0 = _UNK_152884d78;
  local_1078 = ___xmm_41880000418800004188000041880000;
  uStack_1070 = _UNK_152884da8;
  local_1068 = ___xmm_41880000418800004188000041880000;
  uStack_1060 = _UNK_152884da8;
  local_1058 = ___xmm_41880000418800004188000041880000;
  uStack_1050 = _UNK_152884da8;
  local_10a8 = ___xmm_41800000418000004180000041800000;
  uStack_10a0 = _UNK_15076c248;
  local_1098 = ___xmm_41800000418000004180000041800000;
  uStack_1090 = _UNK_15076c248;
  local_1088 = ___xmm_41800000418000004180000041800000;
  uStack_1080 = _UNK_15076c248;
  local_1048 = ___xmm_41900000419000004190000041880000;
  uStack_1040 = _UNK_152884db8;
  local_1038 = ___xmm_41900000419000004190000041900000;
  uStack_1030 = _UNK_152884dc8;
  local_1028 = ___xmm_41900000419000004190000041900000;
  uStack_1020 = _UNK_152884dc8;
  local_1018 = ___xmm_41980000419800004190000041900000;
  uStack_1010 = _UNK_152884dd8;
  local_1008 = ___xmm_41980000419800004198000041980000;
  uStack_1000 = _UNK_152884de8;
  local_ff8 = ___xmm_41980000419800004198000041980000;
  uStack_ff0 = _UNK_152884de8;
  local_fe8 = ___xmm_41a00000419800004198000041980000;
  uStack_fe0 = _UNK_152884e08;
  local_fd8 = ___xmm_41a0000041a0000041a0000041a00000;
  uStack_fd0 = _UNK_150d56648;
  local_fc8 = ___xmm_41a0000041a0000041a0000041a00000;
  uStack_fc0 = _UNK_150d56648;
  local_fb8 = ___xmm_41a0000041a0000041a0000041a00000;
  uStack_fb0 = _UNK_150d56648;
  local_16a8 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_16a0 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x1a0,8);
  pvVar16 = &local_1148;
  local_1690 = local_16a0 + 0x68;
  local_1698 = local_16a0;
  do {
    p_Var2 = &pvVar16->_Mypair;
    pvVar16 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
              &(pvVar16->_Mypair)._Myval1.field_0x4;
    *local_1698 = *(undefined4 *)&p_Var2->_Myval1;
    local_1698 = local_1698 + 1;
  } while (pvVar16 != &local_fa8);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1328 = ___xmm_41a8000041a8000041a8000041a80000;
  uStack_1320 = _UNK_152884e18;
  local_1318 = ___xmm_41a8000041a8000041a8000041a80000;
  uStack_1310 = _UNK_152884e18;
  local_1308 = ___xmm_41a8000041a8000041a8000041a80000;
  uStack_1300 = _UNK_152884e18;
  local_12f8 = ___xmm_41b0000041b0000041b0000041a80000;
  uStack_12f0 = _UNK_152884e28;
  local_12c8 = ___xmm_41b8000041b8000041b0000041b00000;
  uStack_12c0 = _UNK_152884e48;
  local_1298 = ___xmm_41c0000041b8000041b8000041b80000;
  uStack_1290 = _UNK_152884e78;
  local_12e8 = ___xmm_41b0000041b0000041b0000041b00000;
  uStack_12e0 = _UNK_152884e38;
  local_12d8 = ___xmm_41b0000041b0000041b0000041b00000;
  uStack_12d0 = _UNK_152884e38;
  local_1258 = ___xmm_41c8000041c8000041c8000041c80000;
  uStack_1250 = _UNK_152884e98;
  local_1248 = ___xmm_41c8000041c8000041c8000041c80000;
  uStack_1240 = _UNK_152884e98;
  local_1238 = ___xmm_41c8000041c8000041c8000041c80000;
  uStack_1230 = _UNK_152884e98;
  local_12b8 = ___xmm_41b8000041b8000041b8000041b80000;
  uStack_12b0 = _UNK_152884e58;
  local_12a8 = ___xmm_41b8000041b8000041b8000041b80000;
  uStack_12a0 = _UNK_152884e58;
  local_1228 = ___xmm_41d0000041d0000041d0000041c80000;
  uStack_1220 = _UNK_152884ea8;
  local_1288 = ___xmm_41c0000041c0000041c0000041c00000;
  uStack_1280 = _UNK_152884e88;
  local_1278 = ___xmm_41c0000041c0000041c0000041c00000;
  uStack_1270 = _UNK_152884e88;
  local_1268 = ___xmm_41c0000041c0000041c0000041c00000;
  uStack_1260 = _UNK_152884e88;
  local_11f8 = ___xmm_41d8000041d8000041d0000041d00000;
  uStack_11f0 = _UNK_152884ec8;
  local_1218 = ___xmm_41d0000041d0000041d0000041d00000;
  uStack_1210 = _UNK_152884eb8;
  local_1208 = ___xmm_41d0000041d0000041d0000041d00000;
  uStack_1200 = _UNK_152884eb8;
  local_11c8 = ___xmm_41e0000041d8000041d8000041d80000;
  uStack_11c0 = _UNK_152884ef8;
  local_11e8 = ___xmm_41d8000041d8000041d8000041d80000;
  uStack_11e0 = _UNK_152884ed8;
  local_11d8 = ___xmm_41d8000041d8000041d8000041d80000;
  uStack_11d0 = _UNK_152884ed8;
  local_1188 = ___xmm_41e8000041e8000041e8000041e80000;
  uStack_1180 = _UNK_152884f08;
  local_1178 = ___xmm_41e8000041e8000041e8000041e80000;
  uStack_1170 = _UNK_152884f08;
  local_1168 = ___xmm_41e8000041e8000041e8000041e80000;
  uStack_1160 = _UNK_152884f08;
  local_11b8 = ___xmm_41e0000041e0000041e0000041e00000;
  uStack_11b0 = _UNK_15076c278;
  local_11a8 = ___xmm_41e0000041e0000041e0000041e00000;
  uStack_11a0 = _UNK_15076c278;
  local_1198 = ___xmm_41e0000041e0000041e0000041e00000;
  uStack_1190 = _UNK_15076c278;
  local_1158 = 0x41e80000;
  local_1688 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1680 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x1d4,8);
  puVar15 = &local_1328;
  local_1670 = local_1680 + 0x75;
  local_1678 = local_1680;
  do {
    uVar1 = *(undefined4 *)puVar15;
    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
    *local_1678 = uVar1;
    local_1678 = local_1678 + 1;
  } while (puVar15 != &local_1154);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_cd0._Mypair._Myval2._Myfirst = ___xmm_41f0000041f0000041f0000041f00000;
  local_cd0._Mypair._Myval2._Mylast = _UNK_152884f28;
  local_cd0._Mypair._Myval2._Myend = ___xmm_41f0000041f0000041f0000041f00000;
  pfStack_cb0 = _UNK_152884f28;
  local_ca8 = ___xmm_41f0000041f0000041f0000041f00000;
  pfStack_ca0 = _UNK_152884f28;
  local_c98 = ___xmm_41f8000041f8000041f8000041f00000;
  uStack_c90 = _UNK_152884f38;
  local_c68 = ___xmm_420000004200000041f8000041f80000;
  uStack_c60 = _UNK_152884f58;
  local_c38 = ___xmm_42040000420000004200000042000000;
  uStack_c30 = _UNK_152884f88;
  local_c88 = ___xmm_41f8000041f8000041f8000041f80000;
  uStack_c80 = _UNK_152884f48;
  local_c78 = ___xmm_41f8000041f8000041f8000041f80000;
  uStack_c70 = _UNK_152884f48;
  local_bf8 = ___xmm_42080000420800004208000042080000;
  uStack_bf0 = _UNK_152884fa8;
  local_be8 = ___xmm_42080000420800004208000042080000;
  uStack_be0 = _UNK_152884fa8;
  local_bd8 = ___xmm_42080000420800004208000042080000;
  uStack_bd0 = _UNK_152884fa8;
  local_c58 = ___xmm_42000000420000004200000042000000;
  uStack_c50 = _UNK_152884f68;
  local_c48 = ___xmm_42000000420000004200000042000000;
  uStack_c40 = _UNK_152884f68;
  local_bc8 = ___xmm_420c0000420c0000420c000042080000;
  uStack_bc0 = _UNK_152884fb8;
  local_c28 = ___xmm_42040000420400004204000042040000;
  uStack_c20 = _UNK_152884f98;
  local_c18 = ___xmm_42040000420400004204000042040000;
  uStack_c10 = _UNK_152884f98;
  local_c08 = ___xmm_42040000420400004204000042040000;
  uStack_c00 = _UNK_152884f98;
  local_b98 = ___xmm_4210000042100000420c0000420c0000;
  uStack_b90 = _UNK_152884fd8;
  local_bb8 = ___xmm_420c0000420c0000420c0000420c0000;
  uStack_bb0 = _UNK_152884fc8;
  local_ba8 = ___xmm_420c0000420c0000420c0000420c0000;
  uStack_ba0 = _UNK_152884fc8;
  local_b68 = ___xmm_42140000421000004210000042100000;
  uStack_b60 = _UNK_152885008;
  local_b88 = ___xmm_42100000421000004210000042100000;
  uStack_b80 = _UNK_152884fe8;
  local_b78 = ___xmm_42100000421000004210000042100000;
  uStack_b70 = _UNK_152884fe8;
  local_b28 = ___xmm_42180000421800004218000042180000;
  uStack_b20 = _UNK_152885028;
  local_b18 = ___xmm_42180000421800004218000042180000;
  uStack_b10 = _UNK_152885028;
  local_b08 = ___xmm_42180000421800004218000042180000;
  uStack_b00 = _UNK_152885028;
  local_b58 = ___xmm_42140000421400004214000042140000;
  uStack_b50 = _UNK_152885018;
  local_b48 = ___xmm_42140000421400004214000042140000;
  uStack_b40 = _UNK_152885018;
  local_b38 = ___xmm_42140000421400004214000042140000;
  uStack_b30 = _UNK_152885018;
  local_af8 = ___xmm_421c0000421c0000421c000042180000;
  uStack_af0 = _UNK_152885038;
  local_ae8 = ___xmm_421c0000421c0000421c0000421c0000;
  uStack_ae0 = _UNK_152885048;
  local_ad8 = ___xmm_421c0000421c0000421c0000421c0000;
  uStack_ad0 = _UNK_152885048;
  local_ac8 = ___xmm_4220000042200000421c0000421c0000;
  uStack_ac0 = _UNK_152885068;
  local_ab8 = ___xmm_42200000422000004220000042200000;
  uStack_ab0 = _UNK_152885078;
  local_aa8 = ___xmm_42200000422000004220000042200000;
  uStack_aa0 = _UNK_152885078;
  local_a98 = ___xmm_42240000422000004220000042200000;
  uStack_a90 = _UNK_152885098;
  local_a88 = ___xmm_42240000422400004224000042240000;
  uStack_a80 = _UNK_1528850a8;
  local_a78 = ___xmm_42240000422400004224000042240000;
  uStack_a70 = _UNK_1528850a8;
  local_a68 = ___xmm_42240000422400004224000042240000;
  uStack_a60 = _UNK_1528850a8;
  local_1668 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1660 = (undefined4 *)
               (**(code **)((longlong)
                            `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr + 8))
                         (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr,0x270,8);
  p_Var17 = &local_cd0._Mypair._Myval2;
  local_1650 = local_1660 + 0x9c;
  local_1658 = local_1660;
  do {
    ppfVar3 = &p_Var17->_Myfirst;
    p_Var17 = (_Vector_val<std::_Simple_types<float>_> *)((longlong)&p_Var17->_Myfirst + 4);
    *local_1658 = *(undefined4 *)ppfVar3;
    local_1658 = local_1658 + 1;
  } while (p_Var17 != (_Vector_val<std::_Simple_types<float>_> *)&local_a58);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1838._First = &local_fa8;
  local_fa8._Mypair._Myval1 = ___xmm_42280000422800004228000042280000;
  local_fa8._Mypair._Myval2._Myfirst = _UNK_1528850b8;
  local_fa8._Mypair._Myval2._Mylast = (float *)___xmm_42280000422800004228000042280000;
  local_fa8._Mypair._Myval2._Myend = _UNK_1528850b8;
  local_f88 = ___xmm_42280000422800004228000042280000;
  pfStack_f80 = _UNK_1528850b8;
  local_f78 = ___xmm_422c0000422c0000422c000042280000;
  uStack_f70 = _UNK_1528850c8;
  local_f48 = ___xmm_4230000042300000422c0000422c0000;
  uStack_f40 = _UNK_1528850e8;
  local_f18 = ___xmm_42340000423000004230000042300000;
  uStack_f10 = _UNK_152885118;
  local_ed8 = ___xmm_42380000423800004238000042380000;
  uStack_ed0 = _UNK_152885138;
  local_ec8 = ___xmm_42380000423800004238000042380000;
  uStack_ec0 = _UNK_152885138;
  local_eb8 = ___xmm_42380000423800004238000042380000;
  uStack_eb0 = _UNK_152885138;
  local_f68 = ___xmm_422c0000422c0000422c0000422c0000;
  uStack_f60 = _UNK_1528850d8;
  local_f58 = ___xmm_422c0000422c0000422c0000422c0000;
  uStack_f50 = _UNK_1528850d8;
  local_ea8 = ___xmm_423c0000423c0000423c000042380000;
  uStack_ea0 = _UNK_152885148;
  local_f38 = ___xmm_42300000423000004230000042300000;
  uStack_f30 = _UNK_1528850f8;
  local_f28 = ___xmm_42300000423000004230000042300000;
  uStack_f20 = _UNK_1528850f8;
  local_e78 = ___xmm_4240000042400000423c0000423c0000;
  uStack_e70 = _UNK_152885168;
  local_f08 = ___xmm_42340000423400004234000042340000;
  uStack_f00 = _UNK_152885128;
  local_ef8 = ___xmm_42340000423400004234000042340000;
  uStack_ef0 = _UNK_152885128;
  local_ee8 = ___xmm_42340000423400004234000042340000;
  uStack_ee0 = _UNK_152885128;
  local_e48 = ___xmm_42440000424000004240000042400000;
  uStack_e40 = _UNK_152885198;
  local_e98 = ___xmm_423c0000423c0000423c0000423c0000;
  uStack_e90 = _UNK_152885158;
  local_e88 = ___xmm_423c0000423c0000423c0000423c0000;
  uStack_e80 = _UNK_152885158;
  local_e08 = ___xmm_42480000424800004248000042480000;
  uStack_e00 = _UNK_1528851b8;
  local_df8 = ___xmm_42480000424800004248000042480000;
  uStack_df0 = _UNK_1528851b8;
  local_de8 = ___xmm_42480000424800004248000042480000;
  uStack_de0 = _UNK_1528851b8;
  local_e68 = ___xmm_42400000424000004240000042400000;
  uStack_e60 = _UNK_152885178;
  local_e58 = ___xmm_42400000424000004240000042400000;
  uStack_e50 = _UNK_152885178;
  local_dd8 = ___xmm_424c0000424c0000424c000042480000;
  uStack_dd0 = _UNK_1528851c8;
  local_e38 = ___xmm_42440000424400004244000042440000;
  uStack_e30 = _UNK_1528851a8;
  local_e28 = ___xmm_42440000424400004244000042440000;
  uStack_e20 = _UNK_1528851a8;
  local_e18 = ___xmm_42440000424400004244000042440000;
  uStack_e10 = _UNK_1528851a8;
  local_da8 = ___xmm_4250000042500000424c0000424c0000;
  uStack_da0 = _UNK_1528851e8;
  local_dc8 = ___xmm_424c0000424c0000424c0000424c0000;
  uStack_dc0 = _UNK_1528851d8;
  local_db8 = ___xmm_424c0000424c0000424c0000424c0000;
  uStack_db0 = _UNK_1528851d8;
  local_d78 = ___xmm_42540000425000004250000042500000;
  uStack_d70 = _UNK_152885218;
  local_d98 = ___xmm_42500000425000004250000042500000;
  uStack_d90 = _UNK_1528851f8;
  local_d88 = ___xmm_42500000425000004250000042500000;
  uStack_d80 = _UNK_1528851f8;
  local_d38 = ___xmm_42580000425800004258000042580000;
  uStack_d30 = _UNK_152885238;
  local_d28 = ___xmm_42580000425800004258000042580000;
  uStack_d20 = _UNK_152885238;
  local_d18 = ___xmm_42580000425800004258000042580000;
  uStack_d10 = _UNK_152885238;
  local_d68 = ___xmm_42540000425400004254000042540000;
  uStack_d60 = _UNK_152885228;
  local_d58 = ___xmm_42540000425400004254000042540000;
  uStack_d50 = _UNK_152885228;
  local_d48 = ___xmm_42540000425400004254000042540000;
  uStack_d40 = _UNK_152885228;
  local_1838._Last = &local_cd0;
  local_d08 = ___xmm_425c0000425c0000425c000042580000;
  uStack_d00 = _UNK_152885248;
  local_1828 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_cf8 = ___xmm_425c0000425c0000425c0000425c0000;
  uStack_cf0 = _UNK_152885258;
  local_ce8 = ___xmm_425c0000425c0000425c0000425c0000;
  uStack_ce0 = _UNK_152885258;
  local_cd8 = 0x425c0000;
  local_cd4 = 0x425c0000;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_1648,(initializer_list<float> *)&local_1838,&local_1828);
  if (*(int *)(lVar18 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar13 = _UNK_152885408;
  uVar12 = ___xmm_42800000428000004280000042800000;
  pfVar11 = _UNK_152885268;
  PVar10 = ___xmm_42600000426000004260000042600000;
  uVar9 = _UNK_15076c388;
  uVar8 = ___xmm_42880000428800004288000042880000;
  uVar7 = _UNK_15076c378;
  uVar6 = ___xmm_42700000427000004270000042700000;
  local_a28 = ___xmm_42640000426400004264000042600000;
  uStack_a20 = _UNK_152885298;
  local_a18 = ___xmm_42640000426400004264000042640000;
  uStack_a10 = _UNK_1528852a8;
  local_a08 = ___xmm_42640000426400004264000042640000;
  uStack_a00 = _UNK_1528852a8;
  local_9f8 = ___xmm_42680000426800004264000042640000;
  uStack_9f0 = _UNK_1528852b8;
  local_9e8 = ___xmm_42680000426800004268000042680000;
  uStack_9e0 = _UNK_1528852d8;
  local_9d8 = ___xmm_42680000426800004268000042680000;
  uStack_9d0 = _UNK_1528852d8;
  local_9c8 = ___xmm_426c0000426800004268000042680000;
  uStack_9c0 = _UNK_1528852f8;
  local_9b8 = ___xmm_426c0000426c0000426c0000426c0000;
  uStack_9b0 = _UNK_152885318;
  local_9a8 = ___xmm_426c0000426c0000426c0000426c0000;
  uStack_9a0 = _UNK_152885318;
  local_998 = ___xmm_426c0000426c0000426c0000426c0000;
  uStack_990 = _UNK_152885318;
  local_958 = ___xmm_42740000427400004274000042700000;
  uStack_950 = _UNK_152885348;
  local_948 = ___xmm_42740000427400004274000042740000;
  uStack_940 = _UNK_152885358;
  local_938 = ___xmm_42740000427400004274000042740000;
  uStack_930 = _UNK_152885358;
  local_928 = ___xmm_42780000427800004274000042740000;
  uStack_920 = _UNK_152885378;
  local_918 = ___xmm_42780000427800004278000042780000;
  uStack_910 = _UNK_152885398;
  local_908 = ___xmm_42780000427800004278000042780000;
  uStack_900 = _UNK_152885398;
  local_8f8 = ___xmm_427c0000427800004278000042780000;
  uStack_8f0 = _UNK_1528853b8;
  local_8e8 = ___xmm_427c0000427c0000427c0000427c0000;
  uStack_8e0 = _UNK_1528853d8;
  local_8d8 = ___xmm_427c0000427c0000427c0000427c0000;
  uStack_8d0 = _UNK_1528853d8;
  local_8c8 = ___xmm_427c0000427c0000427c0000427c0000;
  uStack_8c0 = _UNK_1528853d8;
  local_888 = ___xmm_42820000428200004282000042800000;
  uStack_880 = _UNK_152885418;
  local_878 = ___xmm_42820000428200004282000042820000;
  pfStack_870 = _UNK_152885428;
  local_868 = ___xmm_42820000428200004282000042820000;
  pfStack_860 = _UNK_152885428;
  local_858 = ___xmm_42840000428400004282000042820000;
  uStack_850 = _UNK_152885438;
  local_848 = ___xmm_42840000428400004284000042840000;
  uStack_840 = _UNK_152885458;
  local_838 = ___xmm_42840000428400004284000042840000;
  uStack_830 = _UNK_152885458;
  local_828 = ___xmm_42860000428400004284000042840000;
  uStack_820 = _UNK_152885478;
  local_818 = ___xmm_42860000428600004286000042860000;
  uStack_810 = _UNK_152885498;
  local_808 = ___xmm_42860000428600004286000042860000;
  uStack_800 = _UNK_152885498;
  local_7f8 = ___xmm_42860000428600004286000042860000;
  uStack_7f0 = _UNK_152885498;
  local_7b8 = ___xmm_428a0000428a0000428a000042880000;
  uStack_7b0 = _UNK_1528854c8;
  local_7a8 = ___xmm_428a0000428a0000428a0000428a0000;
  uStack_7a0 = _UNK_1528854d8;
  local_798 = ___xmm_428a0000428a0000428a0000428a0000;
  uStack_790 = _UNK_1528854d8;
  local_788 = ___xmm_428c0000428c0000428a0000428a0000;
  uStack_780 = _UNK_1528854e8;
  local_778 = ___xmm_428c0000428c0000428c0000428c0000;
  uStack_770 = _UNK_152885508;
  local_768 = ___xmm_428c0000428c0000428c0000428c0000;
  uStack_760 = _UNK_152885508;
  local_758 = ___xmm_428e0000428c0000428c0000428c0000;
  uStack_750 = _UNK_152885528;
  local_748 = ___xmm_428e0000428e0000428e0000428e0000;
  uStack_740 = _UNK_152885548;
  local_738 = ___xmm_428e0000428e0000428e0000428e0000;
  uStack_730 = _UNK_152885548;
  local_728 = ___xmm_428e0000428e0000428e0000428e0000;
  uStack_720 = _UNK_152885548;
  local_1820 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_a58._Mypair._Myval1 = ___xmm_42600000426000004260000042600000;
  local_a58._Mypair._Myval2._Myfirst = _UNK_152885268;
  local_a58._Mypair._Myval2._Mylast = (float *)___xmm_42600000426000004260000042600000;
  local_a58._Mypair._Myval2._Myend = _UNK_152885268;
  local_a38 = ___xmm_42600000426000004260000042600000;
  pfStack_a30 = _UNK_152885268;
  local_988 = ___xmm_42700000427000004270000042700000;
  uStack_980 = _UNK_15076c378;
  local_978 = ___xmm_42700000427000004270000042700000;
  uStack_970 = _UNK_15076c378;
  local_968 = ___xmm_42700000427000004270000042700000;
  uStack_960 = _UNK_15076c378;
  local_8b8 = ___xmm_42800000428000004280000042800000;
  uStack_8b0 = _UNK_152885408;
  local_8a8 = ___xmm_42800000428000004280000042800000;
  uStack_8a0 = _UNK_152885408;
  local_898 = ___xmm_42800000428000004280000042800000;
  uStack_890 = _UNK_152885408;
  local_7e8 = ___xmm_42880000428800004288000042880000;
  uStack_7e0 = _UNK_15076c388;
  local_7d8 = ___xmm_42880000428800004288000042880000;
  uStack_7d0 = _UNK_15076c388;
  local_7c8 = ___xmm_42880000428800004288000042880000;
  uStack_7c0 = _UNK_15076c388;
  local_1838._First = &local_a58;
  local_1838._Last = &local_718;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_1628,(initializer_list<float> *)&local_1838,&local_1820);
  local_1818 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar14 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_1818);
  local_718._Mypair._Myval1 = ___xmm_42820000428200004282000042820000;
  local_718._Mypair._Myval2._Myfirst = _UNK_152885428;
  local_718._Mypair._Myval2._Mylast = (float *)___xmm_42820000428200004282000042820000;
  local_718._Mypair._Myval2._Myend = _UNK_152885428;
  local_6f8 = ___xmm_42820000428200004282000042820000;
  pfStack_6f0 = _UNK_152885428;
  local_6e8 = ___xmm_42840000428400004284000042820000;
  uStack_6e0 = _UNK_152885448;
  local_6b8 = ___xmm_42860000428600004284000042840000;
  uStack_6b0 = _UNK_152885488;
  local_688 = ___xmm_42880000428600004286000042860000;
  uStack_680 = _UNK_1528854b8;
  local_648 = ___xmm_428a0000428a0000428a0000428a0000;
  uStack_640 = _UNK_1528854d8;
  local_638 = ___xmm_428a0000428a0000428a0000428a0000;
  uStack_630 = _UNK_1528854d8;
  local_628 = ___xmm_428a0000428a0000428a0000428a0000;
  uStack_620 = _UNK_1528854d8;
  local_618 = ___xmm_428c0000428c0000428c0000428a0000;
  uStack_610 = _UNK_1528854f8;
  local_5e8 = ___xmm_428e0000428e0000428c0000428c0000;
  uStack_5e0 = _UNK_152885538;
  local_5b8 = ___xmm_42600000428e0000428e0000428e0000;
  uStack_5b0 = _UNK_152885288;
  local_6d8 = ___xmm_42840000428400004284000042840000;
  uStack_6d0 = _UNK_152885458;
  local_6c8 = ___xmm_42840000428400004284000042840000;
  uStack_6c0 = _UNK_152885458;
  local_578 = ___xmm_42640000426400004264000042640000;
  uStack_570 = _UNK_1528852a8;
  local_568 = ___xmm_42640000426400004264000042640000;
  uStack_560 = _UNK_1528852a8;
  local_558 = ___xmm_42640000426400004264000042640000;
  uStack_550 = _UNK_1528852a8;
  local_6a8 = ___xmm_42860000428600004286000042860000;
  uStack_6a0 = _UNK_152885498;
  local_698 = ___xmm_42860000428600004286000042860000;
  uStack_690 = _UNK_152885498;
  local_548 = ___xmm_42680000426800004268000042640000;
  uStack_540 = _UNK_1528852c8;
  local_608 = ___xmm_428c0000428c0000428c0000428c0000;
  uStack_600 = _UNK_152885508;
  local_5f8 = ___xmm_428c0000428c0000428c0000428c0000;
  uStack_5f0 = _UNK_152885508;
  local_518 = ___xmm_426c0000426c00004268000042680000;
  uStack_510 = _UNK_152885308;
  local_5d8 = ___xmm_428e0000428e0000428e0000428e0000;
  uStack_5d0 = _UNK_152885548;
  local_5c8 = ___xmm_428e0000428e0000428e0000428e0000;
  uStack_5c0 = _UNK_152885548;
  local_4e8 = ___xmm_42700000426c0000426c0000426c0000;
  uStack_4e0 = _UNK_152885338;
  local_538 = ___xmm_42680000426800004268000042680000;
  uStack_530 = _UNK_1528852d8;
  local_528 = ___xmm_42680000426800004268000042680000;
  uStack_520 = _UNK_1528852d8;
  local_4a8 = ___xmm_42740000427400004274000042740000;
  uStack_4a0 = _UNK_152885358;
  local_498 = ___xmm_42740000427400004274000042740000;
  uStack_490 = _UNK_152885358;
  local_488 = ___xmm_42740000427400004274000042740000;
  uStack_480 = _UNK_152885358;
  local_508 = ___xmm_426c0000426c0000426c0000426c0000;
  uStack_500 = _UNK_152885318;
  local_4f8 = ___xmm_426c0000426c0000426c0000426c0000;
  uStack_4f0 = _UNK_152885318;
  local_478 = ___xmm_42780000427800004278000042740000;
  uStack_470 = _UNK_152885388;
  local_468 = ___xmm_42780000427800004278000042780000;
  uStack_460 = _UNK_152885398;
  local_458 = ___xmm_42780000427800004278000042780000;
  uStack_450 = _UNK_152885398;
  local_448 = ___xmm_427c0000427c00004278000042780000;
  uStack_440 = _UNK_1528853c8;
  local_678 = uVar8;
  uStack_670 = uVar9;
  local_668 = uVar8;
  uStack_660 = uVar9;
  local_658 = uVar8;
  uStack_650 = uVar9;
  local_5a8 = PVar10;
  pfStack_5a0 = pfVar11;
  local_598 = PVar10;
  pfStack_590 = pfVar11;
  local_588 = PVar10;
  pfStack_580 = pfVar11;
  local_4d8 = uVar6;
  uStack_4d0 = uVar7;
  local_4c8 = uVar6;
  uStack_4c0 = uVar7;
  local_4b8 = uVar6;
  uStack_4b0 = uVar7;
  local_1838._First = &local_718;
  local_1838._Last = &local_3d8;
  local_438 = ___xmm_427c0000427c0000427c0000427c0000;
  uStack_430 = _UNK_1528853d8;
  local_428 = ___xmm_427c0000427c0000427c0000427c0000;
  uStack_420 = _UNK_1528853d8;
  local_418 = ___xmm_42800000427c0000427c0000427c0000;
  uStack_410 = _UNK_1528853f8;
  local_408 = uVar12;
  uStack_400 = uVar13;
  local_3f8 = uVar12;
  uStack_3f0 = uVar13;
  local_3e8 = uVar12;
  uStack_3e0 = uVar13;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_1608,(initializer_list<float> *)&local_1838,pPVar14);
  local_1810 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar14 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_1810);
  local_1838._First = &local_17e8;
  local_1838._Last = &local_17c0;
  local_17c8 = 0x40000000;
  local_17c4 = 0x40000000;
  local_17e8._Mypair._Myval1 = PVar4;
  local_17e8._Mypair._Myval2._Myfirst = pfVar5;
  local_17e8._Mypair._Myval2._Mylast = ___xmm_4000000040000000400000003f800000;
  local_17e8._Mypair._Myval2._Myend = _UNK_152884bc8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_15e8,(initializer_list<float> *)&local_1838,pPVar14);
  local_1808 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar14 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_1808);
  local_1838._First = &local_17c0;
  local_1838._Last = &local_1798;
  local_17a0 = 0x40000000;
  local_179c = 0x40000000;
  local_17c0._Mypair._Myval1 = PVar4;
  local_17c0._Mypair._Myval2._Myfirst = pfVar5;
  local_17c0._Mypair._Myval2._Mylast = ___xmm_4000000040000000400000003f800000;
  local_17c0._Mypair._Myval2._Myend = _UNK_152884bc8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_15c8,(initializer_list<float> *)&local_1838,pPVar14);
  local_1800 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar14 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_1800);
  local_1838._Last = &local_1708;
  local_1758._Mypair._Myval2._Mylast = ___xmm_4000000040000000400000003f800000;
  local_1758._Mypair._Myval2._Myend = _UNK_152884bc8;
  local_1738 = ___xmm_40400000404000004000000040000000;
  uStack_1730 = _UNK_15076be88;
  local_1758._Mypair._Myval1 = PVar4;
  local_1758._Mypair._Myval2._Myfirst = pfVar5;
  local_1728 = ___xmm_40800000404000004040000040400000;
  uStack_1720 = _UNK_152884bf8;
  local_1718 = ___xmm_40800000408000004080000040800000;
  uStack_1710 = _UNK_1509253f8;
  local_1838._First =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)(local_1764 + 0xc);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_15a8,(initializer_list<float> *)&local_1838,pPVar14);
  local_17f8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar14 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_17f8);
  local_3d8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  local_3d8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_3d8._Mypair._Myval2._Mylast = (float *)0x0;
  local_3d8._Mypair._Myval2._Myend = (float *)0x0;
  local_3b8 = ___xmm_3f800000000000000000000000000000;
  uStack_3b0 = _UNK_150689648;
  local_398 = ___xmm_41000000000000000000000040a00000;
  uStack_390 = _UNK_152884c98;
  local_3a8 = ___xmm_40800000000000000000000000000000;
  uStack_3a0 = _UNK_15094b768;
  local_1838._First = &local_3d8;
  local_368 = ___xmm_3f800000000000004100000000000000;
  uStack_360 = _UNK_152884b98;
  local_2f8 = ___xmm_0000000040e000000000000040a00000;
  uStack_2f0 = _UNK_1528849c8;
  local_2a8 = ___xmm_0000000040e000000000000040a00000;
  uStack_2a0 = _UNK_1528849c8;
  local_258 = ___xmm_0000000040e000000000000040a00000;
  uStack_250 = _UNK_1528849c8;
  local_248 = 0;
  uStack_240 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_348 = ___xmm_41000000000000000000000040a00000;
  uStack_340 = _UNK_152884c98;
  local_1b8 = ___xmm_0000000040e0000040c0000040a00000;
  uStack_1b0 = _UNK_1528849e8;
  local_168 = ___xmm_0000000040e0000040c0000040a00000;
  uStack_160 = _UNK_1528849e8;
  local_238 = 0;
  uStack_230 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_108 = ___xmm_00000000400000003f80000040400000;
  uStack_100 = _UNK_152884998;
  local_1e8 = ___xmm_40c0000040a000000000000000000000;
  uStack_1e0 = _UNK_152884c38;
  local_148 = ___xmm_40c0000040a000000000000000000000;
  uStack_140 = _UNK_152884c38;
  local_1838._Last = local_68;
  local_e8 = ___xmm_3f800000404000000000000040e00000;
  uStack_e0 = _UNK_152884ba8;
  local_388 = ___xmm_00000000000000003f80000000000000;
  uStack_380 = _UNK_150689508;
  local_378 = ___xmm_0000000040a000004080000000000000;
  uStack_370 = _UNK_1528849a8;
  local_358 = ___xmm_40800000000000000000000000000000;
  uStack_350 = _UNK_15094b768;
  local_338 = ___xmm_00000000000000003f80000000000000;
  uStack_330 = _UNK_150689508;
  local_328 = ___xmm_0000000040a000004080000000000000;
  uStack_320 = _UNK_1528849a8;
  local_308 = ___xmm_40800000000000000000000000000000;
  uStack_300 = _UNK_15094b768;
  local_2e8 = ___xmm_00000000000000003f80000000000000;
  uStack_2e0 = _UNK_150689508;
  local_2d8 = ___xmm_0000000040a000004080000000000000;
  uStack_2d0 = _UNK_1528849a8;
  local_2b8 = ___xmm_40800000000000000000000000000000;
  uStack_2b0 = _UNK_15094b768;
  local_298 = ___xmm_00000000000000003f80000000000000;
  uStack_290 = _UNK_150689508;
  local_288 = ___xmm_0000000040a000004080000000000000;
  uStack_280 = _UNK_1528849a8;
  local_268 = ___xmm_40800000000000000000000000000000;
  uStack_260 = _UNK_15094b768;
  local_118 = ___xmm_0000000040e0000040c0000000000000;
  uStack_110 = _UNK_1528849d8;
  local_c8 = ___xmm_0000000040e0000040c0000000000000;
  uStack_c0 = _UNK_1528849d8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_318 = ___xmm_3f800000000000000000000040e00000;
  uStack_310 = _UNK_152884b88;
  local_2c8 = ___xmm_3f800000000000000000000040e00000;
  uStack_2c0 = _UNK_152884b88;
  local_278 = ___xmm_3f800000000000000000000040e00000;
  uStack_270 = _UNK_152884b88;
  local_1f8 = ___xmm_00000000400000003f80000000000000;
  uStack_1f0 = _UNK_152884988;
  local_1d8 = ___xmm_3f800000000000000000000040e00000;
  uStack_1d0 = _UNK_152884b88;
  local_1c8 = ___xmm_00000000000000000000000040000000;
  uStack_1c0 = _UNK_15094b718;
  local_1a8 = ___xmm_00000000400000003f80000000000000;
  uStack_1a0 = _UNK_152884988;
  local_198 = ___xmm_40c00000000000000000000000000000;
  uStack_190 = _UNK_152884c28;
  local_188 = ___xmm_3f800000000000000000000040e00000;
  uStack_180 = _UNK_152884b88;
  local_178 = ___xmm_00000000000000000000000040000000;
  uStack_170 = _UNK_15094b718;
  local_158 = ___xmm_00000000400000003f80000000000000;
  uStack_150 = _UNK_152884988;
  local_138 = ___xmm_3f800000000000000000000040e00000;
  uStack_130 = _UNK_152884b88;
  local_128 = ___xmm_00000000000000000000000040000000;
  uStack_120 = _UNK_15094b718;
  local_f8 = ___xmm_40c00000000000000000000000000000;
  uStack_f0 = _UNK_152884c28;
  local_d8 = ___xmm_00000000000000000000000040000000;
  uStack_d0 = _UNK_15094b718;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_1588,(initializer_list<float> *)&local_1838,pPVar14);
  local_1838._First = &local_1708;
  local_1838._Last = &local_1568;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&values,&local_1838,&local_17f0);
  pvVar16 = &local_1568;
  lVar18 = 0xd;
  do {
    pvVar16 = pvVar16 + -1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(pvVar16);
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  atexit(_dynamic_atexit_destructor_for__values__);
  return;
}

// `dynamic_initializer_for_'valuesPerLOD'' @ 14134c650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl block4::output::_dynamic_initializer_for__valuesPerLOD__(void)

{
  float fVar1;
  longlong lVar2;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var3;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar5;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar6;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar7;
  PolyAllocator<float,8,pma::DefaultMemoryResource> *pPVar8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar9;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auStack_1a28 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_1a08;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_19f8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_19f0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_19e8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_19e0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_19d8;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_19d0;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_19c8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_19a8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1988;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1968;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1948;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1928;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1908;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_18e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_18c8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_18a8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1888;
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined8 local_1848;
  undefined8 uStack_1840;
  undefined8 local_1838;
  undefined8 uStack_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  undefined8 uStack_1790;
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  undefined8 uStack_1710;
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_15b8;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined8 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined8 uStack_1480;
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_12e8;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1018;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d48;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_ce8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_b08;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_a28;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_9c8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_7e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_708;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_700;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_6f8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_6a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_518;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_4c8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_3e0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_3d8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_388;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_338;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_2e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_1f8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_1a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_108;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c8 [22];
  
  local_c8[0] = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(__security_cookie.value ^ (ulonglong)auStack_1a28);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_19d0 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar32 = _UNK_152885858;
  uVar31 = ___xmm_bf3b6801be555b403ed66959459f2000;
  uVar34 = _UNK_152885808;
  uVar33 = ___xmm_bed63aa6448e80004485000044770000;
  uVar30 = _UNK_1528857a8;
  uVar29 = ___xmm_459cc000459a6000459800004595a000;
  uVar27 = _UNK_152885768;
  uVar25 = ___xmm_45934000be8373b3bf523b583d96ff71;
  uVar28 = _UNK_1528855e8;
  uVar26 = ___xmm_4405000043e400000000000000000000;
  uVar22 = _UNK_1528855b8;
  uVar19 = ___xmm_43640000431800000000000000000000;
  uVar24 = _UNK_152884b38;
  uVar21 = ___xmm_3f0115434589c0004587600045850000;
  uVar17 = _UNK_1528848f8;
  uVar15 = ___xmm_000000000000000045a8a000befd9699;
  pvVar5 = _UNK_150689538;
  pvVar4 = ___xmm_000000003f8000000000000000000000;
  uVar13 = _UNK_1506894f8;
  uVar11 = ___xmm_0000000000000000000000003f800000;
  local_d48._Mypair._Myval1 = ___xmm_00000000000000000000000042980000;
  local_d48._Mypair._Myval2._Myfirst = _UNK_152884658;
  local_d18 = ___xmm_0000000000000000be31d0d543980000;
  uStack_d10 = _UNK_152884908;
  local_cf8 = 0;
  uStack_cf0 = 0;
  local_cc8 = ___xmm_3f33af553ed656983df9ce0744180000;
  uStack_cc0 = _UNK_152884b58;
  local_c98 = ___xmm_44b480003ee173f13f4820393e107dc0;
  uStack_c90 = _UNK_152885618;
  local_c78 = ___xmm_bf22485c3ddbfa75bf40e62d44da8000;
  uStack_c70 = _UNK_152885848;
  local_c68 = ___xmm_4509c00045050000450040003e0c85f8;
  uStack_c60 = _UNK_152885678;
  local_c58 = ___xmm_beee09534518000045134000450e8000;
  uStack_c50 = _UNK_152885818;
  local_c48 = ___xmm_452b0000beae578dbf460a42be86eff2;
  uStack_c40 = _UNK_1528856b8;
  local_c38 = ___xmm_453e00004539400045348000452fc000;
  uStack_c30 = _UNK_1528856d8;
  local_c08 = ___xmm_bf18ed7c45510000454c400045478000;
  uStack_c00 = _UNK_152885838;
  local_bf8 = ___xmm_456400003e43365f3f43bd0ebe188440;
  uStack_bf0 = _UNK_1528856f8;
  local_be8 = ___xmm_4577000045724000456d80004568c000;
  uStack_be0 = _UNK_152885718;
  local_bd8 = ___xmm_3f64c9933e94acd2bea68b2a457bc000;
  uStack_bd0 = _UNK_152884b68;
  local_b18 = ___xmm_000000000000000041f0000041700000;
  uStack_b10 = _UNK_1528847e8;
  local_af8 = ___xmm_42a00000422000000000000000000000;
  uStack_af0 = _UNK_152885558;
  local_ae8 = 0;
  uStack_ae0 = 0;
  local_d08 = ___xmm_000000000000000000000000bf7c1c5d;
  uStack_d00 = _UNK_152884798;
  local_ac8 = ___xmm_3e733080000000000000000000000000;
  uStack_ac0 = _UNK_152884b18;
  local_cb8 = ___xmm_0000000000000000446400003f102f27;
  uStack_cb0 = _UNK_152884838;
  local_ab8 = ___xmm_000000003f4ffdef3e920e553ee62ea0;
  uStack_ab0 = _UNK_152884968;
  local_c88 = ___xmm_44d1000044c780000000000044be0000;
  uStack_c80 = _UNK_152885648;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_c28 = ___xmm_0000000000000000000000004542c000;
  uStack_c20 = _UNK_1528846d8;
  local_a98 = ___xmm_00000000000000003ec3ef1600000000;
  uStack_a90 = _UNK_1528847a8;
  local_d48._Mypair._Myval2._Mylast = ___xmm_000000003f8000000000000000000000;
  local_d48._Mypair._Myval2._Myend = _UNK_150689538;
  local_d28 = ___xmm_43640000431800000000000000000000;
  uStack_d20 = _UNK_1528855b8;
  local_ce8 = ___xmm_000000003f8000000000000000000000;
  pvStack_ce0 = _UNK_150689538;
  local_cd8 = ___xmm_4405000043e400000000000000000000;
  uStack_cd0 = _UNK_1528855e8;
  local_ca8 = ___xmm_bed63aa6448e80004485000044770000;
  uStack_ca0 = _UNK_152885808;
  local_c18 = ___xmm_0000000000000000000000003f800000;
  uStack_c10 = _UNK_1506894f8;
  local_bc8 = ___xmm_000000000000000000000000bdd87400;
  uStack_bc0 = _UNK_152884758;
  local_bb8 = ___xmm_3f0115434589c0004587600045850000;
  uStack_bb0 = _UNK_152884b38;
  local_ba8 = ___xmm_45934000be8373b3bf523b583d96ff71;
  uStack_ba0 = _UNK_152885768;
  local_b98 = ___xmm_459cc000459a6000459800004595a000;
  uStack_b90 = _UNK_1528857a8;
  local_b88 = ___xmm_bf3b6801be555b403ed66959459f2000;
  uStack_b80 = _UNK_152885858;
  local_b78 = ___xmm_000000000000000045a8a000befd9699;
  uStack_b70 = _UNK_1528848f8;
  local_b68 = ___xmm_3f0115434589c0004587600045850000;
  uStack_b60 = _UNK_152884b38;
  local_b58 = ___xmm_45934000be8373b3bf523b583d96ff71;
  uStack_b50 = _UNK_152885768;
  local_b48 = ___xmm_459cc000459a6000459800004595a000;
  uStack_b40 = _UNK_1528857a8;
  local_b38 = ___xmm_bf3b6801be555b403ed66959459f2000;
  uStack_b30 = _UNK_152885858;
  local_b28 = ___xmm_000000000000000045a8a000befd9699;
  uStack_b20 = _UNK_1528848f8;
  local_b08 = ___xmm_000000003f8000000000000000000000;
  pvStack_b00 = _UNK_150689538;
  local_ad8 = ___xmm_0000000000000000000000003f800000;
  uStack_ad0 = _UNK_1506894f8;
  local_a88 = ___xmm_0000000000000000000000003f6c835e;
  uStack_a80 = _UNK_1528845e8;
  local_a78 = ___xmm_3f0d6b5e427800004278000042780000;
  uStack_a70 = _UNK_152884b48;
  local_a68 = ___xmm_42fa0000bf1974de3f0d6b5ebe325b84;
  uStack_a60 = _UNK_152885578;
  local_a58 = ___xmm_431d0000431d000042fa000042fa0000;
  uStack_a50 = _UNK_1528855a8;
  local_a48 = ___xmm_3f0013e5bd9bf7673e87fad842f40000;
  uStack_a40 = _UNK_152884b28;
  local_a38 = ___xmm_000000004300000043000000bf5211e7;
  uStack_a30 = _UNK_152884a48;
  local_1988._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_1988._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,800,8);
  pvVar9 = &local_d48;
  local_1988._Mypair._Myval2._Myend = local_1988._Mypair._Myval2._Myfirst + 0x19;
  local_1988._Mypair._Myval2._Mylast = local_1988._Mypair._Myval2._Myfirst;
  do {
    p_Var3 = &pvVar9->_Mypair;
    pvVar9 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar9->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)&((local_1988._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined4 *)&p_Var3->_Myval1;
    local_1988._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_1988._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pvVar9 != &local_a28);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar19 = ___xmm_43640000431800000000000000000000, uVar22 = _UNK_1528855b8,
     uVar21 = ___xmm_3f0115434589c0004587600045850000, uVar24 = _UNK_152884b38,
     uVar25 = ___xmm_45934000be8373b3bf523b583d96ff71, uVar27 = _UNK_152885768,
     uVar29 = ___xmm_459cc000459a6000459800004595a000, uVar30 = _UNK_1528857a8,
     uVar31 = ___xmm_bf3b6801be555b403ed66959459f2000, uVar32 = _UNK_152885858,
     uVar15 = ___xmm_000000000000000045a8a000befd9699, uVar17 = _UNK_1528848f8,
     uVar26 = ___xmm_4405000043e400000000000000000000, uVar28 = _UNK_1528855e8,
     uVar33 = ___xmm_bed63aa6448e80004485000044770000, uVar34 = _UNK_152885808,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar19 = ___xmm_43640000431800000000000000000000;
    uVar22 = _UNK_1528855b8;
    uVar21 = ___xmm_3f0115434589c0004587600045850000;
    uVar24 = _UNK_152884b38;
    uVar25 = ___xmm_45934000be8373b3bf523b583d96ff71;
    uVar27 = _UNK_152885768;
    uVar29 = ___xmm_459cc000459a6000459800004595a000;
    uVar30 = _UNK_1528857a8;
    uVar31 = ___xmm_bf3b6801be555b403ed66959459f2000;
    uVar32 = _UNK_152885858;
    uVar15 = ___xmm_000000000000000045a8a000befd9699;
    uVar17 = _UNK_1528848f8;
    uVar26 = ___xmm_4405000043e400000000000000000000;
    uVar28 = _UNK_1528855e8;
    uVar33 = ___xmm_bed63aa6448e80004485000044770000;
    uVar34 = _UNK_152885808;
  }
  uVar14 = _UNK_152885798;
  uVar12 = ___xmm_459cc000459a60000000000000000000;
  uVar23 = _UNK_152885638;
  uVar20 = ___xmm_44d1000044c780000000000000000000;
  local_a28._Mypair._Myval1 = ___xmm_00000000000000000000000042980000;
  local_a28._Mypair._Myval2._Myfirst = _UNK_152884658;
  local_9f8 = ___xmm_00000000000000000000000043980000;
  uStack_9f0 = _UNK_152884688;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_9a8 = ___xmm_bdd874003ea68b2abe94acd244180000;
  uStack_9a0 = _UNK_1528857f8;
  local_978 = ___xmm_000000003ee173f13f4820393e107dc0;
  uStack_970 = _UNK_152884958;
  local_958 = ___xmm_bf22485c3ddbfa75bf40e62d44da8000;
  uStack_950 = _UNK_152885848;
  local_948 = ___xmm_0000000000000000450040003e0c85f8;
  uStack_940 = _UNK_152884868;
  local_938 = ___xmm_beee09534518000045134000450e8000;
  uStack_930 = _UNK_152885818;
  local_928 = ___xmm_452b0000beae578dbf460a42be86eff2;
  uStack_920 = _UNK_1528856b8;
  local_918 = ___xmm_000000000000000045348000452fc000;
  uStack_910 = _UNK_152884878;
  local_908 = 0;
  uStack_900 = 0;
  local_8e8 = ___xmm_bf18ed7c45510000454c400045478000;
  uStack_8e0 = _UNK_152885838;
  local_8d8 = ___xmm_456400003e43365f3f43bd0ebe188440;
  uStack_8d0 = _UNK_1528856f8;
  local_8c8 = ___xmm_4577000045724000456d80004568c000;
  uStack_8c0 = _UNK_152885718;
  local_8b8 = ___xmm_0000000000000000bf737870457bc000;
  uStack_8b0 = _UNK_152884938;
  local_868 = ___xmm_000000000000000000000000459f2000;
  uStack_860 = _UNK_152884738;
  local_848 = ___xmm_befd82344589c0004587600045850000;
  uStack_840 = _UNK_152885828;
  local_7f8 = ___xmm_000000000000000041f0000041700000;
  uStack_7f0 = _UNK_1528847e8;
  local_7d8 = ___xmm_42a00000422000000000000000000000;
  uStack_7d0 = _UNK_152885558;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_7a8 = ___xmm_3e733080000000000000000000000000;
  uStack_7a0 = _UNK_152884b18;
  local_798 = ___xmm_000000003f4ffdef3e920e553ee62ea0;
  uStack_790 = _UNK_152884968;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = ___xmm_00000000000000003ec3ef1600000000;
  uStack_770 = _UNK_1528847a8;
  local_768 = ___xmm_0000000000000000000000003f6c835e;
  uStack_760 = _UNK_1528845e8;
  local_758 = ___xmm_3f0d6b5e427800004278000042780000;
  uStack_750 = _UNK_152884b48;
  local_998 = ___xmm_0000000000000000000000003f64c993;
  uStack_990 = _UNK_1528845d8;
  local_748 = ___xmm_42fa0000bf1974de3f0d6b5ebe325b84;
  uStack_740 = _UNK_152885578;
  local_8a8 = ___xmm_000000000000000000000000be9e377a;
  uStack_8a0 = _UNK_152884768;
  local_738 = ___xmm_431d0000431d000042fa000042fa0000;
  uStack_730 = _UNK_1528855a8;
  local_a28._Mypair._Myval2._Mylast = pvVar4;
  local_a28._Mypair._Myval2._Myend = pvVar5;
  local_9e8 = uVar11;
  uStack_9e0 = uVar13;
  local_9c8 = pvVar4;
  pvStack_9c0 = pvVar5;
  local_968 = ___xmm_44d1000044c780000000000000000000;
  uStack_960 = _UNK_152885638;
  local_8f8 = uVar11;
  uStack_8f0 = uVar13;
  local_858 = uVar11;
  uStack_850 = uVar13;
  local_838 = ___xmm_00000000bd8e836b3f5b8b7f3df6d712;
  uStack_830 = _UNK_152884ae8;
  local_828 = ___xmm_459cc000459a60000000000000000000;
  uStack_820 = _UNK_152885798;
  local_7e8 = pvVar4;
  pvStack_7e0 = pvVar5;
  local_7b8 = uVar11;
  uStack_7b0 = uVar13;
  local_728 = ___xmm_3f0013e5bd9bf7673e87fad842f40000;
  uStack_720 = _UNK_152884b28;
  local_718 = ___xmm_000000000000000000000000bf5211e7;
  uStack_710 = _UNK_152884778;
  local_1968._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_a08 = uVar19;
  uStack_a00 = uVar22;
  local_9b8 = uVar26;
  uStack_9b0 = uVar28;
  local_988 = uVar33;
  uStack_980 = uVar34;
  local_898 = uVar21;
  uStack_890 = uVar24;
  local_888 = uVar25;
  uStack_880 = uVar27;
  local_878 = uVar29;
  uStack_870 = uVar30;
  local_818 = uVar31;
  uStack_810 = uVar32;
  local_808 = uVar15;
  uStack_800 = uVar17;
  local_1968._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,800,8);
  pvVar9 = &local_a28;
  local_1968._Mypair._Myval2._Myend = local_1968._Mypair._Myval2._Myfirst + 200;
  local_1968._Mypair._Myval2._Mylast = local_1968._Mypair._Myval2._Myfirst;
  do {
    p_Var3 = &pvVar9->_Mypair;
    pvVar9 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar9->_Mypair)._Myval1.field_0x4;
    *local_1968._Mypair._Myval2._Mylast = *(float *)&p_Var3->_Myval1;
    local_1968._Mypair._Myval2._Mylast = local_1968._Mypair._Myval2._Mylast + 1;
  } while ((PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            *)pvVar9 != &local_708);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar20 = ___xmm_44d1000044c780000000000000000000, uVar23 = _UNK_152885638,
     uVar12 = ___xmm_459cc000459a60000000000000000000, uVar14 = _UNK_152885798,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar20 = ___xmm_44d1000044c780000000000000000000;
    uVar23 = _UNK_152885638;
    uVar12 = ___xmm_459cc000459a60000000000000000000;
    uVar14 = _UNK_152885798;
  }
  uVar24 = _UNK_152884b08;
  uVar21 = ___xmm_3e011ac1000000000000000000000000;
  uVar17 = _UNK_152884978;
  uVar15 = ___xmm_000000003f75295a3e8361b5bd0a5fb1;
  pvVar7 = _UNK_152884658;
  PVar6 = ___xmm_00000000000000000000000042980000;
  local_6e8 = ___xmm_43640000431800000000000000000000;
  uStack_6e0 = _UNK_1528855b8;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_698 = ___xmm_4405000043e400000000000000000000;
  uStack_690 = _UNK_1528855e8;
  local_678 = ___xmm_0000000000000000000000003f737870;
  uStack_670 = _UNK_1528845f8;
  local_658 = ___xmm_00000000bebfcc700000000000000000;
  uStack_650 = _UNK_152884af8;
  local_638 = ___xmm_0000000000000000be54e6ce44da8000;
  uStack_630 = _UNK_152884918;
  local_618 = ___xmm_beee09534518000045134000450e8000;
  uStack_610 = _UNK_152885818;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5c8 = ___xmm_bf18ed7c45510000454c400045478000;
  uStack_5c0 = _UNK_152885838;
  local_5a8 = ___xmm_4577000045724000456d80004568c000;
  uStack_5a0 = _UNK_152885718;
  local_598 = 0;
  uStack_590 = 0;
  local_688 = ___xmm_0000000000000000be9e377a44180000;
  uStack_680 = _UNK_152884928;
  local_578 = ___xmm_3f0115434589c0004587600045850000;
  uStack_570 = _UNK_152884b38;
  local_668 = ___xmm_bf6d5bed448e80004485000044770000;
  uStack_660 = _UNK_152885868;
  local_558 = ___xmm_0000000000000000000000004595a000;
  uStack_550 = _UNK_152884728;
  local_628 = ___xmm_000000000000000000000000bf7a67e2;
  uStack_620 = _UNK_152884788;
  local_548 = 0;
  uStack_540 = 0;
  local_608 = ___xmm_452b0000beae578dbf460a42be86eff2;
  uStack_600 = _UNK_1528856b8;
  local_528 = ___xmm_00000000000000000000000045850000;
  uStack_520 = _UNK_152884708;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_4f8 = ___xmm_bf3b6801be555b403ed66959459f2000;
  uStack_4f0 = _UNK_152885858;
  local_5b8 = ___xmm_456400003e43365f3f43bd0ebe188440;
  uStack_5b0 = _UNK_1528856f8;
  local_4d8 = ___xmm_000000000000000041f0000041700000;
  uStack_4d0 = _UNK_1528847e8;
  local_568 = ___xmm_45934000be8373b3bf523b583d96ff71;
  uStack_560 = _UNK_152885768;
  local_4b8 = ___xmm_42a00000422000000000000000000000;
  uStack_4b0 = _UNK_152885558;
  local_4e8 = ___xmm_000000000000000045a8a000befd9699;
  uStack_4e0 = _UNK_1528848f8;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_438 = ___xmm_3f0d6b5e427800004278000042780000;
  uStack_430 = _UNK_152884b48;
  local_708 = ___xmm_00000000000000000000000042980000;
  pvStack_700 = _UNK_152884658;
  local_6f8 = pvVar4;
  pvStack_6f0 = pvVar5;
  local_6c8 = uVar11;
  uStack_6c0 = uVar13;
  local_6a8 = pvVar4;
  pvStack_6a0 = pvVar5;
  local_5d8 = uVar11;
  uStack_5d0 = uVar13;
  local_588 = uVar11;
  uStack_580 = uVar13;
  local_538 = uVar11;
  uStack_530 = uVar13;
  local_518 = pvVar4;
  pvStack_510 = pvVar5;
  local_4c8 = pvVar4;
  pvStack_4c0 = pvVar5;
  local_498 = uVar11;
  uStack_490 = uVar13;
  local_488 = ___xmm_3e011ac1000000000000000000000000;
  uStack_480 = _UNK_152884b08;
  local_478 = ___xmm_000000003f75295a3e8361b5bd0a5fb1;
  uStack_470 = _UNK_152884978;
  local_448 = uVar11;
  uStack_440 = uVar13;
  local_428 = ___xmm_42fa0000bf1974de3f0d6b5ebe325b84;
  uStack_420 = _UNK_152885578;
  local_418 = ___xmm_000000000000000042fa000042fa0000;
  uStack_410 = _UNK_152884818;
  local_3f8 = uVar11;
  uStack_3f0 = uVar13;
  local_408 = 0;
  uStack_400 = 0;
  local_1948._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_648 = uVar20;
  uStack_640 = uVar23;
  local_508 = uVar12;
  uStack_500 = uVar14;
  local_1948._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,800,8);
  pPVar10 = &local_708;
  local_1948._Mypair._Myval2._Myend = local_1948._Mypair._Myval2._Myfirst + 200;
  local_1948._Mypair._Myval2._Mylast = local_1948._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *(float *)pPVar10;
    pPVar10 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               *)&pPVar10->field_0x4;
    *local_1948._Mypair._Myval2._Mylast = fVar1;
    local_1948._Mypair._Myval2._Mylast = local_1948._Mypair._Myval2._Mylast + 1;
  } while (pPVar10 != &local_3e8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar21 = ___xmm_3e011ac1000000000000000000000000, uVar24 = _UNK_152884b08,
     uVar15 = ___xmm_000000003f75295a3e8361b5bd0a5fb1, uVar17 = _UNK_152884978,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar21 = ___xmm_3e011ac1000000000000000000000000;
    uVar24 = _UNK_152884b08;
    uVar15 = ___xmm_000000003f75295a3e8361b5bd0a5fb1;
    uVar17 = _UNK_152884978;
  }
  local_3c8 = ___xmm_00000000431800000000000000000000;
  uStack_3c0 = _UNK_152884a58;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_378 = ___xmm_0000000043e400000000000000000000;
  uStack_370 = _UNK_152884a78;
  local_368 = 0;
  uStack_360 = 0;
  local_348 = ___xmm_00000000448e80004485000044770000;
  uStack_340 = _UNK_152884a98;
  local_328 = ___xmm_44d1000044c780000000000000000000;
  uStack_320 = _UNK_152885638;
  local_318 = 0;
  uStack_310 = 0;
  local_2f8 = ___xmm_000000004518000045134000450e8000;
  uStack_2f0 = _UNK_152884ab8;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2a8 = ___xmm_bf18ed7c45510000454c400045478000;
  uStack_2a0 = _UNK_152885838;
  local_288 = ___xmm_0000000000000000456d80004568c000;
  uStack_280 = _UNK_152884898;
  local_278 = 0;
  uStack_270 = 0;
  local_258 = ___xmm_3f7d82364589c0004587600045850000;
  uStack_250 = _UNK_152884b78;
  local_238 = 0;
  uStack_230 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1e8 = ___xmm_459cc000459a60000000000000000000;
  uStack_1e0 = _UNK_152885798;
  local_298 = ___xmm_456400003e43365f3f43bd0ebe188440;
  uStack_290 = _UNK_1528856f8;
  local_1c8 = ___xmm_0000000000000000000000003ee0722d;
  uStack_1c0 = _UNK_1528845c8;
  local_248 = ___xmm_000000003e0e83650000000000000000;
  uStack_240 = _UNK_152884948;
  local_198 = ___xmm_42a00000422000000000000000000000;
  uStack_190 = _UNK_152885558;
  local_228 = 0;
  uStack_220 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_1d8 = ___xmm_00000000000000003f66175d459f2000;
  uStack_1d0 = _UNK_1528847b8;
  local_118 = ___xmm_00000000427800004278000042780000;
  uStack_110 = _UNK_152884a18;
  local_1b8 = ___xmm_000000000000000041f0000041700000;
  uStack_1b0 = _UNK_1528847e8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_3e8 = PVar6;
  pvStack_3e0 = pvVar7;
  local_3d8 = pvVar4;
  pvStack_3d0 = pvVar5;
  local_3a8 = uVar11;
  uStack_3a0 = uVar13;
  local_388 = pvVar4;
  pvStack_380 = pvVar5;
  local_358 = uVar11;
  uStack_350 = uVar13;
  local_338 = pvVar4;
  pvStack_330 = pvVar5;
  local_308 = uVar11;
  uStack_300 = uVar13;
  local_2e8 = pvVar4;
  pvStack_2e0 = pvVar5;
  local_2b8 = uVar11;
  uStack_2b0 = uVar13;
  local_268 = uVar11;
  uStack_260 = uVar13;
  local_218 = uVar11;
  uStack_210 = uVar13;
  local_1f8 = pvVar4;
  pvStack_1f0 = pvVar5;
  local_1a8 = pvVar4;
  pvStack_1a0 = pvVar5;
  local_178 = uVar11;
  uStack_170 = uVar13;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = uVar11;
  uStack_120 = uVar13;
  local_108 = pvVar4;
  pvStack_100 = pvVar5;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = uVar11;
  uStack_d0 = uVar13;
  local_1928._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_168 = uVar21;
  uStack_160 = uVar24;
  local_158 = uVar15;
  uStack_150 = uVar17;
  local_1928._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,800,8);
  pPVar10 = &local_3e8;
  local_1928._Mypair._Myval2._Myend = local_1928._Mypair._Myval2._Myfirst + 200;
  local_1928._Mypair._Myval2._Mylast = local_1928._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *(float *)pPVar10;
    pPVar10 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               *)&pPVar10->field_0x4;
    *local_1928._Mypair._Myval2._Mylast = fVar1;
    local_1928._Mypair._Myval2._Mylast = local_1928._Mypair._Myval2._Mylast + 1;
  } while (pPVar10 != local_c8);
  local_19c8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_19c8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x80,8);
  pvVar9 = &local_1988;
  local_19c8._Mypair._Myval2._Myend = local_19c8._Mypair._Myval2._Mylast + 4;
  local_19c8._Mypair._Myval2._Myfirst = local_19c8._Mypair._Myval2._Mylast;
  do {
    local_1a08._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_19c8._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_19c8._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar9,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_1a08);
    local_19c8._Mypair._Myval2._Mylast = local_19c8._Mypair._Myval2._Mylast + 1;
    pvVar9 = pvVar9 + 1;
  } while (pvVar9 != &local_1908);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_19d8 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar23 = _UNK_152885728;
  uVar20 = ___xmm_457bc0004577000045724000456d8000;
  uVar32 = _UNK_152885708;
  uVar31 = ___xmm_4568c00045640000455f4000455a8000;
  uVar34 = _UNK_1528856e8;
  uVar33 = ___xmm_4555c00045510000454c400045478000;
  uVar30 = _UNK_1528856a8;
  uVar29 = ___xmm_4526400045218000451cc00045180000;
  uVar27 = _UNK_152885668;
  uVar25 = ___xmm_4500400044f7000044ed800044e40000;
  uVar28 = _UNK_152885658;
  uVar26 = ___xmm_44da800044d1000044c7800000000000;
  uVar22 = _UNK_152885608;
  uVar19 = ___xmm_44980000448e80004485000044770000;
  uVar24 = _UNK_1528855f8;
  uVar21 = ___xmm_443e0000442b00004418000044050000;
  uVar17 = _UNK_1528855d8;
  uVar15 = ___xmm_43e40000000000000000000000000000;
  uVar13 = _UNK_1528855c8;
  uVar11 = ___xmm_43980000436400004318000000000000;
  local_1888._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_1888._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_1858 = ___xmm_00000000000000000000000043be0000;
  uStack_1850 = _UNK_152884698;
  local_1848 = 0;
  uStack_1840 = 0;
  local_1808 = ___xmm_00000000000000004464000044510000;
  uStack_1800 = _UNK_152884848;
  local_17e8 = ___xmm_44be000044b4800044ab000044a18000;
  uStack_17e0 = _UNK_152885628;
  local_17b8 = ___xmm_45134000450e80004509c00045050000;
  uStack_17b0 = _UNK_152885698;
  local_1798 = ___xmm_4539400045348000452fc000452b0000;
  uStack_1790 = _UNK_1528856c8;
  local_1778 = 0;
  uStack_1770 = 0;
  local_1738 = ___xmm_00000000000000004582a00045804000;
  uStack_1730 = _UNK_1528848a8;
  local_1728 = ___xmm_45876000458500000000000000000000;
  uStack_1720 = _UNK_152885738;
  local_1718 = ___xmm_4590e000458e8000458c20004589c000;
  uStack_1710 = _UNK_152885758;
  local_1708 = ___xmm_459a6000459800004595a00045934000;
  uStack_1700 = _UNK_152885788;
  local_16f8 = ___xmm_45a3e00045a18000459f2000459cc000;
  uStack_16f0 = _UNK_1528857d8;
  local_16d8 = ___xmm_458c20004589c0004587600045850000;
  uStack_16d0 = _UNK_152885748;
  local_16c8 = ___xmm_4595a000459340004590e000458e8000;
  uStack_16c0 = _UNK_152885778;
  local_16a8 = ___xmm_45a8a00045a6400045a3e00045a18000;
  uStack_16a0 = _UNK_1528857e8;
  local_1698 = ___xmm_41f00000417000000000000000000000;
  uStack_1690 = _UNK_152884f18;
  local_1688 = 0;
  uStack_1680 = 0;
  local_1678 = ___xmm_42200000000000000000000000000000;
  uStack_1670 = _UNK_152885058;
  local_1668 = ___xmm_00000000000000000000000042a00000;
  uStack_1660 = _UNK_152884668;
  local_1658 = 0;
  uStack_1650 = 0;
  local_1648 = ___xmm_41700000000000000000000000000000;
  uStack_1640 = _UNK_152884d58;
  local_1838 = 0;
  uStack_1830 = 0;
  local_1638 = ___xmm_000000000000000041f0000042700000;
  uStack_1630 = _UNK_1528847f8;
  local_1788 = ___xmm_00000000000000004542c000453e0000;
  uStack_1780 = _UNK_152884888;
  local_1628 = 0;
  uStack_1620 = 0;
  local_1888._Mypair._Myval1 = PVar6;
  local_1888._Mypair._Myval2._Myfirst = pvVar7;
  local_16e8 = ___xmm_000000000000000045a8a00045a64000;
  uStack_16e0 = _UNK_1528848e8;
  local_1618 = ___xmm_00000000000000000000000042340000;
  uStack_1610 = _UNK_152884638;
  local_19f8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1868 = ___xmm_43980000436400004318000000000000;
  uStack_1860 = _UNK_1528855c8;
  local_1828 = ___xmm_43e40000000000000000000000000000;
  uStack_1820 = _UNK_1528855d8;
  local_1818 = ___xmm_443e0000442b00004418000044050000;
  uStack_1810 = _UNK_1528855f8;
  local_17f8 = ___xmm_44980000448e80004485000044770000;
  uStack_17f0 = _UNK_152885608;
  local_17d8 = ___xmm_44da800044d1000044c7800000000000;
  uStack_17d0 = _UNK_152885658;
  local_17c8 = ___xmm_4500400044f7000044ed800044e40000;
  uStack_17c0 = _UNK_152885668;
  local_17a8 = ___xmm_4526400045218000451cc00045180000;
  uStack_17a0 = _UNK_1528856a8;
  local_1768 = ___xmm_4555c00045510000454c400045478000;
  uStack_1760 = _UNK_1528856e8;
  local_1758 = ___xmm_4568c00045640000455f4000455a8000;
  uStack_1750 = _UNK_152885708;
  local_1748 = ___xmm_457bc0004577000045724000456d8000;
  uStack_1740 = _UNK_152885728;
  local_16b8 = ___xmm_459f2000459cc000459a600045980000;
  uStack_16b0 = _UNK_1528857c8;
  local_1608 = ___xmm_42780000427800000000000000000000;
  uStack_1600 = _UNK_152885368;
  local_1a08._First = &local_1888;
  local_15f8 = ___xmm_42fa000042fa000042fa000042780000;
  uStack_15f0 = _UNK_152885568;
  local_15e8 = ___xmm_431d000042fa000042fa000042fa0000;
  uStack_15e0 = _UNK_152885588;
  local_15d8 = ___xmm_431d0000431d000042f40000431d0000;
  uStack_15d0 = _UNK_152885598;
  local_1a08._Last = &local_15b8;
  local_15c8 = ___xmm_00000000430000004300000042f40000;
  uStack_15c0 = _UNK_152884a38;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_1908,
             (initializer_list<float> *)&local_1a08,&local_19f8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar11 = ___xmm_43980000436400004318000000000000, uVar13 = _UNK_1528855c8,
     uVar15 = ___xmm_43e40000000000000000000000000000, uVar17 = _UNK_1528855d8,
     uVar21 = ___xmm_443e0000442b00004418000044050000, uVar24 = _UNK_1528855f8,
     uVar19 = ___xmm_44980000448e80004485000044770000, uVar22 = _UNK_152885608,
     uVar26 = ___xmm_44da800044d1000044c7800000000000, uVar28 = _UNK_152885658,
     uVar25 = ___xmm_4500400044f7000044ed800044e40000, uVar27 = _UNK_152885668,
     uVar29 = ___xmm_4526400045218000451cc00045180000, uVar30 = _UNK_1528856a8,
     uVar33 = ___xmm_4555c00045510000454c400045478000, uVar34 = _UNK_1528856e8,
     uVar31 = ___xmm_4568c00045640000455f4000455a8000, uVar32 = _UNK_152885708,
     uVar20 = ___xmm_457bc0004577000045724000456d8000, uVar23 = _UNK_152885728,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar11 = ___xmm_43980000436400004318000000000000;
    uVar13 = _UNK_1528855c8;
    uVar15 = ___xmm_43e40000000000000000000000000000;
    uVar17 = _UNK_1528855d8;
    uVar21 = ___xmm_443e0000442b00004418000044050000;
    uVar24 = _UNK_1528855f8;
    uVar19 = ___xmm_44980000448e80004485000044770000;
    uVar22 = _UNK_152885608;
    uVar26 = ___xmm_44da800044d1000044c7800000000000;
    uVar28 = _UNK_152885658;
    uVar25 = ___xmm_4500400044f7000044ed800044e40000;
    uVar27 = _UNK_152885668;
    uVar29 = ___xmm_4526400045218000451cc00045180000;
    uVar30 = _UNK_1528856a8;
    uVar33 = ___xmm_4555c00045510000454c400045478000;
    uVar34 = _UNK_1528856e8;
    uVar31 = ___xmm_4568c00045640000455f4000455a8000;
    uVar32 = _UNK_152885708;
    uVar20 = ___xmm_457bc0004577000045724000456d8000;
    uVar23 = _UNK_152885728;
  }
  uVar18 = _UNK_1528857b8;
  uVar16 = ___xmm_459f2000459cc000459a600000000000;
  uVar14 = _UNK_152885688;
  uVar12 = ___xmm_45134000450e80000000000000000000;
  local_1a08._First = &local_15b8;
  local_15b8._Mypair._Myval1 = ___xmm_00000000000000000000000042980000;
  local_15b8._Mypair._Myval2._Myfirst = _UNK_152884658;
  local_15b8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_15b8._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_1588 = 0;
  uStack_1580 = 0;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1538 = 0;
  uStack_1530 = 0;
  local_1518 = ___xmm_000000000000000044ab000044a18000;
  uStack_1510 = _UNK_152884858;
  local_14c8 = ___xmm_0000000045348000452fc000452b0000;
  uStack_14c0 = _UNK_152884ac8;
  local_14b8 = 0;
  uStack_14b0 = 0;
  local_1468 = ___xmm_00000000000000000000000045804000;
  uStack_1460 = _UNK_1528846f8;
  local_1458 = ___xmm_45876000458500000000000000000000;
  uStack_1450 = _UNK_152885738;
  local_1448 = ___xmm_4590e000458e8000458c20004589c000;
  uStack_1440 = _UNK_152885758;
  local_1438 = ___xmm_459a6000459800004595a00045934000;
  uStack_1430 = _UNK_152885788;
  local_1428 = ___xmm_0000000000000000459f2000459cc000;
  uStack_1420 = _UNK_1528848d8;
  local_1418 = 0;
  uStack_1410 = 0;
  local_1408 = ___xmm_458c20004589c0004587600045850000;
  uStack_1400 = _UNK_152885748;
  local_13f8 = ___xmm_000000000000000000000000458e8000;
  uStack_13f0 = _UNK_152884718;
  local_13d8 = ___xmm_45a8a00045a6400045a3e00045a18000;
  uStack_13d0 = _UNK_1528857e8;
  local_13c8 = ___xmm_41f00000417000000000000000000000;
  uStack_13c0 = _UNK_152884f18;
  local_13b8 = 0;
  uStack_13b0 = 0;
  local_13a8 = ___xmm_42200000000000000000000000000000;
  uStack_13a0 = _UNK_152885058;
  local_1398 = ___xmm_00000000000000000000000042a00000;
  uStack_1390 = _UNK_152884668;
  local_1388 = 0;
  uStack_1380 = 0;
  local_1378 = ___xmm_41700000000000000000000000000000;
  uStack_1370 = _UNK_152884d58;
  local_1368 = ___xmm_000000000000000041f0000042700000;
  uStack_1360 = _UNK_1528847f8;
  local_1358 = 0;
  uStack_1350 = 0;
  local_1348 = ___xmm_00000000000000000000000042340000;
  uStack_1340 = _UNK_152884638;
  local_1338 = ___xmm_42780000427800000000000000000000;
  uStack_1330 = _UNK_152885368;
  local_1328 = ___xmm_42fa000042fa000042fa000042780000;
  uStack_1320 = _UNK_152885568;
  local_1318 = ___xmm_431d000042fa000042fa000042fa0000;
  uStack_1310 = _UNK_152885588;
  local_1308 = ___xmm_431d0000431d000042f40000431d0000;
  uStack_1300 = _UNK_152885598;
  local_1a08._Last = &local_12e8;
  local_12f8 = ___xmm_00000000000000000000000042f40000;
  uStack_12f0 = _UNK_152884678;
  local_19f0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_1578 = 0;
  uStack_1570 = 0;
  local_14e8 = ___xmm_45134000450e80000000000000000000;
  uStack_14e0 = _UNK_152885688;
  local_14a8 = 0;
  uStack_14a0 = 0;
  local_13e8 = ___xmm_459f2000459cc000459a600000000000;
  uStack_13e0 = _UNK_1528857b8;
  local_1598 = uVar11;
  uStack_1590 = uVar13;
  local_1558 = uVar15;
  uStack_1550 = uVar17;
  local_1548 = uVar21;
  uStack_1540 = uVar24;
  local_1528 = uVar19;
  uStack_1520 = uVar22;
  local_1508 = uVar26;
  uStack_1500 = uVar28;
  local_14f8 = uVar25;
  uStack_14f0 = uVar27;
  local_14d8 = uVar29;
  uStack_14d0 = uVar30;
  local_1498 = uVar33;
  uStack_1490 = uVar34;
  local_1488 = uVar31;
  uStack_1480 = uVar32;
  local_1478 = uVar20;
  uStack_1470 = uVar23;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_18e8,(initializer_list<float> *)&local_1a08,&local_19f0);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar12 = ___xmm_45134000450e80000000000000000000, uVar14 = _UNK_152885688,
     uVar16 = ___xmm_459f2000459cc000459a600000000000, uVar18 = _UNK_1528857b8,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar12 = ___xmm_45134000450e80000000000000000000;
    uVar14 = _UNK_152885688;
    uVar16 = ___xmm_459f2000459cc000459a600000000000;
    uVar18 = _UNK_1528857b8;
  }
  pvVar4 = _UNK_152884658;
  PVar6 = ___xmm_00000000000000000000000042980000;
  local_12e8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_12e8._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_12b8 = 0;
  uStack_12b0 = 0;
  local_1298 = 0;
  uStack_1290 = 0;
  local_1278 = ___xmm_00000000442b00004418000044050000;
  uStack_1270 = _UNK_152884a88;
  local_1268 = 0;
  uStack_1260 = 0;
  local_1248 = 0;
  uStack_1240 = 0;
  local_1228 = ___xmm_00000000000000000000000044e40000;
  uStack_1220 = _UNK_1528846a8;
  local_1208 = ___xmm_4526400045218000451cc00045180000;
  uStack_1200 = _UNK_1528856a8;
  local_12c8 = ___xmm_00000000436400004318000000000000;
  uStack_12c0 = _UNK_152884a68;
  local_11e8 = 0;
  uStack_11e0 = 0;
  local_12a8 = 0;
  uStack_12a0 = 0;
  local_11c8 = ___xmm_4555c00045510000454c400045478000;
  uStack_11c0 = _UNK_1528856e8;
  local_1288 = ___xmm_43e40000000000000000000000000000;
  uStack_1280 = _UNK_1528855d8;
  local_11a8 = ___xmm_000000004577000045724000456d8000;
  uStack_11a0 = _UNK_152884ad8;
  local_1258 = ___xmm_44980000448e80004485000044770000;
  uStack_1250 = _UNK_152885608;
  local_1198 = 0;
  uStack_1190 = 0;
  local_1238 = ___xmm_44da800044d1000044c7800000000000;
  uStack_1230 = _UNK_152885658;
  local_1178 = ___xmm_4590e000458e8000458c20004589c000;
  uStack_1170 = _UNK_152885758;
  local_11f8 = ___xmm_000000000000000000000000452b0000;
  uStack_11f0 = _UNK_1528846c8;
  local_1158 = 0;
  uStack_1150 = 0;
  local_11d8 = 0;
  uStack_11d0 = 0;
  local_1138 = ___xmm_00000000000000000000000045850000;
  uStack_1130 = _UNK_152884708;
  local_11b8 = ___xmm_4568c00045640000455f4000455a8000;
  uStack_11b0 = _UNK_152885708;
  local_1128 = 0;
  uStack_1120 = 0;
  local_1188 = ___xmm_45876000458500000000000000000000;
  uStack_1180 = _UNK_152885738;
  local_1108 = ___xmm_45a8a00045a6400045a3e00045a18000;
  uStack_1100 = _UNK_1528857e8;
  local_1168 = ___xmm_00000000000000004595a00045934000;
  uStack_1160 = _UNK_1528848c8;
  local_10e8 = 0;
  uStack_10e0 = 0;
  local_1148 = 0;
  uStack_1140 = 0;
  local_10c8 = ___xmm_00000000000000000000000042a00000;
  uStack_10c0 = _UNK_152884668;
  local_10f8 = ___xmm_41f00000417000000000000000000000;
  uStack_10f0 = _UNK_152884f18;
  local_10b8 = 0;
  uStack_10b0 = 0;
  local_10d8 = ___xmm_42200000000000000000000000000000;
  uStack_10d0 = _UNK_152885058;
  local_1098 = ___xmm_000000000000000041f0000000000000;
  uStack_1090 = _UNK_1528847d8;
  local_10a8 = ___xmm_41700000000000000000000000000000;
  uStack_10a0 = _UNK_152884d58;
  local_1088 = 0;
  uStack_1080 = 0;
  local_1078 = 0;
  uStack_1070 = 0;
  local_1068 = ___xmm_42780000427800000000000000000000;
  uStack_1060 = _UNK_152885368;
  local_19e8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
               &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_12e8._Mypair._Myval1 = ___xmm_00000000000000000000000042980000;
  local_12e8._Mypair._Myval2._Myfirst = _UNK_152884658;
  local_1058 = ___xmm_42fa000042fa000042fa000042780000;
  uStack_1050 = _UNK_152885568;
  local_1a08._First = &local_12e8;
  local_1048 = ___xmm_0000000042fa000042fa000042fa0000;
  uStack_1040 = _UNK_152884a28;
  local_1a08._Last = &local_1018;
  local_1038 = 0;
  uStack_1030 = 0;
  local_1028 = 0;
  uStack_1020 = 0;
  local_1218 = uVar12;
  uStack_1210 = uVar14;
  local_1118 = uVar16;
  uStack_1110 = uVar18;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_18c8,(initializer_list<float> *)&local_1a08,&local_19e8);
  local_19e0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar8 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_19e0);
  local_ff8 = ___xmm_00000000000000004318000000000000;
  uStack_ff0 = _UNK_152884828;
  local_fd8 = 0;
  uStack_fd0 = 0;
  local_fb8 = ___xmm_43e40000000000000000000000000000;
  uStack_fb0 = _UNK_1528855d8;
  local_1018._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_1018._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_fe8 = 0;
  uStack_fe0 = 0;
  local_fc8 = 0;
  uStack_fc0 = 0;
  local_fa8 = 0;
  uStack_fa0 = 0;
  local_f98 = 0;
  uStack_f90 = 0;
  local_f88 = ___xmm_00000000448e80004485000044770000;
  uStack_f80 = _UNK_152884a98;
  local_f68 = ___xmm_0000000044d1000044c7800000000000;
  uStack_f60 = _UNK_152884aa8;
  local_f78 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f50 = 0;
  local_f48 = ___xmm_45134000450e80000000000000000000;
  uStack_f40 = _UNK_152885688;
  local_f38 = ___xmm_00000000000000000000000045180000;
  uStack_f30 = _UNK_1528846b8;
  local_f18 = 0;
  uStack_f10 = 0;
  local_f28 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f00 = 0;
  local_ef8 = ___xmm_4555c00045510000454c400045478000;
  uStack_ef0 = _UNK_1528856e8;
  local_ee8 = ___xmm_4568c00045640000455f4000455a8000;
  uStack_ee0 = _UNK_152885708;
  local_ed8 = ___xmm_000000000000000000000000456d8000;
  uStack_ed0 = _UNK_1528846e8;
  local_ec8 = 0;
  uStack_ec0 = 0;
  local_eb8 = ___xmm_45876000458500000000000000000000;
  uStack_eb0 = _UNK_152885738;
  local_ea8 = ___xmm_0000000000000000458c20004589c000;
  uStack_ea0 = _UNK_1528848b8;
  local_e88 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e60 = 0;
  local_e98 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e70 = 0;
  local_e58 = 0;
  uStack_e50 = 0;
  local_e48 = ___xmm_459f2000459cc000459a600000000000;
  uStack_e40 = _UNK_1528857b8;
  local_e38 = ___xmm_00000000000000000000000045a18000;
  uStack_e30 = _UNK_152884748;
  local_e28 = ___xmm_41f00000417000000000000000000000;
  uStack_e20 = _UNK_152884f18;
  local_e18 = 0;
  uStack_e10 = 0;
  local_e08 = ___xmm_42200000000000000000000000000000;
  uStack_e00 = _UNK_152885058;
  local_df8 = ___xmm_00000000000000000000000042a00000;
  uStack_df0 = _UNK_152884668;
  local_dd8 = ___xmm_41700000000000000000000000000000;
  uStack_dd0 = _UNK_152884d58;
  local_1018._Mypair._Myval1 = PVar6;
  local_1018._Mypair._Myval2._Myfirst = pvVar4;
  local_de8 = 0;
  uStack_de0 = 0;
  local_1a08._First = &local_1018;
  local_dc8 = ___xmm_000000000000000041f0000000000000;
  uStack_dc0 = _UNK_1528847d8;
  local_db8 = 0;
  uStack_db0 = 0;
  local_1a08._Last = &local_d48;
  local_da8 = 0;
  uStack_da0 = 0;
  local_d98 = ___xmm_42780000427800000000000000000000;
  uStack_d90 = _UNK_152885368;
  local_d88 = ___xmm_00000000000000000000000042780000;
  uStack_d80 = _UNK_152884648;
  local_d78 = 0;
  uStack_d70 = 0;
  local_d58 = 0;
  uStack_d50 = 0;
  local_d68 = 0;
  uStack_d60 = 0;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_18a8,(initializer_list<float> *)&local_1a08,pPVar8);
  local_1a08._First = &local_1908;
  local_1a08._Last = &local_1888;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_19a8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_1a08,&local_19d8);
  local_1a08._First = &local_19c8;
  local_1a08._Last = &local_1988;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&valuesPerLOD,&local_1a08,&local_19d0);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_19a8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_19c8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_18a8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_18c8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_18e8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_1908);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_1928);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_1948);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_1968);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_1988);
  atexit(_dynamic_atexit_destructor_for__valuesPerLOD__);
  return;
}

// unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_><std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>,0> @ 14c479c00

unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
* __thiscall
std::
unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
::
unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_><std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>,0>
          (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
           *this,unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *param_1)

{
  JointGroupLinearCalculationStrategy<float> *pJVar1;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  *puVar2;
  undefined8 uVar3;
  
  pJVar1 = (param_1->_Mypair)._Myval2;
  (param_1->_Mypair)._Myval2 = (JointGroupLinearCalculationStrategy<float> *)0x0;
  *(undefined8 *)&(this->_Mypair)._Myval1.field_0x38 = 0;
  puVar2 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
             **)&(param_1->_Mypair)._Myval1.field_0x38;
  if (puVar2 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *)0x0) {
    if (puVar2 == param_1) {
      uVar3 = (**(code **)(*(longlong *)&(puVar2->_Mypair)._Myval1 + 8))(puVar2,this);
      *(undefined8 *)&(this->_Mypair)._Myval1.field_0x38 = uVar3;
      puVar2 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 **)&(param_1->_Mypair)._Myval1.field_0x38;
      if (puVar2 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                     *)0x0) {
        (**(code **)(*(longlong *)&(puVar2->_Mypair)._Myval1 + 0x20))(puVar2,puVar2 != param_1);
        *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
      }
    }
    else {
      *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
        **)&(this->_Mypair)._Myval1.field_0x38 = puVar2;
      *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
    }
  }
  (this->_Mypair)._Myval2 = pJVar1;
  return this;
}

// _Assign_counted_range<unsigned_short_const_*> @ 14c479c90

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
_Assign_counted_range<unsigned_short_const_*>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *this,ushort *param_1,ulong64 param_2)

{
  ushort uVar1;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar4 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar4 >> 1;
  if (uVar7 < param_2) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar6 = 0x7fffffffffffffff;
    if ((uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1)) &&
       (uVar6 = uVar7 + (uVar7 >> 1), uVar6 < param_2)) {
      uVar6 = param_2;
    }
    if (puVar4 != (ushort *)0x0) {
      PVar2 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,puVar4,uVar7 * 2,8);
      (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
      (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
      (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
    }
    PVar2 = (this->_Mypair)._Myval1;
    puVar4 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar6 * 2,8);
    (this->_Mypair)._Myval2._Myfirst = puVar4;
    (this->_Mypair)._Myval2._Mylast = puVar4;
    (this->_Mypair)._Myval2._Myend = puVar4 + uVar6;
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar4;
  }
  else {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar4 >> 1;
    if (uVar7 < param_2) {
      memmove(puVar4,param_1,uVar7 * 2);
      puVar4 = (this->_Mypair)._Myval2._Mylast;
      lVar5 = param_2 - uVar7;
      if (lVar5 != 0) {
        lVar3 = uVar7 * 2 - (longlong)puVar4;
        do {
          *puVar4 = *(ushort *)((longlong)param_1 + lVar3 + (longlong)puVar4);
          puVar4 = puVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = puVar4;
    }
    else {
      memmove(puVar4,param_1,param_2 * 2);
      (this->_Mypair)._Myval2._Mylast = puVar4 + param_2;
    }
  }
  return;
}

// _Assign_counted_range<unsigned_short_const_*> @ 14c479df0

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
_Assign_counted_range<unsigned_short_const_*>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this,ushort *param_1,ulong64 param_2)

{
  ushort uVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar4 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar4 >> 1;
  if (uVar7 < param_2) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar6 = 0x7fffffffffffffff;
    if ((uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1)) &&
       (uVar6 = uVar7 + (uVar7 >> 1), uVar6 < param_2)) {
      uVar6 = param_2;
    }
    if (puVar4 != (ushort *)0x0) {
      PVar2 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,puVar4,uVar7 * 2,0x40);
      (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
      (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
      (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
    }
    PVar2 = (this->_Mypair)._Myval1;
    puVar4 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar6 * 2,0x40);
    (this->_Mypair)._Myval2._Myfirst = puVar4;
    (this->_Mypair)._Myval2._Mylast = puVar4;
    (this->_Mypair)._Myval2._Myend = puVar4 + uVar6;
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar4;
  }
  else {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar4 >> 1;
    if (uVar7 < param_2) {
      memmove(puVar4,param_1,uVar7 * 2);
      puVar4 = (this->_Mypair)._Myval2._Mylast;
      lVar5 = param_2 - uVar7;
      if (lVar5 != 0) {
        lVar3 = uVar7 * 2 - (longlong)puVar4;
        do {
          *puVar4 = *(ushort *)((longlong)param_1 + lVar3 + (longlong)puVar4);
          puVar4 = puVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = puVar4;
    }
    else {
      memmove(puVar4,param_1,param_2 * 2);
      (this->_Mypair)._Myval2._Mylast = puVar4 + param_2;
    }
  }
  return;
}

// _Assign_counted_range<rl4::LODRegion_const_*> @ 14c479f50

void __thiscall
std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
_Assign_counted_range<rl4::LODRegion_const_*>
          (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
           *this,LODRegion *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar3;
  undefined8 uVar4;
  uint uVar5;
  LODRegion *pLVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pLVar6 = (this->_Mypair)._Myval2._Myfirst;
  uVar10 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pLVar6) / 0x18;
  if (uVar10 < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar9 = 0xaaaaaaaaaaaaaaa;
    if ((uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) &&
       (uVar9 = uVar10 + (uVar10 >> 1), uVar9 < param_2)) {
      uVar9 = param_2;
    }
    if (pLVar6 != (LODRegion *)0x0) {
      PVar3 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar3 + 0x10))(PVar3,pLVar6,uVar10 * 0x18,8);
      (this->_Mypair)._Myval2._Myfirst = (LODRegion *)0x0;
      (this->_Mypair)._Myval2._Mylast = (LODRegion *)0x0;
      (this->_Mypair)._Myval2._Myend = (LODRegion *)0x0;
    }
    PVar3 = (this->_Mypair)._Myval1;
    pLVar6 = (LODRegion *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar9 * 0x18,8);
    (this->_Mypair)._Myval2._Myfirst = pLVar6;
    (this->_Mypair)._Myval2._Mylast = pLVar6;
    (this->_Mypair)._Myval2._Myend = pLVar6 + uVar9;
    pLVar6 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar5 = (param_1->inputLODs).sizeAlignedTo4;
      uVar2 = *(undefined8 *)&(param_1->inputLODs).sizeAlignedTo8;
      (pLVar6->inputLODs).size = (param_1->inputLODs).size;
      (pLVar6->inputLODs).sizeAlignedTo4 = uVar5;
      *(undefined8 *)&(pLVar6->inputLODs).sizeAlignedTo8 = uVar2;
      uVar5 = (param_1->outputLODs).sizePaddedToSecondLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToLastFullBlock =
           (param_1->outputLODs).sizePaddedToLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToSecondLastFullBlock = uVar5;
      pLVar6 = pLVar6 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pLVar6;
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    uVar10 = (lVar7 >> 2) - (lVar7 >> 0x3f);
    if (uVar10 < param_2) {
      memmove(pLVar6,param_1,uVar10 * 0x18);
      pLVar6 = (this->_Mypair)._Myval2._Mylast;
      lVar7 = param_2 - uVar10;
      if (lVar7 != 0) {
        lVar8 = (longlong)param_1 + (uVar10 * 0x18 - (longlong)pLVar6);
        do {
          puVar1 = (undefined8 *)(lVar8 + (longlong)pLVar6);
          uVar2 = *puVar1;
          uVar4 = puVar1[1];
          (pLVar6->inputLODs).size = (int)uVar2;
          (pLVar6->inputLODs).sizeAlignedTo4 = (int)((ulonglong)uVar2 >> 0x20);
          *(undefined8 *)&(pLVar6->inputLODs).sizeAlignedTo8 = uVar4;
          uVar2 = *(undefined8 *)(lVar8 + 0x10 + (longlong)pLVar6);
          (pLVar6->outputLODs).sizePaddedToLastFullBlock = (int)uVar2;
          (pLVar6->outputLODs).sizePaddedToSecondLastFullBlock = (int)((ulonglong)uVar2 >> 0x20);
          pLVar6 = pLVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      memmove(pLVar6,param_1,param_2 * 0x18);
      pLVar6 = pLVar6 + param_2;
    }
  }
  (this->_Mypair)._Myval2._Mylast = pLVar6;
  return;
}

// _Copy_backward_memmove<float_*,float_*> @ 14c47a110

float * __cdecl
std::_Copy_backward_memmove<float_*,float_*>(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  
  pfVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pfVar1;
}

// _Copy_backward_memmove<rl4::LODRegion_*,rl4::LODRegion_*> @ 14c47a130

LODRegion * __cdecl
std::_Copy_backward_memmove<rl4::LODRegion_*,rl4::LODRegion_*>
          (LODRegion *param_1,LODRegion *param_2,LODRegion *param_3)

{
  LODRegion *pLVar1;
  
  pLVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pLVar1;
}

// _Copy_memmove<rl4::LODRegion_*,rl4::LODRegion_*> @ 14c47a150

LODRegion * __cdecl
std::_Copy_memmove<rl4::LODRegion_*,rl4::LODRegion_*>
          (LODRegion *param_1,LODRegion *param_2,LODRegion *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (LODRegion *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_n<rl4::LODRegion_const_*,rl4::LODRegion_*> @ 14c47a190

LODRegion * __cdecl
std::_Copy_memmove_n<rl4::LODRegion_const_*,rl4::LODRegion_*>
          (LODRegion *param_1,ulong64 param_2,LODRegion *param_3)

{
  memmove(param_3,param_1,param_2 * 0x18);
  return param_3 + param_2;
}

// _Copy_memmove_tail<rl4::LODRegion_*> @ 14c47a1d0

LODRegion * __cdecl
std::_Copy_memmove_tail<rl4::LODRegion_*>
          (char *param_1,LODRegion *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (LODRegion *)((longlong)&(param_2->inputLODs).size + param_3);
}

// _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47a200

void __cdecl
std::
_Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_2,PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                   *param_3)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar1;
  ushort *puVar2;
  ushort **ppuVar3;
  
  if (param_1 != param_2) {
    ppuVar3 = &(param_1->_Mypair)._Myval2._Myend;
    do {
      puVar2 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar3 + -2))->_Myfirst;
      if (puVar2 != (ushort *)0x0) {
        (**(code **)(*(longlong *)ppuVar3[-3] + 0x10))
                  (ppuVar3[-3],puVar2,((longlong)*ppuVar3 - (longlong)puVar2 >> 1) * 2,0x40);
        ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar3 + -2))->_Myfirst =
             (ushort *)0x0;
        ppuVar3[-1] = (ushort *)0x0;
        *ppuVar3 = (ushort *)0x0;
      }
      pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                *)(ppuVar3 + 1);
      ppuVar3 = ppuVar3 + 4;
    } while (pvVar1 != param_2);
  }
  return;
}

// _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47a280

void __cdecl
std::
_Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_2,PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   *param_3)

{
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> **ppvVar2
  ;
  
  if (param_1 != param_2) {
    ppvVar2 = &(param_1->_Mypair)._Myval2._Myend;
    do {
      if (((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
            *)(ppvVar2 + -2))->_Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *)0x0) {
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst,ppvVar2[-1],
                   (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)(ppvVar2 + -3));
        (**(code **)(*(longlong *)ppvVar2[-3] + 0x10))
                  (ppvVar2[-3],
                   ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst,
                   (longlong)*ppvVar2 -
                   (longlong)
                   ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst & 0xffffffffffffffe0,8);
        ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
          *)(ppvVar2 + -2))->_Myfirst =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)0x0;
        ppvVar2[-1] = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                       *)0x0;
        *ppvVar2 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                    *)0x0;
      }
      pvVar1 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                *)(ppvVar2 + 1);
      ppvVar2 = ppvVar2 + 4;
    } while (pvVar1 != param_2);
  }
  return;
}

// _Emplace_reallocate<rl4::bpcm::JointGroup_const_&> @ 14c47a310

JointGroup * __thiscall
std::
vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
::_Emplace_reallocate<rl4::bpcm::JointGroup_const_&>
          (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
           *this,JointGroup *param_1,JointGroup *param_2)

{
  ulonglong uVar1;
  JointGroup *pJVar2;
  PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource> PVar3;
  JointGroup *pJVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  JointGroup *pJVar9;
  JointGroup *pJVar10;
  longlong lVar11;
  JointGroup *pJVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  pJVar2 = (this->_Mypair)._Myval2._Myfirst;
  lVar11 = ((longlong)param_1 - (longlong)pJVar2) / 0x12 +
           ((longlong)param_1 - (longlong)pJVar2 >> 0x3f);
  lVar14 = (lVar11 >> 1) - (lVar11 >> 0x3f);
  lVar11 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pJVar2) / 0x24;
  if (lVar11 != 0x71c71c71c71c71c) {
    uVar1 = lVar11 + 1;
    uVar5 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pJVar2) / 0x24;
    uVar13 = 0x71c71c71c71c71c;
    if ((uVar5 <= 0x71c71c71c71c71c - (uVar5 >> 1)) &&
       (uVar13 = (uVar5 >> 1) + uVar5, uVar13 < uVar1)) {
      uVar13 = uVar1;
    }
    PVar3 = (this->_Mypair)._Myval1;
    pJVar9 = (JointGroup *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar13 * 0x24,8);
    uVar6 = param_2->inputIndicesOffset;
    uVar7 = param_2->outputIndicesOffset;
    uVar8 = param_2->lodsOffset;
    pJVar2 = pJVar9 + lVar14;
    pJVar2->valuesOffset = param_2->valuesOffset;
    pJVar2->inputIndicesOffset = uVar6;
    pJVar2->outputIndicesOffset = uVar7;
    pJVar2->lodsOffset = uVar8;
    pJVar2 = pJVar9 + lVar14;
    uVar6 = param_2->outputRotationLODsOffset;
    uVar7 = param_2->valuesSize;
    uVar8 = param_2->colCount;
    pJVar2->outputRotationIndicesOffset = param_2->outputRotationIndicesOffset;
    pJVar2->outputRotationLODsOffset = uVar6;
    pJVar2->valuesSize = uVar7;
    pJVar2->colCount = uVar8;
    pJVar2->rowCount = param_2->rowCount;
    pJVar4 = (this->_Mypair)._Myval2._Mylast;
    pJVar10 = (this->_Mypair)._Myval2._Myfirst;
    pJVar12 = pJVar9;
    if (param_1 == pJVar4) {
      for (; pJVar10 != pJVar4; pJVar10 = pJVar10 + 1) {
        uVar6 = pJVar10->inputIndicesOffset;
        uVar7 = pJVar10->outputIndicesOffset;
        uVar8 = pJVar10->lodsOffset;
        pJVar12->valuesOffset = pJVar10->valuesOffset;
        pJVar12->inputIndicesOffset = uVar6;
        pJVar12->outputIndicesOffset = uVar7;
        pJVar12->lodsOffset = uVar8;
        uVar6 = pJVar10->outputRotationLODsOffset;
        uVar7 = pJVar10->valuesSize;
        uVar8 = pJVar10->colCount;
        pJVar12->outputRotationIndicesOffset = pJVar10->outputRotationIndicesOffset;
        pJVar12->outputRotationLODsOffset = uVar6;
        pJVar12->valuesSize = uVar7;
        pJVar12->colCount = uVar8;
        pJVar12->rowCount = pJVar10->rowCount;
        pJVar12 = pJVar12 + 1;
      }
    }
    else {
      for (; pJVar10 != param_1; pJVar10 = pJVar10 + 1) {
        uVar6 = pJVar10->inputIndicesOffset;
        uVar7 = pJVar10->outputIndicesOffset;
        uVar8 = pJVar10->lodsOffset;
        pJVar12->valuesOffset = pJVar10->valuesOffset;
        pJVar12->inputIndicesOffset = uVar6;
        pJVar12->outputIndicesOffset = uVar7;
        pJVar12->lodsOffset = uVar8;
        uVar6 = pJVar10->outputRotationLODsOffset;
        uVar7 = pJVar10->valuesSize;
        uVar8 = pJVar10->colCount;
        pJVar12->outputRotationIndicesOffset = pJVar10->outputRotationIndicesOffset;
        pJVar12->outputRotationLODsOffset = uVar6;
        pJVar12->valuesSize = uVar7;
        pJVar12->colCount = uVar8;
        pJVar12->rowCount = pJVar10->rowCount;
        pJVar12 = pJVar12 + 1;
      }
      pJVar4 = (this->_Mypair)._Myval2._Mylast;
      pJVar10 = pJVar2;
      for (; param_1 != pJVar4; param_1 = param_1 + 1) {
        pJVar12 = pJVar10 + 1;
        uVar6 = param_1->inputIndicesOffset;
        uVar7 = param_1->outputIndicesOffset;
        uVar8 = param_1->lodsOffset;
        pJVar12->valuesOffset = param_1->valuesOffset;
        pJVar12->inputIndicesOffset = uVar6;
        pJVar10[1].outputIndicesOffset = uVar7;
        pJVar10[1].lodsOffset = uVar8;
        uVar6 = param_1->outputRotationLODsOffset;
        uVar7 = param_1->valuesSize;
        uVar8 = param_1->colCount;
        pJVar10[1].outputRotationIndicesOffset = param_1->outputRotationIndicesOffset;
        pJVar10[1].outputRotationLODsOffset = uVar6;
        pJVar10[1].valuesSize = uVar7;
        pJVar10[1].colCount = uVar8;
        pJVar10[1].rowCount = param_1->rowCount;
        pJVar10 = pJVar12;
      }
    }
    _Change_array(this,pJVar9,uVar1,uVar13);
    return pJVar2;
  }
                    /* WARNING: Subroutine does not return */
  _Xlength();
}

// _Insert_counted_range<unsigned_short_const_*> @ 14c47a4e0

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
_Insert_counted_range<unsigned_short_const_*>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this,_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_>
                 param_1,ushort *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  ushort *puVar2;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar3;
  _Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_> _Var4;
  ushort *puVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  size_t _Size;
  ulonglong uVar11;
  
  if (param_3 != 0) {
    puVar2 = (this->_Mypair)._Myval2._Mylast;
    puVar5 = (this->_Mypair)._Myval2._Myend;
    puVar9 = (this->_Mypair)._Myval2._Myfirst;
    if (param_3 <= (ulonglong)((longlong)puVar5 - (longlong)puVar2 >> 1)) {
      if (param_3 < (ulonglong)((longlong)puVar2 - (longlong)param_1._Ptr >> 1)) {
        puVar5 = puVar2;
        for (puVar9 = puVar2 + -param_3; puVar9 != puVar2; puVar9 = puVar9 + 1) {
          *puVar5 = *puVar9;
          puVar5 = puVar5 + 1;
        }
        _Size = (longlong)(puVar2 + -param_3) - (longlong)param_1._Ptr;
        (this->_Mypair)._Myval2._Mylast = puVar5;
        memmove((void *)((longlong)puVar2 - _Size),param_1._Ptr,_Size);
        lVar6 = (longlong)param_1._Ptr - (longlong)param_2;
        do {
          *(ushort *)((longlong)param_2 + lVar6) = *param_2;
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return;
      }
      puVar5 = param_1._Ptr + param_3;
      for (_Var4._Ptr = param_1._Ptr; _Var4._Ptr != puVar2; _Var4._Ptr = _Var4._Ptr + 1) {
        *puVar5 = *_Var4._Ptr;
        puVar5 = puVar5 + 1;
      }
      (this->_Mypair)._Myval2._Mylast = puVar5;
      lVar6 = (longlong)param_1._Ptr - (longlong)param_2;
      do {
        *(ushort *)((longlong)param_2 + lVar6) = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    lVar6 = (longlong)puVar2 - (longlong)puVar9 >> 1;
    if (0x7fffffffffffffffU - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar8 = (longlong)puVar5 - (longlong)puVar9 >> 1;
    uVar1 = lVar6 + param_3;
    uVar11 = 0x7fffffffffffffff;
    if ((uVar8 <= 0x7fffffffffffffff - (uVar8 >> 1)) &&
       (uVar11 = (uVar8 >> 1) + uVar8, uVar11 < uVar1)) {
      uVar11 = uVar1;
    }
    PVar3 = (this->_Mypair)._Myval1;
    puVar5 = (ushort *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar11 * 2,0x40);
    lVar10 = (longlong)param_1._Ptr - (longlong)puVar9 >> 1;
    lVar6 = lVar10 * 2 - (longlong)param_2;
    uVar7 = param_3;
    do {
      *(ushort *)(lVar6 + (longlong)puVar5 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((param_3 == 1) && (param_1._Ptr == puVar2)) {
      if (puVar9 != puVar2) {
        lVar6 = (longlong)puVar5 - (longlong)puVar9;
        do {
          *(ushort *)((longlong)puVar9 + lVar6) = *puVar9;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar2);
      }
    }
    else {
      if (puVar9 != param_1._Ptr) {
        lVar6 = (longlong)puVar5 - (longlong)puVar9;
        do {
          *(ushort *)((longlong)puVar9 + lVar6) = *puVar9;
          puVar9 = puVar9 + 1;
        } while (puVar9 != param_1._Ptr);
      }
      if (param_1._Ptr != puVar2) {
        lVar6 = (lVar10 + param_3) * 2 - (longlong)param_1._Ptr;
        do {
          *(param_1._Ptr + lVar6 + (longlong)puVar5) = *param_1._Ptr;
          param_1._Ptr = param_1._Ptr + 1;
        } while (param_1._Ptr != puVar2);
      }
    }
    _Change_array(this,puVar5,uVar1,uVar11);
  }
  return;
}

// _Insert_counted_range<float_const_*> @ 14c47a740

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
_Insert_counted_range<float_const_*>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          _Vector_const_iterator<std::_Vector_val<std::_Simple_types<float>_>_> param_1,
          float *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  float *pfVar2;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar3;
  _Vector_const_iterator<std::_Vector_val<std::_Simple_types<float>_>_> _Var4;
  float *pfVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  size_t _Size;
  ulonglong uVar11;
  
  if (param_3 != 0) {
    pfVar2 = (this->_Mypair)._Myval2._Mylast;
    pfVar5 = (this->_Mypair)._Myval2._Myend;
    pfVar9 = (this->_Mypair)._Myval2._Myfirst;
    if (param_3 <= (ulonglong)((longlong)pfVar5 - (longlong)pfVar2 >> 2)) {
      if (param_3 < (ulonglong)((longlong)pfVar2 - (longlong)param_1._Ptr >> 2)) {
        pfVar5 = pfVar2;
        for (pfVar9 = pfVar2 + -param_3; pfVar9 != pfVar2; pfVar9 = pfVar9 + 1) {
          *pfVar5 = *pfVar9;
          pfVar5 = pfVar5 + 1;
        }
        _Size = (longlong)(pfVar2 + -param_3) - (longlong)param_1._Ptr;
        (this->_Mypair)._Myval2._Mylast = pfVar5;
        memmove((void *)((longlong)pfVar2 - _Size),param_1._Ptr,_Size);
        lVar6 = (longlong)param_1._Ptr - (longlong)param_2;
        do {
          *(float *)(lVar6 + (longlong)param_2) = *param_2;
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return;
      }
      pfVar5 = param_1._Ptr + param_3;
      for (_Var4._Ptr = param_1._Ptr; _Var4._Ptr != pfVar2; _Var4._Ptr = _Var4._Ptr + 1) {
        *pfVar5 = *_Var4._Ptr;
        pfVar5 = pfVar5 + 1;
      }
      (this->_Mypair)._Myval2._Mylast = pfVar5;
      lVar6 = (longlong)param_1._Ptr - (longlong)param_2;
      do {
        *(float *)(lVar6 + (longlong)param_2) = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    lVar6 = (longlong)pfVar2 - (longlong)pfVar9 >> 2;
    if (0x3fffffffffffffffU - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar8 = (longlong)pfVar5 - (longlong)pfVar9 >> 2;
    uVar1 = lVar6 + param_3;
    uVar11 = 0x3fffffffffffffff;
    if ((uVar8 <= 0x3fffffffffffffff - (uVar8 >> 1)) &&
       (uVar11 = (uVar8 >> 1) + uVar8, uVar11 < uVar1)) {
      uVar11 = uVar1;
    }
    PVar3 = (this->_Mypair)._Myval1;
    pfVar5 = (float *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar11 * 4,0x40);
    lVar10 = (longlong)param_1._Ptr - (longlong)pfVar9 >> 2;
    lVar6 = lVar10 * 4 - (longlong)param_2;
    uVar7 = param_3;
    do {
      *(float *)(lVar6 + (longlong)pfVar5 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((param_3 == 1) && (param_1._Ptr == pfVar2)) {
      if (pfVar9 != pfVar2) {
        lVar6 = (longlong)pfVar5 - (longlong)pfVar9;
        do {
          *(float *)(lVar6 + (longlong)pfVar9) = *pfVar9;
          pfVar9 = pfVar9 + 1;
        } while (pfVar9 != pfVar2);
      }
    }
    else {
      if (pfVar9 != param_1._Ptr) {
        lVar6 = (longlong)pfVar5 - (longlong)pfVar9;
        do {
          *(float *)(lVar6 + (longlong)pfVar9) = *pfVar9;
          pfVar9 = pfVar9 + 1;
        } while (pfVar9 != param_1._Ptr);
      }
      if (param_1._Ptr != pfVar2) {
        lVar6 = (lVar10 + param_3) * 4 - (longlong)param_1._Ptr;
        do {
          *(lVar6 + (longlong)pfVar5 + param_1._Ptr) = *param_1._Ptr;
          param_1._Ptr = param_1._Ptr + 1;
        } while (param_1._Ptr != pfVar2);
      }
    }
    _Change_array(this,pfVar5,uVar1,uVar11);
  }
  return;
}

// _Insert_counted_range<rl4::LODRegion_const_*> @ 14c47a9a0

void __thiscall
std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
_Insert_counted_range<rl4::LODRegion_const_*>
          (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
           *this,_Vector_const_iterator<std::_Vector_val<std::_Simple_types<rl4::LODRegion>_>_>
                 param_1,LODRegion *param_2,ulong64 param_3)

{
  LODRegion *pLVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  LODRegion *pLVar4;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  LODRegion *pLVar9;
  _Vector_const_iterator<std::_Vector_val<std::_Simple_types<rl4::LODRegion>_>_> _Var10;
  ulong64 uVar11;
  longlong lVar12;
  LODRegion *pLVar13;
  longlong lVar14;
  size_t _Size;
  ulonglong uVar15;
  
  if (param_3 != 0) {
    pLVar13 = (this->_Mypair)._Myval2._Myfirst;
    pLVar4 = (this->_Mypair)._Myval2._Mylast;
    pLVar9 = (this->_Mypair)._Myval2._Myend;
    if (param_3 <= (ulonglong)(((longlong)pLVar9 - (longlong)pLVar4) / 0x18)) {
      if ((ulonglong)(((longlong)pLVar4 - (longlong)param_1._Ptr) / 0x18) <= param_3) {
        pLVar13 = param_1._Ptr + param_3;
        for (_Var10._Ptr = param_1._Ptr; _Var10._Ptr != pLVar4; _Var10._Ptr = _Var10._Ptr + 1) {
          uVar8 = ((_Var10._Ptr)->inputLODs).sizeAlignedTo4;
          uVar7 = *(undefined8 *)&((_Var10._Ptr)->inputLODs).sizeAlignedTo8;
          (pLVar13->inputLODs).size = ((_Var10._Ptr)->inputLODs).size;
          (pLVar13->inputLODs).sizeAlignedTo4 = uVar8;
          *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8 = uVar7;
          uVar8 = ((_Var10._Ptr)->outputLODs).sizePaddedToSecondLastFullBlock;
          (pLVar13->outputLODs).sizePaddedToLastFullBlock =
               ((_Var10._Ptr)->outputLODs).sizePaddedToLastFullBlock;
          (pLVar13->outputLODs).sizePaddedToSecondLastFullBlock = uVar8;
          pLVar13 = pLVar13 + 1;
        }
        (this->_Mypair)._Myval2._Mylast = pLVar13;
        pLVar13 = param_2;
        do {
          uVar7 = *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8;
          pLVar4 = pLVar13 + 1;
          puVar3 = (undefined8 *)
                   ((longlong)param_1._Ptr + (-0x18 - (longlong)param_2) + (longlong)pLVar4);
          *puVar3 = *(undefined8 *)&pLVar13->inputLODs;
          puVar3[1] = uVar7;
          *(undefined8 *)((longlong)param_1._Ptr + (-8 - (longlong)param_2) + (longlong)pLVar4) =
               *(undefined8 *)&(pLVar13->outputLODs).sizePaddedToLastFullBlock;
          param_3 = param_3 - 1;
          pLVar13 = pLVar4;
        } while (param_3 != 0);
        return;
      }
      pLVar13 = pLVar4;
      for (pLVar9 = pLVar4 + -param_3; pLVar9 != pLVar4; pLVar9 = pLVar9 + 1) {
        uVar8 = (pLVar9->inputLODs).sizeAlignedTo4;
        uVar7 = *(undefined8 *)&(pLVar9->inputLODs).sizeAlignedTo8;
        (pLVar13->inputLODs).size = (pLVar9->inputLODs).size;
        (pLVar13->inputLODs).sizeAlignedTo4 = uVar8;
        *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8 = uVar7;
        uVar8 = (pLVar9->outputLODs).sizePaddedToSecondLastFullBlock;
        (pLVar13->outputLODs).sizePaddedToLastFullBlock =
             (pLVar9->outputLODs).sizePaddedToLastFullBlock;
        (pLVar13->outputLODs).sizePaddedToSecondLastFullBlock = uVar8;
        pLVar13 = pLVar13 + 1;
      }
      _Size = (longlong)(pLVar4 + -param_3) - (longlong)param_1._Ptr;
      (this->_Mypair)._Myval2._Mylast = pLVar13;
      memmove((void *)((longlong)pLVar4 - _Size),param_1._Ptr,_Size);
      pLVar13 = param_2;
      do {
        uVar7 = *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8;
        pLVar4 = pLVar13 + 1;
        puVar3 = (undefined8 *)
                 ((longlong)param_1._Ptr + (-0x18 - (longlong)param_2) + (longlong)pLVar4);
        *puVar3 = *(undefined8 *)&pLVar13->inputLODs;
        puVar3[1] = uVar7;
        *(undefined8 *)((longlong)param_1._Ptr + (-8 - (longlong)param_2) + (longlong)pLVar4) =
             *(undefined8 *)&(pLVar13->outputLODs).sizePaddedToLastFullBlock;
        param_3 = param_3 - 1;
        pLVar13 = pLVar4;
      } while (param_3 != 0);
      return;
    }
    lVar12 = ((longlong)pLVar4 - (longlong)pLVar13) / 0x18;
    if (0xaaaaaaaaaaaaaaaU - lVar12 < param_3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar2 = lVar12 + param_3;
    uVar6 = ((longlong)pLVar9 - (longlong)pLVar13) / 0x18;
    uVar15 = 0xaaaaaaaaaaaaaaa;
    if ((uVar6 <= 0xaaaaaaaaaaaaaaa - (uVar6 >> 1)) &&
       (uVar15 = (uVar6 >> 1) + uVar6, uVar15 < uVar2)) {
      uVar15 = uVar2;
    }
    PVar5 = (this->_Mypair)._Myval1;
    pLVar9 = (LODRegion *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar15 * 0x18,8);
    lVar12 = ((longlong)param_1._Ptr - (longlong)pLVar13) / 6 +
             ((longlong)param_1._Ptr - (longlong)pLVar13 >> 0x3f);
    lVar14 = (lVar12 >> 2) - (lVar12 >> 0x3f);
    lVar12 = lVar14 * 0x18 - (longlong)param_2;
    uVar11 = param_3;
    do {
      uVar7 = *(undefined8 *)&(param_2->inputLODs).sizeAlignedTo8;
      pLVar1 = param_2 + 1;
      puVar3 = (undefined8 *)((longlong)pLVar9 + lVar12 + -0x18 + (longlong)pLVar1);
      *puVar3 = *(undefined8 *)&param_2->inputLODs;
      puVar3[1] = uVar7;
      *(undefined8 *)((longlong)pLVar9 + lVar12 + -8 + (longlong)pLVar1) =
           *(undefined8 *)&(param_2->outputLODs).sizePaddedToLastFullBlock;
      uVar11 = uVar11 - 1;
      param_2 = pLVar1;
    } while (uVar11 != 0);
    if ((param_3 == 1) && (param_1._Ptr == pLVar4)) {
      if (pLVar13 != pLVar4) {
        lVar12 = (longlong)pLVar9 - (longlong)pLVar13;
        do {
          uVar7 = *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8;
          puVar3 = (undefined8 *)(lVar12 + (longlong)pLVar13);
          *puVar3 = *(undefined8 *)&pLVar13->inputLODs;
          puVar3[1] = uVar7;
          *(undefined8 *)(lVar12 + 0x10 + (longlong)pLVar13) =
               *(undefined8 *)&(pLVar13->outputLODs).sizePaddedToLastFullBlock;
          pLVar13 = pLVar13 + 1;
        } while (pLVar13 != pLVar4);
      }
    }
    else {
      if (pLVar13 != param_1._Ptr) {
        lVar12 = (longlong)pLVar9 - (longlong)pLVar13;
        do {
          uVar7 = *(undefined8 *)&(pLVar13->inputLODs).sizeAlignedTo8;
          puVar3 = (undefined8 *)(lVar12 + (longlong)pLVar13);
          *puVar3 = *(undefined8 *)&pLVar13->inputLODs;
          puVar3[1] = uVar7;
          *(undefined8 *)(lVar12 + 0x10 + (longlong)pLVar13) =
               *(undefined8 *)&(pLVar13->outputLODs).sizePaddedToLastFullBlock;
          pLVar13 = pLVar13 + 1;
        } while (pLVar13 != param_1._Ptr);
      }
      if (param_1._Ptr != pLVar4) {
        lVar12 = ((lVar14 + param_3) * 0x18 - (longlong)param_1._Ptr) + (longlong)pLVar9;
        do {
          uVar7 = *(undefined8 *)&((param_1._Ptr)->inputLODs).sizeAlignedTo8;
          puVar3 = (undefined8 *)(lVar12 + (longlong)param_1._Ptr);
          *puVar3 = *(undefined8 *)&(param_1._Ptr)->inputLODs;
          puVar3[1] = uVar7;
          *(undefined8 *)(lVar12 + 0x10 + (longlong)param_1._Ptr) =
               *(undefined8 *)&((param_1._Ptr)->outputLODs).sizePaddedToLastFullBlock;
          param_1._Ptr = param_1._Ptr + 1;
        } while (param_1._Ptr != pLVar4);
      }
    }
    _Change_array(this,pLVar9,uVar2,uVar15);
  }
  return;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c47ace0

PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c47acf0

PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c47ad00

PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c47ad10

PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c47ad20

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>_> @ 14c47ad30

bool __cdecl
std::_Test_callable<_block4::OptimizedStorage<float>::create_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>_> @ 14c47ad40

bool __cdecl
std::_Test_callable<_block4::OptimizedStorage<float>::create_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&> @ 14c47ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
pma::impl::
ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
::
create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>
          (ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
           *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                 *__return_storage_ptr__,ushort *param_1,TranslationType *param_2,
          RotationType *param_3,ScaleType *param_4,MemoryResource **param_5)

{
  MemoryResource *pMVar1;
  CPUJointsOutputInstance *this_00;
  _Func_base<void,rl4::JointsOutputInstance_*> *p_Var2;
  MemoryResource *pMVar3;
  undefined1 auStackY_b8 [32];
  undefined **local_88;
  MemoryResource *local_80;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pMVar1 = this->pMemRes;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar3 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::CPUJointsOutputInstance,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar3 = pMVar1;
  }
  this_00 = (CPUJointsOutputInstance *)(**(code **)((longlong)*pMVar3 + 8))(pMVar3,0x68,8);
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            (this_00,*param_1,*param_2,*param_3,*param_4,*param_5);
  local_88 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGW4TranslationType_rl4__AEBW4RotationType_2_W4ScaleType_2_AEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__VCPUJointsOutputInstance_rl4__VJointsOutputInstance_4__impl_pma__QEAA_AV__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__AEBG__QEAW4TranslationType_rl4__AEBW4RotationType_8___QEAW4ScaleType_8_AEAPEAVMemoryResource_4__Z_XPEAVJointsOutputInstance_8__std__6B_
  ;
  local_50 = &local_88;
  *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
  local_80 = pMVar3;
  p_Var2 = std::
           _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
           ::_Move(&local_88,__return_storage_ptr__);
  *(_Func_base<void,rl4::JointsOutputInstance_*> **)
   &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var2;
  if (local_50 != (undefined ***)0x0) {
    (*(code *)(*local_50)[4])(local_50,local_50 != &local_88);
  }
  (__return_storage_ptr__->_Mypair)._Myval2 = (JointsOutputInstance *)this_00;
  return __return_storage_ptr__;
}

// dispatch<rl4::bpcm::JointStorage<float>_&> @ 14c47aed0

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<rl4::bpcm::JointStorage<float>_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,JointStorage<float> *param_1)

{
  float fVar1;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *this_00;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar2;
  float *pfVar3;
  longlong lVar4;
  LODRegion *pLVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  float *pfVar9;
  uint *puVar10;
  LODRegion *pLVar11;
  uint local_res8 [2];
  
  this_00 = this->impl;
  pBVar2 = *(BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &this_00->field_0x0;
  uVar7 = (uint)((longlong)(param_1->values)._Mypair._Myval2._Mylast -
                 (longlong)(param_1->values)._Mypair._Myval2._Myfirst >> 2);
  local_res8[0] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  plVar8 = (longlong *)(*(longlong *)&pBVar2->field_0x10 + 0x18);
  (**(code **)(*plVar8 + 8))(plVar8,local_res8,4);
  pfVar3 = (param_1->values)._Mypair._Myval2._Mylast;
  for (pfVar9 = (param_1->values)._Mypair._Myval2._Myfirst; pfVar9 != pfVar3; pfVar9 = pfVar9 + 1) {
    fVar1 = *pfVar9;
    local_res8[0] =
         (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
         (int)fVar1 << 0x18;
    lVar4 = *(longlong *)(*(longlong *)pBVar2 + 0x10);
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(lVar4 + 0x18,local_res8,4);
  }
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)this_00,&param_1->inputIndices);
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)this_00,&param_1->outputIndices);
  pBVar2 = *(BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> **)
            &this_00->field_0x0;
  uVar7 = (uint)(((longlong)(param_1->lodRegions)._Mypair._Myval2._Mylast -
                 (longlong)(param_1->lodRegions)._Mypair._Myval2._Myfirst) / 0x18);
  plVar8 = (longlong *)(*(longlong *)&pBVar2->field_0x10 + 0x18);
  local_res8[0] =
       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
  (**(code **)(*plVar8 + 8))(plVar8,local_res8,4);
  pLVar5 = (param_1->lodRegions)._Mypair._Myval2._Mylast;
  pLVar11 = (param_1->lodRegions)._Mypair._Myval2._Myfirst;
  if (pLVar11 != pLVar5) {
    puVar10 = &(pLVar11->outputLODs).sizePaddedToLastFullBlock;
    do {
      puVar6 = *(undefined8 **)pBVar2;
      dispatch<unsigned_int_&,unsigned_int_&,unsigned_int_&>
                ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
                  *)*puVar6,(uint *)pLVar11,puVar10 + -3,puVar10 + -2);
      dispatch<unsigned_int_&,unsigned_int_&,unsigned_int_&>
                ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
                  *)*puVar6,(uint *)(puVar10 + -1),puVar10,puVar10 + 1);
      pLVar11 = pLVar11 + 1;
      puVar10 = puVar10 + 6;
    } while (pLVar11 != pLVar5);
  }
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)this_00,&param_1->outputRotationIndices);
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)this_00,&param_1->outputRotationLODs);
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  process<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
            (*(ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
               **)&this_00->field_0x0,&param_1->jointGroups);
  return;
}

// dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&> @ 14c47b050

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar1;
  ushort *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  ushort *puVar6;
  undefined4 local_res8;
  
  pBVar1 = this->impl;
  uVar4 = (uint)((longlong)(param_1->_Mypair)._Myval2._Mylast -
                 (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 1);
  local_res8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  plVar5 = (longlong *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  (**(code **)(*plVar5 + 8))(plVar5,&local_res8,4);
  puVar2 = (param_1->_Mypair)._Myval2._Mylast;
  for (puVar6 = (param_1->_Mypair)._Myval2._Myfirst; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    uVar4 = local_res8 >> 0x10;
    local_res8 = CONCAT22((short)uVar4,*puVar6 >> 8 | *puVar6 << 8);
    lVar3 = *(longlong *)(*(longlong *)pBVar1 + 0x10);
    (**(code **)(*(longlong *)(lVar3 + 0x18) + 8))(lVar3 + 0x18,&local_res8,2);
  }
  return;
}

// process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> @ 14c47b0f0

void __thiscall
terse::
ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
::process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          (ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  ushort uVar1;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint local_res8 [2];
  
  puVar16 = &this->stream->field_0x10;
  uVar23 = 0;
  local_res8[0] = 0;
  (**(code **)(*(longlong *)puVar16 + 8))(puVar16,local_res8,4);
  uVar4 = local_res8[0] >> 0x18;
  uVar5 = (local_res8[0] & 0xff0000) >> 8;
  uVar6 = local_res8[0] & 0xff00;
  uVar7 = local_res8[0] << 0x18;
  local_res8[0] = uVar4 | uVar5 | uVar6 << 8 | uVar7;
  uVar22 = (ulonglong)local_res8[0];
  if (local_res8[0] != 0) {
    puVar14 = (param_1->_Mypair)._Myval2._Myfirst;
    puVar21 = (param_1->_Mypair)._Myval2._Mylast;
    uVar20 = (longlong)puVar21 - (longlong)puVar14 >> 1;
    if (uVar22 < uVar20) {
      (param_1->_Mypair)._Myval2._Mylast = puVar14 + uVar22;
    }
    else if (uVar20 < uVar22) {
      uVar17 = (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)puVar14 >> 1;
      if (uVar17 < uVar22) {
        uVar19 = 0x7fffffffffffffff;
        if ((uVar17 <= 0x7fffffffffffffff - (uVar17 >> 1)) &&
           (uVar19 = uVar17 + (uVar17 >> 1), uVar19 < uVar22)) {
          uVar19 = uVar22;
        }
        PVar2 = (param_1->_Mypair)._Myval1;
        puVar14 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar19 * 2,8);
        if (uVar22 - uVar20 != 0) {
          memset(puVar14 + uVar20,0,(uVar22 - uVar20) * 2);
        }
        puVar3 = (param_1->_Mypair)._Myval2._Mylast;
        puVar21 = puVar14;
        for (puVar18 = (param_1->_Mypair)._Myval2._Myfirst; puVar18 != puVar3; puVar18 = puVar18 + 1
            ) {
          *puVar21 = *puVar18;
          puVar21 = puVar21 + 1;
        }
        puVar21 = (param_1->_Mypair)._Myval2._Myfirst;
        if (puVar21 != (ushort *)0x0) {
          PVar2 = (param_1->_Mypair)._Myval1;
          (**(code **)(*(longlong *)PVar2 + 0x10))
                    (PVar2,puVar21,
                     ((longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)puVar21 >> 1) * 2,8);
        }
        (param_1->_Mypair)._Myval2._Myfirst = puVar14;
        (param_1->_Mypair)._Myval2._Mylast = puVar14 + uVar22;
        (param_1->_Mypair)._Myval2._Myend = puVar14 + uVar19;
      }
      else {
        lVar15 = uVar22 - uVar20;
        if (lVar15 != 0) {
          memset(puVar21,0,lVar15 * 2);
          puVar21 = puVar21 + lVar15;
        }
        (param_1->_Mypair)._Myval2._Mylast = puVar21;
      }
    }
    puVar16 = &this->stream->field_0x10;
    (**(code **)(*(longlong *)puVar16 + 8))(puVar16,(param_1->_Mypair)._Myval2._Myfirst,uVar22 * 2);
    uVar20 = uVar22 & 0xfffffffffffffff8;
    if ((((uVar4 & 0xfffffff8) != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) {
      do {
        puVar21 = (param_1->_Mypair)._Myval2._Myfirst;
        puVar14 = puVar21 + uVar23;
        uVar1 = puVar14[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        uVar10 = puVar14[4];
        uVar11 = puVar14[5];
        uVar12 = puVar14[6];
        uVar13 = puVar14[7];
        puVar21 = puVar21 + uVar23;
        uVar23 = uVar23 + 8;
        *puVar21 = *puVar14 >> 8 | *puVar14 << 8;
        puVar21[1] = uVar1 >> 8 | uVar1 << 8;
        puVar21[2] = uVar8 >> 8 | uVar8 << 8;
        puVar21[3] = uVar9 >> 8 | uVar9 << 8;
        puVar21[4] = uVar10 >> 8 | uVar10 << 8;
        puVar21[5] = uVar11 >> 8 | uVar11 * 0x100;
        puVar21[6] = uVar12 >> 8 | uVar12 * 0x100;
        puVar21[7] = uVar13 >> 8 | uVar13 * 0x100;
      } while (uVar23 < uVar20);
    }
    for (; uVar20 < uVar22; uVar20 = uVar20 + 1) {
      puVar14 = (param_1->_Mypair)._Myval2._Myfirst + uVar20;
      uVar1 = *puVar14;
      *puVar14 = uVar1 >> 8 | uVar1 << 8;
    }
  }
  return;
}

// process<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> @ 14c47b360

void __thiscall
terse::
ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
::process<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          (ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                 *param_1)

{
  ushort uVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint local_res8 [2];
  
  puVar16 = &this->stream->field_0x10;
  uVar23 = 0;
  local_res8[0] = 0;
  (**(code **)(*(longlong *)puVar16 + 8))(puVar16,local_res8,4);
  uVar4 = local_res8[0] >> 0x18;
  uVar5 = (local_res8[0] & 0xff0000) >> 8;
  uVar6 = local_res8[0] & 0xff00;
  uVar7 = local_res8[0] << 0x18;
  local_res8[0] = uVar4 | uVar5 | uVar6 << 8 | uVar7;
  uVar22 = (ulonglong)local_res8[0];
  if (local_res8[0] != 0) {
    puVar14 = (param_1->_Mypair)._Myval2._Myfirst;
    puVar21 = (param_1->_Mypair)._Myval2._Mylast;
    uVar20 = (longlong)puVar21 - (longlong)puVar14 >> 1;
    if (uVar22 < uVar20) {
      (param_1->_Mypair)._Myval2._Mylast = puVar14 + uVar22;
    }
    else if (uVar20 < uVar22) {
      uVar17 = (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)puVar14 >> 1;
      if (uVar17 < uVar22) {
        uVar19 = 0x7fffffffffffffff;
        if ((uVar17 <= 0x7fffffffffffffff - (uVar17 >> 1)) &&
           (uVar19 = uVar17 + (uVar17 >> 1), uVar19 < uVar22)) {
          uVar19 = uVar22;
        }
        PVar2 = (param_1->_Mypair)._Myval1;
        puVar14 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar19 * 2,0x40);
        if (uVar22 - uVar20 != 0) {
          memset(puVar14 + uVar20,0,(uVar22 - uVar20) * 2);
        }
        puVar3 = (param_1->_Mypair)._Myval2._Mylast;
        puVar21 = puVar14;
        for (puVar18 = (param_1->_Mypair)._Myval2._Myfirst; puVar18 != puVar3; puVar18 = puVar18 + 1
            ) {
          *puVar21 = *puVar18;
          puVar21 = puVar21 + 1;
        }
        puVar21 = (param_1->_Mypair)._Myval2._Myfirst;
        if (puVar21 != (ushort *)0x0) {
          PVar2 = (param_1->_Mypair)._Myval1;
          (**(code **)(*(longlong *)PVar2 + 0x10))
                    (PVar2,puVar21,
                     ((longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)puVar21 >> 1) * 2,0x40
                    );
        }
        (param_1->_Mypair)._Myval2._Myfirst = puVar14;
        (param_1->_Mypair)._Myval2._Mylast = puVar14 + uVar22;
        (param_1->_Mypair)._Myval2._Myend = puVar14 + uVar19;
      }
      else {
        lVar15 = uVar22 - uVar20;
        if (lVar15 != 0) {
          memset(puVar21,0,lVar15 * 2);
          puVar21 = puVar21 + lVar15;
        }
        (param_1->_Mypair)._Myval2._Mylast = puVar21;
      }
    }
    puVar16 = &this->stream->field_0x10;
    (**(code **)(*(longlong *)puVar16 + 8))(puVar16,(param_1->_Mypair)._Myval2._Myfirst,uVar22 * 2);
    uVar20 = uVar22 & 0xfffffffffffffff8;
    if ((((uVar4 & 0xfffffff8) != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) {
      do {
        puVar21 = (param_1->_Mypair)._Myval2._Myfirst;
        puVar14 = puVar21 + uVar23;
        uVar1 = puVar14[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        uVar10 = puVar14[4];
        uVar11 = puVar14[5];
        uVar12 = puVar14[6];
        uVar13 = puVar14[7];
        puVar21 = puVar21 + uVar23;
        uVar23 = uVar23 + 8;
        *puVar21 = *puVar14 >> 8 | *puVar14 << 8;
        puVar21[1] = uVar1 >> 8 | uVar1 << 8;
        puVar21[2] = uVar8 >> 8 | uVar8 << 8;
        puVar21[3] = uVar9 >> 8 | uVar9 << 8;
        puVar21[4] = uVar10 >> 8 | uVar10 << 8;
        puVar21[5] = uVar11 >> 8 | uVar11 * 0x100;
        puVar21[6] = uVar12 >> 8 | uVar12 * 0x100;
        puVar21[7] = uVar13 >> 8 | uVar13 * 0x100;
      } while (uVar23 < uVar20);
    }
    for (; uVar20 < uVar22; uVar20 = uVar20 + 1) {
      puVar14 = (param_1->_Mypair)._Myval2._Myfirst + uVar20;
      uVar1 = *puVar14;
      *puVar14 = uVar1 >> 8 | uVar1 << 8;
    }
  }
  return;
}

// process<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> @ 14c47b5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
terse::
ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
::process<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
          (ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
           *this,vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1)

{
  float fVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  float *pfVar10;
  undefined1 *puVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_res8 [2];
  undefined1 local_38 [16];
  
  local_res8[0] = 0;
  puVar11 = &this->stream->field_0x10;
  (**(code **)(*(longlong *)puVar11 + 8))(puVar11,local_res8,4);
  uVar4 = local_res8[0] >> 0x18;
  uVar5 = (local_res8[0] & 0xff0000) >> 8;
  uVar6 = local_res8[0] & 0xff00;
  uVar7 = local_res8[0] << 0x18;
  local_res8[0] = uVar4 | uVar5 | uVar6 << 8 | uVar7;
  uVar17 = (ulonglong)local_res8[0];
  if (local_res8[0] != 0) {
    pfVar10 = (param_1->_Mypair)._Myval2._Myfirst;
    pfVar16 = (param_1->_Mypair)._Myval2._Mylast;
    uVar15 = (longlong)pfVar16 - (longlong)pfVar10 >> 2;
    if (uVar17 < uVar15) {
      (param_1->_Mypair)._Myval2._Mylast = pfVar10 + uVar17;
    }
    else if (uVar15 < uVar17) {
      uVar18 = (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)pfVar10 >> 2;
      if (uVar18 < uVar17) {
        uVar14 = 0x3fffffffffffffff;
        if ((uVar18 <= 0x3fffffffffffffff - (uVar18 >> 1)) &&
           (uVar14 = uVar18 + (uVar18 >> 1), uVar14 < uVar17)) {
          uVar14 = uVar17;
        }
        PVar2 = (param_1->_Mypair)._Myval1;
        pfVar10 = (float *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar14 * 4,0x40);
        if (uVar17 - uVar15 != 0) {
          memset(pfVar10 + uVar15,0,(uVar17 - uVar15) * 4);
        }
        pfVar3 = (param_1->_Mypair)._Myval2._Mylast;
        pfVar16 = pfVar10;
        for (pfVar12 = (param_1->_Mypair)._Myval2._Myfirst; pfVar12 != pfVar3; pfVar12 = pfVar12 + 1
            ) {
          *pfVar16 = *pfVar12;
          pfVar16 = pfVar16 + 1;
        }
        pfVar16 = (param_1->_Mypair)._Myval2._Myfirst;
        if (pfVar16 != (float *)0x0) {
          PVar2 = (param_1->_Mypair)._Myval1;
          (**(code **)(*(longlong *)PVar2 + 0x10))
                    (PVar2,pfVar16,
                     (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)pfVar16 &
                     0xfffffffffffffffc,0x40);
        }
        (param_1->_Mypair)._Myval2._Myfirst = pfVar10;
        (param_1->_Mypair)._Myval2._Mylast = pfVar10 + uVar17;
        (param_1->_Mypair)._Myval2._Myend = pfVar10 + uVar14;
      }
      else {
        lVar13 = uVar17 - uVar15;
        if (lVar13 != 0) {
          memset(pfVar16,0,lVar13 * 4);
          pfVar16 = pfVar16 + lVar13;
        }
        (param_1->_Mypair)._Myval2._Mylast = pfVar16;
      }
    }
    puVar11 = &this->stream->field_0x10;
    (**(code **)(*(longlong *)puVar11 + 8))(puVar11,(param_1->_Mypair)._Myval2._Myfirst,uVar17 * 4);
    iVar9 = __isa_available;
    auVar8 = ___xmm_0c0d0e0f08090a0b0405060700010203;
    uVar18 = 0;
    uVar15 = uVar17 & 0xfffffffffffffffc;
    if ((((uVar4 & 0xfffffffc) != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) {
      do {
        pfVar10 = (param_1->_Mypair)._Myval2._Myfirst;
        lVar13 = 0;
        local_38 = *(undefined1 (*) [16])(pfVar10 + uVar18);
        if (iVar9 < 2) {
          do {
            uVar4 = *(uint *)(local_38 + lVar13 * 4);
            *(uint *)(local_38 + lVar13 * 4) =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            lVar13 = lVar13 + 1;
          } while (lVar13 < 4);
        }
        else {
          local_38 = pshufb(local_38,auVar8);
        }
        *(undefined1 (*) [16])(pfVar10 + uVar18) = local_38;
        uVar18 = uVar18 + 4;
      } while (uVar18 < uVar15);
    }
    for (; uVar15 < uVar17; uVar15 = uVar15 + 1) {
      pfVar10 = (param_1->_Mypair)._Myval2._Myfirst;
      fVar1 = pfVar10[uVar15];
      pfVar10[uVar15] =
           (float)((uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8
                  | (int)fVar1 << 0x18);
    }
  }
  return;
}

// Evaluator<float> @ 14c47b820

Evaluator<float> * __thiscall
rl4::bpcm::Evaluator<float>::Evaluator<float>
          (Evaluator<float> *this,JointStorage<float> *param_1,
          unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
          *param_2,function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                   *param_3,MemoryResource *param_4)

{
  undefined8 *puVar1;
  JointGroupLinearCalculationStrategy<float> *pJVar2;
  longlong *plVar3;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  *puVar4;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar5;
  undefined8 uVar6;
  Evaluator<float> *extraout_RAX;
  JointGroupLinearCalculationStrategy<float> *local_38 [3];
  
  this->_padding_ = (longlong)&___7__Evaluator_M_bpcm_rl4__6B_;
  this->memRes = param_4;
  JointStorage<float>::JointStorage<float>(&this->storage,param_1);
  takeStorageSnapshot<float>(&this->jointGroups,&this->storage,this->memRes);
  std::
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  ::
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_><std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>,0>
            (&this->strategy,param_2);
  *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  puVar1 = *(undefined8 **)&param_3->field_0x38;
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar1)(puVar1,&this->instanceFactory);
    *(undefined8 *)&(this->instanceFactory).field_0x38 = uVar6;
  }
  pJVar2 = (param_2->_Mypair)._Myval2;
  if (pJVar2 != (JointGroupLinearCalculationStrategy<float> *)0x0) {
    plVar3 = *(longlong **)&(param_2->_Mypair)._Myval1.field_0x38;
    local_38[0] = pJVar2;
    if (plVar3 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return extraout_RAX;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,local_38);
  }
  puVar4 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
             **)&(param_2->_Mypair)._Myval1.field_0x38;
  if (puVar4 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *)0x0) {
    (**(code **)(*(longlong *)&(puVar4->_Mypair)._Myval1 + 0x20))(puVar4,puVar4 != param_2);
    *(undefined8 *)&(param_2->_Mypair)._Myval1.field_0x38 = 0;
  }
  pfVar5 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_3->field_0x38;
  if (pfVar5 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar5 + 0x20))(pfVar5,pfVar5 != param_3);
    *(undefined8 *)&param_3->field_0x38 = 0;
  }
  return this;
}

// PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> @ 14c47b920

PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> * __thiscall
pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>
          (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this->pMemRes =
       (MemoryResource *)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  return this;
}

// PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> @ 14c47b9a0

PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> * __thiscall
pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>
          (PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this->pMemRes =
       (MemoryResource *)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  return this;
}

// PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource> @ 14c47ba20

PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
* __thiscall
pma::
PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
          (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *this = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  return this;
}

// vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> @ 14c47baa0

vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
__thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                 *param_1,PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *param_2)

{
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  
  (this->_Mypair)._Myval1 = *param_2;
  (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
  (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
  (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
  uVar5 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 1;
  if (uVar5 != 0) {
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar1 = (this->_Mypair)._Myval1;
    puVar2 = (ushort *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar5 * 2,0x40);
    (this->_Mypair)._Myval2._Myfirst = puVar2;
    (this->_Mypair)._Myval2._Mylast = puVar2;
    (this->_Mypair)._Myval2._Myend = puVar2 + uVar5;
    puVar2 = (param_1->_Mypair)._Myval2._Mylast;
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (puVar3 = (param_1->_Mypair)._Myval2._Myfirst; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar4;
  }
  return this;
}

// vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> @ 14c47bb60

vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
__thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this,initializer_list<unsigned_short> *param_1,
          PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *param_2)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  
  puVar1 = param_1->_Last;
  puVar4 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar5 = (longlong)puVar1 - (longlong)puVar4 >> 1;
  (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
  (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
  (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
  if (uVar5 != 0) {
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    puVar3 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar5 * 2,0x40);
    (this->_Mypair)._Myval2._Myfirst = puVar3;
    (this->_Mypair)._Myval2._Mylast = puVar3;
    (this->_Mypair)._Myval2._Myend = puVar3 + uVar5;
    puVar3 = (this->_Mypair)._Myval2._Myfirst;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar3;
  }
  return this;
}

// vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> @ 14c47bc20

vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> * __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          initializer_list<float> *param_1,
          PolyAllocator<float,64,pma::AlignedMemoryResource> *param_2)

{
  float *pfVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  
  pfVar1 = param_1->_Last;
  pfVar5 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar4 = (longlong)pfVar1 - (longlong)pfVar5 >> 2;
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  if (uVar4 != 0) {
    if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pfVar3 = (float *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar4 * 4,0x40);
    (this->_Mypair)._Myval2._Myfirst = pfVar3;
    (this->_Mypair)._Myval2._Myend = pfVar3 + uVar4;
    pfVar3 = (this->_Mypair)._Myval2._Myfirst;
    for (; pfVar5 != pfVar1; pfVar5 = pfVar5 + 1) {
      *pfVar3 = *pfVar5;
      pfVar3 = pfVar3 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pfVar3;
  }
  return this;
}

// vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> @ 14c47bce0

vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> * __thiscall
std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
          (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<rl4::LODRegion> *param_1,
          PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *param_2)

{
  LODRegion *pLVar1;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  LODRegion *pLVar6;
  LODRegion *pLVar7;
  
  pLVar1 = param_1->_Last;
  pLVar7 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  (this->_Mypair)._Myval2._Myfirst = (LODRegion *)0x0;
  (this->_Mypair)._Myval2._Mylast = (LODRegion *)0x0;
  (this->_Mypair)._Myval2._Myend = (LODRegion *)0x0;
  uVar3 = ((longlong)pLVar1 - (longlong)pLVar7) / 0x18;
  if (uVar3 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pLVar6 = (LODRegion *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar3 * 0x18,8);
    (this->_Mypair)._Myval2._Myfirst = pLVar6;
    (this->_Mypair)._Myval2._Mylast = pLVar6;
    (this->_Mypair)._Myval2._Myend = pLVar6 + uVar3;
    pLVar6 = (this->_Mypair)._Myval2._Myfirst;
    for (; pLVar7 != pLVar1; pLVar7 = pLVar7 + 1) {
      uVar5 = (pLVar7->inputLODs).sizeAlignedTo4;
      uVar4 = *(undefined8 *)&(pLVar7->inputLODs).sizeAlignedTo8;
      (pLVar6->inputLODs).size = (pLVar7->inputLODs).size;
      (pLVar6->inputLODs).sizeAlignedTo4 = uVar5;
      *(undefined8 *)&(pLVar6->inputLODs).sizeAlignedTo8 = uVar4;
      uVar5 = (pLVar7->outputLODs).sizePaddedToSecondLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToLastFullBlock =
           (pLVar7->outputLODs).sizePaddedToLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToSecondLastFullBlock = uVar5;
      pLVar6 = pLVar6 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pLVar6;
  }
  return this;
}

// vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47bdc0

vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar4;
  ulonglong uVar5;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_res8;
  
  pvVar1 = param_1->_Last;
  pvVar4 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar5 = (longlong)pvVar1 - (longlong)pvVar4 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x0;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pvVar3 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar5 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar3;
    (this->_Mypair)._Myval2._Mylast = pvVar3;
    (this->_Mypair)._Myval2._Myend = pvVar3 + uVar5;
    pvVar3 = (this->_Mypair)._Myval2._Myfirst;
    for (; pvVar4 != pvVar1; pvVar4 = pvVar4 + 1) {
      local_res8 = (this->_Mypair)._Myval1;
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
      vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                (pvVar3,pvVar4,
                 (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_res8);
      pvVar3 = pvVar3 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pvVar3;
  }
  return this;
}

// vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47be90

vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource> PVar3;
  JointGroup *pJVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar8;
  JointGroup *pJVar9;
  JointGroup *pJVar10;
  ulonglong uVar11;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar12;
  
  pvVar1 = param_1->_Last;
  pvVar12 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar11 = (longlong)pvVar1 - (longlong)pvVar12 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
        *)0x0;
  if (uVar11 != 0) {
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pvVar8 = (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
              *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar11 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar8;
    (this->_Mypair)._Myval2._Mylast = pvVar8;
    (this->_Mypair)._Myval2._Myend = pvVar8 + uVar11;
    pvVar8 = (this->_Mypair)._Myval2._Myfirst;
    for (; pvVar12 != pvVar1; pvVar12 = pvVar12 + 1) {
      PVar3 = *(PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource> *)
               &(this->_Mypair)._Myval1;
      (pvVar8->_Mypair)._Myval1 = PVar3;
      (pvVar8->_Mypair)._Myval2._Myfirst = (JointGroup *)0x0;
      (pvVar8->_Mypair)._Myval2._Mylast = (JointGroup *)0x0;
      (pvVar8->_Mypair)._Myval2._Myend = (JointGroup *)0x0;
      uVar11 = ((longlong)(pvVar12->_Mypair)._Myval2._Mylast -
               (longlong)(pvVar12->_Mypair)._Myval2._Myfirst) / 0x24;
      if (uVar11 != 0) {
        if (0x71c71c71c71c71c < uVar11) {
                    /* WARNING: Subroutine does not return */
          vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
          ::_Xlength();
        }
        pJVar9 = (JointGroup *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar11 * 0x24,8);
        (pvVar8->_Mypair)._Myval2._Myfirst = pJVar9;
        (pvVar8->_Mypair)._Myval2._Mylast = pJVar9;
        (pvVar8->_Mypair)._Myval2._Myend = pJVar9 + uVar11;
        pJVar4 = (pvVar12->_Mypair)._Myval2._Mylast;
        for (pJVar10 = (pvVar12->_Mypair)._Myval2._Myfirst; pJVar10 != pJVar4; pJVar10 = pJVar10 + 1
            ) {
          uVar5 = pJVar10->inputIndicesOffset;
          uVar6 = pJVar10->outputIndicesOffset;
          uVar7 = pJVar10->lodsOffset;
          pJVar9->valuesOffset = pJVar10->valuesOffset;
          pJVar9->inputIndicesOffset = uVar5;
          pJVar9->outputIndicesOffset = uVar6;
          pJVar9->lodsOffset = uVar7;
          uVar5 = pJVar10->outputRotationLODsOffset;
          uVar6 = pJVar10->valuesSize;
          uVar7 = pJVar10->colCount;
          pJVar9->outputRotationIndicesOffset = pJVar10->outputRotationIndicesOffset;
          pJVar9->outputRotationLODsOffset = uVar5;
          pJVar9->valuesSize = uVar6;
          pJVar9->colCount = uVar7;
          pJVar9->rowCount = pJVar10->rowCount;
          pJVar9 = pJVar9 + 1;
        }
        (pvVar8->_Mypair)._Myval2._Mylast = pJVar9;
      }
      pvVar8 = pvVar8 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pvVar8;
  }
  return this;
}

// vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47c030

vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar3;
  LODRegion *pLVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar8;
  LODRegion *pLVar9;
  LODRegion *pLVar10;
  ulonglong uVar11;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar12;
  
  pvVar1 = param_1->_Last;
  pvVar12 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar11 = (longlong)pvVar1 - (longlong)pvVar12 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
       0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
       0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
       0x0;
  if (uVar11 != 0) {
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pvVar8 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
              *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar11 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar8;
    (this->_Mypair)._Myval2._Mylast = pvVar8;
    (this->_Mypair)._Myval2._Myend = pvVar8 + uVar11;
    pvVar8 = (this->_Mypair)._Myval2._Myfirst;
    for (; pvVar12 != pvVar1; pvVar12 = pvVar12 + 1) {
      PVar3 = *(PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> *)
               &(this->_Mypair)._Myval1;
      (pvVar8->_Mypair)._Myval1 = PVar3;
      (pvVar8->_Mypair)._Myval2._Myfirst = (LODRegion *)0x0;
      (pvVar8->_Mypair)._Myval2._Mylast = (LODRegion *)0x0;
      (pvVar8->_Mypair)._Myval2._Myend = (LODRegion *)0x0;
      uVar11 = ((longlong)(pvVar12->_Mypair)._Myval2._Mylast -
               (longlong)(pvVar12->_Mypair)._Myval2._Myfirst) / 0x18;
      if (uVar11 != 0) {
        if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
          vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
          _Xlength();
        }
        pLVar9 = (LODRegion *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar11 * 0x18,8);
        (pvVar8->_Mypair)._Myval2._Myfirst = pLVar9;
        (pvVar8->_Mypair)._Myval2._Mylast = pLVar9;
        (pvVar8->_Mypair)._Myval2._Myend = pLVar9 + uVar11;
        pLVar4 = (pvVar12->_Mypair)._Myval2._Mylast;
        for (pLVar10 = (pvVar12->_Mypair)._Myval2._Myfirst; pLVar10 != pLVar4; pLVar10 = pLVar10 + 1
            ) {
          uVar5 = (pLVar10->inputLODs).sizeAlignedTo4;
          uVar6 = (pLVar10->inputLODs).sizeAlignedTo8;
          uVar7 = (pLVar10->outputLODs).size;
          (pLVar9->inputLODs).size = (pLVar10->inputLODs).size;
          (pLVar9->inputLODs).sizeAlignedTo4 = uVar5;
          (pLVar9->inputLODs).sizeAlignedTo8 = uVar6;
          (pLVar9->outputLODs).size = uVar7;
          uVar5 = (pLVar10->outputLODs).sizePaddedToSecondLastFullBlock;
          (pLVar9->outputLODs).sizePaddedToLastFullBlock =
               (pLVar10->outputLODs).sizePaddedToLastFullBlock;
          (pLVar9->outputLODs).sizePaddedToSecondLastFullBlock = uVar5;
          pLVar9 = pLVar9 + 1;
        }
        (pvVar8->_Mypair)._Myval2._Mylast = pLVar9;
      }
      pvVar8 = pvVar8 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pvVar8;
  }
  return this;
}

// vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47c1d0

vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar1;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar3;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar4;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar5;
  ulonglong uVar6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar7;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar8;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar9;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_res8;
  
  PVar1 = *param_2;
  pvVar2 = param_1->_Last;
  pvVar8 = param_1->_First;
  (this->_Mypair)._Myval1 = PVar1;
  uVar6 = (longlong)pvVar2 - (longlong)pvVar8 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  if (uVar6 != 0) {
    if (0x7ffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    pvVar4 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar6 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar4;
    (this->_Mypair)._Myval2._Mylast = pvVar4;
    (this->_Mypair)._Myval2._Myend = pvVar4 + uVar6;
    pPVar9 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)(this->_Mypair)._Myval2._Myfirst;
    for (; pvVar8 != pvVar2; pvVar8 = pvVar8 + 1) {
      PVar5 = *(PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&(this->_Mypair)._Myval1;
      *pPVar9 = PVar5;
      pPVar9[1] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      pPVar9[2] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      pPVar9[3] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      uVar6 = (longlong)(pvVar8->_Mypair)._Myval2._Mylast -
              (longlong)(pvVar8->_Mypair)._Myval2._Myfirst >> 5;
      if (uVar6 != 0) {
        if (0x7ffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          ::_Xlength();
        }
        PVar5 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar6 * 0x20,8);
        pPVar9[1] = PVar5;
        pPVar9[2] = PVar5;
        pPVar9[3] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     )(uVar6 * 0x20 + (longlong)PVar5);
        pvVar3 = (pvVar8->_Mypair)._Myval2._Mylast;
        for (pvVar7 = (pvVar8->_Mypair)._Myval2._Myfirst; pvVar7 != pvVar3; pvVar7 = pvVar7 + 1) {
          local_res8 = *pPVar9;
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                    ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                      *)PVar5,pvVar7,
                     (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_res8);
          PVar5 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )((longlong)PVar5 + 0x20);
        }
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                    *)PVar5,(vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                             *)PVar5,pPVar9);
        pPVar9[2] = PVar5;
      }
      pPVar9 = pPVar9 + 4;
    }
    (this->_Mypair)._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)pPVar9;
  }
  return this;
}

// ~Evaluator<float> @ 14c47c360

void __thiscall rl4::bpcm::Evaluator<float>::~Evaluator<float>(Evaluator<float> *this)

{
  longlong *plVar1;
  JointGroupLinearCalculationStrategy<float> *pJVar2;
  JointGroupView<float> *pJVar3;
  PolyAllocator<rl4::bpcm::JointGroupView<float>,8,pma::DefaultMemoryResource> PVar4;
  JointGroupLinearCalculationStrategy<float> *local_res8;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                       *)plVar1 != &this->instanceFactory);
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  pJVar2 = (this->strategy)._Mypair._Myval2;
  if (pJVar2 != (JointGroupLinearCalculationStrategy<float> *)0x0) {
    plVar1 = *(longlong **)&(this->strategy)._Mypair._Myval1.field_0x38;
    local_res8 = pJVar2;
    if (plVar1 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_res8);
  }
  plVar1 = *(longlong **)&(this->strategy)._Mypair._Myval1.field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                       *)plVar1 != &this->strategy);
    *(undefined8 *)&(this->strategy)._Mypair._Myval1.field_0x38 = 0;
  }
  pJVar3 = (this->jointGroups)._Mypair._Myval2._Myfirst;
  if (pJVar3 != (JointGroupView<float> *)0x0) {
    PVar4 = (this->jointGroups)._Mypair._Myval1;
    (**(code **)(*(longlong *)PVar4 + 0x10))
              (PVar4,pJVar3,
               (((longlong)(this->jointGroups)._Mypair._Myval2._Myend - (longlong)pJVar3) / 0x38) *
               0x38,8);
    (this->jointGroups)._Mypair._Myval2._Myfirst = (JointGroupView<float> *)0x0;
    (this->jointGroups)._Mypair._Myval2._Mylast = (JointGroupView<float> *)0x0;
    (this->jointGroups)._Mypair._Myval2._Myend = (JointGroupView<float> *)0x0;
  }
  JointStorage<float>::~JointStorage<float>(&this->storage);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  return;
}

// ~vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> @ 14c47c470

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
~vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (ushort *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,puVar1,((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 1) * 2,
               0x40);
    (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
    (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
    (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
  }
  return;
}

// ~vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> @ 14c47c4c0

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
~vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this)

{
  float *pfVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar1 != (float *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pfVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc,0x40
              );
    (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
    (this->_Mypair)._Myval2._Mylast = (float *)0x0;
    (this->_Mypair)._Myval2._Myend = (float *)0x0;
  }
  return;
}

// ~vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> @ 14c47c510

void __thiscall
std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
~vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
          (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
           *this)

{
  LODRegion *pLVar1;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar2;
  
  pLVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pLVar1 != (LODRegion *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pLVar1,
               (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pLVar1) / 0x18) * 0x18,8);
    (this->_Mypair)._Myval2._Myfirst = (LODRegion *)0x0;
    (this->_Mypair)._Myval2._Mylast = (LODRegion *)0x0;
    (this->_Mypair)._Myval2._Myend = (LODRegion *)0x0;
  }
  return;
}

// ~vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c47c520

void __thiscall
std::
vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
~vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  
  pvVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar1 != (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                 *)0x0) {
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (pvVar1,(this->_Mypair)._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)this);
    PVar2 = (this->_Mypair)._Myval1;
    pvVar1 = (this->_Mypair)._Myval2._Myfirst;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pvVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pvVar1 & 0xffffffffffffffe0,8);
    (this->_Mypair)._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    (this->_Mypair)._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    (this->_Mypair)._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
  }
  return;
}

// ~CanonicalReader @ 14c47c580

void __thiscall block4::CanonicalReader::~CanonicalReader(CanonicalReader *this)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7CanonicalReader_block4__6B_;
  *(undefined ***)&this[-1].field_0x30 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this[-1].field_0x40 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this[-1].field_0x50 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this[-1].field_0x60 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x50 + (longlong)this) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 8) + -0x50 + (longlong)this) =
       &_vftable__for__dna__BehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 4);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x50;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 8);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x60;
  dna::FakeReader::~FakeReader((FakeReader *)this);
  return;
}

// _Buy_nonzero @ 14c47c610

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Buy_nonzero
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          ulong64 param_1)

{
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar1;
  float *pfVar2;
  
  if (param_1 < 0x4000000000000000) {
    PVar1 = (this->_Mypair)._Myval1;
    pfVar2 = (float *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,param_1 * 4,0x40);
    (this->_Mypair)._Myval2._Myfirst = pfVar2;
    (this->_Mypair)._Myval2._Mylast = pfVar2;
    (this->_Mypair)._Myval2._Myend = pfVar2 + param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xlength();
}

// _Change_array @ 14c47c670

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
_Change_array(vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *this,ushort *param_1,ulong64 param_2,ulong64 param_3)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (ushort *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,puVar1,((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 1) * 2,
               0x40);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 14c47c6f0

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Change_array
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          float *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar1 != (float *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pfVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc,0x40
              );
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Copy @ 14c47c770

_Func_base<void,rl4::JointsOutputInstance_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGW4TranslationType_rl4__AEBW4RotationType_2_W4ScaleType_2_AEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__VCPUJointsOutputInstance_rl4__VJointsOutputInstance_4__impl_pma__QEAA_AV__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__AEBG__QEAW4TranslationType_rl4__AEBW4RotationType_8___QEAW4ScaleType_8_AEAPEAVMemoryResource_4__Z_XPEAVJointsOutputInstance_8__std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14c47c790

_Func_base<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_GPEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14c47c7b0

_Func_base<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_PEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c47c7d0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c47c7f0

void __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c47c810

void __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Do_call @ 14c47c830

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Do_call(void *this,JointsOutputInstance **param_1)

{
  JointsOutputInstance *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c47c86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Do_call @ 14c47c880

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Do_call(void *this,
          unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
          *__return_storage_ptr__,MemoryResource **param_1)

{
  ScaleType local_res8 [8];
  TranslationType local_res10 [8];
  MemoryResource *local_res18;
  ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
  local_res20;
  
  local_res18 = *param_1;
  local_res8[0] = Vector;
  local_res10[0] = Vector;
  local_res20.pMemRes = local_res18;
  pma::impl::
  ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
  ::
  create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>
            (&local_res20,__return_storage_ptr__,(ushort *)((longlong)this + 8),local_res10,
             (RotationType *)((longlong)this + 10),local_res8,&local_res18);
  return __return_storage_ptr__;
}

// _Do_call @ 14c47c8e0

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Do_call(void *this,
          unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
          *__return_storage_ptr__,MemoryResource **param_1)

{
  ScaleType local_res8 [8];
  TranslationType local_res10 [8];
  MemoryResource *local_res18;
  ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
  local_res20;
  
  local_res18 = *param_1;
  local_res8[0] = Vector;
  local_res10[0] = Vector;
  local_res20.pMemRes = local_res18;
  pma::impl::
  ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>
  ::
  create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>
            (&local_res20,__return_storage_ptr__,(ushort *)((longlong)this + 8),local_res10,
             (RotationType *)((longlong)this + 10),local_res8,&local_res18);
  return __return_storage_ptr__;
}

// _Get @ 14c47c940

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c47c950

void * __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c47c960

void * __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c47c970

_Func_base<void,rl4::JointsOutputInstance_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_AEBGW4TranslationType_rl4__AEBW4RotationType_2_W4ScaleType_2_AEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__VCPUJointsOutputInstance_rl4__VJointsOutputInstance_4__impl_pma__QEAA_AV__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___std__AEBG__QEAW4TranslationType_rl4__AEBW4RotationType_8___QEAW4ScaleType_8_AEAPEAVMemoryResource_4__Z_XPEAVJointsOutputInstance_8__std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c47c990

_Func_base<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_GPEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c47c9b0

_Func_base<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
* __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_PEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1;
}

// _Target_type @ 14c47c9d0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const_&,enum_rl4::TranslationType,enum_rl4::RotationType_const_&,enum_rl4::ScaleType,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsOutputInstance_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance*___ptr64)>_>,rl4::CPUJointsOutputInstance,rl4::JointsOutputInstance>::create<unsigned_short_const&___ptr64,rl4::TranslationType,rl4::RotationType_const&___ptr64,rl4::ScaleType,pma::MemoryResource*___ptr64&___ptr64>(unsigned_short_const&___ptr64,rl4::TranslationType&&___ptr64,rl4::RotationType_const&___ptr64,rl4::ScaleType&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c47c9e0

type_info * __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_static_class_rl4::bpcm::Evaluator<float>___cdecl_block4::OptimizedStorage<float>::create(std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>*___ptr64)>_>,unsigned___int64,rl4::RotationType,unsigned_short,pma::MemoryResource*___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c47c9f0

type_info * __thiscall
std::
_Func_impl_no_alloc<`block4::OptimizedStorage<float>::create'::__l2::<lambda_1>,std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>,pma::MemoryResource_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_static_class_rl4::bpcm::Evaluator<float>___cdecl_block4::OptimizedStorage<float>::create(std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>*___ptr64)>_>,unsigned___int64,rl4::RotationType,pma::MemoryResource*___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Tidy @ 14c47ca00

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::_Tidy
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *this)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> PVar2;
  
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (ushort *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,puVar1,((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 1) * 2,
               0x40);
    (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
    (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
    (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
  }
  return;
}

// _Tidy @ 14c47ca50

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this)

{
  float *pfVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar1 != (float *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pfVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc,0x40
              );
    (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
    (this->_Mypair)._Myval2._Mylast = (float *)0x0;
    (this->_Mypair)._Myval2._Myend = (float *)0x0;
  }
  return;
}

// _Tidy @ 14c47caa0

void __thiscall
std::
vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
::_Tidy(vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
        *this)

{
  JointGroup *pJVar1;
  PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource> PVar2;
  
  pJVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pJVar1 != (JointGroup *)0x0) {
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pJVar1,
               (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pJVar1) / 0x24) * 0x24,8);
    (this->_Mypair)._Myval2._Myfirst = (JointGroup *)0x0;
    (this->_Mypair)._Myval2._Mylast = (JointGroup *)0x0;
    (this->_Mypair)._Myval2._Myend = (JointGroup *)0x0;
  }
  return;
}

// _Tidy @ 14c47cb10

void __thiscall
std::
vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Tidy(vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *this)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  
  pvVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar1 != (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                 *)0x0) {
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (pvVar1,(this->_Mypair)._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)this);
    PVar2 = (this->_Mypair)._Myval1;
    pvVar1 = (this->_Mypair)._Myval2._Myfirst;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pvVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pvVar1 & 0xffffffffffffffe0,8);
    (this->_Mypair)._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    (this->_Mypair)._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    (this->_Mypair)._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
  }
  return;
}

// _Xlength @ 14c47cb70

void __cdecl
std::
vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c47cb90

void __cdecl
std::
vector<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c47cbb0

void __cdecl
std::
vector<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c47cbd0

void __cdecl
std::
vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// create @ 14c47cbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Evaluator<float> * __cdecl
block4::OptimizedStorage<float>::create
          (Evaluator<float> *__return_storage_ptr__,
          unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
          *param_1,ulong64 param_2,RotationType param_3,ushort param_4,MemoryResource *param_5)

{
  float *pfVar1;
  ushort *puVar2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar3;
  LODRegion *pLVar4;
  JointGroupLinearCalculationStrategy<float> *pJVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ushort *puVar8;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  *puVar9;
  Evaluator<float> *extraout_RAX;
  ushort *puVar10;
  ushort uVar11;
  int iVar12;
  undefined1 auStackY_1e8 [32];
  JointGroupLinearCalculationStrategy<float> *local_1b8 [2];
  JointStorage<float> local_1a8;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  local_c8;
  undefined1 local_80 [64];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  rl4::bpcm::JointStorage<float>::JointStorage<float>(&local_1a8,param_5);
  uVar7 = (ulonglong)param_4;
  pfVar1 = optimized::floatValues._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  _Assign_counted_range<float_const_*>
            (&local_1a8.values,pfVar1,
             (longlong)
             optimized::floatValues._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Mylast -
             (longlong)pfVar1 >> 2);
  puVar2 = optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Assign_counted_range<unsigned_short_const_*>
            (&local_1a8.inputIndices,puVar2,
             (longlong)
             optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Mylast -
             (longlong)puVar2 >> 1);
  pvVar3 = optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst;
  puVar2 = pvVar3[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Assign_counted_range<unsigned_short_const_*>
            (&local_1a8.outputIndices,puVar2,
             (longlong)pvVar3[uVar7]._Mypair._Myval2._Mylast - (longlong)puVar2 >> 1);
  pvVar3 = optimized::outputRotationIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2.
           _Myfirst;
  puVar2 = pvVar3[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<unsigned_short_const_*>
            (&local_1a8.outputRotationIndices,puVar2,
             (longlong)pvVar3[uVar7]._Mypair._Myval2._Mylast - (longlong)puVar2 >> 1);
  pvVar3 = optimized::outputRotationLODs._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst;
  puVar2 = pvVar3[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<unsigned_short_const_*>
            (&local_1a8.outputRotationLODs,puVar2,
             (longlong)pvVar3[uVar7]._Mypair._Myval2._Mylast - (longlong)puVar2 >> 1);
  pLVar4 = optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Myfirst;
  std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<rl4::LODRegion_const_*>
            (&local_1a8.lodRegions,pLVar4,
             ((longlong)
              optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2._Mylast -
             (longlong)pLVar4) / 0x18);
  local_80._24_4_ =
       (undefined4)
       ((longlong)local_1a8.values._Mypair._Myval2._Mylast -
        (longlong)local_1a8.values._Mypair._Myval2._Myfirst >> 2);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_80._16_8_ = 0;
  local_80._28_4_ =
       optimized::jointGroups._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst[uVar7].
       colCount;
  local_80._32_4_ =
       optimized::jointGroups._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst[uVar7].
       rowCount;
  if (local_1a8.jointGroups._Mypair._Myval2._Mylast == local_1a8.jointGroups._Mypair._Myval2._Myend)
  {
    std::
    vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
    ::_Emplace_reallocate<rl4::bpcm::JointGroup>
              (&local_1a8.jointGroups,local_1a8.jointGroups._Mypair._Myval2._Mylast,
               (JointGroup *)local_80);
  }
  else {
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->valuesOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->inputIndicesOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputIndicesOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->lodsOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputRotationIndicesOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputRotationLODsOffset = 0;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->valuesSize = local_80._24_4_;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->colCount = local_80._28_4_;
    (local_1a8.jointGroups._Mypair._Myval2._Mylast)->rowCount = local_80._32_4_;
    local_1a8.jointGroups._Mypair._Myval2._Mylast =
         local_1a8.jointGroups._Mypair._Myval2._Mylast + 1;
  }
  iVar12 = param_3 + 6;
  pvVar3 = optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst;
  uVar7 = (longlong)
          optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Mylast -
          (longlong)pvVar3 & 0xffffffffffffffe0;
  puVar2 = *(ushort **)((uVar7 - 0x10) + (longlong)pvVar3);
  puVar8 = *(ushort **)((uVar7 - 0x18) + (longlong)pvVar3);
  if (puVar8 == puVar2) {
LAB_14c47ce18:
    uVar11 = 0;
  }
  else {
    puVar10 = puVar8 + 1;
    if (puVar10 != puVar2) {
      do {
        if (*puVar8 < *puVar10) {
          puVar8 = puVar10;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar2);
      if (puVar8 == puVar2) goto LAB_14c47ce18;
    }
    uVar11 = *puVar8;
  }
  local_80._0_8_ =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_GPEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  local_1b8[0] = (JointGroupLinearCalculationStrategy<float> *)
                 CONCAT62(CONCAT51(local_1b8[0]._3_5_,param_3),
                          (short)((int)((uVar11 - 1) + iVar12) / iVar12) * (short)iVar12);
  local_80._8_4_ = (uint)local_1b8[0];
  local_80._56_8_ = local_80;
  puVar9 = std::
           unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
           ::
           unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_><std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>,0>
                     (&local_c8,param_1);
  rl4::bpcm::Evaluator<float>::Evaluator<float>
            (__return_storage_ptr__,&local_1a8,puVar9,
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_80,param_5);
  rl4::bpcm::JointStorage<float>::~JointStorage<float>(&local_1a8);
  pJVar5 = (param_1->_Mypair)._Myval2;
  if (pJVar5 != (JointGroupLinearCalculationStrategy<float> *)0x0) {
    plVar6 = *(longlong **)&(param_1->_Mypair)._Myval1.field_0x38;
    local_1b8[0] = pJVar5;
    if (plVar6 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return extraout_RAX;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,local_1b8);
  }
  puVar9 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
             **)&(param_1->_Mypair)._Myval1.field_0x38;
  if (puVar9 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *)0x0) {
    (**(code **)(*(longlong *)&(puVar9->_Mypair)._Myval1 + 0x20))(puVar9,puVar9 != param_1);
    *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
  }
  return __return_storage_ptr__;
}

// create @ 14c47cf10

Evaluator<float> * __cdecl
block4::OptimizedStorage<float>::create
          (Evaluator<float> *__return_storage_ptr__,
          unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
          *param_1,ulong64 param_2,RotationType param_3,MemoryResource *param_4)

{
  JointGroup *pJVar1;
  float *pfVar2;
  ushort *puVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *pvVar4;
  LODRegion *pLVar5;
  JointGroupLinearCalculationStrategy<float> *pJVar6;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  *puVar7;
  Evaluator<float> *pEVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort *puVar14;
  Evaluator<float> *extraout_RAX;
  ushort *puVar15;
  ushort uVar16;
  int iVar17;
  Evaluator<float> *local_1b8 [2];
  JointStorage<float> local_1a8;
  undefined1 local_c8 [56];
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  *local_90;
  JointGroupLinearCalculationStrategy<float> *local_88;
  undefined1 local_80 [72];
  
  local_1b8[0] = __return_storage_ptr__;
  rl4::bpcm::JointStorage<float>::JointStorage<float>(&local_1a8,param_4);
  uVar16 = 0;
  if ((short)((longlong)unoptimized::values._Mypair._Myval2._Mylast -
              (longlong)unoptimized::values._Mypair._Myval2._Myfirst >> 5) != 0) {
    do {
      pfVar2 = optimized::floatValues._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
      _Insert_counted_range<float_const_*>
                (&local_1a8.values,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float>_>_>)
                 local_1a8.values._Mypair._Myval2._Mylast,pfVar2,
                 (longlong)
                 optimized::floatValues._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Mylast -
                 (longlong)pfVar2 >> 2);
      puVar3 = optimized::inputIndices._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
      ::_Insert_counted_range<unsigned_short_const_*>
                (&local_1a8.inputIndices,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_>)
                 local_1a8.inputIndices._Mypair._Myval2._Mylast,puVar3,
                 (longlong)
                 optimized::inputIndices._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Mylast -
                 (longlong)puVar3 >> 1);
      pvVar4 = optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst;
      puVar3 = pvVar4[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
      ::_Insert_counted_range<unsigned_short_const_*>
                (&local_1a8.outputIndices,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_>)
                 local_1a8.outputIndices._Mypair._Myval2._Mylast,puVar3,
                 (longlong)pvVar4[uVar16]._Mypair._Myval2._Mylast - (longlong)puVar3 >> 1);
      pvVar4 = optimized::outputRotationIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2.
               _Myfirst;
      puVar3 = pvVar4[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      _Insert_counted_range<unsigned_short_const_*>
                (&local_1a8.outputRotationIndices,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_>)
                 local_1a8.outputRotationIndices._Mypair._Myval2._Mylast,puVar3,
                 (longlong)pvVar4[uVar16]._Mypair._Myval2._Mylast - (longlong)puVar3 >> 1);
      pvVar4 = optimized::outputRotationLODs._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2.
               _Myfirst;
      puVar3 = pvVar4[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      _Insert_counted_range<unsigned_short_const_*>
                (&local_1a8.outputRotationLODs,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_short>_>_>)
                 local_1a8.outputRotationLODs._Mypair._Myval2._Mylast,puVar3,
                 (longlong)pvVar4[uVar16]._Mypair._Myval2._Mylast - (longlong)puVar3 >> 1);
      pLVar5 = optimized::lodRegions._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Myfirst;
      std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
      _Insert_counted_range<rl4::LODRegion_const_*>
                (&local_1a8.lodRegions,
                 (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<rl4::LODRegion>_>_>)
                 local_1a8.lodRegions._Mypair._Myval2._Mylast,pLVar5,
                 ((longlong)
                  optimized::lodRegions._Mypair._Myval2._Myfirst[uVar16]._Mypair._Myval2._Mylast -
                 (longlong)pLVar5) / 0x18);
      pJVar1 = optimized::jointGroups._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst +
               uVar16;
      if (local_1a8.jointGroups._Mypair._Myval2._Mylast ==
          local_1a8.jointGroups._Mypair._Myval2._Myend) {
        std::
        vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
        ::_Emplace_reallocate<rl4::bpcm::JointGroup_const_&>
                  (&local_1a8.jointGroups,local_1a8.jointGroups._Mypair._Myval2._Mylast,pJVar1);
      }
      else {
        uVar10 = pJVar1->inputIndicesOffset;
        uVar11 = pJVar1->outputIndicesOffset;
        uVar12 = pJVar1->lodsOffset;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->valuesOffset = pJVar1->valuesOffset;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->inputIndicesOffset = uVar10;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputIndicesOffset = uVar11;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->lodsOffset = uVar12;
        uVar10 = pJVar1->outputRotationLODsOffset;
        uVar11 = pJVar1->valuesSize;
        uVar12 = pJVar1->colCount;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputRotationIndicesOffset =
             pJVar1->outputRotationIndicesOffset;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->outputRotationLODsOffset = uVar10;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->valuesSize = uVar11;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->colCount = uVar12;
        (local_1a8.jointGroups._Mypair._Myval2._Mylast)->rowCount = pJVar1->rowCount;
        local_1a8.jointGroups._Mypair._Myval2._Mylast =
             local_1a8.jointGroups._Mypair._Myval2._Mylast + 1;
      }
      uVar16 = uVar16 + 1;
      __return_storage_ptr__ = local_1b8[0];
    } while (uVar16 < (ushort)((longlong)unoptimized::values._Mypair._Myval2._Mylast -
                               (longlong)unoptimized::values._Mypair._Myval2._Myfirst >> 5));
  }
  iVar17 = param_3 + 6;
  pvVar4 = optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Myfirst;
  uVar13 = (longlong)
           optimized::outputIndices._Mypair._Myval2._Myfirst[param_2]._Mypair._Myval2._Mylast -
           (longlong)pvVar4 & 0xffffffffffffffe0;
  puVar3 = *(ushort **)((uVar13 - 0x10) + (longlong)pvVar4);
  puVar14 = *(ushort **)((uVar13 - 0x18) + (longlong)pvVar4);
  if (puVar14 == puVar3) {
LAB_14c47d158:
    uVar16 = 0;
  }
  else {
    puVar15 = puVar14 + 1;
    if (puVar15 != puVar3) {
      do {
        if (*puVar14 < *puVar15) {
          puVar14 = puVar15;
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar3);
      if (puVar14 == puVar3) goto LAB_14c47d158;
    }
    uVar16 = *puVar14;
  }
  pJVar6 = (param_1->_Mypair)._Myval2;
  (param_1->_Mypair)._Myval2 = (JointGroupLinearCalculationStrategy<float> *)0x0;
  puVar7 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
             **)&(param_1->_Mypair)._Myval1.field_0x38;
  local_80._0_8_ =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___OptimizedStorage_M_block4__SA_AV__Evaluator_M_bpcm_rl4__V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std___KW4RotationType_7_PEAVMemoryResource_pma___Z_V__unique_ptr_VJointsOutputInstance_rl4__V__function___A6AXPEAVJointsOutputInstance_rl4___Z_std___9_PEAVMemoryResource_pma___std__6B_
  ;
  local_90 = (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
              *)0x0;
  local_1b8[0] = (Evaluator<float> *)
                 CONCAT62(CONCAT51(local_1b8[0]._3_5_,param_3),
                          (short)((int)((uVar16 - 1) + iVar17) / iVar17) * (short)iVar17);
  local_80._8_4_ = local_1b8[0]._0_4_;
  local_80._56_8_ = local_80;
  if (puVar7 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *)0x0) {
    if (puVar7 == param_1) {
      local_90 = (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                  *)(**(code **)(*(longlong *)&(puVar7->_Mypair)._Myval1 + 8))(puVar7,local_c8);
      puVar7 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 **)&(param_1->_Mypair)._Myval1.field_0x38;
      if (puVar7 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                     *)0x0) {
        (**(code **)(*(longlong *)&(puVar7->_Mypair)._Myval1 + 0x20))(puVar7,puVar7 != param_1);
        *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
      }
    }
    else {
      *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
      local_90 = puVar7;
    }
  }
  local_88 = pJVar6;
  rl4::bpcm::Evaluator<float>::Evaluator<float>
            (__return_storage_ptr__,&local_1a8,
             (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
              *)local_c8,
             (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              *)local_80,param_4);
  rl4::bpcm::JointStorage<float>::~JointStorage<float>(&local_1a8);
  pEVar8 = (Evaluator<float> *)(param_1->_Mypair)._Myval2;
  if (pEVar8 != (Evaluator<float> *)0x0) {
    plVar9 = *(longlong **)&(param_1->_Mypair)._Myval1.field_0x38;
    local_1b8[0] = pEVar8;
    if (plVar9 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return extraout_RAX;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,local_1b8);
  }
  puVar7 = *(unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
             **)&(param_1->_Mypair)._Myval1.field_0x38;
  if (puVar7 != (unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
                 *)0x0) {
    (**(code **)(*(longlong *)&(puVar7->_Mypair)._Myval1 + 0x20))(puVar7,puVar7 != param_1);
    *(undefined8 *)&(param_1->_Mypair)._Myval1.field_0x38 = 0;
  }
  return __return_storage_ptr__;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044f9e0

void __cdecl
`pma::impl::
PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044fa00

void __cdecl
`pma::impl::
PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044fa20

void __cdecl
`pma::impl::
PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044fa40

void __cdecl
`pma::impl::
PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'floatValues'' @ 15044fa60

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__floatValues__(void)

{
  if (floatValues._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (floatValues._Mypair._Myval2._Myfirst,floatValues._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&floatValues);
    (**(code **)(*(longlong *)floatValues._Mypair._Myval1 + 0x10))
              (floatValues._Mypair._Myval1,floatValues._Mypair._Myval2._Myfirst,
               (longlong)floatValues._Mypair._Myval2._Myend -
               (longlong)floatValues._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    floatValues._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    floatValues._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    floatValues._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'halfFloatValues'' @ 15044fad0

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__halfFloatValues__(void)

{
  if (halfFloatValues._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
      0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (halfFloatValues._Mypair._Myval2._Myfirst,halfFloatValues._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&halfFloatValues);
    (**(code **)(*(longlong *)halfFloatValues._Mypair._Myval1 + 0x10))
              (halfFloatValues._Mypair._Myval1,halfFloatValues._Mypair._Myval2._Myfirst,
               (longlong)halfFloatValues._Mypair._Myval2._Myend -
               (longlong)halfFloatValues._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    halfFloatValues._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    halfFloatValues._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    halfFloatValues._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'inputIndices'' @ 15044fb40

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__inputIndices__(void)

{
  if (inputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
      0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (inputIndices._Mypair._Myval2._Myfirst,inputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&inputIndices);
    (**(code **)(*(longlong *)inputIndices._Mypair._Myval1 + 0x10))
              (inputIndices._Mypair._Myval1,inputIndices._Mypair._Myval2._Myfirst,
               (longlong)inputIndices._Mypair._Myval2._Myend -
               (longlong)inputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    inputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    inputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
    inputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'inputIndices'' @ 15044fbb0

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__inputIndices__(void)

{
  if (inputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (inputIndices._Mypair._Myval2._Myfirst,inputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&inputIndices);
    (**(code **)(*(longlong *)inputIndices._Mypair._Myval1 + 0x10))
              (inputIndices._Mypair._Myval1,inputIndices._Mypair._Myval2._Myfirst,
               (longlong)inputIndices._Mypair._Myval2._Myend -
               (longlong)inputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    inputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    inputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    inputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'jointGroups'' @ 15044fc20

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__jointGroups__(void)

{
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *this;
  vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  
  pvVar1 = jointGroups._Mypair._Myval2._Mylast;
  this = jointGroups._Mypair._Myval2._Myfirst;
  if (jointGroups._Mypair._Myval2._Myfirst !=
      (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    for (; this != pvVar1; this = this + 1) {
      std::
      vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
      ::_Tidy(this);
    }
    (**(code **)(*(longlong *)jointGroups._Mypair._Myval1 + 0x10))
              (jointGroups._Mypair._Myval1,jointGroups._Mypair._Myval2._Myfirst,
               (longlong)jointGroups._Mypair._Myval2._Myend -
               (longlong)jointGroups._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    jointGroups._Mypair._Myval2._Myfirst =
         (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
          *)0x0;
    jointGroups._Mypair._Myval2._Mylast =
         (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
          *)0x0;
    jointGroups._Mypair._Myval2._Myend =
         (vector<rl4::bpcm::JointGroup,pma::PolyAllocator<rl4::bpcm::JointGroup,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'lodRegions'' @ 15044fcb0

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__lodRegions__(void)

{
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *this;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar1;
  
  pvVar1 = lodRegions._Mypair._Myval2._Mylast;
  this = lodRegions._Mypair._Myval2._Myfirst;
  if (lodRegions._Mypair._Myval2._Myfirst !=
      (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    for (; this != pvVar1; this = this + 1) {
      std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
      _Tidy(this);
    }
    (**(code **)(*(longlong *)lodRegions._Mypair._Myval1 + 0x10))
              (lodRegions._Mypair._Myval1,lodRegions._Mypair._Myval2._Myfirst,
               (longlong)lodRegions._Mypair._Myval2._Myend -
               (longlong)lodRegions._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    lodRegions._Mypair._Myval2._Myfirst =
         (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
         0x0;
    lodRegions._Mypair._Myval2._Mylast =
         (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
         0x0;
    lodRegions._Mypair._Myval2._Myend =
         (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'lods'' @ 15044fd40

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__lods__(void)

{
  if (lods._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (lods._Mypair._Myval2._Myfirst,lods._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&lods);
    (**(code **)(*(longlong *)lods._Mypair._Myval1 + 0x10))
              (lods._Mypair._Myval1,lods._Mypair._Myval2._Myfirst,
               (longlong)lods._Mypair._Myval2._Myend - (longlong)lods._Mypair._Myval2._Myfirst &
               0xffffffffffffffe0,8);
    lods._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    lods._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    lods._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointRotationXs'' @ 15044fdb0

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointRotationXs__(void)

{
  if (neutralJointRotationXs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointRotationXs._Mypair._Myval1 + 0x10))
              (neutralJointRotationXs._Mypair._Myval1,
               neutralJointRotationXs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointRotationXs._Mypair._Myval2._Myend -
               (longlong)neutralJointRotationXs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointRotationXs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointRotationXs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointRotationXs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointRotationYs'' @ 15044fe10

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointRotationYs__(void)

{
  if (neutralJointRotationYs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointRotationYs._Mypair._Myval1 + 0x10))
              (neutralJointRotationYs._Mypair._Myval1,
               neutralJointRotationYs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointRotationYs._Mypair._Myval2._Myend -
               (longlong)neutralJointRotationYs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointRotationYs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointRotationYs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointRotationYs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointRotationZs'' @ 15044fe70

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointRotationZs__(void)

{
  if (neutralJointRotationZs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointRotationZs._Mypair._Myval1 + 0x10))
              (neutralJointRotationZs._Mypair._Myval1,
               neutralJointRotationZs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointRotationZs._Mypair._Myval2._Myend -
               (longlong)neutralJointRotationZs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointRotationZs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointRotationZs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointRotationZs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointTranslationXs'' @ 15044fed0

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointTranslationXs__(void)

{
  if (neutralJointTranslationXs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointTranslationXs._Mypair._Myval1 + 0x10))
              (neutralJointTranslationXs._Mypair._Myval1,
               neutralJointTranslationXs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointTranslationXs._Mypair._Myval2._Myend -
               (longlong)neutralJointTranslationXs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointTranslationXs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointTranslationXs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointTranslationXs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointTranslationYs'' @ 15044ff30

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointTranslationYs__(void)

{
  if (neutralJointTranslationYs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointTranslationYs._Mypair._Myval1 + 0x10))
              (neutralJointTranslationYs._Mypair._Myval1,
               neutralJointTranslationYs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointTranslationYs._Mypair._Myval2._Myend -
               (longlong)neutralJointTranslationYs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointTranslationYs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointTranslationYs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointTranslationYs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neutralJointTranslationZs'' @ 15044ff90

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__neutralJointTranslationZs__(void)

{
  if (neutralJointTranslationZs._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)neutralJointTranslationZs._Mypair._Myval1 + 0x10))
              (neutralJointTranslationZs._Mypair._Myval1,
               neutralJointTranslationZs._Mypair._Myval2._Myfirst,
               (longlong)neutralJointTranslationZs._Mypair._Myval2._Myend -
               (longlong)neutralJointTranslationZs._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    neutralJointTranslationZs._Mypair._Myval2._Myend = (float *)0x0;
    neutralJointTranslationZs._Mypair._Myval2._Myfirst = (float *)0x0;
    neutralJointTranslationZs._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'outputIndices'' @ 15044fff0

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__outputIndices__(void)

{
  if (outputIndices._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (outputIndices._Mypair._Myval2._Myfirst,outputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&outputIndices);
    (**(code **)(*(longlong *)outputIndices._Mypair._Myval1 + 0x10))
              (outputIndices._Mypair._Myval1,outputIndices._Mypair._Myval2._Myfirst,
               (longlong)outputIndices._Mypair._Myval2._Myend -
               (longlong)outputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    outputIndices._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputIndices._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputIndices._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'outputIndices'' @ 150450060

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__outputIndices__(void)

{
  if (outputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (outputIndices._Mypair._Myval2._Myfirst,outputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&outputIndices);
    (**(code **)(*(longlong *)outputIndices._Mypair._Myval1 + 0x10))
              (outputIndices._Mypair._Myval1,outputIndices._Mypair._Myval2._Myfirst,
               (longlong)outputIndices._Mypair._Myval2._Myend -
               (longlong)outputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    outputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    outputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    outputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'outputRotationIndices'' @ 1504500d0

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__outputRotationIndices__(void)

{
  if (outputRotationIndices._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (outputRotationIndices._Mypair._Myval2._Myfirst,
               outputRotationIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&outputRotationIndices);
    (**(code **)(*(longlong *)outputRotationIndices._Mypair._Myval1 + 0x10))
              (outputRotationIndices._Mypair._Myval1,outputRotationIndices._Mypair._Myval2._Myfirst,
               (longlong)outputRotationIndices._Mypair._Myval2._Myend -
               (longlong)outputRotationIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    outputRotationIndices._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputRotationIndices._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputRotationIndices._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'outputRotationLODs'' @ 150450140

void __cdecl block4::optimized::_dynamic_atexit_destructor_for__outputRotationLODs__(void)

{
  if (outputRotationLODs._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (outputRotationLODs._Mypair._Myval2._Myfirst,
               outputRotationLODs._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&outputRotationLODs);
    (**(code **)(*(longlong *)outputRotationLODs._Mypair._Myval1 + 0x10))
              (outputRotationLODs._Mypair._Myval1,outputRotationLODs._Mypair._Myval2._Myfirst,
               (longlong)outputRotationLODs._Mypair._Myval2._Myend -
               (longlong)outputRotationLODs._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    outputRotationLODs._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputRotationLODs._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    outputRotationLODs._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'values'' @ 1504501b0

void __cdecl block4::input::_dynamic_atexit_destructor_for__values__(void)

{
  if (values._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)values._Mypair._Myval1 + 0x10))
              (values._Mypair._Myval1,values._Mypair._Myval2._Myfirst,
               (longlong)values._Mypair._Myval2._Myend - (longlong)values._Mypair._Myval2._Myfirst &
               0xfffffffffffffffc,8);
    values._Mypair._Myval2._Myend = (float *)0x0;
    values._Mypair._Myval2._Myfirst = (float *)0x0;
    values._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'values'' @ 150450210

void __cdecl block4::unoptimized::_dynamic_atexit_destructor_for__values__(void)

{
  if (values._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (values._Mypair._Myval2._Myfirst,values._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&values);
    (**(code **)(*(longlong *)values._Mypair._Myval1 + 0x10))
              (values._Mypair._Myval1,values._Mypair._Myval2._Myfirst,
               (longlong)values._Mypair._Myval2._Myend - (longlong)values._Mypair._Myval2._Myfirst &
               0xffffffffffffffe0,8);
    values._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    values._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    values._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'valuesPerLOD'' @ 150450280

void __cdecl block4::output::_dynamic_atexit_destructor_for__valuesPerLOD__(void)

{
  if (valuesPerLOD._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (valuesPerLOD._Mypair._Myval2._Myfirst,valuesPerLOD._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&valuesPerLOD);
    (**(code **)(*(longlong *)valuesPerLOD._Mypair._Myval1 + 0x10))
              (valuesPerLOD._Mypair._Myval1,valuesPerLOD._Mypair._Myval2._Myfirst,
               (longlong)valuesPerLOD._Mypair._Myval2._Myend -
               (longlong)valuesPerLOD._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    valuesPerLOD._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    valuesPerLOD._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    valuesPerLOD._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

