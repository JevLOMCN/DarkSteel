// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Read @ 1414ac160

bool __thiscall
UE::CompressedBuffer::Private::FArchiveDecoderSource::Read
          (FArchiveDecoderSource *this,ulong64 param_1,TMemoryView<void> *param_2)

{
  (**(code **)(*(longlong *)this->Archive + 0x1b8))(this->Archive,param_1 + this->BaseOffset);
  (**(code **)(*(longlong *)this->Archive + 0x188))(this->Archive,param_2->Data,param_2->Size);
  return (bool)((byte)~this->Archive->field_0x29 >> 1 & 1);
}

// ReadOrView @ 1414ac860

TMemoryView<void_const_> * __thiscall
UE::CompressedBuffer::Private::FArchiveDecoderSource::ReadOrView
          (FArchiveDecoderSource *this,TMemoryView<void_const_> *__return_storage_ptr__,
          ulong64 param_1,ulong64 param_2,FDecoderContext *param_3)

{
  FBufferOwner *pFVar1;
  longlong lVar2;
  FDecoderContext *pFVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  FUniqueBuffer FVar6;
  void *local_28;
  ulong64 uStack_20;
  
  pFVar3 = param_3;
  pFVar1 = (param_3->CompressedBlock).Owner.Owner;
  if (pFVar1 == (FBufferOwner *)0x0) {
    uVar4 = 0;
  }
  else {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    uVar4 = pFVar1->Size;
  }
  if (uVar4 < param_2) {
    uVar5 = 1;
    if (param_2 != 0) {
      uVar5 = param_2;
    }
    lVar2 = 0x3f;
    if (uVar5 - 1 != 0) {
      for (; uVar5 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    FVar6 = FUniqueBuffer::Alloc((ulong64)&param_3);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
              (&(pFVar3->CompressedBlock).Owner,
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar6.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_3);
  }
  pFVar1 = (pFVar3->CompressedBlock).Owner.Owner;
  if (pFVar1 == (FBufferOwner *)0x0) {
    uVar4 = 0;
  }
  else {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    uVar4 = pFVar1->Size;
  }
  pFVar1 = (pFVar3->CompressedBlock).Owner.Owner;
  local_28 = (void *)0x0;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    local_28 = pFVar1->Data;
  }
  uStack_20 = param_2;
  if (uVar4 < param_2) {
    uStack_20 = uVar4;
  }
  (**(code **)(*(longlong *)this->Archive + 0x1b8))(this->Archive,this->BaseOffset + param_1);
  (**(code **)(*(longlong *)this->Archive + 0x188))(this->Archive,local_28,uStack_20);
  if ((this->Archive->field_0x29 & 2) != 0) {
    local_28 = (void *)0x0;
    uStack_20 = 0;
  }
  __return_storage_ptr__->Data = local_28;
  __return_storage_ptr__->Size = uStack_20;
  return __return_storage_ptr__;
}

// ReadToComposite @ 1414aca50

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FArchiveDecoderSource::ReadToComposite
          (FArchiveDecoderSource *this,FCompositeBuffer *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2)

{
  FUniqueBuffer FVar1;
  FSharedBuffer FVar2;
  ulong64 uVar3;
  void *pvVar4;
  FUniqueBuffer local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  
  FUniqueBuffer::Alloc((ulong64)&local_res8);
  FVar1.Owner.Owner = local_res8.Owner.Owner;
  if (local_res8.Owner.Owner == (FBufferOwner *)0x0) {
    uVar3 = 0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
    }
    uVar3 = *(ulong64 *)((longlong)FVar1.Owner.Owner + 0x10);
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      pvVar4 = *(void **)((longlong)local_res8.Owner.Owner + 8);
      goto LAB_1414acac6;
    }
  }
  pvVar4 = (void *)0x0;
LAB_1414acac6:
  (**(code **)(*(longlong *)this->Archive + 0x1b8))(this->Archive,this->BaseOffset + param_1);
  (**(code **)(*(longlong *)this->Archive + 0x188))(this->Archive,pvVar4,uVar3);
  if ((this->Archive->field_0x29 & 2) == 0) {
    FVar2 = FUniqueBuffer::MoveToShared(&local_res8);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar2.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
  }
  else {
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  return __return_storage_ptr__;
}

// SupportsParallelRead @ 1414b21f0

bool __thiscall
UE::CompressedBuffer::Private::FArchiveDecoderSource::SupportsParallelRead
          (FArchiveDecoderSource *this)

{
  return false;
}

