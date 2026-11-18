// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 4

// Enqueue<TUniqueFunction<void___cdecl(void)>_> @ 14314b720

void __thiscall
TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
Enqueue<TUniqueFunction<void___cdecl(void)>_>
          (TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *this,
          TUniqueFunction<void___cdecl(void)> *param_1)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  undefined8 uVar2;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  
  aVar3 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar3 = 0;
  *(undefined8 *)((longlong)aVar3 + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)aVar3 + 0x38) = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)((longlong)aVar3 + 0x20) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)((longlong)aVar3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)aVar3 + 0x30) = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  LOCK();
  aVar1 = this->Head;
  this->Head = aVar3;
  UNLOCK();
  *(atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1 = aVar3;
  return;
}

// ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory> @ 14314f6a0

void __thiscall
TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
::
~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
          (TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
           *this)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
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

// ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory> @ 14314f720

void __thiscall
TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
::
~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
          (TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
           *this)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
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

// ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> @ 14314f7a0

void __thiscall
TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>
          (TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *this)

{
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)(pFVar2->Value).Pad != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x28);
      puVar4 = (pFVar2->Value).Pad + 0x10;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

