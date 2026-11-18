// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 114

// _Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1><> @ 14f92af50

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<unsigned char [0]>,unsigned char
   * __ptr64,1>::_Compressed_pair<struct std::default_delete<unsigned char [0]>,unsigned char *
   __ptr64,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1> * __thiscall
std::_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1>::
_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1><>
          (_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1> *this,
          _Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  return this;
}

// unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_><std::default_delete<unsigned_char_[0]>,0> @ 14f92af70

/* public: __cdecl std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]>
   >::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]> ><struct
   std::default_delete<unsigned char [0]>,0>(void) __ptr64 */

unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> * __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::
unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_><std::default_delete<unsigned_char_[0]>,0>
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// operator<<<42> @ 14f92af90

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<42>(char const (& __ptr64)[42]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<42>(LogMessage *this,char *param_1)

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

// operator<<<43> @ 14f92afe0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<43>(char const (& __ptr64)[43]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<43>(LogMessage *this,char *param_1)

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

// operator<<<55> @ 14f92b030

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<55>(char const (& __ptr64)[55]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<55>(LogMessage *this,char *param_1)

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

// operator<<<58> @ 14f92b080

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<58>(char const (& __ptr64)[58]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<58>(LogMessage *this,char *param_1)

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

// operator<<<78> @ 14f92b0d0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<78>(char const (& __ptr64)[78]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<78>(LogMessage *this,char *param_1)

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

// operator==<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> @ 14f92b120

/* bool __cdecl std::operator==<unsigned char [0],struct std::default_delete<unsigned char [0]>
   >(class std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]> > const &
   __ptr64,std::nullptr_t) */

bool __cdecl
std::operator==<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>(longlong *param_1)

{
  return *param_1 == 0;
}

// operator()<unsigned_char,0> @ 14f92b130

/* public: void __cdecl std::default_delete<unsigned char [0]>::operator()<unsigned char,0>(unsigned
   char * __ptr64)const __ptr64 */

void __thiscall
std::default_delete<unsigned_char_[0]>::operator()<unsigned_char,0>
          (default_delete<unsigned_char_[0]> *this,uchar *param_1)

{
  operator_delete__(param_1);
  return;
}

// Check_EQImpl<int,int> @ 14f92b140

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<int,int>(int const & __ptr64,int const &
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_EQImpl<int,int>(int *param_1,int *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 == *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)*param_1,(longlong)*param_2,param_3);
  return pbVar1;
}

// Check_GEImpl<int,int> @ 14f92b160

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_GEImpl<int,int>(int const & __ptr64,int const &
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_GEImpl<int,int>(int *param_1,int *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_2 <= *param_1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)*param_1,(longlong)*param_2,param_3);
  return pbVar1;
}

// Check_GTImpl<int,int> @ 14f92b180

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_GTImpl<int,int>(int const & __ptr64,int const &
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_GTImpl<int,int>(int *param_1,int *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_2 < *param_1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)*param_1,(longlong)*param_2,param_3);
  return pbVar1;
}

// Check_LEImpl<int,int> @ 14f92b1a0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_LEImpl<int,int>(int const & __ptr64,int const &
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_LEImpl<int,int>(int *param_1,int *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 <= *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)*param_1,(longlong)*param_2,param_3);
  return pbVar1;
}

// exchange<unsigned_char*___ptr64,unsigned_char*___ptr64&___ptr64> @ 14f92b1c0

/* unsigned char * __ptr64 __cdecl std::exchange<unsigned char * __ptr64,unsigned char * __ptr64 &
   __ptr64>(unsigned char * __ptr64 & __ptr64,unsigned char * __ptr64 & __ptr64) */

uchar * __cdecl
std::exchange<unsigned_char*___ptr64,unsigned_char*___ptr64&___ptr64>
          (uchar **param_1,uchar **param_2)

{
  uchar *puVar1;
  
  puVar1 = *param_1;
  *param_1 = *param_2;
  return puVar1;
}

// implicit_cast<int> @ 14f92b1d0

/* int __cdecl absl::lts_20240722::implicit_cast<int>(int) */

int __cdecl absl::lts_20240722::implicit_cast<int>(int param_1)

{
  return param_1;
}

// reset<unsigned_char*___ptr64,0> @ 14f92b1e0

/* public: void __cdecl std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char
   [0]> >::reset<unsigned char * __ptr64,0>(unsigned char * __ptr64) __ptr64 */

void __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::
reset<unsigned_char*___ptr64,0>
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this,
          uchar *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  *(uchar **)this = param_1;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

// ArrayInputStream @ 14f92b200

/* public: __cdecl google::protobuf::io::ArrayInputStream::ArrayInputStream(void const *
   __ptr64,int,int) __ptr64 */

ArrayInputStream * __thiscall
google::protobuf::io::ArrayInputStream::ArrayInputStream
          (ArrayInputStream *this,void *param_1,int param_2,int param_3)

{
  this->size_ = param_2;
  this->_padding_ = (longlong)vftable;
  this->data_ = param_1;
  if (0 < param_3) {
    param_2 = param_3;
  }
  this->position_ = 0;
  this->last_returned_size_ = 0;
  this->block_size_ = param_2;
  return this;
}

// ArrayOutputStream @ 14f92b230

/* public: __cdecl google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void *
   __ptr64,int,int) __ptr64 */

ArrayOutputStream * __thiscall
google::protobuf::io::ArrayOutputStream::ArrayOutputStream
          (ArrayOutputStream *this,void *param_1,int param_2,int param_3)

{
  this->size_ = param_2;
  this->_padding_ = (longlong)vftable;
  this->data_ = param_1;
  if (0 < param_3) {
    param_2 = param_3;
  }
  this->position_ = 0;
  this->last_returned_size_ = 0;
  this->block_size_ = param_2;
  return this;
}

// CharIterator @ 14f92b260

/* private: __cdecl absl::lts_20240722::Cord::CharIterator::CharIterator(class
   absl::lts_20240722::Cord const * __ptr64) __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::CharIterator::CharIterator(CharIterator *this,Cord *param_1)

{
  ChunkIterator::ChunkIterator(&this->chunk_iterator_,param_1);
  return this;
}

// CopyingInputStreamAdaptor @ 14f92b280

/* public: __cdecl google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(class
   google::protobuf::io::CopyingInputStream * __ptr64,int) __ptr64 */

CopyingInputStreamAdaptor * __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor
          (CopyingInputStreamAdaptor *this,CopyingInputStream *param_1,int param_2)

{
  int iVar1;
  
  *(CopyingInputStream **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  iVar1 = 0x2000;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(undefined8 *)(this + 0x2c) = 0;
  *(int *)(this + 0x28) = iVar1;
  return this;
}

// CopyingOutputStreamAdaptor @ 14f92b2c0

/* public: __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(class
   google::protobuf::io::CopyingOutputStream * __ptr64,int) __ptr64 */

CopyingOutputStreamAdaptor * __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor
          (CopyingOutputStreamAdaptor *this,CopyingOutputStream *param_1,int param_2)

{
  int iVar1;
  
  *(CopyingOutputStream **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  iVar1 = 0x2000;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)(this + 0x28) = iVar1;
  return this;
}

// CordInputStream @ 14f92b300

/* public: __cdecl google::protobuf::io::CordInputStream::CordInputStream(class
   absl::lts_20240722::Cord const * __ptr64) __ptr64 */

CordInputStream * __thiscall
google::protobuf::io::CordInputStream::CordInputStream(CordInputStream *this,Cord *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = vftable;
  absl::lts_20240722::Cord::ChunkIterator::ChunkIterator((ChunkIterator *)(this + 8),param_1);
  uVar1 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  *(ulonglong *)(this + 0xa0) = uVar1;
  *(ulonglong *)(this + 0xa8) = uVar1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 8);
  }
  *(undefined8 *)(this + 0xc0) = uVar2;
  *(undefined8 *)(this + 0xb8) = uVar2;
  return this;
}

// CordOutputStream @ 14f92b390

/* public: __cdecl google::protobuf::io::CordOutputStream::CordOutputStream(class
   absl::lts_20240722::Cord,class absl::lts_20240722::CordBuffer,unsigned __int64) __ptr64 */

CordOutputStream * __thiscall
google::protobuf::io::CordOutputStream::CordOutputStream
          (CordOutputStream *this,Cord *param_1,CordBuffer *param_2,__uint64 param_3)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  CordRep *pCVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *(undefined ***)this = vftable;
  pCVar3 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
  *(long64 *)(this + 8) = (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
  *(CordRep **)(this + 0x10) = pCVar3;
  (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  *(__uint64 *)(this + 0x18) = param_3;
  bVar1 = (param_2->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) == 0) {
    pCVar2 = (param_2->rep_).field0_0x0.long_rep.rep;
    uVar7 = *(ulonglong *)pCVar2;
    bVar1 = pCVar2->field_0xc;
    if (bVar1 < 0x43) {
      iVar5 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar5 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar5 = (bVar1 - 0xb8) * 0x1000;
    }
    uVar6 = (longlong)iVar5 - 0xd;
  }
  else {
    uVar7 = (ulonglong)((char)bVar1 >> 1);
    uVar6 = 0xf;
  }
  *(uint *)(this + 0x20) = (uVar7 < uVar6) + 1;
  pvVar4 = (param_2->rep_).field0_0x0.long_rep.padding;
  *(CordRepFlat **)(this + 0x28) = (param_2->rep_).field0_0x0.long_rep.rep;
  *(void **)(this + 0x30) = pvVar4;
  (param_2->rep_).field0_0x0.short_rep.raw_size = '\x01';
  if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow(param_1);
  }
  if (((param_2->rep_).field0_0x0.short_rep.raw_size & 1U) == 0) {
    pCVar2 = (param_2->rep_).field0_0x0.long_rep.rep;
    bVar1 = pCVar2->field_0xc;
    if (bVar1 < 0x43) {
      iVar5 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar5 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar5 = (bVar1 - 0xb8) * 0x1000;
    }
    ::operator_delete(pCVar2,(longlong)iVar5);
  }
  return this;
}

