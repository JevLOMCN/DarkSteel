// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// StartScopedTimer @ 1419ac080

void __thiscall
FScopedExternalProfilerBase::StartScopedTimer(FScopedExternalProfilerBase *this,bool param_1)

{
  atomic<bool> aVar1;
  atomic<bool> aVar2;
  
  aVar1 = FActiveExternalProfilerBase::bIsRecording;
  aVar2 = (atomic<bool>)!param_1;
  LOCK();
  UNLOCK();
  if (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) {
    if (FActiveExternalProfilerBase::bIsRecording == (atomic<bool>)0x0) {
      if (!param_1) {
        FActiveExternalProfilerBase::bIsRecording = aVar2;
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x20))();
        aVar2 = FActiveExternalProfilerBase::bIsRecording;
      }
    }
    else if (param_1) {
      FActiveExternalProfilerBase::bIsRecording = aVar2;
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x18))();
      this->bWasRecording = (bool)aVar1;
      return;
    }
  }
  FActiveExternalProfilerBase::bIsRecording = aVar2;
  this->bWasRecording = (bool)aVar1;
  return;
}

// StopScopedTimer @ 1419ac9e0

void __thiscall FScopedExternalProfilerBase::StopScopedTimer(FScopedExternalProfilerBase *this)

{
  atomic<bool> aVar1;
  
  aVar1 = FActiveExternalProfilerBase::bIsRecording;
  FActiveExternalProfilerBase::bIsRecording = (atomic<bool>)this->bWasRecording;
  LOCK();
  UNLOCK();
  if (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) {
    if (aVar1 == (atomic<bool>)0x0) {
      if (FActiveExternalProfilerBase::bIsRecording != (atomic<bool>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419aca0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x20))();
        return;
      }
    }
    else if (FActiveExternalProfilerBase::bIsRecording == (atomic<bool>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419aca03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x18))();
      return;
    }
  }
  return;
}

