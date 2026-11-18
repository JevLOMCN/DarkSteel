// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// AimTwoBonesCameraRig @ 14d547ee0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraIKAim::AimTwoBonesCameraRig
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2,
          TTransform<double> *param_3,FAimIterationInfo *param_4)

{
  FName FVar1;
  <lambda_1> <Var2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  FName FVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  FName *pFVar18;
  EAimResult EVar19;
  uint uVar20;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar21;
  char cVar22;
  longlong lVar23;
  double dVar24;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  FName local_res8;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  <lambda_1> local_1c8;
  FCameraOperationParams local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  FYawPitchCameraOperation local_158;
  FString local_130;
  FName local_120;
  TRotator<double> local_118;
  TRotator<double> local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  
  <Var2 = *(<lambda_1> *)&(this->ScratchResult).CameraPose.Location.field0_0x0;
  uVar5 = <Var2.Operation._4_4_;
  FVar1 = (FName)(this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Z;
  dVar12 = (param_3->Translation).XY.m128d_f64[0];
  dVar13 = (param_3->Translation).XY.m128d_f64[1];
  dVar6 = (param_1->TargetLocation).field0_0x0._s_0.X - dVar12;
  dVar14 = (param_3->Translation).ZW.m128d_f64[0];
  dVar24 = (param_1->TargetLocation).field0_0x0._s_0.Z - dVar14;
  dVar28 = (param_1->TargetLocation).field0_0x0._s_0.Y - dVar13;
  local_res8 = FVar1;
  local_1c8 = <Var2;
  local_e8 = dVar12;
  dStack_e0 = dVar13;
  local_d8 = dVar14;
  FCameraPose::GetAimDir((FCameraPose *)this,(TVector<double> *)&local_1a0._s_0);
  dVar29 = (double)<Var2.OperationParams - dVar12;
  dVar27 = (double)FVar1 - dVar14;
  dVar30 = (double)<Var2.Operation - dVar13;
  dVar8 = local_1a0._s_0.Y * local_1a0._s_0.Y + local_1a0._s_0.X * local_1a0._s_0.X +
          local_1a0._s_0.Z * local_1a0._s_0.Z;
  dVar7 = dVar30 * local_1a0._s_0.Y + dVar29 * local_1a0._s_0.X + dVar27 * local_1a0._s_0.Z;
  dVar7 = dVar7 + dVar7;
  dVar24 = dVar7 * dVar7 -
           ((dVar30 * dVar30 + dVar29 * dVar29 + dVar27 * dVar27) -
           (dVar28 * dVar28 + dVar6 * dVar6 + dVar24 * dVar24)) * dVar8 * __real_4010000000000000;
  local_120 = FVar1;
  if (dVar24 <= 0.0) {
    if ((dVar24 != 0.0) || (dVar28 = (__real_bfe0000000000000 / dVar8) * dVar7, dVar28 < 0.0)) {
      cVar22 = '\0';
      FVar1 = local_res8;
      FVar11 = local_res8;
      goto LAB_14d5481ac;
    }
  }
  else {
    dVar28 = ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000) -
             SQRT(dVar24)) * (__real_3fe0000000000000 / dVar8);
    dVar24 = (SQRT(dVar24) - dVar7) * (__real_3fe0000000000000 / dVar8);
    if (dVar28 <= dVar24) {
      dVar28 = dVar24;
    }
  }
  local_170._s_0.X = (param_1->TargetLocation).field0_0x0._s_0.X - dVar12;
  local_170._s_0.Y = (param_1->TargetLocation).field0_0x0._s_0.Y - dVar13;
  local_188._s_0.X = (local_1a0._s_0.X * dVar28 + (double)local_1c8.OperationParams) - dVar12;
  local_188._s_0.Y = (local_1a0._s_0.Y * dVar28 + (double)<Var2.Operation) - dVar13;
  local_170._s_0.Z = (param_1->TargetLocation).field0_0x0._s_0.Z - dVar14;
  local_188._s_0.Z = (local_1a0._s_0.Z * dVar28 + (double)local_res8) - dVar14;
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_188._s_0,&local_100);
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_170._s_0,&local_118);
  cVar22 = '\x01';
  FVar1 = (FName)(local_118.Pitch - local_100.Pitch);
  FVar11 = (FName)(local_118.Yaw - local_100.Yaw);
