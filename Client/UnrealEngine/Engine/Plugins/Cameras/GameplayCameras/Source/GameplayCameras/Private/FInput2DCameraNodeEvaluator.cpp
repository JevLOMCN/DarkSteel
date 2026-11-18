// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d661c40

FCameraObjectTypeID * __thiscall
UE::Cameras::FInput2DCameraNodeEvaluator::GetTypeID(FInput2DCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662f80

bool __thiscall
UE::Cameras::FInput2DCameraNodeEvaluator::IsKindOf
          (FInput2DCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FInput2DCameraNodeEvaluator>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
         FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnSerialize @ 14d66e850

void __thiscall
UE::Cameras::FInput2DCameraNodeEvaluator::OnSerialize
          (FInput2DCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<(param_2,&this->InputValue);
  return;
}

