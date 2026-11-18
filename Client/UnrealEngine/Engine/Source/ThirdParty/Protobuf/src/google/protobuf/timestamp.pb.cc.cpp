// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 82

// FUN_141455a20 @ 141455a20

void FUN_141455a20(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_google_2fprotobuf_2ftimestamp_2eproto);
  DAT_1553e4a3c = 0;
  return;
}

// MergeImpl @ 14f93dba0

/* private: static void __cdecl google::protobuf::Timestamp::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Timestamp::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14f93dbf0

/* public: virtual void __cdecl google::protobuf::Timestamp::Clear(void) __ptr64 */

void __thiscall google::protobuf::Timestamp::Clear(Timestamp *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).seconds_ = 0;
    (this->_impl_).nanos_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14f93dc20

/* public: virtual unsigned __int64 __cdecl google::protobuf::Timestamp::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::Timestamp::ByteSizeLong(Timestamp *this)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  int iVar5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var4 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar3 = (this->_impl_).seconds_, uVar3 != 0)) {
      uVar3 = uVar3 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar2;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar3);
      }
      _Var4 = (__uint64)(iVar5 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 2) != 0) && (iVar5 = (this->_impl_).nanos_, iVar5 != 0)) {
      uVar3 = (longlong)iVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar2;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar3);
      }
      _Var4 = _Var4 + (iVar5 * -9 + 0x2c0U >> 6);
    }
  }
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14f93dcc0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Timestamp::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Timestamp::_InternalSerialize
          (Timestamp *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).seconds_, lVar2 != 0)) {
    param_1 = internal::WireFormatLite::WriteInt64ToArrayWithField<1>(param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).nanos_, iVar1 != 0)) {
    param_1 = internal::WireFormatLite::WriteInt32ToArrayWithField<2>(param_2,iVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14f93dd50

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Timestamp::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Timestamp::GetClassData(Timestamp *this)

{
  return (ClassData *)&Timestamp_class_data_;
}

// PlacementNew_ @ 14f93dd70

/* protected: static void * __ptr64 __cdecl google::protobuf::Timestamp::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::Timestamp::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// Clear<google::protobuf::UnknownFieldSet> @ 14f93dda0

/* public: void __cdecl google::protobuf::internal::InternalMetadata::Clear<class
   google::protobuf::UnknownFieldSet>(void) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::Clear<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  uint uVar2;
  
  if ((this->ptr_ & 1) == 0) {
    return;
  }
  if ((this->ptr_ & 1) == 0) {
    this_00 = mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this);
  }
  else {
    this_00 = (UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// Delete<google::protobuf::UnknownFieldSet> @ 14f93ddb0

/* public: void __cdecl google::protobuf::internal::InternalMetadata::Delete<class
   google::protobuf::UnknownFieldSet>(void) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::Delete<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this)

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((this->ptr_ & 1) == 0) {
    return;
  }
  pvVar3 = (void *)(this->ptr_ & 0xfffffffffffffffe);
  if (pvVar3 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar3 + 8) >> 2) & 1) == 0) {
      uVar2 = *(uint *)((longlong)pvVar3 + 0x10);
    }
    else {
      uVar2 = (uint)*(undefined8 *)((longlong)pvVar3 + 8) & 3;
    }
    if (uVar2 != 0) {
      UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar3 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar3 + 8) >> 2) & 1) == 0) {
      plVar1 = (longlong *)((*(ulonglong *)((longlong)pvVar3 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar1 == 0) {
        ::operator_delete(plVar1,((longlong)*(int *)((longlong)pvVar3 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar3,0x18);
    this->ptr_ = 0;
    return;
  }
  this->ptr_ = 0;
  return;
}

// InternalDeallocate<1> @ 14f93ddc0

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::InternalDeallocate<1>(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::InternalDeallocate<1>
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8) - 0x10);
  if (*plVar1 == 0) {
    ::operator_delete(plVar1,((longlong)(this->soo_rep_).field0_0x0.long_rep.capacity + 1) * 0x10);
  }
  return;
}

// MergeFrom<google::protobuf::UnknownFieldSet> @ 14f93ddf0

/* public: void __cdecl google::protobuf::internal::InternalMetadata::MergeFrom<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::internal::InternalMetadata const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::MergeFrom<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this,InternalMetadata *param_1)

{
  if ((param_1->ptr_ & 1) != 0) {
    DoMergeFrom<google::protobuf::UnknownFieldSet>
              (this,(UnknownFieldSet *)((param_1->ptr_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// PtrValue<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_> @ 14f93de10

/* private: struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::PtrValue<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >(void)const __ptr64 */

