// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 11

// StaticStruct @ 1463d4a00

UScriptStruct * __cdecl FAnimNode_SpringBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone,(UObject *)pUVar1,
                         L"AnimNode_SpringBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton;
}

// FAnimNode_SpringBone @ 146405ce0

FAnimNode_SpringBone * __thiscall
FAnimNode_SpringBone::FAnimNode_SpringBone(FAnimNode_SpringBone *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_SpringBone__6B_;
  (this->SpringBone).BoneName.ComparisonIndex = 0;
  (this->SpringBone).BoneName.Number = 0;
  puVar1 = &(this->SpringBone).field_0x8;
  (this->SpringBone).BoneIndex = -1;
  (this->SpringBone).bUseSkeletonIndex = 0;
  (this->SpringBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SpringStiffness = 50.0;
  this->SpringDamping = 4.0;
  this->ErrorResetThresh = 256.0;
  this->MaxDisplacement = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BoneLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BoneLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->BoneLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BoneVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BoneVelocity).field0_0x0._s_0.Y = (double)uVar2;
  (this->BoneVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OwnerVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OwnerVelocity).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bOverrideOwnerVelocity = '\0';
  (this->OwnerVelocity).field0_0x0._s_0.Z = (double)uVar2;
  this->RemainingTime = 0.0;
  puVar1 = &this->field_0x164;
  this->bLimitDisplacement = '\0';
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bHadValidStrength = '\0';
  this->bRotateZ = '\0';
  this->bRotateY = '\0';
  this->bRotateX = '\0';
  this->bTranslateZ = '\x01';
  this->bTranslateY = '\x01';
  this->bTranslateX = '\x01';
  (this->OwnerVelocityOverride).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OwnerVelocityOverride).field0_0x0._s_0.Y = (double)uVar2;
  (this->OwnerVelocityOverride).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// CacheBones_AnyThread @ 14641a3a0

