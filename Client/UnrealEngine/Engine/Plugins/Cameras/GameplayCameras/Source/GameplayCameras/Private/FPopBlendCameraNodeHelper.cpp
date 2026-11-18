// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// PopParameters @ 14d62e2c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::Cameras::FPopBlendCameraNodeHelper::PopParameters
          (FCameraNodePreBlendParams *param_1,FCameraNodePreBlendResult *param_2)

{
  FCameraVariableTable::Override
            (param_2->VariableTable,param_1->ChildVariableTable,param_1->VariableTableFilter);
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

// PopResults @ 14d62e2f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::Cameras::FPopBlendCameraNodeHelper::PopResults
          (FCameraNodeBlendParams *param_1,FCameraNodeBlendResult *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  FCameraNodeEvaluationResult *this;
  
  pFVar1 = param_1->ChildResult;
  this = param_2->BlendedResult;
  FCameraNodeEvaluationResult::OverrideAll(this,pFVar1,false);
  if ((pFVar1->bIsCameraCut != false) || (param_1->ChildParams->bIsFirstFrame != false)) {
    this->bIsCameraCut = true;
  }
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

