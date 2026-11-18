// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ProcessPendingTlsValuesNoLock @ 1414a9dc0

void __cdecl LowLevelTasks::FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock(void)

{
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar1;
  FTlsValues *pFVar2;
  longlong *plVar3;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar4;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar5;
  
  TVar4.Head = PendingInsertTlsValues.Head;
  LOCK();
  PendingInsertTlsValues.Head =
       (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        )0x0;
  UNLOCK();
  TVar5.Head = PendingDeleteTlsValues.Head;
  while (TVar4.Head !=
         (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          )0x0) {
                    /* WARNING: Load size is inaccurate */
    aVar1 = *TVar4.Head;
    pFVar2 = *(FTlsValues **)((longlong)TVar4.Head + 8);
    PendingDeleteTlsValues.Head = TVar5.Head;
    if (ThreadTlsValues != (FTlsValues *)0x0) {
      ThreadTlsValues->_padding_ = (longlong)pFVar2;
    }
    pFVar2->_padding_ = (longlong)ThreadTlsValues;
    pFVar2->_padding_ = (longlong)&ThreadTlsValues;
    ThreadTlsValues = pFVar2;
    AnsiFree((void *)TVar4.Head);
    TVar4.Head = aVar1;
    TVar5 = PendingDeleteTlsValues;
  }
  LOCK();
  PendingDeleteTlsValues.Head =
       (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        )0x0;
  UNLOCK();
  while (TVar5.Head !=
         (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          )0x0) {
                    /* WARNING: Load size is inaccurate */
    aVar1 = *TVar5.Head;
    plVar3 = *(longlong **)((longlong)TVar5.Head + 8);
    if (*plVar3 != 0) {
      *(longlong *)(*plVar3 + 8) = plVar3[1];
    }
    if ((longlong *)plVar3[1] != (longlong *)0x0) {
      *(longlong *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    AnsiFree(plVar3);
    AnsiFree((void *)TVar5.Head);
    TVar5.Head = aVar1;
  }
  return;
}

