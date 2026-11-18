// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e5b0

FCameraObjectTypeID * __thiscall
UE::Cameras::FFieldOfViewCameraNodeEvaluator::GetTypeID(FFieldOfViewCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6211e0

bool __thiscall
UE::Cameras::FFieldOfViewCameraNodeEvaluator::IsKindOf
          (FFieldOfViewCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FFieldOfViewCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628710

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FFieldOfViewCameraNodeEvaluator::OnInitialize
          (FFieldOfViewCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UFieldOfViewCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d628748;
    }
  }
  lVar3 = 0;
LAB_14d628748:
  (this->FieldOfViewReader).DefaultValuePtr = (float *)(lVar3 + 0x38);
  (this->FieldOfViewReader).VariableID.Value = *(uint *)(lVar3 + 0x3c);
  return;
}

// OnRun @ 14d62b060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FFieldOfViewCameraNodeEvaluator::OnRun
          (FFieldOfViewCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  
  if ((this->FieldOfViewReader).DefaultValuePtr == (float *)0x0) {
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
  if ((this->FieldOfViewReader).VariableID.Value != 0xffffffff) {
    pfVar5 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->FieldOfViewReader).VariableID.Value);
    if (pfVar5 != (float *)0x0) goto LAB_14d62b0bb;
  }
  pfVar5 = (this->FieldOfViewReader).DefaultValuePtr;
LAB_14d62b0bb:
  fVar2 = *pfVar5;
  if (fVar2 != (param_2->CameraPose).FieldOfView) {
    (param_2->CameraPose).ChangedFlags.FieldOfView = true;
    (param_2->CameraPose).FieldOfView = fVar2;
  }
  if (__real_bf800000 != (param_2->CameraPose).FocalLength) {
    (param_2->CameraPose).ChangedFlags.FocalLength = true;
    (param_2->CameraPose).FocalLength = -1.0;
  }
  return;
}

