// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FWeakSharedBuffer @ 141815da0

FWeakSharedBuffer * __thiscall
FWeakSharedBuffer::FWeakSharedBuffer(FWeakSharedBuffer *this,FSharedBuffer *param_1)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (param_1->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((longlong)pFVar1->ReferenceCountsAndFlags + 0x40000000);
    UNLOCK();
  }
  (this->Owner).Owner = pFVar1;
  return this;
}

// operator= @ 1418170f0

FWeakSharedBuffer * __thiscall
FWeakSharedBuffer::operator=(FWeakSharedBuffer *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *pFVar4;
  
  pFVar3 = (param_1->Owner).Owner;
  pFVar4 = (this->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    pFVar3->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
    UNLOCK();
  }
  (this->Owner).Owner = pFVar3;
  if (pFVar4 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar4->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
    UNLOCK();
    if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return this;
}

// Pin @ 14182d100

FSharedBuffer __thiscall FWeakSharedBuffer::Pin(FWeakSharedBuffer *this)

{
  FBufferOwner *pFVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  bool bVar4;
  
  pFVar1 = (this->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    aVar2 = pFVar1->ReferenceCountsAndFlags;
    do {
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        (in_RDX.Owner)->_padding_ = 0;
        return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
      }
      LOCK();
      aVar3 = pFVar1->ReferenceCountsAndFlags;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pFVar1->ReferenceCountsAndFlags = (atomic<unsigned___int64>)((longlong)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  (in_RDX.Owner)->_padding_ = (longlong)pFVar1;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// Reset @ 14182ff80

void __thiscall FWeakSharedBuffer::Reset(FWeakSharedBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = (this->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
    UNLOCK();
    if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->Owner).Owner = (FBufferOwner *)0x0;
  return;
}

