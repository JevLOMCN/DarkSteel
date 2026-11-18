// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e670

FCameraObjectTypeID * __thiscall
UE::Cameras::FOrthographicCameraNodeEvaluator::GetTypeID(FOrthographicCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6213b0

bool __thiscall
UE::Cameras::FOrthographicCameraNodeEvaluator::IsKindOf
          (FOrthographicCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FOrthographicCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628a00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrthographicCameraNodeEvaluator::OnInitialize
          (FOrthographicCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UOrthographicCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d628a38;
    }
  }
  lVar3 = 0;
LAB_14d628a38:
  (this->EnableOrthographicModeReader).DefaultValuePtr = (bool *)(lVar3 + 0x38);
  (this->EnableOrthographicModeReader).VariableID.Value = *(uint *)(lVar3 + 0x3c);
  (this->OrthographicWidthReader).DefaultValuePtr = (float *)(lVar3 + 0x48);
  (this->OrthographicWidthReader).VariableID.Value = *(uint *)(lVar3 + 0x4c);
  return;
}

// OnRun @ 14d62b9b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrthographicCameraNodeEvaluator::OnRun
          (FOrthographicCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool *pbVar5;
  float *pfVar6;
  
  if ((this->EnableOrthographicModeReader).DefaultValuePtr == (bool *)0x0) {
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
  if ((this->EnableOrthographicModeReader).VariableID.Value == 0xffffffff) {
LAB_14d62ba07:
    pbVar5 = (this->EnableOrthographicModeReader).DefaultValuePtr;
  }
  else {
    pbVar5 = FCameraVariableTable::FindValue<bool>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->EnableOrthographicModeReader).VariableID.Value);
    if (pbVar5 == (bool *)0x0) goto LAB_14d62ba07;
  }
  if ((*pbVar5 != false) && ((param_2->CameraPose).ProjectionMode.Value != '\x01')) {
    (param_2->CameraPose).ChangedFlags.ProjectionMode = true;
    (param_2->CameraPose).ProjectionMode.Value = '\x01';
  }
  if ((this->OrthographicWidthReader).DefaultValuePtr == (float *)0x0) {
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
  if ((this->OrthographicWidthReader).VariableID.Value != 0xffffffff) {
    pfVar6 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->OrthographicWidthReader).VariableID.Value);
    if (pfVar6 != (float *)0x0) goto LAB_14d62ba72;
  }
  pfVar6 = (this->OrthographicWidthReader).DefaultValuePtr;
LAB_14d62ba72:
  fVar2 = *pfVar6;
  if (fVar2 != (param_2->CameraPose).OrthographicWidth) {
    (param_2->CameraPose).ChangedFlags.OrthographicWidth = true;
    (param_2->CameraPose).OrthographicWidth = fVar2;
  }
  return;
}

