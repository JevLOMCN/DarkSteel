// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d61e600

FCameraObjectTypeID * __thiscall
UE::Cameras::FLinearBlendCameraNodeEvaluator::GetTypeID(FLinearBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621290

bool __thiscall
UE::Cameras::FLinearBlendCameraNodeEvaluator::IsKindOf
          (FLinearBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if ((((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
       (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
                 FSimpleFixedTimeBlendCameraNodeEvaluator::PrivateTypeID)) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
                FSimpleBlendCameraNodeEvaluator::PrivateTypeID)) &&
     ((TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
                FCameraNodeEvaluator::PrivateTypeID)))) {
    return false;
  }
  return true;
}

// OnComputeBlendFactor @ 14d626010

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLinearBlendCameraNodeEvaluator::OnComputeBlendFactor
          (FLinearBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FSimpleBlendCameraNodeEvaluationResult *param_2)

{
  UClass *pUVar1;
  float fVar2;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar1 = ULinearBlendCameraNode::StaticClass();
    FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar1);
  }
  fVar2 = __real_3f800000;
  if (0.0 < *(float *)&this->field_0x38) {
    fVar2 = *(float *)&this->field_0x3c / *(float *)&this->field_0x38;
  }
  param_2->BlendFactor = fVar2;
  return;
}

