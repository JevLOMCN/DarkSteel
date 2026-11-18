// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1> @ 1459ab030

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1>::~TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1>
          (TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1> *this)

{
  longlong *plVar1;
  TNode *pTVar2;
  FD3D12SyncPoint *pFVar3;
  longlong lVar4;
  
  pTVar2 = this->Tail;
  while (pTVar2 != (TNode *)0x0) {
    this->Tail = pTVar2->NextNode;
    pFVar3 = (pTVar2->Item).SyncPoint.Reference;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = this->Tail;
  }
  return;
}

// Enqueue @ 145a64220

bool __thiscall
TQueue<TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_>_*,0>::Enqueue
          (TQueue<TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_>_*,0> *this,
          TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> **param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = *param_1;
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