void __thiscall
FAnimNode_SpringBone::CacheBones_AnyThread
          (FAnimNode_SpringBone *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::CacheBones_AnyThread");
  FAnimNode_SkeletalControlBase::CacheBones_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146434be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_SpringBone::EvaluateSkeletalControl_AnyThread
          (FAnimNode_SpringBone *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TVector<double> *pTVar2;
  double *pdVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FCompactPoseBoneIndex *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  TTransform<double> *pTVar24;
  TQuat<double> *pTVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined8 uVar58;
  double dVar59;
  undefined4 uVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined4 uVar65;
  double dVar66;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar79;
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined4 uVar83;
  undefined4 uVar84;
  undefined1 auStack_3d8 [32];
  FCompactPoseBoneIndex *local_3b8;
  FCompactPoseBoneIndex *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  FCompactPoseBoneIndex local_388;
  FCompactPoseBoneIndex local_384;
  int local_380;
  int iStack_37c;
  uchar auStack_378 [4];
  uchar auStack_374 [4];
  double local_370;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_338;
  double local_320;
  TArray<int,TSizedDefaultAllocator<32>_> local_318;
  ForAnyElementType local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_2b0;
  double dStack_2a8;
  FSkelMeshRefPoseOverride *local_2a0;
  FSharedReferencer<1> local_298;
  double dStack_290;
  double local_288;
  TVector<double> local_280;
  TVector<double> local_268;
  double local_240;
  TQuat<double> local_238 [2];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  FCompactPoseBoneIndex local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::EvaluateSkeletalControl_AnyThread");
  if ((param_2->ArrayNum != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SpringBone.cpp"
                          ,100,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (this->bTranslateX != '\0' || (this->bTranslateY != '\0' || this->bTranslateZ != '\0')) {
    FBoneReference::GetCompactPoseIndex(&this->SpringBone,(FBoneContainer *)&local_388);
    pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_388);
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_148,pTVar24,(TTransform<double> *)(param_1->_padding_ + 0x20));
    dVar31 = local_148.Translation.XY.m128d_f64[1];
    fVar29 = this->RemainingTime;
    uVar64 = SUB84(local_148.Translation.ZW.m128d_f64[0],0);
    uVar65 = (undefined4)((ulonglong)local_148.Translation.ZW.m128d_f64[0] >> 0x20);
    local_380 = local_148.Translation.XY.m128d_f64[0]._0_4_;
    iStack_37c = local_148.Translation.XY.m128d_f64[0]._4_4_;
    auStack_378[0] = local_148.Translation.XY.m128d_f64[1]._0_1_;
    auStack_378[1] = local_148.Translation.XY.m128d_f64[1]._1_1_;
    auStack_378[2] = local_148.Translation.XY.m128d_f64[1]._2_1_;
    auStack_378[3] = local_148.Translation.XY.m128d_f64[1]._3_1_;
    auStack_374[0] = local_148.Translation.XY.m128d_f64[1]._4_1_;
    auStack_374[1] = local_148.Translation.XY.m128d_f64[1]._5_1_;
    auStack_374[2] = local_148.Translation.XY.m128d_f64[1]._6_1_;
    auStack_374[3] = local_148.Translation.XY.m128d_f64[1]._7_1_;
    local_370 = local_148.Translation.ZW.m128d_f64[0];
    if (fVar29 == 0.0) {
      *(int *)&(this->BoneLocation).field0_0x0 = local_148.Translation.XY.m128d_f64[0]._0_4_;
      *(int *)((longlong)&(this->BoneLocation).field0_0x0 + 4) =
           local_148.Translation.XY.m128d_f64[0]._4_4_;
      *(undefined4 *)((longlong)&(this->BoneLocation).field0_0x0 + 8) =
           local_148.Translation.XY.m128d_f64[1]._0_4_;
      *(undefined4 *)((longlong)&(this->BoneLocation).field0_0x0 + 0xc) =
           local_148.Translation.XY.m128d_f64[1]._4_4_;
      (this->BoneLocation).field0_0x0._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->BoneVelocity).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->BoneVelocity).field0_0x0._s_0.Y = (double)uVar17;
      (this->BoneVelocity).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    dVar14 = __real_3ff0000000000000;
    fVar4 = this->FixedTimeStep;
    uVar83 = SUB84(__real_3e45798ee0000000,0);
    uVar84 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    local_148.Translation.XY.m128d_f64[1] = dVar31;
    if (__real_38d1b717 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (fVar4 < fVar29) {
        pTVar2 = &this->BoneVelocity;
        pdVar3 = &(this->BoneVelocity).field0_0x0._s_0.Y;
        while( true ) {
          auVar19._4_8_ = unaff_XMM7_Qb;
          auVar19._0_4_ = iStack_37c;
          auVar32._0_8_ = auVar19._0_8_ << 0x20;
          auVar32[8] = auStack_378[0];
          auVar32[9] = auStack_378[1];
          auVar32[10] = auStack_378[2];
          auVar32[0xb] = auStack_378[3];
          auVar32[0xc] = auStack_374[0];
          auVar32[0xd] = auStack_374[1];
          auVar32[0xe] = auStack_374[2];
          auVar32[0xf] = auStack_374[3];
          dVar31 = (double)fVar4;
          dVar30 = dVar31 * (this->OwnerVelocity).field0_0x0._s_0.X +
                   (this->BoneLocation).field0_0x0._s_0.X;
          dVar42 = dVar31 * (this->OwnerVelocity).field0_0x0._s_0.Y +
                   (this->BoneLocation).field0_0x0._s_0.Y;
          dVar57 = dVar31 * (this->OwnerVelocity).field0_0x0._s_0.Z +
                   (this->BoneLocation).field0_0x0._s_0.Z;
          dVar47 = (double)CONCAT44(iStack_37c,local_380) - dVar30;
          (this->BoneLocation).field0_0x0._s_0.X = dVar30;
          dVar52 = auVar32._8_8_ - dVar42;
          (this->BoneLocation).field0_0x0._s_0.Y = dVar42;
          dVar30 = local_370 - dVar57;
          (this->BoneLocation).field0_0x0._s_0.Z = dVar57;
          if (this->ErrorResetThresh * this->ErrorResetThresh <
              dVar52 * dVar52 + dVar47 * dVar47 + dVar30 * dVar30) {
            *(int *)&(this->BoneLocation).field0_0x0 = local_380;
            *(int *)((longlong)&(this->BoneLocation).field0_0x0 + 4) = iStack_37c;
            *(uchar (*) [4])((longlong)&(this->BoneLocation).field0_0x0 + 8) = auStack_378;
            *(uchar (*) [4])((longlong)&(this->BoneLocation).field0_0x0 + 0xc) = auStack_374;
            (this->BoneLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar65,uVar64);
            uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            (pTVar2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            (this->BoneVelocity).field0_0x0._s_0.Y = (double)uVar17;
            (this->BoneVelocity).field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          dVar30 = this->SpringDamping;
          dVar42 = this->SpringStiffness;
          dVar47 = (pTVar2->field0_0x0)._s_0.X;
          dVar52 = *pdVar3;
          dVar57 = (this->BoneVelocity).field0_0x0._s_0.Z;
          dVar48 = (((double)CONCAT44(iStack_37c,local_380) - (this->BoneLocation).field0_0x0._s_0.X
                    ) * dVar42 - dVar47 * dVar30) * dVar31;
          dVar66 = ((auVar32._8_8_ - (this->BoneLocation).field0_0x0._s_0.Y) * dVar42 -
                   dVar52 * dVar30) * dVar31;
          dVar42 = ((local_370 - (this->BoneLocation).field0_0x0._s_0.Z) * dVar42 - dVar30 * dVar57)
                   * dVar31;
          if (dVar14 / dVar31 < dVar30) {
            dVar30 = (dVar14 / dVar31) / dVar30;
            dVar42 = dVar30 * dVar42;
            dVar66 = dVar30 * dVar66;
            dVar48 = dVar30 * dVar48;
          }
          dVar42 = dVar42 + dVar57;
          (pTVar2->field0_0x0)._s_0.X = dVar48 + dVar47;
          *pdVar3 = dVar66 + dVar52;
          (this->BoneVelocity).field0_0x0._s_0.Z = dVar42;
          dVar31 = (pTVar2->field0_0x0)._s_0.X;
          dVar30 = *pdVar3;
          auVar54._0_8_ = dVar31 * dVar31;
          auVar54._8_8_ = 0;
          dVar47 = (double)this->FixedTimeStep;
          auVar51._0_8_ = dVar30 * dVar30 + auVar54._0_8_ + dVar42 * dVar42;
          auVar51._8_8_ = 0;
          auVar32 = sqrtpd(auVar54,auVar51);
          dVar52 = auVar32._0_8_ * dVar47;
          if (this->ErrorResetThresh < dVar52) {
            dVar52 = this->ErrorResetThresh / dVar52;
            dVar31 = dVar52 * dVar31;
            dVar30 = dVar52 * dVar30;
            dVar42 = dVar52 * dVar42;
            (pTVar2->field0_0x0)._s_0.X = dVar31;
            *pdVar3 = dVar30;
            (this->BoneVelocity).field0_0x0._s_0.Z = dVar42;
          }
          local_2e8.Data = (FScriptContainerElement *)(this->BoneLocation).field0_0x0._s_0.Z;
          dVar52 = (this->BoneLocation).field0_0x0._s_0.X;
          dVar57 = (this->BoneLocation).field0_0x0._s_0.Y;
          dVar48 = (double)CONCAT44(iStack_37c,local_380);
          dVar31 = dVar47 * dVar31 + (this->BoneLocation).field0_0x0._s_0.X;
          dVar42 = dVar47 * dVar42 + (this->BoneLocation).field0_0x0._s_0.Z;
          dVar30 = dVar47 * dVar30 + (this->BoneLocation).field0_0x0._s_0.Y;
          (this->BoneLocation).field0_0x0._s_0.X = dVar31;
          (this->BoneLocation).field0_0x0._s_0.Z = dVar42;
          (this->BoneLocation).field0_0x0._s_0.Y = dVar30;
          if (this->bTranslateX == '\0') {
            (this->BoneLocation).field0_0x0._s_0.X = dVar48;
            dVar31 = dVar48;
          }
          dVar47 = (double)CONCAT44(auStack_374,auStack_378);
          if (this->bTranslateY == '\0') {
            (this->BoneLocation).field0_0x0._s_0.Y = dVar47;
            dVar31 = (this->BoneLocation).field0_0x0._s_0.X;
            dVar30 = dVar47;
          }
          if (this->bTranslateZ == '\0') {
            (this->BoneLocation).field0_0x0._s_0.Z = local_370;
            dVar31 = (this->BoneLocation).field0_0x0._s_0.X;
            dVar30 = (this->BoneLocation).field0_0x0._s_0.Y;
            dVar42 = local_370;
          }
          if (this->bLimitDisplacement != 0) {
            dVar66 = this->MaxDisplacement;
            uVar58 = dVar31 - dVar48;
            uVar72 = dVar30 - dVar47;
            uVar17 = dVar42 - local_370;
            dVar49 = (double)uVar72 * (double)uVar72 + (double)uVar58 * (double)uVar58 +
                     (double)uVar17 * (double)uVar17;
            if (dVar66 * dVar66 < dVar49) {
              if (dVar49 != dVar14) {
                if (__real_3e45798ee0000000 <= dVar49) {
                  local_320 = dVar14 / SQRT(dVar49);
                  uVar58 = (double)uVar58 * local_320;
                  uVar72 = (double)uVar72 * local_320;
                  uVar17 = (double)uVar17 * local_320;
                }
                else {
                  local_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                }
              }
              dVar31 = dVar66 * (double)uVar58 + dVar48;
              dVar30 = dVar66 * (double)uVar72 + dVar47;
              dVar42 = dVar66 * (double)uVar17 + local_370;
              (this->BoneLocation).field0_0x0._s_0.X = dVar31;
              (this->BoneLocation).field0_0x0._s_0.Y = dVar30;
              (this->BoneLocation).field0_0x0._s_0.Z = dVar42;
            }
          }
          unaff_XMM7_Qb = 0;
          dVar47 = dVar14 / (double)this->FixedTimeStep;
          (pTVar2->field0_0x0)._s_0.X = (dVar31 - dVar52) * dVar47;
          *pdVar3 = (dVar30 - dVar57) * dVar47;
          (this->BoneVelocity).field0_0x0._s_0.Z = (dVar42 - (double)local_2e8.Data) * dVar47;
          iVar23 = _finite(dVar31);
          if ((((iVar23 == 0) ||
               (iVar23 = _finite((this->BoneLocation).field0_0x0._s_0.Y), iVar23 == 0)) ||
              (iVar23 = _finite((this->BoneLocation).field0_0x0._s_0.Z), iVar23 == 0)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!BoneLocation.ContainsNaN()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SpringBone.cpp"
                                  ,0xbf,L""), bVar22)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar23 = _finite((pTVar2->field0_0x0)._s_0.X);
          if ((((iVar23 == 0) || (iVar23 = _finite(*pdVar3), iVar23 == 0)) ||
              (iVar23 = _finite((this->BoneVelocity).field0_0x0._s_0.Z), iVar23 == 0)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!BoneVelocity.ContainsNaN()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SpringBone.cpp"
                                  ,0xc0,L""), bVar22)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar4 = this->FixedTimeStep;
          fVar29 = this->RemainingTime - fVar4;
          this->RemainingTime = fVar29;
          if (fVar29 <= fVar4) break;
          uVar64 = SUB84(local_370,0);
          uVar65 = (undefined4)((ulonglong)local_370 >> 0x20);
        }
        uVar83 = SUB84(__real_3e45798ee0000000,0);
        uVar84 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      }
      lVar27 = param_1->_padding_;
      dVar57 = (this->BoneLocation).field0_0x0._s_0.Z - *(double *)(lVar27 + 0x50);
      dVar47 = (this->BoneLocation).field0_0x0._s_0.X - *(double *)(lVar27 + 0x40);
      dVar52 = (this->BoneLocation).field0_0x0._s_0.Y - *(double *)(lVar27 + 0x48);
      uVar65 = (undefined4)((ulonglong)dVar52 >> 0x20);
      dVar66 = *(double *)(lVar27 + 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar49 = *(double *)(lVar27 + 0x28) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar80._8_4_ = SUB84(dVar52,0);
      auVar80._0_8_ = dVar47;
      auVar80._12_4_ = uVar65;
      dVar31 = *(double *)(lVar27 + 0x30) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar14 = *(double *)(lVar27 + 0x38) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar50._8_4_ = SUB84(dVar49,0);
      auVar50._0_8_ = dVar66;
      uVar64 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar50._12_4_ = uVar64;
      dVar48 = auVar50._8_8_;
      auVar53._8_4_ = SUB84(dVar49,0);
      auVar53._0_8_ = dVar66;
      auVar53._12_4_ = uVar64;
      auVar33._8_4_ = SUB84(dVar31,0);
      auVar33._0_8_ = dVar48;
      auVar33._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar12._8_4_ = SUB84(dVar14,0);
      auVar12._0_8_ = dVar31;
      auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar54 = blendpd(auVar53,auVar12,2);
      auVar81._0_8_ = auVar80._8_8_ * dVar66 - dVar48 * dVar47;
      auVar81._8_8_ = dVar57 * dVar49 - auVar33._8_8_ * dVar52;
      auVar44._8_4_ = SUB84(dVar52,0);
      auVar44._0_8_ = dVar47;
      auVar44._12_4_ = uVar65;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar57;
      auVar32 = blendpd(auVar44,auVar18,2);
      auVar45._0_8_ = auVar32._0_8_ * dVar31 - dVar57 * auVar54._0_8_;
      auVar45._8_8_ = auVar32._8_8_ * dVar14 - auVar54._8_8_ * 0.0;
      auVar32 = blendpd(auVar81,auVar45,2);
      dVar30 = auVar81._8_8_ + auVar81._8_8_;
      dVar42 = auVar45._0_8_ + auVar45._0_8_;
      uVar64 = SUB84(dVar42,0);
      uVar65 = (undefined4)((ulonglong)dVar42 >> 0x20);
      auVar82._0_8_ = auVar32._0_8_ + auVar32._0_8_;
      auVar82._8_8_ = auVar32._8_8_ + auVar32._8_8_;
      auVar76._8_4_ = uVar64;
      auVar76._0_8_ = dVar30;
      auVar76._12_4_ = uVar65;
      auVar34._8_4_ = uVar64;
      auVar34._0_8_ = dVar30;
      auVar34._12_4_ = uVar65;
      auVar73._8_4_ = uVar64;
      auVar73._0_8_ = dVar30;
      auVar73._12_4_ = uVar65;
      auVar32 = blendpd(auVar73,auVar82,2);
      auVar77._0_8_ = auVar76._8_8_ * dVar66 - dVar30 * dVar48;
      auVar77._8_8_ = auVar82._0_8_ * dVar49 - auVar34._8_8_ * dVar31;
      auVar35._8_4_ = SUB84(auVar82._8_8_,0);
      auVar35._0_8_ = auVar82._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
      auVar67._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)(lVar27 + 100),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(lVar27 + 0x60))
      ;
      auVar67._8_4_ = _UNK_15061cc88 & *(uint *)(lVar27 + 0x68);
      auVar67._12_4_ = _UNK_15061cc8c & *(uint *)(lVar27 + 0x6c);
      auVar74._0_8_ = auVar32._0_8_ * dVar31 - auVar82._0_8_ * auVar54._0_8_;
      auVar74._8_8_ = auVar32._8_8_ * dVar14 - auVar35._8_8_ * auVar54._8_8_;
      auVar32 = *(undefined1 (*) [16])(lVar27 + 0x70);
      lVar26 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar32._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar32._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(lVar27 + 0x60));
      lVar27 = -(ulonglong)(auVar67._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar28 = -(ulonglong)(auVar67._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar36._8_4_ = SUB84(auVar77._8_8_,0);
      auVar36._0_8_ = auVar77._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar68._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar54._4_4_,
                            ~(uint)lVar27 & auVar54._0_4_);
      auVar68._8_4_ = ~(uint)lVar28 & auVar54._8_4_;
      auVar68._12_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar54._12_4_;
      auVar15._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar15._0_8_ = auVar32._0_8_;
      auVar15._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
      local_2e0 = auVar68._0_8_ * (dVar30 * dVar14 + dVar47 + auVar36._8_8_);
      dStack_2d8 = auVar68._8_8_ * (dVar42 * dVar14 + dVar52 + auVar74._0_8_);
      auVar54 = blendpd(auVar77,auVar74,2);
      (this->LocalBoneTransform).field0_0x0._s_0.X = local_2e0;
      (this->LocalBoneTransform).field0_0x0._s_0.Y = dStack_2d8;
      local_2d0 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar32._4_4_,
                                   ~(uint)lVar26 & auVar32._0_4_) *
                  (auVar82._0_8_ * dVar14 + dVar57 + auVar54._0_8_);
      (this->LocalBoneTransform).field0_0x0._s_0.Z = local_2d0;
    }
    else {
      lVar27 = param_1->_padding_;
      auVar32 = *(undefined1 (*) [16])(lVar27 + 0x30);
      dVar47 = auVar32._0_8_;
      dVar30 = (this->LocalBoneTransform).field0_0x0._s_0.Z * *(double *)(lVar27 + 0x70);
      dVar31 = *(double *)(lVar27 + 0x78) * 0.0;
      dVar42 = *(double *)(lVar27 + 0x38);
      dVar52 = *(double *)(lVar27 + 0x60) * (this->LocalBoneTransform).field0_0x0._s_0.X;
      dVar57 = *(double *)(lVar27 + 0x68) * (this->LocalBoneTransform).field0_0x0._s_0.Y;
      local_318 = *(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar27 + 0x20);
      auVar51 = blendpd((undefined1  [16])local_318,auVar32,2);
      auVar69._8_4_ = SUB84(dVar57,0);
      auVar69._0_8_ = dVar52;
      uVar64 = (undefined4)((ulonglong)dVar57 >> 0x20);
      auVar69._12_4_ = uVar64;
      auVar70._0_8_ =
           auVar69._8_8_ * (double)local_318.AllocatorInstance.Data.Data - local_318._8_8_ * dVar52;
      auVar70._8_8_ = dVar30 * local_318._8_8_ - dVar47 * dVar57;
      auVar37._8_4_ = SUB84(dVar57,0);
      auVar37._0_8_ = dVar52;
      auVar37._12_4_ = uVar64;
      auVar16._8_4_ = SUB84(dVar31,0);
      auVar16._0_8_ = dVar30;
      auVar16._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar54 = blendpd(auVar37,auVar16,2);
      auVar38._0_8_ = auVar54._0_8_ * dVar47 - auVar51._0_8_ * dVar30;
      auVar38._8_8_ = auVar54._8_8_ * auVar32._8_8_ - auVar51._8_8_ * dVar31;
      auVar54 = *(undefined1 (*) [16])(lVar27 + 0x20);
      auVar51 = blendpd(auVar70,auVar38,2);
      dVar31 = auVar70._8_8_ + auVar70._8_8_;
      dVar14 = auVar38._0_8_ + auVar38._0_8_;
      uVar64 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar71._0_8_ = auVar51._0_8_ + auVar51._0_8_;
      auVar71._8_8_ = auVar51._8_8_ + auVar51._8_8_;
      auVar60._8_4_ = SUB84(dVar14,0);
      auVar60._0_8_ = dVar31;
      auVar60._12_4_ = uVar64;
      auVar55._8_4_ = SUB84(dVar14,0);
      auVar55._0_8_ = dVar31;
      auVar55._12_4_ = uVar64;
      auVar51 = blendpd(auVar55,auVar71,2);
      auVar61._0_8_ = auVar60._8_8_ * auVar54._0_8_ - auVar54._8_8_ * dVar31;
      auVar61._8_8_ = auVar71._0_8_ * auVar54._8_8_ - dVar47 * dVar14;
      auVar39._8_4_ = SUB84(auVar61._8_8_,0);
      auVar39._0_8_ = auVar61._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar54 = blendpd(auVar54,auVar32,2);
      auVar56._0_8_ = auVar51._0_8_ * dVar47 - auVar54._0_8_ * auVar71._0_8_;
      auVar56._8_8_ = auVar51._8_8_ * auVar32._8_8_ - auVar54._8_8_ * auVar71._8_8_;
      auVar32 = blendpd(auVar61,auVar56,2);
      dVar31 = dVar31 * dVar42 + dVar52 + auVar39._8_8_ + *(double *)(lVar27 + 0x40);
      dVar14 = dVar14 * dVar42 + dVar57 + auVar56._0_8_ + *(double *)(lVar27 + 0x48);
      uVar64 = SUB84(dVar14,0);
      uVar65 = (undefined4)((ulonglong)dVar14 >> 0x20);
      local_2b8 = auVar71._0_8_ * dVar42 + dVar30 + auVar32._0_8_ + *(double *)(lVar27 + 0x50);
      auVar13._8_4_ = uVar64;
      auVar13._0_8_ = dVar31;
      auVar13._12_4_ = uVar65;
      *(undefined1 (*) [16])&(this->BoneLocation).field0_0x0 = auVar13;
      (this->BoneLocation).field0_0x0._s_0.Z = local_2b8;
      local_2c8._8_4_ = uVar64;
      local_2c8._0_8_ = dVar31;
      local_2c8._12_4_ = uVar65;
    }
    local_1f8 = (pTVar24->Translation).XY.m128d_f64[0];
    dStack_1f0 = (pTVar24->Translation).XY.m128d_f64[1];
    local_1e8 = (pTVar24->Translation).ZW.m128d_f64[0];
    dStack_1e0 = (pTVar24->Translation).ZW.m128d_f64[1];
    dVar14 = (pTVar24->Rotation).XY.m128d_f64[0];
    dVar30 = (pTVar24->Rotation).XY.m128d_f64[1];
    auVar78 = *(undefined1 (*) [16])(pTVar24->Rotation).ZW.m128d_f64;
    dVar49 = auVar78._0_8_;
    dVar42 = (pTVar24->Scale3D).XY.m128d_f64[0];
    dVar47 = (pTVar24->Scale3D).XY.m128d_f64[1];
    dVar52 = (pTVar24->Scale3D).ZW.m128d_f64[0];
    dVar57 = (pTVar24->Scale3D).ZW.m128d_f64[1];
    dVar48 = (this->LocalBoneTransform).field0_0x0._s_0.X;
    dVar66 = (this->LocalBoneTransform).field0_0x0._s_0.Y;
    dVar31 = (this->LocalBoneTransform).field0_0x0._s_0.Z;
    if (this->bRotateX != '\0' || (this->bRotateY != '\0' || this->bRotateZ != '\0')) {
      FBoneContainer::GetParentBoneIndex
                (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,&local_384);
      pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_384);
      local_2b0 = (pTVar24->Translation).XY.m128d_f64[0];
      dStack_2a8 = (pTVar24->Translation).XY.m128d_f64[1];
      local_2a0 = (FSkelMeshRefPoseOverride *)(pTVar24->Translation).ZW.m128d_f64[0];
      local_350._s_0.X = (double)CONCAT44(iStack_37c,local_380) - local_2b0;
      local_350._s_0.Y = (double)CONCAT44(auStack_374,auStack_378) - dStack_2a8;
      local_350._s_0.Z = local_370 - (double)local_2a0;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_350._s_0,&local_268,(double)CONCAT44(uVar84,uVar83),
                 &UE::Math::TVector<double>::ZeroVector);
      local_298.ReferenceController =
           (TReferenceControllerBase<1> *)(pTVar24->Translation).XY.m128d_f64[0];
      dStack_290 = (pTVar24->Translation).XY.m128d_f64[1];
      local_288 = (pTVar24->Translation).ZW.m128d_f64[0];
      local_338._s_0.X =
           (this->BoneLocation).field0_0x0._s_0.X - (double)local_298.ReferenceController;
      local_338._s_0.Y = (this->BoneLocation).field0_0x0._s_0.Y - dStack_290;
      local_338._s_0.Z = (this->BoneLocation).field0_0x0._s_0.Z - local_288;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_338._s_0,&local_280,(double)CONCAT44(uVar84,uVar83),
                 &UE::Math::TVector<double>::ZeroVector);
      UE::Math::TQuat<double>::FindBetweenNormals((TQuat<double> *)&local_318,&local_268,&local_280)
      ;
      UE::Math::TQuat<double>::Euler((TQuat<double> *)&local_318,(TVector<double> *)&local_368._s_0)
      ;
      if (this->bRotateX == '\0') {
        local_368._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      if (this->bRotateY == '\0') {
        local_368._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      if (this->bRotateZ == '\0') {
        local_368._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      pTVar25 = UE::Math::TQuat<double>::MakeFromEuler(local_238,(TVector<double> *)&local_368._s_0)
      ;
      dVar79 = auVar78._8_8_;
      uVar5 = pTVar25->X;
      uVar7 = pTVar25->Y;
      uVar6 = pTVar25->Z;
      uVar8 = pTVar25->W;
      auVar62._8_4_ = (int)uVar5;
      auVar62._0_8_ = uVar5;
      auVar62._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
      dVar59 = (double)uVar5 * dVar30;
      auVar40._8_4_ = (int)uVar8;
      auVar40._0_8_ = uVar8;
      auVar40._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
      auVar46._8_4_ = (int)uVar7;
      auVar46._0_8_ = uVar7;
      auVar46._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
      dVar43 = (double)uVar7 * dVar14;
      auVar41._8_4_ = (int)uVar6;
      auVar41._0_8_ = uVar6;
      auVar41._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
      dVar75 = (double)uVar6 * dVar14;
      dVar63 = auVar62._8_8_ * dVar14 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               auVar40._8_8_ * dVar79 +
               auVar46._8_8_ * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               auVar41._8_8_ * dVar49 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar14 = (double)uVar5 * dVar79 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               (double)uVar8 * dVar14 +
               (double)uVar7 * dVar49 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               (double)uVar6 * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar30 = (double)uVar5 * dVar49 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               (double)uVar8 * dVar30 +
               (double)uVar7 * dVar79 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar75 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar78._8_4_ = SUB84(dVar63,0);
      auVar78._0_8_ =
           dVar59 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           (double)uVar8 * dVar49 +
           dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)uVar6 * dVar79 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      auVar78._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
    }
    pFVar9 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
    local_1b8 = local_388;
    local_1a8._8_4_ = SUB84(dVar30,0);
    local_1a8._0_8_ = dVar14;
    local_1a8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    dStack_170 = 0.0;
    local_198 = auVar78;
    local_188 = dVar48;
    dStack_180 = dVar66;
    local_178 = dVar31;
    local_168 = dVar42;
    dStack_160 = dVar47;
    local_158 = dVar52;
    dStack_150 = dVar57;
    if ((pFVar9 <= &local_1b8) && (&local_1b8 < pFVar9 + (longlong)param_2->ArrayMax * 0x1c)) {
      local_3a0 = (longlong)param_2->ArrayNum;
      local_398 = 0x70;
      local_3b8 = &local_1b8;
      local_3b0 = pFVar9;
      local_3a8 = (longlong)param_2->ArrayMax;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar22) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    iVar23 = param_2->ArrayNum;
    if (iVar23 == param_2->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar23 + 1;
    lVar27 = (longlong)iVar23 * 0x70;
    pFVar10 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar10 + lVar27) = CONCAT44(uStack_1b4,local_1b8);
    *(undefined8 *)(pFVar10 + lVar27 + 8) = uStack_1b0;
    *(undefined8 *)(pFVar10 + lVar27 + 0x10) = local_1a8._0_8_;
    *(undefined8 *)(pFVar10 + lVar27 + 0x10 + 8) = local_1a8._8_8_;
    *(undefined8 *)(pFVar10 + lVar27 + 0x20) = local_198._0_8_;
    *(undefined8 *)(pFVar10 + lVar27 + 0x20 + 8) = local_198._8_8_;
    *(double *)(pFVar10 + lVar27 + 0x30) = local_188;
    *(double *)(pFVar10 + lVar27 + 0x30 + 8) = dStack_180;
    *(double *)(pFVar10 + lVar27 + 0x40) = local_178;
    *(double *)(pFVar10 + lVar27 + 0x40 + 8) = dStack_170;
    *(double *)(pFVar10 + lVar27 + 0x50) = local_168;
    *(double *)(pFVar10 + lVar27 + 0x50 + 8) = dStack_160;
    *(double *)(pFVar10 + lVar27 + 0x60) = local_158;
    *(double *)(pFVar10 + lVar27 + 0x60 + 8) = dStack_150;
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Remaining Time",this->RemainingTime);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446a20

void __thiscall
FAnimNode_SpringBone::GatherDebugData(FAnimNode_SpringBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::GatherDebugData");
  FInputScaleBias::ApplyTo
            ((FInputScaleBias *)&this->_padding_,*(float *)((longlong)&this->_padding_ + 4));
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone,(UObject *)pUVar1,
                         L"AnimNode_SpringBone");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SpringBone.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_58,L"(Alpha: %.1f%% RemainingTime: %.3f)");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48[0].Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48[0].Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48[0].Data.ArrayNum,0,(ForAnyElementType *)&local_58,
               local_48[0].Data.ArrayNum,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// HasPreUpdate @ 146450c80