LAB_14d5481ac:
  iVar3 = (this->LastRunDebugInfo).Iterations.ArrayNum;
  uVar20 = iVar3 - 1;
  uVar16 = 0;
  if ((int)uVar20 < iVar3) {
    uVar16 = ~uVar20 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar21 = (this->LastRunDebugInfo).Iterations.AllocatorInstance.SecondaryData;
  lVar17 = (longlong)(this->LastRunDebugInfo).Iterations.ArrayNum;
  dVar28 = (param_3->Translation).XY.m128d_f64[0];
  dVar6 = (param_3->Translation).XY.m128d_f64[1];
  dVar24 = (param_3->Translation).ZW.m128d_f64[0];
  if (FVar21 == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    FVar21 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&this->LastRunDebugInfo;
  }
  lVar23 = lVar17 * 0x70;
  ((undefined1 *)((longlong)FVar21 + -6))[lVar23] = cVar22;
  *(double *)((undefined1 *)((longlong)FVar21 + -0x30) + lVar23) = dVar28;
  *(double *)((longlong)((undefined1 *)((longlong)FVar21 + -0x30) + lVar23) + 8) = dVar6;
  *(double *)((undefined1 *)((longlong)FVar21 + -0x20) + lVar23) = dVar24;
  if (cVar22 == '\0') {
    param_4->Result = Failed;
  }
  else {
    local_1b8.Evaluator = param_1->Evaluator;
    local_1b8.EvaluationContext.Object = (param_2->EvaluationContext).Object;
    local_1b8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_1b8.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b8.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uStack_1d0._2_6_ = <Var2.Operation._2_6_;
    uStack_1d0 = CONCAT62(uStack_1d0._2_6_,0x101);
    auVar9._4_8_ = extraout_XMM0_Qb;
    auVar9._0_4_ = uVar5;
    auVar25._0_8_ = auVar9._0_8_ << 0x20;
    auVar25._8_4_ = (undefined4)uStack_1d0;
    auVar25._12_4_ = uVar5;
    local_158._padding_._0_4_ = 0;
    local_158.Yaw._8_8_ = auVar25._8_8_;
    uStack_1d0._2_6_ = auVar25._10_6_;
    uStack_1d0 = CONCAT62(uStack_1d0._2_6_,0x101);
    uStack_1d4 = FVar11.Number;
    auVar10[4] = local_158.Yaw.bHasValue;
    auVar10[5] = local_158.Yaw.bIsDelta;
    auVar10._6_6_ = local_158.Yaw._10_6_;
    auVar10._0_4_ = uStack_1d4;
    auVar26._0_8_ = auVar10._0_8_ << 0x20;
    auVar26._8_4_ = (undefined4)uStack_1d0;
    auVar26._12_4_ = uVar5;
    local_158.Pitch._8_8_ = auVar26._8_8_;
    *(FName *)((undefined1 *)((longlong)FVar21 + -0x18) + lVar23) = FVar11;
    *(FName *)((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)FVar21 + -0x10) +
              lVar17 * 7) = FVar1;
    local_1c8.Operation = &local_158;
    local_1c8.OperationParams = &local_1b8;
    local_158.Yaw.Value = (double)FVar11;
    local_158.Pitch.Value = (double)FVar1;
    pFVar18 = ::FName::FName(&local_res8,L"ActiveCameraRig");
    FCameraNodeEvaluatorHierarchy::
    ForEachEvaluator<_UE::Cameras::FCameraIKAim::AimTwoBonesCameraRig_::__l2::<lambda_1>_>
              (&this->CameraSystemHierarchy,*pFVar18,SupportsOperations,&local_1c8);
    if ((local_158.Yaw.bHasValue == false) && (local_158.Pitch.bHasValue == false)) {
      EVar19 = Corrected;
    }
    else {
      if (2 < (byte)LogCameraSystem._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)(param_2->CameraRig).field0_0x0.DebugPtr,&local_130,
                   (UObject *)0x0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      EVar19 = Aborted;
    }
    param_4->Result = EVar19;
    ((undefined1 *)((longlong)FVar21 + -6))[lVar23] = EVar19 == Corrected;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  return;
}