Container<google::protobuf::UnknownFieldSet> * __thiscall
google::protobuf::internal::InternalMetadata::
PtrValue<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
          (InternalMetadata *this)

{
  return (Container<google::protobuf::UnknownFieldSet> *)(this->ptr_ & 0xfffffffffffffffe);
}

// UnsafeVarint<unsigned_int> @ 14f93de20

/* private: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::UnsafeVarint<unsigned int>(unsigned int,unsigned char
   * __ptr64) */

uchar * __cdecl
google::protobuf::io::EpsCopyOutputStream::UnsafeVarint<unsigned_int>(uint param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// UnsafeVarint<unsigned___int64> @ 14f93de60

/* private: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::UnsafeVarint<unsigned __int64>(unsigned
   __int64,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::io::EpsCopyOutputStream::UnsafeVarint<unsigned___int64>
          (__uint64 param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// _Adl_verify_range<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField_const*___ptr64> @ 14f93dea0

/* void __cdecl std::_Adl_verify_range<class google::protobuf::UnknownField const * __ptr64,class
   google::protobuf::UnknownField const * __ptr64>(class google::protobuf::UnknownField const *
   __ptr64 const & __ptr64,class google::protobuf::UnknownField const * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField_const*___ptr64>
          (UnknownField **param_1,UnknownField **param_2)

{
  return;
}

// _Get_unwrapped<google::protobuf::UnknownField_const*___ptr64&___ptr64> @ 14f93deb0

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::UnknownField const * __ptr64 &
   __ptr64>(class google::protobuf::UnknownField const * __ptr64 & __ptr64) */

UnknownField * __cdecl
std::_Get_unwrapped<google::protobuf::UnknownField_const*___ptr64&___ptr64>(UnknownField **param_1)

{
  return *param_1;
}

// for_each<google::protobuf::UnknownField_const*___ptr64,`private:_static_void___cdecl_google::protobuf::RepeatedField<google::protobuf::UnknownField>::Destroy(google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField_const*___ptr64)'::`5'::<lambda_1>_> @ 14f93dec0

/* class `private: static void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Destroy(class google::protobuf::UnknownField const *
   __ptr64,class google::protobuf::UnknownField const * __ptr64)'::`5'::<lambda_1> __cdecl
   std::for_each<class google::protobuf::UnknownField const * __ptr64,class `private: static void
   __cdecl google::protobuf::RepeatedField<class google::protobuf::UnknownField>::Destroy(class
   google::protobuf::UnknownField const * __ptr64,class google::protobuf::UnknownField const *
   __ptr64)'::`5'::<lambda_1> >(class google::protobuf::UnknownField const * __ptr64,class
   google::protobuf::UnknownField const * __ptr64,class `private: static void __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::Destroy(class
   google::protobuf::UnknownField const * __ptr64,class google::protobuf::UnknownField const *
   __ptr64)'::`5'::<lambda_1>) */

undefined8 __cdecl
std::
for_each<google::protobuf::UnknownField_const*___ptr64,_private:_static_void___cdecl_google::protobuf::RepeatedField<google::protobuf::UnknownField>::Destroy(google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField_const*___ptr64)_::_5_::<lambda_1>_>
          (undefined8 param_1)

{
  return param_1;
}

// memswap<12> @ 14f93ded0

/* void __cdecl google::protobuf::internal::memswap<12>(char * __ptr64,char * __ptr64) */

void __cdecl google::protobuf::internal::memswap<12>(char *param_1,char *param_2)

{
  __std_swap_ranges_trivially_swappable_noalias(param_1,param_1 + 0xc,param_2);
  return;
}

// unknown_fields<google::protobuf::UnknownFieldSet> @ 14f93def0

/* public: class google::protobuf::UnknownFieldSet const & __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::unknown_fields<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::UnknownFieldSet const & __ptr64
   (__cdecl*)(void))const __ptr64 */

UnknownFieldSet * __thiscall
google::protobuf::internal::InternalMetadata::unknown_fields<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this,_func_UnknownFieldSet_ptr *param_1)

