// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 72

// CodedOutputStream<google::protobuf::io::CordOutputStream,void> @ 14fa63030

/* public: __cdecl google::protobuf::io::CodedOutputStream::CodedOutputStream<class
   google::protobuf::io::CordOutputStream,void>(class google::protobuf::io::CordOutputStream *
   __ptr64) __ptr64 */

CodedOutputStream * __thiscall
google::protobuf::io::CodedOutputStream::
CodedOutputStream<google::protobuf::io::CordOutputStream,void>
          (CodedOutputStream *this,CordOutputStream *param_1)

{
  atomic<bool> aVar1;
  bool bVar2;
  __int64 _Var3;
  uchar *puVar4;
  EpsCopyOutputStream *pEVar5;
  uchar *puVar6;
  int local_res8 [2];
  uchar *local_res10;
  
  aVar1 = default_serialization_deterministic_;
  puVar6 = (this->impl_).buffer_;
  (this->impl_).end_ = puVar6;
  (this->impl_).buffer_end_ = puVar6;
  (this->impl_).stream_ = (ZeroCopyOutputStream *)param_1;
  (this->impl_).is_serialization_deterministic_ = aVar1 != (atomic<bool>)0x0;
  (this->impl_).had_error_ = false;
  (this->impl_).aliasing_enabled_ = false;
  (this->impl_).skip_check_consistency = false;
  this->cur_ = puVar6;
  _Var3 = CordOutputStream::ByteCount(param_1);
  this->start_count_ = _Var3;
  bVar2 = CordOutputStream::Next(param_1,&local_res10,local_res8);
  if (bVar2) {
    if (0 < local_res8[0]) {
      if (local_res8[0] < 0x11) {
        pEVar5 = (EpsCopyOutputStream *)(this->impl_).buffer_;
        puVar4 = local_res10;
      }
      else {
        pEVar5 = (EpsCopyOutputStream *)(local_res10 + -0x10);
        puVar4 = (uchar *)0x0;
        puVar6 = local_res10;
      }
      (this->impl_).end_ = pEVar5->buffer_ + (longlong)local_res8[0] + -0x10;
      (this->impl_).buffer_end_ = puVar4;
      this->cur_ = puVar6;
    }
  }
  return this;
}

// operator<<<13> @ 14fa630f0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<13>(char const (& __ptr64)[13]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<13>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// AddLengthDelimited<> @ 14fa63140

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddLengthDelimited<>(int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > && __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::AddLengthDelimited<>
          (UnknownFieldSet *this,int param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  UnknownField *pUVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ThreadSafeArena *this_00;
  
  pUVar4 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar4->number_ = param_1;
  pUVar4->type_ = 3;
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  this_00 = (ThreadSafeArena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    this_00 = *(ThreadSafeArena **)&this_00[-1].first_arena_.cached_block_length_;
  }
  if (this_00 == (ThreadSafeArena *)0x0) {
    pbVar5 = ::operator_new(0x20);
    if (pbVar5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pUVar4->data_).varint = 0;
      return;
    }
  }
  else {
    pbVar5 = internal::ThreadSafeArena::AllocateFromStringBlock(this_00);
  }
  (pbVar5->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar5->_Mypair)._Myval2._Mysize = 0;
  (pbVar5->_Mypair)._Myval2._Myres = 0;
  uVar2 = *(undefined8 *)((longlong)&(param_2->_Mypair)._Myval2._Bx + 8);
  (pbVar5->_Mypair)._Myval2._Bx._Ptr = (param_2->_Mypair)._Myval2._Bx._Ptr;
  *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = uVar2;
  uVar3 = (param_2->_Mypair)._Myval2._Myres;
  (pbVar5->_Mypair)._Myval2._Mysize = (param_2->_Mypair)._Myval2._Mysize;
  (pbVar5->_Mypair)._Myval2._Myres = uVar3;
  (param_2->_Mypair)._Myval2._Mysize = 0;
  (param_2->_Mypair)._Myval2._Myres = 0xf;
  (param_2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pUVar4->data_).string_value = pbVar5;
  return;
}

// AllocateInternal<google::protobuf::UnknownFieldSet,1> @ 14fa631f0

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateInternal<class
   google::protobuf::UnknownFieldSet,1>(void) __ptr64 */

void * __thiscall
google::protobuf::Arena::AllocateInternal<google::protobuf::UnknownFieldSet,1>(Arena *this)

{
  void *pvVar1;
  
  pvVar1 = Allocate(this,0x10);
  return pvVar1;
}

// Construct<google::protobuf::Arena*___ptr64> @ 14fa63200

/* private: static class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::Arena::InternalHelper<class google::protobuf::UnknownFieldSet>::Construct<class
   google::protobuf::Arena * __ptr64>(void * __ptr64,class google::protobuf::Arena * __ptr64 &&
   __ptr64) */

UnknownFieldSet * __cdecl
google::protobuf::Arena::InternalHelper<google::protobuf::UnknownFieldSet>::
Construct<google::protobuf::Arena*___ptr64>(void *param_1,Arena **param_2)

{
  *(Arena **)param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return param_1;
}

// Create<google::protobuf::UnknownFieldSet> @ 14fa63220

/* public: static class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::Arena::Create<class google::protobuf::UnknownFieldSet>(class
   google::protobuf::Arena * __ptr64) */

UnknownFieldSet * __cdecl
google::protobuf::Arena::Create<google::protobuf::UnknownFieldSet>(Arena *param_1)