// CheckTolerance @ 14d550ea0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraIKAim::CheckTolerance
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2,
          FAimIterationInfo *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  TVector<double>_u_0 local_88 [5];
  
  dVar14 = (this->ScratchResult).CameraPose.TargetDistance;
  pTVar6 = FCameraPose::GetAimDir((FCameraPose *)this,(TVector<double> *)&local_88[0]._s_0);
  local_88[0]._16_8_ = (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Z;
  dVar13 = (param_1->TargetLocation).field0_0x0._s_0.X -
           (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.X;
  dVar4 = dVar14 * (pTVar6->field0_0x0)._s_0.X;
  dVar3 = (param_1->TargetLocation).field0_0x0._s_0.Z - (double)local_88[0]._16_8_;
  dVar11 = dVar14 * (pTVar6->field0_0x0)._s_0.Y;
  dVar5 = dVar14 * (pTVar6->field0_0x0)._s_0.Z;
  dVar8 = param_1->MinDistance;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar8;
  dVar10 = (param_1->TargetLocation).field0_0x0._s_0.Y -
           (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Y;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar10 * dVar10 + dVar13 * dVar13 + dVar3 * dVar3;
  auVar12 = sqrtpd(in_XMM4,auVar12);
  if ((dVar14 < dVar8) || (auVar12._0_8_ < dVar8)) {
    if (2 < (byte)LogCameraSystem._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(param_2->CameraRig).field0_0x0.DebugPtr,
                 (FString *)&local_88[0]._s_0,(UObject *)0x0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if ((void *)local_88[0]._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88[0]._0_8_);
      }
    }
    param_3->Result = Aborted;
  }
  else {
    dVar2 = dVar3 * dVar11 - dVar10 * dVar5;
    dVar11 = dVar10 * dVar4 - dVar13 * dVar11;
    dVar8 = dVar13 * dVar5 - dVar4 * dVar3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar8 * dVar8 + dVar2 * dVar2 + dVar11 * dVar11;
    auVar15 = sqrtpd(auVar15,auVar1);
    uVar7 = SUB84(__real_bff0000000000000,0);
    uVar9 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar8 = auVar15._0_8_ / (auVar12._0_8_ * dVar14);
    if (__real_bff0000000000000 <= dVar8) {
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
      uVar7 = SUB84(dVar8,0);
      uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
    }
    dVar8 = asin((double)CONCAT44(uVar9,uVar7));
    dVar8 = dVar8 * __real_404ca5dc1a63c1f8;
    dVar14 = auVar15._0_8_ / dVar14;
    param_3->ErrorAngle = dVar8;
    param_3->ErrorDistance = dVar14;
    if ((param_1->AngleTolerance <= dVar8 && dVar8 != param_1->AngleTolerance) &&
       (param_1->DistanceTolerance <= dVar14 && dVar14 != param_1->DistanceTolerance)) {
      return true;
    }
    param_3->Result = Completed;
  }
  return false;
}

// ComputeTwoBonesCorrection @ 14d551600

bool __cdecl
UE::Cameras::FCameraIKAim::ComputeTwoBonesCorrection
          (FCameraPose *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  double local_res8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TRotator<double> local_78;
  TRotator<double> local_60 [3];
  
  local_c0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_1->Location).field0_0x0._s_0.X;
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  local_c0._s_0.X = dVar4;
  local_c0._s_0.Y = dVar5;
  FCameraPose::GetAimDir(param_1,(TVector<double> *)&local_d8._s_0);
  local_res8 = 0.0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1;
  auVar7 = sqrtpd(in_XMM3,auVar7);
  bVar6 = RaySphereIntersectExit
                    ((TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0,param_2,
                     auVar7._0_8_,&local_res8);
  if (bVar6) {
    local_a8._s_0.X = (local_d8._s_0.X * local_res8 + dVar4) - (param_2->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (local_d8._s_0.Y * local_res8 + dVar5) - (param_2->field0_0x0)._s_0.Y;
    local_90._s_0.Y = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    local_a8._s_0.Z =
         (local_d8._s_0.Z * local_res8 + local_c0._s_0.Z) - (param_2->field0_0x0)._s_0.Z;
    local_90._s_0.X = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    local_90._s_0.Z = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_a8._s_0,local_60);
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_90._s_0,&local_78);
    param_4->Pitch = local_78.Pitch - local_60[0].Pitch;
    param_4->Yaw = local_78.Yaw - local_60[0].Yaw;
    param_4->Roll = local_78.Roll - local_60[0].Roll;
  }
  return bVar6;
}

// DoRun @ 14d552d10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraIKAim::DoRun
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2)

