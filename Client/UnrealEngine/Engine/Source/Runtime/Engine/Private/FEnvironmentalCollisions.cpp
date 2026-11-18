// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14825a720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  TBox<double,3> *this_00;
  FScriptContainerElement *pFVar4;
  TSphere<double,3> *pTVar5;
  undefined8 *puVar6;
  code *pcVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  bool bVar17;
  bool bVar18;
  ForAnyElementType *pFVar19;
  uchar uVar20;
  bool bVar21;
  int iVar22;
  UObject *pUVar23;
  TBox<double,3> *pTVar24;
  FCapsule *pFVar25;
  FConvex *pFVar26;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar27;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar28;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar29;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar30;
  TMatrix<double> *pTVar31;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar32;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar33;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar34;
  uint uVar35;
  FWeakObjectPtr *this_01;
  ForAnyElementType FVar36;
  ulonglong uVar37;
  ForAnyElementType this_02;
  FPhysicsShapeReference_Chaos *pFVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 extraout_XMM0 [16];
  double extraout_XMM0_00 [2];
  double adVar50 [2];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar62;
  undefined1 auVar58 [16];
  undefined1 extraout_XMM0_01 [16];
  double extraout_XMM0_Qb;
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar88;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined4 uVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar101;
  double dVar102;
  uint uVar105;
  undefined1 auVar103 [16];
  double dVar106;
  undefined1 auVar104 [16];
  double dVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar121;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined4 uVar127;
  __m128d _Var128;
  undefined4 uVar129;
  undefined4 uVar130;
  undefined1 auVar131 [16];
  __m128d _Var132;
  double dVar133;
  double dVar134;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  __m128d _Var137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  undefined1 auStackY_7c8 [32];
  undefined1 local_798 [8];
  uint local_790;
  TTransform<double> local_788;
  ForAnyElementType *local_728;
  ForAnyElementType *local_720;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_718;
  ForAnyElementType *local_708;
  double local_700;
  ForAnyElementType *local_6f8;
  double local_6f0;
  FName local_6e8;
  FName local_6e0;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FName local_6b0;
  FName local_6a8;
  FName local_6a0;
  FName local_698;
  FName local_690;
  FName local_688;
  FName local_680;
  double local_678;
  double dStack_670;
  double local_668;
  undefined1 local_660 [16];
  double local_650;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  double local_578;
  double dStack_570;
  double local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  FString local_4d0;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  double local_4a8 [2];
  undefined8 local_498;
  double local_490 [2];
  undefined8 local_480;
  double local_478 [2];
  undefined8 local_468;
  double local_460 [2];
  undefined8 local_450;
  undefined1 local_448 [16];
  double local_438;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  TTransform<double> local_3c8;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  undefined1 local_248 [80];
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [80];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  bVar18 = false;
  bVar17 = false;
  local_790 = 0;
  local_718.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.ArrayNum = 0;
  local_718.ArrayMax = 0;
  pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
  iVar22 = FBodyInstance::GetAllShapes_AssumesLocked
                     ((FBodyInstance *)&pUVar23[0x16].field_0x20,&local_718);
  if ((iVar22 != 0) && (iVar22 <= EnvironmentCollisionConfig.MaxShapes)) {
    local_728 = *(ForAnyElementType **)((longlong)this + 8);
    local_700 = (double)EnvironmentCollisionConfig.Thickness;
    lVar41 = **(longlong **)((longlong)this + 0x10);
    local_428 = *(double *)(lVar41 + 0x1f0);
    dStack_420 = *(double *)(lVar41 + 0x1f8);
    local_418 = *(double *)(lVar41 + 0x200);
    dStack_410 = *(double *)(lVar41 + 0x208);
    local_408 = *(double *)(lVar41 + 0x210);
    dStack_400 = *(double *)(lVar41 + 0x218);
    local_3f8 = *(double *)(lVar41 + 0x220);
    dStack_3f0 = *(double *)(lVar41 + 0x228);
    local_3e8 = *(undefined8 *)(lVar41 + 0x230);
    uStack_3e0 = *(undefined8 *)(lVar41 + 0x238);
    local_3d8 = *(undefined8 *)(lVar41 + 0x240);
    uStack_3d0 = *(undefined8 *)(lVar41 + 0x248);
    this_01 = *(FWeakObjectPtr **)this;
    auVar116._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar116._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    dVar10 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    uVar122 = (uint)((ulonglong)dVar10 >> 0x20);
    fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar64._0_8_ = local_428 * local_428 + local_418 * local_418;
    auVar64._8_8_ = dStack_420 * dStack_420 + dStack_410 * dStack_410;
    auVar65._8_4_ = SUB84(auVar64._8_8_,0);
    auVar65._0_8_ = auVar64._0_8_;
    auVar65._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
    auVar109._0_8_ = auVar65._8_8_ + auVar64._0_8_;
    auVar109._8_8_ = auVar64._0_8_ + auVar64._8_8_;
    auVar65 = sqrtpd(auVar64,auVar109);
    uVar39 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar109._0_8_);
    uVar43 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar109._8_8_);
    auVar135 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar65);
    auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
    uVar40 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar109._0_8_);
    uVar44 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar109._8_8_);
    auVar136._0_8_ = uVar39 & (ulonglong)(auVar135._0_8_ * local_428);
    uVar37 = uVar43 & (ulonglong)(auVar135._8_8_ * dStack_420);
    auVar136._8_4_ = (undefined4)uVar37;
    auVar136._12_4_ = (undefined4)(uVar37 >> 0x20);
    auVar131._0_8_ = uVar40 & (ulonglong)(auVar65._0_8_ * local_418);
    uVar37 = uVar44 & (ulonglong)(auVar65._8_8_ * dStack_410);
    auVar131._8_4_ = (undefined4)uVar37;
    auVar131._12_4_ = (undefined4)(uVar37 >> 0x20);
    auVar77._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar77._4_4_ =
         ~(uint)(uVar39 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar77._8_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar77._12_4_ =
         ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar90._0_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar90._4_4_ =
         ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar90._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar90._12_4_ =
         ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    auVar131 = auVar131 | auVar90;
    local_720 = local_728;
    local_708 = local_728;
    local_6f8 = local_728;
    local_6f0 = local_700;
    pUVar23 = FWeakObjectPtr::Get(this_01);
    uVar101 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar105 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    auVar78._0_8_ = (double)CONCAT44(uVar122 & uVar105,SUB84(dVar10,0) & uVar101);
    auVar78._8_4_ = SUB84((double)fVar8,0) & __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
    auVar78._12_4_ =
         (uint)((ulonglong)(double)fVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
    auVar66._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar78._8_8_);
    auVar66._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar78._0_8_);
    uVar35 = movmskpd((int)this_01,auVar66);
    uVar138 = SUB84(auVar116._0_8_,0) & uVar101;
    uVar139 = (uint)((ulonglong)auVar116._0_8_ >> 0x20) & uVar105;
    uVar140 = SUB84(auVar116._8_8_,0) & __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
    uVar141 = (uint)((ulonglong)auVar116._8_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
    auVar135._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(uVar141,uVar140));
    auVar135._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(uVar139,uVar138));
    iVar22 = movmskpd((int)pUVar23,auVar135);
    if ((uVar35 & 0x3fffffff) == 0 && iVar22 == 0) {
      local_3c8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_3c8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_3c8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_3c8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_3c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_3c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      local_3c8.Rotation.ZW.m128d_f64[0] =
           auVar131._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_3c8.Rotation.ZW.m128d_f64[1] =
           auVar131._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar13._4_8_ = auVar90._8_8_;
      auVar13._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar91._0_8_ = auVar13._0_8_ << 0x20;
      auVar91._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar91._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      local_3c8.Rotation.XY.m128d_f64[0] =
           SUB168(auVar136 | auVar77,0) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_3c8.Rotation.XY.m128d_f64[1] =
           SUB168(auVar136 | auVar77,8) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar92._8_8_ = auVar91._8_8_;
      auVar92._0_8_ = dVar10;
      lVar41 = -(ulonglong)
                ((double)CONCAT44(uVar105 & uVar122,uVar101 & SUB84(dVar10,0)) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar116);
      lVar42 = -(ulonglong)
                ((double)CONCAT44(uVar139,uVar138) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar45 = -(ulonglong)
                ((double)CONCAT44(uVar141,uVar140) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_3c8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar42 & auVar65._0_4_;
      local_3c8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar42 >> 0x20) & auVar65._4_4_;
      local_3c8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar45 & auVar65._8_4_;
      local_3c8.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar45 >> 0x20) & auVar65._12_4_;
      auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar92);
      auVar117._0_8_ =
           (double)CONCAT44(local_3c8.Scale3D.XY.m128d_f64[0]._4_4_,
                            local_3c8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar117._8_4_ = local_3c8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar117._12_4_ = local_3c8.Scale3D.XY.m128d_f64[1]._4_4_;
      dVar115 = auVar117._0_8_ * local_408;
      dVar121 = auVar117._8_8_ * dStack_400;
      auVar79._8_4_ = SUB84(local_3c8.Rotation.XY.m128d_f64[1],0);
      auVar79._0_8_ = local_3c8.Rotation.XY.m128d_f64[0];
      uVar100 = (undefined4)((ulonglong)local_3c8.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar79._12_4_ = uVar100;
      local_3c8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar41 >> 0x20) & auVar65._4_4_,
                            ~(uint)lVar41 & auVar65._0_4_);
      dVar88 = auVar79._8_8_;
      auVar46._8_4_ = SUB84(local_3c8.Rotation.ZW.m128d_f64[0],0);
      auVar46._0_8_ = dVar88;
      auVar46._12_4_ = (int)((ulonglong)local_3c8.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar123._8_4_ = SUB84(dVar121,0);
      auVar123._0_8_ = dVar115;
      uVar62 = (undefined4)((ulonglong)dVar121 >> 0x20);
      auVar123._12_4_ = uVar62;
      auVar108._8_4_ = SUB84(local_3c8.Rotation.XY.m128d_f64[1],0);
      auVar108._0_8_ = local_3c8.Rotation.XY.m128d_f64[0];
      auVar108._12_4_ = uVar100;
      dVar10 = local_3c8.Scale3D.ZW.m128d_f64[0] * local_3f8;
      dVar102 = dStack_3f0 * 0.0;
      auVar109 = blendpd(auVar108,(undefined1  [16])local_3c8.Rotation.ZW.m128d_f64,2);
      auVar67._8_4_ = SUB84(dVar121,0);
      auVar67._0_8_ = dVar115;
      auVar67._12_4_ = uVar62;
      auVar11._8_4_ = SUB84(dVar102,0);
      auVar11._0_8_ = dVar10;
      auVar11._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
      auVar65 = blendpd(auVar67,auVar11,2);
      auVar124._0_8_ = auVar123._8_8_ * local_3c8.Rotation.XY.m128d_f64[0] - dVar88 * dVar115;
      auVar124._8_8_ = dVar10 * local_3c8.Rotation.XY.m128d_f64[1] - auVar46._8_8_ * dVar121;
      auVar103._8_4_ = SUB84(auVar124._8_8_,0);
      auVar103._0_8_ = auVar124._0_8_;
      auVar103._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
      auVar68._0_8_ = auVar65._0_8_ * local_3c8.Rotation.ZW.m128d_f64[0] - auVar109._0_8_ * dVar10;
      auVar68._8_8_ = auVar65._8_8_ * local_3c8.Rotation.ZW.m128d_f64[1] - auVar109._8_8_ * dVar102;
      dVar102 = auVar103._8_8_ + auVar103._8_8_;
      dVar106 = auVar68._0_8_ + auVar68._0_8_;
      auVar65 = blendpd(auVar124,auVar68,2);
      auVar125._0_8_ = auVar65._0_8_ + auVar65._0_8_;
      auVar125._8_8_ = auVar65._8_8_ + auVar65._8_8_;
      uVar62 = SUB84(dVar106,0);
      auVar93._8_4_ = uVar62;
      auVar93._0_8_ = dVar102;
      uVar100 = (undefined4)((ulonglong)dVar106 >> 0x20);
      auVar93._12_4_ = uVar100;
      auVar47._8_4_ = uVar62;
      auVar47._0_8_ = dVar102;
      auVar47._12_4_ = uVar100;
      auVar80._8_4_ = uVar62;
      auVar80._0_8_ = dVar102;
      auVar80._12_4_ = uVar100;
      auVar65 = blendpd(auVar80,auVar125,2);
      auVar94._0_8_ = auVar93._8_8_ * local_3c8.Rotation.XY.m128d_f64[0] - dVar102 * dVar88;
      auVar94._8_8_ =
           auVar125._0_8_ * local_3c8.Rotation.XY.m128d_f64[1] -
           auVar47._8_8_ * local_3c8.Rotation.ZW.m128d_f64[0];
      auVar48._8_4_ = SUB84(auVar125._8_8_,0);
      auVar48._0_8_ = auVar125._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
      auVar81._0_8_ =
           auVar65._0_8_ * local_3c8.Rotation.ZW.m128d_f64[0] - auVar125._0_8_ * auVar109._0_8_;
      auVar81._8_8_ =
           auVar65._8_8_ * local_3c8.Rotation.ZW.m128d_f64[1] - auVar48._8_8_ * auVar109._8_8_;
      auVar49._8_4_ = SUB84(auVar94._8_8_,0);
      auVar49._0_8_ = auVar94._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
      auVar65 = blendpd(auVar94,auVar81,2);
      local_3c8.Translation.XY.m128d_f64[1] =
           0.0 - (dVar106 * local_3c8.Rotation.ZW.m128d_f64[1] + dVar121 + auVar81._0_8_);
      local_3c8.Translation.XY.m128d_f64[0] =
           0.0 - (dVar102 * local_3c8.Rotation.ZW.m128d_f64[1] + dVar115 + auVar49._8_8_);
      local_3c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_3c8.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar125._0_8_ * local_3c8.Rotation.ZW.m128d_f64[1] + dVar10 + auVar65._0_8_);
      local_3c8.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_368.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_368.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_368.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_368.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_368.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_368.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_368.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_368.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_368.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_368.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_368.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_368.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_368,(TTransform<double> *)&pUVar23[0xc].field_0x10,&local_3c8);
    dVar10 = __real_3f1a36e2e0000000;
    uVar39 = (ulonglong)local_718.ArrayNum;
    pFVar38 = (FPhysicsShapeReference_Chaos *)(local_718.AllocatorInstance.Data + uVar39 * 0x10);
    local_790 = local_718.ArrayNum;
    uVar37 = uVar39;
    this_02.Data = local_718.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar39 != (int)uVar37) {
        local_798[0] = 0;
        `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_798);
      }
      if ((FPhysicsShapeReference_Chaos *)this_02.Data == pFVar38) break;
      local_788.Rotation.XY.m128d_f64[1] = local_368.Rotation.XY.m128d_f64[1];
      local_788.Rotation.XY.m128d_f64[0] = local_368.Rotation.XY.m128d_f64[0];
      local_788.Rotation.ZW.m128d_f64[1] = local_368.Rotation.ZW.m128d_f64[1];
      local_788.Rotation.ZW.m128d_f64[0] = local_368.Rotation.ZW.m128d_f64[0];
      local_788.Translation.XY.m128d_f64[1] = local_368.Translation.XY.m128d_f64[1];
      local_788.Translation.XY.m128d_f64[0] = local_368.Translation.XY.m128d_f64[0];
      local_788.Translation.ZW.m128d_f64[0] = local_368.Translation.ZW.m128d_f64[0];
      local_788.Translation.ZW.m128d_f64[1] = local_368.Translation.ZW.m128d_f64[1];
      local_788.Scale3D.XY.m128d_f64[1] = local_368.Scale3D.XY.m128d_f64[1];
      local_788.Scale3D.XY.m128d_f64[0] = local_368.Scale3D.XY.m128d_f64[0];
      local_788.Scale3D.ZW.m128d_f64[0] = local_368.Scale3D.ZW.m128d_f64[0];
      local_788.Scale3D.ZW.m128d_f64[1] = local_368.Scale3D.ZW.m128d_f64[1];
      pTVar24 = (TBox<double,3> *)
                FPhysicsShapeReference_Chaos::GetGeometry
                          ((FPhysicsShapeReference_Chaos *)this_02.Data);
      uVar20 = Chaos::FImplicitObject::GetType((FImplicitObject *)pTVar24);
      dVar102 = extraout_XMM0._8_8_;
      if (uVar20 == '\x04') {
        if (((uchar)pTVar24->_padding_ != '\x04') &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(TBox<double,3> **)&(pTVar24->AABB).MMin;
        uVar20 = Chaos::FImplicitObject::GetType((FImplicitObject *)this_00);
        local_2a8.Rotation.XY.m128d_f64[0] = local_788.Rotation.XY.m128d_f64[0];
        local_2a8.Rotation.XY.m128d_f64[1] = local_788.Rotation.XY.m128d_f64[1];
        local_2a8.Translation.XY.m128d_f64[0] = local_788.Translation.XY.m128d_f64[0];
        local_2a8.Translation.XY.m128d_f64[1] = local_788.Translation.XY.m128d_f64[1];
        local_2a8.Scale3D.XY.m128d_f64[0] = local_788.Scale3D.XY.m128d_f64[0];
        local_2a8.Scale3D.XY.m128d_f64[1] = local_788.Scale3D.XY.m128d_f64[1];
        local_308.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_308.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2a8.Rotation.ZW.m128d_f64[0] = local_788.Rotation.ZW.m128d_f64[0];
        local_2a8.Rotation.ZW.m128d_f64[1] = local_788.Rotation.ZW.m128d_f64[1];
        local_308.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_308.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2a8.Translation.ZW.m128d_f64[0] = local_788.Translation.ZW.m128d_f64[0];
        local_2a8.Translation.ZW.m128d_f64[1] = local_788.Translation.ZW.m128d_f64[1];
        local_2a8.Scale3D.ZW.m128d_f64[0] = local_788.Scale3D.ZW.m128d_f64[0];
        local_2a8.Scale3D.ZW.m128d_f64[1] = local_788.Scale3D.ZW.m128d_f64[1];
        local_308.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_308.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_308.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_308.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_308.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_308.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_308.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_308.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_308,(TTransform<double> *)&(pTVar24->AABB).MMin.field_0x10,&local_2a8);
        _Var137.m128d_f64[1] = local_308.Rotation.XY.m128d_f64[1];
        _Var137.m128d_f64[0] = local_308.Rotation.XY.m128d_f64[0];
        _Var132.m128d_f64[1] = local_308.Rotation.ZW.m128d_f64[1];
        _Var132.m128d_f64[0] = local_308.Rotation.ZW.m128d_f64[0];
        adVar50[1] = local_308.Translation.XY.m128d_f64[1];
        adVar50[0] = local_308.Translation.XY.m128d_f64[0];
        _Var128.m128d_f64[1] = local_308.Scale3D.XY.m128d_f64[1];
        _Var128.m128d_f64[0] = local_308.Scale3D.XY.m128d_f64[0];
        uVar62 = local_308.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar100 = local_308.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar129 = local_308.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar130 = local_308.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_788.Translation.ZW.m128d_f64[0] = local_308.Translation.ZW.m128d_f64[0];
        local_788.Translation.ZW.m128d_f64[1] = local_308.Translation.ZW.m128d_f64[1];
        local_788.Scale3D.ZW.m128d_f64[0] = local_308.Scale3D.ZW.m128d_f64[0];
        local_788.Scale3D.ZW.m128d_f64[1] = local_308.Scale3D.ZW.m128d_f64[1];
        local_788.Rotation.XY.m128d_f64 = _Var137.m128d_f64;
        local_788.Rotation.ZW.m128d_f64 = _Var132.m128d_f64;
        local_788.Translation.XY.m128d_f64 = adVar50;
        local_788.Scale3D.XY.m128d_f64 = _Var128.m128d_f64;
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          adVar50 = extraout_XMM0_00;
        }
        dVar102 = adVar50[1];
        pTVar24 = this_00;
      }
      else {
        _Var128.m128d_f64 = local_788.Scale3D.XY.m128d_f64;
        uVar62 = local_788.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar100 = local_788.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar129 = local_788.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar130 = local_788.Scale3D.ZW.m128d_f64[1]._4_4_;
        _Var132.m128d_f64 = local_788.Rotation.ZW.m128d_f64;
        _Var137.m128d_f64 = local_788.Rotation.XY.m128d_f64;
      }
      dVar134 = _Var137.m128d_f64[0];
      dVar88 = _Var137.m128d_f64[1];
      dVar133 = _Var132.m128d_f64[1];
      dVar115 = _Var128.m128d_f64[0];
      dVar106 = _Var128.m128d_f64[1];
      dVar121 = _Var132.m128d_f64[0];
      switch(uVar20) {
      case '\0':
        if (((char)pTVar24->_padding_ != '\0') &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = local_728;
        uVar3 = *(undefined8 *)&(pTVar24->AABB).MMin;
        dVar102 = (double)(float)uVar3;
        dVar76 = (double)(float)((ulonglong)uVar3 >> 0x20);
        piVar1 = (int *)((longlong)&local_728[1].Data + 4);
        local_438 = (double)*(float *)&(pTVar24->AABB).MMin.field_0x8;
        local_448._8_4_ = SUB84(dVar76,0);
        local_448._0_8_ = dVar102;
        local_448._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
        dVar102 = dVar102 * dVar115;
        dVar76 = dVar76 * dVar106;
        uVar127 = (undefined4)((ulonglong)dVar76 >> 0x20);
        auVar126._0_8_ = local_438 * (double)CONCAT44(uVar100,uVar62);
        auVar126._8_8_ = (double)CONCAT44(uVar130,uVar129) * 0.0;
        auVar109 = blendpd((undefined1  [16])_Var137.m128d_f64,(undefined1  [16])_Var132.m128d_f64,2
                          );
        auVar118._8_4_ = SUB84(dVar76,0);
        auVar118._0_8_ = dVar102;
        auVar118._12_4_ = uVar127;
        auVar51._8_4_ = _Var132.m128d_f64[0]._0_4_;
        auVar51._0_8_ = dVar88;
        auVar51._12_4_ = _Var132.m128d_f64[0]._4_4_;
        auVar69._8_4_ = SUB84(dVar76,0);
        auVar69._0_8_ = dVar102;
        auVar69._12_4_ = uVar127;
        auVar65 = blendpd(auVar69,auVar126,2);
        auVar119._0_8_ = auVar118._8_8_ * dVar134 - dVar88 * dVar102;
        auVar119._8_8_ = auVar126._0_8_ * dVar88 - auVar51._8_8_ * dVar76;
        auVar95._8_4_ = SUB84(auVar119._8_8_,0);
        auVar95._0_8_ = auVar119._0_8_;
        auVar95._12_4_ = (int)((ulonglong)auVar119._8_8_ >> 0x20);
        auVar70._0_8_ = auVar65._0_8_ * dVar121 - auVar109._0_8_ * auVar126._0_8_;
        auVar70._8_8_ = auVar65._8_8_ * dVar133 - auVar109._8_8_ * auVar126._8_8_;
        auVar65 = blendpd(auVar119,auVar70,2);
        auVar120._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar120._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        dVar106 = auVar95._8_8_ + auVar95._8_8_;
        dVar115 = auVar70._0_8_ + auVar70._0_8_;
        uVar62 = SUB84(dVar115,0);
        auVar82._8_4_ = uVar62;
        auVar82._0_8_ = dVar106;
        uVar100 = (undefined4)((ulonglong)dVar115 >> 0x20);
        auVar82._12_4_ = uVar100;
        auVar52._8_4_ = uVar62;
        auVar52._0_8_ = dVar106;
        auVar52._12_4_ = uVar100;
        auVar71._8_4_ = uVar62;
        auVar71._0_8_ = dVar106;
        auVar71._12_4_ = uVar100;
        auVar65 = blendpd(auVar71,auVar120,2);
        auVar83._0_8_ = auVar82._8_8_ * dVar134 - dVar106 * dVar88;
        auVar83._8_8_ = auVar120._0_8_ * dVar88 - auVar52._8_8_ * dVar121;
        auVar53._8_4_ = SUB84(auVar120._8_8_,0);
        auVar53._0_8_ = auVar120._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar120._8_8_ >> 0x20);
        auVar72._0_8_ = auVar65._0_8_ * dVar121 - auVar120._0_8_ * auVar109._0_8_;
        auVar72._8_8_ = auVar65._8_8_ * dVar133 - auVar53._8_8_ * auVar109._8_8_;
        auVar54._8_4_ = SUB84(auVar83._8_8_,0);
        auVar54._0_8_ = auVar83._0_8_;
        auVar54._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
        auVar65 = blendpd(auVar83,auVar72,2);
        local_650 = auVar120._0_8_ * dVar133 + auVar126._0_8_ + auVar65._0_8_ +
                    local_788.Translation.ZW.m128d_f64[0];
        local_660._0_8_ =
             dVar106 * dVar133 + dVar102 + auVar54._8_8_ + local_788.Translation.XY.m128d_f64[0];
        local_660._8_8_ =
             dVar115 * dVar133 + dVar76 + auVar72._0_8_ + local_788.Translation.XY.m128d_f64[1];
        iVar22 = *(int *)&local_728[1].Data;
        dVar102 = (double)*(float *)&pTVar24->_padding_ *
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,local_728,piVar1);
          *(int *)&pFVar19[1].Data = iVar22;
        }
        *(int *)&pFVar19[1].Data = iVar22 + 1;
        pFVar4 = pFVar19->Data;
        lVar41 = (longlong)iVar22 * 0x20;
        *(undefined4 *)(pFVar4 + lVar41) = 0xffffffff;
        *(undefined8 *)(pFVar4 + lVar41 + 8) = local_660._0_8_;
        *(undefined8 *)(pFVar4 + lVar41 + 8 + 8) = local_660._8_8_;
        *(float *)(pFVar4 + lVar41 + 4) = (float)dVar102;
        *(double *)(pFVar4 + lVar41 + 0x18) = local_650;
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6e8 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6e8,&local_598);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_598.Data.AllocatorInstance.Data;
LAB_14825c16d:
          if (FVar36.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar36.Data);
          }
        }
        break;
      case '\x01':
        if (((char)pTVar24->_padding_ != '\x01') &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_578 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_570 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_568 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_2>::operator()
                  (&local_708,pTVar24,&local_788,(TVector<double,3> *)&local_578);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6e0 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6e0,&local_5f8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_5f8.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      default:
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          if (*(longlong *)&pUVar23[4].field_0x8 != 0) {
            pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
            bVar18 = true;
            local_680 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
            ::FName::ToString(&local_680,&local_5a8);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          if (bVar18) {
            bVar18 = false;
            FVar36.Data = local_5a8.Data.AllocatorInstance.Data;
            goto LAB_14825c16d;
          }
        }
        break;
      case '\x03':
        pFVar25 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                            ((FImplicitObject *)pTVar24);
        local_560 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_558 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_550 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_3>::operator()
                  (&local_720,pFVar25,&local_788,(TVector<double,3> *)&local_560);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6d8 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6d8,&local_4d0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_4d0.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case '\b':
        pFVar26 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                            ((FImplicitObject *)pTVar24);
        dVar102 = dVar134 + dVar134;
        dVar106 = dVar88 + dVar88;
        dVar115 = dVar121 + dVar121;
        auVar104._8_4_ = SUB84(dVar106,0);
        auVar104._0_8_ = dVar102;
        auVar104._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        dVar76 = dVar102 * dVar134;
        dVar89 = auVar104._8_8_ * dVar88;
        local_248._8_8_ = dVar106 * dVar134;
        dVar88 = dVar115 * dVar88;
        auVar96._8_4_ = SUB84(dVar89,0);
        auVar96._0_8_ = dVar76;
        auVar96._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
        auVar110._8_4_ = SUB84(dVar88,0);
        auVar110._0_8_ = local_248._8_8_;
        auVar110._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
        local_248._0_8_ =
             (double)GlobalVectorConstants::FloatOne.m128_f32[0] -
             (dVar115 * dVar121 + auVar96._8_8_);
        local_248._40_8_ =
             (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar115 * dVar121 + dVar76);
        local_248._32_8_ = (double)local_248._8_8_ - dVar115 * dVar133;
        dVar88 = dVar88 - dVar102 * dVar133;
        local_248._8_8_ = (double)local_248._8_8_ + dVar115 * dVar133;
        dVar102 = auVar110._8_8_ + dVar102 * dVar133;
        local_1f8._8_8_ = 0;
        local_1f8._0_8_ =
             (double)GlobalVectorConstants::FloatOne.m128_f32[2] - (dVar76 + auVar96._8_8_);
        local_248._16_8_ = dVar134 * dVar115 - dVar106 * dVar133;
        local_248._24_8_ = 0.0;
        auVar55._8_4_ = SUB84(dVar102,0);
        auVar55._0_8_ = local_248._8_8_;
        auVar55._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
        local_248._48_8_ = auVar55._8_8_;
        auVar14._4_8_ = local_248._0_8_;
        auVar14._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar84._0_8_ = auVar14._0_8_ << 0x20;
        auVar84._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar84._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        local_248._56_8_ = 0.0;
        local_1d8._8_8_ = auVar84._8_8_;
        local_1d8._0_8_ = local_788.Translation.ZW.m128d_f64[0];
        local_248._72_4_ = SUB84(dVar88,0);
        local_248._64_8_ = dVar106 * dVar133 + dVar134 * dVar115;
        local_248._76_4_ = (int)((ulonglong)dVar88 >> 0x20);
        local_1e8 = local_788.Translation.XY.m128d_f64[0];
        dStack_1e0 = local_788.Translation.XY.m128d_f64[1];
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_4>::operator()
                  (&local_6f8,pFVar26,(TMatrix<double> *)local_248,(TVector<double,3> *)0x0);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6d0 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6d0,&local_648);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_648.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case '\v':
      case 'K':
      case 0x8b:
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          if (*(longlong *)&pUVar23[4].field_0x8 != 0) {
            pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
            bVar17 = true;
            local_688 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
            ::FName::ToString(&local_688,&local_5b8);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          if (bVar17) {
            bVar17 = false;
            FVar36.Data = local_5b8.Data.AllocatorInstance.Data;
            goto LAB_14825c16d;
          }
        }
        break;
      case '@':
        pTVar27 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                            ((FImplicitObject *)pTVar24);
        pTVar5 = (pTVar27->MObject).Reference;
        if (pTVar5 == (TSphere<double,3> *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitInstanced.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0xef,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pTVar5->_padding_ = (int)pTVar5->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pTVar5->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pTVar5->_padding_ + 4) == 0)) {
            (**(code **)pTVar5->_padding_)();
          }
        }
        pFVar19 = local_728;
        pTVar5 = (pTVar27->MObject).Reference;
        piVar1 = (int *)((longlong)&local_728[1].Data + 4);
        auVar109 = blendpd((undefined1  [16])_Var137.m128d_f64,(undefined1  [16])_Var132.m128d_f64,2
                          );
        local_4c0 = (double)(float)*(undefined8 *)&pTVar5->Center;
        dStack_4b8 = (double)(float)((ulonglong)*(undefined8 *)&pTVar5->Center >> 0x20);
        local_4b0 = (double)*(float *)&(pTVar5->Center).field_0x8;
        dVar115 = local_4c0 * dVar115;
        dVar106 = dStack_4b8 * dVar106;
        dVar102 = local_4b0 * (double)CONCAT44(uVar100,uVar62);
        dVar76 = (double)CONCAT44(uVar130,uVar129) * 0.0;
        auVar111._8_4_ = SUB84(dVar106,0);
        auVar111._0_8_ = dVar115;
        uVar62 = (undefined4)((ulonglong)dVar106 >> 0x20);
        auVar111._12_4_ = uVar62;
        auVar73._8_4_ = SUB84(dVar106,0);
        auVar73._0_8_ = dVar115;
        auVar73._12_4_ = uVar62;
        auVar9._8_4_ = SUB84(dVar76,0);
        auVar9._0_8_ = dVar102;
        auVar9._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
        auVar65 = blendpd(auVar73,auVar9,2);
        auVar56._8_4_ = _Var132.m128d_f64[0]._0_4_;
        auVar56._0_8_ = dVar88;
        auVar56._12_4_ = _Var132.m128d_f64[0]._4_4_;
        auVar112._0_8_ = auVar111._8_8_ * dVar134 - dVar88 * dVar115;
        auVar112._8_8_ = dVar102 * dVar88 - auVar56._8_8_ * dVar106;
        auVar74._0_8_ = auVar65._0_8_ * dVar121 - auVar109._0_8_ * dVar102;
        auVar74._8_8_ = auVar65._8_8_ * dVar133 - auVar109._8_8_ * dVar76;
        auVar57._8_4_ = SUB84(auVar112._8_8_,0);
        auVar57._0_8_ = auVar112._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
        dVar76 = auVar57._8_8_ + auVar57._8_8_;
        dVar89 = auVar74._0_8_ + auVar74._0_8_;
        auVar65 = blendpd(auVar112,auVar74,2);
        auVar75._8_4_ = _Var132.m128d_f64[1]._0_4_;
        auVar75._0_8_ = dVar133;
        auVar75._12_4_ = _Var132.m128d_f64[1]._4_4_;
        auVar97._8_4_ = SUB84(dVar89,0);
        auVar97._0_8_ = dVar76;
        uVar62 = (undefined4)((ulonglong)dVar89 >> 0x20);
        auVar97._12_4_ = uVar62;
        auVar113._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar113._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        auVar98._0_8_ = auVar97._8_8_ * dVar134 - dVar88 * dVar76;
        auVar98._8_8_ = auVar113._0_8_ * dVar88 - dVar121 * dVar89;
        auVar85._8_4_ = SUB84(dVar89,0);
        auVar85._0_8_ = dVar76;
        auVar85._12_4_ = uVar62;
        auVar65 = blendpd(auVar85,auVar113,2);
        auVar58._8_4_ = SUB84(auVar98._8_8_,0);
        auVar58._0_8_ = auVar98._0_8_;
        auVar58._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
        auVar86._0_8_ = auVar65._0_8_ * dVar121 - auVar109._0_8_ * auVar113._0_8_;
        auVar86._8_8_ = auVar65._8_8_ * dVar133 - auVar109._8_8_ * auVar113._8_8_;
        auVar65 = blendpd(auVar98,auVar86,2);
        local_668 = dVar133 * auVar113._0_8_ + dVar102 + auVar65._0_8_ +
                    local_788.Translation.ZW.m128d_f64[0];
        local_678 = dVar133 * dVar76 + dVar115 + auVar58._8_8_ +
                    local_788.Translation.XY.m128d_f64[0];
        dStack_670 = auVar75._8_8_ * dVar89 + dVar106 + auVar86._0_8_ +
                     local_788.Translation.XY.m128d_f64[1];
        iVar22 = *(int *)&local_728[1].Data;
        dVar102 = (double)*(float *)&pTVar5->_padding_ *
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,local_728,piVar1);
          *(int *)&pFVar19[1].Data = iVar22;
        }
        *(int *)&pFVar19[1].Data = iVar22 + 1;
        pFVar4 = pFVar19->Data;
        lVar41 = (longlong)iVar22 * 0x20;
        *(undefined4 *)(pFVar4 + lVar41) = 0xffffffff;
        *(double *)(pFVar4 + lVar41 + 8) = local_678;
        *(double *)(pFVar4 + lVar41 + 8 + 8) = dStack_670;
        *(float *)(pFVar4 + lVar41 + 4) = (float)dVar102;
        *(double *)(pFVar4 + lVar41 + 0x18) = local_668;
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6c8 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6c8,&local_638);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_638.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 'A':
        pTVar28 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                            ((FImplicitObject *)pTVar24);
        pTVar24 = (pTVar28->MObject).Reference;
        if (pTVar24 == (TBox<double,3> *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitInstanced.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0xf9,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pTVar24->_padding_ = (int)pTVar24->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pTVar24->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pTVar24->_padding_ + 4) == 0)) {
            (**(code **)pTVar24->_padding_)();
          }
        }
        local_548 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_540 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_538 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_2>::operator()
                  (&local_708,(pTVar28->MObject).Reference,&local_788,
                   (TVector<double,3> *)&local_548);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6c0 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6c0,&local_628);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_628.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 'C':
        pTVar29 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                            ((FImplicitObject *)pTVar24);
        pFVar25 = (pTVar29->MObject).Reference;
        if (pFVar25 == (FCapsule *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitInstanced.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x103,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pFVar25->_padding_ = (int)pFVar25->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pFVar25->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pFVar25->_padding_ + 4) == 0)) {
            (**(code **)pFVar25->_padding_)();
          }
        }
        local_530 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_528 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_520 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_3>::operator()
                  (&local_720,(pTVar29->MObject).Reference,&local_788,
                   (TVector<double,3> *)&local_530);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6b8 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6b8,&local_618);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_618.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 'H':
        pTVar30 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                            ((FImplicitObject *)pTVar24);
        pFVar26 = (pTVar30->MObject).Reference;
        if (pFVar26 == (FConvex *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitInstanced.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x10d,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pFVar26->_padding_ = (int)pFVar26->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pFVar26->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pFVar26->_padding_ + 4) == 0)) {
            (**(code **)pFVar26->_padding_)();
          }
        }
        pFVar26 = (pTVar30->MObject).Reference;
        pTVar31 = UE::Math::TTransform<double>::ToMatrixNoScale(&local_788,&local_148);
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_4>::operator()
                  (&local_6f8,pFVar26,pTVar31,(TVector<double,3> *)0x0);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6b0 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6b0,&local_608);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_608.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 0x80:
        pTVar32 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                            ((FImplicitObject *)pTVar24);
        pTVar5 = (pTVar32->MObject).Reference;
        if (pTVar5 == (TSphere<double,3> *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitScaled.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x119,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pTVar5->_padding_ = (int)pTVar5->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pTVar5->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pTVar5->_padding_ + 4) == 0)) {
            (**(code **)pTVar5->_padding_)();
          }
        }
        pTVar5 = (pTVar32->MObject).Reference;
        dVar115 = (double)*(float *)&pTVar32->_padding_ - dVar115;
        local_498 = CONCAT44(uVar100,uVar62);
        dVar102 = (double)*(float *)&pTVar32->_padding_ - (double)CONCAT44(uVar100,uVar62);
        dVar106 = (double)*(float *)((longlong)&pTVar32->_padding_ + 4) - dVar106;
        local_4a8 = _Var128.m128d_f64;
        if ((dVar10 <= dVar106 * dVar106 + dVar115 * dVar115 + dVar102 * dVar102) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6722835269600411365>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                                ,0x11b,
                                "FVector::DistSquared(ComponentToClothTransform.GetScale3D(), FVector(ImplicitScaled.GetScale())) < (1.e-4f)"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_518 = (double)(float)pTVar32->_padding_;
        dStack_510 = (double)(float)((ulonglong)pTVar32->_padding_ >> 0x20);
        local_508 = (double)*(float *)&pTVar32->_padding_;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_1>::operator()
                  (&local_728,pTVar5,&local_788,(TVector<double,3> *)&local_518);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6a8 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6a8,&local_588);
          UE::Logging::Private::BasicLog<6>
                    (&::<lambda_3>::operator()'[::M]::LOG_Static,
                     (FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_588.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 0x81:
        pTVar33 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                            ((FImplicitObject *)pTVar24);
        pTVar24 = (pTVar33->MObject).Reference;
        if (pTVar24 == (TBox<double,3> *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitScaled.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x124,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)&pTVar24->_padding_ = (int)pTVar24->_padding_ + 1;
          UNLOCK();
          LOCK();
          plVar2 = &pTVar24->_padding_;
          lVar41 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar41 == 1) && (*(int *)((longlong)&pTVar24->_padding_ + 4) == 0)) {
            (**(code **)pTVar24->_padding_)();
          }
        }
        pTVar24 = (pTVar33->MObject).Reference;
        dVar115 = (double)*(float *)&pTVar33->_padding_ - dVar115;
        local_480 = CONCAT44(uVar100,uVar62);
        dVar102 = (double)*(float *)&pTVar33->_padding_ - (double)CONCAT44(uVar100,uVar62);
        dVar106 = (double)*(float *)((longlong)&pTVar33->_padding_ + 4) - dVar106;
        local_490 = _Var128.m128d_f64;
        if ((dVar10 <= dVar106 * dVar106 + dVar115 * dVar115 + dVar102 * dVar102) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6722835269600411354>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                                ,0x126,
                                "FVector::DistSquared(ComponentToClothTransform.GetScale3D(), FVector(ImplicitScaled.GetScale())) < (1.e-4f)"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_500 = (double)(float)pTVar33->_padding_;
        dStack_4f8 = (double)(float)((ulonglong)pTVar33->_padding_ >> 0x20);
        local_4f0 = (double)*(float *)&pTVar33->_padding_;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_2>::operator()
                  (&local_708,pTVar24,&local_788,(TVector<double,3> *)&local_500);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_6a0 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_6a0,&local_5e8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_5e8.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 0x83:
        pTVar34 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                            ((FImplicitObject *)pTVar24);
        pFVar25 = (pTVar34->MObject).Reference;
        if (pFVar25 == (FCapsule *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitScaled.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x12f,L"");
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(atomic<int> *)&pFVar25->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar25->_padding_ + 1);
          UNLOCK();
          Chaos::FChaosRefCountedObject::Release((FChaosRefCountedObject *)pFVar25);
        }
        pFVar25 = (pTVar34->MObject).Reference;
        dVar115 = (double)*(float *)&pTVar34->_padding_ - dVar115;
        local_468 = CONCAT44(uVar100,uVar62);
        dVar102 = (double)*(float *)&pTVar34->_padding_ - (double)CONCAT44(uVar100,uVar62);
        dVar106 = (double)*(float *)((longlong)&pTVar34->_padding_ + 4) - dVar106;
        local_478 = _Var128.m128d_f64;
        if ((dVar10 <= dVar106 * dVar106 + dVar115 * dVar115 + dVar102 * dVar102) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6722835269600411343>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                                ,0x131,
                                "FVector::DistSquared(ComponentToClothTransform.GetScale3D(), FVector(ImplicitScaled.GetScale())) < (1.e-4f)"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_4e8 = (double)(float)pTVar34->_padding_;
        dStack_4e0 = (double)(float)((ulonglong)pTVar34->_padding_ >> 0x20);
        local_4d8 = (double)*(float *)&pTVar34->_padding_;
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_3>::operator()
                  (&local_720,pFVar25,&local_788,(TVector<double,3> *)&local_4e8);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_698 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_698,&local_5d8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_5d8.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
        break;
      case 0x88:
        if ((char)pTVar24->_padding_ != -0x78) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("T_DERIVED::StaticType() == Type",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                              ,0xbb,L"");
          dVar102 = extraout_XMM0_01._8_8_;
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        puVar6 = *(undefined8 **)&pTVar24[1].AABB.MMin;
        if (puVar6 == (undefined8 *)0x0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImplicitScaled.Object()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                              ,0x13a,L"");
          dVar102 = extraout_XMM0_02._8_8_;
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          LOCK();
          *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)(puVar6 + 1);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar22 == 1) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
            (**(code **)*puVar6)();
            dVar102 = extraout_XMM0_Qb;
          }
        }
        auVar15._4_8_ = dVar102;
        auVar15._0_4_ = _Var128.m128d_f64[0]._4_4_;
        auVar59._0_8_ = auVar15._0_8_ << 0x20;
        auVar59._8_4_ = _Var128.m128d_f64[1]._0_4_;
        auVar59._12_4_ = _Var128.m128d_f64[1]._4_4_;
        pFVar26 = *(FConvex **)&pTVar24[1].AABB.MMin;
        dVar76 = (double)*(float *)&(pTVar24->AABB).MMin - dVar115;
        dVar102 = (double)*(float *)&(pTVar24->AABB).MMin.field_0x4 - auVar59._8_8_;
        local_450 = CONCAT44(uVar100,uVar62);
        dVar89 = (double)*(float *)&(pTVar24->AABB).MMin.field_0x8 -
                 (double)CONCAT44(uVar100,uVar62);
        local_460 = _Var128.m128d_f64;
        if ((dVar10 <= dVar76 * dVar76 + dVar102 * dVar102 + dVar89 * dVar89) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6722835269600411332>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\EnvironmentalCollisions.cpp"
                                ,0x13c,
                                "FVector::DistSquared(ComponentToClothTransform.GetScale3D(), FVector(ImplicitScaled.GetScale())) < (1.e-4f)"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar102 = dVar134 + dVar134;
        dVar76 = dVar88 + dVar88;
        uVar127 = (undefined4)((ulonglong)dVar76 >> 0x20);
        dVar63 = dVar121 + dVar121;
        auVar114._8_4_ = SUB84(dVar76,0);
        auVar114._0_8_ = dVar102;
        auVar114._12_4_ = uVar127;
        dVar107 = dVar102 * dVar134;
        dVar89 = auVar114._8_8_ * dVar88;
        auVar99._8_4_ = SUB84(dVar89,0);
        auVar99._0_8_ = dVar107;
        auVar99._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
        auVar60._8_4_ = SUB84(dVar76,0);
        auVar60._0_8_ = dVar102;
        auVar60._12_4_ = uVar127;
        dVar89 = auVar60._8_8_ * dVar134;
        local_1c8._0_8_ =
             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar63 * dVar121 + auVar99._8_8_))
             * dVar115;
        local_1c8._40_8_ =
             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar63 * dVar121 + dVar107)) *
             dVar106;
        local_1c8._32_8_ = dVar106 * (dVar89 - dVar63 * dVar133);
        dVar121 = (double)CONCAT44(uVar100,uVar62) * (dVar63 * dVar88 - dVar102 * dVar133);
        local_1c8._8_8_ = (dVar89 + dVar63 * dVar133) * dVar115;
        dVar106 = (dVar63 * dVar88 + dVar102 * dVar133) * dVar106;
        auVar12._4_4_ = uVar100;
        auVar12._0_4_ = uVar62;
        auVar12._8_4_ = uVar129;
        auVar12._12_4_ = uVar130;
        auVar65 = blendpd((undefined1  [16])_Var128.m128d_f64,auVar12,2);
        local_178._8_8_ = 0;
        local_178._0_8_ =
             (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar107 + auVar99._8_8_)) *
             (double)CONCAT44(uVar100,uVar62);
        local_1c8._16_8_ = auVar65._0_8_ * (dVar134 * dVar63 - dVar76 * dVar133);
        auVar61._8_4_ = SUB84(dVar106,0);
        auVar61._0_8_ = local_1c8._8_8_;
        auVar61._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        local_1c8._48_8_ = auVar61._8_8_;
        auVar16._4_8_ = local_1c8._0_8_;
        auVar16._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar87._0_8_ = auVar16._0_8_ << 0x20;
        auVar87._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar87._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        local_1c8._56_8_ = 0.0;
        local_158._8_8_ = auVar87._8_8_;
        local_158._0_8_ = local_788.Translation.ZW.m128d_f64[0];
        local_1c8._24_8_ = 0.0;
        local_1c8._72_4_ = SUB84(dVar121,0);
        local_1c8._64_8_ = (dVar76 * dVar133 + dVar134 * dVar63) * (double)CONCAT44(uVar100,uVar62);
        local_1c8._76_4_ = (int)((ulonglong)dVar121 >> 0x20);
        local_168 = local_788.Translation.XY.m128d_f64[0];
        dStack_160 = local_788.Translation.XY.m128d_f64[1];
        ``FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>::
        operator()'::__l2::<lambda_4>::operator()
                  (&local_6f8,pFVar26,(TMatrix<double> *)local_1c8,(TVector<double,3> *)0x0);
        if (5 < (byte)LogSkeletalMesh._0_1_) {
          pUVar23 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
          local_690 = *(FName *)(*(longlong *)&pUVar23[4].field_0x8 + 0x18);
          ::FName::ToString(&local_690,&local_5c8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          FVar36.Data = local_5c8.Data.AllocatorInstance.Data;
          goto LAB_14825c16d;
        }
      }
      uVar39 = local_718._8_8_ & 0xffffffff;
      this_02.Data = this_02.Data + 0x10;
      uVar37 = (ulonglong)local_790;
    }
    **(undefined1 **)((longlong)this + 0x18) = 1;
  }
  if ((FPhysicsShapeReference_Chaos *)local_718.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_718.AllocatorInstance.Data);
  }
  return;
}

// AppendCollisionDataFromEnvironment @ 1482672b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FEnvironmentalCollisions::AppendCollisionDataFromEnvironment
          (USceneComponent *param_1,FClothCollisionData *param_2)

{
  FWeakObjectPtr *this;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  UWorld *this_00;
  UObject *pUVar8;
  USkeletalMeshComponent *this_01;
  UClass *pUVar9;
  USkeletalMesh *pUVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_238 [32];
  undefined1 local_1d8 [8];
  USkeletalMeshComponent *local_1d0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_1c8;
  FCollisionObjectQueryParams local_1b8 [2];
  FClothCollisionData local_1a8;
  FCollisionShape local_168;
  TStatId local_158;
  FSingleParticlePhysicsProxy *local_150;
  code *local_148;
  FWeakObjectPtr **local_140;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  FWeakObjectPtr *local_100;
  FClothCollisionData *local_f8;
  USkeletalMeshComponent **local_f0;
  undefined1 *local_e8;
  FName local_e0;
  FName local_d8 [2];
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1d0 = (USkeletalMeshComponent *)param_1;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (GConfig != (FConfigCacheIni *)0x0) {
      FConfigCacheIni::GetFloat
                (GConfig,L"ClothSettings",L"EnvironmentCollisionPadding",
                 &EnvironmentCollisionConfig.Padding,&GEngineIni);
      FConfigCacheIni::GetFloat
                (GConfig,L"ClothSettings",L"EnvironmentCollisionThickness",
                 &EnvironmentCollisionConfig.Thickness,&GEngineIni);
      FConfigCacheIni::GetInt
                (GConfig,L"ClothSettings",L"EnvironmentCollisionMaxShapes",
                 &EnvironmentCollisionConfig.MaxShapes,&GEngineIni);
    }
    _Init_thread_footer(&::_TSS0);
  }
  uVar12 = 0;
  local_1b8[0].ObjectTypesToQuery = 0x21;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_1b8[0].IgnoreMask = '\0';
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_ClothOverlapComponents =
         (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FEnvironmentalCollisions::AppendCollisionDataFromEnvironment(USceneComponent_const_*,FClothCollisionData_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_ClothOverlapComponents>
          )0x0;
    pFVar7 = ::FName::FName(&local_e0,"ClothOverlapComponents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_ClothOverlapComponents,*pFVar7,
               L"ClothOverlapComponents","STATGROUP_CollisionTags","STATCAT_Advanced",
               L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_158.StatIdPtr = (TStatIdData *)StatPtr_ClothOverlapComponents;
  if (StatPtr_ClothOverlapComponents ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FEnvironmentalCollisions::AppendCollisionDataFromEnvironment(USceneComponent_const_*,FClothCollisionData_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_ClothOverlapComponents>
       )0x0) {
    pFVar7 = ::FName::FName(local_d8,"ClothOverlapComponents");
    local_158.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_ClothOverlapComponents,*pFVar7,
                    L"ClothOverlapComponents","STATGROUP_CollisionTags","STATCAT_Advanced",
                    L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"ClothOverlapComponents");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_c8,::StaticName,&local_158,false,(AActor *)0x0);
  local_120 = (double)EnvironmentCollisionConfig.Padding;
  local_138._s_0.X = (double)local_1d0->_padding_;
  local_138._s_0.Y = (double)local_1d0->_padding_;
  local_108 = local_120 + (double)local_1d0->_padding_;
  local_110 = local_120 + (double)local_1d0->_padding_;
  local_118 = local_120 + (double)local_1d0->_padding_;
  local_120 = local_120 + (double)local_1d0->_padding_;
  local_138._s_0.Z = (double)local_1d0->_padding_;
  this_00 = (UWorld *)local_1d0->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_1d0);
  }
  local_168.field1_0x4.Box.HalfExtentX = (float)local_120;
  local_168.ShapeType = Box;
  local_168.field1_0x4.Box.HalfExtentY = (float)local_118;
  local_168.field1_0x4.Box.HalfExtentZ = (float)local_110;
  UWorld::OverlapMultiByObjectType
            (this_00,&local_1c8,(TVector<double> *)&local_138._s_0,
             &UE::Math::TQuat<double>::Identity,local_1b8,&local_168,&local_c8);
  if (0 < local_1c8.ArrayNum) {
    do {
      uVar11 = 0;
      if ((int)uVar12 < local_1c8.ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = (FWeakObjectPtr *)
             (local_1c8.AllocatorInstance.Data + ((longlong)(int)uVar12 * 9 + 4) * 8);
      bVar4 = FWeakObjectPtr::IsValid(this);
      if (bVar4) {
        pUVar8 = FWeakObjectPtr::Get(this);
        iVar5 = (**(code **)(*(longlong *)pUVar8 + 0x5f0))(pUVar8);
        if (iVar5 == 0) {
          pUVar8 = FWeakObjectPtr::Get(this);
          bVar4 = FBodyInstance::IsValidBodyInstance((FBodyInstance *)&pUVar8[0x16].field_0x20);
          if (bVar4) {
            local_1d8[0] = 0;
            pUVar8 = FWeakObjectPtr::Get(this);
            local_150 = FBodyInstance::GetPhysicsActorWeldRoot
                                  ((FBodyInstance *)&pUVar8[0x16].field_0x20);
            local_f0 = &local_1d0;
            local_e8 = local_1d8;
            local_140 = &local_100;
            local_148 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FEnvironmentalCollisions::AppendCollisionDataFromEnvironment'::__l10::<lambda_3>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                        ::Call;
            local_100 = this;
            local_f8 = param_2;
            FPhysInterface_Chaos::ExecuteRead
                      (&local_150,
                       (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                       &local_148);
          }
        }
        else if ((iVar5 == 5) &&
                (this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this),
                this_01 != (USkeletalMeshComponent *)0x0)) {
          pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar5 = (int)pUVar9->_padding_;
          if ((iVar5 <= *(int *)(this_01->_padding_ + 0x38)) &&
             (((((longlong *)
                 *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
                 &pUVar9->_padding_ &&
                (pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01),
                pUVar10 != (USkeletalMesh *)0x0)) && (this_01 != local_1d0)) &&
              (iVar5 = (this_01->ClothingSimulationInstances).ArrayNum, iVar5 != 0)))) {
            local_1a8.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Spheres.ArrayNum = 0;
            local_1a8.Spheres.ArrayMax = 0;
            local_1a8.SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.SphereConnections.ArrayNum = 0;
            local_1a8.SphereConnections.ArrayMax = 0;
            local_1a8.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Convexes.ArrayNum = 0;
            local_1a8.Convexes.ArrayMax = 0;
            local_1a8.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Boxes.ArrayNum = 0;
            local_1a8.Boxes.ArrayMax = 0;
            if ((iVar5 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)(this_01->ClothingSimulationInstances).AllocatorInstance.Data;
            (**(code **)(*plVar2 + 0x88))(plVar2,&local_1a8);
            iVar5 = (this_01->ClothingSimulationInstances).ArrayNum;
            uVar11 = 1;
            if (1 < iVar5) {
              do {
                uVar6 = 0;
                if ((int)uVar11 < iVar5) {
                  uVar6 = ~uVar11 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FClothingSimulationInstance::AppendUniqueCollisions
                          ((FClothingSimulationInstance *)
                           ((this_01->ClothingSimulationInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar11 * 0x28),&local_1a8,false);
                iVar5 = (this_01->ClothingSimulationInstances).ArrayNum;
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < iVar5);
            }
            FClothCollisionData::Append(param_2,&local_1a8);
            if (local_1a8.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Boxes.AllocatorInstance.Data);
            }
            DestructItems<FClothCollisionPrim_Convex,int>
                      ((FClothCollisionPrim_Convex *)local_1a8.Convexes.AllocatorInstance.Data,
                       local_1a8.Convexes.ArrayNum);
            if ((FClothCollisionPrim_Convex *)local_1a8.Convexes.AllocatorInstance.Data !=
                (FClothCollisionPrim_Convex *)0x0) {
              FMemory::Free(local_1a8.Convexes.AllocatorInstance.Data);
            }
            if (local_1a8.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_1a8.SphereConnections.AllocatorInstance.Data);
            }
            if (local_1a8.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Spheres.AllocatorInstance.Data);
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < local_1c8.ArrayNum);
  }
  if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