{
  UnknownFieldSet *pUVar1;
  
  if (param_1 != (Arena *)0x0) {
    pUVar1 = Allocate(param_1,0x10);
    (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
    *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
    return pUVar1;
  }
  pUVar1 = ::operator_new(0x10);
  if (pUVar1 != (UnknownFieldSet *)0x0) {
    (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
    return pUVar1;
  }
  return (UnknownFieldSet *)0x0;
}

// CreateArenaCompatible<google::protobuf::UnknownFieldSet> @ 14fa63280

/* private: static class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::Arena::CreateArenaCompatible<class google::protobuf::UnknownFieldSet>(class
   google::protobuf::Arena * __ptr64) */

UnknownFieldSet * __cdecl
google::protobuf::Arena::CreateArenaCompatible<google::protobuf::UnknownFieldSet>(Arena *param_1)

{
  UnknownFieldSet *pUVar1;
  
  if (param_1 != (Arena *)0x0) {
    pUVar1 = Allocate(param_1,0x10);
    (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
    *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
    return pUVar1;
  }
  pUVar1 = ::operator_new(0x10);
  if (pUVar1 != (UnknownFieldSet *)0x0) {
    (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
    return pUVar1;
  }
  return (UnknownFieldSet *)0x0;
}

// DoCreateMessage<google::protobuf::UnknownFieldSet> @ 14fa632e0

/* private: class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::Arena::DoCreateMessage<class google::protobuf::UnknownFieldSet>(void) __ptr64
    */

UnknownFieldSet * __thiscall
google::protobuf::Arena::DoCreateMessage<google::protobuf::UnknownFieldSet>(Arena *this)

{
  UnknownFieldSet *pUVar1;
  
  pUVar1 = Allocate(this,0x10);
  (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)this;
  *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
  return pUVar1;
}

// FieldParser<google::protobuf::internal::UnknownFieldParserHelper> @ 14fa63310

/* char const * __ptr64 __cdecl google::protobuf::internal::FieldParser<class
   google::protobuf::internal::UnknownFieldParserHelper>(unsigned __int64,class
   google::protobuf::internal::UnknownFieldParserHelper & __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::FieldParser<google::protobuf::internal::UnknownFieldParserHelper>
          (__uint64 param_1,UnknownFieldParserHelper *param_2,char *param_3,ParseContext *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar4;
  UnknownField *pUVar5;
  LogMessage *this_00;
  ulong64 uVar6;
  uint uVar7;
  <unnamed_type_data_> <Var8;
  uint local_res8 [2];
  basic_string_view<char,std::char_traits<char>_> local_38;
  undefined1 local_28 [16];
  basic_string_view<char,std::char_traits<char>_> *local_18;
  
  local_res8[0] = 0;
  uVar7 = (uint)(param_1 >> 3);
  if (uVar7 == 0) {
    return (char *)0x0;
  }
  switch((uint)param_1 & 7) {
  case 0:
    <Var8.varint._1_7_ = 0;
    <Var8.varint._0_1_ = *param_3;
    if (*param_3 < '\0') {
      VarintParseSlow64((char *)&local_38,(uint)param_3);
    }
    else {
      local_38._Mysize = <Var8.varint;
      local_38._Mydata = param_3 + 1;
    }
    if (local_38._Mydata == (char *)0x0) {
      return (char *)0x0;
    }
    pUVar5 = RepeatedField<google::protobuf::UnknownField>::Add
                       (*(RepeatedField<google::protobuf::UnknownField> **)param_2);
    pUVar5->type_ = 0;
    pUVar5->data_ = (<unnamed_type_data_>)local_38._Mysize;
    pUVar5->number_ = uVar7;
    return local_38._Mydata;
  case 1:
    uVar6 = *(ulong64 *)param_3;
    pUVar5 = RepeatedField<google::protobuf::UnknownField>::Add
                       (*(RepeatedField<google::protobuf::UnknownField> **)param_2);
    pUVar5->type_ = 2;
    (pUVar5->data_).varint = uVar6;
    pUVar5->number_ = uVar7;
    return param_3 + 8;
  case 2:
    this = UnknownFieldSet::AddLengthDelimited(*(UnknownFieldSet **)param_2,uVar7);
    if ((byte)*param_3 < 0x80) {
      pcVar4 = param_3 + 1;
      local_38._Mysize._0_4_ = (uint)(byte)*param_3;
    }
    else {
      ReadSizeFallback((char *)&local_38,(uint)param_3);
      pcVar4 = local_38._Mydata;
    }
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
    if (((int)param_4->_padding_ - (int)pcVar4) + 0x10 < (int)(uint)local_38._Mysize) {
      pcVar4 = EpsCopyInputStream::ReadStringFallback
                         ((EpsCopyInputStream *)param_4,pcVar4,(uint)local_38._Mysize,this);
    }
    else {
      uVar6 = (ulong64)(int)(uint)local_38._Mysize;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(this,uVar6,'\0');
      if (0xf < (this->_Mypair)._Myval2._Myres) {
        this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
      }
      memcpy(this,pcVar4,uVar6);
      pcVar4 = pcVar4 + uVar6;
    }
    break;
  case 3:
    local_28._8_8_ = local_res8;
    local_18 = &local_38;
    piVar1 = &param_4->depth_;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return (char *)0x0;
    }
    param_4->group_depth_ = param_4->group_depth_ + 1;
    local_res8[0] = uVar7;
    local_38._Mydata = (char *)param_4;
    local_28._0_8_ = param_2;
    pcVar4 = (char *)`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
                     ::__l2::<lambda_1>::operator()((<lambda_1> *)local_28,param_3);
    param_4->group_depth_ = param_4->group_depth_ + -1;
    param_4->depth_ = param_4->depth_ + 1;
    lVar3 = param_4->_padding_;
    *(undefined4 *)&param_4->_padding_ = 0;
    if ((int)lVar3 != uVar7 * 8 + 3) {
      return (char *)0x0;
    }
    break;
  case 4:
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                        ((LogMessageFatal *)local_28,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/parse_context.h"
                         ,0x523);
    local_res8[0] = 1;
    local_38._Mydata = "Can\'t happen";
    local_38._Mysize = 0xc;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)local_28)
    ;
  case 5:
    uVar2 = *(uint *)param_3;
    pUVar5 = RepeatedField<google::protobuf::UnknownField>::Add
                       (*(RepeatedField<google::protobuf::UnknownField> **)param_2);
    pUVar5->type_ = 1;
    (pUVar5->data_).fixed32 = uVar2;
    pUVar5->number_ = uVar7;
    return param_3 + 4;
  default:
    goto LAB_14fa63469;
  }
  if (pcVar4 != (char *)0x0) {
    return pcVar4;
  }
LAB_14fa63469:
  return (char *)0x0;
}

// InitEagerly<google::protobuf::io::CordOutputStream> @ 14fa63580

/* private: void __cdecl google::protobuf::io::CodedOutputStream::InitEagerly<class
   google::protobuf::io::CordOutputStream>(class google::protobuf::io::CordOutputStream * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::InitEagerly<google::protobuf::io::CordOutputStream>
          (CodedOutputStream *this,CordOutputStream *param_1)

{
  bool bVar1;
  uchar *puVar2;
  EpsCopyOutputStream *pEVar3;
  int local_res18 [2];
  uchar *local_res20;
  
  bVar1 = CordOutputStream::Next(param_1,&local_res20,local_res18);
  if (bVar1) {
    if (0 < local_res18[0]) {
      if (local_res18[0] < 0x11) {
        puVar2 = (this->impl_).buffer_;
        pEVar3 = (EpsCopyOutputStream *)(this->impl_).buffer_;
      }
      else {
        pEVar3 = (EpsCopyOutputStream *)(local_res20 + -0x10);
        puVar2 = local_res20;
        local_res20 = (uchar *)0x0;
      }
      (this->impl_).end_ = pEVar3->buffer_ + (longlong)local_res18[0] + -0x10;
      (this->impl_).buffer_end_ = local_res20;
      this->cur_ = puVar2;
    }
  }
  return;
}

// ParseGroupInlined<`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'::`2'::<lambda_1>_> @ 14fa635f0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ParseContext::ParseGroupInlined<class `public: char const * __ptr64
   __cdecl google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned int,char const
   * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`2'::<lambda_1>
   >(char const * __ptr64,unsigned int,class `public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`2'::<lambda_1> const
   & __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::
ParseGroupInlined<_public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64_::_2_::<lambda_1>_>
          (ParseContext *this,char *param_1,uint param_2,<lambda_1> *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  
  piVar1 = &this->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    this->group_depth_ = this->group_depth_ + 1;
    pcVar3 = (char *)`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
                     ::__l2::<lambda_1>::operator()(param_3,param_1);
    lVar2 = this->_padding_;
    this->group_depth_ = this->group_depth_ + -1;
    this->depth_ = this->depth_ + 1;
    *(undefined4 *)&this->_padding_ = 0;
    if ((uint)lVar2 != param_2) {
      pcVar3 = (char *)0x0;
    }
    return pcVar3;
  }
  return (char *)0x0;
}

// WireFormatParser<google::protobuf::internal::UnknownFieldParserHelper> @ 14fa63650

/* char const * __ptr64 __cdecl google::protobuf::internal::WireFormatParser<class
   google::protobuf::internal::UnknownFieldParserHelper>(class
   google::protobuf::internal::UnknownFieldParserHelper & __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::WireFormatParser<google::protobuf::internal::UnknownFieldParserHelper>
          (UnknownFieldParserHelper *param_1,char *param_2,ParseContext *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_28;
  char local_20;
  byte *local_18;
  uint local_10;
  
  do {
    if ((byte *)param_3->_padding_ <= param_2) {
      iVar3 = (int)param_2 - (int)param_3->_padding_;
      if (iVar3 == *(int *)((longlong)&param_3->_padding_ + 4)) {
        if ((0 < iVar3) && (param_3->_padding_ == 0)) {
          param_2 = (char *)(byte *)0x0;
        }
        return (char *)(byte *)param_2;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_3,(int)&local_28,iVar3);
      param_2 = (char *)local_28;
      if (local_20 != '\0') {
        return (char *)local_28;
      }
    }
    bVar1 = *param_2;
    pbVar5 = (byte *)(param_2 + 1);
    uVar4 = (uint)bVar1;
    if (0x7f < bVar1) {
      bVar2 = param_2[1];
      if (bVar2 < 0x80) {
        pbVar5 = (byte *)(param_2 + 2);
        uVar4 = (bVar1 - 0x80) + (uint)bVar2 * 0x80;
      }
      else {
        ReadTagFallback((char *)&local_18,(uint)param_2);
        pbVar5 = local_18;
        uVar4 = local_10;
      }
    }
    if (pbVar5 == (byte *)0x0) {
      return (char *)0x0;
    }
    if ((uVar4 == 0) || (((byte)uVar4 & 7) == 4)) {
      *(uint *)&param_3->_padding_ = uVar4 - 1;
      return (char *)pbVar5;
    }
    param_2 = FieldParser<google::protobuf::internal::UnknownFieldParserHelper>
                        ((ulonglong)uVar4,param_1,(char *)pbVar5,param_3);
    if ((byte *)param_2 == (byte *)0x0) {
      return (char *)0x0;
    }
  } while( true );
}

// <lambda_1> @ 14fa63770

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class google::protobuf::internal::UnknownFieldParserHelper
   * __ptr64,unsigned int & __ptr64,class google::protobuf::internal::ParseContext * __ptr64 &
   __ptr64) __ptr64 */

<lambda_1> * __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,UnknownFieldParserHelper *param_1,uint *param_2,ParseContext **param_3)

{
  *(UnknownFieldParserHelper **)this = param_1;
  *(uint **)(this + 8) = param_2;
  *(ParseContext ***)(this + 0x10) = param_3;
  return this;
}

// RepeatedIterator<google::protobuf::UnknownField_const_> @ 14fa63790

/* private: __cdecl google::protobuf::internal::RepeatedIterator<class
   google::protobuf::UnknownField const >::RepeatedIterator<class google::protobuf::UnknownField
   const >(class google::protobuf::UnknownField const * __ptr64) __ptr64 */

RepeatedIterator<google::protobuf::UnknownField_const_> * __thiscall
google::protobuf::internal::RepeatedIterator<google::protobuf::UnknownField_const_>::
RepeatedIterator<google::protobuf::UnknownField_const_>
          (RepeatedIterator<google::protobuf::UnknownField_const_> *this,UnknownField *param_1)

{
  *(UnknownField **)this = param_1;
  return this;
}

// CodedInputStream @ 14fa637a0

/* public: __cdecl google::protobuf::io::CodedInputStream::CodedInputStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64) __ptr64 */

CodedInputStream * __thiscall
google::protobuf::io::CodedInputStream::CodedInputStream
          (CodedInputStream *this,ZeroCopyInputStream *param_1)

{
  int iVar1;
  
  this->buffer_ = (uchar *)0x0;
  this->buffer_end_ = (uchar *)0x0;
  this->total_bytes_read_ = 0;
  this->overflow_bytes_ = 0;
  this->last_tag_ = 0;
  this->legitimate_message_end_ = false;
  this->aliasing_enabled_ = false;
  this->force_eager_parsing_ = false;
  this->input_ = param_1;
  this->current_limit_ = 0x7fffffff;
  this->buffer_size_after_limit_ = 0;
  this->total_bytes_limit_ = 0x7fffffff;
  this->recursion_budget_ = default_recursion_limit_;
  iVar1 = default_recursion_limit_;
  this->extension_pool_ = (DescriptorPool *)0x0;
  this->extension_factory_ = (MessageFactory *)0x0;
  this->recursion_limit_ = iVar1;
  Refresh(this);
  return this;
}

// UnknownFieldParserHelper @ 14fa63810

/* public: __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::UnknownFieldParserHelper(class
   google::protobuf::UnknownFieldSet * __ptr64) __ptr64 */

UnknownFieldParserHelper * __thiscall
google::protobuf::internal::UnknownFieldParserHelper::UnknownFieldParserHelper
          (UnknownFieldParserHelper *this,UnknownFieldSet *param_1)

{
  *(UnknownFieldSet **)this = param_1;
  return this;
}

// operator!= @ 14fa63820

/* bool __cdecl google::protobuf::internal::operator!=(class
   google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField const > const &
   __ptr64,class google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField
   const > const & __ptr64) */

bool __cdecl
google::protobuf::internal::operator!=
          (RepeatedIterator<google::protobuf::UnknownField_const_> *param_1,
          RepeatedIterator<google::protobuf::UnknownField_const_> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// operator[] @ 14fa63830

/* public: class google::protobuf::UnknownField & __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::operator[](int) __ptr64 */

UnknownField * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::operator[]
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  puVar2 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    puVar2 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  return (UnknownField *)(puVar2 + (longlong)param_1 * 0x10);
}

// operator* @ 14fa63860

/* public: class google::protobuf::UnknownField const & __ptr64 __cdecl
   google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField const
   >::operator*(void)const __ptr64 */

UnknownField * __thiscall
google::protobuf::internal::RepeatedIterator<google::protobuf::UnknownField_const_>::operator*
          (RepeatedIterator<google::protobuf::UnknownField_const_> *this)

{
  return *(UnknownField **)this;
}

// operator++ @ 14fa63870

/* public: class google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField
   const > & __ptr64 __cdecl google::protobuf::internal::RepeatedIterator<class
   google::protobuf::UnknownField const >::operator++(void) __ptr64 */

RepeatedIterator<class_google::protobuf::UnknownField_const_> * __thiscall
google::protobuf::internal::RepeatedIterator<google::protobuf::UnknownField_const_>::operator++
          (RepeatedIterator<google::protobuf::UnknownField_const_> *this)

{
  *(longlong *)this = *(longlong *)this + 0x10;
  return (RepeatedIterator<class_google::protobuf::UnknownField_const_> *)this;
}

// operator() @ 14fa63880

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64)
   __ptr64'::`2'::<lambda_1>::operator()(char const * __ptr64)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,char *param_1)

{
  uint uVar1;
  RepeatedField<google::protobuf::UnknownField> *this_00;
  ulonglong uVar2;
  UnknownField *pUVar3;
  Arena *this_01;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_res8;
  
  this_00 = (RepeatedField<google::protobuf::UnknownField> *)**(undefined8 **)this;
  uVar1 = **(uint **)(this + 8);
  pUVar3 = google::protobuf::RepeatedField<google::protobuf::UnknownField>::Add(this_00);
  pUVar3->number_ = uVar1;
  pUVar3->type_ = 4;
  uVar2 = (this_00->soo_rep_).field0_0x0.long_rep.elements_int;
  this_01 = (Arena *)(uVar2 & 0xfffffffffffffff8);
  if ((~((byte)(uVar2 >> 2) & 0x3f) & 1) == 0) {
    this_01 = *(Arena **)&this_01[-1].impl_.first_arena_.cached_block_length_;
  }
  if (this_01 == (Arena *)0x0) {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14fa63904;
    (local_res8->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  }
  else {
    local_res8 = google::protobuf::Arena::Allocate(this_01,0x10);
    (local_res8->_Mypair)._Myval2._Bx._Ptr = (char *)this_01;
  }
  (local_res8->_Mypair)._Myval2._Bx._Buf[8] = '\0';
LAB_14fa63904:
  (pUVar3->data_).string_value = local_res8;
  google::protobuf::internal::WireFormatParser<google::protobuf::internal::UnknownFieldParserHelper>
            ((UnknownFieldParserHelper *)&local_res8,param_1,
             (ParseContext *)**(undefined8 **)(this + 0x10));
  return;
}

// Add @ 14fa63940

/* public: class google::protobuf::UnknownField * __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::Add(void) __ptr64 */

UnknownField * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Add
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulong64 uVar1;
  ulonglong uVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar4 = &(this->soo_rep_).field0_0x0.long_rep.size;
  bVar3 = (bool)(~((byte)uVar1 >> 2) & 1);
  uVar6 = (uint)uVar1;
  if (bVar3 == false) {
    uVar5 = *piVar4;
    uVar7 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  else {
    uVar5 = uVar6 & 3;
    uVar7 = 0;
  }
  if (uVar5 == uVar7) {
    Grow(this,bVar3,uVar5,uVar5 + 1);
  }
  else if (bVar3 != false) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar6 = uVar6 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)(uVar5 + 1);
    goto LAB_14fa639a4;
  }
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  uVar6 = *piVar4;
  *piVar4 = uVar5 + 1;
  piVar4 = (int *)(uVar2 & 0xfffffffffffffff8);
LAB_14fa639a4:
  return (UnknownField *)(piVar4 + (longlong)(int)uVar6 * 4);
}

