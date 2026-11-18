// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 383

// Hex<google::protobuf::MessageLite_const_> @ 14f921b60

/* public: __cdecl absl::lts_20240722::Hex::Hex<class google::protobuf::MessageLite const >(class
   google::protobuf::MessageLite const * __ptr64,enum absl::lts_20240722::PadSpec) __ptr64 */

Hex * __thiscall
absl::lts_20240722::Hex::Hex<google::protobuf::MessageLite_const_>
          (Hex *this,MessageLite *param_1,PadSpec param_2)

{
  Hex HVar1;
  
  *(MessageLite **)this = param_1;
  if (param_2 == kNoPad) {
    HVar1 = (Hex)0x1;
  }
  else {
    HVar1 = (Hex)(param_2 - 0x40);
    if (param_2 < kSpacePad2) {
      HVar1 = (Hex)param_2;
    }
  }
  this[8] = HVar1;
  HVar1 = (Hex)0x30;
  if (0x41 < param_2) {
    HVar1 = (Hex)0x20;
  }
  this[9] = HVar1;
  return this;
}

// _Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1><> @ 14f921ba0

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct std::pair<void (__cdecl*)(void
   const * __ptr64),void const * __ptr64> >,class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >,1>::_Compressed_pair<class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> >,class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
::
_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1><>
          (_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64><void_(__cdecl*&___ptr64)(void_const*___ptr64),void_const*___ptr64&___ptr64,0> @ 14f921bc0

/* public: __cdecl std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64><void (__cdecl*& __ptr64)(void const *
   __ptr64),void const * __ptr64 & __ptr64,0>(void (__cdecl*& __ptr64)(void const * __ptr64),void
   const * __ptr64 & __ptr64) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>::
pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64><void_(__cdecl*&___ptr64)(void_const*___ptr64),void_const*___ptr64&___ptr64,0>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *this,
          _func_void_void_ptr **param_1,void **param_2)

{
  *(_func_void_void_ptr **)this = *param_1;
  *(void **)(this + 8) = *param_2;
  return this;
}

// ParseContext<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64> @ 14f921be0

/* public: __cdecl google::protobuf::internal::ParseContext::ParseContext<class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64>(int,bool,char const * __ptr64 *
   __ptr64,class google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64) __ptr64 */

ParseContext * __thiscall
google::protobuf::internal::ParseContext::
ParseContext<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64>
          (ParseContext *this,int param_1,bool param_2,char **param_3,ZeroCopyInputStream **param_4)

{
  char *pcVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->depth_ = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  (this->data_).pool = (DescriptorPool *)0x0;
  (this->data_).factory = (MessageFactory *)0x0;
  this->_padding_ = (ulonglong)param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x7fffffff;
  this->group_depth_ = -0x80000000;
  pcVar1 = EpsCopyInputStream::InitFrom((EpsCopyInputStream *)this,*param_4);
  *param_3 = pcVar1;
  return this;
}

// ParseContext<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64,int&___ptr64> @ 14f921c50

/* public: __cdecl google::protobuf::internal::ParseContext::ParseContext<class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64,int & __ptr64>(int,bool,char const
   * __ptr64 * __ptr64,class google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64,int &
   __ptr64) __ptr64 */

ParseContext * __thiscall
google::protobuf::internal::ParseContext::
ParseContext<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64,int&___ptr64>
          (ParseContext *this,int param_1,bool param_2,char **param_3,ZeroCopyInputStream **param_4,
          int *param_5)

{
  ZeroCopyInputStream *pZVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (ulonglong)param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x7fffffff;
  *(undefined4 *)&this->_padding_ = 0;
  this->depth_ = param_1;
  this->group_depth_ = -0x80000000;
  (this->data_).pool = (DescriptorPool *)0x0;
  (this->data_).factory = (MessageFactory *)0x0;
  iVar3 = *param_5;
  pZVar1 = *param_4;
  if (iVar3 == -1) {
    pcVar2 = EpsCopyInputStream::InitFrom((EpsCopyInputStream *)this,pZVar1);
  }
  else {
    *(int *)((longlong)&this->_padding_ + 4) = iVar3;
    pcVar2 = EpsCopyInputStream::InitFrom((EpsCopyInputStream *)this,pZVar1);
    iVar3 = ((int)pcVar2 - (int)this->_padding_) + iVar3;
    *(int *)((longlong)&this->_padding_ + 4) = iVar3;
    iVar4 = 0;
    if (iVar3 < 0) {
      iVar4 = iVar3;
    }
    this->_padding_ = (longlong)iVar4 + this->_padding_;
  }
  *param_3 = pcVar2;
  return this;
}

// ParseContext<std::basic_string_view<char,std::char_traits<char>_>&___ptr64> @ 14f921d00

/* public: __cdecl google::protobuf::internal::ParseContext::ParseContext<class
   std::basic_string_view<char,struct std::char_traits<char> > & __ptr64>(int,bool,char const *
   __ptr64 * __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > & __ptr64)
   __ptr64 */

ParseContext * __thiscall
google::protobuf::internal::ParseContext::
ParseContext<std::basic_string_view<char,std::char_traits<char>_>&___ptr64>
          (ParseContext *this,int param_1,bool param_2,char **param_3,
          basic_string_view<char,std::char_traits<char>_> *param_4)

{
  longlong *_Dst;
  char *_Src;
  ulonglong _Size;
  longlong lVar1;
  
  this->_padding_ = 0;
  _Dst = &this->_padding_;
  *_Dst = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (ulonglong)param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x7fffffff;
  (this->data_).pool = (DescriptorPool *)0x0;
  (this->data_).factory = (MessageFactory *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  this->depth_ = param_1;
  this->group_depth_ = -0x80000000;
  _Src = param_4->_Mydata;
  _Size = param_4->_Mysize;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (_Size < 0x11) {
    if (_Size != 0) {
      memcpy(_Dst,_Src,_Size);
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    lVar1 = (longlong)&this->_padding_ + _Size;
    this->_padding_ = 0;
    this->_padding_ = lVar1;
    this->_padding_ = lVar1;
    if (this->_padding_ == 1) {
      this->_padding_ = (longlong)(_Src + (-0x28 - (longlong)this));
    }
    *param_3 = (char *)_Dst;
  }
  else {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10;
    this->_padding_ = (longlong)_Dst;
    this->_padding_ = (longlong)(_Src + (_Size - 0x10));
    this->_padding_ = (longlong)(_Src + (_Size - 0x10));
    if (this->_padding_ == 1) {
      this->_padding_ = 2;
    }
    *param_3 = _Src;
  }
  return this;
}

// ParseContext<google::protobuf::ZeroCopyCodedInputStream*___ptr64> @ 14f921e20

/* public: __cdecl google::protobuf::internal::ParseContext::ParseContext<class
   google::protobuf::ZeroCopyCodedInputStream * __ptr64>(int,bool,char const * __ptr64 *
   __ptr64,class google::protobuf::ZeroCopyCodedInputStream * __ptr64 && __ptr64) __ptr64 */

ParseContext * __thiscall
google::protobuf::internal::ParseContext::
ParseContext<google::protobuf::ZeroCopyCodedInputStream*___ptr64>
          (ParseContext *this,int param_1,bool param_2,char **param_3,
          ZeroCopyCodedInputStream **param_4)

{
  char *pcVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->depth_ = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  (this->data_).pool = (DescriptorPool *)0x0;
  (this->data_).factory = (MessageFactory *)0x0;
  this->_padding_ = (ulonglong)param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x7fffffff;
  this->group_depth_ = -0x80000000;
  pcVar1 = EpsCopyInputStream::InitFrom((EpsCopyInputStream *)this,(ZeroCopyInputStream *)*param_4);
  *param_3 = pcVar1;
  return this;
}

// AlphaNum<absl::lts_20240722::Hex,void> @ 14f921e90

/* public: __cdecl absl::lts_20240722::AlphaNum::AlphaNum<struct
   absl::lts_20240722::Hex,void>(struct absl::lts_20240722::Hex const & __ptr64,class
   absl::lts_20240722::strings_internal::StringifySink && __ptr64) __ptr64 */

AlphaNum * __thiscall
absl::lts_20240722::AlphaNum::AlphaNum<absl::lts_20240722::Hex,void>
          (AlphaNum *this,Hex *param_1,StringifySink *param_2)

{
  strings_internal::ExtractStringification<absl::lts_20240722::Hex>(&this->piece_,param_2,param_1);
  return this;
}

// optional<std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>,0> @ 14f921ec0

/* public: __cdecl std::optional<class std::basic_string_view<char,struct std::char_traits<char> >
   >::optional<class std::basic_string_view<char,struct std::char_traits<char> > ><class
   std::basic_string_view<char,struct std::char_traits<char> >,0>(class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64) __ptr64 */

optional<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::optional<std::basic_string_view<char,std::char_traits<char>_>_>::
optional<std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>,0>
          (optional<std::basic_string_view<char,std::char_traits<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = param_1->_Mydata;
  uVar2 = param_1->_Mysize;
  this->field_0x10 = 1;
  *(char **)this = pcVar1;
  *(ulong64 *)&this->field_0x8 = uVar2;
  return this;
}

// _Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>_> @ 14f921ee0

/* public: __cdecl std::_Optional_construct_base<class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Optional_construct_base<class std::basic_string_view<char,struct
   std::char_traits<char> > ><class std::basic_string_view<char,struct std::char_traits<char> >
   >(struct std::in_place_t,class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_>::
_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>_>
          (_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> *this,
          in_place_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = param_2->_Mydata;
  uVar2 = param_2->_Mysize;
  this->field_0x10 = 1;
  *(char **)this = pcVar1;
  *(ulong64 *)&this->field_0x8 = uVar2;
  return this;
}

// _Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1><std::basic_string_view<char,std::char_traits<char>_>_> @ 14f921f00

/* public: __cdecl std::_Optional_destruct_base<class std::basic_string_view<char,struct
   std::char_traits<char> >,1>::_Optional_destruct_base<class std::basic_string_view<char,struct
   std::char_traits<char> >,1><class std::basic_string_view<char,struct std::char_traits<char> >
   >(struct std::in_place_t,class std::basic_string_view<char,struct std::char_traits<char> > &&
   __ptr64) __ptr64 */

_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1> * __thiscall
std::_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1>::
_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1><std::basic_string_view<char,std::char_traits<char>_>_>
          (_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1> *this,
          in_place_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = param_2->_Mydata;
  uVar2 = param_2->_Mysize;
  this->_Has_value = true;
  (this->field0_0x0)._Value._Mydata = pcVar1;
  (this->field0_0x0)._Value._Mysize = uVar2;
  return this;
}

// operator<<<5> @ 14f921f20

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<5>(char const (& __ptr64)[5]) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<5>(LogMessage *this,char *param_1)

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

// operator<<<6> @ 14f921f70

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<6>(char const (& __ptr64)[6]) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<6>(LogMessage *this,char *param_1)

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

// operator<<<17> @ 14f921fc0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<17>(char const (& __ptr64)[17]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<17>(LogMessage *this,char *param_1)

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

// operator<<<40> @ 14f922010

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<40>(char const (& __ptr64)[40]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<40>(LogMessage *this,char *param_1)

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

// operator<<<41> @ 14f922060

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<41>(char const (& __ptr64)[41]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<41>(LogMessage *this,char *param_1)

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

// operator<<<49> @ 14f9220b0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<49>(char const (& __ptr64)[49]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<49>(LogMessage *this,char *param_1)

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

// operator<<<53> @ 14f922100

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<53>(char const (& __ptr64)[53]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<53>(LogMessage *this,char *param_1)

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

// operator<<<57> @ 14f922150

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<57>(char const (& __ptr64)[57]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<57>(LogMessage *this,char *param_1)

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

// operator<<<155> @ 14f9221a0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<155>(char const (& __ptr64)[155])
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<155>(LogMessage *this,char *param_1)

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

// AbslStringify<absl::lts_20240722::strings_internal::StringifySink> @ 14f9221f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl absl::lts_20240722::AbslStringify<class
   absl::lts_20240722::strings_internal::StringifySink>(class
   absl::lts_20240722::strings_internal::StringifySink & __ptr64,struct absl::lts_20240722::Hex) */

void __cdecl
absl::lts_20240722::AbslStringify<absl::lts_20240722::strings_internal::StringifySink>
          (StringifySink *param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  basic_string_view<char,std::char_traits<char>_> local_58;
  undefined1 local_48 [16];
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar5 = *param_2;
  local_38 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x38) * 2);
  local_36 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x30 & 0xff) * 2);
  local_34 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x28 & 0xff) * 2);
  local_32 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x20 & 0xff) * 2);
  local_30 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x18 & 0xff) * 2);
  local_2e = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 0x10 & 0xff) * 2);
  local_2c = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 >> 8 & 0xff) * 2);
  uVar4 = uVar5 | 1;
  local_2a = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar5 & 0xff) * 2);
  if (__isa_available < 5) {
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = 0x3f - (int)lVar2;
  }
  else {
    iVar3 = (int)LZCOUNT(uVar4);
  }
  uVar5 = (ulonglong)(byte)param_2[1];
  local_58._Mysize = 0x10 - (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  local_58._Mydata = (char *)((longlong)local_28 + -local_58._Mysize);
  if (local_58._Mysize < uVar5) {
    cVar1 = *(char *)((longlong)param_2 + 9);
    memset(local_48,(int)cVar1,0x10);
    memset((void *)((longlong)&local_38 + -local_58._Mysize),(int)cVar1,0x10);
    local_58._Mydata = (char *)((longlong)local_28 - uVar5);
    local_58._Mysize = uVar5;
    strings_internal::StringifySink::Append(param_1,&local_58);
  }
  else {
    strings_internal::StringifySink::Append(param_1,&local_58);
  }
  return;
}

// AllocateInternal<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,0> @ 14f922380

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateInternal<struct
   google::protobuf::internal::InternalMetadata::Container<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,0>(void) __ptr64 */

void * __thiscall
google::protobuf::Arena::
AllocateInternal<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,0>
          (Arena *this)

{
  void *pvVar1;
  
  pvVar1 = AllocateAlignedWithCleanup
                     (this,0x28,8,
                      internal::cleanup::
                      arena_destruct_object<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     );
  return pvVar1;
}

// Ceil<void> @ 14f9223a0

/* public: void * __ptr64 __cdecl google::protobuf::internal::ArenaAlign::Ceil<void>(void *
   __ptr64)const __ptr64 */

void * __thiscall google::protobuf::internal::ArenaAlign::Ceil<void>(ArenaAlign *this,void *param_1)

{
  return (void *)((longlong)param_1 + (this->align - 1) & ~(this->align - 1));
}

// Check_EQImpl<google::protobuf::internal::ClassData_const*___ptr64,google::protobuf::internal::ClassData_const*___ptr64> @ 14f9223c0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<struct
   google::protobuf::internal::ClassData const * __ptr64,struct
   google::protobuf::internal::ClassData const * __ptr64>(struct
   google::protobuf::internal::ClassData const * __ptr64 const & __ptr64,struct
   google::protobuf::internal::ClassData const * __ptr64 const & __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
Check_EQImpl<google::protobuf::internal::ClassData_const*___ptr64,google::protobuf::internal::ClassData_const*___ptr64>
          (ClassData **param_1,ClassData **param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 == *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>(*param_1,*param_2,param_3);
  return pbVar1;
}

// Check_EQImpl<unsigned___int64,unsigned___int64> @ 14f9223e0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<unsigned __int64,unsigned
   __int64>(unsigned __int64 const & __ptr64,unsigned __int64 const & __ptr64,char const * __ptr64)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_EQImpl<unsigned___int64,unsigned___int64>
          (__uint64 *param_1,__uint64 *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 == *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<unsigned___int64,unsigned___int64>(*param_1,*param_2,param_3);
  return pbVar1;
}

// Create<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14f922400

/* public: static struct google::protobuf::internal::InternalMetadata::Container<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > * __ptr64
   __cdecl google::protobuf::Arena::Create<struct
   google::protobuf::internal::InternalMetadata::Container<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(class google::protobuf::Arena * __ptr64)
    */

Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __cdecl
google::protobuf::Arena::
Create<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (Arena *param_1)

{
  Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pCVar1;
  
  if (param_1 == (Arena *)0x0) {
    pCVar1 = ::operator_new(0x28);
    if (pCVar1 == (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                   *)0x0) {
      return (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0
      ;
    }
  }
  else {
    pCVar1 = AllocateAlignedWithCleanup
                       (param_1,0x28,8,
                        internal::cleanup::
                        arena_destruct_object<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                       );
  }
  *(undefined8 *)pCVar1 = 0;
  *(undefined8 *)(pCVar1 + 8) = 0;
  *(undefined8 *)(pCVar1 + 0x10) = 0;
  *(undefined8 *)(pCVar1 + 0x18) = 0;
  *(undefined8 *)(pCVar1 + 0x20) = 0xf;
  pCVar1[8] = (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>)0x0;
  return pCVar1;
}

// DoClear<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f922460

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoClear<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void) __ptr64
    */

void __thiscall
google::protobuf::internal::InternalMetadata::
DoClear<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  if ((this->ptr_ & 1) == 0) {
    pbVar2 = mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       (this);
  }
  else {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    pcVar1 = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    *pcVar1 = '\0';
    return;
  }
  (pbVar2->_Mypair)._Myval2._Mysize = 0;
  (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return;
}

// DoMergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9224b0

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoMergeFrom<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::
DoMergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  if ((this->ptr_ & 1) == 0) {
    this_00 = mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                        (this);
  }
  else {
    this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              ((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  p_Var1 = &param_1->_Mypair;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (this_00,(char *)param_1,(p_Var1->_Myval2)._Mysize);
  return;
}

// DoSwap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f922500

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoSwap<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::
DoSwap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  
  if ((this->ptr_ & 1) == 0) {
    pbVar7 = mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       (this);
  }
  else {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  if (pbVar7 != param_1) {
    uVar1 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
    pcVar2 = (pbVar7->_Mypair)._Myval2._Bx._Ptr;
    uVar3 = *(undefined8 *)((longlong)&(pbVar7->_Mypair)._Myval2._Bx + 8);
    uVar4 = (pbVar7->_Mypair)._Myval2._Mysize;
    uVar5 = (pbVar7->_Mypair)._Myval2._Myres;
    (pbVar7->_Mypair)._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
    *(undefined8 *)((longlong)&(pbVar7->_Mypair)._Myval2._Bx + 8) = uVar1;
    uVar6 = (param_1->_Mypair)._Myval2._Myres;
    (pbVar7->_Mypair)._Myval2._Mysize = (param_1->_Mypair)._Myval2._Mysize;
    (pbVar7->_Mypair)._Myval2._Myres = uVar6;
    (param_1->_Mypair)._Myval2._Bx._Ptr = pcVar2;
    *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = uVar3;
    (param_1->_Mypair)._Myval2._Mysize = uVar4;
    (param_1->_Mypair)._Myval2._Myres = uVar5;
  }
  return;
}

// ExtractStringification<absl::lts_20240722::Hex> @ 14f922550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::strings_internal::ExtractStringification<struct
   absl::lts_20240722::Hex>(class absl::lts_20240722::strings_internal::StringifySink &
   __ptr64,struct absl::lts_20240722::Hex const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::strings_internal::ExtractStringification<absl::lts_20240722::Hex>
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          StringifySink *param_1,Hex *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  StringifySink *pSVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  basic_string_view<char,std::char_traits<char>_> local_68;
  undefined1 local_58 [16];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  auVar1 = *(undefined1 (*) [16])param_2;
  uVar6 = auVar1._0_8_;
  local_48 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x38) * 2);
  local_46 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x30 & 0xff) * 2);
  local_44 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x28 & 0xff) * 2);
  local_42 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x20 & 0xff) * 2);
  local_40 = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x18 & 0xff) * 2);
  local_3e = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 0x10 & 0xff) * 2);
  local_3c = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 >> 8 & 0xff) * 2);
  uVar4 = uVar6 | 1;
  local_3a = *(undefined2 *)
              (
              "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
              + (uVar6 & 0xff) * 2);
  if (__isa_available < 5) {
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = 0x3f - (int)lVar2;
  }
  else {
    iVar3 = (int)LZCOUNT(uVar4);
  }
  local_68._Mysize = 0x10 - (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  local_68._Mydata = (char *)((longlong)local_38 + -local_68._Mysize);
  uVar4 = (ulonglong)(auVar1._8_4_ & 0xff);
  if (local_68._Mysize < uVar4) {
    memset(local_58,(int)auVar1[9],0x10);
    memset((void *)((longlong)&local_48 + -local_68._Mysize),(int)auVar1[9],0x10);
    local_68._Mydata = (char *)((longlong)local_38 - uVar4);
    local_68._Mysize = uVar4;
    StringifySink::Append(param_1,&local_68);
  }
  else {
    StringifySink::Append(param_1,&local_68);
  }
  pSVar5 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pSVar5 = *(StringifySink **)param_1;
  }
  __return_storage_ptr__->_Mysize = *(ulong64 *)(param_1 + 0x10);
  __return_storage_ptr__->_Mydata = (char *)pSVar5;
  return __return_storage_ptr__;
}

// GetReferenceableValue<google::protobuf::internal::ClassData_const*___ptr64> @ 14f922720

/* struct google::protobuf::internal::ClassData const * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::GetReferenceableValue<struct
   google::protobuf::internal::ClassData const * __ptr64>(struct
   google::protobuf::internal::ClassData const * __ptr64 const & __ptr64) */

ClassData ** __cdecl
absl::lts_20240722::log_internal::
GetReferenceableValue<google::protobuf::internal::ClassData_const*___ptr64>(ClassData **param_1)

{
  return param_1;
}

// Launder<google::protobuf::MessageLite> @ 14f922730

/* class google::protobuf::MessageLite * __ptr64 __cdecl google::protobuf::internal::Launder<class
   google::protobuf::MessageLite>(class google::protobuf::MessageLite * __ptr64) */

MessageLite * __cdecl
google::protobuf::internal::Launder<google::protobuf::MessageLite>(MessageLite *param_1)

{
  return param_1;
}