{
  double dVar1;
  FCameraSystemEvaluator *pFVar2;
  FRootCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UCameraRigAsset *pUVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  EAimResult EVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_res18 [8];
  FCameraRigEvaluationInfo *local_res20;
  FString local_c8;
  FCameraEvaluationContext *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FAimIterationInfo local_a8;
  FSingleCameraRigHierarchyBuildParams local_88;
  
  if ((param_2->CameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
    local_res18[0] = 0;
    bVar8 = `UE::Cameras::FCameraIKAim::DoRun'::__l3::<lambda_1>::operator()(local_res18);
    if (!bVar8) {
      return false;
    }
  }
  if (((param_2->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (local_res20 = param_2,
     bVar8 = `UE::Cameras::FCameraIKAim::DoRun'::__l6::<lambda_2>::operator()(&local_res20), !bVar8)
     ) {
    return false;
  }
  pFVar2 = param_1->Evaluator;
  FCameraVariableTable::Initialize
            (&(this->ScratchResult).VariableTable,
             (FCameraVariableTableAllocationInfo *)
             &((param_2->CameraRig).field0_0x0.DebugPtr)->_padding_);
  this_00 = pFVar2->RootEvaluator;
  local_88.CameraRigInfo.InstanceID.Value = 0xffffffff;
  local_88.CameraRigInfo.InstanceID.Layer = None;
  EVar10 = Failed;
  local_88.CameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_88.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_88.CameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
  local_88.CameraRigInfo.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0
  ;
  local_88.CameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
  ::FName::FName(&local_88.CameraRigRangeName,L"ActiveCameraRig");
  FVar7.ReferenceController =
       local_88.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController;
  local_88.CameraRigInfo.InstanceID = param_2->InstanceID;
  pFVar3 = (param_2->EvaluationContext).Object;
  pTVar4 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = local_88.CameraRigInfo.EvaluationContext.Object;
  pTStack_b0 = local_88.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController;
  local_88.CameraRigInfo.EvaluationContext.Object = pFVar3;
  local_88.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_2->CameraRig).field0_0x0.DebugPtr, pUVar5 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_88.CameraRigInfo.CameraRig.field0_0x0.DebugPtr = (param_2->CameraRig).field0_0x0;
  local_88.CameraRigInfo.LastResult = param_2->LastResult;
  local_88.CameraRigInfo.RootEvaluator = param_2->RootEvaluator;
  FRootCameraNodeEvaluator::BuildSingleCameraRigHierarchy
            (this_00,&local_88,&this->CameraSystemHierarchy);
  uVar11 = (undefined4)__real_7fefffffffffffff;
  uVar12 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_a8.IterationIndex = 0;
  local_a8.ErrorAngle = 0.0;
  local_a8.ErrorDistance = 0.0;
  local_a8.Result = Failed;
  uVar13 = uVar11;
  uVar14 = uVar12;
  if (param_1->MaxIterations != '\0') {
    do {
      DoRunIteration(this,param_1,param_2,&local_a8);
      EVar10 = local_a8.Result;
      if (((local_a8.Result & ~Completed) == Failed) && (local_a8.Result != Corrected)) break;
      if ((local_a8.Result != Corrected) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5027708336108208040>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraIKAim.cpp"
                             ,0x58,"IterationInfo.Result == EAimResult::Corrected"), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (((double)CONCAT44(uVar12,uVar11) <= local_a8.ErrorAngle) ||
         ((double)CONCAT44(uVar14,uVar13) <= local_a8.ErrorDistance)) {
        if (1 < (byte)LogCameraSystem._0_1_) {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)(param_2->CameraRig).field0_0x0.DebugPtr,&local_c8,
                     (UObject *)0x0);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        EVar10 = Aborted;
        break;
      }
      local_a8.IterationIndex = local_a8.IterationIndex + 1;
      uVar11 = SUB84(local_a8.ErrorAngle,0);
      uVar12 = (int)((ulonglong)local_a8.ErrorAngle >> 0x20);
      uVar13 = SUB84(local_a8.ErrorDistance,0);
      uVar14 = (int)((ulonglong)local_a8.ErrorDistance >> 0x20);
    } while (local_a8.IterationIndex < param_1->MaxIterations);
  }
  dVar1 = (param_1->TargetLocation).field0_0x0._s_0.Y;
  (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.X =
       (param_1->TargetLocation).field0_0x0._s_0.X;
  (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->TargetLocation).field0_0x0._s_0.Z;
  (this->LastRunDebugInfo).bSucceeded = EVar10 == Completed;
  (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.Z = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController);
  return EVar10 - Corrected < 2;
}