// Add @ 14fa639e0

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Add(class google::protobuf::UnknownField) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Add
          (RepeatedField<google::protobuf::UnknownField> *this,UnknownField *param_1)

{
  ulonglong uVar1;
  <unnamed_type_data_> <Var2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar6 = &(this->soo_rep_).field0_0x0.long_rep.size;
  bVar3 = (bool)(~((byte)uVar1 >> 2) & 1);
  if (bVar3 == false) {
    uVar5 = *piVar6;
    piVar6 = (int *)(uVar1 & 0xfffffffffffffff8);
    uVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  else {
    uVar5 = (uint)uVar1 & 3;
    uVar4 = 0;
  }
  if (uVar5 == uVar4) {
    Grow(this,bVar3,uVar5,uVar5 + 1);
    piVar6 = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
  }
  else if (bVar3 != false) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar4 = (uint)uVar1 & 3;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)(uVar5 + 1);
    goto LAB_14fa63a54;
  }
  piVar7 = &(this->soo_rep_).field0_0x0.long_rep.size;
  uVar4 = *piVar7;
  *piVar7 = uVar5 + 1;
LAB_14fa63a54:
  <Var2 = param_1->data_;
  *(undefined8 *)(piVar6 + (longlong)(int)uVar4 * 4) = *(undefined8 *)param_1;
  *(<unnamed_type_data_> *)(piVar6 + (longlong)(int)uVar4 * 4 + 2) = <Var2;
  return;
}

// AddField @ 14fa63a90

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddField(class
   google::protobuf::UnknownField const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::AddField(UnknownFieldSet *this,UnknownField *param_1)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined8 uVar3;
  bool bVar4;
  <unnamed_type_data_> <Var5;
  <unnamed_type_data_> this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ThreadSafeArena *this_01;
  int *piVar10;
  <unnamed_type_data_> <Stack_20;
  
  this_00.varint = 0;
  uVar8 = 0;
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  this_01 = (ThreadSafeArena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    this_01 = *(ThreadSafeArena **)&this_01[-1].first_arena_.cached_block_length_;
  }
  uVar3 = *(undefined8 *)param_1;
  if (param_1->type_ == 3) {
    pbVar2 = (param_1->data_).string_value;
    if (this_01 == (ThreadSafeArena *)0x0) {
      pbVar6 = ::operator_new(0x20);
      <Stack_20.varint = this_00.varint;
      if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        <Stack_20.string_value =
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar6,pbVar2);
      }
    }
    else {
      pbVar6 = internal::ThreadSafeArena::AllocateFromStringBlock(this_01);
      <Stack_20.string_value =
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar6,pbVar2);
    }
  }
  else {
    <Stack_20 = param_1->data_;
    if (param_1->type_ == 4) {
      if (this_01 == (ThreadSafeArena *)0x0) {
        <Var5.string_value = ::operator_new(0x10);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)<Var5.varint !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          ((<Var5.string_value)->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
          this_00.string_value = <Var5.string_value;
          goto LAB_14fa63b13;
        }
      }
      else {
        this_00.string_value = Arena::Allocate((Arena *)this_01,0x10);
        ((this_00.string_value)->_Mypair)._Myval2._Bx._Ptr = (char *)this_01;
LAB_14fa63b13:
        ((this_00.string_value)->_Mypair)._Myval2._Bx._Buf[8] = '\0';
      }
      MergeFrom(this_00.group,(param_1->data_).group);
      <Stack_20 = this_00;
    }
  }
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  bVar4 = (bool)(~((byte)uVar1 >> 2) & 1);
  piVar7 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  if (bVar4 == false) {
    uVar9 = *piVar7;
    uVar8 = (this->fields_).soo_rep_.field0_0x0.long_rep.capacity;
    piVar7 = (int *)(uVar1 & 0xfffffffffffffff8);
  }
  else {
    uVar9 = (uint)uVar1 & 3;
  }
  if (uVar9 == uVar8) {
    RepeatedField<google::protobuf::UnknownField>::Grow(&this->fields_,bVar4,uVar9,uVar9 + 1);
    piVar7 = (int *)((this->fields_).soo_rep_.field0_0x0.long_rep.elements_int & 0xfffffffffffffff8)
    ;
  }
  else if (bVar4 != false) {
    uVar8 = (uint)uVar1 & 3;
    (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int =
         (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int =
         (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int | (longlong)(int)(uVar9 + 1);
    goto LAB_14fa63bc9;
  }
  piVar10 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  uVar8 = *piVar10;
  *piVar10 = uVar9 + 1;
LAB_14fa63bc9:
  *(undefined8 *)(piVar7 + (longlong)(int)uVar8 * 4) = uVar3;
  *(<unnamed_type_data_> *)(piVar7 + (longlong)(int)uVar8 * 4 + 2) = <Stack_20;
  return;
}

// AddFixed32 @ 14fa63c10

/* public: void __cdecl google::protobuf::internal::UnknownFieldParserHelper::AddFixed32(unsigned
   int,unsigned int) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldParserHelper::AddFixed32
          (UnknownFieldParserHelper *this,uint param_1,uint param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add
                     (*(RepeatedField<google::protobuf::UnknownField> **)this);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 1;
  (pUVar1->data_).fixed32 = param_2;
  return;
}

// AddFixed32 @ 14fa63c50

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddFixed32(int,unsigned int) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::AddFixed32(UnknownFieldSet *this,int param_1,uint param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 1;
  (pUVar1->data_).fixed32 = param_2;
  return;
}

// AddFixed64 @ 14fa63c90

/* public: void __cdecl google::protobuf::internal::UnknownFieldParserHelper::AddFixed64(unsigned
   int,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldParserHelper::AddFixed64
          (UnknownFieldParserHelper *this,uint param_1,__uint64 param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add
                     (*(RepeatedField<google::protobuf::UnknownField> **)this);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 2;
  (pUVar1->data_).varint = param_2;
  return;
}

// AddFixed64 @ 14fa63cd0

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddFixed64(int,unsigned __int64) __ptr64
    */

void __thiscall
google::protobuf::UnknownFieldSet::AddFixed64(UnknownFieldSet *this,int param_1,__uint64 param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 2;
  (pUVar1->data_).varint = param_2;
  return;
}

// AddGroup @ 14fa63d10

/* public: class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::UnknownFieldSet::AddGroup(int) __ptr64 */

UnknownFieldSet * __thiscall
google::protobuf::UnknownFieldSet::AddGroup(UnknownFieldSet *this,int param_1)

{
  ulonglong uVar1;
  UnknownField *pUVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  Arena *this_00;
  
  pUVar2 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar2->number_ = param_1;
  pUVar2->type_ = 4;
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  this_00 = (Arena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    this_00 = *(Arena **)&this_00[-1].impl_.first_arena_.cached_block_length_;
  }
  if (this_00 == (Arena *)0x0) {
    pbVar3 = ::operator_new(0x10);
    if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14fa63d7e;
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  }
  else {
    pbVar3 = Arena::Allocate(this_00,0x10);
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)this_00;
  }
  (pbVar3->_Mypair)._Myval2._Bx._Buf[8] = '\0';
LAB_14fa63d7e:
  (pUVar2->data_).string_value = pbVar3;
  return (UnknownFieldSet *)pbVar3;
}

// AddLengthDelimited @ 14fa63da0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::UnknownFieldSet::AddLengthDelimited(int) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::UnknownFieldSet::AddLengthDelimited(UnknownFieldSet *this,int param_1)

{
  ulonglong uVar1;
  UnknownField *pUVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ThreadSafeArena *this_00;
  
  pUVar2 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar2->number_ = param_1;
  pUVar2->type_ = 3;
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  this_00 = (ThreadSafeArena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    this_00 = *(ThreadSafeArena **)&this_00[-1].first_arena_.cached_block_length_;
  }
  if (this_00 == (ThreadSafeArena *)0x0) {
    pbVar3 = ::operator_new(0x20);
    if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pUVar2->data_).varint = 0;
      return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
  }
  else {
    pbVar3 = internal::ThreadSafeArena::AllocateFromStringBlock(this_00);
  }
  (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) = 0;
  (pbVar3->_Mypair)._Myval2._Mysize = 0;
  (pbVar3->_Mypair)._Myval2._Myres = 0xf;
  (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pUVar2->data_).string_value = pbVar3;
  return pbVar3;
}

