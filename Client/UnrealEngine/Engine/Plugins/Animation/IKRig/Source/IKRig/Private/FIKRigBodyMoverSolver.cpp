// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 19

// Initialize @ 14dee6790

void __thiscall
FIKRigBodyMoverSolver::Initialize(FIKRigBodyMoverSolver *this,FIKRigSkeleton *param_1)

{
  int iVar1;
  
  iVar1 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).StartBone);
  this->BodyBoneIndex = iVar1;
  return;
}

// Solve @ 14dee67c0

void __thiscall
FIKRigBodyMoverSolver::Solve
          (FIKRigBodyMoverSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  TVector<double> *pTVar22;
  FName *pFVar23;
  float *pfVar24;
  FName *pFVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FName *pFVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  uint uVar45;
  double dVar44;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1a8 [24];
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  FScriptContainerElement *local_170;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TQuat<double> local_118;
  FName local_e8;
  TVector<double> local_c8 [6];
  
  iVar19 = this->BodyBoneIndex;
  if ((iVar19 != -1) && ((this->AllGoalSettings).ArrayNum != 0)) {
    if (((iVar19 < 0) || ((param_1->RefPoseGlobal).ArrayNum <= iVar19)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InIKRigSkeleton.RefPoseGlobal.IsValidIndex(BodyBoneIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigBodyMoverSolver.cpp"
                            ,0x20,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar43 = (this->AllGoalSettings).ArrayNum;
    uVar21 = (ulonglong)(int)uVar43;
    pFVar27 = (this->AllGoalSettings).AllocatorInstance.Data;
    local_170 = pFVar27 + uVar21 * 0x20;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    pFVar28 = (FName *)(pFVar27 + 0x10);
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    while( true ) {
      pFVar1 = local_170;
      if ((this->AllGoalSettings).ArrayNum != (int)uVar21) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FIKRigBodyMoverGoalSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar27 == pFVar1) break;
      pFVar25 = (FName *)(param_2->Goals).AllocatorInstance.Data;
      pFVar23 = pFVar25 + (longlong)(param_2->Goals).ArrayNum * 0x16;
      while( true ) {
        if (pFVar25 == pFVar23) goto LAB_14dee6f7a;
        if (*pFVar25 == pFVar28[-1]) break;
        pFVar25 = pFVar25 + 0x16;
      }
      uVar18 = FIKRigSkeleton::GetBoneIndexFromName(param_1,*pFVar28);
      uVar45 = 0;
      if ((int)uVar18 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar45 = ~uVar18 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
      dVar36 = (double)(float)pFVar28[1].ComparisonIndex.Value;
      pFVar1 = pFVar5 + (longlong)(int)uVar18 * 0x60 + 0x20;
      local_1c8 = *(double *)pFVar1;
      dStack_1c0 = *(double *)(pFVar1 + 8);
      local_1b8 = *(double *)(pFVar5 + (longlong)(int)uVar18 * 0x60 + 0x30);
      local_e8 = pFVar25[0xf];
      local_178 = ((double)local_e8 - local_1b8) * dVar36 + local_1b8;
      local_188 = ((double)pFVar25[0xd] - local_1c8) * dVar36 + local_1c8;
      dStack_180 = ((double)pFVar25[0xe] - dStack_1c0) * dVar36 + dStack_1c0;
      if (((local_1d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = local_1d8.ArrayNum;
      if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
      }
      local_1d8.ArrayNum = iVar19 + 1;
      *(double *)(local_1d8.AllocatorInstance.Data + (longlong)iVar19 * 0x18) = local_1c8;
      *(double *)(local_1d8.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 8) = dStack_1c0;
      *(double *)(local_1d8.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 0x10) = local_1b8;
      if (((local_1e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 <
           local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = local_1e8.ArrayNum;
      if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
      }
      pFVar27 = pFVar27 + 0x20;
      local_1e8.ArrayNum = iVar19 + 1;
      pFVar28 = pFVar28 + 4;
      uVar21 = (ulonglong)uVar43;
      *(double *)(local_1e8.AllocatorInstance.Data + (longlong)iVar19 * 0x18) = local_188;
      *(double *)(local_1e8.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 8) = dStack_180;
      *(double *)(local_1e8.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 0x10) = local_178;
    }
    GetRotationFromDeformedPoints
              (&local_118,&local_1d8,&local_1e8,(TVector<double> *)&local_150._s_0,
               (TVector<double> *)&local_168._s_0);
    uVar43 = this->BodyBoneIndex;
    pfVar24 = &(this->Settings).PositionPositiveZ;
    if (local_168._s_0.Z - local_150._s_0.Z <= 0.0) {
      pfVar24 = &(this->Settings).PositionNegativeZ;
    }
    fVar2 = *pfVar24;
    pfVar24 = &(this->Settings).PositionPositiveY;
    if (local_168._s_0.Y - local_150._s_0.Y <= 0.0) {
      pfVar24 = &(this->Settings).PositionNegativeY;
    }
    fVar3 = *pfVar24;
    pfVar24 = &(this->Settings).PositionPositiveX;
    if (local_168._s_0.X - local_150._s_0.X <= 0.0) {
      pfVar24 = &(this->Settings).PositionNegativeX;
    }
    fVar4 = *pfVar24;
    uVar45 = 0;
    if ((int)uVar43 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar45 = ~uVar43 >> 0x1f;
    }
    if ((uVar45 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar27 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    dVar9 = (double)(this->Settings).PositionAlpha;
    lVar26 = (longlong)(int)uVar43 * 0x60;
    dVar10 = *(double *)(pFVar27 + lVar26 + 0x20 + 8);
    dVar36 = *(double *)(pFVar27 + lVar26 + 0x30);
    dVar37 = *(double *)(pFVar27 + lVar26 + 0x30 + 8);
    *(double *)(pFVar27 + lVar26 + 0x20) =
         *(double *)(pFVar27 + lVar26 + 0x20) +
         dVar9 * (double)fVar4 * (local_168._s_0.X - local_150._s_0.X);
    *(double *)(pFVar27 + lVar26 + 0x20 + 8) =
         dVar10 + (double)fVar3 * dVar9 * (local_168._s_0.Y - local_150._s_0.Y);
    *(double *)(pFVar27 + lVar26 + 0x30) =
         (double)fVar2 * dVar9 * (local_168._s_0.Z - local_150._s_0.Z) + dVar36;
    *(double *)(pFVar27 + lVar26 + 0x30 + 8) = dVar37 + 0.0;
    pTVar22 = UE::Math::TQuat<double>::Euler(&local_118,local_c8);
    local_138._s_0.Z = (double)(this->Settings).RotateZAlpha * (pTVar22->field0_0x0)._s_0.Z;
    local_138._s_0.Y = (double)(this->Settings).RotateYAlpha * (pTVar22->field0_0x0)._s_0.Y;
    local_138._s_0.X = (double)(this->Settings).RotateXAlpha * (pTVar22->field0_0x0)._s_0.X;
    UE::Math::TQuat<double>::MakeFromEuler
              ((TQuat<double> *)local_1a8,(TVector<double> *)&local_138._s_0);
    auVar40._0_8_ = (double)(this->Settings).RotationAlpha;
    auVar40._8_8_ = 0;
    dVar37 = __real_3ff0000000000000;
    dVar36 = auVar40._0_8_;
    if (dStack_190 * UE::Math::TQuat<double>::Identity.W +
        (double)local_1a8._16_8_ * UE::Math::TQuat<double>::Identity.Z +
        (double)local_1a8._8_8_ * UE::Math::TQuat<double>::Identity.Y +
        (double)local_1a8._0_8_ * UE::Math::TQuat<double>::Identity.X < 0.0) {
      dVar37 = __real_bff0000000000000;
      dVar36 = (double)CONCAT44((uint)((ulonglong)auVar40._0_8_ >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(auVar40._0_8_,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
    }
    dVar37 = dVar37 - dVar36;
    dVar38 = (double)local_1a8._0_8_ * auVar40._0_8_ + dVar37 * UE::Math::TQuat<double>::Identity.X;
    dVar39 = (double)local_1a8._8_8_ * auVar40._0_8_ + dVar37 * UE::Math::TQuat<double>::Identity.Y;
    dVar9 = dVar37 * UE::Math::TQuat<double>::Identity.Z + auVar40._0_8_ * (double)local_1a8._16_8_;
    dVar10 = dVar37 * UE::Math::TQuat<double>::Identity.W + auVar40._0_8_ * dStack_190;
    auVar31._8_4_ = SUB84(dVar10,0);
    auVar31._0_8_ = dVar9;
    auVar31._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar37 = dVar9 * dVar9 + dVar38 * dVar38;
    dVar35 = auVar31._8_8_ * dVar10 + dVar39 * dVar39;
    dVar36 = dVar35 + dVar37;
    dVar37 = dVar37 + dVar35;
    auVar46._8_4_ = SUB84(dVar37,0);
    auVar46._0_8_ = dVar36;
    auVar46._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    auVar40 = sqrtpd(auVar40,auVar46);
    uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar36);
    uVar30 = -(ulonglong)(__real_3e45798ee0000000 <= dVar37);
    auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
    uVar43 = (uint)(uVar29 >> 0x20);
    uVar45 = (uint)(uVar30 >> 0x20);
    auVar47._0_8_ = uVar29 & (ulonglong)(auVar46._0_8_ * dVar38);
    uVar21 = uVar30 & (ulonglong)(auVar46._8_8_ * dVar39);
    auVar47._8_4_ = (undefined4)uVar21;
    auVar47._12_4_ = (undefined4)(uVar21 >> 0x20);
    auVar32._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar32._4_4_ =
         ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar32._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar32._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar47 = auVar47 | auVar32;
    auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
    local_1a8._0_8_ = auVar47._0_8_;
    auVar33._0_8_ = (ulonglong)(auVar40._0_8_ * dVar9) & uVar29;
    uVar21 = (ulonglong)(auVar40._8_8_ * dVar10) & uVar30;
    auVar33._8_4_ = (undefined4)uVar21;
    auVar33._12_4_ = (undefined4)(uVar21 >> 0x20);
    auVar41._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar41._4_4_ =
         ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar41._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar41._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    register0x00001300 = auVar41 | auVar33;
    auVar12._4_8_ = auVar33._8_8_;
    auVar12._0_4_ = auVar47._4_4_;
    auVar34._0_8_ = auVar12._0_8_ << 0x20;
    auVar34._8_4_ = auVar47._8_4_;
    auVar34._12_4_ = auVar47._12_4_;
    local_1a8._8_8_ = auVar34._8_8_;
    dVar44 = local_1a8._24_8_;
    dVar13 = *(double *)(pFVar27 + lVar26);
    dVar14 = *(double *)(pFVar27 + lVar26 + 8);
    dVar15 = *(double *)(pFVar27 + lVar26 + 0x10);
    dVar16 = *(double *)(pFVar27 + lVar26 + 0x10 + 8);
    auVar42._8_4_ = auVar47._0_4_;
    auVar42._0_8_ = local_1a8._0_8_;
    auVar42._12_4_ = auVar47._4_4_;
    dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar11 = local_1a8._16_8_;
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    *(double *)(pFVar27 + lVar26) =
         dVar16 * (double)local_1a8._0_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar13 * dVar44 +
         dVar15 * (double)local_1a8._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    *(double *)(pFVar27 + lVar26 + 8) =
         dVar15 * (double)local_1a8._0_8_ * dVar39 + dVar14 * dVar44 +
         dVar16 * (double)local_1a8._8_8_ * dVar7 + dVar11 * dVar13 * dVar8;
    *(double *)(pFVar27 + lVar26 + 0x10) =
         (double)local_1a8._0_8_ * dVar14 * dVar36 + dVar15 * dVar44 +
         dVar13 * (double)local_1a8._8_8_ * dVar37 + dVar11 * dVar16 * dVar9;
    *(double *)(pFVar27 + lVar26 + 0x10 + 8) =
         auVar42._8_8_ * dVar13 * dVar10 + dVar16 * dVar44 +
         dVar14 * (double)local_1a8._8_8_ * dVar35 + dVar11 * dVar15 * dVar38;
    iVar19 = this->BodyBoneIndex;
    iVar20 = FIKRigSkeleton::GetCachedEndOfBranchIndex(param_1,iVar19);
    if (iVar20 != -1) {
      while (iVar19 = iVar19 + 1, iVar19 <= iVar20) {
        FIKRigSkeleton::UpdateGlobalTransformFromLocal(param_1,iVar19);
        FIKRigSkeleton::UpdateLocalTransformFromGlobal(param_1,iVar19);
      }
    }
LAB_14dee6f7a:
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
  }
  return;
}

// GetRequiredBones @ 14dee6fd0

void __thiscall
FIKRigBodyMoverSolver::GetRequiredBones
          (FIKRigBodyMoverSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).StartBone);
  return;
}

// GetRequiredGoals @ 14dee7030

void __thiscall
FIKRigBodyMoverSolver::GetRequiredGoals
          (FIKRigBodyMoverSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigBodyMoverGoalSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// GetSolverSettings @ 14dee70b0

FIKRigSolverSettingsBase * __thiscall
FIKRigBodyMoverSolver::GetSolverSettings(FIKRigBodyMoverSolver *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14dee70c0

UScriptStruct * __thiscall FIKRigBodyMoverSolver::GetSolverSettingsType(FIKRigBodyMoverSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBodyMoverSettings,(UObject *)pUVar1,
                         L"IKRigBodyMoverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSettings.OuterSingleton;
}

// AddGoal @ 14dee7100

void __thiscall
FIKRigBodyMoverSolver::AddGoal(FIKRigBodyMoverSolver *this,UIKRigEffectorGoal *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined **local_28;
  FName local_20;
  FName local_18;
  undefined4 local_10;
  
  local_20 = param_1->GoalName;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  local_28 = &___7FIKRigBodyMoverGoalSettings__6B_;
  local_10 = 0x3f800000;
  local_18 = param_1->BoneName;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar2 + (longlong)(this->AllGoalSettings).ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AllGoalSettings).ArrayNum;
  piVar1 = &(this->AllGoalSettings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AllGoalSettings).AllocatorInstance,piVar1);
  }
  (this->AllGoalSettings).ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  lVar6 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar6) = &___7FIKRigGoalSettingsBase__6B_;
  *(FName *)(pFVar2 + lVar6 + 8) = local_20;
  *(undefined ***)(pFVar2 + lVar6) = &___7FIKRigBodyMoverGoalSettings__6B_;
  *(FName *)(pFVar2 + lVar6 + 0x10) = local_18;
  *(undefined4 *)(pFVar2 + lVar6 + 0x18) = local_10;
  return;
}

// OnGoalRemoved @ 14dee7250

void __thiscall FIKRigBodyMoverSolver::OnGoalRemoved(FIKRigBodyMoverSolver *this,FName *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar5 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar6 = (this->AllGoalSettings).ArrayNum;
  if (pFVar5 != pFVar5 + (longlong)iVar6 * 0x20) {
    pFVar8 = pFVar5;
    while (*(FName *)(pFVar8 + 8) != *param_1) {
      pFVar8 = pFVar8 + 0x20;
      if (pFVar8 == pFVar5 + (longlong)iVar6 * 0x20) {
        return;
      }
    }
    uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar5 >> 5);
    if (uVar7 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = (this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      *(undefined ***)pFVar5 = &___7FIKRigSettingsBase__6B_;
      iVar6 = (this->AllGoalSettings).ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(pFVar5,pFVar5 + 0x20,(longlong)iVar6 << 5);
      }
      piVar1 = &(this->AllGoalSettings).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&(this->AllGoalSettings).AllocatorInstance,(this->AllGoalSettings).ArrayNum,
                 &(this->AllGoalSettings).ArrayMax);
    }
  }
  return;
}

// OnGoalRenamed @ 14dee7360

void __thiscall
FIKRigBodyMoverSolver::OnGoalRenamed(FIKRigBodyMoverSolver *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar1 = (this->AllGoalSettings).ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x20) {
    pFVar8 = pFVar2;
    while (*(FName *)(pFVar8 + 8) != *param_1) {
      pFVar8 = pFVar8 + 0x20;
      if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x20) {
        return;
      }
    }
    uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 5);
    if (uVar7 != 0xffffffff) {
      FVar3 = *param_2;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(FName *)((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 8) =
           FVar3;
    }
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14dee7430

void __thiscall
FIKRigBodyMoverSolver::OnGoalMovedToDifferentBone
          (FIKRigBodyMoverSolver *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar1 = (this->AllGoalSettings).ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x20) {
    pFVar8 = pFVar2;
    while (*(FName *)(pFVar8 + 8) != *param_1) {
      pFVar8 = pFVar8 + 0x20;
      if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x20) {
        return;
      }
    }
    uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 5);
    if (uVar7 != 0xffffffff) {
      FVar3 = *param_2;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(FName *)((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x10
                ) = FVar3;
    }
  }
  return;
}

// UsesCustomGoalSettings @ 14dee7500

bool __thiscall FIKRigBodyMoverSolver::UsesCustomGoalSettings(FIKRigBodyMoverSolver *this)

{
  return true;
}

// GetGoalSettings @ 14dee7510

FIKRigGoalSettingsBase * __thiscall
FIKRigBodyMoverSolver::GetGoalSettings(FIKRigBodyMoverSolver *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIKRigGoalSettingsBase *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar1 = (this->AllGoalSettings).ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x20) {
    pFVar8 = pFVar2;
    do {
      if (*(FName *)(pFVar8 + 8) == *param_1) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 5);
        if (uVar7 == 0xffffffff) {
          return (FIKRigGoalSettingsBase *)0x0;
        }
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FIKRigGoalSettingsBase *)(*pcVar3)();
          return pFVar6;
        }
        return (FIKRigGoalSettingsBase *)
               ((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
      }
      pFVar8 = pFVar8 + 0x20;
    } while (pFVar8 != pFVar2 + (longlong)iVar1 * 0x20);
  }
  return (FIKRigGoalSettingsBase *)0x0;
}

