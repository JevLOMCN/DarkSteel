// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// MakeRangeView @ 1417e26f0

FCbFieldIterator * __cdecl
FCbFieldIterator::MakeRangeView
          (FCbFieldIterator *__return_storage_ptr__,FCbFieldViewIterator *param_1,
          FSharedBuffer param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FSharedBuffer FVar7;
  undefined8 local_res8;
  TCbBuffer<FCbFieldView> local_28;
  
  local_res8 = *(undefined8 *)param_2.Owner.Owner;
  uVar5 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)param_2.Owner.Owner = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_28,(FCbFieldView *)param_1,(FSharedBuffer)&local_res8);
  FVar7.Owner.Owner = local_28.Buffer.Owner.Owner;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar5;
  local_28.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  *(undefined4 *)__return_storage_ptr__ = (undefined4)local_28._padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_28._padding_._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = (undefined4)local_28._padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_28._padding_._4_4_;
  *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&__return_storage_ptr__->field_0x10 =
       FVar7.Owner.Owner;
  plVar6 = *(longlong **)param_2.Owner.Owner;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar6 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return __return_storage_ptr__;
}

// CloneRange @ 1419e4b40

FCbFieldIterator * __cdecl
FCbFieldIterator::CloneRange(FCbFieldIterator *__return_storage_ptr__,FCbFieldViewIterator *param_1)

{
  int iVar1;
  ulonglong uVar2;
  FSharedBuffer FVar3;
  ulong64 uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  TMemoryView<void_const_> local_res10;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  
  if ((*(byte *)param_1 & 0x40) != 0) {
    if ((char)*(byte *)param_1 < '\0') {
      uVar6 = *(uint *)&param_1->field_0x4;
      iVar1 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = iVar1;
      }
      uVar6 = uVar6 + 1 + iVar5 / 7;
    }
    else {
      uVar6 = 0;
    }
    FCbFieldView::GetValueSize((FCbFieldView *)param_1);
    local_48 = (void *)((*(longlong *)&param_1->field_0x8 - (ulonglong)uVar6) + -1);
    pvStack_40 = (void *)(*(longlong *)&param_1->field_0x10 - (longlong)local_48);
    FVar3 = FSharedBuffer::Clone(&local_res10);
    MakeRange(__return_storage_ptr__,FVar3,HasFieldType);
    return __return_storage_ptr__;
  }
  uVar6 = *(uint *)param_1;
  local_48 = *(void **)param_1;
  pvStack_40 = *(void **)&param_1->field_0x8;
  pvVar7 = (void *)0x0;
  uVar9 = *(ulonglong *)&param_1->field_0x10;
  local_38 = uVar9;
  if ((uVar6 & 0x1f) != 0) {
    do {
      if ((char)(ECbFieldType)uVar6 < '\0') {
        iVar1 = 0x1f;
        if (local_48._4_4_ != 0) {
          for (; local_48._4_4_ >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
      }
      local_38 = uVar9;
      FCbFieldView::GetValueSize((FCbFieldView *)&local_48);
      uVar4 = FCbFieldView::GetValueSize((FCbFieldView *)&local_48);
      uVar2 = -(ulonglong)((longlong)pvStack_40 + uVar4 != uVar9);
      uVar9 = uVar9 & uVar2;
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)&local_48,(void *)(uVar2 & (longlong)pvStack_40 + uVar4),
                 (ECbFieldType)uVar2 & (ECbFieldType)uVar6);
      uVar6 = (uint)(ECbFieldType)local_48;
      local_38 = uVar9;
    } while (((ulonglong)local_48 & 0x1f) != 0);
  }
  FUniqueBuffer::Alloc((ulong64)&local_res10);
  pvVar8 = local_res10.Data;
  if (local_res10.Data == (longlong *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    if ((*(ulonglong *)((longlong)local_res10.Data + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_res10.Data + 8))(local_res10.Data);
    }
    pvVar8 = *(void **)((longlong)pvVar8 + 0x10);
    if (local_res10.Data != (longlong *)0x0) {
      if ((*(ulonglong *)((longlong)local_res10.Data + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_res10.Data + 8))(local_res10.Data);
      }
      pvVar7 = *(void **)((longlong)local_res10.Data + 8);
    }
  }
  local_48 = pvVar7;
  pvStack_40 = pvVar8;
  TCbFieldIterator<FCbFieldView>::CopyRangeTo
            ((TCbFieldIterator<FCbFieldView> *)param_1,(TMemoryView<void> *)&local_48);
  FVar3 = FUniqueBuffer::MoveToShared((FUniqueBuffer *)&local_res10);
  MakeRange(__return_storage_ptr__,FVar3,HasFieldType);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_res10);
  return __return_storage_ptr__;
}

