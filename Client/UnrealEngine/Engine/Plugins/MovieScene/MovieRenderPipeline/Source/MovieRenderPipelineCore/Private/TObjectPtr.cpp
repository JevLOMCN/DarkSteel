// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// operator= @ 14dc74b20

TObjectPtr<UMoviePipelineExecutorJob> * __thiscall
TObjectPtr<UMoviePipelineExecutorJob>::operator=
          (TObjectPtr<UMoviePipelineExecutorJob> *this,
          TObjectPtr<UMoviePipelineExecutorJob> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

