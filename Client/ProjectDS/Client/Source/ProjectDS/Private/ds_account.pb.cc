// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// `dynamic_initializer_for_'_DbWorkItem_default_instance_'' @ 141292010

void __cdecl ds_account::_dynamic_initializer_for___DbWorkItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbWorkItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141292030

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5faccount_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// GetClassData @ 14c146bc0

ClassData * __thiscall ds_account::DbWorkItem::GetClassData(DbWorkItem *this)

{
  return (ClassData *)&DbWorkItem_class_data_;
}

// PlacementNew_ @ 14c146be0

void * __cdecl ds_account::DbWorkItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbWorkItem_ds_account__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c146c10

void * __thiscall
ds_account::DbWorkItem::_scalar_deleting_destructor_(DbWorkItem *this,uint param_1)

{
  ~DbWorkItem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c146c50

void __cdecl ds_account::DbWorkItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
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
    if (iVar2 == 5) {
      if (iVar3 == 5) {
        SqlGAccountTable::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
      else {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGAccountTable>
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
    }
    else if (iVar2 == 6) {
      if (iVar3 == 6) {
        SqlGNicknameTable::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
      else {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGNicknameTable>
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
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

// Clear @ 14c146d50

void __thiscall ds_account::DbWorkItem::Clear(DbWorkItem *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  SqlGAccountTable *this_00;
  
  (this->_impl_).dirty_flag_ = 0;
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 == (SqlGAccountTable *)0x0))
    goto LAB_14c146dd6;
    SqlGAccountTable::~SqlGAccountTable(this_00);
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 6) goto LAB_14c146dd6;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (SqlGAccountTable *)(this->_impl_).Item_.gnickname_,
       this_00 == (SqlGAccountTable *)0x0)) goto LAB_14c146dd6;
    SqlGNicknameTable::~SqlGNicknameTable((SqlGNicknameTable *)this_00);
    uVar3 = 0x30;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c146dd6:
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c146e10

ulong64 __thiscall ds_account::DbWorkItem::ByteSizeLong(DbWorkItem *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  uint uVar4;
  int iVar5;
  __uint64 _Var6;
  
  _Var6 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar5 = (this->_impl_).dirty_flag_, iVar5 != 0)) {
    uVar2 = (longlong)iVar5 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 0x3f - (int)lVar1;
    }
    else {
      iVar5 = (int)LZCOUNT(uVar2);
    }
    _Var6 = (ulonglong)(iVar5 * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = (this->_impl_)._oneof_case_[0];
  if (uVar4 == 5) {
    uVar3 = SqlGAccountTable::ByteSizeLong((this->_impl_).Item_.gaccount_);
  }
  else {
    if (uVar4 != 6) goto LAB_14c146eb8;
    uVar3 = SqlGNicknameTable::ByteSizeLong((this->_impl_).Item_.gnickname_);
  }
  uVar4 = (uint)uVar3 | 1;
  if (__isa_available < 5) {
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  else {
    iVar5 = LZCOUNT(uVar4);
  }
  _Var6 = _Var6 + 1 + (iVar5 * -9 + 0x160U >> 6) + uVar3;
LAB_14c146eb8:
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c146ee0

uchar * __thiscall
ds_account::DbWorkItem::_InternalSerialize
          (DbWorkItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uchar *puVar4;
  byte bVar5;
  int iVar6;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar3 = (ulonglong)(this->_impl_).dirty_flag_;
    *param_1 = 8;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar5 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *pbVar2 = bVar5 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar5;
    param_1 = param_1 + 2;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    iVar6 = 5;
  }
  else {
    if (uVar1 != 6) goto LAB_14c146f72;
    iVar6 = 6;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar6,(MessageLite *)(this->_impl_).Item_.gaccount_,
                       (int)(((this->_impl_).Item_.gaccount_)->_impl_)._cached_size_.atom_,param_1,
                       param_2);
LAB_14c146f72:
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// CopyConstruct<ds_account::SqlGAccountTable> @ 14c146fb0

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_account::SqlGAccountTable>(Arena *param_1,void *param_2)

{
  SqlGAccountTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x40);
  }
  else {
    pSVar1 = Allocate(param_1,0x40);
  }
  pSVar1 = ds_account::SqlGAccountTable::SqlGAccountTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// CopyConstruct<ds_account::SqlGNicknameTable> @ 14c147000

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_account::SqlGNicknameTable>(Arena *param_1,void *param_2)

{
  SqlGNicknameTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x30);
  }
  else {
    pSVar1 = Allocate(param_1,0x30);
  }
  pSVar1 = ds_account::SqlGNicknameTable::SqlGNicknameTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// GetOwnedMessage<ds_account::SqlGAccountTable> @ 14c147050

SqlGAccountTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_account::SqlGAccountTable>
          (Arena *param_1,SqlGAccountTable *param_2,Arena *param_3)

{
  SqlGAccountTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlGAccountTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlGAccountTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_account::SqlGNicknameTable> @ 14c147060

SqlGNicknameTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_account::SqlGNicknameTable>
          (Arena *param_1,SqlGNicknameTable *param_2,Arena *param_3)

{
  SqlGNicknameTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlGNicknameTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlGNicknameTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbWorkItem @ 14c147070

DbWorkItem * __thiscall ds_account::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_account__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// DbWorkItem @ 14c1470a0

DbWorkItem * __thiscall
ds_account::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1,DbWorkItem *param_2)

{
  uint uVar1;
  SqlGAccountTable *pSVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_account__6B_;
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
  if (uVar1 == 5) {
    pSVar2 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGAccountTable>
                       (param_1,(param_2->_impl_).Item_.gaccount_);
  }
  else {
    if (uVar1 != 6) {
      return this;
    }
    pSVar2 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGNicknameTable>
                       (param_1,(param_2->_impl_).Item_.gaccount_);
  }
  (this->_impl_).Item_.gaccount_ = pSVar2;
  return this;
}

// ~DbWorkItem @ 14c147140

void __thiscall ds_account::DbWorkItem::~DbWorkItem(DbWorkItem *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  SqlGAccountTable *this_00;
  
  this->_padding_ = (longlong)&___7DbWorkItem_ds_account__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 == (SqlGAccountTable *)0x0))
    goto LAB_14c1471d8;
    SqlGAccountTable::~SqlGAccountTable(this_00);
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 6) goto LAB_14c1471d8;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (SqlGAccountTable *)(this->_impl_).Item_.gnickname_,
       this_00 == (SqlGAccountTable *)0x0)) goto LAB_14c1471d8;
    SqlGNicknameTable::~SqlGNicknameTable((SqlGNicknameTable *)this_00);
    uVar3 = 0x30;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c1471d8:
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// `scalar_deleting_destructor' @ 14c1471f0

