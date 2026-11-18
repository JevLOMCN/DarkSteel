// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e5c0

FCameraObjectTypeID * __thiscall
UE::Cameras::FFilmbackCameraNodeEvaluator::GetTypeID(FFilmbackCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621200

bool __thiscall
UE::Cameras::FFilmbackCameraNodeEvaluator::IsKindOf
          (FFilmbackCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FFilmbackCameraNodeEvaluator>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
         FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628770

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FFilmbackCameraNodeEvaluator::OnInitialize
          (FFilmbackCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UFilmbackCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d6287a8;
    }
  }
  lVar3 = 0;
LAB_14d6287a8:
  (this->SensorWidthReader).DefaultValuePtr = (float *)(lVar3 + 0x38);
  (this->SensorWidthReader).VariableID.Value = *(uint *)(lVar3 + 0x3c);
  (this->SensorHeightReader).DefaultValuePtr = (float *)(lVar3 + 0x48);
  (this->SensorHeightReader).VariableID.Value = *(uint *)(lVar3 + 0x4c);
  (this->SensorHorizontalOffsetReader).DefaultValuePtr = (float *)(lVar3 + 0x58);
  (this->SensorHorizontalOffsetReader).VariableID.Value = *(uint *)(lVar3 + 0x5c);
  (this->SensorVerticalOffsetReader).DefaultValuePtr = (float *)(lVar3 + 0x68);
  (this->SensorVerticalOffsetReader).VariableID.Value = *(uint *)(lVar3 + 0x6c);
  (this->OverscanReader).DefaultValuePtr = (float *)(lVar3 + 0x78);
  (this->OverscanReader).VariableID.Value = *(uint *)(lVar3 + 0x7c);
  (this->ConstrainAspectRatioReader).DefaultValuePtr = (bool *)(lVar3 + 0x88);
  (this->ConstrainAspectRatioReader).VariableID.Value = *(uint *)(lVar3 + 0x8c);
  (this->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr = (bool *)(lVar3 + 0x98);
  (this->OverrideAspectRatioAxisConstraintReader).VariableID.Value = *(uint *)(lVar3 + 0x9c);
  return;
}

// OnRun @ 14d62b100

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FFilmbackCameraNodeEvaluator::OnRun
          (FFilmbackCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  undefined1 *puVar2;
  FCameraVariableTable *this_00;
  float fVar3;
  uchar uVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  bool *pbVar8;
  UClass *pUVar9;
  longlong lVar10;
  
  if ((this->SensorWidthReader).DefaultValuePtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->SensorWidthReader).VariableID.Value == 0xffffffff) {
LAB_14d62b164:
    pfVar7 = (this->SensorWidthReader).DefaultValuePtr;
  }
  else {
    pfVar7 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->SensorWidthReader).VariableID.Value);
    if (pfVar7 == (float *)0x0) goto LAB_14d62b164;
  }
  fVar3 = *pfVar7;
  this_00 = &param_2->VariableTable;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).SensorWidth)) {
    pFVar1->SensorWidth = true;
    (param_2->CameraPose).SensorWidth = fVar3;
  }
  if ((this->SensorHeightReader).DefaultValuePtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->SensorHeightReader).VariableID.Value == 0xffffffff) {
LAB_14d62b1d5:
    pfVar7 = (this->SensorHeightReader).DefaultValuePtr;
  }
  else {
    pfVar7 = FCameraVariableTable::FindValue<float>
                       (this_00,(FCameraVariableID)(this->SensorHeightReader).VariableID.Value);
    if (pfVar7 == (float *)0x0) goto LAB_14d62b1d5;
  }
  fVar3 = *pfVar7;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).SensorHeight)) {
    pFVar1->SensorHeight = true;
    (param_2->CameraPose).SensorHeight = fVar3;
  }
  if ((this->SensorHorizontalOffsetReader).DefaultValuePtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->SensorHorizontalOffsetReader).VariableID.Value == 0xffffffff) {
LAB_14d62b237:
    pfVar7 = (this->SensorHorizontalOffsetReader).DefaultValuePtr;
  }
  else {
    pfVar7 = FCameraVariableTable::FindValue<float>
                       (this_00,(FCameraVariableID)
                                (this->SensorHorizontalOffsetReader).VariableID.Value);
    if (pfVar7 == (float *)0x0) goto LAB_14d62b237;
  }
  fVar3 = *pfVar7;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).SensorHorizontalOffset)) {
    (param_2->CameraPose).ChangedFlags.SensorHorizontalOffset = true;
    (param_2->CameraPose).SensorHorizontalOffset = fVar3;
  }
  if ((this->SensorVerticalOffsetReader).DefaultValuePtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->SensorVerticalOffsetReader).VariableID.Value == 0xffffffff) {
LAB_14d62b299:
    pfVar7 = (this->SensorVerticalOffsetReader).DefaultValuePtr;
  }
  else {
    pfVar7 = FCameraVariableTable::FindValue<float>
                       (this_00,(FCameraVariableID)
                                (this->SensorVerticalOffsetReader).VariableID.Value);
    if (pfVar7 == (float *)0x0) goto LAB_14d62b299;
  }
  fVar3 = *pfVar7;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).SensorVerticalOffset)) {
    (param_2->CameraPose).ChangedFlags.SensorVerticalOffset = true;
    (param_2->CameraPose).SensorVerticalOffset = fVar3;
  }
  if ((this->OverscanReader).DefaultValuePtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->OverscanReader).VariableID.Value == 0xffffffff) {
LAB_14d62b2fb:
    pfVar7 = (this->OverscanReader).DefaultValuePtr;
  }
  else {
    pfVar7 = FCameraVariableTable::FindValue<float>
                       (this_00,(FCameraVariableID)(this->OverscanReader).VariableID.Value);
    if (pfVar7 == (float *)0x0) goto LAB_14d62b2fb;
  }
  fVar3 = *pfVar7;
  if (fVar3 != (param_2->CameraPose).Overscan) {
    (param_2->CameraPose).ChangedFlags.Overscan = true;
    (param_2->CameraPose).Overscan = fVar3;
  }
  if ((this->ConstrainAspectRatioReader).DefaultValuePtr == (bool *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->ConstrainAspectRatioReader).VariableID.Value == 0xffffffff) {
LAB_14d62b358:
    pbVar8 = (this->ConstrainAspectRatioReader).DefaultValuePtr;
  }
  else {
    pbVar8 = FCameraVariableTable::FindValue<bool>
                       (this_00,(FCameraVariableID)
                                (this->ConstrainAspectRatioReader).VariableID.Value);
    if (pbVar8 == (bool *)0x0) goto LAB_14d62b358;
  }
  bVar6 = *pbVar8;
  if ((param_2->CameraPose).ConstrainAspectRatio != bVar6) {
    (param_2->CameraPose).ChangedFlags.ConstrainAspectRatio = true;
    (param_2->CameraPose).ConstrainAspectRatio = bVar6;
  }
  if ((this->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr == (bool *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->OverrideAspectRatioAxisConstraintReader).VariableID.Value == 0xffffffff) {
LAB_14d62b3bd:
    pbVar8 = (this->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr;
  }
  else {
    pbVar8 = FCameraVariableTable::FindValue<bool>
                       (this_00,(FCameraVariableID)
                                (this->OverrideAspectRatioAxisConstraintReader).VariableID.Value);
    if (pbVar8 == (bool *)0x0) goto LAB_14d62b3bd;
  }
  bVar6 = *pbVar8;
  if ((param_2->CameraPose).OverrideAspectRatioAxisConstraint != bVar6) {
    (param_2->CameraPose).ChangedFlags.OverrideAspectRatioAxisConstraint = true;
    (param_2->CameraPose).OverrideAspectRatioAxisConstraint = bVar6;
  }
  if (this->_padding_ != 0) {
    pUVar9 = UFilmbackCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar6) {
      lVar10 = this->_padding_;
      goto LAB_14d62b3fd;
    }
  }
  lVar10 = 0;
LAB_14d62b3fd:
  uVar4 = *(uchar *)(lVar10 + 0xa8);
  if ((param_2->CameraPose).AspectRatioAxisConstraint.Value != uVar4) {
    (param_2->CameraPose).ChangedFlags.AspectRatioAxisConstraint = true;
    (param_2->CameraPose).AspectRatioAxisConstraint.Value = uVar4;
  }
  return;
}

