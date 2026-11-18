// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// UpdateStats @ 145c7ee50

void __thiscall FRHIComputeShader::UpdateStats(FRHIComputeShader *this)

{
  FPipelineStateStats *pFVar1;
  ulong64 uVar2;
  
  pFVar1 = this->Stats;
  if (pFVar1 != (FPipelineStateStats *)0x0) {
    LOCK();
    pFVar1->LastFrameUsed = GFrameCounter;
    UNLOCK();
    LOCK();
    pFVar1->TotalBindCount = pFVar1->TotalBindCount + 1;
    uVar2 = GFrameCounter;
    UNLOCK();
    if (((ulonglong)pFVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    if (pFVar1->FirstFrameUsed == -1) {
      pFVar1->FirstFrameUsed = uVar2;
    }
    UNLOCK();
  }
  return;
}

