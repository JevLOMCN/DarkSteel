// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e500

FCameraObjectTypeID * __thiscall
UE::Cameras::FBodyParametersCameraNodeEvaluator::GetTypeID(FBodyParametersCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621080

bool __thiscall
UE::Cameras::FBodyParametersCameraNodeEvaluator::IsKindOf
          (FBodyParametersCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBodyParametersCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d627e00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBodyParametersCameraNodeEvaluator::OnInitialize
          (FBodyParametersCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UBodyParametersCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d627e38;
    }
  }
  lVar3 = 0;
LAB_14d627e38:
  (this->ShutterSpeedReader).DefaultValuePtr = (float *)(lVar3 + 0x38);
  (this->ShutterSpeedReader).VariableID.Value = *(uint *)(lVar3 + 0x3c);
  (this->ISOReader).DefaultValuePtr = (float *)(lVar3 + 0x48);
  (this->ISOReader).VariableID.Value = *(uint *)(lVar3 + 0x4c);
  return;
}

// OnRun @ 14d629c00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBodyParametersCameraNodeEvaluator::OnRun
          (FBodyParametersCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  undefined1 *puVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  
  if ((this->ShutterSpeedReader).DefaultValuePtr == (float *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->ShutterSpeedReader).VariableID.Value == 0xffffffff) {
LAB_14d629c5c:
    pfVar6 = (this->ShutterSpeedReader).DefaultValuePtr;
  }
  else {
    pfVar6 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->ShutterSpeedReader).VariableID.Value);
    if (pfVar6 == (float *)0x0) goto LAB_14d629c5c;
  }
  fVar3 = *pfVar6;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).ShutterSpeed)) {
    pFVar1->ShutterSpeed = true;
    (param_2->CameraPose).ShutterSpeed = fVar3;
  }
  if ((this->ISOReader).DefaultValuePtr == (float *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->ISOReader).VariableID.Value != 0xffffffff) {
    pfVar6 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->ISOReader).VariableID.Value);
    if (pfVar6 != (float *)0x0) goto LAB_14d629cc9;
  }
  pfVar6 = (this->ISOReader).DefaultValuePtr;
LAB_14d629cc9:
  fVar3 = *pfVar6;
  if ((0.0 < fVar3) && (fVar3 != (param_2->CameraPose).ISO)) {
    (param_2->CameraPose).ChangedFlags.ISO = true;
    (param_2->CameraPose).ISO = fVar3;
  }
  return;
}

