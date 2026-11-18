// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// Enqueue<int> @ 14d784180

void __thiscall TSpscQueue<int,FMemory>::Enqueue<int>(TSpscQueue<int,FMemory> *this,int *param_1)

{
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar1;
  
  aVar1 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)this->First;
  if (aVar1 == (atomic<TSpscQueue<int,FMemory>::FNode_*>)this->TailCopy) {
    aVar1 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)this->First;
    this->TailCopy = (FNode *)this->Tail;
    if (aVar1 == this->Tail) {
      aVar1 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
      *(undefined8 *)((longlong)aVar1 + 8) = 0;
      goto LAB_14d7841cf;
    }
  }
  this->First = *(FNode **)aVar1;
LAB_14d7841cf:
  *(undefined8 *)aVar1 = 0;
  *(int *)((TTypeCompatibleBytes<int> *)((longlong)aVar1 + 8))->Pad = *param_1;
  this->Head->Next = aVar1;
  this->Head = (FNode *)aVar1;
  LOCK();
  this->NumElems = (atomic<int>)((int)this->NumElems + 1);
  UNLOCK();
  return;
}

// ~TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory> @ 14d78c310

void __thiscall
TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::
~TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>
          (TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory> *this)

{
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar3;
  bool bVar4;
  
  aVar1 = this->Tail;
  aVar3 = (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
          this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> *)aVar3
    ;
    FMemory::Free((void *)aVar3);
    bVar4 = aVar3 != aVar1;
    aVar3 = aVar2;
  } while (bVar4);
  while (aVar2 != (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
                  0x0) {
    aVar1 = *(atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> *)aVar2
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)aVar2 + 0x20));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)aVar2 + 0x10));
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