// DoRunIteration @ 14d552fd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraIKAim::DoRunIteration
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2,
          FAimIterationInfo *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TVector<double> *pTVar11;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar12;
  char cVar13;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar14;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  FString local_c8;
  FString local_b8;
  double local_a8;
  TVector<double> local_a0 [5];
  
  piVar1 = &(this->LastRunDebugInfo).Iterations.ArrayMax;
  iVar10 = (this->LastRunDebugInfo).Iterations.ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
                       (0x870,(ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)
                              &this->LastRunDebugInfo,piVar1);
  }
  (this->LastRunDebugInfo).Iterations.ArrayNum = iVar10 + 1;
  FVar15 = (this->LastRunDebugInfo).Iterations.AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    FVar15 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&this->LastRunDebugInfo;
  }
  lVar16 = (longlong)iVar10 * 0x70;
  *(undefined8 *)(lVar16 + (longlong)FVar15) = 0;
  ((undefined8 *)(lVar16 + (longlong)FVar15))[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x10 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x20 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x30 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x40 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x50 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar16 + 0x60 + (longlong)FVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar16 + 0x30 + (longlong)FVar15) = 0;
  *(undefined8 *)(lVar16 + 0x38 + (longlong)FVar15) = 0;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar3 = (double *)(lVar16 + 0x40 + (longlong)FVar15);
  *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar3[1] = (double)uVar8;
  *(double *)(lVar16 + 0x50 + (longlong)FVar15) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  ((TVector2<double>_u_0 *)(lVar16 + 0x58 + (longlong)FVar15))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  RunRootCameraNode(this,param_1,param_2);
  dVar21 = (this->ScratchResult).CameraPose.TargetDistance;
  pTVar11 = FCameraPose::GetAimDir((FCameraPose *)this,local_a0);
  local_a8 = (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Z;
  dVar18 = (param_1->TargetLocation).field0_0x0._s_0.Z - local_a8;
  dVar17 = (param_1->TargetLocation).field0_0x0._s_0.X -
           (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.X;
  dVar6 = dVar21 * (pTVar11->field0_0x0)._s_0.Z;
  dVar7 = dVar21 * (pTVar11->field0_0x0)._s_0.Y;
  dVar5 = dVar21 * (pTVar11->field0_0x0)._s_0.X;
  dVar20 = (param_1->TargetLocation).field0_0x0._s_0.Y -
           (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Y;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar17 * dVar17 + dVar20 * dVar20 + dVar18 * dVar18;
  auVar19 = sqrtpd(in_XMM5,auVar19);
  if ((dVar21 < param_1->MinDistance) || (auVar19._0_8_ < param_1->MinDistance)) {
    if (2 < (byte)LogCameraSystem._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(param_2->CameraRig).field0_0x0.DebugPtr,&local_c8,
                 (UObject *)0x0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    param_3->Result = Aborted;
  }
  else {
    auVar22._0_8_ = dVar20 * dVar6;
    auVar22._8_8_ = 0;
    dVar20 = dVar5 * dVar20 - dVar17 * dVar7;
    dVar7 = dVar18 * dVar7 - auVar22._0_8_;
    dVar18 = dVar17 * dVar6 - dVar5 * dVar18;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar7 * dVar7 + dVar18 * dVar18 + dVar20 * dVar20;
    auVar23 = sqrtpd(auVar22,auVar23);
    dVar18 = auVar23._0_8_ / (auVar19._0_8_ * dVar21);
    dVar5 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar18) && (dVar5 = dVar18, __real_3ff0000000000000 <= dVar18))
    {
      dVar5 = __real_3ff0000000000000;
    }
    dVar18 = asin(dVar5);
    dVar18 = dVar18 * __real_404ca5dc1a63c1f8;
    dVar21 = auVar23._0_8_ / dVar21;
    param_3->ErrorAngle = dVar18;
    param_3->ErrorDistance = dVar21;
    if (dVar18 < param_1->AngleTolerance || dVar18 == param_1->AngleTolerance) {
      param_3->Result = Completed;
    }
    else {
      if (param_1->DistanceTolerance <= dVar21 && dVar21 != param_1->DistanceTolerance) {
        cVar13 = '\x01';
        goto LAB_14d5532a6;
      }
      param_3->Result = Completed;
    }
  }
  cVar13 = '\0';
LAB_14d5532a6:
  dVar21 = (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Z;
  dVar18 = (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.Y;
  *(double *)(lVar16 + (longlong)FVar15) =
       (this->ScratchResult).CameraPose.Location.field0_0x0._s_0.X;
  ((double *)(lVar16 + (longlong)FVar15))[1] = dVar18;
  *(double *)(lVar16 + 0x10 + (longlong)FVar15) = dVar21;
  dVar21 = (this->ScratchResult).CameraPose.Rotation.Yaw;
  pdVar3 = (double *)(lVar16 + 0x18 + (longlong)FVar15);
  *pdVar3 = (this->ScratchResult).CameraPose.Rotation.Pitch;
  pdVar3[1] = dVar21;
  *(double *)(lVar16 + 0x28 + (longlong)FVar15) = (this->ScratchResult).CameraPose.Rotation.Roll;
  *(double *)(lVar16 + 0x30 + (longlong)FVar15) = param_3->ErrorAngle;
  *(double *)(lVar16 + 0x38 + (longlong)FVar15) = param_3->ErrorDistance;
  *(char *)(lVar16 + 0x68 + (longlong)FVar15) = cVar13;
  if (cVar13 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FBuiltInCameraVariables::FBuiltInCameraVariables(&::Instance);
      _Init_thread_footer(&::_TSS0);
    }
    FVar14 = (this->ScratchResult).CameraRigJoints.Joints.AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
      FVar14 = (ForElementType<UE::Cameras::FCameraRigJoint>)&(this->ScratchResult).CameraRigJoints;
    }
    iVar10 = (this->ScratchResult).CameraRigJoints.Joints.ArrayNum;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar12 = (ForElementType<UE::Cameras::FCameraRigJoint>)
             ((longlong)iVar10 * 0x70 + (longlong)FVar14);
    for (; FVar14 != FVar12;
        FVar14 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)FVar14 + 0x70)) {
      if (*(uint *)FVar14 == ::Instance.YawPitchDefinition.VariableID.Value) {
        *(bool *)(lVar16 + 0x69 + (longlong)FVar15) =
             FVar14 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0;
        if (FVar14 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
          AimTwoBonesCameraRig
                    (this,param_1,param_2,(TTransform<double> *)((longlong)FVar14 + 0x10),param_3);
          return;
        }
        goto LAB_14d553397;
      }
    }
    *(undefined1 *)(lVar16 + 0x69 + (longlong)FVar15) = 0;
LAB_14d553397:
    if (1 < (byte)LogCameraSystem._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(param_2->CameraRig).field0_0x0.DebugPtr,&local_b8,
                 (UObject *)0x0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    param_3->Result = Failed;
  }
  return;
}

