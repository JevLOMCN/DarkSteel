// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// CalculateGoalPosition @ 14df28440

TVector<double> * __thiscall
FIKChainRetargeter::CalculateGoalPosition
          (FIKChainRetargeter *this,TVector<double> *__return_storage_ptr__,
          FIKRetargetPelvisMotionOp *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          FRetargetSkeleton *param_4,FRetargetSkeleton *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FResolvedBoneChain *pFVar4;
  FResolvedBoneChain *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FRetargetIKChainSettings *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  TVector<double> *pTVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  TVector<double>_u_0 local_158;
  TQuat<double> local_138;
  double local_108;
  TVector<double> local_e8 [8];
  
  pFVar4 = this->SourceBoneChain;
  if (((pFVar4->BoneIndices).ArrayNum < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  pFVar5 = this->SourceBoneChain;
  uVar29 = *(uint *)(pFVar4->BoneIndices).AllocatorInstance.Data;
  iVar3 = (pFVar5->BoneIndices).ArrayNum;
  uVar27 = iVar3 - 1;
  uVar30 = 0;
  if ((int)uVar27 < iVar3) {
    uVar30 = ~uVar27 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  uVar30 = *(uint *)((pFVar5->BoneIndices).AllocatorInstance.Data +
                    (longlong)(pFVar5->BoneIndices).ArrayNum * 4 + -4);
  uVar27 = 0;
  if ((int)uVar29 < param_2->ArrayNum) {
    uVar27 = ~uVar29 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  uVar27 = 0;
  if ((int)uVar30 < param_2->ArrayNum) {
    uVar27 = ~uVar30 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  lVar28 = (longlong)(int)uVar30 * 0x60;
  dVar15 = *(double *)(pFVar7 + lVar28 + 0x20) -
           *(double *)(pFVar6 + (longlong)(int)uVar29 * 0x60 + 0x20);
  dVar31 = *(double *)(pFVar7 + lVar28 + 0x30) -
           *(double *)(pFVar6 + (longlong)(int)uVar29 * 0x60 + 0x30);
  dVar14 = *(double *)(pFVar7 + lVar28 + 0x20 + 8) -
           *(double *)(pFVar6 + (longlong)(int)uVar29 * 0x60 + 0x28);
  dVar10 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar31 * dVar31);
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_3e45798ee0000000 < dVar10) {
    dVar13 = __real_3ff0000000000000 / dVar10;
    uVar17 = dVar15 * dVar13;
    uVar18 = dVar14 * dVar13;
    uVar19 = dVar13 * dVar31;
  }
  dVar10 = dVar10 * this->InvInitialLengthSource;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (param_1 != (FIKRetargetPelvisMotionOp *)0x0) {
    local_108 = (param_1->Target).PelvisTranslationDelta.field0_0x0._s_0.Z;
    uVar1 = (param_1->Settings).AffectIKHorizontal;
    uVar20 = (param_1->Settings).AffectIKVertical;
    uVar21 = uVar1;
    uVar22 = local_108;
    uVar23 = (param_1->Target).PelvisTranslationDelta.field0_0x0._s_0.Y;
    uVar24 = (param_1->Target).PelvisTranslationDelta.field0_0x0._s_0.X;
  }
  dVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y - (double)uVar1;
  pFVar4 = this->TargetBoneChain;
  dVar31 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X - (double)uVar21;
  dVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z - (double)uVar20;
  if (((pFVar4->BoneIndices).ArrayNum < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  uVar29 = *(uint *)(pFVar4->BoneIndices).AllocatorInstance.Data;
  uVar30 = 0;
  if ((int)uVar29 < param_3->ArrayNum) {
    uVar30 = ~uVar29 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TVector<double> *)(*pcVar9)();
    return pTVar26;
  }
  dVar13 = this->InitialTargetChainLength;
  pFVar6 = (param_3->AllocatorInstance).Data;
  pFVar8 = this->Settings;
  auVar2 = *(undefined1 (*) [16])(pFVar6 + (longlong)(int)uVar29 * 0x60 + 0x20);
  dVar15 = SUB168(*(undefined1 (*) [16])(pFVar6 + (longlong)(int)uVar29 * 0x60 + 0x30),0) -
           dVar15 * (double)uVar22;
  dVar32 = auVar2._0_8_ - dVar31 * (double)uVar24;
  dVar14 = auVar2._8_8_ - dVar14 * (double)uVar23;
  dVar16 = (double)uVar17 * dVar10 * dVar13 + dVar32;
  dVar31 = (double)uVar18 * dVar10 * dVar13 + dVar14;
  dVar33 = pFVar8->BlendToSourceTranslation * pFVar8->BlendToSource;
  dVar10 = (double)uVar19 * dVar10 * dVar13 + dVar15;
  if (__real_3f1a36e2e0000000 < dVar33) {
    dVar13 = *(double *)(pFVar7 + lVar28 + 0x20);
    dVar11 = *(double *)(pFVar7 + lVar28 + 0x20 + 8);
    dVar12 = *(double *)(pFVar7 + lVar28 + 0x30);
    if (pFVar8->ApplyPelvisOffsetToSourceGoals != false) {
      dVar13 = dVar13 + (double)uVar21 * (double)uVar24;
      dVar11 = dVar11 + (double)uVar1 * (double)uVar23;
      dVar12 = dVar12 + (double)uVar20 * (double)uVar22;
    }
    dVar16 = dVar16 + (dVar13 - dVar16) * dVar33 * (pFVar8->BlendToSourceWeights).field0_0x0._s_0.X;
    dVar31 = dVar31 + (dVar11 - dVar31) * dVar33 * (pFVar8->BlendToSourceWeights).field0_0x0._s_0.Y;
    dVar10 = dVar10 + (dVar12 - dVar10) * dVar33 * (pFVar8->BlendToSourceWeights).field0_0x0._s_0.Z;
  }
  local_138.Z = (this->GoalOutput).Rotation.ZW.m128d_f64[0];
  local_138.W = (this->GoalOutput).Rotation.ZW.m128d_f64[1];
  local_138.X = (this->GoalOutput).Rotation.XY.m128d_f64[0];
  local_138.Y = (this->GoalOutput).Rotation.XY.m128d_f64[1];
  local_158._s_0.X = (pFVar8->StaticLocalOffset).field0_0x0._s_0.X;
  local_158._s_0.Y = (pFVar8->StaticLocalOffset).field0_0x0._s_0.Y;
  local_158._s_0.Z = (pFVar8->StaticLocalOffset).field0_0x0._s_0.Z;
  pTVar26 = UE::Math::TQuat<double>::RotateVector
                      (&local_138,local_e8,(TVector<double> *)&local_158._s_0);
  dVar13 = pFVar8->Extension;
  dVar16 = dVar16 + (pFVar8->StaticOffset).field0_0x0._s_0.X + (pTVar26->field0_0x0)._s_0.X;
  dVar31 = dVar31 + (pFVar8->StaticOffset).field0_0x0._s_0.Y + (pTVar26->field0_0x0)._s_0.Y;
  uVar29 = SUB84(dVar13 - __real_3ff0000000000000,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = (uint)((ulonglong)(dVar13 - __real_3ff0000000000000) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar10 = (dVar10 + (pFVar8->StaticOffset).field0_0x0._s_0.Z + (pTVar26->field0_0x0)._s_0.Z) *
           pFVar8->ScaleVertical;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar30,uVar29) &&
      (double)CONCAT44(uVar30,uVar29) != __real_3e45798ee2308c3a) {
    dVar16 = (dVar16 - dVar32) * dVar13 + dVar32;
    dVar10 = (dVar10 - dVar15) * dVar13 + dVar15;
    dVar31 = (dVar31 - dVar14) * dVar13 + dVar14;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar16;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar31;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  return __return_storage_ptr__;
}

// CalculateGoalRotation @ 14df28a40

TQuat<double> * __thiscall
FIKChainRetargeter::CalculateGoalRotation
          (FIKChainRetargeter *this,TQuat<double> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FResolvedBoneChain *pFVar3;
  FResolvedBoneChain *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FRetargetIKChainSettings *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  TQuat<double> *pTVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar33;
  undefined1 auVar29 [16];
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  uint uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 local_f8 [192];
  
  pFVar3 = this->SourceBoneChain;
  iVar2 = (pFVar3->BoneIndices).ArrayNum;
  uVar24 = iVar2 - 1;
  uVar43 = 0;
  if ((int)uVar24 < iVar2) {
    uVar43 = ~uVar24 >> 0x1f;
  }
  if ((uVar43 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    pTVar21 = (TQuat<double> *)(*pcVar9)();
    return pTVar21;
  }
  pFVar4 = this->SourceBoneChain;
  uVar43 = *(uint *)((pFVar3->BoneIndices).AllocatorInstance.Data +
                    (longlong)(pFVar3->BoneIndices).ArrayNum * 4 + -4);
  iVar2 = (pFVar4->RefPoseGlobalTransforms).ArrayNum;
  uVar23 = iVar2 - 1;
  uVar24 = 0;
  if ((int)uVar23 < iVar2) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    pTVar21 = (TQuat<double> *)(*pcVar9)();
    return pTVar21;
  }
  pFVar5 = (pFVar4->RefPoseGlobalTransforms).AllocatorInstance.Data;
  pFVar3 = this->TargetBoneChain;
  lVar25 = (longlong)(pFVar4->RefPoseGlobalTransforms).ArrayNum * 0x60;
  iVar2 = (pFVar3->RefPoseGlobalTransforms).ArrayNum;
  uVar23 = iVar2 - 1;
  uVar24 = 0;
  if ((int)uVar23 < iVar2) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    pTVar21 = (TQuat<double> *)(*pcVar9)();
    return pTVar21;
  }
  pFVar6 = (pFVar3->RefPoseGlobalTransforms).AllocatorInstance.Data;
  lVar26 = (longlong)(pFVar3->RefPoseGlobalTransforms).ArrayNum * 0x60;
  uVar24 = 0;
  if ((int)uVar43 < param_1->ArrayNum) {
    uVar24 = ~uVar43 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    pTVar21 = (TQuat<double> *)(*pcVar9)();
    return pTVar21;
  }
  pFVar7 = (param_1->AllocatorInstance).Data;
  lVar22 = (longlong)(int)uVar43 * 0x60;
  pFVar1 = pFVar5 + lVar25 + -0x50;
  dVar34 = *(double *)pFVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar37 = *(double *)(pFVar1 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar40 = *(undefined1 (*) [16])(pFVar7 + lVar22);
  dVar16 = *(double *)(pFVar7 + lVar22 + 0x10);
  dVar17 = *(double *)(pFVar7 + lVar22 + 0x10 + 8);
  pFVar5 = pFVar5 + lVar25 + -0x60;
  dVar35 = *(double *)pFVar5 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = *(double *)(pFVar5 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar11 = auVar40._0_8_;
  dVar33 = auVar40._8_8_;
  auVar45._8_4_ = auVar40._8_4_;
  auVar45._0_8_ = dVar33;
  auVar45._12_4_ = auVar40._12_4_;
  dVar49 = dVar11 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar17 * dVar35 +
           dVar33 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar16 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar52 = dVar11 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar17 * dVar36 +
           auVar45._8_8_ * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar16 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  pFVar5 = pFVar6 + lVar26 + -0x60;
  dVar18 = *(double *)pFVar5;
  dVar19 = *(double *)(pFVar5 + 8);
  pFVar6 = pFVar6 + lVar26 + -0x50;
  dVar41 = *(double *)pFVar6;
  dVar42 = *(double *)(pFVar6 + 8);
  dVar12 = dVar11 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar17 * dVar34 +
           dVar33 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar16 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar34 = dVar11 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar17 * dVar37 +
           dVar33 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar16 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar52,0);
  auVar40._0_8_ = dVar52;
  auVar40._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  dVar11 = dVar42 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar33 = dVar41 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  local_f8._8_4_ = SUB84(dVar33,0);
  local_f8._0_8_ = dVar11;
  local_f8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar47._0_8_ =
       dVar11 + dVar34 * dVar18 +
       dVar52 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar12 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar47._8_8_ =
       (double)local_f8._8_8_ + dVar34 * dVar19 +
       auVar40._8_8_ * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       dVar12 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  pFVar8 = this->Settings;
  dVar11 = pFVar8->BlendToSourceRotation * pFVar8->BlendToSource;
  auVar51._0_8_ =
       dVar49 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar34 * dVar41 +
       dVar52 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar12 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  auVar51._8_8_ =
       dVar49 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
       dVar34 * dVar42 +
       dVar52 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
       dVar12 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (__real_3f1a36e2e0000000 < dVar11) {
    auVar40 = *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x10);
    dVar34 = *(double *)(pFVar7 + lVar22);
    dVar37 = *(double *)(pFVar7 + lVar22 + 8);
    auVar13._4_8_ = dVar41;
    auVar13._0_4_ = auVar40._4_4_;
    auVar38._0_8_ = auVar13._0_8_ << 0x20;
    auVar38._8_4_ = auVar40._8_4_;
    auVar38._12_4_ = auVar40._12_4_;
    auVar39._0_8_ =
         auVar38._8_8_ * auVar51._8_8_ + auVar40._0_8_ * auVar51._0_8_ +
         dVar37 * auVar47._8_8_ + dVar34 * auVar47._0_8_;
    auVar39._8_8_ = auVar40._8_8_;
    dVar35 = __real_3ff0000000000000;
    dVar33 = dVar11;
    if (auVar39._0_8_ < 0.0) {
      dVar35 = __real_bff0000000000000;
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    dVar35 = dVar35 - dVar33;
    dVar33 = dVar11 * auVar40._8_8_;
    dVar49 = auVar51._0_8_ * dVar35 + dVar11 * auVar40._0_8_;
    dVar52 = auVar51._8_8_ * dVar35 + dVar33;
    dVar36 = dVar11 * dVar34 + auVar47._0_8_ * dVar35;
    dVar37 = dVar11 * dVar37 + auVar47._8_8_ * dVar35;
    auVar14._4_8_ = dVar33;
    auVar14._0_4_ = (int)((ulonglong)dVar49 >> 0x20);
    auVar29._0_8_ = auVar14._0_8_ << 0x20;
    auVar29._8_4_ = SUB84(dVar52,0);
    auVar29._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    dVar34 = auVar29._8_8_;
    dVar33 = dVar36 * dVar36 + dVar49 * dVar49;
    dVar35 = dVar37 * dVar37 + dVar34 * dVar34;
    dVar11 = dVar35 + dVar33;
    dVar33 = dVar33 + dVar35;
    auVar10._8_4_ = SUB84(dVar33,0);
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    auVar40 = sqrtpd(auVar39,auVar10);
    uVar27 = -(ulonglong)(__real_3e45798ee0000000 <= dVar11);
    uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= dVar33);
    uVar43 = (uint)(uVar27 >> 0x20);
    uVar24 = (uint)(uVar28 >> 0x20);
    auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
    auVar30._0_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar30._4_4_ =
         ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar30._8_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar30._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar46._0_8_ = uVar27 & (ulonglong)(auVar45._0_8_ * dVar36);
    uVar15 = uVar28 & (ulonglong)(auVar45._8_8_ * dVar37);
    auVar46._8_4_ = (undefined4)uVar15;
    auVar46._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar47 = auVar46 | auVar30;
    auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
    auVar50._0_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar50._4_4_ =
         ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar50._8_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar50._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar31._0_8_ = (ulonglong)(auVar40._0_8_ * dVar49) & uVar27;
    uVar28 = (ulonglong)(auVar40._8_8_ * dVar34) & uVar28;
    auVar31._8_4_ = (undefined4)uVar28;
    auVar31._12_4_ = (undefined4)(uVar28 >> 0x20);
    auVar51 = auVar50 | auVar31;
  }
  pTVar21 = UE::Math::TRotator<double>::Quaternion
                      (&pFVar8->StaticRotationOffset,(TQuat<double> *)local_f8);
  dVar44 = auVar47._0_8_;
  dVar48 = auVar47._8_8_;
  dVar41 = auVar51._0_8_;
  dVar42 = auVar51._8_8_;
  dVar16 = pTVar21->Z;
  dVar17 = pTVar21->W;
  dVar18 = pTVar21->X;
  dVar19 = pTVar21->Y;
  auVar32._8_4_ = auVar47._8_4_;
  auVar32._0_8_ = dVar48;
  auVar32._12_4_ = auVar47._12_4_;
  dVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  __return_storage_ptr__->X =
       dVar44 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar42 * dVar18 +
       dVar48 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar41 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  __return_storage_ptr__->Y =
       dVar44 * dVar16 * dVar37 + dVar42 * dVar19 + auVar32._8_8_ * dVar17 * dVar52 +
       dVar41 * dVar18 * dVar12;
  __return_storage_ptr__->Z =
       dVar44 * dVar19 * dVar11 + dVar42 * dVar16 + dVar48 * dVar18 * dVar34 +
       dVar41 * dVar17 * dVar33;
  __return_storage_ptr__->W =
       dVar44 * dVar18 * dVar35 + dVar42 * dVar17 + dVar48 * dVar19 * dVar49 +
       dVar41 * dVar16 * dVar36;
  return __return_storage_ptr__;
}

// GenerateGoalTransform @ 14df34720

TTransform<double> * __thiscall
FIKChainRetargeter::GenerateGoalTransform
          (FIKChainRetargeter *this,FIKRetargetPelvisMotionOp *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          FRetargetSkeleton *param_4,FRetargetSkeleton *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TVector<double> *pTVar5;
  TQuat<double> local_28;
  
  pTVar4 = CalculateGoalRotation(this,&local_28,param_2);
  dVar1 = pTVar4->Z;
  dVar2 = pTVar4->W;
  dVar3 = pTVar4->Y;
  (this->GoalOutput).Rotation.XY.m128d_f64[0] = pTVar4->X;
  (this->GoalOutput).Rotation.XY.m128d_f64[1] = dVar3;
  (this->GoalOutput).Rotation.ZW.m128d_f64[0] = dVar1;
  (this->GoalOutput).Rotation.ZW.m128d_f64[1] = dVar2;
  pTVar5 = CalculateGoalPosition
                     (this,(TVector<double> *)&local_28,param_1,param_2,param_3,param_4,param_5);
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  dVar1 = (pTVar5->field0_0x0)._s_0.Z;
  (this->GoalOutput).Translation.XY.m128d_f64[0] = (pTVar5->field0_0x0)._s_0.X;
  (this->GoalOutput).Translation.XY.m128d_f64[1] = dVar2;
  (this->GoalOutput).Translation.ZW.m128d_f64[0] = dVar1;
  (this->GoalOutput).Translation.ZW.m128d_f64[1] = 0.0;
  return &this->GoalOutput;
}

// Initialize @ 14df42930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FIKChainRetargeter::Initialize
          (FIKChainRetargeter *this,FResolvedBoneChain *param_1,FResolvedBoneChain *param_2,
          FRetargetIKChainSettings *param_3,FIKRigLogger *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FText *pFVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1->BoneIndices).ArrayNum < 2) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_138,L"IKChainsOp",L"SourceChainLessThanThree",
                         L"IK Chains Op: trying to retarget source bone chain with IK but it has less than 2 joints."
                        );
    FIKRigLogger::LogWarning(param_4,pFVar10);
  }
  else {
    this->SourceBoneChain = param_1;
    this->TargetBoneChain = param_2;
    this->Settings = param_3;
    iVar1 = (param_1->RefPoseGlobalTransforms).ArrayNum;
    if (iVar1 < 1) {
      local_148 = 0;
      local_140 = (longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar1 = (param_1->RefPoseGlobalTransforms).ArrayNum;
    pFVar2 = (param_1->RefPoseGlobalTransforms).AllocatorInstance.Data;
    uVar14 = iVar1 - 1;
    uVar9 = 0;
    if ((int)uVar14 < iVar1) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_148 = (longlong)(int)uVar14;
      local_140 = (longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    local_108 = *(double *)(pFVar2 + 0x20);
    dStack_100 = *(double *)(pFVar2 + 0x28);
    local_f8 = *(double *)(pFVar2 + 0x30);
    pFVar2 = (param_1->RefPoseGlobalTransforms).AllocatorInstance.Data;
    lVar12 = (longlong)(param_1->RefPoseGlobalTransforms).ArrayNum * 0x60;
    local_f0 = *(double *)(pFVar2 + lVar12 + -0x40);
    dStack_e8 = *(double *)(pFVar2 + lVar12 + -0x40 + 8);
    local_e0 = *(double *)(pFVar2 + lVar12 + -0x30);
    fVar15 = (float)SQRT((dStack_100 - dStack_e8) * (dStack_100 - dStack_e8) +
                         (local_108 - local_f0) * (local_108 - local_f0) +
                         (local_f8 - local_e0) * (local_f8 - local_e0));
    if (__real_38d1b717 < fVar15) {
      this->InvInitialLengthSource = (double)(__real_3f800000 / fVar15);
      iVar1 = (param_2->RefPoseGlobalTransforms).ArrayNum;
      if (iVar1 < 1) {
        local_148 = 0;
        local_140 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      iVar1 = (param_2->RefPoseGlobalTransforms).ArrayNum;
      pFVar3 = (param_2->RefPoseGlobalTransforms).AllocatorInstance.Data;
      uVar14 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar14 < iVar1) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_148 = (longlong)(int)uVar14;
        local_140 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      dVar6 = __real_3f1a36e2e0000000;
      pFVar4 = (param_2->RefPoseGlobalTransforms).AllocatorInstance.Data;
      lVar13 = (longlong)(param_2->RefPoseGlobalTransforms).ArrayNum * 0x60;
      dVar16 = *(double *)(pFVar3 + 0x20) - *(double *)(pFVar4 + lVar13 + -0x40);
      dVar17 = *(double *)(pFVar3 + 0x28) - *(double *)(pFVar4 + lVar13 + -0x40 + 8);
      dVar17 = (double)(float)SQRT(dVar17 * dVar17 + dVar16 * dVar16 +
                                   (*(double *)(pFVar3 + 0x30) -
                                   *(double *)(pFVar4 + lVar13 + -0x30)) *
                                   (*(double *)(pFVar3 + 0x30) -
                                   *(double *)(pFVar4 + lVar13 + -0x30)));
      this->InitialTargetChainLength = dVar17;
      if (dVar6 < dVar17) {
        pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                            ((TTransform<double> *)(pFVar4 + lVar13 + -0x60),&local_a8,
                             (TTransform<double> *)(pFVar2 + lVar12 + -0x60));
        dVar17 = (pTVar11->Rotation).XY.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Rotation.XY.m128d_f64[0] =
             (pTVar11->Rotation).XY.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Rotation.XY.m128d_f64[1] = dVar17;
        dVar17 = (pTVar11->Rotation).ZW.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Rotation.ZW.m128d_f64[0] =
             (pTVar11->Rotation).ZW.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Rotation.ZW.m128d_f64[1] = dVar17;
        dVar17 = (pTVar11->Translation).XY.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Translation.XY.m128d_f64[0] =
             (pTVar11->Translation).XY.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Translation.XY.m128d_f64[1] = dVar17;
        dVar17 = (pTVar11->Translation).ZW.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Translation.ZW.m128d_f64[0] =
             (pTVar11->Translation).ZW.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Translation.ZW.m128d_f64[1] = dVar17;
        dVar17 = (pTVar11->Scale3D).XY.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Scale3D.XY.m128d_f64[0] =
             (pTVar11->Scale3D).XY.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Scale3D.XY.m128d_f64[1] = dVar17;
        dVar17 = (pTVar11->Scale3D).ZW.m128d_f64[1];
        (this->InitialTargetEndRelativeToSourceEnd).Scale3D.ZW.m128d_f64[0] =
             (pTVar11->Scale3D).ZW.m128d_f64[0];
        (this->InitialTargetEndRelativeToSourceEnd).Scale3D.ZW.m128d_f64[1] = dVar17;
        return true;
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_118,L"IKChainsOp",L"TargetZeroLengthIK",
                           L"IK Retargeter trying to retarget target bone chain with IK, but it is zero length!"
                          );
      FIKRigLogger::LogWarning(param_4,pFVar10);
      local_138.TextData.Reference = local_118.TextData.Reference;
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_128,L"IKChainsOp",L"SourceZeroLengthIK",
                           L"IK Chains Op: found zero-length source bone chain.");
      FIKRigLogger::LogWarning(param_4,pFVar10);
      local_138.TextData.Reference = local_128.TextData.Reference;
    }
  }
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  return false;
}