// AddLengthDelimited @ 14fa63e40

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddLengthDelimited(int,class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::AddLengthDelimited
          (UnknownFieldSet *this,int param_1,Cord *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = AddLengthDelimited(this,param_1);
  absl::lts_20240722::CopyCordToString(param_2,pbVar1);
  return;
}

// AddVarint @ 14fa63e70

/* public: void __cdecl google::protobuf::internal::UnknownFieldParserHelper::AddVarint(unsigned
   int,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::UnknownFieldParserHelper::AddVarint
          (UnknownFieldParserHelper *this,uint param_1,__uint64 param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add
                     (*(RepeatedField<google::protobuf::UnknownField> **)this);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 0;
  (pUVar1->data_).varint = param_2;
  return;
}

// AddVarint @ 14fa63eb0

/* public: void __cdecl google::protobuf::UnknownFieldSet::AddVarint(int,unsigned __int64) __ptr64
    */

void __thiscall
google::protobuf::UnknownFieldSet::AddVarint(UnknownFieldSet *this,int param_1,__uint64 param_2)

{
  UnknownField *pUVar1;
  
  pUVar1 = RepeatedField<google::protobuf::UnknownField>::Add(&this->fields_);
  pUVar1->number_ = param_1;
  pUVar1->type_ = 0;
  (pUVar1->data_).varint = param_2;
  return;
}

// ClearFallback @ 14fa63ef0

/* private: void __cdecl google::protobuf::UnknownFieldSet::ClearFallback(void) __ptr64 */

void __thiscall google::protobuf::UnknownFieldSet::ClearFallback(UnknownFieldSet *this)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  UnknownFieldSet *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  uVar4 = uVar3 & 0xfffffffffffffff8;
  bVar6 = ~((byte)uVar3 >> 2) & 1;
  if (bVar6 == 0) {
    uVar4 = *(ulonglong *)(uVar4 - 0x10);
  }
  piVar1 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  if (uVar4 == 0) {
    if (bVar6 == 0) {
      uVar5 = *piVar1;
    }
    else {
      uVar5 = (uint)uVar3 & 3;
    }
    lVar9 = (longlong)(int)uVar5;
    lVar8 = lVar9 << 4;
    do {
      lVar9 = lVar9 + -1;
      uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      piVar7 = piVar1;
      if ((~((byte)uVar3 >> 2) & 1) == 0) {
        piVar7 = (int *)(uVar3 & 0xfffffffffffffff8);
      }
      iVar2 = *(int *)((longlong)piVar7 + lVar8 + -0xc);
      if (iVar2 == 3) {
        this_01 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   ((longlong)piVar7 + lVar8 + -8);
        if (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _scalar_deleting_destructor_(this_01,1);
        }
      }
      else if ((iVar2 == 4) &&
              (this_00 = *(UnknownFieldSet **)((longlong)piVar7 + lVar8 + -8),
              this_00 != (UnknownFieldSet *)0x0)) {
        Clear(this_00);
        RepeatedField<google::protobuf::UnknownField>::
        ~RepeatedField<google::protobuf::UnknownField>(&this_00->fields_);
        ::operator_delete(this_00,0x10);
      }
      lVar8 = lVar8 + -0x10;
    } while (0 < lVar9);
  }
  uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar3 >> 2) & 1) == 0) {
    *piVar1 = 0;
  }
  else {
    (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = uVar3 & 0xfffffffffffffff8;
  }
  return;
}

// DeepCopy @ 14fa64000

/* private: class google::protobuf::UnknownField __cdecl
   google::protobuf::UnknownField::DeepCopy(class google::protobuf::Arena * __ptr64)const __ptr64 */

UnknownField * __thiscall
google::protobuf::UnknownField::DeepCopy
          (UnknownField *this,UnknownField *__return_storage_ptr__,Arena *param_1)

{
  <unnamed_type_data_> <Var1;
  uint uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  uVar2 = this->type_;
  <Var1 = this->data_;
  __return_storage_ptr__->number_ = this->number_;
  __return_storage_ptr__->type_ = uVar2;
  __return_storage_ptr__->data_ = <Var1;
  if (this->type_ == 3) {
    pbVar3 = (this->data_).string_value;
    if (param_1 == (Arena *)0x0) {
      this_00 = ::operator_new(0x20);
      if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pbVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_00,pbVar3);
      }
    }
    else {
      pbVar4 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
      pbVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar4,pbVar3);
    }
    (__return_storage_ptr__->data_).string_value = pbVar4;
    return __return_storage_ptr__;
  }
  if (this->type_ != 4) {
    return __return_storage_ptr__;
  }
  if (param_1 == (Arena *)0x0) {
    pbVar3 = ::operator_new(0x10);
    if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14fa64070;
    (pbVar3->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    pbVar4 = pbVar3;
  }
  else {
    pbVar4 = Arena::Allocate(param_1,0x10);
    (pbVar4->_Mypair)._Myval2._Bx._Ptr = (char *)param_1;
  }
  (pbVar4->_Mypair)._Myval2._Bx._Buf[8] = '\0';
LAB_14fa64070:
  UnknownFieldSet::MergeFrom((UnknownFieldSet *)pbVar4,(this->data_).group);
  (__return_storage_ptr__->data_).group = (UnknownFieldSet *)pbVar4;
  return __return_storage_ptr__;
}

// Delete @ 14fa640f0

/* private: void __cdecl google::protobuf::UnknownField::Delete(void) __ptr64 */

void __thiscall google::protobuf::UnknownField::Delete(UnknownField *this)

{
  UnknownFieldSet *this_00;
  
  if (this->type_ == 3) {
    if ((this->data_).string_value !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _scalar_deleting_destructor_((this->data_).string_value,1);
      return;
    }
  }
  else if ((this->type_ == 4) && (this_00 = (this->data_).group, this_00 != (UnknownFieldSet *)0x0))
  {
    UnknownFieldSet::~UnknownFieldSet(this_00);
    ::operator_delete(this_00,0x10);
    return;
  }
  return;
}

// DeleteByNumber @ 14fa64160

/* public: void __cdecl google::protobuf::UnknownFieldSet::DeleteByNumber(int) __ptr64 */

