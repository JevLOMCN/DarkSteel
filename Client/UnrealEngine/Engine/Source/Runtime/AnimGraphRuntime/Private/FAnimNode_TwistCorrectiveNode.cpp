// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticStruct @ 1463e1b60

UScriptStruct * __cdecl FAnimNode_TwistCorrectiveNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TwistCorrectiveNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_TwistCorrectiveNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode,(UObject *)pUVar1,
                         L"AnimNode_TwistCorrectiveNode");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_TwistCorrectiveNode.OuterSingleton;
}

// FAnimNode_TwistCorrectiveNode @ 146406040

FAnimNode_TwistCorrectiveNode * __thiscall
FAnimNode_TwistCorrectiveNode::FAnimNode_TwistCorrectiveNode(FAnimNode_TwistCorrectiveNode *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_TwistCorrectiveNode__6B_;
  (this->BaseFrame).Bone.BoneName.ComparisonIndex = 0;
  (this->BaseFrame).Bone.BoneName.Number = 0;
  puVar1 = &(this->BaseFrame).Bone.field_0x8;
  (this->BaseFrame).Bone.BoneIndex = -1;
  (this->BaseFrame).Bone.bUseSkeletonIndex = 0;
  (this->BaseFrame).Bone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  FAxis::FAxis(&(this->BaseFrame).Axis,&UE::Math::TVector<double>::ForwardVector);
  (this->TwistFrame).Bone.BoneName.ComparisonIndex = 0;
  (this->TwistFrame).Bone.BoneName.Number = 0;
  puVar1 = &(this->TwistFrame).Bone.field_0x8;
  (this->TwistFrame).Bone.BoneIndex = -1;
  (this->TwistFrame).Bone.bUseSkeletonIndex = 0;
  (this->TwistFrame).Bone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  FAxis::FAxis(&(this->TwistFrame).Axis,&UE::Math::TVector<double>::ForwardVector);
  FAxis::FAxis(&this->TwistPlaneNormalAxis,&UE::Math::TVector<double>::ForwardVector);
  this->RangeMax = 90.0;
  this->RemappedMin = 0.0;
  this->RemappedMax = 1.0;
  (this->CurveName).ComparisonIndex = 0;
  (this->CurveName).Number = 0;
  return this;
}