// MergeFromImpl<1> @ 14f922740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<1>(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class google::protobuf::MessageLite *
   __ptr64,struct google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<1>
          (ZeroCopyInputStream *param_1,MessageLite *param_2,TcParseTableBase *param_3,
          ParseFlags param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  TcParseTableBase *local_d8;
  undefined8 local_d0;
  ushort *local_c0;
  char local_b8;
  ParseContext local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8._padding_ = 1;
  local_a8._padding_ = 0;
  local_a8._padding_._0_4_ = 0;
  local_a8._padding_._4_4_ = 0x7fffffff;
  local_a8.depth_ = io::CodedInputStream::default_recursion_limit_;
  local_a8.group_depth_ = -0x80000000;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8.data_.pool = (DescriptorPool *)0x0;
  local_a8.data_.factory = (MessageFactory *)0x0;
  puVar2 = (ushort *)EpsCopyInputStream::InitFrom((EpsCopyInputStream *)&local_a8,param_1);
  do {
    if ((ulonglong)local_a8._padding_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_a8._padding_;
      if (iVar3 == local_a8._padding_._4_4_) {
        if ((0 < iVar3) && (local_a8._padding_ == 0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f922835:
        if (param_3->has_post_loop_handler != 0) {
          puVar2 = (ushort *)(*param_3->post_loop_handler)(param_2,(char *)puVar2,&local_a8);
        }
        if ((puVar2 == (ushort *)0x0) || ((int)local_a8._padding_ != 1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_14f925780(&local_a8,param_2,param_4);
        }
        return (bool)uVar1;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)&local_a8,(int)&local_c0,iVar3);
      puVar2 = local_c0;
      if (local_b8 != '\0') goto LAB_14f922835;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(param_3->fast_idx_mask >> 3);
    local_d0 = 0;
    local_d8 = param_3;
    puVar2 = (ushort *)
             (**(code **)(&param_3[1].has_bits_offset + uVar4 * 8))
                       (param_2,puVar2,&local_a8,
                        (ulonglong)*puVar2 ^
                        *(ulonglong *)(&param_3[1].fast_idx_mask + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || ((int)local_a8._padding_ != 0)) goto LAB_14f922835;
  } while( true );
}

// MergeFromImpl<1> @ 14f922890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<1>(struct
   google::protobuf::internal::BoundedZCIS,class google::protobuf::MessageLite * __ptr64,struct
   google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<1>
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  ushort *local_c0;
  char local_b8;
  EpsCopyInputStream local_a8;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar3 = *(int *)(param_1 + 1);
  local_a8.zcis_ = (ZeroCopyInputStream *)0x0;
  local_a8.aliasing_ = 1;
  local_a8.last_tag_minus_1_ = 0;
  local_a8.overall_limit_ = 0x7fffffff;
  local_50 = io::CodedInputStream::default_recursion_limit_;
  local_4c = 0x80000000;
  local_48 = 0;
  uStack_40 = 0;
  local_a8.patch_buffer_[0] = '\0';
  local_a8.patch_buffer_[1] = '\0';
  local_a8.patch_buffer_[2] = '\0';
  local_a8.patch_buffer_[3] = '\0';
  local_a8.patch_buffer_[4] = '\0';
  local_a8.patch_buffer_[5] = '\0';
  local_a8.patch_buffer_[6] = '\0';
  local_a8.patch_buffer_[7] = '\0';
  local_a8.patch_buffer_[8] = '\0';
  local_a8.patch_buffer_[9] = '\0';
  local_a8.patch_buffer_[10] = '\0';
  local_a8.patch_buffer_[0xb] = '\0';
  local_a8.patch_buffer_[0xc] = '\0';
  local_a8.patch_buffer_[0xd] = '\0';
  local_a8.patch_buffer_[0xe] = '\0';
  local_a8.patch_buffer_[0xf] = '\0';
  local_a8.patch_buffer_[0x10] = '\0';
  local_a8.patch_buffer_[0x11] = '\0';
  local_a8.patch_buffer_[0x12] = '\0';
  local_a8.patch_buffer_[0x13] = '\0';
  local_a8.patch_buffer_[0x14] = '\0';
  local_a8.patch_buffer_[0x15] = '\0';
  local_a8.patch_buffer_[0x16] = '\0';
  local_a8.patch_buffer_[0x17] = '\0';
  local_a8.patch_buffer_[0x18] = '\0';
  local_a8.patch_buffer_[0x19] = '\0';
  local_a8.patch_buffer_[0x1a] = '\0';
  local_a8.patch_buffer_[0x1b] = '\0';
  local_a8.patch_buffer_[0x1c] = '\0';
  local_a8.patch_buffer_[0x1d] = '\0';
  local_a8.patch_buffer_[0x1e] = '\0';
  local_a8.patch_buffer_[0x1f] = '\0';
  if (iVar3 == -1) {
    puVar2 = (ushort *)EpsCopyInputStream::InitFrom(&local_a8,(ZeroCopyInputStream *)*param_1);
  }
  else {
    local_a8.overall_limit_ = iVar3;
    puVar2 = (ushort *)EpsCopyInputStream::InitFrom(&local_a8,(ZeroCopyInputStream *)*param_1);
    local_a8.limit_ = ((int)puVar2 - (int)local_a8.buffer_end_) + iVar3;
    iVar3 = 0;
    if (local_a8.limit_ < 0) {
      iVar3 = local_a8.limit_;
    }
    local_a8.limit_end_ =
         (char *)((longlong)iVar3 + CONCAT44(local_a8.buffer_end_._4_4_,(int)local_a8.buffer_end_));
  }
  do {
    if (local_a8.limit_end_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_a8.buffer_end_;
      if (iVar3 == local_a8.limit_) {
        if ((0 < iVar3) && (local_a8.next_chunk_ == (char *)0x0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f9229b7:
        if ((*(byte *)(param_3 + 9) & 1) != 0) {
          puVar2 = (ushort *)(**(code **)(param_3 + 0x28))(param_2,puVar2,&local_a8);
        }
        if (puVar2 != (ushort *)0x0) {
          iVar3 = ((int)local_a8.buffer_end_ - (int)puVar2) + local_a8.size_;
          if (local_a8.next_chunk_ == local_a8.patch_buffer_) {
            iVar3 = ((int)local_a8.buffer_end_ - (int)puVar2) + 0x10;
          }
          if (0 < iVar3) {
            (**(code **)((longlong)*local_a8.zcis_ + 0x10))(local_a8.zcis_,iVar3);
            local_a8.overall_limit_ = local_a8.overall_limit_ + iVar3;
          }
          if (local_a8.last_tag_minus_1_ == 0) {
            uVar1 = FUN_14f925780(&local_a8,param_2,param_4);
            return (bool)uVar1;
          }
        }
        return false;
      }
      EpsCopyInputStream::DoneFallback(&local_a8,(int)&local_c0,iVar3);
      puVar2 = local_c0;
      if (local_b8 != '\0') goto LAB_14f9229b7;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(*(byte *)(param_3 + 8) >> 3);
    local_d0 = 0;
    local_d8 = param_3;
    puVar2 = (ushort *)
             (**(code **)(param_3 + 0x38 + uVar4 * 0x10))
                       (param_2,puVar2,&local_a8,
                        (ulonglong)*puVar2 ^ *(ulonglong *)(param_3 + 0x40 + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || (local_a8.last_tag_minus_1_ != 0)) goto LAB_14f9229b7;
  } while( true );
}

// MergeFromImpl<1> @ 14f922a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<1>(class
   std::basic_string_view<char,struct std::char_traits<char> >,class google::protobuf::MessageLite *
   __ptr64,struct google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<1>
          (basic_string_view<char,std::char_traits<char>_> *param_1,MessageLite *param_2,
          TcParseTableBase *param_3,ParseFlags param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStackY_d8 [32];
  ushort *local_a8;
  char local_a0;
  ParseContext local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ParseContext::ParseContext<std::basic_string_view<char,std::char_traits<char>_>&___ptr64>
            (&local_98,io::CodedInputStream::default_recursion_limit_,true,(char **)&local_a8,
             param_1);
  puVar2 = local_a8;
  do {
    if ((ulonglong)local_98._padding_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_98._padding_;
      if (iVar3 == local_98._padding_._4_4_) {
        if ((0 < iVar3) && (local_98._padding_ == 0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f922b3a:
        if (param_3->has_post_loop_handler != 0) {
          puVar2 = (ushort *)(*param_3->post_loop_handler)(param_2,(char *)puVar2,&local_98);
        }
        if ((puVar2 == (ushort *)0x0) || ((int)local_98._padding_ != 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_14f925780(&local_98,param_2,param_4);
        }
        return (bool)uVar1;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)&local_98,(int)&local_a8,iVar3);
      puVar2 = local_a8;
      if (local_a0 != '\0') goto LAB_14f922b3a;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(param_3->fast_idx_mask >> 3);
    puVar2 = (ushort *)
             (**(code **)(&param_3[1].has_bits_offset + uVar4 * 8))
                       (param_2,puVar2,&local_98,
                        (ulonglong)*puVar2 ^
                        *(ulonglong *)(&param_3[1].fast_idx_mask + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || ((int)local_98._padding_ != 0)) goto LAB_14f922b3a;
  } while( true );
}

// MergeFromImpl<0> @ 14f922ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<0>(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class google::protobuf::MessageLite *
   __ptr64,struct google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<0>
          (ZeroCopyInputStream *param_1,MessageLite *param_2,TcParseTableBase *param_3,
          ParseFlags param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  TcParseTableBase *local_d8;
  undefined8 local_d0;
  ushort *local_c0;
  char local_b8;
  ParseContext local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_._0_4_ = 0;
  local_a8._padding_._4_4_ = 0x7fffffff;
  local_a8.depth_ = io::CodedInputStream::default_recursion_limit_;
  local_a8.group_depth_ = -0x80000000;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8.data_.pool = (DescriptorPool *)0x0;
  local_a8.data_.factory = (MessageFactory *)0x0;
  puVar2 = (ushort *)EpsCopyInputStream::InitFrom((EpsCopyInputStream *)&local_a8,param_1);
  do {
    if ((ulonglong)local_a8._padding_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_a8._padding_;
      if (iVar3 == local_a8._padding_._4_4_) {
        if ((0 < iVar3) && (local_a8._padding_ == 0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f922c95:
        if (param_3->has_post_loop_handler != 0) {
          puVar2 = (ushort *)(*param_3->post_loop_handler)(param_2,(char *)puVar2,&local_a8);
        }
        if ((puVar2 == (ushort *)0x0) || ((int)local_a8._padding_ != 1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_14f925780(&local_a8,param_2,param_4);
        }
        return (bool)uVar1;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)&local_a8,(int)&local_c0,iVar3);
      puVar2 = local_c0;
      if (local_b8 != '\0') goto LAB_14f922c95;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(param_3->fast_idx_mask >> 3);
    local_d0 = 0;
    local_d8 = param_3;
    puVar2 = (ushort *)
             (**(code **)(&param_3[1].has_bits_offset + uVar4 * 8))
                       (param_2,puVar2,&local_a8,
                        (ulonglong)*puVar2 ^
                        *(ulonglong *)(&param_3[1].fast_idx_mask + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || ((int)local_a8._padding_ != 0)) goto LAB_14f922c95;
  } while( true );
}

// MergeFromImpl<0> @ 14f922cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<0>(struct
   google::protobuf::internal::BoundedZCIS,class google::protobuf::MessageLite * __ptr64,struct
   google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<0>
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  ushort *local_c0;
  char local_b8;
  EpsCopyInputStream local_a8;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar3 = *(int *)(param_1 + 1);
  local_a8.zcis_ = (ZeroCopyInputStream *)0x0;
  local_a8.aliasing_ = 0;
  local_a8.last_tag_minus_1_ = 0;
  local_a8.overall_limit_ = 0x7fffffff;
  local_50 = io::CodedInputStream::default_recursion_limit_;
  local_4c = 0x80000000;
  local_48 = 0;
  uStack_40 = 0;
  local_a8.patch_buffer_[0] = '\0';
  local_a8.patch_buffer_[1] = '\0';
  local_a8.patch_buffer_[2] = '\0';
  local_a8.patch_buffer_[3] = '\0';
  local_a8.patch_buffer_[4] = '\0';
  local_a8.patch_buffer_[5] = '\0';
  local_a8.patch_buffer_[6] = '\0';
  local_a8.patch_buffer_[7] = '\0';
  local_a8.patch_buffer_[8] = '\0';
  local_a8.patch_buffer_[9] = '\0';
  local_a8.patch_buffer_[10] = '\0';
  local_a8.patch_buffer_[0xb] = '\0';
  local_a8.patch_buffer_[0xc] = '\0';
  local_a8.patch_buffer_[0xd] = '\0';
  local_a8.patch_buffer_[0xe] = '\0';
  local_a8.patch_buffer_[0xf] = '\0';
  local_a8.patch_buffer_[0x10] = '\0';
  local_a8.patch_buffer_[0x11] = '\0';
  local_a8.patch_buffer_[0x12] = '\0';
  local_a8.patch_buffer_[0x13] = '\0';
  local_a8.patch_buffer_[0x14] = '\0';
  local_a8.patch_buffer_[0x15] = '\0';
  local_a8.patch_buffer_[0x16] = '\0';
  local_a8.patch_buffer_[0x17] = '\0';
  local_a8.patch_buffer_[0x18] = '\0';
  local_a8.patch_buffer_[0x19] = '\0';
  local_a8.patch_buffer_[0x1a] = '\0';
  local_a8.patch_buffer_[0x1b] = '\0';
  local_a8.patch_buffer_[0x1c] = '\0';
  local_a8.patch_buffer_[0x1d] = '\0';
  local_a8.patch_buffer_[0x1e] = '\0';
  local_a8.patch_buffer_[0x1f] = '\0';
  if (iVar3 == -1) {
    puVar2 = (ushort *)EpsCopyInputStream::InitFrom(&local_a8,(ZeroCopyInputStream *)*param_1);
  }
  else {
    local_a8.overall_limit_ = iVar3;
    puVar2 = (ushort *)EpsCopyInputStream::InitFrom(&local_a8,(ZeroCopyInputStream *)*param_1);
    local_a8.limit_ = ((int)puVar2 - (int)local_a8.buffer_end_) + iVar3;
    iVar3 = 0;
    if (local_a8.limit_ < 0) {
      iVar3 = local_a8.limit_;
    }
    local_a8.limit_end_ =
         (char *)((longlong)iVar3 + CONCAT44(local_a8.buffer_end_._4_4_,(int)local_a8.buffer_end_));
  }
  do {
    if (local_a8.limit_end_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_a8.buffer_end_;
      if (iVar3 == local_a8.limit_) {
        if ((0 < iVar3) && (local_a8.next_chunk_ == (char *)0x0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f922e15:
        if ((*(byte *)(param_3 + 9) & 1) != 0) {
          puVar2 = (ushort *)(**(code **)(param_3 + 0x28))(param_2,puVar2,&local_a8);
        }
        if (puVar2 != (ushort *)0x0) {
          iVar3 = ((int)local_a8.buffer_end_ - (int)puVar2) + local_a8.size_;
          if (local_a8.next_chunk_ == local_a8.patch_buffer_) {
            iVar3 = ((int)local_a8.buffer_end_ - (int)puVar2) + 0x10;
          }
          if (0 < iVar3) {
            (**(code **)((longlong)*local_a8.zcis_ + 0x10))(local_a8.zcis_,iVar3);
            local_a8.overall_limit_ = local_a8.overall_limit_ + iVar3;
          }
          if (local_a8.last_tag_minus_1_ == 0) {
            uVar1 = FUN_14f925780(&local_a8,param_2,param_4);
            return (bool)uVar1;
          }
        }
        return false;
      }
      EpsCopyInputStream::DoneFallback(&local_a8,(int)&local_c0,iVar3);
      puVar2 = local_c0;
      if (local_b8 != '\0') goto LAB_14f922e15;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(*(byte *)(param_3 + 8) >> 3);
    local_d0 = 0;
    local_d8 = param_3;
    puVar2 = (ushort *)
             (**(code **)(param_3 + 0x38 + uVar4 * 0x10))
                       (param_2,puVar2,&local_a8,
                        (ulonglong)*puVar2 ^ *(ulonglong *)(param_3 + 0x40 + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || (local_a8.last_tag_minus_1_ != 0)) goto LAB_14f922e15;
  } while( true );
}

// MergeFromImpl<0> @ 14f922ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<0>(class
   std::basic_string_view<char,struct std::char_traits<char> >,class google::protobuf::MessageLite *
   __ptr64,struct google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<0>
          (basic_string_view<char,std::char_traits<char>_> *param_1,MessageLite *param_2,
          TcParseTableBase *param_3,ParseFlags param_4)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStackY_d8 [32];
  ushort *local_a8;
  char local_a0;
  ParseContext local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ParseContext::ParseContext<std::basic_string_view<char,std::char_traits<char>_>&___ptr64>
            (&local_98,io::CodedInputStream::default_recursion_limit_,false,(char **)&local_a8,
             param_1);
  puVar2 = local_a8;
  do {
    if ((ulonglong)local_98._padding_ <= puVar2) {
      iVar3 = (int)puVar2 - (int)local_98._padding_;
      if (iVar3 == local_98._padding_._4_4_) {
        if ((0 < iVar3) && (local_98._padding_ == 0)) {
          puVar2 = (ushort *)0x0;
        }
LAB_14f922f8a:
        if (param_3->has_post_loop_handler != 0) {
          puVar2 = (ushort *)(*param_3->post_loop_handler)(param_2,(char *)puVar2,&local_98);
        }
        if ((puVar2 == (ushort *)0x0) || ((int)local_98._padding_ != 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_14f925780(&local_98,param_2,param_4);
        }
        return (bool)uVar1;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)&local_98,(int)&local_a8,iVar3);
      puVar2 = local_a8;
      if (local_a0 != '\0') goto LAB_14f922f8a;
    }
    uVar4 = (ulonglong)(*puVar2 >> 3) & (ulonglong)(param_3->fast_idx_mask >> 3);
    puVar2 = (ushort *)
             (**(code **)(&param_3[1].has_bits_offset + uVar4 * 8))
                       (param_2,puVar2,&local_98,
                        (ulonglong)*puVar2 ^
                        *(ulonglong *)(&param_3[1].fast_idx_mask + uVar4 * 0x10));
    if ((puVar2 == (ushort *)0x0) || ((int)local_98._padding_ != 0)) goto LAB_14f922f8a;
  } while( true );
}

// MergeFromImpl<0,absl::lts_20240722::Cord> @ 14f922ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl google::protobuf::internal::MergeFromImpl<0,class absl::lts_20240722::Cord>(struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> const & __ptr64,class
   google::protobuf::MessageLite * __ptr64,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,enum google::protobuf::MessageLite::ParseFlags) */

bool __cdecl
google::protobuf::internal::MergeFromImpl<0,absl::lts_20240722::Cord>
          (SourceWrapper<absl::lts_20240722::Cord> *param_1,MessageLite *param_2,
          TcParseTableBase *param_3,ParseFlags param_4)

{
  byte *pbVar1;
  bool bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_148 [32];
  basic_string_view<char,std::char_traits<char>_> local_128;
  basic_string_view<char,std::char_traits<char>_> local_118 [2];
  ZeroCopyInputStream local_f8 [26];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pbVar1 = *(byte **)param_1;
  bVar5 = *pbVar1 & 1;
  if (bVar5 == 0) {
    uVar3 = (ulonglong)(longlong)(char)*pbVar1 >> 1;
LAB_14f923072:
    pbVar4 = (byte *)0x0;
    if (bVar5 == 0) {
      pbVar4 = pbVar1 + 1;
    }
    local_118[0]._Mydata._0_4_ = SUB84(pbVar4,0);
    local_118[0]._Mydata._4_4_ = (undefined4)((ulonglong)pbVar4 >> 0x20);
    local_118[0]._Mysize._0_4_ = (undefined4)uVar3;
    local_118[0]._Mysize._4_4_ = (undefined4)(uVar3 >> 0x20);
    uVar6 = local_118[0]._Mydata._0_4_;
    uVar7 = local_118[0]._Mydata._4_4_;
    uVar8 = (undefined4)local_118[0]._Mysize;
    uVar9 = local_118[0]._Mysize._4_4_;
    local_118[0]._Mydata = (char *)pbVar4;
    local_118[0]._Mysize = uVar3;
  }
  else {
    uVar3 = _DAT_00000000;
    if (*(CordRep **)(pbVar1 + 8) == (CordRep *)0x0) goto LAB_14f923072;
    local_128._Mydata = (char *)0x0;
    local_128._Mysize = 0;
    bVar2 = absl::lts_20240722::Cord::GetFlatAux(*(CordRep **)(pbVar1 + 8),&local_128);
    if (!bVar2) goto LAB_14f9230b1;
    uVar6 = SUB84(local_128._Mydata,0);
    uVar7 = (undefined4)((ulonglong)local_128._Mydata >> 0x20);
    uVar8 = (undefined4)local_128._Mysize;
    uVar9 = (undefined4)(local_128._Mysize >> 0x20);
    uVar3 = local_128._Mysize;
  }
  if (uVar3 < 0x201) {
    local_118[0]._Mydata = (char *)CONCAT44(uVar7,uVar6);
    local_118[0]._Mysize = CONCAT44(uVar9,uVar8);
    bVar2 = MergeFromImpl<0>(local_118,param_2,param_3,param_4);
    return bVar2;
  }
LAB_14f9230b1:
  io::CordInputStream::CordInputStream((CordInputStream *)local_f8,*(Cord **)param_1);
  bVar2 = MergeFromImpl<0>(local_f8,param_2,param_3,param_4);
  return bVar2;
}

// MergeInto<0> @ 14f923100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: bool __cdecl google::protobuf::internal::SourceWrapper<class
   absl::lts_20240722::Cord>::MergeInto<0>(class google::protobuf::MessageLite * __ptr64,struct
   google::protobuf::internal::TcParseTableBase const * __ptr64,enum
   google::protobuf::MessageLite::ParseFlags)const __ptr64 */

bool __thiscall
google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>::MergeInto<0>
          (SourceWrapper<absl::lts_20240722::Cord> *this,MessageLite *param_1,
          TcParseTableBase *param_2,ParseFlags param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined1 auStack_138 [32];
  basic_string_view<char,std::char_traits<char>_> local_118 [2];
  ZeroCopyInputStream local_f8 [26];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pbVar1 = *(byte **)this;
  bVar6 = *pbVar1 & 1;
  if (bVar6 == 0) {
    uVar4 = (ulonglong)(longlong)(char)*pbVar1 >> 1;
LAB_14f923182:
    local_118[0]._Mysize._0_4_ = (undefined4)uVar4;
    local_118[0]._Mysize._4_4_ = (undefined4)(uVar4 >> 0x20);
    pbVar5 = (byte *)0x0;
    if (bVar6 == 0) {
      pbVar5 = pbVar1 + 1;
    }
    local_118[0]._Mydata._0_4_ = SUB84(pbVar5,0);
    local_118[0]._Mydata._4_4_ = (undefined4)((ulonglong)pbVar5 >> 0x20);
  }
  else {
    uVar4 = _DAT_00000000;
    if (*(CordRep **)(pbVar1 + 8) == (CordRep *)0x0) goto LAB_14f923182;
    local_118[0]._Mydata._0_4_ = 0;
    local_118[0]._Mydata._4_4_ = 0;
    local_118[0]._Mysize._0_4_ = 0;
    local_118[0]._Mysize._4_4_ = 0;
    bVar3 = absl::lts_20240722::Cord::GetFlatAux(*(CordRep **)(pbVar1 + 8),local_118);
    if (!bVar3) goto LAB_14f9231c1;
    auVar2._4_4_ = local_118[0]._Mydata._4_4_;
    auVar2._0_4_ = local_118[0]._Mydata._0_4_;
    auVar2._8_4_ = (undefined4)local_118[0]._Mysize;
    auVar2._12_4_ = local_118[0]._Mysize._4_4_;
    uVar4 = auVar2._8_8_;
  }
  if (uVar4 < 0x201) {
    bVar3 = MergeFromImpl<0>(local_118,param_1,param_2,param_3);
    return bVar3;
  }
LAB_14f9231c1:
  io::CordInputStream::CordInputStream((CordInputStream *)local_f8,*(Cord **)this);
  bVar3 = MergeFromImpl<0>(local_f8,param_1,param_2,param_3);
  return bVar3;
}

// New<0,google::protobuf::MessageLite> @ 14f923210

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::MessageCreator::New<0,class google::protobuf::MessageLite>(class
   google::protobuf::MessageLite const * __ptr64,class google::protobuf::MessageLite const *
   __ptr64,class google::protobuf::Arena * __ptr64)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::MessageCreator::New<0,google::protobuf::MessageLite>
          (MessageCreator *this,MessageLite *param_1,MessageLite *param_2,Arena *param_3)

{
  void *pvVar1;
  MessageLite *pMVar2;
  
  if (param_3 == (Arena *)0x0) {
    pvVar1 = ::operator_new((ulonglong)this->allocation_size_);
  }
  else {
    pvVar1 = Arena::Allocate(param_3,(ulonglong)this->allocation_size_ + 7 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f923262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar2 = (*(this->field3_0x8).func_)(param_1,pvVar1,param_3);
  return pMVar2;
}

// NewImpl<4096> @ 14f923270

/* public: static struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::NewImpl<4096>(unsigned __int64) */

CordRepFlat * __cdecl
absl::lts_20240722::cord_internal::CordRepFlat::NewImpl<4096>(__uint64 param_1)

{
  longlong lVar1;
  CordRepFlat *pCVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x14) {
    uVar3 = 0x20;
    lVar1 = 8;
  }
  else {
    lVar1 = 0x1000;
    if (param_1 < 0xff4) {
      uVar3 = param_1 + 0xd;
      if (uVar3 < 0x201) {
        lVar1 = 8;
        goto LAB_14f9232a6;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    if (uVar3 < 0x2001) {
      lVar1 = 0x40;
    }
  }
LAB_14f9232a6:
  uVar3 = (uVar3 - 1) + lVar1 & -lVar1;
  pCVar2 = ::operator_new(uVar3);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar3 < 0x201) {
    pCVar2->field_0xc = (char)(uVar3 >> 3) + '\x02';
    return pCVar2;
  }
  if (uVar3 < 0x2001) {
    pCVar2->field_0xc = (char)(uVar3 >> 6) + ':';
    return pCVar2;
  }
  pCVar2->field_0xc = (char)(uVar3 >> 0xc) + -0x48;
  return pCVar2;
}

// ParseFrom<1,google::protobuf::io::ZeroCopyInputStream*___ptr64> @ 14f923330

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<1,class
   google::protobuf::io::ZeroCopyInputStream * __ptr64>(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<1,google::protobuf::io::ZeroCopyInputStream*___ptr64>
          (MessageLite *this,ZeroCopyInputStream **param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(*param_1,this,pTVar3,kParse);
  return bVar1;
}

// ParseFrom<1,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_> @ 14f923390

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<1,struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> >(struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> const & __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::
ParseFrom<1,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_>
          (MessageLite *this,SourceWrapper<absl::lts_20240722::Cord> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>(param_1,this,pTVar3,kParse);
  return bVar1;
}

// ParseFrom<1,google::protobuf::internal::BoundedZCIS> @ 14f9233f0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<1,struct
   google::protobuf::internal::BoundedZCIS>(struct google::protobuf::internal::BoundedZCIS const &
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<1,google::protobuf::internal::BoundedZCIS>
          (MessageLite *this,BoundedZCIS *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,1);
  return bVar1;
}

// ParseFrom<1,std::basic_string_view<char,std::char_traits<char>_>_> @ 14f923460

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<1,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<1,std::basic_string_view<char,std::char_traits<char>_>_>
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParse);
  return bVar1;
}

// ParseFrom<2,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_> @ 14f9234d0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<2,struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> >(struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> const & __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::
ParseFrom<2,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_>
          (MessageLite *this,SourceWrapper<absl::lts_20240722::Cord> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>(param_1,this,pTVar3,kMergePartial);
  return bVar1;
}

// ParseFrom<2,google::protobuf::internal::BoundedZCIS> @ 14f923530

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<2,struct
   google::protobuf::internal::BoundedZCIS>(struct google::protobuf::internal::BoundedZCIS const &
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<2,google::protobuf::internal::BoundedZCIS>
          (MessageLite *this,BoundedZCIS *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,2);
  return bVar1;
}

// ParseFrom<3,google::protobuf::io::ZeroCopyInputStream*___ptr64> @ 14f923590

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<3,class
   google::protobuf::io::ZeroCopyInputStream * __ptr64>(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<3,google::protobuf::io::ZeroCopyInputStream*___ptr64>
          (MessageLite *this,ZeroCopyInputStream **param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(*param_1,this,pTVar3,kParsePartial);
  return bVar1;
}

// ParseFrom<3,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_> @ 14f9235f0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<3,struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> >(struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> const & __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::
ParseFrom<3,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_>
          (MessageLite *this,SourceWrapper<absl::lts_20240722::Cord> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>(param_1,this,pTVar3,kParsePartial);
  return bVar1;
}

// ParseFrom<3,google::protobuf::internal::BoundedZCIS> @ 14f923650

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<3,struct
   google::protobuf::internal::BoundedZCIS>(struct google::protobuf::internal::BoundedZCIS const &
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<3,google::protobuf::internal::BoundedZCIS>
          (MessageLite *this,BoundedZCIS *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,3);
  return bVar1;
}

// ParseFrom<3,std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9236c0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<3,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<3,std::basic_string_view<char,std::char_traits<char>_>_>
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParsePartial);
  return bVar1;
}

// ParseFrom<0,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_> @ 14f923730

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<0,struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> >(struct
   google::protobuf::internal::SourceWrapper<class absl::lts_20240722::Cord> const & __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::
ParseFrom<0,google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>_>
          (MessageLite *this,SourceWrapper<absl::lts_20240722::Cord> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>(param_1,this,pTVar3,kMerge);
  return bVar1;
}

// ParseFrom<0,google::protobuf::internal::BoundedZCIS> @ 14f923790

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<0,struct
   google::protobuf::internal::BoundedZCIS>(struct google::protobuf::internal::BoundedZCIS const &
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<0,google::protobuf::internal::BoundedZCIS>
          (MessageLite *this,BoundedZCIS *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_c = *(undefined4 *)(param_1 + 0xc);
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,0);
  return bVar1;
}

// ParseFrom<0,std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9237f0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFrom<0,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFrom<0,std::basic_string_view<char,std::char_traits<char>_>_>
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kMerge);
  return bVar1;
}

// PlacementNew<0,google::protobuf::MessageLite> @ 14f923850

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::MessageCreator::PlacementNew<0,class
   google::protobuf::MessageLite>(class google::protobuf::MessageLite const * __ptr64,class
   google::protobuf::MessageLite const * __ptr64,void * __ptr64,class google::protobuf::Arena *
   __ptr64)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::MessageCreator::PlacementNew<0,google::protobuf::MessageLite>
          (MessageCreator *this,MessageLite *param_1,MessageLite *param_2,void *param_3,
          Arena *param_4)

{
  MessageLite *pMVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f923862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar1 = (*(this->field3_0x8).func_)(param_1,param_3,param_4);
  return pMVar1;
}

// PtrValue<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14f923870

/* private: struct google::protobuf::internal::InternalMetadata::Container<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > * __ptr64
   __cdecl google::protobuf::internal::InternalMetadata::PtrValue<struct
   google::protobuf::internal::InternalMetadata::Container<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(void)const __ptr64 */

Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::internal::InternalMetadata::
PtrValue<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (InternalMetadata *this)

{
  return (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
         (this->ptr_ & 0xfffffffffffffffe);
}

// PtrValue<google::protobuf::internal::InternalMetadata::ContainerBase> @ 14f923880

/* private: struct google::protobuf::internal::InternalMetadata::ContainerBase * __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::PtrValue<struct
   google::protobuf::internal::InternalMetadata::ContainerBase>(void)const __ptr64 */

ContainerBase * __thiscall
google::protobuf::internal::InternalMetadata::
PtrValue<google::protobuf::internal::InternalMetadata::ContainerBase>(InternalMetadata *this)

{
  return (ContainerBase *)(this->ptr_ & 0xfffffffffffffffe);
}

// PtrValue<google::protobuf::Arena> @ 14f923890

/* private: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::PtrValue<class google::protobuf::Arena>(void)const
   __ptr64 */

Arena * __thiscall
google::protobuf::internal::InternalMetadata::PtrValue<google::protobuf::Arena>
          (InternalMetadata *this)

{
  return (Arena *)(this->ptr_ & 0xfffffffffffffffe);
}

// STLStringResizeUninitializedAmortized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9238a0

/* void __cdecl absl::lts_20240722::strings_internal::STLStringResizeUninitializedAmortized<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::strings_internal::
STLStringResizeUninitializedAmortized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,__uint64 param_2
          )

{
  ulonglong uVar1;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var2;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  p_Var2 = &param_1->_Mypair;
  if (uVar1 < param_2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,param_2 - uVar1,'\0');
    return;
  }
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  (p_Var2->_Myval2)._Mysize = param_2;
  (param_1->_Mypair)._Myval2._Bx._Buf[param_2] = '\0';
  return;
}

// StrCat<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9238d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >(class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const &
   __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4,AlphaNum *param_5,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_6)

{
  undefined8 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined1 auStack_e8 [48];
  undefined8 *local_b8;
  ulonglong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_78;
  ulong64 uStack_70;
  char *local_68;
  ulong64 uStack_60;
  char *local_58;
  ulong64 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  ulong64 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_78 = (param_1->piece_)._Mydata;
  uStack_70 = (param_1->piece_)._Mysize;
  local_68 = (param_2->piece_)._Mydata;
  uStack_60 = (param_2->piece_)._Mysize;
  local_58 = (param_3->piece_)._Mydata;
  uStack_50 = (param_3->piece_)._Mysize;
  local_48 = *(undefined4 *)&(param_4->piece_)._Mydata;
  uStack_44 = *(undefined4 *)((longlong)&(param_4->piece_)._Mydata + 4);
  uStack_40 = (undefined4)(param_4->piece_)._Mysize;
  uStack_3c = *(undefined4 *)((longlong)&(param_4->piece_)._Mysize + 4);
  local_38 = (param_5->piece_)._Mydata;
  uStack_30 = (param_5->piece_)._Mysize;
  pbVar2 = param_6;
  if (0xf < *(ulonglong *)(param_6 + 0x18)) {
    pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              param_6;
  }
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  local_b8 = &local_78;
  local_a8._0_4_ = SUB84(pbVar2,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pbVar2 >> 0x20);
  uStack_a0._0_4_ = (undefined4)uVar1;
  uStack_a0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_b0 = local_18;
  local_28 = (undefined4)local_a8;
  uStack_24 = local_a8._4_4_;
  uStack_20 = (undefined4)uStack_a0;
  uStack_1c = uStack_a0._4_4_;
  local_a8 = pbVar2;
  uStack_a0 = uVar1;
  strings_internal::CatPieces(__return_storage_ptr__,&local_b8);
  return __return_storage_ptr__;
}

// UnalignedLoad<unsigned_short> @ 14f9239b0

/* unsigned short __cdecl google::protobuf::internal::UnalignedLoad<unsigned short>(char const *
   __ptr64) */

ushort __cdecl google::protobuf::internal::UnalignedLoad<unsigned_short>(char *param_1)

{
  return *(ushort *)param_1;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<struct_std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_> @ 14f9239c0

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > >,class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > > > >(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > > > const & __ptr64,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<struct_std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
           *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
          *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f9239d0

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::_Allocate_at_least_helper<class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >(class std::allocator<struct std::pair<void (__cdecl*)(void
   const * __ptr64),void const * __ptr64> > & __ptr64,unsigned __int64 & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::
_Allocate_at_least_helper<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_1,
          __uint64 *param_2)

{
  void *pvVar1;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar2;
  ulong64 uVar3;
  
  if (*param_2 < 0x1000000000000000) {
    uVar3 = *param_2 * 0x10;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        ppVar2 = ::operator_new(uVar3);
        return ppVar2;
      }
      return (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        ppVar2 = (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)
                 ((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)(ppVar2 + -8) = pvVar1;
        return ppVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64_(__cdecl*)(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)>_> @ 14f923a50

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<char const * __ptr64 (__cdecl*)(class google::protobuf::MessageLite *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64)> >(struct std::_Atomic_padded<char const * __ptr64 (__cdecl*)(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64)> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64_(__cdecl*)(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)>_>
          (_Atomic_padded<char_const*___ptr64_(__cdecl*)(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64)>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Construct_in_place<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923a60

/* void __cdecl std::_Construct_in_place<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64>,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64,struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> && __ptr64) */

void __cdecl
std::
_Construct_in_place<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

// _Copy_memmove<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64> @ 14f923a70

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::_Copy_memmove<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> *
   __ptr64,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> *
   __ptr64>(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> *
   __ptr64,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> *
   __ptr64,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64)
    */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::
_Copy_memmove<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// _Destroy_range<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f923ab0

/* void __cdecl std::_Destroy_range<class std::allocator<struct std::pair<void (__cdecl*)(void const
   * __ptr64),void const * __ptr64> > >(struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64,struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> * __ptr64 const,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > & __ptr64) */

void __cdecl
std::
_Destroy_range<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2,
          allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_3)

{
  return;
}

// _Emplace_back<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923ac0

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > >::_Emplace_back<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> >(struct std::pair<void (__cdecl*)(void
   const * __ptr64),void const * __ptr64> && __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Emplace_back<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x10;
  return;
}

// _Emplace_back_with_unused_capacity<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923ae0

/* private: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64
   __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::_Emplace_back_with_unused_capacity<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> >(struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> && __ptr64) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
_Emplace_back_with_unused_capacity<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  undefined8 *puVar1;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar3;
  ppVar2 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8) = ppVar2 + 0x10;
  return ppVar2;
}

// _Emplace_one_at_back<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923b00

/* private: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64
   __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::_Emplace_one_at_back<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   && __ptr64) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Emplace_one_at_back<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  undefined8 uVar1;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar2;
  
  ppVar2 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  if (ppVar2 != *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)ppVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(ppVar2 + 8) = uVar1;
    ppVar2 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
    *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8) = ppVar2 + 0x10;
    return ppVar2;
  }
  ppVar2 = _Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
                     (this,ppVar2,param_1);
  return ppVar2;
}

// _Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923b30

/* private: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::_Emplace_reallocate<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> *
   __ptr64 const,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> &&
   __ptr64) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2)

{
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar1;
  longlong lVar2;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *_Src;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *_Dst;
  void *pvVar7;
  ulong64 uVar8;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar9;
  ulonglong uVar10;
  size_t _Size;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar2 = *(longlong *)this;
  lVar11 = *(longlong *)(this + 8) - lVar2 >> 4;
  if (lVar11 == 0xfffffffffffffff) {
    _Xlength();
    pcVar3 = (code *)swi(3);
    ppVar9 = (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)(*pcVar3)();
    return ppVar9;
  }
  uVar12 = lVar11 + 1;
  uVar6 = *(longlong *)(this + 0x10) - lVar2 >> 4;
  if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_14f923cc6:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar10 = uVar12;
  if (uVar12 <= uVar6) {
    uVar10 = uVar6;
  }
  if (0xfffffffffffffff < uVar10) goto LAB_14f923cc6;
  uVar10 = uVar10 * 0x10;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      ppVar9 = (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)0x0;
    }
    else {
      ppVar9 = ::operator_new(uVar10);
    }
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_14f923cc6;
    pvVar5 = ::operator_new(uVar10 + 0x27);
    if (pvVar5 == (void *)0x0) goto LAB_14f923cbf;
    ppVar9 = (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)
             ((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)(ppVar9 + -8) = pvVar5;
  }
  ppVar1 = ppVar9 + ((longlong)param_1 - lVar2 & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)ppVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(ppVar1 + 8) = uVar4;
  _Src = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this;
  if (param_1 == *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8)) {
    _Size = (longlong)*(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8)
            - (longlong)_Src;
    _Dst = ppVar9;
    param_1 = _Src;
  }
  else {
    memmove(ppVar9,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = ppVar1 + 0x10;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    uVar8 = *(longlong *)(this + 0x10) - (longlong)pvVar5 & 0xfffffffffffffff0;
    pvVar7 = pvVar5;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      pvVar7 = *(void **)((longlong)pvVar5 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) {
LAB_14f923cbf:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this = ppVar9;
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8) =
       ppVar9 + uVar12 * 0x10;
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10) =
       ppVar9 + uVar10;
  return ppVar1;
}

// _Get_unwrapped<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64_const&___ptr64> @ 14f923ce0

/* UNKNOWN __cdecl std::_Get_unwrapped<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64 const & __ptr64>(struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> * __ptr64 const & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::
_Get_unwrapped<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64_const&___ptr64>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_const&___ptr64> @ 14f923cf0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > > const & __ptr64>(class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > > const & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_const&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Pocs<std::allocator<char>_> @ 14f923d00

/* void __cdecl std::_Pocs<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64) */

void __cdecl std::_Pocs<std::allocator<char>_>(allocator<char> *param_1,allocator<char> *param_2)

{
  return;
}

// _To_address<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64> @ 14f923d10

/* UNKNOWN __cdecl std::_To_address<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64>(struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> * __ptr64 const & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::_To_address<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **param_1)

{
  return *param_1;
}

// _Unfancy<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923d20

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::_Unfancy<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::_Unfancy<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  return param_1;
}

// _Uninitialized_move<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f923d30

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::_Uninitialized_move<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> * __ptr64,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >(struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64 const,struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64 const,struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::
_Uninitialized_move<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>*___ptr64,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_3,
          allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0);
}

// addressof<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923d70

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::addressof<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::addressof<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  return param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_> @ 14f923d80

/* class std::_Vector_val<struct std::_Simple_types<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > > * __ptr64 __cdecl std::addressof<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > >(class std::_Vector_val<struct std::_Simple_types<struct std::pair<void (__cdecl*)(void const
   * __ptr64),void const * __ptr64> > > & __ptr64) */

_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
* __cdecl std::
          addressof<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
                    (_Vector_val<struct_std::_Simple_types<struct_std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                     *param_1)

{
  return (_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          *)param_1;
}

// addressof<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f923d90

/* class std::basic_string_view<char,struct std::char_traits<char> > * __ptr64 __cdecl
   std::addressof<class std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::addressof<std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  return (basic_string_view<char,std::char_traits<char>_> *)param_1;
}

// arena_destruct_object<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14f923da0

/* void __cdecl google::protobuf::internal::cleanup::arena_destruct_object<struct
   google::protobuf::internal::InternalMetadata::Container<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(void * __ptr64) */

void __cdecl
google::protobuf::internal::cleanup::
arena_destruct_object<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (void *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((longlong)param_1 + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xf;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// construct<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923e10

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > >::construct<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>,struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> >(class std::allocator<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > & __ptr64,struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 const,struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> && __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
construct<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}

// construct_at<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,0> @ 14f923e20

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::construct_at<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>,0>(struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 const,struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> && __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::
construct_at<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,0>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}

// forward<void_(__cdecl*&___ptr64)(void_const*___ptr64)> @ 14f923e30

/* void (__cdecl*& __ptr64 __cdecl std::forward<void (__cdecl*& __ptr64)(void const * __ptr64)>(void
   (__cdecl*& __ptr64)(void const * __ptr64)))(void const * __ptr64) */

_func_void_void_ptr ** __cdecl
std::forward<void_(__cdecl*&___ptr64)(void_const*___ptr64)>(_func_void_void_ptr **param_1)

{
  return param_1;
}

// forward<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64> @ 14f923e40

/* class google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64>(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 & __ptr64) */

ZeroCopyInputStream ** __cdecl
std::forward<google::protobuf::io::ZeroCopyInputStream*___ptr64&___ptr64>
          (ZeroCopyInputStream **param_1)

{
  return param_1;
}

// forward<void_const*___ptr64&___ptr64> @ 14f923e50

/* void const * __ptr64 & __ptr64 __cdecl std::forward<void const * __ptr64 & __ptr64>(void const *
   __ptr64 & __ptr64) */

void ** __cdecl std::forward<void_const*___ptr64&___ptr64>(void **param_1)

{
  return param_1;
}

// forward<std::basic_string_view<char,std::char_traits<char>_>&___ptr64> @ 14f923e60

/* class std::basic_string_view<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::forward<class std::basic_string_view<char,struct std::char_traits<char> > & __ptr64>(class
   std::basic_string_view<char,struct std::char_traits<char> > & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::forward<std::basic_string_view<char,std::char_traits<char>_>&___ptr64>
          (basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  return (basic_string_view<char,std::char_traits<char>_> *)param_1;
}

// forward<google::protobuf::ZeroCopyCodedInputStream*___ptr64> @ 14f923e70

/* class google::protobuf::ZeroCopyCodedInputStream * __ptr64 && __ptr64 __cdecl std::forward<class
   google::protobuf::ZeroCopyCodedInputStream * __ptr64>(class
   google::protobuf::ZeroCopyCodedInputStream * __ptr64 & __ptr64) */

ZeroCopyCodedInputStream ** __cdecl
std::forward<google::protobuf::ZeroCopyCodedInputStream*___ptr64>
          (ZeroCopyCodedInputStream **param_1)

{
  return param_1;
}

// forward<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f923e80

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> && __ptr64 __cdecl
   std::forward<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64) */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::forward<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  return param_1;
}

// launder<google::protobuf::MessageLite> @ 14f923e90

/* class google::protobuf::MessageLite * __ptr64 __cdecl std::launder<class
   google::protobuf::MessageLite>(class google::protobuf::MessageLite * __ptr64) */

MessageLite * __cdecl std::launder<google::protobuf::MessageLite>(MessageLite *param_1)

{
  return param_1;
}

// make_pair<void_(__cdecl*&___ptr64)(void_const*___ptr64),void_const*___ptr64&___ptr64> @ 14f923ea0

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> __cdecl
   std::make_pair<void (__cdecl*& __ptr64)(void const * __ptr64),void const * __ptr64 &
   __ptr64>(void (__cdecl*& __ptr64)(void const * __ptr64),void const * __ptr64 & __ptr64) */

_func_void_void_ptr ** __cdecl
std::make_pair<void_(__cdecl*&___ptr64)(void_const*___ptr64),void_const*___ptr64&___ptr64>
          (_func_void_void_ptr **param_1,void **param_2)

{
  undefined8 *in_R8;
  
  *param_1 = *param_2;
  param_1[1] = (_func_void_void_ptr *)*in_R8;
  return param_1;
}

// move<void_(__cdecl*&___ptr64)(void_const*___ptr64)> @ 14f923ec0

/* void (__cdecl*&& __ptr64 __cdecl std::move<void (__cdecl*& __ptr64)(void const * __ptr64)>(void
   (__cdecl*& __ptr64)(void const * __ptr64)))(void const * __ptr64) */

void____cdecl______ptr64__void_const____ptr64_ * __cdecl
std::move<void_(__cdecl*&___ptr64)(void_const*___ptr64)>(_func_void_void_ptr **param_1)

{
  return (void____cdecl______ptr64__void_const____ptr64_ *)param_1;
}

// move<char*___ptr64&___ptr64> @ 14f923ed0

/* char * __ptr64 && __ptr64 __cdecl std::move<char * __ptr64 & __ptr64>(char * __ptr64 & __ptr64)
    */

char ** __cdecl std::move<char*___ptr64&___ptr64>(char **param_1)

{
  return param_1;
}

// move<void_const*___ptr64&___ptr64> @ 14f923ee0

/* void const * __ptr64 && __ptr64 __cdecl std::move<void const * __ptr64 & __ptr64>(void const *
   __ptr64 & __ptr64) */

void ** __cdecl std::move<void_const*___ptr64&___ptr64>(void **param_1)

{
  return param_1;
}

// move<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>&___ptr64> @ 14f923ef0

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> && __ptr64 __cdecl
   std::move<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> &
   __ptr64>(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64)
    */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::move<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>&___ptr64>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  return param_1;
}

// move<absl::lts_20240722::CordBuffer&___ptr64> @ 14f923f00

/* class absl::lts_20240722::CordBuffer && __ptr64 __cdecl std::move<class
   absl::lts_20240722::CordBuffer & __ptr64>(class absl::lts_20240722::CordBuffer & __ptr64) */

CordBuffer * __cdecl std::move<absl::lts_20240722::CordBuffer&___ptr64>(CordBuffer *param_1)

{
  return param_1;
}

// mutable_unknown_fields<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f923f10

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::InternalMetadata::mutable_unknown_fields<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void) __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InternalMetadata::
mutable_unknown_fields<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if ((this->ptr_ & 1) != 0) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  pbVar1 = mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                     (this);
  return pbVar1;
}

// mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f923f30

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 __cdecl google::protobuf::internal::InternalMetadata::mutable_unknown_fields_slow<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void) __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InternalMetadata::
mutable_unknown_fields_slow<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Arena *this_00;
  
  puVar2 = (undefined8 *)0x0;
  this_00 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    this_00 = (Arena *)(this_00->impl_).tag_and_id_;
  }
  if (this_00 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x28);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14f923fa4;
    *puVar1 = 0;
  }
  else {
    puVar1 = Arena::AllocateAlignedWithCleanup
                       (this_00,0x28,8,
                        cleanup::
                        arena_destruct_object<google::protobuf::internal::InternalMetadata::Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                       );
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xf;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = puVar1;
LAB_14f923fa4:
  this->ptr_ = (ulonglong)puVar2 | 1;
  *puVar2 = this_00;
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 1);
}

// reverse<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_> @ 14f923fd0

/* void __cdecl std::reverse<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > > >(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > > >) */

void __cdecl
std::
reverse<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    do {
      puVar2 = param_2 + -2;
      if (param_1 == puVar2) {
        return;
      }
      uVar1 = *param_1;
      *param_1 = *puVar2;
      *puVar2 = uVar1;
      uVar1 = param_1[1];
      param_1[1] = param_2[-1];
      param_1 = param_1 + 2;
      param_2[-1] = uVar1;
      param_2 = puVar2;
    } while (param_1 != puVar2);
  }
  return;
}

// swap<void_(__cdecl*)(void_const*___ptr64),0> @ 14f924020

/* void __cdecl std::swap<void (__cdecl*)(void const * __ptr64),0>(void (__cdecl*& __ptr64)(void
   const * __ptr64),void (__cdecl*& __ptr64)(void const * __ptr64)) */

void __cdecl
std::swap<void_(__cdecl*)(void_const*___ptr64),0>
          (_func_void_void_ptr **param_1,_func_void_void_ptr **param_2)

{
  _func_void_void_ptr *p_Var1;
  
  p_Var1 = *param_1;
  *param_1 = *param_2;
  *param_2 = p_Var1;
  return;
}

// swap<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64,0> @ 14f924040

/* void __cdecl std::swap<void (__cdecl*)(void const * __ptr64),void const * __ptr64,0>(struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64,struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> & __ptr64) */

void __cdecl
std::swap<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64,0>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  return;
}

// swap<char*___ptr64,0> @ 14f924070

/* void __cdecl std::swap<char * __ptr64,0>(char * __ptr64 & __ptr64,char * __ptr64 & __ptr64) */

void __cdecl std::swap<char*___ptr64,0>(char **param_1,char **param_2)

{
  char *pcVar1;
  
  pcVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pcVar1;
  return;
}

// swap<void_const*___ptr64,0> @ 14f924090

/* void __cdecl std::swap<void const * __ptr64,0>(void const * __ptr64 & __ptr64,void const *
   __ptr64 & __ptr64) */

void __cdecl std::swap<void_const*___ptr64,0>(void **param_1,void **param_2)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pvVar1;
  return;
}

// to_address<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f9240b0

/* struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 __cdecl
   std::to_address<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64 const)
    */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __cdecl
std::to_address<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  return param_1;
}

// Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9240c0

/* public: __cdecl google::protobuf::internal::InternalMetadata::Container<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::Container<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >(void) __ptr64 */

Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::internal::InternalMetadata::
Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xf;
  this[8] = (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>)0x0;
  return this;
}

// SourceWrapper<absl::lts_20240722::Cord> @ 14f9240f0

/* public: __cdecl google::protobuf::internal::SourceWrapper<class
   absl::lts_20240722::Cord>::SourceWrapper<class absl::lts_20240722::Cord>(class
   absl::lts_20240722::Cord const * __ptr64) __ptr64 */

SourceWrapper<absl::lts_20240722::Cord> * __thiscall
google::protobuf::internal::SourceWrapper<absl::lts_20240722::Cord>::
SourceWrapper<absl::lts_20240722::Cord>(SourceWrapper<absl::lts_20240722::Cord> *this,Cord *param_1)

{
  *(Cord **)this = param_1;
  return this;
}

// _Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f924100

/* public: __cdecl std::_Optional_construct_base<class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Optional_construct_base<class std::basic_string_view<char,struct
   std::char_traits<char> > >(void) __ptr64 */

_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_>::
_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_>
          (_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  this->field_0x10 = 0;
  return this;
}

// _Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1> @ 14f924110

/* public: __cdecl std::_Optional_destruct_base<class std::basic_string_view<char,struct
   std::char_traits<char> >,1>::_Optional_destruct_base<class std::basic_string_view<char,struct
   std::char_traits<char> >,1>(void) __ptr64 */

_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1> * __thiscall
std::_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1>::
_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1>
          (_Optional_destruct_base<std::basic_string_view<char,std::char_traits<char>_>,1> *this)

{
  this->_Has_value = false;
  return this;
}

// _Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f924120

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > >::_Uninitialized_backout_al<class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64,class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > &
   __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
* __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_2)

{
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this = param_1;
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8) = param_1;
  *(allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> **)(this + 0x10)
       = param_2;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_> @ 14f924140

/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   > >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > > >(struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64,struct std::_Container_base0
   const * __ptr64) __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
* __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          _Container_base0 *param_2)

{
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_> @ 14f924150

/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > > >(struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64,struct std::_Container_base0
   const * __ptr64) __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
* __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
::
_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
           *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
          _Container_base0 *param_2)

{
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this = param_1;
  return this;
}

// _Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f924160

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<struct std::pair<void (__cdecl*)(void
   const * __ptr64),void const * __ptr64> > >::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > >(void) __ptr64 */

_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> @ 14f924180

/* public: __cdecl std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const
   * __ptr64> >::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> >(void) __ptr64 */

allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> * __thiscall
std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>::
allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
          (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *this)

{
  return this;
}

// optional<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f924190

/* public: __cdecl std::optional<class std::basic_string_view<char,struct std::char_traits<char> >
   >::optional<class std::basic_string_view<char,struct std::char_traits<char> > >(struct
   std::nullopt_t) __ptr64 */

optional<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::optional<std::basic_string_view<char,std::char_traits<char>_>_>::
optional<std::basic_string_view<char,std::char_traits<char>_>_>
          (optional<std::basic_string_view<char,std::char_traits<char>_>_> *this,nullopt_t param_1)

{
  this->field_0x10 = 0;
  return this;
}

// vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f9241a0

/* public: __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >(void) __ptr64 */

vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
* __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// Cord @ 14f9241c0

/* public: __cdecl absl::lts_20240722::Cord::Cord(void) __ptr64 */

Cord * __thiscall absl::lts_20240722::Cord::Cord(Cord *this)

{
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  return this;
}

// CordBuffer @ 14f9241d0

/* private: __cdecl absl::lts_20240722::CordBuffer::CordBuffer(struct
   absl::lts_20240722::cord_internal::CordRepFlat * __ptr64) __ptr64 */

CordBuffer * __thiscall
absl::lts_20240722::CordBuffer::CordBuffer(CordBuffer *this,CordRepFlat *param_1)

{
  (this->rep_).field0_0x0.long_rep.rep = param_1;
  return this;
}

// CordBuffer @ 14f9241e0

/* public: __cdecl absl::lts_20240722::CordBuffer::CordBuffer(class absl::lts_20240722::CordBuffer
   && __ptr64) __ptr64 */

CordBuffer * __thiscall
absl::lts_20240722::CordBuffer::CordBuffer(CordBuffer *this,CordBuffer *param_1)

{
  void *pvVar1;
  
  pvVar1 = (param_1->rep_).field0_0x0.long_rep.padding;
  (this->rep_).field0_0x0.long_rep.rep = (param_1->rep_).field0_0x0.long_rep.rep;
  (this->rep_).field0_0x0.long_rep.padding = pvVar1;
  (param_1->rep_).field0_0x0.short_rep.raw_size = '\x01';
  return this;
}

// CordBuffer @ 14f924200

/* public: __cdecl absl::lts_20240722::CordBuffer::CordBuffer(void) __ptr64 */

CordBuffer * __thiscall absl::lts_20240722::CordBuffer::CordBuffer(CordBuffer *this)

{
  (this->rep_).field0_0x0.short_rep.raw_size = '\x01';
  *(undefined8 *)((longlong)&(this->rep_).field0_0x0.long_rep.rep + 1) = 0;
  *(undefined4 *)((longlong)&(this->rep_).field0_0x0 + 9) = 0;
  *(undefined2 *)((longlong)&(this->rep_).field0_0x0 + 0xd) = 0;
  (this->rep_).field0_0x0.short_rep.data[0xe] = '\0';
  return this;
}

// CordRep @ 14f924220

/* public: __cdecl absl::lts_20240722::cord_internal::CordRep::CordRep(void) __ptr64 */

CordRep * __thiscall absl::lts_20240722::cord_internal::CordRep::CordRep(CordRep *this)

{
  (this->refcount).count_ = (atomic<int>)0x2;
  return this;
}

// CordRepFlat @ 14f924240

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepFlat::CordRepFlat(void) __ptr64 */

CordRepFlat * __thiscall
absl::lts_20240722::cord_internal::CordRepFlat::CordRepFlat(CordRepFlat *this)

{
  *(undefined4 *)&this->field_0x8 = 2;
  return this;
}

// Data @ 14f924260

/* public: __cdecl google::protobuf::internal::ParseContext::Data::Data(void) __ptr64 */

Data * __thiscall google::protobuf::internal::ParseContext::Data::Data(Data *this)

{
  this->pool = (DescriptorPool *)0x0;
  this->factory = (MessageFactory *)0x0;
  return this;
}

// EpsCopyInputStream @ 14f924280

/* public: __cdecl google::protobuf::internal::EpsCopyInputStream::EpsCopyInputStream(bool) __ptr64
    */

EpsCopyInputStream * __thiscall
google::protobuf::internal::EpsCopyInputStream::EpsCopyInputStream
          (EpsCopyInputStream *this,bool param_1)

{
  this->zcis_ = (ZeroCopyInputStream *)0x0;
  this->patch_buffer_[0] = '\0';
  this->patch_buffer_[1] = '\0';
  this->patch_buffer_[2] = '\0';
  this->patch_buffer_[3] = '\0';
  this->patch_buffer_[4] = '\0';
  this->patch_buffer_[5] = '\0';
  this->patch_buffer_[6] = '\0';
  this->patch_buffer_[7] = '\0';
  this->patch_buffer_[8] = '\0';
  this->patch_buffer_[9] = '\0';
  this->patch_buffer_[10] = '\0';
  this->patch_buffer_[0xb] = '\0';
  this->patch_buffer_[0xc] = '\0';
  this->patch_buffer_[0xd] = '\0';
  this->patch_buffer_[0xe] = '\0';
  this->patch_buffer_[0xf] = '\0';
  this->patch_buffer_[0x10] = '\0';
  this->patch_buffer_[0x11] = '\0';
  this->patch_buffer_[0x12] = '\0';
  this->patch_buffer_[0x13] = '\0';
  this->patch_buffer_[0x14] = '\0';
  this->patch_buffer_[0x15] = '\0';
  this->patch_buffer_[0x16] = '\0';
  this->patch_buffer_[0x17] = '\0';
  this->patch_buffer_[0x18] = '\0';
  this->patch_buffer_[0x19] = '\0';
  this->patch_buffer_[0x1a] = '\0';
  this->patch_buffer_[0x1b] = '\0';
  this->patch_buffer_[0x1c] = '\0';
  this->patch_buffer_[0x1d] = '\0';
  this->patch_buffer_[0x1e] = '\0';
  this->patch_buffer_[0x1f] = '\0';
  this->aliasing_ = (ulonglong)param_1;
  this->last_tag_minus_1_ = 0;
  this->overall_limit_ = 0x7fffffff;
  return this;
}

// EpsCopyOutputStream @ 14f9242b0

/* public: __cdecl google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream(class
   google::protobuf::io::ZeroCopyOutputStream * __ptr64,bool,unsigned char * __ptr64 * __ptr64)
   __ptr64 */

EpsCopyOutputStream * __thiscall
google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream
          (EpsCopyOutputStream *this,ZeroCopyOutputStream *param_1,bool param_2,uchar **param_3)

{
  uchar *puVar1;
  
  puVar1 = this->buffer_;
  this->stream_ = param_1;
  this->end_ = puVar1;
  this->buffer_end_ = puVar1;
  this->had_error_ = false;
  this->aliasing_enabled_ = false;
  this->is_serialization_deterministic_ = param_2;
  this->skip_check_consistency = false;
  *param_3 = puVar1;
  return this;
}

// EpsCopyOutputStream @ 14f9242e0

/* public: __cdecl google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream(void *
   __ptr64,int,class google::protobuf::io::ZeroCopyOutputStream * __ptr64,bool,unsigned char *
   __ptr64 * __ptr64) __ptr64 */

EpsCopyOutputStream * __thiscall
google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream
          (EpsCopyOutputStream *this,void *param_1,int param_2,ZeroCopyOutputStream *param_3,
          bool param_4,uchar **param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar2 = this->buffer_;
  this->is_serialization_deterministic_ = param_4;
  this->stream_ = param_3;
  this->had_error_ = false;
  this->aliasing_enabled_ = false;
  this->skip_check_consistency = false;
  if (param_2 < 0x11) {
    puVar1 = this->buffer_ + param_2;
  }
  else {
    puVar1 = (uchar *)((longlong)param_2 + -0x10 + (longlong)param_1);
    puVar2 = param_1;
  }
  this->end_ = puVar1;
  puVar1 = (uchar *)0x0;
  if (param_2 < 0x11) {
    puVar1 = param_1;
  }
  this->buffer_end_ = puVar1;
  *param_5 = puVar2;
  return this;
}

// EpsCopyOutputStream @ 14f924340

/* public: __cdecl google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream(void *
   __ptr64,int,bool) __ptr64 */

EpsCopyOutputStream * __thiscall
google::protobuf::io::EpsCopyOutputStream::EpsCopyOutputStream
          (EpsCopyOutputStream *this,void *param_1,int param_2,bool param_3)

{
  this->is_serialization_deterministic_ = param_3;
  this->end_ = (uchar *)((longlong)param_2 + (longlong)param_1);
  this->buffer_end_ = (uchar *)0x0;
  this->stream_ = (ZeroCopyOutputStream *)0x0;
  this->had_error_ = false;
  this->aliasing_enabled_ = false;
  this->skip_check_consistency = false;
  return this;
}

// Hex @ 14f924370

/* private: __cdecl absl::lts_20240722::Hex::Hex(enum absl::lts_20240722::PadSpec,unsigned __int64)
   __ptr64 */

Hex * __thiscall absl::lts_20240722::Hex::Hex(Hex *this,PadSpec param_1,__uint64 param_2)

{
  Hex HVar1;
  
  *(__uint64 *)this = param_2;
  if (param_1 == kNoPad) {
    HVar1 = (Hex)0x1;
  }
  else {
    HVar1 = (Hex)(param_1 - 0x40);
    if (param_1 < kSpacePad2) {
      HVar1 = (Hex)param_1;
    }
  }
  this[8] = HVar1;
  HVar1 = (Hex)0x30;
  if (0x41 < param_1) {
    HVar1 = (Hex)0x20;
  }
  this[9] = HVar1;
  return this;
}

// InlineRep @ 14f9243c0

/* public: __cdecl absl::lts_20240722::Cord::InlineRep::InlineRep(void) __ptr64 */

InlineRep * __thiscall absl::lts_20240722::Cord::InlineRep::InlineRep(InlineRep *this)

{
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  return this;
}

// Long @ 14f9243d0

/* public: __cdecl absl::lts_20240722::CordBuffer::Rep::Long::Long(struct
   absl::lts_20240722::cord_internal::CordRepFlat * __ptr64) __ptr64 */

Long * __thiscall absl::lts_20240722::CordBuffer::Rep::Long::Long(Long *this,CordRepFlat *param_1)

{
  this->rep = param_1;
  return this;
}

// RefcountAndFlags @ 14f9243e0

/* public: __cdecl absl::lts_20240722::cord_internal::RefcountAndFlags::RefcountAndFlags(void)
   __ptr64 */

RefcountAndFlags * __thiscall
absl::lts_20240722::cord_internal::RefcountAndFlags::RefcountAndFlags(RefcountAndFlags *this)

{
  this->count_ = (atomic<int>)0x2;
  return this;
}

// Rep @ 14f9243f0

/* public: __cdecl absl::lts_20240722::CordBuffer::Rep::Rep(struct
   absl::lts_20240722::cord_internal::CordRepFlat * __ptr64) __ptr64 */

Rep * __thiscall absl::lts_20240722::CordBuffer::Rep::Rep(Rep *this,CordRepFlat *param_1)

{
  (this->field0_0x0).long_rep.rep = param_1;
  return this;
}

// Rep @ 14f924400

/* public: __cdecl absl::lts_20240722::CordBuffer::Rep::Rep(void) __ptr64 */

Rep * __thiscall absl::lts_20240722::CordBuffer::Rep::Rep(Rep *this)

{
  (this->field0_0x0).short_rep.raw_size = '\x01';
  *(undefined8 *)((longlong)&(this->field0_0x0).long_rep.rep + 1) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 9) = 0;
  *(undefined2 *)((longlong)&this->field0_0x0 + 0xd) = 0;
  (this->field0_0x0).short_rep.data[0xe] = '\0';
  return this;
}

// ShutdownData @ 14f924420

/* public: __cdecl google::protobuf::internal::ShutdownData::ShutdownData(void) __ptr64 */

ShutdownData * __thiscall google::protobuf::internal::ShutdownData::ShutdownData(ShutdownData *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// StringifySink @ 14f924440

/* public: __cdecl absl::lts_20240722::strings_internal::StringifySink::StringifySink(void) __ptr64
    */

StringifySink * __thiscall
absl::lts_20240722::strings_internal::StringifySink::StringifySink(StringifySink *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xf;
  *this = (StringifySink)0x0;
  return this;
}

// TcFieldData @ 14f924470

/* public: __cdecl google::protobuf::internal::TcFieldData::TcFieldData(struct
   google::protobuf::internal::TcFieldData::DefaultInit) __ptr64 */

TcFieldData * __thiscall
google::protobuf::internal::TcFieldData::TcFieldData(TcFieldData *this,DefaultInit param_1)

{
  return this;
}

// TypeId @ 14f924480

/* private: __cdecl google::protobuf::TypeId::TypeId(struct google::protobuf::internal::ClassData
   const * __ptr64) __ptr64 */

TypeId * __thiscall google::protobuf::TypeId::TypeId(TypeId *this,ClassData *param_1)

{
  *(ClassData **)this = param_1;
  return this;
}

// ZeroCopyCodedInputStream @ 14f924490

/* public: __cdecl google::protobuf::ZeroCopyCodedInputStream::ZeroCopyCodedInputStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

ZeroCopyCodedInputStream * __thiscall
google::protobuf::ZeroCopyCodedInputStream::ZeroCopyCodedInputStream
          (ZeroCopyCodedInputStream *this,CodedInputStream *param_1)

{
  *(CodedInputStream **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  return this;
}

// ZeroCopyInputStream @ 14f9244b0

/* public: __cdecl google::protobuf::io::ZeroCopyInputStream::ZeroCopyInputStream(void) __ptr64 */

ZeroCopyInputStream * __thiscall
google::protobuf::io::ZeroCopyInputStream::ZeroCopyInputStream(ZeroCopyInputStream *this)

{
  *this = (ZeroCopyInputStream)vftable;
  return this;
}

// ~Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9244d0

/* public: __cdecl google::protobuf::internal::InternalMetadata::Container<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::~Container<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >(void) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::
Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
~Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(this + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xf;
  this[8] = (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>)0x0;
  return;
}

// ~_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f924540

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> > >::~_Uninitialized_backout_al<class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
~_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  return;
}

// ~vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_> @ 14f924550

/* public: __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::~vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >(void) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::
~vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
          (vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// ~CordBuffer @ 14f9245c0

/* public: __cdecl absl::lts_20240722::CordBuffer::~CordBuffer(void) __ptr64 */

void __thiscall absl::lts_20240722::CordBuffer::~CordBuffer(CordBuffer *this)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  
  if (((this->rep_).field0_0x0.short_rep.raw_size & 1U) != 0) {
    return;
  }
  pCVar2 = (this->rep_).field0_0x0.long_rep.rep;
  bVar1 = pCVar2->field_0xc;
  if (bVar1 < 0x43) {
    ::operator_delete(pCVar2,(longlong)(int)((uint)bVar1 * 8 + -0x10));
    return;
  }
  if (bVar1 < 0xbb) {
    ::operator_delete(pCVar2,(longlong)(int)((bVar1 - 0x3a) * 0x40));
    return;
  }
  ::operator_delete(pCVar2,(longlong)(int)((bVar1 - 0xb8) * 0x1000));
  return;
}

// ~CordInputStream @ 14f924620

/* public: virtual __cdecl google::protobuf::io::CordInputStream::~CordInputStream(void) __ptr64 */

void __thiscall google::protobuf::io::CordInputStream::~CordInputStream(CordInputStream *this)

{
  return;
}

// ~CordOutputStream @ 14f924630

/* public: virtual __cdecl google::protobuf::io::CordOutputStream::~CordOutputStream(void) __ptr64
    */

void __thiscall google::protobuf::io::CordOutputStream::~CordOutputStream(CordOutputStream *this)

{
  byte bVar1;
  int iVar2;
  
  if (((byte)this[0x28] & 1) == 0) {
    bVar1 = *(byte *)((longlong)*(void **)(this + 0x28) + 0xc);
    if (bVar1 < 0x43) {
      iVar2 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar2 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar2 = (bVar1 - 0xb8) * 0x1000;
    }
    ::operator_delete(*(void **)(this + 0x28),(longlong)iVar2);
  }
  if (((byte)this[8] & 1) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow((Cord *)(this + 8));
  }
  *(undefined ***)this = ZeroCopyOutputStream::vftable;
  return;
}

// ~FileInputStream @ 14f9246a0

/* public: virtual __cdecl google::protobuf::io::FileInputStream::~FileInputStream(void) __ptr64 */

void __thiscall google::protobuf::io::FileInputStream::~FileInputStream(FileInputStream *this)

{
  CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor((CopyingInputStreamAdaptor *)(this + 0x20));
  CopyingFileInputStream::~CopyingFileInputStream((CopyingFileInputStream *)(this + 8));
  return;
}

// ~IstreamInputStream @ 14f9246d0

/* public: virtual __cdecl google::protobuf::io::IstreamInputStream::~IstreamInputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::IstreamInputStream::~IstreamInputStream(IstreamInputStream *this)

{
  CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor((CopyingInputStreamAdaptor *)(this + 0x18));
  CopyingIstreamInputStream::~CopyingIstreamInputStream((CopyingIstreamInputStream *)(this + 8));
  return;
}

// ~ShutdownData @ 14f924700

/* public: __cdecl google::protobuf::internal::ShutdownData::~ShutdownData(void) __ptr64 */

void __thiscall google::protobuf::internal::ShutdownData::~ShutdownData(ShutdownData *this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar4;
  
  puVar7 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar7 != *(undefined8 **)(this + 8)) {
    do {
      puVar4 = puVar3 + -2;
      if (puVar7 == puVar4) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar4;
      *puVar4 = uVar1;
      uVar1 = puVar7[1];
      puVar7[1] = puVar3[-1];
      puVar3[-1] = uVar1;
      puVar7 = puVar7 + 2;
      puVar3 = puVar4;
    } while (puVar7 != puVar4);
  }
  puVar7 = *(undefined8 **)(this + 8);
  for (puVar3 = *(undefined8 **)this; puVar3 != puVar7; puVar3 = puVar3 + 2) {
    (*(code *)*puVar3)(puVar3[1]);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    uVar6 = *(longlong *)(this + 0x10) - (longlong)pvVar2 & 0xfffffffffffffff0;
    pvVar5 = pvVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      pvVar5 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar6);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// ~StringifySink @ 14f9247e0

/* public: __cdecl absl::lts_20240722::strings_internal::StringifySink::~StringifySink(void) __ptr64
    */

void __thiscall
absl::lts_20240722::strings_internal::StringifySink::~StringifySink(StringifySink *this)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xf;
  *this = (StringifySink)0x0;
  return;
}

// ~ZeroCopyCodedInputStream @ 14f924850

/* public: virtual __cdecl
   google::protobuf::ZeroCopyCodedInputStream::~ZeroCopyCodedInputStream(void) __ptr64 */

void __thiscall
google::protobuf::ZeroCopyCodedInputStream::~ZeroCopyCodedInputStream
          (ZeroCopyCodedInputStream *this)

{
  return;
}

// operator_bool @ 14f924860

/* public: __cdecl std::optional<class std::basic_string_view<char,struct std::char_traits<char> >
   >::operator bool(void)const __ptr64 */

bool __thiscall
std::optional<std::basic_string_view<char,std::char_traits<char>_>_>::operator_bool
          (optional<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (bool)this->field_0x10;
}

// operator-> @ 14f924870

/* public: class std::basic_string_view<char,struct std::char_traits<char> > * __ptr64 __cdecl
   std::optional<class std::basic_string_view<char,struct std::char_traits<char> >
   >::operator->(void) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::optional<std::basic_string_view<char,std::char_traits<char>_>_>::operator->
          (optional<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (basic_string_view<char,std::char_traits<char>_> *)this;
}

// operator* @ 14f924880

/* public: class std::basic_string_view<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::_Optional_construct_base<class std::basic_string_view<char,struct std::char_traits<char> >
   >::operator*(void) __ptr64&  */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_>::operator*
          (_Optional_construct_base<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (basic_string_view<char,std::char_traits<char>_> *)this;
}

// `scalar_deleting_destructor' @ 14f924890

/* public: void * __ptr64 __cdecl google::protobuf::internal::InternalMetadata::Container<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::InternalMetadata::
Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
_scalar_deleting_destructor_
          (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          uint param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(this + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xf;
  this[8] = (Container<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>)0x0;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f924920

/* public: void * __ptr64 __cdecl google::protobuf::internal::ShutdownData::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::ShutdownData::_scalar_deleting_destructor_
          (ShutdownData *this,uint param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  puVar7 = *(undefined8 **)this;
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar7 != *(undefined8 **)(this + 8)) {
    do {
      puVar6 = puVar5 + -2;
      if (puVar7 == puVar6) break;
      uVar1 = *puVar7;
      *puVar7 = *puVar6;
      *puVar6 = uVar1;
      uVar1 = puVar7[1];
      puVar7[1] = puVar5[-1];
      puVar5[-1] = uVar1;
      puVar7 = puVar7 + 2;
      puVar5 = puVar6;
    } while (puVar7 != puVar6);
  }
  puVar7 = *(undefined8 **)(this + 8);
  for (puVar5 = *(undefined8 **)this; puVar5 != puVar7; puVar5 = puVar5 + 2) {
    (*(code *)*puVar5)(puVar5[1]);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    uVar4 = *(longlong *)(this + 0x10) - (longlong)pvVar2 & 0xfffffffffffffff0;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f924a10

/* public: virtual void * __ptr64 __cdecl google::protobuf::ZeroCopyCodedInputStream::`vector
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::ZeroCopyCodedInputStream::_vector_deleting_destructor_
          (ZeroCopyCodedInputStream *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f924a40

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::ZeroCopyInputStream::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::ZeroCopyInputStream::_scalar_deleting_destructor_
          (ZeroCopyInputStream *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AccessCachedSize @ 14f924a70

/* protected: class google::protobuf::internal::CachedSize const & __ptr64 __cdecl
   google::protobuf::MessageLite::AccessCachedSize(void)const __ptr64 */

CachedSize * __thiscall google::protobuf::MessageLite::AccessCachedSize(MessageLite *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  return (CachedSize *)((longlong)&this->_padding_ + (ulonglong)*(uint *)(lVar1 + 0x38));
}

// Advance @ 14f924aa0

/* private: void __cdecl google::protobuf::io::CodedInputStream::Advance(int) __ptr64 */

void __thiscall google::protobuf::io::CodedInputStream::Advance(CodedInputStream *this,int param_1)

{
  this->buffer_ = this->buffer_ + param_1;
  return;
}

// AllocateAligned @ 14f924ab0

/* public: void * __ptr64 __cdecl google::protobuf::Arena::AllocateAligned(unsigned __int64,unsigned
   __int64) __ptr64 */

void * __thiscall
google::protobuf::Arena::AllocateAligned(Arena *this,__uint64 param_1,__uint64 param_2)

{
  void *pvVar1;
  
  if (param_2 < 9) {
    pvVar1 = Allocate(this,param_1 + 7 & 0xfffffffffffffff8);
    return pvVar1;
  }
  pvVar1 = Allocate(this,(param_1 - 8) + param_2);
  return (void *)((longlong)pvVar1 + (param_2 - 1) & ~(param_2 - 1));
}

// AllocatedSizeToTag @ 14f924b00

/* unsigned char __cdecl absl::lts_20240722::cord_internal::AllocatedSizeToTag(unsigned __int64) */

uchar __cdecl absl::lts_20240722::cord_internal::AllocatedSizeToTag(__uint64 param_1)

{
  if (param_1 < 0x201) {
    return (char)(param_1 >> 3) + '\x02';
  }
  if (param_1 < 0x2001) {
    return (char)(param_1 >> 6) + ':';
  }
  return (char)(param_1 >> 0xc) + 0xb8;
}

// AllocatedSizeToTagUnchecked @ 14f924b30

/* unsigned char __cdecl absl::lts_20240722::cord_internal::AllocatedSizeToTagUnchecked(unsigned
   __int64) */

uchar __cdecl absl::lts_20240722::cord_internal::AllocatedSizeToTagUnchecked(__uint64 param_1)

{
  uchar uVar1;
  
  if (param_1 < 0x201) {
    return (char)(param_1 >> 3) + '\x02';
  }
  uVar1 = (char)(param_1 >> 0xc) + 0xb8;
  if (param_1 < 0x2001) {
    uVar1 = (char)(param_1 >> 6) + ':';
  }
  return uVar1;
}

// Append @ 14f924b70

/* public: void __cdecl absl::lts_20240722::Cord::Append(class absl::lts_20240722::CordBuffer)
   __ptr64 */

void __thiscall absl::lts_20240722::Cord::Append(Cord *this,CordBuffer *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  CordRep *pCVar4;
  CordRepFlat *pCVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  CordzInfo *this_00;
  char *pcVar9;
  longlong lVar10;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  bVar3 = (param_1->rep_).field0_0x0.short_rep.raw_size;
  bVar8 = bVar3 & 1;
  if (bVar8 == 0) {
    lVar10 = *(longlong *)(param_1->rep_).field0_0x0.long_rep.rep;
  }
  else {
    lVar10 = (longlong)((char)bVar3 >> 1);
  }
  if (lVar10 == 0) goto LAB_14f924c20;
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar4 != (CordRep *)0x0)) &&
     (pCVar4->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar4->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar4);
    }
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  bVar3 = (param_1->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar3 & 1) == 0) {
    pCVar4 = (CordRep *)(param_1->rep_).field0_0x0.long_rep.rep;
    (param_1->rep_).field0_0x0.short_rep.raw_size = '\x01';
    pcVar7 = (char *)0x0;
    pcVar9 = pcVar7;
    if (pCVar4 == (CordRep *)0x0) goto LAB_14f924bff;
    InlineRep::AppendTree(&this->contents_,pCVar4,kAppendCordBuffer);
  }
  else {
    pcVar7 = (char *)((longlong)&(param_1->rep_).field0_0x0 + 1);
    (param_1->rep_).field0_0x0.short_rep.raw_size = '\x01';
    pcVar9 = (char *)(longlong)((char)bVar3 >> 1);
LAB_14f924bff:
    local_18._Mydata = pcVar7;
    local_18._Mysize = (ulong64)pcVar9;
    AppendPrecise(this,&local_18,kAppendCordBuffer);
  }
  bVar8 = (param_1->rep_).field0_0x0.short_rep.raw_size & 1;
LAB_14f924c20:
  if (bVar8 == 0) {
    pCVar5 = (param_1->rep_).field0_0x0.long_rep.rep;
    bVar3 = pCVar5->field_0xc;
    if (bVar3 < 0x43) {
      iVar6 = (uint)bVar3 * 8 + -0x10;
    }
    else if (bVar3 < 0xbb) {
      iVar6 = (bVar3 - 0x3a) * 0x40;
    }
    else {
      iVar6 = (bVar3 - 0xb8) * 0x1000;
    }
    ::operator_delete(pCVar5,(longlong)iVar6);
  }
  return;
}

// AppendPartialToString @ 14f924c90

/* public: bool __cdecl google::protobuf::MessageLite::AppendPartialToString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::AppendPartialToString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  LogMessage *pLVar6;
  longlong lVar7;
  ulonglong uVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  ulonglong local_res10;
  char *local_48;
  ulong64 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessage local_28;
  
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  uVar5 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar5 < 0x80000000) {
    uVar8 = uVar5 + uVar2;
    uVar3 = (param_1->_Mypair)._Myval2._Mysize;
    if (uVar3 < uVar8) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (param_1,uVar8 - uVar3,'\0');
    }
    else {
      pbVar9 = param_1;
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      (param_1->_Mypair)._Myval2._Mysize = uVar8;
      (pbVar9->_Mypair)._Myval2._Bx._Buf[uVar8] = '\0';
    }
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    SerializeToArrayImpl(this,(uchar *)((param_1->_Mypair)._Myval2._Bx._Buf + uVar2),(int)uVar5);
    bVar4 = true;
  }
  else {
    pLVar6 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x250,(ErrorTag)0x0);
    lVar7 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar1 = (char *)(lVar7 + 0x40);
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar1)(&local_48,lVar7);
    }
    else {
      uStack_40 = 0xffffffffffffffff;
      do {
        uStack_40 = uStack_40 + 1;
        local_48 = pcVar1;
      } while (pcVar1[uStack_40] != '\0');
    }
    local_38._Mydata = local_48;
    local_38._Mysize = uStack_40;
    pLVar6 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar6,&local_38);
    local_38._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_38._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar6,&local_38);
    local_res10 = uVar5;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (pLVar6,&local_res10);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_28);
    bVar4 = false;
  }
  return bVar4;
}

// AppendPartialToString @ 14f924e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: bool __cdecl google::protobuf::MessageLite::AppendPartialToString(class
   absl::lts_20240722::Cord * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::AppendPartialToString(MessageLite *this,Cord *param_1)

{
  CordRepFlat *pCVar1;
  byte bVar2;
  int iVar3;
  CordRep *pCVar4;
  LogMessage *this_00;
  longlong *plVar5;
  Cord *pCVar6;
  uchar *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  CordRepFlat *pCVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  char *local_148 [2];
  undefined4 local_138;
  Rep_u_0 local_130;
  char *local_118 [2];
  LogMessage local_108;
  ZeroCopyOutputStream local_f8;
  Rep_u_0 local_f0 [2];
  void *local_d0;
  undefined1 local_b8 [48];
  ZeroCopyOutputStream *local_88;
  undefined2 local_80;
  bool local_7e;
  bool local_7d;
  uchar *local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138 = 0;
  pCVar4 = (CordRep *)(**(code **)(this->_padding_ + 0x10))();
  bVar2 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((bVar2 & 1) == 0) {
    uVar9 = (ulonglong)(longlong)(char)bVar2 >> 1;
  }
  else {
    uVar9 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar12 = (ulonglong)(longlong)(char)bVar2 >> 1;
  if ((CordRep *)0x7fffffff < pCVar4) {
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessage::LogMessage
                        (&local_108,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                         ,0x296,(ErrorTag)0x0);
    local_138 = 1;
    local_148[0] = "Exceeded maximum protobuf size of 2GB: ";
    local_148[1] = &DAT_00000027;
    local_118[0] = "Exceeded maximum protobuf size of 2GB: ";
    local_118[1] = &DAT_00000027;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
              (this_00,(basic_string_view<char,std::char_traits<char>_> *)local_118);
    local_130.as_tree.cordz_info = (long64)pCVar4;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (this_00,(__uint64 *)local_130.data);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_108);
    return false;
  }
  if ((bVar2 & 1) != 0) {
    uVar12 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar12 != 0) {
    absl::lts_20240722::Cord::GetAppendBufferSlowPath
              (param_1,(CordBuffer *)local_158,0,(__uint64)pCVar4,0x10);
    plVar5 = (longlong *)CONCAT71(local_158._1_7_,local_158[0]);
    goto LAB_14f925020;
  }
  if (pCVar4 < (CordRep *)&DAT_00000010) {
    local_158[0] = 1;
    local_158._1_7_ = 0;
    local_158[8] = '\0';
    local_158._9_4_ = 0;
    local_158._13_2_ = 0;
    local_158[0xf] = '\0';
    plVar5 = (longlong *)&DAT_00000001;
    goto LAB_14f925020;
  }
  if ((CordRep *)&DAT_00000013 < pCVar4) {
    lVar8 = 0x1000;
    if (pCVar4 < (CordRep *)0xff4) {
      puVar7 = pCVar4->storage;
      if (puVar7 < (uchar *)0x201) {
        lVar8 = 8;
        goto LAB_14f924f49;
      }
    }
    else {
      puVar7 = (uchar *)0x1000;
    }
    if (puVar7 < (uchar *)0x2001) {
      lVar8 = 0x40;
    }
  }
  else {
    puVar7 = &DAT_00000020;
    lVar8 = 8;
  }
LAB_14f924f49:
  uVar12 = (ulonglong)(puVar7 + lVar8 + -1) & -lVar8;
  plVar5 = ::operator_new(uVar12);
  *plVar5 = 0;
  plVar5[1] = 0;
  *(undefined4 *)(plVar5 + 1) = 2;
  local_158[0] = SUB81(plVar5,0);
  local_158._1_7_ = (undefined7)((ulonglong)plVar5 >> 8);
  if (uVar12 < 0x201) {
    *(char *)((longlong)plVar5 + 0xc) = (char)(uVar12 >> 3) + '\x02';
    *plVar5 = 0;
  }
  else if (uVar12 < 0x2001) {
    *(char *)((longlong)plVar5 + 0xc) = (char)(uVar12 >> 6) + ':';
    *plVar5 = 0;
  }
  else {
    *(char *)((longlong)plVar5 + 0xc) = (char)(uVar12 >> 0xc) + -0x48;
    *plVar5 = 0;
  }
LAB_14f925020:
  if (((ulonglong)plVar5 & 1) == 0) {
    bVar2 = *(byte *)((longlong)plVar5 + 0xc);
    if (bVar2 < 0x43) {
      iVar3 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar3 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar3 = (bVar2 - 0xb8) * 0x1000;
    }
    local_148[1] = (char *)(((longlong)iVar3 - *plVar5) + -0xd);
    local_148[0] = (char *)(*plVar5 + 0xd + (longlong)plVar5);
  }
  else {
    lVar8 = (longlong)(char)((char)plVar5 >> 1);
    local_148[0] = local_158 + lVar8 + 1;
    local_148[1] = (char *)(0xf - lVar8);
  }
  if (local_148[1] < pCVar4) {
    if (((ulonglong)plVar5 & 1) == 0) {
      bVar2 = *(byte *)((longlong)plVar5 + 0xc);
      if (bVar2 < 0x43) {
        *plVar5 = (longlong)(int)((uint)bVar2 * 8 + -0x10) + -0xd;
      }
      else if (bVar2 < 0xbb) {
        *plVar5 = (longlong)(int)((bVar2 - 0x3a) * 0x40) + -0xd;
      }
      else {
        *plVar5 = (longlong)(int)((bVar2 - 0xb8) * 0x1000) + -0xd;
      }
    }
    else {
      local_158[0] = 0x1f;
    }
    local_118[0] = (char *)CONCAT71(local_158._1_7_,local_158[0]);
    local_118[1] = (char *)CONCAT17(local_158[0xf],
                                    CONCAT25(local_158._13_2_,CONCAT41(local_158._9_4_,local_158[8])
                                            ));
    local_158[0] = 1;
    local_130.as_tree.cordz_info = (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    local_130.as_tree.rep = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
    (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    io::CordOutputStream::CordOutputStream
              ((CordOutputStream *)&local_f8,(Cord *)&local_130.as_tree,(CordBuffer *)local_118,
               (__uint64)(pCVar4->storage + (uVar9 - 0xd)));
    local_7e = io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
    local_88 = &local_f8;
    local_80._0_1_ = false;
    local_80._1_1_ = false;
    local_7d = false;
    if ((int)local_148[1] < 0x11) {
      pCVar1 = (CordRepFlat *)(local_b8 + 0x10);
      local_b8._8_8_ = local_148[0];
      pCVar10 = (CordRepFlat *)(local_b8 + 0x10);
    }
    else {
      pCVar1 = (CordRepFlat *)((longlong)local_148[0] + -0x10);
      local_b8._8_8_ = (CordRepFlat *)0x0;
      pCVar10 = (CordRepFlat *)local_148[0];
    }
    local_b8._0_8_ = &pCVar1->field_0x0 + (int)local_148[1];
    puVar7 = (uchar *)(**(code **)(this->_padding_ + 0x20))(this,pCVar10,local_b8);
    io::EpsCopyOutputStream::Trim((EpsCopyOutputStream *)local_b8,puVar7);
    if (local_80._0_1_ == false) {
      pCVar6 = io::CordOutputStream::Consume((CordOutputStream *)&local_f8,(Cord *)local_148);
      if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
        absl::lts_20240722::Cord::InlineRep::UnrefTree(&param_1->contents_);
      }
      pCVar4 = (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.rep;
      (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
           (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
      (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar4;
      (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
      (pCVar6->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
      if (((ulonglong)local_148[0] & 1) != 0) {
        absl::lts_20240722::Cord::DestroyCordSlow((Cord *)local_148);
      }
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (((ulonglong)local_d0 & 1) == 0) {
      bVar2 = *(byte *)((longlong)local_d0 + 0xc);
      if (bVar2 < 0x43) {
        iVar3 = (uint)bVar2 * 8 + -0x10;
      }
      else if (bVar2 < 0xbb) {
        iVar3 = (bVar2 - 0x3a) * 0x40;
      }
      else {
        iVar3 = (bVar2 - 0xb8) * 0x1000;
      }
      ::operator_delete(local_d0,(longlong)iVar3);
    }
    if ((local_f0[0].data[0] & 1) != 0) {
      absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_f0[0].as_tree);
    }
    local_f8 = (ZeroCopyOutputStream)io::ZeroCopyOutputStream::vftable;
  }
  else {
    local_3e = io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
    local_78 = (uchar *)((longlong)(int)local_148[1]._0_4_ + (longlong)local_148[0]);
    local_70 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3d = 0;
    (**(code **)(this->_padding_ + 0x20))(this,local_148[0],&local_78);
    if ((local_158[0] & 1) == 0) {
      *(longlong *)CONCAT71(local_158._1_7_,local_158[0]) =
           (longlong)(pCVar4->storage + *(longlong *)CONCAT71(local_158._1_7_,local_158[0]) + -0xd);
    }
    else {
      local_158[0] = local_158[0] + (char)pCVar4 * '\x02';
    }
    local_148[0] = (char *)CONCAT71(local_158._1_7_,local_158[0]);
    local_148[1] = (char *)CONCAT17(local_158[0xf],
                                    CONCAT25(local_158._13_2_,CONCAT41(local_158._9_4_,local_158[8])
                                            ));
    local_158[0] = 1;
    absl::lts_20240722::Cord::Append(param_1,(CordBuffer *)local_148);
    bVar11 = true;
  }
  if ((local_158[0] & 1) == 0) {
    bVar2 = *(byte *)((longlong)CONCAT71(local_158._1_7_,local_158[0]) + 0xc);
    if (bVar2 < 0x43) {
      iVar3 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar3 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar3 = (bVar2 - 0xb8) * 0x1000;
    }
    ::operator_delete((void *)CONCAT71(local_158._1_7_,local_158[0]),(longlong)iVar3);
  }
  return bVar11;
}

// AppendToString @ 14f925330

/* public: bool __cdecl google::protobuf::MessageLite::AppendToString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::AppendToString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// AppendToString @ 14f925350

/* public: bool __cdecl google::protobuf::MessageLite::AppendToString(class absl::lts_20240722::Cord
   * __ptr64)const __ptr64 */

bool __thiscall google::protobuf::MessageLite::AppendToString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// BackUp @ 14f925370

/* public: void __cdecl google::protobuf::internal::EpsCopyInputStream::BackUp(char const * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::EpsCopyInputStream::BackUp(EpsCopyInputStream *this,char *param_1)

{
  int iVar1;
  
  if (this->next_chunk_ == this->patch_buffer_) {
    iVar1 = (*(int *)&this->buffer_end_ - (int)param_1) + 0x10;
  }
  else {
    iVar1 = *(int *)&this->buffer_end_ + (this->size_ - (int)param_1);
  }
  if (0 < iVar1) {
    (**(code **)((longlong)*this->zcis_ + 0x10))(this->zcis_,iVar1);
    this->overall_limit_ = this->overall_limit_ + iVar1;
  }
  return;
}

// BackUp @ 14f9253c0

/* public: virtual void __cdecl google::protobuf::ZeroCopyCodedInputStream::BackUp(int) __ptr64 */

void __thiscall
google::protobuf::ZeroCopyCodedInputStream::BackUp(ZeroCopyCodedInputStream *this,int param_1)

{
  **(longlong **)(this + 8) = **(longlong **)(this + 8) + (longlong)-param_1;
  return;
}

// BufferSize @ 14f9253e0

/* private: int __cdecl google::protobuf::io::CodedInputStream::BufferSize(void)const __ptr64 */

int __thiscall google::protobuf::io::CodedInputStream::BufferSize(CodedInputStream *this)

{
  return *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
}

// ByteCount @ 14f9253f0

/* public: int __cdecl google::protobuf::io::CodedOutputStream::ByteCount(void)const __ptr64 */

int __thiscall google::protobuf::io::CodedOutputStream::ByteCount(CodedOutputStream *this)

{
  __int64 _Var1;
  
  _Var1 = EpsCopyOutputStream::ByteCount(&this->impl_,this->cur_);
  return (int)_Var1 - (int)this->start_count_;
}

// ByteCount @ 14f925420

/* public: virtual __int64 __cdecl google::protobuf::ZeroCopyCodedInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall
google::protobuf::ZeroCopyCodedInputStream::ByteCount(ZeroCopyCodedInputStream *this)

{
  return 0;
}

// FUN_14f925430 @ 14f925430

/* WARNING: Removing unreachable block (ram,0x00014f92568d) */
/* WARNING: Removing unreachable block (ram,0x00014f925564) */
/* WARNING: Removing unreachable block (ram,0x00014f9256dd) */
/* WARNING: Removing unreachable block (ram,0x00014f925724) */
/* WARNING: Removing unreachable block (ram,0x00014f92571a) */

void FUN_14f925430(__uint64 param_1,__uint64 param_2,__uint64 param_3,longlong *param_4)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  LogMessage *pLVar2;
  longlong lVar3;
  char *local_98;
  ulong64 uStack_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_88;
  ulong64 uStack_80;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_78;
  ulong64 uStack_70;
  basic_string_view<char,std::char_traits<char>_> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58;
  basic_string_view<char,std::char_traits<char>_> local_48 [2];
  
  if ((param_1 != param_2) &&
     (pbVar1 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (param_1,param_2,
                          "byte_size_before_serialization == byte_size_after_serialization"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_88 = pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_88 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    uStack_80 = (pbVar1->_Mypair)._Myval2._Mysize;
    local_68._Mydata = (char *)local_88;
    local_68._Mysize = uStack_80;
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_58,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0xa8,&local_68);
    lVar3 = (**(code **)(*param_4 + 0x18))(param_4);
    if (*(char *)(lVar3 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)(lVar3 + 0x40))(&local_98,lVar3);
    }
    else {
      local_98 = (char *)(lVar3 + 0x40);
      uStack_90 = 0xffffffffffffffff;
      do {
        uStack_90 = uStack_90 + 1;
      } while (local_98[uStack_90] != '\0');
    }
    local_68._Mydata = local_98;
    local_68._Mysize = uStack_90;
    pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_68);
    local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535cf090;
    uStack_70 = 0x30;
    local_68._Mydata = " was modified concurrently during serialization.";
    local_68._Mysize = 0x30;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_68);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_58);
  }
  if ((param_3 != param_1) &&
     (pbVar1 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (param_3,param_1,
                          "bytes_produced_by_serialization == byte_size_before_serialization"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_78 = pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    uStack_70 = (pbVar1->_Mypair)._Myval2._Mysize;
    local_58._Mydata = (char *)local_78;
    local_58._Mysize = uStack_70;
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)local_48,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0xab,&local_58);
    local_88 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535cf120;
    uStack_80 = 0x9a;
    local_58._Mydata =
         "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may be caused by concurrent modification of "
    ;
    local_58._Mysize = 0x9a;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_58);
    lVar3 = (**(code **)(*param_4 + 0x18))(param_4);
    if (*(char *)(lVar3 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)(lVar3 + 0x40))(&local_98,lVar3);
    }
    else {
      local_98 = (char *)(lVar3 + 0x40);
      uStack_90 = 0xffffffffffffffff;
      do {
        uStack_90 = uStack_90 + 1;
      } while (local_98[uStack_90] != '\0');
    }
    local_58._Mydata = local_98;
    local_58._Mysize = uStack_90;
    pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_58);
    local_68._Mydata = ".";
    local_68._Mysize = 1;
    local_58._Mydata = ".";
    local_58._Mysize = 1;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_58);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)local_48)
    ;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     ((LogMessageFatal *)&local_58,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                      ,0xb0);
  local_68._Mydata = "This shouldn\'t be called if all the sizes are equal.";
  local_68._Mysize = 0x34;
  local_48[0]._Mydata = "This shouldn\'t be called if all the sizes are equal.";
  local_48[0]._Mysize = 0x34;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,local_48);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)&local_58);
}

