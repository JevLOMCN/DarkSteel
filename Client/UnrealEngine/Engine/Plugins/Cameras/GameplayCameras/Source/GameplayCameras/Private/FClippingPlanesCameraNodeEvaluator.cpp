// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e540

FCameraObjectTypeID * __thiscall
UE::Cameras::FClippingPlanesCameraNodeEvaluator::GetTypeID(FClippingPlanesCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621100

bool __thiscall
UE::Cameras::FClippingPlanesCameraNodeEvaluator::IsKindOf
          (FClippingPlanesCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FClippingPlanesCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d627fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FClippingPlanesCameraNodeEvaluator::OnInitialize
          (FClippingPlanesCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UClippingPlanesCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d627ff8;
    }
  }
  lVar3 = 0;
LAB_14d627ff8:
  (this->NearPlaneReader).DefaultValuePtr = (double *)(lVar3 + 0x38);
  (this->NearPlaneReader).VariableID.Value = *(uint *)(lVar3 + 0x40);
  (this->FarPlaneReader).DefaultValuePtr = (double *)(lVar3 + 0x50);
  (this->FarPlaneReader).VariableID.Value = *(uint *)(lVar3 + 0x58);
  return;
}

// OnRun @ 14d62a320

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FClippingPlanesCameraNodeEvaluator::OnRun
          (FClippingPlanesCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  float fVar5;
  
  if ((this->NearPlaneReader).DefaultValuePtr == (double *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->NearPlaneReader).VariableID.Value == 0xffffffff) {
LAB_14d62a37c:
    pdVar4 = (this->NearPlaneReader).DefaultValuePtr;
  }
  else {
    pdVar4 = FCameraVariableTable::FindValue<double>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->NearPlaneReader).VariableID.Value);
    if (pdVar4 == (double *)0x0) goto LAB_14d62a37c;
  }
  fVar5 = (float)*pdVar4;
  if ((0.0 < fVar5) && (fVar5 != (param_2->CameraPose).NearClippingPlane)) {
    (param_2->CameraPose).ChangedFlags.NearClippingPlane = true;
    (param_2->CameraPose).NearClippingPlane = fVar5;
  }
  if ((this->FarPlaneReader).DefaultValuePtr == (double *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->FarPlaneReader).VariableID.Value != 0xffffffff) {
    pdVar4 = FCameraVariableTable::FindValue<double>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->FarPlaneReader).VariableID.Value);
    if (pdVar4 != (double *)0x0) goto LAB_14d62a3ed;
  }
  pdVar4 = (this->FarPlaneReader).DefaultValuePtr;
LAB_14d62a3ed:
  fVar5 = (float)*pdVar4;
  if ((0.0 < fVar5) && (fVar5 != (param_2->CameraPose).FarClippingPlane)) {
    (param_2->CameraPose).ChangedFlags.FarClippingPlane = true;
    (param_2->CameraPose).FarClippingPlane = fVar5;
  }
  return;
}

