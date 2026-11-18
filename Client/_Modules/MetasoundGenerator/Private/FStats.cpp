// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 5

// FStats @ 14b2a7370

FStats * __thiscall
Metasound::FConcurrentInstanceCounterManager::FStats::FStats
          (FStats *this,FString *param_1,FTopLevelAssetPath *param_2)

{
  atomic<unsigned_int> aVar1;
  TCounter<__int64,0,__int64,0> *pTVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FString local_28;
  FString local_18;
  
  FTopLevelAssetPath::ToString(param_2,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s - %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 == (TCounter<__int64,0,__int64,0> *)0x0) {
    pTVar2 = (TCounter<__int64,0,__int64,0> *)0x0;
  }
  else {
    pTVar2->CounterName = (wchar_t *)FVar4.Data;
    pTVar2->CounterId = (atomic<unsigned_int>)0x0;
    pTVar2->CounterFlags = '\0';
    pTVar2->Value = 0;
    aVar1._0_2_ = FCountersTrace::OutputInitCounter
                            ((wchar_t *)FVar4.Data,TraceCounterType_Int,TraceCounterDisplayHint_None
                            );
    LOCK();
    aVar1._2_2_ = 0;
    pTVar2->CounterId = aVar1;
    UNLOCK();
    if (pTVar2->CounterId == (atomic<unsigned_int>)0x0) {
      pwVar3 = FCountersTrace::AllocAndCopyCounterName((wchar_t *)FVar4.Data);
      pTVar2->CounterFlags = pTVar2->CounterFlags | 0x20;
      pTVar2->CounterName = pwVar3;
    }
  }
  (this->TraceCounter).Ptr = pTVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// Decrement @ 14b2af170

void __thiscall Metasound::FConcurrentInstanceCounterManager::FStats::Decrement(FStats *this)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  atomic<unsigned_int> aVar5;
  
  if (((this->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286324>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x4c,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (this->TraceCounter).Ptr;
  pTVar1->Value = pTVar1->Value + -1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
    uVar4 = FCountersTrace::OutputInitCounter
                      (pTVar1->CounterName,TraceCounterType_Int,pTVar1->CounterFlags & 0xf);
    LOCK();
    if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
      aVar5._2_2_ = 0;
      aVar5._0_2_ = uVar4;
      pTVar1->CounterId = aVar5;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue(SUB42(pTVar1->CounterId,0),pTVar1->Value);
  return;
}

// GetCount @ 14b2b0fc0

long64 __thiscall Metasound::FConcurrentInstanceCounterManager::FStats::GetCount(FStats *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->TraceCounter).Ptr != (TCounter<__int64,0,__int64,0> *)0x0) {
    return ((this->TraceCounter).Ptr)->Value;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1382814220445286318>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                     ,0x52,"TraceCounter");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return ((this->TraceCounter).Ptr)->Value;
}

// GetPeakCount @ 14b2b15b0

long64 __thiscall Metasound::FConcurrentInstanceCounterManager::FStats::GetPeakCount(FStats *this)

{
  return this->PeakCount;
}

// Increment @ 14b2b18f0

void __thiscall Metasound::FConcurrentInstanceCounterManager::FStats::Increment(FStats *this)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  atomic<unsigned_int> aVar5;
  longlong lVar6;
  
  if (((this->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286332>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x44,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (this->TraceCounter).Ptr;
  pTVar1->Value = pTVar1->Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (pTVar1->CounterName,TraceCounterType_Int,pTVar1->CounterFlags & 0xf);
      LOCK();
      if (pTVar1->CounterId == (atomic<unsigned_int>)0x0) {
        aVar5._2_2_ = 0;
        aVar5._0_2_ = uVar4;
        pTVar1->CounterId = aVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(SUB42(pTVar1->CounterId,0),pTVar1->Value);
  }
  if (((this->TraceCounter).Ptr == (TCounter<__int64,0,__int64,0> *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1382814220445286318>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundInstanceCounter.cpp"
                         ,0x52,"TraceCounter"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = ((this->TraceCounter).Ptr)->Value;
  if (lVar6 < this->PeakCount) {
    lVar6 = this->PeakCount;
  }
  this->PeakCount = lVar6;
  return;
}

