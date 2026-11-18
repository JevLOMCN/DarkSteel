// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// `dynamic_initializer_for_'_DbWorkItem_default_instance_'' @ 141292150

void __cdecl ds_mail::_dynamic_initializer_for___DbWorkItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbWorkItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141292170

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fmail_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c14d110

void __cdecl ds_mail::DbWorkItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
    if (iVar2 == 1) {
      if (iVar3 == 1) {
        SqlMailTable::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
      else {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>
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

// Clear @ 14c14d1e0

void __thiscall ds_mail::DbWorkItem::Clear(DbWorkItem *this)

{
  SqlMailTable *this_00;
  undefined8 *puVar1;
  
  (this->_impl_).dirty_flag_ = 0;
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).Item_.mail_, this_00 != (SqlMailTable *)0x0)) {
      SqlMailTable::~SqlMailTable(this_00);
      ::operator_delete(this_00,0x70);
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

// ByteSizeLong @ 14c14d270

ulong64 __thiscall ds_mail::DbWorkItem::ByteSizeLong(DbWorkItem *this)

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
    _Var6 = (ulonglong)(iVar5 * -9 + 0x280U >> 6) + 2;
  }
  if ((this->_impl_)._oneof_case_[0] == 1) {
    uVar3 = SqlMailTable::ByteSizeLong((this->_impl_).Item_.mail_);
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
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c14d330

uchar * __thiscall
ds_mail::DbWorkItem::_InternalSerialize
          (DbWorkItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).Item_.mail_,
                         (int)(((this->_impl_).Item_.mail_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).dirty_flag_;
    uVar3 = 8000;
    do {
      pbVar4 = param_1;
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 >> 7;
      *pbVar4 = bVar2 | 0x80;
      param_1 = pbVar4 + 1;
    } while (0x7f < uVar3);
    pbVar4[1] = (byte)uVar3;
    pbVar4 = pbVar4 + 2;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar4 = (byte)uVar5 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = (byte)uVar5;
    param_1 = pbVar4 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c14d420

ClassData * __thiscall ds_mail::DbWorkItem::GetClassData(DbWorkItem *this)

{
  return (ClassData *)&DbWorkItem_class_data_;
}

// PlacementNew_ @ 14c14d440

void * __cdecl ds_mail::DbWorkItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbWorkItem_ds_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c14d470

void * __thiscall ds_mail::DbWorkItem::_scalar_deleting_destructor_(DbWorkItem *this,uint param_1)

{
  ~DbWorkItem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyConstruct<ds_mail::SqlMailTable> @ 14c14d4b0

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>(Arena *param_1,void *param_2)

{
  SqlMailTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x70);
  }
  else {
    pSVar1 = Allocate(param_1,0x70);
  }
  pSVar1 = ds_mail::SqlMailTable::SqlMailTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// GetOwnedMessage<ds_mail::SqlMailTable> @ 14c14d500

SqlMailTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_mail::SqlMailTable>
          (Arena *param_1,SqlMailTable *param_2,Arena *param_3)

{
  SqlMailTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMailTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMailTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbWorkItem @ 14c14d510

DbWorkItem * __thiscall ds_mail::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// DbWorkItem @ 14c14d540

DbWorkItem * __thiscall
ds_mail::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1,DbWorkItem *param_2)

{
  SqlMailTable *pSVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_).dirty_flag_ = (param_2->_impl_).dirty_flag_;
  if ((this->_impl_)._oneof_case_[0] == 1) {
    pSVar1 = google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>
                       (param_1,(param_2->_impl_).Item_.mail_);
    (this->_impl_).Item_.mail_ = pSVar1;
  }
  return this;
}

// ~DbWorkItem @ 14c14d5d0

void __thiscall ds_mail::DbWorkItem::~DbWorkItem(DbWorkItem *this)

{
  uint uVar1;
  SqlMailTable *this_00;
  undefined8 *puVar2;
  
  this->_padding_ = (longlong)&___7DbWorkItem_ds_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if ((puVar2 == (undefined8 *)0x0) &&
         (this_00 = (this->_impl_).Item_.mail_, this_00 != (SqlMailTable *)0x0)) {
        SqlMailTable::~SqlMailTable(this_00);
        ::operator_delete(this_00,0x70);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c14d650

void * __thiscall
ds_mail::SqlMailTable::_scalar_deleting_destructor_(SqlMailTable *this,uint param_1)

{
  ~SqlMailTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// CopyFrom @ 14c14d690

void __thiscall ds_mail::DbWorkItem::CopyFrom(DbWorkItem *this,DbWorkItem *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  SqlMailTable *pSVar4;
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
      if (uVar1 == 1) {
        pSVar4 = (param_1->_impl_).Item_.mail_;
        if (uVar3 == 1) {
          SqlMailTable::MergeImpl((MessageLite *)(this->_impl_).Item_.mail_,(MessageLite *)pSVar4);
        }
        else {
          pSVar4 = google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>(pAVar5,pSVar4);
          (this->_impl_).Item_.mail_ = pSVar4;
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

// GetMetadata @ 14c14d770

Metadata * __thiscall
ds_mail::DbWorkItem::GetMetadata(DbWorkItem *this,Metadata *__return_storage_ptr__)

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

// InternalSwap @ 14c14d7b0

void __thiscall ds_mail::DbWorkItem::InternalSwap(DbWorkItem *this,DbWorkItem *param_1)

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

// clear_Item @ 14c14d810

void __thiscall ds_mail::DbWorkItem::clear_Item(DbWorkItem *this)

{
  SqlMailTable *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if (puVar1 == (undefined8 *)0x0) {
      this_00 = (this->_impl_).Item_.mail_;
      if (this_00 != (SqlMailTable *)0x0) {
        SqlMailTable::~SqlMailTable(this_00);
        ::operator_delete(this_00,0x70);
        (this->_impl_)._oneof_case_[0] = 0;
        return;
      }
      (this->_impl_)._oneof_case_[0] = 0;
      return;
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_mail @ 14c14d890

void __thiscall ds_mail::DbWorkItem::clear_mail(DbWorkItem *this)

{
  SqlMailTable *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).Item_.mail_, this_00 != (SqlMailTable *)0x0)) {
      SqlMailTable::~SqlMailTable(this_00);
      ::operator_delete(this_00,0x70);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_mail @ 14c14d8f0

void __thiscall ds_mail::DbWorkItem::set_allocated_mail(DbWorkItem *this,SqlMailTable *param_1)

{
  SqlMailTable *this_00;
  byte bVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar1 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar1 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  if ((this->_impl_)._oneof_case_[0] == 1) {
    if (bVar1 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (this_00 = (this->_impl_).Item_.mail_, this_00 != (SqlMailTable *)0x0)) {
      SqlMailTable::~SqlMailTable(this_00);
      ::operator_delete(this_00,0x70);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlMailTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlMailTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).Item_.mail_ = param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbWorkItem_default_instance_'' @ 150441930

void __cdecl ds_mail::_dynamic_atexit_destructor_for___DbWorkItem_default_instance___(void)

{
  return;
}

