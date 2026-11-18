// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// DecrementOversubscription @ 141490a40

void __thiscall
LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(FOversubscriptionScope *this)

{
  int *piVar1;
  FTlsValues *pFVar2;
  longlong lVar3;
  
  pFVar2 = FSchedulerTls::GetTlsValuesRef();
  if (pFVar2->WorkerType != None) {
    lVar3 = 0;
    if (pFVar2->WorkerType == Background) {
      lVar3 = 0x70;
    }
    LOCK();
    piVar1 = (int *)(&FScheduler::Singleton.WaitingQueue[0].Oversubscription.field_0x0 + lVar3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  this->bIncrementOversubscriptionEmitted = false;
  if (this->bCpuBeginEventEmitted != false) {
    FCpuProfilerTrace::OutputEndEvent();
    this->bCpuBeginEventEmitted = false;
  }
  return;
}

// TryIncrementOversubscription @ 1414b6950

void __thiscall
LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(FOversubscriptionScope *this)

{
  EWorkerType EVar1;
  FTlsValues *pFVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar3 + 0x38) != '\0') {
    if (-1 < CpuChannel->Enabled) {
      if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          OversubscriptionTraceId =
               FCpuProfilerTrace::OutputEventType("Oversubscription",(char *)0x0,0);
          _Init_thread_footer(&::_TSS0);
        }
      }
      FCpuProfilerTrace::OutputBeginEvent(OversubscriptionTraceId);
      this->bCpuBeginEventEmitted = true;
    }
    this->bIncrementOversubscriptionEmitted = true;
    pFVar2 = FSchedulerTls::GetTlsValuesRef();
    EVar1 = pFVar2->WorkerType;
    if (EVar1 != None) {
      if (__CsvProfilerStat637 == false) {
        FCsvProfilerTrace::OutputInlineStat("Oversubscription",_GCsvCategory_Scheduler.Index);
        __CsvProfilerStat637 = true;
      }
      FCsvProfiler::RecordCustomStat("Oversubscription",_GCsvCategory_Scheduler.Index,1,Accumulate);
      lVar3 = 0;
      if (EVar1 == Background) {
        lVar3 = 0x70;
      }
      LowLevelTasks::Private::FWaitingQueue::IncrementOversubscription
                ((FWaitingQueue *)
                 ((longlong)&FScheduler::Singleton.WaitingQueue[0].ThreadCount + lVar3));
    }
  }
  return;
}

