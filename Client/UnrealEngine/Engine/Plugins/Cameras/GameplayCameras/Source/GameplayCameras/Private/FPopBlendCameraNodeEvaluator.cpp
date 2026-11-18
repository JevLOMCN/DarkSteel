// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d61e680

FCameraObjectTypeID * __thiscall
UE::Cameras::FPopBlendCameraNodeEvaluator::GetTypeID(FPopBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6213d0

bool __thiscall
UE::Cameras::FPopBlendCameraNodeEvaluator::IsKindOf
          (FPopBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBlendParameters @ 14d622d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPopBlendCameraNodeEvaluator::OnBlendParameters
          (FPopBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  FCameraVariableTable::Override
            (param_2->VariableTable,param_1->ChildVariableTable,param_1->VariableTableFilter);
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

// OnBlendResults @ 14d623b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPopBlendCameraNodeEvaluator::OnBlendResults
          (FPopBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  FCameraNodeEvaluationResult *this_00;
  FCameraNodeEvaluationResult *pFVar1;
  
  this_00 = param_2->BlendedResult;
  pFVar1 = param_1->ChildResult;
  FCameraNodeEvaluationResult::OverrideAll(this_00,pFVar1,false);
  if ((pFVar1->bIsCameraCut != false) || (param_1->ChildParams->bIsFirstFrame != false)) {
    this_00->bIsCameraCut = true;
  }
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

// OnRun @ 14d62baa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPopBlendCameraNodeEvaluator::OnRun
          (FPopBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  return;
}

