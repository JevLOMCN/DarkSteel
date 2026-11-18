// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticStruct @ 14b4159e0

UScriptStruct * __cdecl FDS_AnimNode_OffsetRootBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_AnimNode_OffsetRootBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_AnimNode_OffsetRootBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_AnimNode_OffsetRootBone,(UObject *)pUVar1,
                         L"DS_AnimNode_OffsetRootBone");
  }
  return Z_Registration_Info_UScriptStruct_FDS_AnimNode_OffsetRootBone.OuterSingleton;
}

// FDS_AnimNode_OffsetRootBone @ 14b41aab0

FDS_AnimNode_OffsetRootBone * __thiscall
FDS_AnimNode_OffsetRootBone::FDS_AnimNode_OffsetRootBone(FDS_AnimNode_OffsetRootBone *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->field_0x2c = 1;
  *(undefined ***)this = &___7FAnimNode_OffsetRootBone__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  dVar2 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&this->field_0x30 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  *(double *)&this->field_0x38 = dVar2;
  dVar2 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&this->field_0x40 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0x48 = dVar2;
  dVar2 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  *(double *)&this->field_0x50 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  *(double *)&this->field_0x58 = dVar2;
  dVar2 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&this->field_0x60 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  *(double *)&this->field_0x68 = dVar2;
  dVar2 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&this->field_0x70 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  *(double *)&this->field_0x78 = dVar2;
  dVar2 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&this->field_0x80 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x88 = dVar2;
  *(double *)&this->field_0x90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x98 = uVar1;
  *(double *)&this->field_0xa0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->field_0xb0 = UE::Math::TQuat<double>::Identity.X;
  *(double *)&this->field_0xb8 = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&this->field_0xc0 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&this->field_0xc8 = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xd0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xd8 = uVar1;
  *(double *)&this->field_0xe0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->field_0xe8 = 0xffffffffffffffff;
  *(undefined4 *)&this->field_0xf0 = 0xffff;
  *(undefined ***)this = &___7FDS_AnimNode_OffsetRootBone__6B_;
  this->AnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->CachedDeltaTime = 0.0;
  this->bIsFirstUpdate = true;
  *&(this->ComponentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ComponentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimulatedTranslation).field0_0x0._s_0.Y = (double)uVar1;
  (this->SimulatedTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->SimulatedRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->SimulatedRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->SimulatedRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SimulatedRotation).W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpdateCounter).SkipFrames = 0;
  (this->ParentTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentTranslation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OwnerAnimInstance).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// CacheBones_AnyThread @ 14b869ae0

void __thiscall
FDS_AnimNode_OffsetRootBone::CacheBones_AnyThread
          (FDS_AnimNode_OffsetRootBone *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->field_0x10,param_1);
  return;
}

