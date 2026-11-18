// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// UpdateStats @ 145c7edf0

void __cdecl FPipelineStateStats::UpdateStats(FPipelineStateStats *param_1)

{
  ulong64 uVar1;
  
  if (param_1 != (FPipelineStateStats *)0x0) {
    LOCK();
    param_1->LastFrameUsed = GFrameCounter;
    UNLOCK();
    LOCK();
    param_1->TotalBindCount = param_1->TotalBindCount + 1;
    uVar1 = GFrameCounter;
    UNLOCK();
    if (((ulonglong)param_1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    if (param_1->FirstFrameUsed == -1) {
      param_1->FirstFrameUsed = uVar1;
    }
    UNLOCK();
  }
  return;
}