void * __thiscall
ds_account::SqlGAccountTable::_scalar_deleting_destructor_(SqlGAccountTable *this,uint param_1)

{
  ~SqlGAccountTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c147230

void * __thiscall
ds_account::SqlGNicknameTable::_scalar_deleting_destructor_(SqlGNicknameTable *this,uint param_1)

{
  ~SqlGNicknameTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyFrom @ 14c147270

void __thiscall ds_account::DbWorkItem::CopyFrom(DbWorkItem *this,DbWorkItem *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  SqlGAccountTable *pSVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
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
      if (uVar1 == 5) {
        pSVar4 = (param_1->_impl_).Item_.gaccount_;
        if (uVar3 == 5) {
          SqlGAccountTable::MergeImpl
                    ((MessageLite *)(this->_impl_).Item_.gaccount_,(MessageLite *)pSVar4);
        }
        else {
          pSVar4 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGAccountTable>
                             (pAVar5,pSVar4);
          (this->_impl_).Item_.gaccount_ = pSVar4;
        }
      }
      else if (uVar1 == 6) {
        pSVar4 = (param_1->_impl_).Item_.gaccount_;
        if (uVar3 == 6) {
          SqlGNicknameTable::MergeImpl
                    ((MessageLite *)(this->_impl_).Item_.gaccount_,(MessageLite *)pSVar4);
        }
        else {
          pSVar4 = google::protobuf::Arena::CopyConstruct<ds_account::SqlGNicknameTable>
                             (pAVar5,pSVar4);
          (this->_impl_).Item_.gaccount_ = pSVar4;
        }
      }
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// GetMetadata @ 14c147370

Metadata * __thiscall
ds_account::DbWorkItem::GetMetadata(DbWorkItem *this,Metadata *__return_storage_ptr__)

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

// InternalSwap @ 14c1473b0

void __thiscall ds_account::DbWorkItem::InternalSwap(DbWorkItem *this,DbWorkItem *param_1)

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

// clear_Item @ 14c147410

void __thiscall ds_account::DbWorkItem::clear_Item(DbWorkItem *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  SqlGAccountTable *this_00;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 == (SqlGAccountTable *)0x0))
    goto LAB_14c14748b;
    SqlGAccountTable::~SqlGAccountTable(this_00);
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 6) goto LAB_14c14748b;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (SqlGAccountTable *)(this->_impl_).Item_.gnickname_,
       this_00 == (SqlGAccountTable *)0x0)) goto LAB_14c14748b;
    SqlGNicknameTable::~SqlGNicknameTable((SqlGNicknameTable *)this_00);
    uVar3 = 0x30;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c14748b:
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_gaccount @ 14c1474b0

