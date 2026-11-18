// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// RemoveTaskFrom @ 1431786f0

void __thiscall
FHttpTaskTimerHandleFTSTicker::RemoveTaskFrom
          (FHttpTaskTimerHandleFTSTicker *this,FHttpThreadBase *param_1)

{
  code *pcVar1;
  FElement *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x70);
  local_18 = (this->Handle).Object;
  local_10 = (this->Handle).WeakReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(param_1,&local_18);
  return;
}

