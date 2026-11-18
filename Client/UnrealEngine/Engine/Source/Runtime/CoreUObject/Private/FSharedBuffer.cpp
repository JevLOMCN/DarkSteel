// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// TakeOwnership<void_(__cdecl&)(void_*),0> @ 141f20070

FSharedBuffer __cdecl
FSharedBuffer::TakeOwnership<void_(__cdecl&)(void_*),0>
          (void *param_1,ulong64 param_2,_func___cdecl_void_void_ptr *param_3)

{
  FBufferOwner *pFVar1;
  longlong in_R9;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FBufferOwner *)0x0) {
    pFVar1->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar1->_padding_ =
         (longlong)
         &
         ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
    ;
    pFVar1->Data = (void *)param_2;
    pFVar1->Size = (ulong64)param_3;
    pFVar1[1]._padding_ = in_R9;
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar1->ReferenceCountsAndFlags | 0x4000000000000000)
    ;
    UNLOCK();
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar1->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar1->_padding_ =
         (longlong)
         &
         ___7__TBufferOwnerDeleteFunction_V<lambda_1>__1____TakeOwnership_A6AXPEAX_Z_0A__FSharedBuffer__SA_AV2_PEBX_KA6AXPEAX_Z_Z__Private_SharedBuffer_UE__6B_
    ;
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar1->ReferenceCountsAndFlags | 0x2000000000000000)
    ;
    UNLOCK();
  }
  FSharedBuffer(param_1,pFVar1);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// operator= @ 141f24750

FSharedBuffer * __thiscall FSharedBuffer::operator=(FSharedBuffer *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *pFVar4;
  
  pFVar3 = (this->Owner).Owner;
  pFVar4 = (param_1->Owner).Owner;
  if (pFVar4 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar4->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar4->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar4->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  (this->Owner).Owner = pFVar4;
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