void __thiscall ds_account::DbWorkItem::clear_gaccount(DbWorkItem *this)

{
  SqlGAccountTable *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 5) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 != (SqlGAccountTable *)0x0)) {
      SqlGAccountTable::~SqlGAccountTable(this_00);
      ::operator_delete(this_00,0x40);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_gnickname @ 14c147510

void __thiscall ds_account::DbWorkItem::clear_gnickname(DbWorkItem *this)

{
  SqlGNicknameTable *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 6) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).Item_.gnickname_, this_00 != (SqlGNicknameTable *)0x0)) {
      SqlGNicknameTable::~SqlGNicknameTable(this_00);
      ::operator_delete(this_00,0x30);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_gaccount @ 14c147570

void __thiscall
ds_account::DbWorkItem::set_allocated_gaccount(DbWorkItem *this,SqlGAccountTable *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong64 uVar3;
  Arena *pAVar4;
  SqlGAccountTable *this_00;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar2 = (byte)this->_padding_ & 1;
  pAVar4 = pAVar5;
  if (bVar2 != 0) {
    pAVar4 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    if (bVar2 != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if ((pAVar5 != (Arena *)0x0) ||
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 == (SqlGAccountTable *)0x0))
    goto LAB_14c1475fe;
    SqlGAccountTable::~SqlGAccountTable(this_00);
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 6) goto LAB_14c1475fe;
    if (bVar2 != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if ((pAVar5 != (Arena *)0x0) ||
       (this_00 = (SqlGAccountTable *)(this->_impl_).Item_.gnickname_,
       this_00 == (SqlGAccountTable *)0x0)) goto LAB_14c1475fe;
    SqlGNicknameTable::~SqlGNicknameTable((SqlGNicknameTable *)this_00);
    uVar3 = 0x30;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c1475fe:
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlGAccountTable *)0x0) {
    pAVar5 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if (pAVar4 != pAVar5) {
      param_1 = (SqlGAccountTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar4,(MessageLite *)param_1,pAVar5);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).Item_.gaccount_ = param_1;
  }
  return;
}

// set_allocated_gnickname @ 14c147660

void __thiscall
ds_account::DbWorkItem::set_allocated_gnickname(DbWorkItem *this,SqlGNicknameTable *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong64 uVar3;
  Arena *pAVar4;
  SqlGAccountTable *this_00;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar2 = (byte)this->_padding_ & 1;
  pAVar4 = pAVar5;
  if (bVar2 != 0) {
    pAVar4 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    if (bVar2 != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if ((pAVar5 != (Arena *)0x0) ||
       (this_00 = (this->_impl_).Item_.gaccount_, this_00 == (SqlGAccountTable *)0x0))
    goto LAB_14c1476ee;
    SqlGAccountTable::~SqlGAccountTable(this_00);
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 6) goto LAB_14c1476ee;
    if (bVar2 != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if ((pAVar5 != (Arena *)0x0) ||
       (this_00 = (SqlGAccountTable *)(this->_impl_).Item_.gnickname_,
       this_00 == (SqlGAccountTable *)0x0)) goto LAB_14c1476ee;
    SqlGNicknameTable::~SqlGNicknameTable((SqlGNicknameTable *)this_00);
    uVar3 = 0x30;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c1476ee:
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlGNicknameTable *)0x0) {
    pAVar5 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    if (pAVar4 != pAVar5) {
      param_1 = (SqlGNicknameTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar4,(MessageLite *)param_1,pAVar5);
    }
    (this->_impl_)._oneof_case_[0] = 6;
    (this->_impl_).Item_.gnickname_ = param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbWorkItem_default_instance_'' @ 1504418f0

void __cdecl ds_account::_dynamic_atexit_destructor_for___DbWorkItem_default_instance___(void)

{
  return;
}

