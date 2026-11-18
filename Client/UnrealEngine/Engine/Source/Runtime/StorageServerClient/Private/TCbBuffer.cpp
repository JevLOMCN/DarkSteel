// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// begin @ 148ce4190

FCbFieldIterator * __thiscall
TCbBuffer<FCbArrayView>::begin
          (TCbBuffer<FCbArrayView> *this,FCbFieldIterator *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *local_res10 [3];
  undefined1 local_38 [24];
  TCbBuffer<FCbFieldView> local_20;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)this,(FCbFieldViewIterator *)local_38);
  if ((local_38[0] & CustomByName) == None) {
    local_20.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    local_38._16_8_ = local_20.Buffer.Owner.Owner;
  }
  else {
    local_res10[0] = (this->Buffer).Owner.Owner;
    if (local_res10[0] != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &local_res10[0]->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        local_res10[0]->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)local_res10[0]->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              (&local_20,(FCbFieldView *)local_38,(FSharedBuffer)local_res10);
    *(longlong *)__return_storage_ptr__ = local_20._padding_;
    *(longlong *)&__return_storage_ptr__->field_0x8 = local_20._padding_;
  }
  *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&__return_storage_ptr__->field_0x10 =
       local_20.Buffer.Owner.Owner;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_38._16_8_;
  return __return_storage_ptr__;
}

