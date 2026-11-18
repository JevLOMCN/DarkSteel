// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_GuildInfo_default_instance_'' @ 141299760

void __cdecl ds_proto::_dynamic_initializer_for___GuildInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GuildInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299780

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fguild_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22b300

void __cdecl ds_proto::GuildInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  int iVar1;
  int iVar2;
  GlobalEmptyString *pGVar3;
  Arena *pAVar4;
  bool bVar5;
  
  this = &param_1->_internal_metadata_;
  pAVar4 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 == 0) goto switchD_14c22b37d_default;
  iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
  if (iVar2 != iVar1) {
    if ((iVar2 != 0) && ((iVar2 == 1 || (iVar2 == 4)))) {
      google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 1));
    }
    *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar5 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 1;
    goto LAB_14c22b3ad;
  case 2:
  case 3:
  case 6:
    *(int *)&param_1[1]._padding_ = (int)param_2[1]._padding_;
    break;
  case 4:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar5 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 4;
LAB_14c22b3ad:
    pGVar3 = &google::protobuf::internal::fixed_address_empty_string;
    if (bVar5) {
      pGVar3 = (GlobalEmptyString *)(param_2[1]._padding_ & 0xfffffffffffffffc);
    }
    google::protobuf::internal::ArenaStringPtr::Set<>
              ((ArenaStringPtr *)(param_1 + 1),&pGVar3->value_,pAVar4);
    break;
  case 5:
    *(char *)&param_1[1]._padding_ = (char)param_2[1]._padding_;
  }
switchD_14c22b37d_default:
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c22b430

void __thiscall ds_proto::GuildInfo::Clear(GuildInfo *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if ((uVar1 == 1) || (uVar1 == 4)) {
    google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22b480

ulong64 __thiscall ds_proto::GuildInfo::ByteSizeLong(GuildInfo *this)

{
  ulong64 uVar1;
  __uint64 _Var2;
  
  _Var2 = 0;
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 4:
    uVar1 = google::protobuf::internal::WireFormatLite::StringSize
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       ((ulonglong)(this->_impl_).Item_ & 0xfffffffffffffffc));
    _Var2 = uVar1 + 1;
    break;
  case 2:
  case 3:
  case 6:
    _Var2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne
                      ((this->_impl_).Item_.title_);
    break;
  case 5:
    _Var2 = 2;
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c22b510

uchar * __thiscall
ds_proto::GuildInfo::_InternalSerialize(GuildInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  uchar *puVar3;
  char *pcVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    pcVar5 = (char *)((ulonglong)(this->_impl_).Item_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    pcVar4 = pcVar5;
    if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
      pcVar4 = *(char **)pcVar5;
    }
    local_18._Mydata = "ds_proto.GuildInfo.guild_name";
    local_18._Mysize = 0x1d;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar4,(int)*puVar1,SERIALIZE,&local_18);
    if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
      pcVar5 = *(char **)pcVar5;
    }
    local_18._Mysize = *puVar1;
    local_18._Mydata = pcVar5;
    param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                        (param_2,1,&local_18,param_1);
    break;
  case 2:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,(this->_impl_).Item_.title_,param_1);
    break;
  case 3:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,(this->_impl_).Item_.title_,param_1);
    break;
  case 4:
    pcVar5 = (char *)((ulonglong)(this->_impl_).Item_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    pcVar4 = pcVar5;
    if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
      pcVar4 = *(char **)pcVar5;
    }
    local_18._Mydata = "ds_proto.GuildInfo.desc";
    local_18._Mysize = 0x17;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar4,(int)*puVar1,SERIALIZE,&local_18);
    if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
      pcVar5 = *(char **)pcVar5;
    }
    local_18._Mysize = *puVar1;
    local_18._Mydata = pcVar5;
    param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                        (param_2,4,&local_18,param_1);
    break;
  case 5:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 5) {
      bVar2 = (this->_impl_).Item_.auto_accept_;
      *param_1 = '(';
      param_1[1] = bVar2 != false;
      param_1 = param_1 + 2;
    }
    else {
      *param_1 = '(';
      param_1[1] = '\0';
      param_1 = param_1 + 2;
    }
    break;
  case 6:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,(this->_impl_).Item_.title_,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c22b720

ClassData * __thiscall ds_proto::GuildInfo::GetClassData(GuildInfo *this)

