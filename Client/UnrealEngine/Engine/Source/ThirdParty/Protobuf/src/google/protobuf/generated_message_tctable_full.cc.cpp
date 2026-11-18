// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 24

// GenericFallbackImpl<google::protobuf::Message,google::protobuf::UnknownFieldSet> @ 14fa30d40

/* private: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::GenericFallbackImpl<class google::protobuf::Message,class
   google::protobuf::UnknownFieldSet>(class google::protobuf::MessageLite * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::
GenericFallbackImpl<google::protobuf::Message,google::protobuf::UnknownFieldSet>
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  InternalMetadata *this;
  uint *puVar1;
  char *pcVar2;
  UnknownFieldSet *pUVar3;
  
  if (param_2 == (char *)0x0) {
    return (char *)&`private:_static_char_const*___ptr64___cdecl_google::protobuf::internal::TcParser::GenericFallbackImpl<google::protobuf::Message,google::protobuf::UnknownFieldSet>(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)'
                    ::__l5::kOps;
  }
  if (param_5->has_bits_offset != 0) {
    puVar1 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)param_5->has_bits_offset);
    *puVar1 = *puVar1 | (uint)param_6;
  }
  if ((((byte)param_4.data & 7) != 4) && ((int)param_4.data != 0)) {
    this = &param_1->_internal_metadata_;
    if (param_5->extension_offset != 0) {
      pcVar2 = ExtensionSet::ParseField
                         ((ExtensionSet *)
                          ((longlong)&param_1->_padding_ + (ulonglong)param_5->extension_offset),
                          param_4.data & 0xffffffff,param_2,
                          (Message *)param_5->class_data->prototype,this,param_3);
      return pcVar2;
    }
    if ((this->ptr_ & 1) == 0) {
      pUVar3 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                         (this);
    }
    else {
      pUVar3 = (UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8);
    }
    pcVar2 = UnknownFieldParse(param_4.data & 0xffffffff,pUVar3,param_2,param_3);
    return pcVar2;
  }
  *(int *)&param_3->_padding_ = (int)param_4.data + -1;
  return param_2;
}

// MessageSetWireFormatParseLoopImpl<google::protobuf::Message> @ 14fa30e30

/* private: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::MessageSetWireFormatParseLoopImpl<class
   google::protobuf::Message>(class google::protobuf::MessageLite * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::MessageSetWireFormatParseLoopImpl<google::protobuf::Message>
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  char *pcVar1;
  
  pcVar1 = ExtensionSet::ParseMessageSet<google::protobuf::Message>
                     ((ExtensionSet *)
                      ((longlong)&param_1->_padding_ + (ulonglong)param_5->extension_offset),param_2
                      ,(Message *)param_5->class_data->prototype,&param_1->_internal_metadata_,
                      param_3);
  return pcVar1;
}

// ParseGroupInlined<`public:_char_const*___ptr64___cdecl_google::protobuf::internal::ExtensionSet::ParseMessageSet<google::protobuf::Message>(char_const*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::internal::InternalMetadata*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'::`10'::<lambda_1>_> @ 14fa30e60

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ParseContext::ParseGroupInlined<class `public: char const * __ptr64
   __cdecl google::protobuf::internal::ExtensionSet::ParseMessageSet<class
   google::protobuf::Message>(char const * __ptr64,class google::protobuf::Message const *
   __ptr64,class google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`10'::<lambda_1> >(char const *
   __ptr64,unsigned int,class `public: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSet<class google::protobuf::Message>(char
   const * __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`10'::<lambda_1> const & __ptr64)
   __ptr64 */

