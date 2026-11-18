// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// GetTypeID @ 14d56c7c0

FCameraObjectTypeID * __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::GetTypeID(FShakeCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d56c860

bool __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::IsKindOf
          (FShakeCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FShakeCameraNodeEvaluator>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnShakeResult @ 14d56c880

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::OnShakeResult
          (FShakeCameraNodeEvaluator *this,FCameraNodeShakeParams *param_1,
          FCameraNodeShakeResult *param_2)

{
  return;
}

// OnSetShakeScale @ 14d56c890

void __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::OnSetShakeScale
          (FShakeCameraNodeEvaluator *this,float param_1)

{
  return;
}

// OnRestartShake @ 14d56c8a0

void __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::OnRestartShake
          (FShakeCameraNodeEvaluator *this,FCameraNodeShakeRestartParams *param_1)

{
  return;
}

// RestartShake @ 14d5cc720

void __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::RestartShake
          (FShakeCameraNodeEvaluator *this,FCameraNodeShakeRestartParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5cc723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x78))();
  return;
}

// ShakeResult @ 14d5cfea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::ShakeResult
          (FShakeCameraNodeEvaluator *this,FCameraNodeShakeParams *param_1,
          FCameraNodeShakeResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5cfea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x68))();
  return;
}