// Capacity @ 14f925740

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::Capacity(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepFlat::Capacity(CordRepFlat *this)

{
  byte bVar1;
  
  bVar1 = this->field_0xc;
  if (bVar1 < 0x43) {
    return (longlong)(int)((uint)bVar1 * 8 + -0x10) - 0xd;
  }
  if (bVar1 < 0xbb) {
    return (longlong)(int)((bVar1 - 0x3a) * 0x40) - 0xd;
  }
  return (longlong)(int)((bVar1 - 0xb8) * 0x1000) - 0xd;
}

// FUN_14f925780 @ 14f925780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14f925780(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  LogMessage *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_58;
  undefined8 uStack_50;
  LogMessage local_48;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = 0;
  if ((param_3 & 2) == 0) {
    lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((*(code **)(lVar3 + 0x18) != (code *)0x0) &&
       (cVar2 = (**(code **)(lVar3 + 0x18))(param_2), cVar2 == '\0')) {
      this = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_48,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0xcd,(ErrorTag)0x0);
      local_68 = 1;
      local_58 = "parse";
      uStack_50 = 5;
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_14f926680(&local_38,&local_58,param_2);
      local_68 = 3;
      absl::lts_20240722::log_internal::LogMessage::operator<<(this,pbVar4);
      if (0xf < uStack_20) {
        uVar6 = uStack_20 + 1;
        pvVar1 = (void *)CONCAT71(uStack_37,local_38);
        pvVar5 = pvVar1;
        if (0xfff < uVar6) {
          uVar6 = uStack_20 + 0x28;
          pvVar5 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,uVar6);
      }
      local_28 = ___xmm_000000000000000f0000000000000000;
      uStack_20 = _UNK_15076add8;
      local_38 = 0;
      absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_48);
      return 0;
    }
  }
  return 1;
}