{
  return (ClassData *)&GuildInfo_class_data_;
}

// PlacementNew_ @ 14c22b740

void * __cdecl ds_proto::GuildInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GuildInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22b760

void * __thiscall ds_proto::GuildInfo::_scalar_deleting_destructor_(GuildInfo *this,uint param_1)

{
  uint uVar1;
  
  this->_padding_ = (longlong)&___7GuildInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if ((uVar1 == 1) || (uVar1 == 4)) {
      google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// GuildInfo @ 14c22b7d0

GuildInfo * __thiscall ds_proto::GuildInfo::GuildInfo(GuildInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GuildInfo_ds_proto__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// GuildInfo @ 14c22b7f0

GuildInfo * __thiscall
ds_proto::GuildInfo::GuildInfo(GuildInfo *this,Arena *param_1,GuildInfo *param_2)

{
  uint uVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GuildInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  switch(uVar1) {
  case 1:
  case 4:
    google::protobuf::internal::ArenaStringPtr::ArenaStringPtr
              ((ArenaStringPtr *)&this->_impl_,param_1,(ArenaStringPtr *)&param_2->_impl_);
    return this;
  case 2:
  case 3:
  case 6:
    (this->_impl_).Item_.title_ = (param_2->_impl_).Item_.title_;
    break;
  case 5:
    (this->_impl_).Item_._constinit_ = (param_2->_impl_).Item_._constinit_;
    return this;
  }
  return this;
}

// ~GuildInfo @ 14c22b8e0

void __thiscall ds_proto::GuildInfo::~GuildInfo(GuildInfo *this)

{
  uint uVar1;
  
  this->_padding_ = (longlong)&___7GuildInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if ((uVar1 == 1) || (uVar1 == 4)) {
      google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// CopyFrom @ 14c22b930

void __thiscall ds_proto::GuildInfo::CopyFrom(GuildInfo *this,GuildInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  GlobalEmptyString *pGVar3;
  Arena *pAVar4;
  bool bVar5;
  
  if (param_1 == this) {
    return;
  }
  Clear(this);
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 0) goto switchD_14c22b9b6_default;
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (uVar2 != uVar1) {
    if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
      google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
    }
    (this->_impl_)._oneof_case_[0] = uVar1;
  }
  switch(uVar1) {
  case 1:
    if (uVar2 != uVar1) {
      (this->_impl_).Item_ = (ItemUnion)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar5 = (param_1->_impl_)._oneof_case_[0] == 1;
    goto LAB_14c22b9e6;
  case 2:
  case 3:
  case 6:
    (this->_impl_).Item_.title_ = (param_1->_impl_).Item_.title_;
    break;
  case 4:
    if (uVar2 != uVar1) {
      (this->_impl_).Item_ = (ItemUnion)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar5 = (param_1->_impl_)._oneof_case_[0] == 4;
LAB_14c22b9e6:
    pGVar3 = &google::protobuf::internal::fixed_address_empty_string;
    if (bVar5) {
      pGVar3 = (GlobalEmptyString *)((ulonglong)(param_1->_impl_).Item_ & 0xfffffffffffffffc);
    }
    google::protobuf::internal::ArenaStringPtr::Set<>
              ((ArenaStringPtr *)&this->_impl_,&pGVar3->value_,pAVar4);
    break;
  case 5:
    (this->_impl_).Item_._constinit_ = (param_1->_impl_).Item_._constinit_;
  }
switchD_14c22b9b6_default:
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return;
}

// GetMetadata @ 14c22ba60

Metadata * __thiscall
ds_proto::GuildInfo::GetMetadata(GuildInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&GuildInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22baa0

void __thiscall ds_proto::GuildInfo::InternalSwap(GuildInfo *this,GuildInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  ItemUnion IVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  IVar3 = (this->_impl_).Item_;
  (this->_impl_).Item_ = (param_1->_impl_).Item_;
  (param_1->_impl_).Item_ = IVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// clear_Item @ 14c22bae0

void __thiscall ds_proto::GuildInfo::clear_Item(GuildInfo *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if ((uVar1 == 1) || (uVar1 == 4)) {
    google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// `dynamic_atexit_destructor_for_'_GuildInfo_default_instance_'' @ 150443b60

void __cdecl ds_proto::_dynamic_atexit_destructor_for___GuildInfo_default_instance___(void)

{
  return;
}

