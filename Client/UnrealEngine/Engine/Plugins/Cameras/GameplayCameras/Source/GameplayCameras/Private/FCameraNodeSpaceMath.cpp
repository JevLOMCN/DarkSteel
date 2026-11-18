// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// GetCameraNodeOriginPosition @ 14d6193f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeOriginPosition
          (FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2,
          ECameraNodeOriginPosition param_3,TVector<double> *param_4)

{
  bool bVar1;
  FCameraNodeSpaceParams local_18;
  
  local_18.EvaluationParams = param_1;
  local_18.EvaluationResult = param_2;
  bVar1 = GetCameraNodeOriginPosition(&local_18,param_3,param_4);
  return bVar1;
}

// GetCameraNodeOriginPosition @ 14d619420

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeOriginPosition
          (FCameraNodeSpaceParams *param_1,ECameraNodeOriginPosition param_2,
          TVector<double> *param_3)

{
  double dVar1;
  FCameraEvaluationContext *pFVar2;
  FCameraNodeEvaluationResult *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  APlayerController *this;
  APawn *pAVar8;
  VectorRegister4Double *pVVar9;
  undefined1 local_res10 [8];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_98;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_88;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_78;
  TTransform<double> local_68;
  
  if (param_2 == CameraPose) {
    pFVar3 = param_1->EvaluationResult;
    dVar5 = (pFVar3->CameraPose).Location.field0_0x0._s_0.Y;
    dVar1 = (pFVar3->CameraPose).Location.field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (pFVar3->CameraPose).Location.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar5;
    (param_3->field0_0x0)._s_0.Z = dVar1;
  }
  else if (param_2 == ActiveContext) {
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_78);
    if (local_78.Object == (FCameraEvaluationContext *)0x0) {
LAB_14d6196ae:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      return false;
    }
    if ((local_78.Object == (FCameraEvaluationContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    dVar5 = ((local_78.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
    dVar1 = ((local_78.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         ((local_78.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar5;
    (param_3->field0_0x0)._s_0.Z = dVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else if (param_2 == OwningContext) {
    local_78.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationParams->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->EvaluationParams->EvaluationContext).Object;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FCameraEvaluationContext *)0x0) goto LAB_14d6196ae;
    dVar5 = (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
    dVar1 = (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar5;
    (param_3->field0_0x0)._s_0.Z = dVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    if (param_2 != Pivot) {
      if (param_2 != Pawn) {
        `UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeOriginPosition'::__l4::<lambda_1>::
        operator()(local_res10);
        return false;
      }
      FCameraNodeSpaceParams::GetActiveContext(param_1,&local_98);
      if (local_98.Object != (FCameraEvaluationContext *)0x0) {
        if ((local_98.Object == (FCameraEvaluationContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        this = (APlayerController *)
               FWeakObjectPtr::Get(&((local_98.Object)->WeakPlayerController).WeakPtr);
        if ((this != (APlayerController *)0x0) &&
           (pAVar8 = APlayerController::GetPawnOrSpectator(this), pAVar8 != (APawn *)0x0)) {
          if (pAVar8->_padding_ == 0) {
            pVVar9 = &UE::Math::TTransform<double>::Identity.Translation;
          }
          else {
            pVVar9 = (VectorRegister4Double *)(pAVar8->_padding_ + 0x210);
          }
          dVar5 = (pVVar9->XY).m128d_f64[1];
          dVar1 = (pVVar9->ZW).m128d_f64[0];
          (param_3->field0_0x0)._s_0.X = (pVVar9->XY).m128d_f64[0];
          (param_3->field0_0x0)._s_0.Y = dVar5;
          (param_3->field0_0x0)._s_0.Z = dVar1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          return true;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      return false;
    }
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar6 = FCameraNodeSpaceParams::FindPivotTransform(param_1,&local_68);
    if (bVar6) {
      (param_3->field0_0x0)._s_0.X = local_68.Translation.XY.m128d_f64[0];
      (param_3->field0_0x0)._s_0.Y = local_68.Translation.XY.m128d_f64[1];
      (param_3->field0_0x0)._s_0.Z = local_68.Translation.ZW.m128d_f64[0];
    }
    else {
      FCameraNodeSpaceParams::GetActiveContext(param_1,&local_88);
      if (local_88.Object == (FCameraEvaluationContext *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        return false;
      }
      if ((local_88.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      dVar5 = ((local_88.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
      dVar1 = ((local_88.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
      (param_3->field0_0x0)._s_0.X =
           ((local_88.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
      (param_3->field0_0x0)._s_0.Y = dVar5;
      (param_3->field0_0x0)._s_0.Z = dVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
  }
  return true;
}

// GetCameraNodeSpaceTransform @ 14d6196f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeSpaceTransform
          (FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2,
          ECameraNodeSpace param_3,TTransform<double> *param_4)

{
  bool bVar1;
  FCameraNodeSpaceParams local_18;
  
  local_18.EvaluationParams = param_1;
  local_18.EvaluationResult = param_2;
  bVar1 = GetCameraNodeSpaceTransform(&local_18,param_3,param_4);
  return bVar1;
}

// GetCameraNodeSpaceTransform @ 14d619720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeSpaceTransform
          (FCameraNodeSpaceParams *param_1,ECameraNodeSpace param_2,TTransform<double> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  APlayerController *this;
  APawn *pAVar7;
  TTransform<double> *pTVar8;
  undefined1 auStack_258 [32];
  undefined1 local_238 [8];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_230;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_220;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_210;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  switch(param_2) {
  case CameraPose:
    pTVar8 = FCameraPose::GetTransform(&param_1->EvaluationResult->CameraPose,&local_198);
    dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
    (param_3->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    (param_3->Rotation).XY.m128d_f64[1] = dVar4;
    dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
    (param_3->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
    dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
    (param_3->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    (param_3->Translation).XY.m128d_f64[1] = dVar4;
    dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
    (param_3->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    (param_3->Translation).ZW.m128d_f64[1] = dVar4;
    dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
    (param_3->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
    dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
    (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
    (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
    return true;
  case ActiveContext:
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_230);
    if (local_230.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_230.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar8 = FCameraPose::GetTransform(&((local_230.Object)->InitialResult).CameraPose,&local_138)
      ;
      dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
      (param_3->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (param_3->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (param_3->Translation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_230.SharedReferenceCount.ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.SharedReferenceCount.ReferenceController);
    break;
  case OwningContext:
    pTVar1 = (param_1->EvaluationParams->EvaluationContext).SharedReferenceCount.ReferenceController
    ;
    pFVar2 = (param_1->EvaluationParams->EvaluationContext).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FCameraEvaluationContext *)0x0) {
      pTVar8 = FCameraPose::GetTransform(&(pFVar2->InitialResult).CameraPose,&local_d8);
      dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
      (param_3->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (param_3->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (param_3->Translation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    break;
  case Pivot:
    local_1f8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1f8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_1f8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1f8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar5 = FCameraNodeSpaceParams::FindPivotTransform(param_1,&local_1f8);
    if (bVar5) {
      (param_3->Rotation).XY.m128d_f64[0] = local_1f8.Rotation.XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = local_1f8.Rotation.XY.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = local_1f8.Rotation.ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = local_1f8.Rotation.ZW.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = local_1f8.Translation.XY.m128d_f64[0];
      (param_3->Translation).XY.m128d_f64[1] = local_1f8.Translation.XY.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = local_1f8.Translation.ZW.m128d_f64[0];
      (param_3->Translation).ZW.m128d_f64[1] = local_1f8.Translation.ZW.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = local_1f8.Scale3D.XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = local_1f8.Scale3D.XY.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = local_1f8.Scale3D.ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = local_1f8.Scale3D.ZW.m128d_f64[1];
      return true;
    }
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_220);
    if (local_220.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_220.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar8 = FCameraPose::GetTransform(&((local_220.Object)->InitialResult).CameraPose,&local_78);
      dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
      (param_3->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (param_3->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (param_3->Translation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.SharedReferenceCount.ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    break;
  case Pawn:
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_210);
    if (local_210.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_210.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this = (APlayerController *)
             FWeakObjectPtr::Get(&((local_210.Object)->WeakPlayerController).WeakPtr);
      if ((this != (APlayerController *)0x0) &&
         (pAVar7 = APlayerController::GetPawnOrSpectator(this), pAVar7 != (APawn *)0x0)) {
        if (pAVar7->_padding_ == 0) {
          pTVar8 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar8 = (TTransform<double> *)(pAVar7->_padding_ + 0x1f0);
        }
        dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
        (param_3->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
        (param_3->Rotation).XY.m128d_f64[1] = dVar4;
        dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
        (param_3->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
        (param_3->Rotation).ZW.m128d_f64[1] = dVar4;
        dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
        (param_3->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
        (param_3->Translation).XY.m128d_f64[1] = dVar4;
        dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
        (param_3->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
        (param_3->Translation).ZW.m128d_f64[1] = dVar4;
        dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
        (param_3->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
        (param_3->Scale3D).XY.m128d_f64[1] = dVar4;
        dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
        (param_3->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
        (param_3->Scale3D).ZW.m128d_f64[1] = dVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_210.SharedReferenceCount.ReferenceController);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_210.SharedReferenceCount.ReferenceController);
    break;
  case World:
    *&(param_3->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_3->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_3->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_3->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_3->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_3->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return true;
  default:
    `UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeSpaceTransform'::__l4::<lambda_1>::operator()
              (local_238);
  }
  return false;
}

// OffsetCameraNodeSpacePosition @ 14d621b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition
          (FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2,
          TVector<double> *param_3,TVector<double> *param_4,ECameraNodeSpace param_5,
          TVector<double> *param_6)

{
  bool bVar1;
  FCameraNodeSpaceParams local_18;
  
  local_18.EvaluationParams = param_1;
  local_18.EvaluationResult = param_2;
  bVar1 = OffsetCameraNodeSpacePosition(&local_18,param_3,param_4,param_5,param_6);
  return bVar1;
}

// OffsetCameraNodeSpacePosition @ 14d621b90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition
          (FCameraNodeSpaceParams *param_1,TVector<double> *param_2,TVector<double> *param_3,
          ECameraNodeSpace param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  FCameraNodeEvaluationResult *pFVar3;
  FCameraEvaluationContext *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  TVector<double> *pTVar13;
  APlayerController *this;
  APawn *pAVar14;
  TTransform<double> *pTVar15;
  FSharedReferencer<1> FVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double in_XMM1 [2];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 local_res20 [8];
  double local_1e8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_1e0;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_1d0;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_1c0;
  TRotator<double> local_1b0;
  TRotator<double> local_198;
  TRotator<double> local_180;
  TRotator<double> local_168;
  TTransform<double> local_148;
  TVector<double> local_e8;
  TVector<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98 [5];
  
  bVar10 = false;
  local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  switch(param_4) {
  case CameraPose:
    pFVar3 = param_1->EvaluationResult;
    local_1b0.Pitch = (pFVar3->CameraPose).Rotation.Pitch;
    local_1b0.Yaw = (pFVar3->CameraPose).Rotation.Yaw;
    local_1b0.Roll = (pFVar3->CameraPose).Rotation.Roll;
    in_XMM1[1] = 0.0;
    in_XMM1[0] = local_1b0.Roll;
    pTVar13 = UE::Math::TRotator<double>::RotateVector(&local_1b0,&local_c8,param_3);
    uVar40 = *(undefined4 *)&pTVar13->field0_0x0;
    uVar42 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
    uVar41 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
    uVar43 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
    local_1e8 = (pTVar13->field0_0x0)._s_0.Z;
    goto LAB_14d622087;
  case ActiveContext:
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_1e0);
    if (local_1e0.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_1e0.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      local_198.Pitch = ((local_1e0.Object)->InitialResult).CameraPose.Rotation.Pitch;
      local_198.Yaw = ((local_1e0.Object)->InitialResult).CameraPose.Rotation.Yaw;
      local_198.Roll = ((local_1e0.Object)->InitialResult).CameraPose.Rotation.Roll;
      in_XMM1[1] = 0.0;
      in_XMM1[0] = local_198.Roll;
      pTVar13 = UE::Math::TRotator<double>::RotateVector(&local_198,&local_b0,param_3);
      bVar10 = true;
      local_1e8 = (pTVar13->field0_0x0)._s_0.Z;
      uVar40 = *(undefined4 *)&pTVar13->field0_0x0;
      uVar42 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
      uVar41 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
      uVar43 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
    }
    dVar2 = (double)CONCAT44(uVar43,uVar41);
    dVar1 = (double)CONCAT44(uVar42,uVar40);
    FVar16.ReferenceController = local_1e0.SharedReferenceCount.ReferenceController;
    break;
  case OwningContext:
    FVar16.ReferenceController =
         (param_1->EvaluationParams->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar4 = (param_1->EvaluationParams->EvaluationContext).Object;
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = pFVar4 != (FCameraEvaluationContext *)0x0;
    if (bVar10) {
      local_180.Pitch = (pFVar4->InitialResult).CameraPose.Rotation.Pitch;
      local_180.Yaw = (pFVar4->InitialResult).CameraPose.Rotation.Yaw;
      local_180.Roll = (pFVar4->InitialResult).CameraPose.Rotation.Roll;
      in_XMM1[1] = 0.0;
      in_XMM1[0] = local_180.Roll;
      pTVar13 = UE::Math::TRotator<double>::RotateVector(&local_180,local_98,param_3);
      local_1e8 = (pTVar13->field0_0x0)._s_0.Z;
      uVar40 = *(undefined4 *)&pTVar13->field0_0x0;
      uVar42 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
      uVar41 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
      uVar43 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
    }
    dVar2 = (double)CONCAT44(uVar43,uVar41);
    dVar1 = (double)CONCAT44(uVar42,uVar40);
    break;
  case Pivot:
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    in_XMM1[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    in_XMM1[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_148.Scale3D.XY.m128d_f64 = in_XMM1;
    bVar11 = FCameraNodeSpaceParams::FindPivotTransform(param_1,&local_148);
    if (!bVar11) {
      FCameraNodeSpaceParams::GetActiveContext(param_1,&local_1d0);
      if (local_1d0.Object != (FCameraEvaluationContext *)0x0) {
        if ((local_1d0.Object == (FCameraEvaluationContext *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        local_168.Pitch = ((local_1d0.Object)->InitialResult).CameraPose.Rotation.Pitch;
        local_168.Yaw = ((local_1d0.Object)->InitialResult).CameraPose.Rotation.Yaw;
        local_168.Roll = ((local_1d0.Object)->InitialResult).CameraPose.Rotation.Roll;
        in_XMM1[1] = 0.0;
        in_XMM1[0] = local_168.Roll;
        pTVar13 = UE::Math::TRotator<double>::RotateVector(&local_168,&local_e8,param_3);
        bVar10 = true;
        local_1e8 = (pTVar13->field0_0x0)._s_0.Z;
        uVar40 = *(undefined4 *)&pTVar13->field0_0x0;
        uVar42 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
        uVar41 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
        uVar43 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
      }
      dVar2 = (double)CONCAT44(uVar43,uVar41);
      dVar1 = (double)CONCAT44(uVar42,uVar40);
      FVar16.ReferenceController = local_1d0.SharedReferenceCount.ReferenceController;
      break;
    }
    auVar9._8_8_ = local_148.Rotation.ZW.m128d_f64[1];
    auVar9._0_8_ = local_148.Rotation.ZW.m128d_f64[0];
    auVar24 = *(undefined1 (*) [16])&param_3->field0_0x0;
    auVar8._8_8_ = local_148.Rotation.XY.m128d_f64[1];
    auVar8._0_8_ = local_148.Rotation.XY.m128d_f64[0];
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    dVar39 = auVar24._8_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar1;
    auVar20 = blendpd(auVar24,auVar6,2);
    auVar36._0_8_ =
         dVar39 * local_148.Rotation.XY.m128d_f64[0] -
         auVar24._0_8_ * local_148.Rotation.XY.m128d_f64[1];
    auVar36._8_8_ =
         dVar1 * local_148.Rotation.XY.m128d_f64[1] - dVar39 * local_148.Rotation.ZW.m128d_f64[0];
    auVar29 = blendpd(auVar8,auVar9,2);
    auVar22._0_8_ = auVar20._0_8_ * local_148.Rotation.ZW.m128d_f64[0] - dVar1 * auVar29._0_8_;
    auVar22._8_8_ = auVar20._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar29._8_8_ * 0.0;
    auVar20 = blendpd(auVar36,auVar22,2);
    dVar2 = auVar36._8_8_ + auVar36._8_8_;
    dVar25 = auVar22._0_8_ + auVar22._0_8_;
    uVar40 = SUB84(dVar25,0);
    uVar42 = (undefined4)((ulonglong)dVar25 >> 0x20);
    auVar37._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar37._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar26._8_4_ = uVar40;
    auVar26._0_8_ = dVar2;
    auVar26._12_4_ = uVar42;
    auVar17._8_4_ = uVar40;
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar42;
    auVar23._8_4_ = uVar40;
    auVar23._0_8_ = dVar2;
    auVar23._12_4_ = uVar42;
    auVar20 = blendpd(auVar23,auVar37,2);
    auVar27._0_8_ =
         auVar26._8_8_ * local_148.Rotation.XY.m128d_f64[0] -
         dVar2 * local_148.Rotation.XY.m128d_f64[1];
    auVar27._8_8_ =
         auVar37._0_8_ * local_148.Rotation.XY.m128d_f64[1] -
         auVar17._8_8_ * local_148.Rotation.ZW.m128d_f64[0];
    auVar18._8_4_ = SUB84(auVar37._8_8_,0);
    auVar18._0_8_ = auVar37._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
    in_XMM1[0] = auVar20._0_8_ * local_148.Rotation.ZW.m128d_f64[0] - auVar37._0_8_ * auVar29._0_8_;
    in_XMM1[1] = auVar20._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar18._8_8_ * auVar29._8_8_;
    auVar19._8_4_ = SUB84(auVar27._8_8_,0);
    auVar19._0_8_ = auVar27._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar20 = blendpd(auVar27,(undefined1  [16])in_XMM1,2);
    local_1e8 = auVar37._0_8_ * local_148.Rotation.ZW.m128d_f64[1] + dVar1 + auVar20._0_8_;
    dVar1 = dVar2 * local_148.Rotation.ZW.m128d_f64[1] + auVar24._0_8_ + auVar19._8_8_;
    dVar2 = dVar25 * local_148.Rotation.ZW.m128d_f64[1] + dVar39 + in_XMM1[0];
    goto LAB_14d62208d;
  case Pawn:
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_1c0);
    FVar16.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
    if (local_1c0.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_1c0.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      this = (APlayerController *)
             FWeakObjectPtr::Get(&((local_1c0.Object)->WeakPlayerController).WeakPtr);
      FVar16.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
      if ((this != (APlayerController *)0x0) &&
         (pAVar14 = APlayerController::GetPawnOrSpectator(this),
         FVar16.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController,
         pAVar14 != (APawn *)0x0)) {
        if (pAVar14->_padding_ == 0) {
          pTVar15 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar15 = (TTransform<double> *)(pAVar14->_padding_ + 0x1f0);
        }
        in_XMM1 = *&(pTVar15->Rotation).ZW.m128d_f64;
        dVar21 = in_XMM1[0];
        bVar10 = true;
        auVar24 = *(undefined1 (*) [16])&param_3->field0_0x0;
        dVar1 = (param_3->field0_0x0)._s_0.Z;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = dVar1;
        auVar20 = *(undefined1 (*) [16])(pTVar15->Rotation).XY.m128d_f64;
        dVar39 = (pTVar15->Rotation).ZW.m128d_f64[1];
        dVar35 = auVar24._8_8_;
        auVar28 = blendpd(auVar20,(undefined1  [16])in_XMM1,2);
        auVar33._0_8_ = dVar35 * auVar20._0_8_ - auVar20._8_8_ * auVar24._0_8_;
        auVar33._8_8_ = dVar1 * auVar20._8_8_ - dVar21 * dVar35;
        auVar20 = blendpd(auVar24,auVar38,2);
        auVar29._0_8_ = auVar20._0_8_ * dVar21 - auVar28._0_8_ * dVar1;
        auVar29._8_8_ = auVar20._8_8_ * in_XMM1[1] - auVar28._8_8_ * 0.0;
        auVar20 = *(undefined1 (*) [16])(pTVar15->Rotation).XY.m128d_f64;
        auVar28 = blendpd(auVar33,auVar29,2);
        dVar2 = auVar33._8_8_ + auVar33._8_8_;
        dVar25 = auVar29._0_8_ + auVar29._0_8_;
        uVar40 = (undefined4)((ulonglong)dVar25 >> 0x20);
        auVar34._0_8_ = auVar28._0_8_ + auVar28._0_8_;
        auVar34._8_8_ = auVar28._8_8_ + auVar28._8_8_;
        auVar31._8_4_ = SUB84(dVar25,0);
        auVar31._0_8_ = dVar2;
        auVar31._12_4_ = uVar40;
        auVar28._8_4_ = SUB84(dVar25,0);
        auVar28._0_8_ = dVar2;
        auVar28._12_4_ = uVar40;
        auVar28 = blendpd(auVar28,auVar34,2);
        auVar32._0_8_ = auVar31._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar2;
        auVar32._8_8_ = auVar34._0_8_ * auVar20._8_8_ - dVar21 * dVar25;
        auVar29 = blendpd(auVar20,(undefined1  [16])in_XMM1,2);
        auVar20._8_4_ = SUB84(auVar32._8_8_,0);
        auVar20._0_8_ = auVar32._0_8_;
        auVar20._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
        auVar30._0_8_ = auVar28._0_8_ * dVar21 - auVar29._0_8_ * auVar34._0_8_;
        auVar30._8_8_ = auVar28._8_8_ * in_XMM1[1] - auVar29._8_8_ * auVar34._8_8_;
        auVar29 = blendpd(auVar32,auVar30,2);
        local_1e8 = auVar34._0_8_ * dVar39 + dVar1 + auVar29._0_8_;
        dVar1 = dVar2 * dVar39 + auVar24._0_8_ + auVar20._8_8_;
        dVar2 = dVar25 * dVar39 + dVar35 + auVar30._0_8_;
      }
    }
    break;
  case World:
    uVar40 = *(undefined4 *)&param_3->field0_0x0;
    uVar42 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uVar41 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uVar43 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_1e8 = (param_3->field0_0x0)._s_0.Z;
LAB_14d622087:
    dVar2 = (double)CONCAT44(uVar43,uVar41);
    dVar1 = (double)CONCAT44(uVar42,uVar40);
LAB_14d62208d:
    dVar25 = in_XMM1[1];
    bVar10 = true;
    goto LAB_14d62208f;
  default:
    `UE::Cameras::FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition'::__l4::<lambda_1>::operator()
              (local_res20);
    return false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  dVar25 = in_XMM1[1];
  if (bVar10 != false) {
LAB_14d62208f:
    auVar7._4_8_ = dVar25;
    auVar7._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar24._0_8_ = auVar7._0_8_ << 0x20;
    auVar24._8_4_ = SUB84(dVar2,0);
    auVar24._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar25 = (param_2->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = dVar1 + (param_2->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = auVar24._8_8_ + dVar25;
    (param_5->field0_0x0)._s_0.Z = local_1e8 + dVar2;
  }
  return bVar10;
}

// OffsetCameraNodeSpaceTransform @ 14d622130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
UE::Cameras::FCameraNodeSpaceMath::OffsetCameraNodeSpaceTransform
          (FCameraNodeSpaceParams *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,ECameraNodeSpace param_5,TTransform<double> *param_6)

{
  __m128d *p_Var1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  TQuat<double> *pTVar11;
  FCameraEvaluationContext *pFVar12;
  TTransform<double> *pTVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  undefined1 auStack_588 [32];
  TTransform<double> local_568;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_508;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_4f8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_4e8;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_490;
  TTransform<double> local_478;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  TQuat<double> local_3e8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  TQuat<double> local_318;
  TQuat<double> local_2f8;
  TQuat<double> local_2d8;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_588;
  dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  uVar68 = (undefined4)((ulonglong)dVar8 >> 0x20);
  local_568.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
  local_568.Rotation.XY.m128d_f64[0] = dVar7;
  local_568.Rotation.XY.m128d_f64[1]._4_4_ = uVar68;
  dVar5 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar6 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  uVar58 = (undefined4)((ulonglong)dVar6 >> 0x20);
  local_568.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_568.Rotation.ZW.m128d_f64[0] = dVar5;
  local_568.Rotation.ZW.m128d_f64[1]._4_4_ = uVar58;
  local_568.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_568.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_568.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_568.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_568.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_568.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  uVar49 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar50 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_568.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar49;
  local_568.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_568.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar50;
  if (param_5 == CameraPose) {
LAB_14d622a77:
    pTVar11 = UE::Math::TRotator<double>::Quaternion(param_4,&local_2d8);
    local_388 = pTVar11->Z;
    dStack_380 = pTVar11->W;
    local_398 = pTVar11->X;
    dStack_390 = pTVar11->Y;
    local_258.Translation.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
    local_258.Translation.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
    local_258.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_258.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_258.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
    local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_258.Translation.ZW.m128d_f64[1] = 0.0;
    local_258.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_258.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_258.Rotation.XY.m128d_f64[0] = local_398;
    local_258.Rotation.XY.m128d_f64[1] = dStack_390;
    local_258.Rotation.ZW.m128d_f64[0] = local_388;
    local_258.Rotation.ZW.m128d_f64[1] = dStack_380;
    UE::Math::TTransform<double>::Multiply(&local_2b8,&local_258,param_2);
    (param_6->Rotation).XY.m128d_f64[0] = local_2b8.Rotation.XY.m128d_f64[0];
    (param_6->Rotation).XY.m128d_f64[1] = local_2b8.Rotation.XY.m128d_f64[1];
    (param_6->Rotation).ZW.m128d_f64[0] = local_2b8.Rotation.ZW.m128d_f64[0];
    (param_6->Rotation).ZW.m128d_f64[1] = local_2b8.Rotation.ZW.m128d_f64[1];
    (param_6->Translation).XY.m128d_f64[0] = local_2b8.Translation.XY.m128d_f64[0];
    (param_6->Translation).XY.m128d_f64[1] = local_2b8.Translation.XY.m128d_f64[1];
    (param_6->Translation).ZW.m128d_f64[0] = local_2b8.Translation.ZW.m128d_f64[0];
    (param_6->Translation).ZW.m128d_f64[1] = local_2b8.Translation.ZW.m128d_f64[1];
    (param_6->Scale3D).XY.m128d_f64[0] = local_2b8.Scale3D.XY.m128d_f64[0];
    (param_6->Scale3D).XY.m128d_f64[1] = local_2b8.Scale3D.XY.m128d_f64[1];
    (param_6->Scale3D).ZW.m128d_f64[0] = local_2b8.Scale3D.ZW.m128d_f64[0];
    (param_6->Scale3D).ZW.m128d_f64[1] = local_2b8.Scale3D.ZW.m128d_f64[1];
    return true;
  }
  if (param_5 == ActiveContext) {
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_4e8);
    bVar10 = local_4e8.Object != (FCameraEvaluationContext *)0x0;
    if (bVar10) {
      pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(&local_4e8);
      pTVar13 = FCameraPose::GetTransform(&(pFVar12->InitialResult).CameraPose,&local_138);
      local_568.Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = (pTVar13->Translation).XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = (pTVar13->Translation).ZW.m128d_f64[1];
      dVar7 = (pTVar13->Rotation).XY.m128d_f64[0];
      dVar8 = (pTVar13->Rotation).XY.m128d_f64[1];
      local_568.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
      p_Var1 = &(pTVar13->Rotation).ZW;
      dVar5 = p_Var1->m128d_f64[0];
      dVar6 = (pTVar13->Rotation).ZW.m128d_f64[1];
      local_568.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
      local_568.Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = (pTVar13->Scale3D).XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
    }
  }
  else if (param_5 == OwningContext) {
    local_508.Object = (param_1->EvaluationParams->EvaluationContext).Object;
    local_4e8.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationParams->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      dVar8 = local_568.Rotation.XY.m128d_f64[1];
      dVar6 = local_568.Rotation.ZW.m128d_f64[1];
    }
    bVar10 = local_508.Object != (FCameraEvaluationContext *)0x0;
    local_508.SharedReferenceCount.ReferenceController =
         local_4e8.SharedReferenceCount.ReferenceController;
    if (bVar10) {
      pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(&local_508);
      pTVar13 = FCameraPose::GetTransform(&(pFVar12->InitialResult).CameraPose,&local_198);
      local_568.Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = (pTVar13->Translation).XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = (pTVar13->Translation).ZW.m128d_f64[1];
      dVar7 = (pTVar13->Rotation).XY.m128d_f64[0];
      dVar8 = (pTVar13->Rotation).XY.m128d_f64[1];
      local_568.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
      p_Var1 = &(pTVar13->Rotation).ZW;
      dVar5 = p_Var1->m128d_f64[0];
      dVar6 = (pTVar13->Rotation).ZW.m128d_f64[1];
      local_568.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
      local_568.Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = (pTVar13->Scale3D).XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
      local_4e8.SharedReferenceCount.ReferenceController =
           local_508.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    if (param_5 != Pivot) {
      if (param_5 == World) {
        dVar5 = (param_2->Rotation).XY.m128d_f64[1];
        (param_6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
        (param_6->Rotation).XY.m128d_f64[1] = dVar5;
        dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
        (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
        (param_6->Rotation).ZW.m128d_f64[1] = dVar5;
        dVar5 = (param_2->Translation).XY.m128d_f64[1];
        (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
        (param_6->Translation).XY.m128d_f64[1] = dVar5;
        dVar5 = (param_2->Translation).ZW.m128d_f64[1];
        (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
        (param_6->Translation).ZW.m128d_f64[1] = dVar5;
        dVar5 = (param_2->Scale3D).XY.m128d_f64[1];
        (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
        (param_6->Scale3D).XY.m128d_f64[1] = dVar5;
        dVar5 = (param_2->Scale3D).ZW.m128d_f64[1];
        (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
        (param_6->Scale3D).ZW.m128d_f64[1] = dVar5;
        local_3c8 = (param_2->Translation).XY.m128d_f64[0];
        dStack_3c0 = (param_2->Translation).XY.m128d_f64[1];
        local_3b8 = (param_2->Translation).ZW.m128d_f64[0];
        local_3b0 = local_3c8 + (param_3->field0_0x0)._s_0.X;
        local_3a0 = local_3b8 + (param_3->field0_0x0)._s_0.Z;
        dStack_3a8 = dStack_3c0 + (param_3->field0_0x0)._s_0.Y;
        (param_6->Translation).XY.m128d_f64[0] = local_3b0;
        (param_6->Translation).XY.m128d_f64[1] = dStack_3a8;
        (param_6->Translation).ZW.m128d_f64[0] = local_3a0;
        (param_6->Translation).ZW.m128d_f64[1] = 0.0;
        pTVar11 = UE::Math::TRotator<double>::Quaternion(param_4,&local_318);
        local_3e8.X = (param_2->Rotation).XY.m128d_f64[0];
        local_3e8.Y = (param_2->Rotation).XY.m128d_f64[1];
        local_3e8.Z = (param_2->Rotation).ZW.m128d_f64[0];
        local_3e8.W = (param_2->Rotation).ZW.m128d_f64[1];
        pTVar11 = UE::Math::TQuat<double>::operator*(pTVar11,&local_2f8,&local_3e8);
        dVar5 = pTVar11->Y;
        dVar6 = pTVar11->Z;
        dVar7 = pTVar11->W;
        (param_6->Rotation).XY.m128d_f64[0] = pTVar11->X;
        (param_6->Rotation).XY.m128d_f64[1] = dVar5;
        (param_6->Rotation).ZW.m128d_f64[0] = dVar6;
        (param_6->Rotation).ZW.m128d_f64[1] = dVar7;
        return true;
      }
      goto LAB_14d622a77;
    }
    local_478.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
    local_478.Rotation.XY.m128d_f64[0] = dVar7;
    local_478.Rotation.XY.m128d_f64[1]._4_4_ = uVar68;
    local_478.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
    local_478.Rotation.ZW.m128d_f64[0] = dVar5;
    local_478.Rotation.ZW.m128d_f64[1]._4_4_ = uVar58;
    local_478.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar49;
    local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_478.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar50;
    local_478.Translation.XY.m128d_f64[0] = local_568.Translation.XY.m128d_f64[0];
    local_478.Translation.XY.m128d_f64[1] = local_568.Translation.XY.m128d_f64[1];
    local_478.Translation.ZW.m128d_f64[0] = local_568.Translation.ZW.m128d_f64[0];
    local_478.Translation.ZW.m128d_f64[1] = local_568.Translation.ZW.m128d_f64[1];
    local_478.Scale3D.XY.m128d_f64[0] = local_568.Scale3D.XY.m128d_f64[0];
    local_478.Scale3D.XY.m128d_f64[1] = local_568.Scale3D.XY.m128d_f64[1];
    bVar10 = FCameraNodeSpaceParams::FindPivotTransform(param_1,&local_478);
    if (bVar10) {
      bVar10 = true;
      dVar7 = local_478.Rotation.XY.m128d_f64[0];
      dVar8 = local_478.Rotation.XY.m128d_f64[1];
      dVar5 = local_478.Rotation.ZW.m128d_f64[0];
      dVar6 = local_478.Rotation.ZW.m128d_f64[1];
      local_568.Translation.XY.m128d_f64[0] = local_478.Translation.XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = local_478.Translation.XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = local_478.Translation.ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = local_478.Translation.ZW.m128d_f64[1];
      local_568.Scale3D.XY.m128d_f64[0] = local_478.Scale3D.XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = local_478.Scale3D.XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64[0] = local_478.Scale3D.ZW.m128d_f64[0];
      local_568.Scale3D.ZW.m128d_f64[1] = local_478.Scale3D.ZW.m128d_f64[1];
      local_568.Rotation.XY.m128d_f64[0] = local_478.Rotation.XY.m128d_f64[0];
      local_568.Rotation.XY.m128d_f64[1] = local_478.Rotation.XY.m128d_f64[1];
      local_568.Rotation.ZW.m128d_f64[0] = local_478.Rotation.ZW.m128d_f64[0];
      local_568.Rotation.ZW.m128d_f64[1] = local_478.Rotation.ZW.m128d_f64[1];
      goto LAB_14d6224b7;
    }
    FCameraNodeSpaceParams::GetActiveContext(param_1,&local_4f8);
    bVar10 = local_4f8.Object != (FCameraEvaluationContext *)0x0;
    local_4e8.SharedReferenceCount.ReferenceController =
         local_4f8.SharedReferenceCount.ReferenceController;
    if (bVar10) {
      pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(&local_4f8);
      pTVar13 = FCameraPose::GetTransform(&(pFVar12->InitialResult).CameraPose,&local_1f8);
      local_568.Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = (pTVar13->Translation).XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = (pTVar13->Translation).ZW.m128d_f64[1];
      dVar7 = (pTVar13->Rotation).XY.m128d_f64[0];
      dVar8 = (pTVar13->Rotation).XY.m128d_f64[1];
      local_568.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
      p_Var1 = &(pTVar13->Rotation).ZW;
      dVar5 = p_Var1->m128d_f64[0];
      dVar6 = (pTVar13->Rotation).ZW.m128d_f64[1];
      local_568.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
      local_568.Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = (pTVar13->Scale3D).XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
      local_4e8.SharedReferenceCount.ReferenceController =
           local_4f8.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e8.SharedReferenceCount.ReferenceController);
  if (bVar10 == false) {
    return false;
  }
LAB_14d6224b7:
  UE::Math::TTransform<double>::TransformVector
            (&local_568,(TVector<double> *)&local_490._s_0,param_3);
  auVar9._8_8_ = _UNK_150689518;
  auVar9._0_8_ = ___xmm_00000000000000003ff0000000000000;
  auVar29 = blendpd(auVar9,ZEXT816(0),2);
  uVar49 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar52._8_4_ = SUB84(dVar8,0);
  auVar52._0_8_ = dVar7;
  auVar52._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar53 = blendpd(auVar52,auVar4,2);
  auVar15._8_4_ = SUB84(dVar5,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar49;
  auVar61._0_8_ = _UNK_150689518 * dVar7 - dVar8 * ___xmm_00000000000000003ff0000000000000;
  auVar61._8_8_ = dVar8 * 0.0 - auVar15._8_8_ * _UNK_150689518;
  dVar51 = auVar53._0_8_;
  dVar56 = auVar53._8_8_;
  auVar30._0_8_ = auVar29._0_8_ * dVar5 - dVar51 * 0.0;
  auVar30._8_8_ = auVar29._8_8_ * dVar6 - dVar56 * 0.0;
  auVar29 = blendpd(auVar61,auVar30,2);
  auVar62._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar62._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  dVar2 = auVar61._8_8_ + auVar61._8_8_;
  dVar3 = auVar30._0_8_ + auVar30._0_8_;
  uVar50 = SUB84(dVar3,0);
  uVar58 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar40._8_4_ = uVar50;
  auVar40._0_8_ = dVar2;
  auVar40._12_4_ = uVar58;
  auVar16._8_4_ = uVar50;
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar58;
  auVar31._8_4_ = uVar50;
  auVar31._0_8_ = dVar2;
  auVar31._12_4_ = uVar58;
  auVar29 = blendpd(auVar31,auVar62,2);
  auVar41._0_8_ = auVar40._8_8_ * dVar7 - dVar2 * dVar8;
  auVar41._8_8_ = auVar62._0_8_ * dVar8 - auVar16._8_8_ * dVar5;
  auVar17._8_4_ = SUB84(auVar62._8_8_,0);
  auVar17._0_8_ = auVar62._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar32._0_8_ = auVar29._0_8_ * dVar5 - auVar62._0_8_ * dVar51;
  auVar32._8_8_ = auVar29._8_8_ * dVar6 - auVar17._8_8_ * dVar56;
  auVar18._8_4_ = SUB84(auVar41._8_8_,0);
  auVar18._0_8_ = auVar41._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
  auVar29 = blendpd(auVar41,auVar32,2);
  local_408 = auVar62._0_8_ * dVar6 + auVar29._0_8_;
  dStack_400 = auVar62._8_8_ * dVar6 + auVar29._8_8_;
  dVar3 = dVar3 * dVar6 + _UNK_150689518 + auVar32._0_8_;
  dVar14 = (double)__xmm_3ff00000000000000000000000000000;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = uVar49;
  dVar38 = __xmm_3ff00000000000000000000000000000._8_8_;
  auVar29 = blendpd(___xmm_3ff00000000000000000000000000000,ZEXT816(0),2);
  auVar66._0_8_ = dVar38 * dVar7 - dVar8 * dVar14;
  auVar66._8_8_ = dVar8 * 0.0 - auVar19._8_8_ * dVar38;
  auVar63._8_4_ = SUB84(auVar66._8_8_,0);
  auVar63._0_8_ = auVar66._0_8_;
  auVar63._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  local_418._8_4_ = SUB84(dVar3,0);
  local_418._0_8_ = dVar2 * dVar6 + ___xmm_00000000000000003ff0000000000000 + auVar18._8_8_;
  local_418._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar33._0_8_ = auVar29._0_8_ * dVar5 - dVar51 * 0.0;
  auVar33._8_8_ = auVar29._8_8_ * dVar6 - dVar56 * 0.0;
  dVar59 = auVar63._8_8_ + auVar63._8_8_;
  dVar64 = auVar33._0_8_ + auVar33._0_8_;
  auVar29 = blendpd(auVar66,auVar33,2);
  auVar67._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar67._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  uVar49 = SUB84(dVar64,0);
  auVar42._8_4_ = uVar49;
  auVar42._0_8_ = dVar59;
  uVar50 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar42._12_4_ = uVar50;
  auVar20._8_4_ = uVar49;
  auVar20._0_8_ = dVar59;
  auVar20._12_4_ = uVar50;
  auVar43._0_8_ = auVar42._8_8_ * dVar7 - dVar59 * dVar8;
  auVar43._8_8_ = auVar67._0_8_ * dVar8 - auVar20._8_8_ * dVar5;
  auVar34._8_4_ = uVar49;
  auVar34._0_8_ = dVar59;
  auVar34._12_4_ = uVar50;
  auVar21._8_4_ = SUB84(auVar67._8_8_,0);
  auVar21._0_8_ = auVar67._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar29 = blendpd(auVar34,auVar67,2);
  auVar35._0_8_ = auVar29._0_8_ * dVar5 - auVar67._0_8_ * dVar51;
  auVar35._8_8_ = auVar29._8_8_ * dVar6 - auVar21._8_8_ * dVar56;
  auVar22._8_4_ = SUB84(auVar43._8_8_,0);
  auVar22._0_8_ = auVar43._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar29 = blendpd(auVar43,auVar35,2);
  UE::Math::TTransform<double>::GetUnitAxis(&local_568,(TVector<double> *)&local_4a8._s_0,Z);
  __libm_sse2_sincos_();
  dVar8 = extraout_XMM0._0_8_;
  dVar3 = dVar8 * local_4a8._s_0.X;
  dVar2 = dVar8 * local_4a8._s_0.Y;
  dVar8 = dVar8 * local_4a8._s_0.Z;
  dVar56 = extraout_XMM0._8_8_;
  __libm_sse2_sincos_();
  dVar5 = extraout_XMM0_00._0_8_;
  dVar7 = dVar5 * (dVar59 * dVar6 + dVar14 + auVar22._8_8_);
  dVar38 = dVar5 * (dVar64 * dVar6 + dVar38 + auVar35._0_8_);
  dVar5 = dVar5 * (auVar67._0_8_ * dVar6 + auVar29._0_8_);
  auVar46._8_4_ = SUB84(dVar38,0);
  auVar46._0_8_ = dVar7;
  auVar46._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar23._8_4_ = extraout_XMM0._8_4_;
  auVar23._0_8_ = dVar56;
  auVar23._12_4_ = extraout_XMM0._12_4_;
  auVar54._8_4_ = extraout_XMM0_00._8_4_;
  auVar54._0_8_ = dVar5;
  auVar54._12_4_ = extraout_XMM0_00._12_4_;
  auVar36._8_4_ = SUB84(dVar2,0);
  auVar36._0_8_ = dVar2;
  auVar36._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar24._8_4_ = SUB84(dVar8,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar51 = dVar3 * auVar54._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar56 * dVar7 +
           dVar2 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar8 * auVar46._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar6 = dVar3 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar23._8_8_ * dVar38 +
          auVar36._8_8_ * extraout_XMM0_00._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar24._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar49 = SUB84(dVar6,0);
  uVar50 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar6 = dVar3 * auVar46._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar56 * dVar5;
  dVar3 = dVar3 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar56 * extraout_XMM0_00._8_8_;
  local_4c8._8_4_ = uVar49;
  local_4c8._0_8_ = dVar51;
  local_4c8._12_4_ = uVar50;
  auVar25._8_4_ = SUB84(dVar3,0);
  auVar25._0_8_ = dVar6;
  auVar25._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dStack_4d0 = auVar25._8_8_ +
               dVar2 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_4d8 = dVar6 + dVar2 * dVar7 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar8 * auVar54._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  __libm_sse2_sincos_();
  dVar38 = extraout_XMM0_01._0_8_;
  auVar47._0_8_ = dVar38 * (double)local_418._0_8_;
  dVar39 = dVar38 * (double)local_418._8_8_;
  dVar64 = local_4d8._8_8_;
  dVar38 = dVar38 * local_408;
  auVar44._8_4_ = uVar49;
  auVar44._0_8_ = dVar51;
  auVar44._12_4_ = uVar50;
  dVar59 = local_4d8;
  dVar45 = auVar44._8_8_;
  auVar47._8_4_ = SUB84(dVar39,0);
  auVar47._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  auVar26._8_4_ = local_4d8._8_4_;
  auVar26._0_8_ = dVar64;
  auVar26._12_4_ = local_4d8._12_4_;
  auVar55._8_4_ = extraout_XMM0_01._8_4_;
  auVar55._0_8_ = dVar38;
  auVar55._12_4_ = extraout_XMM0_01._12_4_;
  auVar37._8_4_ = uVar49;
  auVar37._0_8_ = dVar45;
  auVar37._12_4_ = uVar50;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar27._8_4_ = local_4d8._0_4_;
  auVar27._0_8_ = dVar59;
  auVar27._12_4_ = local_4d8._4_4_;
  dVar60 = dVar51 * auVar55._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar64 * auVar47._0_8_ +
           dVar45 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar59 * auVar47._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar65 = dVar51 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar26._8_8_ * dVar39 +
           auVar37._8_8_ * extraout_XMM0_01._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar27._8_8_ * auVar47._0_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar56 = (param_2->Rotation).XY.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  (param_6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_6->Rotation).XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_6->Rotation).ZW.m128d_f64[1] = dVar56;
  dVar56 = (param_2->Translation).XY.m128d_f64[1];
  (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_6->Translation).XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->Translation).ZW.m128d_f64[1];
  (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_6->Translation).ZW.m128d_f64[1] = dVar56;
  dVar56 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_6->Scale3D).XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_6->Scale3D).ZW.m128d_f64[1] = dVar56;
  dVar14 = (param_2->Translation).XY.m128d_f64[1];
  dVar57 = (param_2->Translation).ZW.m128d_f64[0];
  dVar56 = dVar51 * auVar47._8_8_ * dVar5 + dVar64 * dVar38 + dVar45 * auVar47._0_8_ * dVar6 +
           dVar59 * auVar55._8_8_ * dVar7;
  dVar51 = dVar51 * auVar47._0_8_ * dVar8 + dVar64 * extraout_XMM0_01._8_8_ +
           dVar45 * dVar39 * dVar2 + dVar59 * dVar38 * dVar3;
  (param_6->Translation).XY.m128d_f64[0] = local_490._s_0.X + (param_2->Translation).XY.m128d_f64[0]
  ;
  (param_6->Translation).XY.m128d_f64[1] = local_490._s_0.Y + dVar14;
  (param_6->Translation).ZW.m128d_f64[0] = local_490._s_0.Z + dVar57;
  (param_6->Translation).ZW.m128d_f64[1] = 0.0;
  dVar59 = (param_2->Rotation).XY.m128d_f64[0];
  dVar64 = (param_2->Rotation).XY.m128d_f64[1];
  auVar29 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar14 = auVar29._0_8_;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar57 = auVar29._8_8_;
  auVar48._8_4_ = SUB84(dVar51,0);
  auVar48._0_8_ = dVar56;
  auVar48._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  auVar28._8_4_ = auVar29._0_4_;
  auVar28._0_8_ = dVar57;
  auVar28._12_4_ = auVar29._4_4_;
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar38 = dVar14 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar64 * dVar51 +
           dVar57 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar59 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar53._8_4_ = SUB84(dVar38,0);
  auVar53._0_8_ =
       dVar57 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar59 * auVar48._8_8_ +
       dVar14 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar64 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar53._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64 = auVar53;
  dVar8 = dVar59 * dVar60 * dVar8 + dVar57 * dVar51 + dVar64 * dVar65 * dVar2 +
          auVar28._8_8_ * dVar56 * dVar3;
  auVar29._8_4_ = SUB84(dVar8,0);
  auVar29._0_8_ =
       dVar64 * dVar60 * dVar5 + dVar14 * auVar48._8_8_ + dVar59 * dVar65 * dVar6 +
       dVar57 * dVar56 * dVar7;
  auVar29._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64 = auVar29;
  return bVar10;
}

// operator() @ 150585220

bool __thiscall
`UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeOriginPosition'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8527320952441143413>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8527320952441143413>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150585260

bool __thiscall
`UE::Cameras::FCameraNodeSpaceMath::GetCameraNodeSpaceTransform'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8527320952441143486>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8527320952441143486>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505852a0

bool __thiscall
`UE::Cameras::FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8527320952441143565>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8527320952441143565>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

