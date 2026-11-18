// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 3

// ~TQueue<FNodeConnectionMapUpdate,0> @ 14eac7b90

void __thiscall
TQueue<FNodeConnectionMapUpdate,0>::~TQueue<FNodeConnectionMapUpdate,0>
          (TQueue<FNodeConnectionMapUpdate,0> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TNode *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar3 = this->Tail;
  while (pTVar3 != (TNode *)0x0) {
    this->Tail = pTVar3->NextNode;
    pTVar4 = (pTVar3->Item).Connection.WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    ::operator_delete(pTVar3,0x30);
    pTVar3 = this->Tail;
  }
  return;
}

// Enqueue @ 14eaca150

bool __thiscall
TQueue<FNodeConnectionMapUpdate,0>::Enqueue
          (TQueue<FNodeConnectionMapUpdate,0> *this,FNodeConnectionMapUpdate *param_1)

{
  TNode *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TNode *pTVar5;
  
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).bNewNode = param_1->bNewNode;
    uVar2 = (param_1->NodeId).B;
    uVar3 = (param_1->NodeId).C;
    uVar4 = (param_1->NodeId).D;
    (pTVar5->Item).NodeId.A = (param_1->NodeId).A;
    (pTVar5->Item).NodeId.B = uVar2;
    (pTVar5->Item).NodeId.C = uVar3;
    (pTVar5->Item).NodeId.D = uVar4;
    (pTVar5->Item).Connection.Object = (param_1->Connection).Object;
    (pTVar5->Item).Connection.WeakReferenceCount.ReferenceController =
         (param_1->Connection).WeakReferenceCount.ReferenceController;
    (param_1->Connection).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->Connection).Object = (FTcpMessageTransportConnection *)0x0;
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1 = this->Head;
    this->Head = pTVar5;
    UNLOCK();
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1->NextNode = pTVar5;
    UNLOCK();
    return true;
  }
  return false;
}

// Enqueue @ 14eaca210

bool __thiscall
TQueue<TSharedPtr<FTcpMessageTransportConnection,1>,0>::Enqueue
          (TQueue<TSharedPtr<FTcpMessageTransportConnection,1>,0> *this,
          TSharedPtr<FTcpMessageTransportConnection,1> *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Object = param_1->Object;
    (pTVar2->Item).SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTcpMessageTransportConnection *)0x0;
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1 = this->Head;
    this->Head = pTVar2;
    UNLOCK();
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1->NextNode = pTVar2;
    UNLOCK();
    return true;
  }
  return false;
}

