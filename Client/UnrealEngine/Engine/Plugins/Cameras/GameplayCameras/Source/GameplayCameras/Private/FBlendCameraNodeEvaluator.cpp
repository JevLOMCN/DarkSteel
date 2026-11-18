// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// GetTypeID @ 14d536af0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::GetTypeID(FBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d536b00

bool __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::IsKindOf
          (FBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBlendParameters @ 14d536b20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::OnBlendParameters
          (FBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  return;
}

// OnBlendResults @ 14d536b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::OnBlendResults
          (FBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  return;
}

// OnInitializeFromInterruption @ 14d536b40

bool __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::OnInitializeFromInterruption
          (FBlendCameraNodeEvaluator *this,FCameraNodeBlendInterruptionParams *param_1)

{
  return false;
}

// OnSetReversed @ 14d536b50

bool __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::OnSetReversed(FBlendCameraNodeEvaluator *this,bool param_1)

{
  return false;
}

// OnFreeze @ 14d536b60

void __thiscall UE::Cameras::FBlendCameraNodeEvaluator::OnFreeze(FBlendCameraNodeEvaluator *this)

{
  return;
}

// BlendParameters @ 14d5494d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::BlendParameters
          (FBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5494d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x68))();
  return;
}

// BlendResults @ 14d5494e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::BlendResults
          (FBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5494e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x70))();
  return;
}

// Freeze @ 14d554710

void __thiscall UE::Cameras::FBlendCameraNodeEvaluator::Freeze(FBlendCameraNodeEvaluator *this)

{
  (**(code **)(*(longlong *)this + 0x88))();
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// InitializeFromInterruption @ 14d559fd0

bool __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::InitializeFromInterruption
          (FBlendCameraNodeEvaluator *this,FCameraNodeBlendInterruptionParams *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d559fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x78))();
  return (bool)uVar1;
}

// SetReversed @ 14d564eb0

bool __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::SetReversed(FBlendCameraNodeEvaluator *this,bool param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d564eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x80))();
  return (bool)uVar1;
}

