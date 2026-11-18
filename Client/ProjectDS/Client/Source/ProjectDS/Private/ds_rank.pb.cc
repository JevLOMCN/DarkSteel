// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// `dynamic_initializer_for_'_DbWorkItem_default_instance_'' @ 1412921a0

void __cdecl ds_rank::_dynamic_initializer_for___DbWorkItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbWorkItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412921c0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5frank_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// `scalar_deleting_destructor' @ 14c14d9b0

void * __thiscall ds_rank::DbWorkItem::_scalar_deleting_destructor_(DbWorkItem *this,uint param_1)

{
  ~DbWorkItem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c14d9f0

void __cdecl ds_rank::DbWorkItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  bool bVar6;
  
  this = &param_1->_internal_metadata_;
  pAVar5 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_Item((DbWorkItem *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (iVar2 == 1) {
      bVar6 = iVar3 == 1;
    }
    else if (iVar2 == 2) {
      bVar6 = iVar3 == 2;
    }
    else {
      if (iVar2 != 3) goto LAB_14c14da96;
      bVar6 = iVar3 == 3;
    }
    if (bVar6) {
      google::protobuf::Message::MergeFrom
                ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
    }
    else {
      pMVar4 = google::protobuf::MessageLite::CopyConstruct
                         (pAVar5,(MessageLite *)param_2[2]._padding_);
      param_1[2]._padding_ = (longlong)pMVar4;
    }
  }
LAB_14c14da96:
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c14dae0

void __thiscall ds_rank::DbWorkItem::Clear(DbWorkItem *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  (this->_impl_).dirty_flag_ = 0;
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c14db60

ulong64 __thiscall ds_rank::DbWorkItem::ByteSizeLong(DbWorkItem *this)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar4 = (this->_impl_).dirty_flag_, iVar4 != 0)) {
    uVar1 = (longlong)iVar4 | 1;
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = 0x3f - (int)lVar2;
    }
    else {
      iVar4 = (int)LZCOUNT(uVar1);
    }
    _Var5 = (ulonglong)(iVar4 * -9 + 0x280U >> 6) + 2;
  }
  uVar3 = (this->_impl_)._oneof_case_[0];
  if (((uVar3 == 1) || (uVar3 == 2)) || (uVar3 == 3)) {
    lVar2 = (**(code **)(*(longlong *)(this->_impl_).Item_.rawrank_ + 0x10))();
    uVar3 = (uint)lVar2 | 1;
    if (__isa_available < 5) {
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 0x1f - iVar4;
    }
    else {
      iVar4 = LZCOUNT(uVar3);
    }
    _Var5 = _Var5 + 1 + (ulonglong)(iVar4 * -9 + 0x160U >> 6) + lVar2;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c14dc30

uchar * __thiscall
ds_rank::DbWorkItem::_InternalSerialize
          (DbWorkItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  uVar5 = (this->_impl_)._oneof_case_[0];
  if (uVar5 == 1) {
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.rawrank_);
    iVar4 = 1;
  }
  else if (uVar5 == 2) {
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.rawrank_);
    iVar4 = 2;
  }
  else {
    if (uVar5 != 3) goto LAB_14c14dc9f;
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.rawrank_);
    iVar4 = 3;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar4,(MessageLite *)(this->_impl_).Item_.rawrank_,iVar1,param_1,param_2);
LAB_14c14dc9f:
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).dirty_flag_;
    uVar5 = 8000;
    do {
      pbVar7 = param_1;
      bVar3 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      *pbVar7 = bVar3 | 0x80;
      param_1 = pbVar7 + 1;
    } while (0x7f < uVar5);
    pbVar7[1] = (byte)uVar5;
    pbVar7 = pbVar7 + 2;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar7 = (byte)uVar6 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar6;
    param_1 = pbVar7 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c14dd70

ClassData * __thiscall ds_rank::DbWorkItem::GetClassData(DbWorkItem *this)

{
  return (ClassData *)&DbWorkItem_class_data_;
}

// PlacementNew_ @ 14c14dd90

void * __cdecl ds_rank::DbWorkItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbWorkItem_ds_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// GetOwnedMessage<ds_rank::SqlRankStateTable> @ 14c14ddc0

SqlRankStateTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_rank::SqlRankStateTable>
          (Arena *param_1,SqlRankStateTable *param_2,Arena *param_3)

