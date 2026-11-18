// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 1

// DestroyObject @ 146c867c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FNullNetworkReplayStreamer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNullNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FNullNetworkReplayStreamer>,1>
                *this)

{
  FNullNetworkReplayStreamer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNullNetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c867d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

