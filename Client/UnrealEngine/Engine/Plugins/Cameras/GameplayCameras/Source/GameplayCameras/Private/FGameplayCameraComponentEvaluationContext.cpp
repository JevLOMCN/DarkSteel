// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// GetTypeID @ 14d61e5d0

FCameraObjectTypeID * __thiscall
UE::Cameras::FGameplayCameraComponentEvaluationContext::GetTypeID
          (FGameplayCameraComponentEvaluationContext *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621220

bool __thiscall
UE::Cameras::FGameplayCameraComponentEvaluationContext::IsKindOf
          (FGameplayCameraComponentEvaluationContext *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FGameplayCameraComponentEvaluationContext>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>)param_1->ID !=
      FCameraEvaluationContext::PrivateTypeID)) {
    return false;
  }
  return true;
}

