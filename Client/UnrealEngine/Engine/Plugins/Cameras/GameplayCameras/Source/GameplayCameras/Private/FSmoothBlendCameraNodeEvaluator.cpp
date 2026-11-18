// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d61e700

FCameraObjectTypeID * __thiscall
UE::Cameras::FSmoothBlendCameraNodeEvaluator::GetTypeID(FSmoothBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621510

bool __thiscall
UE::Cameras::FSmoothBlendCameraNodeEvaluator::IsKindOf
          (FSmoothBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

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

// OnComputeBlendFactor @ 14d626090

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSmoothBlendCameraNodeEvaluator::OnComputeBlendFactor
          (FSmoothBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FSimpleBlendCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar2 = USmoothBlendCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0x10;
      goto LAB_14d6260c9;
    }
  }
  lVar3 = 0;
LAB_14d6260c9:
  fVar5 = __real_3f800000;
  if (0.0 < *(float *)&this->field_0x38) {
    fVar5 = *(float *)&this->field_0x3c / *(float *)&this->field_0x38;
  }
  if (*(int *)(lVar3 + 0x48) == 0) {
    fVar4 = (__real_40400000 - (fVar5 + fVar5)) * fVar5 * fVar5;
  }
  else {
    fVar4 = __real_3f800000;
    if (*(int *)(lVar3 + 0x48) == 1) {
      param_2->BlendFactor =
           ((fVar5 * __real_40c00000 - __real_41700000) * fVar5 + __real_41200000) * fVar5 *
           fVar5 * fVar5;
      return;
    }
  }
  param_2->BlendFactor = fVar4;
  return;
}