// CordOutputStream @ 14f92b480

/* public: __cdecl google::protobuf::io::CordOutputStream::CordOutputStream(class
   absl::lts_20240722::Cord,unsigned __int64) __ptr64 */

CordOutputStream * __thiscall
google::protobuf::io::CordOutputStream::CordOutputStream
          (CordOutputStream *this,Cord *param_1,__uint64 param_2)

{
  CordRep *pCVar1;
  ulonglong uVar2;
  
  *(undefined ***)this = vftable;
  pCVar1 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
  *(long64 *)(this + 8) = (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
  *(CordRep **)(this + 0x10) = pCVar1;
  (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  *(__uint64 *)(this + 0x18) = param_2;
  if (((longlong)(char)this[8] & 1U) == 0) {
    uVar2 = (ulonglong)(longlong)(char)this[8] >> 1;
  }
  else {
    uVar2 = **(ulonglong **)(this + 0x10);
  }
  *(uint *)(this + 0x20) = -(uint)(uVar2 != 0) & 3;
  this[0x28] = (CordOutputStream)0x1;
  *(undefined8 *)(this + 0x29) = 0;
  *(undefined4 *)(this + 0x31) = 0;
  *(undefined2 *)(this + 0x35) = 0;
  this[0x37] = (CordOutputStream)0x0;
  if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow(param_1);
  }
  return this;
}

// CordOutputStream @ 14f92b500

/* public: __cdecl google::protobuf::io::CordOutputStream::CordOutputStream(class
   absl::lts_20240722::CordBuffer,unsigned __int64) __ptr64 */

CordOutputStream * __thiscall
google::protobuf::io::CordOutputStream::CordOutputStream
          (CordOutputStream *this,CordBuffer *param_1,__uint64 param_2)

{
  byte bVar1;
  CordRepFlat *pCVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(__uint64 *)(this + 0x18) = param_2;
  bVar1 = (param_1->rep_).field0_0x0.short_rep.raw_size;
  if ((bVar1 & 1) == 0) {
    pCVar2 = (param_1->rep_).field0_0x0.long_rep.rep;
    bVar1 = pCVar2->field_0xc;
    uVar6 = *(ulonglong *)pCVar2;
    if (bVar1 < 0x43) {
      iVar4 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar4 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar1 - 0xb8) * 0x1000;
    }
    uVar5 = (longlong)iVar4 - 0xd;
  }
  else {
    uVar5 = 0xf;
    uVar6 = (ulonglong)((char)bVar1 >> 1);
  }
  *(uint *)(this + 0x20) = (uVar6 < uVar5) + 1;
  pvVar3 = (param_1->rep_).field0_0x0.long_rep.padding;
  *(CordRepFlat **)(this + 0x28) = (param_1->rep_).field0_0x0.long_rep.rep;
  *(void **)(this + 0x30) = pvVar3;
  (param_1->rep_).field0_0x0.short_rep.raw_size = '\x01';
  return this;
}

// CordOutputStream @ 14f92b590

/* public: __cdecl google::protobuf::io::CordOutputStream::CordOutputStream(unsigned __int64)
   __ptr64 */

CordOutputStream * __thiscall
google::protobuf::io::CordOutputStream::CordOutputStream(CordOutputStream *this,__uint64 param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(__uint64 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x28] = (CordOutputStream)0x1;
  *(undefined8 *)(this + 0x29) = 0;
  *(undefined4 *)(this + 0x31) = 0;
  *(undefined2 *)(this + 0x35) = 0;
  this[0x37] = (CordOutputStream)0x0;
  return this;
}

// LimitingInputStream @ 14f92b5d0

/* public: __cdecl google::protobuf::io::LimitingInputStream::LimitingInputStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,__int64) __ptr64 */

LimitingInputStream * __thiscall
google::protobuf::io::LimitingInputStream::LimitingInputStream
          (LimitingInputStream *this,ZeroCopyInputStream *param_1,__int64 param_2)

