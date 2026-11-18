// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FFinishedTask @ 14d4e9da0

FFinishedTask * __thiscall
UE::StateTree::FFinishedTask::FFinishedTask
          (FFinishedTask *this,FActiveFrameID param_1,FActiveStateID param_2,
          FStateTreeIndex16 param_3,EStateTreeRunStatus param_4,EReasonType param_5,bool param_6)

{
  this->RunStatus = param_4;
  this->Reason = param_5;
  this->bTickProcessed = param_6;
  (this->FrameID).Value = param_1.Value;
  (this->StateID).Value = param_2.Value;
  (this->TaskIndex).Value = param_3.Value;
  return this;
}

