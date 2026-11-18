// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// RemoveTaskFrom @ 1431786d0

void __thiscall
FHttpTaskTimerHandleEventLoop::RemoveTaskFrom
          (FHttpTaskTimerHandleEventLoop *this,FHttpThreadBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431786dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x68))(param_1,(this->Handle).ID);
  return;
}

