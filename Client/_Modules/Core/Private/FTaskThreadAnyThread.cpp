// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FindWork @ 141495790

FBaseGraphTask * __thiscall FTaskThreadAnyThread::FindWork(FTaskThreadAnyThread *this)

{
  FBaseGraphTask *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014149579d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FBaseGraphTask *)
           (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x78))
                     (TaskGraphImplementationSingleton,(int)this->_padding_);
  return pFVar1;
}

