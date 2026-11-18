// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 4

// FSharedModelData @ 1436e7400

FSharedModelData * __thiscall
UE::NNE::FSharedModelData::FSharedModelData
          (FSharedModelData *this,FSharedBuffer param_1,uint param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FSharedModelData *pFVar7;
  ulonglong uVar8;
  
  pFVar3 = *(FBufferOwner **)param_1.Owner.Owner;
  if (pFVar3 == (FBufferOwner *)0x0) {
LAB_1436e743c:
    (this->Data).Owner.Owner = pFVar3;
    this->MemoryAlignment = param_2;
    if (pFVar3 == (FBufferOwner *)0x0) goto LAB_1436e747a;
  }
  else {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) != 0) goto LAB_1436e743c;
    LOCK();
    pFVar3->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
    UNLOCK();
    (this->Data).Owner.Owner = pFVar3;
    this->MemoryAlignment = param_2;
  }
  if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IsOwned()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNEModelData.cpp"
                       ,0x58,L"InData data must be ownned!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSharedModelData *)(*pcVar5)();
      return pFVar7;
    }
  }
LAB_1436e747a:
  if (1 < this->MemoryAlignment) {
    plVar4 = *(longlong **)param_1.Owner.Owner;
    if (plVar4 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar8 = plVar4[1];
    }
    if (uVar8 % (ulonglong)this->MemoryAlignment != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemoryAlignment <= 1 || (((uintptr_t)(const void*)(InData.GetData())) % MemoryAlignment == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNEModelData.cpp"
                         ,0x59,L"InData must be aligned with InMemoryAlignment!");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FSharedModelData *)(*pcVar5)();
        return pFVar7;
      }
    }
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1.Owner.Owner);
  return this;
}

// FSharedModelData @ 1436e7500

FSharedModelData * __thiscall UE::NNE::FSharedModelData::FSharedModelData(FSharedModelData *this)

{
  (this->Data).Owner.Owner = (FBufferOwner *)0x0;
  this->MemoryAlignment = 0;
  return this;
}

// GetMemoryAlignment @ 1436e9550

uint __thiscall UE::NNE::FSharedModelData::GetMemoryAlignment(FSharedModelData *this)

{
  return this->MemoryAlignment;
}

// GetView @ 1436ea2f0

TArrayView<unsigned_char_const_,__int64> * __thiscall
UE::NNE::FSharedModelData::GetView
          (FSharedModelData *this,TArrayView<unsigned_char_const_,__int64> *__return_storage_ptr__)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,__int64> *pTVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  pFVar1 = (this->Data).Owner.Owner;
  puVar5 = (uchar *)0x0;
  puVar6 = puVar5;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    puVar6 = (uchar *)pFVar1->Size;
  }
  pFVar1 = (this->Data).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    puVar5 = pFVar1->Data;
  }
  __return_storage_ptr__->DataPtr = puVar5;
  __return_storage_ptr__->ArrayNum = (long64)puVar6;
  if (((longlong)puVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned_char_const_,__int64> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