void __thiscall google::protobuf::UnknownFieldSet::DeleteByNumber(UnknownFieldSet *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  UnknownFieldSet *this_00;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  iVar10 = 0;
  iVar12 = 0;
  lVar8 = 0;
  lVar13 = 0;
  piVar1 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  lVar14 = 0;
  lVar9 = 0;
  do {
    while( true ) {
      uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      bVar5 = ~((byte)uVar3 >> 2) & 1;
      if (bVar5 == 0) {
        uVar6 = *piVar1;
      }
      else {
        uVar6 = (uint)uVar3 & 3;
      }
      uVar11 = (uint)uVar3 & 3;
      if ((int)uVar6 <= iVar12) {
        if (bVar5 == 0) {
          uVar11 = *piVar1;
        }
        if (iVar10 < (int)uVar11) {
          if (bVar5 == 0) {
            *piVar1 = iVar10;
          }
          else {
            (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int =
                 (longlong)iVar10 | uVar3 & 0xfffffffffffffff8;
          }
        }
        return;
      }
      piVar4 = (int *)(uVar3 & 0xfffffffffffffff8);
      piVar7 = piVar1;
      if (bVar5 == 0) {
        piVar7 = piVar4;
      }
      piVar7 = (int *)((longlong)piVar7 + lVar9);
      if (*piVar7 != param_1) break;
      if (bVar5 == 0) {
        piVar4 = *(int **)(piVar4 + -4);
      }
      if (piVar4 != (int *)0x0) goto LAB_14fa642a7;
      if (piVar7[1] == 3) {
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(piVar7 + 2) ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14fa642a7;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_
                  (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(piVar7 + 2)
                   ,1);
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x10;
      }
      else {
        if ((piVar7[1] != 4) ||
           (this_00 = *(UnknownFieldSet **)(piVar7 + 2), this_00 == (UnknownFieldSet *)0x0))
        goto LAB_14fa642a7;
        Clear(this_00);
        RepeatedField<google::protobuf::UnknownField>::
        ~RepeatedField<google::protobuf::UnknownField>(&this_00->fields_);
        ::operator_delete(this_00,0x10);
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x10;
      }
    }
    if (lVar8 != lVar13) {
      if (bVar5 == 0) {
        puVar2 = (undefined4 *)(lVar9 + (longlong)piVar4);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
      }
      else {
        puVar2 = (undefined4 *)(lVar9 + (longlong)piVar1);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        piVar4 = piVar1;
      }
      puVar2 = (undefined4 *)(lVar14 + (longlong)piVar4);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
    }
    iVar10 = iVar10 + 1;
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 0x10;
LAB_14fa642a7:
    iVar12 = iVar12 + 1;
    lVar8 = lVar8 + 1;
    lVar9 = lVar9 + 0x10;
  } while( true );
}

// DeleteSubrange @ 14fa64300

/* public: void __cdecl google::protobuf::UnknownFieldSet::DeleteSubrange(int,int) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::DeleteSubrange(UnknownFieldSet *this,int param_1,int param_2)

{
  ulonglong uVar1;
  UnknownFieldSet *this_00;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  uVar10 = uVar1 & 0xfffffffffffffff8;
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    uVar10 = *(ulonglong *)(uVar10 - 0x10);
  }
  if ((uVar10 == 0) && (0 < param_2)) {
    lVar8 = (longlong)param_1 << 4;
    lVar7 = (longlong)param_2;
    do {
      uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      puVar6 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        puVar6 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
      }
      if (*(int *)(puVar6 + lVar8 + 4) == 3) {
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
             (puVar6 + lVar8 + 8) !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _scalar_deleting_destructor_
                    (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                      (puVar6 + lVar8 + 8),1);
        }
      }
      else if ((*(int *)(puVar6 + lVar8 + 4) == 4) &&
              (this_00 = *(UnknownFieldSet **)(puVar6 + lVar8 + 8),
              this_00 != (UnknownFieldSet *)0x0)) {
        ~UnknownFieldSet(this_00);
        ::operator_delete(this_00,0x10);
      }
      lVar8 = lVar8 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar5 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
    puVar6 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  else {
    uVar5 = (uint)uVar1 & 3;
    puVar6 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
  }
  piVar11 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
  if (0 < param_2) {
    lVar7 = (longlong)(param_2 + param_1);
    if (lVar7 < (int)uVar5) {
      lVar8 = (int)uVar5 - lVar7;
      puVar4 = (undefined8 *)(puVar6 + lVar7 * 0x10);
      do {
        uVar2 = puVar4[1];
        puVar4[(longlong)param_2 * -2] = *puVar4;
        (puVar4 + (longlong)param_2 * -2)[1] = uVar2;
        lVar8 = lVar8 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar8 != 0);
    }
    uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    iVar9 = uVar5 - param_2;
    bVar3 = ~((byte)uVar1 >> 2) & 1;
    if (bVar3 == 0) {
      uVar5 = *piVar11;
    }
    else {
      uVar5 = (uint)uVar1 & 3;
    }
    if (iVar9 < (int)uVar5) {
      if (bVar3 != 0) {
        (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int =
             uVar1 & 0xfffffffffffffff8 | (longlong)iVar9;
        return;
      }
      *piVar11 = iVar9;
    }
  }
  return;
}

// ExtractSubrange @ 14fa644a0

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::ExtractSubrange(int,int,class google::protobuf::UnknownField *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::ExtractSubrange
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1,int param_2,
          UnknownField *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  <unnamed_type_data_> <Var3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  UnknownField *pUVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar10 = (this->soo_rep_).field0_0x0.long_rep.size;
    puVar11 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  else {
    uVar10 = (uint)uVar1 & 3;
    puVar11 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  }
  piVar12 = &(this->soo_rep_).field0_0x0.long_rep.size;
  if (param_3 != (UnknownField *)0x0) {
    if (param_2 < 1) {
      return;
    }
    lVar5 = (longlong)param_2;
    pUVar9 = param_3;
    do {
      uVar2 = *(undefined8 *)
               (puVar11 + ((longlong)param_1 * 0x10 - (longlong)param_3) + (longlong)pUVar9);
      <Var3 = *(<unnamed_type_data_> *)
               ((longlong)
                (puVar11 + ((longlong)param_1 * 0x10 - (longlong)param_3) + (longlong)pUVar9) + 8);
      pUVar9->number_ = (int)uVar2;
      pUVar9->type_ = (int)((ulonglong)uVar2 >> 0x20);
      pUVar9->data_ = <Var3;
      lVar5 = lVar5 + -1;
      pUVar9 = pUVar9 + 1;
    } while (lVar5 != 0);
  }
  if (0 < param_2) {
    lVar5 = (longlong)(param_1 + param_2);
    if (lVar5 < (int)uVar10) {
      lVar7 = (int)uVar10 - lVar5;
      puVar6 = (undefined8 *)(puVar11 + lVar5 * 0x10);
      do {
        uVar2 = puVar6[1];
        puVar6[(longlong)param_2 * -2] = *puVar6;
        (puVar6 + (longlong)param_2 * -2)[1] = uVar2;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 2;
      } while (lVar7 != 0);
    }
    uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    iVar8 = uVar10 - param_2;
    bVar4 = ~((byte)uVar1 >> 2) & 1;
    if (bVar4 == 0) {
      uVar10 = *piVar12;
    }
    else {
      uVar10 = (uint)uVar1 & 3;
    }
    if (iVar8 < (int)uVar10) {
      if (bVar4 != 0) {
        (this->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar1 & 0xfffffffffffffff8 | (longlong)iVar8;
        return;
      }
      *piVar12 = iVar8;
    }
  }
  return;
}

// InternalSerializeLengthDelimitedNoTag @ 14fa645c0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::UnknownField::InternalSerializeLengthDelimitedNoTag(unsigned char *
   __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::UnknownField::InternalSerializeLengthDelimitedNoTag
          (UnknownField *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulonglong uVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Src;
  
  pbVar1 = (this->data_).string_value;
  _Src = pbVar1;
  if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
    _Src = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (pbVar1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar2 = (pbVar1->_Mypair)._Myval2._Mysize;
  uVar6 = uVar2 & 0xffffffff;
  uVar7 = (uint)uVar2;
  uVar5 = uVar7;
  while (bVar4 = (byte)uVar6, 0x7f < uVar5) {
    uVar6 = uVar6 >> 7;
    *param_1 = bVar4 | 0x80;
    param_1 = param_1 + 1;
    uVar5 = (uint)uVar6;
  }
  *param_1 = bVar4;
  _Dst = param_1 + 1;
  if ((longlong)(int)uVar7 <= (longlong)param_2->end_ - (longlong)_Dst) {
    memcpy(_Dst,_Src,uVar2 & 0xffffffff);
    return _Dst + (int)uVar7;
  }
  puVar3 = io::EpsCopyOutputStream::WriteRawFallback(param_2,_Src,uVar7,_Dst);
  return puVar3;
}

// MergeFrom @ 14fa64660

/* public: void __cdecl google::protobuf::UnknownFieldSet::MergeFrom(class
   google::protobuf::UnknownFieldSet const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::MergeFrom(UnknownFieldSet *this,UnknownFieldSet *param_1)

{
  int *piVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ShortSooRep_u_8 *pSVar5;
  ShortSooRep_u_8 SVar6;
  ShortSooRep_u_8 SVar7;
  ShortSooRep_u_8 SVar8;
  uint uVar9;
  ShortSooRep_u_8 SVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  bool bVar12;
  int *piVar13;
  ShortSooRep_u_8 *pSVar14;
  ThreadSafeArena *this_00;
  ShortSooRep_u_8 *pSVar15;
  uint uVar16;
  uint uVar17;
  ShortSooRep_u_8 SStack_40;
  
  uVar2 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    uVar16 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar16 = (uint)uVar2 & 3;
  }
  if (0 < (int)uVar16) {
    uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    uVar17 = (uint)uVar2 & 3;
    bVar12 = (bool)(~((byte)uVar2 >> 2) & 1);
    piVar1 = &(this->fields_).soo_rep_.field0_0x0.long_rep.size;
    uVar9 = 0;
    uVar4 = uVar17;
    if (bVar12 == false) {
      uVar9 = (this->fields_).soo_rep_.field0_0x0.long_rep.capacity;
      uVar4 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    if ((int)uVar9 < (int)(uVar16 + uVar4)) {
      if (bVar12 == false) {
        uVar17 = *piVar1;
      }
      RepeatedField<google::protobuf::UnknownField>::Grow
                (&this->fields_,bVar12,uVar17,uVar16 + uVar4);
    }
    uVar3 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar3 >> 2) & 1) == 0) {
      pSVar14 = (ShortSooRep_u_8 *)(uVar3 & 0xfffffffffffffff8);
      uVar16 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      pSVar14 = &(param_1->fields_).soo_rep_.field0_0x0.short_rep.field1_0x8;
      uVar16 = (uint)uVar3 & 3;
    }
    pSVar15 = pSVar14 + (longlong)(int)uVar16 * 2;
    for (; pSVar14 != pSVar15; pSVar14 = pSVar14 + 2) {
      SVar7.data = *(char (*) [8])pSVar14;
      pSVar5 = pSVar14 + 1;
      SVar8 = *pSVar5;
      SVar6 = *pSVar5;
      SVar10 = *pSVar5;
      uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      this_00 = (ThreadSafeArena *)(uVar3 & 0xfffffffffffffff8);
      if ((~((byte)uVar3 >> 2) & 1) == 0) {
        this_00 = *(ThreadSafeArena **)&this_00[-1].first_arena_.cached_block_length_;
      }
      if (*(int *)((longlong)pSVar14 + 4) == 3) {
        if (this_00 == (ThreadSafeArena *)0x0) {
          pbVar11 = ::operator_new(0x20);
          SStack_40 = (ShortSooRep_u_8)0x0;
          if (pbVar11 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            SStack_40.data =
                 (char  [8])
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>
                           (pbVar11,SVar10.data);
          }
        }
        else {
          pbVar11 = internal::ThreadSafeArena::AllocateFromStringBlock(this_00);
          SStack_40.data =
               (char  [8])
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar11,SVar6.data);
        }
      }
      else {
        SStack_40 = *pSVar5;
        if (*(int *)((longlong)pSVar14 + 4) == 4) {
          if (this_00 == (ThreadSafeArena *)0x0) {
            SVar10 = (ShortSooRep_u_8)::operator_new(0x10);
            SStack_40 = (ShortSooRep_u_8)0x0;
            if (SVar10 != (ShortSooRep_u_8)0x0) {
              *(undefined8 *)SVar10 = 0;
              goto LAB_14fa64796;
            }
          }
          else {
            SVar10 = (ShortSooRep_u_8)Arena::Allocate((Arena *)this_00,0x10);
            *(ThreadSafeArena **)SVar10 = this_00;
LAB_14fa64796:
            *(undefined1 *)((longlong)SVar10 + 8) = 0;
            SStack_40 = SVar10;
          }
          MergeFrom((UnknownFieldSet *)SStack_40,(UnknownFieldSet *)SVar8);
        }
      }
      uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      bVar12 = (bool)(~((byte)uVar3 >> 2) & 1);
      if (bVar12 == false) {
        uVar16 = *piVar1;
        uVar17 = (this->fields_).soo_rep_.field0_0x0.long_rep.capacity;
        piVar13 = (int *)(uVar3 & 0xfffffffffffffff8);
      }
      else {
        uVar16 = (uint)uVar3 & 3;
        piVar13 = piVar1;
        uVar17 = 0;
      }
      if (uVar16 == uVar17) {
        RepeatedField<google::protobuf::UnknownField>::Grow(&this->fields_,bVar12,uVar16,uVar16 + 1)
        ;
        piVar13 = (int *)((this->fields_).soo_rep_.field0_0x0.long_rep.elements_int &
                         0xfffffffffffffff8);
LAB_14fa6486a:
        uVar17 = *piVar1;
        *piVar1 = uVar16 + 1;
      }
      else {
        if (bVar12 == false) goto LAB_14fa6486a;
        uVar17 = (uint)uVar3 & 3;
        (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int =
             uVar3 & 0xfffffffffffffff8 | (longlong)(int)(uVar16 + 1);
      }
      *(ShortSooRep_u_8 *)(piVar13 + (longlong)(int)uVar17 * 4) = SVar7;
      ((ShortSooRep_u_8 *)(piVar13 + (longlong)(int)uVar17 * 4))[1] = SStack_40;
    }
  }
  return;
}

// MergeFromAndDestroy @ 14fa648d0

/* public: void __cdecl google::protobuf::UnknownFieldSet::MergeFromAndDestroy(class
   google::protobuf::UnknownFieldSet * __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::MergeFromAndDestroy
          (UnknownFieldSet *this,UnknownFieldSet *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  SooRep_u_0 local_18;
  
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  uVar4 = uVar1 & 0xfffffffffffffff8;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  uVar7 = uVar4;
  if (bVar2 == 0) {
    uVar7 = *(ulonglong *)(uVar4 - 0x10);
  }
  uVar8 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  local_18.long_rep.elements_int = uVar8 & 0xfffffffffffffff8;
  bVar6 = ~((byte)uVar8 >> 2) & 1;
  uVar8 = local_18.long_rep.elements_int;
  if (bVar6 == 0) {
    uVar8 = *(ulonglong *)(local_18.long_rep.elements_int - 0x10);
  }
  if (uVar7 != uVar8) {
    MergeFrom(this,param_1);
    return;
  }
  if (bVar2 == 0) {
    uVar5 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar5 = (uint)uVar1 & 3;
  }
  if (uVar5 == 0) {
    if (this != param_1) {
      if (bVar2 == 0) {
        uVar4 = *(ulonglong *)(uVar4 - 0x10);
      }
      if (bVar6 == 0) {
        local_18.long_rep.elements_int = *(ulonglong *)(local_18.long_rep.elements_int - 0x10);
      }
      if (uVar4 == local_18.long_rep.elements_int) {
        internal::memswap<16>((char *)this,(char *)param_1);
        return;
      }
      local_18.long_rep.size._0_1_ = 0;
      RepeatedField<google::protobuf::UnknownField>::MergeFrom
                ((RepeatedField<google::protobuf::UnknownField> *)&local_18.long_rep,
                 (RepeatedField<class_google::protobuf::UnknownField> *)this);
      uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        (this->fields_).soo_rep_.field0_0x0.long_rep.size = 0;
      }
      else {
        (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      RepeatedField<google::protobuf::UnknownField>::MergeFrom
                (&this->fields_,(RepeatedField<class_google::protobuf::UnknownField> *)param_1);
      if ((SooRep_u_0 *)param_1 != &local_18) {
        internal::memswap<16>((char *)param_1,(char *)&local_18);
      }
      if ((~((byte)local_18.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
        plVar3 = (longlong *)((local_18.long_rep.elements_int & 0xfffffffffffffff8) - 0x10);
        if (*plVar3 == 0) {
          ::operator_delete(plVar3,((longlong)local_18.long_rep.capacity + 1) * 0x10);
        }
      }
      return;
    }
  }
  else {
    RepeatedField<google::protobuf::UnknownField>::MergeFrom
              (&this->fields_,(RepeatedField<class_google::protobuf::UnknownField> *)param_1);
    uVar1 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar1 >> 2) & 1) != 0) {
      (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      return;
    }
    (param_1->fields_).soo_rep_.field0_0x0.long_rep.size = 0;
  }
  return;
}

// MergeFromCodedStream @ 14fa64a60

/* public: bool __cdecl google::protobuf::UnknownFieldSet::MergeFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::MergeFromCodedStream
          (UnknownFieldSet *this,CodedInputStream *param_1)

{
  longlong *plVar1;
  int iVar2;
  UnknownFieldSet *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined4 uVar12;
  SooRep_u_0 local_18;
  
  local_18.long_rep.elements_int = 0;
  local_18.short_rep.field1_0x8 = (ShortSooRep_u_8)0x0;
  bVar4 = internal::WireFormat::SkipMessage(param_1,(UnknownFieldSet *)&local_18.long_rep);
  if ((bVar4) && (param_1->legitimate_message_end_ != false)) {
    MergeFromAndDestroy(this,(UnknownFieldSet *)&local_18.long_rep);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar11 = (byte)local_18.long_rep.elements_int;
  bVar8 = ~(bVar11 >> 2) & 1;
  uVar12 = local_18.long_rep.size;
  if (bVar8 != 0) {
    uVar12 = local_18.long_rep.elements_int._0_4_ & 3;
  }
  uVar5 = local_18.long_rep.elements_int;
  uVar3 = local_18.long_rep.elements_int;
  if (uVar12 != 0) {
    uVar6 = local_18.long_rep.elements_int & 0xfffffffffffffff8;
    if (bVar8 == 0) {
      uVar6 = *(ulonglong *)(uVar6 - 0x10);
    }
    if (uVar6 == 0) {
      uVar12 = local_18.long_rep.size;
      if (bVar8 != 0) {
        uVar12 = local_18.long_rep.elements_int._0_4_ & 3;
      }
      lVar10 = (longlong)(int)uVar12;
      lVar9 = lVar10 << 4;
      uVar12 = local_18.long_rep.elements_int._0_4_;
      do {
        lVar10 = lVar10 + -1;
        if ((~((byte)uVar12 >> 2) & 1) == 0) {
          piVar7 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        else {
          piVar7 = &local_18.long_rep.size;
        }
        iVar2 = *(int *)((longlong)piVar7 + lVar9 + -0xc);
        if (iVar2 == 3) {
          this_01 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     ((longlong)piVar7 + lVar9 + -8);
          if (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _scalar_deleting_destructor_(this_01,1);
            goto LAB_14fa64b88;
          }
        }
        else if ((iVar2 == 4) &&
                (this_00 = *(UnknownFieldSet **)((longlong)piVar7 + lVar9 + -8),
                this_00 != (UnknownFieldSet *)0x0)) {
          ~UnknownFieldSet(this_00);
          ::operator_delete(this_00,0x10);
LAB_14fa64b88:
          uVar12 = ZEXT14((byte)local_18.long_rep.elements_int);
          uVar5 = local_18.long_rep.elements_int;
        }
        bVar11 = (byte)uVar12;
        lVar9 = lVar9 + -0x10;
      } while (0 < lVar10);
    }
    if ((~(bVar11 >> 2) & 1) == 0) {
      local_18.short_rep.field1_0x8 =
           (ShortSooRep_u_8)((ulonglong)local_18.short_rep.field1_0x8 & 0xffffffff00000000);
      uVar3 = local_18.long_rep.elements_int;
    }
    else {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      uVar3 = uVar5;
    }
  }
  local_18.long_rep.elements_int = uVar3;
  if ((~((byte)uVar5 >> 2) & 1) == 0) {
    plVar1 = (longlong *)((uVar5 & 0xfffffffffffffff8) - 0x10);
    if (*plVar1 == 0) {
      ::operator_delete(plVar1,((longlong)local_18.long_rep.capacity + 1) * 0x10);
    }
  }
  return bVar4;
}

// MergeToInternalMetadata @ 14fa64c10

/* public: static void __cdecl google::protobuf::UnknownFieldSet::MergeToInternalMetadata(class
   google::protobuf::UnknownFieldSet const & __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64) */

void __cdecl
google::protobuf::UnknownFieldSet::MergeToInternalMetadata
          (UnknownFieldSet *param_1,InternalMetadata *param_2)

{
  UnknownFieldSet *this;
  
  if ((param_2->ptr_ & 1) != 0) {
    MergeFrom((UnknownFieldSet *)((param_2->ptr_ & 0xfffffffffffffffeU) + 8),param_1);
    return;
  }
  this = internal::InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                   (param_2);
  MergeFrom(this,param_1);
  return;
}

// Mutable @ 14fa64c60

/* public: class google::protobuf::UnknownField * __ptr64 __cdecl
   google::protobuf::RepeatedField<class google::protobuf::UnknownField>::Mutable(int) __ptr64 */

UnknownField * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Mutable
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  puVar2 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    puVar2 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  return (UnknownField *)(puVar2 + (longlong)param_1 * 0x10);
}