// CheckTypeAndMergeFrom @ 14f9258d0

/* WARNING: Removing unreachable block (ram,0x00014f925a98) */
/* WARNING: Removing unreachable block (ram,0x00014f925aca) */
/* WARNING: Removing unreachable block (ram,0x00014f925ade) */
/* public: void __cdecl google::protobuf::MessageLite::CheckTypeAndMergeFrom(class
   google::protobuf::MessageLite const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::MessageLite::CheckTypeAndMergeFrom(MessageLite *this,MessageLite *param_1)

{
  void *pvVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  LogMessage *pLVar4;
  longlong lVar5;
  basic_string_view<char,std::char_traits<char>_> local_b8;
  char *local_a8;
  ulong64 uStack_a0;
  char *local_98;
  ulong64 uStack_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_88;
  ulong64 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  LogMessageFatal local_58 [3];
  
  pvVar1 = (void *)(**(code **)(this->_padding_ + 0x18))();
  pvVar2 = (void *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  if ((pvVar1 != pvVar2) &&
     (pbVar3 = absl::lts_20240722::log_internal::
               MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                         (pvVar1,pvVar2,"data == other_data"),
     pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_b8._Mydata = (char *)pbVar3;
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      local_b8._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    local_b8._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
    local_88 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_b8._Mydata;
    uStack_80 = local_b8._Mysize;
    pLVar4 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       (local_58,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x51,&local_b8);
    local_78 = "Invalid call to CheckTypeAndMergeFrom between types ";
    uStack_70 = 0x34;
    local_b8._Mydata = "Invalid call to CheckTypeAndMergeFrom between types ";
    local_b8._Mysize = 0x34;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar4,&local_b8);
    lVar5 = (**(code **)(this->_padding_ + 0x18))(this);
    if (*(char *)(lVar5 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)(lVar5 + 0x40))(&local_a8,lVar5);
    }
    else {
      local_a8 = (char *)(lVar5 + 0x40);
      uStack_a0 = 0xffffffffffffffff;
      do {
        uStack_a0 = uStack_a0 + 1;
      } while (local_a8[uStack_a0] != '\0');
    }
    local_b8._Mydata = local_a8;
    local_b8._Mysize = uStack_a0;
    pLVar4 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar4,&local_b8);
    local_68 = " and ";
    uStack_60 = 5;
    local_b8._Mydata = " and ";
    local_b8._Mysize = 5;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar4,&local_b8);
    lVar5 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    if (*(char *)(lVar5 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)(lVar5 + 0x40))(&local_98,lVar5);
    }
    else {
      local_98 = (char *)(lVar5 + 0x40);
      uStack_90 = 0xffffffffffffffff;
      do {
        uStack_90 = uStack_90 + 1;
      } while (local_98[uStack_90] != '\0');
    }
    local_b8._Mydata = local_98;
    local_b8._Mysize = uStack_90;
    absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar4,&local_b8);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(local_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f925ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)pvVar1 + 0x20))(this,param_1);
  return;
}

// ConsumeValue @ 14f925af0

/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::CordBuffer::ConsumeValue(class std::basic_string_view<char,struct
   std::char_traits<char> > & __ptr64) __ptr64 */

