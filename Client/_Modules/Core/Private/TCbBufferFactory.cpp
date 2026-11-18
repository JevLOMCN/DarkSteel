// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// MakeView @ 141a8b0b0

FCbField * __cdecl
TCbBufferFactory<FCbField,FCbFieldView>::MakeView
          (FCbField *__return_storage_ptr__,FCbFieldView *param_1,FSharedBuffer param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2.Owner.Owner;
  *(undefined8 *)param_2.Owner.Owner = 0;
  FCbField::FCbField(__return_storage_ptr__,param_1,(FSharedBuffer)&local_res8);
  plVar5 = *(longlong **)param_2.Owner.Owner;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  return __return_storage_ptr__;
}

// Clone @ 141cfacb0

FCbObject * __cdecl
TCbBufferFactory<FCbObject,FCbObjectView>::Clone
          (FCbObject *__return_storage_ptr__,FCbObjectView *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  FUniqueBuffer FVar7;
  FUniqueBuffer FVar8;
  FSharedBuffer FVar9;
  void *pvVar10;
  FUniqueBuffer local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  void *local_28;
  void *pvStack_20;
  
  uVar6 = *(undefined8 *)&param_1->field_0x8;
  pvVar10 = (void *)0x0;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FCbObjectView::GetSize((FCbObjectView *)__return_storage_ptr__);
  FUniqueBuffer::Alloc((ulong64)&local_res8);
  FVar7.Owner.Owner = local_res8.Owner.Owner;
  local_28 = pvVar10;
  pvStack_20 = pvVar10;
  if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
    }
    FVar8.Owner.Owner = local_res8.Owner.Owner;
    pvStack_20 = *(void **)((longlong)FVar7.Owner.Owner + 0x10);
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      local_28 = *(void **)((longlong)FVar8.Owner.Owner + 8);
    }
  }
  FCbObjectView::CopyTo((FCbObjectView *)__return_storage_ptr__,(TMemoryView<void> *)&local_28);
  if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
    }
    pvVar10 = *(void **)((longlong)local_res8.Owner.Owner + 8);
  }
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_28,pvVar10,HasFieldType);
  *(void **)__return_storage_ptr__ = local_28;
  *(void **)&__return_storage_ptr__->field_0x8 = pvStack_20;
  FVar9 = FUniqueBuffer::MoveToShared(&local_res8);
  plVar5 = *(longlong **)&__return_storage_ptr__->field_0x10;
  uVar6 = *(undefined8 *)FVar9.Owner.Owner;
  *(undefined8 *)FVar9.Owner.Owner = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar6;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  return __return_storage_ptr__;
}

// MakeView @ 141d03540

FCbObject * __cdecl
TCbBufferFactory<FCbObject,FCbObjectView>::MakeView
          (FCbObject *__return_storage_ptr__,FCbObjectView *param_1,FSharedBuffer param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2.Owner.Owner;
  *(undefined8 *)param_2.Owner.Owner = 0;
  FCbObject::FCbObject(__return_storage_ptr__,param_1,(FSharedBuffer)&local_res8);
  plVar5 = *(longlong **)param_2.Owner.Owner;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  return __return_storage_ptr__;
}