{
  SqlRankStateTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRankStateTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRankStateTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_rank::SqlRawRankTable> @ 14c14ddd0

SqlRawRankTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_rank::SqlRawRankTable>
          (Arena *param_1,SqlRawRankTable *param_2,Arena *param_3)

{
  SqlRawRankTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRawRankTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRawRankTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_rank::SqlSummaryRankTable> @ 14c14dde0

SqlSummaryRankTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_rank::SqlSummaryRankTable>
          (Arena *param_1,SqlSummaryRankTable *param_2,Arena *param_3)

{
  SqlSummaryRankTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlSummaryRankTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlSummaryRankTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbWorkItem @ 14c14ddf0

DbWorkItem * __thiscall ds_rank::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// DbWorkItem @ 14c14de20

DbWorkItem * __thiscall
ds_rank::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1,DbWorkItem *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_).dirty_flag_ = (param_2->_impl_).dirty_flag_;
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    pMVar2 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).Item_.rawrank_);
    (this->_impl_).Item_.rawrank_ = (Message *)pMVar2;
  }
  return this;
}

// ~DbWorkItem @ 14c14dec0

void __thiscall ds_rank::DbWorkItem::~DbWorkItem(DbWorkItem *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7DbWorkItem_ds_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
        (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// CopyFrom @ 14c14df40

void __thiscall ds_rank::DbWorkItem::CopyFrom(DbWorkItem *this,DbWorkItem *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  bool bVar6;
  
  if (param_1 == this) {
    return;
  }
  Clear(this);
  pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).dirty_flag_, iVar2 != 0)) {
    (this->_impl_).dirty_flag_ = iVar2;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    uVar3 = (this->_impl_)._oneof_case_[0];
    if (uVar3 != uVar1) {
      if (uVar3 != 0) {
        clear_Item(this);
      }
      (this->_impl_)._oneof_case_[0] = uVar1;
    }
    if (uVar1 == 1) {
      bVar6 = uVar3 == 1;
    }
    else if (uVar1 == 2) {
      bVar6 = uVar3 == 2;
    }
    else {
      if (uVar1 != 3) goto LAB_14c14dfef;
      bVar6 = uVar3 == 3;
    }
    pMVar4 = (MessageLite *)(param_1->_impl_).Item_.rawrank_;
    if (bVar6) {
      google::protobuf::Message::MergeFrom((this->_impl_).Item_.rawrank_,(Message *)pMVar4);
    }
    else {
      pMVar4 = google::protobuf::MessageLite::CopyConstruct(pAVar5,pMVar4);
      (this->_impl_).Item_.rawrank_ = (Message *)pMVar4;
    }
  }
LAB_14c14dfef:
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return;
}

// GetMetadata @ 14c14e030

Metadata * __thiscall
ds_rank::DbWorkItem::GetMetadata(DbWorkItem *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&DbWorkItem_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c14e070

void __thiscall ds_rank::DbWorkItem::InternalSwap(DbWorkItem *this,DbWorkItem *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ItemUnion IVar4;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).dirty_flag_;
  (this->_impl_).dirty_flag_ = (param_1->_impl_).dirty_flag_;
  (param_1->_impl_).dirty_flag_ = iVar2;
  IVar4 = (this->_impl_).Item_;
  (this->_impl_).Item_ = (param_1->_impl_).Item_;
  (param_1->_impl_).Item_ = IVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// clear_Item @ 14c14e0d0

void __thiscall ds_rank::DbWorkItem::clear_Item(DbWorkItem *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_rankstate @ 14c14e130

void __thiscall ds_rank::DbWorkItem::clear_rankstate(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.rawrank_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_rawrank @ 14c14e180

void __thiscall ds_rank::DbWorkItem::clear_rawrank(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.rawrank_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_summaryrank @ 14c14e1d0

void __thiscall ds_rank::DbWorkItem::clear_summaryrank(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 2) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.rawrank_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_rankstate @ 14c14e220

void __thiscall
ds_rank::DbWorkItem::set_allocated_rankstate(DbWorkItem *this,SqlRankStateTable *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlRankStateTable *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (SqlRankStateTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).Item_.rawrank_ = (Message *)param_1;
  }
  return;
}

// set_allocated_rawrank @ 14c14e2e0

void __thiscall
ds_rank::DbWorkItem::set_allocated_rawrank(DbWorkItem *this,SqlRawRankTable *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlRawRankTable *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (SqlRawRankTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).Item_.rawrank_ = (Message *)param_1;
  }
  return;
}

// set_allocated_summaryrank @ 14c14e3a0

void __thiscall
ds_rank::DbWorkItem::set_allocated_summaryrank(DbWorkItem *this,SqlSummaryRankTable *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).Item_.rawrank_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlSummaryRankTable *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (SqlSummaryRankTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).Item_.rawrank_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbWorkItem_default_instance_'' @ 150441940

void __cdecl ds_rank::_dynamic_atexit_destructor_for___DbWorkItem_default_instance___(void)

{
  return;
}

