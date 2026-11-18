// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// UpdateOperation @ 14d0879f0

void __thiscall
FApplyToClientLatentAction::UpdateOperation
          (FApplyToClientLatentAction *this,FLatentResponse *param_1)

{
  EApplyToClientUpdateResult EVar1;
  
  EVar1 = FApplyToClientPollingOperation::Update(&this->ApplyOperation);
  if (EVar1 != Pending) {
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  }
  return;
}

