// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FBuiltInComponentTypes @ 14608f420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBuiltInComponentTypes * __thiscall
UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes(FBuiltInComponentTypes *this)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TComponentTypeID<double> TVar2;
  IMutualComponentInitializer IVar3;
  code *pcVar4;
  TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
  TVar5;
  bool bVar6;
  TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> TVar7;
  TComponentTypeID<FMovieSceneSequenceID> TVar8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TVar9;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TVar10;
  TComponentTypeID<FFrameTime> TVar11;
  TComponentTypeID<double> TVar12;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar13;
  TComponentTypeID<FObjectKey> TVar14;
  TComponentTypeID<UObject_*> TVar15;
  TComponentTypeID<FMovieScenePropertyBinding> TVar16;
  TComponentTypeID<FGuid> TVar17;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> TVar18;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> TVar19;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> TVar20;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> TVar21;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> TVar22;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> TVar23;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> TVar24;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> TVar25;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> TVar26;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> TVar27;
  TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> TVar28;
  TComponentTypeID<FEasingComponentData> TVar29;
  TComponentTypeID<unsigned_short> TVar30;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> TVar31;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar32;
  TComponentTypeID<int> TVar33;
  TComponentTypeID<FMovieSceneBlendChannelID> TVar34;
  TComponentTypeID<short> TVar35;
  TComponentTypeID<UE::MovieScene::FInitialValueIndex> TVar36;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> TVar37;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> TVar38;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TVar39;
  TComponentTypeID<bool> TVar40;
  TComponentTypeID<unsigned_char> TVar41;
  TComponentTypeID<__int64> TVar42;
  TComponentTypeID<FString> TVar43;
  TComponentTypeID<FText> TVar44;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar45;
  TComponentTypeID<FTrackInstanceInputComponent> TVar46;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> TVar47;
  TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> TVar48;
  TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> TVar49;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar50;
  TComponentTypeID<UE::MovieScene::FInterrogationInstance> TVar51;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> TVar52;
  FComponentTypeID FVar53;
  FComponentRegistry *this_00;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  undefined6 extraout_var_04;
  undefined6 extraout_var_05;
  undefined6 extraout_var_06;
  undefined6 extraout_var_07;
  undefined6 extraout_var_08;
  undefined6 extraout_var_09;
  undefined6 extraout_var_10;
  undefined6 extraout_var_11;
  undefined6 extraout_var_12;
  undefined6 extraout_var_13;
  undefined6 extraout_var_14;
  undefined6 extraout_var_15;
  undefined6 extraout_var_16;
  undefined6 extraout_var_17;
  undefined6 extraout_var_18;
  undefined6 extraout_var_19;
  undefined6 extraout_var_20;
  undefined6 extraout_var_21;
  undefined6 extraout_var_22;
  undefined6 extraout_var_23;
  undefined6 extraout_var_24;
  undefined6 extraout_var_25;
  undefined6 extraout_var_26;
  undefined6 extraout_var_27;
  undefined6 extraout_var_28;
  undefined6 extraout_var_29;
  undefined6 extraout_var_30;
  undefined6 extraout_var_31;
  undefined6 extraout_var_32;
  undefined6 extraout_var_33;
  undefined6 extraout_var_34;
  undefined6 extraout_var_35;
  undefined6 extraout_var_36;
  undefined6 extraout_var_37;
  undefined6 extraout_var_38;
  undefined6 extraout_var_39;
  undefined6 extraout_var_40;
  undefined6 extraout_var_41;
  undefined6 extraout_var_42;
  undefined6 extraout_var_43;
  undefined6 extraout_var_44;
  undefined6 extraout_var_45;
  undefined6 extraout_var_46;
  undefined6 extraout_var_47;
  undefined6 extraout_var_48;
  undefined6 extraout_var_49;
  undefined6 extraout_var_50;
  undefined6 extraout_var_51;
  undefined6 extraout_var_52;
  undefined6 extraout_var_53;
  undefined6 extraout_var_54;
  undefined6 extraout_var_55;
  undefined6 extraout_var_56;
  undefined6 extraout_var_57;
  undefined6 extraout_var_58;
  undefined6 extraout_var_59;
  undefined6 extraout_var_60;
  undefined6 extraout_var_61;
  undefined6 extraout_var_62;
  undefined6 extraout_var_63;
  undefined6 extraout_var_64;
  undefined6 extraout_var_65;
  undefined6 extraout_var_66;
  undefined6 extraout_var_67;
  undefined6 extraout_var_68;
  undefined6 extraout_var_69;
  undefined6 extraout_var_70;
  undefined6 extraout_var_71;
  undefined6 extraout_var_72;
  undefined6 extraout_var_73;
  undefined6 extraout_var_74;
  undefined6 extraout_var_75;
  undefined6 extraout_var_76;
  undefined6 extraout_var_77;
  undefined6 extraout_var_78;
  undefined6 extraout_var_79;
  undefined6 extraout_var_80;
  undefined6 extraout_var_81;
  undefined6 extraout_var_82;
  undefined6 extraout_var_83;
  undefined6 extraout_var_84;
  undefined6 extraout_var_85;
  undefined6 extraout_var_86;
  undefined6 extraout_var_87;
  undefined6 extraout_var_88;
  undefined6 extraout_var_89;
  undefined6 extraout_var_90;
  undefined6 extraout_var_91;
  undefined6 extraout_var_92;
  undefined6 extraout_var_93;
  undefined6 extraout_var_94;
  undefined6 extraout_var_95;
  undefined6 extraout_var_96;
  undefined6 extraout_var_97;
  undefined6 extraout_var_98;
  undefined6 extraout_var_99;
  undefined6 extraout_var_x00100;
  undefined6 extraout_var_x00101;
  undefined6 extraout_var_x00102;
  undefined6 extraout_var_x00103;
  undefined6 extraout_var_x00104;
  undefined6 extraout_var_x00105;
  undefined6 extraout_var_x00106;
  undefined6 extraout_var_x00107;
  undefined6 extraout_var_x00108;
  undefined6 extraout_var_x00109;
  undefined6 extraout_var_x00110;
  undefined6 extraout_var_x00111;
  undefined6 extraout_var_x00112;
  undefined6 extraout_var_x00113;
  undefined6 extraout_var_x00114;
  undefined6 extraout_var_x00115;
  undefined6 extraout_var_x00116;
  undefined6 extraout_var_x00117;
  undefined6 extraout_var_x00118;
  undefined6 extraout_var_x00119;
  undefined6 extraout_var_x00120;
  undefined6 extraout_var_x00121;
  undefined6 extraout_var_x00122;
  undefined6 extraout_var_x00123;
  undefined6 extraout_var_x00124;
  undefined6 extraout_var_x00125;
  undefined6 extraout_var_x00126;
  undefined6 extraout_var_x00127;
  undefined6 extraout_var_x00128;
  IMutualComponentInitializer *pIVar54;
  TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
  TVar55;
  FComponentTypeID *pFVar56;
  FComplexInclusivityFilter *pFVar57;
  FBuiltInComponentTypes *pFVar58;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar59;
  uint uVar60;
  uint uVar61;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *pTVar62;
  int iVar63;
  TComponentTypeID<double> *pTVar64;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *pTVar65;
  TComponentTypeID<double> *pTVar66;
  undefined1 auStack_15b8 [32];
  FComponentTypeID local_1598;
  FComponentTypeID local_1596;
  FComponentTypeID local_1594;
  FComponentTypeID local_1592;
  FComponentTypeID local_1590 [4];
  FComponentTypeID local_1588 [4];
  FComponentTypeID local_1580 [4];
  FComponentTypeID local_1578 [4];
  FComponentTypeID local_1570 [4];
  FComponentTypeID local_1568 [4];
  FComponentTypeID local_1560 [4];
  FComponentTypeID local_1558 [4];
  FComponentTypeID local_1550 [4];
  FComponentTypeID local_1548 [4];
  FComponentTypeID local_1540 [4];
  FComponentTypeID local_1538 [4];
  FComponentTypeID local_1530 [4];
  FComponentTypeID local_1528 [4];
  FComponentTypeID local_1520 [4];
  FComponentTypeID local_1518 [4];
  FComponentTypeID local_1510 [4];
  FComponentTypeID local_1508 [4];
  FComponentTypeID local_1500 [4];
  FComponentTypeID local_14f8 [4];
  FComponentTypeID local_14f0 [4];
  FComponentTypeID local_14e8 [4];
  FComponentTypeID local_14e0 [4];
  FComponentTypeID local_14d8 [4];
  FComponentTypeID local_14d0 [4];
  FComponentTypeID local_14c8 [4];
  FComponentTypeID local_14c0 [4];
  FComponentTypeID local_14b8 [4];
  FComponentTypeID local_14b0;
  FComponentTypeID local_14ae;
  FComponentTypeID local_14ac;
  FComponentTypeID local_14aa;
  FComponentTypeID local_14a8;
  FComponentTypeID local_14a6;
  FComponentTypeID local_14a4;
  FComponentTypeID local_14a2;
  FComponentTypeID local_14a0;
  FComponentTypeID local_149e;
  FComponentTypeID local_149c;
  FComponentTypeID local_149a;
  FComponentTypeID local_1498;
  FComponentTypeID local_1496;
  FComponentTypeID local_1494;
  FComponentTypeID local_1492;
  FComponentTypeID local_1490;
  FComponentTypeID local_148e;
  FComponentTypeID local_148c;
  FComponentTypeID local_148a;
  FComponentTypeID local_1488;
  FComponentTypeID local_1486;
  FComponentTypeID local_1484;
  FComponentTypeID local_1482;
  FComponentTypeID local_1480;
  FComponentTypeID local_147e;
  FComponentTypeID local_147c;
  FComponentTypeID local_147a;
  FComponentTypeID local_1478;
  FComponentTypeID local_1476;
  FComponentTypeID local_1474;
  FComponentTypeID local_1472;
  FComponentTypeID local_1470;
  FComponentTypeID local_146e;
  FComponentTypeID local_146c;
  FComponentTypeID local_146a;
  FComponentTypeID local_1468;
  FComponentTypeID local_1466;
  FComponentTypeID local_1464;
  FComponentTypeID local_1462;
  FComponentTypeID local_1460;
  FComponentTypeID local_145e;
  FComponentTypeID local_145c;
  FComponentTypeID local_145a;
  FComponentTypeID local_1458;
  FComponentTypeID local_1456;
  FComponentTypeID local_1454;
  FComponentTypeID local_1452;
  FComponentTypeID local_1450;
  FComponentTypeID local_144e;
  FComponentTypeID local_144c;
  FComponentTypeID local_144a;
  FComponentTypeID local_1448;
  FComponentTypeID local_1446;
  FComponentTypeID local_1444;
  FComponentTypeID local_1442;
  FComponentTypeID local_1440;
  FComponentTypeID local_143e;
  FComponentTypeID local_143c;
  FComponentTypeID local_143a;
  FComponentTypeID local_1438;
  FComponentTypeID local_1436 [3];
  FComponentTypeID local_1430 [4];
  FComponentTypeID local_1428 [4];
  FComponentTypeID local_1420;
  FComponentTypeID local_141e;
  FComponentTypeID local_141c;
  FComponentTypeID local_141a;
  <lambda_1> local_1418 [4];
  FComponentTypeID local_1414;
  ushort local_1412;
  FComponentTypeID local_1410;
  TComponentTypeID<FFrameTime> local_140e;
  uint local_140c;
  wchar_t local_1408;
  wchar_t local_1406;
  wchar_t local_1404;
  wchar_t local_1402;
  wchar_t local_1400;
  wchar_t local_13fe;
  wchar_t local_13fc;
  wchar_t local_13fa;
  wchar_t local_13f8;
  wchar_t local_13f6;
  wchar_t local_13f4;
  wchar_t local_13f2;
  wchar_t local_13f0;
  wchar_t local_13ee;
  wchar_t local_13ec;
  wchar_t local_13ea;
  wchar_t local_13e8;
  wchar_t local_13e6;
  wchar_t local_13e4;
  wchar_t local_13e2;
  wchar_t local_13e0;
  wchar_t local_13de;
  wchar_t local_13dc;
  wchar_t local_13da;
  wchar_t local_13d8;
  wchar_t local_13d6;
  wchar_t local_13d4;
  wchar_t local_13d2;
  wchar_t local_13d0;
  wchar_t local_13ce;
  wchar_t local_13cc;
  wchar_t local_13ca;
  wchar_t local_13c8;
  wchar_t local_13c6;
  wchar_t local_13c4;
  wchar_t local_13c2;
  wchar_t local_13c0;
  wchar_t local_13be;
  wchar_t local_13bc;
  wchar_t local_13ba;
  wchar_t local_13b8;
  wchar_t local_13b6;
  wchar_t local_13b4;
  wchar_t local_13b2;
  wchar_t local_13b0;
  wchar_t local_13ae;
  wchar_t local_13ac;
  wchar_t local_13aa;
  wchar_t local_13a8;
  wchar_t local_13a6;
  wchar_t local_13a4;
  wchar_t local_13a2;
  wchar_t local_13a0;
  wchar_t local_139e;
  wchar_t local_139c;
  wchar_t local_139a;
  wchar_t local_1398;
  wchar_t local_1396;
  wchar_t local_1394;
  wchar_t local_1392;
  wchar_t local_1390;
  wchar_t local_138e;
  wchar_t local_138c;
  wchar_t local_138a;
  wchar_t local_1388;
  wchar_t local_1386;
  wchar_t local_1384;
  wchar_t local_1382;
  wchar_t local_1380;
  wchar_t local_137e;
  wchar_t local_137c;
  wchar_t local_137a;
  wchar_t local_1378;
  wchar_t local_1376;
  wchar_t local_1374;
  wchar_t local_1372;
  wchar_t local_1370;
  wchar_t local_136e;
  wchar_t local_136c;
  wchar_t local_136a;
  wchar_t local_1368;
  wchar_t local_1366;
  wchar_t local_1364;
  wchar_t local_1362;
  wchar_t local_1360;
  wchar_t local_135e;
  wchar_t local_135c;
  wchar_t local_135a;
  wchar_t local_1358;
  wchar_t local_1356;
  wchar_t local_1354;
  wchar_t local_1352;
  wchar_t local_1350;
  wchar_t local_134e;
  wchar_t local_134c;
  wchar_t local_134a;
  wchar_t local_1348;
  wchar_t local_1346;
  wchar_t local_1344;
  wchar_t local_1342;
  wchar_t local_1340;
  wchar_t local_133e;
  wchar_t local_133c;
  wchar_t local_133a;
  wchar_t local_1338;
  wchar_t local_1336;
  wchar_t local_1334;
  wchar_t local_1332;
  wchar_t local_1330;
  wchar_t local_132e;
  wchar_t local_132c;
  wchar_t local_132a;
  wchar_t local_1328;
  wchar_t local_1326;
  wchar_t local_1324;
  wchar_t local_1322;
  wchar_t local_1320;
  wchar_t local_131e;
  wchar_t local_131c;
  wchar_t local_131a;
  wchar_t local_1318;
  wchar_t local_1316;
  wchar_t local_1314;
  wchar_t local_1312;
  wchar_t local_1310;
  wchar_t local_130e;
  wchar_t local_130c;
  wchar_t local_130a;
  wchar_t local_1308;
  wchar_t local_1306 [3];
  FMutuallyInclusiveComponentParams local_1300;
  undefined **local_12f0;
  TComponentTypeID<FMovieSceneSequenceID> local_12e8;
  TComponentTypeID<FMovieSceneSequenceID> local_12e6;
  undefined **local_12e0;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_12d8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_12d6;
  undefined **local_12d0;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_12c8;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_12c6;
  undefined **local_12c0;
  TComponentTypeID<FMovieScenePropertyBinding> local_12b8;
  TComponentTypeID<FMovieScenePropertyBinding> local_12b6;
  undefined **local_12b0;
  TComponentTypeID<short> local_12a8;
  TComponentTypeID<short> local_12a6;
  undefined **local_12a0;
  TComponentTypeID<int> local_1298;
  TComponentTypeID<int> local_1296;
  undefined **local_1290;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_1288;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_1286;
  undefined **local_1280;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_1278;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_1276;
  undefined **local_1270;
  TComponentTypeID<bool> local_1268;
  TComponentTypeID<bool> local_1266;
  undefined **local_1260;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_1258;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_1256;
  undefined **local_1250;
  TComponentTypeID<unsigned_char> local_1248;
  TComponentTypeID<unsigned_char> local_1246;
  undefined **local_1240;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_1238;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_1236;
  undefined **local_1230;
  TComponentTypeID<__int64> local_1228;
  TComponentTypeID<__int64> local_1226;
  undefined **local_1220;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_1218;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_1216;
  undefined1 local_1210 [16];
  TComponentTypeID<FEasingComponentData> local_1200;
  TComponentTypeID<FEasingComponentData> local_11fe;
  undefined **local_11f8;
  TComponentTypeID<unsigned_short> local_11f0;
  TComponentTypeID<unsigned_short> local_11ee;
  undefined **local_11e8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_11e0;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_11de;
  undefined **local_11d8;
  TComponentTypeID<double> local_11d0;
  TComponentTypeID<double> local_11ce;
  undefined **local_11c8;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_11c0;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_11be;
  undefined **local_11b8;
  TComponentTypeID<FString> local_11b0;
  TComponentTypeID<FString> local_11ae;
  undefined **local_11a8;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> local_11a0;
  TComponentTypeID<UE::MovieScene::FSourceTextChannel> local_119e;
  undefined **local_1198;
  TComponentTypeID<FText> local_1190;
  TComponentTypeID<FText> local_118e;
  undefined **local_1188;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> local_1180;
  TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> local_117e;
  undefined **local_1178;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_1170;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_116e;
  undefined8 local_1168;
  undefined1 local_1160;
  undefined8 local_1158;
  undefined1 local_1150;
  undefined8 local_1148;
  undefined1 local_1140;
  undefined8 local_1138;
  undefined1 local_1130;
  undefined8 local_1128;
  undefined1 local_1120;
  undefined8 local_1118;
  undefined1 local_1110;
  undefined8 local_1108;
  undefined1 local_1100;
  undefined8 local_10f8;
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined1 local_10e0;
  undefined8 local_10d8;
  undefined1 local_10d0;
  undefined8 local_10c8;
  undefined1 local_10c0;
  undefined8 local_10b8;
  undefined1 local_10b0;
  undefined8 local_10a8;
  undefined1 local_10a0;
  undefined8 local_1098;
  undefined1 local_1090;
  undefined8 local_1088;
  undefined1 local_1080;
  undefined8 local_1078;
  undefined1 local_1070;
  undefined8 local_1068;
  undefined1 local_1060;
  undefined8 local_1058;
  undefined1 local_1050;
  undefined8 local_1048;
  undefined1 local_1040;
  undefined8 local_1038;
  undefined1 local_1030;
  undefined8 local_1028;
  undefined1 local_1020;
  undefined8 local_1018;
  undefined1 local_1010;
  undefined8 local_1008;
  undefined1 local_1000;
  undefined8 local_ff8;
  undefined1 local_ff0;
  undefined8 local_fe8;
  undefined1 local_fe0;
  undefined8 local_fd8;
  undefined1 local_fd0;
  undefined8 local_fc8;
  undefined1 local_fc0;
  undefined8 local_fb8;
  undefined1 local_fb0;
  undefined8 local_fa8;
  undefined1 local_fa0;
  undefined8 local_f98;
  undefined1 local_f90;
  undefined8 local_f88;
  undefined1 local_f80;
  undefined8 local_f78;
  undefined1 local_f70;
  undefined8 local_f68;
  undefined1 local_f60;
  undefined8 local_f58;
  undefined1 local_f50;
  undefined8 local_f48;
  undefined1 local_f40;
  undefined8 local_f38;
  undefined1 local_f30;
  undefined8 local_f28;
  undefined1 local_f20;
  undefined8 local_f18;
  undefined1 local_f10;
  undefined8 local_f08;
  undefined1 local_f00;
  undefined8 local_ef8;
  undefined1 local_ef0;
  undefined8 local_ee8;
  undefined1 local_ee0;
  undefined8 local_ed8;
  undefined1 local_ed0;
  undefined8 local_ec8;
  undefined1 local_ec0;
  undefined8 local_eb8;
  undefined1 local_eb0;
  undefined8 local_ea8;
  undefined1 local_ea0;
  undefined8 local_e98;
  undefined1 local_e90;
  undefined8 local_e88;
  undefined1 local_e80;
  undefined8 local_e78;
  undefined1 local_e70;
  undefined8 local_e68;
  undefined1 local_e60;
  undefined8 local_e58;
  undefined1 local_e50;
  undefined8 local_e48;
  undefined1 local_e40;
  undefined8 local_e38;
  undefined1 local_e30;
  undefined8 local_e28;
  undefined1 local_e20;
  undefined8 local_e18;
  undefined1 local_e10;
  undefined8 local_e08;
  undefined1 local_e00;
  undefined8 local_df8;
  undefined1 local_df0;
  undefined8 local_de8;
  undefined1 local_de0;
  undefined8 local_dd8;
  undefined1 local_dd0;
  undefined8 local_dc8;
  undefined1 local_dc0;
  undefined8 local_db8;
  undefined1 local_db0;
  undefined8 local_da8;
  undefined1 local_da0;
  undefined8 local_d98;
  undefined1 local_d90;
  undefined8 local_d88;
  undefined1 local_d80;
  undefined8 local_d78;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined1 local_d60;
  undefined8 local_d58;
  undefined1 local_d50;
  undefined8 local_d48;
  undefined1 local_d40;
  undefined8 local_d38;
  undefined1 local_d30;
  undefined8 local_d28;
  undefined1 local_d20;
  undefined8 local_d18;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined1 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined1 local_c80;
  undefined8 local_c78;
  undefined1 local_c70;
  undefined8 local_c68;
  undefined1 local_c60;
  undefined8 local_c58;
  undefined1 local_c50;
  undefined8 local_c48;
  undefined1 local_c40;
  undefined8 local_c38;
  undefined1 local_c30;
  undefined8 local_c28;
  undefined1 local_c20;
  undefined8 local_c18;
  undefined1 local_c10;
  undefined8 local_c08;
  undefined1 local_c00;
  undefined8 local_bf8;
  undefined1 local_bf0;
  undefined8 local_be8;
  undefined1 local_be0;
  undefined8 local_bd8;
  undefined1 local_bd0;
  undefined8 local_bc8;
  undefined1 local_bc0;
  undefined8 local_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined1 local_ba0;
  undefined8 local_b98;
  undefined1 local_b90;
  undefined8 local_b88;
  undefined1 local_b80;
  undefined8 local_b78;
  undefined1 local_b70;
  undefined8 local_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined1 local_b50;
  undefined8 local_b48;
  undefined1 local_b40;
  undefined8 local_b38;
  undefined1 local_b30;
  undefined8 local_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined1 local_af0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_ae8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_ad8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_ac8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_ab8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_aa8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a98;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a88;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a78;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a68;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a58;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a48;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a38;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a28;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a18;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a08;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_9b8;
  TComponentTypeID<double> *local_9a8;
  TComponentTypeID<double> *local_9a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_998;
  initializer_list<UE::MovieScene::FComponentTypeID> local_988;
  initializer_list<UE::MovieScene::FComponentTypeID> local_978;
  initializer_list<UE::MovieScene::FComponentTypeID> local_968;
  initializer_list<UE::MovieScene::FComponentTypeID> local_958;
  initializer_list<UE::MovieScene::FComponentTypeID> local_948;
  initializer_list<UE::MovieScene::FComponentTypeID> local_938;
  initializer_list<UE::MovieScene::FComponentTypeID> local_928;
  initializer_list<UE::MovieScene::FComponentTypeID> local_918;
  initializer_list<UE::MovieScene::FComponentTypeID> local_908;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_8a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_898;
  initializer_list<UE::MovieScene::FComponentTypeID> local_888;
  initializer_list<UE::MovieScene::FComponentTypeID> local_878;
  FComponentMask local_868;
  FComponentTypeID local_830;
  TComponentTypeID<FFrameTime> local_82e;
  ushort local_82c;
  FComponentTypeID local_82a;
  TComponentTypeID<double> local_828;
  TComponentTypeID<FFrameTime> local_826;
  ushort local_824;
  TComponentTypeID<double> local_822;
  FComponentTypeID local_820;
  TComponentTypeID<FFrameTime> local_81e;
  ushort local_81c;
  FComponentTypeID local_81a;
  TBitArray<TFixedAllocator<12>_> local_818;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_7e0 [8];
  byte local_7a0;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_798 [8];
  byte local_758;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_750 [8];
  byte local_710;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_708 [8];
  byte local_6c8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_6c0 [8];
  byte local_680;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_678 [8];
  byte local_638;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_630 [8];
  byte local_5f0;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_5e8 [8];
  byte local_5a8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_5a0 [8];
  byte local_560;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_558 [8];
  byte local_518;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_510 [8];
  byte local_4d0;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_4c8 [8];
  byte local_488;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_480 [8];
  byte local_440;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_438 [8];
  byte local_3f8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_3f0 [8];
  byte local_3b0;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_3a8 [8];
  byte local_368;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_360 [8];
  byte local_320;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_318 [8];
  byte local_2d8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_2d0 [8];
  byte local_290;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_288 [8];
  byte local_248;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_240 [8];
  byte local_200;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_1f8 [8];
  byte local_1b8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_1b0 [8];
  byte local_170;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_168 [8];
  byte local_128;
  FComplexInclusivityFilter local_120;
  FComplexInclusivityFilter local_e4;
  FComplexInclusivityFilter local_a8;
  FComplexInclusivityFilter local_6c;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_15b8;
  (this->RequiresInstantiationMask).Bits.MaxBits = 0x180;
  pTVar65 = this->FloatChannel;
  this->ParentEntity = (TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)0xffff;
  this->BoundObject = (TComponentTypeID<UObject_*>)0xffff;
  this->BoundObjectKey = (TComponentTypeID<FObjectKey>)0xffff;
  this->InstanceHandle = (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff;
  pTVar62 = this->DoubleChannel;
  this->RootInstanceHandle = (TComponentTypeID<UE::MovieScene::FRootInstanceHandle>)0xffff;
  this->SequenceID = (TComponentTypeID<FMovieSceneSequenceID>)0xffff;
  this->EvalTime = (TComponentTypeID<FFrameTime>)0xffff;
  this->EvalSeconds = (TComponentTypeID<double>)0xffff;
  pTVar64 = this->DoubleResult;
  this->Group = (TComponentTypeID<UE::MovieScene::FEntityGroupID>)0xffff;
  this->BlendChannelInput = (TComponentTypeID<FMovieSceneBlendChannelID>)0xffff;
  this->BlendChannelOutput = (TComponentTypeID<FMovieSceneBlendChannelID>)0xffff;
  this->HierarchicalBias = (TComponentTypeID<short>)0xffff;
  TVar55.Ptr = (IMutualComponentInitializer *)0x0;
  (this->PropertyRegistry).Properties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BoolChannel = (TComponentTypeID<UE::MovieScene::FSourceBoolChannel>)0xffff;
  (this->PropertyRegistry).Properties.ArrayNum = 0;
  (this->PropertyRegistry).Properties.ArrayMax = 0;
  (this->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PropertyRegistry).CompositeDefinitions.ArrayNum = 0;
  (this->PropertyRegistry).CompositeDefinitions.ArrayMax = 0;
  (this->RequiresInstantiationMask).Bits.NumBits = 0;
  this->InitialValueIndex = (TComponentTypeID<UE::MovieScene::FInitialValueIndex>)0xffff;
  this->PropertyBinding = (TComponentTypeID<FMovieScenePropertyBinding>)0xffff;
  this->GenericObjectBinding = (TComponentTypeID<FGuid>)0xffff;
  this->BoundObjectResolver = (TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)>)0xffff;
  this->SceneComponentBinding = (TComponentTypeID<FGuid>)0xffff;
  this->SpawnableBinding = (TComponentTypeID<FGuid>)0xffff;
  this->BindingLifetime =
       (TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>)0xffff;
  this->BoolResult = (TComponentTypeID<bool>)0xffff;
  this->ByteChannel = (TComponentTypeID<UE::MovieScene::FSourceByteChannel>)0xffff;
  this->ByteResult = (TComponentTypeID<unsigned_char>)0xffff;
  this->BaseByte = (TComponentTypeID<unsigned_char>)0xffff;
  this->IntegerChannel = (TComponentTypeID<UE::MovieScene::FSourceIntegerChannel>)0xffff;
  this->IntegerResult = (TComponentTypeID<__int64>)0xffff;
  this->BaseInteger = (TComponentTypeID<__int64>)0xffff;
  this->FloatChannel[8] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  pTVar65[0] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  pTVar65[1] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  pTVar65[2] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  pTVar65[3] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  this->FloatChannel[4] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  this->FloatChannel[5] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  this->FloatChannel[6] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  this->FloatChannel[7] = (TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)0xffff;
  this->DoubleChannel[8] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  pTVar62[0] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  pTVar62[1] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  pTVar62[2] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  pTVar62[3] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  this->DoubleChannel[4] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  this->DoubleChannel[5] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  this->DoubleChannel[6] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  this->DoubleChannel[7] = (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff;
  this->StringChannel = (TComponentTypeID<UE::MovieScene::FSourceStringChannel>)0xffff;
  this->TextChannel = (TComponentTypeID<UE::MovieScene::FSourceTextChannel>)0xffff;
  this->CachedInterpolation[0] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->CachedInterpolation[1] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->CachedInterpolation[2] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->CachedInterpolation[3] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->CachedInterpolation[4] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->CachedInterpolation[5] =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  *(undefined8 *)(this->CachedInterpolation + 6) = 0xffffffffffffffff;
  this->CachedWeightChannelInterpolation =
       (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)0xffff;
  this->ObjectPathChannel = (TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel>)0xffff;
  this->DoubleResult[8] = (TComponentTypeID<double>)0xffff;
  pTVar64[0] = (TComponentTypeID<double>)0xffff;
  pTVar64[1] = (TComponentTypeID<double>)0xffff;
  pTVar64[2] = (TComponentTypeID<double>)0xffff;
  pTVar64[3] = (TComponentTypeID<double>)0xffff;
  this->DoubleResult[4] = (TComponentTypeID<double>)0xffff;
  this->DoubleResult[5] = (TComponentTypeID<double>)0xffff;
  this->DoubleResult[6] = (TComponentTypeID<double>)0xffff;
  this->DoubleResult[7] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[0] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[1] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[2] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[3] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[4] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[5] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[6] = (TComponentTypeID<double>)0xffff;
  this->BaseDouble[7] = (TComponentTypeID<double>)0xffff;
  *(undefined8 *)(this->BaseDouble + 8) = 0xffffffffffffffff;
  *(undefined8 *)&this->ResultToBase = 0;
  *(undefined8 *)&(this->ResultToBase).field_0x8 = 0;
  *(undefined8 *)&(this->ResultToBase).field_0x20 = 0;
  this->EasingResult = (TComponentTypeID<double>)0xffff;
  this->StringResult = (TComponentTypeID<FString>)0xffff;
  this->TextResult = (TComponentTypeID<FText>)0xffff;
  this->ObjectResult = (TComponentTypeID<UE::MovieScene::FObjectComponent>)0xffff;
  this->Easing = (TComponentTypeID<FEasingComponentData>)0xffff;
  this->HierarchicalEasingChannel = (TComponentTypeID<unsigned_short>)0xffff;
  this->HierarchicalEasingProvider = (TComponentTypeID<FMovieSceneSequenceID>)0xffff;
  this->HierarchicalBlendTarget = (TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)0xffff
  ;
  this->WeightAndEasingResult = (TComponentTypeID<double>)0xffff;
  this->BlenderType = (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)0xffff;
  this->BlendingOrder = (TComponentTypeID<int>)0xffff;
  this->TrackInstance = (TComponentTypeID<FMovieSceneTrackInstanceComponent>)0xffff;
  this->TrackInstanceInput = (TComponentTypeID<FTrackInstanceInputComponent>)0xffff;
  this->EvaluationHook = (TComponentTypeID<FMovieSceneEvaluationHookComponent>)0xffff;
  this->EvaluationHookFlags = (TComponentTypeID<UE::MovieScene::FEvaluationHookFlags>)0xffff;
  this->Condition = (TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_>)0xffff;
  this->CustomPropertyIndex = (TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)0xffff;
  this->FastPropertyOffset = (TComponentTypeID<unsigned_short>)0xffff;
  this->SlowProperty = (TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)0xffff;
  this->VariantPropertyTypeIndex =
       (TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex>)0xffff;
  (this->Tags).RestoreState = 0xffff;
  (this->Tags).IgnoreHierarchicalBias = 0xffff;
  (this->Tags).BlendHierarchicalBias = 0xffff;
  (this->Tags).AbsoluteBlend = 0xffff;
  (this->Tags).RelativeBlend = 0xffff;
  (this->Tags).AdditiveBlend = 0xffff;
  (this->Tags).AdditiveFromBaseBlend = 0xffff;
  (this->Tags).OverrideBlend = 0xffff;
  (this->Tags).AdditiveAnimation = 0xffff;
  (this->Tags).NeedsLink = 0xffff;
  (this->Tags).NeedsUnlink = 0xffff;
  (this->Tags).HasUnresolvedBinding = 0xffff;
  (this->Tags).HasAssignedInitialValue = 0xffff;
  (this->Tags).ImportedEntity = 0xffff;
  (this->Tags).SubInstance = 0xffff;
  (this->Tags).Root = 0xffff;
  (this->Tags).FixedTime = 0xffff;
  (this->Tags).SectionPreRoll = 0xffff;
  (this->Tags).PreRoll = 0xffff;
  (this->Tags).Finished = 0xffff;
  (this->Tags).Ignored = 0xffff;
  (this->Tags).ExternalBlending = 0xffff;
  (this->Tags).AlwaysCacheInitialValue = 0xffff;
  (this->Tags).DontOptimizeConstants = 0xffff;
  *(undefined8 *)&(this->Tags).RemoveHierarchicalBlendTarget = 0xffffffffffffffff;
  *(undefined4 *)&(this->Interrogation).OutputKey = 0xffffffff;
  (this->FinishedMask).Bits.NumBits = 0;
  (this->FinishedMask).Bits.MaxBits = 0x180;
  *(undefined4 *)&(this->ResultToBase).field_0x28 = 0;
  *(undefined4 *)&(this->ResultToBase).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResultToBase).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResultToBase).field_0x34 = 0;
  *(undefined8 *)&(this->ResultToBase).field_0x40 = 0;
  *(undefined4 *)&(this->ResultToBase).field_0x48 = 0;
  this_00 = UMovieSceneEntitySystemLinker::GetComponents();
  local_1158 = 0;
  local_1150 = 0;
  TVar7 = FComponentRegistry::NewComponentType<UE::MovieScene::FMovieSceneEntityID>
                    (this_00,&local_1342,(FNewComponentTypeParams *)L"Parent Entity");
  local_1148 = 0;
  local_1140 = 0;
  this->ParentEntity =
       *(TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> *)CONCAT62(extraout_var,TVar7);
  TVar8 = FComponentRegistry::NewComponentType<FMovieSceneSequenceID>
                    (this_00,&local_1308,(FNewComponentTypeParams *)L"Sequence ID");
  this->SequenceID = *(TComponentTypeID<FMovieSceneSequenceID> *)CONCAT62(extraout_var_00,TVar8);
  local_1138 = 0;
  local_1130 = 0;
  TVar9 = FComponentRegistry::NewComponentType<UE::MovieScene::FInstanceHandle>
                    (this_00,local_1306,(FNewComponentTypeParams *)L"Instance Handle");
  local_1128 = 0;
  local_1120 = 0;
  this->InstanceHandle =
       *(TComponentTypeID<UE::MovieScene::FInstanceHandle> *)CONCAT62(extraout_var_01,TVar9);
  TVar10 = FComponentRegistry::NewComponentType<UE::MovieScene::FRootInstanceHandle>
                     (this_00,&local_1408,(FNewComponentTypeParams *)L"Root Instance Handle");
  local_1118 = 0;
  local_1110 = 0;
  this->RootInstanceHandle =
       *(TComponentTypeID<UE::MovieScene::FRootInstanceHandle> *)CONCAT62(extraout_var_02,TVar10);
  TVar11 = FComponentRegistry::NewComponentType<FFrameTime>
                     (this_00,&local_1406,(FNewComponentTypeParams *)L"Eval Time");
  local_1108 = 0;
  local_1100 = 0;
  this->EvalTime = *(TComponentTypeID<FFrameTime> *)CONCAT62(extraout_var_03,TVar11);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1404,(FNewComponentTypeParams *)L"Eval Seconds");
  local_10f8 = 0;
  local_10f0 = 0;
  this->EvalSeconds = *(TComponentTypeID<double> *)CONCAT62(extraout_var_04,TVar12);
  TVar13 = FComponentRegistry::NewComponentType<UE::MovieScene::FEntityGroupID>
                     (this_00,&local_1402,(FNewComponentTypeParams *)L"Entity Group");
  local_10e8 = 0;
  local_10e0 = 0;
  this->Group = *(TComponentTypeID<UE::MovieScene::FEntityGroupID> *)
                 CONCAT62(extraout_var_05,TVar13);
  TVar14 = FComponentRegistry::NewComponentType<FObjectKey>
                     (this_00,&local_1400,(FNewComponentTypeParams *)L"Bound Object Key");
  local_10d8 = 0;
  local_10d0 = 0;
  this->BoundObjectKey = *(TComponentTypeID<FObjectKey> *)CONCAT62(extraout_var_06,TVar14);
  TVar15 = FComponentRegistry::NewComponentTypeNoAddReferencedObjects<UObject_*>
                     (this_00,&local_13fe,(FNewComponentTypeParams *)L"Bound Object");
  local_10c8 = 0;
  local_10c0 = 4;
  this->BoundObject = *(TComponentTypeID<UObject_*> *)CONCAT62(extraout_var_07,TVar15);
  TVar16 = FComponentRegistry::NewComponentType<FMovieScenePropertyBinding>
                     (this_00,&local_13fc,(FNewComponentTypeParams *)L"Property Binding");
  local_10b8 = 0;
  local_10b0 = 0;
  this->PropertyBinding =
       *(TComponentTypeID<FMovieScenePropertyBinding> *)CONCAT62(extraout_var_08,TVar16);
  TVar17 = FComponentRegistry::NewComponentType<FGuid>
                     (this_00,&local_13fa,(FNewComponentTypeParams *)L"Generic Object Binding ID");
  this->GenericObjectBinding = *(TComponentTypeID<FGuid> *)CONCAT62(extraout_var_09,TVar17);
  local_10a8 = 0;
  local_10a0 = 0;
  TVar18 = FComponentRegistry::NewComponentType<UObject_*_(__cdecl*)(UObject_*)>
                     (this_00,&local_13f8,(FNewComponentTypeParams *)L"Bound Object Resolver");
  local_1098 = 0;
  local_1090 = 0;
  this->BoundObjectResolver =
       *(TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> *)CONCAT62(extraout_var_10,TVar18);
  TVar17 = FComponentRegistry::NewComponentType<FGuid>
                     (this_00,&local_13f6,
                      (FNewComponentTypeParams *)L"[DEPRECATED] USceneComponent Binding ID");
  local_1088 = 0;
  local_1080 = 0;
  this->SceneComponentBinding = *(TComponentTypeID<FGuid> *)CONCAT62(extraout_var_11,TVar17);
  TVar17 = FComponentRegistry::NewComponentType<FGuid>
                     (this_00,&local_13f4,(FNewComponentTypeParams *)L"Spawnable Binding");
  local_1078 = 0;
  local_1070 = 0;
  this->SpawnableBinding = *(TComponentTypeID<FGuid> *)CONCAT62(extraout_var_12,TVar17);
  TVar19 = FComponentRegistry::NewComponentType<FMovieSceneTrackInstanceComponent>
                     (this_00,&local_13f2,(FNewComponentTypeParams *)L"Track Instance");
  local_1068 = 0;
  local_1060 = 0;
  this->TrackInstance =
       *(TComponentTypeID<FMovieSceneTrackInstanceComponent> *)CONCAT62(extraout_var_13,TVar19);
  TVar20 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceBoolChannel>
                     (this_00,&local_13f0,(FNewComponentTypeParams *)L"Bool Channel");
  local_1058 = 0;
  local_1050 = 0;
  this->BoolChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceBoolChannel> *)CONCAT62(extraout_var_14,TVar20);
  TVar21 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceByteChannel>
                     (this_00,&local_13ee,(FNewComponentTypeParams *)L"Byte Channel");
  local_1048 = 0;
  local_1040 = 0;
  this->ByteChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceByteChannel> *)CONCAT62(extraout_var_15,TVar21);
  TVar22 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceIntegerChannel>
                     (this_00,&local_13ec,(FNewComponentTypeParams *)L"Integer Channel");
  local_1038 = 0;
  local_1030 = 0;
  this->IntegerChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> *)CONCAT62(extraout_var_16,TVar22);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13ea,(FNewComponentTypeParams *)L"Float Channel 0");
  local_1028 = 0;
  local_1020 = 0;
  *pTVar65 = *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)
              CONCAT62(extraout_var_17,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13e8,(FNewComponentTypeParams *)L"Float Channel 1");
  this->FloatChannel[1] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_18,TVar23);
  local_1018 = 0;
  local_1010 = 0;
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13e6,(FNewComponentTypeParams *)L"Float Channel 2");
  local_1008 = 0;
  local_1000 = 0;
  this->FloatChannel[2] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_19,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13e4,(FNewComponentTypeParams *)L"Float Channel 3");
  local_ff8 = 0;
  local_ff0 = 0;
  this->FloatChannel[3] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_20,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13e2,(FNewComponentTypeParams *)L"Float Channel 4");
  local_1168 = 0;
  local_1160 = 0;
  this->FloatChannel[4] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_21,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13e0,(FNewComponentTypeParams *)L"Float Channel 5");
  local_fe8 = 0;
  local_fe0 = 0;
  this->FloatChannel[5] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_22,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13de,(FNewComponentTypeParams *)L"Float Channel 6");
  local_fd8 = 0;
  local_fd0 = 0;
  this->FloatChannel[6] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_23,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13dc,(FNewComponentTypeParams *)L"Float Channel 7");
  local_fc8 = 0;
  local_fc0 = 0;
  this->FloatChannel[7] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_24,TVar23);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13da,(FNewComponentTypeParams *)L"Float Channel 8");
  local_fb8 = 0;
  local_fb0 = 0;
  this->FloatChannel[8] =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_25,TVar23);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13d8,(FNewComponentTypeParams *)L"Double Channel 0");
  local_fa8 = 0;
  local_fa0 = 0;
  *pTVar62 = *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)
              CONCAT62(extraout_var_26,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13d6,(FNewComponentTypeParams *)L"Double Channel 1");
  this->DoubleChannel[1] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_27,TVar24);
  local_f98 = 0;
  local_f90 = 0;
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13d4,(FNewComponentTypeParams *)L"Double Channel 2");
  local_f88 = 0;
  local_f80 = 0;
  this->DoubleChannel[2] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_28,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13d2,(FNewComponentTypeParams *)L"Double Channel 3");
  local_f78 = 0;
  local_f70 = 0;
  this->DoubleChannel[3] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_29,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13d0,(FNewComponentTypeParams *)L"Double Channel 4");
  local_f68 = 0;
  local_f60 = 0;
  this->DoubleChannel[4] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_30,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13ce,(FNewComponentTypeParams *)L"Double Channel 5");
  local_f58 = 0;
  local_f50 = 0;
  this->DoubleChannel[5] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_31,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13cc,(FNewComponentTypeParams *)L"Double Channel 6");
  local_f48 = 0;
  local_f40 = 0;
  this->DoubleChannel[6] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_32,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13ca,(FNewComponentTypeParams *)L"Double Channel 7");
  local_f38 = 0;
  local_f30 = 0;
  this->DoubleChannel[7] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_33,TVar24);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_00,&local_13c8,(FNewComponentTypeParams *)L"Double Channel 8");
  local_f28 = 0;
  local_f20 = 0;
  this->DoubleChannel[8] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_34,TVar24);
  TVar23 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
                     (this_00,&local_13c6,(FNewComponentTypeParams *)L"Weight Channel");
  local_f18 = 0;
  local_f10 = 0;
  this->WeightChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceFloatChannel> *)CONCAT62(extraout_var_35,TVar23);
  TVar25 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceStringChannel>
                     (this_00,&local_13c4,(FNewComponentTypeParams *)L"String Channel");
  this->StringChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceStringChannel> *)CONCAT62(extraout_var_36,TVar25);
  local_f08 = 0;
  local_f00 = 0;
  TVar26 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceTextChannel>
                     (this_00,&local_13c2,(FNewComponentTypeParams *)L"Text Channel");
  local_ef8 = 0;
  local_ef0 = 0;
  this->TextChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceTextChannel> *)CONCAT62(extraout_var_37,TVar26);
  TVar27 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceObjectPathChannel>
                     (this_00,&local_13c0,(FNewComponentTypeParams *)L"Object Path Channel");
  local_ee8 = 0;
  local_ee0 = 0;
  this->ObjectPathChannel =
       *(TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> *)
        CONCAT62(extraout_var_38,TVar27);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13be,(FNewComponentTypeParams *)L"Cached Interpolation [0]");
  local_ed8 = 0;
  local_ed0 = 0;
  this->CachedInterpolation[0] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_39,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13bc,(FNewComponentTypeParams *)L"Cached Interpolation [1]");
  local_ec8 = 0;
  local_ec0 = 0;
  this->CachedInterpolation[1] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_40,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13ba,(FNewComponentTypeParams *)L"Cached Interpolation [2]");
  local_eb8 = 0;
  local_eb0 = 0;
  this->CachedInterpolation[2] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_41,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13b8,(FNewComponentTypeParams *)L"Cached Interpolation [3]");
  local_ea8 = 0;
  local_ea0 = 0;
  this->CachedInterpolation[3] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_42,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13b6,(FNewComponentTypeParams *)L"Cached Interpolation [4]");
  local_e98 = 0;
  local_e90 = 0;
  this->CachedInterpolation[4] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_43,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13b4,(FNewComponentTypeParams *)L"Cached Interpolation [5]");
  local_e88 = 0;
  local_e80 = 0;
  this->CachedInterpolation[5] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_44,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13b2,(FNewComponentTypeParams *)L"Cached Interpolation [6]");
  this->CachedInterpolation[6] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_45,TVar28);
  local_e78 = 0;
  local_e70 = 0;
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13b0,(FNewComponentTypeParams *)L"Cached Interpolation [7]");
  local_e68 = 0;
  local_e60 = 0;
  this->CachedInterpolation[7] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_46,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13ae,(FNewComponentTypeParams *)L"Cached Interpolation [8]");
  local_e58 = 0;
  local_e50 = 0;
  this->CachedInterpolation[8] =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_47,TVar28);
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
                     (this_00,&local_13ac,
                      (FNewComponentTypeParams *)L"Cached Weight Channel Interpolation");
  local_e48 = 0;
  local_e40 = 0;
  this->CachedWeightChannelInterpolation =
       *(TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> *)
        CONCAT62(extraout_var_48,TVar28);
  TVar29 = FComponentRegistry::NewComponentType<FEasingComponentData>
                     (this_00,&local_13aa,(FNewComponentTypeParams *)L"Easing");
  local_e38 = 0;
  local_e30 = 0;
  this->Easing = *(TComponentTypeID<FEasingComponentData> *)CONCAT62(extraout_var_49,TVar29);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_13a8,(FNewComponentTypeParams *)L"Easing Result");
  local_e28 = 0;
  local_e20 = 0;
  this->EasingResult = *(TComponentTypeID<double> *)CONCAT62(extraout_var_50,TVar12);
  TVar30 = FComponentRegistry::NewComponentType<unsigned_short>
                     (this_00,&local_13a6,(FNewComponentTypeParams *)L"Hierarchical Easing Channel")
  ;
  local_e18 = 0;
  local_e10 = 0;
  this->HierarchicalEasingChannel =
       *(TComponentTypeID<unsigned_short> *)CONCAT62(extraout_var_51,TVar30);
  TVar31 = FComponentRegistry::NewComponentType<UE::MovieScene::FHierarchicalBlendTarget>
                     (this_00,&local_13a4,(FNewComponentTypeParams *)L"Hierarchical Blend Target");
  local_e08 = 0;
  local_e00 = 0;
  this->HierarchicalBlendTarget =
       *(TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> *)
        CONCAT62(extraout_var_52,TVar31);
  TVar8 = FComponentRegistry::NewComponentType<FMovieSceneSequenceID>
                    (this_00,&local_13a2,(FNewComponentTypeParams *)L"Hierarchical Easing Provider")
  ;
  local_df8 = 0;
  local_df0 = 2;
  this->HierarchicalEasingProvider =
       *(TComponentTypeID<FMovieSceneSequenceID> *)CONCAT62(extraout_var_53,TVar8);
  TVar32 = FComponentRegistry::NewComponentType<TSubclassOf<UMovieSceneBlenderSystem>_>
                     (this_00,&local_13a0,(FNewComponentTypeParams *)L"Blender System Type");
  this->BlenderType =
       *(TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> *)CONCAT62(extraout_var_54,TVar32)
  ;
  local_de8 = 0;
  local_de0 = 0;
  TVar33 = FComponentRegistry::NewComponentType<int>
                     (this_00,&local_139e,(FNewComponentTypeParams *)L"Blending Order");
  local_dd8 = 0;
  local_dd0 = 0;
  this->BlendingOrder = *(TComponentTypeID<int> *)CONCAT62(extraout_var_55,TVar33);
  TVar34 = FComponentRegistry::NewComponentType<FMovieSceneBlendChannelID>
                     (this_00,&local_139c,(FNewComponentTypeParams *)L"Blend Channel Input");
  local_dc8 = 0;
  local_dc0 = 0;
  this->BlendChannelInput =
       *(TComponentTypeID<FMovieSceneBlendChannelID> *)CONCAT62(extraout_var_56,TVar34);
  TVar35 = FComponentRegistry::NewComponentType<short>
                     (this_00,&local_139a,(FNewComponentTypeParams *)L"Hierarchical Bias");
  local_db8 = 0;
  local_db0 = 0;
  this->HierarchicalBias = *(TComponentTypeID<short> *)CONCAT62(extraout_var_57,TVar35);
  TVar34 = FComponentRegistry::NewComponentType<FMovieSceneBlendChannelID>
                     (this_00,&local_1398,(FNewComponentTypeParams *)L"Blend Channel Output");
  local_da8 = 0;
  local_da0 = 8;
  this->BlendChannelOutput =
       *(TComponentTypeID<FMovieSceneBlendChannelID> *)CONCAT62(extraout_var_58,TVar34);
  TVar36 = FComponentRegistry::NewComponentType<UE::MovieScene::FInitialValueIndex>
                     (this_00,&local_1396,(FNewComponentTypeParams *)L"Initial Value Index");
  local_d98 = 0;
  local_d90 = 0;
  this->InitialValueIndex =
       *(TComponentTypeID<UE::MovieScene::FInitialValueIndex> *)CONCAT62(extraout_var_59,TVar36);
  TVar37 = FComponentRegistry::NewComponentType<UE::MovieScene::FCustomPropertyIndex>
                     (this_00,&local_1394,(FNewComponentTypeParams *)L"Custom Property Index");
  local_d88 = 0;
  local_d80 = 0;
  this->CustomPropertyIndex =
       *(TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> *)CONCAT62(extraout_var_60,TVar37);
  TVar30 = FComponentRegistry::NewComponentType<unsigned_short>
                     (this_00,&local_1392,(FNewComponentTypeParams *)L"Fast Property Offset");
  local_d78 = 0;
  local_d70 = 0;
  this->FastPropertyOffset = *(TComponentTypeID<unsigned_short> *)CONCAT62(extraout_var_61,TVar30);
  TVar38 = FComponentRegistry::NewComponentType<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     (this_00,&local_1390,(FNewComponentTypeParams *)L"Slow Property Binding");
  local_d68 = 0;
  local_d60 = 0;
  this->SlowProperty =
       *(TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> *)
        CONCAT62(extraout_var_62,TVar38);
  TVar39 = FComponentRegistry::NewComponentType<UE::MovieScene::FVariantPropertyTypeIndex>
                     (this_00,&local_138e,(FNewComponentTypeParams *)L"Variant Property Type Index")
  ;
  this->VariantPropertyTypeIndex =
       *(TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> *)
        CONCAT62(extraout_var_63,TVar39);
  local_d58 = 0;
  local_d50 = 0;
  TVar40 = FComponentRegistry::NewComponentType<bool>
                     (this_00,&local_138c,(FNewComponentTypeParams *)L"Bool Result");
  local_d48 = 0;
  local_d40 = 0;
  this->BoolResult = *(TComponentTypeID<bool> *)CONCAT62(extraout_var_64,TVar40);
  TVar41 = FComponentRegistry::NewComponentType<unsigned_char>
                     (this_00,&local_138a,(FNewComponentTypeParams *)L"Byte Result");
  local_d38 = 0;
  local_d30 = 0;
  this->ByteResult = *(TComponentTypeID<unsigned_char> *)CONCAT62(extraout_var_65,TVar41);
  TVar42 = FComponentRegistry::NewComponentType<__int64>
                     (this_00,&local_1388,(FNewComponentTypeParams *)L"Integer Result");
  local_d28 = 0;
  local_d20 = 0;
  this->IntegerResult = *(TComponentTypeID<__int64> *)CONCAT62(extraout_var_66,TVar42);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1386,(FNewComponentTypeParams *)L"Double Result 0");
  local_d18 = 0;
  local_d10 = 0;
  *pTVar64 = *(TComponentTypeID<double> *)CONCAT62(extraout_var_67,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1384,(FNewComponentTypeParams *)L"Double Result 1");
  local_d08 = 0;
  local_d00 = 0;
  this->DoubleResult[1] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_68,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1382,(FNewComponentTypeParams *)L"Double Result 2");
  local_cf8 = 0;
  local_cf0 = 0;
  this->DoubleResult[2] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_69,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1380,(FNewComponentTypeParams *)L"Double Result 3");
  local_ce8 = 0;
  local_ce0 = 0;
  this->DoubleResult[3] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_70,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_137e,(FNewComponentTypeParams *)L"Double Result 4");
  local_cd8 = 0;
  local_cd0 = 0;
  this->DoubleResult[4] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_71,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_137c,(FNewComponentTypeParams *)L"Double Result 5");
  this->DoubleResult[5] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_72,TVar12);
  local_cc8 = 0;
  local_cc0 = 0;
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_137a,(FNewComponentTypeParams *)L"Double Result 6");
  local_cb8 = 0;
  local_cb0 = 0;
  this->DoubleResult[6] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_73,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1378,(FNewComponentTypeParams *)L"Double Result 7");
  local_ca8 = 0;
  local_ca0 = 0;
  this->DoubleResult[7] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_74,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1376,(FNewComponentTypeParams *)L"Double Result 8");
  local_c98 = 0;
  local_c90 = 0;
  this->DoubleResult[8] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_75,TVar12);
  TVar43 = FComponentRegistry::NewComponentType<FString>
                     (this_00,&local_1374,(FNewComponentTypeParams *)L"String Result");
  local_c88 = 0;
  local_c80 = 0;
  this->StringResult = *(TComponentTypeID<FString> *)CONCAT62(extraout_var_76,TVar43);
  TVar44 = FComponentRegistry::NewComponentType<FText>
                     (this_00,&local_1372,(FNewComponentTypeParams *)L"Text Result");
  local_c78 = 0;
  local_c70 = 0;
  this->TextResult = *(TComponentTypeID<FText> *)CONCAT62(extraout_var_77,TVar44);
  TVar45 = FComponentRegistry::NewComponentType<UE::MovieScene::FObjectComponent>
                     (this_00,&local_1370,(FNewComponentTypeParams *)L"Object Result");
  local_c68 = 0;
  local_c60 = 0;
  this->ObjectResult =
       *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)CONCAT62(extraout_var_78,TVar45);
  TVar41 = FComponentRegistry::NewComponentType<unsigned_char>
                     (this_00,&local_136e,(FNewComponentTypeParams *)L"Base Byte");
  local_c58 = 0;
  local_c50 = 0;
  this->BaseByte = *(TComponentTypeID<unsigned_char> *)CONCAT62(extraout_var_79,TVar41);
  TVar42 = FComponentRegistry::NewComponentType<__int64>
                     (this_00,&local_136c,(FNewComponentTypeParams *)L"Base Integer");
  local_c48 = 0;
  local_c40 = 0;
  this->BaseInteger = *(TComponentTypeID<__int64> *)CONCAT62(extraout_var_80,TVar42);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_136a,(FNewComponentTypeParams *)L"Base Double 0");
  this->BaseDouble[0] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_81,TVar12);
  local_c38 = 0;
  local_c30 = 0;
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1368,(FNewComponentTypeParams *)L"Base Double 1");
  local_c28 = 0;
  local_c20 = 0;
  this->BaseDouble[1] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_82,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1366,(FNewComponentTypeParams *)L"Base Double 2");
  local_c18 = 0;
  local_c10 = 0;
  this->BaseDouble[2] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_83,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1364,(FNewComponentTypeParams *)L"Base Double 3");
  local_c08 = 0;
  local_c00 = 0;
  this->BaseDouble[3] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_84,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1362,(FNewComponentTypeParams *)L"Base Double 4");
  local_bf8 = 0;
  local_bf0 = 0;
  this->BaseDouble[4] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_85,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1360,(FNewComponentTypeParams *)L"Base Double 5");
  local_be8 = 0;
  local_be0 = 0;
  this->BaseDouble[5] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_86,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_135e,(FNewComponentTypeParams *)L"Base Double 6");
  local_bd8 = 0;
  local_bd0 = 0;
  this->BaseDouble[6] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_87,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_135c,(FNewComponentTypeParams *)L"Base Double 7");
  local_bc8 = 0;
  local_bc0 = 0;
  this->BaseDouble[7] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_88,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_135a,(FNewComponentTypeParams *)L"Base Double 8");
  local_bb8 = 0;
  local_bb0 = 0;
  this->BaseDouble[8] = *(TComponentTypeID<double> *)CONCAT62(extraout_var_89,TVar12);
  TVar11 = FComponentRegistry::NewComponentType<FFrameTime>
                     (this_00,&local_1358,(FNewComponentTypeParams *)L"Base Value Eval Time");
  this->BaseValueEvalTime = *(TComponentTypeID<FFrameTime> *)CONCAT62(extraout_var_90,TVar11);
  local_ba8 = 0;
  local_ba0 = 0;
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1356,(FNewComponentTypeParams *)L"Base Value Eval Seconds");
  local_b98 = 0;
  local_b90 = 0;
  this->BaseValueEvalSeconds = *(TComponentTypeID<double> *)CONCAT62(extraout_var_91,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1354,(FNewComponentTypeParams *)L"Weight Result");
  local_b88 = 0;
  local_b80 = 0;
  this->WeightResult = *(TComponentTypeID<double> *)CONCAT62(extraout_var_92,TVar12);
  TVar12 = FComponentRegistry::NewComponentType<double>
                     (this_00,&local_1352,(FNewComponentTypeParams *)L"Weight/Easing Result");
  local_b78 = 0;
  local_b70 = 0;
  this->WeightAndEasingResult = *(TComponentTypeID<double> *)CONCAT62(extraout_var_93,TVar12);
  TVar19 = FComponentRegistry::NewComponentType<FMovieSceneTrackInstanceComponent>
                     (this_00,&local_1350,(FNewComponentTypeParams *)L"Track Instance");
  local_b68 = 0;
  local_b60 = 0;
  this->TrackInstance =
       *(TComponentTypeID<FMovieSceneTrackInstanceComponent> *)CONCAT62(extraout_var_94,TVar19);
  TVar46 = FComponentRegistry::NewComponentType<FTrackInstanceInputComponent>
                     (this_00,&local_134e,(FNewComponentTypeParams *)L"Track Instance Input");
  local_b58 = 0;
  local_b50 = 0;
  this->TrackInstanceInput =
       *(TComponentTypeID<FTrackInstanceInputComponent> *)CONCAT62(extraout_var_95,TVar46);
  TVar47 = FComponentRegistry::NewComponentType<FMovieSceneEvaluationHookComponent>
                     (this_00,&local_134c,(FNewComponentTypeParams *)L"Evaluation Hook");
  local_b48 = 0;
  local_b40 = 1;
  this->EvaluationHook =
       *(TComponentTypeID<FMovieSceneEvaluationHookComponent> *)CONCAT62(extraout_var_96,TVar47);
  TVar48 = FComponentRegistry::NewComponentType<UE::MovieScene::FEvaluationHookFlags>
                     (this_00,&local_134a,(FNewComponentTypeParams *)L"Evaluation Hook Flags");
  local_b38 = 0;
  local_b30 = 0;
  this->EvaluationHookFlags =
       *(TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> *)CONCAT62(extraout_var_97,TVar48);
  TVar49 = FComponentRegistry::NewComponentType<TObjectPtr<UMovieSceneCondition_const_>_>
                     (this_00,&local_1348,(FNewComponentTypeParams *)L"Condition");
  local_b28 = 0;
  local_b20 = 0;
  this->Condition =
       *(TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> *)
        CONCAT62(extraout_var_98,TVar49);
  TVar50 = FComponentRegistry::NewComponentType<UE::MovieScene::FInterrogationKey>
                     (this_00,&local_1346,(FNewComponentTypeParams *)L"Interrogation Input");
  (this->Interrogation).InputKey =
       *(TComponentTypeID<UE::MovieScene::FInterrogationKey> *)CONCAT62(extraout_var_99,TVar50);
  local_b18 = 0;
  local_b10 = 0;
  TVar51 = FComponentRegistry::NewComponentType<UE::MovieScene::FInterrogationInstance>
                     (this_00,&local_1344,(FNewComponentTypeParams *)L"Interrogation Instance");
  local_b08 = 0;
  local_b00 = 0;
  (this->Interrogation).Instance =
       *(TComponentTypeID<UE::MovieScene::FInterrogationInstance> *)
        CONCAT62(extraout_var_x00100,TVar51);
  TVar50 = FComponentRegistry::NewComponentType<UE::MovieScene::FInterrogationKey>
                     (this_00,&local_130a,(FNewComponentTypeParams *)L"Interrogation Output");
  local_af8 = 0;
  local_af0 = 0;
  (this->Interrogation).OutputKey =
       *(TComponentTypeID<UE::MovieScene::FInterrogationKey> *)CONCAT62(extraout_var_x00101,TVar50);
  TVar52 = FComponentRegistry::
           NewComponentType<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
                     (this_00,&local_1340,(FNewComponentTypeParams *)L"Binding Lifetime");
  this->BindingLifetime =
       *(TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *)
        CONCAT62(extraout_var_x00102,TVar52);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_133e,0x98);
  (this->Tags).RestoreState.Value = *(ushort *)CONCAT62(extraout_var_x00103,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_133c,200);
  (this->Tags).IgnoreHierarchicalBias.Value = *(ushort *)CONCAT62(extraout_var_x00104,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_133a,None);
  (this->Tags).BlendHierarchicalBias.Value = *(ushort *)CONCAT62(extraout_var_x00105,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1338,0x30);
  (this->Tags).AbsoluteBlend.Value = *(ushort *)CONCAT62(extraout_var_x00106,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1336,0x58);
  (this->Tags).RelativeBlend.Value = *(ushort *)CONCAT62(extraout_var_x00107,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1334,0x80);
  (this->Tags).AdditiveBlend.Value = *(ushort *)CONCAT62(extraout_var_x00108,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1332,0xa8);
  (this->Tags).AdditiveFromBaseBlend.Value = *(ushort *)CONCAT62(extraout_var_x00109,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1330,0xe0);
  (this->Tags).OverrideBlend.Value = *(ushort *)CONCAT62(extraout_var_x00110,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_132e,MigrateToOutput);
  (this->Tags).AdditiveAnimation.Value = *(ushort *)CONCAT62(extraout_var_x00111,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_132c,0x38);
  (this->Tags).NeedsLink.Value = *(ushort *)CONCAT62(extraout_var_x00112,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_132a,0x50);
  (this->Tags).NeedsUnlink.Value = *(ushort *)CONCAT62(extraout_var_x00113,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1328,0x70);
  (this->Tags).HasUnresolvedBinding.Value = *(ushort *)CONCAT62(extraout_var_x00114,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1326,0xa0);
  (this->Tags).HasAssignedInitialValue.Value = *(ushort *)CONCAT62(extraout_var_x00115,FVar53.Value)
  ;
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1324,0x30);
  (this->Tags).Root.Value = *(ushort *)CONCAT62(extraout_var_x00116,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1322,0xd8);
  (this->Tags).SubInstance.Value = *(ushort *)CONCAT62(extraout_var_x00117,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1320,~(CopyToOutput|CopyToChildren|Preserved));
  (this->Tags).ImportedEntity.Value = *(ushort *)CONCAT62(extraout_var_x00118,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_131e,0x18);
  (this->Tags).Finished.Value = *(ushort *)CONCAT62(extraout_var_x00119,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_131c,0x40);
  (this->Tags).Ignored.Value = *(ushort *)CONCAT62(extraout_var_x00120,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_131a,0x50);
  (this->Tags).DontOptimizeConstants.Value = *(ushort *)CONCAT62(extraout_var_x00121,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1318,0x88);
  (this->Tags).FixedTime.Value = *(ushort *)CONCAT62(extraout_var_x00122,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1316,0xa0);
  (this->Tags).PreRoll.Value = *(ushort *)CONCAT62(extraout_var_x00123,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1314,0xb8);
  (this->Tags).SectionPreRoll.Value = *(ushort *)CONCAT62(extraout_var_x00124,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1312,0xe0);
  (this->Tags).AlwaysCacheInitialValue.Value = *(ushort *)CONCAT62(extraout_var_x00125,FVar53.Value)
  ;
  FVar53 = FComponentRegistry::NewTag(this_00,&local_1310,0x18);
  (this->Tags).OldStyleSpawnable.Value = *(ushort *)CONCAT62(extraout_var_x00126,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_130e,0x40);
  (this->Tags).ExternalBlending.Value = *(ushort *)CONCAT62(extraout_var_x00127,FVar53.Value);
  FVar53 = FComponentRegistry::NewTag(this_00,&local_130c,0x70);
  (this->SymbolicTags).CreatesEntities.Value = *(ushort *)CONCAT62(extraout_var_x00128,FVar53.Value)
  ;
  local_1414.Value = (this->Tags).NeedsUnlink.Value;
  local_1412 = (this->Tags).Finished.Value;
  local_ae8._First = &local_1414;
  local_ae8._Last = &local_1410;
  FComponentMask::SetAll(&this->FinishedMask,&local_ae8);
  local_1300.CustomInitializer.Ptr = (IMutualComponentInitializer *)0x0;
  pIVar54 = ::operator_new(8);
  TVar5.Ptr = local_1300.CustomInitializer.Ptr;
  if (pIVar54 != (IMutualComponentInitializer *)0x0) {
    *pIVar54 = (IMutualComponentInitializer)&___7FBoundObjectKeyInitializer_MovieScene_UE__6B_;
    TVar55.Ptr = pIVar54;
  }
  if (local_1300.CustomInitializer.Ptr != (IMutualComponentInitializer *)0x0) {
    IVar3 = *local_1300.CustomInitializer.Ptr;
    local_1300.CustomInitializer.Ptr = TVar55.Ptr;
    (**(code **)IVar3)(TVar5.Ptr,1);
    TVar55.Ptr = local_1300.CustomInitializer.Ptr;
  }
  local_1300.CustomInitializer.Ptr = TVar55.Ptr;
  local_1594.Value = *(ushort *)&this->BoundObjectKey;
  local_ad8._First = &local_1594;
  local_1300.Type = Mandatory;
  local_ad8._Last = &local_1592;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->BoundObject,&local_ad8,&local_1300);
  if (local_1300.CustomInitializer.Ptr != (IMutualComponentInitializer *)0x0) {
    (**(code **)*local_1300.CustomInitializer.Ptr)(local_1300.CustomInitializer.Ptr,1);
  }
  local_1590[0].Value = (this->Tags).NeedsLink.Value;
  local_1588[0].Value = 0xffff;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1588,local_1590);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1588,local_1590);
  }
  local_1580[0].Value = (this->Tags).RestoreState.Value;
  local_1578[0].Value = local_1580[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1578,local_1580);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1578,local_1580);
  }
  local_1570[0].Value = (this->Tags).IgnoreHierarchicalBias.Value;
  local_1568[0].Value = local_1570[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1568,local_1570);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1568,local_1570);
  }
  local_1560[0].Value = (this->Tags).BlendHierarchicalBias.Value;
  local_1558[0].Value = local_1560[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1558,local_1560);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1558,local_1560);
  }
  local_1550[0].Value = (this->Tags).AbsoluteBlend.Value;
  local_1548[0].Value = local_1550[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1548,local_1550);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1548,local_1550);
  }
  local_1540[0].Value = (this->Tags).RelativeBlend.Value;
  local_1538[0].Value = local_1540[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1538,local_1540);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1538,local_1540);
  }
  local_1530[0].Value = (this->Tags).AdditiveBlend.Value;
  local_1528[0].Value = local_1530[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1528,local_1530);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1528,local_1530);
  }
  local_1520[0].Value = (this->Tags).OverrideBlend.Value;
  local_1518[0].Value = local_1520[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1518,local_1520);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1518,local_1520);
  }
  local_1510[0].Value = (this->Tags).AdditiveFromBaseBlend.Value;
  local_1508[0].Value = local_1510[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1508,local_1510);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_1508,local_1510);
  }
  local_1500[0].Value = (this->Tags).AdditiveAnimation.Value;
  local_14f8[0].Value = local_1500[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_14f8,local_1500);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_14f8,local_1500);
  }
  local_14f0[0].Value = (this->Tags).FixedTime.Value;
  local_14e8[0].Value = local_14f0[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_14e8,local_14f0);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_14e8,local_14f0);
  }
  local_14e0[0].Value = (this->Tags).PreRoll.Value;
  local_14d8[0].Value = local_14e0[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_14d8,local_14e0);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_14d8,local_14e0);
  }
  local_14d0[0].Value = (this->Tags).SectionPreRoll.Value;
  local_14c8[0].Value = local_14d0[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_14c8,local_14d0);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_14c8,local_14d0);
  }
  local_14c0[0].Value = (this->Tags).AlwaysCacheInitialValue.Value;
  local_14b8[0].Value = local_14c0[0].Value;
  pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_14b8,local_14c0);
  if (pFVar56 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_00->Factories).ParentToChildComponentTypes,local_14b8,local_14c0);
  }
  local_14b0.Value = (this->Tags).PreRoll.Value;
  local_ac8._First = &local_14b0;
  local_ac8._Last = &local_14ae;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)(this->Tags).SectionPreRoll.Value,&local_ac8);
  FEntityFactories::DuplicateChildComponent<FFrameTime>(&this_00->Factories,this->EvalTime);
  FEntityFactories::DuplicateChildComponent<double>(&this_00->Factories,this->EvalSeconds);
  FEntityFactories::DuplicateChildComponent<FFrameTime>(&this_00->Factories,this->BaseValueEvalTime)
  ;
  FEntityFactories::DuplicateChildComponent<double>(&this_00->Factories,this->BaseValueEvalSeconds);
  local_12e8 = this->SequenceID;
  local_12f0 = &___7__TDuplicateChildEntityInitializer_UFMovieSceneSequenceID___MovieScene_UE__6B_;
  local_12e6 = local_12e8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_6c0,
             (TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *)&local_12f0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_6c0);
  if ((local_680 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_6c0;
    if ((local_680 & 2) == 0) {
      pTVar59 = local_6c0[0];
    }
    local_680 = local_680 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_680 & 2) == 0) {
      FMemory::Free(local_6c0[0]);
    }
  }
  local_12d8 = this->InstanceHandle;
  local_12f0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_12e0 = &
               ___7__TDuplicateChildEntityInitializer_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_12d6 = local_12d8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_678,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *)&local_12e0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_678);
  if ((local_638 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_678;
    if ((local_638 & 2) == 0) {
      pTVar59 = local_678[0];
    }
    local_638 = local_638 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_638 & 2) == 0) {
      FMemory::Free(local_678[0]);
    }
  }
  local_12c8 = this->RootInstanceHandle;
  local_12d0 = &
               ___7__TDuplicateChildEntityInitializer_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_12e0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_12c6 = local_12c8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_630,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *)&local_12d0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_630);
  if ((local_5f0 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_630;
    if ((local_5f0 & 2) == 0) {
      pTVar59 = local_630[0];
    }
    local_5f0 = local_5f0 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_5f0 & 2) == 0) {
      FMemory::Free(local_630[0]);
    }
  }
  local_12b8 = this->PropertyBinding;
  local_12c0 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieScenePropertyBinding___MovieScene_UE__6B_
  ;
  local_12d0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_12b6 = local_12b8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5e8,
             (TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *)&local_12c0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5e8);
  if ((local_5a8 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5e8;
    if ((local_5a8 & 2) == 0) {
      pTVar59 = local_5e8[0];
    }
    local_5a8 = local_5a8 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_5a8 & 2) == 0) {
      FMemory::Free(local_5e8[0]);
    }
  }
  local_12a8 = this->HierarchicalBias;
  local_12b0 = &___7__TDuplicateChildEntityInitializer_F_MovieScene_UE__6B_;
  local_12c0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_12a6 = local_12a8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<short>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5a0,
             (TDuplicateChildEntityInitializer<short> *)&local_12b0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5a0);
  if ((local_560 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_5a0;
    if ((local_560 & 2) == 0) {
      pTVar59 = local_5a0[0];
    }
    local_560 = local_560 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_560 & 2) == 0) {
      FMemory::Free(local_5a0[0]);
    }
  }
  local_1298 = this->BlendingOrder;
  local_12a0 = &___7__TDuplicateChildEntityInitializer_H_MovieScene_UE__6B_;
  local_12b0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_1296 = local_1298;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<int>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_558,
             (TDuplicateChildEntityInitializer<int> *)&local_12a0);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_558);
  if ((local_518 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_558;
    if ((local_518 & 2) == 0) {
      pTVar59 = local_558[0];
    }
    local_518 = local_518 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_518 & 2) == 0) {
      FMemory::Free(local_558[0]);
    }
  }
  local_1288 = this->BindingLifetime;
  local_1290 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_12a0 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_1286 = local_1288;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_510,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
              *)&local_1290);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_510);
  if ((local_4d0 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_510;
    if ((local_4d0 & 2) == 0) {
      pTVar59 = local_510[0];
    }
    local_4d0 = local_4d0 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_4d0 & 2) == 0) {
      FMemory::Free(local_510[0]);
    }
  }
  local_14ac.Value = *(ushort *)&this->BindingLifetime;
  local_ab8._First = &local_14ac;
  local_1290 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_ab8._Last = &local_14aa;
  local_868.Bits.NumBits = 0;
  local_868.Bits.MaxBits = 0x180;
  FComponentMask::SetAll(&local_868,&local_ab8);
  FEntityFactories::ConditionallyDuplicateChildComponent<FGuid>
            (&this_00->Factories,this->GenericObjectBinding,&local_868);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,(FComponentTypeID)0xffff,
             (FComponentTypeID)*(ushort *)&this->ParentEntity);
  local_1278 = this->BoolChannel;
  local_1280 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_1276 = local_1278;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_4c8,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *)&local_1280);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_4c8);
  if ((local_488 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_4c8;
    if ((local_488 & 2) == 0) {
      pTVar59 = local_4c8[0];
    }
    local_488 = local_488 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_488 & 2) == 0) {
      FMemory::Free(local_4c8[0]);
    }
  }
  local_1268 = this->BoolResult;
  local_1270 = &___7__TDuplicateChildEntityInitializer__N_MovieScene_UE__6B_;
  local_1280 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_1266 = local_1268;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<bool>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_480,
             (TDuplicateChildEntityInitializer<bool> *)&local_1270);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_480);
  if ((local_440 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_480;
    if ((local_440 & 2) == 0) {
      pTVar59 = local_480[0];
    }
    local_440 = local_440 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_440 & 2) == 0) {
      FMemory::Free(local_480[0]);
    }
  }
  local_14a8.Value = *(ushort *)&this->BoolResult;
  local_aa8._First = &local_14a8;
  local_aa8._Last = &local_14a6;
  local_1270 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->BoolChannel,&local_aa8);
  local_14a4.Value = *(ushort *)&this->EvalTime;
  local_a98._First = &local_14a4;
  local_a98._Last = &local_14a2;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->BoolResult,&local_a98);
  local_1258 = this->ByteChannel;
  local_1260 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_1256 = local_1258;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_438,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *)&local_1260);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_438);
  if ((local_3f8 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_438;
    if ((local_3f8 & 2) == 0) {
      pTVar59 = local_438[0];
    }
    local_3f8 = local_3f8 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_3f8 & 2) == 0) {
      FMemory::Free(local_438[0]);
    }
  }
  local_1248 = this->ByteResult;
  local_1250 = &___7__TDuplicateChildEntityInitializer_E_MovieScene_UE__6B_;
  local_1260 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_1246 = local_1248;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3f0,
             (TDuplicateChildEntityInitializer<unsigned_char> *)&local_1250);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3f0);
  if ((local_3b0 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3f0;
    if ((local_3b0 & 2) == 0) {
      pTVar59 = local_3f0[0];
    }
    local_3b0 = local_3b0 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_3b0 & 2) == 0) {
      FMemory::Free(local_3f0[0]);
    }
  }
  local_14a0.Value = *(ushort *)&this->ByteResult;
  local_a88._First = &local_14a0;
  local_a88._Last = &local_149e;
  local_1250 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->ByteChannel,&local_a88);
  local_149c.Value = *(ushort *)&this->EvalTime;
  local_a78._First = &local_149c;
  local_a78._Last = &local_149a;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->ByteChannel,&local_a78);
  local_830.Value = *(ushort *)&this->ByteResult;
  TVar41 = this->BaseByte;
  local_82e = this->BaseValueEvalTime;
  local_82c = (this->Tags).AdditiveFromBaseBlend.Value;
  local_a68._First = &local_830;
  local_a68._Last = &local_82a;
  pFVar57 = FComplexInclusivityFilter::All(&local_e4,&local_a68);
  local_a58._First = &local_1498;
  local_a58._Last = &local_1496;
  local_1498.Value = (ushort)TVar41;
  FMutualInclusivityGraph::DefineComplexInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,pFVar57,&local_a58);
  local_1238 = this->IntegerChannel;
  local_1240 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_1236 = local_1238;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3a8,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *)&local_1240)
  ;
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3a8);
  if ((local_368 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_3a8;
    if ((local_368 & 2) == 0) {
      pTVar59 = local_3a8[0];
    }
    local_368 = local_368 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_368 & 2) == 0) {
      FMemory::Free(local_3a8[0]);
    }
  }
  local_1228 = this->IntegerResult;
  local_1240 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  local_1230 = &___7__TDuplicateChildEntityInitializer__J_MovieScene_UE__6B_;
  local_1226 = local_1228;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<__int64>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_360,
             (TDuplicateChildEntityInitializer<__int64> *)&local_1230);
  FEntityFactories::DefineChildComponent
            (&this_00->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_360);
  if ((local_320 & 1) != 0) {
    pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_360;
    if ((local_320 & 2) == 0) {
      pTVar59 = local_360[0];
    }
    local_320 = local_320 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
    if ((local_320 & 2) == 0) {
      FMemory::Free(local_360[0]);
    }
  }
  local_1494.Value = *(ushort *)&this->IntegerResult;
  local_a48._First = &local_1494;
  local_a48._Last = &local_1492;
  local_1230 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->IntegerChannel,&local_a48);
  local_1490.Value = *(ushort *)&this->EvalTime;
  local_a38._First = &local_1490;
  local_a38._Last = &local_148e;
  FMutualInclusivityGraph::DefineMutualInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,
             (FComponentTypeID)*(ushort *)&this->IntegerChannel,&local_a38);
  local_820.Value = *(ushort *)&this->IntegerResult;
  TVar42 = this->BaseInteger;
  local_81e = this->BaseValueEvalTime;
  local_81c = (this->Tags).AdditiveFromBaseBlend.Value;
  local_a28._First = &local_820;
  local_a28._Last = &local_81a;
  pFVar57 = FComplexInclusivityFilter::All(&local_a8,&local_a28);
  local_a18._First = &local_148c;
  local_a18._Last = &local_148a;
  local_148c.Value = (ushort)TVar42;
  FMutualInclusivityGraph::DefineComplexInclusionRule
            (&(this_00->Factories).MutualInclusivityGraph,pFVar57,&local_a18);
  uVar60 = 0;
  do {
    FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceFloatChannel>
              (&this_00->Factories,this->FloatChannel[(int)uVar60]);
    local_1488.Value = *(ushort *)(pTVar65 + 0x20);
    local_a08._First = &local_1488;
    local_a08._Last = &local_1486;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar65,
               &local_a08);
    local_1484.Value = *(ushort *)&this->EvalTime;
    local_9f8._First = &local_1484;
    local_9f8._Last = &local_1482;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar65,
               &local_9f8);
    local_1480.Value = *(ushort *)(pTVar65 + 0x14);
    local_9e8._First = &local_1480;
    local_9e8._Last = &local_147e;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar65,
               &local_9e8);
    uVar60 = uVar60 + 1;
    pTVar65 = pTVar65 + 1;
  } while (uVar60 < 9);
  uVar61 = 0;
  uVar60 = uVar61;
  do {
    local_1218 = *pTVar62;
    local_1220 = &
                 ___7__TDuplicateChildEntityInitializer_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    local_1216 = local_1218;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_318,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *)&local_1220
              );
    FEntityFactories::DefineChildComponent
              (&this_00->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_318);
    if ((local_2d8 & 1) != 0) {
      pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_318;
      if ((local_2d8 & 2) == 0) {
        pTVar59 = local_318[0];
      }
      local_2d8 = local_2d8 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
      if ((local_2d8 & 2) == 0) {
        FMemory::Free(local_318[0]);
      }
    }
    local_1220 = &___7FChildEntityInitializer_MovieScene_UE__6B_;
    FEntityFactories::DuplicateChildComponent<double>
              (&this_00->Factories,this->DoubleResult[(int)uVar60]);
    local_147c.Value = *(ushort *)(pTVar62 + 0x17);
    local_9d8._First = &local_147c;
    local_9d8._Last = &local_147a;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar62,
               &local_9d8);
    local_1478.Value = *(ushort *)&this->EvalTime;
    local_9c8._First = &local_1478;
    local_9c8._Last = &local_1476;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar62,
               &local_9c8);
    local_1474.Value = *(ushort *)(pTVar62 + 0xb);
    local_9b8._First = &local_1474;
    local_9b8._Last = &local_1472;
    FMutualInclusivityGraph::DefineMutualInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,(FComponentTypeID)*(ushort *)pTVar62,
               &local_9b8);
    uVar60 = uVar60 + 1;
    pTVar62 = pTVar62 + 1;
  } while (uVar60 < 9);
  do {
    local_9a8 = this->DoubleResult + (int)uVar61;
    local_9a0 = this->BaseDouble + (int)uVar61;
    TSet<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,0>,FDefaultSetAllocator>
                *)&this->ResultToBase,
               (TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
                *)local_1210,(bool *)&local_9a8);
    uVar61 = uVar61 + 1;
  } while (uVar61 < 9);
  local_140c = 0;
  pTVar64 = this->DoubleResult;
  do {
    TVar12 = pTVar64[9];
    pTVar66 = &local_828;
    local_828 = *pTVar64;
    local_826 = this->BaseValueEvalTime;
    local_824 = (this->Tags).AdditiveFromBaseBlend.Value;
    local_818.NumBits = 0;
    local_818.MaxBits = 0x180;
    do {
      TVar2 = *pTVar66;
      iVar63 = ((uint)(ushort)TVar2 - local_818.NumBits) + 1;
      if (0 < iVar63) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_818,false,iVar63);
      }
      if ((local_818.NumBits <= (int)(uint)(ushort)TVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar58 = (FBuiltInComponentTypes *)(*pcVar4)();
        return pFVar58;
      }
      pTVar1 = local_818.AllocatorInstance.InlineData + ((ushort)TVar2 >> 5);
      pTVar66 = pTVar66 + 1;
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar2._0_1_ & 0x1f);
    } while (pTVar66 != &local_822);
    local_120.Mask.Bits.NumBits = 0;
    local_120.Mask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_120,&local_818);
    local_998._First = &local_1470;
    local_120.Mode = AllOf;
    local_998._Last = &local_146e;
    local_1470.Value = (ushort)TVar12;
    FMutualInclusivityGraph::DefineComplexInclusionRule
              (&(this_00->Factories).MutualInclusivityGraph,&local_120,&local_998);
    pTVar64 = pTVar64 + 1;
    local_140c = local_140c + 1;
    if (8 < local_140c) {
      local_1410.Value = *(ushort *)&this->EvalSeconds;
      TVar12 = this->BaseValueEvalSeconds;
      local_140e = this->BaseValueEvalTime;
      local_988._First = &local_1410;
      local_988._Last = (FComponentTypeID *)&local_140c;
      pFVar57 = FComplexInclusivityFilter::All(&local_6c,&local_988);
      local_978._First = &local_146c;
      local_978._Last = &local_146a;
      local_146c.Value = (ushort)TVar12;
      FMutualInclusivityGraph::DefineComplexInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,pFVar57,&local_978);
      local_1200 = this->Easing;
      local_1210._8_8_ =
           &___7__TDuplicateChildEntityInitializer_UFEasingComponentData___MovieScene_UE__6B_;
      local_11fe = local_1200;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_2d0,
                 (TDuplicateChildEntityInitializer<FEasingComponentData> *)(local_1210 + 8));
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_2d0);
      if ((local_290 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_2d0;
        if ((local_290 & 2) == 0) {
          pTVar59 = local_2d0[0];
        }
        local_290 = local_290 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_290 & 2) == 0) {
          FMemory::Free(local_2d0[0]);
        }
      }
      local_11f0 = this->HierarchicalEasingChannel;
      local_11f8 = &___7__TDuplicateChildEntityInitializer_G_MovieScene_UE__6B_;
      local_11ee = local_11f0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_288,
                 (TDuplicateChildEntityInitializer<unsigned_short> *)&local_11f8);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_288);
      if ((local_248 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_288;
        if ((local_248 & 2) == 0) {
          pTVar59 = local_288[0];
        }
        local_248 = local_248 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_248 & 2) == 0) {
          FMemory::Free(local_288[0]);
        }
      }
      local_1468.Value = *(ushort *)&this->EvalTime;
      local_968._First = &local_1468;
      local_968._Last = &local_1466;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->Easing,&local_968);
      local_1464.Value = *(ushort *)&this->EasingResult;
      local_958._First = &local_1464;
      local_958._Last = &local_1462;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->Easing,&local_958);
      local_11e0 = this->WeightChannel;
      local_11e8 = &
                   ___7__TDuplicateChildEntityInitializer_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_
      ;
      local_11de = local_11e0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_240,
                 (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *)
                 &local_11e8);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_240);
      if ((local_200 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_240;
        if ((local_200 & 2) == 0) {
          pTVar59 = local_240[0];
        }
        local_200 = local_200 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_200 & 2) == 0) {
          FMemory::Free(local_240[0]);
        }
      }
      local_11d0 = this->WeightResult;
      local_11d8 = &___7__TDuplicateChildEntityInitializer_N_MovieScene_UE__6B_;
      local_11ce = local_11d0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<double>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1f8,
                 (TDuplicateChildEntityInitializer<double> *)&local_11d8);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1f8);
      if ((local_1b8 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1f8;
        if ((local_1b8 & 2) == 0) {
          pTVar59 = local_1f8[0];
        }
        local_1b8 = local_1b8 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_1b8 & 2) == 0) {
          FMemory::Free(local_1f8[0]);
        }
      }
      local_1598.Value = *(ushort *)&this->EvalTime;
      local_948._First = &local_1598;
      local_948._Last = &local_1596;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->WeightChannel,&local_948);
      local_1460.Value = *(ushort *)&this->WeightResult;
      local_938._First = &local_1460;
      local_938._Last = &local_145e;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->WeightChannel,&local_938);
      local_145c.Value = *(ushort *)&this->CachedWeightChannelInterpolation;
      local_928._First = &local_145c;
      local_928._Last = &local_145a;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->WeightChannel,&local_928);
      local_1458.Value = *(ushort *)&this->WeightAndEasingResult;
      local_918._First = &local_1458;
      local_918._Last = &local_1456;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->HierarchicalEasingChannel,&local_918);
      local_1454.Value = *(ushort *)&this->WeightAndEasingResult;
      local_908._First = &local_1454;
      local_908._Last = &local_1452;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->EasingResult,&local_908);
      local_1450.Value = *(ushort *)&this->WeightAndEasingResult;
      local_8f8._First = &local_1450;
      local_8f8._Last = &local_144e;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->WeightResult,&local_8f8);
      local_11c0 = this->StringChannel;
      local_11c8 = &
                   ___7__TDuplicateChildEntityInitializer_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_
      ;
      local_11be = local_11c0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1b0,
                 (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *)
                 &local_11c8);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1b0);
      if ((local_170 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_1b0;
        if ((local_170 & 2) == 0) {
          pTVar59 = local_1b0[0];
        }
        local_170 = local_170 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_170 & 2) == 0) {
          FMemory::Free(local_1b0[0]);
        }
      }
      local_11b0 = this->StringResult;
      local_11b8 = &___7__TDuplicateChildEntityInitializer_VFString___MovieScene_UE__6B_;
      local_11ae = local_11b0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FString>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_168,
                 (TDuplicateChildEntityInitializer<FString> *)&local_11b8);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_168);
      if ((local_128 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_168;
        if ((local_128 & 2) == 0) {
          pTVar59 = local_168[0];
        }
        local_128 = local_128 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_128 & 2) == 0) {
          FMemory::Free(local_168[0]);
        }
      }
      local_144c.Value = *(ushort *)&this->EvalTime;
      local_8e8._First = &local_144c;
      local_8e8._Last = &local_144a;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->StringChannel,&local_8e8);
      local_1448.Value = *(ushort *)&this->StringResult;
      local_8d8._First = &local_1448;
      local_8d8._Last = &local_1446;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->StringChannel,&local_8d8);
      local_11a0 = this->TextChannel;
      local_11a8 = &
                   ___7__TDuplicateChildEntityInitializer_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_
      ;
      local_119e = local_11a0;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_7e0,
                 (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *)&local_11a8
                );
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_7e0);
      if ((local_7a0 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_7e0;
        if ((local_7a0 & 2) == 0) {
          pTVar59 = local_7e0[0];
        }
        local_7a0 = local_7a0 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_7a0 & 2) == 0) {
          FMemory::Free(local_7e0[0]);
        }
      }
      local_1190 = this->TextResult;
      local_1198 = &___7__TDuplicateChildEntityInitializer_VFText___MovieScene_UE__6B_;
      local_118e = local_1190;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FText>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_798,
                 (TDuplicateChildEntityInitializer<FText> *)&local_1198);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_798);
      if ((local_758 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_798;
        if ((local_758 & 2) == 0) {
          pTVar59 = local_798[0];
        }
        local_758 = local_758 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_758 & 2) == 0) {
          FMemory::Free(local_798[0]);
        }
      }
      local_1444.Value = *(ushort *)&this->EvalTime;
      local_8c8._First = &local_1444;
      local_8c8._Last = &local_1442;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->TextChannel,&local_8c8);
      local_1440.Value = *(ushort *)&this->TextResult;
      local_8b8._First = &local_1440;
      local_8b8._Last = &local_143e;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->TextChannel,&local_8b8);
      local_1180 = this->ObjectPathChannel;
      local_1188 = &
                   ___7__TDuplicateChildEntityInitializer_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
      ;
      local_117e = local_1180;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_750,
                 (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *)
                 &local_1188);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_750);
      if ((local_710 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_750;
        if ((local_710 & 2) == 0) {
          pTVar59 = local_750[0];
        }
        local_710 = local_710 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_710 & 2) == 0) {
          FMemory::Free(local_750[0]);
        }
      }
      local_1170 = this->ObjectResult;
      local_1178 = &
                   ___7__TDuplicateChildEntityInitializer_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_
      ;
      local_116e = local_1170;
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
      TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>,void>
                ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_708,
                 (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *)&local_1178);
      FEntityFactories::DefineChildComponent
                (&this_00->Factories,
                 (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_708);
      if ((local_6c8 & 1) != 0) {
        pTVar59 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_708;
        if ((local_6c8 & 2) == 0) {
          pTVar59 = local_708[0];
        }
        local_6c8 = local_6c8 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                       (pTVar59->Data).Pad)->Data).Pad)(pTVar59,0);
        if ((local_6c8 & 2) == 0) {
          FMemory::Free(local_708[0]);
        }
      }
      local_143c.Value = *(ushort *)&this->EvalTime;
      local_8a8._First = &local_143c;
      local_8a8._Last = &local_143a;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->ObjectPathChannel,&local_8a8);
      local_1438.Value = *(ushort *)&this->ObjectResult;
      local_898._First = &local_1438;
      local_898._Last = local_1436;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->ObjectPathChannel,&local_898);
      FEntityFactories::
      DefineChildComponent<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,_UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes_::__l25::<lambda_1>_&>
                (&this_00->Factories,this->TrackInstance,this->TrackInstanceInput,local_1418);
      local_1430[0].Value = *(ushort *)&this->EvaluationHook;
      local_1428[0].Value = local_1430[0].Value;
      pFVar56 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                ::FindPair(&(this_00->Factories).ParentToChildComponentTypes,local_1428,local_1430);
      if (pFVar56 == (FComponentTypeID *)0x0) {
        TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
        ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
                  ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                    *)&(this_00->Factories).ParentToChildComponentTypes,local_1428,local_1430);
      }
      local_1420.Value = *(ushort *)&this->EvalTime;
      local_888._First = &local_1420;
      local_888._Last = &local_141e;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->EvaluationHook,&local_888);
      local_141c.Value = *(ushort *)&this->EvaluationHookFlags;
      local_878._First = &local_141c;
      local_878._Last = &local_141a;
      FMutualInclusivityGraph::DefineMutualInclusionRule
                (&(this_00->Factories).MutualInclusivityGraph,
                 (FComponentTypeID)*(ushort *)&this->EvaluationHook,&local_878);
      FComponentMask::Set(&this->RequiresInstantiationMask,
                          (FComponentTypeID)(this->Tags).NeedsLink.Value);
      return this;
    }
  } while( true );
}

