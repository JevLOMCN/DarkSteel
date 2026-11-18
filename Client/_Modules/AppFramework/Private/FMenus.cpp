// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// FillMenu1Entries @ 1430bfa20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001430c1b24) */
/* WARNING: Removing unreachable block (ram,0x0001430c177e) */
/* WARNING: Removing unreachable block (ram,0x0001430c1336) */
/* WARNING: Removing unreachable block (ram,0x0001430c0fe4) */
/* WARNING: Removing unreachable block (ram,0x0001430c0c92) */
/* WARNING: Removing unreachable block (ram,0x0001430c0952) */
/* WARNING: Removing unreachable block (ram,0x0001430c050a) */
/* WARNING: Removing unreachable block (ram,0x0001430c01b8) */
/* WARNING: Removing unreachable block (ram,0x0001430bfe87) */
/* WARNING: Removing unreachable block (ram,0x0001430bfb59) */
/* WARNING: Removing unreachable block (ram,0x0001430bfcab) */
/* WARNING: Removing unreachable block (ram,0x0001430bffd9) */
/* WARNING: Removing unreachable block (ram,0x0001430c031c) */
/* WARNING: Removing unreachable block (ram,0x0001430c066e) */
/* WARNING: Removing unreachable block (ram,0x0001430c0ab3) */
/* WARNING: Removing unreachable block (ram,0x0001430c0df6) */
/* WARNING: Removing unreachable block (ram,0x0001430c1148) */
/* WARNING: Removing unreachable block (ram,0x0001430c149a) */
/* WARNING: Removing unreachable block (ram,0x0001430c18a3) */
/* WARNING: Removing unreachable block (ram,0x0001430c1c49) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl FMenus::FillMenu1Entries(FMenuBuilder *param_1)

{
  FName *pFVar1;
  FMultiBoxTestCommandList *pFVar2;
  FText *pFVar3;
  TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SVolumeControl,1> *pTVar4;
  T0RequiredArgs local_1aa8 [8];
  FName *local_1aa0;
  FName *local_1a98;
  FName *local_1a90;
  FName *local_1a88;
  FName *local_1a80;
  FName *local_1a78;
  FName *local_1a70;
  FName *local_1a68;
  FName *local_1a60;
  FName *local_1a58;
  FName *local_1a50;
  FName *local_1a48;
  FName *local_1a40;
  FName *local_1a38;
  FName *local_1a30;
  FName *local_1a28;
  FName *local_1a20;
  FName *local_1a18;
  FName *local_1a10;
  FName *local_1a08;
  uint local_1a00;
  uint local_19f8;
  uint local_19f0;
  uint local_19e8;
  uint local_19e0;
  uint local_19d8;
  uint local_19d0;
  uint local_19c8;
  uint local_19c0;
  uint local_19b8;
  uint local_19b4;
  uint local_19b0;
  uint local_19a8;
  uint local_19a0;
  uint local_1998;
  uint local_1990;
  uint local_1988;
  uint local_1980;
  uint local_1978;
  uint local_1970;
  uint local_1968;
  uint local_1960;
  uint local_1958;
  uint local_1950;
  uint local_1948;
  uint local_1940;
  uint local_1938;
  uint local_1930;
  uint local_1928;
  uint local_1920;
  uint local_1918;
  uint local_1910;
  uint local_1908;
  uint local_1900;
  uint local_18f8;
  uint local_18f0;
  uint local_18e8;
  uint local_18e0;
  uint local_18d8;
  uint local_18d0;
  FNameEntryId *local_18c8;
  FNameEntryId *local_18c0;
  FNameEntryId *local_18b8;
  FNameEntryId *local_18b0;
  FNameEntryId *local_18a8;
  FNameEntryId *local_18a0;
  FNameEntryId *local_1898;
  FNameEntryId *local_1890;
  FNameEntryId *local_1888;
  FNameEntryId *local_1880;
  FNameEntryId *local_1878;
  FNameEntryId *local_1870;
  FNameEntryId *local_1868;
  FNameEntryId *local_1860;
  FNameEntryId *local_1858;
  FNameEntryId *local_1850;
  FNameEntryId *local_1848;
  FNameEntryId *local_1840;
  FNameEntryId *local_1838;
  FNameEntryId *local_1830;
  FNameEntryId local_1828 [2];
  FNameEntryId local_1820 [2];
  FNameEntryId local_1818 [2];
  FNameEntryId local_1810 [2];
  FNameEntryId local_1808 [2];
  FNameEntryId local_1800 [2];
  FNameEntryId local_17f8 [2];
  FNameEntryId local_17f0 [2];
  FNameEntryId local_17e8;
  FNameEntryId local_17e4 [2];
  FNameEntryId local_17dc [2];
  FNameEntryId local_17d4 [2];
  FNameEntryId local_17cc [2];
  FNameEntryId local_17c4 [2];
  FNameEntryId local_17bc [2];
  FNameEntryId local_17b4 [2];
  FNameEntryId local_17ac [2];
  FNameEntryId local_17a4 [2];
  FNameEntryId local_179c [2];
  FNameEntryId local_1794 [3];
  FName *local_1788;
  FName local_1780;
  FName local_1778;
  TAttribute<FMenuEntryResizeParams> *local_1770;
  TAttribute<EVisibility> *local_1768;
  TAttribute<FText> *local_1760;
  FName local_1758;
  FNameEntryId *local_1750;
  FName *local_1748;
  FName local_1740;
  FName local_1738;
  FName local_1730;
  FName local_1728;
  FName local_1720;
  FNameEntryId *local_1718;
  FName *local_1710;
  FName local_1708;
  FName local_1700;
  FName local_16f8;
  FName local_16f0;
  FName local_16e8;
  TSharedPtr<FUICommandInfo_const_,1> *local_16e0;
  TAttribute<EVisibility> *local_16d8;
  FName local_16d0;
  FSlateIcon *local_16c8;
  TAttribute<FText> *local_16c0;
  TAttribute<FText> *local_16b8;
  FName local_16b0;
  TSharedPtr<FUICommandInfo_const_,1> *local_16a8;
  FNameEntryId *local_16a0;
  FName *local_1698;
  FName local_1690;
  FName local_1688;
  FName local_1680;
  FName local_1678;
  FName local_1670;
  FNameEntryId *local_1668;
  FName *local_1660;
  FName local_1658;
  FName local_1650;
  FName local_1648;
  FName local_1640;
  FName local_1638;
  TSharedPtr<FUICommandInfo_const_,1> *local_1630;
  TAttribute<EVisibility> *local_1628;
  FName local_1620;
  FSlateIcon *local_1618;
  TAttribute<FText> *local_1610;
  TAttribute<FText> *local_1608;
  FName local_1600;
  TSharedPtr<FUICommandInfo_const_,1> *local_15f8;
  FNameEntryId *local_15f0;
  FName *local_15e8;
  FName local_15e0;
  FName local_15d8;
  FName local_15d0;
  FName local_15c8;
  FName local_15c0;
  FNameEntryId *local_15b8;
  FName *local_15b0;
  FName local_15a8;
  FName local_15a0;
  FName local_1598;
  FName local_1590;
  FName local_1588;
  TSharedPtr<FUICommandInfo_const_,1> *local_1580;
  TAttribute<EVisibility> *local_1578;
  FName local_1570;
  FSlateIcon *local_1568;
  TAttribute<FText> *local_1560;
  TAttribute<FText> *local_1558;
  FName local_1550;
  TSharedPtr<FUICommandInfo_const_,1> *local_1548;
  FNameEntryId *local_1540;
  FName *local_1538;
  FName local_1530;
  FName local_1528;
  FName local_1520;
  FName local_1518;
  FName local_1510;
  FNameEntryId *local_1508;
  FName *local_1500;
  FName local_14f8;
  FName local_14f0;
  FName local_14e8;
  FName local_14e0;
  FName local_14d8;
  TSharedPtr<FUICommandInfo_const_,1> *local_14d0;
  TAttribute<EVisibility> *local_14c8;
  FName local_14c0;
  FSlateIcon *local_14b8;
  TAttribute<FText> *local_14b0;
  TAttribute<FText> *local_14a8;
  FName local_14a0;
  TSharedPtr<FUICommandInfo_const_,1> *local_1498;
  FName *local_1490;
  FName local_1488;
  FName local_1480;
  TAttribute<FMenuEntryResizeParams> *local_1478;
  TAttribute<EVisibility> *local_1470;
  TAttribute<FText> *local_1468;
  FName local_1460;
  FNameEntryId *local_1458;
  FName *local_1450;
  FName local_1448;
  FName local_1440;
  FName local_1438;
  FName local_1430;
  FName local_1428;
  FNameEntryId *local_1420;
  FName *local_1418;
  FName local_1410;
  FName local_1408;
  FName local_1400;
  FName local_13f8;
  FName local_13f0;
  TSharedPtr<FUICommandInfo_const_,1> *local_13e8;
  TAttribute<EVisibility> *local_13e0;
  FName local_13d8;
  FSlateIcon *local_13d0;
  TAttribute<FText> *local_13c8;
  TAttribute<FText> *local_13c0;
  FName local_13b8;
  TSharedPtr<FUICommandInfo_const_,1> *local_13b0;
  FNameEntryId *local_13a8;
  FName *local_13a0;
  FName local_1398;
  FName local_1390;
  FName local_1388;
  FName local_1380;
  FName local_1378;
  FNameEntryId *local_1370;
  FName *local_1368;
  FName local_1360;
  FName local_1358;
  FName local_1350;
  FName local_1348;
  FName local_1340;
  TSharedPtr<FUICommandInfo_const_,1> *local_1338;
  TAttribute<EVisibility> *local_1330;
  FName local_1328;
  FSlateIcon *local_1320;
  TAttribute<FText> *local_1318;
  TAttribute<FText> *local_1310;
  FName local_1308;
  TSharedPtr<FUICommandInfo_const_,1> *local_1300;
  FNameEntryId *local_12f8;
  FName *local_12f0;
  FName local_12e8;
  FName local_12e0;
  FName local_12d8;
  FName local_12d0;
  FName local_12c8;
  FNameEntryId *local_12c0;
  FName *local_12b8;
  FName local_12b0;
  FName local_12a8;
  FName local_12a0;
  FName local_1298;
  FName local_1290;
  TSharedPtr<FUICommandInfo_const_,1> *local_1288;
  TAttribute<EVisibility> *local_1280;
  FName local_1278;
  FSlateIcon *local_1270;
  TAttribute<FText> *local_1268;
  TAttribute<FText> *local_1260;
  FName local_1258;
  TSharedPtr<FUICommandInfo_const_,1> *local_1250;
  FNameEntryId *local_1248;
  FName *local_1240;
  FName local_1238;
  FName local_1230;
  FName local_1228;
  FName local_1220;
  FName local_1218;
  FNameEntryId *local_1210;
  FName *local_1208;
  FName local_1200;
  FName local_11f8;
  FName local_11f0;
  FName local_11e8;
  FName local_11e0;
  TSharedPtr<FUICommandInfo_const_,1> *local_11d8;
  TAttribute<EVisibility> *local_11d0;
  FName local_11c8;
  FSlateIcon *local_11c0;
  TAttribute<FText> *local_11b8;
  TAttribute<FText> *local_11b0;
  FName local_11a8;
  TSharedPtr<FUICommandInfo_const_,1> *local_11a0;
  FName *local_1198;
  FName local_1190;
  FName local_1188;
  TAttribute<FMenuEntryResizeParams> *local_1180;
  TAttribute<EVisibility> *local_1178;
  TAttribute<FText> *local_1170;
  FName local_1168;
  FNameEntryId *local_1160;
  FName *local_1158;
  FName local_1150;
  FName local_1148;
  FName local_1140;
  FName local_1138;
  FName local_1130;
  FNameEntryId *local_1128;
  FName *local_1120;
  FName local_1118;
  FName local_1110;
  FName local_1108;
  FName local_1100;
  FName local_10f8;
  TAttribute<EVisibility> *local_10f0;
  FName local_10e8;
  FName local_10e0;
  FSlateIcon *local_10d8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_10d0;
  FNameEntryId *local_10c8;
  FName *local_10c0;
  FName local_10b8;
  FName local_10b0;
  FName local_10a8;
  FName local_10a0;
  FName local_1098;
  FNameEntryId *local_1090;
  FName *local_1088;
  FName local_1080;
  FName local_1078;
  FName local_1070;
  FName local_1068;
  FName local_1060;
  TAttribute<EVisibility> *local_1058;
  FName local_1050;
  FName local_1048;
  FSlateIcon *local_1040;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_1038;
  FName *local_1030;
  FName local_1028;
  FName local_1020;
  TAttribute<FMenuEntryResizeParams> *local_1018;
  TAttribute<EVisibility> *local_1010;
  TAttribute<FText> *local_1008;
  FName local_1000;
  FArguments *local_ff8;
  TSharedRef<SWidget,1> *local_ff0;
  FText *local_fe8;
  TSharedRef<SWidget,1> *local_fe0;
  FName local_fd8;
  FName local_fd0;
  FName local_fc8;
  FName local_fc0;
  FName local_fb8;
  FName local_fb0;
  FName local_fa8;
  FName local_fa0;
  FName local_f98;
  FName local_f90;
  FName local_f88;
  FName local_f80;
  FName local_f78;
  FName local_f70;
  FName local_f68;
  FName local_f60;
  FName local_f58;
  FName local_f50;
  FName local_f48;
  FName local_f40;
  FName local_f38;
  FName local_f30;
  FName local_f28;
  FName local_f20;
  FText local_f18;
  FText local_f08;
  FText local_ef8;
  FText local_ee8;
  TSharedRef<SVolumeControl,1> local_ed8;
  FText local_ec8;
  FText local_eb8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_ea8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_e90;
  TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> local_e78;
  TSharedPtr<FUICommandInfo_const_,1> local_e60;
  TSharedPtr<FUICommandInfo_const_,1> local_e50;
  TSharedPtr<FUICommandInfo_const_,1> local_e40;
  TSharedPtr<FUICommandInfo_const_,1> local_e30;
  TSharedPtr<FUICommandInfo_const_,1> local_e20;
  TSharedPtr<FUICommandInfo_const_,1> local_e10;
  TSharedPtr<FUICommandInfo_const_,1> local_e00;
  TSharedPtr<FUICommandInfo_const_,1> local_df0;
  TSharedRef<SWidget,1> local_de0;
  TAttribute<EVisibility> local_dd0;
  TAttribute<EVisibility> local_db0;
  TAttribute<EVisibility> local_d90;
  TAttribute<EVisibility> local_d70;
  TAttribute<EVisibility> local_d50;
  TAttribute<EVisibility> local_d30;
  TAttribute<EVisibility> local_d10;
  TAttribute<EVisibility> local_cf0;
  TAttribute<EVisibility> local_cd0;
  TAttribute<EVisibility> local_cb0;
  TAttribute<EVisibility> local_c90;
  TAttribute<EVisibility> local_c70;
  TAttribute<EVisibility> local_c50;
  TAttribute<EVisibility> local_c30;
  TAttribute<FText> local_c10;
  TAttribute<FText> local_be0;
  TAttribute<FText> local_bb0;
  TAttribute<FText> local_b80;
  TAttribute<FText> local_b50;
  TAttribute<FText> local_b20;
  TAttribute<FText> local_af0;
  TAttribute<FText> local_ac0;
  TAttribute<FText> local_a90;
  TAttribute<FText> local_a60;
  TAttribute<FText> local_a30;
  TAttribute<FText> local_a00;
  TAttribute<FText> local_9d0;
  TAttribute<FText> local_9a0;
  TAttribute<FText> local_970;
  TAttribute<FText> local_940;
  TAttribute<FText> local_910;
  TAttribute<FText> local_8e0;
  TAttribute<FText> local_8b0;
  TAttribute<FText> local_880;
  TAttribute<FText> local_850;
  TAttribute<FText> local_820;
  TAttribute<FText> local_7f0;
  TAttribute<FText> local_7c0;
  TAttribute<FText> local_790;
  FSlateIcon local_760;
  FSlateIcon local_740;
  FSlateIcon local_720;
  FSlateIcon local_700;
  FSlateIcon local_6e0;
  FSlateIcon local_6c0;
  FSlateIcon local_6a0;
  FSlateIcon local_680;
  FSlateIcon local_660;
  FSlateIcon local_640;
  TAttribute<FMenuEntryResizeParams> local_620;
  TAttribute<FMenuEntryResizeParams> local_538;
  TAttribute<FMenuEntryResizeParams> local_450;
  TAttribute<FMenuEntryResizeParams> local_368;
  FArguments local_280;
  undefined8 uStack_8;
  
  uStack_8 = 0x1430bfa2f;
  local_1770 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_620);
  local_1768 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_dd0);
  local_1760 = TAttribute<FText>::TAttribute<FText>(&local_a90);
  local_1788 = &local_fd8;
  pFVar1 = ::FName::FName(local_1788,"Menu1Entries");
  local_1780 = *pFVar1;
  local_1778 = local_1780;
  local_1758 = local_1780;
  FMenuBuilder::BeginSection(param_1,local_1780,local_1760,local_1768,local_1770);
  TAttribute<FText>::~TAttribute<FText>(&local_a90);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_dd0);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_620);
  local_16d8 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_db0);
  local_1a98 = &local_fd0;
  local_18c0 = FNameEntryId::FNameEntryId(local_1828);
  local_1968 = local_18c0->Value;
  local_1960 = local_1968;
  local_1750 = local_18c0;
  FNameEntryId::FNameEntryId(&local_1a98->ComparisonIndex);
  local_1a98->Number = 0;
  (local_1a98->ComparisonIndex).Value = local_1960;
  local_1a98->Number = 0;
  local_1748 = local_1a98;
  local_1740 = *local_1a98;
  local_1738 = local_1740;
  local_1730 = local_1740;
  local_1728 = local_1740;
  local_1720 = local_1740;
  local_16d0 = local_1740;
  local_16c8 = FSlateIcon::FSlateIcon(&local_720);
  local_16c0 = TAttribute<FText>::TAttribute<FText>(&local_a30);
  local_16b8 = TAttribute<FText>::TAttribute<FText>(&local_a60);
  local_1a90 = &local_fc8;
  local_18b8 = FNameEntryId::FNameEntryId(local_1820);
  local_1958 = local_18b8->Value;
  local_1950 = local_1958;
  local_1718 = local_18b8;
  FNameEntryId::FNameEntryId(&local_1a90->ComparisonIndex);
  local_1a90->Number = 0;
  (local_1a90->ComparisonIndex).Value = local_1950;
  local_1a90->Number = 0;
  local_1710 = local_1a90;
  local_1708 = *local_1a90;
  local_16e0 = &local_e60;
  local_1700 = local_1708;
  local_16f8 = local_1708;
  local_16f0 = local_1708;
  local_16e8 = local_1708;
  local_16b0 = local_1708;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_16a8 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_16e0,&pFVar2->FirstCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_16a8,local_16b0,local_16b8,local_16c0,local_16c8,
             local_16d0,local_16d8);
  TAttribute<FText>::~TAttribute<FText>(&local_a60);
  TAttribute<FText>::~TAttribute<FText>(&local_a30);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_db0);
  local_1628 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_d90);
  local_1a88 = &local_fc0;
  local_18b0 = FNameEntryId::FNameEntryId(local_1818);
  local_1948 = local_18b0->Value;
  local_1940 = local_1948;
  local_16a0 = local_18b0;
  FNameEntryId::FNameEntryId(&local_1a88->ComparisonIndex);
  local_1a88->Number = 0;
  (local_1a88->ComparisonIndex).Value = local_1940;
  local_1a88->Number = 0;
  local_1698 = local_1a88;
  local_1690 = *local_1a88;
  local_1688 = local_1690;
  local_1680 = local_1690;
  local_1678 = local_1690;
  local_1670 = local_1690;
  local_1620 = local_1690;
  local_1618 = FSlateIcon::FSlateIcon(&local_700);
  local_1610 = TAttribute<FText>::TAttribute<FText>(&local_9d0);
  local_1608 = TAttribute<FText>::TAttribute<FText>(&local_a00);
  local_1a80 = &local_fb8;
  local_18a8 = FNameEntryId::FNameEntryId(local_1810);
  local_1938 = local_18a8->Value;
  local_1930 = local_1938;
  local_1668 = local_18a8;
  FNameEntryId::FNameEntryId(&local_1a80->ComparisonIndex);
  local_1a80->Number = 0;
  (local_1a80->ComparisonIndex).Value = local_1930;
  local_1a80->Number = 0;
  local_1660 = local_1a80;
  local_1658 = *local_1a80;
  local_1630 = &local_e50;
  local_1650 = local_1658;
  local_1648 = local_1658;
  local_1640 = local_1658;
  local_1638 = local_1658;
  local_1600 = local_1658;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_15f8 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_1630,&pFVar2->SecondCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_15f8,local_1600,local_1608,local_1610,local_1618,
             local_1620,local_1628);
  TAttribute<FText>::~TAttribute<FText>(&local_a00);
  TAttribute<FText>::~TAttribute<FText>(&local_9d0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_d90);
  local_1578 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_d70);
  local_1a78 = &local_fb0;
  local_18a0 = FNameEntryId::FNameEntryId(local_1808);
  local_1928 = local_18a0->Value;
  local_1918 = local_1928;
  local_15f0 = local_18a0;
  FNameEntryId::FNameEntryId(&local_1a78->ComparisonIndex);
  local_1a78->Number = 0;
  (local_1a78->ComparisonIndex).Value = local_1918;
  local_1a78->Number = 0;
  local_15e8 = local_1a78;
  local_15e0 = *local_1a78;
  local_15d8 = local_15e0;
  local_15d0 = local_15e0;
  local_15c8 = local_15e0;
  local_15c0 = local_15e0;
  local_1570 = local_15e0;
  local_1568 = FSlateIcon::FSlateIcon(&local_6e0);
  local_1560 = TAttribute<FText>::TAttribute<FText>(&local_ac0);
  local_1558 = TAttribute<FText>::TAttribute<FText>(&local_af0);
  local_1a70 = &local_fa8;
  local_1898 = FNameEntryId::FNameEntryId(local_1800);
  local_1910 = local_1898->Value;
  local_1908 = local_1910;
  local_15b8 = local_1898;
  FNameEntryId::FNameEntryId(&local_1a70->ComparisonIndex);
  local_1a70->Number = 0;
  (local_1a70->ComparisonIndex).Value = local_1908;
  local_1a70->Number = 0;
  local_15b0 = local_1a70;
  local_15a8 = *local_1a70;
  local_1580 = &local_e40;
  local_15a0 = local_15a8;
  local_1598 = local_15a8;
  local_1590 = local_15a8;
  local_1588 = local_15a8;
  local_1550 = local_15a8;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_1548 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_1580,&pFVar2->ThirdCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_1548,local_1550,local_1558,local_1560,local_1568,
             local_1570,local_1578);
  TAttribute<FText>::~TAttribute<FText>(&local_af0);
  TAttribute<FText>::~TAttribute<FText>(&local_ac0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_d70);
  local_14c8 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_d50);
  local_1a68 = &local_fa0;
  local_1890 = FNameEntryId::FNameEntryId(local_17f8);
  local_1900 = local_1890->Value;
  local_18f8 = local_1900;
  local_1540 = local_1890;
  FNameEntryId::FNameEntryId(&local_1a68->ComparisonIndex);
  local_1a68->Number = 0;
  (local_1a68->ComparisonIndex).Value = local_18f8;
  local_1a68->Number = 0;
  local_1538 = local_1a68;
  local_1530 = *local_1a68;
  local_1528 = local_1530;
  local_1520 = local_1530;
  local_1518 = local_1530;
  local_1510 = local_1530;
  local_14c0 = local_1530;
  local_14b8 = FSlateIcon::FSlateIcon(&local_6c0);
  local_14b0 = TAttribute<FText>::TAttribute<FText>(&local_9a0);
  local_14a8 = TAttribute<FText>::TAttribute<FText>(&local_b20);
  local_1a60 = &local_f98;
  local_1888 = FNameEntryId::FNameEntryId(local_17f0);
  local_18f0 = local_1888->Value;
  local_18e8 = local_18f0;
  local_1508 = local_1888;
  FNameEntryId::FNameEntryId(&local_1a60->ComparisonIndex);
  local_1a60->Number = 0;
  (local_1a60->ComparisonIndex).Value = local_18e8;
  local_1a60->Number = 0;
  local_1500 = local_1a60;
  local_14f8 = *local_1a60;
  local_14d0 = &local_e30;
  local_14f0 = local_14f8;
  local_14e8 = local_14f8;
  local_14e0 = local_14f8;
  local_14d8 = local_14f8;
  local_14a0 = local_14f8;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_1498 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_14d0,&pFVar2->FourthCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_1498,local_14a0,local_14a8,local_14b0,local_14b8,
             local_14c0,local_14c8);
  TAttribute<FText>::~TAttribute<FText>(&local_b20);
  TAttribute<FText>::~TAttribute<FText>(&local_9a0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_d50);
  FMenuBuilder::EndSection(param_1);
  local_1478 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_538);
  local_1470 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_d30);
  local_1468 = TAttribute<FText>::TAttribute<FText>(&local_970);
  local_1490 = &local_f90;
  pFVar1 = ::FName::FName(local_1490,"Menu1Entries2");
  local_1488 = *pFVar1;
  local_1480 = local_1488;
  local_1460 = local_1488;
  FMenuBuilder::BeginSection(param_1,local_1488,local_1468,local_1470,local_1478);
  TAttribute<FText>::~TAttribute<FText>(&local_970);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_d30);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_538);
  local_13e0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_d10);
  local_1a58 = &local_f88;
  local_1880 = FNameEntryId::FNameEntryId(&local_17e8);
  local_18e0 = local_1880->Value;
  local_18d8 = local_18e0;
  local_1458 = local_1880;
  FNameEntryId::FNameEntryId(&local_1a58->ComparisonIndex);
  local_1a58->Number = 0;
  (local_1a58->ComparisonIndex).Value = local_18d8;
  local_1a58->Number = 0;
  local_1450 = local_1a58;
  local_1448 = *local_1a58;
  local_1440 = local_1448;
  local_1438 = local_1448;
  local_1430 = local_1448;
  local_1428 = local_1448;
  local_13d8 = local_1448;
  local_13d0 = FSlateIcon::FSlateIcon(&local_6a0);
  local_13c8 = TAttribute<FText>::TAttribute<FText>(&local_910);
  local_13c0 = TAttribute<FText>::TAttribute<FText>(&local_940);
  local_1aa0 = &local_f80;
  local_1878 = FNameEntryId::FNameEntryId(local_17e4);
  local_1a00 = local_1878->Value;
  local_18d0 = local_1a00;
  local_1420 = local_1878;
  FNameEntryId::FNameEntryId(&local_1aa0->ComparisonIndex);
  local_1aa0->Number = 0;
  (local_1aa0->ComparisonIndex).Value = local_1a00;
  local_1aa0->Number = 0;
  local_1418 = local_1aa0;
  local_1410 = *local_1aa0;
  local_13e8 = &local_e20;
  local_1408 = local_1410;
  local_1400 = local_1410;
  local_13f8 = local_1410;
  local_13f0 = local_1410;
  local_13b8 = local_1410;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_13b0 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_13e8,&pFVar2->FifthCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_13b0,local_13b8,local_13c0,local_13c8,local_13d0,
             local_13d8,local_13e0);
  TAttribute<FText>::~TAttribute<FText>(&local_940);
  TAttribute<FText>::~TAttribute<FText>(&local_910);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_d10);
  local_1330 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_cf0);
  local_1a50 = &local_f78;
  local_1870 = FNameEntryId::FNameEntryId(local_17dc);
  local_19f8 = local_1870->Value;
  local_19f0 = local_19f8;
  local_13a8 = local_1870;
  FNameEntryId::FNameEntryId(&local_1a50->ComparisonIndex);
  local_1a50->Number = 0;
  (local_1a50->ComparisonIndex).Value = local_19f0;
  local_1a50->Number = 0;
  local_13a0 = local_1a50;
  local_1398 = *local_1a50;
  local_1390 = local_1398;
  local_1388 = local_1398;
  local_1380 = local_1398;
  local_1378 = local_1398;
  local_1328 = local_1398;
  local_1320 = FSlateIcon::FSlateIcon(&local_680);
  local_1318 = TAttribute<FText>::TAttribute<FText>(&local_8b0);
  local_1310 = TAttribute<FText>::TAttribute<FText>(&local_8e0);
  local_1a48 = &local_f70;
  local_1868 = FNameEntryId::FNameEntryId(local_17d4);
  local_19e8 = local_1868->Value;
  local_19e0 = local_19e8;
  local_1370 = local_1868;
  FNameEntryId::FNameEntryId(&local_1a48->ComparisonIndex);
  local_1a48->Number = 0;
  (local_1a48->ComparisonIndex).Value = local_19e0;
  local_1a48->Number = 0;
  local_1368 = local_1a48;
  local_1360 = *local_1a48;
  local_1338 = &local_e10;
  local_1358 = local_1360;
  local_1350 = local_1360;
  local_1348 = local_1360;
  local_1340 = local_1360;
  local_1308 = local_1360;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_1300 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_1338,&pFVar2->SixthCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_1300,local_1308,local_1310,local_1318,local_1320,
             local_1328,local_1330);
  TAttribute<FText>::~TAttribute<FText>(&local_8e0);
  TAttribute<FText>::~TAttribute<FText>(&local_8b0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_cf0);
  local_1280 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_cd0);
  local_1a40 = &local_f68;
  local_1860 = FNameEntryId::FNameEntryId(local_17cc);
  local_19d8 = local_1860->Value;
  local_19d0 = local_19d8;
  local_12f8 = local_1860;
  FNameEntryId::FNameEntryId(&local_1a40->ComparisonIndex);
  local_1a40->Number = 0;
  (local_1a40->ComparisonIndex).Value = local_19d0;
  local_1a40->Number = 0;
  local_12f0 = local_1a40;
  local_12e8 = *local_1a40;
  local_12e0 = local_12e8;
  local_12d8 = local_12e8;
  local_12d0 = local_12e8;
  local_12c8 = local_12e8;
  local_1278 = local_12e8;
  local_1270 = FSlateIcon::FSlateIcon(&local_660);
  local_1268 = TAttribute<FText>::TAttribute<FText>(&local_850);
  local_1260 = TAttribute<FText>::TAttribute<FText>(&local_880);
  local_1a38 = &local_f60;
  local_1858 = FNameEntryId::FNameEntryId(local_17c4);
  local_19c8 = local_1858->Value;
  local_19c0 = local_19c8;
  local_12c0 = local_1858;
  FNameEntryId::FNameEntryId(&local_1a38->ComparisonIndex);
  local_1a38->Number = 0;
  (local_1a38->ComparisonIndex).Value = local_19c0;
  local_1a38->Number = 0;
  local_12b8 = local_1a38;
  local_12b0 = *local_1a38;
  local_1288 = &local_e00;
  local_12a8 = local_12b0;
  local_12a0 = local_12b0;
  local_1298 = local_12b0;
  local_1290 = local_12b0;
  local_1258 = local_12b0;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_1250 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_1288,&pFVar2->SeventhCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_1250,local_1258,local_1260,local_1268,local_1270,
             local_1278,local_1280);
  TAttribute<FText>::~TAttribute<FText>(&local_880);
  TAttribute<FText>::~TAttribute<FText>(&local_850);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_cd0);
  local_11d0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_cb0);
  local_1a30 = &local_f58;
  local_1850 = FNameEntryId::FNameEntryId(local_17bc);
  local_19b8 = local_1850->Value;
  local_1970 = local_19b8;
  local_1248 = local_1850;
  FNameEntryId::FNameEntryId(&local_1a30->ComparisonIndex);
  local_1a30->Number = 0;
  (local_1a30->ComparisonIndex).Value = local_1970;
  local_1a30->Number = 0;
  local_1240 = local_1a30;
  local_1238 = *local_1a30;
  local_1230 = local_1238;
  local_1228 = local_1238;
  local_1220 = local_1238;
  local_1218 = local_1238;
  local_11c8 = local_1238;
  local_11c0 = FSlateIcon::FSlateIcon(&local_640);
  local_11b8 = TAttribute<FText>::TAttribute<FText>(&local_7f0);
  local_11b0 = TAttribute<FText>::TAttribute<FText>(&local_820);
  local_1a28 = &local_f50;
  local_18c8 = FNameEntryId::FNameEntryId(local_17b4);
  local_19b4 = local_18c8->Value;
  local_19b0 = local_19b4;
  local_1210 = local_18c8;
  FNameEntryId::FNameEntryId(&local_1a28->ComparisonIndex);
  local_1a28->Number = 0;
  (local_1a28->ComparisonIndex).Value = local_19b0;
  local_1a28->Number = 0;
  local_1208 = local_1a28;
  local_1200 = *local_1a28;
  local_11d8 = &local_df0;
  local_11f8 = local_1200;
  local_11f0 = local_1200;
  local_11e8 = local_1200;
  local_11e0 = local_1200;
  local_11a8 = local_1200;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_11a0 = TSharedPtr<FUICommandInfo_const_,1>::
               TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                         (local_11d8,&pFVar2->EighthCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_11a0,local_11a8,local_11b0,local_11b8,local_11c0,
             local_11c8,local_11d0);
  TAttribute<FText>::~TAttribute<FText>(&local_820);
  TAttribute<FText>::~TAttribute<FText>(&local_7f0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_cb0);
  FMenuBuilder::EndSection(param_1);
  local_1180 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_450);
  local_1178 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_c90);
  local_1170 = TAttribute<FText>::TAttribute<FText>(&local_7c0);
  local_1198 = &local_f48;
  pFVar1 = ::FName::FName(local_1198,"Menu1Entries3");
  local_1190 = *pFVar1;
  local_1188 = local_1190;
  local_1168 = local_1190;
  FMenuBuilder::BeginSection(param_1,local_1190,local_1170,local_1178,local_1180);
  TAttribute<FText>::~TAttribute<FText>(&local_7c0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_c90);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_450);
  local_10f0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_c70);
  local_1a20 = &local_f40;
  local_1840 = FNameEntryId::FNameEntryId(local_17ac);
  local_19a8 = local_1840->Value;
  local_19a0 = local_19a8;
  local_1160 = local_1840;
  FNameEntryId::FNameEntryId(&local_1a20->ComparisonIndex);
  local_1a20->Number = 0;
  (local_1a20->ComparisonIndex).Value = local_19a0;
  local_1a20->Number = 0;
  local_1158 = local_1a20;
  local_1150 = *local_1a20;
  local_1a18 = &local_f38;
  local_1148 = local_1150;
  local_1140 = local_1150;
  local_1138 = local_1150;
  local_1130 = local_1150;
  local_10e8 = local_1150;
  local_1838 = FNameEntryId::FNameEntryId(local_17a4);
  local_1998 = local_1838->Value;
  local_1990 = local_1998;
  local_1128 = local_1838;
  FNameEntryId::FNameEntryId(&local_1a18->ComparisonIndex);
  local_1a18->Number = 0;
  (local_1a18->ComparisonIndex).Value = local_1990;
  local_1a18->Number = 0;
  local_1120 = local_1a18;
  local_1118 = *local_1a18;
  local_1110 = local_1118;
  local_1108 = local_1118;
  local_1100 = local_1118;
  local_10f8 = local_1118;
  local_10e0 = local_1118;
  local_10d8 = FSlateIcon::FSlateIcon(&local_760);
  local_10d0 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                         (&local_ea8,FillSubMenuEntries);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_f08,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_be0,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_f18,L"STestSuite",L"SubMenu",L"Sub Menu");
  TAttribute<FText>::TAttribute<FText>(&local_c10,pFVar3);
  FMenuBuilder::AddSubMenu
            (param_1,&local_c10,&local_be0,local_10d0,false,local_10d8,true,local_10e0,local_10e8,
             local_10f0);
  TAttribute<FText>::~TAttribute<FText>(&local_c10);
  FText::~FText(&local_f18);
  TAttribute<FText>::~TAttribute<FText>(&local_be0);
  FText::~FText(&local_f08);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_ea8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_c70);
  local_1058 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_c50);
  local_1a10 = &local_f30;
  local_1830 = FNameEntryId::FNameEntryId(local_179c);
  local_1988 = local_1830->Value;
  local_1980 = local_1988;
  local_10c8 = local_1830;
  FNameEntryId::FNameEntryId(&local_1a10->ComparisonIndex);
  local_1a10->Number = 0;
  (local_1a10->ComparisonIndex).Value = local_1980;
  local_1a10->Number = 0;
  local_10c0 = local_1a10;
  local_10b8 = *local_1a10;
  local_1a08 = &local_f28;
  local_10b0 = local_10b8;
  local_10a8 = local_10b8;
  local_10a0 = local_10b8;
  local_1098 = local_10b8;
  local_1050 = local_10b8;
  local_1848 = FNameEntryId::FNameEntryId(local_1794);
  local_1978 = local_1848->Value;
  local_1920 = local_1978;
  local_1090 = local_1848;
  FNameEntryId::FNameEntryId(&local_1a08->ComparisonIndex);
  local_1a08->Number = 0;
  (local_1a08->ComparisonIndex).Value = local_1920;
  local_1a08->Number = 0;
  local_1088 = local_1a08;
  local_1080 = *local_1a08;
  local_1078 = local_1080;
  local_1070 = local_1080;
  local_1068 = local_1080;
  local_1060 = local_1080;
  local_1048 = local_1080;
  local_1040 = FSlateIcon::FSlateIcon(&local_740);
  local_1038 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                         (&local_e90,FillSubMenuEntries);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_ee8,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_b80,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_ef8,L"STestSuite",L"SubMenu2IsALittleLonger",
                      L"Sub Menu 2 is a little longer");
  TAttribute<FText>::TAttribute<FText>(&local_bb0,pFVar3);
  FMenuBuilder::AddSubMenu
            (param_1,&local_bb0,&local_b80,local_1038,false,local_1040,true,local_1048,local_1050,
             local_1058);
  TAttribute<FText>::~TAttribute<FText>(&local_bb0);
  FText::~FText(&local_ef8);
  TAttribute<FText>::~TAttribute<FText>(&local_b80);
  FText::~FText(&local_ee8);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_e90);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_c50);
  FMenuBuilder::EndSection(param_1);
  local_1018 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_368);
  local_1010 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_c30);
  local_1008 = TAttribute<FText>::TAttribute<FText>(&local_790);
  local_1030 = &local_f20;
  pFVar1 = ::FName::FName(local_1030,"Menu1Entries4");
  local_1028 = *pFVar1;
  local_1020 = local_1028;
  local_1000 = local_1028;
  FMenuBuilder::BeginSection(param_1,local_1028,local_1008,local_1010,local_1018);
  TAttribute<FText>::~TAttribute<FText>(&local_790);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_c30);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_368);
  pFVar3 = FText::FText(&local_eb8);
  TAttribute<FText>::TAttribute<FText>(&local_b50,pFVar3);
  local_fe8 = FText::AsLocalizable_Advanced_LocText(&local_ec8,L"STestSuite",L"Volume",L"Volume");
  local_ff0 = &local_de0;
  local_ff8 = SVolumeControl::FArguments::FArguments(&local_280);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1aa8);
  this = MakeTDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>
                   (&local_e78,"SVolumeControl",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0xf1b,local_1aa8);
  pTVar4 = TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this,&local_ed8,local_ff8);
  local_fe0 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVolumeControl>(local_ff0,pTVar4);
  FMenuBuilder::AddWidget(param_1,local_fe0,local_fe8,false,true,&local_b50);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_ed8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_e78._Widget.SharedReferenceCount);
  SVolumeControl::FArguments::~FArguments(&local_280);
  FText::~FText(&local_ec8);
  TAttribute<FText>::~TAttribute<FText>(&local_b50);
  FText::~FText(&local_eb8);
  FMenuBuilder::EndSection(param_1);
  return;
}

// FillMenu2Entries @ 1430c2100

/* WARNING: Removing unreachable block (ram,0x0001430c2cba) */
/* WARNING: Removing unreachable block (ram,0x0001430c2935) */
/* WARNING: Removing unreachable block (ram,0x0001430c2607) */
/* WARNING: Removing unreachable block (ram,0x0001430c22d9) */
/* WARNING: Removing unreachable block (ram,0x0001430c242b) */
/* WARNING: Removing unreachable block (ram,0x0001430c2759) */
/* WARNING: Removing unreachable block (ram,0x0001430c2a48) */
/* WARNING: Removing unreachable block (ram,0x0001430c2ddf) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl FMenus::FillMenu2Entries(FMenuBuilder *param_1)

{
  uint uVar1;
  FText *pFVar2;
  FMultiBoxTestCommandList *pFVar3;
  longlong lVar4;
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 *puVar6;
  FNameEntryId local_708 [2];
  FNameEntryId local_700 [2];
  FNameEntryId local_6f8;
  FNameEntryId local_6f4 [2];
  FNameEntryId local_6ec [2];
  FNameEntryId local_6e4 [2];
  FNameEntryId local_6dc [2];
  FNameEntryId local_6d4 [3];
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *local_6c8;
  TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy> *local_6c0;
  FSlateIcon *local_6b8;
  FText *local_6b0;
  FText *local_6a8;
  FNameEntryId *local_6a0;
  FNameEntryId *local_698;
  FName local_690;
  FName local_688;
  FName local_680;
  FName local_678;
  FName local_670;
  FNameEntryId *local_668;
  FNameEntryId *local_660;
  FName local_658;
  FName local_650;
  FName local_648;
  FName local_640;
  FName local_638;
  TSharedPtr<FUICommandInfo_const_,1> *local_630;
  TAttribute<EVisibility> *local_628;
  FName local_620;
  FSlateIcon *local_618;
  TAttribute<FText> *local_610;
  TAttribute<FText> *local_608;
  FName local_600;
  TSharedPtr<FUICommandInfo_const_,1> *local_5f8;
  FNameEntryId *local_5f0;
  FNameEntryId *local_5e8;
  FName local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  FName local_5c0;
  FNameEntryId *local_5b8;
  FNameEntryId *local_5b0;
  FName local_5a8;
  FName local_5a0;
  FName local_598;
  FName local_590;
  FName local_588;
  TSharedPtr<FUICommandInfo_const_,1> *local_580;
  TAttribute<EVisibility> *local_578;
  FName local_570;
  FSlateIcon *local_568;
  TAttribute<FText> *local_560;
  TAttribute<FText> *local_558;
  FName local_550;
  TSharedPtr<FUICommandInfo_const_,1> *local_548;
  FNameEntryId *local_540;
  FNameEntryId *local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FNameEntryId *local_508;
  FNameEntryId *local_500;
  FName local_4f8;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  TAttribute<EVisibility> *local_4d0;
  FName local_4c8;
  FName local_4c0;
  FSlateIcon *local_4b8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_4b0;
  FNameEntryId *local_4a8;
  FNameEntryId *local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FNameEntryId *local_470;
  FNameEntryId *local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  TAttribute<EVisibility> *local_438;
  FName local_430;
  FName local_428;
  FSlateIcon *local_420;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_418;
  FNameEntryId local_410;
  undefined4 uStack_40c;
  FNameEntryId local_408;
  undefined4 uStack_404;
  FNameEntryId local_400;
  undefined4 uStack_3fc;
  FNameEntryId local_3f8;
  undefined4 uStack_3f4;
  FNameEntryId local_3f0;
  undefined4 uStack_3ec;
  FNameEntryId local_3e8;
  undefined4 uStack_3e4;
  FNameEntryId local_3e0;
  undefined4 uStack_3dc;
  FNameEntryId local_3d8;
  undefined4 uStack_3d4;
  FText local_3d0;
  FText local_3c0;
  FText local_3b0;
  FText local_3a0;
  FText local_390;
  FText local_380;
  FText local_370;
  undefined1 local_360 [24];
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> local_348;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_330;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_318;
  TSharedPtr<FUICommandInfo_const_,1> local_300;
  TSharedPtr<FUICommandInfo_const_,1> local_2f0;
  TAttribute<EVisibility> local_2e0;
  TAttribute<EVisibility> local_2c0;
  TAttribute<EVisibility> local_2a0;
  TAttribute<EVisibility> local_280;
  TAttribute<FText> local_260;
  TAttribute<FText> local_230;
  TAttribute<FText> local_200;
  TAttribute<FText> local_1d0;
  TAttribute<FText> local_1a0;
  TAttribute<FText> local_170;
  TAttribute<FText> local_140;
  TAttribute<FText> local_110;
  TAttribute<FText> local_e0;
  FSlateIcon local_b0;
  FSlateIcon local_90;
  FSlateIcon local_70;
  FSlateIcon local_50;
  FSlateIcon local_30;
  
  pTVar5 = &local_348;
  for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pTVar5 = 0;
    pTVar5 = (TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)&pTVar5->field_0x1
    ;
  }
  local_6c8 = TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>(&local_348);
  puVar6 = local_360;
  for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_6c0 = TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
                        (local_360);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_3b0,L"STestSuite",L"DefaultEditableText",L"Edit Me!");
  TAttribute<FText>::TAttribute<FText>(&local_260,pFVar2);
  local_6b8 = FSlateIcon::FSlateIcon(&local_b0);
  local_6b0 = FText::AsLocalizable_Advanced_LocText
                        (&local_3c0,L"STestSuite",L"EditableItem_ToolTip",
                         L"You can edit this item\'s text");
  local_6a8 = FText::AsLocalizable_Advanced_LocText
                        (&local_3d0,L"STestSuite",L"EditableItem",L"Editable Item");
  FMultiBoxBuilder::AddEditableText
            ((FMultiBoxBuilder *)param_1,local_6a8,local_6b0,local_6b8,&local_260,local_6c0,
             local_6c8,false);
  FText::~FText(&local_3d0);
  FText::~FText(&local_3c0);
  TAttribute<FText>::~TAttribute<FText>(&local_260);
  FText::~FText(&local_3b0);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (local_360);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>(&local_348);
  local_628 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2e0);
  local_6a0 = FNameEntryId::FNameEntryId(local_708);
  uVar1 = local_6a0->Value;
  FNameEntryId::FNameEntryId(&local_410);
  uStack_40c = 0;
  local_690.Number = 0;
  local_690.ComparisonIndex.Value = uVar1;
  local_698 = &local_410;
  local_688 = local_690;
  local_680 = local_690;
  local_678 = local_690;
  local_670 = local_690;
  local_620 = local_690;
  local_410.Value = uVar1;
  local_618 = FSlateIcon::FSlateIcon(&local_90);
  local_610 = TAttribute<FText>::TAttribute<FText>(&local_140);
  local_608 = TAttribute<FText>::TAttribute<FText>(&local_170);
  local_668 = FNameEntryId::FNameEntryId(local_700);
  uVar1 = local_668->Value;
  FNameEntryId::FNameEntryId(&local_408);
  uStack_404 = 0;
  local_658.Number = 0;
  local_658.ComparisonIndex.Value = uVar1;
  local_630 = &local_300;
  local_660 = &local_408;
  local_650 = local_658;
  local_648 = local_658;
  local_640 = local_658;
  local_638 = local_658;
  local_600 = local_658;
  local_408.Value = uVar1;
  pFVar3 = TCommands<FMultiBoxTestCommandList>::Get();
  local_5f8 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_630,&pFVar3->FirstCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_5f8,local_600,local_608,local_610,local_618,local_620
             ,local_628);
  TAttribute<FText>::~TAttribute<FText>(&local_170);
  TAttribute<FText>::~TAttribute<FText>(&local_140);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2e0);
  local_578 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2c0);
  local_5f0 = FNameEntryId::FNameEntryId(&local_6f8);
  uVar1 = local_5f0->Value;
  FNameEntryId::FNameEntryId(&local_400);
  uStack_3fc = 0;
  local_5e0.Number = 0;
  local_5e0.ComparisonIndex.Value = uVar1;
  local_5e8 = &local_400;
  local_5d8 = local_5e0;
  local_5d0 = local_5e0;
  local_5c8 = local_5e0;
  local_5c0 = local_5e0;
  local_570 = local_5e0;
  local_400.Value = uVar1;
  local_568 = FSlateIcon::FSlateIcon(&local_70);
  local_560 = TAttribute<FText>::TAttribute<FText>(&local_e0);
  local_558 = TAttribute<FText>::TAttribute<FText>(&local_110);
  local_5b8 = FNameEntryId::FNameEntryId(local_6f4);
  uVar1 = local_5b8->Value;
  FNameEntryId::FNameEntryId(&local_3f8);
  uStack_3f4 = 0;
  local_5a8.Number = 0;
  local_5a8.ComparisonIndex.Value = uVar1;
  local_580 = &local_2f0;
  local_5b0 = &local_3f8;
  local_5a0 = local_5a8;
  local_598 = local_5a8;
  local_590 = local_5a8;
  local_588 = local_5a8;
  local_550 = local_5a8;
  local_3f8.Value = uVar1;
  pFVar3 = TCommands<FMultiBoxTestCommandList>::Get();
  local_548 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_580,&pFVar3->SecondCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_548,local_550,local_558,local_560,local_568,local_570
             ,local_578);
  TAttribute<FText>::~TAttribute<FText>(&local_110);
  TAttribute<FText>::~TAttribute<FText>(&local_e0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2c0);
  local_4d0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2a0);
  local_540 = FNameEntryId::FNameEntryId(local_6ec);
  uVar1 = local_540->Value;
  FNameEntryId::FNameEntryId(&local_3f0);
  uStack_3ec = 0;
  local_530.Number = 0;
  local_530.ComparisonIndex.Value = uVar1;
  local_538 = &local_3f0;
  local_528 = local_530;
  local_520 = local_530;
  local_518 = local_530;
  local_510 = local_530;
  local_4c8 = local_530;
  local_3f0.Value = uVar1;
  local_508 = FNameEntryId::FNameEntryId(local_6e4);
  uVar1 = local_508->Value;
  FNameEntryId::FNameEntryId(&local_3e8);
  uStack_3e4 = 0;
  local_4f8.Number = 0;
  local_4f8.ComparisonIndex.Value = uVar1;
  local_500 = &local_3e8;
  local_4f0 = local_4f8;
  local_4e8 = local_4f8;
  local_4e0 = local_4f8;
  local_4d8 = local_4f8;
  local_4c0 = local_4f8;
  local_3e8.Value = uVar1;
  local_4b8 = FSlateIcon::FSlateIcon(&local_50);
  local_4b0 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_330,FillSubMenuEntries);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_390,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_200,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_3a0,L"STestSuite",L"SubMenu",L"Sub Menu");
  TAttribute<FText>::TAttribute<FText>(&local_230,pFVar2);
  FMenuBuilder::AddSubMenu
            (param_1,&local_230,&local_200,local_4b0,false,local_4b8,true,local_4c0,local_4c8,
             local_4d0);
  TAttribute<FText>::~TAttribute<FText>(&local_230);
  FText::~FText(&local_3a0);
  TAttribute<FText>::~TAttribute<FText>(&local_200);
  FText::~FText(&local_390);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_330);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2a0);
  local_438 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_280);
  local_4a8 = FNameEntryId::FNameEntryId(local_6dc);
  uVar1 = local_4a8->Value;
  FNameEntryId::FNameEntryId(&local_3e0);
  uStack_3dc = 0;
  local_498.Number = 0;
  local_498.ComparisonIndex.Value = uVar1;
  local_4a0 = &local_3e0;
  local_490 = local_498;
  local_488 = local_498;
  local_480 = local_498;
  local_478 = local_498;
  local_430 = local_498;
  local_3e0.Value = uVar1;
  local_470 = FNameEntryId::FNameEntryId(local_6d4);
  uVar1 = local_470->Value;
  FNameEntryId::FNameEntryId(&local_3d8);
  uStack_3d4 = 0;
  local_460.Number = 0;
  local_460.ComparisonIndex.Value = uVar1;
  local_468 = &local_3d8;
  local_458 = local_460;
  local_450 = local_460;
  local_448 = local_460;
  local_440 = local_460;
  local_428 = local_460;
  local_3d8.Value = uVar1;
  local_420 = FSlateIcon::FSlateIcon(&local_30);
  local_418 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_318,FillSubMenuEntries);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_370,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_1a0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_380,L"STestSuite",L"SubMenu2IsALittleLonger",
                      L"Sub Menu 2 is a little longer");
  TAttribute<FText>::TAttribute<FText>(&local_1d0,pFVar2);
  FMenuBuilder::AddSubMenu
            (param_1,&local_1d0,&local_1a0,local_418,false,local_420,true,local_428,local_430,
             local_438);
  TAttribute<FText>::~TAttribute<FText>(&local_1d0);
  FText::~FText(&local_380);
  TAttribute<FText>::~TAttribute<FText>(&local_1a0);
  FText::~FText(&local_370);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_318);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_280);
  return;
}

// FillSubMenuEntries @ 1430c3230

/* WARNING: Removing unreachable block (ram,0x0001430c3c5c) */
/* WARNING: Removing unreachable block (ram,0x0001430c38d7) */
/* WARNING: Removing unreachable block (ram,0x0001430c35a9) */
/* WARNING: Removing unreachable block (ram,0x0001430c327b) */
/* WARNING: Removing unreachable block (ram,0x0001430c33cd) */
/* WARNING: Removing unreachable block (ram,0x0001430c36fb) */
/* WARNING: Removing unreachable block (ram,0x0001430c39ea) */
/* WARNING: Removing unreachable block (ram,0x0001430c3d81) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl FMenus::FillSubMenuEntries(FMenuBuilder *param_1)

{
  uint uVar1;
  FMultiBoxTestCommandList *pFVar2;
  FText *pFVar3;
  FNameEntryId local_628 [2];
  FNameEntryId local_620 [3];
  FNameEntryId local_614 [2];
  FNameEntryId local_60c [2];
  FNameEntryId local_604 [2];
  FNameEntryId local_5fc [2];
  FNameEntryId local_5f4 [2];
  FNameEntryId local_5ec;
  FNameEntryId *local_5e8;
  FNameEntryId *local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  FName local_5c0;
  FName local_5b8;
  FNameEntryId *local_5b0;
  FNameEntryId *local_5a8;
  FName local_5a0;
  FName local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  TSharedPtr<FUICommandInfo_const_,1> *local_578;
  TAttribute<EVisibility> *local_570;
  FName local_568;
  FSlateIcon *local_560;
  TAttribute<FText> *local_558;
  TAttribute<FText> *local_550;
  FName local_548;
  TSharedPtr<FUICommandInfo_const_,1> *local_540;
  FNameEntryId *local_538;
  FNameEntryId *local_530;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FName local_508;
  FNameEntryId *local_500;
  FNameEntryId *local_4f8;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  TSharedPtr<FUICommandInfo_const_,1> *local_4c8;
  TAttribute<EVisibility> *local_4c0;
  FName local_4b8;
  FSlateIcon *local_4b0;
  TAttribute<FText> *local_4a8;
  TAttribute<FText> *local_4a0;
  FName local_498;
  TSharedPtr<FUICommandInfo_const_,1> *local_490;
  FNameEntryId *local_488;
  FNameEntryId *local_480;
  FName local_478;
  FName local_470;
  FName local_468;
  FName local_460;
  FName local_458;
  FNameEntryId *local_450;
  FNameEntryId *local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  TAttribute<EVisibility> *local_418;
  FName local_410;
  FName local_408;
  FSlateIcon *local_400;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_3f8;
  FNameEntryId *local_3f0;
  FNameEntryId *local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FNameEntryId *local_3b8;
  FNameEntryId *local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  TAttribute<EVisibility> *local_380;
  FName local_378;
  FName local_370;
  FSlateIcon *local_368;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_360;
  FNameEntryId local_358;
  undefined4 uStack_354;
  FNameEntryId local_350;
  undefined4 uStack_34c;
  FNameEntryId local_348;
  undefined4 uStack_344;
  FNameEntryId local_340;
  undefined4 uStack_33c;
  FNameEntryId local_338;
  undefined4 uStack_334;
  FNameEntryId local_330;
  undefined4 uStack_32c;
  FNameEntryId local_328;
  undefined4 uStack_324;
  FNameEntryId local_320;
  undefined4 uStack_31c;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_2d8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_2c0;
  TSharedPtr<FUICommandInfo_const_,1> local_2a8;
  TSharedPtr<FUICommandInfo_const_,1> local_298;
  TAttribute<EVisibility> local_288;
  TAttribute<EVisibility> local_268;
  TAttribute<EVisibility> local_248;
  TAttribute<EVisibility> local_228;
  TAttribute<FText> local_208;
  TAttribute<FText> local_1d8;
  TAttribute<FText> local_1a8;
  TAttribute<FText> local_178;
  TAttribute<FText> local_148;
  TAttribute<FText> local_118;
  TAttribute<FText> local_e8;
  TAttribute<FText> local_b8;
  FSlateIcon local_88;
  FSlateIcon local_68;
  FSlateIcon local_48;
  FSlateIcon local_28;
  
  local_570 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_288);
  local_5e8 = FNameEntryId::FNameEntryId(local_628);
  uVar1 = local_5e8->Value;
  FNameEntryId::FNameEntryId(&local_358);
  uStack_354 = 0;
  local_5d8.Number = 0;
  local_5d8.ComparisonIndex.Value = uVar1;
  local_5e0 = &local_358;
  local_5d0 = local_5d8;
  local_5c8 = local_5d8;
  local_5c0 = local_5d8;
  local_5b8 = local_5d8;
  local_568 = local_5d8;
  local_358.Value = uVar1;
  local_560 = FSlateIcon::FSlateIcon(&local_88);
  local_558 = TAttribute<FText>::TAttribute<FText>(&local_118);
  local_550 = TAttribute<FText>::TAttribute<FText>(&local_148);
  local_5b0 = FNameEntryId::FNameEntryId(local_620);
  uVar1 = local_5b0->Value;
  FNameEntryId::FNameEntryId(&local_350);
  uStack_34c = 0;
  local_5a0.Number = 0;
  local_5a0.ComparisonIndex.Value = uVar1;
  local_578 = &local_2a8;
  local_5a8 = &local_350;
  local_598 = local_5a0;
  local_590 = local_5a0;
  local_588 = local_5a0;
  local_580 = local_5a0;
  local_548 = local_5a0;
  local_350.Value = uVar1;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_540 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_578,&pFVar2->FirstCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_540,local_548,local_550,local_558,local_560,local_568
             ,local_570);
  TAttribute<FText>::~TAttribute<FText>(&local_148);
  TAttribute<FText>::~TAttribute<FText>(&local_118);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_288);
  local_4c0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_268);
  local_538 = FNameEntryId::FNameEntryId(&local_5ec);
  uVar1 = local_538->Value;
  FNameEntryId::FNameEntryId(&local_348);
  uStack_344 = 0;
  local_528.Number = 0;
  local_528.ComparisonIndex.Value = uVar1;
  local_530 = &local_348;
  local_520 = local_528;
  local_518 = local_528;
  local_510 = local_528;
  local_508 = local_528;
  local_4b8 = local_528;
  local_348.Value = uVar1;
  local_4b0 = FSlateIcon::FSlateIcon(&local_68);
  local_4a8 = TAttribute<FText>::TAttribute<FText>(&local_b8);
  local_4a0 = TAttribute<FText>::TAttribute<FText>(&local_e8);
  local_500 = FNameEntryId::FNameEntryId(local_614);
  uVar1 = local_500->Value;
  FNameEntryId::FNameEntryId(&local_340);
  uStack_33c = 0;
  local_4f0.Number = 0;
  local_4f0.ComparisonIndex.Value = uVar1;
  local_4c8 = &local_298;
  local_4f8 = &local_340;
  local_4e8 = local_4f0;
  local_4e0 = local_4f0;
  local_4d8 = local_4f0;
  local_4d0 = local_4f0;
  local_498 = local_4f0;
  local_340.Value = uVar1;
  pFVar2 = TCommands<FMultiBoxTestCommandList>::Get();
  local_490 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_4c8,&pFVar2->SecondCommandInfo);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,local_490,local_498,local_4a0,local_4a8,local_4b0,local_4b8
             ,local_4c0);
  TAttribute<FText>::~TAttribute<FText>(&local_e8);
  TAttribute<FText>::~TAttribute<FText>(&local_b8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_268);
  local_418 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_248);
  local_488 = FNameEntryId::FNameEntryId(local_60c);
  uVar1 = local_488->Value;
  FNameEntryId::FNameEntryId(&local_338);
  uStack_334 = 0;
  local_478.Number = 0;
  local_478.ComparisonIndex.Value = uVar1;
  local_480 = &local_338;
  local_470 = local_478;
  local_468 = local_478;
  local_460 = local_478;
  local_458 = local_478;
  local_410 = local_478;
  local_338.Value = uVar1;
  local_450 = FNameEntryId::FNameEntryId(local_604);
  uVar1 = local_450->Value;
  FNameEntryId::FNameEntryId(&local_330);
  uStack_32c = 0;
  local_440.Number = 0;
  local_440.ComparisonIndex.Value = uVar1;
  local_448 = &local_330;
  local_438 = local_440;
  local_430 = local_440;
  local_428 = local_440;
  local_420 = local_440;
  local_408 = local_440;
  local_330.Value = uVar1;
  local_400 = FSlateIcon::FSlateIcon(&local_48);
  local_3f8 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_2d8,FillSubMenuEntries);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_308,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_1d8,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_318,L"STestSuite",L"SubMenu",L"Sub Menu");
  TAttribute<FText>::TAttribute<FText>(&local_208,pFVar3);
  FMenuBuilder::AddSubMenu
            (param_1,&local_208,&local_1d8,local_3f8,false,local_400,true,local_408,local_410,
             local_418);
  TAttribute<FText>::~TAttribute<FText>(&local_208);
  FText::~FText(&local_318);
  TAttribute<FText>::~TAttribute<FText>(&local_1d8);
  FText::~FText(&local_308);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_2d8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_248);
  local_380 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_228);
  local_3f0 = FNameEntryId::FNameEntryId(local_5fc);
  uVar1 = local_3f0->Value;
  FNameEntryId::FNameEntryId(&local_328);
  uStack_324 = 0;
  local_3e0.Number = 0;
  local_3e0.ComparisonIndex.Value = uVar1;
  local_3e8 = &local_328;
  local_3d8 = local_3e0;
  local_3d0 = local_3e0;
  local_3c8 = local_3e0;
  local_3c0 = local_3e0;
  local_378 = local_3e0;
  local_328.Value = uVar1;
  local_3b8 = FNameEntryId::FNameEntryId(local_5f4);
  uVar1 = local_3b8->Value;
  FNameEntryId::FNameEntryId(&local_320);
  uStack_31c = 0;
  local_3a8.Number = 0;
  local_3a8.ComparisonIndex.Value = uVar1;
  local_3b0 = &local_320;
  local_3a0 = local_3a8;
  local_398 = local_3a8;
  local_390 = local_3a8;
  local_388 = local_3a8;
  local_370 = local_3a8;
  local_320.Value = uVar1;
  local_368 = FSlateIcon::FSlateIcon(&local_28);
  local_360 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_2c0,FillSubMenuEntries);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_2e8,L"STestSuite",L"OpensASubmenu",L"Opens a submenu");
  TAttribute<FText>::TAttribute<FText>(&local_178,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_2f8,L"STestSuite",L"SubMenu2IsALittleLonger",
                      L"Sub Menu 2 is a little longer");
  TAttribute<FText>::TAttribute<FText>(&local_1a8,pFVar3);
  FMenuBuilder::AddSubMenu
            (param_1,&local_1a8,&local_178,local_360,false,local_368,true,local_370,local_378,
             local_380);
  TAttribute<FText>::~TAttribute<FText>(&local_1a8);
  FText::~FText(&local_2f8);
  TAttribute<FText>::~TAttribute<FText>(&local_178);
  FText::~FText(&local_2e8);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_2c0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_228);
  return;
}