// Evaluate_AnyThread @ 14b86f3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_AnimNode_OffsetRootBone::Evaluate_AnyThread
          (FDS_AnimNode_OffsetRootBone *this,FPoseContext *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  double *pdVar3;
  FAnimInstanceProxy *pFVar4;
  double (*padVar5) [2];
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double adVar9 [2];
  double adVar10 [2];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  TConsoleVariableData<int> *pTVar28;
  undefined8 uVar29;
  FPoseContext *pFVar30;
  bool bVar31;
  EWarpingEvaluationMode EVar32;
  EOffsetRootBoneMode EVar33;
  EOffsetRootBoneMode EVar34;
  EOffsetRootBone_CollisionTestingMode EVar35;
  bool bVar36;
  char cVar37;
  ECollisionChannel EVar38;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int iVar39;
  int iVar40;
  FName *pFVar41;
  FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval> FVar42;
  IAnimRootMotionProvider *pIVar43;
  UObject *pUVar44;
  AActor *this_00;
  TVector<double> *pTVar45;
  TRotator<double> *this_01;
  USkeletalMeshComponent *pUVar46;
  UWorld *this_02;
  TQuat<double> *pTVar47;
  longlong lVar48;
  FObjectPtr FVar49;
  UDS_LogManager *pUVar50;
  TTransform<double> *pTVar51;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  FDS_AnimNode_OffsetRootBone *pFVar52;
  void *pvVar53;
  FNameEntryId FVar54;
  FName FVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 extraout_var [12];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double extraout_XMM0_Qb_01;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar94;
  undefined1 auVar95 [16];
  double dVar117;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  double dVar118;
  undefined1 auVar119 [16];
  undefined8 uVar127;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined8 uVar142;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  double dVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  double dVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  double adVar153 [2];
  float fVar154;
  double dVar158;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  double adVar157 [2];
  undefined4 uVar159;
  undefined4 uVar160;
  undefined4 uVar161;
  undefined4 uVar162;
  double dVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  double dVar167;
  double dVar168;
  double dVar171;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auStackY_15e8 [32];
  bool local_1588;
  undefined1 local_1584 [2];
  EOffsetRootBoneMode local_1582;
  float local_1580;
  TVector<double>_u_0 local_1578;
  FPoseContext *local_1560;
  undefined8 local_1558;
  double dStack_1550;
  FColor_u_0 local_1548;
  float local_1544;
  float local_1540;
  float local_153c;
  float local_1538 [2];
  FWeakObjectPtr local_1530;
  TVector<double>_u_0 local_1528;
  FName local_1510;
  FWeakObjectPtr local_1508 [2];
  undefined1 local_14f8 [16];
  undefined1 local_14e8 [16];
  FName local_14d8;
  TVector<double>_u_0 local_14c8;
  undefined4 local_14b0;
  double local_14a8;
  FName local_14a0;
  FName local_1498;
  FName local_1490;
  FName local_1488;
  FName local_1480;
  FName local_1478;
  FObjectPtr_u_0 local_1470;
  LARGE_INTEGER local_1468;
  double local_1460;
  double dStack_1458;
  undefined8 local_1450;
  TVector<double>_u_0 local_1448;
  double local_1428;
  double dStack_1420;
  double local_1418;
  undefined1 local_1408 [16];
  FStatMessage local_13f8;
  double local_13e8;
  double dStack_13e0;
  TVector<double>_u_0 local_13d8;
  undefined8 local_13c0;
  undefined8 uStack_13b8;
  undefined8 local_13b0;
  undefined4 uStack_13a8;
  undefined1 uStack_13a4;
  undefined2 uStack_13a3;
  undefined1 uStack_13a1;
  TVector<double>_u_0 local_13a0;
  FCollisionShape local_1388;
  undefined1 local_1378 [16];
  undefined1 local_1368 [16];
  TVector<double>_u_0 local_1358;
  TVector<double>_u_0 local_1340;
  TVector<double>_u_0 local_1328;
  TVector<double>_u_0 local_1310;
  TVector<double>_u_0 local_12f8;
  TVector<double>_u_0 local_12e0;
  TVector<double>_u_0 local_12c8;
  TVector<double>_u_0 local_12b0;
  TVector<double>_u_0 local_1298;
  TVector<double>_u_0 local_1280;
  TVector<double>_u_0 local_1268;
  TVector<double>_u_0 local_1250;
  TVector<double>_u_0 local_1238;
  TVector<double>_u_0 local_1220;
  TVector<double>_u_0 local_1208;
  TVector<double>_u_0 local_11f0;
  TVector<double>_u_0 local_11d8;
  TVector<double>_u_0 local_11c0;
  TVector<double>_u_0 local_11a8;
  TVector<double>_u_0 local_1190;
  double local_1178;
  double dStack_1170;
  double local_1168;
  TVector<double>_u_0 local_1160;
  TVector<double>_u_0 local_1148;
  double local_1130 [2];
  double local_1120;
  TVector<double>_u_0 local_1118;
  TVector<double>_u_0 local_1100;
  undefined8 local_10e8;
  FObjectPtr local_10e0;
  TVector<double>_u_0 local_10d8;
  double local_10b8;
  double dStack_10b0;
  double local_10a8;
  TVector<double>_u_0 local_1098;
  TVector<double>_u_0 local_1078;
  double local_1058;
  double dStack_1050;
  double local_1048;
  TVector<double>_u_0 local_1040;
  TVector<double>_u_0 local_1028;
  TVector<double>_u_0 local_1008;
  TVector<double>_u_0 local_fe8;
  double local_fc8;
  double dStack_fc0;
  double local_fb8;
  TVector<double>_u_0 local_fa8;
  double local_f88;
  double dStack_f80;
  double local_f78;
  TVector<double>_u_0 local_f68;
  double local_f48;
  double dStack_f40;
  double local_f38;
  TVector<double>_u_0 local_f28;
  double local_f08;
  double dStack_f00;
  double local_ef8;
  FName local_ef0;
  double local_ee8;
  double local_ee0;
  double local_ed8;
  TQuat<double> local_ec8;
  TQuat<double> local_ea8;
  TQuat<double> local_e88;
  TQuat<double> local_e68;
  TQuat<double> local_e48;
  TQuat<double> local_e28;
  TQuat<double> local_e08;
  TQuat<double> local_de8;
  TQuat<double> local_dc8;
  TQuat<double> local_da8;
  undefined1 local_d88 [16];
  undefined1 local_d78 [16];
  TQuat<double> local_d68;
  TQuat<double> local_d48;
  double local_d28;
  double dStack_d20;
  double local_d18;
  undefined1 local_d10 [16];
  double local_d00;
  double local_cf8;
  double dStack_cf0;
  double local_ce8;
  double local_ce0 [2];
  double local_cd0;
  double local_cc8;
  double dStack_cc0;
  double local_cb8;
  double local_cb0;
  double dStack_ca8;
  double local_ca0;
  double local_c98;
  double dStack_c90;
  double local_c88;
  TVector<double> local_c80;
  double local_c68;
  double dStack_c60;
  double local_c58;
  double local_c50;
  double dStack_c48;
  double local_c40;
  undefined1 local_c38 [16];
  double local_c28;
  undefined1 local_c20 [16];
  double local_c10;
  double local_c08;
  double dStack_c00;
  double local_bf8;
  double local_bf0 [2];
  double local_be0;
  double local_bd8;
  double dStack_bd0;
  double local_bc8;
  double dStack_bc0;
  undefined1 local_bb8 [16];
  undefined1 local_ba8 [16];
  double local_b98;
  double dStack_b90;
  undefined1 local_b88 [16];
  undefined1 local_b78 [16];
  undefined1 local_b68 [16];
  double local_b58;
  double dStack_b50;
  double local_b48;
  double dStack_b40;
  undefined1 local_b38 [48];
  double dStack_b08;
  double local_b00;
  double local_ae0;
  double dStack_ad8;
  double local_ad0;
  int local_a94;
  FWeakObjectPtr local_a80;
  FWeakObjectPtr FStack_a78;
  IActorInstanceManagerInterface *local_a70;
  undefined8 uStack_a68;
  TVector<double> local_a38;
  TVector<double> local_a20;
  TVector<double> local_a08;
  TVector<double> local_9f0;
  TVector<double> local_9d8;
  TQuat<double> local_9b8;
  TQuat<double> local_998;
  TQuat<double> local_978 [3];
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  TTransform<double> local_8f8;
  TTransform<double> local_898;
  TTransform<double> local_838;
  TTransform<double> local_7d8;
  TTransform<double> local_778;
  TTransform<double> local_718;
  TTransform<double> local_6b8;
  TTransform<double> local_658;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  FCollisionQueryParams local_418;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_15e8;
  FVar42 = StatPtr_STAT_OffsetRootBone_Eval;
  local_1560 = param_1;
  if (StatPtr_STAT_OffsetRootBone_Eval == (FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval>)0x0
     ) {
    pFVar41 = ::FName::FName(&local_ef0,"STAT_OffsetRootBone_Eval");
    FVar42 = (FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OffsetRootBone_Eval,*pFVar41,
                        L"OffsetRootBone Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar55 = *(FName *)FVar42;
  bVar23 = false;
  bVar27 = false;
  local_14d8.ComparisonIndex.Value = 0;
  local_14d8.Number = 0;
  FVar54 = FVar55.ComparisonIndex.Value;
  uVar174 = FVar55.Number;
  if ((FVar54.Value == 0) && (uVar174 == 0)) {
LAB_14b86f54e:
    bVar24 = false;
    FVar55 = local_14d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1548.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1548._s_0,(char *)*(FName *)((longlong)FVar42 + 0x10));
      bVar23 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1510.ComparisonIndex.Value = FVar54.Value;
        local_1510.Number = uVar174;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1510,(wchar_t *)*(FName *)((longlong)FVar42 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_AnimNode_OffsetRootBone.cpp"
                   ,0x97);
        bVar23 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14b86f54e;
    local_1558._0_4_ = FVar54.Value;
    local_1558._4_4_ = uVar174;
    FThreadStats::AddMessage(FVar55,CycleScopeStart);
    bVar24 = true;
  }
  FPoseLink::Evaluate((FPoseLink *)&this->field_0x10,param_1);
  pTVar28 = DS_CVarAnimNodeOffsetRootBoneEnable.Ref;
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14b86f57c:
    lVar48 = 0;
  }
  else {
    bVar31 = IsInGameThread();
    lVar48 = 4;
    if (bVar31) goto LAB_14b86f57c;
  }
  if (*(int *)((longlong)pTVar28->ShadowedValue + lVar48) == 0) goto LAB_14b872819;
  local_1588 = false;
  pIVar43 = UE::Anim::IAnimRootMotionProvider::Get();
  EVar32 = FAnimNode_OffsetRootBone::GetEvaluationMode((FAnimNode_OffsetRootBone *)this);
  if ((EVar32 == Graph) &&
     (local_1588 = pIVar43 != (IAnimRootMotionProvider *)0x0,
     pIVar43 == (IAnimRootMotionProvider *)0x0)) {
    local_1584[0] = 0;
    `FDS_AnimNode_OffsetRootBone::Evaluate_AnyThread'::__l8::<lambda_1>::operator()(local_1584);
  }
  if ((*(int *)&(param_1->Pose).field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pdVar3 = *(double **)&param_1->Pose;
  dVar167 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
  dVar171 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
  dVar163 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar143 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
  local_718.Rotation.XY.m128d_f64[0] = *pdVar3;
  local_718.Rotation.XY.m128d_f64[1] = pdVar3[1];
  auVar119 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
  dVar94 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  local_718.Rotation.ZW.m128d_f64[0] = pdVar3[2];
  local_718.Rotation.ZW.m128d_f64[1] = pdVar3[3];
  local_718.Translation.XY.m128d_f64[0] = pdVar3[4];
  local_718.Translation.XY.m128d_f64[1] = pdVar3[5];
  local_718.Translation.ZW.m128d_f64[0] = pdVar3[6];
  local_718.Translation.ZW.m128d_f64[1] = pdVar3[7];
  local_718.Scale3D.XY.m128d_f64[0] = pdVar3[8];
  local_718.Scale3D.XY.m128d_f64[1] = pdVar3[9];
  local_718.Scale3D.ZW.m128d_f64[0] = pdVar3[10];
  local_718.Scale3D.ZW.m128d_f64[1] = pdVar3[0xb];
  local_918 = (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
  dStack_910 = (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
  pFVar4 = this->AnimInstanceProxy;
  local_908 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  dStack_900 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  dVar117 = (pFVar4->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (pFVar4->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar117;
  dVar117 = (pFVar4->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (pFVar4->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar117;
  dVar117 = (pFVar4->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (pFVar4->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar117;
  dVar117 = (pFVar4->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (pFVar4->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar117;
  dVar117 = (pFVar4->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (pFVar4->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar117;
  dVar117 = (pFVar4->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (pFVar4->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar117;
  uVar142 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar127 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1408._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1408._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar2 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20;
  local_1578._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
  local_1578._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
  local_1578._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  dVar117 = (this->ComponentTransform).Translation.ZW.m128d_f64[1];
  local_10a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1418 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_13e8 = dVar167;
  dStack_13e0 = dVar171;
  bVar31 = TWeakObjectPtr<UDS_MainPlayerAnim,FWeakObjectPtr>::UEOpEquals
                     (&this->OwnerAnimInstance,(void *)0x0);
  dVar118 = extraout_XMM0_Qb;
  if (!bVar31) {
    pUVar44 = FWeakObjectPtr::Get(&(this->OwnerAnimInstance).WeakPtr);
    local_1408 = *(undefined1 (*) [16])&pUVar44[0x36].field_0x18;
    local_10a8 = *(double *)(pUVar44 + 0x37);
    pUVar44 = FWeakObjectPtr::Get(&(this->OwnerAnimInstance).WeakPtr);
    local_1508[0].ObjectIndex = *(int *)&pUVar44[0x35].field_0x20;
    local_1508[0].ObjectSerialNumber = *(int *)&pUVar44[0x35].field_0x24;
    bVar31 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_1508,(void *)0x0);
    dVar118 = extraout_XMM0_Qb_00;
    if (!bVar31) {
      this_00 = (AActor *)FWeakObjectPtr::Get(local_1508);
      pTVar45 = AActor::GetActorLocation(this_00,&local_a38);
      dVar118 = (pTVar45->field0_0x0)._s_0.Y;
      (this->ParentTranslation).field0_0x0._s_0.X = (pTVar45->field0_0x0)._s_0.X;
      (this->ParentTranslation).field0_0x0._s_0.Y = dVar118;
      dVar117 = 0.0;
      (this->ParentTranslation).field0_0x0._s_0.Z = (pTVar45->field0_0x0)._s_0.Z;
    }
  }
  auVar11._4_8_ = dVar118;
  auVar11._0_4_ = auVar119._4_4_;
  auVar96._0_8_ = auVar11._0_8_ << 0x20;
  auVar96._8_4_ = auVar119._8_4_;
  auVar96._12_4_ = auVar119._12_4_;
  auVar12._4_8_ = dVar117;
  auVar12._0_4_ = (int)((ulonglong)uVar127 >> 0x20);
  auVar95._0_8_ = auVar12._0_8_ << 0x20;
  auVar95._8_4_ = (int)uVar142;
  auVar95._12_4_ = (int)uVar2;
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       (local_1578._s_0.X - auVar119._0_8_) + (double)uVar127 +
       (this->SimulatedTranslation).field0_0x0._s_0.X;
  (this->SimulatedTranslation).field0_0x0._s_0.Y =
       (local_1578._s_0.Y - auVar96._8_8_) + auVar95._8_8_ +
       (this->SimulatedTranslation).field0_0x0._s_0.Y;
  adVar153[0] = (local_1578._s_0.Z - dVar94) + local_1418 +
                (this->SimulatedTranslation).field0_0x0._s_0.Z;
  adVar153[1] = 0.0;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = adVar153[0];
  local_c38 = auVar119;
  local_c28 = dVar94;
  EVar33 = FAnimNode_OffsetRootBone::GetTranslationMode((FAnimNode_OffsetRootBone *)this);
  EVar34 = FAnimNode_OffsetRootBone::GetRotationMode((FAnimNode_OffsetRootBone *)this);
  switch(EVar33) {
  case Accumulate:
  case Interpolate:
  case LockOffsetAndConsumeAnimation:
  case LockOffsetIncreaseAndConsumeAnimation:
    bVar31 = true;
    break;
  default:
    bVar31 = false;
  }
  switch(EVar34) {
  case Accumulate:
  case Interpolate:
  case LockOffsetAndConsumeAnimation:
  case LockOffsetIncreaseAndConsumeAnimation:
    bVar25 = true;
    break;
  default:
    bVar25 = false;
  }
  local_8f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_8f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_8f8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_8f8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_8f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_8f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_1582 = EVar34;
  if (local_1588 == false) {
    pTVar45 = FAnimNode_OffsetRootBone::GetTranslationDelta((FAnimNode_OffsetRootBone *)this);
    this_01 = FAnimNode_OffsetRootBone::GetRotationDelta((FAnimNode_OffsetRootBone *)this);
    pTVar47 = UE::Math::TRotator<double>::Quaternion(this_01,&local_9b8);
    local_8f8.Rotation.XY.m128d_f64[0] = pTVar47->X;
    local_8f8.Rotation.XY.m128d_f64[1] = pTVar47->Y;
    local_8f8.Rotation.ZW.m128d_f64[0] = pTVar47->Z;
    local_8f8.Rotation.ZW.m128d_f64[1] = pTVar47->W;
    adVar153 = *(double (*) [2])&pTVar45->field0_0x0;
    local_8f8.Translation.ZW.m128d_f64[1] = 0.0;
    local_8f8.Translation.ZW.m128d_f64[0] = (pTVar45->field0_0x0)._s_0.Z;
    local_8f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_8f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_8f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_8f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_bd8 = local_8f8.Rotation.XY.m128d_f64[0];
    dStack_bd0 = local_8f8.Rotation.XY.m128d_f64[1];
    local_bc8 = local_8f8.Rotation.ZW.m128d_f64[0];
    dStack_bc0 = local_8f8.Rotation.ZW.m128d_f64[1];
    local_8f8.Translation.XY.m128d_f64 = adVar153;
  }
  else {
    local_1588 = (bool)(**(code **)((longlong)*pIVar43 + 0x20))
                                 (pIVar43,&local_1560->CustomAttributes,&local_8f8);
  }
  dVar94 = local_8f8.Rotation.XY.m128d_f64[0] * local_8f8.Rotation.XY.m128d_f64[0] +
           local_8f8.Rotation.ZW.m128d_f64[0] * local_8f8.Rotation.ZW.m128d_f64[0];
  dVar117 = local_8f8.Rotation.XY.m128d_f64[1] * local_8f8.Rotation.XY.m128d_f64[1] +
            local_8f8.Rotation.ZW.m128d_f64[1] * local_8f8.Rotation.ZW.m128d_f64[1];
  auVar119._8_4_ = SUB84(dVar117,0);
  auVar119._0_8_ = dVar94;
  auVar119._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
  auVar64._0_8_ = auVar119._8_8_ + dVar94;
  auVar64._8_8_ = dVar94 + dVar117;
  auVar119 = sqrtpd((undefined1  [16])adVar153,auVar64);
  uVar56 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar64._0_8_);
  uVar58 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar64._8_8_);
  uVar57 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar64._0_8_);
  uVar59 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar64._8_8_);
  auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
  auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
  auVar97._0_8_ = (ulonglong)(auVar96._0_8_ * local_8f8.Rotation.XY.m128d_f64[0]) & uVar56;
  uVar2 = uVar58 & (ulonglong)(auVar96._8_8_ * local_8f8.Rotation.XY.m128d_f64[1]);
  auVar97._8_4_ = (undefined4)uVar2;
  auVar97._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar128._0_4_ = ~(uint)uVar56 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar128._4_4_ = ~(uint)(uVar56 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
  ;
  auVar128._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar128._12_4_ =
       ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar65._0_8_ = (ulonglong)(auVar119._0_8_ * local_8f8.Rotation.ZW.m128d_f64[0]) & uVar57;
  uVar2 = uVar59 & (ulonglong)(auVar119._8_8_ * local_8f8.Rotation.ZW.m128d_f64[1]);
  auVar65._8_4_ = (undefined4)uVar2;
  auVar65._12_4_ = (undefined4)(uVar2 >> 0x20);
  local_8f8.Rotation.XY.m128d_f64 = (double  [2])(auVar97 | auVar128);
  auVar137._0_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar137._4_4_ = ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
  ;
  auVar137._8_4_ = ~(uint)uVar59 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar137._12_4_ =
       ~(uint)(uVar59 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_8f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar65 | auVar137);
  fVar60 = FAnimNode_OffsetRootBone::GetMaxTranslationError((FAnimNode_OffsetRootBone *)this);
  bVar26 = false;
  EVar35 = FAnimNode_OffsetRootBone::GetCollisionTestingMode((FAnimNode_OffsetRootBone *)this);
  dVar117 = _UNK_15061cbc8;
  dVar94 = ___xmm_3ff00000000000000000000000000000;
  dVar158 = __real_3e45798ee0000000;
  dVar118 = __real_3ff0000000000000;
  if ((EVar35 != Disabled) && (0.0 < fVar60)) {
    local_1388.field1_0x4.Box.HalfExtentX =
         FAnimNode_OffsetRootBone::GetCollisionTestShapeRadius((FAnimNode_OffsetRootBone *)this);
    dVar148 = local_8f8.Translation.XY.m128d_f64[0];
    auVar13._4_8_ = extraout_var._4_8_;
    auVar13._0_4_ = local_8f8.Translation.XY.m128d_f64[0]._4_4_;
    auVar66._0_8_ = auVar13._0_8_ << 0x20;
    auVar66._8_4_ = local_8f8.Translation.XY.m128d_f64[1]._0_4_;
    auVar66._12_4_ = local_8f8.Translation.XY.m128d_f64[1]._4_4_;
    local_1120 = 0.0;
    local_1388.ShapeType = Sphere;
    local_bf0[0] = local_8f8.Translation.XY.m128d_f64[0];
    local_bf0[1] = local_8f8.Translation.XY.m128d_f64[1];
    local_be0 = local_8f8.Translation.ZW.m128d_f64[0];
    if (SQRT(dVar148 * dVar148 + auVar66._8_8_ * auVar66._8_8_ +
             local_8f8.Translation.ZW.m128d_f64[0] * local_8f8.Translation.ZW.m128d_f64[0]) <=
        __real_3fb99999a0000000) {
      dVar118 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X;
      dVar148 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y;
      dVar168 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z;
      if (dVar158 < dVar148 * dVar148 + dVar118 * dVar118 + dVar168 * dVar168) goto LAB_14b86fba5;
      local_10d8._s_0.Z = 0.0;
    }
    else {
      local_1120 = local_8f8.Translation.ZW.m128d_f64[0];
      auVar14._4_8_ = auVar137._8_8_;
      auVar14._0_4_ = local_8f8.Translation.XY.m128d_f64[0]._4_4_;
      auVar138._0_8_ = auVar14._0_8_ << 0x20;
      auVar138._8_4_ = local_8f8.Translation.XY.m128d_f64[1]._0_4_;
      auVar138._12_4_ = local_8f8.Translation.XY.m128d_f64[1]._4_4_;
      dVar94 = auVar138._8_8_;
      local_1130[0] = local_8f8.Translation.XY.m128d_f64[0];
      local_1130[1] = local_8f8.Translation.XY.m128d_f64[1];
      local_ee8 = dVar118 / SQRT(dVar94 * dVar94 + dVar148 * dVar148 +
                                 local_8f8.Translation.ZW.m128d_f64[0] *
                                 local_8f8.Translation.ZW.m128d_f64[0]);
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X = local_ee8 * dVar148;
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y = local_ee8 * dVar94;
      (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z =
           local_ee8 * local_8f8.Translation.ZW.m128d_f64[0];
LAB_14b86fba5:
      dVar94 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.X;
      dVar117 = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Y;
      local_10d8._s_0.Z = (this->LastNonZeroRootMotionDirection).field0_0x0._s_0.Z;
    }
    local_10d8._s_0.X = dVar94;
    local_10d8._s_0.Y = dVar117;
    UE::Math::TQuat<double>::RotateVector
              (&this->SimulatedRotation,(TVector<double> *)&local_12e0._s_0,
               (TVector<double> *)&local_10d8._s_0);
    auVar119 = *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64;
    dVar94 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    local_c20 = auVar119;
    pTVar45 = FAnimNode_OffsetRootBone::GetCollisionTestShapeOffset
                        ((FAnimNode_OffsetRootBone *)this);
    auVar15._4_8_ = dVar117;
    auVar15._0_4_ = auVar119._4_4_;
    auVar129._0_8_ = auVar15._0_8_ << 0x20;
    auVar129._8_4_ = auVar119._8_4_;
    auVar129._12_4_ = auVar119._12_4_;
    local_12b0._s_0.Z = dVar94 + (pTVar45->field0_0x0)._s_0.Z;
    dVar117 = (double)fVar60;
    local_12b0._s_0.X = auVar119._0_8_ + (pTVar45->field0_0x0)._s_0.X;
    local_12b0._s_0.Y = auVar129._8_8_ + (pTVar45->field0_0x0)._s_0.Y;
    local_12c8._s_0.X = local_12e0._s_0.X * dVar117 + local_12b0._s_0.X;
    local_12c8._s_0.Y = local_12e0._s_0.Y * dVar117 + local_12b0._s_0.Y;
    local_12c8._s_0.Z = local_12e0._s_0.Z * dVar117 + local_12b0._s_0.Z;
    local_c10 = dVar94;
    FCollisionQueryParams::FCollisionQueryParams(&local_418);
    pUVar46 = FAnimInstanceProxy::GetSkelMeshComponent(this->AnimInstanceProxy);
    FCollisionQueryParams::AddIgnoredActor(&local_418,(AActor *)pUVar46->_padding_);
    EVar38 = UEngineTypes::ConvertToCollisionChannel(TraceTypeQuery1);
    memset(local_b38,0,0x100);
    uStack_13a3 = 0;
    uStack_13a1 = 0;
    local_13c0 = 0;
    uStack_13b8 = 0;
    local_13b0 = 0;
    uStack_13a4 = 0;
    local_a80.ObjectIndex = 0;
    local_a80.ObjectSerialNumber = 0;
    FStack_a78.ObjectIndex = 0;
    FStack_a78.ObjectSerialNumber = 0;
    uStack_13a8 = 0xffffffff;
    uStack_a68._0_4_ = -1;
    uStack_a68._4_1_ = Invalid;
    uStack_a68._5_3_ = 0;
    local_b38._4_4_ = 1.0;
    local_a94 = -1;
    local_a70 = (IActorInstanceManagerInterface *)0x0;
    pUVar46 = FAnimInstanceProxy::GetSkelMeshComponent(this->AnimInstanceProxy);
    this_02 = (UWorld *)pUVar46->_padding_;
    if (this_02 == (UWorld *)0x0) {
      this_02 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar46);
    }
    bVar36 = UWorld::SweepSingleByChannel
                       (this_02,(FHitResult *)local_b38,(TVector<double> *)&local_12b0._s_0,
                        (TVector<double> *)&local_12c8._s_0,&UE::Math::TQuat<double>::Identity,
                        EVar38,&local_1388,&local_418,
                        &FCollisionResponseParams::DefaultResponseParam);
    if ((bVar36) && ((float)local_b38._8_4_ < fVar60)) {
      EVar35 = FAnimNode_OffsetRootBone::GetCollisionTestingMode((FAnimNode_OffsetRootBone *)this);
      if (EVar35 == ShrinkMaxTranslation) {
        fVar60 = (float)local_b38._8_4_;
      }
      bVar26 = true;
      local_1448._s_0.X = (double)local_b38._40_8_;
      local_1448._s_0.Y = dStack_b08;
      local_1448._s_0.Z = local_b00;
      local_1528._s_0.X = local_ae0;
      local_1528._s_0.Y = dStack_ad8;
      local_1528._s_0.Z = local_ad0;
    }
    if (local_418.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_418.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_418.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_418.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  fVar154 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar61 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar63 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar177 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar178 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar179 = GlobalVectorConstants::FloatZero.m128_f32[3];
  local_898.Rotation.XY.m128d_f64[0] = (double)fVar154;
  local_898.Rotation.XY.m128d_f64[1] = (double)fVar62;
  local_898.Rotation.ZW.m128d_f64[0] = (double)fVar61;
  local_898.Rotation.ZW.m128d_f64[1] = (double)fVar176;
  local_898.Translation.XY.m128d_f64[0] = (double)fVar63;
  local_898.Translation.XY.m128d_f64[1] = (double)fVar177;
  local_898.Translation.ZW.m128d_f64[0] = (double)fVar178;
  local_898.Translation.ZW.m128d_f64[1] = (double)fVar179;
  local_898.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_898.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  auVar16._4_8_ = local_898.Translation.ZW.m128d_f64[1];
  auVar16._0_4_ = GlobalVectorConstants::Float1110.m128_f32[1];
  auVar98._0_8_ = auVar16._0_8_ << 0x20;
  auVar98._8_4_ = GlobalVectorConstants::Float1110.m128_f32[2];
  auVar98._12_4_ = GlobalVectorConstants::Float1110.m128_f32[3];
  local_898.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_898.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if (bVar31) {
    local_d28 = local_8f8.Translation.XY.m128d_f64[0];
    dStack_d20 = local_8f8.Translation.XY.m128d_f64[1];
    local_898.Translation.XY.m128d_f64[0] = local_8f8.Translation.XY.m128d_f64[0];
    local_898.Translation.XY.m128d_f64[1] = local_8f8.Translation.XY.m128d_f64[1];
    local_d18 = local_8f8.Translation.ZW.m128d_f64[0];
    local_898.Translation.ZW.m128d_f64[0] = local_8f8.Translation.ZW.m128d_f64[0];
    local_898.Translation.ZW.m128d_f64[1] = 0.0;
    dVar158 = __real_3e45798ee0000000;
    dVar167 = local_13e8;
    dVar171 = dStack_13e0;
  }
  dVar94 = auVar98._8_8_;
  if (bVar25) {
    local_898.Rotation.XY.m128d_f64[0] = local_8f8.Rotation.XY.m128d_f64[0];
    local_898.Rotation.XY.m128d_f64[1] = local_8f8.Rotation.XY.m128d_f64[1];
    local_898.Rotation.ZW.m128d_f64[0] = local_8f8.Rotation.ZW.m128d_f64[0];
    local_898.Rotation.ZW.m128d_f64[1] = local_8f8.Rotation.ZW.m128d_f64[1];
    dVar94 = local_8f8.Rotation.ZW.m128d_f64[1];
  }
  dStack_1550 = local_898.Translation.XY.m128d_f64[1];
  local_1428 = local_898.Translation.ZW.m128d_f64[0];
  dStack_1420 = local_898.Translation.ZW.m128d_f64[1];
  local_1558 = local_898.Translation.XY.m128d_f64[0];
  switch(EVar34) {
  case Accumulate:
  case Interpolate:
    break;
  default:
    dVar94 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar117 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar118 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    dVar148 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar163 = dVar163 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar143 = dVar143 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar167 = dVar167 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar171 = dVar171 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar130._8_4_ = SUB84(dVar143,0);
    auVar130._0_8_ = dVar163;
    auVar130._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    auVar139._8_4_ = SUB84(dVar167,0);
    auVar139._0_8_ = dVar167;
    auVar139._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
    auVar67._8_4_ = SUB84(dVar163,0);
    auVar67._0_8_ = dVar163;
    auVar67._12_4_ = (int)((ulonglong)dVar163 >> 0x20);
    local_e08.X = dVar167 * dVar117 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar118 * auVar130._8_8_ +
                  dVar94 * dVar171 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                  + dVar163 * dVar148 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_e08.Y = auVar139._8_8_ * dVar94 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar148 * dVar143 +
                  dVar117 * dVar171 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar67._8_8_ * dVar118 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_e08.Z = dVar167 * dVar148 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  dVar94 * auVar130._8_8_ +
                  dVar118 * dVar171 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar163 * dVar117 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_e08.W = dVar167 * dVar118 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar117 * dVar143 +
                  dVar148 * dVar171 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar163 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
    ;
    pTVar47 = UE::Math::TQuat<double>::operator*(&local_e08,&local_998,&this->SimulatedRotation);
    dVar163 = pTVar47->Y;
    (this->SimulatedRotation).X = pTVar47->X;
    (this->SimulatedRotation).Y = dVar163;
    dVar94 = pTVar47->W;
    (this->SimulatedRotation).Z = pTVar47->Z;
    (this->SimulatedRotation).W = dVar94;
    fVar154 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar63 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar177 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar178 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar179 = GlobalVectorConstants::FloatZero.m128_f32[3];
  }
  switch(EVar33) {
  case Accumulate:
  case Interpolate:
    break;
  default:
    auVar17._4_8_ = dVar94;
    auVar17._0_4_ = local_1408._4_4_;
    auVar99._0_8_ = auVar17._0_8_ << 0x20;
    auVar99._8_4_ = local_1408._8_4_;
    auVar99._12_4_ = local_1408._12_4_;
    (this->SimulatedTranslation).field0_0x0._s_0.X =
         local_1408._0_8_ + (this->SimulatedTranslation).field0_0x0._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y =
         auVar99._8_8_ + (this->SimulatedTranslation).field0_0x0._s_0.Y;
    (this->SimulatedTranslation).field0_0x0._s_0.Z =
         local_10a8 + (this->SimulatedTranslation).field0_0x0._s_0.Z;
    fVar154 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar63 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar177 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar178 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar179 = GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1428 = local_898.Translation.ZW.m128d_f64[0];
    dStack_1420 = local_898.Translation.ZW.m128d_f64[1];
    dStack_1550 = local_898.Translation.XY.m128d_f64[1];
    local_1558 = local_898.Translation.XY.m128d_f64[0];
  }
  if (EVar33 == LockOffsetIncreaseAndConsumeAnimation) {
    local_1298._s_0.Z = (this->SimulatedTranslation).field0_0x0._s_0.Z - local_1578._s_0.Z;
    local_1298._s_0.Y = (this->SimulatedTranslation).field0_0x0._s_0.Y - local_1578._s_0.Y;
    local_1298._s_0.X = (this->SimulatedTranslation).field0_0x0._s_0.X - local_1578._s_0.X;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_1298._s_0,(TVector<double> *)&local_13d8._s_0,dVar158,
               &UE::Math::TVector<double>::ZeroVector);
    dVar163 = (this->SimulatedRotation).Y;
    dVar143 = (this->SimulatedRotation).Z;
    dVar94 = (this->SimulatedRotation).X;
    dVar117 = (this->SimulatedRotation).W;
    uVar174 = (uint)__xmm_80000000000000008000000000000000;
    uVar172 = SUB84(dVar163,0) ^ uVar174;
    uVar175 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar173 = (uint)((ulonglong)dVar163 >> 0x20) ^ uVar175;
    dVar118 = (double)CONCAT44((uint)((ulonglong)dVar143 >> 0x20) ^ uVar175,
                               SUB84(dVar143,0) ^ uVar174);
    uVar174 = SUB84(dVar94,0) ^ uVar174;
    uVar175 = (uint)((ulonglong)dVar94 >> 0x20) ^ uVar175;
    dVar94 = (double)CONCAT44(uVar173,uVar172) * local_13d8._s_0.Z - dVar118 * local_13d8._s_0.Y;
    dVar94 = dVar94 + dVar94;
    dVar163 = dVar118 * local_13d8._s_0.X - (double)CONCAT44(uVar175,uVar174) * local_13d8._s_0.Z;
    dVar143 = (double)CONCAT44(uVar175,uVar174) * local_13d8._s_0.Y -
              (double)CONCAT44(uVar173,uVar172) * local_13d8._s_0.X;
    dVar163 = dVar163 + dVar163;
    dVar143 = dVar143 + dVar143;
    local_1280._s_0.X =
         (dVar143 * (double)CONCAT44(uVar173,uVar172) - dVar163 * dVar118) +
         dVar117 * dVar94 + local_13d8._s_0.X;
    uVar127 = 0;
    uVar142 = 0;
    local_1280._s_0.Y =
         (dVar94 * dVar118 - dVar143 * (double)CONCAT44(uVar175,uVar174)) +
         dVar117 * dVar163 + local_13d8._s_0.Y;
    local_1280._s_0.Z =
         (dVar163 * (double)CONCAT44(uVar175,uVar174) - dVar94 * (double)CONCAT44(uVar173,uVar172))
         + dVar117 * dVar143 + local_13d8._s_0.Z;
    pTVar45 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_1280._s_0,&local_a20,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    local_d10._8_8_ = dStack_1550;
    local_d10._0_8_ = local_1558;
    local_13d8._0_16_ = *(undefined1 (*) [16])&pTVar45->field0_0x0;
    local_13d8._s_0.Z = (pTVar45->field0_0x0)._s_0.Z;
    auVar18._4_8_ = uVar142;
    auVar18._0_4_ = local_1558._4_4_;
    auVar140._0_8_ = auVar18._0_8_ << 0x20;
    auVar140._8_4_ = SUB84(dStack_1550,0);
    auVar140._12_4_ = (int)((ulonglong)dStack_1550 >> 0x20);
    auVar19._4_8_ = uVar127;
    auVar19._0_4_ = local_13d8._4_4_;
    auVar120._0_8_ = auVar19._0_8_ << 0x20;
    auVar120._8_4_ = local_13d8._8_4_;
    auVar120._12_4_ = local_13d8._12_4_;
    local_d00 = local_1428;
    dStack_cf0 = auVar140._8_8_ * auVar120._8_8_ + local_1558 * local_13d8._0_8_ +
                 local_1428 * local_13d8._s_0.Z;
    local_cf8 = dStack_cf0 * local_13d8._0_8_;
    local_ce8 = dStack_cf0 * local_13d8._s_0.Z;
    dStack_cf0 = dStack_cf0 * auVar120._8_8_;
    local_898.Translation.ZW.m128d_f64[1] = 0.0;
    local_898.Translation.XY.m128d_f64[0] = local_cf8;
    local_898.Translation.XY.m128d_f64[1] = dStack_cf0;
    local_898.Translation.ZW.m128d_f64[0] = local_ce8;
  }
  if (local_1582 == LockOffsetIncreaseAndConsumeAnimation) {
    auVar119 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar118 = auVar119._0_8_;
    auVar96 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    dVar171 = auVar96._0_8_;
    dVar94 = (this->SimulatedRotation).Z *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar117 = (this->SimulatedRotation).W *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar163 = (this->SimulatedRotation).X *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar143 = (this->SimulatedRotation).Y *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar167 = auVar119._8_8_;
    auVar131._8_4_ = auVar119._0_4_;
    auVar131._0_8_ = dVar118;
    auVar131._12_4_ = auVar119._4_4_;
    dVar158 = auVar96._8_8_;
    auVar68._8_4_ = auVar96._8_4_;
    auVar68._0_8_ = dVar158;
    auVar68._12_4_ = auVar96._12_4_;
    auVar100._8_4_ = auVar119._8_4_;
    auVar100._0_8_ = dVar167;
    auVar100._12_4_ = auVar119._12_4_;
    auVar149._8_4_ = SUB84(dVar117,0);
    auVar149._0_8_ = dVar94;
    auVar149._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
    auVar121._8_4_ = SUB84(dVar143,0);
    auVar121._0_8_ = dVar163;
    auVar121._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    auVar69._8_4_ = auVar96._0_4_;
    auVar69._0_8_ = dVar171;
    auVar69._12_4_ = auVar96._4_4_;
    local_dc8.X = dVar118 * auVar149._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar158 * dVar163 +
                  dVar167 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                  + dVar171 * auVar121._8_8_ *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_dc8.Y = auVar131._8_8_ * dVar94 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  auVar68._8_8_ * dVar143 +
                  auVar100._8_8_ * dVar117 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar69._8_8_ * dVar163 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_dc8.Z = dVar118 * auVar121._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar158 * dVar94
                  + dVar167 * dVar163 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar171 * auVar149._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_dc8.W = dVar118 * dVar163 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar158 * dVar117 +
                  dVar167 * dVar143 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar171 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
    ;
    UE::Math::TQuat<double>::ToAxisAndAngle
              (&local_dc8,(TVector<double> *)&local_13a0._s_0,&local_1544);
    local_da8.X = local_898.Rotation.XY.m128d_f64[0];
    local_da8.Y = local_898.Rotation.XY.m128d_f64[1];
    local_da8.Z = local_898.Rotation.ZW.m128d_f64[0];
    local_da8.W = local_898.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::GetTwistAngle(&local_da8,(TVector<double> *)&local_13a0._s_0);
    __libm_sse2_sincos_();
    fVar154 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar61 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar176 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar63 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar177 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar178 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar179 = GlobalVectorConstants::FloatZero.m128_f32[3];
    local_898.Rotation.XY.m128d_f64[0] = local_13a0._s_0.X * extraout_XMM0_Qa;
    local_898.Rotation.XY.m128d_f64[1] = local_13a0._s_0.Y * extraout_XMM0_Qa;
    local_898.Rotation.ZW.m128d_f64[0] = local_13a0._s_0.Z * extraout_XMM0_Qa;
    local_898.Rotation.ZW.m128d_f64[1] = extraout_XMM0_Qb_01;
  }
  local_838.Rotation.XY.m128d_f64[0] = (this->SimulatedRotation).X;
  local_838.Rotation.XY.m128d_f64[1] = (this->SimulatedRotation).Y;
  local_838.Rotation.ZW.m128d_f64[0] = (this->SimulatedRotation).Z;
  local_838.Rotation.ZW.m128d_f64[1] = (this->SimulatedRotation).W;
  local_838.Translation.XY.m128d_f64 = *(double (*) [2])&(this->SimulatedTranslation).field0_0x0;
  local_838.Translation.ZW.m128d_f64[0] = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  local_838.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_838.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_6b8.Rotation.XY.m128d_f64[0] = (double)fVar154;
  local_6b8.Rotation.XY.m128d_f64[1] = (double)fVar62;
  local_838.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_838.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_6b8.Translation.XY.m128d_f64[0] = (double)fVar63;
  local_6b8.Translation.XY.m128d_f64[1] = (double)fVar177;
  local_6b8.Rotation.ZW.m128d_f64[0] = (double)fVar61;
  local_6b8.Rotation.ZW.m128d_f64[1] = (double)fVar176;
  local_6b8.Translation.ZW.m128d_f64[0] = (double)fVar178;
  local_6b8.Translation.ZW.m128d_f64[1] = (double)fVar179;
  local_6b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_6b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_6b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_6b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_838.Translation.ZW.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::Multiply(&local_6b8,&local_898,&local_838);
  adVar157[1] = local_6b8.Translation.XY.m128d_f64[1];
  adVar157[0] = local_6b8.Translation.XY.m128d_f64[0];
  *(double (*) [2])&(this->SimulatedTranslation).field0_0x0 = adVar157;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = local_6b8.Translation.ZW.m128d_f64[0];
  local_838.Rotation.XY.m128d_f64[0] = local_6b8.Rotation.XY.m128d_f64[0];
  local_838.Rotation.XY.m128d_f64[1] = local_6b8.Rotation.XY.m128d_f64[1];
  local_838.Rotation.ZW.m128d_f64[0] = local_6b8.Rotation.ZW.m128d_f64[0];
  local_838.Rotation.ZW.m128d_f64[1] = local_6b8.Rotation.ZW.m128d_f64[1];
  local_838.Translation.ZW.m128d_f64[0] = local_6b8.Translation.ZW.m128d_f64[0];
  local_838.Translation.ZW.m128d_f64[1] = local_6b8.Translation.ZW.m128d_f64[1];
  local_838.Scale3D.XY.m128d_f64[0] = local_6b8.Scale3D.XY.m128d_f64[0];
  local_838.Scale3D.XY.m128d_f64[1] = local_6b8.Scale3D.XY.m128d_f64[1];
  local_838.Scale3D.ZW.m128d_f64[0] = local_6b8.Scale3D.ZW.m128d_f64[0];
  local_838.Scale3D.ZW.m128d_f64[1] = local_6b8.Scale3D.ZW.m128d_f64[1];
  local_cd0 = local_6b8.Translation.ZW.m128d_f64[0];
  local_10b8 = local_6b8.Rotation.XY.m128d_f64[0];
  dStack_10b0 = local_6b8.Rotation.XY.m128d_f64[1];
  (this->SimulatedRotation).X = local_6b8.Rotation.XY.m128d_f64[0];
  (this->SimulatedRotation).Y = local_6b8.Rotation.XY.m128d_f64[1];
  (this->SimulatedRotation).Z = local_6b8.Rotation.ZW.m128d_f64[0];
  (this->SimulatedRotation).W = local_6b8.Rotation.ZW.m128d_f64[1];
  local_ce0 = adVar157;
  local_838.Translation.XY.m128d_f64 = adVar157;
  bVar31 = FAnimNode_OffsetRootBone::GetOnGround((FAnimNode_OffsetRootBone *)this);
  if (bVar31) {
    pTVar45 = FAnimNode_OffsetRootBone::GetGroundNormal((FAnimNode_OffsetRootBone *)this);
    dVar163 = (this->SimulatedTranslation).field0_0x0._s_0.X;
    dVar143 = (this->SimulatedTranslation).field0_0x0._s_0.Y;
    dVar94 = (this->SimulatedTranslation).field0_0x0._s_0.Z;
    dVar117 = (pTVar45->field0_0x0)._s_0.Y;
    adVar157[1] = 0.0;
    adVar157[0] = dVar117;
    dVar118 = (pTVar45->field0_0x0)._s_0.Z;
    dVar167 = (dVar163 - local_1578._s_0.X) * (pTVar45->field0_0x0)._s_0.X +
              (dVar143 - local_1578._s_0.Y) * dVar117 + (dVar94 - local_1578._s_0.Z) * dVar118;
    (this->SimulatedTranslation).field0_0x0._s_0.X =
         dVar163 - dVar167 * (pTVar45->field0_0x0)._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar143 - dVar167 * dVar117;
    (this->SimulatedTranslation).field0_0x0._s_0.Z = dVar94 - dVar167 * dVar118;
  }
  pTVar28 = DS_CVarAnimNodeOffsetRootBoneModifyBone.Ref;
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14b87073c:
    lVar48 = 0;
  }
  else {
    bVar31 = IsInGameThread();
    if (bVar31) goto LAB_14b87073c;
    lVar48 = 4;
  }
  local_1558._0_4_ = *(uint *)((longlong)pTVar28->ShadowedValue + lVar48);
  EVar33 = FAnimNode_OffsetRootBone::GetTranslationMode((FAnimNode_OffsetRootBone *)this);
  fVar62 = __real_3e83b5ca;
  fVar63 = __real_3f317218;
  fVar154 = __real_322bcc77;
  if ((EVar33 == Release) ||
     (EVar33 = FAnimNode_OffsetRootBone::GetTranslationMode((FAnimNode_OffsetRootBone *)this),
     EVar33 == Interpolate)) {
    fVar177 = this->CachedDeltaTime;
    dVar163 = local_1578._s_0.X - (this->SimulatedTranslation).field0_0x0._s_0.X;
    dVar94 = local_1578._s_0.Y - (this->SimulatedTranslation).field0_0x0._s_0.Y;
    dVar143 = local_1578._s_0.Z - (this->SimulatedTranslation).field0_0x0._s_0.Z;
    fVar61 = FAnimNode_OffsetRootBone::GetTranslationHalflife((FAnimNode_OffsetRootBone *)this);
    if (fVar61 <= fVar177) {
      fVar61 = fVar177;
    }
    fVar154 = (fVar177 * fVar63) / (fVar61 + fVar154);
    fVar154 = __real_3f800000 -
              __real_3f800000 /
              (((fVar154 * fVar62 + __real_3ee6ad0d) * fVar154 + __real_3f80f478) * fVar154 +
              __real_3f800000);
    if (__real_3f800000 <= fVar154) {
      fVar154 = __real_3f800000;
    }
    if (fVar154 <= 0.0) {
      fVar154 = 0.0;
    }
    dVar117 = (double)fVar154;
    dVar163 = (dVar163 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) * dVar117 +
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar94 = (dVar94 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) * dVar117 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar143 = (dVar143 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar117 +
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_14c8._s_0.X = dVar163;
    local_14c8._s_0.Y = dVar94;
    local_14c8._s_0.Z = dVar143;
    bVar31 = FAnimNode_OffsetRootBone::GetClampToTranslationVelocity
                       ((FAnimNode_OffsetRootBone *)this);
    if (bVar31) {
      dVar117 = local_8f8.Translation.XY.m128d_f64[0];
      dVar118 = local_8f8.Translation.XY.m128d_f64[1];
      dVar167 = local_8f8.Translation.ZW.m128d_f64[0];
      local_cc8 = local_8f8.Translation.XY.m128d_f64[0];
      dStack_cc0 = local_8f8.Translation.XY.m128d_f64[1];
      local_1580 = FAnimNode_OffsetRootBone::GetTranslationSpeedRatio
                             ((FAnimNode_OffsetRootBone *)this);
      local_cb8 = dVar167;
      auVar70._0_8_ = SQRT(dVar117 * dVar117 + dVar118 * dVar118 + dVar167 * dVar167);
      auVar70._8_8_ = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar163 * dVar163 + dVar94 * dVar94 + dVar143 * dVar143;
      auVar119 = sqrtpd(auVar70,auVar7);
      local_1580 = local_1580 * (float)auVar70._0_8_;
      if (local_1580 < (float)auVar119._0_8_) {
        pTVar45 = UE::Math::TVector<double>::GetSafeNormal2D
                            ((TVector<double> *)&local_14c8._s_0,&local_a08,__real_3e45798ee0000000,
                             &UE::Math::TVector<double>::ZeroVector);
        dVar163 = (double)local_1580;
        dVar143 = dVar163 * (pTVar45->field0_0x0)._s_0.Z;
        dVar94 = dVar163 * (pTVar45->field0_0x0)._s_0.Y;
        dVar163 = dVar163 * (pTVar45->field0_0x0)._s_0.X;
      }
    }
    if (((bVar26) &&
        (EVar35 = FAnimNode_OffsetRootBone::GetCollisionTestingMode
                            ((FAnimNode_OffsetRootBone *)this), EVar35 == PlanarCollision)) &&
       (local_1580 = (float)(dVar94 * local_1528._s_0.Y + dVar163 * local_1528._s_0.X +
                            dVar143 * local_1528._s_0.Z), __real_38d1b717 < local_1580)) {
      fVar154 = FAnimNode_OffsetRootBone::GetCollisionTestShapeRadius
                          ((FAnimNode_OffsetRootBone *)this);
      dVar117 = (double)fVar154;
      fVar154 = (float)((((dVar117 * local_1528._s_0.Y + local_1448._s_0.Y) -
                         (this->SimulatedTranslation).field0_0x0._s_0.Y) * local_1528._s_0.Y +
                         ((dVar117 * local_1528._s_0.X + local_1448._s_0.X) -
                         (this->SimulatedTranslation).field0_0x0._s_0.X) * local_1528._s_0.X +
                        ((dVar117 * local_1528._s_0.Z + local_1448._s_0.Z) -
                        (this->SimulatedTranslation).field0_0x0._s_0.Z) * local_1528._s_0.Z) /
                       (double)local_1580);
      if ((0.0 <= fVar154) && (fVar154 < __real_3f800000)) {
        dVar117 = (double)fVar154;
        adVar157[0] = dVar117 * dVar163;
        adVar157[1] = 0.0;
        dVar167 = dVar143 - dVar143 * dVar117;
        dVar171 = dVar94 - dVar117 * dVar94;
        dVar118 = dVar171 * local_1528._s_0.Y + (dVar163 - adVar157[0]) * local_1528._s_0.X +
                  dVar167 * local_1528._s_0.Z;
        dVar163 = ((dVar163 - adVar157[0]) - dVar118) + adVar157[0];
        dVar94 = (dVar171 - dVar118) + dVar117 * dVar94;
        dVar143 = (dVar167 - dVar118) + dVar143 * dVar117;
        local_14c8._s_0.X = dVar163;
        local_14c8._s_0.Y = dVar94;
        local_14c8._s_0.Z = dVar143;
      }
    }
    dVar117 = (this->SimulatedTranslation).field0_0x0._s_0.Y;
    dVar118 = (this->SimulatedTranslation).field0_0x0._s_0.Z;
    (this->SimulatedTranslation).field0_0x0._s_0.X =
         dVar163 + (this->SimulatedTranslation).field0_0x0._s_0.X;
    (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar94 + dVar117;
    (this->SimulatedTranslation).field0_0x0._s_0.Z = dVar143 + dVar118;
    fVar63 = __real_3f317218;
  }
  EVar33 = FAnimNode_OffsetRootBone::GetRotationMode((FAnimNode_OffsetRootBone *)this);
  if ((EVar33 == Release) ||
     (EVar33 = FAnimNode_OffsetRootBone::GetRotationMode((FAnimNode_OffsetRootBone *)this),
     EVar33 == Interpolate)) {
    dVar94 = __real_3e45798ee0000000;
    auVar119 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar171 = auVar119._0_8_;
    auVar96 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    dVar148 = auVar96._0_8_;
    dVar117 = (this->SimulatedRotation).Z *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar143 = (this->SimulatedRotation).W *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar118 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
              (this->SimulatedRotation).X;
    dVar167 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              (this->SimulatedRotation).Y;
    uVar160 = SUB84(__real_3e45798ee0000000,0);
    uVar162 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    auVar144._8_4_ = SUB84(dVar143,0);
    auVar144._0_8_ = dVar117;
    auVar144._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    auVar122._8_4_ = SUB84(dVar167,0);
    auVar122._0_8_ = dVar118;
    auVar122._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
    dVar158 = auVar119._8_8_;
    dVar163 = auVar96._8_8_;
    auVar71._8_4_ = auVar96._8_4_;
    auVar71._0_8_ = dVar163;
    auVar71._12_4_ = auVar96._12_4_;
    auVar132._0_8_ = dVar163 * dVar117;
    auVar132._8_8_ = dVar163 * dVar143;
    auVar101._8_4_ = auVar119._8_4_;
    auVar101._0_8_ = dVar158;
    auVar101._12_4_ = auVar119._12_4_;
    auVar72._8_4_ = auVar96._0_4_;
    auVar72._0_8_ = dVar148;
    auVar72._12_4_ = auVar96._4_4_;
    local_ee0 = __real_3e45798ee0000000;
    dVar163 = dVar171 * auVar144._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar163 * dVar118 +
              dVar158 * dVar117 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar148 * auVar122._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar143 = dVar171 * dVar117 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar71._8_8_ * dVar167 +
              auVar101._8_8_ * dVar143 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar72._8_8_ * dVar118 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar73._8_4_ = SUB84(dVar143,0);
    auVar73._0_8_ = dVar163;
    auVar73._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    dVar168 = dVar171 * auVar122._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar132._0_8_ +
              dVar158 * dVar118 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar148 * auVar144._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar167 = dVar171 * dVar118 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              auVar132._8_8_ +
              dVar158 * dVar167 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar148 * dVar117 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar102._8_4_ = SUB84(dVar167,0);
    auVar102._0_8_ = dVar168;
    auVar102._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
    dVar117 = dVar168 * dVar168 + dVar163 * dVar163;
    dVar118 = auVar102._8_8_ * dVar167 + auVar73._8_8_ * dVar143;
    auVar74._8_4_ = SUB84(dVar118,0);
    auVar74._0_8_ = dVar117;
    auVar74._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
    auVar75._0_8_ = auVar74._8_8_ + dVar117;
    auVar75._8_8_ = dVar117 + dVar118;
    auVar119 = sqrtpd(auVar132,auVar75);
    uVar57 = -(ulonglong)(__real_3e45798ee0000000 <= auVar75._0_8_);
    uVar56 = -(ulonglong)(__real_3e45798ee0000000 <= auVar75._8_8_);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
    uVar174 = (uint)(uVar57 >> 0x20);
    uVar175 = (uint)(uVar56 >> 0x20);
    auVar103._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar103._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar103._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar103._12_4_ =
         ~uVar175 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d88._0_8_ = uVar57 & (ulonglong)(auVar96._0_8_ * dVar163);
    uVar2 = uVar56 & (ulonglong)(auVar96._8_8_ * dVar143);
    local_d88._8_4_ = (undefined4)uVar2;
    local_d88._12_4_ = (undefined4)(uVar2 >> 0x20);
    local_d88 = local_d88 | auVar103;
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
    dVar163 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    auVar123._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar123._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar123._8_4_ = ~(uint)uVar56 & SUB84(dVar163,0);
    auVar123._12_4_ = ~uVar175 & (uint)((ulonglong)dVar163 >> 0x20);
    auVar104._0_8_ = (ulonglong)(auVar119._0_8_ * dVar168) & uVar57;
    uVar56 = (ulonglong)(auVar119._8_8_ * dVar167) & uVar56;
    auVar104._8_4_ = (undefined4)uVar56;
    auVar104._12_4_ = (undefined4)(uVar56 >> 0x20);
    local_d78 = auVar123 | auVar104;
    auVar20._4_8_ = dVar163;
    auVar20._0_4_ = local_d78._4_4_;
    auVar76._0_8_ = auVar20._0_8_ << 0x20;
    auVar76._8_4_ = local_d78._8_4_;
    auVar76._12_4_ = local_d78._12_4_;
    dVar163 = local_d78._8_8_;
    if (auVar76._8_8_ < 0.0) {
      local_bb8._0_8_ = 0.0 - local_d88._0_8_;
      local_bb8._8_8_ = 0.0 - local_d88._8_8_;
      local_d78._0_8_ = 0.0 - local_d78._0_8_;
      local_d78._8_8_ = 0.0 - dVar163;
      local_d88 = local_bb8;
      local_ba8 = local_d78;
    }
    fVar154 = this->CachedDeltaTime;
    fVar62 = FAnimNode_OffsetRootBone::GetRotationHalfLife((FAnimNode_OffsetRootBone *)this);
    if (fVar62 <= fVar154) {
      fVar62 = fVar154;
    }
    fVar154 = (fVar154 * fVar63) / (fVar62 + __real_322bcc77);
    fVar154 = __real_3f800000 -
              __real_3f800000 /
              (((fVar154 * __real_3e83b5ca + __real_3ee6ad0d) * fVar154 + __real_3f80f478) * fVar154
              + __real_3f800000);
    if (__real_3f800000 <= fVar154) {
      fVar154 = __real_3f800000;
    }
    if (fVar154 <= 0.0) {
      fVar154 = 0.0;
    }
    auVar133._0_8_ = (double)fVar154;
    auVar133._8_8_ = 0;
    pTVar47 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_978,&UE::Math::TQuat<double>::Identity,(TQuat<double> *)local_d88,
                         auVar133._0_8_);
    dVar163 = pTVar47->X;
    dVar143 = pTVar47->Y;
    dVar117 = pTVar47->Z;
    dVar118 = pTVar47->W;
    local_ed8 = dVar94;
    dVar167 = dVar117 * dVar117 + dVar163 * dVar163;
    dVar171 = dVar118 * dVar118 + dVar143 * dVar143;
    auVar77._8_4_ = SUB84(dVar171,0);
    auVar77._0_8_ = dVar167;
    auVar77._12_4_ = (int)((ulonglong)dVar171 >> 0x20);
    auVar78._0_8_ = auVar77._8_8_ + dVar167;
    auVar78._8_8_ = dVar167 + dVar171;
    auVar119 = sqrtpd(auVar133,auVar78);
    uVar57 = -(ulonglong)(dVar94 <= auVar78._0_8_);
    uVar56 = -(ulonglong)(dVar94 <= auVar78._8_8_);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
    uVar174 = (uint)(uVar57 >> 0x20);
    uVar175 = (uint)(uVar56 >> 0x20);
    auVar169._0_8_ = uVar57 & (ulonglong)(auVar96._0_8_ * dVar163);
    uVar2 = uVar56 & (ulonglong)(auVar96._8_8_ * dVar143);
    auVar169._8_4_ = (undefined4)uVar2;
    auVar169._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar105._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar105._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar105._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar105._12_4_ =
         ~uVar175 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar170 = auVar169 | auVar105;
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
    auVar164._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar164._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar164._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar164._12_4_ =
         ~uVar175 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar106._0_8_ = (ulonglong)(auVar119._0_8_ * dVar117) & uVar57;
    uVar56 = (ulonglong)(auVar119._8_8_ * dVar118) & uVar56;
    auVar106._8_4_ = (undefined4)uVar56;
    auVar106._12_4_ = (undefined4)(uVar56 >> 0x20);
    auVar165 = auVar164 | auVar106;
    local_1378 = auVar170;
    local_1368 = auVar165;
    bVar31 = FAnimNode_OffsetRootBone::GetClampToRotationVelocity((FAnimNode_OffsetRootBone *)this);
    if (bVar31) {
      local_d68.X = local_8f8.Rotation.XY.m128d_f64[0];
      local_d68.Y = local_8f8.Rotation.XY.m128d_f64[1];
      local_d68.Z = local_8f8.Rotation.ZW.m128d_f64[0];
      local_d68.W = local_8f8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::ToAxisAndAngle(&local_d68,&local_9d8,&local_1540);
      fVar154 = FAnimNode_OffsetRootBone::GetRotationSpeedRatio((FAnimNode_OffsetRootBone *)this);
      UE::Math::TQuat<double>::ToAxisAndAngle
                ((TQuat<double> *)local_1378,(TVector<double> *)&local_1268._s_0,&local_153c);
      if (fVar154 * local_1540 < local_153c) {
        __libm_sse2_sincos_();
        auVar170._0_8_ = local_1268._s_0.X * extraout_XMM0_Qa_00;
        auVar165._0_8_ = local_1268._s_0.Z * extraout_XMM0_Qa_00;
        auVar170._8_8_ = local_1268._s_0.Y * extraout_XMM0_Qa_00;
        auVar165._8_8_ = extraout_XMM0_Qb_02;
        local_1378 = auVar170;
        local_1368 = auVar165;
      }
    }
    dVar143 = (this->SimulatedRotation).Z;
    dVar94 = (this->SimulatedRotation).W;
    dVar167 = auVar165._0_8_;
    dVar117 = (this->SimulatedRotation).X;
    dVar118 = (this->SimulatedRotation).Y;
    dVar158 = auVar170._0_8_;
    dVar148 = auVar170._8_8_;
    auVar145._8_4_ = auVar170._0_4_;
    auVar145._0_8_ = dVar158;
    auVar145._12_4_ = auVar170._4_4_;
    dVar171 = auVar165._8_8_;
    adVar157[1] = dVar171;
    adVar157[0] = dVar171;
    auVar79._8_4_ = auVar165._0_4_;
    auVar79._0_8_ = dVar167;
    auVar79._12_4_ = auVar165._4_4_;
    local_b98 = dVar158 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar117 * dVar171 +
                dVar143 * dVar148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                + dVar167 * dVar118 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dStack_b90 = auVar145._8_8_ * dVar143 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar118 * dVar171
                 + dVar94 * dVar148 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar79._8_8_ * dVar117 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar163 = dVar158 * dVar118 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar143 * dVar171 +
              dVar117 * dVar148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar167 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar143 = dVar158 * dVar117 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar94 * dVar171 +
              dVar118 * dVar148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar167 * dVar143 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar159 = SUB84(dVar143,0);
    uVar161 = (undefined4)((ulonglong)dVar143 >> 0x20);
    (this->SimulatedRotation).X = local_b98;
    (this->SimulatedRotation).Y = dStack_b90;
    auVar8._8_4_ = uVar159;
    auVar8._0_8_ = dVar163;
    auVar8._12_4_ = uVar161;
    (this->SimulatedRotation).Z = dVar163;
    (this->SimulatedRotation).W = (double)auVar8._8_8_;
    local_b88._8_4_ = uVar159;
    local_b88._0_8_ = dVar163;
    local_b88._12_4_ = uVar161;
  }
  else {
    uVar160 = SUB84(__real_3e45798ee0000000,0);
    uVar162 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  }
  uVar29 = local_1578._s_0.Z;
  uVar142 = local_1578._s_0.Y;
  uVar127 = local_1578._s_0.X;
  if (0.0 <= fVar60) {
    dStack_1458 = local_1578._s_0.Y - (this->SimulatedTranslation).field0_0x0._s_0.Y;
    local_1460 = local_1578._s_0.X - (this->SimulatedTranslation).field0_0x0._s_0.X;
    local_1450 = local_1578._s_0.Z - (this->SimulatedTranslation).field0_0x0._s_0.Z;
    auVar80._0_8_ = local_1460 * local_1460;
    auVar80._8_8_ = 0;
    auVar107._0_8_ =
         dStack_1458 * dStack_1458 + auVar80._0_8_ + (double)local_1450 * (double)local_1450;
    auVar107._8_8_ = 0;
    auVar119 = sqrtpd(auVar80,auVar107);
    if (fVar60 < (float)auVar119._0_8_) {
      pTVar45 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_1460,&local_9f0,(double)fVar60);
      _local_1460 = *(undefined1 (*) [16])&pTVar45->field0_0x0;
      local_1450 = (pTVar45->field0_0x0)._s_0.Z;
      auVar21._4_8_ = extraout_XMM0_Qb_03;
      auVar21._0_4_ = local_1460._4_4_;
      auVar81._0_8_ = auVar21._0_8_ << 0x20;
      auVar81._8_4_ = local_1460._8_4_;
      auVar81._12_4_ = local_1460._12_4_;
      (this->SimulatedTranslation).field0_0x0._s_0.X = (double)uVar127 - local_1460;
      (this->SimulatedTranslation).field0_0x0._s_0.Y = (double)uVar142 - auVar81._8_8_;
      (this->SimulatedTranslation).field0_0x0._s_0.Z = (double)uVar29 - (double)local_1450;
    }
  }
  fVar154 = FAnimNode_OffsetRootBone::GetMaxRotationError((FAnimNode_OffsetRootBone *)this);
  fVar154 = fVar154 * __real_3c8efa35;
  pFVar52 = this;
  local_1580 = fVar154;
  fVar63 = FAnimNode_OffsetRootBone::GetMaxRotationError((FAnimNode_OffsetRootBone *)this);
  uVar161 = SUB84(pFVar52,0);
  uVar159 = extraout_EAX;
  if (0.0 <= fVar63) {
    local_d48.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_d48.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_d48.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_d48.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::operator*
              (&local_d48,(TQuat<double> *)local_14f8,&this->SimulatedRotation);
    dVar163 = (double)local_14e8._0_8_ * (double)local_14e8._0_8_ +
              (double)local_14f8._0_8_ * (double)local_14f8._0_8_;
    dVar143 = (double)local_14e8._8_8_ * (double)local_14e8._8_8_ +
              (double)local_14f8._8_8_ * (double)local_14f8._8_8_;
    local_10e8 = CONCAT44(uVar162,uVar160);
    auVar82._8_4_ = SUB84(dVar143,0);
    auVar82._0_8_ = dVar163;
    auVar82._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    auVar83._0_8_ = auVar82._8_8_ + dVar163;
    auVar83._8_8_ = dVar163 + dVar143;
    auVar119 = sqrtpd((undefined1  [16])adVar157,auVar83);
    uVar57 = -(ulonglong)((double)CONCAT44(uVar162,uVar160) <= auVar83._0_8_);
    uVar56 = -(ulonglong)((double)CONCAT44(uVar162,uVar160) <= auVar83._8_8_);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
    uVar174 = (uint)(uVar57 >> 0x20);
    uVar175 = (uint)(uVar56 >> 0x20);
    auVar150._0_8_ = uVar57 & (ulonglong)(auVar96._0_8_ * (double)local_14f8._0_8_);
    uVar2 = uVar56 & (ulonglong)(auVar96._8_8_ * (double)local_14f8._8_8_);
    auVar150._8_4_ = (undefined4)uVar2;
    auVar150._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar108._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar108._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar108._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar108._12_4_ =
         ~uVar175 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_14f8 = auVar150 | auVar108;
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
    dVar163 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    auVar124._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar124._4_4_ =
         ~uVar174 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar124._8_4_ = ~(uint)uVar56 & SUB84(dVar163,0);
    auVar124._12_4_ = ~uVar175 & (uint)((ulonglong)dVar163 >> 0x20);
    auVar109._0_8_ = (ulonglong)(auVar119._0_8_ * (double)local_14e8._0_8_) & uVar57;
    uVar56 = (ulonglong)(auVar119._8_8_ * (double)local_14e8._8_8_) & uVar56;
    auVar109._8_4_ = (undefined4)uVar56;
    auVar109._12_4_ = (undefined4)(uVar56 >> 0x20);
    local_14e8 = auVar124 | auVar109;
    auVar22._4_8_ = dVar163;
    auVar22._0_4_ = local_14e8._4_4_;
    auVar84._0_8_ = auVar22._0_8_ << 0x20;
    auVar84._8_4_ = local_14e8._8_4_;
    auVar84._12_4_ = local_14e8._12_4_;
    dVar163 = local_14e8._8_8_;
    dVar143 = local_14f8._8_8_;
    if (auVar84._8_8_ < 0.0) {
      local_14f8._0_8_ = 0.0 - local_14f8._0_8_;
      local_14f8._8_8_ = 0.0 - dVar143;
      local_14e8._0_8_ = 0.0 - local_14e8._0_8_;
      local_14e8._8_8_ = 0.0 - dVar163;
      local_b78 = local_14f8;
      local_b68 = local_14e8;
    }
    pTVar47 = (TQuat<double> *)local_14f8;
    UE::Math::TQuat<double>::ToAxisAndAngle(pTVar47,(TVector<double> *)&local_11a8._s_0,local_1538);
    uVar161 = SUB84(pTVar47,0);
    uVar159 = extraout_EAX_00;
    if (fVar154 < (float)((uint)local_1538[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      __libm_sse2_sincos_();
      local_14f8._8_8_ = extraout_XMM0._0_8_;
      local_14f8._0_8_ = local_11a8._s_0.X * (double)local_14f8._8_8_;
      local_14e8._0_8_ = local_11a8._s_0.Z * (double)local_14f8._8_8_;
      local_14f8._8_8_ = local_11a8._s_0.Y * (double)local_14f8._8_8_;
      local_14e8._8_8_ = extraout_XMM0._8_8_;
      auVar151._8_4_ = extraout_XMM0._8_4_;
      auVar151._0_8_ = local_14e8._0_8_;
      auVar151._12_4_ = extraout_XMM0._12_4_;
      auVar119 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
      dVar148 = auVar119._0_8_;
      dVar171 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
      dVar158 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
      dVar168 = auVar119._8_8_;
      auVar141._8_8_ = dVar171;
      auVar141._0_8_ = dVar158;
      auVar134._8_4_ = auVar119._0_4_;
      auVar134._0_8_ = dVar168;
      auVar134._12_4_ = auVar119._4_4_;
      dVar163 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar117 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar143 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar118 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      auVar85._8_4_ = (int)local_14e8._0_8_;
      auVar85._0_8_ = local_14e8._0_8_;
      auVar85._12_4_ = (int)((ulonglong)local_14e8._0_8_ >> 0x20);
      local_14a8 = (double)CONCAT44(uVar162,uVar160);
      local_b58 = dVar168 * (double)local_14f8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar171 * auVar151._8_8_ +
                  dVar148 * (double)local_14f8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  (double)local_14e8._0_8_ * dVar158 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dStack_b50 = auVar134._8_8_ * (double)local_14f8._0_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   dVar158 * (double)local_14e8._8_8_ +
                   dVar168 * (double)local_14f8._8_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar85._8_8_ * dVar171 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar94 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar167 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      (this->SimulatedRotation).X = local_b58;
      (this->SimulatedRotation).Y = dStack_b50;
      local_b48 = (double)local_14f8._0_8_ * dVar158 * dVar163 + dVar148 * auVar151._8_8_ +
                  dVar171 * (double)local_14f8._8_8_ * dVar143 +
                  (double)local_14e8._0_8_ * dVar168 * dVar94;
      dStack_b40 = (double)local_14f8._0_8_ * dVar171 * dVar117 + dVar168 * (double)local_14e8._8_8_
                   + dVar158 * (double)local_14f8._8_8_ * dVar118 +
                   (double)local_14e8._0_8_ * dVar148 * dVar167;
      (this->SimulatedRotation).Z = local_b48;
      (this->SimulatedRotation).W = dStack_b40;
      auVar155._8_4_ = SUB84(dStack_b40,0);
      auVar155._0_8_ = local_b48;
      uVar160 = (undefined4)((ulonglong)dStack_b40 >> 0x20);
      auVar155._12_4_ = uVar160;
      auVar110._8_4_ = SUB84(dStack_b40,0);
      auVar110._0_8_ = local_b48;
      auVar110._12_4_ = uVar160;
      dVar163 = (this->SimulatedRotation).X;
      dVar143 = (this->SimulatedRotation).Y;
      dVar94 = local_b48 * local_b48 + dVar163 * dVar163;
      dVar117 = auVar110._8_8_ * auVar155._8_8_ + dVar143 * dVar143;
      auVar86._8_4_ = SUB84(dVar117,0);
      auVar86._0_8_ = dVar94;
      auVar86._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
      auVar87._0_8_ = auVar86._8_8_ + dVar94;
      auVar87._8_8_ = dVar94 + dVar117;
      auVar119 = sqrtpd(auVar141,auVar87);
      uVar57 = -(ulonglong)(local_14a8 <= auVar87._0_8_);
      uVar56 = -(ulonglong)(local_14a8 <= auVar87._8_8_);
      auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
      uVar174 = (uint)(uVar57 >> 0x20);
      uVar175 = (uint)(uVar56 >> 0x20);
      auVar146._0_8_ = uVar57 & (ulonglong)(auVar96._0_8_ * dVar163);
      uVar2 = uVar56 & (ulonglong)(auVar96._8_8_ * dVar143);
      auVar146._8_4_ = (undefined4)uVar2;
      auVar146._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar111._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
      ;
      auVar111._4_4_ =
           ~uVar174 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
      auVar111._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
      ;
      auVar111._12_4_ =
           ~uVar175 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
      auVar135._0_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      auVar135._4_4_ =
           ~uVar174 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
      auVar135._8_4_ = ~(uint)uVar56 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      auVar135._12_4_ =
           ~uVar175 &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      (this->SimulatedRotation).X = (double)SUB168(auVar146 | auVar111,0);
      (this->SimulatedRotation).Y = (double)SUB168(auVar146 | auVar111,8);
      auVar112._0_8_ = (ulonglong)(auVar119._0_8_ * local_b48) & uVar57;
      uVar56 = (ulonglong)(auVar119._8_8_ * auVar155._8_8_) & uVar56;
      auVar112._8_4_ = (undefined4)uVar56;
      auVar112._12_4_ = (undefined4)(uVar56 >> 0x20);
      (this->SimulatedRotation).Z = (double)SUB168(auVar135 | auVar112,0);
      (this->SimulatedRotation).W = (double)SUB168(auVar135 | auVar112,8);
      uVar159 = extraout_EAX_01;
    }
  }
  local_838.Translation.XY.m128d_f64 = *(double (*) [2])&(this->SimulatedTranslation).field0_0x0;
  local_838.Translation.ZW.m128d_f64[0] = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  local_838.Translation.ZW.m128d_f64[1] = 0.0;
  local_838.Rotation.XY.m128d_f64[0] = (this->SimulatedRotation).X;
  local_838.Rotation.XY.m128d_f64[1] = (this->SimulatedRotation).Y;
  local_838.Rotation.ZW.m128d_f64[0] = (this->SimulatedRotation).Z;
  local_838.Rotation.ZW.m128d_f64[1] = (this->SimulatedRotation).W;
  local_7d8.Rotation.ZW.m128d_f64[0] = local_718.Rotation.ZW.m128d_f64[0];
  local_7d8.Rotation.ZW.m128d_f64[1] = local_718.Rotation.ZW.m128d_f64[1];
  local_7d8.Translation.ZW.m128d_f64[0] = local_718.Translation.ZW.m128d_f64[0];
  local_7d8.Translation.ZW.m128d_f64[1] = local_718.Translation.ZW.m128d_f64[1];
  local_7d8.Rotation.XY.m128d_f64[0] = local_718.Rotation.XY.m128d_f64[0];
  local_7d8.Rotation.XY.m128d_f64[1] = local_718.Rotation.XY.m128d_f64[1];
  local_7d8.Scale3D.ZW.m128d_f64[0] = local_718.Scale3D.ZW.m128d_f64[0];
  local_7d8.Scale3D.ZW.m128d_f64[1] = local_718.Scale3D.ZW.m128d_f64[1];
  local_7d8.Translation.XY.m128d_f64[0] = local_718.Translation.XY.m128d_f64[0];
  local_7d8.Translation.XY.m128d_f64[1] = local_718.Translation.XY.m128d_f64[1];
  local_7d8.Scale3D.XY.m128d_f64[0] = local_718.Scale3D.XY.m128d_f64[0];
  local_7d8.Scale3D.XY.m128d_f64[1] = local_718.Scale3D.XY.m128d_f64[1];
  auVar125._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(this->ComponentTransform).Scale3D.ZW.m128d_f64);
  auVar125._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentTransform).Scale3D.ZW.m128d_f64 + 1);
  auVar125._12_4_ =
       _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 0xc);
  auVar147._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(this->ComponentTransform).Scale3D.XY.m128d_f64);
  auVar147._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentTransform).Scale3D.XY.m128d_f64 + 1);
  auVar147._12_4_ =
       _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 0xc);
  auVar113._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar125._8_8_);
  auVar113._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar125._0_8_);
  uVar174 = movmskpd(uVar161,auVar113);
  auVar88._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar147._8_8_);
  auVar88._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar147._0_8_);
  iVar39 = movmskpd(uVar159,auVar88);
  if ((uVar174 & 0x3fffffff) == 0 && iVar39 == 0) {
    local_4d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_4d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_4d8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_4d8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_4d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_4d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&this->ComponentTransform,&local_4d8);
  }
  local_5f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_5f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_5f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_5f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_5f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_5f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_5f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_5f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_5f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_5f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_5f8,&local_838,&local_4d8);
  dVar94 = local_718.Scale3D.ZW.m128d_f64[0];
  pFVar30 = local_1560;
  dVar143 = local_7d8.Translation.ZW.m128d_f64[0] + local_5f8.Translation.ZW.m128d_f64[0];
  uVar159 = SUB84(local_7d8.Translation.ZW.m128d_f64[1] + local_5f8.Translation.ZW.m128d_f64[1],0);
  uVar161 = (undefined4)
            ((ulonglong)
             (local_7d8.Translation.ZW.m128d_f64[1] + local_5f8.Translation.ZW.m128d_f64[1]) >> 0x20
            );
  auVar166._8_4_ = SUB84(local_5f8.Rotation.XY.m128d_f64[0],0);
  auVar166._0_8_ = local_5f8.Rotation.XY.m128d_f64[0];
  auVar166._12_4_ = (int)((ulonglong)local_5f8.Rotation.XY.m128d_f64[0] >> 0x20);
  auVar89._8_4_ = SUB84(local_5f8.Rotation.ZW.m128d_f64[1],0);
  auVar89._0_8_ = local_5f8.Rotation.ZW.m128d_f64[1];
  auVar89._12_4_ = (int)((ulonglong)local_5f8.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar114._8_4_ = SUB84(local_5f8.Rotation.XY.m128d_f64[1],0);
  auVar114._0_8_ = local_5f8.Rotation.XY.m128d_f64[1];
  auVar114._12_4_ = (int)((ulonglong)local_5f8.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar90._8_4_ = SUB84(local_5f8.Rotation.ZW.m128d_f64[0],0);
  auVar90._0_8_ = local_5f8.Rotation.ZW.m128d_f64[0];
  auVar90._12_4_ = (int)((ulonglong)local_5f8.Rotation.ZW.m128d_f64[0] >> 0x20);
  local_7d8.Translation.ZW.m128d_f64[1]._0_4_ = uVar159;
  local_7d8.Translation.ZW.m128d_f64[0] = dVar143;
  local_7d8.Translation.ZW.m128d_f64[1]._4_4_ = uVar161;
  dVar117 = local_5f8.Rotation.XY.m128d_f64[0] * local_7d8.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            local_5f8.Rotation.ZW.m128d_f64[1] * local_7d8.Rotation.XY.m128d_f64[0] +
            local_5f8.Rotation.XY.m128d_f64[1] * local_7d8.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            local_5f8.Rotation.ZW.m128d_f64[0] * local_7d8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar118 = auVar166._8_8_ * local_7d8.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar89._8_8_ * local_7d8.Rotation.XY.m128d_f64[1] +
            auVar114._8_8_ * local_7d8.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar90._8_8_ * local_7d8.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_ca0 = local_718.Scale3D.ZW.m128d_f64[0];
  local_7d8.Scale3D.ZW.m128d_f64[0] = local_718.Scale3D.ZW.m128d_f64[0];
  local_7d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar91._8_4_ = SUB84(dVar118,0);
  auVar91._0_8_ = dVar117;
  auVar91._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
  local_7d8.Scale3D.XY.m128d_f64[0] = local_718.Scale3D.XY.m128d_f64[0];
  local_7d8.Scale3D.XY.m128d_f64[1] = local_718.Scale3D.XY.m128d_f64[1];
  local_13e8 = local_718.Scale3D.XY.m128d_f64[0];
  dStack_13e0 = local_718.Scale3D.XY.m128d_f64[1];
  dVar167 = local_5f8.Rotation.XY.m128d_f64[0] * local_7d8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            local_5f8.Rotation.ZW.m128d_f64[1] * local_7d8.Rotation.ZW.m128d_f64[0] +
            local_5f8.Rotation.XY.m128d_f64[1] * local_7d8.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            local_5f8.Rotation.ZW.m128d_f64[0] * local_7d8.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar171 = local_5f8.Rotation.XY.m128d_f64[0] * local_7d8.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            local_5f8.Rotation.ZW.m128d_f64[1] * local_7d8.Rotation.ZW.m128d_f64[1] +
            local_5f8.Rotation.XY.m128d_f64[1] * local_7d8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_5f8.Rotation.ZW.m128d_f64[0] * local_7d8.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar163 = local_7d8.Translation.XY.m128d_f64[0] + local_5f8.Translation.XY.m128d_f64[0];
  uVar160 = SUB84(local_7d8.Translation.XY.m128d_f64[1] + local_5f8.Translation.XY.m128d_f64[1],0);
  uVar162 = (undefined4)
            ((ulonglong)
             (local_7d8.Translation.XY.m128d_f64[1] + local_5f8.Translation.XY.m128d_f64[1]) >> 0x20
            );
  auVar115._8_4_ = SUB84(dVar171,0);
  auVar115._0_8_ = dVar167;
  auVar115._12_4_ = (int)((ulonglong)dVar171 >> 0x20);
  local_7d8.Translation.XY.m128d_f64[1]._0_4_ = uVar160;
  local_7d8.Translation.XY.m128d_f64[0] = dVar163;
  local_7d8.Translation.XY.m128d_f64[1]._4_4_ = uVar162;
  auVar116._0_8_ = dVar167 * dVar167 + dVar117 * dVar117;
  auVar116._8_8_ = auVar115._8_8_ * dVar171 + auVar91._8_8_ * dVar118;
  local_cb0 = local_718.Scale3D.XY.m128d_f64[0];
  dStack_ca8 = local_718.Scale3D.XY.m128d_f64[1];
  auVar92._8_4_ = SUB84(auVar116._8_8_,0);
  auVar92._0_8_ = auVar116._0_8_;
  auVar92._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
  auVar93._0_8_ = auVar92._8_8_ + auVar116._0_8_;
  auVar93._8_8_ = auVar116._0_8_ + auVar116._8_8_;
  auVar119 = sqrtpd(auVar116,auVar93);
  uVar56 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar93._0_8_);
  uVar58 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar93._8_8_);
  auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
  auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
  uVar57 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar93._0_8_);
  uVar59 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar93._8_8_);
  auVar152._0_8_ = uVar56 & (ulonglong)(auVar96._0_8_ * dVar117);
  uVar2 = uVar58 & (ulonglong)(auVar96._8_8_ * dVar118);
  auVar152._8_4_ = (undefined4)uVar2;
  auVar152._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar156._0_8_ = uVar57 & (ulonglong)(auVar119._0_8_ * dVar167);
  uVar2 = uVar59 & (ulonglong)(auVar119._8_8_ * dVar171);
  auVar156._8_4_ = (undefined4)uVar2;
  auVar156._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar126._0_4_ = ~(uint)uVar56 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar126._4_4_ = ~(uint)(uVar56 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
  ;
  auVar126._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar126._12_4_ =
       ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar136._0_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar136._4_4_ = ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
  ;
  auVar136._8_4_ = ~(uint)uVar59 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar136._12_4_ =
       ~(uint)(uVar59 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  adVar153 = (double  [2])(auVar152 | auVar126);
  adVar157 = (double  [2])(auVar156 | auVar136);
  local_7d8.Rotation.XY.m128d_f64 = adVar153;
  local_7d8.Rotation.ZW.m128d_f64 = adVar157;
  if ((*(int *)&(local_1560->Pose).field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  padVar5 = *(double (**) [2])&pFVar30->Pose;
  *padVar5 = adVar153;
  padVar5[1] = adVar157;
  adVar9[1]._0_4_ = uVar160;
  adVar9[0] = dVar163;
  adVar9[1]._4_4_ = uVar162;
  padVar5[2] = adVar9;
  adVar10[1]._0_4_ = uVar159;
  adVar10[0] = dVar143;
  adVar10[1]._4_4_ = uVar161;
  padVar5[3] = adVar10;
  padVar5[4][0] = local_13e8;
  padVar5[4][1] = dStack_13e0;
  padVar5[5][0] = dVar94;
  padVar5[5][1] = 0.0;
  fVar154 = __real_42200000;
  dVar163 = __real_4044000000000000;
  if (FVisualLogger::bIsRecording != 0) {
    local_478.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_478.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_478.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_478.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_478.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_478.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_478.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_478.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_478.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_478.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_478,&local_718,&this->ComponentTransform);
    local_658.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_658.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_658.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_658.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_658.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_658.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_658.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_658.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_658.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_658.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_658.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_658.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_658,&local_7d8,&this->ComponentTransform);
    pUVar44 = this->AnimInstanceProxy->AnimInstanceObject;
    if (0.0 <= fVar60) {
      if (FVisualLogger::bIsRecording != 0) {
        local_1250._s_0.X = local_1578._s_0.X;
        local_1250._s_0.Y = local_1578._s_0.Y;
        local_1250._s_0.Z = local_1578._s_0.Z + __real_3ff0000000000000;
        ::FName::FName(&local_14a0,L"OffsetRootBone");
        FVisualLogger::DiscLogfImpl
                  (this->AnimInstanceProxy->AnimInstanceObject,&local_14a0,Display,
                   (TVector<double> *)&local_1250._s_0,&UE::Math::TVector<double>::UpVector,
                   fVar60 + fVar154,&FColor::Red,2,false,L"");
      }
      if (bVar26) {
        if (FVisualLogger::bIsRecording == 0) goto LAB_14b871dd1;
        fVar63 = FAnimNode_OffsetRootBone::GetCollisionTestShapeRadius
                           ((FAnimNode_OffsetRootBone *)this);
        ::FName::FName(&local_1498,LogName);
        FVisualLogger::DiscLogfImpl
                  (pUVar44,&local_1498,Display,(TVector<double> *)&local_1448._s_0,
                   (TVector<double> *)&local_1528._s_0,fVar63,&FColor::Red,2,false,L"");
      }
    }
    dVar143 = __real_3ff0000000000000;
    if (FVisualLogger::bIsRecording != 0) {
      local_1238._s_0.X = local_1578._s_0.X;
      local_1238._s_0.Y = local_1578._s_0.Y;
      local_1238._s_0.Z = local_1578._s_0.Z + __real_3ff0000000000000;
      ::FName::FName(&local_1490,LogName);
      FVisualLogger::DiscLogfImpl
                (pUVar44,&local_1490,Display,(TVector<double> *)&local_1238._s_0,
                 &UE::Math::TVector<double>::UpVector,fVar154,&FColor::Blue,2,false,L"");
      dVar117 = _UNK_15061cbc8;
      dVar94 = ___xmm_3ff00000000000000000000000000000;
      if (FVisualLogger::bIsRecording != 0) {
        local_ec8.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
        local_ec8.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
        local_ec8.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
        local_ec8.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
        local_1098._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_1098._s_0.Y = _UNK_15061cbc8;
        local_1098._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_ec8,(TVector<double> *)&local_1220._s_0,
                   (TVector<double> *)&local_1098._s_0);
        local_11f0._s_0.X = local_1578._s_0.X;
        local_1208._s_0.X = local_1220._s_0.X * dVar163 + local_1578._s_0.X;
        local_11f0._s_0.Y = local_1578._s_0.Y;
        local_1208._s_0.Y = local_1220._s_0.Y * dVar163 + local_1578._s_0.Y;
        local_11f0._s_0.Z = local_1578._s_0.Z + dVar143;
        local_1208._s_0.Z = local_1220._s_0.Z * dVar163 + local_1578._s_0.Z + dVar143;
        ::FName::FName(&local_1488,LogName);
        FVisualLogger::ArrowLineLogfImpl
                  (pUVar44,&local_1488,Display,(TVector<double> *)&local_11f0._s_0,
                   (TVector<double> *)&local_1208._s_0,&FColor::Blue,0,L"");
        if (FVisualLogger::bIsRecording != 0) {
          local_c88 = local_658.Translation.ZW.m128d_f64[0];
          local_11d8._s_0.Z = local_658.Translation.ZW.m128d_f64[0] + dVar143;
          local_11d8._s_0.X = local_658.Translation.XY.m128d_f64[0];
          local_c98 = local_658.Translation.XY.m128d_f64[0];
          dStack_c90 = local_658.Translation.XY.m128d_f64[1];
          local_11d8._s_0.Y = local_658.Translation.XY.m128d_f64[1];
          ::FName::FName(&local_1480,LogName);
          FVisualLogger::DiscLogfImpl
                    (pUVar44,&local_1480,Display,(TVector<double> *)&local_11d8._s_0,
                     &UE::Math::TVector<double>::UpVector,fVar154,&FColor::Green,2,false,L"");
          dVar171 = local_658.Translation.ZW.m128d_f64[0];
          dVar167 = local_658.Translation.XY.m128d_f64[1];
          dVar118 = local_658.Translation.XY.m128d_f64[0];
          if (FVisualLogger::bIsRecording != 0) {
            local_1058 = local_658.Translation.XY.m128d_f64[0];
            dStack_1050 = local_658.Translation.XY.m128d_f64[1];
            local_1048 = local_658.Translation.ZW.m128d_f64[0];
            local_e68.X = local_658.Rotation.XY.m128d_f64[0];
            local_e68.Y = local_658.Rotation.XY.m128d_f64[1];
            local_e68.Z = local_658.Rotation.ZW.m128d_f64[0];
            local_e68.W = local_658.Rotation.ZW.m128d_f64[1];
            local_1078._s_0.Z = 0.0;
            local_1078._s_0.X = dVar94;
            local_1078._s_0.Y = dVar117;
            UE::Math::TQuat<double>::RotateVector
                      (&local_e68,(TVector<double> *)&local_11c0._s_0,
                       (TVector<double> *)&local_1078._s_0);
            local_bf8 = dVar171;
            local_1190._s_0.Z = dVar171 + dVar143;
            local_1190._s_0.X = dVar118;
            local_c08 = dVar118;
            dStack_c00 = dVar167;
            local_1100._s_0.X = local_11c0._s_0.X * dVar163 + dVar118;
            local_1100._s_0.Y = local_11c0._s_0.Y * dVar163 + dVar167;
            local_1190._s_0.Y = dVar167;
            local_1100._s_0.Z = local_11c0._s_0.Z * dVar163 + local_1048 + dVar143;
            ::FName::FName(&local_1478,LogName);
            FVisualLogger::ArrowLineLogfImpl
                      (pUVar44,&local_1478,Display,(TVector<double> *)&local_1190._s_0,
                       (TVector<double> *)&local_1100._s_0,&FColor::Green,0,L"");
          }
        }
      }
    }
  }
LAB_14b871dd1:
  pTVar28 = DS_CVarAnimNodeOffsetRootBoneDebug.Ref;
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14b871def:
    lVar48 = 0;
  }
  else {
    bVar31 = IsInGameThread();
    lVar48 = 4;
    if (bVar31) goto LAB_14b871def;
  }
  if (*(int *)((longlong)pTVar28->ShadowedValue + lVar48) == 1) {
    local_598.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_598.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_598.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_598.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_598.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_598.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_598.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_598.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_598.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_598.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_598.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_598.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_598,&local_718,&this->ComponentTransform);
    local_778.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_778.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_778.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_778.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_778.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_778.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_778.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_778.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_778.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_778.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_778.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_778.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_778,&local_7d8,&this->ComponentTransform);
    fVar62 = __real_3fc00000;
    fVar63 = __real_bf800000;
    if (0.0 <= fVar60) {
      FAnimInstanceProxy::AnimDrawDebugCircle
                (this->AnimInstanceProxy,(TVector<double> *)&local_1578._s_0,fVar60 + fVar154,0x24,
                 &FColor::Red,&UE::Math::TVector<double>::UpVector,false,__real_bf800000,SDPG_World,
                 __real_3fc00000);
    }
    FAnimInstanceProxy::AnimDrawDebugCircle
              (this->AnimInstanceProxy,(TVector<double> *)&local_1578._s_0,fVar154,0x24,
               &FColor::Blue,&UE::Math::TVector<double>::UpVector,false,fVar63,SDPG_World,fVar62);
    uVar127 = *(undefined8 *)&(this->ParentTranslation).field0_0x0;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar127 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar127 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      local_1178 = (this->ComponentTransform).Translation.XY.m128d_f64[0];
      dStack_1170 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
      local_1168 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
      pUVar44 = FWeakObjectPtr::Get(&(this->OwnerAnimInstance).WeakPtr);
      local_1470.Handle = (UObject *)(**(code **)(*(longlong *)pUVar44 + 0x2b0))(pUVar44);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1470.Handle != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1470.Handle);
      }
      local_1530.ObjectIndex = 0;
      local_1530.ObjectSerialNumber = 0;
      FVar49.field0_0x0 =
           (FObjectPtr_u_0)FObjectPtr::FObjectPtr(&local_10e0,(FObjectPtr *)&local_1470);
      FWeakObjectPtr::operator=(&local_1530,FVar49);
      bVar31 = TWeakObjectPtr<APawn,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<APawn,FWeakObjectPtr> *)&local_1530,(void *)0x0);
      if (bVar31) {
        pUVar50 = UDS_LogManager::GetInst();
        if (pUVar50 != (UDS_LogManager *)0x0) {
          pUVar50 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"FDS_AnimNode_OffsetRootBone::Evaluate_AnyThread",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar50,1,Display,local_268.Ptr,0x21d,L"SERIN Dumm %d %f %f %f %f");
          pvVar53 = (void *)local_268._padding_;
          goto LAB_14b8721cb;
        }
      }
      else {
        pUVar50 = UDS_LogManager::GetInst();
        if (pUVar50 != (UDS_LogManager *)0x0) {
          pUVar50 = UDS_LogManager::GetInst();
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"FDS_AnimNode_OffsetRootBone::Evaluate_AnyThread",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar50,1,Display,local_388.Ptr,0x219,L"SERIN Main %d %f %f %f %f");
          pvVar53 = (void *)local_388._padding_;
LAB_14b8721cb:
          if (pvVar53 != (void *)0x0) {
            FMemory::Free(pvVar53);
          }
        }
      }
    }
    local_1040._s_0.X = local_778.Translation.XY.m128d_f64[0];
    local_1040._s_0.Y = local_778.Translation.XY.m128d_f64[1];
    local_1040._s_0.Z = local_778.Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCircle
              (this->AnimInstanceProxy,(TVector<double> *)&local_1040._s_0,fVar154,0x24,
               &FColor::Green,&UE::Math::TVector<double>::UpVector,false,fVar63,SDPG_World,fVar62);
    fVar60 = FAnimNode_OffsetRootBone::GetMaxRotationError((FAnimNode_OffsetRootBone *)this);
    local_f28._s_0.Y = _UNK_15061cbc8;
    local_f28._s_0.X = ___xmm_3ff00000000000000000000000000000;
    iVar40 = (int)(longlong)(fVar60 * __real_3d888889);
    iVar39 = 1;
    if (iVar40 != 0) {
      iVar39 = iVar40;
    }
    uVar2 = (ulonglong)(iVar39 - 1) * 2 + 1;
    lVar48 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar48 == 0; lVar48 = lVar48 + -1) {
      }
    }
    local_14b0 = (undefined4)lVar48;
    local_e48.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    local_e48.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    local_e48.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    local_e48.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    local_1028._s_0.Z = 0.0;
    local_1028._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_1028._s_0.Y = _UNK_15061cbc8;
    UE::Math::TQuat<double>::RotateVector(&local_e48,&local_c80,(TVector<double> *)&local_1028._s_0)
    ;
    local_1008._s_0.X = local_778.Translation.XY.m128d_f64[0];
    local_1008._s_0.Y = local_778.Translation.XY.m128d_f64[1];
    local_1008._s_0.Z = local_778.Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCone
              (this->AnimInstanceProxy,(TVector<double> *)&local_1008._s_0,__real_42100000,
               &local_c80,local_1580,0.0,1 << ((byte)lVar48 & 0x1f),&FColor::Red,false,fVar63,
               SDPG_World,__real_3e99999a);
    dVar158 = local_598.Rotation.ZW.m128d_f64[1];
    dVar171 = local_598.Rotation.ZW.m128d_f64[0];
    dVar167 = local_598.Rotation.XY.m128d_f64[1];
    dVar118 = local_598.Rotation.XY.m128d_f64[0];
    dVar117 = local_778.Translation.ZW.m128d_f64[0];
    dVar94 = local_778.Translation.XY.m128d_f64[1];
    dVar143 = local_778.Translation.XY.m128d_f64[0];
    local_fc8 = local_778.Translation.XY.m128d_f64[0];
    dStack_fc0 = local_778.Translation.XY.m128d_f64[1];
    local_fb8 = local_778.Translation.ZW.m128d_f64[0];
    local_e28.X = local_598.Rotation.XY.m128d_f64[0];
    local_e28.Y = local_598.Rotation.XY.m128d_f64[1];
    local_e28.Z = local_598.Rotation.ZW.m128d_f64[0];
    local_e28.W = local_598.Rotation.ZW.m128d_f64[1];
    local_fe8._s_0.Z = 0.0;
    local_fe8._s_0.X = local_f28._s_0.X;
    local_fe8._s_0.Y = local_f28._s_0.Y;
    UE::Math::TQuat<double>::RotateVector
              (&local_e28,(TVector<double> *)&local_1160._s_0,(TVector<double> *)&local_fe8._s_0);
    local_1358._s_0.X = local_1160._s_0.X * __real_404e000000000000 + dVar143;
    local_fa8._s_0.Z = 0.0;
    local_1358._s_0.Y = local_1160._s_0.Y * __real_404e000000000000 + dVar94;
    local_f78 = dVar117;
    local_f88 = dVar143;
    dStack_f80 = dVar94;
    local_de8.X = dVar118;
    local_de8.Y = dVar167;
    local_de8.Z = dVar171;
    local_de8.W = dVar158;
    local_fa8._s_0.X = local_f28._s_0.X;
    local_fa8._s_0.Y = local_f28._s_0.Y;
    local_1358._s_0.Z = local_1160._s_0.Z * __real_404e000000000000 + local_fb8;
    UE::Math::TQuat<double>::RotateVector
              (&local_de8,(TVector<double> *)&local_1148._s_0,(TVector<double> *)&local_fa8._s_0);
    local_1340._s_0.X = local_1148._s_0.X * dVar163 + dVar143;
    local_1340._s_0.Y = local_1148._s_0.Y * dVar163 + dVar94;
    local_1340._s_0.Z = local_1148._s_0.Z * dVar163 + local_f78;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (this->AnimInstanceProxy,(TVector<double> *)&local_1340._s_0,
               (TVector<double> *)&local_1358._s_0,fVar154,&FColor::Red,false,0.0,fVar62,SDPG_World)
    ;
    dVar158 = local_778.Translation.ZW.m128d_f64[0];
    dVar171 = local_778.Translation.XY.m128d_f64[1];
    dVar167 = local_778.Translation.XY.m128d_f64[0];
    dVar118 = local_778.Rotation.ZW.m128d_f64[1];
    dVar117 = local_778.Rotation.ZW.m128d_f64[0];
    dVar94 = local_778.Rotation.XY.m128d_f64[1];
    dVar143 = local_778.Rotation.XY.m128d_f64[0];
    local_f48 = local_778.Translation.XY.m128d_f64[0];
    dStack_f40 = local_778.Translation.XY.m128d_f64[1];
    local_f38 = local_778.Translation.ZW.m128d_f64[0];
    local_e88.X = local_778.Rotation.XY.m128d_f64[0];
    local_e88.Y = local_778.Rotation.XY.m128d_f64[1];
    local_e88.Z = local_778.Rotation.ZW.m128d_f64[0];
    local_e88.W = local_778.Rotation.ZW.m128d_f64[1];
    local_f68._s_0.Z = 0.0;
    local_f68._s_0.X = local_f28._s_0.X;
    local_f68._s_0.Y = local_f28._s_0.Y;
    UE::Math::TQuat<double>::RotateVector
              (&local_e88,(TVector<double> *)&local_1118._s_0,(TVector<double> *)&local_f68._s_0);
    local_f28._s_0.Z = 0.0;
    local_f08 = dVar167;
    dStack_f00 = dVar171;
    local_12f8._s_0.X = local_1118._s_0.X * __real_404a000000000000 + dVar167;
    local_ef8 = dVar158;
    local_ea8.X = dVar143;
    local_ea8.Y = dVar94;
    local_ea8.Z = dVar117;
    local_ea8.W = dVar118;
    local_12f8._s_0.Y = local_1118._s_0.Y * __real_404a000000000000 + dVar171;
    local_12f8._s_0.Z = local_1118._s_0.Z * __real_404a000000000000 + local_f38;
    UE::Math::TQuat<double>::RotateVector
              (&local_ea8,(TVector<double> *)&local_1328._s_0,(TVector<double> *)&local_f28._s_0);
    local_1310._s_0.X = local_1328._s_0.X * dVar163 + dVar167;
    local_1310._s_0.Y = local_1328._s_0.Y * dVar163 + dVar171;
    local_1310._s_0.Z = local_1328._s_0.Z * dVar163 + local_ef8;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (this->AnimInstanceProxy,(TVector<double> *)&local_1310._s_0,
               (TVector<double> *)&local_12f8._s_0,fVar154,&FColor::Blue,false,0.0,fVar62,SDPG_World
              );
  }
  if ((local_1588 != false) && (local_1558._0_4_ == 1)) {
    pTVar51 = UE::Math::TTransform<double>::Inverse(&local_8f8,&local_148);
    local_538.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_538.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_538.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_538.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_538.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_538.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_538.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_538.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_538.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_538.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_538.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_538.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_538,&local_898,pTVar51);
    local_c68 = local_8f8.Scale3D.XY.m128d_f64[0];
    dStack_c60 = local_8f8.Scale3D.XY.m128d_f64[1];
    local_c58 = local_8f8.Scale3D.ZW.m128d_f64[0];
    local_c50 = local_538.Translation.XY.m128d_f64[0];
    dStack_c48 = local_538.Translation.XY.m128d_f64[1];
    local_c40 = local_538.Translation.ZW.m128d_f64[0];
    cVar37 = (**(code **)((longlong)*pIVar43 + 0x18))(pIVar43);
    if ((cVar37 == '\0') &&
       (bVar31 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2698128275305135557>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_AnimNode_OffsetRootBone.cpp"
                            ,0x23b,"bRootMotionOverridden"), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this->bIsFirstUpdate = false;
LAB_14b872819:
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar24) && (FVar55 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_13f8.NameAndInfo.Index = FVar55.ComparisonIndex.Value;
      local_13f8.NameAndInfo.Number = FVar55.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1468);
      local_13f8.StatData.Pad[4] = '\0';
      local_13f8.StatData.Pad[5] = '\0';
      local_13f8.StatData.Pad[6] = '\0';
      local_13f8.StatData.Pad[7] = '\0';
      local_13f8.StatData.Pad[0] = local_1468.s.LowPart._0_1_;
      local_13f8.StatData.Pad[1] = local_1468.s.LowPart._1_1_;
      local_13f8.StatData.Pad[2] = local_1468.s.LowPart._2_1_;
      local_13f8.StatData.Pad[3] = local_1468.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_13f8);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  return;
}

// GatherDebugData @ 14b875f20

void __thiscall
FDS_AnimNode_OffsetRootBone::GatherDebugData
          (FDS_AnimNode_OffsetRootBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  EOffsetRootBoneMode EVar1;
  UScriptStruct *pUVar2;
  UEnum *this_00;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  pUVar2 = StaticStruct();
  local_res8 = (FName)pUVar2->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  this_00 = StaticEnum<enum_EOffsetRootBoneMode>();
  if (this_00 != (UEnum *)0x0) {
    EVar1 = FAnimNode_OffsetRootBone::GetTranslationMode((FAnimNode_OffsetRootBone *)this);
    UEnum::GetNameStringByIndex(this_00,local_38,(uint)EVar1);
    ::FString::PrintfImpl(&local_48,L"\n - Translation Mode: (%s)");
    iVar3 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    EVar1 = FAnimNode_OffsetRootBone::GetRotationMode((FAnimNode_OffsetRootBone *)this);
    UEnum::GetNameStringByIndex(this_00,local_38,(uint)EVar1);
    ::FString::PrintfImpl(&local_48,L"\n - Rotation Mode: (%s)");
    iVar3 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  FAnimNode_OffsetRootBone::GetTranslationHalflife((FAnimNode_OffsetRootBone *)this);
  ::FString::PrintfImpl(&local_48,L"\n - Translation Halflife: (%.3fd)");
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FAnimNode_OffsetRootBone::GetRotationHalfLife((FAnimNode_OffsetRootBone *)this);
  ::FString::PrintfImpl(&local_48,L"\n - Rotation Halflife: (%.3fd)");
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_58.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 14b87d270

void __thiscall
FDS_AnimNode_OffsetRootBone::Initialize_AnyThread
          (FDS_AnimNode_OffsetRootBone *this,FAnimationInitializeContext *param_1)

{
  this->AnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  Reset(this,(FAnimationBaseContext *)param_1);
  return;
}

// OnParentChangeEvent @ 14b88c330

void __thiscall
FDS_AnimNode_OffsetRootBone::OnParentChangeEvent
          (FDS_AnimNode_OffsetRootBone *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  return;
}

// Reset @ 14b898510

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDS_AnimNode_OffsetRootBone::Reset(FDS_AnimNode_OffsetRootBone *this,FAnimationBaseContext *param_1)

{
  double dVar1;
  int iVar2;
  FAnimInstanceProxy *pFVar3;
  FAnimInstanceProxy *pFVar4;
  double dVar5;
  double dVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pFVar3 = param_1->AnimInstanceProxy;
  dVar1 = (pFVar3->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (pFVar3->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar3->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (pFVar3->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pFVar3->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (pFVar3->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar3->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (pFVar3->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pFVar3->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (pFVar3->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pFVar3->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  pFVar4 = this->AnimInstanceProxy;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (pFVar3->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar5 = (this->ComponentTransform).Translation.XY.m128d_f64[1];
  dVar1 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.X =
       (this->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->SimulatedTranslation).field0_0x0._s_0.Y = dVar5;
  (this->SimulatedTranslation).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
  dVar5 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar6 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->SimulatedRotation).X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->SimulatedRotation).Y = dVar1;
  this->bIsFirstUpdate = true;
  (this->SimulatedRotation).Z = dVar5;
  (this->SimulatedRotation).W = dVar6;
  pUVar8 = pFVar4->AnimInstanceObject;
  if (pUVar8 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_MainPlayerAnim_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b8985db;
  }
  pUVar8 = (UObject *)0x0;
LAB_14b8985db:
  local_res8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->OwnerAnimInstance).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// Update_AnyThread @ 14b8a4240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_AnimNode_OffsetRootBone::Update_AnyThread
          (FDS_AnimNode_OffsetRootBone *this,FAnimationUpdateContext *param_1)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  short sVar17;
  FExposedValueHandler *this_00;
  short sVar18;
  TReferenceControllerBase<1> *pTVar19;
  FName FVar20;
  TSharedRef<UE::Anim::IGraphMessage,1> local_88;
  FScopedGraphMessage local_78 [7];
  
  this->CachedDeltaTime = param_1->DeltaTime;
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  bVar16 = FAnimNode_OffsetRootBone::GetResetEveryFrame((FAnimNode_OffsetRootBone *)this);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  if (!bVar16) {
    if ((((this->bIsFirstUpdate != false) || (sVar18 = (this->UpdateCounter).Counter, sVar18 == -1))
        || ((this->UpdateCounter).LastSyncronizedFrame == 0xffffffffffffffff)) ||
       (sVar18 == *(short *)(param_1->_padding_ + 0x5b0))) goto LAB_14b8a430a;
    sVar17 = (this->UpdateCounter).Counter + 1;
    sVar18 = 0;
    if (sVar17 != -1) {
      sVar18 = sVar17;
    }
    if (((sVar18 != -1) && (GFrameCounter != 0xffffffffffffffff)) &&
       (sVar18 == *(short *)(param_1->_padding_ + 0x5b0))) goto LAB_14b8a430a;
  }
  Reset(this,(FAnimationBaseContext *)param_1);
LAB_14b8a430a:
  uVar14 = _UNK_150689688;
  lVar13 = ___xmm_3ff00000000000003ff0000000000000;
  uVar11 = _UNK_150689518;
  lVar10 = ___xmm_00000000000000003ff0000000000000;
  lVar2 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar2 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar2 + 0x5b2);
  dVar4 = (this->SimulatedRotation).X;
  dVar5 = (this->SimulatedRotation).Y;
  dVar6 = (this->SimulatedRotation).Z;
  dVar7 = (this->SimulatedRotation).W;
  dVar8 = (this->SimulatedTranslation).field0_0x0._s_0.X;
  dVar9 = (this->SimulatedTranslation).field0_0x0._s_0.Y;
  dVar1 = (this->SimulatedTranslation).field0_0x0._s_0.Z;
  UE::Anim::FScopedGraphMessage::FScopedGraphMessage(local_78,(FAnimationBaseContext *)param_1);
  local_88.SharedReferenceCount.ReferenceController = ::operator_new(0x80);
  if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
    local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
    FVar20 = UE::AnimationWarping::FRootOffsetProvider::TypeName;
  }
  else {
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_88.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRootOffsetProvider_AnimationWarping_UE___00_SharedPointerInternals__6B_
    ;
    local_88.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)&___7FRootOffsetProvider_AnimationWarping_UE__6B_;
    local_88.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)dVar4;
    *(double *)&local_88.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = dVar5;
    local_88.SharedReferenceCount.ReferenceController[3]._padding_ = (longlong)dVar6;
    *(double *)&local_88.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = dVar7;
    local_88.SharedReferenceCount.ReferenceController[4]._padding_ = (longlong)dVar8;
    *(double *)&local_88.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = dVar9;
    local_88.SharedReferenceCount.ReferenceController[5]._padding_ = (longlong)dVar1;
    local_88.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    local_88.SharedReferenceCount.ReferenceController[6]._padding_ = lVar13;
    uVar15 = _UNK_150689688;
    _UNK_150689688 = (undefined4)uVar14;
    _UNK_15068968c = SUB84(uVar14,4);
    uVar12 = _UNK_15068968c;
    local_88.SharedReferenceCount.ReferenceController[6].SharedReferenceCount =
         (atomic<int>)_UNK_150689688;
    _UNK_150689688 = uVar15;
    local_88.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)uVar12;
    local_88.SharedReferenceCount.ReferenceController[7]._padding_ = lVar10;
    uVar14 = _UNK_150689518;
    _UNK_150689518 = (undefined4)uVar11;
    _UNK_15068951c = SUB84(uVar11,4);
    uVar12 = _UNK_15068951c;
    local_88.SharedReferenceCount.ReferenceController[7].SharedReferenceCount =
         (atomic<int>)_UNK_150689518;
    _UNK_150689518 = uVar14;
    local_88.SharedReferenceCount.ReferenceController[7].WeakReferenceCount = (atomic<int>)uVar12;
    if (local_88.SharedReferenceCount.ReferenceController + 1 == (TReferenceControllerBase<1> *)0x0)
    {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar20 = UE::AnimationWarping::FRootOffsetProvider::TypeName;
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar19 = local_88.SharedReferenceCount.ReferenceController;
    local_88.Object = (IGraphMessage *)(local_88.SharedReferenceCount.ReferenceController + 1);
  }
  UE::Anim::FScopedGraphMessage::PushMessage
            (local_78,(FAnimationBaseContext *)param_1,&local_88,FVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->field_0x10,param_1);
  UE::Anim::FScopedGraphMessage::PopMessage(local_78);
  return;
}

// operator() @ 150566960

bool __thiscall
`FDS_AnimNode_OffsetRootBone::Evaluate_AnyThread'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2698128275305135958>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2698128275305135958>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