// New @ 14fa64c90

/* private: static class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::Arena::InternalHelper<class google::protobuf::UnknownFieldSet>::New(void) */

UnknownFieldSet * __cdecl
google::protobuf::Arena::InternalHelper<google::protobuf::UnknownFieldSet>::New(void)

{
  UnknownFieldSet *pUVar1;
  
  pUVar1 = ::operator_new(0x10);
  if (pUVar1 != (UnknownFieldSet *)0x0) {
    (pUVar1->fields_).soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pUVar1->fields_).soo_rep_.field0_0x0 + 8) = 0;
    return pUVar1;
  }
  return (UnknownFieldSet *)0x0;
}

// ParseFromArray @ 14fa64cd0

/* public: bool __cdecl google::protobuf::UnknownFieldSet::ParseFromArray(void const * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::ParseFromArray(UnknownFieldSet *this,void *param_1,int param_2)

{
  bool bVar1;
  ArrayInputStream local_78;
  CodedInputStream local_58;
  
  io::ArrayInputStream::ArrayInputStream(&local_78,param_1,param_2,-1);
  local_58.buffer_ = (uchar *)0x0;
  local_58.buffer_end_ = (uchar *)0x0;
  local_58.input_ = (ZeroCopyInputStream *)&local_78;
  local_58.total_bytes_read_ = 0;
  local_58.overflow_bytes_ = 0;
  local_58.last_tag_ = 0;
  local_58.legitimate_message_end_ = false;
  local_58.aliasing_enabled_ = false;
  local_58.force_eager_parsing_ = false;
  local_58.current_limit_ = 0x7fffffff;
  local_58.buffer_size_after_limit_ = 0;
  local_58.total_bytes_limit_ = 0x7fffffff;
  local_58.recursion_budget_ = io::CodedInputStream::default_recursion_limit_;
  local_58.recursion_limit_ = io::CodedInputStream::default_recursion_limit_;
  local_58.extension_pool_ = (DescriptorPool *)0x0;
  local_58.extension_factory_ = (MessageFactory *)0x0;
  io::CodedInputStream::Refresh(&local_58);
  Clear(this);
  bVar1 = MergeFromCodedStream(this,&local_58);
  if ((bVar1) && (local_58.legitimate_message_end_ != false)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  io::CodedInputStream::~CodedInputStream(&local_58);
  return bVar1;
}

// ParseFromCodedStream @ 14fa64d90

/* public: bool __cdecl google::protobuf::UnknownFieldSet::ParseFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::ParseFromCodedStream
          (UnknownFieldSet *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  Clear(this);
  bVar1 = MergeFromCodedStream(this,param_1);
  return bVar1;
}

// ParseFromZeroCopyStream @ 14fa64dc0

/* public: bool __cdecl google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream
          (UnknownFieldSet *this,ZeroCopyInputStream *param_1)

{
  bool bVar1;
  CodedInputStream local_58;
  
  local_58.buffer_ = (uchar *)0x0;
  local_58.buffer_end_ = (uchar *)0x0;
  local_58.total_bytes_read_ = 0;
  local_58.overflow_bytes_ = 0;
  local_58.last_tag_ = 0;
  local_58.legitimate_message_end_ = false;
  local_58.aliasing_enabled_ = false;
  local_58.force_eager_parsing_ = false;
  local_58.current_limit_ = 0x7fffffff;
  local_58.buffer_size_after_limit_ = 0;
  local_58.total_bytes_limit_ = 0x7fffffff;
  local_58.recursion_budget_ = io::CodedInputStream::default_recursion_limit_;
  local_58.recursion_limit_ = io::CodedInputStream::default_recursion_limit_;
  local_58.extension_pool_ = (DescriptorPool *)0x0;
  local_58.extension_factory_ = (MessageFactory *)0x0;
  local_58.input_ = param_1;
  io::CodedInputStream::Refresh(&local_58);
  Clear(this);
  bVar1 = MergeFromCodedStream(this,&local_58);
  if ((bVar1) && (local_58.legitimate_message_end_ != false)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  io::CodedInputStream::~CodedInputStream(&local_58);
  return bVar1;
}

// ParseGroup @ 14fa64e60

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned int,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::UnknownFieldParserHelper::ParseGroup
          (UnknownFieldParserHelper *this,uint param_1,char *param_2,ParseContext *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  uint local_res10 [4];
  ParseContext *local_res20;
  UnknownFieldParserHelper *local_28;
  uint *local_20;
  ParseContext **local_18;
  
  piVar1 = &param_3->depth_;
  *piVar1 = *piVar1 + -1;
  local_20 = local_res10;
  local_18 = &local_res20;
  if (*piVar1 < 0) {
    return (char *)0x0;
  }
  param_3->group_depth_ = param_3->group_depth_ + 1;
  local_res10[0] = param_1;
  local_res20 = param_3;
  local_28 = this;
  pcVar3 = (char *)`public:_char_const*___ptr64___cdecl_google::protobuf::internal::UnknownFieldParserHelper::ParseGroup(unsigned_int,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
                   ::__l2::<lambda_1>::operator()((<lambda_1> *)&local_28,param_2);
  lVar2 = param_3->_padding_;
  param_3->group_depth_ = param_3->group_depth_ + -1;
  param_3->depth_ = param_3->depth_ + 1;
  *(undefined4 *)&param_3->_padding_ = 0;
  if ((int)lVar2 != param_1 * 8 + 3) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

// ParseLengthDelimited @ 14fa64ee0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::UnknownFieldParserHelper::ParseLengthDelimited(unsigned int,char
   const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::UnknownFieldParserHelper::ParseLengthDelimited
          (UnknownFieldParserHelper *this,uint param_1,char *param_2,ParseContext *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char *pcVar1;
  ulong64 _Size;
  char *local_18;
  uint local_10;
  
  this_00 = UnknownFieldSet::AddLengthDelimited(*(UnknownFieldSet **)this,param_1);
  if ((byte)*param_2 < 0x80) {
    pcVar1 = param_2 + 1;
    local_10 = (uint)(byte)*param_2;
  }
  else {
    ReadSizeFallback((char *)&local_18,(uint)param_2);
    pcVar1 = local_18;
  }
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((int)local_10 <= ((int)param_3->_padding_ - (int)pcVar1) + 0x10) {
    _Size = (ulong64)(int)local_10;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(this_00,_Size,'\0')
    ;
    if (0xf < (this_00->_Mypair)._Myval2._Myres) {
      this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (this_00->_Mypair)._Myval2._Bx._Ptr;
    }
    memcpy(this_00,pcVar1,_Size);
    return pcVar1 + _Size;
  }
  pcVar1 = EpsCopyInputStream::ReadStringFallback
                     ((EpsCopyInputStream *)param_3,pcVar1,local_10,this_00);
  return pcVar1;
}

// SerializeToCodedStream @ 14fa64fb0

/* public: bool __cdecl google::protobuf::UnknownFieldSet::SerializeToCodedStream(class
   google::protobuf::io::CodedOutputStream * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::SerializeToCodedStream
          (UnknownFieldSet *this,CodedOutputStream *param_1)

{
  bool bVar1;
  uchar *puVar2;
  
  puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     (this,param_1->cur_,&param_1->impl_);
  param_1->cur_ = puVar2;
  puVar2 = io::EpsCopyOutputStream::FlushAndResetBuffer(&param_1->impl_,puVar2);
  bVar1 = (param_1->impl_).had_error_;
  param_1->cur_ = puVar2;
  return bVar1 == false;
}

// SerializeToCord @ 14fa64ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::UnknownFieldSet::SerializeToCord(class
   absl::lts_20240722::Cord * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::SerializeToCord(UnknownFieldSet *this,Cord *param_1)

{
  byte bVar1;
  CordRep *pCVar2;
  bool bVar3;
  int iVar4;
  __uint64 _Var5;
  Cord *pCVar6;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  uchar *local_c0 [2];
  Rep_u_0 local_b0;
  ZeroCopyOutputStream local_a0;
  Rep_u_0 local_98 [2];
  void *local_78;
  CodedOutputStream local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  _Var5 = internal::WireFormat::ComputeUnknownFieldsSize(this);
  io::CordOutputStream::CordOutputStream((CordOutputStream *)&local_a0,_Var5);
  local_68.impl_.end_ = local_68.impl_.buffer_;
  local_68.impl_.buffer_end_ = local_68.impl_.buffer_;
  local_68.impl_.stream_ = &local_a0;
  local_68.impl_.had_error_ = false;
  local_68.impl_.aliasing_enabled_ = false;
  local_68.impl_.is_serialization_deterministic_ =
       io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
  local_68.impl_.skip_check_consistency = false;
  local_68.cur_ = local_68.impl_.buffer_;
  local_68.start_count_ = io::CordOutputStream::ByteCount((CordOutputStream *)&local_a0);
  bVar3 = io::CordOutputStream::Next((CordOutputStream *)&local_a0,local_c0,local_c8);
  if ((bVar3) && (0 < local_c8[0])) {
    if (local_c8[0] < 0x11) {
      local_68.impl_.end_ = local_68.impl_.buffer_ + local_c8[0];
      local_68.impl_.buffer_end_ = local_c0[0];
      local_68.cur_ = local_68.impl_.buffer_;
    }
    else {
      local_68.impl_.end_ = local_c0[0] + (longlong)local_c8[0] + -0x10;
      local_68.impl_.buffer_end_ = (uchar *)0x0;
      local_68.cur_ = local_c0[0];
    }
  }
  local_68.cur_ =
       internal::WireFormat::InternalSerializeUnknownFieldsToArray
                 (this,local_68.cur_,&local_68.impl_);
  local_68.cur_ = io::EpsCopyOutputStream::FlushAndResetBuffer(&local_68.impl_,local_68.cur_);
  if (local_68.impl_.had_error_ == false) {
    io::CodedOutputStream::~CodedOutputStream(&local_68);
    pCVar6 = io::CordOutputStream::Consume((CordOutputStream *)&local_a0,(Cord *)&local_b0.as_tree);
    if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
      absl::lts_20240722::Cord::InlineRep::UnrefTree(&param_1->contents_);
    }
    pCVar2 = (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.rep;
    (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
         (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar2;
    (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    if ((local_b0.data[0] & 1U) != 0) {
      absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_b0.as_tree);
    }
    bVar3 = true;
  }
  else {
    io::CodedOutputStream::~CodedOutputStream(&local_68);
    bVar3 = false;
  }
  if (((ulonglong)local_78 & 1) == 0) {
    bVar1 = *(byte *)((longlong)local_78 + 0xc);
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    ::operator_delete(local_78,(longlong)iVar4);
  }
  if ((local_98[0].data[0] & 1) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_98[0].as_tree);
  }
  return bVar3;
}

// SerializeToString @ 14fa651c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::UnknownFieldSet::SerializeToString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::UnknownFieldSet::SerializeToString
          (UnknownFieldSet *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  atomic<bool> aVar2;
  __uint64 _Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  undefined1 auStack_78 [32];
  EpsCopyOutputStream local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  _Var3 = internal::WireFormat::ComputeUnknownFieldsSize(this);
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (uVar1 < _Var3) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,_Var3 - uVar1,'\0');
  }
  else {
    pbVar4 = param_1;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = _Var3;
    (pbVar4->_Mypair)._Myval2._Bx._Buf[_Var3] = '\0';
  }
  aVar2 = io::CodedOutputStream::default_serialization_deterministic_;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Var3 = internal::WireFormat::ComputeUnknownFieldsSize(this);
  local_58.end_ = (uchar *)((longlong)&(param_1->_Mypair)._Myval2._Bx + (longlong)(int)_Var3);
  local_58.is_serialization_deterministic_ = aVar2 != (atomic<bool>)0x0;
  local_58.buffer_end_ = (uchar *)0x0;
  local_58.stream_ = (ZeroCopyOutputStream *)0x0;
  local_58.had_error_ = false;
  local_58.aliasing_enabled_ = false;
  local_58.skip_check_consistency = false;
  internal::WireFormat::InternalSerializeUnknownFieldsToArray(this,(uchar *)param_1,&local_58);
  return true;
}

// SerializeUnknownFields @ 14fa652a0

/* public: static void __cdecl google::protobuf::internal::WireFormat::SerializeUnknownFields(class
   google::protobuf::UnknownFieldSet const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormat::SerializeUnknownFields
          (UnknownFieldSet *param_1,CodedOutputStream *param_2)

{
  uchar *puVar1;
  
  puVar1 = InternalSerializeUnknownFieldsToArray(param_1,param_2->cur_,&param_2->impl_);
  param_2->cur_ = puVar1;
  return;
}

// SerializeUnknownFieldsToArray @ 14fa652d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(class
   google::protobuf::UnknownFieldSet const & __ptr64,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray
          (UnknownFieldSet *param_1,uchar *param_2)

{
  atomic<bool> aVar1;
  __uint64 _Var2;
  uchar *puVar3;
  undefined1 auStack_78 [32];
  EpsCopyOutputStream local_58;
  ulonglong local_18;
  
  aVar1 = io::CodedOutputStream::default_serialization_deterministic_;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  _Var2 = ComputeUnknownFieldsSize(param_1);
  local_58.end_ = param_2 + (int)_Var2;
  local_58.is_serialization_deterministic_ = aVar1 != (atomic<bool>)0x0;
  local_58.buffer_end_ = (uchar *)0x0;
  local_58.stream_ = (ZeroCopyOutputStream *)0x0;
  local_58.had_error_ = false;
  local_58.aliasing_enabled_ = false;
  local_58.skip_check_consistency = false;
  puVar3 = InternalSerializeUnknownFieldsToArray(param_1,param_2,&local_58);
  return puVar3;
}

// SetType @ 14fa65360

/* private: void __cdecl google::protobuf::UnknownField::SetType(enum
   google::protobuf::UnknownField::Type) __ptr64 */