CordRep * __thiscall
absl::lts_20240722::CordBuffer::ConsumeValue
          (CordBuffer *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  byte bVar1;
  CordRep *pCVar2;
  
  bVar1 = (this->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) != 0) {
    param_1->_Mydata = (char *)((longlong)&(this->rep_).field0_0x0 + 1);
    param_1->_Mysize = (longlong)((char)bVar1 >> 1);
    (this->rep_).field0_0x0.short_rep.raw_size = '\x01';
    return (CordRep *)0x0;
  }
  pCVar2 = (CordRep *)(this->rep_).field0_0x0.long_rep.rep;
  (this->rep_).field0_0x0.short_rep.raw_size = '\x01';
  return pCVar2;
}

// CopyConstruct @ 14f925b20

/* protected: static class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::MessageLite::CopyConstruct(class google::protobuf::Arena * __ptr64,class
   google::protobuf::MessageLite const & __ptr64) */

MessageLite * __cdecl
google::protobuf::MessageLite::CopyConstruct(Arena *param_1,MessageLite *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  MessageLite *pMVar4;
  
  puVar2 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x18))(param_2);
  uVar1 = *puVar2;
  if (param_1 == (Arena *)0x0) {
    pvVar3 = ::operator_new((ulonglong)*(uint *)(puVar2 + 5));
  }
  else {
    pvVar3 = Arena::Allocate(param_1,(ulonglong)*(uint *)(puVar2 + 5) + 7 & 0xfffffffffffffff8);
  }
  pMVar4 = (MessageLite *)(*(code *)puVar2[6])(uVar1,pvVar3,param_1);
  (*(code *)puVar2[4])(pMVar4,param_2);
  return pMVar4;
}

// CreateWithDefaultLimit @ 14f925bb0

/* public: static class absl::lts_20240722::CordBuffer __cdecl
   absl::lts_20240722::CordBuffer::CreateWithDefaultLimit(unsigned __int64) */

CordBuffer * __cdecl
absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
          (CordBuffer *__return_storage_ptr__,__uint64 param_1)

{
  longlong lVar1;
  CordRepFlat *pCVar2;
  ulonglong uVar3;
  char cVar4;
  
  if (param_1 < 0x10) {
    (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = (CordRepFlat *)0x0;
    (__return_storage_ptr__->rep_).field0_0x0.long_rep.padding = (void *)0x0;
    (__return_storage_ptr__->rep_).field0_0x0.short_rep.raw_size = '\x01';
    *(undefined8 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0.long_rep.rep + 1) = 0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0 + 9) = 0;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0 + 0xd) = 0;
    (__return_storage_ptr__->rep_).field0_0x0.short_rep.data[0xe] = '\0';
    return __return_storage_ptr__;
  }
  if (param_1 < 0x14) {
    uVar3 = 0x20;
    lVar1 = 8;
  }
  else {
    lVar1 = 0x1000;
    if (param_1 < 0xff4) {
      uVar3 = param_1 + 0xd;
      if (uVar3 < 0x201) {
        lVar1 = 8;
        goto LAB_14f925bf8;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    if (uVar3 < 0x2001) {
      lVar1 = 0x40;
    }
  }
LAB_14f925bf8:
  uVar3 = (uVar3 - 1) + lVar1 & -lVar1;
  pCVar2 = ::operator_new(uVar3);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar3 < 0x201) {
    cVar4 = (char)(uVar3 >> 3) + '\x02';
  }
  else if (uVar3 < 0x2001) {
    cVar4 = (char)(uVar3 >> 6) + ':';
  }
  else {
    cVar4 = (char)(uVar3 >> 0xc) + -0x48;
  }
  pCVar2->field_0xc = cVar4;
  *(undefined8 *)pCVar2 = 0;
  (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = pCVar2;
  return __return_storage_ptr__;
}

// Cur @ 14f925ca0

/* public: unsigned char * __ptr64 __cdecl google::protobuf::io::CodedOutputStream::Cur(void)const
   __ptr64 */

uchar * __thiscall google::protobuf::io::CodedOutputStream::Cur(CodedOutputStream *this)

{
  return this->cur_;
}

// Data @ 14f925cb0

/* public: char * __ptr64 __cdecl absl::lts_20240722::cord_internal::CordRepFlat::Data(void) __ptr64
    */

char * __thiscall absl::lts_20240722::cord_internal::CordRepFlat::Data(CordRepFlat *this)

{
  return &this->field_0xd;
}

// DebugString @ 14f925cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::MessageLite::DebugString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::MessageLite::DebugString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  longlong lVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_c8 [32];
  MessageLite *local_a8;
  undefined8 uStack_a0;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = (MessageLite *)__return_storage_ptr__;
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x20))(__return_storage_ptr__,this);
  }
  else {
    uStack_88 = 0;
    local_80 = ___xmm_000000000000000f0000000000000000;
    uStack_78 = _UNK_15076add8;
    local_90 = (void *)0x0;
    uStack_a0 = CONCAT62(uStack_a0._2_6_,0x3001);
    local_a8 = this;
    absl::lts_20240722::strings_internal::ExtractStringification<absl::lts_20240722::Hex>
              (&local_70.piece_,(StringifySink *)&local_90,(Hex *)&local_a8);
    local_a8 = (MessageLite *)0x1535cf038;
    uStack_a0 = 0x11;
    local_40.piece_._Mydata = "MessageLite at 0x";
    local_40.piece_._Mysize = 0x11;
    absl::lts_20240722::StrCat(__return_storage_ptr__,&local_40,&local_70);
    if (0xf < uStack_78) {
      uVar3 = uStack_78 + 1;
      pvVar2 = local_90;
      if (0xfff < uVar3) {
        uVar3 = uStack_78 + 0x28;
        pvVar2 = *(void **)((longlong)local_90 + -8);
        if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar2,uVar3);
    }
  }
  return __return_storage_ptr__;
}

// DecrementExpectHighRefcount @ 14f925df0

/* public: bool __cdecl
   absl::lts_20240722::cord_internal::RefcountAndFlags::DecrementExpectHighRefcount(void) __ptr64 */

bool __thiscall
absl::lts_20240722::cord_internal::RefcountAndFlags::DecrementExpectHighRefcount
          (RefcountAndFlags *this)

{
  atomic<int> aVar1;
  
  LOCK();
  aVar1 = this->count_;
  this->count_ = (atomic<int>)((int)this->count_ + -2);
  UNLOCK();
  return aVar1 != (atomic<int>)0x2;
}

// Delete @ 14f925e10

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepFlat::Delete(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRepFlat::Delete(CordRep *param_1)

{
  byte bVar1;
  
  bVar1 = param_1->tag;
  if (bVar1 < 0x43) {
    ::operator_delete(param_1,(longlong)(int)((uint)bVar1 * 8 + -0x10));
    return;
  }
  if (bVar1 < 0xbb) {
    ::operator_delete(param_1,(longlong)(int)((bVar1 - 0x3a) * 0x40));
    return;
  }
  ::operator_delete(param_1,(longlong)(int)((bVar1 - 0xb8) * 0x1000));
  return;
}

// DeleteInstance @ 14f925e50

/* private: void __cdecl google::protobuf::MessageLite::DeleteInstance(void) __ptr64 */

void __thiscall google::protobuf::MessageLite::DeleteInstance(MessageLite *this)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  uVar1 = *(uint *)(lVar2 + 0x28);
  (**(code **)this->_padding_)(this,0);
  ::operator_delete(this,(ulonglong)uVar1);
  return;
}

// DestroyInstance @ 14f925e90

/* private: void __cdecl google::protobuf::MessageLite::DestroyInstance(void) __ptr64 */

void __thiscall google::protobuf::MessageLite::DestroyInstance(MessageLite *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f925e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(this,0);
  return;
}

// Done @ 14f925ea0

/* public: bool __cdecl google::protobuf::internal::ParseContext::Done(char const * __ptr64 *
   __ptr64) __ptr64 */

bool __thiscall google::protobuf::internal::ParseContext::Done(ParseContext *this,char **param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *local_18;
  undefined1 local_10;
  
  uVar1 = 0;
  if ((char *)this->_padding_ <= *param_1) {
    iVar2 = (int)*param_1 - (int)this->_padding_;
    if (iVar2 == *(int *)((longlong)&this->_padding_ + 4)) {
      if ((0 < iVar2) && (this->_padding_ == 0)) {
        *param_1 = (char *)0x0;
      }
      return true;
    }
    EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)this,(int)&local_18,iVar2);
    *param_1 = local_18;
    uVar1 = local_10;
  }
  return (bool)uVar1;
}

// DoneWithCheck @ 14f925f00

/* protected: bool __cdecl google::protobuf::internal::EpsCopyInputStream::DoneWithCheck(char const
   * __ptr64 * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::DoneWithCheck
          (EpsCopyInputStream *this,char **param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *local_18;
  undefined1 local_10;
  
  uVar1 = 0;
  if (this->limit_end_ <= *param_1) {
    iVar2 = (int)*param_1 - *(int *)&this->buffer_end_;
    if (iVar2 == this->limit_) {
      if ((0 < iVar2) && (this->next_chunk_ == (char *)0x0)) {
        *param_1 = (char *)0x0;
      }
      return true;
    }
    DoneFallback(this,(int)&local_18,iVar2);
    *param_1 = local_18;
    uVar1 = local_10;
  }
  return (bool)uVar1;
}

// EndedAtEndOfStream @ 14f925f60

/* public: bool __cdecl
   google::protobuf::internal::EpsCopyInputStream::EndedAtEndOfStream(void)const __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::EndedAtEndOfStream(EpsCopyInputStream *this)

{
  return this->last_tag_minus_1_ == 1;
}

// EndedAtLimit @ 14f925f70

/* public: bool __cdecl google::protobuf::internal::EpsCopyInputStream::EndedAtLimit(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::EndedAtLimit(EpsCopyInputStream *this)

{
  return this->last_tag_minus_1_ == 0;
}

// EpsCopy @ 14f925f80

/* public: class google::protobuf::io::EpsCopyOutputStream * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::EpsCopy(void) __ptr64 */

EpsCopyOutputStream * __thiscall
google::protobuf::io::CodedOutputStream::EpsCopy(CodedOutputStream *this)

{
  return &this->impl_;
}

// FailDynamicCast @ 14f925f90

/* void __cdecl google::protobuf::internal::FailDynamicCast(class google::protobuf::MessageLite
   const & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::internal::FailDynamicCast(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  LogMessage *pLVar2;
  char *pcVar3;
  ulong64 uVar4;
  char *local_58;
  ulong64 uStack_50;
  char *local_48;
  ulong64 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  lVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pcVar3 = (char *)(lVar1 + 0x40);
  uVar4 = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    (*(code *)**(undefined8 **)pcVar3)(&local_58,lVar1);
  }
  else {
    uStack_50 = 0xffffffffffffffff;
    do {
      uStack_50 = uStack_50 + 1;
      local_58 = pcVar3;
    } while (pcVar3[uStack_50] != '\0');
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (*(char *)(lVar1 + 0x3d) == '\0') {
    lVar1 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    pcVar3 = (char *)(lVar1 + 0x40);
    if (*(char *)(lVar1 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar3)(&local_48);
    }
    else {
      do {
        uVar4 = uVar4 + 1;
        local_48 = pcVar3;
        uStack_40 = uVar4;
      } while (pcVar3[uVar4] != '\0');
    }
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       (&local_18,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0xda);
    local_38._Mydata = "Cannot downcast ";
    local_38._Mysize = 0x10;
    local_28._Mydata = "Cannot downcast ";
    local_28._Mysize = 0x10;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
    local_28._Mydata = local_48;
    local_28._Mysize = uStack_40;
    pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
    local_38._Mydata = " to ";
    local_38._Mysize = 4;
    local_28._Mydata = " to ";
    local_28._Mysize = 4;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
    local_28._Mydata = local_58;
    local_28._Mysize = uStack_50;
    absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     ((LogMessageFatal *)&local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                      ,0xd5);
  local_38._Mydata = "Cannot downcast from a DynamicMessage to generated type ";
  local_38._Mysize = 0x38;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = local_58;
  local_38._Mysize = uStack_50;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_38);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)&local_28);
}

// FastHexToBufferZeroPad16 @ 14f926160

/* unsigned __int64 __cdecl absl::lts_20240722::numbers_internal::FastHexToBufferZeroPad16(unsigned
   __int64,char * __ptr64) */

__uint64 __cdecl
absl::lts_20240722::numbers_internal::FastHexToBufferZeroPad16(__uint64 param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined2 *)param_2 =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x38) * 2);
  *(undefined2 *)(param_2 + 2) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x30 & 0xff) * 2);
  *(undefined2 *)(param_2 + 4) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x28 & 0xff) * 2);
  *(undefined2 *)(param_2 + 6) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x20 & 0xff) * 2);
  *(undefined2 *)(param_2 + 8) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x18 & 0xff) * 2);
  *(undefined2 *)(param_2 + 10) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 0x10 & 0xff) * 2);
  *(undefined2 *)(param_2 + 0xc) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 >> 8 & 0xff) * 2);
  uVar3 = param_1 | 1;
  *(undefined2 *)(param_2 + 0xe) =
       *(undefined2 *)
        (
        "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
        + (param_1 & 0xff) * 2);
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
  return 0x10 - (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
}

// Get @ 14f926230

/* public: int __cdecl google::protobuf::internal::CachedSize::Get(void)const __ptr64 */

int __thiscall google::protobuf::internal::CachedSize::Get(CachedSize *this)

{
  return (int)this->atom_;
}

// Get @ 14f926240

/* public: static class google::protobuf::TypeId __cdecl google::protobuf::TypeId::Get(class
   google::protobuf::MessageLite const & __ptr64) */

MessageLite * __cdecl google::protobuf::TypeId::Get(MessageLite *param_1)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = (**(code **)(*in_RDX + 0x18))();
  param_1->_padding_ = lVar1;
  return param_1;
}

// GetAppendBuffer @ 14f926270

/* public: class absl::lts_20240722::CordBuffer __cdecl
   absl::lts_20240722::Cord::GetAppendBuffer(unsigned __int64,unsigned __int64) __ptr64 */

CordBuffer * __thiscall
absl::lts_20240722::Cord::GetAppendBuffer
          (Cord *this,CordBuffer *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  CordRepFlat *pCVar3;
  ulong64 uVar4;
  char cVar5;
  
  uVar1 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1 >> 1;
  }
  else {
    uVar4 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar4 != 0) {
    GetAppendBufferSlowPath(this,__return_storage_ptr__,0,param_1,param_2);
    return __return_storage_ptr__;
  }
  if (param_1 < 0x10) {
    (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = (CordRepFlat *)0x0;
    (__return_storage_ptr__->rep_).field0_0x0.long_rep.padding = (void *)0x0;
    (__return_storage_ptr__->rep_).field0_0x0.short_rep.raw_size = '\x01';
    *(undefined8 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0.long_rep.rep + 1) = 0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0 + 9) = 0;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->rep_).field0_0x0 + 0xd) = 0;
    (__return_storage_ptr__->rep_).field0_0x0.short_rep.data[0xe] = '\0';
    return __return_storage_ptr__;
  }
  if (param_1 < 0x14) {
    uVar1 = 0x20;
    lVar2 = 8;
  }
  else {
    lVar2 = 0x1000;
    if (param_1 < 0xff4) {
      uVar1 = param_1 + 0xd;
      if (uVar1 < 0x201) {
        lVar2 = 8;
        goto LAB_14f9262d8;
      }
    }
    else {
      uVar1 = 0x1000;
    }
    if (uVar1 < 0x2001) {
      lVar2 = 0x40;
    }
  }
LAB_14f9262d8:
  uVar1 = (uVar1 - 1) + lVar2 & -lVar2;
  pCVar3 = ::operator_new(uVar1);
  *(undefined8 *)pCVar3 = 0;
  *(undefined8 *)&pCVar3->field_0x8 = 0;
  *(undefined4 *)&pCVar3->field_0x8 = 2;
  if (uVar1 < 0x201) {
    cVar5 = (char)(uVar1 >> 3) + '\x02';
  }
  else if (uVar1 < 0x2001) {
    cVar5 = (char)(uVar1 >> 6) + ':';
  }
  else {
    cVar5 = (char)(uVar1 >> 0xc) + -0x48;
  }
  pCVar3->field_0xc = cVar5;
  *(undefined8 *)pCVar3 = 0;
  (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = pCVar3;
  return __return_storage_ptr__;
}

// GetCachedSize @ 14f9263a0

/* public: int __cdecl google::protobuf::MessageLite::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::MessageLite::GetCachedSize(MessageLite *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  return *(int *)((longlong)&this->_padding_ + (ulonglong)*(uint *)(lVar1 + 0x38));
}

// GetClassData @ 14f9263d0

/* __cdecl google::protobuf::internal::GetClassData(class google::protobuf::MessageLite const &
   __ptr64) */

void __cdecl google::protobuf::internal::GetClassData(MessageLite *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f9263d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x18))();
  return;
}

// GetDefaultRecursionLimit @ 14f9263e0

/* public: static int __cdecl google::protobuf::io::CodedInputStream::GetDefaultRecursionLimit(void)
    */

int __cdecl google::protobuf::io::CodedInputStream::GetDefaultRecursionLimit(void)

{
  return default_recursion_limit_;
}

// GetErrno @ 14f9263f0

/* public: int __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::GetErrno(void)const __ptr64 */

int __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::GetErrno
          (CopyingFileInputStream *this)

{
  return *(int *)(this + 0x10);
}

// GetErrno @ 14f926400

/* public: int __cdecl google::protobuf::io::FileInputStream::GetErrno(void)const __ptr64 */

int __thiscall google::protobuf::io::FileInputStream::GetErrno(FileInputStream *this)

{
  return *(int *)(this + 0x18);
}

// GetExtensionFactory @ 14f926410

/* public: class google::protobuf::MessageFactory * __ptr64 __cdecl
   google::protobuf::io::CodedInputStream::GetExtensionFactory(void) __ptr64 */

MessageFactory * __thiscall
google::protobuf::io::CodedInputStream::GetExtensionFactory(CodedInputStream *this)

{
  return this->extension_factory_;
}

// GetExtensionPool @ 14f926420

/* public: class google::protobuf::DescriptorPool const * __ptr64 __cdecl
   google::protobuf::io::CodedInputStream::GetExtensionPool(void) __ptr64 */

DescriptorPool * __thiscall
google::protobuf::io::CodedInputStream::GetExtensionPool(CodedInputStream *this)

{
  return this->extension_pool_;
}

// GetTcParseTable @ 14f926430

/* protected: struct google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::MessageLite::GetTcParseTable(void)const __ptr64 */

TcParseTableBase * __thiscall google::protobuf::MessageLite::GetTcParseTable(MessageLite *this)

{
  longlong lVar1;
  TcParseTableBase *pTVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  pTVar2 = *(TcParseTableBase **)(lVar1 + 8);
  if (pTVar2 == (TcParseTableBase *)0x0) {
    pTVar2 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar1 + 0x40) + 0x10))(this);
  }
  return pTVar2;
}

// GetTypeName @ 14f926470

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::MessageLite::GetTypeName(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
google::protobuf::MessageLite::GetTypeName
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__
          )

{
  char *pcVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pcVar1 = (char *)(lVar2 + 0x40);
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    (*(code *)**(undefined8 **)pcVar1)(__return_storage_ptr__,lVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = pcVar1;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (pcVar1[uVar3] != '\0');
  __return_storage_ptr__->_Mysize = uVar3;
  return __return_storage_ptr__;
}

// HadError @ 14f9264d0

/* public: bool __cdecl google::protobuf::io::CodedOutputStream::HadError(void) __ptr64 */

bool __thiscall google::protobuf::io::CodedOutputStream::HadError(CodedOutputStream *this)

{
  uchar *puVar1;
  
  puVar1 = EpsCopyOutputStream::FlushAndResetBuffer(&this->impl_,this->cur_);
  this->cur_ = puVar1;
  return (this->impl_).had_error_;
}

// HadError @ 14f926500

/* public: bool __cdecl google::protobuf::io::EpsCopyOutputStream::HadError(void)const __ptr64 */

bool __thiscall google::protobuf::io::EpsCopyOutputStream::HadError(EpsCopyOutputStream *this)

{
  return this->had_error_;
}

// HasAnySanitizer @ 14f926510

/* bool __cdecl google::protobuf::internal::HasAnySanitizer(void) */

bool __cdecl google::protobuf::internal::HasAnySanitizer(void)

{
  return false;
}

// HasUnknownFieldsTag @ 14f926520

/* private: bool __cdecl
   google::protobuf::internal::InternalMetadata::HasUnknownFieldsTag(void)const __ptr64 */

bool __thiscall
google::protobuf::internal::InternalMetadata::HasUnknownFieldsTag(InternalMetadata *this)

{
  return (bool)((byte)this->ptr_ & 1);
}

// Inc @ 14f926530

/* public: void __cdecl google::protobuf::internal::NoopDebugCounter::Inc(void) __ptr64 */

void __thiscall google::protobuf::internal::NoopDebugCounter::Inc(NoopDebugCounter *this)

{
  return;
}

// IncreaseLengthBy @ 14f926540

/* public: void __cdecl absl::lts_20240722::CordBuffer::IncreaseLengthBy(unsigned __int64) __ptr64
    */

void __thiscall absl::lts_20240722::CordBuffer::IncreaseLengthBy(CordBuffer *this,__uint64 param_1)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  
  bVar1 = (this->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) != 0) {
    (this->rep_).field0_0x0.short_rep.raw_size = (char)param_1 * '\x02' + bVar1;
    return;
  }
  pCVar2 = (this->rep_).field0_0x0.long_rep.rep;
  *(__uint64 *)pCVar2 = *(longlong *)pCVar2 + param_1;
  return;
}

// InitFrom @ 14f926560

/* protected: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::InitFrom(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,int) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::InitFrom
          (EpsCopyInputStream *this,ZeroCopyInputStream *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == -1) {
    pcVar1 = InitFrom(this,param_1);
    return pcVar1;
  }
  this->overall_limit_ = param_2;
  pcVar1 = InitFrom(this,param_1);
  iVar3 = ((int)pcVar1 - *(int *)&this->buffer_end_) + param_2;
  this->limit_ = iVar3;
  iVar2 = 0;
  if (iVar3 < 0) {
    iVar2 = iVar3;
  }
  this->limit_end_ = this->buffer_end_ + iVar2;
  return pcVar1;
}

// InitFrom @ 14f9265c0

/* protected: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::InitFrom(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::InitFrom
          (EpsCopyInputStream *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulonglong _Size;
  char *pcVar1;
  char *_Dst;
  
  _Size = param_1->_Mysize;
  _Dst = this->patch_buffer_;
  this->overall_limit_ = 0;
  if (_Size < 0x11) {
    if (_Size != 0) {
      memcpy(_Dst,param_1->_Mydata,_Size);
    }
    this->limit_ = 0;
    this->next_chunk_ = (char *)0x0;
    this->buffer_end_ = this->patch_buffer_ + _Size;
    this->limit_end_ = this->patch_buffer_ + _Size;
    if (this->aliasing_ == 1) {
      this->aliasing_ = (ulong64)(param_1->_Mydata + (-0x28 - (longlong)this));
    }
  }
  else {
    pcVar1 = param_1->_Mydata;
    this->limit_ = 0x10;
    this->next_chunk_ = _Dst;
    this->buffer_end_ = pcVar1 + (_Size - 0x10);
    this->limit_end_ = pcVar1 + (_Size - 0x10);
    _Dst = pcVar1;
    if (this->aliasing_ == 1) {
      this->aliasing_ = 2;
    }
  }
  return _Dst;
}

// FUN_14f926680 @ 14f926680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14f926680(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char ****ppppcVar7;
  ulong64 uVar8;
  undefined1 auStack_148 [32];
  char **local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char *local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char **local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  local_118 = param_1;
  lVar6 = (**(code **)(*param_3 + 0x18))(param_3);
  if (*(char *)(lVar6 + 0x3c) == '\0') {
    (**(code **)(*(longlong *)(lVar6 + 0x40) + 8))(&local_b0,param_3);
  }
  else {
    local_b0 = (char ***)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = operator_new(0x40);
    uVar2 = s__cannot_determine_missing_field._8_8_;
    local_a0 = 0x32;
    local_98 = 0x3f;
    *local_b0 = (char **)s__cannot_determine_missing_field._0_8_;
    local_b0[1] = (char **)uVar2;
    uVar2 = s__cannot_determine_missing_field._24_8_;
    local_b0[2] = (char **)s__cannot_determine_missing_field._16_8_;
    local_b0[3] = (char **)uVar2;
    uVar5 = s__cannot_determine_missing_field._44_4_;
    uVar4 = s__cannot_determine_missing_field._40_4_;
    uVar3 = s__cannot_determine_missing_field._36_4_;
    *(undefined4 *)(local_b0 + 4) = s__cannot_determine_missing_field._32_4_;
    *(undefined4 *)((longlong)local_b0 + 0x24) = uVar3;
    *(undefined4 *)(local_b0 + 5) = uVar4;
    *(undefined4 *)((longlong)local_b0 + 0x2c) = uVar5;
    *(undefined2 *)(local_b0 + 6) = s__cannot_determine_missing_field._48_2_;
    *(char *)((longlong)local_b0 + 0x32) = '\0';
  }
  local_128 = (char **)0x1535cf1f8;
  puStack_120 = (ulonglong *)0x29;
  lVar6 = (**(code **)(*param_3 + 0x18))(param_3);
  puVar1 = (undefined8 *)(lVar6 + 0x40);
  if (*(char *)(lVar6 + 0x3c) == '\0') {
    (**(code **)*puVar1)(&local_118,lVar6);
  }
  else {
    uStack_110 = -1;
    do {
      uStack_110 = uStack_110 + 1;
      local_118 = puVar1;
    } while (*(char *)((longlong)puVar1 + uStack_110) != '\0');
  }
  local_f0 = " message of type \"";
  uStack_e8 = 0x12;
  local_100 = "Can\'t ";
  uStack_f8 = 6;
  local_88 = "Can\'t ";
  uStack_80 = 6;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = " message of type \"";
  uStack_60 = 0x12;
  local_58 = (undefined4)local_118;
  uStack_54 = local_118._4_4_;
  uStack_50 = (undefined4)uStack_110;
  uStack_4c = uStack_110._4_4_;
  local_48 = local_128;
  uStack_40 = puStack_120;
  ppppcVar7 = &local_b0;
  if (0xf < local_98) {
    ppppcVar7 = (char ****)local_b0;
  }
  uStack_d8 = local_a0;
  uVar2 = uStack_d8;
  local_e0._0_4_ = SUB84(ppppcVar7,0);
  local_e0._4_4_ = (undefined4)((ulonglong)ppppcVar7 >> 0x20);
  uStack_d8._0_4_ = (undefined4)local_a0;
  uStack_d8._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
  local_38 = (undefined4)local_e0;
  uStack_34 = local_e0._4_4_;
  uStack_30 = (undefined4)uStack_d8;
  uStack_2c = uStack_d8._4_4_;
  local_128 = &local_88;
  puStack_120 = local_28;
  local_e0 = ppppcVar7;
  uStack_d8 = uVar2;
  absl::lts_20240722::strings_internal::CatPieces(param_1,&local_128);
  if (0xf < local_98) {
    uVar8 = local_98 + 1;
    ppppcVar7 = (char ****)local_b0;
    if (0xfff < uVar8) {
      uVar8 = local_98 + 0x28;
      ppppcVar7 = (char ****)local_b0[-1];
      if ((char *)0x1f < (char *)((longlong)local_b0 + (-8 - (longlong)ppppcVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar7,uVar8);
  }
  return param_1;
}

// InitializationErrorString @ 14f926890

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::MessageLite::InitializationErrorString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::MessageLite::InitializationErrorString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    (**(code **)(*(longlong *)(lVar2 + 0x40) + 8))(__return_storage_ptr__,this);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  pcVar3 = ::operator_new(0x40);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar3;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x32;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0x3f;
  uVar1 = s__cannot_determine_missing_field._8_8_;
  *(undefined8 *)pcVar3 = s__cannot_determine_missing_field._0_8_;
  *(undefined8 *)(pcVar3 + 8) = uVar1;
  uVar1 = s__cannot_determine_missing_field._24_8_;
  *(undefined8 *)(pcVar3 + 0x10) = s__cannot_determine_missing_field._16_8_;
  *(undefined8 *)(pcVar3 + 0x18) = uVar1;
  uVar1 = s__cannot_determine_missing_field._40_8_;
  *(undefined8 *)(pcVar3 + 0x20) = s__cannot_determine_missing_field._32_8_;
  *(undefined8 *)(pcVar3 + 0x28) = uVar1;
  *(undefined2 *)(pcVar3 + 0x30) = s__cannot_determine_missing_field._48_2_;
  pcVar3[0x32] = '\0';
  return __return_storage_ptr__;
}

// IsDefaultSerializationDeterministic @ 14f926950

/* public: static bool __cdecl
   google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(void) */

