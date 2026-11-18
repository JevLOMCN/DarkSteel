// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// AddQueuedWork @ 14dff7f90

void __thiscall
FQueuedThreadPoolDynamicWrapper::AddQueuedWork
          (FQueuedThreadPoolDynamicWrapper *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  FQueuedThreadPoolWrapper::AddQueuedWork((FQueuedThreadPoolWrapper *)this,param_1,Normal);
  return;
}