{
  UnknownFieldSet *pUVar1;
  
  if ((this->ptr_ & 1) != 0) {
    return (UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f93df01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (*param_1)();
  return pUVar1;
}

// HasBits<1> @ 14f93df10

/* public: __cdecl google::protobuf::internal::HasBits<1>::HasBits<1>(void) __ptr64 */

HasBits<1> * __thiscall google::protobuf::internal::HasBits<1>::HasBits<1>(HasBits<1> *this)

{
  this->has_bits_[0] = 0;
  return this;
}

// CachedSize @ 14f93df20

/* public: __cdecl google::protobuf::internal::CachedSize::CachedSize(class
   google::protobuf::internal::CachedSize const & __ptr64) __ptr64 */

CachedSize * __thiscall
google::protobuf::internal::CachedSize::CachedSize(CachedSize *this,CachedSize *param_1)

{
  this->atom_ = param_1->atom_;
  return this;
}

// CachedSize @ 14f93df30

/* public: __cdecl google::protobuf::internal::CachedSize::CachedSize(int) __ptr64 */

CachedSize * __thiscall
google::protobuf::internal::CachedSize::CachedSize(CachedSize *this,int param_1)

{
  this->atom_ = (atomic<int>)param_1;
  return this;
}

// Impl_ @ 14f93df40

/* public: __cdecl google::protobuf::Timestamp::Impl_::Impl_(struct
   google::protobuf::Timestamp::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::Timestamp::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  (this->_has_bits_).has_bits_[0] = (param_1->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (param_1->_cached_size_).atom_;
  this->seconds_ = param_1->seconds_;
  this->nanos_ = param_1->nanos_;
  return this;
}

// Impl_ @ 14f93df70

/* public: __cdecl google::protobuf::Timestamp::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Timestamp::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  return this;
}

// InternalMetadata @ 14f93df80

/* public: __cdecl google::protobuf::internal::InternalMetadata::InternalMetadata(class
   google::protobuf::Arena * __ptr64) __ptr64 */

InternalMetadata * __thiscall
google::protobuf::internal::InternalMetadata::InternalMetadata
          (InternalMetadata *this,Arena *param_1)

{
  this->ptr_ = (long64)param_1;
  return this;
}

// InternalVisibility @ 14f93df90

/* private: __cdecl google::protobuf::internal::InternalVisibility::InternalVisibility(void) __ptr64
    */

InternalVisibility * __thiscall
google::protobuf::internal::InternalVisibility::InternalVisibility(InternalVisibility *this)

{
  return this;
}

// Message @ 14f93dfa0

/* protected: __cdecl google::protobuf::Message::Message(class google::protobuf::Arena * __ptr64)
   __ptr64 */

Message * __thiscall google::protobuf::Message::Message(Message *this,Arena *param_1)

{
  *(Arena **)&this->field_0x8 = param_1;
  *(undefined ***)this = vftable;
  return this;
}

// MessageLite @ 14f93dfc0

/* protected: __cdecl google::protobuf::MessageLite::MessageLite(class google::protobuf::Arena *
   __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::MessageLite::MessageLite(MessageLite *this,Arena *param_1)

{
  (this->_internal_metadata_).ptr_ = (long64)param_1;
  this->_padding_ = (longlong)vftable;
  return this;
}

// Timestamp @ 14f93dfe0

/* protected: __cdecl google::protobuf::Timestamp::Timestamp(class google::protobuf::Arena *
   __ptr64) __ptr64 */

Timestamp * __thiscall google::protobuf::Timestamp::Timestamp(Timestamp *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).seconds_ = 0;
  (this->_impl_).nanos_ = 0;
  return this;
}

// Timestamp @ 14f93e010

/* protected: __cdecl google::protobuf::Timestamp::Timestamp(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Timestamp const & __ptr64) __ptr64 */

Timestamp * __thiscall
google::protobuf::Timestamp::Timestamp(Timestamp *this,Arena *param_1,Timestamp *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).seconds_ = (param_2->_impl_).seconds_;
  (this->_impl_).nanos_ = (param_2->_impl_).nanos_;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~Message @ 14f93e070

/* public: virtual __cdecl google::protobuf::Message::~Message(void) __ptr64 */

void __thiscall google::protobuf::Message::~Message(Message *this)

{
  return;
}

// ~Timestamp @ 14f93e080

/* public: virtual __cdecl google::protobuf::Timestamp::~Timestamp(void) __ptr64 */

void __thiscall google::protobuf::Timestamp::~Timestamp(Timestamp *this)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ~TimestampDefaultTypeInternal @ 14f93e0b0

/* public: __cdecl
   google::protobuf::TimestampDefaultTypeInternal::~TimestampDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::TimestampDefaultTypeInternal::~TimestampDefaultTypeInternal
          (TimestampDefaultTypeInternal *this)

{
  return;
}

// ~UnknownFieldSet @ 14f93e0c0

/* public: __cdecl google::protobuf::UnknownFieldSet::~UnknownFieldSet(void) __ptr64 */

void __thiscall google::protobuf::UnknownFieldSet::~UnknownFieldSet(UnknownFieldSet *this)

{
  ulong64 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar4 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar4 = (uint)uVar1 & 3;
  }
  if (uVar4 != 0) {
    ClearFallback(this);
  }
  uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    plVar3 = (longlong *)((uVar2 & 0xfffffffffffffff8) - 0x10);
    if (*plVar3 == 0) {
      ::operator_delete(plVar3,((longlong)(this->fields_).soo_rep_.field0_0x0.long_rep.capacity + 1)
                               * 0x10);
    }
  }
  return;
}