bool __cdecl google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(void)

{
  return default_serialization_deterministic_ != (atomic<bool>)0x0;
}

// IsExceedingLimit @ 14f926970

/* public: bool __cdecl google::protobuf::internal::EpsCopyInputStream::IsExceedingLimit(char const
   * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::EpsCopyInputStream::IsExceedingLimit
          (EpsCopyInputStream *this,char *param_1)

{
  if ((this->limit_end_ < param_1) &&
     ((this->next_chunk_ == (char *)0x0 ||
      ((longlong)this->limit_ < (longlong)param_1 - (longlong)this->buffer_end_)))) {
    return true;
  }
  return false;
}

// IsInitialized @ 14f9269a0

/* public: bool __cdecl google::protobuf::MessageLite::IsInitialized(void)const __ptr64 */

bool __thiscall google::protobuf::MessageLite::IsInitialized(MessageLite *this)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f9269c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 0x18))(this);
    return (bool)uVar1;
  }
  return true;
}

// IsInitializedWithErrors @ 14f9269e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: bool __cdecl google::protobuf::MessageLite::IsInitializedWithErrors(void)const __ptr64 */

bool __thiscall google::protobuf::MessageLite::IsInitializedWithErrors(MessageLite *this)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  LogMessage *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_58;
  undefined8 uStack_50;
  LogMessage local_48;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = 0;
  lVar3 = (**(code **)(this->_padding_ + 0x18))();
  if ((*(code **)(lVar3 + 0x18) != (code *)0x0) &&
     (cVar2 = (**(code **)(lVar3 + 0x18))(this), cVar2 == '\0')) {
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessage::LogMessage
                        (&local_48,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                         ,0xcd,(ErrorTag)0x0);
    local_68 = 1;
    local_58 = "parse";
    uStack_50 = 5;
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_14f926680(&local_38,&local_58,this);
    local_68 = 3;
    absl::lts_20240722::log_internal::LogMessage::operator<<(this_00,pbVar4);
    if (0xf < uStack_20) {
      uVar6 = uStack_20 + 1;
      pvVar1 = (void *)CONCAT71(uStack_37,local_38);
      pvVar5 = pvVar1;
      if (0xfff < uVar6) {
        uVar6 = uStack_20 + 0x28;
        pvVar5 = *(void **)((longlong)pvVar1 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar5,uVar6);
    }
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    local_38 = 0;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_48);
    return false;
  }
  return true;
}

// LastTag @ 14f926b20

/* public: unsigned int __cdecl google::protobuf::internal::EpsCopyInputStream::LastTag(void)const
   __ptr64 */

uint __thiscall google::protobuf::internal::EpsCopyInputStream::LastTag(EpsCopyInputStream *this)

{
  return this->last_tag_minus_1_ + 1;
}

// Load @ 14f926b30

/* public: static unsigned short __cdecl google::protobuf::internal::EndianHelper<2>::Load(void
   const * __ptr64) */

ushort __cdecl google::protobuf::internal::EndianHelper<2>::Load(void *param_1)

{
  return *(ushort *)param_1;
}

// LogInitializationErrorMessage @ 14f926b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __cdecl google::protobuf::MessageLite::LogInitializationErrorMessage(void)const
   __ptr64 */

void __thiscall google::protobuf::MessageLite::LogInitializationErrorMessage(MessageLite *this)

{
  void *pvVar1;
  LogMessage *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulong64 uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_58;
  undefined8 uStack_50;
  LogMessage local_48;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = 0;
  this_00 = (LogMessage *)
            absl::lts_20240722::log_internal::LogMessage::LogMessage
                      (&local_48,
                       "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                       ,0xcd,(ErrorTag)0x0);
  local_68 = 1;
  local_58 = "parse";
  uStack_50 = 5;
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_14f926680(&local_38,&local_58,this);
  local_68 = 3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(this_00,pbVar2);
  if (0xf < uStack_20) {
    uVar4 = uStack_20 + 1;
    pvVar1 = (void *)CONCAT71(uStack_37,local_38);
    pvVar3 = pvVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_20 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  local_28 = ___xmm_000000000000000f0000000000000000;
  uStack_20 = _UNK_15076add8;
  local_38 = 0;
  absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_48);
  return;
}

// MaybeRemoveEmptyCrcNode @ 14f926c60

/* private: void __cdecl absl::lts_20240722::Cord::InlineRep::MaybeRemoveEmptyCrcNode(void) __ptr64
    */

void __thiscall absl::lts_20240722::Cord::InlineRep::MaybeRemoveEmptyCrcNode(InlineRep *this)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  CordzInfo *this_00;
  
  if (((((this->data_).rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar3 = (this->data_).rep_.field0_0x0.as_tree.rep, pCVar3 != (CordRep *)0x0)) &&
     (pCVar3->length == 0)) {
    this_00 = (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar3);
    }
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  return;
}

// MaybeUntrackCord @ 14f926cc0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordzInfo::MaybeUntrackCord(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordzInfo::MaybeUntrackCord(CordzInfo *param_1)

{
  RefcountAndFlags *pRVar1;
  List *this;
  atomic<absl::lts_20240722::cord_internal::CordzInfo_*> aVar2;
  atomic<absl::lts_20240722::cord_internal::CordzInfo_*> aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  bool bVar6;
  
  if (param_1 == (CordzInfo *)0x0) {
    return;
  }
  this = param_1->list_;
  aVar5 = (this->mutex).lockword_;
  if (((uint)aVar5 & 1) == 0) {
    LOCK();
    aVar4 = (this->mutex).lockword_;
    bVar6 = aVar5 == aVar4;
    if (bVar6) {
      (this->mutex).lockword_ = (atomic<unsigned_int>)((uint)aVar5 | 1);
      aVar4 = aVar5;
    }
    UNLOCK();
    if (!bVar6) {
      aVar5 = aVar4;
    }
  }
  if ((~aVar5._0_1_ & 1) == 0) {
    base_internal::SpinLock::SlowLock(&this->mutex);
  }
  aVar2 = param_1->ci_next_;
  aVar3 = param_1->ci_prev_;
  if (aVar2 != (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0) {
    *(atomic<absl::lts_20240722::cord_internal::CordzInfo_*> *)((longlong)aVar2 + 0x28) = aVar3;
  }
  if (aVar3 == (atomic<absl::lts_20240722::cord_internal::CordzInfo_*>)0x0) {
    param_1->list_->head = aVar2;
  }
  else {
    *(atomic<absl::lts_20240722::cord_internal::CordzInfo_*> *)((longlong)aVar3 + 0x30) = aVar2;
  }
  LOCK();
  aVar5 = (this->mutex).lockword_;
  (this->mutex).lockword_ = (atomic<unsigned_int>)((uint)(this->mutex).lockword_ & 2);
  UNLOCK();
  if (((uint)aVar5 & 0xfffffff8) != 0) {
    base_internal::SpinLock::SlowUnlock(&this->mutex,(uint)aVar5);
  }
  bVar6 = CordzHandle::SafeToDelete((CordzHandle *)param_1);
  if (!bVar6) {
    Mutex::Lock(&param_1->mutex_);
    if (param_1->rep_ != (CordRep *)0x0) {
      LOCK();
      pRVar1 = &param_1->rep_->refcount;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
      UNLOCK();
    }
    Mutex::Unlock(&param_1->mutex_);
    CordzHandle::Delete((CordzHandle *)param_1);
    return;
  }
  param_1->rep_ = (CordRep *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001501c9898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1->_padding_)(param_1,1);
  return;
}

// MergeFromBoundedZeroCopyStream @ 14f926cd0

/* public: bool __cdecl google::protobuf::MessageLite::MergeFromBoundedZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergeFromBoundedZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ZeroCopyInputStream *local_18;
  int iStack_10;
  
  local_18 = param_1;
  iStack_10 = param_2;
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,0);
  return bVar1;
}

// MergeFromCodedStream @ 14f926d30

/* public: bool __cdecl google::protobuf::MessageLite::MergeFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergeFromCodedStream(MessageLite *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  bVar1 = MergeFromImpl(this,param_1,kMerge);
  return bVar1;
}

// MergeFromImpl @ 14f926d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: bool __cdecl google::protobuf::MessageLite::MergeFromImpl(class
   google::protobuf::io::CodedInputStream * __ptr64,enum google::protobuf::MessageLite::ParseFlags)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergeFromImpl
          (MessageLite *this,CodedInputStream *param_1,ParseFlags param_2)

{
  undefined1 uVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  ZeroCopyInputStream local_d0;
  CodedInputStream *local_c8;
  ushort *local_c0;
  char local_b8;
  EpsCopyInputStream local_a8;
  int local_50;
  undefined4 local_4c;
  DescriptorPool *local_48;
  MessageFactory *pMStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d0 = (ZeroCopyInputStream)ZeroCopyCodedInputStream::vftable;
  local_a8.zcis_ = (ZeroCopyInputStream *)0x0;
  local_a8.last_tag_minus_1_ = 0;
  local_a8.aliasing_ = (ulong64)(param_1->aliasing_enabled_ != false);
  local_a8.overall_limit_ = 0x7fffffff;
  local_50 = param_1->recursion_budget_;
  local_a8.patch_buffer_[0] = '\0';
  local_a8.patch_buffer_[1] = '\0';
  local_a8.patch_buffer_[2] = '\0';
  local_a8.patch_buffer_[3] = '\0';
  local_a8.patch_buffer_[4] = '\0';
  local_a8.patch_buffer_[5] = '\0';
  local_a8.patch_buffer_[6] = '\0';
  local_a8.patch_buffer_[7] = '\0';
  local_a8.patch_buffer_[8] = '\0';
  local_a8.patch_buffer_[9] = '\0';
  local_a8.patch_buffer_[10] = '\0';
  local_a8.patch_buffer_[0xb] = '\0';
  local_a8.patch_buffer_[0xc] = '\0';
  local_a8.patch_buffer_[0xd] = '\0';
  local_a8.patch_buffer_[0xe] = '\0';
  local_a8.patch_buffer_[0xf] = '\0';
  local_4c = 0x80000000;
  local_a8.patch_buffer_[0x10] = '\0';
  local_a8.patch_buffer_[0x11] = '\0';
  local_a8.patch_buffer_[0x12] = '\0';
  local_a8.patch_buffer_[0x13] = '\0';
  local_a8.patch_buffer_[0x14] = '\0';
  local_a8.patch_buffer_[0x15] = '\0';
  local_a8.patch_buffer_[0x16] = '\0';
  local_a8.patch_buffer_[0x17] = '\0';
  local_a8.patch_buffer_[0x18] = '\0';
  local_a8.patch_buffer_[0x19] = '\0';
  local_a8.patch_buffer_[0x1a] = '\0';
  local_a8.patch_buffer_[0x1b] = '\0';
  local_a8.patch_buffer_[0x1c] = '\0';
  local_a8.patch_buffer_[0x1d] = '\0';
  local_a8.patch_buffer_[0x1e] = '\0';
  local_a8.patch_buffer_[0x1f] = '\0';
  local_48 = (DescriptorPool *)0x0;
  pMStack_40 = (MessageFactory *)0x0;
  local_c8 = param_1;
  puVar3 = (ushort *)internal::EpsCopyInputStream::InitFrom(&local_a8,&local_d0);
  local_4c = 0;
  local_48 = param_1->extension_pool_;
  pMStack_40 = param_1->extension_factory_;
  lVar4 = (**(code **)(this->_padding_ + 0x18))(this);
  lVar5 = *(longlong *)(lVar4 + 8);
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x10))(this);
  }
  do {
    if (local_a8.limit_end_ <= puVar3) {
      iVar2 = (int)puVar3 - (int)local_a8.buffer_end_;
      if (iVar2 == local_a8.limit_) {
        if ((0 < iVar2) && (local_a8.next_chunk_ == (char *)0x0)) {
          puVar3 = (ushort *)0x0;
        }
LAB_14f926e97:
        if ((*(byte *)(lVar5 + 9) & 1) != 0) {
          puVar3 = (ushort *)(**(code **)(lVar5 + 0x28))(this,puVar3,&local_a8);
        }
        if (puVar3 != (ushort *)0x0) {
          iVar2 = ((int)local_a8.buffer_end_ - (int)puVar3) + local_a8.size_;
          if (local_a8.next_chunk_ == local_a8.patch_buffer_) {
            iVar2 = ((int)local_a8.buffer_end_ - (int)puVar3) + 0x10;
          }
          if (0 < iVar2) {
            (**(code **)((longlong)*local_a8.zcis_ + 0x10))(local_a8.zcis_,iVar2);
            local_a8.overall_limit_ = local_a8.overall_limit_ + iVar2;
          }
          if (local_a8.last_tag_minus_1_ == 1) {
            param_1->legitimate_message_end_ = true;
            uVar1 = FUN_14f925780(&local_a8,this,param_2);
            return (bool)uVar1;
          }
          if ((puVar3 <= local_a8.limit_end_) ||
             ((local_a8.next_chunk_ != (char *)0x0 &&
              ((longlong)puVar3 - CONCAT44(local_a8.buffer_end_._4_4_,(int)local_a8.buffer_end_) <=
               (longlong)local_a8.limit_)))) {
            param_1->last_tag_ = local_a8.last_tag_minus_1_ + 1;
            uVar1 = FUN_14f925780(&local_a8,this,param_2);
            return (bool)uVar1;
          }
        }
        return false;
      }
      internal::EpsCopyInputStream::DoneFallback(&local_a8,(int)&local_c0,iVar2);
      puVar3 = local_c0;
      if (local_b8 != '\0') goto LAB_14f926e97;
    }
    uVar6 = (ulonglong)(*puVar3 >> 3) & (ulonglong)(*(byte *)(lVar5 + 8) >> 3);
    local_e0 = 0;
    local_e8 = lVar5;
    puVar3 = (ushort *)
             (**(code **)(lVar5 + 0x38 + uVar6 * 0x10))
                       (this,puVar3,&local_a8,
                        (ulonglong)*puVar3 ^ *(ulonglong *)(lVar5 + 0x40 + uVar6 * 0x10));
    if ((puVar3 == (ushort *)0x0) || (local_a8.last_tag_minus_1_ != 0)) goto LAB_14f926e97;
  } while( true );
}

// MergeFromString @ 14f926f70

/* public: bool __cdecl google::protobuf::MessageLite::MergeFromString(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall google::protobuf::MessageLite::MergeFromString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  Cord *local_res8 [4];
  
  local_res8[0] = param_1;
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>
                    ((SourceWrapper<absl::lts_20240722::Cord> *)local_res8,this,pTVar3,kMerge);
  return bVar1;
}

// MergeFromString @ 14f926fc0

/* public: bool __cdecl google::protobuf::MessageLite::MergeFromString(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergeFromString
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kMerge);
  return bVar1;
}

// MergePartialFromBoundedZeroCopyStream @ 14f927020

/* public: bool __cdecl google::protobuf::MessageLite::MergePartialFromBoundedZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergePartialFromBoundedZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ZeroCopyInputStream *local_18;
  int iStack_10;
  
  local_18 = param_1;
  iStack_10 = param_2;
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,2);
  return bVar1;
}

// MergePartialFromCodedStream @ 14f927080

/* public: bool __cdecl google::protobuf::MessageLite::MergePartialFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergePartialFromCodedStream
          (MessageLite *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  bVar1 = MergeFromImpl(this,param_1,kMergePartial);
  return bVar1;
}

// MergePartialFromString @ 14f9270a0

/* public: bool __cdecl google::protobuf::MessageLite::MergePartialFromString(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::MergePartialFromString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  Cord *local_res8 [4];
  
  local_res8[0] = param_1;
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>
                    ((SourceWrapper<absl::lts_20240722::Cord> *)local_res8,this,pTVar3,kMergePartial
                    );
  return bVar1;
}

// New @ 14f9270f0

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ClassData::New(class google::protobuf::Arena * __ptr64)const __ptr64
    */

MessageLite * __thiscall google::protobuf::internal::ClassData::New(ClassData *this,Arena *param_1)

{
  void *pvVar1;
  MessageLite *pMVar2;
  ulonglong uVar3;
  
  pMVar2 = this->prototype;
  uVar3 = (ulonglong)(this->message_creator).allocation_size_;
  if (param_1 == (Arena *)0x0) {
    pvVar1 = ::operator_new(uVar3);
  }
  else {
    pvVar1 = Arena::Allocate(param_1,uVar3 + 7 & 0xfffffffffffffff8);
  }
  pMVar2 = (*(this->message_creator).field3_0x8.func_)(pMVar2,pvVar1,param_1);
  return pMVar2;
}

// New @ 14f927150

/* public: static struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::New(unsigned __int64) */

CordRepFlat * __cdecl absl::lts_20240722::cord_internal::CordRepFlat::New(__uint64 param_1)

{
  longlong lVar1;
  CordRepFlat *pCVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x14) {
    uVar3 = 0x20;
    lVar1 = 8;
  }
  else {
    lVar1 = 0x1000;
    if (param_1 < 0xff4) {
      uVar3 = param_1 + 0xd;
      if (uVar3 < 0x201) {
        lVar1 = 8;
        goto LAB_14f927186;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    if (uVar3 < 0x2001) {
      lVar1 = 0x40;
    }
  }
LAB_14f927186:
  uVar3 = (uVar3 - 1) + lVar1 & -lVar1;
  pCVar2 = ::operator_new(uVar3);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar3 < 0x201) {
    pCVar2->field_0xc = (char)(uVar3 >> 3) + '\x02';
    return pCVar2;
  }
  if (uVar3 < 0x2001) {
    pCVar2->field_0xc = (char)(uVar3 >> 6) + ':';
    return pCVar2;
  }
  pCVar2->field_0xc = (char)(uVar3 >> 0xc) + -0x48;
  return pCVar2;
}

// New @ 14f927210

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::MessageLite::New(class google::protobuf::Arena * __ptr64)const __ptr64 */

MessageLite * __thiscall google::protobuf::MessageLite::New(MessageLite *this,Arena *param_1)

{
  longlong lVar1;
  void *pvVar2;
  MessageLite *pMVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (param_1 == (Arena *)0x0) {
    pvVar2 = ::operator_new((ulonglong)*(uint *)(lVar1 + 0x28));
  }
  else {
    pvVar2 = Arena::Allocate(param_1,(ulonglong)*(uint *)(lVar1 + 0x28) + 7 & 0xfffffffffffffff8);
  }
  pMVar3 = (MessageLite *)(**(code **)(lVar1 + 0x30))(this,pvVar2,param_1);
  return pMVar3;
}

// Next @ 14f927280

/* public: virtual bool __cdecl google::protobuf::ZeroCopyCodedInputStream::Next(void const *
   __ptr64 * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::ZeroCopyCodedInputStream::Next
          (ZeroCopyCodedInputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  CodedInputStream *this_00;
  bool bVar2;
  int iVar3;
  
  bVar2 = io::CodedInputStream::GetDirectBufferPointer
                    (*(CodedInputStream **)(this + 8),param_1,param_2);
  if (!bVar2) {
    return false;
  }
  iVar1 = *param_2;
  this_00 = *(CodedInputStream **)(this + 8);
  if (-1 < iVar1) {
    iVar3 = *(int *)&this_00->buffer_end_ - *(int *)&this_00->buffer_;
    if (iVar1 <= iVar3) {
      this_00->buffer_ = this_00->buffer_ + iVar1;
      return true;
    }
    io::CodedInputStream::SkipFallback(this_00,iVar1,iVar3);
  }
  return true;
}

// OnDemandRegisterArenaDtor @ 14f9272f0

/* public: void __cdecl google::protobuf::MessageLite::OnDemandRegisterArenaDtor(class
   google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::MessageLite::OnDemandRegisterArenaDtor(MessageLite *this,Arena *param_1)

{
  longlong lVar1;
  
  if (param_1 != (Arena *)0x0) {
    lVar1 = (**(code **)(this->_padding_ + 0x18))();
    if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
      (**(code **)(lVar1 + 0x10))(this,param_1);
    }
  }
  return;
}

// OnShutdown @ 14f927330

/* void __cdecl google::protobuf::internal::OnShutdown(void (__cdecl*)(void)) */

void __cdecl google::protobuf::internal::OnShutdown(_func_void *param_1)

{
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar1;
  ShutdownData *this;
  undefined *local_18;
  _func_void *p_Stack_10;
  
  this = ShutdownData::get();
  absl::lts_20240722::Mutex::Lock((Mutex *)(this + 0x18));
  local_18 = &DAT_14f927db0;
  ppVar1 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  p_Stack_10 = param_1;
  if (ppVar1 == *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10)) {
    std::
    vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
    ::_Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
              ((vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                *)this,ppVar1,
               (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)&local_18);
  }
  else {
    *(undefined **)ppVar1 = &DAT_14f927db0;
    *(_func_void **)(ppVar1 + 8) = param_1;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x10;
  }
  absl::lts_20240722::Mutex::Unlock((Mutex *)(this + 0x18));
  return;
}

// OnShutdownRun @ 14f9273c0

/* void __cdecl google::protobuf::internal::OnShutdownRun(void (__cdecl*)(void const * __ptr64),void
   const * __ptr64) */

void __cdecl google::protobuf::internal::OnShutdownRun(_func_void_void_ptr *param_1,void *param_2)

{
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar1;
  ShutdownData *this;
  _func_void_void_ptr *local_18;
  void *pvStack_10;
  
  this = ShutdownData::get();
  absl::lts_20240722::Mutex::Lock((Mutex *)(this + 0x18));
  ppVar1 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  local_18 = param_1;
  pvStack_10 = param_2;
  if (ppVar1 == *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10)) {
    std::
    vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
    ::_Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
              ((vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                *)this,ppVar1,
               (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)&local_18);
  }
  else {
    *(_func_void_void_ptr **)ppVar1 = param_1;
    *(void **)(ppVar1 + 8) = param_2;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x10;
  }
  absl::lts_20240722::Mutex::Unlock((Mutex *)(this + 0x18));
  return;
}

// ParseFromArray @ 14f927450

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromArray(void const * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromArray(MessageLite *this,void *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1;
  local_18._Mysize = (longlong)param_2;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParse);
  return bVar1;
}

// ParseFromBoundedZeroCopyStream @ 14f9274d0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromBoundedZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromBoundedZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ZeroCopyInputStream *local_18;
  int iStack_10;
  
  local_18 = param_1;
  iStack_10 = param_2;
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,1);
  return bVar1;
}

// ParseFromCodedStream @ 14f927540

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromCodedStream(MessageLite *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  (**(code **)(this->_padding_ + 8))();
  bVar1 = MergeFromImpl(this,param_1,kParse);
  return bVar1;
}

// ParseFromFileDescriptor @ 14f927580

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromFileDescriptor(int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromFileDescriptor(MessageLite *this,int param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  ZeroCopyInputStream local_68;
  CopyingFileInputStream local_60 [16];
  int local_50;
  CopyingInputStreamAdaptor local_48 [64];
  
  io::FileInputStream::FileInputStream((FileInputStream *)&local_68,param_1,-1);
  (**(code **)(this->_padding_ + 8))(this);
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_68,this,pTVar3,kParse);
  if ((bVar1) && (local_50 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(local_48);
  io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(local_60);
  return bVar1;
}

// ParseFromIstream @ 14f927620

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromIstream(class
   std::basic_istream<char,struct std::char_traits<char> > * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromIstream
          (MessageLite *this,basic_istream<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  ZeroCopyInputStream local_58;
  CopyingIstreamInputStream local_50 [16];
  CopyingInputStreamAdaptor local_40 [56];
  
  io::IstreamInputStream::IstreamInputStream((IstreamInputStream *)&local_58,param_1,-1);
  (**(code **)(this->_padding_ + 8))(this);
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_58,this,pTVar3,kParse);
  if (bVar1) {
    bVar1 = std::ios_base::eof((ios_base *)
                               (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)));
    if (bVar1) {
      bVar1 = true;
      goto LAB_14f9276a0;
    }
  }
  bVar1 = false;
LAB_14f9276a0:
  io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(local_40);
  io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(local_50);
  return bVar1;
}

// ParseFromString @ 14f9276d0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromString(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall google::protobuf::MessageLite::ParseFromString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  Cord *local_res8 [4];
  
  local_res8[0] = param_1;
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>
                    ((SourceWrapper<absl::lts_20240722::Cord> *)local_res8,this,pTVar3,kParse);
  return bVar1;
}

// ParseFromString @ 14f927730

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromString(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromString
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParse);
  return bVar1;
}

// ParseFromZeroCopyStream @ 14f9277a0

/* public: bool __cdecl google::protobuf::MessageLite::ParseFromZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParseFromZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(param_1,this,pTVar3,kParse);
  return bVar1;
}

// ParseLoop @ 14f927800

/* public: static char const * __ptr64 __cdecl google::protobuf::internal::TcParser::ParseLoop(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcParseTableBase const * __ptr64) */

char * __cdecl
google::protobuf::internal::TcParser::ParseLoop
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcParseTableBase *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ushort *local_18;
  char local_10;
  
  do {
    if ((ushort *)param_3->_padding_ <= param_2) {
      iVar1 = (int)param_2 - (int)param_3->_padding_;
      if (iVar1 == *(int *)((longlong)&param_3->_padding_ + 4)) {
        if ((0 < iVar1) && (param_3->_padding_ == 0)) {
          param_2 = (char *)0x0;
        }
LAB_14f92789f:
        if (param_4->has_post_loop_handler != 0) {
          param_2 = (*param_4->post_loop_handler)(param_1,param_2,param_3);
        }
        return param_2;
      }
      EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_3,(int)&local_18,iVar1);
      param_2 = (char *)local_18;
      if (local_10 != '\0') goto LAB_14f92789f;
    }
    uVar2 = (ulonglong)(*(ushort *)param_2 >> 3) & (ulonglong)(param_4->fast_idx_mask >> 3);
    param_2 = (char *)(**(code **)(&param_4[1].has_bits_offset + uVar2 * 8))
                                (param_1,param_2,param_3,
                                 (ulonglong)*(ushort *)param_2 ^
                                 *(ulonglong *)(&param_4[1].fast_idx_mask + uVar2 * 0x10),param_4,0)
    ;
    if (((ushort *)param_2 == (ushort *)0x0) || ((int)param_3->_padding_ != 0)) goto LAB_14f92789f;
  } while( true );
}

// ParsePartialFromArray @ 14f9278e0

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromArray(void const *
   __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromArray(MessageLite *this,void *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1;
  local_18._Mysize = (longlong)param_2;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParsePartial);
  return bVar1;
}

// ParsePartialFromBoundedZeroCopyStream @ 14f927960

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromBoundedZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromBoundedZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ZeroCopyInputStream *local_18;
  int iStack_10;
  
  local_18 = param_1;
  iStack_10 = param_2;
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,lVar3,3);
  return bVar1;
}

