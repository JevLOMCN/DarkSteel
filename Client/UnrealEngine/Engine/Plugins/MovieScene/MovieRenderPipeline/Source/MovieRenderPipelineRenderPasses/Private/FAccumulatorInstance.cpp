// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// IsActive @ 14dde7910

bool __thiscall FAccumulatorPool::FAccumulatorInstance::IsActive(FAccumulatorInstance *this)

{
  return this->bIsActive != (FThreadSafeBool)0x0;
}

// SetIsActive @ 14ddfc450

void __thiscall
FAccumulatorPool::FAccumulatorInstance::SetIsActive(FAccumulatorInstance *this,bool param_1)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = param_1;
  this->bIsActive = FVar1;
  UNLOCK();
  return;
}

