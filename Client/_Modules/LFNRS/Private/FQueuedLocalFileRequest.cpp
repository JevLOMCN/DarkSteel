// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 3

// ~FQueuedLocalFileRequest @ 146c92980

void __thiscall FQueuedLocalFileRequest::~FQueuedLocalFileRequest(FQueuedLocalFileRequest *this)

{
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Streamer).SharedReferenceCount.ReferenceController);
  return;
}

// CancelRequest @ 146ca5010

void __thiscall FQueuedLocalFileRequest::CancelRequest(FQueuedLocalFileRequest *this)

{
  LOCK();
  this->bCancelled = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// GetCachedRequest @ 146cac2a0

bool __thiscall FQueuedLocalFileRequest::GetCachedRequest(FQueuedLocalFileRequest *this)

{
  return false;
}