// ParsePartialFromCodedStream @ 14f9279d0

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromCodedStream(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromCodedStream
          (MessageLite *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  (**(code **)(this->_padding_ + 8))();
  bVar1 = MergeFromImpl(this,param_1,kParsePartial);
  return bVar1;
}

// ParsePartialFromFileDescriptor @ 14f927a10

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromFileDescriptor(int) __ptr64
    */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromFileDescriptor(MessageLite *this,int param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  ZeroCopyInputStream local_68;
  CopyingFileInputStream local_60 [16];
  int local_50;
  CopyingInputStreamAdaptor local_48 [64];
  
  io::FileInputStream::FileInputStream((FileInputStream *)&local_68,param_1,-1);
  (**(code **)(this->_padding_ + 8))(this);
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_68,this,pTVar3,kParsePartial);
  if ((bVar1) && (local_50 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(local_48);
  io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(local_60);
  return bVar1;
}

// ParsePartialFromIstream @ 14f927ab0

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromIstream(class
   std::basic_istream<char,struct std::char_traits<char> > * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromIstream
          (MessageLite *this,basic_istream<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  ZeroCopyInputStream local_58;
  CopyingIstreamInputStream local_50 [16];
  CopyingInputStreamAdaptor local_40 [56];
  
  io::IstreamInputStream::IstreamInputStream((IstreamInputStream *)&local_58,param_1,-1);
  (**(code **)(this->_padding_ + 8))(this);
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(&local_58,this,pTVar3,kParsePartial);
  if (bVar1) {
    bVar1 = std::ios_base::eof((ios_base *)
                               (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)));
    if (bVar1) {
      bVar1 = true;
      goto LAB_14f927b30;
    }
  }
  bVar1 = false;
LAB_14f927b30:
  io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(local_40);
  io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(local_50);
  return bVar1;
}

// ParsePartialFromString @ 14f927b60

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromString(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  Cord *local_res8 [4];
  
  local_res8[0] = param_1;
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0,absl::lts_20240722::Cord>
                    ((SourceWrapper<absl::lts_20240722::Cord> *)local_res8,this,pTVar3,kParsePartial
                    );
  return bVar1;
}

// ParsePartialFromString @ 14f927bc0

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromString(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromString
          (MessageLite *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::MergeFromImpl<0>(&local_18,this,pTVar3,kParsePartial);
  return bVar1;
}

// ParsePartialFromZeroCopyStream @ 14f927c30

/* public: bool __cdecl google::protobuf::MessageLite::ParsePartialFromZeroCopyStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::MessageLite::ParsePartialFromZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1)

{
  bool bVar1;
  longlong lVar2;
  TcParseTableBase *pTVar3;
  
  (**(code **)(this->_padding_ + 8))();
  lVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  pTVar3 = *(TcParseTableBase **)(lVar2 + 8);
  if (pTVar3 == (TcParseTableBase *)0x0) {
    pTVar3 = (TcParseTableBase *)(**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  bVar1 = internal::MergeFromImpl<0>(param_1,this,pTVar3,kParsePartial);
  return bVar1;
}

// PerformDebugChecks @ 14f927c90

/* bool __cdecl google::protobuf::internal::PerformDebugChecks(void) */

bool __cdecl google::protobuf::internal::PerformDebugChecks(void)

{
  return false;
}

// ReadCord @ 14f927ca0

/* public: virtual bool __cdecl google::protobuf::ZeroCopyCodedInputStream::ReadCord(class
   absl::lts_20240722::Cord * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::ZeroCopyCodedInputStream::ReadCord
          (ZeroCopyCodedInputStream *this,Cord *param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  Rep_u_0 local_18;
  
  uVar2 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar3 == 0) {
    bVar1 = io::CodedInputStream::ReadCord(*(CodedInputStream **)(this + 8),param_1,param_2);
    return bVar1;
  }
  local_18.as_tree.cordz_info = 0;
  local_18.as_tree.rep = (CordRep *)0x0;
  bVar1 = io::CodedInputStream::ReadCord
                    (*(CodedInputStream **)(this + 8),(Cord *)&local_18.as_tree,param_2);
  absl::lts_20240722::Cord::Append(param_1,(Cord *)&local_18.as_tree);
  if ((local_18.as_tree.cordz_info & 1U) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_18.as_tree);
  }
  return bVar1;
}

// RecursionBudget @ 14f927d30

/* public: int __cdecl google::protobuf::io::CodedInputStream::RecursionBudget(void) __ptr64 */

int __thiscall google::protobuf::io::CodedInputStream::RecursionBudget(CodedInputStream *this)

{
  return this->recursion_budget_;
}

// RoundUp @ 14f927d40

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::RoundUp(unsigned __int64,unsigned
   __int64) */

__uint64 __cdecl absl::lts_20240722::cord_internal::RoundUp(__uint64 param_1,__uint64 param_2)

{
  return (param_2 - 1) + param_1 & -param_2;
}

// RoundUpForTag @ 14f927d60

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::RoundUpForTag(unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::cord_internal::RoundUpForTag(__uint64 param_1)

{
  longlong lVar1;
  
  if (param_1 < 0x201) {
    return param_1 + 7 & 0xfffffffffffffff8;
  }
  lVar1 = 0x1000;
  if (param_1 < 0x2001) {
    lVar1 = 0x40;
  }
  return (param_1 - 1) + lVar1 & -lVar1;
}

// SerializeAsCord @ 14f927dc0

/* public: class absl::lts_20240722::Cord __cdecl
   google::protobuf::MessageLite::SerializeAsCord(void)const __ptr64 */

Cord * __thiscall
google::protobuf::MessageLite::SerializeAsCord(MessageLite *this,Cord *__return_storage_ptr__)

{
  bool bVar1;
  
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  bVar1 = AppendPartialToString(this,__return_storage_ptr__);
  if (!bVar1) {
    absl::lts_20240722::Cord::Clear(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// SerializeAsString @ 14f927e10

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::MessageLite::SerializeAsString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::MessageLite::SerializeAsString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  bVar1 = AppendPartialToString(this,__return_storage_ptr__);
  if (!bVar1) {
    pbVar2 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  return __return_storage_ptr__;
}

// SerializePartialAsCord @ 14f927e80

/* public: class absl::lts_20240722::Cord __cdecl
   google::protobuf::MessageLite::SerializePartialAsCord(void)const __ptr64 */

Cord * __thiscall
google::protobuf::MessageLite::SerializePartialAsCord
          (MessageLite *this,Cord *__return_storage_ptr__)

{
  bool bVar1;
  
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  bVar1 = AppendPartialToString(this,__return_storage_ptr__);
  if (!bVar1) {
    absl::lts_20240722::Cord::Clear(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// SerializePartialAsString @ 14f927ed0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::MessageLite::SerializePartialAsString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::MessageLite::SerializePartialAsString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  bVar1 = AppendPartialToString(this,__return_storage_ptr__);
  if (!bVar1) {
    pbVar2 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  return __return_storage_ptr__;
}

// SerializePartialToArray @ 14f927f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToArray(void *
   __ptr64,int)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToArray(MessageLite *this,void *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  LogMessage *pLVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  basic_string_view<char,std::char_traits<char>_> local_a8;
  undefined4 local_98;
  char *local_88;
  ulong64 uStack_80;
  LogMessage local_78;
  longlong local_68 [6];
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = 0;
  pcVar2 = (char *)(**(code **)(this->_padding_ + 0x10))();
  if (pcVar2 < (char *)0x80000000) {
    if ((longlong)pcVar2 <= (longlong)param_2) {
      local_68[0] = (longlong)(int)pcVar2 + (longlong)param_1;
      local_68[1] = 0;
      local_38 = 0;
      local_30 = 0;
      local_2e = io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
      local_2d = 0;
      (**(code **)(this->_padding_ + 0x20))(this,param_1,local_68);
      return true;
    }
  }
  else {
    pLVar3 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_78,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x270,(ErrorTag)0x0);
    local_98 = 1;
    lVar4 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar1 = (char *)(lVar4 + 0x40);
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar1)(&local_88,lVar4);
    }
    else {
      uStack_80 = 0xffffffffffffffff;
      do {
        uStack_80 = uStack_80 + 1;
        local_88 = pcVar1;
      } while (pcVar1[uStack_80] != '\0');
    }
    local_a8._Mydata = local_88;
    local_a8._Mysize = uStack_80;
    pLVar3 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_a8);
    local_a8._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_a8._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_a8);
    local_a8._Mydata = pcVar2;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (pLVar3,(__uint64 *)&local_a8);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_78);
  }
  return false;
}

// SerializePartialToCodedStream @ 14f9280e0

/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToCodedStream(class
   google::protobuf::io::CodedOutputStream * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToCodedStream
          (MessageLite *this,CodedOutputStream *param_1)

{
  char *pcVar1;
  long64 lVar2;
  ulonglong uVar3;
  LogMessage *pLVar4;
  longlong lVar5;
  __int64 _Var6;
  uchar *puVar7;
  __int64 _Var8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong local_res18 [2];
  char *local_48;
  ulong64 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessage local_28;
  
  uVar3 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar3 < 0x80000000) {
    _Var6 = io::EpsCopyOutputStream::ByteCount(&param_1->impl_,param_1->cur_);
    lVar2 = param_1->start_count_;
    puVar7 = (uchar *)(**(code **)(this->_padding_ + 0x20))(this,param_1->cur_,param_1);
    param_1->cur_ = puVar7;
    puVar7 = io::EpsCopyOutputStream::FlushAndResetBuffer(&param_1->impl_,puVar7);
    param_1->cur_ = puVar7;
    if ((param_1->impl_).had_error_ == false) {
      _Var8 = io::EpsCopyOutputStream::ByteCount(&param_1->impl_,puVar7);
      uVar10 = (ulonglong)(((int)_Var8 - ((int)_Var6 - (int)lVar2)) - (int)param_1->start_count_);
      if (uVar10 != uVar3) {
        uVar9 = (**(code **)(this->_padding_ + 0x10))(this);
        FUN_14f925430(uVar3,uVar9,uVar10,this);
      }
      return true;
    }
  }
  else {
    pLVar4 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x201,(ErrorTag)0x0);
    lVar5 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar1 = (char *)(lVar5 + 0x40);
    if (*(char *)(lVar5 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar1)(&local_48,lVar5);
    }
    else {
      uStack_40 = 0xffffffffffffffff;
      do {
        uStack_40 = uStack_40 + 1;
        local_48 = pcVar1;
      } while (pcVar1[uStack_40] != '\0');
    }
    local_38._Mydata = local_48;
    local_38._Mysize = uStack_40;
    pLVar4 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar4,&local_38);
    local_38._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_38._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar4,&local_38);
    local_res18[0] = uVar3;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>(pLVar4,local_res18)
    ;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_28);
  }
  return false;
}

// SerializePartialToFileDescriptor @ 14f928280

/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToFileDescriptor(int)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToFileDescriptor(MessageLite *this,int param_1)

{
  bool bVar1;
  ZeroCopyOutputStream local_58 [10];
  
  io::FileOutputStream::FileOutputStream((FileOutputStream *)local_58,param_1,-1);
  bVar1 = SerializePartialToZeroCopyStream(this,local_58);
  if (bVar1) {
    bVar1 = io::CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)local_58);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14f9282bf;
    }
  }
  bVar1 = false;
LAB_14f9282bf:
  io::FileOutputStream::~FileOutputStream((FileOutputStream *)local_58);
  return bVar1;
}

// SerializePartialToOstream @ 14f9282e0

/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToOstream(class
   std::basic_ostream<char,struct std::char_traits<char> > * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToOstream
          (MessageLite *this,basic_ostream<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  ZeroCopyOutputStream local_58 [10];
  
  io::OstreamOutputStream::OstreamOutputStream((OstreamOutputStream *)local_58,param_1,-1);
  bVar1 = SerializePartialToZeroCopyStream(this,local_58);
  io::OstreamOutputStream::~OstreamOutputStream((OstreamOutputStream *)local_58);
  return bVar1;
}

// SerializePartialToString @ 14f928330

/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  pbVar2 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// SerializePartialToString @ 14f928360

/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToString(class
   absl::lts_20240722::Cord * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  
  absl::lts_20240722::Cord::Clear(param_1);
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// SerializePartialToZeroCopyStream @ 14f9283a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::MessageLite::SerializePartialToZeroCopyStream(class
   google::protobuf::io::ZeroCopyOutputStream * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializePartialToZeroCopyStream
          (MessageLite *this,ZeroCopyOutputStream *param_1)

{
  char *pcVar1;
  char *pcVar2;
  LogMessage *pLVar3;
  longlong lVar4;
  uchar *puVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  basic_string_view<char,std::char_traits<char>_> local_98;
  undefined4 local_88;
  char *local_78;
  ulong64 uStack_70;
  LogMessage local_68;
  EpsCopyOutputStream local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = 0;
  pcVar2 = (char *)(**(code **)(this->_padding_ + 0x10))();
  if (pcVar2 < (char *)0x80000000) {
    local_58.end_ = local_58.buffer_;
    local_58.buffer_end_ = local_58.buffer_;
    local_58.had_error_ = false;
    local_58.aliasing_enabled_ = false;
    local_58.is_serialization_deterministic_ =
         io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
    local_58.skip_check_consistency = false;
    local_58.stream_ = param_1;
    puVar5 = (uchar *)(**(code **)(this->_padding_ + 0x20))(this,local_58.buffer_,&local_58);
    io::EpsCopyOutputStream::Trim(&local_58,puVar5);
    bVar6 = local_58.had_error_ == false;
  }
  else {
    pLVar3 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_68,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x220,(ErrorTag)0x0);
    local_88 = 1;
    lVar4 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar1 = (char *)(lVar4 + 0x40);
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar1)(&local_78,lVar4);
    }
    else {
      uStack_70 = 0xffffffffffffffff;
      do {
        uStack_70 = uStack_70 + 1;
        local_78 = pcVar1;
      } while (pcVar1[uStack_70] != '\0');
    }
    local_98._Mydata = local_78;
    local_98._Mysize = uStack_70;
    pLVar3 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_98);
    local_98._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_98._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_98);
    local_98._Mydata = pcVar2;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (pLVar3,(__uint64 *)&local_98);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_68);
    bVar6 = false;
  }
  return bVar6;
}

// SerializeToArray @ 14f928530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::MessageLite::SerializeToArray(void * __ptr64,int)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializeToArray(MessageLite *this,void *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  LogMessage *pLVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  basic_string_view<char,std::char_traits<char>_> local_a8;
  undefined4 local_98;
  char *local_88;
  ulong64 uStack_80;
  LogMessage local_78;
  longlong local_68 [6];
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = 0;
  pcVar2 = (char *)(**(code **)(this->_padding_ + 0x10))();
  if (pcVar2 < (char *)0x80000000) {
    if ((longlong)pcVar2 <= (longlong)param_2) {
      local_68[0] = (longlong)(int)pcVar2 + (longlong)param_1;
      local_68[1] = 0;
      local_38 = 0;
      local_30 = 0;
      local_2e = io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
      local_2d = 0;
      (**(code **)(this->_padding_ + 0x20))(this,param_1,local_68);
      return true;
    }
  }
  else {
    pLVar3 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_78,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x270,(ErrorTag)0x0);
    local_98 = 4;
    lVar4 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar1 = (char *)(lVar4 + 0x40);
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar1)(&local_88,lVar4);
    }
    else {
      uStack_80 = 0xffffffffffffffff;
      do {
        uStack_80 = uStack_80 + 1;
        local_88 = pcVar1;
      } while (pcVar1[uStack_80] != '\0');
    }
    local_a8._Mydata = local_88;
    local_a8._Mysize = uStack_80;
    pLVar3 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_a8);
    local_a8._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_a8._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_a8);
    local_a8._Mydata = pcVar2;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (pLVar3,(__uint64 *)&local_a8);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_78);
  }
  return false;
}

// SerializeToArrayImpl @ 14f9286d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned char * __ptr64 __cdecl google::protobuf::SerializeToArrayImpl(class
   google::protobuf::MessageLite const & __ptr64,unsigned char * __ptr64,int) */

uchar * __cdecl
google::protobuf::SerializeToArrayImpl(MessageLite *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  undefined1 auStack_88 [48];
  uchar *local_58;
  undefined8 local_50;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58 = param_2 + param_3;
  local_50 = 0;
  local_1e = io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
  local_28 = 0;
  local_20 = 0;
  local_1d = 0;
  puVar1 = (uchar *)(**(code **)(param_1->_padding_ + 0x20))(param_1,param_2,&local_58);
  return puVar1;
}

// SerializeToCodedStream @ 14f928740

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToCodedStream(class
   google::protobuf::io::CodedOutputStream * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializeToCodedStream(MessageLite *this,CodedOutputStream *param_1)

{
  long64 lVar1;
  char *pcVar2;
  LogMessage *pLVar3;
  longlong lVar4;
  __int64 _Var5;
  uchar *puVar6;
  __int64 _Var7;
  undefined8 uVar8;
  char *pcVar9;
  basic_string_view<char,std::char_traits<char>_> local_58;
  undefined4 local_48;
  char *local_38;
  ulong64 uStack_30;
  LogMessage local_28;
  
  local_48 = 0;
  pcVar2 = (char *)(**(code **)(this->_padding_ + 0x10))();
  if (pcVar2 < (char *)0x80000000) {
    _Var5 = io::EpsCopyOutputStream::ByteCount(&param_1->impl_,param_1->cur_);
    lVar1 = param_1->start_count_;
    puVar6 = (uchar *)(**(code **)(this->_padding_ + 0x20))(this,param_1->cur_,param_1);
    param_1->cur_ = puVar6;
    puVar6 = io::EpsCopyOutputStream::FlushAndResetBuffer(&param_1->impl_,puVar6);
    param_1->cur_ = puVar6;
    if ((param_1->impl_).had_error_ == false) {
      _Var7 = io::EpsCopyOutputStream::ByteCount(&param_1->impl_,puVar6);
      pcVar9 = (char *)(longlong)
                       (((int)_Var7 - (int)param_1->start_count_) - ((int)_Var5 - (int)lVar1));
      if (pcVar9 != pcVar2) {
        uVar8 = (**(code **)(this->_padding_ + 0x10))(this);
        FUN_14f925430(pcVar2,uVar8,pcVar9,this);
      }
      return true;
    }
  }
  else {
    pLVar3 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessage::LogMessage
                       (&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message_lite.cc"
                        ,0x201,(ErrorTag)0x0);
    local_48 = 4;
    lVar4 = (**(code **)(this->_padding_ + 0x18))(this);
    pcVar9 = (char *)(lVar4 + 0x40);
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      (*(code *)**(undefined8 **)pcVar9)(&local_38,lVar4);
    }
    else {
      uStack_30 = 0xffffffffffffffff;
      do {
        uStack_30 = uStack_30 + 1;
        local_38 = pcVar9;
      } while (pcVar9[uStack_30] != '\0');
    }
    local_58._Mydata = local_38;
    local_58._Mysize = uStack_30;
    pLVar3 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_58);
    local_58._Mydata = " exceeded maximum protobuf size of 2GB: ";
    local_58._Mysize = 0x28;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_58);
    local_58._Mydata = pcVar2;
    absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
              (pLVar3,(__uint64 *)&local_58);
    absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_28);
  }
  return false;
}

// SerializeToFileDescriptor @ 14f9288e0

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToFileDescriptor(int)const __ptr64
    */

bool __thiscall
google::protobuf::MessageLite::SerializeToFileDescriptor(MessageLite *this,int param_1)

{
  bool bVar1;
  ZeroCopyOutputStream local_58 [10];
  
  io::FileOutputStream::FileOutputStream((FileOutputStream *)local_58,param_1,-1);
  bVar1 = SerializePartialToZeroCopyStream(this,local_58);
  if (bVar1) {
    bVar1 = io::CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)local_58);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14f928922;
    }
  }
  bVar1 = false;
LAB_14f928922:
  io::FileOutputStream::~FileOutputStream((FileOutputStream *)local_58);
  return bVar1;
}

// SerializeToOstream @ 14f928940

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToOstream(class
   std::basic_ostream<char,struct std::char_traits<char> > * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializeToOstream
          (MessageLite *this,basic_ostream<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  ZeroCopyOutputStream local_58 [10];
  
  io::OstreamOutputStream::OstreamOutputStream((OstreamOutputStream *)local_58,param_1,-1);
  bVar1 = SerializePartialToZeroCopyStream(this,local_58);
  if (!bVar1) {
    io::OstreamOutputStream::~OstreamOutputStream((OstreamOutputStream *)local_58);
    return false;
  }
  io::OstreamOutputStream::~OstreamOutputStream((OstreamOutputStream *)local_58);
                    /* WARNING: Could not recover jumptable at 0x00014f9289b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = std::ios_base::good((ios_base *)(&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4))
                             );
  return bVar1;
}

// SerializeToString @ 14f9289c0

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializeToString
          (MessageLite *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  pbVar2 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// SerializeToString @ 14f9289f0

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToString(class
   absl::lts_20240722::Cord * __ptr64)const __ptr64 */

bool __thiscall google::protobuf::MessageLite::SerializeToString(MessageLite *this,Cord *param_1)

{
  bool bVar1;
  
  absl::lts_20240722::Cord::Clear(param_1);
  bVar1 = AppendPartialToString(this,param_1);
  return bVar1;
}

// SerializeToZeroCopyStream @ 14f928a30

/* public: bool __cdecl google::protobuf::MessageLite::SerializeToZeroCopyStream(class
   google::protobuf::io::ZeroCopyOutputStream * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::MessageLite::SerializeToZeroCopyStream
          (MessageLite *this,ZeroCopyOutputStream *param_1)

{
  bool bVar1;
  
  bVar1 = SerializePartialToZeroCopyStream(this,param_1);
  return bVar1;
}

// SerializeWithCachedSizes @ 14f928a50

/* public: void __cdecl google::protobuf::MessageLite::SerializeWithCachedSizes(class
   google::protobuf::io::CodedOutputStream * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::MessageLite::SerializeWithCachedSizes
          (MessageLite *this,CodedOutputStream *param_1)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(**(code **)(this->_padding_ + 0x20))(this,param_1->cur_,param_1);
  param_1->cur_ = puVar1;
  return;
}

// SerializeWithCachedSizesToArray @ 14f928a80

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::MessageLite::SerializeWithCachedSizesToArray(unsigned char * __ptr64)const
   __ptr64 */

uchar * __thiscall
google::protobuf::MessageLite::SerializeWithCachedSizesToArray(MessageLite *this,uchar *param_1)

{
  longlong lVar1;
  uchar *puVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  puVar2 = SerializeToArrayImpl
                     (this,param_1,
                      *(int *)((longlong)&this->_padding_ + (ulonglong)*(uint *)(lVar1 + 0x38)));
  return puVar2;
}

// SetConsumed @ 14f928ac0

/* public: void __cdecl google::protobuf::io::CodedInputStream::SetConsumed(void) __ptr64 */

void __thiscall google::protobuf::io::CodedInputStream::SetConsumed(CodedInputStream *this)

{
  this->legitimate_message_end_ = true;
  return;
}

// SetCur @ 14f928ad0

/* public: void __cdecl google::protobuf::io::CodedOutputStream::SetCur(unsigned char * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::SetCur(CodedOutputStream *this,uchar *param_1)

{
  this->cur_ = param_1;
  return;
}

// SetInitialBuffer @ 14f928ae0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::SetInitialBuffer(void * __ptr64,int) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::SetInitialBuffer
          (EpsCopyOutputStream *this,void *param_1,int param_2)

{
  if (0x10 < param_2) {
    this->buffer_end_ = (uchar *)0x0;
    this->end_ = (uchar *)((longlong)param_2 + -0x10 + (longlong)param_1);
    return param_1;
  }
  this->buffer_end_ = param_1;
  this->end_ = this->buffer_ + param_2;
  return this->buffer_;
}

// SetLastTag @ 14f928b20

/* public: void __cdecl google::protobuf::io::CodedInputStream::SetLastTag(unsigned int) __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::SetLastTag(CodedInputStream *this,uint param_1)

{
  this->last_tag_ = param_1;
  return;
}

// SetLength @ 14f928b30

/* public: void __cdecl absl::lts_20240722::CordBuffer::SetLength(unsigned __int64) __ptr64 */

void __thiscall absl::lts_20240722::CordBuffer::SetLength(CordBuffer *this,__uint64 param_1)

{
  if (((this->rep_).field0_0x0.short_rep.raw_size & 1U) != 0) {
    (this->rep_).field0_0x0.short_rep.raw_size = (char)param_1 * '\x02' + '\x01';
    return;
  }
  *(__uint64 *)(this->rep_).field0_0x0.long_rep.rep = param_1;
  return;
}

// ShortFormat @ 14f928b50

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::ShortFormat(class google::protobuf::MessageLite const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::ShortFormat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          MessageLite *param_1)

{
  MessageLite::DebugString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShutdownProtobufLibrary @ 14f928b80

/* void __cdecl google::protobuf::ShutdownProtobufLibrary(void) */

void __cdecl google::protobuf::ShutdownProtobufLibrary(void)

{
  undefined8 uVar1;
  void *pvVar2;
  ShutdownData *pSVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong64 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar6;
  
  if (DAT_1553e4a34 == '\0') {
    pSVar3 = internal::ShutdownData::get();
    if (pSVar3 != (ShutdownData *)0x0) {
      puVar8 = *(undefined8 **)pSVar3;
      puVar5 = *(undefined8 **)(pSVar3 + 8);
      if (puVar8 != *(undefined8 **)(pSVar3 + 8)) {
        do {
          puVar6 = puVar5 + -2;
          if (puVar8 == puVar6) break;
          uVar1 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar1;
          uVar1 = puVar8[1];
          puVar8[1] = puVar5[-1];
          puVar5[-1] = uVar1;
          puVar8 = puVar8 + 2;
          puVar5 = puVar6;
        } while (puVar8 != puVar6);
      }
      puVar8 = *(undefined8 **)(pSVar3 + 8);
      for (puVar5 = *(undefined8 **)pSVar3; puVar5 != puVar8; puVar5 = puVar5 + 2) {
        (*(code *)*puVar5)(puVar5[1]);
      }
      pvVar2 = *(void **)pSVar3;
      if (pvVar2 != (void *)0x0) {
        uVar7 = *(longlong *)(pSVar3 + 0x10) - (longlong)pvVar2 & 0xfffffffffffffff0;
        pvVar4 = pvVar2;
        if (0xfff < uVar7) {
          uVar7 = uVar7 + 0x27;
          pvVar4 = *(void **)((longlong)pvVar2 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pvVar4,uVar7);
        *(undefined8 *)pSVar3 = 0;
        *(undefined8 *)(pSVar3 + 8) = 0;
        *(undefined8 *)(pSVar3 + 0x10) = 0;
      }
      ::operator_delete(pSVar3,0x20);
    }
    DAT_1553e4a34 = '\x01';
  }
  return;
}

// Skip @ 14f928c90

/* public: bool __cdecl google::protobuf::io::CodedInputStream::Skip(int) __ptr64 */

bool __thiscall google::protobuf::io::CodedInputStream::Skip(CodedInputStream *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < 0) {
    return false;
  }
  iVar2 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
  if (param_1 <= iVar2) {
    this->buffer_ = this->buffer_ + param_1;
    return true;
  }
  bVar1 = SkipFallback(this,param_1,iVar2);
  return bVar1;
}

// Skip @ 14f928cc0

/* public: virtual bool __cdecl google::protobuf::ZeroCopyCodedInputStream::Skip(int) __ptr64 */

bool __thiscall
google::protobuf::ZeroCopyCodedInputStream::Skip(ZeroCopyCodedInputStream *this,int param_1)

{
  CodedInputStream *this_00;
  bool bVar1;
  int iVar2;
  
  this_00 = *(CodedInputStream **)(this + 8);
  if (param_1 < 0) {
    return false;
  }
  iVar2 = *(int *)&this_00->buffer_end_ - *(int *)&this_00->buffer_;
  if (param_1 <= iVar2) {
    this_00->buffer_ = this_00->buffer_ + param_1;
    return true;
  }
  bVar1 = io::CodedInputStream::SkipFallback(this_00,param_1,iVar2);
  return bVar1;
}

// StreamBackUp @ 14f928cf0

/* private: void __cdecl google::protobuf::internal::EpsCopyInputStream::StreamBackUp(int) __ptr64
    */

void __thiscall
google::protobuf::internal::EpsCopyInputStream::StreamBackUp(EpsCopyInputStream *this,int param_1)

{
  (**(code **)((longlong)*this->zcis_ + 0x10))();
  this->overall_limit_ = this->overall_limit_ + param_1;
  return;
}

// TagDispatch @ 14f928d20

/* private: static char const * __ptr64 __cdecl
   google::protobuf::internal::TcParser::TagDispatch(class google::protobuf::MessageLite *
   __ptr64,char const * __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

char * __cdecl
google::protobuf::internal::TcParser::TagDispatch
          (MessageLite *param_1,char *param_2,ParseContext *param_3,TcFieldData param_4,
          TcParseTableBase *param_5,__uint64 param_6)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f928d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(**(code **)(&param_5[1].has_bits_offset +
                               ((ulonglong)(param_5->fast_idx_mask >> 3) &
                               (ulonglong)(*(ushort *)param_2 >> 3)) * 8))();
  return pcVar1;
}

// TagToAllocatedSize @ 14f928d60

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::TagToAllocatedSize(unsigned char) */

__uint64 __cdecl absl::lts_20240722::cord_internal::TagToAllocatedSize(uchar param_1)

{
  if (param_1 < 0x43) {
    return (longlong)(int)((uint)param_1 * 8 + -0x10);
  }
  if (param_1 < 0xbb) {
    return (longlong)(int)((param_1 - 0x3a) * 0x40);
  }
  return (longlong)(int)((param_1 - 0xb8) * 0x1000);
}

// TagToLength @ 14f928da0

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::TagToLength(unsigned char) */

__uint64 __cdecl absl::lts_20240722::cord_internal::TagToLength(uchar param_1)

{
  if (param_1 < 0x43) {
    return (longlong)(int)((uint)param_1 * 8 + -0x10) - 0xd;
  }
  if (param_1 < 0xbb) {
    return (longlong)(int)((param_1 - 0x3a) * 0x40) - 0xd;
  }
  return (longlong)(int)((param_1 - 0xb8) * 0x1000) - 0xd;
}

// ToHost @ 14f928de0

/* unsigned short __cdecl google::protobuf::internal::little_endian::ToHost(unsigned short) */

ushort __cdecl google::protobuf::internal::little_endian::ToHost(ushort param_1)

{
  return param_1;
}

// TrackCorrectEnding @ 14f928df0

/* public: void __cdecl google::protobuf::internal::ParseContext::TrackCorrectEnding(void) __ptr64
    */

void __thiscall google::protobuf::internal::ParseContext::TrackCorrectEnding(ParseContext *this)

{
  this->group_depth_ = 0;
  return;
}

// TryFlat @ 14f928e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class std::optional<class std::basic_string_view<char,struct std::char_traits<char> > >
   __cdecl absl::lts_20240722::Cord::TryFlat(void)const __ptr64 */

optional<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
absl::lts_20240722::Cord::TryFlat
          (Cord *this,
          optional<std::basic_string_view<char,std::char_traits<char>_>_> *__return_storage_ptr__)

{
  byte bVar1;
  CordRep *pCVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  byte bVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  bVar1 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar6 = bVar1 & 1;
  if (bVar6 == 0) {
    uVar4 = (ulonglong)(longlong)(char)bVar1 >> 1;
  }
  else {
    pCVar2 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
    uVar4 = _DAT_00000000;
    if (pCVar2 != (CordRep *)0x0) {
      local_18._Mydata = (char *)0x0;
      local_18._Mysize = 0;
      bVar3 = GetFlatAux(pCVar2,&local_18);
      if (!bVar3) {
        __return_storage_ptr__->field_0x10 = 0;
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->field_0x10 = 1;
      *(char **)__return_storage_ptr__ = local_18._Mydata;
      *(ulong64 *)&__return_storage_ptr__->field_0x8 = local_18._Mysize;
      return __return_storage_ptr__;
    }
  }
  puVar5 = (undefined1 *)0x0;
  if (bVar6 == 0) {
    puVar5 = (undefined1 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1);
  }
  *(undefined1 **)__return_storage_ptr__ = puVar5;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = uVar4;
  __return_storage_ptr__->field_0x10 = 1;
  return __return_storage_ptr__;
}

// Unref @ 14f928e90

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRep::Unref(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRep::Unref(CordRep *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  uchar uVar3;
  byte bVar4;
  CordRepBtree *pCVar5;
  
  LOCK();
  pRVar1 = &param_1->refcount;
  aVar2 = pRVar1->count_;
  pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
  UNLOCK();
  if (aVar2 != (atomic<int>)0x2) {
    return;
  }
  uVar3 = param_1->tag;
  while( true ) {
    if (uVar3 == '\x03') {
      CordRepBtree::Destroy((CordRepBtree *)param_1);
      return;
    }
    bVar4 = *(byte *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4);
    if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0001501c9bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((CordRepBtree *)param_1)->edges_[1])(param_1);
      return;
    }
    if (bVar4 != 1) break;
    pCVar5 = (CordRepBtree *)((CordRepBtree *)param_1)->edges_[1];
    ::operator_delete(param_1,0x20);
    if (((RefcountAndFlags *)&pCVar5->_padding_)->count_ != (atomic<int>)0x2) {
      LOCK();
      pRVar1 = (RefcountAndFlags *)&pCVar5->_padding_;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 != (atomic<int>)0x2) {
        return;
      }
    }
    uVar3 = *(uchar *)((RefcountAndFlags *)&pCVar5->_padding_ + 1);
    param_1 = (CordRep *)pCVar5;
  }
  if (bVar4 == 2) {
    CordRepCrc::Destroy((CordRepCrc *)param_1);
    return;
  }
  if (0x42 < bVar4) {
    if (0xba < bVar4) {
      ::operator_delete(param_1,(longlong)(int)((bVar4 - 0xb8) * 0x1000));
      return;
    }
    ::operator_delete(param_1,(longlong)(int)((bVar4 - 0x3a) * 0x40));
    return;
  }
  ::operator_delete(param_1,(longlong)(int)((uint)bVar4 * 8 + -0x10));
  return;
}

// Utf8Format @ 14f928eb0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::Utf8Format(class google::protobuf::MessageLite const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Utf8Format
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          MessageLite *param_1)

{
  MessageLite::DebugString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Calculate_growth @ 14f928ee0

/* private: unsigned __int64 __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Calculate_growth(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                    *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(this + 0x10) - *(longlong *)this >> 4;
  uVar1 = 0xfffffffffffffff;
  if ((uVar2 <= 0xfffffffffffffff - (uVar2 >> 1)) && (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)
     ) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Change_array @ 14f928f20

/* private: void __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> > >::_Change_array(struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Change_array(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
               __uint64 param_2,__uint64 param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this = param_1;
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8) =
       param_1 + param_2 * 0x10;
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10) =
       param_1 + param_3 * 0x10;
  return;
}

// _Get_first @ 14f928fc0

/* public: class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > & __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct std::pair<void
   (__cdecl*)(void const * __ptr64),void const * __ptr64> >,class std::_Vector_val<struct
   std::_Simple_types<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >,1>::_Get_first(void) __ptr64 */

allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> * __thiscall
std::
_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
             *this)

{
  return (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *)this;
}

// _Get_first @ 14f928fd0

/* public: class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > const & __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >,class
   std::_Vector_val<struct std::_Simple_types<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >,1>::_Get_first(void)const __ptr64 */

allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> * __thiscall
std::
_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>,std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>,1>
             *this)