// GetGoalSettingsType @ 14dee75d0

UScriptStruct * __thiscall FIKRigBodyMoverSolver::GetGoalSettingsType(FIKRigBodyMoverSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings,(UObject *)pUVar1,
                         L"IKRigBodyMoverGoalSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverGoalSettings.OuterSingleton;
}

// GetGoalsWithSettings @ 14dee7610

void __thiscall
FIKRigBodyMoverSolver::GetGoalsWithSettings
          (FIKRigBodyMoverSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigBodyMoverGoalSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// UsesStartBone @ 14dee7690

bool __thiscall FIKRigBodyMoverSolver::UsesStartBone(FIKRigBodyMoverSolver *this)

{
  return true;
}

// GetStartBone @ 14dee76a0

FName __thiscall FIKRigBodyMoverSolver::GetStartBone(FIKRigBodyMoverSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).StartBone;
  return in_RDX;
}

// SetStartBone @ 14dee76c0

void __thiscall FIKRigBodyMoverSolver::SetStartBone(FIKRigBodyMoverSolver *this,FName *param_1)

{
  (this->Settings).StartBone = *param_1;
  return;
}

// StaticStruct @ 14df08b00

UScriptStruct * __cdecl FIKRigBodyMoverSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBodyMoverSolver,(UObject *)pUVar1,
                         L"IKRigBodyMoverSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton;
}

// GetIndexOfGoal @ 14df38f20

int __thiscall FIKRigBodyMoverSolver::GetIndexOfGoal(FIKRigBodyMoverSolver *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x20) {
    pFVar2 = pFVar1;
    do {
      if (*(FName *)(pFVar2 + 8) == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x20);
  }
  return -1;
}