// MakeRange @ 141a0a700

FCbFieldIterator * __cdecl
FCbFieldIterator::MakeRange
          (FCbFieldIterator *__return_storage_ptr__,FSharedBuffer param_1,ECbFieldType param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res10;
  TCbBuffer<FCbFieldView> local_38;
  
  plVar4 = *(longlong **)param_1.Owner.Owner;
  if (plVar4 != (longlong *)0x0) {
    if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (plVar4[2] != 0) {
      plVar4 = *(longlong **)param_1.Owner.Owner;
      lVar6 = 0;
      lVar5 = lVar6;
      if (plVar4 != (longlong *)0x0) {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        lVar5 = plVar4[2];
      }
      plVar4 = *(longlong **)param_1.Owner.Owner;
      if (plVar4 != (longlong *)0x0) {
        if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        lVar6 = plVar4[1];
      }
      local_res10 = *(undefined8 *)param_1.Owner.Owner;
      *(undefined8 *)param_1.Owner.Owner = 0;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_38,(FSharedBuffer)&local_res10,param_2);
      *(longlong *)__return_storage_ptr__ = local_38._padding_;
      *(longlong *)&__return_storage_ptr__->field_0x8 = local_38._padding_;
      *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&__return_storage_ptr__->field_0x10
           = local_38.Buffer.Owner.Owner;
      *(longlong *)&__return_storage_ptr__->field_0x18 = lVar6 + lVar5;
      goto LAB_141a0a7ee;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
LAB_141a0a7ee:
  plVar4 = *(longlong **)param_1.Owner.Owner;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 3;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar6 & 0x3fffffff) == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeRangeOwned @ 141a8af70

void __thiscall FCbFieldIterator::MakeRangeOwned(FCbFieldIterator *this)

{
  FCbFieldViewIterator local_48;
  undefined1 local_30 [40];
  
  if ((*(longlong *)&this->field_0x10 == 0) ||
     ((*(ulonglong *)(*(longlong *)&this->field_0x10 + 0x18) >> 0x3c & 1) == 0)) {
    local_48._0_8_ = *(undefined8 *)this;
    local_48._8_8_ = *(undefined8 *)&this->field_0x8;
    local_48._16_8_ = *(undefined8 *)&this->field_0x18;
    CloneRange((FCbFieldIterator *)local_30,&local_48);
    *(undefined8 *)this = local_30._0_8_;
    *(undefined8 *)&this->field_0x8 = local_30._8_8_;
    FSharedBuffer::operator=((FSharedBuffer *)&this->field_0x10,(FSharedBuffer *)(local_30 + 0x10));
    *(undefined8 *)&this->field_0x18 = local_30._24_8_;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_30 + 0x10));
  }
  return;
}

// MakeSingle @ 141a8aff0

FCbFieldIterator * __cdecl
FCbFieldIterator::MakeSingle(FCbFieldIterator *__return_storage_ptr__,FCbField *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  
  uVar7 = *(undefined8 *)&param_1->field_0x8;
  uVar4 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar4;
  lVar5 = *(longlong *)&__return_storage_ptr__->field_0x8;
  uVar8 = FCbFieldView::GetValueSize((FCbFieldView *)__return_storage_ptr__);
  *(ulong64 *)&__return_storage_ptr__->field_0x18 = uVar8 + lVar5;
  plVar6 = *(longlong **)&param_1->field_0x10;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 3;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar6[1] = 0;
      plVar6[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar6 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return __return_storage_ptr__;
}

