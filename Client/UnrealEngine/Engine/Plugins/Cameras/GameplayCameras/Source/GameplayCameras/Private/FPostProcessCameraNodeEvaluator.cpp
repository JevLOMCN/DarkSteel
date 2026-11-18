// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d61e690

FCameraObjectTypeID * __thiscall
UE::Cameras::FPostProcessCameraNodeEvaluator::GetTypeID(FPostProcessCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621400

bool __thiscall
UE::Cameras::FPostProcessCameraNodeEvaluator::IsKindOf
          (FPostProcessCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPostProcessCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d62bab0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessCameraNodeEvaluator::OnRun
          (FPostProcessCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar2 = UPostProcessCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0x10;
      goto LAB_14d62bae3;
    }
  }
  lVar3 = 0;
LAB_14d62bae3:
  FPostProcessSettingsCollection::OverrideChanged
            (&param_2->PostProcessSettings,(FPostProcessSettings *)(lVar3 + 0x40));
  return;
}

