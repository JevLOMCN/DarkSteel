// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 4

// StartupModule @ 1446e7d00

void __thiscall FImageWriteQueueModule::StartupModule(FImageWriteQueueModule *this)

{
  TUniquePtr<FImageWriteQueue,TDefaultDelete<FImageWriteQueue>_> *pTVar1;
  FImageWriteQueue *pFVar2;
  FImageWriteQueue *pFVar3;
  longlong local_18 [2];
  
  pFVar3 = ::operator_new(0xa0);
  if (pFVar3 == (FImageWriteQueue *)0x0) {
    pFVar3 = (FImageWriteQueue *)0x0;
  }
  else {
    pFVar3 = FImageWriteQueue::FImageWriteQueue(pFVar3);
  }
  pTVar1 = &this->Queue;
  if (pTVar1 == (TUniquePtr<FImageWriteQueue,TDefaultDelete<FImageWriteQueue>_> *)local_18) {
    if (pFVar3 != (FImageWriteQueue *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446e7d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar3;
    if (pFVar2 != (FImageWriteQueue *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446e7d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// PreUnloadCallback @ 1446e7d80

void __thiscall FImageWriteQueueModule::PreUnloadCallback(FImageWriteQueueModule *this)

{
  FImageWriteQueue::BeginShutdown((this->Queue).Ptr);
  return;
}

// ShutdownModule @ 1446e7d90

void __thiscall FImageWriteQueueModule::ShutdownModule(FImageWriteQueueModule *this)

{
  FImageWriteQueue *pFVar1;
  
  FImageWriteQueue::BeginShutdown((this->Queue).Ptr);
  pFVar1 = (this->Queue).Ptr;
  if (pFVar1 != (FImageWriteQueue *)0x0) {
    (this->Queue).Ptr = (FImageWriteQueue *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001446e7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// GetWriteQueue @ 1446e7dd0

IImageWriteQueue * __thiscall FImageWriteQueueModule::GetWriteQueue(FImageWriteQueueModule *this)

{
  return (IImageWriteQueue *)(this->Queue).Ptr;
}

