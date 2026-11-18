// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// AsType @ 141a76660

FCbObject * __cdecl
FCbFieldObjectAccessors::AsType
          (FCbObject *__return_storage_ptr__,FCbField *param_1,FCbObject *param_2)

{
  ulonglong *puVar1;
  atomic<unsigned___int64> *paVar2;
  ulonglong uVar3;
  atomic<unsigned___int64> aVar4;
  FBufferOwner *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  FSharedBuffer FVar12;
  TCbBuffer<FCbObjectView> *pTVar13;
  ulonglong local_res8;
  FCbObjectView local_48;
  TCbBuffer<FCbObjectView> local_38;
  TCbBuffer<FCbObjectView> local_20;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FCbFieldView::AsObjectView((FCbFieldView *)param_1,&local_48);
  if (param_1->field_0x1 == '\0') {
    local_res8 = *(ulonglong *)&param_1->field_0x10;
    if (local_res8 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res8 + 0x18);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res8 + 0x18) = *(longlong *)(local_res8 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
              (&local_20,&local_48,(FSharedBuffer)&local_res8);
    pTVar13 = &local_20;
    bVar9 = true;
    bVar8 = false;
  }
  else {
    local_38._padding_ = 0;
    local_38._padding_ = 0;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    FCbObjectView::FCbObjectView((FCbObjectView *)&local_38);
    pTVar13 = &local_38;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    bVar9 = false;
    bVar8 = true;
  }
  pFVar5 = (pTVar13->Buffer).Owner.Owner;
  lVar10 = pTVar13->_padding_;
  uVar6 = *(undefined4 *)((longlong)&pTVar13->_padding_ + 4);
  lVar11 = pTVar13->_padding_;
  uVar7 = *(undefined4 *)((longlong)&pTVar13->_padding_ + 4);
  (pTVar13->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  FVar12.Owner.Owner = local_38.Buffer.Owner.Owner;
  *(int *)__return_storage_ptr__ = (int)lVar10;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(int *)&__return_storage_ptr__->field_0x8 = (int)lVar11;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar7;
  *(FBufferOwner **)&__return_storage_ptr__->field_0x10 = pFVar5;
  if (bVar8) {
    if (local_38.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_38.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_38.Buffer.Owner.Owner + 0x10))(local_38.Buffer.Owner.Owner);
        *(void **)((longlong)FVar12.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar12.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar12.Owner.Owner + 0x18);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar12.Owner.Owner)(FVar12.Owner.Owner,1);
        }
      }
    }
  }
  if (bVar9) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_20.Buffer.Owner);
  }
  return __return_storage_ptr__;
}

