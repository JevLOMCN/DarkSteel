// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FRequestCategory @ 1417a3bf0

FRequestCategory * __thiscall
FIoRequestStats::FRequestCategory::FRequestCategory(FRequestCategory *this,wchar_t *param_1)

{
  uchar *puVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"IoDispatcher/TotalLoaded (%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  (this->TotalLoadedCounter).CounterName = (wchar_t *)FVar5.Data;
  (this->TotalLoadedCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->TotalLoadedCounter).CounterFlags = '\x01';
  (this->TotalLoadedCounter).Value = 0;
  aVar2._0_2_ = FCountersTrace::OutputInitCounter
                          ((wchar_t *)FVar5.Data,TraceCounterType_Int,TraceCounterDisplayHint_Memory
                          );
  LOCK();
  aVar2._2_2_ = 0;
  (this->TotalLoadedCounter).CounterId = aVar2;
  UNLOCK();
  if ((this->TotalLoadedCounter).CounterId == (atomic<unsigned_int>)0x0) {
    pwVar4 = FCountersTrace::AllocAndCopyCounterName((wchar_t *)FVar5.Data);
    puVar1 = &(this->TotalLoadedCounter).CounterFlags;
    *puVar1 = *puVar1 | 0x20;
    (this->TotalLoadedCounter).CounterName = pwVar4;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"IoDispatcher/AverageDuration (%s)");
  (this->AverageDurationCounter).Value = 0.0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  (this->AverageDurationCounter).CounterName = (wchar_t *)FVar5.Data;
  (this->AverageDurationCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->AverageDurationCounter).CounterFlags = '\0';
  aVar3._0_2_ = FCountersTrace::OutputInitCounter
                          ((wchar_t *)FVar5.Data,TraceCounterType_Float,TraceCounterDisplayHint_None
                          );
  LOCK();
  aVar3._2_2_ = 0;
  (this->AverageDurationCounter).CounterId = aVar3;
  UNLOCK();
  if ((this->AverageDurationCounter).CounterId == (atomic<unsigned_int>)0x0) {
    pwVar4 = FCountersTrace::AllocAndCopyCounterName((wchar_t *)FVar5.Data);
    puVar1 = &(this->AverageDurationCounter).CounterFlags;
    *puVar1 = *puVar1 | 0x20;
    (this->AverageDurationCounter).CounterName = pwVar4;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->TotaRequestsCount = 0;
  this->TotalRequestsTime = 0.0;
  return this;
}

