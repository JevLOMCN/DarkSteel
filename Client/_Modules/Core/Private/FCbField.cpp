// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// AsObject @ 1417b4fa0

FCbObject * __thiscall FCbField::AsObject(FCbField *this,FCbObject *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  FSharedBuffer FVar8;
  TCbBuffer<FCbObjectView> *pTVar9;
  bool bVar10;
  ulonglong local_res8;
  FCbObjectView local_48;
  TCbBuffer<FCbObjectView> local_38;
  TCbBuffer<FCbObjectView> local_20;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FCbFieldView::AsObjectView((FCbFieldView *)this,&local_48);
  bVar10 = this->field_0x1 != '\0';
  if (bVar10) {
    local_38._padding_ = 0;
    local_38._padding_ = 0;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    FCbObjectView::FCbObjectView((FCbObjectView *)&local_38);
    pTVar9 = &local_38;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  else {
    local_res8 = *(ulonglong *)&this->field_0x10;
    *(undefined8 *)&this->field_0x10 = 0;
    TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
              (&local_20,&local_48,(FSharedBuffer)&local_res8);
    pTVar9 = &local_20;
  }
  pFVar3 = (pTVar9->Buffer).Owner.Owner;
  lVar6 = pTVar9->_padding_;
  uVar4 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
  lVar7 = pTVar9->_padding_;
  uVar5 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
  (pTVar9->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  FVar8.Owner.Owner = local_38.Buffer.Owner.Owner;
  *(int *)__return_storage_ptr__ = (int)lVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(int *)&__return_storage_ptr__->field_0x8 = (int)lVar7;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
  *(FBufferOwner **)&__return_storage_ptr__->field_0x10 = pFVar3;
  if (bVar10) {
    if (local_38.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_38.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_38.Buffer.Owner.Owner + 0x10))(local_38.Buffer.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
        }
      }
    }
  }
  if (!bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_20.Buffer.Owner);
  }
  return __return_storage_ptr__;
}

// FCbField @ 1419cced0

FCbField * __thiscall FCbField::FCbField(FCbField *this,FSharedBuffer param_1,ECbFieldType param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_1.Owner.Owner;
  *(undefined8 *)param_1.Owner.Owner = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            ((TCbBuffer<FCbFieldView> *)this,(FSharedBuffer)&local_res8,param_2);
  plVar5 = *(longlong **)param_1.Owner.Owner;
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
  return this;
}

// AsObject @ 1419e2b70

FCbObject * __thiscall FCbField::AsObject(FCbField *this,FCbObject *__return_storage_ptr__)

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
  TCbBuffer<FCbObjectView> local_38;
  TCbBuffer<FCbObjectView> local_20;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((*(byte *)this & 0x1e) == 2) {
    this->field_0x1 = 0;
    local_38._padding_ = *(longlong *)this;
    local_38._padding_ = *(longlong *)&this->field_0x8;
  }
  else {
    this->field_0x1 = 1;
    FCbFieldView::FCbFieldView((FCbFieldView *)&local_38,"\x02",HasFieldType);
  }
  if (this->field_0x1 == '\0') {
    local_res8 = *(ulonglong *)&this->field_0x10;
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
              (&local_20,(FCbObjectView *)&local_38,(FSharedBuffer)&local_res8);
    pTVar13 = &local_20;
    bVar9 = true;
    bVar8 = false;
  }
  else {
    local_38._padding_ = 0;
    local_38._padding_ = 0;
    FCbFieldView::FCbFieldView((FCbFieldView *)&local_38,"\x02",HasFieldType);
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

// GetBuffer @ 1419fc9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FCompositeBuffer * __thiscall
FCbField::GetBuffer(FCbField *this,FCompositeBuffer *__return_storage_ptr__)

{
  byte bVar1;
  int iVar2;
  ulong64 uVar3;
  FSharedBuffer FVar4;
  FSharedBuffer FVar5;
  ForElementType<ECbFieldType> _Dst;
  TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar6;
  uint uVar7;
  undefined1 auStackY_b8 [32];
  byte local_78 [8];
  TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_70;
  FSharedBuffer local_58;
  longlong local_50;
  ForElementType<ECbFieldType> local_48;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar1 = *(byte *)this;
  if ((bVar1 & 0x40) == 0) {
    if ((char)bVar1 < '\0') {
      uVar7 = *(uint *)&this->field_0x4;
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar7 != 0) {
        iVar6 = iVar2;
      }
      uVar7 = uVar7 + 1 + iVar6 / 7;
    }
    else {
      uVar7 = 0;
    }
    uVar3 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    local_58.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
         (*(longlong *)&this->field_0x8 - (ulonglong)uVar7);
    local_50 = uVar3 + uVar7;
    FVar4 = FSharedBuffer::MakeView
                      ((TMemoryView<void_const_> *)&local_70.AllocatorInstance.SecondaryData,
                       &local_58);
    local_48.SecondaryData = (ForElementType<ECbFieldType>)0x0;
    local_38 = 1;
    local_78[0] = bVar1 & 0x9f;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ECbFieldType>_>
              (1,1,1,0,&local_48,1,&local_34);
    _Dst = (ForElementType<ECbFieldType>)&local_48;
    if (local_48.SecondaryData != (ForElementType<ECbFieldType>)0x0) {
      _Dst = local_48.SecondaryData;
    }
    memcpy((void *)_Dst,local_78,1);
    FVar5 = MakeSharedBufferFromArray<enum_ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      (&local_70);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar5.Owner.Owner,
               (FSharedBuffer *)FVar4.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_70);
    if (local_48.SecondaryData != (ForElementType<ECbFieldType>)0x0) {
      FMemory::Free((void *)local_48.SecondaryData);
    }
    this_00 = (TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &local_70.AllocatorInstance.SecondaryData;
  }
  else {
    if ((char)bVar1 < '\0') {
      uVar7 = *(uint *)&this->field_0x4;
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar7 != 0) {
        iVar6 = iVar2;
      }
      uVar7 = uVar7 + 1 + iVar6 / 7;
    }
    else {
      uVar7 = 0;
    }
    uVar3 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    local_70._16_8_ = (uVar7 + 1) + uVar3;
    local_70.AllocatorInstance.SecondaryData =
         (ForElementType<ECbFieldType>)((*(longlong *)&this->field_0x8 - (ulonglong)uVar7) + -1);
    FVar4 = FSharedBuffer::MakeView
                      ((TMemoryView<void_const_> *)&local_70,
                       (FSharedBuffer *)&local_70.AllocatorInstance.SecondaryData);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar4.Owner.Owner);
    this_00 = &local_70;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  return __return_storage_ptr__;
}

