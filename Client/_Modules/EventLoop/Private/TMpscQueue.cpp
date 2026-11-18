// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 2

// ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory> @ 143140cb0

void __thiscall
TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
::
~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
          (TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>
           *this)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
              *)aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)((pFVar2->Value).Pad + 0x20) != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x48);
      puVar4 = (pFVar2->Value).Pad + 0x30;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

// ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory> @ 143140d30

void __thiscall
TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
::
~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
          (TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
           *this)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
              *)aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)((pFVar2->Value).Pad + 0x10) != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x38);
      puVar4 = (pFVar2->Value).Pad + 0x20;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

