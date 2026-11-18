// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// FHttpRetryRequestEntry @ 14314d5a0

FHttpRetryRequestEntry * __thiscall
FHttpRetrySystem::FManager::FHttpRetryRequestEntry::FHttpRetryRequestEntry
          (FHttpRetryRequestEntry *this,TSharedRef<FHttpRetrySystem::FRequest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  LARGE_INTEGER local_res8;
  
  this->bShouldCancel = false;
  this->CurrentRetryCount = 0;
  this->CurrentRetryCountForConnectionError = 0;
  QueryPerformanceCounter(&local_res8);
  this->RequestStartTimeAbsoluteSeconds =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  (this->Request).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Request).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