bool __thiscall FAnimNode_SpringBone::HasPreUpdate(FAnimNode_SpringBone *this)

{
  return true;
}

// InitializeBoneReferences @ 146457d60

void __thiscall
FAnimNode_SpringBone::InitializeBoneReferences(FAnimNode_SpringBone *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::InitializeBoneReferences");
  FBoneReference::Initialize(&this->SpringBone,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645a6c0

void __thiscall
FAnimNode_SpringBone::Initialize_AnyThread
          (FAnimNode_SpringBone *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  this->RemainingTime = 0.0;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bd60

bool __thiscall
FAnimNode_SpringBone::IsValidToEvaluate
          (FAnimNode_SpringBone *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->SpringBone,param_2);
  return bVar1;
}

// PreUpdate @ 146461d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimNode_SpringBone::PreUpdate(FAnimNode_SpringBone *this,UAnimInstance *param_1)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  USkeletalMeshComponent *this_00;
  UWorld *this_01;
  AWorldSettings *pAVar7;
  double *pdVar8;
  float fVar9;
  undefined1 local_28 [32];
  
  this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if ((this_00 != (USkeletalMeshComponent *)0x0) &&
     ((this_01 = (UWorld *)this_00->_padding_, this_01 != (UWorld *)0x0 ||
      (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
      this_01 != (UWorld *)0x0)))) {
    pAVar7 = UWorld::GetWorldSettings(this_01,false,true);
    if ((pAVar7 == (AWorldSettings *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("World->GetWorldSettings()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_SpringBone.cpp"
                           ,0xf8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar7 = UWorld::GetWorldSettings(this_01,false,true);
    fVar9 = (float)(**(code **)(pAVar7->_padding_ + 0x790))(pAVar7);
    this->TimeDilation = fVar9;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (this->bOverrideOwnerVelocity != 0) {
      dVar4 = (this->OwnerVelocityOverride).field0_0x0._s_0.Y;
      dVar1 = (this->OwnerVelocityOverride).field0_0x0._s_0.Z;
      (this->OwnerVelocity).field0_0x0._s_0.X = (this->OwnerVelocityOverride).field0_0x0._s_0.X;
      (this->OwnerVelocity).field0_0x0._s_0.Y = dVar4;
      (this->OwnerVelocity).field0_0x0._s_0.Z = dVar1;
      return;
    }
    if ((this_00->_padding_ != 0) && (this_00->_padding_ == 0)) {
      plVar2 = *(longlong **)(this_00->_padding_ + 0xa8);
      pdVar8 = (double *)(**(code **)(*plVar2 + 0x360))(plVar2,local_28);
      dVar1 = pdVar8[1];
      (this->OwnerVelocity).field0_0x0._s_0.X = *pdVar8;
      (this->OwnerVelocity).field0_0x0._s_0.Y = dVar1;
      (this->OwnerVelocity).field0_0x0._s_0.Z = pdVar8[2];
      return;
    }
    (this->OwnerVelocity).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->OwnerVelocity).field0_0x0._s_0.Y = (double)uVar5;
    (this->OwnerVelocity).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// UpdateInternal @ 146474ab0

void __thiscall
FAnimNode_SpringBone::UpdateInternal(FAnimNode_SpringBone *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SpringBone::UpdateInternal");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  fVar1 = this->TimeDilation * __real_3c088889;
  this->RemainingTime = param_1->DeltaTime + this->RemainingTime;
  this->FixedTimeStep = fVar1;
  FStatsHierarchical::EndMeasurement();
  return;
}

