// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// ~FQueuedHttpRequest @ 146cb6c60

void __thiscall FQueuedHttpRequest::~FQueuedHttpRequest(FQueuedHttpRequest *this)

{
  this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  return;
}

// PreProcess @ 146cc5380

bool __thiscall
FQueuedHttpRequest::PreProcess
          (FQueuedHttpRequest *this,FHttpNetworkReplayStreamer *param_1,FString *param_2,
          FString *param_3)

{
  return true;
}

