// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// FCameraNodeEvaluatorInitializeParams @ 14d543490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluatorInitializeParams * __thiscall
UE::Cameras::FCameraNodeEvaluatorInitializeParams::FCameraNodeEvaluatorInitializeParams
          (FCameraNodeEvaluatorInitializeParams *this,FCameraNodeEvaluatorHierarchy *param_1)

{
  (this->LastActiveCameraRigInfo).InstanceID.Value = 0xffffffff;
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastActiveCameraRigInfo).InstanceID.Layer = None;
  (this->LastActiveCameraRigInfo).EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  (this->LastActiveCameraRigInfo).EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastActiveCameraRigInfo).CameraRig.field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->LastActiveCameraRigInfo).LastResult = (FCameraNodeEvaluationResult *)0x0;
  (this->LastActiveCameraRigInfo).RootEvaluator = (FCameraNodeEvaluator *)0x0;
  this->Layer = Main;
  this->Hierarchy = param_1;
  return this;
}

