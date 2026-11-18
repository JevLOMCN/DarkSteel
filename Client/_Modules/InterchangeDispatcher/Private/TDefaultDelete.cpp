// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 1

// operator() @ 14e661a60

void __thiscall
TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
          (TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *this,
          FInterchangeWorkerHandler *param_1)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  FSocket *pFVar3;
  void *pvVar4;
  bool bVar5;
  ISocketSubsystem *pIVar6;
  FName local_res10 [3];
  
  if (param_1 != (FInterchangeWorkerHandler *)0x0) {
    param_1->bShouldTerminate = true;
    bVar5 = ::FThread::IsJoinable(&param_1->IOThread);
    if (bVar5) {
      ::FThread::Join(&param_1->IOThread);
    }
    pFVar1 = (param_1->CurrentTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->CurrentTasksLock);
    pFVar1 = (param_1->ResultFolder).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ThreadName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FThread::~FThread(&param_1->IOThread);
    pTVar2 = (param_1->CommandIO).InCommands.Tail;
    while (pTVar2 != (TNode *)0x0) {
      (param_1->CommandIO).InCommands.Tail = pTVar2->NextNode;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar2->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar2,0x18);
      pTVar2 = (param_1->CommandIO).InCommands.Tail;
    }
    (param_1->NetworkInterface)._padding_ = (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
    pFVar3 = (param_1->NetworkInterface).ListeningSocket;
    if (pFVar3 != (FSocket *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x10))();
      local_res10[0].ComparisonIndex.Value = 0;
      local_res10[0].Number = 0;
      pIVar6 = ISocketSubsystem::Get(local_res10);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,(param_1->NetworkInterface).ListeningSocket);
      (param_1->NetworkInterface).ListeningSocket = (FSocket *)0x0;
    }
    UE::Interchange::FNetworkNode::~FNetworkNode((FNetworkNode *)&param_1->NetworkInterface);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(param_1->OnWorkerHandlerExitLoop).field_0x8,
               *(int *)&(param_1->OnWorkerHandlerExitLoop).field_0x10);
    pvVar4 = *(void **)&(param_1->OnWorkerHandlerExitLoop).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    ::operator_delete(param_1,0x140);
  }
  return;
}

