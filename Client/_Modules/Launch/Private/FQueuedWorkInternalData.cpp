// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// Retract @ 148db1a00

bool __thiscall
FQueuedLowLevelThreadPool::FQueuedWorkInternalData::Retract(FQueuedWorkInternalData *this)

{
  bool bVar1;
  
  bVar1 = LowLevelTasks::FTask::TryCancel(&this->Task,DefaultFlags);
  return bVar1;
}

