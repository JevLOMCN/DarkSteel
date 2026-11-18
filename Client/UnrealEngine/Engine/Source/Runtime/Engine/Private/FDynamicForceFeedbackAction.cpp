// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 1483b2d50

bool __thiscall
APlayerController::FDynamicForceFeedbackAction::Update
          (FDynamicForceFeedbackAction *this,float param_1,FForceFeedbackValues *param_2)

{
  float fVar1;
  
  fVar1 = param_1 + this->TimeElapsed;
  this->TimeElapsed = fVar1;
  if ((0.0 <= this->TotalTime) && (this->TotalTime <= fVar1)) {
    return false;
  }
  FDynamicForceFeedbackDetails::Update(&this->ForceFeedbackDetails,param_2);
  return true;
}