{
  undefined8 uVar1;
  
  *(ZeroCopyInputStream **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(__int64 *)(this + 0x10) = param_2;
  uVar1 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  *(undefined8 *)(this + 0x18) = uVar1;
  return this;
}

// StringOutputStream @ 14f92b610

/* public: __cdecl google::protobuf::io::StringOutputStream::StringOutputStream(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

StringOutputStream * __thiscall
google::protobuf::io::StringOutputStream::StringOutputStream
          (StringOutputStream *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  this->target_ = param_1;
  this->_padding_ = (longlong)vftable;
  return this;
}

// ZeroCopyOutputStream @ 14f92b630

/* public: __cdecl google::protobuf::io::ZeroCopyOutputStream::ZeroCopyOutputStream(void) __ptr64 */

ZeroCopyOutputStream * __thiscall
google::protobuf::io::ZeroCopyOutputStream::ZeroCopyOutputStream(ZeroCopyOutputStream *this)

{
  *this = (ZeroCopyOutputStream)vftable;
  return this;
}

// ~unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> @ 14f92b650

/* public: __cdecl std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]>
   >::~unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]> >(void) __ptr64 */

void __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::
~unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(pvVar1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~CopyingInputStreamAdaptor @ 14f92b670

/* public: virtual __cdecl
   google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(void) __ptr64 */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor
          (CopyingInputStreamAdaptor *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = vftable;
  if ((this[0x10] != (CopyingInputStreamAdaptor)0x0) &&
     (puVar1 = *(undefined8 **)(this + 8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}

// ~CopyingOutputStreamAdaptor @ 14f92b6c0

/* public: virtual __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(void) __ptr64 */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor
          (CopyingOutputStreamAdaptor *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = vftable;
  WriteBuffer(this);
  if ((this[0x10] != (CopyingOutputStreamAdaptor)0x0) &&
     (puVar1 = *(undefined8 **)(this + 8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = ZeroCopyOutputStream::vftable;
  return;
}

// ~LimitingInputStream @ 14f92b720

/* public: virtual __cdecl google::protobuf::io::LimitingInputStream::~LimitingInputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::LimitingInputStream::~LimitingInputStream(LimitingInputStream *this)

{
  *(undefined ***)this = vftable;
  if (*(longlong *)(this + 0x10) < 0) {
    (**(code **)(**(longlong **)(this + 8) + 0x10))
              (*(longlong **)(this + 8),-(int)*(longlong *)(this + 0x10));
  }
  return;
}

// operator_bool @ 14f92b750

/* public: __cdecl std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char [0]>
   >::operator bool(void)const __ptr64 */

bool __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::operator_bool
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this)

{
  return *(longlong *)this != 0;
}

// `scalar_deleting_destructor' @ 14f92b760

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::ArrayInputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::ArrayInputStream::_scalar_deleting_destructor_
          (ArrayInputStream *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b790

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::ArrayOutputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::ArrayOutputStream::_vector_deleting_destructor_
          (ArrayOutputStream *this,uint param_1)

{
  this->_padding_ = (longlong)ZeroCopyOutputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b7d0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CopyingInputStreamAdaptor::`vector
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::_vector_deleting_destructor_
          (CopyingInputStreamAdaptor *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = vftable;
  if ((this[0x10] != (CopyingInputStreamAdaptor)0x0) &&
     (puVar1 = *(undefined8 **)(this + 8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b840

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::`vector
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::_vector_deleting_destructor_
          (CopyingOutputStreamAdaptor *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = vftable;
  WriteBuffer(this);
  if ((this[0x10] != (CopyingOutputStreamAdaptor)0x0) &&
     (puVar1 = *(undefined8 **)(this + 8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)this = ZeroCopyOutputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b8c0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CordInputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CordInputStream::_vector_deleting_destructor_
          (CordInputStream *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b8f0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CordOutputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CordOutputStream::_vector_deleting_destructor_
          (CordOutputStream *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f92b980

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::LimitingInputStream::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::LimitingInputStream::_scalar_deleting_destructor_
          (LimitingInputStream *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (*(longlong *)(this + 0x10) < 0) {
    (**(code **)(**(longlong **)(this + 8) + 0x10))
              (*(longlong **)(this + 8),-(int)*(longlong *)(this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14f92b9e0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::StringOutputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::StringOutputStream::_vector_deleting_destructor_
          (StringOutputStream *this,uint param_1)

{
  this->_padding_ = (longlong)ZeroCopyOutputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Advance @ 14f92ba20

/* WARNING: Type propagation algorithm not settling */
/* public: static void __cdecl absl::lts_20240722::Cord::Advance(class
   absl::lts_20240722::Cord::CharIterator * __ptr64,unsigned __int64) */

void __cdecl absl::lts_20240722::Cord::Advance(CharIterator *param_1,__uint64 param_2)

{
  ulong64 *puVar1;
  CordRepBtreeReader *this;
  int iVar2;
  ulonglong uVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  ulong64 uVar5;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar3 = (param_1->chunk_iterator_).current_chunk_._Mysize;
  if (param_2 < uVar3) {
    (param_1->chunk_iterator_).current_chunk_._Mydata =
         (param_1->chunk_iterator_).current_chunk_._Mydata + param_2;
    (param_1->chunk_iterator_).current_chunk_._Mysize = uVar3 - param_2;
    puVar1 = &(param_1->chunk_iterator_).bytes_remaining_;
    *puVar1 = *puVar1 - param_2;
    return;
  }
  if (param_2 != 0) {
    iVar2 = (param_1->chunk_iterator_).btree_reader_.navigator_.height_;
    if ((-1 < iVar2) &&
       ((param_1->chunk_iterator_).btree_reader_.navigator_.node_[iVar2] != (CordRepBtree *)0x0)) {
      uVar5 = (param_1->chunk_iterator_).bytes_remaining_ - param_2;
      (param_1->chunk_iterator_).bytes_remaining_ = uVar5;
      if (uVar5 == 0) {
        (param_1->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
        (param_1->chunk_iterator_).current_chunk_._Mysize = 0;
        return;
      }
      this = &(param_1->chunk_iterator_).btree_reader_;
      if (param_2 == uVar3) {
        pbVar4 = cord_internal::CordRepBtreeReader::Next(this,&local_18);
        uVar5 = pbVar4->_Mysize;
        (param_1->chunk_iterator_).current_chunk_._Mydata = pbVar4->_Mydata;
        (param_1->chunk_iterator_).current_chunk_._Mysize = uVar5;
        return;
      }
      pbVar4 = cord_internal::CordRepBtreeReader::Seek
                         (this,&local_18,
                          (param_1->chunk_iterator_).btree_reader_.navigator_.node_[iVar2]->
                          _padding_ - uVar5);
      uVar5 = pbVar4->_Mysize;
      (param_1->chunk_iterator_).current_chunk_._Mydata = pbVar4->_Mydata;
      (param_1->chunk_iterator_).current_chunk_._Mysize = uVar5;
      return;
    }
    (param_1->chunk_iterator_).bytes_remaining_ = 0;
  }
  return;
}

// AdvanceAndRead @ 14f92bad0

/* public: static class absl::lts_20240722::Cord __cdecl
   absl::lts_20240722::Cord::AdvanceAndRead(class absl::lts_20240722::Cord::CharIterator *
   __ptr64,unsigned __int64) */

Cord * __cdecl
absl::lts_20240722::Cord::AdvanceAndRead
          (Cord *__return_storage_ptr__,CharIterator *param_1,__uint64 param_2)

{
  ChunkIterator::AdvanceAndReadBytes(&param_1->chunk_iterator_,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// AdvanceBytes @ 14f92bb00

/* private: void __cdecl absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(ChunkIterator *this,__uint64 param_1)

{
  int iVar1;
  ulonglong uVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  ulong64 uVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar2 = (this->current_chunk_)._Mysize;
  if (param_1 < uVar2) {
    (this->current_chunk_)._Mydata = (this->current_chunk_)._Mydata + param_1;
    (this->current_chunk_)._Mysize = uVar2 - param_1;
    this->bytes_remaining_ = this->bytes_remaining_ - param_1;
    return;
  }
  if (param_1 != 0) {
    iVar1 = (this->btree_reader_).navigator_.height_;
    if ((-1 < iVar1) && ((this->btree_reader_).navigator_.node_[iVar1] != (CordRepBtree *)0x0)) {
      uVar4 = this->bytes_remaining_ - param_1;
      this->bytes_remaining_ = uVar4;
      if (uVar4 == 0) {
        (this->current_chunk_)._Mydata = (char *)0x0;
        (this->current_chunk_)._Mysize = 0;
        return;
      }
      if (param_1 == uVar2) {
        pbVar3 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_18);
        uVar4 = pbVar3->_Mysize;
        (this->current_chunk_)._Mydata = pbVar3->_Mydata;
        (this->current_chunk_)._Mysize = uVar4;
        return;
      }
      pbVar3 = cord_internal::CordRepBtreeReader::Seek
                         (&this->btree_reader_,&local_18,
                          (this->btree_reader_).navigator_.node_[iVar1]->_padding_ - uVar4);
      uVar4 = pbVar3->_Mysize;
      (this->current_chunk_)._Mydata = pbVar3->_Mydata;
      (this->current_chunk_)._Mysize = uVar4;
      return;
    }
    this->bytes_remaining_ = 0;
  }
  return;
}

// AdvanceBytesBtree @ 14f92bbb0

/* private: void __cdecl absl::lts_20240722::Cord::ChunkIterator::AdvanceBytesBtree(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::ChunkIterator::AdvanceBytesBtree(ChunkIterator *this,__uint64 param_1)

{
  int iVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  CordRepBtree *pCVar3;
  ulong64 uVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar4 = this->bytes_remaining_ - param_1;
  this->bytes_remaining_ = uVar4;
  if (uVar4 == 0) {
    (this->current_chunk_)._Mydata = (char *)0x0;
    (this->current_chunk_)._Mysize = 0;
    return;
  }
  if (param_1 == (this->current_chunk_)._Mysize) {
    pbVar2 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_18);
    uVar4 = pbVar2->_Mysize;
    (this->current_chunk_)._Mydata = pbVar2->_Mydata;
    (this->current_chunk_)._Mysize = uVar4;
    return;
  }
  iVar1 = (this->btree_reader_).navigator_.height_;
  if (iVar1 < 0) {
    pCVar3 = (CordRepBtree *)0x0;
  }
  else {
    pCVar3 = (this->btree_reader_).navigator_.node_[iVar1];
  }
  pbVar2 = cord_internal::CordRepBtreeReader::Seek
                     (&this->btree_reader_,&local_18,pCVar3->_padding_ - uVar4);
  uVar4 = pbVar2->_Mysize;
  (this->current_chunk_)._Mydata = pbVar2->_Mydata;
  (this->current_chunk_)._Mysize = uVar4;
  return;
}

// AllocateBufferIfNeeded @ 14f92bc30

/* private: void __cdecl
   google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(void) __ptr64 */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded
          (CopyingInputStreamAdaptor *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(longlong *)(this + 0x20) == 0) {
    pvVar2 = operator_new__((longlong)*(int *)(this + 0x28));
    pvVar1 = *(void **)(this + 0x20);
    *(void **)(this + 0x20) = pvVar2;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}

// AllocateBufferIfNeeded @ 14f92bc70

/* private: void __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(void) __ptr64 */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded
          (CopyingOutputStreamAdaptor *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(longlong *)(this + 0x20) == 0) {
    pvVar2 = operator_new__((longlong)*(int *)(this + 0x28));
    pvVar1 = *(void **)(this + 0x20);
    *(void **)(this + 0x20) = pvVar2;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}

// AllowsAliasing @ 14f92bcb0

/* public: virtual bool __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::AllowsAliasing(void)const __ptr64 */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::AllowsAliasing(CopyingOutputStreamAdaptor *this)

{
  return true;
}

// BackUp @ 14f92bcc0

/* WARNING: Removing unreachable block (ram,0x00014f92bdfe) */
/* WARNING: Removing unreachable block (ram,0x00014f92be64) */
/* WARNING: Removing unreachable block (ram,0x00014f92bd8c) */
/* public: virtual void __cdecl google::protobuf::io::ArrayInputStream::BackUp(int) __ptr64 */

void __thiscall google::protobuf::io::ArrayInputStream::BackUp(ArrayInputStream *this,int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  LogMessage *this_00;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((this->last_returned_size_ < 1) &&
     (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)this->last_returned_size_,0,"last_returned_size_ > 0"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_28._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                        ((LogMessageFatal *)&local_18,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                         ,0x3e,&local_28);
    local_28._Mydata = "BackUp() can only be called after a successful Next().";
    local_28._Mysize = 0x36;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_18);
  }
  if ((this->last_returned_size_ < param_1) &&
     (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,(longlong)this->last_returned_size_,
                          "count <= last_returned_size_"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_18._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_18._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_18._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x40,&local_18);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  if ((param_1 < 0) &&
     (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,0,"count >= 0"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_18._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_18._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_18._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x41,&local_18);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  this->position_ = this->position_ - param_1;
  this->last_returned_size_ = 0;
  return;
}

// BackUp @ 14f92beb0

/* WARNING: Removing unreachable block (ram,0x00014f92bff5) */
/* WARNING: Removing unreachable block (ram,0x00014f92bf88) */
/* public: virtual void __cdecl google::protobuf::io::ArrayOutputStream::BackUp(int) __ptr64 */

void __thiscall google::protobuf::io::ArrayOutputStream::BackUp(ArrayOutputStream *this,int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  LogMessage *this_00;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((this->last_returned_size_ < param_1) &&
     (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,(longlong)this->last_returned_size_,
                          "count <= last_returned_size_"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    this_00 = (LogMessage *)
              absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                        ((LogMessageFatal *)&local_28,
                         "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                         ,0x6d,&local_38);
    local_38._Mydata = "BackUp() can not exceed the size of the last Next() call.";
    local_38._Mysize = 0x39;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  if ((param_1 < 0) &&
     (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,0,"count >= 0"),
     pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_28._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_38,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x6f,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_38);
  }
  this->position_ = this->position_ - param_1;
  this->last_returned_size_ = this->last_returned_size_ - param_1;
  return;
}

// BackUp @ 14f92c040

/* WARNING: Removing unreachable block (ram,0x00014f92c21d) */
/* WARNING: Removing unreachable block (ram,0x00014f92c185) */
/* public: virtual void __cdecl google::protobuf::io::CopyingInputStreamAdaptor::BackUp(int) __ptr64
    */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::BackUp(CopyingInputStreamAdaptor *this,int param_1)

{
  bool bVar1;
  LogMessage *pLVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string_view<char,std::char_traits<char>_> local_58;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  bVar1 = false;
  if ((*(int *)(this + 0x30) != 0) || (*(longlong *)(this + 0x20) == 0)) {
    local_58._Mydata = "backup_bytes_ == 0 && buffer_.get() != NULL";
    local_58._Mysize = 0x2b;
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_48,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                        ,0xe5,&local_58);
    bVar1 = true;
    local_58._Mydata = " BackUp() can only be called after Next().";
    local_58._Mysize = 0x2a;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_58);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_48);
  }
  if ((*(int *)(this + 0x2c) < param_1) &&
     (pbVar3 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,(longlong)*(int *)(this + 0x2c),"count <= buffer_used_")
     , pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_48._Mydata = (char *)pbVar3;
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      local_48._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    local_48._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_38,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                        ,0xe7,&local_48);
    local_58._Mydata =
         " Can\'t back up over more bytes than were returned by the last call to Next().";
    local_58._Mysize = 0x4d;
    local_48._Mydata =
         " Can\'t back up over more bytes than were returned by the last call to Next().";
    local_48._Mysize = 0x4d;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_48);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_38);
  }
  if ((param_1 < 0) &&
     (pbVar3 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         ((longlong)param_1,0,"count >= 0"),
     pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_58._Mydata = (char *)pbVar3;
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      local_58._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    local_58._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
    local_38._Mydata = local_58._Mydata;
    local_38._Mysize = local_58._Mysize;
    pLVar2 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_48,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                        ,0xea,&local_38);
    local_38._Mydata = " Parameter to BackUp() can\'t be negative.";
    local_38._Mysize = 0x29;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_48);
  }
  *(int *)(this + 0x30) = param_1;
  return;
}

// BackUp @ 14f92c270

/* WARNING: Removing unreachable block (ram,0x00014f92c3be) */
/* WARNING: Removing unreachable block (ram,0x00014f92c469) */
/* WARNING: Removing unreachable block (ram,0x00014f92c308) */
/* public: virtual void __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(int)
   __ptr64 */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::BackUp
          (CopyingOutputStreamAdaptor *this,int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  LogMessage *pLVar2;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_1 == 0) {
    WriteBuffer(this);
  }
  else {
    if ((param_1 < 0) &&
       (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                           ((longlong)param_1,0,"count >= 0"),
       pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      local_38._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_38._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_38._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                ((LogMessageFatal *)&local_28,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0x13c,&local_38);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_28);
    }
    if ((*(int *)(this + 0x2c) != *(int *)(this + 0x28)) &&
       (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                           ((longlong)*(int *)(this + 0x2c),(longlong)*(int *)(this + 0x28),
                            "buffer_used_ == buffer_size_"),
       pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      local_28._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      pLVar2 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_18,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x13d,&local_28);
      local_38._Mydata = " BackUp() can only be called after Next().";
      local_38._Mysize = 0x2a;
      local_28._Mydata = " BackUp() can only be called after Next().";
      local_28._Mysize = 0x2a;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_18);
    }
    if ((*(int *)(this + 0x2c) < param_1) &&
       (pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                           ((longlong)param_1,(longlong)*(int *)(this + 0x2c),
                            "count <= buffer_used_"),
       pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      local_38._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_38._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_38._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      local_18._Mydata = local_38._Mydata;
      local_18._Mysize = local_38._Mysize;
      pLVar2 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_28,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x13f,&local_18);
      local_18._Mydata =
           " Can\'t back up over more bytes than were returned by the last call to Next().";
      local_18._Mysize = 0x4d;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_18);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_28);
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) - param_1;
  }
  return;
}

// BackUp @ 14f92c4b0

/* public: virtual void __cdecl google::protobuf::io::CordInputStream::BackUp(int) __ptr64 */

void __thiscall google::protobuf::io::CordInputStream::BackUp(CordInputStream *this,int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulonglong uVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  uVar2 = (ulonglong)param_1;
  if ((ulonglong)(*(longlong *)(this + 0xb8) - *(longlong *)(this + 0xc0)) < uVar2) {
    pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<unsigned___int64,unsigned___int64>
                       (uVar2,*(longlong *)(this + 0xb8) - *(longlong *)(this + 0xc0),
                        "static_cast<size_t>(count) <= size_ - available_");
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0x201,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  *(ulonglong *)(this + 0xc0) = *(longlong *)(this + 0xc0) + uVar2;
  *(ulonglong *)(this + 0xa8) = *(longlong *)(this + 0xa8) + uVar2;
  return;
}

// BackUp @ 14f92c560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __cdecl google::protobuf::io::CordOutputStream::BackUp(int) __ptr64 */

void __thiscall google::protobuf::io::CordOutputStream::BackUp(CordOutputStream *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  
  uVar2 = _UNK_150ebf528;
  uVar1 = ___xmm_00000000000000000000000000000001;
  if (param_1 != 0) {
    bVar4 = (byte)this[0x28] & 1;
    if (bVar4 == 0) {
      iVar3 = **(int **)(this + 0x28);
    }
    else {
      iVar3 = (int)(char)this[0x28] >> 1;
    }
    if (param_1 <= iVar3) {
      if (bVar4 != 0) {
        this[0x28] = (CordOutputStream)((char)(iVar3 - param_1) * '\x02' + '\x01');
        *(undefined4 *)(this + 0x20) = 2;
        return;
      }
      **(longlong **)(this + 0x28) = (longlong)(iVar3 - param_1);
      *(undefined4 *)(this + 0x20) = 2;
      return;
    }
    if (bVar4 == 0) {
      bVar4 = *(byte *)((longlong)*(void **)(this + 0x28) + 0xc);
      if (bVar4 < 0x43) {
        iVar3 = (uint)bVar4 * 8 + -0x10;
      }
      else if (bVar4 < 0xbb) {
        iVar3 = (bVar4 - 0x3a) * 0x40;
      }
      else {
        iVar3 = (bVar4 - 0xb8) * 0x1000;
      }
      ::operator_delete(*(void **)(this + 0x28),(longlong)iVar3);
    }
    *(undefined8 *)(this + 0x28) = uVar1;
    *(undefined8 *)(this + 0x30) = uVar2;
    absl::lts_20240722::Cord::RemoveSuffix((Cord *)(this + 8),(longlong)param_1);
    *(undefined4 *)(this + 0x20) = 3;
  }
  return;
}

// BackUp @ 14f92c640

/* public: virtual void __cdecl google::protobuf::io::LimitingInputStream::BackUp(int) __ptr64 */

void __thiscall
google::protobuf::io::LimitingInputStream::BackUp(LimitingInputStream *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(this + 8);
  if (*(longlong *)(this + 0x10) < 0) {
    (**(code **)(lVar1 + 0x10))(*(longlong **)(this + 8),param_1 - (int)*(longlong *)(this + 0x10));
    *(longlong *)(this + 0x10) = (longlong)param_1;
    return;
  }
  (**(code **)(lVar1 + 0x10))();
  *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + (longlong)param_1;
  return;
}

// BackUp @ 14f92c690

/* public: virtual void __cdecl google::protobuf::io::StringOutputStream::BackUp(int) __ptr64 */

void __thiscall
google::protobuf::io::StringOutputStream::BackUp(StringOutputStream *this,int param_1)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulonglong uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar3 = (ulonglong)param_1;
  if ((param_1 < 0) &&
     (pbVar2 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                         (uVar3,0,"count >= 0"),
     pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_28._Mydata = (char *)pbVar2;
    if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
      local_28._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    local_28._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_18,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x96,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_18);
  }
  if (this->target_ == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    local_28._Mysize = 0x12;
    local_28._Mydata = "target_ != nullptr";
    local_18._Mydata = "target_ != nullptr";
    local_18._Mysize = 0x12;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x97,&local_18);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  uVar1 = (this->target_->_Mypair)._Myval2._Mysize;
  if ((uVar1 < uVar3) &&
     (pbVar2 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (uVar3,uVar1,"static_cast<size_t>(count) <= target_->size()"),
     pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_28._Mydata = (char *)pbVar2;
    if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
      local_28._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    local_28._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
    local_18._Mydata = local_28._Mydata;
    local_18._Mysize = local_28._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
               ,0x98,&local_18);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (this->target_,(this->target_->_Mypair)._Myval2._Mysize - uVar3,'\0');
  return;
}

// ByteCount @ 14f92c810

/* public: virtual __int64 __cdecl google::protobuf::io::ArrayInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::ArrayInputStream::ByteCount(ArrayInputStream *this)

{
  return (longlong)this->position_;
}

// ByteCount @ 14f92c820

/* public: virtual __int64 __cdecl google::protobuf::io::ArrayOutputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::ArrayOutputStream::ByteCount(ArrayOutputStream *this)

{
  return (longlong)this->position_;
}

// ByteCount @ 14f92c830

/* public: virtual __int64 __cdecl
   google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(void)const __ptr64 */

__int64 __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(CopyingInputStreamAdaptor *this)

{
  return *(longlong *)(this + 0x18) - (longlong)*(int *)(this + 0x30);
}

// ByteCount @ 14f92c850

/* public: virtual __int64 __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::ByteCount(void)const __ptr64 */

__int64 __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::ByteCount(CopyingOutputStreamAdaptor *this)

{
  return (longlong)*(int *)(this + 0x2c) + *(longlong *)(this + 0x18);
}

// ByteCount @ 14f92c860

/* public: virtual __int64 __cdecl google::protobuf::io::CordInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::CordInputStream::ByteCount(CordInputStream *this)

{
  return *(longlong *)(this + 0xa0) - *(longlong *)(this + 0xa8);
}

// ByteCount @ 14f92c880

/* public: virtual __int64 __cdecl google::protobuf::io::CordOutputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::CordOutputStream::ByteCount(CordOutputStream *this)

{
  ulonglong uVar1;
  
  if (((longlong)(char)this[8] & 1U) == 0) {
    uVar1 = (ulonglong)(longlong)(char)this[8] >> 1;
  }
  else {
    uVar1 = **(ulonglong **)(this + 0x10);
  }
  if (((byte)this[0x28] & 1) != 0) {
    return (longlong)((char)this[0x28] >> 1) + uVar1;
  }
  return **(longlong **)(this + 0x28) + uVar1;
}

// ByteCount @ 14f92c8c0

/* public: virtual __int64 __cdecl google::protobuf::io::LimitingInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::LimitingInputStream::ByteCount(LimitingInputStream *this)

{
  longlong lVar1;
  
  if (*(longlong *)(this + 0x10) < 0) {
    lVar1 = (**(code **)(**(longlong **)(this + 8) + 0x20))();
    return (*(longlong *)(this + 0x10) - *(longlong *)(this + 0x18)) + lVar1;
  }
  lVar1 = (**(code **)(**(longlong **)(this + 8) + 0x20))();
  return lVar1 - *(longlong *)(this + 0x18);
}

// ByteCount @ 14f92c910

/* public: virtual __int64 __cdecl google::protobuf::io::StringOutputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::StringOutputStream::ByteCount(StringOutputStream *this)

{
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this->target_ != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return (this->target_->_Mypair)._Myval2._Mysize;
  }
  local_28._Mydata = "target_ != nullptr";
  local_28._Mysize = 0x12;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
             ,0x9d,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Check_EQImpl @ 14f92c990

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl(int,int,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_EQImpl(int param_1,int param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 == param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)param_1,(longlong)param_2,param_3);
  return pbVar1;
}

// Check_GEImpl @ 14f92c9b0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_GEImpl(int,int,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_GEImpl(int param_1,int param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_2 <= param_1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)param_1,(longlong)param_2,param_3);
  return pbVar1;
}

// Check_GTImpl @ 14f92c9d0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_GTImpl(int,int,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_GTImpl(int param_1,int param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_2 < param_1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)param_1,(longlong)param_2,param_3);
  return pbVar1;
}

// Check_LEImpl @ 14f92c9f0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_LEImpl(int,int,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_LEImpl(int param_1,int param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 <= param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<__int64,__int64>((longlong)param_1,(longlong)param_2,param_3);
  return pbVar1;
}

// ChunkRemaining @ 14f92ca10

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::ChunkRemaining(class absl::lts_20240722::Cord::CharIterator const &
   __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::Cord::ChunkRemaining
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          CharIterator *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->chunk_iterator_).current_chunk_._Mysize;
  __return_storage_ptr__->_Mydata = (param_1->chunk_iterator_).current_chunk_._Mydata;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// Consume @ 14f92ca20

/* public: class absl::lts_20240722::Cord __cdecl
   google::protobuf::io::CordOutputStream::Consume(void) __ptr64 */

Cord * __thiscall
google::protobuf::io::CordOutputStream::Consume(CordOutputStream *this,Cord *__return_storage_ptr__)

{
  CordRep *pCVar1;
  Rep_u_0 local_20;
  
  local_20.long_rep.rep = (CordRepFlat *)*(undefined8 *)(this + 0x28);
  local_20.long_rep.padding = (void *)*(undefined8 *)(this + 0x30);
  this[0x28] = (CordOutputStream)0x1;
  absl::lts_20240722::Cord::Append((Cord *)(this + 8),(CordBuffer *)&local_20.long_rep);
  *(undefined4 *)(this + 0x20) = 0;
  pCVar1 = *(CordRep **)(this + 0x10);
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
       *(long64 *)(this + 8);
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return __return_storage_ptr__;
}

// Flush @ 14f92ca80

/* public: bool __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::Flush(void) __ptr64 */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::Flush(CopyingOutputStreamAdaptor *this)

{
  void *pvVar1;
  char cVar2;
  
  if (this[0x11] != (CopyingOutputStreamAdaptor)0x0) {
    return false;
  }
  if (*(int *)(this + 0x2c) != 0) {
    cVar2 = (**(code **)(**(longlong **)(this + 8) + 8))
                      (*(longlong **)(this + 8),*(undefined8 *)(this + 0x20));
    if (cVar2 == '\0') {
      pvVar1 = *(void **)(this + 0x20);
      this[0x11] = (CopyingOutputStreamAdaptor)0x1;
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (pvVar1 == (void *)0x0) {
        return false;
      }
      operator_delete__(pvVar1);
      return false;
    }
    *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + (longlong)*(int *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  return true;
}

// FreeBuffer @ 14f92ca90

/* private: void __cdecl google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void) __ptr64
    */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(CopyingInputStreamAdaptor *this)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (*(int *)(this + 0x30) != 0) {
    pbVar2 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                       ((longlong)*(int *)(this + 0x30),0,"backup_bytes_ == 0");
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0x111,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  pvVar1 = *(void **)(this + 0x20);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

// FreeBuffer @ 14f92cb40

/* private: void __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(void) __ptr64
    */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(CopyingOutputStreamAdaptor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

// GetReferenceableValue @ 14f92cb70

/* int __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(int) */

int __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(int param_1)

{
  return param_1;
}

// IndexOf @ 14f92cb80

/* private: struct absl::lts_20240722::cord_internal::CordRepBtree::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::IndexOf(unsigned __int64)const __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::IndexOf
          (CordRepBtree *this,Position *__return_storage_ptr__,__uint64 param_1)

{
  CordRep **ppCVar1;
  ulonglong uVar2;
  CordRep **ppCVar3;
  ulong64 uVar4;
  
  uVar4 = (ulong64)*(byte *)((longlong)&this->_padding_ + 6);
  ppCVar3 = this->edges_ + uVar4;
  uVar2 = this->edges_[uVar4]->length;
  if (uVar2 <= param_1) {
    do {
      ppCVar1 = ppCVar3 + 1;
      ppCVar3 = ppCVar3 + 1;
      param_1 = param_1 - uVar2;
      uVar4 = uVar4 + 1;
      uVar2 = (*ppCVar1)->length;
    } while (uVar2 <= param_1);
  }
  __return_storage_ptr__->index = uVar4;
  __return_storage_ptr__->n = param_1;
  return __return_storage_ptr__;
}

// LoadChunkData @ 14f92cbd0

/* private: bool __cdecl google::protobuf::io::CordInputStream::LoadChunkData(void) __ptr64 */

bool __thiscall google::protobuf::io::CordInputStream::LoadChunkData(CordInputStream *this)

{
  if (*(longlong *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0x10);
    return true;
  }
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  return false;
}

// Next @ 14f92cc20

/* public: virtual bool __cdecl google::protobuf::io::ArrayInputStream::Next(void const * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::ArrayInputStream::Next(ArrayInputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_res8 [8];
  
  iVar1 = this->position_;
  if (iVar1 < this->size_) {
    local_res8[0] = this->size_ - iVar1;
    piVar2 = local_res8;
    if (this->block_size_ <= local_res8[0]) {
      piVar2 = &this->block_size_;
    }
    this->last_returned_size_ = *piVar2;
    *param_1 = this->data_ + iVar1;
    *param_2 = this->last_returned_size_;
    this->position_ = this->position_ + this->last_returned_size_;
    return true;
  }
  this->last_returned_size_ = 0;
  return false;
}

// Next @ 14f92cc80

/* public: virtual bool __cdecl google::protobuf::io::ArrayOutputStream::Next(void * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::ArrayOutputStream::Next(ArrayOutputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_res8 [8];
  
  iVar1 = this->position_;
  if (iVar1 < this->size_) {
    local_res8[0] = this->size_ - iVar1;
    piVar2 = local_res8;
    if (this->block_size_ <= local_res8[0]) {
      piVar2 = &this->block_size_;
    }
    this->last_returned_size_ = *piVar2;
    *param_1 = this->data_ + iVar1;
    *param_2 = this->last_returned_size_;
    this->position_ = this->position_ + this->last_returned_size_;
    return true;
  }
  this->last_returned_size_ = 0;
  return false;
}

// Next @ 14f92cce0

/* public: virtual bool __cdecl google::protobuf::io::CopyingInputStreamAdaptor::Next(void const *
   __ptr64 * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::Next
          (CopyingInputStreamAdaptor *this,void **param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this[0x11] == (CopyingInputStreamAdaptor)0x0) {
    if (*(longlong *)(this + 0x20) == 0) {
      pvVar3 = operator_new__((longlong)*(int *)(this + 0x28));
      pvVar1 = *(void **)(this + 0x20);
      *(void **)(this + 0x20) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
    }
    if (0 < *(int *)(this + 0x30)) {
      *param_1 = (void *)(((longlong)*(int *)(this + 0x2c) - (longlong)*(int *)(this + 0x30)) +
                         *(longlong *)(this + 0x20));
      *param_2 = *(int *)(this + 0x30);
      *(undefined4 *)(this + 0x30) = 0;
      return true;
    }
    iVar2 = (**(code **)(**(longlong **)(this + 8) + 8))
                      (*(longlong **)(this + 8),*(undefined8 *)(this + 0x20),
                       *(undefined4 *)(this + 0x28));
    *(int *)(this + 0x2c) = iVar2;
    if (0 < iVar2) {
      *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + (longlong)iVar2;
      *param_2 = iVar2;
      *param_1 = *(void **)(this + 0x20);
      return true;
    }
    if (iVar2 < 0) {
      this[0x11] = (CopyingInputStreamAdaptor)0x1;
    }
    if ((*(int *)(this + 0x30) != 0) &&
       (pbVar4 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                           ((longlong)*(int *)(this + 0x30),0,"backup_bytes_ == 0"),
       pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      local_28._Mydata = (char *)pbVar4;
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar4->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0x111,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    pvVar1 = *(void **)(this + 0x20);
    *(undefined8 *)(this + 0x20) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return false;
}

// Next @ 14f92ce20

/* public: virtual bool __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::Next(void *
   __ptr64 * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::Next
          (CopyingOutputStreamAdaptor *this,void **param_1,int *param_2)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  
  if (*(int *)(this + 0x2c) == *(int *)(this + 0x28)) {
    bVar2 = WriteBuffer(this);
    if (!bVar2) {
      return false;
    }
  }
  if (*(longlong *)(this + 0x20) == 0) {
    pvVar3 = operator_new__((longlong)*(int *)(this + 0x28));
    pvVar1 = *(void **)(this + 0x20);
    *(void **)(this + 0x20) = pvVar3;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  *param_1 = (void *)((longlong)*(int *)(this + 0x2c) + *(longlong *)(this + 0x20));
  *param_2 = *(int *)(this + 0x28) - *(int *)(this + 0x2c);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
  return true;
}

// Next @ 14f92ceb0

/* public: virtual bool __cdecl google::protobuf::io::CordInputStream::Next(void const * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CordInputStream::Next(CordInputStream *this,void **param_1,int *param_2)

{
  bool bVar1;
  
  if (*(longlong *)(this + 0xc0) == 0) {
    bVar1 = NextChunk(this,0);
    if (!bVar1) {
      return false;
    }
  }
  *param_1 = (void *)((*(longlong *)(this + 0xb8) + *(longlong *)(this + 0xb0)) -
                     *(longlong *)(this + 0xc0));
  *param_2 = *(int *)(this + 0xc0);
  *(longlong *)(this + 0xa8) = *(longlong *)(this + 0xa8) - *(longlong *)(this + 0xc0);
  *(undefined8 *)(this + 0xc0) = 0;
  return true;
}

// Next @ 14f92cf40

/* public: virtual bool __cdecl google::protobuf::io::CordOutputStream::Next(void * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CordOutputStream::Next(CordOutputStream *this,void **param_1,int *param_2)

{
  CordOutputStream CVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  Rep_u_0 *pRVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  __uint64 _Var9;
  Rep_u_0 local_28;
  
  CVar1 = this[8];
  if (((byte)CVar1 & 1) == 0) {
    uVar8 = (ulonglong)(longlong)(char)CVar1 >> 1;
  }
  else {
    uVar8 = **(ulonglong **)(this + 0x10);
  }
  if (((byte)this[0x28] & 1) == 0) {
    lVar6 = **(longlong **)(this + 0x28);
  }
  else {
    lVar6 = (longlong)((char)this[0x28] >> 1);
  }
  uVar8 = lVar6 + uVar8;
  if (uVar8 < *(ulonglong *)(this + 0x18)) {
    uVar8 = *(ulonglong *)(this + 0x18) - uVar8;
    _Var9 = uVar8;
  }
  else {
    _Var9 = 0xffffffffffffffff;
    if (uVar8 < 0x80) {
      uVar8 = 0x80;
    }
  }
  iVar4 = *(int *)(this + 0x20);
  if (iVar4 == 0) {
LAB_14f92d042:
    pRVar5 = (Rep_u_0 *)
             absl::lts_20240722::CordBuffer::CreateWithDefaultLimit
                       ((CordBuffer *)&local_28.long_rep,uVar8);
  }
  else {
    if (iVar4 == 1) {
      local_28.long_rep.rep = (CordRepFlat *)*(undefined8 *)(this + 0x28);
      local_28.long_rep.padding = (void *)*(undefined8 *)(this + 0x30);
      this[0x28] = (CordOutputStream)0x1;
      absl::lts_20240722::Cord::Append((Cord *)(this + 8),(CordBuffer *)&local_28.long_rep);
      goto LAB_14f92d042;
    }
    if (iVar4 != 3) goto LAB_14f92d097;
    if (((byte)CVar1 & 1) == 0) {
      uVar7 = (ulonglong)(longlong)(char)CVar1 >> 1;
    }
    else {
      uVar7 = **(ulonglong **)(this + 0x10);
    }
    if (uVar7 == 0) {
      absl::lts_20240722::CordBuffer::CreateWithDefaultLimit((CordBuffer *)&local_28.long_rep,uVar8)
      ;
      pRVar5 = &local_28;
    }
    else {
      absl::lts_20240722::Cord::GetAppendBufferSlowPath
                ((Cord *)(this + 8),(CordBuffer *)&local_28.long_rep,0,uVar8,0x10);
      pRVar5 = &local_28;
    }
  }
  absl::lts_20240722::CordBuffer::operator=
            ((CordBuffer *)(this + 0x28),(CordBuffer *)&pRVar5->long_rep);
  if (((ulonglong)local_28.long_rep.rep & 1) == 0) {
    bVar2 = (local_28.long_rep.rep)->field_0xc;
    if (bVar2 < 0x43) {
      iVar4 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar4 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar2 - 0xb8) * 0x1000;
    }
    ::operator_delete(local_28.long_rep.rep,(longlong)iVar4);
  }
LAB_14f92d097:
  if (((byte)this[0x28] & 1) == 0) {
    plVar3 = *(longlong **)(this + 0x28);
    bVar2 = *(byte *)((longlong)plVar3 + 0xc);
    if (bVar2 < 0x43) {
      iVar4 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar4 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar4 = (bVar2 - 0xb8) * 0x1000;
    }
    local_28.long_rep.rep = (CordRepFlat *)((longlong)plVar3 + *plVar3 + 0xd);
    uVar8 = ((longlong)iVar4 - *plVar3) - 0xd;
  }
  else {
    lVar6 = (longlong)((char)this[0x28] >> 1);
    local_28.long_rep.rep = (CordRepFlat *)(this + lVar6 + 0x29);
    uVar8 = 0xf - lVar6;
  }
  *param_1 = local_28.long_rep.rep;
  if (_Var9 < uVar8) {
    *param_2 = (int)_Var9;
    if (((byte)this[0x28] & 1) == 0) {
      **(longlong **)(this + 0x28) = **(longlong **)(this + 0x28) + _Var9;
      *(undefined4 *)(this + 0x20) = 2;
    }
    else {
      this[0x28] = (CordOutputStream)((char)_Var9 * '\x02' + (char)this[0x28]);
      *(undefined4 *)(this + 0x20) = 2;
    }
  }
  else {
    *param_2 = (int)uVar8;
    if (((byte)this[0x28] & 1) == 0) {
      **(longlong **)(this + 0x28) = **(longlong **)(this + 0x28) + uVar8;
    }
    else {
      this[0x28] = (CordOutputStream)((char)uVar8 * '\x02' + (char)this[0x28]);
    }
    *(undefined4 *)(this + 0x20) = 1;
  }
  return true;
}

// Next @ 14f92d190

/* public: virtual bool __cdecl google::protobuf::io::LimitingInputStream::Next(void const * __ptr64
   * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::LimitingInputStream::Next
          (LimitingInputStream *this,void **param_1,int *param_2)

{
  LimitingInputStream *pLVar1;
  char cVar2;
  
  if (0 < *(longlong *)(this + 0x10)) {
    cVar2 = (**(code **)(**(longlong **)(this + 8) + 8))();
    if (cVar2 != '\0') {
      pLVar1 = this + 0x10;
      *(longlong *)pLVar1 = *(longlong *)pLVar1 - (longlong)*param_2;
      if (*(longlong *)pLVar1 < 0) {
        *param_2 = *param_2 + (int)*(undefined8 *)(this + 0x10);
      }
      return true;
    }
  }
  return false;
}

// Next @ 14f92d1f0

/* public: virtual bool __cdecl google::protobuf::io::StringOutputStream::Next(void * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::StringOutputStream::Next(StringOutputStream *this,void **param_1,int *param_2)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulonglong uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  pbVar2 = this->target_;
  if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    uVar1 = (pbVar2->_Mypair)._Myval2._Mysize;
    uVar3 = (pbVar2->_Mypair)._Myval2._Myres;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1 * 2;
    }
    if (uVar1 + 0x7fffffff < uVar3) {
      uVar3 = uVar1 + 0x7fffffff;
    }
    if (uVar3 < 0x10) {
      uVar3 = 0x10;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(pbVar2,uVar3,'\0');
    pbVar2 = this->target_;
    if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    *param_1 = (pbVar2->_Mypair)._Myval2._Bx._Buf + uVar1;
    *param_2 = (int)(this->target_->_Mypair)._Myval2._Mysize - (int)uVar1;
    return true;
  }
  local_28._Mydata = "target_ != nullptr";
  local_28._Mysize = 0x12;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
             ,0x7b,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// NextChunk @ 14f92d2f0

/* private: bool __cdecl google::protobuf::io::CordInputStream::NextChunk(unsigned __int64) __ptr64
    */

bool __thiscall
google::protobuf::io::CordInputStream::NextChunk(CordInputStream *this,__uint64 param_1)

{
  CordInputStream *pCVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(this + 0xb8) == 0) {
    return false;
  }
  absl::lts_20240722::Cord::Advance
            ((CharIterator *)(this + 8),
             (*(longlong *)(this + 0xb8) - *(longlong *)(this + 0xc0)) + param_1);
  pCVar1 = this + 0xa8;
  *(__uint64 *)pCVar1 = *(longlong *)pCVar1 - param_1;
  if (*(longlong *)pCVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 8);
  }
  *(undefined8 *)(this + 0xc0) = uVar2;
  *(undefined8 *)(this + 0xb8) = uVar2;
  return *(longlong *)pCVar1 != 0;
}

// ReadCord @ 14f92d380

/* public: virtual bool __cdecl google::protobuf::io::CordInputStream::ReadCord(class
   absl::lts_20240722::Cord * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::CordInputStream::ReadCord(CordInputStream *this,Cord *param_1,int param_2)

{
  CordInputStream *pCVar1;
  __uint64 _Var2;
  CordInputStream *pCVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong local_48;
  Rep_u_0 local_40;
  
  uVar5 = (ulonglong)param_2;
  uVar4 = 0;
  absl::lts_20240722::Cord::Advance
            ((CharIterator *)(this + 8),*(longlong *)(this + 0xb8) - *(longlong *)(this + 0xc0));
  local_48 = uVar5;
  pCVar1 = this + 0xa8;
  pCVar3 = (CordInputStream *)&local_48;
  if (*(ulonglong *)pCVar1 < uVar5) {
    pCVar3 = pCVar1;
  }
  _Var2 = *(__uint64 *)pCVar3;
  absl::lts_20240722::Cord::ChunkIterator::AdvanceAndReadBytes
            ((ChunkIterator *)(this + 8),(Cord *)&local_40.as_tree,_Var2);
  absl::lts_20240722::Cord::Append(param_1,(Cord *)&local_40.as_tree);
  if ((local_40.data[0] & 1U) != 0) {
    absl::lts_20240722::Cord::DestroyCordSlow((Cord *)&local_40.as_tree);
  }
  *(ulonglong *)pCVar1 = *(ulonglong *)pCVar1 - _Var2;
  if (*(ulonglong *)pCVar1 != 0) {
    uVar4 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 8);
  }
  *(undefined8 *)(this + 0xc0) = uVar4;
  *(undefined8 *)(this + 0xb8) = uVar4;
  return _Var2 == uVar5;
}

// ReadCord @ 14f92d450

/* public: virtual bool __cdecl google::protobuf::io::LimitingInputStream::ReadCord(class
   absl::lts_20240722::Cord * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::LimitingInputStream::ReadCord
          (LimitingInputStream *this,Cord *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 < 1) {
    return true;
  }
  plVar1 = *(longlong **)(this + 8);
  if ((longlong)*(ulonglong *)(this + 0x10) < (longlong)param_2) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*(ulonglong *)(this + 0x10) & 0xffffffff);
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    if (cVar2 != '\0') {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) - (longlong)param_2;
      return true;
    }
  }
  return false;
}

// RemoveChunkPrefix @ 14f92d4c0

/* private: void __cdecl absl::lts_20240722::Cord::ChunkIterator::RemoveChunkPrefix(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::ChunkIterator::RemoveChunkPrefix(ChunkIterator *this,__uint64 param_1)

{
  ulong64 *puVar1;
  
  (this->current_chunk_)._Mydata = (this->current_chunk_)._Mydata + param_1;
  puVar1 = &(this->current_chunk_)._Mysize;
  *puVar1 = *puVar1 - param_1;
  this->bytes_remaining_ = this->bytes_remaining_ - param_1;
  return;
}

// Seek @ 14f92d4e0

/* WARNING: Type propagation algorithm not settling */
/* public: struct absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Position __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Seek(unsigned __int64) __ptr64 */

Position * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeNavigator::Seek
          (CordRepBtreeNavigator *this,Position *__return_storage_ptr__,__uint64 param_1)

{
  CordRep **ppCVar1;
  int iVar2;
  ulonglong uVar3;
  CordRep **ppCVar4;
  CordRepBtree *pCVar5;
  CordRepBtree **ppCVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar2 = this->height_;
  pCVar5 = this->node_[iVar2];
  if (param_1 < (ulonglong)pCVar5->_padding_) {
    uVar3 = (ulonglong)(byte)*(undefined1 *)((longlong)&pCVar5->_padding_ + 6);
    ppCVar4 = pCVar5->edges_ + uVar3;
    uVar7 = pCVar5->edges_[uVar3]->length;
    if (uVar7 <= param_1) {
      do {
        ppCVar1 = ppCVar4 + 1;
        ppCVar4 = ppCVar4 + 1;
        param_1 = param_1 - uVar7;
        uVar3 = uVar3 + 1;
        uVar7 = (*ppCVar1)->length;
      } while (uVar7 <= param_1);
    }
    this->index_[iVar2] = (uchar)uVar3;
    lVar8 = (longlong)(iVar2 + -1);
    if (-1 < iVar2 + -1) {
      ppCVar6 = this->node_ + lVar8;
      do {
        pCVar5 = (CordRepBtree *)pCVar5->edges_[uVar3];
        *ppCVar6 = pCVar5;
        uVar3 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar5->_padding_ + 1) + 2);
        ppCVar4 = pCVar5->edges_ + uVar3;
        uVar7 = pCVar5->edges_[uVar3]->length;
        if (uVar7 <= param_1) {
          do {
            ppCVar1 = ppCVar4 + 1;
            ppCVar4 = ppCVar4 + 1;
            param_1 = param_1 - uVar7;
            uVar3 = uVar3 + 1;
            uVar7 = (*ppCVar1)->length;
          } while (uVar7 <= param_1);
        }
        ppCVar6 = ppCVar6 + -1;
        this->index_[lVar8] = (uchar)uVar3;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    __return_storage_ptr__->edge = pCVar5->edges_[uVar3];
    __return_storage_ptr__->offset = param_1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->edge = (CordRep *)0x0;
  __return_storage_ptr__->offset = 0;
  return __return_storage_ptr__;
}

// Seek @ 14f92d5f0

/* WARNING: Type propagation algorithm not settling */
/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::Seek(unsigned __int64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::Seek
          (CordRepBtreeReader *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,__uint64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  CordRep *pCVar5;
  uchar *puVar6;
  ulong64 uVar7;
  CordRep **ppCVar8;
  CordRepBtree *pCVar9;
  ulong64 uVar10;
  CordRepBtree **ppCVar11;
  longlong lVar12;
  CordRepBtree *pCVar13;
  ulonglong uVar14;
  
  iVar1 = (this->navigator_).height_;
  pCVar9 = (this->navigator_).node_[iVar1];
  if (param_1 < (ulonglong)pCVar9->_padding_) {
    uVar14 = (ulonglong)(byte)*(undefined1 *)((longlong)&pCVar9->_padding_ + 6);
    ppCVar8 = pCVar9->edges_ + uVar14;
    uVar4 = pCVar9->edges_[uVar14]->length;
    _Var3 = param_1;
    if (uVar4 <= param_1) {
      do {
        _Var3 = _Var3 - uVar4;
        ppCVar8 = ppCVar8 + 1;
        uVar14 = uVar14 + 1;
        uVar4 = (*ppCVar8)->length;
      } while (uVar4 <= _Var3);
    }
    (this->navigator_).index_[iVar1] = (uchar)uVar14;
    lVar12 = (longlong)(iVar1 + -1);
    if (-1 < iVar1 + -1) {
      ppCVar11 = (this->navigator_).node_ + lVar12;
      do {
        pCVar9 = (CordRepBtree *)pCVar9->edges_[uVar14];
        *ppCVar11 = pCVar9;
        uVar14 = (ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar9->_padding_ + 1) + 2);
        ppCVar8 = pCVar9->edges_ + uVar14;
        uVar4 = pCVar9->edges_[uVar14]->length;
        if (uVar4 <= _Var3) {
          do {
            _Var3 = _Var3 - uVar4;
            ppCVar8 = ppCVar8 + 1;
            uVar14 = uVar14 + 1;
            uVar4 = (*ppCVar8)->length;
          } while (uVar4 <= _Var3);
        }
        ppCVar11 = ppCVar11 + -1;
        (this->navigator_).index_[lVar12] = (uchar)uVar14;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    pCVar5 = pCVar9->edges_[uVar14];
    if (pCVar5 != (CordRep *)0x0) {
      puVar2 = &pCVar5->length;
      pCVar13 = (CordRepBtree *)0x0;
      pCVar9 = pCVar13;
      if (pCVar5->tag == '\x01') {
        pCVar9 = (CordRepBtree *)pCVar5[1].length;
        pCVar5 = *(CordRep **)&pCVar5[1].refcount;
      }
      if (pCVar5->tag < 6) {
        puVar6 = (uchar *)pCVar5[1].length;
      }
      else {
        puVar6 = pCVar5->storage;
      }
      if (_Var3 <= *puVar2) {
        uVar10 = *puVar2 - _Var3;
        iVar1 = (this->navigator_).height_;
        uVar7 = 0xffffffffffffffff;
        if (uVar10 != 0xffffffffffffffff) {
          uVar7 = uVar10;
        }
        if (-1 < iVar1) {
          pCVar13 = (this->navigator_).node_[iVar1];
        }
        this->remaining_ = (pCVar13->_padding_ - uVar7) - param_1;
        __return_storage_ptr__->_Mydata =
             (char *)((longlong)pCVar9->edges_ + (longlong)(puVar6 + _Var3 + -0x10));
        __return_storage_ptr__->_Mysize = uVar7;
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
  }
  this->remaining_ = 0;
  __return_storage_ptr__->_Mydata = (char *)0x0;
  __return_storage_ptr__->_Mysize = 0;
  return __return_storage_ptr__;
}

// Skip @ 14f92d7a0

/* public: virtual bool __cdecl google::protobuf::io::ArrayInputStream::Skip(int) __ptr64 */

bool __thiscall google::protobuf::io::ArrayInputStream::Skip(ArrayInputStream *this,int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (param_1 < 0) {
    pbVar1 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                       ((longlong)param_1,0,"count >= 0");
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0x47,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  this->last_returned_size_ = 0;
  if (this->size_ - this->position_ < param_1) {
    this->position_ = this->size_;
    return false;
  }
  this->position_ = this->position_ + param_1;
  return true;
}

// Skip @ 14f92d860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual int __cdecl google::protobuf::io::CopyingInputStream::Skip(int) __ptr64 */

int __thiscall google::protobuf::io::CopyingInputStream::Skip(CopyingInputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1048 [32];
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f92d872;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1048;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = param_1 - iVar2;
      if (0x1000 < param_1 - iVar2) {
        iVar1 = 0x1000;
      }
      iVar1 = (**(code **)(*(longlong *)this + 8))(this,local_1028,iVar1);
    } while ((0 < iVar1) && (iVar2 = iVar2 + iVar1, iVar2 < param_1));
  }
  return iVar2;
}

// Skip @ 14f92d8f0

/* public: virtual bool __cdecl google::protobuf::io::CopyingInputStreamAdaptor::Skip(int) __ptr64
    */

bool __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::Skip(CopyingInputStreamAdaptor *this,int param_1)

{
  int iVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (param_1 < 0) {
    pbVar3 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                       ((longlong)param_1,0,"count >= 0");
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar3;
      if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                 ,0xf0,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  if (this[0x11] != (CopyingInputStreamAdaptor)0x0) {
    return false;
  }
  iVar1 = *(int *)(this + 0x30);
  if (param_1 <= iVar1) {
    *(int *)(this + 0x30) = iVar1 - param_1;
    return true;
  }
  *(undefined4 *)(this + 0x30) = 0;
  iVar2 = (**(code **)(**(longlong **)(this + 8) + 0x10))(*(longlong **)(this + 8),param_1 - iVar1);
  *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + (longlong)iVar2;
  return iVar2 == param_1 - iVar1;
}

// Skip @ 14f92d9d0

/* public: virtual bool __cdecl google::protobuf::io::CordInputStream::Skip(int) __ptr64 */

bool __thiscall google::protobuf::io::CordInputStream::Skip(CordInputStream *this,int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  uVar1 = *(ulonglong *)(this + 0xa8);
  if (uVar2 <= *(ulonglong *)(this + 0xc0)) {
    *(ulonglong *)(this + 0xc0) = *(ulonglong *)(this + 0xc0) - uVar2;
    *(ulonglong *)(this + 0xa8) = uVar1 - uVar2;
    return true;
  }
  if (uVar2 <= uVar1) {
    NextChunk(this,uVar2);
    return true;
  }
  NextChunk(this,uVar1);
  return false;
}

// Skip @ 14f92da30

/* public: virtual bool __cdecl google::protobuf::io::LimitingInputStream::Skip(int) __ptr64 */

bool __thiscall
google::protobuf::io::LimitingInputStream::Skip(LimitingInputStream *this,int param_1)

{
  char cVar1;
  
  if (*(longlong *)(this + 0x10) < (longlong)param_1) {
    if (-1 < *(longlong *)(this + 0x10)) {
      (**(code **)(**(longlong **)(this + 8) + 0x18))();
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(this + 8) + 0x18))(*(longlong **)(this + 8),param_1);
    if (cVar1 != '\0') {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) - (longlong)param_1;
      return true;
    }
  }
  return false;
}

// WriteAliasedRaw @ 14f92daa0

/* public: virtual bool __cdecl
   google::protobuf::io::CopyingOutputStreamAdaptor::WriteAliasedRaw(void const * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::WriteAliasedRaw
          (CopyingOutputStreamAdaptor *this,void *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  void *local_res8;
  int local_res18 [2];
  
  uVar4 = (ulonglong)param_2;
  if (param_2 < *(int *)(this + 0x28)) {
    cVar2 = (**(code **)(*(longlong *)this + 8))(this,&local_res8,local_res18);
    while (cVar2 != '\0') {
      iVar3 = (int)uVar4;
      if (iVar3 <= local_res18[0]) {
        memcpy(local_res8,param_1,(longlong)iVar3);
        (**(code **)(*(longlong *)this + 0x10))(this,local_res18[0] - iVar3);
        return true;
      }
      memcpy(local_res8,param_1,(longlong)local_res18[0]);
      param_1 = (void *)((longlong)param_1 + (longlong)local_res18[0]);
      uVar4 = (ulonglong)(uint)(iVar3 - local_res18[0]);
      cVar2 = (**(code **)(*(longlong *)this + 8))(this,&local_res8,local_res18);
    }
  }
  else {
    bVar1 = WriteBuffer(this);
    if ((bVar1) &&
       (cVar2 = (**(code **)(**(longlong **)(this + 8) + 8))
                          (*(longlong **)(this + 8),param_1,param_2), cVar2 != '\0')) {
      *(ulonglong *)(this + 0x18) = *(longlong *)(this + 0x18) + uVar4;
      return true;
    }
  }
  return false;
}

// WriteBuffer @ 14f92db90

/* private: bool __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(void) __ptr64
    */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(CopyingOutputStreamAdaptor *this)

{
  void *pvVar1;
  char cVar2;
  
  if (this[0x11] != (CopyingOutputStreamAdaptor)0x0) {
    return false;
  }
  if (*(int *)(this + 0x2c) != 0) {
    cVar2 = (**(code **)(**(longlong **)(this + 8) + 8))
                      (*(longlong **)(this + 8),*(undefined8 *)(this + 0x20));
    if (cVar2 == '\0') {
      pvVar1 = *(void **)(this + 0x20);
      this[0x11] = (CopyingOutputStreamAdaptor)0x1;
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (pvVar1 == (void *)0x0) {
        return false;
      }
      operator_delete__(pvVar1);
      return false;
    }
    *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + (longlong)*(int *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  return true;
}

// WriteCord @ 14f92dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: virtual bool __cdecl google::protobuf::io::CopyingOutputStreamAdaptor::WriteCord(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::WriteCord
          (CopyingOutputStreamAdaptor *this,Cord *param_1)

{
  ulong64 uVar1;
  int iVar2;
  char cVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  basic_string_view<char,std::char_traits<char>_> local_d8;
  ChunkIterator local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(&local_c8,param_1);
  pcVar5 = local_c8.current_chunk_._Mydata;
  uVar6 = local_c8.current_chunk_._Mysize;
  uVar1 = local_c8.bytes_remaining_;
  iVar2 = local_c8.btree_reader_.navigator_.height_;
  while( true ) {
    if (uVar1 == 0) {
      return true;
    }
    local_c8.bytes_remaining_ = uVar1;
    cVar3 = (**(code **)(*(longlong *)this + 0x20))(this,pcVar5,uVar6 & 0xffffffff);
    if (cVar3 == '\0') break;
    local_c8.bytes_remaining_ = uVar1 - uVar6;
    uVar1 = local_c8.bytes_remaining_;
    if (local_c8.bytes_remaining_ != 0) {
      if ((iVar2 < 0) || (local_c8.btree_reader_.navigator_.node_[iVar2] == (CordRepBtree *)0x0)) {
        pcVar5 = (char *)0x0;
        uVar6 = 0;
        local_c8.current_chunk_._Mydata = (char *)0x0;
        local_c8.current_chunk_._Mysize = 0;
      }
      else {
        pbVar4 = absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
                           (&local_c8.btree_reader_,&local_d8);
        pcVar5 = pbVar4->_Mydata;
        local_c8.current_chunk_._Mysize = pbVar4->_Mysize;
        uVar6 = pbVar4->_Mysize;
        local_c8.current_chunk_._Mydata = pcVar5;
        uVar1 = local_c8.bytes_remaining_;
        iVar2 = local_c8.btree_reader_.navigator_.height_;
      }
    }
  }
  return false;
}

// WriteCord @ 14f92dd00

/* public: virtual bool __cdecl google::protobuf::io::CordOutputStream::WriteCord(class
   absl::lts_20240722::Cord const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CordOutputStream::WriteCord(CordOutputStream *this,Cord *param_1)

{
  Rep_u_0 local_18;
  
  local_18.long_rep.rep = (CordRepFlat *)*(undefined8 *)(this + 0x28);
  local_18.long_rep.padding = (void *)*(undefined8 *)(this + 0x30);
  this[0x28] = (CordOutputStream)0x1;
  absl::lts_20240722::Cord::Append((Cord *)(this + 8),(CordBuffer *)&local_18.long_rep);
  absl::lts_20240722::Cord::Append((Cord *)(this + 8),param_1);
  *(undefined4 *)(this + 0x20) = 3;
  return true;
}

// _Get_first @ 14f92dd60

/* public: struct std::default_delete<unsigned char [0]> & __ptr64 __cdecl
   std::_Compressed_pair<struct std::default_delete<unsigned char [0]>,unsigned char *
   __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<unsigned_char_[0]> * __thiscall
std::_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1>::_Get_first
          (_Compressed_pair<std::default_delete<unsigned_char_[0]>,unsigned_char*___ptr64,1> *this)

{
  return (default_delete<unsigned_char_[0]> *)this;
}

// btree @ 14f92dd70

/* public: class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::btree(void)const __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::btree(CordRepBtreeReader *this)

{
  int iVar1;
  
  iVar1 = (this->navigator_).height_;
  if (-1 < iVar1) {
    return (this->navigator_).node_[iVar1];
  }
  return (CordRepBtree *)0x0;
}

// capacity @ 14f92dd90

/* public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::capacity
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return (this->_Mypair)._Myval2._Myres;
}

// char_begin @ 14f92dda0

/* public: class absl::lts_20240722::Cord::CharIterator __cdecl
   absl::lts_20240722::Cord::char_begin(void)const __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::char_begin(Cord *this,CharIterator *__return_storage_ptr__)

{
  ChunkIterator::ChunkIterator(&__return_storage_ptr__->chunk_iterator_,this);
  return __return_storage_ptr__;
}

// get @ 14f92ddd0

/* public: unsigned char * __ptr64 __cdecl std::unique_ptr<unsigned char [0],struct
   std::default_delete<unsigned char [0]> >::get(void)const __ptr64 */

uchar * __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::get
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this)

{
  return *(uchar **)this;
}

// length @ 14f92dde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtreeReader::length(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::cord_internal::CordRepBtreeReader::length(CordRepBtreeReader *this)

{
  int iVar1;
  
  iVar1 = (this->navigator_).height_;
  if (-1 < iVar1) {
    return (this->navigator_).node_[iVar1]->_padding_;
  }
  return _DAT_00000000;
}

// reset @ 14f92de00

/* public: void __cdecl std::unique_ptr<unsigned char [0],struct std::default_delete<unsigned char
   [0]> >::reset(std::nullptr_t) __ptr64 */

void __thiscall
std::unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_>::reset
          (unique_ptr<unsigned_char_[0],std::default_delete<unsigned_char_[0]>_> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

// FUN_150295990 @ 150295990

void FUN_150295990(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 1) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_1502959c0 @ 1502959c0

void FUN_1502959c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x88) & 1) != 0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295a00 @ 150295a00

void FUN_150295a00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x98) & 1) != 0) {
    *(uint *)(param_2 + 0x98) = *(uint *)(param_2 + 0x98) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_150295a40 @ 150295a40

void FUN_150295a40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x98) & 2) != 0) {
    *(uint *)(param_2 + 0x98) = *(uint *)(param_2 + 0x98) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295a80 @ 150295a80

void FUN_150295a80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x98) & 4) != 0) {
    *(uint *)(param_2 + 0x98) = *(uint *)(param_2 + 0x98) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_150295ac0 @ 150295ac0

void FUN_150295ac0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 2) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295af0 @ 150295af0

void FUN_150295af0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 4) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