void __thiscall google::protobuf::UnknownField::SetType(UnknownField *this,Type param_1)

{
  this->type_ = param_1;
  return;
}

// SpaceUsedExcludingSelf @ 14fa65370

/* public: int __cdecl google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelf(void)const __ptr64
    */

int __thiscall google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelf(UnknownFieldSet *this)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  byte bVar8;
  
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  bVar8 = ~((byte)uVar1 >> 2) & 1;
  if (bVar8 == 0) {
    uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if ((bVar8 == 0) && (iVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.capacity, 0 < iVar3)) {
    lVar6 = ((longlong)iVar3 + 1) * 0x10;
  }
  else {
    lVar6 = 0;
    if (bVar8 != 0) {
      puVar5 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
      uVar2 = (uint)uVar1 & 3;
      goto LAB_14fa653da;
    }
  }
  puVar5 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
  if (bVar8 == 0) {
    puVar5 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
LAB_14fa653da:
  iVar3 = (int)lVar6;
  puVar7 = puVar5 + (longlong)(int)uVar2 * 0x10;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 0x10) {
    if (*(int *)(puVar5 + 4) == 3) {
      _Var4 = internal::StringSpaceUsedExcludingSelfLong
                        (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                          (puVar5 + 8));
      lVar6 = lVar6 + 0x20 + _Var4;
    }
    else if (*(int *)(puVar5 + 4) == 4) {
      iVar3 = SpaceUsedExcludingSelf(*(UnknownFieldSet **)(puVar5 + 8));
      lVar6 = lVar6 + 0x10 + (longlong)iVar3;
    }
    iVar3 = (int)lVar6;
  }
  return iVar3;
}

