// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> @ 14147ffa0

void __thiscall
UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
          (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = this->Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pFVar3->Data = (void *)0x0;
      pFVar3->Size = 0;
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141480003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
  }
  return;
}

// operator= @ 141482050

TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> * __thiscall
UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
          (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *this,
          TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *pFVar4;
  
  pFVar3 = this->Owner;
  pFVar4 = param_1->Owner;
  param_1->Owner = (FBufferOwner *)0x0;
  this->Owner = pFVar4;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pFVar3->Data = (void *)0x0;
      pFVar3->Size = 0;
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return this;
}

// TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> @ 141814680

TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> * __thiscall
UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
          (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *this,FBufferOwner *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  bool bVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *pTVar5;
  
  this->Owner = param_1;
  if (param_1 != (FBufferOwner *)0x0) {
    aVar2 = param_1->ReferenceCountsAndFlags;
    if (((((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) -
         (uint)(((ulonglong)aVar2 & 0x3fffffff) != 0)) + (aVar2._0_4_ & 0x3fffffff) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FOps::HasRef(*InOwner)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\SharedBuffer.cpp"
                           ,0x14,
                           L"FBufferOwner is referenced by another TBufferOwnerPtr. Construct this from an existing pointer instead of a raw pointer."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(*pcVar3)();
      return pTVar5;
    }
    LOCK();
    paVar1 = &param_1->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      param_1->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)param_1->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
      return this;
    }
  }
  return this;
}

// Reset @ 14182fe30

void __thiscall
UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::Reset
          (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = this->Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pFVar3->Data = (void *)0x0;
      pFVar3->Size = 0;
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
      this->Owner = (FBufferOwner *)0x0;
      return;
    }
  }
  this->Owner = (FBufferOwner *)0x0;
  return;
}

