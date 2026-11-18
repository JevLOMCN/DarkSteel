// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FCameraNodeSpaceParams @ 14d5fb770

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeSpaceParams * __thiscall
UE::Cameras::FCameraNodeSpaceParams::FCameraNodeSpaceParams
          (FCameraNodeSpaceParams *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  this->EvaluationParams = param_1;
  this->EvaluationResult = param_2;
  return this;
}

// FindPivotTransform @ 14d6164e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraNodeSpaceParams::FindPivotTransform
          (FCameraNodeSpaceParams *this,TTransform<double> *param_1)

{
  int iVar1;
  FCameraNodeEvaluationResult *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  FBuiltInCameraVariables *pFVar7;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar8;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar9;
  
  pFVar7 = FBuiltInCameraVariables::Get();
  pFVar2 = this->EvaluationResult;
  iVar1 = (pFVar2->CameraRigJoints).Joints.ArrayNum;
  FVar9 = (pFVar2->CameraRigJoints).Joints.AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)&pFVar2->CameraRigJoints;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FVar8 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)iVar1 * 0x70 + (longlong)FVar9);
  if (FVar9 != FVar8) {
    do {
      if (*(uint *)FVar9 == (pFVar7->YawPitchDefinition).VariableID.Value) {
        dVar4 = *(double *)((longlong)FVar9 + 0x18);
        (param_1->Rotation).XY.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x10);
        (param_1->Rotation).XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)((longlong)FVar9 + 0x28);
        (param_1->Rotation).ZW.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x20);
        (param_1->Rotation).ZW.m128d_f64[1] = dVar4;
        dVar4 = *(double *)((longlong)FVar9 + 0x38);
        (param_1->Translation).XY.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x30);
        (param_1->Translation).XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)((longlong)FVar9 + 0x48);
        (param_1->Translation).ZW.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x40);
        (param_1->Translation).ZW.m128d_f64[1] = dVar4;
        dVar4 = *(double *)((longlong)FVar9 + 0x58);
        (param_1->Scale3D).XY.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x50);
        (param_1->Scale3D).XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)((longlong)FVar9 + 0x68);
        (param_1->Scale3D).ZW.m128d_f64[0] = *(double *)((longlong)FVar9 + 0x60);
        (param_1->Scale3D).ZW.m128d_f64[1] = dVar4;
        return true;
      }
      FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)FVar9 + 0x70);
    } while (FVar9 != FVar8);
  }
  return false;
}

// GetActiveContext @ 14d618060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> * __thiscall
UE::Cameras::FCameraNodeSpaceParams::GetActiveContext
          (FCameraNodeSpaceParams *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *__return_storage_ptr__)

{
  FCameraSystemEvaluator *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *pTVar5;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar6;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  pFVar1 = this->EvaluationParams->Evaluator;
  if (pFVar1 != (FCameraSystemEvaluator *)0x0) {
    pTVar6 = FCameraEvaluationContextStack::GetActiveContext(&pFVar1->ContextStack,&local_18);
    __return_storage_ptr__->Object = pTVar6->Object;
    pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8527320952441143323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Math\\CameraNodeSpaceMath.cpp"
                     ,0x1b,"EvaluationParams.Evaluator");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)(*pcVar3)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = (FCameraEvaluationContext *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetOwningContext @ 14d61af30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> * __thiscall
UE::Cameras::FCameraNodeSpaceParams::GetOwningContext
          (FCameraNodeSpaceParams *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *__return_storage_ptr__)

{
  FCameraNodeEvaluationParams *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = this->EvaluationParams;
  __return_storage_ptr__->Object = (pFVar1->EvaluationContext).Object;
  pTVar2 = (pFVar1->EvaluationContext).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

