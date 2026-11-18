// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// `dynamic_initializer_for_'_DbWorkItem_default_instance_'' @ 141292060

void __cdecl ds_config::_dynamic_initializer_for___DbWorkItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbWorkItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141292080

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fconfig_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c147750

void __cdecl ds_config::DbWorkItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  
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
    switch(iVar2) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      if (iVar3 == iVar2) {
        google::protobuf::Message::MergeFrom
                  ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
      }
      else {
        pMVar4 = google::protobuf::MessageLite::CopyConstruct
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pMVar4;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c147860

void __thiscall ds_config::DbWorkItem::Clear(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  (this->_impl_).dirty_flag_ = 0;
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
            ((InternalMetadata *)&this->_padding_);
  return;
}

// ByteSizeLong @ 14c147910

ulong64 __thiscall ds_config::DbWorkItem::ByteSizeLong(DbWorkItem *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).dirty_flag_, iVar2 != 0)) {
    uVar3 = (longlong)iVar2 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = (int)LZCOUNT(uVar3);
    }
    _Var5 = (ulonglong)(iVar2 * -9 + 0x280U >> 6) + 1;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar4 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      ((this->_impl_).Item_.node_);
    _Var5 = _Var5 + uVar4 + 1;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c1479e0

uchar * __thiscall
ds_config::DbWorkItem::_InternalSerialize
          (DbWorkItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uchar *puVar3;
  byte bVar4;
  int iVar5;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar2 = (ulonglong)(this->_impl_).dirty_flag_;
    *param_1 = 8;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 2;
    break;
  case 3:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 3;
    break;
  case 4:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 4;
    break;
  case 5:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 5;
    break;
  case 6:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 6;
    break;
  case 7:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 7;
    break;
  case 8:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 8;
    break;
  case 9:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 9;
    break;
  case 10:
    iVar1 = google::protobuf::MessageLite::GetCachedSize((MessageLite *)(this->_impl_).Item_.node_);
    iVar5 = 10;
    break;
  default:
    goto switchD_14c147a6f_default;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar5,(MessageLite *)(this->_impl_).Item_.node_,iVar1,param_1,param_2);
switchD_14c147a6f_default:
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c147b90

ClassData * __thiscall ds_config::DbWorkItem::GetClassData(DbWorkItem *this)

{
  return (ClassData *)&DbWorkItem_class_data_;
}

// PlacementNew_ @ 14c147bb0

void * __cdecl ds_config::DbWorkItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbWorkItem_ds_config__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c147be0

