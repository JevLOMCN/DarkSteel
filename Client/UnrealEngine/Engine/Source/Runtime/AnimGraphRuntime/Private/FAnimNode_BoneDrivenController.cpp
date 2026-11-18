// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463d6750

UScriptStruct * __cdecl FAnimNode_BoneDrivenController::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController,(UObject *)pUVar1,
                         L"AnimNode_BoneDrivenController");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.OuterSingleton;
}

// FAnimNode_BoneDrivenController @ 146403600

FAnimNode_BoneDrivenController * __thiscall
FAnimNode_BoneDrivenController::FAnimNode_BoneDrivenController(FAnimNode_BoneDrivenController *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_BoneDrivenController__6B_;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->RangeMin = -1.0;
  (this->DrivingCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  this->RangeMax = 1.0;
  this->RemappedMax = 1.0;
  this->Multiplier = 1.0;
  this->RemappedMin = 0.0;
  (this->TargetBone).BoneName.ComparisonIndex = 0;
  (this->TargetBone).BoneName.Number = 0;
  puVar1 = &(this->TargetBone).field_0x8;
  (this->TargetBone).BoneIndex = -1;
  (this->TargetBone).bUseSkeletonIndex = 0;
  (this->TargetBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bAffectTargetScaleY = '\0';
  this->bAffectTargetScaleZ = '\0';
  this->DestinationMode = Bone;
  this->ModificationMode = AddToInput;
  this->SourceComponent = '\0';
  this->field_0x123 = 0;
  return this;
}

// EvaluateComponentSpaceInternal @ 146426930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_BoneDrivenController::EvaluateComponentSpaceInternal
          (FAnimNode_BoneDrivenController *this,FComponentSpacePoseContext *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FCompactPoseBoneIndex FVar6;
  undefined4 extraout_var;
  uint uVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [112];
  ForAnyElementType local_38;
  
  local_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_d8);
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_BoneDrivenController::EvaluateComponentSpaceInternal");
  if (((this->SourceComponent).Value != '\0') && (this->DestinationMode != Bone)) {
    uVar7 = (this->SourceBone).BoneIndex;
    lVar2 = *(longlong *)(*(longlong *)&(param_1->Pose).Pose.field_0x10 + 0x48);
    iVar1 = *(int *)(lVar2 + 0x38);
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_b8 = (longlong)(int)uVar7;
      local_b0 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
    FVar6 = FBoneReference::GetCompactPoseIndex(&this->SourceBone,(FBoneContainer *)local_a8);
    FCSPose<FCompactPose>::GetLocalSpaceTransform
              (&param_1->Pose,(TTransform<double> *)(local_a8 + 0x10),
               *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar6));
    if ((this->DestinationMode == MorphTarget) || (this->DestinationMode == MaterialParameter)) {
      dVar8 = ExtractSourceValue(this,(TTransform<double> *)(local_a8 + 0x10),
                                 (TTransform<double> *)((longlong)(int)uVar7 * 0x60 + lVar2));
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Set
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve
                 ,this->ParameterName,(float)dVar8);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146429df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_BoneDrivenController::EvaluateSkeletalControl_AnyThread
          (FAnimNode_BoneDrivenController *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  EDrivenBoneModificationMode EVar2;
  FCompactPoseBoneIndex *pFVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FSkelMeshRefPoseOverride *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  FCompactPoseBoneIndex FVar21;
  int iVar22;
  undefined4 extraout_var;
  TQuat<double> *pTVar23;
  TQuat<double> *pTVar24;
  TTransform<double> *pTVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  uint uVar28;
  wchar_t *pwVar29;
  FName *pFVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_5d8 [32];
  FCompactPoseBoneIndex *local_5b8;
  FCompactPoseBoneIndex *local_5b0;
  longlong local_5a8;
  longlong local_5a0;
  undefined8 local_598;
  undefined1 local_588 [4];
  undefined1 local_584 [20];
  FWeakObjectPtr local_570;
  FWeakObjectPtr local_568;
  FWeakObjectPtr FStack_560;
  FWeakObjectPtr local_558;
  FCompactPoseBoneIndex local_550 [2];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [8];
  FWeakObjectPtr local_520;
  FWeakObjectPtr FStack_518;
  FWeakObjectPtr local_510;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  TVector<double>_u_0 local_4c0;
  TQuat<double> local_4a8;
  ForAnyElementType local_488;
  double dStack_480;
  double local_478;
  FScriptContainerElement *local_470;
  double dStack_468;
  double local_460;
  FScriptContainerElement *local_458;
  double dStack_450;
  double local_448;
  FSkelMeshRefPoseOverride *local_440;
  FSharedReferencer<1> FStack_438;
  double local_430;
  FSkelMeshRefPoseOverride *local_428;
  TReferenceControllerBase<1> *pTStack_420;
  double local_418;
  FSkelMeshRefPoseOverride *local_410;
  TReferenceControllerBase<1> *pTStack_408;
  double local_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  TQuat<double> local_3b8;
  TQuat<double> local_398;
  TQuat<double> local_378;
  TQuat<double> local_358;
  FCompactPoseBoneIndex local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FCompactPoseBoneIndex local_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  FWeakObjectPtr local_298;
  FWeakObjectPtr FStack_290;
  FWeakObjectPtr local_288;
  FWeakObjectPtr FStack_280;
  FWeakObjectPtr local_278;
  FWeakObjectPtr FStack_270;
  FWeakObjectPtr local_268;
  undefined8 uStack_260;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_BoneDrivenController::EvaluateSkeletalControl_AnyThread");
  if (param_2->ArrayNum != 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutBoneTransforms.Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_BoneDrivenController.cpp"
                        ,0x43,L"");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((this->SourceComponent).Value != '\0') && (this->DestinationMode == Bone)) {
    uVar28 = (this->SourceBone).BoneIndex;
    lVar27 = *(longlong *)(*(longlong *)&(param_1->Pose).Pose.field_0x10 + 0x48);
    iVar22 = *(int *)(lVar27 + 0x38);
    uVar20 = 0;
    if ((int)uVar28 < iVar22) {
      uVar20 = ~uVar28 >> 0x1f;
    }
    if (uVar20 == 0) {
      local_5b8 = (FCompactPoseBoneIndex *)(longlong)(int)uVar28;
      local_5b0 = (FCompactPoseBoneIndex *)(longlong)iVar22;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar27 = *(longlong *)(lVar27 + 0x30);
    FVar21 = FBoneReference::GetCompactPoseIndex(&this->SourceBone,(FBoneContainer *)local_528);
    FCSPose<FCompactPose>::GetLocalSpaceTransform
              (&param_1->Pose,&local_138,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar21));
    FVar5 = (FWeakObjectPtr)
            ExtractSourceValue(this,&local_138,
                               (TTransform<double> *)((longlong)(int)uVar28 * 0x60 + lVar27));
    FBoneReference::GetCompactPoseIndex(&this->TargetBone,(FBoneContainer *)local_584);
    FCSPose<FCompactPose>::GetLocalSpaceTransform
              (&param_1->Pose,&local_198,(FCompactPoseBoneIndex)local_584._0_4_);
    EVar2 = this->ModificationMode;
    local_570 = (FWeakObjectPtr)local_198.Translation.ZW.m128d_f64[0];
    local_584._4_8_ = local_198.Translation.XY.m128d_f64[0];
    local_584._12_8_ = local_198.Translation.XY.m128d_f64[1];
    local_558 = (FWeakObjectPtr)local_198.Scale3D.ZW.m128d_f64[0];
    local_538._8_8_ = local_198.Rotation.ZW.m128d_f64[1];
    local_538._0_8_ = local_198.Rotation.ZW.m128d_f64[0];
    local_568 = (FWeakObjectPtr)local_198.Scale3D.XY.m128d_f64[0];
    FStack_560 = (FWeakObjectPtr)local_198.Scale3D.XY.m128d_f64[1];
    local_548._8_8_ = local_198.Rotation.XY.m128d_f64[1];
    local_548._0_8_ = local_198.Rotation.XY.m128d_f64[0];
    if (EVar2 == AddToInput) {
      if (this->bAffectTargetTranslationX != '\0') {
        local_584._4_8_ = local_198.Translation.XY.m128d_f64[0] + (double)FVar5;
      }
      if (this->bAffectTargetTranslationY != '\0') {
        local_584._12_8_ = local_198.Translation.XY.m128d_f64[1] + (double)FVar5;
      }
      if (this->bAffectTargetTranslationZ != '\0') {
        local_570 = (FWeakObjectPtr)(local_198.Translation.ZW.m128d_f64[0] + (double)FVar5);
      }
      if (this->bAffectTargetRotationX != '\0' ||
          (this->bAffectTargetRotationY != '\0' || this->bAffectTargetRotationZ != '\0')) {
        local_510.ObjectIndex = 0;
        local_510.ObjectSerialNumber = 0;
        local_520.ObjectIndex = 0;
        local_520.ObjectSerialNumber = 0;
        FStack_518.ObjectIndex = 0;
        FStack_518.ObjectSerialNumber = 0;
        if (this->bAffectTargetRotationX != '\0') {
          local_520 = FVar5;
        }
        if (this->bAffectTargetRotationY != '\0') {
          FStack_518 = FVar5;
        }
        if (this->bAffectTargetRotationZ != '\0') {
          local_510 = FVar5;
        }
        pTVar23 = UE::Math::TQuat<double>::MakeFromEuler
                            (&local_3b8,(TVector<double> *)(local_528 + 8));
        dVar8 = pTVar23->Z;
        dVar9 = pTVar23->W;
        dVar10 = pTVar23->X;
        dVar11 = pTVar23->Y;
        dVar6 = (double)local_548._0_8_ * dVar9 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar10 * (double)local_538._8_8_ +
                dVar8 * (double)local_548._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                (double)local_538._0_8_ * dVar11 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar7 = (double)local_548._0_8_ * dVar8 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar11 * (double)local_538._8_8_ +
                dVar9 * (double)local_548._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                (double)local_538._0_8_ * dVar10 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar32 = SUB84(dVar7,0);
        uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_3f8._8_4_ = uVar32;
        local_3f8._0_8_ = dVar6;
        local_3f8._12_4_ = uVar33;
        dVar7 = (double)local_548._0_8_ * dVar11 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar8 * (double)local_538._8_8_ +
                dVar10 * (double)local_548._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                (double)local_538._0_8_ * dVar9 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar8 = (double)local_548._0_8_ * dVar10 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar9 * (double)local_538._8_8_ +
                dVar11 * (double)local_548._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                (double)local_538._0_8_ * dVar8 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar34 = SUB84(dVar8,0);
        uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_548._8_4_ = uVar32;
        local_548._0_8_ = dVar6;
        local_548._12_4_ = uVar33;
        local_3e8._8_4_ = uVar34;
        local_3e8._0_8_ = dVar7;
        local_3e8._12_4_ = uVar35;
        local_538._8_4_ = uVar34;
        local_538._0_8_ = dVar7;
        local_538._12_4_ = uVar35;
      }
      if ((bool)this->bAffectTargetScaleX) {
        local_568 = (FWeakObjectPtr)((double)local_568 + (double)FVar5);
      }
      if (this->bAffectTargetScaleY != 0) {
        FStack_560 = (FWeakObjectPtr)((double)FStack_560 + (double)FVar5);
      }
      if (this->bAffectTargetScaleZ != '\0') {
        local_558 = (FWeakObjectPtr)((double)local_558 + (double)FVar5);
      }
    }
    else if (EVar2 == ReplaceComponent) {
      if (this->bAffectTargetTranslationX != '\0') {
        local_584._4_8_ = FVar5;
      }
      if (this->bAffectTargetTranslationY != '\0') {
        local_584._12_8_ = FVar5;
      }
      if (this->bAffectTargetTranslationZ != '\0') {
        local_570 = FVar5;
      }
      if (this->bAffectTargetRotationX != '\0' ||
          (this->bAffectTargetRotationY != '\0' || this->bAffectTargetRotationZ != '\0')) {
        UE::Math::TQuat<double>::Euler
                  ((TQuat<double> *)local_548,(TVector<double> *)&local_4f0._s_0);
        if (this->bAffectTargetRotationX != '\0') {
          local_4f0._0_8_ = FVar5;
        }
        if (this->bAffectTargetRotationY != '\0') {
          local_4f0._8_8_ = FVar5;
        }
        if (this->bAffectTargetRotationZ != '\0') {
          local_4f0._16_8_ = FVar5;
        }
        pTVar23 = UE::Math::TQuat<double>::MakeFromEuler
                            (&local_398,(TVector<double> *)&local_4f0._s_0);
        local_548._0_8_ = pTVar23->X;
        local_548._8_8_ = pTVar23->Y;
        local_538._0_8_ = pTVar23->Z;
        local_538._8_8_ = pTVar23->W;
      }
      if ((bool)this->bAffectTargetScaleX) {
        local_568 = FVar5;
      }
      if (this->bAffectTargetScaleY != 0) {
        FStack_560 = FVar5;
      }
      if (this->bAffectTargetScaleZ != '\0') {
        local_558 = FVar5;
      }
    }
    else if (EVar2 == AddToRefPose) {
      pTVar25 = FBoneContainer::GetRefPoseTransform
                          (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,
                           (FCompactPoseBoneIndex *)local_584);
      pFVar26 = (FScriptContainerElement *)(pTVar25->Translation).XY.m128d_f64[0];
      dVar6 = (pTVar25->Translation).XY.m128d_f64[1];
      dVar7 = (pTVar25->Translation).ZW.m128d_f64[0];
      pFVar12 = (FSkelMeshRefPoseOverride *)(pTVar25->Scale3D).XY.m128d_f64[0];
      pTVar13 = (TReferenceControllerBase<1> *)(pTVar25->Scale3D).XY.m128d_f64[1];
      dVar8 = (pTVar25->Scale3D).ZW.m128d_f64[0];
      if (this->bAffectTargetTranslationX != '\0') {
        local_584._4_8_ = (double)pFVar26 + (double)FVar5;
        local_488.Data = pFVar26;
        dStack_480 = dVar6;
        local_478 = dVar7;
      }
      if (this->bAffectTargetTranslationY != '\0') {
        local_584._12_8_ = dVar6 + (double)FVar5;
        local_470 = pFVar26;
        dStack_468 = dVar6;
        local_460 = dVar7;
      }
      if (this->bAffectTargetTranslationZ != '\0') {
        local_570 = (FWeakObjectPtr)(dVar7 + (double)FVar5);
        local_458 = pFVar26;
        dStack_450 = dVar6;
        local_448 = dVar7;
      }
      if (this->bAffectTargetRotationX != '\0' ||
          (this->bAffectTargetRotationY != '\0' || this->bAffectTargetRotationZ != '\0')) {
        local_4a8.X = (double)(pTVar25->Rotation).XY.m128d_f64[0];
        local_4a8.Y = (pTVar25->Rotation).XY.m128d_f64[1];
        local_4a8.Z = (double)(pTVar25->Rotation).ZW.m128d_f64[0];
        local_4a8.W = (pTVar25->Rotation).ZW.m128d_f64[1];
        UE::Math::TQuat<double>::Euler(&local_4a8,(TVector<double> *)&local_4c0._s_0);
        UE::Math::TQuat<double>::Euler
                  ((TQuat<double> *)local_548,(TVector<double> *)&local_4d8._s_0);
        local_508._s_0.Z = 0.0;
        local_508._s_0.X = 0.0;
        local_508._s_0.Y = 0.0;
        if (this->bAffectTargetRotationX != '\0') {
          local_4d8._s_0.X = local_4c0._s_0.X;
          local_508._s_0.X = (double)FVar5;
        }
        if (this->bAffectTargetRotationY != '\0') {
          local_4d8._s_0.Y = local_4c0._s_0.Y;
          local_508._s_0.Y = (double)FVar5;
        }
        if (this->bAffectTargetRotationZ != '\0') {
          local_4d8._s_0.Z = local_4c0._s_0.Z;
          local_508._s_0.Z = (double)FVar5;
        }
        pTVar23 = UE::Math::TQuat<double>::MakeFromEuler
                            (&local_378,(TVector<double> *)&local_4d8._s_0);
        pTVar24 = UE::Math::TQuat<double>::MakeFromEuler
                            (&local_358,(TVector<double> *)&local_508._s_0);
        dVar9 = pTVar23->X;
        dVar10 = pTVar23->Y;
        dVar11 = pTVar23->Z;
        dVar14 = pTVar23->W;
        dVar15 = pTVar24->Z;
        dVar16 = pTVar24->W;
        dVar17 = pTVar24->X;
        dVar18 = pTVar24->Y;
        dVar6 = dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar17 * dVar14 +
                dVar15 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar7 = dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar18 * dVar14 +
                dVar16 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar32 = SUB84(dVar7,0);
        uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar7 = dVar9 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar15 * dVar14 +
                dVar17 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar16 * dVar14 +
                dVar18 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar34 = SUB84(dVar9,0);
        uVar35 = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_3d8._8_4_ = uVar32;
        local_3d8._0_8_ = dVar6;
        local_3d8._12_4_ = uVar33;
        local_548._8_4_ = uVar32;
        local_548._0_8_ = dVar6;
        local_548._12_4_ = uVar33;
        local_3c8._8_4_ = uVar34;
        local_3c8._0_8_ = dVar7;
        local_3c8._12_4_ = uVar35;
        local_538._8_4_ = uVar34;
        local_538._0_8_ = dVar7;
        local_538._12_4_ = uVar35;
      }
      if ((bool)this->bAffectTargetScaleX) {
        local_568 = (FWeakObjectPtr)((double)pFVar12 + (double)FVar5);
        local_440 = pFVar12;
        FStack_438.ReferenceController = pTVar13;
        local_430 = dVar8;
      }
      if (this->bAffectTargetScaleY != 0) {
        FStack_560 = (FWeakObjectPtr)((double)pTVar13 + (double)FVar5);
        local_428 = pFVar12;
        pTStack_420 = pTVar13;
        local_418 = dVar8;
      }
      if (this->bAffectTargetScaleZ != '\0') {
        local_558 = (FWeakObjectPtr)(dVar8 + (double)FVar5);
        local_410 = pFVar12;
        pTStack_408 = pTVar13;
        local_400 = dVar8;
      }
    }
    else {
      local_588[0] = 0;
      `FAnimNode_BoneDrivenController::EvaluateSkeletalControl_AnyThread'::__l115::<lambda_1>::
      operator()(local_588);
    }
    pFVar30 = &(this->TargetBone).BoneName;
    local_1f8.Rotation.ZW.m128d_f64[0] = (double)local_538._0_8_;
    local_1f8.Rotation.ZW.m128d_f64[1] = (double)local_538._8_8_;
    local_1f8.Translation.XY.m128d_f64[0] = (double)local_584._4_8_;
    local_1f8.Translation.XY.m128d_f64[1] = (double)local_584._12_8_;
    local_1f8.Translation.ZW.m128d_f64[0] = (double)local_570;
    local_1f8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1f8.Scale3D.XY.m128d_f64[0] = (double)local_568;
    local_1f8.Scale3D.XY.m128d_f64[1] = (double)FStack_560;
    local_1f8.Rotation.XY.m128d_f64[0] = (double)local_548._0_8_;
    local_1f8.Rotation.XY.m128d_f64[1] = (double)local_548._8_8_;
    local_1f8.Scale3D.ZW.m128d_f64[0] = (double)local_558;
    local_1f8.Scale3D.ZW.m128d_f64[1] = 0.0;
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,local_550);
    if (local_550[0] == (FCompactPoseBoneIndex)0xffffffff) {
      pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
      local_2b8 = local_1f8.Rotation.XY.m128d_f64[0];
      dStack_2b0 = local_1f8.Rotation.XY.m128d_f64[1];
      local_2a8 = local_1f8.Rotation.ZW.m128d_f64[0];
      dStack_2a0 = local_1f8.Rotation.ZW.m128d_f64[1];
      local_2c8 = (FCompactPoseBoneIndex)local_584._0_4_;
      local_298 = (FWeakObjectPtr)local_1f8.Translation.XY.m128d_f64[0];
      FStack_290 = (FWeakObjectPtr)local_1f8.Translation.XY.m128d_f64[1];
      local_288 = (FWeakObjectPtr)local_1f8.Translation.ZW.m128d_f64[0];
      FStack_280 = (FWeakObjectPtr)local_1f8.Translation.ZW.m128d_f64[1];
      local_278 = (FWeakObjectPtr)local_1f8.Scale3D.XY.m128d_f64[0];
      FStack_270 = (FWeakObjectPtr)local_1f8.Scale3D.XY.m128d_f64[1];
      local_268 = (FWeakObjectPtr)local_1f8.Scale3D.ZW.m128d_f64[0];
      uStack_260 = local_1f8.Scale3D.ZW.m128d_f64[1];
      if ((pFVar3 <= &local_2c8) && (&local_2c8 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) {
        local_5a0 = (longlong)param_2->ArrayNum;
        local_598 = 0x70;
        local_5b8 = &local_2c8;
        local_5b0 = pFVar3;
        local_5a8 = (longlong)param_2->ArrayMax;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar22 = param_2->ArrayNum;
      if (iVar22 == param_2->ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar22 + 1;
      lVar27 = (longlong)iVar22 * 0x70;
      pFVar26 = (param_2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar26 + lVar27) = CONCAT44(uStack_2c4,local_2c8);
      *(undefined8 *)(pFVar26 + lVar27 + 8) = uStack_2c0;
      *(double *)(pFVar26 + lVar27 + 0x10) = local_2b8;
      *(double *)(pFVar26 + lVar27 + 0x10 + 8) = dStack_2b0;
      *(double *)(pFVar26 + lVar27 + 0x20) = local_2a8;
      *(double *)(pFVar26 + lVar27 + 0x20 + 8) = dStack_2a0;
      *(FWeakObjectPtr *)(pFVar26 + lVar27 + 0x30) = local_298;
      ((FWeakObjectPtr *)(pFVar26 + lVar27 + 0x30))[1] = FStack_290;
      *(FWeakObjectPtr *)(pFVar26 + lVar27 + 0x40) = local_288;
      ((FWeakObjectPtr *)(pFVar26 + lVar27 + 0x40))[1] = FStack_280;
      *(FWeakObjectPtr *)(pFVar26 + lVar27 + 0x50) = local_278;
      ((FWeakObjectPtr *)(pFVar26 + lVar27 + 0x50))[1] = FStack_270;
      iVar22 = local_268.ObjectIndex;
      iVar31 = local_268.ObjectSerialNumber;
      uVar32 = (undefined4)uStack_260;
      uVar33 = uStack_260._4_4_;
    }
    else {
      pTVar25 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_550[0]);
      local_258.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_258.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_258.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_258.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_258.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_258.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_258.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_258.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_258.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_258.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_258.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_258.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_258.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_258.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_258,&local_1f8,pTVar25);
      pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
      local_328 = local_258.Rotation.XY.m128d_f64[0];
      dStack_320 = local_258.Rotation.XY.m128d_f64[1];
      local_318 = local_258.Rotation.ZW.m128d_f64[0];
      dStack_310 = local_258.Rotation.ZW.m128d_f64[1];
      local_338 = (FCompactPoseBoneIndex)local_584._0_4_;
      local_308 = local_258.Translation.XY.m128d_f64[0];
      dStack_300 = local_258.Translation.XY.m128d_f64[1];
      local_2f8 = local_258.Translation.ZW.m128d_f64[0];
      dStack_2f0 = local_258.Translation.ZW.m128d_f64[1];
      local_2e8 = local_258.Scale3D.XY.m128d_f64[0];
      dStack_2e0 = local_258.Scale3D.XY.m128d_f64[1];
      local_2d8 = local_258.Scale3D.ZW.m128d_f64[0];
      uStack_2d0 = local_258.Scale3D.ZW.m128d_f64[1];
      if ((pFVar3 <= &local_338) && (&local_338 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) {
        local_5a0 = (longlong)param_2->ArrayNum;
        local_598 = 0x70;
        local_5b8 = &local_338;
        local_5b0 = pFVar3;
        local_5a8 = (longlong)param_2->ArrayMax;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar22 = param_2->ArrayNum;
      if (iVar22 == param_2->ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar22 + 1;
      lVar27 = (longlong)iVar22 * 0x70;
      pFVar26 = (param_2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar26 + lVar27) = CONCAT44(uStack_334,local_338);
      *(undefined8 *)(pFVar26 + lVar27 + 8) = uStack_330;
      *(double *)(pFVar26 + lVar27 + 0x10) = local_328;
      *(double *)(pFVar26 + lVar27 + 0x10 + 8) = dStack_320;
      *(double *)(pFVar26 + lVar27 + 0x20) = local_318;
      *(double *)(pFVar26 + lVar27 + 0x20 + 8) = dStack_310;
      *(double *)(pFVar26 + lVar27 + 0x30) = local_308;
      *(double *)(pFVar26 + lVar27 + 0x30 + 8) = dStack_300;
      *(double *)(pFVar26 + lVar27 + 0x40) = local_2f8;
      *(double *)(pFVar26 + lVar27 + 0x40 + 8) = dStack_2f0;
      *(double *)(pFVar26 + lVar27 + 0x50) = local_2e8;
      *(double *)(pFVar26 + lVar27 + 0x50 + 8) = dStack_2e0;
      iVar22 = (int)local_2d8;
      iVar31 = local_2d8._4_4_;
      uVar32 = (undefined4)uStack_2d0;
      uVar33 = uStack_2d0._4_4_;
    }
    pFVar26 = pFVar26 + lVar27 + 0x60;
    *(int *)pFVar26 = iVar22;
    *(int *)(pFVar26 + 4) = iVar31;
    *(undefined4 *)(pFVar26 + 8) = uVar32;
    *(undefined4 *)(pFVar26 + 0xc) = uVar33;
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Driving Bone",&(this->SourceBone).BoneName);
    if (this->DestinationMode == Bone) {
      pwVar29 = L"Driven Bone";
    }
    else {
      pFVar30 = &this->ParameterName;
      pwVar29 = L"Driven Parameter";
    }
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),pwVar29
               ,pFVar30);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ExtractSourceValue @ 14643f230

double __thiscall
FAnimNode_BoneDrivenController::ExtractSourceValue
          (FAnimNode_BoneDrivenController *this,TTransform<double> *param_1,
          TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  UCurveFloat *this_00;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double adStack_180 [4];
  double adStack_160 [4];
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8 [4];
  TVector<double> local_d8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  bVar3 = (this->SourceComponent).Value;
  if (bVar3 < 4) {
    local_108 = (param_1->Translation).XY.m128d_f64[0];
    dStack_100 = (param_1->Translation).XY.m128d_f64[1];
    local_f8[1] = (param_2->Translation).XY.m128d_f64[0];
    local_f8[2] = (param_2->Translation).XY.m128d_f64[1];
    local_f8[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_f8[3] = (param_2->Translation).ZW.m128d_f64[0];
    adStack_160[1] = local_108 - local_f8[1];
    adStack_160[3] = local_f8[0] - local_f8[3];
    adStack_160[2] = dStack_100 - local_f8[2];
    if (2 < bVar3 - 1) {
      adStack_180[0] = 2.70442912742132e-314;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        dVar13 = (double)(*pcVar4)();
        return dVar13;
      }
    }
    dVar16 = adStack_160[(int)(uint)bVar3];
  }
  else if (bVar3 < 7) {
    dVar17 = (param_2->Rotation).ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar18 = (param_2->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar5 = (param_2->Rotation).XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar6 = (param_2->Rotation).XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar7 = (param_1->Rotation).XY.m128d_f64[0];
    dVar8 = (param_1->Rotation).XY.m128d_f64[1];
    dVar9 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar13 = dVar7 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar10 * dVar6 +
             dVar8 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar16 = dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar10 * dVar18 +
             dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_128._8_4_ = SUB84(dVar13,0);
    local_128._0_8_ =
         dVar7 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar10 * dVar5 +
         dVar8 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_128._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_118._8_4_ = SUB84(dVar16,0);
    local_118._0_8_ =
         dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar10 * dVar17 +
         dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar9 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_118._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    adStack_180[0] = 2.70442927712322e-314;
    UE::Math::TQuat<double>::Euler((TQuat<double> *)local_128,&local_d8);
    bVar3 = (this->SourceComponent).Value;
    if (2 < bVar3 - 4) {
      adStack_180[0] = 2.7044293176366e-314;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        dVar13 = (double)(*pcVar4)();
        return dVar13;
      }
    }
    dVar16 = local_f8[bVar3];
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
    dVar13 = auVar1._0_8_;
    if (bVar3 == 7) {
      dVar16 = (param_1->Scale3D).XY.m128d_f64[0];
      dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
      auVar2 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
      dVar6 = (param_1->Scale3D).ZW.m128d_f64[0];
      if (dVar16 <= dVar5) {
        dVar16 = dVar5;
      }
      uVar14 = auVar2._0_4_;
      uVar15 = auVar2._4_4_;
      if (auVar2._0_8_ <= auVar2._8_8_) {
        uVar14 = auVar2._8_4_;
        uVar15 = auVar2._12_4_;
      }
      if (dVar16 <= dVar6) {
        dVar16 = dVar6;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= dVar13) {
        uVar14 = auVar1._0_4_;
        uVar15 = auVar1._4_4_;
      }
      dVar16 = dVar16 - (double)CONCAT44(uVar15,uVar14);
    }
    else {
      local_c0 = (param_1->Scale3D).XY.m128d_f64[0];
      dStack_b8 = (param_1->Scale3D).XY.m128d_f64[1];
      local_a8 = (param_2->Scale3D).XY.m128d_f64[0];
      dStack_a0 = (param_2->Scale3D).XY.m128d_f64[1];
      local_b0 = (param_1->Scale3D).ZW.m128d_f64[0];
      local_98 = dVar13;
      local_140 = local_c0 - local_a8;
      local_130 = local_b0 - dVar13;
      local_138 = dStack_b8 - dStack_a0;
      if (2 < bVar3 - 8) {
        adStack_180[0] = 2.70442941990819e-314;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7ab,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          dVar13 = (double)(*pcVar4)();
          return dVar13;
        }
      }
      dVar16 = adStack_180[bVar3];
    }
  }
  this_00 = (this->DrivingCurve).field0_0x0.DebugPtr;
  if (this_00 == (UCurveFloat *)0x0) {
    if (this->bUseRange != 0) {
      dVar13 = this->RangeMax - this->RangeMin;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar13 = (dVar16 - this->RangeMin) / dVar13;
      }
      else {
        dVar13 = __real_3ff0000000000000;
        if (dVar16 < this->RangeMax) {
          dVar13 = 0.0;
        }
      }
      if (__real_3ff0000000000000 <= dVar13) {
        dVar13 = __real_3ff0000000000000;
      }
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      dVar16 = dVar13 * (this->RemappedMax - this->RemappedMin) + this->RemappedMin;
    }
    return (double)this->Multiplier * dVar16;
  }
  adStack_180[0] = 2.70442944164708e-314;
  fVar12 = UCurveFloat::GetFloatValue(this_00,(float)dVar16);
  return (double)fVar12;
}

// GatherDebugData @ 146442860

void __thiscall
FAnimNode_BoneDrivenController::GatherDebugData
          (FAnimNode_BoneDrivenController *this,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BoneDrivenController::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController,(UObject *)pUVar1,
                         L"AnimNode_BoneDrivenController");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BoneDrivenController.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_68,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_68,"(",1);
  ::FString::PrintfImpl(&local_58,L"Alpha: %.1f%%");
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this->DestinationMode == Bone) {
    ::FName::ToString(&(this->TargetBone).BoneName,local_38);
    ::FName::ToString(&(this->SourceBone).BoneName,&local_48);
    ::FString::PrintfImpl(&local_58,L"  DrivingBone: %s\nDrivenBone: %s");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar2.Data = local_38[0].Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FName::ToString(&this->ParameterName,&local_48);
    ::FName::ToString(&(this->SourceBone).BoneName,local_38);
    ::FString::PrintfImpl(&local_58,L"  DrivingBone: %s\nDrivenParameter: %s");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_68.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456180

void __thiscall
FAnimNode_BoneDrivenController::InitializeBoneReferences
          (FAnimNode_BoneDrivenController *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_BoneDrivenController::InitializeBoneReferences");
  FBoneReference::Initialize(&this->SourceBone,param_1);
  FBoneReference::Initialize(&this->TargetBone,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b590

bool __thiscall
FAnimNode_BoneDrivenController::IsValidToEvaluate
          (FAnimNode_BoneDrivenController *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->SourceBone,param_2);
  if (bVar1) {
    bVar1 = FBoneReference::IsValidToEvaluate(&this->TargetBone,param_2);
    if ((bVar1) || (this->DestinationMode != Bone)) {
      return true;
    }
  }
  return false;
}

// operator() @ 1504ebf50

bool __thiscall
`FAnimNode_BoneDrivenController::EvaluateSkeletalControl_AnyThread'::__l115::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2237517909259714399>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2237517909259714399>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

