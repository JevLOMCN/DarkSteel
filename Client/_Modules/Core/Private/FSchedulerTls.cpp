// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetTlsValuesRef @ 14149a690

FTlsValues * __cdecl LowLevelTasks::FSchedulerTls::GetTlsValuesRef(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(FTlsValues **)(lVar1 + 0x50);
}

// HasPendingWakeUp @ 14149ad30

bool __thiscall LowLevelTasks::FSchedulerTls::HasPendingWakeUp(FSchedulerTls *this)

{
  FTlsValues *pFVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = FImpl::ThreadTlsValuesMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    FImpl::ThreadTlsValuesMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&FImpl::ThreadTlsValuesMutex);
  }
  FImpl::ProcessPendingTlsValuesNoLock();
  FWindowsPlatformMisc::AsymmetricThreadFenceHeavy();
  pFVar1 = FImpl::ThreadTlsValues;
  do {
    if (pFVar1 == (FTlsValues *)0x0) {
      bVar4 = false;
LAB_14149ad88:
      LOCK();
      aVar3 = FImpl::ThreadTlsValuesMutex.State + -1;
      UNLOCK();
      bVar2 = (byte)FImpl::ThreadTlsValuesMutex.State & 2;
      FImpl::ThreadTlsValuesMutex.State = aVar3;
      if (bVar2 != 0) {
        UE::FMutex::WakeWaitingThread(&FImpl::ThreadTlsValuesMutex);
      }
      return bVar4;
    }
    if ((pFVar1->ActiveScheduler != this) && (pFVar1->bPendingWakeUp != (atomic<bool>)0x0)) {
      bVar4 = true;
      goto LAB_14149ad88;
    }
    pFVar1 = (FTlsValues *)pFVar1->_padding_;
  } while( true );
}

// IsWorkerThread @ 14149ebe0

bool __thiscall LowLevelTasks::FSchedulerTls::IsWorkerThread(FSchedulerTls *this)

{
  FTlsValues *pFVar1;
  
  pFVar1 = GetTlsValuesRef();
  if ((pFVar1->WorkerType != None) && (pFVar1->ActiveScheduler == this)) {
    return true;
  }
  return false;
}