char * __thiscall
google::protobuf::internal::ParseContext::
ParseGroupInlined<_public:_char_const*___ptr64___cdecl_google::protobuf::internal::ExtensionSet::ParseMessageSet<google::protobuf::Message>(char_const*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::internal::InternalMetadata*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64_::_10_::<lambda_1>_>
          (ParseContext *this,char *param_1,uint param_2,<lambda_1> *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  
  piVar1 = &this->depth_;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    this->group_depth_ = this->group_depth_ + 1;
    pcVar3 = ExtensionSet::ParseMessageSetItem
                       (*(ExtensionSet **)param_3,param_1,(Message *)**(undefined8 **)(param_3 + 8),
                        (InternalMetadata *)**(undefined8 **)(param_3 + 0x10),
                        (ParseContext *)**(undefined8 **)(param_3 + 0x18));
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

// ParseMessageSet<google::protobuf::Message> @ 14fa30ed0

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSet<class google::protobuf::Message>(char
   const * __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::ParseMessageSet<google::protobuf::Message>
          (ExtensionSet *this,char *param_1,Message *param_2,InternalMetadata *param_3,
          ParseContext *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *local_38;
  char local_30;
  byte *local_28;
  uint local_20;
  
  do {
    if ((byte *)param_4->_padding_ <= param_1) {
      iVar5 = (int)param_1 - (int)param_4->_padding_;
      if (iVar5 == *(int *)((longlong)&param_4->_padding_ + 4)) {
        if (iVar5 < 1) {
          return (char *)(byte *)param_1;
        }
        if (param_4->_padding_ == 0) {
          return (char *)0x0;
        }
        return (char *)(byte *)param_1;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_4,(int)&local_38,iVar5);
      param_1 = (char *)local_38;
      if (local_30 != '\0') {
        return (char *)local_38;
      }
    }
    bVar2 = *param_1;
    pbVar6 = (byte *)(param_1 + 1);
    uVar7 = (uint)bVar2;
    if (0x7f < bVar2) {
      bVar3 = param_1[1];
      if (bVar3 < 0x80) {
        pbVar6 = (byte *)(param_1 + 2);
        uVar7 = (bVar2 - 0x80) + (uint)bVar3 * 0x80;
      }
      else {
        ReadTagFallback((char *)&local_28,(uint)param_1);
        pbVar6 = local_28;
        uVar7 = local_20;
      }
    }
    if (pbVar6 == (byte *)0x0) {
      return (char *)0x0;
    }
    if (uVar7 == 0xb) {
      piVar1 = &param_4->depth_;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        return (char *)0x0;
      }
      param_4->group_depth_ = param_4->group_depth_ + 1;
      param_1 = ParseMessageSetItem(this,(char *)pbVar6,param_2,param_3,param_4);
      param_4->group_depth_ = param_4->group_depth_ + -1;
      lVar4 = param_4->_padding_;
      param_4->depth_ = param_4->depth_ + 1;
      *(undefined4 *)&param_4->_padding_ = 0;
      if ((int)lVar4 != 0xb) {
        return (char *)0x0;
      }
    }
    else {
      if ((uVar7 == 0) || (((byte)uVar7 & 7) == 4)) {
        *(uint *)&param_4->_padding_ = uVar7 - 1;
        return (char *)pbVar6;
      }
      param_1 = ParseField(this,(ulonglong)uVar7,(char *)pbVar6,param_2,param_3,param_4);
    }
    if ((byte *)param_1 == (byte *)0x0) {
      return (char *)0x0;
    }
  } while( true );
}

// RefAt<unsigned_int> @ 14fa31030

/* public: static unsigned int & __ptr64 __cdecl
   google::protobuf::internal::TcParser::RefAt<unsigned int>(void * __ptr64,unsigned __int64) */

uint * __cdecl
google::protobuf::internal::TcParser::RefAt<unsigned_int>(void *param_1,__uint64 param_2)

{
  return (uint *)((longlong)param_1 + param_2);
}

// RefAt<google::protobuf::internal::ExtensionSet> @ 14fa31040

/* public: static class google::protobuf::internal::ExtensionSet & __ptr64 __cdecl
   google::protobuf::internal::TcParser::RefAt<class google::protobuf::internal::ExtensionSet>(void
   * __ptr64,unsigned __int64) */

ExtensionSet * __cdecl
google::protobuf::internal::TcParser::RefAt<google::protobuf::internal::ExtensionSet>
          (void *param_1,__uint64 param_2)

{
  return (ExtensionSet *)((longlong)param_1 + param_2);
}

// WriteLengthDelimitedToUnknown<google::protobuf::UnknownFieldSet> @ 14fa31050

/* private: static void __cdecl
   google::protobuf::internal::TcParser::WriteLengthDelimitedToUnknown<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::MessageLite * __ptr64,int,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
google::protobuf::internal::TcParser::
WriteLengthDelimitedToUnknown<google::protobuf::UnknownFieldSet>
          (MessageLite *param_1,int param_2,basic_string_view<char,std::char_traits<char>_> *param_3
          )

{
  UnknownFieldSet *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  InternalMetadata *this_01;
  
  this_01 = &param_1->_internal_metadata_;
  if ((this_01->ptr_ & 1) == 0) {
    this = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this_01)
    ;
  }
  else {
    this = (UnknownFieldSet *)((this_01->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  this_00 = UnknownFieldSet::AddLengthDelimited(this,param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00,param_3->_Mydata,param_3->_Mysize);
  return;
}

// WriteVarintToUnknown<google::protobuf::UnknownFieldSet> @ 14fa310b0

/* private: static void __cdecl google::protobuf::internal::TcParser::WriteVarintToUnknown<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::MessageLite * __ptr64,int,int) */

void __cdecl
google::protobuf::internal::TcParser::WriteVarintToUnknown<google::protobuf::UnknownFieldSet>
          (MessageLite *param_1,int param_2,int param_3)

{
  UnknownFieldSet *this;
  InternalMetadata *this_00;
  
  this_00 = &param_1->_internal_metadata_;
  if ((this_00->ptr_ & 1) == 0) {
    this = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this_00)
    ;
  }
  else {
    this = (UnknownFieldSet *)((this_00->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  UnknownFieldSet::AddVarint(this,param_2,(longlong)param_3);
  return;
}

// <lambda_1> @ 14fa31100

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSet<class google::protobuf::Message>(char
   const * __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`10'::<lambda_1>::<lambda_1>(class
   google::protobuf::internal::ExtensionSet * __ptr64,class google::protobuf::Message const *
   __ptr64 & __ptr64,class google::protobuf::internal::InternalMetadata * __ptr64 & __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::ExtensionSet::ParseMessageSet<google::protobuf::Message>(char_const*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::internal::InternalMetadata*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l10::<lambda_1>::<lambda_1>
          (<lambda_1> *this,ExtensionSet *param_1,Message **param_2,InternalMetadata **param_3,
          ParseContext **param_4)

{
  *(ParseContext ***)(this + 0x18) = param_4;
  *(ExtensionSet **)this = param_1;
  *(Message ***)(this + 8) = param_2;
  *(InternalMetadata ***)(this + 0x10) = param_3;
  return this;
}

// operator() @ 14fa31120

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSet<class google::protobuf::Message>(char
   const * __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64'::`10'::<lambda_1>::operator()(char
   const * __ptr64)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::ExtensionSet::ParseMessageSet<google::protobuf::Message>(char_const*___ptr64,google::protobuf::Message_const*___ptr64,google::protobuf::internal::InternalMetadata*___ptr64,google::protobuf::internal::ParseContext*___ptr64)___ptr64'
::__l10::<lambda_1>::operator()(<lambda_1> *this,char *param_1)

{
  google::protobuf::internal::ExtensionSet::ParseMessageSetItem
            (*(ExtensionSet **)this,param_1,(Message *)**(undefined8 **)(this + 8),
             (InternalMetadata *)**(undefined8 **)(this + 0x10),
             (ParseContext *)**(undefined8 **)(this + 0x18));
  return;
}

// ConsumeEndGroup @ 14fa31160

/* public: bool __cdecl google::protobuf::internal::EpsCopyInputStream::ConsumeEndGroup(unsigned
   int) __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::ConsumeEndGroup
          (EpsCopyInputStream *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = this->last_tag_minus_1_;
  this->last_tag_minus_1_ = 0;
  return uVar1 == param_1;
}

// GenericFallback @ 14fa31180

/* public: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::GenericFallback(class google::protobuf::MessageLite *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::GenericFallback
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  InternalMetadata *this;
  uint *puVar1;
  char *pcVar2;
  UnknownFieldSet *pUVar3;
  
  if (param_2 == (char *)0x0) {
    return (char *)&`private:_static_char_const*___ptr64___cdecl_google::protobuf::internal::TcParser::GenericFallbackImpl<google::protobuf::Message,google::protobuf::UnknownFieldSet>(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)'
                    ::__l5::kOps;
  }
  if (param_5->has_bits_offset != 0) {
    puVar1 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)param_5->has_bits_offset);
    *puVar1 = *puVar1 | (uint)param_6;
  }
  if ((((byte)param_4.data & 7) != 4) && ((int)param_4.data != 0)) {
    this = &param_1->_internal_metadata_;
    if (param_5->extension_offset != 0) {
      pcVar2 = ExtensionSet::ParseField
                         ((ExtensionSet *)
                          ((longlong)&param_1->_padding_ + (ulonglong)param_5->extension_offset),
                          param_4.data & 0xffffffff,param_2,
                          (Message *)param_5->class_data->prototype,this,param_3);
      return pcVar2;
    }
    if ((this->ptr_ & 1) == 0) {
      pUVar3 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                         (this);
    }
    else {
      pUVar3 = (UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8);
    }
    pcVar2 = UnknownFieldParse(param_4.data & 0xffffffff,pUVar3,param_2,param_3);
    return pcVar2;
  }
  *(int *)&param_3->_padding_ = (int)param_4.data + -1;
  return param_2;
}

// GetTagFieldNumber @ 14fa31270

/* public: static int __cdecl google::protobuf::internal::WireFormatLite::GetTagFieldNumber(unsigned
   int) */

int __cdecl google::protobuf::internal::WireFormatLite::GetTagFieldNumber(uint param_1)

{
  return param_1 >> 3;
}

// IsExtensionNumber @ 14fa31280

/* public: bool __cdecl google::protobuf::Descriptor::IsExtensionNumber(int)const __ptr64 */

bool __thiscall google::protobuf::Descriptor::IsExtensionNumber(Descriptor *this,int param_1)

{
  ExtensionRange *pEVar1;
  
  pEVar1 = FindExtensionRangeContainingNumber(this,param_1);
  return pEVar1 != (ExtensionRange *)0x0;
}

// MessageSetWireFormatParseLoop @ 14fa312a0

/* public: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::MessageSetWireFormatParseLoop(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::MessageSetWireFormatParseLoop
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  char *pcVar1;
  
  pcVar1 = ExtensionSet::ParseMessageSet<google::protobuf::Message>
                     ((ExtensionSet *)
                      ((longlong)&param_1->_padding_ + (ulonglong)param_5->extension_offset),param_2
                      ,(Message *)param_5->class_data->prototype,&param_1->_internal_metadata_,
                      param_3);
  return pcVar1;
}

// ReadTag @ 14fa312d0

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadTag(char const * __ptr64,unsigned
   int * __ptr64,unsigned int) */

char * __cdecl google::protobuf::internal::ReadTag(char *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char *local_18;
  uint local_10;
  
  bVar1 = *param_1;
  if (bVar1 < 0x80) {
    *param_2 = (uint)bVar1;
    return (char *)(byte *)(param_1 + 1);
  }
  bVar2 = param_1[1];
  if (bVar2 < 0x80) {
    *param_2 = (bVar1 - 0x80) + (uint)bVar2 * 0x80;
    return param_1 + 2;
  }
  ReadTagFallback((char *)&local_18,(uint)param_1);
  *param_2 = local_10;
  return local_18;
}

// ReflectionFallback @ 14fa31340

/* public: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::ReflectionFallback(class google::protobuf::MessageLite *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::ReflectionFallback
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  uint *puVar1;
  Descriptor *this;
  Reflection *this_00;
  DescriptorPool *this_01;
  Metadata *pMVar2;
  FieldDescriptor *pFVar3;
  ExtensionRange *pEVar4;
  char *pcVar5;
  uint uVar6;
  Metadata local_48;
  Metadata local_38;
  
  if (param_2 == (char *)0x0) {
    return (char *)&`private:_static_char_const*___ptr64___cdecl_google::protobuf::internal::TcParser::GenericFallbackImpl<google::protobuf::Message,google::protobuf::UnknownFieldSet>(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)'
                    ::__l5::kOps;
  }
  if (param_5->has_bits_offset != 0) {
    puVar1 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)param_5->has_bits_offset);
    *puVar1 = *puVar1 | (uint)param_6;
  }
  if (((int)param_4.data != 0) && (((byte)param_4.data & 7) != 4)) {
    pMVar2 = protobuf::Message::GetMetadata((Message *)param_1,&local_48);
    this = pMVar2->descriptor;
    pMVar2 = protobuf::Message::GetMetadata((Message *)param_1,&local_38);
    uVar6 = (uint)(param_4.data >> 3) & 0x1fffffff;
    this_00 = pMVar2->reflection;
    pFVar3 = Descriptor::FindFieldByNumber(this,uVar6);
    if ((pFVar3 == (FieldDescriptor *)0x0) &&
       (pEVar4 = Descriptor::FindExtensionRangeContainingNumber(this,uVar6),
       pEVar4 != (ExtensionRange *)0x0)) {
      this_01 = (param_3->data_).pool;
      if (this_01 == (DescriptorPool *)0x0) {
        pFVar3 = Reflection::FindKnownExtensionByNumber(this_00,uVar6);
      }
      else {
        pFVar3 = DescriptorPool::FindExtensionByNumber(this_01,this,uVar6);
      }
    }
    pcVar5 = WireFormat::_InternalParseAndMergeField
                       ((Message *)param_1,param_2,param_3,param_4.data & 0xffffffff,this_00,pFVar3)
    ;
    return pcVar5;
  }
  *(int *)&param_3->_padding_ = (int)param_4.data + -1;
  return param_2;
}

// ReflectionParseLoop @ 14fa31480

/* public: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::ReflectionParseLoop(class google::protobuf::MessageLite *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::ReflectionParseLoop
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  char *pcVar1;
  
  pcVar1 = WireFormat::_InternalParse((Message *)param_1,param_2,param_3);
  return pcVar1;
}

// SetLastTag @ 14fa314a0

/* public: void __cdecl google::protobuf::internal::EpsCopyInputStream::SetLastTag(unsigned int)
   __ptr64 */

void __thiscall
google::protobuf::internal::EpsCopyInputStream::SetLastTag(EpsCopyInputStream *this,uint param_1)

{
  this->last_tag_minus_1_ = param_1 - 1;
  return;
}

// SyncHasbits @ 14fa314b0

/* private: static void __cdecl google::protobuf::internal::TcParser::SyncHasbits(class
   google::protobuf::MessageLite * __ptr64,unsigned __int64,struct
   google::protobuf::internal::TcParseTableBase const * __ptr64) */

void __cdecl
google::protobuf::internal::TcParser::SyncHasbits
          (MessageLite *param_1,__uint64 param_2,TcParseTableBase *param_3)

{
  uint *puVar1;
  
  if (param_3->has_bits_offset != 0) {
    puVar1 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)param_3->has_bits_offset);
    *puVar1 = *puVar1 | (uint)param_2;
  }
  return;
}

// WriteLengthDelimited @ 14fa314d0

/* void __cdecl google::protobuf::internal::WriteLengthDelimited(unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   google::protobuf::UnknownFieldSet * __ptr64) */

void __cdecl
google::protobuf::internal::WriteLengthDelimited
          (uint param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          UnknownFieldSet *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  this = UnknownFieldSet::AddLengthDelimited(param_3,param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,param_2->_Mydata,param_2->_Mysize);
  return;
}

// WriteVarint @ 14fa31500

/* void __cdecl google::protobuf::internal::WriteVarint(unsigned int,unsigned __int64,class
   google::protobuf::UnknownFieldSet * __ptr64) */

void __cdecl
google::protobuf::internal::WriteVarint(uint param_1,__uint64 param_2,UnknownFieldSet *param_3)

{
  UnknownFieldSet::AddVarint(param_3,param_1,param_2);
  return;
}

// default_instance @ 14fa31520

/* public: class google::protobuf::MessageLite const * __ptr64 __cdecl
   google::protobuf::internal::TcParseTableBase::default_instance(void)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::TcParseTableBase::default_instance(TcParseTableBase *this)

{
  return this->class_data->prototype;
}

// tag @ 14fa31530

/* public: unsigned int __cdecl google::protobuf::internal::TcFieldData::tag(void)const __ptr64 */

uint __thiscall google::protobuf::internal::TcFieldData::tag(TcFieldData *this)

{
  return (uint)this->data;
}