// operator[] @ 14f93e130

/* public: unsigned int & __ptr64 __cdecl google::protobuf::internal::HasBits<1>::operator[](int)
   __ptr64 */

uint * __thiscall google::protobuf::internal::HasBits<1>::operator[](HasBits<1> *this,int param_1)

{
  return this[param_1].has_bits_;
}

// operator[] @ 14f93e140

/* public: unsigned int const & __ptr64 __cdecl
   google::protobuf::internal::HasBits<1>::operator[](int)const __ptr64 */

uint * __thiscall google::protobuf::internal::HasBits<1>::operator[](HasBits<1> *this,int param_1)

{
  return this[param_1].has_bits_;
}

// operator() @ 14f93e150

/* public: __cdecl `private: static void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Destroy(class google::protobuf::UnknownField const *
   __ptr64,class google::protobuf::UnknownField const * __ptr64)'::`5'::<lambda_1>::operator()(class
   google::protobuf::UnknownField const & __ptr64)const __ptr64 */

void __thiscall
`private:_static_void___cdecl_google::protobuf::RepeatedField<google::protobuf::UnknownField>::Destroy(google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField_const*___ptr64)'
::__l5::<lambda_1>::operator()(<lambda_1> *this,UnknownField *param_1)

{
  return;
}

// AnnotateSize @ 14f93e160

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::AnnotateSize(int,int)const __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::AnnotateSize
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1,int param_2)

{
  return;
}

// Capacity @ 14f93e170

/* private: int __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Capacity(bool)const __ptr64 */

int __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Capacity
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1)

{
  if (param_1) {
    return 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.capacity;
}

// Capacity @ 14f93e190

/* public: int __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Capacity(void)const __ptr64 */

int __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Capacity
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  if ((~(*(byte *)&(this->soo_rep_).field0_0x0 >> 2) & 1) != 0) {
    return 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.capacity;
}

// Clear @ 14f93e1b0

/* public: void __cdecl google::protobuf::internal::HasBits<1>::Clear(void) __ptr64 */

void __thiscall google::protobuf::internal::HasBits<1>::Clear(HasBits<1> *this)

{
  this->has_bits_[0] = 0;
  return;
}

// Clear @ 14f93e1c0

/* public: void __cdecl google::protobuf::UnknownFieldSet::Clear(void) __ptr64 */

void __thiscall google::protobuf::UnknownFieldSet::Clear(UnknownFieldSet *this)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  UnknownFieldSet *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar3 >> 2) & 1) == 0) {
    uVar7 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar7 = (uint)uVar3 & 3;
  }
  if (uVar7 == 0) {
    return;
  }
  uVar4 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  uVar5 = uVar4 & 0xfffffffffffffff8;
  bVar6 = ~((byte)uVar4 >> 2) & 1;
  if (bVar6 == 0) {
    uVar5 = *(ulonglong *)(uVar5 - 0x10);
  }
  piVar1 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  if (uVar5 == 0) {
    if (bVar6 == 0) {
      uVar7 = *piVar1;
    }
    else {
      uVar7 = (uint)uVar4 & 3;
    }
    lVar10 = (longlong)(int)uVar7;
    lVar9 = lVar10 << 4;
    do {
      lVar10 = lVar10 + -1;
      uVar4 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      piVar8 = piVar1;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        piVar8 = (int *)(uVar4 & 0xfffffffffffffff8);
      }
      iVar2 = *(int *)((longlong)piVar8 + lVar9 + -0xc);
      if (iVar2 == 3) {
        this_01 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   ((longlong)piVar8 + lVar9 + -8);
        if (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _scalar_deleting_destructor_(this_01,1);
        }
      }
      else if ((iVar2 == 4) &&
              (this_00 = *(UnknownFieldSet **)((longlong)piVar8 + lVar9 + -8),
              this_00 != (UnknownFieldSet *)0x0)) {
        Clear(this_00);
        RepeatedField<google::protobuf::UnknownField>::
        ~RepeatedField<google::protobuf::UnknownField>(&this_00->fields_);
        ::operator_delete(this_00,0x10);
      }
      lVar9 = lVar9 + -0x10;
    } while (0 < lVar10);
  }
  uVar4 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar4 >> 2) & 1) == 0) {
    *piVar1 = 0;
  }
  else {
    (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = uVar4 & 0xfffffffffffffff8;
  }
  return;
}

// CopyFrom @ 14f93e1f0

/* public: void __cdecl google::protobuf::Timestamp::CopyFrom(class google::protobuf::Timestamp
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Timestamp::CopyFrom(Timestamp *this,Timestamp *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (lVar3 = (param_1->_impl_).seconds_, lVar3 != 0)) {
        (this->_impl_).seconds_ = lVar3;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).nanos_, iVar2 != 0)) {
        (this->_impl_).nanos_ = iVar2;
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// Destroy @ 14f93e260

/* private: static void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Destroy(class google::protobuf::UnknownField const *
   __ptr64,class google::protobuf::UnknownField const * __ptr64) */

void __cdecl
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Destroy
          (UnknownField *param_1,UnknownField *param_2)

{
  return;
}

// EnsureSpace @ 14f93e270

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::EnsureSpace(unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::EnsureSpace(EpsCopyOutputStream *this,uchar *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uchar *puVar5;
  longlong lVar6;
  uchar *puVar7;
  int aiStackX_8 [2];
  uchar *apuStackX_18 [2];
  
  if (param_1 < this->end_) {
    return param_1;
  }
  cVar4 = this->had_error_;
  do {
    if (cVar4 != '\0') {
      return this->buffer_;
    }
    iVar1 = *(int *)&this->end_;
    if (this->stream_ == (ZeroCopyOutputStream *)0x0) {
LAB_14fa5fefb:
      this->had_error_ = true;
LAB_14fa5ff90:
      puVar5 = this->buffer_ + 0x10;
LAB_14fa5ff94:
      puVar7 = this->buffer_;
    }
    else {
      if (this->buffer_end_ == (uchar *)0x0) {
        puVar5 = this->end_;
        uVar2 = *(undefined8 *)puVar5;
        uVar3 = *(undefined8 *)(puVar5 + 8);
        this->buffer_end_ = puVar5;
        *(undefined8 *)this->buffer_ = uVar2;
        *(undefined8 *)(this->buffer_ + 8) = uVar3;
        goto LAB_14fa5ff90;
      }
      memcpy(this->buffer_end_,this->buffer_,(size_t)(this->end_ + (-0x10 - (longlong)this)));
      do {
        cVar4 = (**(code **)((longlong)*this->stream_ + 8))(this->stream_,apuStackX_18,aiStackX_8);
        puVar5 = apuStackX_18[0];
        if (cVar4 == '\0') goto LAB_14fa5fefb;
        lVar6 = (longlong)aiStackX_8[0];
      } while (aiStackX_8[0] == 0);
      puVar7 = this->end_;
      if (aiStackX_8[0] < 0x11) {
        memmove(this->buffer_,puVar7,0x10);
        this->buffer_end_ = puVar5;
        puVar5 = this->buffer_ + lVar6;
        goto LAB_14fa5ff94;
      }
      uVar2 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)apuStackX_18[0] = *(undefined8 *)puVar7;
      *(undefined8 *)(apuStackX_18[0] + 8) = uVar2;
      this->buffer_end_ = (uchar *)0x0;
      puVar5 = apuStackX_18[0] + (longlong)aiStackX_8[0] + -0x10;
      puVar7 = apuStackX_18[0];
    }
    param_1 = puVar7 + ((int)param_1 - iVar1);
    this->end_ = puVar5;
    if (param_1 < puVar5) {
      return param_1;
    }
    cVar4 = this->had_error_;
  } while( true );
}

// GetMetadata @ 14f93e290

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::Timestamp::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::Timestamp::GetMetadata(Timestamp *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Timestamp_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14f93e2d0

/* public: void __cdecl google::protobuf::internal::InternalMetadata::InternalSwap(class
   google::protobuf::internal::InternalMetadata * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::InternalSwap
          (InternalMetadata *this,InternalMetadata *param_1)

{
  long64 lVar1;
  
  lVar1 = this->ptr_;
  this->ptr_ = param_1->ptr_;
  param_1->ptr_ = lVar1;
  return;
}

// InternalSwap @ 14f93e2f0

/* private: void __cdecl google::protobuf::Timestamp::InternalSwap(class google::protobuf::Timestamp
   * __ptr64) __ptr64 */

void __thiscall google::protobuf::Timestamp::InternalSwap(Timestamp *this,Timestamp *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).seconds_,&(this->_impl_).field_0x14,&(param_1->_impl_).seconds_);
  return;
}

// MakeTag @ 14f93e330

/* public: static unsigned int __cdecl google::protobuf::internal::WireFormatLite::MakeTag(int,enum
   google::protobuf::internal::WireFormatLite::WireType) */

uint __cdecl google::protobuf::internal::WireFormatLite::MakeTag(int param_1,WireType param_2)

{
  return param_1 * 8 | param_2;
}

// MergeFrom @ 14f93e340

/* public: void __cdecl google::protobuf::Timestamp::MergeFrom(class google::protobuf::Timestamp
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Timestamp::MergeFrom(Timestamp *this,Timestamp *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = (param_1->_impl_).seconds_, lVar3 != 0)) {
      (this->_impl_).seconds_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).nanos_, iVar2 != 0)) {
      (this->_impl_).nanos_ = iVar2;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  if ((param_1->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// Prefetch5LinesFrom7Lines @ 14f93e390

/* void __cdecl google::protobuf::internal::Prefetch5LinesFrom7Lines(void const * __ptr64) */

void __cdecl google::protobuf::internal::Prefetch5LinesFrom7Lines(void *param_1)

{
  return;
}

// PrefetchToLocalCache @ 14f93e3a0

/* void __cdecl google::protobuf::internal::PrefetchToLocalCache(void const * __ptr64) */

void __cdecl google::protobuf::internal::PrefetchToLocalCache(void *param_1)

{
  return;
}

// SharedCtor @ 14f93e3b0

/* private: void __cdecl google::protobuf::Timestamp::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Timestamp::SharedCtor(Timestamp *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).seconds_ = 0;
  (this->_impl_).nanos_ = 0;
  return;
}

// SharedDtor @ 14f93e3d0

/* private: static void __cdecl google::protobuf::Timestamp::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Timestamp::SharedDtor(MessageLite *param_1)

{
  InternalMetadata *pIVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  pIVar1 = &param_1->_internal_metadata_;
  if ((pIVar1->ptr_ & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(pIVar1->ptr_ & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar2 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar2 == 0) {
        ::operator_delete(plVar2,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    pIVar1->ptr_ = 0;
    return;
  }
  pIVar1->ptr_ = 0;
  return;
}

// StaticValidityCheck @ 14f93e3f0

/* private: static void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::StaticValidityCheck(void) */

void __cdecl
google::protobuf::RepeatedField<google::protobuf::UnknownField>::StaticValidityCheck(void)

{
  return;
}

// TSanRead @ 14f93e400

/* void __cdecl google::protobuf::internal::TSanRead(void const * __ptr64) */

void __cdecl google::protobuf::internal::TSanRead(void *param_1)

{
  return;
}

// TSanWrite @ 14f93e410

/* void __cdecl google::protobuf::internal::TSanWrite(void const * __ptr64) */

void __cdecl google::protobuf::internal::TSanWrite(void *param_1)

{
  return;
}

// UnpoisonBuffer @ 14f93e420

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::UnpoisonBuffer(void)const __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::UnpoisonBuffer
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  return;
}

// VarintSize32SignExtendedPlusOne @ 14f93e430

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize32SignExtendedPlusOne(int) */

__uint64 __cdecl
google::protobuf::io::CodedOutputStream::VarintSize32SignExtendedPlusOne(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x2c0U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x2c0U >> 6);
}

// VarintSize64PlusOne @ 14f93e480

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize64PlusOne(unsigned __int64) */

__uint64 __cdecl google::protobuf::io::CodedOutputStream::VarintSize64PlusOne(__uint64 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x2c0U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x2c0U >> 6);
}

// WriteTagToArray @ 14f93e4d0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteTagToArray(unsigned int,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteTagToArray(uint param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// WriteTagToArray @ 14f93e510

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::WriteTagToArray(int,enum
   google::protobuf::internal::WireFormatLite::WireType,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteTagToArray
          (int param_1,WireType param_2,uchar *param_3)

{
  WireType WVar1;
  
  for (WVar1 = param_1 * 8 | param_2; 0x7f < WVar1; WVar1 = WVar1 >> 7) {
    *param_3 = (byte)WVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)WVar1;
  return param_3 + 1;
}

// WriteVarint32SignExtendedToArray @ 14f93e550

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteVarint32SignExtendedToArray(int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteVarint32SignExtendedToArray
          (int param_1,uchar *param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = (ulonglong)param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}

// WriteVarint32ToArray @ 14f93e590

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(unsigned int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(uint param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// WriteVarint64ToArray @ 14f93e5d0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(unsigned __int64,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(__uint64 param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// _internal_nanos @ 14f93e610

/* private: int __cdecl google::protobuf::Timestamp::_internal_nanos(void)const __ptr64 */

int __thiscall google::protobuf::Timestamp::_internal_nanos(Timestamp *this)

{
  return (this->_impl_).nanos_;
}

// _internal_seconds @ 14f93e620

/* private: __int64 __cdecl google::protobuf::Timestamp::_internal_seconds(void)const __ptr64 */

__int64 __thiscall google::protobuf::Timestamp::_internal_seconds(Timestamp *this)

{
  return (this->_impl_).seconds_;
}

// base @ 14f93e630

/* public: struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::internal::ClassDataFull::base(void)const __ptr64 */

ClassData * __thiscall google::protobuf::internal::ClassDataFull::base(ClassDataFull *this)

{
  return (ClassData *)this;
}

// elements @ 14f93e640

/* public: char * __ptr64 __cdecl google::protobuf::internal::LongSooRep::elements(void)const
   __ptr64 */

char * __thiscall google::protobuf::internal::LongSooRep::elements(LongSooRep *this)

{
  return (char *)(this->elements_int & 0xfffffffffffffff8);
}

// empty @ 14f93e650

/* public: bool __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::empty
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// heap_rep @ 14f93e680

/* private: struct google::protobuf::internal::HeapRep<16> * __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::heap_rep(void)const
   __ptr64 */

HeapRep<16> * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::heap_rep
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  return (HeapRep<16> *)
         (((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8) - 0x10);
}

// internal_visibility @ 14f93e6a0

/* protected: static class google::protobuf::internal::InternalVisibility __cdecl
   google::protobuf::MessageLite::internal_visibility(void) */

InternalVisibility __cdecl google::protobuf::MessageLite::internal_visibility(void)

{
  InternalVisibility in_CL;
  
  return in_CL;
}

// is_soo @ 14f93e6b0

/* private: bool __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::is_soo(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::is_soo
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  return (bool)(~(*(byte *)&(this->soo_rep_).field0_0x0 >> 2) & 1);
}

// is_soo @ 14f93e6d0

/* public: bool __cdecl google::protobuf::internal::ShortSooRep::is_soo(void)const __ptr64 */

bool __thiscall google::protobuf::internal::ShortSooRep::is_soo(ShortSooRep *this)

{
  return (bool)(~((byte)this->arena_and_size >> 2) & 1);
}

// is_soo @ 14f93e6f0

/* public: bool __cdecl google::protobuf::internal::SooRep::is_soo(void)const __ptr64 */

bool __thiscall google::protobuf::internal::SooRep::is_soo(SooRep *this)

{
  return (bool)(~(*(byte *)&this->field0_0x0 >> 2) & 1);
}

// size @ 14f93e710

/* private: int __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::size(bool)const __ptr64 */

int __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::size
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1)

{
  if (param_1) {
    return *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size;
}

// size @ 14f93e730

/* public: int __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::size(void)const __ptr64 */

int __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::size
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulong64 uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uint)uVar1 & 3;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size;
}

// size @ 14f93e750

/* public: int __cdecl google::protobuf::internal::ShortSooRep::size(void)const __ptr64 */

int __thiscall google::protobuf::internal::ShortSooRep::size(ShortSooRep *this)

{
  return (uint)this->arena_and_size & 3;
}

// size @ 14f93e760

/* public: int __cdecl google::protobuf::internal::SooRep::size(bool)const __ptr64 */

int __thiscall google::protobuf::internal::SooRep::size(SooRep *this,bool param_1)

{
  if (param_1) {
    return *(uint *)&this->field0_0x0 & 3;
  }
  return (this->field0_0x0).long_rep.size;
}

// unsafe_elements @ 14f93e780

/* private: class google::protobuf::UnknownField * __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::unsafe_elements(bool)
   __ptr64 */

UnknownField * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::unsafe_elements
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1)

{
  if (param_1) {
    return (UnknownField *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  }
  return (UnknownField *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
}

// unsafe_elements @ 14f93e7a0

/* private: class google::protobuf::UnknownField const * __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::unsafe_elements(bool)const
   __ptr64 */

UnknownField * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::unsafe_elements
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1)

{
  if (param_1) {
    return (UnknownField *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  }
  return (UnknownField *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
}

// FUN_1504743a0 @ 1504743a0

void FUN_1504743a0(void)

{
  return;
}