// GetLastRunDebugInfo @ 14d557f60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraIKAim::GetLastRunDebugInfo(FCameraIKAim *this,FCameraIKAimDebugInfo *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar3;
  double dVar4;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Dst;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  if (param_1 != &this->LastRunDebugInfo) {
    piVar1 = &(param_1->Iterations).ArrayMax;
    _Src = (this->LastRunDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    iVar2 = (this->LastRunDebugInfo).Iterations.ArrayNum;
    if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
      _Src = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&this->LastRunDebugInfo;
    }
    (param_1->Iterations).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
                (0x70,8,iVar2,*piVar1,
                 (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)param_1,iVar2,piVar1
                );
      FVar3 = (param_1->Iterations).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)param_1;
      if (FVar3 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
        _Dst = FVar3;
      }
      if (iVar2 != 0) {
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x70);
      }
    }
  }
  dVar4 = (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.Y;
  (param_1->DesiredTarget).field0_0x0._s_0.X =
       (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.X;
  (param_1->DesiredTarget).field0_0x0._s_0.Y = dVar4;
  (param_1->DesiredTarget).field0_0x0._s_0.Z =
       (this->LastRunDebugInfo).DesiredTarget.field0_0x0._s_0.Z;
  param_1->bSucceeded = (this->LastRunDebugInfo).bSucceeded;
  return;
}

// RaySphereIntersectExit @ 14d55e330

bool __cdecl
UE::Cameras::FCameraIKAim::RaySphereIntersectExit
          (TRay<double> *param_1,TVector<double> *param_2,double param_3,double *param_4)

{
  bool bVar1;
  
  bVar1 = RaySphereIntersectExit(&param_1->Origin,&param_1->Direction,param_2,param_3,param_4);
  return bVar1;
}

// RaySphereIntersectExit @ 14d55e360

bool __cdecl
UE::Cameras::FCameraIKAim::RaySphereIntersectExit
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,double param_4
          ,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar8 = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar6 * dVar6 + dVar7 * dVar7 + dVar1 * dVar1;
  dVar7 = dVar6 * dVar2 + dVar7 * dVar9;
  dVar7 = (dVar1 + dVar1) * dVar8 + dVar7 + dVar7;
  auVar5._0_8_ = dVar7 * dVar7 -
                 ((dVar2 * dVar2 + dVar9 * dVar9 + dVar8 * dVar8) - param_4 * param_4) * dVar3 *
                 __real_4010000000000000;
  auVar5._8_8_ = 0;
  if (auVar5._0_8_ <= 0.0) {
    if (auVar5._0_8_ == 0.0) {
      dVar7 = (__real_bfe0000000000000 / dVar3) * dVar7;
      bVar4 = 0.0 <= dVar7;
      *param_5 = dVar7;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    auVar5 = sqrtpd(auVar5,auVar5);
    dVar6 = (auVar5._0_8_ - dVar7) * (__real_3fe0000000000000 / dVar3);
    dVar7 = ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000) -
            auVar5._0_8_) * (__real_3fe0000000000000 / dVar3);
    if (dVar6 <= dVar7) {
      dVar6 = dVar7;
    }
    *param_5 = dVar6;
    bVar4 = true;
  }
  return bVar4;
}

// Run @ 14d562160

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraIKAim::Run
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2)