// CacheBones_AnyThread @ 14641a3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_TwistCorrectiveNode::CacheBones_AnyThread
          (FAnimNode_TwistCorrectiveNode *this,FAnimationCacheBonesContext *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  FBoneContainer *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  float fVar19;
  FWeakObjectPtr FVar20;
  bool bVar21;
  FCompactPoseBoneIndex FVar22;
  undefined4 extraout_var;
  TTransform<double> *pTVar23;
  undefined4 extraout_var_00;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  double adVar27 [2];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar42;
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 unaff_XMM7 [16];
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [24];
  double local_2d0;
  FWeakObjectPtr local_2b8;
  FReferenceSkeleton *local_2a0;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwistCorrectiveNode::CacheBones_AnyThread");
  FAnimNode_SkeletalControlBase::CacheBones_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  lVar4 = *(longlong *)param_1;
  if (*(longlong *)(lVar4 + 0x158) == 0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2821110184175206020>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                        ,0x17c,"SkeletalMeshComponent");
    if (bVar21) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x158);
  lVar5 = *(longlong *)param_1;
  local_1d8.Rotation.XY.m128d_f64[0] = *(double *)(lVar4 + 0x1f0);
  local_1d8.Rotation.XY.m128d_f64[1] = *(double *)(lVar4 + 0x1f8);
  local_1d8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar4 + 0x200);
  local_1d8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar4 + 0x208);
  local_1d8.Translation.XY.m128d_f64[0] = *(double *)(lVar4 + 0x210);
  local_1d8.Translation.XY.m128d_f64[1] = *(double *)(lVar4 + 0x218);
  local_1d8.Translation.ZW.m128d_f64[0] = *(double *)(lVar4 + 0x220);
  local_1d8.Translation.ZW.m128d_f64[1] = *(double *)(lVar4 + 0x228);
  local_1d8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar4 + 0x230);
  local_1d8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar4 + 0x238);
  local_1d8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar4 + 0x240);
  local_1d8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar4 + 0x248);
  if (*(longlong *)(lVar5 + 0x660) == 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar21) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = *(FBoneContainer **)(lVar5 + 0x660);
  FVar22 = FBoneReference::GetCompactPoseIndex(&(this->BaseFrame).Bone,(FBoneContainer *)local_2e8);
  pTVar23 = FAnimationRuntime::GetComponentSpaceRefPose
                      (&local_178,(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar22),pFVar6);
  local_298.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_298.Rotation.XY.m128d_f64[0] =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_298.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_298.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_298.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_298.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_298.Rotation.ZW.m128d_f64[0] =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_298.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_298.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_298.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_298.Translation.ZW.m128d_f64[0] =
       (FScriptContainerElement *)(double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_298.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_298.Scale3D.ZW.m128d_f64[0] =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_298,pTVar23,&local_1d8);
  FVar22 = FBoneReference::GetCompactPoseIndex
                     (&(this->TwistFrame).Bone,(FBoneContainer *)(local_2e8 + 4));
  pTVar23 = FAnimationRuntime::GetComponentSpaceRefPose
                      (&local_118,(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar22),pFVar6);
  local_238.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_238.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_238.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_238.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar28._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
  auVar28._0_8_ = auVar28._8_8_;
  adVar27[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  adVar27[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_238.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_238.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_238.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_238.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_238.Scale3D.XY.m128d_f64 = adVar27;
  UE::Math::TTransform<double>::Multiply(&local_238,pTVar23,&local_1d8);
  fVar19 = __real_3f800000;
  dVar8 = local_298.Rotation.XY.m128d_f64[1];
  FVar14.Data = local_298.Rotation.ZW.m128d_f64[0];
  FVar15.Data = local_298.Rotation.XY.m128d_f64[0];
  dVar9 = local_298.Rotation.ZW.m128d_f64[1];
  if ((this->BaseFrame).Axis.bInLocalSpace == false) {
    local_2d0 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar1 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.X;
    dVar10 = *(double *)((longlong)&(this->BaseFrame).Axis.Axis.field0_0x0 + 8);
  }
  else {
    auVar3 = *(undefined1 (*) [16])&(this->BaseFrame).Axis.Axis.field0_0x0;
    dVar1 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Z;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = dVar1;
    dVar52 = auVar3._8_8_;
    auVar49._0_8_ = dVar52 * (double)FVar15.Data - dVar8 * auVar3._0_8_;
    auVar49._8_8_ = dVar1 * dVar8 - (double)FVar14.Data * dVar52;
    auVar28 = blendpd(auVar3,auVar44,2);
    auVar44 = blendpd((undefined1  [16])local_298.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_298.Rotation.ZW.m128d_f64,2);
    auVar45._0_8_ = auVar28._0_8_ * (double)FVar14.Data - auVar44._0_8_ * dVar1;
    auVar45._8_8_ = auVar28._8_8_ * dVar9 - auVar44._8_8_ * 0.0;
    auVar28 = blendpd(auVar49,auVar45,2);
    dVar10 = auVar49._8_8_ + auVar49._8_8_;
    dVar11 = auVar45._0_8_ + auVar45._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar50._0_8_ = auVar28._0_8_ + auVar28._0_8_;
    auVar50._8_8_ = auVar28._8_8_ + auVar28._8_8_;
    auVar35._8_4_ = SUB84(dVar11,0);
    auVar35._0_8_ = dVar10;
    auVar35._12_4_ = uVar26;
    auVar29._8_4_ = SUB84(dVar11,0);
    auVar29._0_8_ = dVar10;
    auVar29._12_4_ = uVar26;
    auVar28 = blendpd(auVar29,auVar50,2);
    auVar36._0_8_ = auVar35._8_8_ * (double)FVar15.Data - dVar10 * dVar8;
    auVar36._8_8_ = auVar50._0_8_ * dVar8 - dVar11 * (double)FVar14.Data;
    adVar27[0] = auVar28._0_8_ * (double)FVar14.Data - auVar50._0_8_ * auVar44._0_8_;
    adVar27[1] = auVar28._8_8_ * dVar9 - auVar50._8_8_ * auVar44._8_8_;
    auVar28 = blendpd(auVar36,(undefined1  [16])adVar27,2);
    unaff_XMM7._0_8_ = auVar50._0_8_ * dVar9 + dVar1 + auVar28._0_8_;
    unaff_XMM7._8_8_ = auVar50._8_8_ * dVar9 + 0.0 + auVar28._8_8_;
    dVar1 = dVar10 * dVar9 + auVar3._0_8_ + auVar36._8_8_;
    dVar10 = dVar11 * dVar9 + dVar52 + adVar27[0];
    local_2d0 = unaff_XMM7._0_8_;
  }
  if ((this->TwistFrame).Axis.bInLocalSpace == false) {
    local_2a0 = (FReferenceSkeleton *)(this->TwistFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar11 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.X;
    dVar52 = *(double *)((longlong)&(this->TwistFrame).Axis.Axis.field0_0x0 + 8);
  }
  else {
    unaff_XMM7 = *(undefined1 (*) [16])&(this->TwistFrame).Axis.Axis.field0_0x0;
    dVar43 = local_238.Rotation.XY.m128d_f64[1];
    dVar11 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar55 = unaff_XMM7._8_8_;
    dVar52 = local_238.Rotation.ZW.m128d_f64[0];
    dVar2 = local_238.Rotation.ZW.m128d_f64[1];
    auVar53._0_8_ = dVar55 * local_238.Rotation.XY.m128d_f64[0] - unaff_XMM7._0_8_ * dVar43;
    auVar53._8_8_ = dVar11 * dVar43 - dVar55 * dVar52;
    auVar45 = blendpd((undefined1  [16])local_238.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_238.Rotation.ZW.m128d_f64,2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar11;
    auVar28 = blendpd(unaff_XMM7,auVar3,2);
    auVar30._0_8_ = auVar28._0_8_ * dVar52 - dVar11 * auVar45._0_8_;
    auVar30._8_8_ = auVar28._8_8_ * dVar2 - auVar45._8_8_ * 0.0;
    auVar28 = blendpd(auVar53,auVar30,2);
    dVar12 = auVar53._8_8_ + auVar53._8_8_;
    dVar13 = auVar30._0_8_ + auVar30._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar54._0_8_ = auVar28._0_8_ + auVar28._0_8_;
    auVar54._8_8_ = auVar28._8_8_ + auVar28._8_8_;
    auVar37._8_4_ = SUB84(dVar13,0);
    auVar37._0_8_ = dVar12;
    auVar37._12_4_ = uVar26;
    auVar31._8_4_ = SUB84(dVar13,0);
    auVar31._0_8_ = dVar12;
    auVar31._12_4_ = uVar26;
    auVar28 = blendpd(auVar31,auVar54,2);
    auVar38._0_8_ = auVar37._8_8_ * local_238.Rotation.XY.m128d_f64[0] - dVar12 * dVar43;
    auVar38._8_8_ = auVar54._0_8_ * dVar43 - dVar13 * dVar52;
    adVar27[0] = auVar28._0_8_ * dVar52 - auVar54._0_8_ * auVar45._0_8_;
    adVar27[1] = auVar28._8_8_ * dVar2 - auVar54._8_8_ * auVar45._8_8_;
    auVar28 = blendpd(auVar38,(undefined1  [16])adVar27,2);
    local_2a0 = (FReferenceSkeleton *)(auVar54._0_8_ * dVar2 + dVar11 + auVar28._0_8_);
    dVar11 = dVar12 * dVar2 + unaff_XMM7._0_8_ + auVar38._8_8_;
    dVar52 = dVar13 * dVar2 + dVar55 + adVar27[0];
  }
  if ((this->TwistPlaneNormalAxis).bInLocalSpace == false) {
    local_2b8 = (FWeakObjectPtr)(this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.Z;
    dVar8 = (this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.X;
    dVar9 = *(double *)((longlong)&(this->TwistPlaneNormalAxis).Axis.field0_0x0 + 8);
  }
  else {
    auVar3 = *(undefined1 (*) [16])&(this->TwistPlaneNormalAxis).Axis.field0_0x0;
    dVar2 = (this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.Z;
    unaff_XMM7._8_8_ = 0.0;
    unaff_XMM7._0_8_ = dVar2;
    dVar43 = auVar3._8_8_;
    auVar46._0_8_ = dVar43 * (double)FVar15.Data - dVar8 * auVar3._0_8_;
    auVar46._8_8_ = dVar2 * dVar8 - (double)FVar14.Data * dVar43;
    auVar28 = blendpd(auVar3,unaff_XMM7,2);
    auVar45 = blendpd((undefined1  [16])local_298.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_298.Rotation.ZW.m128d_f64,2);
    auVar32._0_8_ = auVar28._0_8_ * (double)FVar14.Data - auVar45._0_8_ * dVar2;
    auVar32._8_8_ = auVar28._8_8_ * dVar9 - auVar45._8_8_ * 0.0;
    dVar12 = auVar46._8_8_ + auVar46._8_8_;
    dVar13 = auVar32._0_8_ + auVar32._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar28 = blendpd(auVar46,auVar32,2);
    auVar47._0_8_ = auVar28._0_8_ + auVar28._0_8_;
    auVar47._8_8_ = auVar28._8_8_ + auVar28._8_8_;
    auVar39._8_4_ = SUB84(dVar13,0);
    auVar39._0_8_ = dVar12;
    auVar39._12_4_ = uVar26;
    auVar33._8_4_ = SUB84(dVar13,0);
    auVar33._0_8_ = dVar12;
    auVar33._12_4_ = uVar26;
    auVar28 = blendpd(auVar33,auVar47,2);
    auVar40._0_8_ = auVar39._8_8_ * (double)FVar15.Data - dVar8 * dVar12;
    auVar40._8_8_ = auVar47._0_8_ * dVar8 - (double)FVar14.Data * dVar13;
    adVar27[0] = auVar28._0_8_ * (double)FVar14.Data - auVar45._0_8_ * auVar47._0_8_;
    adVar27[1] = auVar28._8_8_ * dVar9 - auVar45._8_8_ * auVar47._8_8_;
    auVar28 = blendpd(auVar40,(undefined1  [16])adVar27,2);
    local_2b8 = (FWeakObjectPtr)(dVar9 * auVar47._0_8_ + dVar2 + auVar28._0_8_);
    dVar8 = dVar9 * dVar12 + auVar3._0_8_ + auVar40._8_8_;
    dVar9 = dVar9 * dVar13 + dVar43 + adVar27[0];
  }
  FVar20 = local_2b8;
  uVar42 = auVar28._8_8_;
  auVar16._4_8_ = adVar27[1];
  auVar16._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar34._0_8_ = auVar16._0_8_ << 0x20;
  auVar34._8_4_ = SUB84(dVar10,0);
  auVar34._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar17._4_8_ = unaff_XMM7._8_8_;
  auVar17._0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar51._0_8_ = auVar17._0_8_ << 0x20;
  auVar51._8_4_ = SUB84(dVar9,0);
  auVar51._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  fVar48 = 0.0;
  fVar25 = 0.0;
  fVar24 = (float)(auVar34._8_8_ * auVar51._8_8_ + dVar1 * dVar8 + local_2d0 * (double)local_2b8);
  if (0.0 < fVar24) {
    if (__real_3f800000 <= fVar24) {
      fVar24 = __real_3f800000;
    }
    fVar25 = asinf(fVar24);
    uVar42 = auVar28._8_8_;
  }
  auVar18._4_8_ = uVar42;
  auVar18._0_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar41._0_8_ = auVar18._0_8_ << 0x20;
  auVar41._8_4_ = SUB84(dVar52,0);
  auVar41._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  fVar24 = (float)(auVar41._8_8_ * auVar51._8_8_ + dVar11 * dVar8 +
                  (double)local_2a0 * (double)FVar20);
  if (0.0 < fVar24) {
    if (fVar19 <= fVar24) {
      fVar24 = fVar19;
    }
    fVar48 = asinf(fVar24);
  }
  this->ReferenceAngle = fVar48 - fVar25;
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateComponentSpaceInternal @ 146426af0

void __thiscall
FAnimNode_TwistCorrectiveNode::EvaluateComponentSpaceInternal
          (FAnimNode_TwistCorrectiveNode *this,FComponentSpacePoseContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  FCompactPoseBoneIndex FVar11;
  undefined4 extraout_var;
  TTransform<double> *pTVar12;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  double unaff_XMM7_Qb;
  double dVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar46;
  float fVar47;
  double local_138;
  double local_120;
  double local_108;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_TwistCorrectiveNode::EvaluateComponentSpaceInternal");
  FVar11 = FBoneReference::GetCompactPoseIndex
                     (&(this->BaseFrame).Bone,(FBoneContainer *)&stack0x00000008);
  pTVar12 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar11));
  auVar22 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
  auVar15 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
  if ((this->BaseFrame).Axis.bInLocalSpace == false) {
    local_138 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar2 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.X;
    dVar7 = *(double *)((longlong)&(this->BaseFrame).Axis.Axis.field0_0x0 + 8);
  }
  else {
    auVar20 = *(undefined1 (*) [16])&(this->BaseFrame).Axis.Axis.field0_0x0;
    dVar2 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar29 = auVar22._8_8_;
    dVar7 = auVar15._0_8_;
    dVar43 = auVar20._8_8_;
    auVar36._0_8_ = dVar43 * auVar22._0_8_ - dVar29 * auVar20._0_8_;
    auVar36._8_8_ = dVar2 * dVar29 - dVar7 * dVar43;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar2;
    auVar14 = blendpd(auVar20,auVar14,2);
    dVar3 = auVar15._8_8_;
    auVar32 = blendpd(auVar22,auVar15,2);
    auVar15._0_8_ = auVar14._0_8_ * dVar7 - auVar32._0_8_ * dVar2;
    auVar15._8_8_ = auVar14._8_8_ * dVar3 - auVar32._8_8_ * 0.0;
    auVar14 = blendpd(auVar36,auVar15,2);
    dVar5 = auVar36._8_8_ + auVar36._8_8_;
    dVar6 = auVar15._0_8_ + auVar15._0_8_;
    uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar37._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar37._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    auVar21._8_4_ = SUB84(dVar6,0);
    auVar21._0_8_ = dVar5;
    auVar21._12_4_ = uVar46;
    auVar33._8_4_ = SUB84(dVar6,0);
    auVar33._0_8_ = dVar5;
    auVar33._12_4_ = uVar46;
    auVar15 = blendpd(auVar33,auVar37,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar22._0_8_ - dVar5 * dVar29;
    auVar22._8_8_ = auVar37._0_8_ * dVar29 - dVar6 * dVar7;
    in_XMM1._0_8_ = auVar15._0_8_ * dVar7 - auVar37._0_8_ * auVar32._0_8_;
    in_XMM1._8_8_ = auVar15._8_8_ * dVar3 - auVar37._8_8_ * auVar32._8_8_;
    in_XMM2 = blendpd(auVar22,in_XMM1,2);
    local_138 = auVar37._0_8_ * dVar3 + dVar2 + in_XMM2._0_8_;
    unaff_XMM7_Qb = auVar37._8_8_ * dVar3 + 0.0 + in_XMM2._8_8_;
    dVar2 = dVar5 * dVar3 + auVar20._0_8_ + auVar22._8_8_;
    dVar7 = dVar6 * dVar3 + dVar43 + in_XMM1._0_8_;
  }
  FVar11 = FBoneReference::GetCompactPoseIndex
                     (&(this->TwistFrame).Bone,(FBoneContainer *)&stack0x00000008);
  pTVar12 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar11));
  auVar22 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
  auVar15 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
  if ((this->TwistFrame).Axis.bInLocalSpace == false) {
    local_108 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar3 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.X;
    dVar5 = *(double *)((longlong)&(this->TwistFrame).Axis.Axis.field0_0x0 + 8);
  }
  else {
    auVar20 = *(undefined1 (*) [16])&(this->TwistFrame).Axis.Axis.field0_0x0;
    dVar3 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.Z;
    dVar30 = auVar22._8_8_;
    dVar29 = auVar15._0_8_;
    dVar44 = auVar20._8_8_;
    auVar38._0_8_ = dVar44 * auVar22._0_8_ - dVar30 * auVar20._0_8_;
    auVar38._8_8_ = dVar3 * dVar30 - dVar29 * dVar44;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = dVar3;
    auVar14 = blendpd(auVar20,auVar32,2);
    dVar43 = auVar15._8_8_;
    auVar33 = blendpd(auVar22,auVar15,2);
    auVar16._0_8_ = auVar14._0_8_ * dVar29 - auVar33._0_8_ * dVar3;
    auVar16._8_8_ = auVar14._8_8_ * dVar43 - auVar33._8_8_ * 0.0;
    auVar15 = blendpd(auVar38,auVar16,2);
    dVar5 = auVar38._8_8_ + auVar38._8_8_;
    dVar6 = auVar16._0_8_ + auVar16._0_8_;
    uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar39._0_8_ = auVar15._0_8_ + auVar15._0_8_;
    auVar39._8_8_ = auVar15._8_8_ + auVar15._8_8_;
    auVar23._8_4_ = SUB84(dVar6,0);
    auVar23._0_8_ = dVar5;
    auVar23._12_4_ = uVar46;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar46;
    auVar15 = blendpd(auVar17,auVar39,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar22._0_8_ - dVar5 * dVar30;
    auVar24._8_8_ = auVar39._0_8_ * dVar30 - dVar6 * dVar29;
    in_XMM1._0_8_ = auVar15._0_8_ * dVar29 - auVar39._0_8_ * auVar33._0_8_;
    in_XMM1._8_8_ = auVar15._8_8_ * dVar43 - auVar39._8_8_ * auVar33._8_8_;
    in_XMM2 = blendpd(auVar24,in_XMM1,2);
    local_108 = auVar39._0_8_ * dVar43 + dVar3 + in_XMM2._0_8_;
    unaff_XMM7_Qb = auVar39._8_8_ * dVar43 + 0.0 + in_XMM2._8_8_;
    dVar3 = dVar5 * dVar43 + auVar20._0_8_ + auVar24._8_8_;
    dVar5 = dVar6 * dVar43 + dVar44 + in_XMM1._0_8_;
  }
  FVar11 = FBoneReference::GetCompactPoseIndex
                     (&(this->BaseFrame).Bone,(FBoneContainer *)&stack0x00000008);
  pTVar12 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var_01,FVar11));
  fVar1 = __real_3f800000;
  auVar22 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
  auVar15 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
  if ((this->TwistPlaneNormalAxis).bInLocalSpace == false) {
    local_120 = (this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.Z;
    dVar6 = (this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.X;
    dVar29 = *(double *)((longlong)&(this->TwistPlaneNormalAxis).Axis.field0_0x0 + 8);
  }
  else {
    auVar20 = *(undefined1 (*) [16])&(this->TwistPlaneNormalAxis).Axis.field0_0x0;
    dVar6 = (this->TwistPlaneNormalAxis).Axis.field0_0x0._s_0.Z;
    dVar31 = auVar22._8_8_;
    dVar30 = auVar15._0_8_;
    dVar45 = auVar20._8_8_;
    auVar40._0_8_ = dVar45 * auVar22._0_8_ - dVar31 * auVar20._0_8_;
    auVar40._8_8_ = dVar6 * dVar31 - dVar30 * dVar45;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar6;
    auVar14 = blendpd(auVar20,auVar4,2);
    dVar44 = auVar15._8_8_;
    auVar33 = blendpd(auVar22,auVar15,2);
    auVar18._0_8_ = auVar14._0_8_ * dVar30 - auVar33._0_8_ * dVar6;
    auVar18._8_8_ = auVar14._8_8_ * dVar44 - auVar33._8_8_ * 0.0;
    auVar15 = blendpd(auVar40,auVar18,2);
    dVar29 = auVar40._8_8_ + auVar40._8_8_;
    dVar43 = auVar18._0_8_ + auVar18._0_8_;
    uVar46 = (undefined4)((ulonglong)dVar43 >> 0x20);
    auVar41._0_8_ = auVar15._0_8_ + auVar15._0_8_;
    auVar41._8_8_ = auVar15._8_8_ + auVar15._8_8_;
    auVar25._8_4_ = SUB84(dVar43,0);
    auVar25._0_8_ = dVar29;
    auVar25._12_4_ = uVar46;
    auVar19._8_4_ = SUB84(dVar43,0);
    auVar19._0_8_ = dVar29;
    auVar19._12_4_ = uVar46;
    auVar15 = blendpd(auVar19,auVar41,2);
    auVar26._0_8_ = auVar25._8_8_ * auVar22._0_8_ - dVar29 * dVar31;
    auVar26._8_8_ = auVar41._0_8_ * dVar31 - dVar43 * dVar30;
    in_XMM1._0_8_ = auVar15._0_8_ * dVar30 - auVar41._0_8_ * auVar33._0_8_;
    in_XMM1._8_8_ = auVar15._8_8_ * dVar44 - auVar41._8_8_ * auVar33._8_8_;
    in_XMM2 = blendpd(auVar26,in_XMM1,2);
    local_120 = auVar41._0_8_ * dVar44 + dVar6 + in_XMM2._0_8_;
    unaff_XMM7_Qb = auVar41._8_8_ * dVar44 + 0.0 + in_XMM2._8_8_;
    dVar6 = dVar29 * dVar44 + auVar20._0_8_ + auVar26._8_8_;
    dVar29 = dVar43 * dVar44 + dVar45 + in_XMM1._0_8_;
  }
  uVar28 = in_XMM2._8_8_;
  auVar8._4_8_ = in_XMM1._8_8_;
  auVar8._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar20._0_8_ = auVar8._0_8_ << 0x20;
  auVar20._8_4_ = SUB84(dVar7,0);
  auVar20._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9._4_8_ = unaff_XMM7_Qb;
  auVar9._0_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar42._0_8_ = auVar9._0_8_ << 0x20;
  auVar42._8_4_ = SUB84(dVar29,0);
  auVar42._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  fVar34 = 0.0;
  fVar47 = 0.0;
  fVar13 = (float)(auVar20._8_8_ * auVar42._8_8_ + dVar2 * dVar6 + local_138 * local_120);
  if (0.0 < fVar13) {
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    fVar47 = asinf(fVar13);
    uVar28 = in_XMM2._8_8_;
  }
  auVar10._4_8_ = uVar28;
  auVar10._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar27._0_8_ = auVar10._0_8_ << 0x20;
  auVar27._8_4_ = SUB84(dVar5,0);
  auVar27._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  fVar13 = (float)(auVar27._8_8_ * auVar42._8_8_ + dVar3 * dVar6 + local_108 * local_120);
  if (0.0 < fVar13) {
    if (fVar1 <= fVar13) {
      fVar13 = fVar1;
    }
    fVar34 = asinf(fVar13);
  }
  fVar1 = this->ReferenceAngle;
  fVar13 = this->RangeMaxInRadian;
  fVar35 = fVar34 - fVar47;
  if (fVar13 <= fVar34 - fVar47) {
    fVar35 = fVar13;
  }
  if (fVar35 <= fVar1) {
    fVar35 = fVar1;
  }
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Set
            ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
             this->CurveName,
             (((this->RemappedMax - this->RemappedMin) * (fVar35 - fVar1)) / (fVar13 - fVar1)) *
             *(float *)((longlong)&this->_padding_ + 4));
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446e80

void __thiscall
FAnimNode_TwistCorrectiveNode::GatherDebugData
          (FAnimNode_TwistCorrectiveNode *this,FNodeDebugData *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwistCorrectiveNode::GatherDebugData");
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAngle @ 146447690

float __thiscall
FAnimNode_TwistCorrectiveNode::GetAngle
          (FAnimNode_TwistCorrectiveNode *this,TVector<double> *param_1,TVector<double> *param_2,
          TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<double>_u_0 local_78 [4];
  
  FAxis::GetTransformedAxis
            (&this->TwistPlaneNormalAxis,(TVector<double> *)&local_78[0]._s_0,param_3);
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar1 = (float)((double)local_78[0]._8_8_ * (param_1->field0_0x0)._s_0.Y +
                  (double)local_78[0]._0_8_ * (param_1->field0_0x0)._s_0.X +
                 (double)local_78[0]._16_8_ * (param_1->field0_0x0)._s_0.Z);
  if (0.0 < fVar1) {
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    fVar3 = asinf(fVar1);
  }
  fVar1 = (float)((double)local_78[0]._8_8_ * (param_2->field0_0x0)._s_0.Y +
                  (double)local_78[0]._0_8_ * (param_2->field0_0x0)._s_0.X +
                 (double)local_78[0]._16_8_ * (param_2->field0_0x0)._s_0.Z);
  if (0.0 < fVar1) {
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    fVar2 = asinf(fVar1);
  }
  return fVar2 - fVar3;
}

// GetReferenceAxis @ 14644e7c0

TVector<double> * __thiscall
FAnimNode_TwistCorrectiveNode::GetReferenceAxis
          (FAnimNode_TwistCorrectiveNode *this,TVector<double> *__return_storage_ptr__,
          FCSPose<FCompactPose> *param_1,FReferenceBoneFrame *param_2)

{
  FCompactPoseBoneIndex FVar1;
  undefined4 extraout_var;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  FVar1 = FBoneReference::GetCompactPoseIndex(&param_2->Bone,(FBoneContainer *)&stack0x00000010);
  pTVar2 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                     (param_1,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar1));
  local_68.Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (pTVar2->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (pTVar2->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (pTVar2->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (pTVar2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (pTVar2->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (pTVar2->Scale3D).ZW.m128d_f64[1];
  FAxis::GetTransformedAxis(&param_2->Axis,__return_storage_ptr__,&local_68);
  return __return_storage_ptr__;
}

// InitializeBoneReferences @ 146458040

void __thiscall
FAnimNode_TwistCorrectiveNode::InitializeBoneReferences
          (FAnimNode_TwistCorrectiveNode *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwistCorrectiveNode::InitializeBoneReferences");
  FBoneReference::Initialize(&(this->BaseFrame).Bone,param_1);
  FBoneReference::Initialize(&(this->TwistFrame).Bone,param_1);
  FAxis::Initialize(&(this->BaseFrame).Axis);
  FAxis::Initialize(&(this->TwistFrame).Axis);
  this->RangeMaxInRadian = this->RangeMax * __real_3c8efa35;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645a9a0

void __thiscall
FAnimNode_TwistCorrectiveNode::Initialize_AnyThread
          (FAnimNode_TwistCorrectiveNode *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwistCorrectiveNode::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645beb0

bool __thiscall
FAnimNode_TwistCorrectiveNode::IsValidToEvaluate
          (FAnimNode_TwistCorrectiveNode *this,USkeleton *param_1,FBoneContainer *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  
  bVar4 = FBoneReference::IsValidToEvaluate(&(this->BaseFrame).Bone,param_2);
  dVar3 = __real_3ff0000000000000;
  if ((bVar4) &&
     (dVar5 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.X,
     dVar1 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Y,
     dVar2 = (this->BaseFrame).Axis.Axis.field0_0x0._s_0.Z,
     dVar5 = __real_3ff0000000000000 - (dVar1 * dVar1 + dVar5 * dVar5 + dVar2 * dVar2),
     (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
     __real_3f847ae140000000)) {
    bVar4 = FBoneReference::IsValidToEvaluate(&(this->TwistFrame).Bone,param_2);
    if ((bVar4) &&
       (dVar5 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.X,
       dVar1 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.Y,
       dVar2 = (this->TwistFrame).Axis.Axis.field0_0x0._s_0.Z,
       dVar3 = dVar3 - (dVar1 * dVar1 + dVar5 * dVar5 + dVar2 * dVar2),
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3f847ae140000000)) {
      return true;
    }
  }
  return false;
}

// PostSerialize @ 1464602c0

void __thiscall
FAnimNode_TwistCorrectiveNode::PostSerialize(FAnimNode_TwistCorrectiveNode *this,FArchive *param_1)

{
  return;
}

// Serialize @ 1464678f0

bool __thiscall
FAnimNode_TwistCorrectiveNode::Serialize(FAnimNode_TwistCorrectiveNode *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  return false;
}