{
  return (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *)this;
}

// _Getal @ 14f928fe0

/* private: class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > & __ptr64 __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::_Getal(void) __ptr64 */

allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Getal(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
         *this)

{
  return (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *)this;
}

// _Getal @ 14f928ff0

/* private: class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > const & __ptr64 __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::_Getal(void)const __ptr64 */

allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Getal(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
         *this)

{
  return (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *)this;
}

// _InternalParse @ 14f929000

/* public: char const * __ptr64 __cdecl google::protobuf::MessageLite::_InternalParse(char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::MessageLite::_InternalParse(MessageLite *this,char *param_1,ParseContext *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort *local_28;
  char local_20;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x10))(this);
  }
  do {
    if ((ushort *)param_2->_padding_ <= param_1) {
      iVar1 = (int)param_1 - (int)param_2->_padding_;
      if (iVar1 == *(int *)((longlong)&param_2->_padding_ + 4)) {
        if ((0 < iVar1) && (param_2->_padding_ == 0)) {
          param_1 = (char *)0x0;
        }
LAB_14f9290c2:
        if ((*(byte *)(lVar3 + 9) & 1) != 0) {
          param_1 = (char *)(**(code **)(lVar3 + 0x28))(this,param_1,param_2);
        }
        return param_1;
      }
      internal::EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_2,(int)&local_28,iVar1)
      ;
      param_1 = (char *)local_28;
      if (local_20 != '\0') goto LAB_14f9290c2;
    }
    uVar4 = (ulonglong)(*(ushort *)param_1 >> 3) & (ulonglong)(*(byte *)(lVar3 + 8) >> 3);
    param_1 = (char *)(**(code **)(lVar3 + 0x38 + uVar4 * 0x10))
                                (this,param_1,param_2,
                                 (ulonglong)*(ushort *)param_1 ^
                                 *(ulonglong *)(lVar3 + 0x40 + uVar4 * 0x10),lVar3,0);
    if (((ushort *)param_1 == (ushort *)0x0) || ((int)param_2->_padding_ != 0)) goto LAB_14f9290c2;
  } while( true );
}

// _Orphan_range @ 14f929100

/* private: void __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> > >::_Orphan_range(struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> * __ptr64,struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> * __ptr64)const __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Orphan_range(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,
               pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_2)

{
  return;
}

// _Release @ 14f929110

/* public: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::_Uninitialized_backout_al<class std::allocator<struct std::pair<void (__cdecl*)(void
   const * __ptr64),void const * __ptr64> > >::_Release(void) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Release(_Uninitialized_backout_al<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this =
       *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  return *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
}

// _Swap_bx_large_with_small @ 14f929120

/* public: static void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Swap_bx_large_with_small(class std::_String_val<struct
   std::_Simple_types<char> > & __ptr64,class std::_String_val<struct std::_Simple_types<char> > &
   __ptr64) */

void __cdecl
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Swap_bx_large_with_small
          (_String_val<std::_Simple_types<char>_> *param_1,
          _String_val<std::_Simple_types<char>_> *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)&param_2->_Bx + 8);
  pcVar1 = (param_1->_Bx)._Ptr;
  (param_1->_Bx)._Ptr = (param_2->_Bx)._Ptr;
  *(undefined8 *)((longlong)&param_1->_Bx + 8) = uVar2;
  (param_2->_Bx)._Ptr = pcVar1;
  return;
}

// _Swap_data @ 14f929140

/* public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Swap_data(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Swap_data
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = (this->_Mypair)._Myval2._Bx._Ptr;
  uVar3 = *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8);
  uVar4 = (this->_Mypair)._Myval2._Mysize;
  uVar5 = (this->_Mypair)._Myval2._Myres;
  (this->_Mypair)._Myval2._Bx._Ptr = *(char **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar6 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar6;
  *(char **)param_1 = pcVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(ulong64 *)(param_1 + 0x10) = uVar4;
  *(ulong64 *)(param_1 + 0x18) = uVar5;
  return;
}

// _Tidy @ 14f929170

/* private: void __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> > >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Tidy(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
        *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// _Unchecked_begin @ 14f9291e0

/* public: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::_Unchecked_begin(void) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Unchecked_begin(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                   *this)

{
  return *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this;
}

// _Unchecked_end @ 14f9291f0

/* public: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> > >::_Unchecked_end(void) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Unchecked_end(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
                 *this)

{
  return *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
}

// _Unwrapped @ 14f929200

/* public: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > >
   >::_Unwrapped(void)const __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
::_Unwrapped(_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>_>
             *this)

{
  return *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)this;
}

// _Xlength @ 14f929210

/* private: static void __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::_Xlength(void) */

void __cdecl
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// add_short_length @ 14f929230

/* public: void __cdecl absl::lts_20240722::CordBuffer::Rep::add_short_length(unsigned __int64)
   __ptr64 */

void __thiscall absl::lts_20240722::CordBuffer::Rep::add_short_length(Rep *this,__uint64 param_1)

{
  (this->field0_0x0).short_rep.raw_size =
       (this->field0_0x0).short_rep.raw_size + (char)param_1 * '\x02';
  return;
}

// aliasing_enabled @ 14f929240

/* public: bool __cdecl google::protobuf::ZeroCopyCodedInputStream::aliasing_enabled(void) __ptr64
    */

bool __thiscall
google::protobuf::ZeroCopyCodedInputStream::aliasing_enabled(ZeroCopyCodedInputStream *this)

{
  return (bool)*(undefined1 *)(*(longlong *)(this + 8) + 0x25);
}

// allocate @ 14f929250

/* public: struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> * __ptr64
   __cdecl std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64> >::allocate(unsigned __int64) __ptr64 */

pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> * __thiscall
std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>::allocate
          (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *this,
          __uint64 param_1)

{
  void *pvVar1;
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x1000000000000000) {
    uVar3 = param_1 * 0x10;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        ppVar2 = ::operator_new(uVar3);
        return ppVar2;
      }
      return (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        ppVar2 = (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)
                 ((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)(ppVar2 + -8) = pvVar1;
        return ppVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocation_size @ 14f9292d0

/* public: unsigned int __cdecl google::protobuf::internal::ClassData::allocation_size(void)const
   __ptr64 */

uint __thiscall google::protobuf::internal::ClassData::allocation_size(ClassData *this)

{
  return (this->message_creator).allocation_size_;
}

// allocation_size @ 14f9292e0

/* public: unsigned int __cdecl
   google::protobuf::internal::MessageCreator::allocation_size(void)const __ptr64 */

uint __thiscall google::protobuf::internal::MessageCreator::allocation_size(MessageCreator *this)

{
  return this->allocation_size_;
}

// arena @ 14f9292f0

/* public: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::arena(void)const __ptr64 */

Arena * __thiscall google::protobuf::internal::InternalMetadata::arena(InternalMetadata *this)

{
  Arena *pAVar1;
  
  pAVar1 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  return pAVar1;
}

// arena_bits @ 14f929310

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::MessageCreator::arena_bits(void)const __ptr64 */

__uint64 __thiscall google::protobuf::internal::MessageCreator::arena_bits(MessageCreator *this)

{
  return (__uint64)(this->field3_0x8).func_;
}

// as_chars @ 14f929320

/* public: char const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::InlineData::as_chars(void)const __ptr64 */

char * __thiscall absl::lts_20240722::cord_internal::InlineData::as_chars(InlineData *this)

{
  return (char *)((longlong)&(this->rep_).field0_0x0 + 1);
}

// as_chars @ 14f929330

/* public: char const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::InlineData::Rep::as_chars(void)const __ptr64 */

char * __thiscall absl::lts_20240722::cord_internal::InlineData::Rep::as_chars(Rep *this)

{
  return (char *)((longlong)&this->field0_0x0 + 1);
}

// available @ 14f929360

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::CordBuffer::available(void) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::CordBuffer::available(CordBuffer *this,Span<char> *__return_storage_ptr__)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  ulong64 uVar3;
  int iVar4;
  longlong lVar5;
  char *local_18;
  
  bVar1 = (this->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) == 0) {
    pCVar2 = (this->rep_).field0_0x0.long_rep.rep;
    bVar1 = pCVar2->field_0xc;
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    local_18 = &pCVar2->field_0xd + *(longlong *)pCVar2;
    uVar3 = ((longlong)iVar4 - *(longlong *)pCVar2) - 0xd;
  }
  else {
    lVar5 = (longlong)((char)bVar1 >> 1);
    local_18 = (char *)((longlong)&(this->rep_).field0_0x0 + lVar5 + 1);
    uVar3 = 0xf - lVar5;
  }
  __return_storage_ptr__->ptr_ = local_18;
  __return_storage_ptr__->len_ = uVar3;
  return __return_storage_ptr__;
}

// begin @ 14f9293f0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > > > __cdecl
   std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>,class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >::begin(void) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::begin(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
        *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// capacity @ 14f929400

/* public: unsigned __int64 __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::capacity(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 4;
}

// capacity @ 14f929420

/* public: unsigned __int64 __cdecl absl::lts_20240722::CordBuffer::capacity(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::CordBuffer::capacity(CordBuffer *this)

{
  byte bVar1;
  
  if (((this->rep_).field0_0x0.short_rep.raw_size & 1U) != 0) {
    return 0xf;
  }
  bVar1 = ((this->rep_).field0_0x0.long_rep.rep)->field_0xc;
  if (bVar1 < 0x43) {
    return (longlong)(int)((uint)bVar1 * 8 + -0x10) - 0xd;
  }
  if (bVar1 < 0xbb) {
    return (longlong)(int)((bVar1 - 0x3a) * 0x40) - 0xd;
  }
  return (longlong)(int)((bVar1 - 0xb8) * 0x1000) - 0xd;
}

// cordz_info @ 14f929470

/* public: class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::InlineData::cordz_info(void)const __ptr64 */

CordzInfo * __thiscall absl::lts_20240722::cord_internal::InlineData::cordz_info(InlineData *this)

{
  return (CordzInfo *)((this->rep_).field0_0x0.as_tree.cordz_info + -1);
}

// cordz_info @ 14f929480

/* public: class absl::lts_20240722::cord_internal::CordzInfo * __ptr64 __cdecl
   absl::lts_20240722::Cord::InlineRep::cordz_info(void)const __ptr64 */

CordzInfo * __thiscall absl::lts_20240722::Cord::InlineRep::cordz_info(InlineRep *this)

{
  return (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1);
}

// data @ 14f929490

/* public: char const * __ptr64 __cdecl absl::lts_20240722::Cord::InlineRep::data(void)const __ptr64
    */

char * __thiscall absl::lts_20240722::Cord::InlineRep::data(InlineRep *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (((this->data_).rep_.field0_0x0.data[0] & 1U) == 0) {
    pcVar1 = (char *)((longlong)&(this->data_).rep_.field0_0x0 + 1);
  }
  return pcVar1;
}

// data @ 14f9294b0

/* public: struct google::protobuf::internal::ParseContext::Data & __ptr64 __cdecl
   google::protobuf::internal::ParseContext::data(void) __ptr64 */

Data * __thiscall google::protobuf::internal::ParseContext::data(ParseContext *this)

{
  return &this->data_;
}

// data @ 14f9294c0

/* public: char * __ptr64 __cdecl absl::lts_20240722::CordBuffer::Rep::data(void) __ptr64 */

char * __thiscall absl::lts_20240722::CordBuffer::Rep::data(Rep *this)

{
  return (char *)((longlong)&this->field0_0x0 + 1);
}

// deallocate @ 14f9294d0

/* public: void __cdecl std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> >::deallocate(struct std::pair<void (__cdecl*)(void const * __ptr64),void const
   * __ptr64> * __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>::deallocate
          (allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *this,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1,__uint64 param_2)

{
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x10;
  ppVar1 = param_1;
  if (0xfff < uVar2) {
    ppVar1 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *)0x1f <
        param_1 + (-8 - (longlong)ppVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(ppVar1,uVar2);
  return;
}

// empty @ 14f929520

/* public: bool __cdecl absl::lts_20240722::Cord::empty(void)const __ptr64 */

bool __thiscall absl::lts_20240722::Cord::empty(Cord *this)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar1 & 1) != 0) {
    return ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length == 0;
  }
  return uVar1 >> 1 == 0;
}

// end @ 14f929550

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct
   std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> > > > __cdecl
   std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64>,class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >::end(void) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::end(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
      *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// fast_entry @ 14f929570

/* public: struct google::protobuf::internal::TcParseTableBase::FastFieldEntry const * __ptr64
   __cdecl google::protobuf::internal::TcParseTableBase::fast_entry(unsigned __int64)const __ptr64
    */

FastFieldEntry * __thiscall
google::protobuf::internal::TcParseTableBase::fast_entry(TcParseTableBase *this,__uint64 param_1)

{
  return (FastFieldEntry *)(&this[1].has_bits_offset + param_1 * 8);
}

// full @ 14f929590

/* public: struct google::protobuf::internal::ClassDataFull const & __ptr64 __cdecl
   google::protobuf::internal::ClassData::full(void)const __ptr64 */

ClassDataFull * __thiscall google::protobuf::internal::ClassData::full(ClassData *this)

{
  return (ClassDataFull *)this;
}

// get @ 14f9295a0

/* public: static struct google::protobuf::internal::ShutdownData * __ptr64 __cdecl
   google::protobuf::internal::ShutdownData::get(void) */

ShutdownData * __cdecl google::protobuf::internal::ShutdownData::get(void)

{
  ShutdownData *pSVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pSVar1 = ::operator_new(0x20);
    `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
    ::__l2::data = (ShutdownData *)0x0;
    if (pSVar1 != (ShutdownData *)0x0) {
      *(undefined8 *)pSVar1 = 0;
      *(undefined8 *)(pSVar1 + 8) = 0;
      *(undefined8 *)(pSVar1 + 0x10) = 0;
      *(undefined8 *)(pSVar1 + 0x18) = 0;
      `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
      ::__l2::data = pSVar1;
    }
    _Init_thread_footer(&`public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    return `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
           ::__l2::data;
  }
  return `public:_static_struct_google::protobuf::internal::ShutdownData*___ptr64___cdecl_google::protobuf::internal::ShutdownData::get(void)'
         ::__l2::data;
}

// have_unknown_fields @ 14f929640

/* public: bool __cdecl google::protobuf::internal::InternalMetadata::have_unknown_fields(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::InternalMetadata::have_unknown_fields(InternalMetadata *this)

{
  return (bool)((byte)this->ptr_ & 1);
}

// is_short @ 14f929650

/* public: bool __cdecl absl::lts_20240722::CordBuffer::Rep::is_short(void)const __ptr64 */

bool __thiscall absl::lts_20240722::CordBuffer::Rep::is_short(Rep *this)

{
  return (bool)((this->field0_0x0).short_rep.raw_size & 1);
}

// length @ 14f929660

/* public: unsigned __int64 __cdecl absl::lts_20240722::CordBuffer::length(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::CordBuffer::length(CordBuffer *this)

{
  byte bVar1;
  
  bVar1 = (this->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) != 0) {
    return (longlong)((char)bVar1 >> 1);
  }
  return *(__uint64 *)(this->rep_).field0_0x0.long_rep.rep;
}

// load @ 14f929680

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: char const * __ptr64 (__cdecl*__cdecl std::_Atomic_storage<char const * __ptr64
   (__cdecl*)(class google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64),8>::load(enum std::memory_order)const __ptr64)(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

_func_char_ptr_MessageLite_ptr_char_ptr_ParseContext_ptr_TcFieldData_TcParseTableBase_ptr___uint64 *
__thiscall
std::
_Atomic_storage<char_const*___ptr64_(__cdecl*)(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64),8>
::load(_Atomic_storage<char_const*___ptr64_(__cdecl*)(google::protobuf::MessageLite*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::TcFieldData,google::protobuf::internal::TcParseTableBase_const*___ptr64,unsigned___int64),8>
       *this,memory_order param_1)

{
  return *(_func_char_ptr_MessageLite_ptr_char_ptr_ParseContext_ptr_TcFieldData_TcParseTableBase_ptr___uint64
           **)this;
}

// load @ 14f9296a0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<bool,1>::load(enum std::memory_order)const __ptr64 */

bool __thiscall
std::_Atomic_storage<bool,1>::load(_Atomic_storage<bool,1> *this,memory_order param_1)

{
  return (this->_Storage)._Value;
}

// long_available @ 14f9296c0

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::CordBuffer::Rep::long_available(void)const __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::CordBuffer::Rep::long_available(Rep *this,Span<char> *__return_storage_ptr__)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  longlong lVar3;
  int iVar4;
  
  pCVar2 = (this->field0_0x0).long_rep.rep;
  bVar1 = pCVar2->field_0xc;
  lVar3 = *(longlong *)pCVar2;
  if (bVar1 < 0x43) {
    iVar4 = (uint)bVar1 * 8 + -0x10;
  }
  else if (bVar1 < 0xbb) {
    iVar4 = (bVar1 - 0x3a) * 0x40;
  }
  else {
    iVar4 = (bVar1 - 0xb8) * 0x1000;
  }
  __return_storage_ptr__->ptr_ = &pCVar2->field_0xd + lVar3;
  __return_storage_ptr__->len_ = (iVar4 - lVar3) - 0xd;
  return __return_storage_ptr__;
}

// max_size @ 14f929720

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> >
   >::max_size(class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> > const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::max_size(allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> *param_1)

{
  return 0xfffffffffffffff;
}

// max_size @ 14f929740

/* public: unsigned __int64 __cdecl std::vector<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const *
   __ptr64),void const * __ptr64> > >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::max_size(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
           *this)

{
  return 0xfffffffffffffff;
}

// mutable_string_data @ 14f929760

/* char * __ptr64 __cdecl google::protobuf::io::mutable_string_data(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

char * __cdecl
google::protobuf::io::mutable_string_data
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    return (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  return (char *)param_1;
}

// name @ 14f929780

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::TypeId::name(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
google::protobuf::TypeId::name
          (TypeId *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = (char *)(*(longlong *)this + 0x40);
  if (*(char *)(*(longlong *)this + 0x3c) == '\0') {
    (*(code *)**(undefined8 **)pcVar1)(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = pcVar1;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  __return_storage_ptr__->_Mysize = uVar2;
  return __return_storage_ptr__;
}

// push_back @ 14f9297d0

/* public: void __cdecl std::vector<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64>,class std::allocator<struct std::pair<void (__cdecl*)(void const * __ptr64),void
   const * __ptr64> > >::push_back(struct std::pair<void (__cdecl*)(void const * __ptr64),void const
   * __ptr64> && __ptr64) __ptr64 */

void __thiscall
std::
vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
::push_back(vector<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>,std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>_>
            *this,pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *ppVar1;
  undefined8 uVar2;
  
  ppVar1 = *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 8);
  if (ppVar1 != *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(this + 0x10)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)ppVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(ppVar1 + 8) = uVar2;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x10;
    return;
  }
  _Emplace_reallocate<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>
            (this,ppVar1,param_1);
  return;
}

// rep @ 14f929800

/* public: struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::CordBuffer::Rep::rep(void)const __ptr64 */

CordRepFlat * __thiscall absl::lts_20240722::CordBuffer::Rep::rep(Rep *this)

{
  return (this->field0_0x0).long_rep.rep;
}

// set_short_length @ 14f929810

/* public: void __cdecl absl::lts_20240722::CordBuffer::Rep::set_short_length(unsigned __int64)
   __ptr64 */

void __thiscall absl::lts_20240722::CordBuffer::Rep::set_short_length(Rep *this,__uint64 param_1)

{
  (this->field0_0x0).short_rep.raw_size = (char)param_1 * '\x02' + '\x01';
  return;
}

// short_available @ 14f929820

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::CordBuffer::Rep::short_available(void) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::CordBuffer::Rep::short_available(Rep *this,Span<char> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)((this->field0_0x0).short_rep.raw_size >> 1);
  __return_storage_ptr__->ptr_ = (char *)((longlong)&this->field0_0x0 + lVar1 + 1);
  __return_storage_ptr__->len_ = 0xf - lVar1;
  return __return_storage_ptr__;
}

// short_length @ 14f929850

/* public: unsigned __int64 __cdecl absl::lts_20240722::CordBuffer::Rep::short_length(void)const
   __ptr64 */

__uint64 __thiscall absl::lts_20240722::CordBuffer::Rep::short_length(Rep *this)

{
  return (longlong)((this->field0_0x0).short_rep.raw_size >> 1);
}

// swap @ 14f929860

/* public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::swap(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::swap
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this !=
      param_1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    pcVar2 = (this->_Mypair)._Myval2._Bx._Ptr;
    uVar3 = *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8);
    uVar4 = (this->_Mypair)._Myval2._Mysize;
    uVar5 = (this->_Mypair)._Myval2._Myres;
    (this->_Mypair)._Myval2._Bx._Ptr = *(char **)param_1;
    *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
    uVar6 = *(ulong64 *)(param_1 + 0x18);
    (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
    (this->_Mypair)._Myval2._Myres = uVar6;
    *(char **)param_1 = pcVar2;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(ulong64 *)(param_1 + 0x10) = uVar4;
    *(ulong64 *)(param_1 + 0x18) = uVar5;
  }
  return;
}

// swap @ 14f929890

/* public: void __cdecl std::pair<void (__cdecl*)(void const * __ptr64),void const *
   __ptr64>::swap(struct std::pair<void (__cdecl*)(void const * __ptr64),void const * __ptr64> &
   __ptr64) __ptr64 */

void __thiscall
std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>::swap
          (pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *this,
          pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined8 *)this;
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar1;
    uVar1 = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}

// tag @ 14f9298c0

/* public: enum google::protobuf::internal::MessageCreator::Tag __cdecl
   google::protobuf::internal::MessageCreator::tag(void)const __ptr64 */

Tag __thiscall google::protobuf::internal::MessageCreator::tag(MessageCreator *this)

{
  return this->tag_;
}

// target @ 14f9298d0

/* public: char const * __ptr64 (__cdecl*__cdecl
   google::protobuf::internal::TcParseTableBase::FastFieldEntry::target(void)const __ptr64)(class
   google::protobuf::MessageLite * __ptr64,char const * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::TcFieldData,struct google::protobuf::internal::TcParseTableBase const
   * __ptr64,unsigned __int64) */

_func_char_ptr_MessageLite_ptr_char_ptr_ParseContext_ptr_TcFieldData_TcParseTableBase_ptr___uint64 *
__thiscall
google::protobuf::internal::TcParseTableBase::FastFieldEntry::target(FastFieldEntry *this)

{
  return (_func_char_ptr_MessageLite_ptr_char_ptr_ParseContext_ptr_TcFieldData_TcParseTableBase_ptr___uint64
          *)this->target_atomic;
}

// FUN_150295240 @ 150295240

void FUN_150295240(undefined8 param_1,longlong param_2)

{
  std::allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_>::deallocate
            (*(allocator<std::pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64>_> **)
              (param_2 + 0x60),
             *(pair<void_(__cdecl*)(void_const*___ptr64),void_const*___ptr64> **)(param_2 + 0x78),
             *(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_150295290 @ 150295290

void FUN_150295290(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x40));
  }
  return;
}

// FUN_1502952c0 @ 1502952c0

void FUN_1502952c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x80));
  }
  return;
}

// FUN_150295330 @ 150295330

void FUN_150295330(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 1) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x60));
  }
  return;
}

// FUN_150295370 @ 150295370

void FUN_150295370(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 2) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x70));
  }
  return;
}

// FUN_1502953b0 @ 1502953b0

void FUN_1502953b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 4) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x60));
  }
  return;
}

// FUN_1502953f0 @ 1502953f0

void FUN_1502953f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x40));
  }
  return;
}

// FUN_150295420 @ 150295420

void FUN_150295420(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295450 @ 150295450

void FUN_150295450(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xe0) & 1) != 0) {
    *(uint *)(param_2 + 0xe0) = *(uint *)(param_2 + 0xe0) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x80));
  }
  return;
}

// FUN_1502954b0 @ 1502954b0

void FUN_1502954b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502954f0 @ 1502954f0

void FUN_1502954f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x60));
  }
  return;
}

// FUN_150295550 @ 150295550

void FUN_150295550(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x40));
  }
  return;
}

// FUN_150295580 @ 150295580

void FUN_150295580(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502955b0 @ 1502955b0

void FUN_1502955b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x40));
  }
  return;
}

// FUN_1502955e0 @ 1502955e0

void FUN_1502955e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502956f0 @ 1502956f0

void FUN_1502956f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::Cord::~Cord(*(Cord **)(param_2 + 0x28));
  }
  return;
}

// FUN_150295720 @ 150295720

void FUN_150295720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

// FUN_150295750 @ 150295750

void FUN_150295750(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::Cord::~Cord(*(Cord **)(param_2 + 0x48));
  }
  return;
}

// FUN_150295780 @ 150295780

void FUN_150295780(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48)
              );
  }
  return;
}

// FUN_1502957b0 @ 1502957b0

void FUN_1502957b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502957e0 @ 1502957e0

void FUN_1502957e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x40));
  }
  return;
}

// FUN_150295850 @ 150295850

void FUN_150295850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295880 @ 150295880

void FUN_150295880(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502958b0 @ 1502958b0

void FUN_1502958b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x50));
  }
  return;
}