{
  double dVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar uVar7;
  UClass *pUVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FCameraIKAimParams local_58;
  
  local_58.DeltaTime = param_1->DeltaTime;
  local_58.bIsFirstFrame = param_1->bIsFirstFrame;
  local_58.bIsActiveCameraRig = param_1->bIsActiveCameraRig;
  local_58._6_2_ = *(undefined2 *)&param_1->field_0x6;
  local_58.TargetLocation.field0_0x0._s_0.X = (param_1->TargetLocation).field0_0x0._s_0.X;
  local_58.TargetLocation.field0_0x0._s_0.Y = (param_1->TargetLocation).field0_0x0._s_0.Y;
  local_58.TargetLocation.field0_0x0._s_0.Z = (param_1->TargetLocation).field0_0x0._s_0.Z;
  local_58.Evaluator = param_1->Evaluator;
  local_58.MinDistance = param_1->MinDistance;
  local_58.AngleTolerance = param_1->AngleTolerance;
  local_58.DistanceTolerance = param_1->DistanceTolerance;
  local_58.MaxIterations = param_1->MaxIterations;
  local_58._65_7_ = *(undefined7 *)&param_1->field_0x41;
  pUVar8 = Z_Construct_UClass_UGameplayCamerasSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar8 = Z_Construct_UClass_UGameplayCamerasSettings_NoRegister();
  iVar2 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar8->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar11 = SUB84(__real_3fb999999999999a,0);
  uVar12 = (undefined4)((ulonglong)__real_3fb999999999999a >> 0x20);
  if (local_58.AngleTolerance <= 0.0) {
    dVar1 = *(double *)&pUVar3[1].field_0x20;
    uVar9 = SUB84(dVar1,0);
    uVar10 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar1 <= __real_3fb999999999999a) {
      uVar9 = uVar11;
      uVar10 = uVar12;
    }
    local_58.AngleTolerance = (double)CONCAT44(uVar10,uVar9);
  }
  if (local_58.DistanceTolerance <= 0.0) {
    dVar1 = *(double *)(pUVar3 + 2);
    uVar9 = SUB84(dVar1,0);
    uVar10 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar1 <= __real_3fb999999999999a) {
      uVar9 = uVar11;
      uVar10 = uVar12;
    }
    local_58.DistanceTolerance = (double)CONCAT44(uVar10,uVar9);
  }
  if (local_58.MinDistance <= 0.0) {
    dVar1 = *(double *)&pUVar3[2].field_0x10;
    uVar9 = SUB84(dVar1,0);
    uVar10 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar1 <= __real_3fb999999999999a) {
      uVar9 = uVar11;
      uVar10 = uVar12;
    }
    local_58.MinDistance = (double)CONCAT44(uVar10,uVar9);
  }
  if (local_58.MaxIterations == '\0') {
    uVar7 = pUVar3[2].field_0x8;
    if (pUVar3[2].field_0x8 == '\0') {
      uVar7 = '\x01';
    }
    local_58.MaxIterations = uVar7;
  }
  bVar5 = DoRun(this,&local_58,param_2);
  return bVar5;
}