// SpaceUsedExcludingSelfLong @ 14fa65460

/* public: unsigned __int64 __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::SpaceUsedExcludingSelfLong
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  int iVar1;
  
  if (((~(*(byte *)&(this->soo_rep_).field0_0x0 >> 2) & 1) == 0) &&
     (iVar1 = (this->soo_rep_).field0_0x0.long_rep.capacity, 0 < iVar1)) {
    return ((longlong)iVar1 + 1) * 0x10;
  }
  return 0;
}

// SpaceUsedExcludingSelfLong @ 14fa65490

/* public: unsigned __int64 __cdecl
   google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(UnknownFieldSet *this)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  __uint64 _Var4;
  undefined1 *puVar5;
  __uint64 _Var6;
  undefined1 *puVar7;
  byte bVar8;
  
  uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  bVar8 = ~((byte)uVar2 >> 2) & 1;
  if (bVar8 == 0) {
    uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  if ((bVar8 == 0) && (iVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.capacity, 0 < iVar1)) {
    _Var6 = ((longlong)iVar1 + 1) * 0x10;
  }
  else {
    _Var6 = 0;
    if (bVar8 != 0) {
      puVar5 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
      uVar3 = (uint)uVar2 & 3;
      goto LAB_14fa654f3;
    }
  }
  puVar5 = (undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8);
  if (bVar8 == 0) {
    puVar5 = (undefined1 *)(uVar2 & 0xfffffffffffffff8);
  }
  uVar3 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
LAB_14fa654f3:
  puVar7 = puVar5 + (longlong)(int)uVar3 * 0x10;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 0x10) {
    if (*(int *)(puVar5 + 4) == 3) {
      _Var4 = internal::StringSpaceUsedExcludingSelfLong
                        (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                          (puVar5 + 8));
      _Var6 = _Var6 + 0x20 + _Var4;
    }
    else if (*(int *)(puVar5 + 4) == 4) {
      _Var4 = SpaceUsedExcludingSelfLong(*(UnknownFieldSet **)(puVar5 + 8));
      _Var6 = _Var6 + 0x10 + (longlong)(int)_Var4;
    }
  }
  return _Var6;
}

// SpaceUsedLong @ 14fa65570

/* public: unsigned __int64 __cdecl google::protobuf::UnknownFieldSet::SpaceUsedLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::UnknownFieldSet::SpaceUsedLong(UnknownFieldSet *this)

{
  __uint64 _Var1;
  
  _Var1 = SpaceUsedExcludingSelfLong(this);
  return (longlong)(int)_Var1 + 0x10;
}

// SwapSlow @ 14fa65590

/* private: void __cdecl google::protobuf::UnknownFieldSet::SwapSlow(class
   google::protobuf::UnknownFieldSet * __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::SwapSlow(UnknownFieldSet *this,UnknownFieldSet *param_1)

{
  longlong *plVar1;
  int iVar2;
  UnknownFieldSet *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  int *piVar10;
  SooRep_u_0 local_28;
  
  local_28.long_rep.elements_int = 0;
  local_28.short_rep.field1_0x8 = (ShortSooRep_u_8)0x0;
  MergeFrom((UnknownFieldSet *)&local_28.long_rep,this);
  Clear(this);
  MergeFrom(this,param_1);
  Clear(param_1);
  MergeFrom(param_1,(UnknownFieldSet *)&local_28.long_rep);
  uVar8 = local_28.long_rep.elements_int;
  bVar9 = ~((byte)local_28.long_rep.elements_int >> 2) & 1;
  uVar3 = local_28.long_rep.size;
  if (bVar9 != 0) {
    uVar3 = local_28.long_rep.elements_int._0_4_ & 3;
  }
  if (uVar3 != 0) {
    uVar4 = local_28.long_rep.elements_int & 0xfffffffffffffff8;
    if (bVar9 == 0) {
      uVar4 = *(ulonglong *)(uVar4 - 0x10);
    }
    if (uVar4 == 0) {
      uVar3 = local_28.long_rep.size;
      if (bVar9 != 0) {
        uVar3 = local_28.long_rep.elements_int._0_4_ & 3;
      }
      lVar7 = (longlong)(int)uVar3;
      piVar10 = (int *)(local_28.long_rep.elements_int & 0xfffffffffffffff8);
      lVar6 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -1;
        piVar5 = &local_28.long_rep.size;
        if (bVar9 == 0) {
          piVar5 = piVar10;
        }
        iVar2 = *(int *)((longlong)piVar5 + lVar6 + -0xc);
        if (iVar2 == 3) {
          this_01 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     ((longlong)piVar5 + lVar6 + -8);
          if (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _scalar_deleting_destructor_(this_01,1);
          }
        }
        else if ((iVar2 == 4) &&
                (this_00 = *(UnknownFieldSet **)((longlong)piVar5 + lVar6 + -8),
                this_00 != (UnknownFieldSet *)0x0)) {
          ~UnknownFieldSet(this_00);
          ::operator_delete(this_00,0x10);
        }
        lVar6 = lVar6 + -0x10;
      } while (0 < lVar7);
    }
    if (bVar9 != 0) {
      uVar8 = uVar8 & 0xfffffffffffffff8;
    }
  }
  if ((~((byte)uVar8 >> 2) & 1) == 0) {
    plVar1 = (longlong *)((uVar8 & 0xfffffffffffffff8) - 0x10);
    if (*plVar1 == 0) {
      ::operator_delete(plVar1,((longlong)local_28.long_rep.capacity + 1) * 0x10);
    }
  }
  return;
}

// ToIntSize @ 14fa65720

/* int __cdecl google::protobuf::internal::ToIntSize(unsigned __int64) */

int __cdecl google::protobuf::internal::ToIntSize(__uint64 param_1)

{
  return (int)param_1;
}

// Truncate @ 14fa65730

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Truncate(int) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Truncate
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar2 = ~((byte)uVar1 >> 2) & 1;
  if (bVar2 == 0) {
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (param_1 < (int)uVar3) {
    if (bVar2 != 0) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           uVar1 & 0xfffffffffffffff8 | (longlong)param_1;
      return;
    }
    (this->soo_rep_).field0_0x0.long_rep.size = param_1;
  }
  return;
}

// UnknownFieldParse @ 14fa65770

/* char const * __ptr64 __cdecl google::protobuf::internal::UnknownFieldParse(unsigned __int64,class
   google::protobuf::UnknownFieldSet * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::UnknownFieldParse
          (__uint64 param_1,UnknownFieldSet *param_2,char *param_3,ParseContext *param_4)

{
  char *pcVar1;
  UnknownFieldSet *local_res10 [3];
  
  local_res10[0] = param_2;
  pcVar1 = FieldParser<google::protobuf::internal::UnknownFieldParserHelper>
                     (param_1,(UnknownFieldParserHelper *)local_res10,param_3,param_4);
  return pcVar1;
}

// UnknownGroupParse @ 14fa65790

/* char const * __ptr64 __cdecl google::protobuf::internal::UnknownGroupParse(class
   google::protobuf::UnknownFieldSet * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) */

char * __cdecl
google::protobuf::internal::UnknownGroupParse
          (UnknownFieldSet *param_1,char *param_2,ParseContext *param_3)

{
  char *pcVar1;
  UnknownFieldSet *local_res8 [4];
  
  local_res8[0] = param_1;
  pcVar1 = WireFormatParser<google::protobuf::internal::UnknownFieldParserHelper>
                     ((UnknownFieldParserHelper *)local_res8,param_2,param_3);
  return pcVar1;
}

// begin @ 14fa657b0

/* public: class google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField
   const > __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::begin(void)const __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::begin
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong *in_RDX;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  puVar2 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    puVar2 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
  }
  *in_RDX = (longlong)puVar2;
  return;
}

// end @ 14fa657e0

/* public: class google::protobuf::internal::RepeatedIterator<class google::protobuf::UnknownField
   const > __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::end(void)const __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::end
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *in_RDX;
  
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(this->soo_rep_).field0_0x0.long_rep.size;
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    *in_RDX = (longlong)(piVar1 + (longlong)(int)((uint)uVar2 & 3) * 4);
    return;
  }
  *in_RDX = (longlong)*piVar1 * 0x10 + (uVar2 & 0xfffffffffffffff8);
  return;
}

// FUN_15029ece0 @ 15029ece0

void FUN_15029ece0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029ed10 @ 15029ed10

void FUN_15029ed10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50),0x20);
  return;
}

// FUN_15029ed40 @ 15029ed40

void FUN_15029ed40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x20);
  return;
}

// FUN_15029ed70 @ 15029ed70

void FUN_15029ed70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90),0x20);
  return;
}

