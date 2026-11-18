// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// GetBuffer @ 1419fcc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FCompositeBuffer * __thiscall
FCbObject::GetBuffer(FCbObject *this,FCompositeBuffer *__return_storage_ptr__)

{
  ulong64 uVar1;
  FSharedBuffer FVar2;
  FSharedBuffer FVar3;
  ForElementType<ECbFieldType> _Dst;
  TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  undefined1 auStackY_98 [32];
  byte local_58 [8];
  TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_50;
  FSharedBuffer local_38;
  ulong64 local_30;
  ForElementType<ECbFieldType> local_28;
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (((char)*(byte *)this < '\0') || ((*(byte *)this & 0x40) == 0)) {
    local_30 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    local_38.Owner.Owner =
         *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->field_0x8;
    FVar2 = FSharedBuffer::MakeView
                      ((TMemoryView<void_const_> *)&local_50.AllocatorInstance.SecondaryData,
                       &local_38);
    local_28.SecondaryData = (ForElementType<ECbFieldType>)0x0;
    local_58[0] = *(byte *)this & 0x1f;
    local_18 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ECbFieldType>_>
              (1,1,1,0,&local_28,1,&local_14);
    _Dst = (ForElementType<ECbFieldType>)&local_28;
    if (local_28.SecondaryData != (ForElementType<ECbFieldType>)0x0) {
      _Dst = local_28.SecondaryData;
    }
    memcpy((void *)_Dst,local_58,1);
    FVar3 = MakeSharedBufferFromArray<enum_ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      (&local_50);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar3.Owner.Owner,
               (FSharedBuffer *)FVar2.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_50);
    if (local_28.SecondaryData != (ForElementType<ECbFieldType>)0x0) {
      FMemory::Free((void *)local_28.SecondaryData);
    }
    this_00 = (TArray<ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &local_50.AllocatorInstance.SecondaryData;
  }
  else {
    uVar1 = FCbFieldView::GetValueSize((FCbFieldView *)this);
    local_50.AllocatorInstance.SecondaryData =
         (ForElementType<ECbFieldType>)(*(longlong *)&this->field_0x8 + -1);
    local_50._16_8_ = uVar1 + 1;
    FVar2 = FSharedBuffer::MakeView
                      ((TMemoryView<void_const_> *)&local_50,
                       (FSharedBuffer *)&local_50.AllocatorInstance.SecondaryData);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar2.Owner.Owner);
    this_00 = &local_50;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  return __return_storage_ptr__;
}

// FCbObject @ 141a6b960

FCbObject * __thiscall FCbObject::FCbObject(FCbObject *this,FCbObject *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar4;
  lVar3 = *(longlong *)&param_1->field_0x10;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
      UNLOCK();
      *(longlong *)&this->field_0x10 = lVar3;
      return this;
    }
  }
  *(longlong *)&this->field_0x10 = lVar3;
  return this;
}

// operator[] @ 141a73590

FCbField * __thiscall
FCbObject::operator[]
          (FCbObject *this,FCbField *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong local_res10 [3];
  FCbFieldView local_28;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FCbObjectView::FindView((FCbObjectView *)this,&local_28,&local_18);
  if ((local_28.TypeWithFlags & CustomByName) != None) {
    local_res10[0] = *(longlong *)&this->field_0x10;
    if (local_res10[0] != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res10[0] + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res10[0] + 0x18) = *(longlong *)(local_res10[0] + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              ((TCbBuffer<FCbFieldView> *)__return_storage_ptr__,&local_28,
               (FSharedBuffer)local_res10);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// AsField @ 141a76350

FCbField * __thiscall FCbObject::AsField(FCbObject *this,FCbField *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FCbFieldView local_38;
  TCbBuffer<FCbObjectView> local_28;
  
  local_28._padding_ = *(longlong *)this;
  local_28._padding_ = *(longlong *)&this->field_0x8;
  local_28.Buffer.Owner.Owner =
       *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->field_0x10;
  if (local_28.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &((FBufferOwner *)local_28.Buffer.Owner.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      ((FBufferOwner *)local_28.Buffer.Owner.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)((FBufferOwner *)local_28.Buffer.Owner.Owner)->ReferenceCountsAndFlags +
           0x40000000);
      UNLOCK();
    }
  }
  local_38.TypeWithFlags = *(ECbFieldType *)this & (Reserved|CustomByName);
  local_38.Value = *(void **)&this->field_0x8;
  local_38.Error = None;
  local_38.NameLen = 0;
  FCbField::FCbField<FCbObjectView>(__return_storage_ptr__,&local_38,&local_28);
  return __return_storage_ptr__;
}

// Find @ 141a7eb50

FCbField * __thiscall
FCbObject::Find(FCbObject *this,FCbField *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong local_res18 [2];
  FCbFieldView local_28;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FCbObjectView::FindView((FCbObjectView *)this,&local_28,&local_18);
  if ((local_28.TypeWithFlags & CustomByName) != None) {
    local_res18[0] = *(longlong *)&this->field_0x10;
    if (local_res18[0] != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res18[0] + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res18[0] + 0x18) = *(longlong *)(local_res18[0] + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              ((TCbBuffer<FCbFieldView> *)__return_storage_ptr__,&local_28,
               (FSharedBuffer)local_res18);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// FindIgnoreCase @ 141a7f5e0

FCbField * __thiscall
FCbObject::FindIgnoreCase
          (FCbObject *this,FCbField *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong local_res18 [2];
  FCbFieldView local_28;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FCbObjectView::FindViewIgnoreCase((FCbObjectView *)this,&local_28,&local_18);
  if ((local_28.TypeWithFlags & CustomByName) != None) {
    local_res18[0] = *(longlong *)&this->field_0x10;
    if (local_res18[0] != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res18[0] + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res18[0] + 0x18) = *(longlong *)(local_res18[0] + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              ((TCbBuffer<FCbFieldView> *)__return_storage_ptr__,&local_28,
               (FSharedBuffer)local_res18);
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// FCbObject @ 141ce3af0

FCbObject * __thiscall
FCbObject::FCbObject(FCbObject *this,FCbObjectView *param_1,FSharedBuffer param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2.Owner.Owner;
  *(undefined8 *)param_2.Owner.Owner = 0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            ((TCbBuffer<FCbObjectView> *)this,param_1,(FSharedBuffer)&local_res8);
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