void * __thiscall ds_config::DbWorkItem::_scalar_deleting_destructor_(DbWorkItem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7DbWorkItem_ds_config__6B_;
  SharedDtor((MessageLite *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// GetOwnedMessage<ds_config::SqlContentsBaseTable> @ 14c147c30

SqlContentsBaseTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlContentsBaseTable>
          (Arena *param_1,SqlContentsBaseTable *param_2,Arena *param_3)

{
  SqlContentsBaseTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlContentsBaseTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlContentsBaseTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlContentsFunctionTable> @ 14c147c40

SqlContentsFunctionTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlContentsFunctionTable>
          (Arena *param_1,SqlContentsFunctionTable *param_2,Arena *param_3)

{
  SqlContentsFunctionTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlContentsFunctionTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlContentsFunctionTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlDbAgentServerListTable> @ 14c147c50

SqlDbAgentServerListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlDbAgentServerListTable>
          (Arena *param_1,SqlDbAgentServerListTable *param_2,Arena *param_3)

{
  SqlDbAgentServerListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlDbAgentServerListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlDbAgentServerListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlFrontEndServerListTable> @ 14c147c60

SqlFrontEndServerListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlFrontEndServerListTable>
          (Arena *param_1,SqlFrontEndServerListTable *param_2,Arena *param_3)

{
  SqlFrontEndServerListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlFrontEndServerListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlFrontEndServerListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlGameServerListTable> @ 14c147c70

SqlGameServerListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlGameServerListTable>
          (Arena *param_1,SqlGameServerListTable *param_2,Arena *param_3)

{
  SqlGameServerListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlGameServerListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlGameServerListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlGuildServerListTable> @ 14c147c80

SqlGuildServerListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlGuildServerListTable>
          (Arena *param_1,SqlGuildServerListTable *param_2,Arena *param_3)

{
  SqlGuildServerListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlGuildServerListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlGuildServerListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlNodeTable> @ 14c147c90

SqlNodeTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlNodeTable>
          (Arena *param_1,SqlNodeTable *param_2,Arena *param_3)

{
  SqlNodeTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlNodeTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlNodeTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlRegionNodeTable> @ 14c147ca0

SqlRegionNodeTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlRegionNodeTable>
          (Arena *param_1,SqlRegionNodeTable *param_2,Arena *param_3)

{
  SqlRegionNodeTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRegionNodeTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRegionNodeTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_config::SqlRegionServerListTable> @ 14c147cb0

SqlRegionServerListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_config::SqlRegionServerListTable>
          (Arena *param_1,SqlRegionServerListTable *param_2,Arena *param_3)

{
  SqlRegionServerListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRegionServerListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRegionServerListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbWorkItem @ 14c147cc0

DbWorkItem * __thiscall ds_config::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// DbWorkItem @ 14c147cf0

DbWorkItem * __thiscall
ds_config::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1,DbWorkItem *param_2)

{
  MessageLite *pMVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_config__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_).dirty_flag_ = (param_2->_impl_).dirty_flag_;
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    pMVar1 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).Item_.node_);
    (this->_impl_).Item_.node_ = (Message *)pMVar1;
  }
  return this;
}

// ~DbWorkItem @ 14c147dc0

void __thiscall ds_config::DbWorkItem::~DbWorkItem(DbWorkItem *this)

{
  this->_padding_ = (longlong)&___7DbWorkItem_ds_config__6B_;
  SharedDtor((MessageLite *)this);
  return;
}

// CopyFrom @ 14c147de0

void __thiscall ds_config::DbWorkItem::CopyFrom(DbWorkItem *this,DbWorkItem *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c147e20

Metadata * __thiscall
ds_config::DbWorkItem::GetMetadata(DbWorkItem *this,Metadata *__return_storage_ptr__)

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

// InternalSwap @ 14c147e60

void __thiscall ds_config::DbWorkItem::InternalSwap(DbWorkItem *this,DbWorkItem *param_1)

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

// SharedDtor @ 14c147ec0

void __cdecl ds_config::DbWorkItem::SharedDtor(MessageLite *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>(&param_1->_internal_metadata_);
  }
  iVar1 = (int)param_1[2]._internal_metadata_.ptr_;
  if (iVar1 != 0) {
    switch(iVar1) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      puVar2 = (undefined8 *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
      if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if ((puVar2 == (undefined8 *)0x0) &&
         (puVar2 = (undefined8 *)param_1[2]._padding_, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)&param_1[2]._internal_metadata_.ptr_ = 0;
  }
  return;
}

// clear_Item @ 14c147f70

void __thiscall ds_config::DbWorkItem::clear_Item(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_contentsbase @ 14c148000

void __thiscall ds_config::DbWorkItem::clear_contentsbase(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_contentsfunction @ 14c148050

void __thiscall ds_config::DbWorkItem::clear_contentsfunction(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 6) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_dbagentserverlist @ 14c1480a0

void __thiscall ds_config::DbWorkItem::clear_dbagentserverlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 7) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_frontendserverlist @ 14c1480f0

void __thiscall ds_config::DbWorkItem::clear_frontendserverlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 4) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_gameserverlist @ 14c148140

void __thiscall ds_config::DbWorkItem::clear_gameserverlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_guildserverlist @ 14c148190

void __thiscall ds_config::DbWorkItem::clear_guildserverlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 9) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_node @ 14c1481e0

void __thiscall ds_config::DbWorkItem::clear_node(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 2) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_regionnode @ 14c148230

void __thiscall ds_config::DbWorkItem::clear_regionnode(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 10) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_regionserverlist @ 14c148280

void __thiscall ds_config::DbWorkItem::clear_regionserverlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 8) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_contentsbase @ 14c1482d0

void __thiscall
ds_config::DbWorkItem::set_allocated_contentsbase(DbWorkItem *this,SqlContentsBaseTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlContentsBaseTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlContentsBaseTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_contentsfunction @ 14c1483c0

void __thiscall
ds_config::DbWorkItem::set_allocated_contentsfunction
          (DbWorkItem *this,SqlContentsFunctionTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlContentsFunctionTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlContentsFunctionTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 6;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_dbagentserverlist @ 14c1484b0

void __thiscall
ds_config::DbWorkItem::set_allocated_dbagentserverlist
          (DbWorkItem *this,SqlDbAgentServerListTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlDbAgentServerListTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlDbAgentServerListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 7;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_frontendserverlist @ 14c1485a0

void __thiscall
ds_config::DbWorkItem::set_allocated_frontendserverlist
          (DbWorkItem *this,SqlFrontEndServerListTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlFrontEndServerListTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlFrontEndServerListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 4;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_gameserverlist @ 14c148690

void __thiscall
ds_config::DbWorkItem::set_allocated_gameserverlist
          (DbWorkItem *this,SqlGameServerListTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlGameServerListTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlGameServerListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_guildserverlist @ 14c148780

void __thiscall
ds_config::DbWorkItem::set_allocated_guildserverlist
          (DbWorkItem *this,SqlGuildServerListTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlGuildServerListTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlGuildServerListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 9;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_node @ 14c148870

void __thiscall ds_config::DbWorkItem::set_allocated_node(DbWorkItem *this,SqlNodeTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlNodeTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlNodeTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_regionnode @ 14c148960

void __thiscall
ds_config::DbWorkItem::set_allocated_regionnode(DbWorkItem *this,SqlRegionNodeTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlRegionNodeTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlRegionNodeTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 10;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// set_allocated_regionserverlist @ 14c148a50

void __thiscall
ds_config::DbWorkItem::set_allocated_regionserverlist
          (DbWorkItem *this,SqlRegionServerListTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) && (pMVar1 = (this->_impl_).Item_.node_, pMVar1 != (Message *)0x0))
    {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlRegionServerListTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlRegionServerListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 8;
    (this->_impl_).Item_.node_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbWorkItem_default_instance_'' @ 150441900

void __cdecl ds_config::_dynamic_atexit_destructor_for___DbWorkItem_default_instance___(void)

{
  return;
}

