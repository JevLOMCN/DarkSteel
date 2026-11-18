// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e5f0

FCameraObjectTypeID * __thiscall
UE::Cameras::FLensParametersCameraNodeEvaluator::GetTypeID(FLensParametersCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621270

bool __thiscall
UE::Cameras::FLensParametersCameraNodeEvaluator::IsKindOf
          (FLensParametersCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FLensParametersCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628830

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLensParametersCameraNodeEvaluator::OnInitialize
          (FLensParametersCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = ULensParametersCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d628868;
    }
  }
  lVar3 = 0;
LAB_14d628868:
  (this->FocalLengthReader).DefaultValuePtr = (float *)(lVar3 + 0x38);
  (this->FocalLengthReader).VariableID.Value = *(uint *)(lVar3 + 0x3c);
  (this->FocusDistanceReader).DefaultValuePtr = (float *)(lVar3 + 0x48);
  (this->FocusDistanceReader).VariableID.Value = *(uint *)(lVar3 + 0x4c);
  (this->ApertureReader).DefaultValuePtr = (float *)(lVar3 + 0x58);
  (this->ApertureReader).VariableID.Value = *(uint *)(lVar3 + 0x5c);
  (this->EnablePhysicalCameraReader).DefaultValuePtr = (bool *)(lVar3 + 0x68);
  (this->EnablePhysicalCameraReader).VariableID.Value = *(uint *)(lVar3 + 0x6c);
  return;
}

// OnRun @ 14d62b450

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLensParametersCameraNodeEvaluator::OnRun
          (FLensParametersCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  bool *pbVar6;
  float fVar7;
  
  if ((this->FocalLengthReader).DefaultValuePtr == (float *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->FocalLengthReader).VariableID.Value == 0xffffffff) {
LAB_14d62b4ac:
    pfVar5 = (this->FocalLengthReader).DefaultValuePtr;
  }
  else {
    pfVar5 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->FocalLengthReader).VariableID.Value);
    if (pfVar5 == (float *)0x0) goto LAB_14d62b4ac;
  }
  fVar7 = *pfVar5;
  if (0.0 < fVar7) {
    if (fVar7 != (param_2->CameraPose).FocalLength) {
      (param_2->CameraPose).ChangedFlags.FocalLength = true;
      (param_2->CameraPose).FocalLength = fVar7;
    }
    if (__real_bf800000 != (param_2->CameraPose).FieldOfView) {
      (param_2->CameraPose).ChangedFlags.FieldOfView = true;
      (param_2->CameraPose).FieldOfView = -1.0;
    }
  }
  if ((this->FocusDistanceReader).DefaultValuePtr == (float *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->FocusDistanceReader).VariableID.Value == 0xffffffff) {
LAB_14d62b530:
    pfVar5 = (this->FocusDistanceReader).DefaultValuePtr;
  }
  else {
    pfVar5 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->FocusDistanceReader).VariableID.Value);
    if (pfVar5 == (float *)0x0) goto LAB_14d62b530;
  }
  fVar7 = *pfVar5;
  if ((0.0 < fVar7) && (fVar7 != (param_2->CameraPose).FocusDistance)) {
    pFVar2->FocusDistance = true;
    (param_2->CameraPose).FocusDistance = fVar7;
  }
  if ((this->ApertureReader).DefaultValuePtr == (float *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ApertureReader).VariableID.Value == 0xffffffff) {
LAB_14d62b596:
    pfVar5 = (this->ApertureReader).DefaultValuePtr;
  }
  else {
    pfVar5 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->ApertureReader).VariableID.Value);
    if (pfVar5 == (float *)0x0) goto LAB_14d62b596;
  }
  fVar7 = *pfVar5;
  if ((0.0 < fVar7) && (fVar7 != (param_2->CameraPose).Aperture)) {
    pFVar2->Aperture = true;
    (param_2->CameraPose).Aperture = fVar7;
  }
  if ((this->EnablePhysicalCameraReader).DefaultValuePtr == (bool *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->EnablePhysicalCameraReader).VariableID.Value != 0xffffffff) {
    pbVar6 = FCameraVariableTable::FindValue<bool>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->EnablePhysicalCameraReader).VariableID.Value);
    if (pbVar6 != (bool *)0x0) goto LAB_14d62b600;
  }
  pbVar6 = (this->EnablePhysicalCameraReader).DefaultValuePtr;
LAB_14d62b600:
  bVar4 = *pbVar6;
  if ((param_2->CameraPose).EnablePhysicalCamera != bVar4) {
    (param_2->CameraPose).ChangedFlags.EnablePhysicalCamera = true;
    (param_2->CameraPose).EnablePhysicalCamera = bVar4;
  }
  fVar7 = 0.0;
  if (bVar4 != false) {
    fVar7 = __real_3f800000;
  }
  if (fVar7 != (param_2->CameraPose).PhysicalCameraBlendWeight) {
    (param_2->CameraPose).ChangedFlags.PhysicalCameraBlendWeight = true;
    (param_2->CameraPose).PhysicalCameraBlendWeight = fVar7;
  }
  return;
}