// ~FBuiltInComponentTypes @ 146097610

void __thiscall
UE::MovieScene::FBuiltInComponentTypes::~FBuiltInComponentTypes(FBuiltInComponentTypes *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ResultToBase).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResultToBase).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResultToBase);
  pFVar2 = (this->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::MovieScene::FPropertyDefinition,int>
            ((FPropertyDefinition *)(this->PropertyRegistry).Properties.AllocatorInstance.Data,
             (this->PropertyRegistry).Properties.ArrayNum);
  pFVar2 = (this->PropertyRegistry).Properties.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Destroy @ 1460bc890

void __cdecl UE::MovieScene::FBuiltInComponentTypes::Destroy(void)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
  TVar3;
  
  TVar3.Ptr = GMovieSceneBuiltInComponentTypes.Ptr;
  if ((GMovieSceneBuiltInComponentTypes.Ptr != (FBuiltInComponentTypes *)0x0) &&
     (GMovieSceneBuiltInComponentTypes.Ptr = (FBuiltInComponentTypes *)0x0,
     TVar3.Ptr != (FBuiltInComponentTypes *)0x0)) {
    *(undefined4 *)&((TVar3.Ptr)->ResultToBase).field_0x48 = 0;
    pvVar1 = *(void **)&((TVar3.Ptr)->ResultToBase).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(TVar3.Ptr)->ResultToBase);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::MovieScene::FPropertyDefinition,int>
              ((FPropertyDefinition *)
               ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data,
               ((TVar3.Ptr)->PropertyRegistry).Properties.ArrayNum);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(TVar3.Ptr,0x1e8);
  }
  GMovieSceneBuiltInComponentTypesDestroyed = true;
  return;
}