// FCbField<FCbFieldView> @ 141a47fc0

FCbField * __thiscall
FCbField::FCbField<FCbFieldView>
          (FCbField *this,FCbFieldView *param_1,TCbBuffer<FCbFieldView> *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *local_res8;
  
  local_res8 = (param_2->Buffer).Owner.Owner;
  (param_2->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            ((TCbBuffer<FCbFieldView> *)this,param_1,(FSharedBuffer)&local_res8);
  pFVar3 = (param_2->Buffer).Owner.Owner;
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

// FCbField<FCbObjectView> @ 141a48060

FCbField * __thiscall
FCbField::FCbField<FCbObjectView>
          (FCbField *this,FCbFieldView *param_1,TCbBuffer<FCbObjectView> *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *local_res8;
  
  local_res8 = (param_2->Buffer).Owner.Owner;
  (param_2->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            ((TCbBuffer<FCbFieldView> *)this,param_1,(FSharedBuffer)&local_res8);
  pFVar3 = (param_2->Buffer).Owner.Owner;
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

// FCbField @ 141a6b8c0

FCbField * __thiscall FCbField::FCbField(FCbField *this,FCbFieldView *param_1,FSharedBuffer param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2.Owner.Owner;
  *(undefined8 *)param_2.Owner.Owner = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            ((TCbBuffer<FCbFieldView> *)this,param_1,(FSharedBuffer)&local_res8);
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
  return this;
}

// AsArray @ 141a760b0

FCbArray * __thiscall FCbField::AsArray(FCbField *this,FCbArray *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  FSharedBuffer FVar8;
  TCbBuffer<FCbArrayView> *pTVar9;
  bool bVar10;
  ulonglong local_res8;
  FCbArrayView local_48;
  TCbBuffer<FCbArrayView> local_38;
  TCbBuffer<FCbArrayView> local_20;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FCbFieldView::AsArrayView((FCbFieldView *)this,&local_48);
  bVar10 = this->field_0x1 != '\0';
  if (bVar10) {
    local_38._padding_ = 0;
    local_38._padding_ = 0;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    FCbArrayView::FCbArrayView((FCbArrayView *)&local_38);
    pTVar9 = &local_38;
    local_38.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  else {
    local_res8 = *(ulonglong *)&this->field_0x10;
    *(undefined8 *)&this->field_0x10 = 0;
    TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>(&local_20,&local_48,(FSharedBuffer)&local_res8)
    ;
    pTVar9 = &local_20;
  }
  pFVar3 = (pTVar9->Buffer).Owner.Owner;
  lVar6 = pTVar9->_padding_;
  uVar4 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
  lVar7 = pTVar9->_padding_;
  uVar5 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
  (pTVar9->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  FVar8.Owner.Owner = local_38.Buffer.Owner.Owner;
  *(int *)__return_storage_ptr__ = (int)lVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(int *)&__return_storage_ptr__->field_0x8 = (int)lVar7;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
  *(FBufferOwner **)&__return_storage_ptr__->field_0x10 = pFVar3;
  if (bVar10) {
    if (local_38.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_38.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_38.Buffer.Owner.Owner + 0x10))(local_38.Buffer.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
        }
      }
    }
  }
  if (!bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_20.Buffer.Owner);
  }
  return __return_storage_ptr__;
}

// AsBinary @ 141a761e0

FSharedBuffer __thiscall FCbField::AsBinary(FCbField *this,FSharedBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  FBufferOwner *pFVar4;
  int iVar5;
  int iVar6;
  longlong *in_R8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  TMemoryView<void_const_> local_38;
  TMemoryView<void_const_> local_28;
  
  local_38.Data = (void *)0x0;
  local_38.Size = 0;
  FCbFieldView::AsBinaryView((FCbFieldView *)this,&local_28,&local_38);
  if (this->field_0x1 == '\0') {
    local_38.Data = local_28.Data;
    local_38.Size = local_28.Size;
    FVar3 = FSharedBuffer::MakeView
                      ((TMemoryView<void_const_> *)&local_res10,(FSharedBuffer *)&local_38);
    pFVar4 = *(FBufferOwner **)FVar3.Owner.Owner;
    iVar6 = 1;
    iVar5 = 0;
  }
  else {
    pFVar4 = (FBufferOwner *)*in_R8;
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
    iVar5 = 2;
    iVar6 = 0;
    local_res8.Owner = pFVar4;
  }
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
  (param_1->Owner).Owner = pFVar4;
  if (iVar5 != 0) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
  }
  if (iVar6 != 0) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

