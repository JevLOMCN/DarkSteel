// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// operator<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue> @ 1441f4620

TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FReliableSendQueue *this_00;
  ForAnyElementType FVar2;
  FNetObjectAttachmentSendQueue local_38;
  
  local_38.ReliableQueue = (FReliableSendQueue *)0x0;
  local_38.UnreliableQueue.Head = 0;
  local_38.UnreliableQueue.Tail = 0;
  local_38.UnreliableQueue.IndexMask = 0;
  local_38.UnreliableQueue.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.UnreliableQueue.Storage.ArrayNum = 0;
  local_38.UnreliableQueue.Storage.ArrayMax = 0;
  local_38.MaxUnreliableCount = UE::Net::Private::AttachmentReplicationCVars::UnreliableRPCQueueSize
  ;
  *(uint *)__return_storage_ptr__ = *this->Key;
  UE::Net::Private::FNetObjectAttachmentSendQueue::FNetObjectAttachmentSendQueue
            ((FNetObjectAttachmentSendQueue *)&__return_storage_ptr__->field_0x8,&local_38);
  this_00 = local_38.ReliableQueue;
  if (local_38.ReliableQueue != (FReliableSendQueue *)0x0) {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)
               ((local_38.ReliableQueue)->PreQueue).AllocatorInstance.Data,
               ((local_38.ReliableQueue)->PreQueue).ArrayNum);
    pFVar1 = (this_00->PreQueue).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    UE::Net::Private::FReliableNetBlobQueue::~FReliableNetBlobQueue(&this_00->ReliableQueue);
    ::operator_delete(this_00,0x2128);
  }
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
            (&local_38.UnreliableQueue,
             (ulonglong)(local_38.UnreliableQueue.Head - local_38.UnreliableQueue.Tail));
  FVar2.Data = local_38.UnreliableQueue.Storage.AllocatorInstance.Data;
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)
             local_38.UnreliableQueue.Storage.AllocatorInstance.Data,0);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors> @ 1441f46f0

TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
* __thiscall
TKeyInitializer<FFieldVariant_const_&>::
operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
          (TKeyInitializer<FFieldVariant_const_&> *this,
          TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  
  uVar1 = (this->Key->Container).Unknown;
  *(ulonglong *)__return_storage_ptr__ = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
            ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)0x0,0);
  return __return_storage_ptr__;
}

// operator<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>_TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions> @ 14421fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions> *
__thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>_TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions::FObjectDynamicConditions
            ((FObjectDynamicConditions *)&__return_storage_ptr__->field_0x8,
             (FObjectDynamicConditions *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>_TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo> @ 14421fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo> *
__thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>_TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,UE::Net::Private::FReplicationFiltering::FPerSubObjectFilterGroupInfo>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ForElementType<FSetElementId> FStack_40;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FStack_40.InlineData[0] = '\0';
  FStack_40.InlineData[1] = '\0';
  FStack_40.InlineData[2] = '\0';
  FStack_40.InlineData[3] = '\0';
  FStack_40._padding_ = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0x8000000000;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_48 = 0xffffffff;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  FStack_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_30 = 0;
  local_28 = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
              *)local_78);
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = (undefined4)local_28;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (FStack_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  uVar2 = uStack_50._4_4_;
  local_48 = 0xffffffff;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  if (0x80 < uVar2) {
    uStack_50 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,UE::Net::FSharedConnectionFilterStatus>_TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus> @ 14421fc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,UE::Net::FSharedConnectionFilterStatus>_TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [48];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> local_68;
  undefined8 uStack_60;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_58;
  undefined8 uStack_40;
  uchar local_38 [8];
  ForElementType<FSetElementId> FStack_30;
  ulonglong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0;
  uStack_60 = 0x400000000;
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance._padding_ = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  FStack_30 = (ForElementType<FSetElementId>)0x0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_28 = 0;
  local_98._16_8_ = 0;
  local_98._24_8_ = 0;
  uStack_20 = 0;
  local_98._32_8_ = 0;
  local_98._40_8_ = 0;
  local_58._16_8_ = ___xmm_00000000ffffffff0000002000000000;
  uStack_40 = _UNK_150631d78;
  *(uint *)__return_storage_ptr__ = *this->Key;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)local_98);
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = (undefined4)uStack_20;
  local_28 = local_28 & 0xffffffff00000000;
  if (FStack_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_30);
  }
  uVar1 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
              (0xc,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                       local_98,0,(int *)((longlong)&uStack_60 + 4));
  }
  iVar2 = local_58.MaxBits;
  uStack_40 = 0xffffffff;
  local_58._16_8_ = (ulonglong)(uint)local_58.MaxBits << 0x20;
  if (0x20 < (uint)iVar2) {
    local_58.NumBits = 0;
    local_58.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
    FMemory::Free((void *)local_68);
  }
  return __return_storage_ptr__;
}

// operator<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects> @ 14421fda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects> * __thiscall
TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&>::
operator<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>
          (TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&> *this,
          TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar1 = this->Key->Y;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->X;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  UNetObjectGridFilter::FCellObjects::FCellObjects
            ((FCellObjects *)&__return_storage_ptr__->field_0x8,(FCellObjects *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo> @ 1442a14f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo> * __thiscall
TKeyInitializer<unsigned_int_&>::
operator<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>_TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>
          (TKeyInitializer<unsigned_int_&> *this,
          TTuple<unsigned_int,UE::Net::Private::FReplicationReader::FReplicatedObjectInfo>
          *__return_storage_ptr__)

{
  FReplicatedObjectInfo *pFVar1;
  undefined1 auStack_1a8 [32];
  FReplicatedObjectInfo local_188;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar1 = UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::FReplicatedObjectInfo
                     (&local_188);
  *(uint *)__return_storage_ptr__ = *this->Key;
  UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::FReplicatedObjectInfo
            ((FReplicatedObjectInfo *)&__return_storage_ptr__->field_0x8,pFVar1);
  UE::Net::Private::FReplicationReader::FReplicatedObjectInfo::~FReplicatedObjectInfo(&local_188);
  return __return_storage_ptr__;
}

// operator<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 1442a16a0

TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<UE::Net::FNetRefHandle_const_&>::
operator<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<UE::Net::FNetRefHandle_const_&> *this,
          TTuple<UE::Net::FNetRefHandle,TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *(FNetRefHandle_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_98;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uStack_90;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_88;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_80;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_78;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_70;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_60;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x88);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x94 = 0x10;
  return __return_storage_ptr__;
}