// Get @ 1460c8f40

FBuiltInComponentTypes * __cdecl UE::MovieScene::FBuiltInComponentTypes::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  FBuiltInComponentTypes *this;
  
  if (GMovieSceneBuiltInComponentTypes.Ptr == (FBuiltInComponentTypes *)0x0) {
    if (GMovieSceneBuiltInComponentTypesDestroyed) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GMovieSceneBuiltInComponentTypesDestroyed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\BuiltInComponentTypes.cpp"
                         ,0x29f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FBuiltInComponentTypes *)(*pcVar1)();
        return pFVar3;
      }
    }
    this = ::operator_new(0x1e8);
    pFVar3 = (FBuiltInComponentTypes *)0x0;
    if (this != (FBuiltInComponentTypes *)0x0) {
      pFVar3 = FBuiltInComponentTypes(this);
    }
    TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
    ::Reset(&GMovieSceneBuiltInComponentTypes,pFVar3);
  }
  return GMovieSceneBuiltInComponentTypes.Ptr;
}

// GetBaseValueComponentType @ 1460c91d0

FComponentTypeID __thiscall
UE::MovieScene::FBuiltInComponentTypes::GetBaseValueComponentType
          (FBuiltInComponentTypes *this,FComponentTypeID *param_1)

{
  longlong lVar1;
  int iVar2;
  ushort *puVar3;
  ushort *in_R8;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ResultToBase).field_0x8 != *(int *)&(this->ResultToBase).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ResultToBase).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ResultToBase).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->ResultToBase).field_0x48 - 1) &
                              (ulonglong)*in_R8) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ResultToBase + (longlong)iVar2 * 0xc;
        if (*(ushort *)(*(longlong *)&this->ResultToBase + (longlong)iVar2 * 0xc) == *in_R8) {
          puVar3 = (ushort *)(lVar1 + 2);
          if (lVar1 == 0) {
            puVar3 = (ushort *)0x0;
          }
          if (puVar3 != (ushort *)0x0) {
            param_1->Value = *puVar3;
            return (FComponentTypeID)(ushort)param_1;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 4);
      } while (iVar2 != -1);
    }
  }
  param_1->Value = 0xffff;
  return (FComponentTypeID)(ushort)param_1;
}

