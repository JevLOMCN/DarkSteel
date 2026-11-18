// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FAudioCommandFence @ 14768a030

void __thiscall FAudioCommandFence::~FAudioCommandFence(FAudioCommandFence *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x2aa,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (__CsvProfilerStat683 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Audio");
    __CsvProfilerStat683 = true;
  }
  FCsvProfiler::BeginSetWaitStat
            ("EventWait/Audio","CsvEventWait/Audio","CsvEventWait/Audio (Non-CP)");
  pFVar3 = (this->Fence).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar3);
  }
  FCsvProfiler::EndSetWaitStat();
  pFVar3 = (this->Fence).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014768a0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// BeginFence @ 147694b10

void __thiscall FAudioCommandFence::BeginFence(FAudioCommandFence *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this_00;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar4;
  code *pcVar5;
  FTaskHandle FVar6;
  bool bVar7;
  
  bVar7 = IsInGameThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x2b1,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar7 = IsAudioThreadRunning();
  if (bVar7) {
    if (__CsvProfilerStat697 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Audio");
      __CsvProfilerStat697 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/Audio","CsvEventWait/Audio","CsvEventWait/Audio (Non-CP)");
    this_00 = (this->Fence).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
    FCsvProfiler::EndSetWaitStat();
    bVar7 = IsAudioThreadRunning();
    if (bVar7) {
      FAudioAsyncBatcher::Flush(&GAudioAsyncBatcher);
    }
    else if (GAudioAsyncBatcher.WorkItems.ArrayNum != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GAudioAsyncBatcher.WorkItems.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x238,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar6.Pimpl.Reference = GAudioAsyncBatcher.LastBatch.Pimpl.Reference;
    TVar4.Reference = (this->Fence).Pimpl.Reference;
    if ((TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar4.Reference !=
        GAudioAsyncBatcher.LastBatch.Pimpl.Reference) {
      (this->Fence).Pimpl.Reference = (FTaskBase *)GAudioAsyncBatcher.LastBatch.Pimpl.Reference;
      if (FVar6.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar6.Pimpl.Reference + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (TVar4.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &(TVar4.Reference)->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000147694c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(TVar4.Reference)->_padding_)(TVar4.Reference,1);
          return;
        }
      }
    }
  }
  return;
}

// IsFenceComplete @ 1476ba930

bool __thiscall FAudioCommandFence::IsFenceComplete(FAudioCommandFence *this)

{
  FTaskBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x2c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Fence).Pimpl.Reference;
  if ((pFVar1 != (FTaskBase *)0x0) && ((pFVar1->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// Wait @ 1476cdbb0

void __thiscall FAudioCommandFence::Wait(FAudioCommandFence *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAudioCommandFence local_18 [2];
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x2cc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (__CsvProfilerStat719 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Audio");
    __CsvProfilerStat719 = true;
  }
  FCsvProfiler::BeginSetWaitStat
            ("EventWait/Audio","CsvEventWait/Audio","CsvEventWait/Audio (Non-CP)");
  pFVar3 = (this->Fence).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar3);
  }
  FCsvProfiler::EndSetWaitStat();
  if (this != local_18) {
    pFVar3 = (this->Fence).Pimpl.Reference;
    (this->Fence).Pimpl.Reference = (FTaskBase *)0x0;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001476cdc65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
  }
  return;
}