// RunRootCameraNode @ 14d562650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraIKAim::RunRootCameraNode
          (FCameraIKAim *this,FCameraIKAimParams *param_1,FCameraRigEvaluationInfo *param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FRootCameraNodeEvaluator *this_00;
  UCameraRigAsset *pUVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FCameraNodeEvaluatorSerializeParams local_res8 [8];
  FCameraNodeEvaluatorSerializeParams local_res10 [8];
  undefined8 local_res18;
  FSingleCameraRigEvaluationParams local_1f8;
  FArchiveState local_198;
  undefined8 local_108;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  if ((param_2->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCameraPose::Reset((FCameraPose *)this);
  FCameraRigJoints::Reset(&(this->ScratchResult).CameraRigJoints);
  FPostProcessSettingsCollection::Reset(&(this->ScratchResult).PostProcessSettings);
  (this->ScratchResult).bIsCameraCut = false;
  (this->ScratchResult).bIsValid = false;
  iVar3 = (this->ScratchResult).CameraPoseLocationTrail.ArrayMax;
  (this->ScratchResult).CameraPoseLocationTrail.ArrayNum = 0;
  if (iVar3 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ScratchResult).CameraPoseLocationTrail.AllocatorInstance,0,
               &(this->ScratchResult).CameraPoseLocationTrail.ArrayMax);
  }
  FCameraVariableTable::OverrideAll
            (&(this->ScratchResult).VariableTable,&param_2->LastResult->VariableTable,true);
  pTVar2 = &this->EvaluatorSnapshot;
  piVar1 = &(this->EvaluatorSnapshot).ArrayMax;
  this_00 = param_1->Evaluator->RootEvaluator;
  (this->EvaluatorSnapshot).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_res18 = 0;
  local_198._padding_ = 0;
  local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_198._40_8_ = 0;
  local_198.ArSerializingDefaults = 0;
  local_198.ArPortFlags = 0;
  local_198.ArMaxSerializeSize = 0;
  local_198.ArUEVer.FileVersionUE4 = 0;
  local_198.ArUEVer.FileVersionUE5 = 0;
  local_198.ArLicenseeUEVer = 0;
  local_198.ArEngineVer.Major = 0;
  local_198.ArEngineVer.Minor = 0;
  local_198.ArEngineVer.Patch = 0;
  local_198.ArEngineVer._6_2_ = 0;
  local_198.ArEngineVer.Changelist = 0;
  local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_198.SerializedProperty = (FProperty *)0x0;
  local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_198.bCustomVersionsAreReset = false;
  local_198._129_7_ = 0;
  local_198.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_198);
  local_108 = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_f8 = 0;
  local_100 = pTVar2;
  FArchiveState::SetIsSaving(&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCameraNodeEvaluatorHierarchy::CallSerialize
            (&this->CameraSystemHierarchy,local_res8,(FArchive *)&local_198);
  FArchive::~FArchive((FArchive *)&local_198);
  local_1f8.EvaluationParams.bIsFirstFrame = param_1->bIsFirstFrame;
  local_1f8.EvaluationParams.DeltaTime = param_1->DeltaTime;
  local_1f8.EvaluationParams.EvaluationContext.Object = (param_2->EvaluationContext).Object;
  local_1f8.EvaluationParams.bIsActiveCameraRig = param_1->bIsActiveCameraRig;
  local_1f8.EvaluationParams.EvaluationContext.SharedReferenceCount.ReferenceController =
       (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_1f8.CameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_1f8.EvaluationParams.EvaluationType = IK;
  if (local_1f8.EvaluationParams.EvaluationContext.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.EvaluationParams.EvaluationContext.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.EvaluationParams.EvaluationContext.SharedReferenceCount.
               ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar6.ReferenceController =
       local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController;
  local_1f8.EvaluationParams.Evaluator = param_1->Evaluator;
  local_1f8.CameraRigInfo.EvaluationContext.Object = (param_2->EvaluationContext).Object;
  local_1f8.CameraRigInfo.InstanceID = param_2->InstanceID;
  local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
       (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_2->CameraRig).field0_0x0.DebugPtr, pUVar4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_1f8.CameraRigInfo.CameraRig.field0_0x0 = (param_2->CameraRig).field0_0x0;
  local_1f8.CameraRigInfo.LastResult = param_2->LastResult;
  local_1f8.CameraRigInfo.RootEvaluator = param_2->RootEvaluator;
  FRootCameraNodeEvaluator::RunSingleCameraRig(this_00,&local_1f8,&this->ScratchResult);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.EvaluationParams.EvaluationContext.SharedReferenceCount.ReferenceController);
  local_e8._padding_ = 0;
  local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_e8._40_8_ = 0;
  local_e8.ArSerializingDefaults = 0;
  local_e8.ArPortFlags = 0;
  local_e8.ArMaxSerializeSize = 0;
  local_e8.ArUEVer.FileVersionUE4 = 0;
  local_e8.ArUEVer.FileVersionUE5 = 0;
  local_e8.ArLicenseeUEVer = 0;
  local_e8.ArEngineVer.Major = 0;
  local_e8.ArEngineVer.Minor = 0;
  local_e8.ArEngineVer.Patch = 0;
  local_e8.ArEngineVer._6_2_ = 0;
  local_e8.ArEngineVer.Changelist = 0;
  local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_e8.SerializedProperty = (FProperty *)0x0;
  local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_e8.bCustomVersionsAreReset = false;
  local_e8._129_7_ = 0;
  local_e8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_e8);
  local_58 = 0;
  local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_48 = 0x7fffffffffffffff;
  local_50 = pTVar2;
  FArchiveState::SetIsLoading(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  FCameraNodeEvaluatorHierarchy::CallSerialize
            (&this->CameraSystemHierarchy,local_res10,(FArchive *)&local_e8);
  FArchive::~FArchive((FArchive *)&local_e8);
  return;
}

// operator() @ 150580d10

bool __thiscall `UE::Cameras::FCameraIKAim::DoRun'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5027708336108208074>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5027708336108208074>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581010

bool __thiscall `UE::Cameras::FCameraIKAim::DoRun'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5027708336108208070>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x18),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5027708336108208070>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058107e;
    }
  }
  bVar2 = false;
LAB_15058107e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

