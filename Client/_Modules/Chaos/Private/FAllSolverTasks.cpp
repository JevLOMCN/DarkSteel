// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// AdvanceSolver @ 143b13520

void __thiscall Chaos::FAllSolverTasks::AdvanceSolver(FAllSolverTasks *this)

{
  FPhysicsSolverProcessPushDataTask::ProcessPushData(&this->ProcessPushData);
  FPhysicsSolverFrozenGTPreSimCallbacks::GTPreSimCallbacks(&this->GTPreSimCallbacks);
  FPhysicsSolverAdvanceTask::AdvanceSolver(&this->AdvanceTask);
  return;
}

