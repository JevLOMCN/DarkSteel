// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// HandleControlModified @ 14a26dd30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FControlEvaluationGraphBinding::HandleControlModified
          (FControlEvaluationGraphBinding *this,UControlRig *param_1,FRigControlElement *param_2,
          FRigControlModifiedContext *param_3)

{
  UWorld *pUVar1;
  FConstraintsManagerController *this_00;
  
  if ((((this->bPendingFlush != false) && (param_3->bConstraintUpdate != false)) &&
      (param_1 != (UControlRig *)0x0)) && (param_2 != (FRigControlElement *)0x0)) {
    pUVar1 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
    if (pUVar1 != (UWorld *)0x0) {
      this_00 = FConstraintsManagerController::Get(pUVar1);
      FConstraintsManagerController::FlushEvaluationGraph(this_00);
    }
    this->bPendingFlush = false;
  }
  return;
}

