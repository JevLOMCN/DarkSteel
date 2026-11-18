// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetBuffer @ 1419fc870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FCompositeBuffer * __thiscall
FCbArray::GetBuffer(FCbArray *this,FCompositeBuffer *__return_storage_ptr__)

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

// FCbArray @ 141a6b880

FCbArray * __thiscall FCbArray::FCbArray(FCbArray *this,FCbArray *param_1)

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

// AsField @ 141a762d0

FCbField * __thiscall FCbArray::AsField(FCbArray *this,FCbField *__return_storage_ptr__)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong local_res8 [4];
  FCbFieldView local_18;
  
  local_res8[0] = *(longlong *)&this->field_0x10;
  if (local_res8[0] != 0) {
    LOCK();
    puVar1 = (ulonglong *)(local_res8[0] + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_res8[0] + 0x18) = *(longlong *)(local_res8[0] + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_18.TypeWithFlags = *(ECbFieldType *)this & (Reserved|CustomByName);
  local_18.Value = *(void **)&this->field_0x8;
  local_18.Error = None;
  local_18.NameLen = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            ((TCbBuffer<FCbFieldView> *)__return_storage_ptr__,&local_18,(FSharedBuffer)local_res8);
  return __return_storage_ptr__;
}

