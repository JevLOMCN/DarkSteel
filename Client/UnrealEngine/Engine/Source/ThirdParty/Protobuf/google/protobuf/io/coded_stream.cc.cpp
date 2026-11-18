// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 96

// pair<char*___ptr64,bool><char*___ptr64&___ptr64,bool,0> @ 14fa5f4d0

/* public: __cdecl std::pair<char * __ptr64,bool>::pair<char * __ptr64,bool><char * __ptr64 &
   __ptr64,bool,0>(char * __ptr64 & __ptr64,bool && __ptr64) __ptr64 */

pair<char*___ptr64,bool> * __thiscall
std::pair<char*___ptr64,bool>::pair<char*___ptr64,bool><char*___ptr64&___ptr64,bool,0>
          (pair<char*___ptr64,bool> *this,char **param_1,bool *param_2)

{
  *(char **)this = *param_1;
  this[8] = (pair<char*___ptr64,bool>)*param_2;
  return this;
}

// pair<unsigned___int64,bool><unsigned___int64&___ptr64,bool&___ptr64,0> @ 14fa5f4f0

/* public: __cdecl std::pair<unsigned __int64,bool>::pair<unsigned __int64,bool><unsigned __int64 &
   __ptr64,bool & __ptr64,0>(unsigned __int64 & __ptr64,bool & __ptr64) __ptr64 */

pair<unsigned___int64,bool> * __thiscall
std::pair<unsigned___int64,bool>::
pair<unsigned___int64,bool><unsigned___int64&___ptr64,bool&___ptr64,0>
          (pair<unsigned___int64,bool> *this,__uint64 *param_1,bool *param_2)

{
  this->first = *param_1;
  this->second = *param_2;
  return this;
}

// pair<unsigned___int64,bool><unsigned___int64&___ptr64,bool,0> @ 14fa5f510

/* public: __cdecl std::pair<unsigned __int64,bool>::pair<unsigned __int64,bool><unsigned __int64 &
   __ptr64,bool,0>(unsigned __int64 & __ptr64,bool && __ptr64) __ptr64 */

pair<unsigned___int64,bool> * __thiscall
std::pair<unsigned___int64,bool>::pair<unsigned___int64,bool><unsigned___int64&___ptr64,bool,0>
          (pair<unsigned___int64,bool> *this,__uint64 *param_1,bool *param_2)

{
  this->first = *param_1;
  this->second = *param_2;
  return this;
}

// pair<int,int><int,int&___ptr64,0> @ 14fa5f530

/* public: __cdecl std::pair<int,int>::pair<int,int><int,int & __ptr64,0>(int && __ptr64,int &
   __ptr64) __ptr64 */

pair<int,int> * __thiscall
std::pair<int,int>::pair<int,int><int,int&___ptr64,0>(pair<int,int> *this,int *param_1,int *param_2)

{
  this->first = *param_1;
  this->second = *param_2;
  return this;
}

// pair<int,bool><int,bool,0> @ 14fa5f550

/* public: __cdecl std::pair<int,bool>::pair<int,bool><int,bool,0>(int && __ptr64,bool && __ptr64)
   __ptr64 */

pair<int,bool> * __thiscall
std::pair<int,bool>::pair<int,bool><int,bool,0>(pair<int,bool> *this,int *param_1,bool *param_2)

{
  *(int *)this = *param_1;
  this[4] = (pair<int,bool>)*param_2;
  return this;
}

// pair<unsigned___int64,bool><int,bool,0> @ 14fa5f570

/* public: __cdecl std::pair<unsigned __int64,bool>::pair<unsigned __int64,bool><int,bool,0>(struct
   std::pair<int,bool> && __ptr64) __ptr64 */

pair<unsigned___int64,bool> * __thiscall
std::pair<unsigned___int64,bool>::pair<unsigned___int64,bool><int,bool,0>
          (pair<unsigned___int64,bool> *this,pair<int,bool> *param_1)

{
  this->first = (longlong)*(int *)param_1;
  this->second = (bool)param_1[4];
  return this;
}

// pair<bool,unsigned_char_const*___ptr64><bool,unsigned_char_const*___ptr64&___ptr64,0> @ 14fa5f590

/* public: __cdecl std::pair<bool,unsigned char const * __ptr64>::pair<bool,unsigned char const *
   __ptr64><bool,unsigned char const * __ptr64 & __ptr64,0>(bool && __ptr64,unsigned char const *
   __ptr64 & __ptr64) __ptr64 */

pair<bool,unsigned_char_const*___ptr64> * __thiscall
std::pair<bool,unsigned_char_const*___ptr64>::
pair<bool,unsigned_char_const*___ptr64><bool,unsigned_char_const*___ptr64&___ptr64,0>
          (pair<bool,unsigned_char_const*___ptr64> *this,bool *param_1,uchar **param_2)

{
  *this = (pair<bool,unsigned_char_const*___ptr64>)*param_1;
  *(uchar **)(this + 8) = *param_2;
  return this;
}

// pair<bool,unsigned_char_const*___ptr64><bool,unsigned_char_const*___ptr64,0> @ 14fa5f5b0

/* public: __cdecl std::pair<bool,unsigned char const * __ptr64>::pair<bool,unsigned char const *
   __ptr64><bool,unsigned char const * __ptr64,0>(bool && __ptr64,unsigned char const * __ptr64 &&
   __ptr64) __ptr64 */

pair<bool,unsigned_char_const*___ptr64> * __thiscall
std::pair<bool,unsigned_char_const*___ptr64>::
pair<bool,unsigned_char_const*___ptr64><bool,unsigned_char_const*___ptr64,0>
          (pair<bool,unsigned_char_const*___ptr64> *this,bool *param_1,uchar **param_2)

{
  *this = (pair<bool,unsigned_char_const*___ptr64>)*param_1;
  *(uchar **)(this + 8) = *param_2;
  return this;
}

// operator<<<char_[64]> @ 14fa5f5d0

/* class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::operator<<<char [64]>(class
   absl::lts_20240722::log_internal::NullStream & __ptr64,char const (& __ptr64)[64]) */

NullStream * __cdecl
absl::lts_20240722::log_internal::operator<<<char_[64]>(NullStream *param_1,char *param_2)

{
  return param_1;
}

// operator<<<67> @ 14fa5f5e0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<67>(char const (& __ptr64)[67]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<67>(LogMessage *this,char *param_1)

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

// operator<<<unsigned_int> @ 14fa5f630

/* class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::operator<<<unsigned int>(class
   absl::lts_20240722::log_internal::NullStream & __ptr64,unsigned int const & __ptr64) */

NullStream * __cdecl
absl::lts_20240722::log_internal::operator<<<unsigned_int>(NullStream *param_1,uint *param_2)

{
  return param_1;
}

// forward<unsigned_char_const*___ptr64&___ptr64> @ 14fa5fa00

/* unsigned char const * __ptr64 & __ptr64 __cdecl std::forward<unsigned char const * __ptr64 &
   __ptr64>(unsigned char const * __ptr64 & __ptr64) */

uchar ** __cdecl std::forward<unsigned_char_const*___ptr64&___ptr64>(uchar **param_1)

{
  return param_1;
}

// forward<unsigned_char_const*___ptr64> @ 14fa5fa10

/* unsigned char const * __ptr64 && __ptr64 __cdecl std::forward<unsigned char const *
   __ptr64>(unsigned char const * __ptr64 & __ptr64) */

uchar ** __cdecl std::forward<unsigned_char_const*___ptr64>(uchar **param_1)

{
  return param_1;
}

// make_pair<char*___ptr64&___ptr64,bool> @ 14fa5fa20

/* struct std::pair<char * __ptr64,bool> __cdecl std::make_pair<char * __ptr64 & __ptr64,bool>(char
   * __ptr64 & __ptr64,bool && __ptr64) */

char ** __cdecl std::make_pair<char*___ptr64&___ptr64,bool>(char **param_1,bool *param_2)

{
  undefined1 *in_R8;
  
  *param_1 = *(char **)param_2;
  *(undefined1 *)(param_1 + 1) = *in_R8;
  return param_1;
}

// make_pair<unsigned___int64&___ptr64,bool&___ptr64> @ 14fa5fa40

/* struct std::pair<unsigned __int64,bool> __cdecl std::make_pair<unsigned __int64 & __ptr64,bool &
   __ptr64>(unsigned __int64 & __ptr64,bool & __ptr64) */

pair<unsigned___int64,bool> * __cdecl
std::make_pair<unsigned___int64&___ptr64,bool&___ptr64>
          (pair<unsigned___int64,bool> *__return_storage_ptr__,__uint64 *param_1,bool *param_2)

{
  __return_storage_ptr__->first = *param_1;
  __return_storage_ptr__->second = *param_2;
  return __return_storage_ptr__;
}

// make_pair<unsigned___int64&___ptr64,bool> @ 14fa5fa60

/* struct std::pair<unsigned __int64,bool> __cdecl std::make_pair<unsigned __int64 &
   __ptr64,bool>(unsigned __int64 & __ptr64,bool && __ptr64) */

pair<unsigned___int64,bool> * __cdecl
std::make_pair<unsigned___int64&___ptr64,bool>
          (pair<unsigned___int64,bool> *__return_storage_ptr__,__uint64 *param_1,bool *param_2)

{
  __return_storage_ptr__->first = *param_1;
  __return_storage_ptr__->second = *param_2;
  return __return_storage_ptr__;
}

// make_pair<int,int&___ptr64> @ 14fa5fa80

/* struct std::pair<int,int> __cdecl std::make_pair<int,int & __ptr64>(int && __ptr64,int & __ptr64)
    */

pair<int,int> __cdecl std::make_pair<int,int&___ptr64>(int *param_1,int *param_2)

{
  int *in_R8;
  
  *param_1 = *param_2;
  param_1[1] = *in_R8;
  return (pair<int,int>)param_1;
}

// make_pair<int,bool> @ 14fa5faa0

/* struct std::pair<int,bool> __cdecl std::make_pair<int,bool>(int && __ptr64,bool && __ptr64) */

int * __cdecl std::make_pair<int,bool>(int *param_1,bool *param_2)

{
  undefined1 *in_R8;
  
  *param_1 = *(int *)param_2;
  *(undefined1 *)(param_1 + 1) = *in_R8;
  return param_1;
}

// make_pair<bool,unsigned_char_const*___ptr64&___ptr64> @ 14fa5fac0

/* struct std::pair<bool,unsigned char const * __ptr64> __cdecl std::make_pair<bool,unsigned char
   const * __ptr64 & __ptr64>(bool && __ptr64,unsigned char const * __ptr64 & __ptr64) */

bool * __cdecl
std::make_pair<bool,unsigned_char_const*___ptr64&___ptr64>(bool *param_1,uchar **param_2)

{
  undefined8 *in_R8;
  
  *param_1 = *(bool *)param_2;
  *(undefined8 *)(param_1 + 8) = *in_R8;
  return param_1;
}

// make_pair<bool,unsigned_char_const*___ptr64> @ 14fa5fae0

/* struct std::pair<bool,unsigned char const * __ptr64> __cdecl std::make_pair<bool,unsigned char
   const * __ptr64>(bool && __ptr64,unsigned char const * __ptr64 && __ptr64) */

bool * __cdecl std::make_pair<bool,unsigned_char_const*___ptr64>(bool *param_1,uchar **param_2)

{
  undefined8 *in_R8;
  
  *param_1 = *(bool *)param_2;
  *(undefined8 *)(param_1 + 8) = *in_R8;
  return param_1;
}

// ~CodedInputStream @ 14fa5fb00

/* public: __cdecl google::protobuf::io::CodedInputStream::~CodedInputStream(void) __ptr64 */

void __thiscall google::protobuf::io::CodedInputStream::~CodedInputStream(CodedInputStream *this)

{
  if ((this->input_ != (ZeroCopyInputStream *)0x0) &&
     (0 < (*(int *)&this->buffer_end_ - *(int *)&this->buffer_) + this->overflow_bytes_ +
          this->buffer_size_after_limit_)) {
    (**(code **)((longlong)*this->input_ + 0x10))();
    this->total_bytes_read_ =
         this->total_bytes_read_ +
         ((*(int *)&this->buffer_ - *(int *)&this->buffer_end_) - this->buffer_size_after_limit_);
    this->buffer_end_ = this->buffer_;
    this->buffer_size_after_limit_ = 0;
    this->overflow_bytes_ = 0;
  }
  return;
}

// ~CodedOutputStream @ 14fa5fb50

/* public: __cdecl google::protobuf::io::CodedOutputStream::~CodedOutputStream(void) __ptr64 */

void __thiscall google::protobuf::io::CodedOutputStream::~CodedOutputStream(CodedOutputStream *this)

{
  uchar *puVar1;
  ZeroCopyOutputStream *pZVar2;
  int iVar3;
  
  if ((this->impl_).had_error_ != false) {
    this->cur_ = this->cur_;
    return;
  }
  iVar3 = EpsCopyOutputStream::Flush(&this->impl_,this->cur_);
  pZVar2 = (this->impl_).stream_;
  (**(code **)((longlong)*pZVar2 + 0x10))(pZVar2,iVar3);
  puVar1 = (this->impl_).buffer_;
  (this->impl_).end_ = puVar1;
  (this->impl_).buffer_end_ = puVar1;
  this->cur_ = puVar1;
  return;
}

// BackUpInputToCurrentPosition @ 14fa5fba0

/* private: void __cdecl google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(CodedInputStream *this)

{
  if (0 < (*(int *)&this->buffer_end_ - *(int *)&this->buffer_) + this->overflow_bytes_ +
          this->buffer_size_after_limit_) {
    (**(code **)((longlong)*this->input_ + 0x10))();
    this->total_bytes_read_ =
         this->total_bytes_read_ +
         ((*(int *)&this->buffer_ - this->buffer_size_after_limit_) - *(int *)&this->buffer_end_);
    this->buffer_end_ = this->buffer_;
    this->buffer_size_after_limit_ = 0;
    this->overflow_bytes_ = 0;
  }
  return;
}

// ByteCount @ 14fa5fbf0

/* public: __int64 __cdecl google::protobuf::io::EpsCopyOutputStream::ByteCount(unsigned char *
   __ptr64)const __ptr64 */

__int64 __thiscall
google::protobuf::io::EpsCopyOutputStream::ByteCount(EpsCopyOutputStream *this,uchar *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0x10;
  if (this->buffer_end_ != (uchar *)0x0) {
    iVar3 = 0;
  }
  iVar1 = *(int *)&this->end_;
  lVar2 = (**(code **)((longlong)*this->stream_ + 0x18))();
  return lVar2 - ((iVar3 - (int)param_1) + iVar1);
}

// BytesUntilLimit @ 14fa5fc30

/* public: int __cdecl google::protobuf::io::CodedInputStream::BytesUntilLimit(void)const __ptr64 */

int __thiscall google::protobuf::io::CodedInputStream::BytesUntilLimit(CodedInputStream *this)

{
  if (this->current_limit_ == 0x7fffffff) {
    return -1;
  }
  return (((this->buffer_size_after_limit_ - this->total_bytes_read_) + *(int *)&this->buffer_end_)
         - *(int *)&this->buffer_) + this->current_limit_;
}

// BytesUntilTotalBytesLimit @ 14fa5fc60

/* public: int __cdecl google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(void)const
   __ptr64 */

int __thiscall
google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(CodedInputStream *this)

{
  if (this->total_bytes_limit_ == 0x7fffffff) {
    return -1;
  }
  return (((this->buffer_size_after_limit_ - this->total_bytes_read_) + *(int *)&this->buffer_end_)
         - *(int *)&this->buffer_) + this->total_bytes_limit_;
}

// CheckEntireMessageConsumedAndPopLimit @ 14fa5fc90

/* public: bool __cdecl
   google::protobuf::io::CodedInputStream::CheckEntireMessageConsumedAndPopLimit(int) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::CheckEntireMessageConsumedAndPopLimit
          (CodedInputStream *this,int param_1)

{
  bool bVar1;
  uchar *puVar2;
  int iVar3;
  
  puVar2 = this->buffer_end_;
  bVar1 = this->legitimate_message_end_;
  this->buffer_end_ = puVar2 + this->buffer_size_after_limit_;
  this->current_limit_ = param_1;
  if (this->total_bytes_limit_ < param_1) {
    param_1 = this->total_bytes_limit_;
  }
  if (param_1 < this->total_bytes_read_) {
    iVar3 = this->total_bytes_read_ - param_1;
    this->buffer_end_ = puVar2 + this->buffer_size_after_limit_ + -(longlong)iVar3;
    this->buffer_size_after_limit_ = iVar3;
    this->legitimate_message_end_ = false;
    return bVar1;
  }
  this->buffer_size_after_limit_ = 0;
  this->legitimate_message_end_ = false;
  return bVar1;
}

// ConsumedEntireMessage @ 14fa5fcf0

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ConsumedEntireMessage(void) __ptr64
    */

bool __thiscall
google::protobuf::io::CodedInputStream::ConsumedEntireMessage(CodedInputStream *this)

{
  return this->legitimate_message_end_;
}

// FUN_14fa5fd00 @ 14fa5fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * FUN_14fa5fd00(Cord *param_1,void *param_2)

{
  ulong64 uVar1;
  int iVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  size_t _Size;
  char *_Src;
  undefined1 auStack_f8 [32];
  basic_string_view<char,std::char_traits<char>_> local_d8;
  ChunkIterator local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(&local_c8,param_1);
  _Src = local_c8.current_chunk_._Mydata;
  _Size = local_c8.current_chunk_._Mysize;
  uVar1 = local_c8.bytes_remaining_;
  iVar2 = local_c8.btree_reader_.navigator_.height_;
  while (uVar1 != 0) {
    local_c8.bytes_remaining_ = uVar1;
    memcpy(param_2,_Src,_Size);
    param_2 = (void *)((longlong)param_2 + _Size);
    local_c8.bytes_remaining_ = uVar1 - _Size;
    uVar1 = local_c8.bytes_remaining_;
    if (local_c8.bytes_remaining_ != 0) {
      if ((iVar2 < 0) || (local_c8.btree_reader_.navigator_.node_[iVar2] == (CordRepBtree *)0x0)) {
        _Src = (char *)0x0;
        _Size = 0;
        local_c8.current_chunk_._Mydata = (char *)0x0;
        local_c8.current_chunk_._Mysize = 0;
      }
      else {
        pbVar3 = absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
                           (&local_c8.btree_reader_,&local_d8);
        _Src = pbVar3->_Mydata;
        local_c8.current_chunk_._Mysize = pbVar3->_Mysize;
        _Size = pbVar3->_Mysize;
        local_c8.current_chunk_._Mydata = _Src;
        uVar1 = local_c8.bytes_remaining_;
        iVar2 = local_c8.btree_reader_.navigator_.height_;
      }
    }
  }
  return param_2;
}

// CurrentPosition @ 14fa5fe10

/* public: int __cdecl google::protobuf::io::CodedInputStream::CurrentPosition(void)const __ptr64 */

int __thiscall google::protobuf::io::CodedInputStream::CurrentPosition(CodedInputStream *this)

{
  return ((this->total_bytes_read_ - this->buffer_size_after_limit_) - *(int *)&this->buffer_end_) +
         *(int *)&this->buffer_;
}

// DecrementRecursionDepthAndPopLimit @ 14fa5fe30

/* public: bool __cdecl
   google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(int) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit
          (CodedInputStream *this,int param_1)

{
  bool bVar1;
  uchar *puVar2;
  int iVar3;
  
  puVar2 = this->buffer_end_;
  bVar1 = this->legitimate_message_end_;
  this->current_limit_ = param_1;
  this->buffer_end_ = puVar2 + this->buffer_size_after_limit_;
  if (this->total_bytes_limit_ < param_1) {
    param_1 = this->total_bytes_limit_;
  }
  if (param_1 < this->total_bytes_read_) {
    iVar3 = this->total_bytes_read_ - param_1;
    this->buffer_end_ = puVar2 + this->buffer_size_after_limit_ + -(longlong)iVar3;
    this->buffer_size_after_limit_ = iVar3;
    this->recursion_budget_ = this->recursion_budget_ + 1;
    this->legitimate_message_end_ = false;
    return bVar1;
  }
  this->buffer_size_after_limit_ = 0;
  this->recursion_budget_ = this->recursion_budget_ + 1;
  this->legitimate_message_end_ = false;
  return bVar1;
}

// EnableAliasing @ 14fa5fe90

/* public: void __cdecl google::protobuf::io::EpsCopyOutputStream::EnableAliasing(bool) __ptr64 */

void __thiscall
google::protobuf::io::EpsCopyOutputStream::EnableAliasing(EpsCopyOutputStream *this,bool param_1)

{
  char cVar1;
  
  if (param_1) {
    cVar1 = (**(code **)((longlong)*this->stream_ + 0x28))();
    if (cVar1 != '\0') {
      this->aliasing_enabled_ = true;
      return;
    }
  }
  this->aliasing_enabled_ = false;
  return;
}

// EnsureSpaceFallback @ 14fa5fed0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(unsigned char * __ptr64) __ptr64
    */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback
          (EpsCopyOutputStream *this,uchar *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uchar *puVar5;
  longlong lVar6;
  uchar *puVar7;
  int local_res8 [2];
  uchar *local_res18 [2];
  
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
        cVar4 = (**(code **)((longlong)*this->stream_ + 8))(this->stream_,local_res18,local_res8);
        puVar5 = local_res18[0];
        if (cVar4 == '\0') goto LAB_14fa5fefb;
        lVar6 = (longlong)local_res8[0];
      } while (local_res8[0] == 0);
      puVar7 = this->end_;
      if (local_res8[0] < 0x11) {
        memmove(this->buffer_,puVar7,0x10);
        this->buffer_end_ = puVar5;
        puVar5 = this->buffer_ + lVar6;
        goto LAB_14fa5ff94;
      }
      uVar2 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)local_res18[0] = *(undefined8 *)puVar7;
      *(undefined8 *)(local_res18[0] + 8) = uVar2;
      this->buffer_end_ = (uchar *)0x0;
      puVar5 = local_res18[0] + (longlong)local_res8[0] + -0x10;
      puVar7 = local_res18[0];
    }
    param_1 = puVar7 + ((int)param_1 - iVar1);
    this->end_ = puVar5;
    if (param_1 < puVar5) {
      return param_1;
    }
    cVar4 = this->had_error_;
  } while( true );
}

// Error @ 14fa5ffe0

/* private: unsigned char * __ptr64 __cdecl google::protobuf::io::EpsCopyOutputStream::Error(void)
   __ptr64 */

uchar * __thiscall google::protobuf::io::EpsCopyOutputStream::Error(EpsCopyOutputStream *this)

{
  this->had_error_ = true;
  this->end_ = this->buffer_ + 0x10;
  return this->buffer_;
}

// Flush @ 14fa60000

/* private: int __cdecl google::protobuf::io::EpsCopyOutputStream::Flush(unsigned char * __ptr64)
   __ptr64 */

int __thiscall
google::protobuf::io::EpsCopyOutputStream::Flush(EpsCopyOutputStream *this,uchar *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  char cVar3;
  uchar *puVar4;
  int iVar5;
  longlong lVar6;
  uchar *_Src;
  int local_res8 [2];
  uchar *local_res18;
  
  puVar4 = this->buffer_end_;
  do {
    iVar5 = (int)param_1;
    if (puVar4 == (uchar *)0x0) {
      iVar5 = (*(int *)&this->end_ - iVar5) + 0x10;
LAB_14fa600f2:
      this->buffer_end_ = param_1;
      return iVar5;
    }
    puVar1 = this->end_;
    _Src = this->buffer_;
    if (param_1 <= puVar1) {
      memcpy(puVar4,_Src,(size_t)(param_1 + (-0x10 - (longlong)this)));
      iVar5 = *(int *)&this->end_ - iVar5;
      param_1 = param_1 + (longlong)(this->buffer_end_ + (-0x10 - (longlong)this));
      goto LAB_14fa600f2;
    }
    if (this->stream_ == (ZeroCopyOutputStream *)0x0) {
LAB_14fa600c7:
      puVar4 = this->buffer_ + 0x10;
      this->had_error_ = true;
    }
    else {
      memcpy(puVar4,_Src,(size_t)(puVar1 + (-0x10 - (longlong)this)));
      do {
        cVar3 = (**(code **)((longlong)*this->stream_ + 8))(this->stream_,&local_res18,local_res8);
        puVar4 = local_res18;
        if (cVar3 == '\0') goto LAB_14fa600c7;
        lVar6 = (longlong)local_res8[0];
      } while (local_res8[0] == 0);
      if (local_res8[0] < 0x11) {
        memmove(_Src,this->end_,0x10);
        this->buffer_end_ = puVar4;
        puVar4 = this->buffer_ + lVar6;
      }
      else {
        uVar2 = *(undefined8 *)(this->end_ + 8);
        *(undefined8 *)local_res18 = *(undefined8 *)this->end_;
        *(undefined8 *)(local_res18 + 8) = uVar2;
        this->buffer_end_ = (uchar *)0x0;
        puVar4 = local_res18 + (longlong)local_res8[0] + -0x10;
        _Src = local_res18;
      }
    }
    param_1 = _Src + (iVar5 - (int)puVar1);
    this->end_ = puVar4;
    if (this->had_error_ != false) {
      return 0;
    }
    puVar4 = this->buffer_end_;
  } while( true );
}

// FlushAndResetBuffer @ 14fa60140

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::FlushAndResetBuffer(unsigned char * __ptr64) __ptr64
    */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::FlushAndResetBuffer
          (EpsCopyOutputStream *this,uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  if (this->had_error_ == false) {
    iVar2 = Flush(this,param_1);
    if (this->had_error_ == false) {
      puVar1 = this->buffer_end_;
      if (0x10 < iVar2) {
        this->end_ = puVar1 + (longlong)iVar2 + -0x10;
        this->buffer_end_ = (uchar *)0x0;
        return puVar1;
      }
      this->end_ = this->buffer_ + iVar2;
      this->buffer_end_ = puVar1;
      return this->buffer_;
    }
  }
  return this->buffer_;
}

// GetDirectBufferForNBytesAndAdvance @ 14fa601b0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::GetDirectBufferForNBytesAndAdvance(int,unsigned char *
   __ptr64 * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::GetDirectBufferForNBytesAndAdvance
          (EpsCopyOutputStream *this,int param_1,uchar **param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  
  if (this->had_error_ == false) {
    iVar3 = Flush(this,*param_2);
    if (this->had_error_ == false) {
      puVar2 = this->buffer_end_;
      if (iVar3 < param_1) {
        if (0x10 < iVar3) {
          this->end_ = puVar2 + (longlong)iVar3 + -0x10;
          this->buffer_end_ = (uchar *)0x0;
          *param_2 = puVar2;
          return (uchar *)0x0;
        }
        this->end_ = this->buffer_ + iVar3;
        this->buffer_end_ = puVar2;
        *param_2 = this->buffer_;
        return (uchar *)0x0;
      }
      iVar3 = iVar3 - param_1;
      puVar1 = puVar2 + param_1;
      if (0x10 < iVar3) {
        this->end_ = puVar1 + (longlong)iVar3 + -0x10;
        this->buffer_end_ = (uchar *)0x0;
        *param_2 = puVar1;
        return puVar2;
      }
      this->end_ = this->buffer_ + iVar3;
      this->buffer_end_ = puVar1;
      *param_2 = this->buffer_;
      return puVar2;
    }
  }
  *param_2 = this->buffer_;
  return (uchar *)0x0;
}

// GetDirectBufferPointer @ 14fa602c0

/* public: bool __cdecl google::protobuf::io::CodedInputStream::GetDirectBufferPointer(void const *
   __ptr64 * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::GetDirectBufferPointer
          (CodedInputStream *this,void **param_1,int *param_2)

{
  bool bVar1;
  
  if (*(int *)&this->buffer_end_ == *(int *)&this->buffer_) {
    bVar1 = Refresh(this);
    if (!bVar1) {
      return false;
    }
  }
  *param_1 = this->buffer_;
  *param_2 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
  return true;
}

// GetDirectBufferPointer @ 14fa60320

/* private: bool __cdecl google::protobuf::io::EpsCopyOutputStream::GetDirectBufferPointer(void *
   __ptr64 * __ptr64,int * __ptr64,unsigned char * __ptr64 * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::EpsCopyOutputStream::GetDirectBufferPointer
          (EpsCopyOutputStream *this,void **param_1,int *param_2,uchar **param_3)

{
  uchar *puVar1;
  char cVar2;
  int iVar3;
  
  if (this->had_error_ == false) {
    iVar3 = Flush(this,*param_3);
    *param_2 = iVar3;
    if (this->had_error_ == false) {
      *param_1 = this->buffer_end_;
      iVar3 = *param_2;
      while( true ) {
        if (iVar3 != 0) {
          puVar1 = *param_1;
          if (0x10 < iVar3) {
            this->end_ = puVar1 + (longlong)iVar3 + -0x10;
            this->buffer_end_ = (uchar *)0x0;
            *param_3 = puVar1;
            return true;
          }
          this->end_ = this->buffer_ + iVar3;
          this->buffer_end_ = puVar1;
          *param_3 = this->buffer_;
          return true;
        }
        cVar2 = (**(code **)((longlong)*this->stream_ + 8))(this->stream_,param_1,param_2);
        if (cVar2 == '\0') break;
        iVar3 = *param_2;
      }
      this->had_error_ = true;
      this->end_ = this->buffer_ + 0x10;
    }
  }
  *param_3 = this->buffer_;
  return false;
}

// GetSize @ 14fa60400

/* private: __int64 __cdecl google::protobuf::io::EpsCopyOutputStream::GetSize(unsigned char *
   __ptr64)const __ptr64 */

__int64 __thiscall
google::protobuf::io::EpsCopyOutputStream::GetSize(EpsCopyOutputStream *this,uchar *param_1)

{
  return (__int64)(this->end_ + (0x10 - (longlong)param_1));
}

// IncrementRecursionDepthAndPushLimit @ 14fa60420

/* public: struct std::pair<int,int> __cdecl
   google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(int) __ptr64 */

pair<int,int> __thiscall
google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit
          (CodedInputStream *this,int param_1)

{
  int iVar1;
  pair<int,int> pVar2;
  int iVar3;
  int in_register_00000014;
  int in_R8D;
  
  this->recursion_budget_ = this->recursion_budget_ + -1;
  pVar2.second = in_register_00000014;
  pVar2.first = param_1;
  iVar1 = this->current_limit_;
  if (((-1 < in_R8D) &&
      (iVar3 = ((this->total_bytes_read_ - this->buffer_size_after_limit_) -
               *(int *)&this->buffer_end_) + *(int *)&this->buffer_, in_R8D <= 0x7fffffff - iVar3))
     && (in_R8D < iVar1 - iVar3)) {
    this->current_limit_ = iVar3 + in_R8D;
    RecomputeBufferLimits(this);
  }
  *(int *)((longlong)pVar2 + 4) = this->recursion_budget_;
  *(int *)pVar2 = iVar1;
  return pVar2;
}

// Next @ 14fa60490

/* private: unsigned char * __ptr64 __cdecl google::protobuf::io::EpsCopyOutputStream::Next(void)
   __ptr64 */

uchar * __thiscall google::protobuf::io::EpsCopyOutputStream::Next(EpsCopyOutputStream *this)

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int local_res8 [2];
  uchar *local_res10;
  
  if (this->stream_ == (ZeroCopyOutputStream *)0x0) {
LAB_14fa60562:
    this->had_error_ = true;
  }
  else {
    if (this->buffer_end_ != (uchar *)0x0) {
      memcpy(this->buffer_end_,this->buffer_,(size_t)(this->end_ + (-0x10 - (longlong)this)));
      do {
        cVar4 = (**(code **)((longlong)*this->stream_ + 8))(this->stream_,&local_res10,local_res8);
        if (cVar4 == '\0') goto LAB_14fa60562;
      } while (local_res8[0] == 0);
      puVar1 = this->end_;
      if (0x10 < local_res8[0]) {
        uVar2 = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)local_res10 = *(undefined8 *)puVar1;
        *(undefined8 *)(local_res10 + 8) = uVar2;
        this->buffer_end_ = (uchar *)0x0;
        this->end_ = local_res10 + (longlong)local_res8[0] + -0x10;
        return local_res10;
      }
      memmove(this->buffer_,puVar1,0x10);
      this->buffer_end_ = local_res10;
      this->end_ = this->buffer_ + local_res8[0];
      goto LAB_14fa6056d;
    }
    puVar1 = this->end_;
    uVar2 = *(undefined8 *)puVar1;
    uVar3 = *(undefined8 *)(puVar1 + 8);
    this->buffer_end_ = puVar1;
    *(undefined8 *)this->buffer_ = uVar2;
    *(undefined8 *)(this->buffer_ + 8) = uVar3;
  }
  this->end_ = this->buffer_ + 0x10;
LAB_14fa6056d:
  return this->buffer_;
}

// FUN_14fa60590 @ 14fa60590

void FUN_14fa60590(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  do {
    cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return;
    }
  } while (*param_3 == 0);
  return;
}

// PopLimit @ 14fa605e0

/* public: void __cdecl google::protobuf::io::CodedInputStream::PopLimit(int) __ptr64 */

void __thiscall google::protobuf::io::CodedInputStream::PopLimit(CodedInputStream *this,int param_1)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = this->buffer_end_;
  this->current_limit_ = param_1;
  this->buffer_end_ = puVar1 + this->buffer_size_after_limit_;
  if (this->total_bytes_limit_ < param_1) {
    param_1 = this->total_bytes_limit_;
  }
  if (param_1 < this->total_bytes_read_) {
    iVar2 = this->total_bytes_read_ - param_1;
    this->buffer_end_ = puVar1 + this->buffer_size_after_limit_ + -(longlong)iVar2;
    this->buffer_size_after_limit_ = iVar2;
    this->legitimate_message_end_ = false;
    return;
  }
  this->buffer_size_after_limit_ = 0;
  this->legitimate_message_end_ = false;
  return;
}

// PrintTotalBytesLimitError @ 14fa60630

/* private: void __cdecl google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(CodedInputStream *this)

{
  LogMessage *pLVar1;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessage local_18;
  
  pLVar1 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessage::LogMessage
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                      ,0xbf,(ErrorTag)0x0);
  local_28._Mydata = "A protocol message was rejected because it was too big (more than ";
  local_28._Mysize = 0x42;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar1,&local_28);
  local_res10[0] = this->total_bytes_limit_;
  pLVar1 = absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(pLVar1,local_res10);
  local_28._Mydata =
       " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/io/coded_stream.h."
  ;
  local_28._Mysize = 0x95;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar1,&local_28);
  absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_18);
  return;
}

// PushLimit @ 14fa60700

/* public: int __cdecl google::protobuf::io::CodedInputStream::PushLimit(int) __ptr64 */

int __thiscall google::protobuf::io::CodedInputStream::PushLimit(CodedInputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->current_limit_;
  if (((-1 < param_1) &&
      (iVar2 = ((this->total_bytes_read_ - this->buffer_size_after_limit_) -
               *(int *)&this->buffer_end_) + *(int *)&this->buffer_, param_1 <= 0x7fffffff - iVar2))
     && (param_1 < iVar1 - iVar2)) {
    this->current_limit_ = iVar2 + param_1;
    RecomputeBufferLimits(this);
  }
  return iVar1;
}

// ReadCord @ 14fa60750

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadCord(class
   absl::lts_20240722::Cord * __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadCord(CodedInputStream *this,Cord *param_1,int param_2)

{
  ZeroCopyInputStream *pZVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2 < 0) {
    absl::lts_20240722::Cord::Clear(param_1);
    return false;
  }
  if ((this->input_ == (ZeroCopyInputStream *)0x0) || (param_2 < 0x200)) {
    iVar3 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
    local_18._Mydata = (char *)this->buffer_;
    iVar4 = param_2;
    if (iVar3 < param_2) {
      iVar4 = iVar3;
    }
    local_18._Mysize = (longlong)iVar4;
    absl::lts_20240722::Cord::operator=(param_1,&local_18);
    this->buffer_ = this->buffer_ + iVar4;
    param_2 = param_2 - iVar4;
    if (param_2 == 0) {
      return true;
    }
    if (this->input_ == (ZeroCopyInputStream *)0x0) {
      return false;
    }
    if (0 < this->buffer_size_after_limit_ + this->overflow_bytes_) {
      return false;
    }
  }
  else {
    absl::lts_20240722::Cord::Clear(param_1);
    BackUpInputToCurrentPosition(this);
  }
  iVar4 = this->current_limit_;
  if (this->total_bytes_limit_ < this->current_limit_) {
    iVar4 = this->total_bytes_limit_;
  }
  pZVar1 = this->input_;
  if (param_2 <= iVar4 - this->total_bytes_read_) {
    this->total_bytes_read_ = this->total_bytes_read_ + param_2;
                    /* WARNING: Could not recover jumptable at 0x00014fa6087e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pZVar1 + 0x28))(pZVar1,param_1,param_2);
    return (bool)uVar2;
  }
  this->total_bytes_read_ = iVar4;
  (**(code **)((longlong)*pZVar1 + 0x28))(pZVar1,param_1);
  return false;
}

// ReadLengthAndPushLimit @ 14fa60890

/* public: int __cdecl google::protobuf::io::CodedInputStream::ReadLengthAndPushLimit(void) __ptr64
    */

int __thiscall
google::protobuf::io::CodedInputStream::ReadLengthAndPushLimit(CodedInputStream *this)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  pair<unsigned___int64,bool> local_18;
  
  pbVar1 = this->buffer_;
  uVar8 = 0;
  pbVar5 = this->buffer_end_;
  if (pbVar1 < pbVar5) {
    bVar2 = *pbVar1;
    uVar7 = (ulonglong)bVar2;
    uVar8 = (uint)bVar2;
    if (bVar2 < 0x80) {
      this->buffer_ = pbVar1 + 1;
      bVar2 = 1;
      goto LAB_14fa6098e;
    }
  }
  if (((int)pbVar5 - (int)pbVar1 < 10) && ((pbVar5 <= pbVar1 || ((char)pbVar5[-1] < '\0')))) {
    ReadVarint64Fallback(this,&local_18);
    if (local_18.second == false) {
LAB_14fa60976:
      uVar7 = 0xffffffffffffffff;
    }
    else {
      uVar7 = (ulonglong)(uint)local_18.first;
    }
  }
  else {
    pbVar5 = pbVar1 + 2;
    uVar8 = (uint)pbVar1[1] * 0x80 + -0x80 + uVar8;
    if ((char)pbVar1[1] < '\0') {
      bVar2 = *pbVar5;
      pbVar5 = pbVar1 + 3;
      uVar8 = uVar8 + (uint)bVar2 * 0x4000 + -0x4000;
      if ((char)bVar2 < '\0') {
        bVar2 = *pbVar5;
        pbVar5 = pbVar1 + 4;
        uVar8 = (bVar2 + 0x7ff) * 0x200000 + uVar8;
        if ((char)bVar2 < '\0') {
          bVar2 = *pbVar5;
          pbVar5 = pbVar1 + 5;
          uVar8 = uVar8 + (bVar2 + 0xf) * 0x10000000;
          if ((char)bVar2 < '\0') {
            iVar4 = 0;
            do {
              bVar2 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              if (-1 < (char)bVar2) goto LAB_14fa6097f;
              iVar4 = iVar4 + 1;
            } while (iVar4 < 5);
            goto LAB_14fa60976;
          }
        }
      }
    }
LAB_14fa6097f:
    this->buffer_ = pbVar5;
    uVar7 = (ulonglong)uVar8;
  }
  bVar2 = (byte)(uVar7 >> 0x3f) ^ 1;
LAB_14fa6098e:
  iVar4 = this->current_limit_;
  iVar6 = 0;
  if (bVar2 != 0) {
    iVar6 = (int)uVar7;
  }
  iVar3 = ((this->total_bytes_read_ - this->buffer_size_after_limit_) - *(int *)&this->buffer_end_)
          + *(int *)&this->buffer_;
  if (((-1 < iVar6) && (iVar6 <= 0x7fffffff - iVar3)) && (iVar6 < iVar4 - iVar3)) {
    this->current_limit_ = iVar3 + iVar6;
    RecomputeBufferLimits(this);
  }
  return iVar4;
}

// ReadLittleEndian16Fallback @ 14fa609e0

/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian16Fallback(unsigned
   short * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian16Fallback
          (CodedInputStream *this,ushort *param_1)

{
  ushort *puVar1;
  bool bVar2;
  ushort local_res8 [16];
  
  if (1 < *(int *)&this->buffer_end_ - *(int *)&this->buffer_) {
    puVar1 = (ushort *)this->buffer_;
    this->buffer_ = (uchar *)(puVar1 + 1);
    *param_1 = *puVar1;
    return true;
  }
  bVar2 = ReadRaw(this,local_res8,2);
  if (!bVar2) {
    return false;
  }
  *param_1 = local_res8[0];
  return true;
}

// ReadLittleEndian16FromArray @ 14fa60a40

/* public: static unsigned char const * __ptr64 __cdecl
   google::protobuf::io::CodedInputStream::ReadLittleEndian16FromArray(unsigned char const *
   __ptr64,unsigned short * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedInputStream::ReadLittleEndian16FromArray(uchar *param_1,ushort *param_2)

{
  *param_2 = *(ushort *)param_1;
  return param_1 + 2;
}

// ReadLittleEndian32Fallback @ 14fa60a60

/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(unsigned
   int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
          (CodedInputStream *this,uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint local_res8 [8];
  
  if (3 < *(int *)&this->buffer_end_ - *(int *)&this->buffer_) {
    puVar1 = (uint *)this->buffer_;
    this->buffer_ = (uchar *)(puVar1 + 1);
    *param_1 = *puVar1;
    return true;
  }
  bVar2 = ReadRaw(this,local_res8,4);
  if (!bVar2) {
    return false;
  }
  *param_1 = local_res8[0];
  return true;
}

// ReadLittleEndian32FromArray @ 14fa60ac0

/* public: static unsigned char const * __ptr64 __cdecl
   google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray(unsigned char const *
   __ptr64,unsigned int * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray(uchar *param_1,uint *param_2)

{
  *param_2 = *(uint *)param_1;
  return param_1 + 4;
}

// ReadLittleEndian64Fallback @ 14fa60ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(unsigned
   __int64 * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback
          (CodedInputStream *this,__uint64 *param_1)

{
  bool bVar1;
  __uint64 *p_Var2;
  undefined1 auStack_38 [32];
  __uint64 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (*(int *)&this->buffer_end_ - *(int *)&this->buffer_ < 8) {
    bVar1 = ReadRaw(this,&local_18,8);
    if (!bVar1) {
      return false;
    }
    p_Var2 = &local_18;
  }
  else {
    p_Var2 = (__uint64 *)this->buffer_;
    this->buffer_ = (uchar *)(p_Var2 + 1);
  }
  *param_1 = *p_Var2;
  return true;
}

// ReadLittleEndian64FromArray @ 14fa60b50

/* public: static unsigned char const * __ptr64 __cdecl
   google::protobuf::io::CodedInputStream::ReadLittleEndian64FromArray(unsigned char const *
   __ptr64,unsigned __int64 * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedInputStream::ReadLittleEndian64FromArray
          (uchar *param_1,__uint64 *param_2)

{
  *param_2 = *(__uint64 *)param_1;
  return param_1 + 8;
}

// ReadRaw @ 14fa60b70

/* WARNING: Removing unreachable block (ram,0x00014fa60ca9) */
/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadRaw(void * __ptr64,int) __ptr64
    */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadRaw(CodedInputStream *this,void *param_1,int param_2)

{
  int *piVar1;
  ZeroCopyInputStream *pZVar2;
  char cVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  LogMessage *pLVar5;
  size_t _Size;
  int iVar6;
  int local_res18 [2];
  int local_res20 [2];
  uchar *local_88 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_78;
  ulong64 uStack_70;
  basic_string_view<char,std::char_traits<char>_> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58;
  LogMessage local_48;
  
  iVar6 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
  if (iVar6 < param_2) {
    do {
      _Size = (size_t)iVar6;
      memcpy(param_1,this->buffer_,_Size);
      param_1 = (void *)((longlong)param_1 + _Size);
      param_2 = param_2 - iVar6;
      this->buffer_ = this->buffer_ + _Size;
      if (((0 < this->buffer_size_after_limit_) || (0 < this->overflow_bytes_)) ||
         (piVar1 = &this->total_bytes_read_, *piVar1 == this->current_limit_)) {
        if ((this->total_bytes_limit_ <= this->total_bytes_read_ - this->buffer_size_after_limit_)
           && (this->total_bytes_limit_ != this->current_limit_)) {
          pLVar5 = (LogMessage *)
                   absl::lts_20240722::log_internal::LogMessage::LogMessage
                             (&local_48,
                              "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                              ,0xbf,(ErrorTag)0x0);
          local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535d6b70;
          uStack_70 = 0x42;
          local_58._Mydata = "A protocol message was rejected because it was too big (more than ";
          local_58._Mysize = 0x42;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_58);
          local_res20[0] = this->total_bytes_limit_;
          pLVar5 = absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>
                             (pLVar5,local_res20);
          local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535d6bc0;
          uStack_70 = 0x95;
          local_58._Mydata =
               " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/io/coded_stream.h."
          ;
          local_58._Mysize = 0x95;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_58);
          absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_48);
        }
        return false;
      }
      pZVar2 = this->input_;
      do {
        cVar3 = (**(code **)((longlong)*pZVar2 + 8))(pZVar2,local_88,local_res18);
        if (cVar3 == '\0') {
          this->buffer_ = (uchar *)0x0;
          this->buffer_end_ = (uchar *)0x0;
          return false;
        }
      } while (local_res18[0] == 0);
      this->buffer_ = local_88[0];
      this->buffer_end_ = local_88[0] + local_res18[0];
      if ((local_res18[0] < 0) &&
         (pbVar4 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                             ((longlong)local_res18[0],0,"buffer_size >= 0"),
         pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
        local_78 = pbVar4;
        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
          local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        uStack_70 = (pbVar4->_Mypair)._Myval2._Mysize;
        local_68._Mydata = (char *)local_78;
        local_68._Mysize = uStack_70;
        absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                  ((LogMessageFatal *)&local_58,
                   "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                   ,0x2b7,&local_68);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                  ((LogMessageFatal *)&local_58);
      }
      iVar6 = *piVar1;
      if (0x7fffffff - local_res18[0] < iVar6) {
        iVar6 = iVar6 + -0x7fffffff + local_res18[0];
        this->overflow_bytes_ = iVar6;
        this->buffer_end_ = this->buffer_end_ + -(longlong)iVar6;
        iVar6 = 0x7fffffff;
      }
      else {
        iVar6 = iVar6 + local_res18[0];
      }
      *piVar1 = iVar6;
      RecomputeBufferLimits(this);
      iVar6 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
    } while (iVar6 < param_2);
  }
  memcpy(param_1,this->buffer_,(longlong)param_2);
  this->buffer_ = this->buffer_ + param_2;
  return true;
}

// ReadString @ 14fa60e20

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadString
          (CodedInputStream *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  bool bVar1;
  ulong64 _Size;
  
  if (param_2 < 0) {
    return false;
  }
  if (param_2 <= *(int *)&this->buffer_end_ - *(int *)&this->buffer_) {
    _Size = (ulong64)param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_1,_Size,'\0')
    ;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    memcpy(param_1,this->buffer_,_Size);
    this->buffer_ = this->buffer_ + _Size;
    return true;
  }
  bVar1 = ReadStringFallback(this,param_1,param_2);
  return bVar1;
}

// ReadStringFallback @ 14fa60eb0

/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadStringFallback(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadStringFallback
          (CodedInputStream *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  char *_Dst;
  ulong64 uVar1;
  ulonglong uVar2;
  uchar *_Src;
  bool bVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulonglong _Size;
  ulonglong uVar6;
  <lambda_1> local_res18;
  
  uVar6 = (ulonglong)param_2;
  if ((param_1->_Mypair)._Myval2._Mysize != 0) {
    pbVar5 = param_1;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (pbVar5->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  iVar4 = this->current_limit_;
  if (this->total_bytes_limit_ < this->current_limit_) {
    iVar4 = this->total_bytes_limit_;
  }
  if ((((iVar4 != 0x7fffffff) &&
       (iVar4 = (((this->buffer_size_after_limit_ - this->total_bytes_read_) +
                 *(int *)&this->buffer_end_) - *(int *)&this->buffer_) + iVar4, 0 < iVar4)) &&
      (0 < param_2)) && ((param_2 <= iVar4 && ((param_1->_Mypair)._Myval2._Myres < uVar6)))) {
    uVar1 = (param_1->_Mypair)._Myval2._Mysize;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
              (param_1,uVar6 - uVar1,local_res18);
    (param_1->_Mypair)._Myval2._Mysize = uVar1;
  }
  iVar4 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
  if (iVar4 < param_2) {
    do {
      if (iVar4 != 0) {
        uVar2 = (param_1->_Mypair)._Myval2._Myres;
        uVar1 = (param_1->_Mypair)._Myval2._Mysize;
        _Src = this->buffer_;
        _Size = (ulonglong)iVar4;
        if (uVar2 - uVar1 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (param_1,_Size,local_res18,(char *)_Src,_Size);
        }
        else {
          (param_1->_Mypair)._Myval2._Mysize = uVar1 + _Size;
          pbVar5 = param_1;
          if (0xf < uVar2) {
            pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          _Dst = (pbVar5->_Mypair)._Myval2._Bx._Buf + uVar1;
          memmove(_Dst,_Src,_Size);
          _Dst[_Size] = '\0';
        }
      }
      this->buffer_ = this->buffer_ + iVar4;
      param_2 = (int)uVar6 - iVar4;
      uVar6 = (ulonglong)(uint)param_2;
      bVar3 = Refresh(this);
      if (!bVar3) {
        return false;
      }
      iVar4 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
    } while (iVar4 < param_2);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(char *)this->buffer_,(longlong)param_2);
  this->buffer_ = this->buffer_ + param_2;
  return true;
}

// ReadTagFallback @ 14fa61010

/* private: unsigned int __cdecl google::protobuf::io::CodedInputStream::ReadTagFallback(unsigned
   int) __ptr64 */

uint __thiscall
google::protobuf::io::CodedInputStream::ReadTagFallback(CodedInputStream *this,uint param_1)

{
  uchar **ppuVar1;
  byte bVar2;
  uchar *puVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  pair<unsigned___int64,bool> local_18;
  
  ppuVar1 = &this->buffer_end_;
  iVar5 = *(int *)&this->buffer_end_ - *(int *)&this->buffer_;
  if (iVar5 < 10) {
    if (iVar5 < 1) {
      if ((*(int *)&this->buffer_end_ == *(int *)&this->buffer_) &&
         (((0 < this->buffer_size_after_limit_ || (this->total_bytes_read_ == this->current_limit_))
          && (this->total_bytes_read_ - this->buffer_size_after_limit_ < this->total_bytes_limit_)))
         ) {
        this->legitimate_message_end_ = true;
        return 0;
      }
    }
    else if (-1 < (char)(*ppuVar1)[-1]) goto LAB_14fa61107;
    if (this->buffer_ == *ppuVar1) {
      bVar4 = Refresh(this);
      if (!bVar4) {
        if (this->total_bytes_limit_ <= this->total_bytes_read_ - this->buffer_size_after_limit_) {
          this->legitimate_message_end_ = this->current_limit_ == this->total_bytes_limit_;
          return 0;
        }
        this->legitimate_message_end_ = true;
        return 0;
      }
    }
    pbVar6 = this->buffer_;
    if ((pbVar6 < *ppuVar1) && (bVar2 = *pbVar6, bVar2 < 0x80)) {
      this->buffer_ = pbVar6 + 1;
      return (uint)bVar2;
    }
    ReadVarint64Fallback(this,&local_18);
    if (local_18.second == false) {
      local_18.first._0_4_ = 0;
    }
    return (uint)local_18.first;
  }
LAB_14fa61107:
  puVar3 = this->buffer_;
  if (param_1 == 0) {
    this->buffer_ = puVar3 + 1;
    return 0;
  }
  bVar2 = puVar3[1];
  pbVar6 = puVar3 + 2;
  uVar7 = (param_1 - 0x80) + (uint)bVar2 * 0x80;
  if ((char)bVar2 < '\0') {
    bVar2 = *pbVar6;
    pbVar6 = puVar3 + 3;
    uVar7 = (uVar7 - 0x4000) + (uint)bVar2 * 0x4000;
    if ((char)bVar2 < '\0') {
      bVar2 = *pbVar6;
      pbVar6 = puVar3 + 4;
      uVar7 = (bVar2 + 0x7ff) * 0x200000 + uVar7;
      if ((char)bVar2 < '\0') {
        bVar2 = *pbVar6;
        pbVar6 = puVar3 + 5;
        uVar7 = uVar7 + (bVar2 + 0xf) * 0x10000000;
        if ((char)bVar2 < '\0') {
          iVar5 = 0;
          while (bVar2 = *pbVar6, pbVar6 = pbVar6 + 1, (char)bVar2 < '\0') {
            iVar5 = iVar5 + 1;
            if (4 < iVar5) {
              return 0;
            }
          }
        }
      }
    }
  }
  this->buffer_ = pbVar6;
  return uVar7;
}

// ReadTagSlow @ 14fa611c0

/* private: unsigned int __cdecl google::protobuf::io::CodedInputStream::ReadTagSlow(void) __ptr64
    */

uint __thiscall google::protobuf::io::CodedInputStream::ReadTagSlow(CodedInputStream *this)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  pair<unsigned___int64,bool> local_18;
  
  if ((this->buffer_ == this->buffer_end_) && (bVar3 = Refresh(this), !bVar3)) {
    if (this->total_bytes_read_ - this->buffer_size_after_limit_ < this->total_bytes_limit_) {
      this->legitimate_message_end_ = true;
      return 0;
    }
    this->legitimate_message_end_ = this->current_limit_ == this->total_bytes_limit_;
    return 0;
  }
  pbVar2 = this->buffer_;
  if ((pbVar2 < this->buffer_end_) && (bVar1 = *pbVar2, bVar1 < 0x80)) {
    this->buffer_ = pbVar2 + 1;
    return (uint)bVar1;
  }
  ReadVarint64Fallback(this,&local_18);
  if (local_18.second == false) {
    return 0;
  }
  return (uint)local_18.first;
}

// ReadVarint32 @ 14fa61250

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadVarint32(unsigned int * __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadVarint32(CodedInputStream *this,uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  pair<unsigned___int64,bool> local_18;
  
  iVar4 = 0;
  pbVar2 = this->buffer_;
  pbVar3 = this->buffer_end_;
  uVar5 = 0;
  if ((pbVar2 < pbVar3) && (uVar5 = (uint)*pbVar2, uVar5 < 0x80)) {
    *param_1 = uVar5;
    this->buffer_ = this->buffer_ + 1;
    return true;
  }
  if (((int)pbVar3 - (int)pbVar2 < 10) && ((pbVar3 <= pbVar2 || ((char)pbVar3[-1] < '\0')))) {
    ReadVarint64Fallback(this,&local_18);
    if (local_18.second != false) {
      *param_1 = (uint)local_18.first;
      return true;
    }
LAB_14fa61343:
    *param_1 = 0xffffffff;
    return false;
  }
  pbVar3 = pbVar2 + 2;
  uVar5 = uVar5 + (uint)pbVar2[1] * 0x80 + -0x80;
  if ((char)pbVar2[1] < '\0') {
    bVar1 = *pbVar3;
    pbVar3 = pbVar2 + 3;
    uVar5 = uVar5 + (uint)bVar1 * 0x4000 + -0x4000;
    if ((char)bVar1 < '\0') {
      bVar1 = *pbVar3;
      pbVar3 = pbVar2 + 4;
      uVar5 = (bVar1 + 0x7ff) * 0x200000 + uVar5;
      if ((char)bVar1 < '\0') {
        bVar1 = *pbVar3;
        pbVar3 = pbVar2 + 5;
        uVar5 = uVar5 + (bVar1 + 0xf) * 0x10000000;
        if ((char)bVar1 < '\0') {
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            if (-1 < (char)bVar1) goto LAB_14fa61358;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 5);
          goto LAB_14fa61343;
        }
      }
    }
  }
LAB_14fa61358:
  this->buffer_ = pbVar3;
  *param_1 = uVar5;
  return true;
}

// ReadVarint32Fallback @ 14fa61380

/* private: __int64 __cdecl google::protobuf::io::CodedInputStream::ReadVarint32Fallback(unsigned
   int) __ptr64 */

__int64 __thiscall
google::protobuf::io::CodedInputStream::ReadVarint32Fallback(CodedInputStream *this,uint param_1)

{
  byte bVar1;
  uchar *puVar2;
  int iVar3;
  byte *pbVar4;
  pair<unsigned___int64,bool> local_18;
  
  if ((*(int *)&this->buffer_end_ - *(int *)&this->buffer_ < 10) &&
     ((this->buffer_end_ <= this->buffer_ || ((char)this->buffer_end_[-1] < '\0')))) {
    ReadVarint64Fallback(this,&local_18);
    if (local_18.second == false) {
      return -1;
    }
  }
  else {
    puVar2 = this->buffer_;
    pbVar4 = puVar2 + 2;
    local_18.first._0_4_ = (param_1 - 0x80) + (uint)puVar2[1] * 0x80;
    if ((char)puVar2[1] < '\0') {
      bVar1 = *pbVar4;
      pbVar4 = puVar2 + 3;
      local_18.first._0_4_ = ((uint)local_18.first - 0x4000) + (uint)bVar1 * 0x4000;
      if ((char)bVar1 < '\0') {
        bVar1 = *pbVar4;
        pbVar4 = puVar2 + 4;
        local_18.first._0_4_ = (bVar1 + 0x7ff) * 0x200000 + (uint)local_18.first;
        if ((char)bVar1 < '\0') {
          bVar1 = *pbVar4;
          pbVar4 = puVar2 + 5;
          local_18.first._0_4_ = (uint)local_18.first + (bVar1 + 0xf) * 0x10000000;
          if ((char)bVar1 < '\0') {
            iVar3 = 0;
            while (bVar1 = *pbVar4, pbVar4 = pbVar4 + 1, (char)bVar1 < '\0') {
              iVar3 = iVar3 + 1;
              if (4 < iVar3) {
                return -1;
              }
            }
          }
        }
      }
    }
    this->buffer_ = pbVar4;
  }
  return (ulonglong)(uint)local_18.first;
}

// FUN_14fa61460 @ 14fa61460

undefined1 * FUN_14fa61460(undefined1 *param_1,int param_2,longlong param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(param_3 + 2);
  param_2 = (uint)*(byte *)(param_3 + 1) * 0x80 + -0x80 + param_2;
  if ((char)*(byte *)(param_3 + 1) < '\0') {
    bVar1 = *pbVar2;
    pbVar2 = (byte *)(param_3 + 3);
    param_2 = param_2 + (uint)bVar1 * 0x4000 + -0x4000;
    if ((char)bVar1 < '\0') {
      bVar1 = *pbVar2;
      pbVar2 = (byte *)(param_3 + 4);
      param_2 = (bVar1 + 0x7ff) * 0x200000 + param_2;
      if ((char)bVar1 < '\0') {
        bVar1 = *pbVar2;
        pbVar2 = (byte *)(param_3 + 5);
        param_2 = param_2 + (bVar1 + 0xf) * 0x10000000;
        if ((char)bVar1 < '\0') {
          iVar3 = 0;
          while (bVar1 = *pbVar2, pbVar2 = pbVar2 + 1, (char)bVar1 < '\0') {
            iVar3 = iVar3 + 1;
            if (4 < iVar3) {
              *(byte **)(param_1 + 8) = pbVar2;
              *param_1 = 0;
              return param_1;
            }
          }
        }
      }
    }
  }
  *(byte **)(param_1 + 8) = pbVar2;
  *param_1 = 1;
  *param_4 = param_2;
  return param_1;
}

// ReadVarint32Slow @ 14fa61510

/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadVarint32Slow(unsigned int *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadVarint32Slow(CodedInputStream *this,uint *param_1)

{
  pair<unsigned___int64,bool> local_18;
  
  ReadVarint64Fallback(this,&local_18);
  *param_1 = (uint)local_18.first;
  return local_18.second;
}

// ReadVarint64 @ 14fa61540

/* public: bool __cdecl google::protobuf::io::CodedInputStream::ReadVarint64(unsigned __int64 *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadVarint64(CodedInputStream *this,__uint64 *param_1)

{
  byte bVar1;
  pair<unsigned___int64,bool> local_18;
  
  if ((this->buffer_ < this->buffer_end_) && (bVar1 = *this->buffer_, bVar1 < 0x80)) {
    *param_1 = (ulonglong)bVar1;
    this->buffer_ = this->buffer_ + 1;
    return true;
  }
  ReadVarint64Fallback(this,&local_18);
  *param_1 = local_18.first;
  return local_18.second;
}

// ReadVarint64Fallback @ 14fa61590

/* private: struct std::pair<unsigned __int64,bool> __cdecl
   google::protobuf::io::CodedInputStream::ReadVarint64Fallback(void) __ptr64 */

pair<unsigned___int64,bool> * __thiscall
google::protobuf::io::CodedInputStream::ReadVarint64Fallback
          (CodedInputStream *this,pair<unsigned___int64,bool> *__return_storage_ptr__)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulong64 local_res8;
  
  if ((*(int *)&this->buffer_end_ - *(int *)&this->buffer_ < 10) &&
     ((this->buffer_end_ <= this->buffer_ || ((char)this->buffer_end_[-1] < '\0')))) {
    bVar4 = ReadVarint64Slow(this,&local_res8);
    __return_storage_ptr__->second = bVar4;
    __return_storage_ptr__->first = local_res8;
    return __return_storage_ptr__;
  }
  pbVar3 = this->buffer_;
  uVar8 = (ulonglong)pbVar3[1];
  if (pbVar3[1] < 0x80) {
    bVar1 = *pbVar3;
    __return_storage_ptr__->second = true;
    __return_storage_ptr__->first = ((ulonglong)bVar1 - 0x80) + uVar8 * 0x80;
    this->buffer_ = pbVar3 + 2;
  }
  else {
    uVar9 = (ulonglong)pbVar3[2];
    if (pbVar3[2] < 0x80) {
      bVar1 = *pbVar3;
      __return_storage_ptr__->second = true;
      __return_storage_ptr__->first =
           ((uVar8 - 0x80) + uVar9 * 0x80) * 0x80 + ((ulonglong)bVar1 - 0x80);
      this->buffer_ = pbVar3 + 3;
    }
    else {
      uVar7 = (ulonglong)pbVar3[3];
      if (pbVar3[3] < 0x80) {
        __return_storage_ptr__->second = true;
        __return_storage_ptr__->first =
             ((ulonglong)*pbVar3 - 0x80) +
             ((uVar8 - 0x80) + ((uVar9 - 0x80) + uVar7 * 0x80) * 0x80) * 0x80;
        this->buffer_ = pbVar3 + 4;
      }
      else {
        uVar6 = (ulonglong)pbVar3[4];
        if (pbVar3[4] < 0x80) {
          bVar1 = *pbVar3;
          __return_storage_ptr__->second = true;
          __return_storage_ptr__->first =
               ((uVar8 - 0x80) + uVar6 * 0x200000) * 0x80 + ((ulonglong)bVar1 - 0x80) +
               (uVar9 - 0x80) * 0x4000 + (uVar7 - 0x80) * 0x200000;
          this->buffer_ = pbVar3 + 5;
        }
        else {
          uVar5 = (ulonglong)pbVar3[5];
          if (pbVar3[5] < 0x80) {
            __return_storage_ptr__->second = true;
            __return_storage_ptr__->first =
                 ((ulonglong)*pbVar3 - 0x80) +
                 ((uVar8 - 0x80) +
                 ((uVar9 - 0x80) + ((uVar7 - 0x80) + ((uVar6 - 0x80) + uVar5 * 0x80) * 0x80) * 0x80)
                 * 0x80) * 0x80;
            this->buffer_ = pbVar3 + 6;
          }
          else {
            uVar10 = (ulonglong)pbVar3[6];
            if (pbVar3[6] < 0x80) {
              bVar1 = *pbVar3;
              __return_storage_ptr__->second = true;
              __return_storage_ptr__->first =
                   ((uVar8 - 0x80) + (uVar10 << 0x23)) * 0x80 + ((ulonglong)bVar1 - 0x80) +
                   (uVar9 - 0x80) * 0x4000 + (uVar7 - 0x80) * 0x200000 + (uVar6 - 0x80) * 0x10000000
                   + (uVar5 - 0x80 << 0x23);
              this->buffer_ = pbVar3 + 7;
            }
            else {
              uVar11 = (ulonglong)pbVar3[7];
              if (pbVar3[7] < 0x80) {
                __return_storage_ptr__->second = true;
                __return_storage_ptr__->first =
                     ((ulonglong)*pbVar3 - 0x80) +
                     ((uVar8 - 0x80) +
                     ((uVar9 - 0x80) +
                     ((uVar7 - 0x80) +
                     ((uVar6 - 0x80) +
                     ((uVar5 - 0x80) + ((uVar10 - 0x80) + uVar11 * 0x80) * 0x80) * 0x80) * 0x80) *
                     0x80) * 0x80) * 0x80;
                this->buffer_ = pbVar3 + 8;
              }
              else {
                bVar1 = pbVar3[8];
                if (bVar1 < 0x80) {
                  __return_storage_ptr__->second = true;
                  __return_storage_ptr__->first =
                       ((uVar8 - 0x80) + ((ulonglong)bVar1 << 0x31)) * 0x80 +
                       ((ulonglong)*pbVar3 - 0x80) + (uVar9 - 0x80) * 0x4000 +
                       (uVar7 - 0x80) * 0x200000 + (uVar6 - 0x80) * 0x10000000 +
                       (uVar5 - 0x80 << 0x23) + (uVar10 - 0x80 << 0x2a) + (uVar11 - 0x80 << 0x31);
                  this->buffer_ = pbVar3 + 9;
                }
                else {
                  bVar2 = pbVar3[9];
                  if (bVar2 < 0x80) {
                    __return_storage_ptr__->second = true;
                    __return_storage_ptr__->first =
                         ((ulonglong)*pbVar3 - 0x80) +
                         ((uVar8 - 0x80) +
                         ((uVar9 - 0x80) +
                         ((uVar7 - 0x80) +
                         ((uVar6 - 0x80) +
                         ((uVar5 - 0x80) +
                         ((uVar10 - 0x80) +
                         ((uVar11 - 0x80) +
                         (((ulonglong)bVar1 - 0x80) + (ulonglong)bVar2 * 0x80) * 0x80) * 0x80) *
                         0x80) * 0x80) * 0x80) * 0x80) * 0x80) * 0x80;
                    this->buffer_ = pbVar3 + 10;
                  }
                  else {
                    __return_storage_ptr__->first = 0;
                    __return_storage_ptr__->second = false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// FUN_14fa61960 @ 14fa61960

undefined1 * FUN_14fa61960(undefined1 *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_2[1];
  if (param_2[1] < 0x80) {
    *param_3 = ((ulonglong)*param_2 - 0x80) + uVar9 * 0x80;
    param_2 = param_2 + 2;
    *param_1 = 1;
  }
  else {
    uVar8 = (ulonglong)param_2[2];
    if (param_2[2] < 0x80) {
      *param_3 = ((uVar9 - 0x80) + uVar8 * 0x80) * 0x80 + ((ulonglong)*param_2 - 0x80);
      param_2 = param_2 + 3;
      *param_1 = 1;
    }
    else {
      uVar5 = (ulonglong)param_2[3];
      if (param_2[3] < 0x80) {
        lVar2 = 4;
      }
      else {
        uVar7 = (ulonglong)param_2[4];
        if (param_2[4] < 0x80) {
          *param_3 = ((uVar9 - 0x80) + uVar7 * 0x200000) * 0x80 + ((ulonglong)*param_2 - 0x80) +
                     (uVar8 - 0x80) * 0x4000 + (uVar5 - 0x80) * 0x200000;
          param_2 = param_2 + 5;
          *param_1 = 1;
          goto LAB_14fa61be5;
        }
        uVar4 = (ulonglong)param_2[5];
        if (param_2[5] < 0x80) {
          lVar2 = 6;
        }
        else {
          uVar6 = (ulonglong)param_2[6];
          if (param_2[6] < 0x80) {
            *param_3 = ((uVar9 - 0x80) + (uVar6 << 0x23)) * 0x80 + ((ulonglong)*param_2 - 0x80) +
                       (uVar8 - 0x80) * 0x4000 + (uVar5 - 0x80) * 0x200000 +
                       (uVar7 - 0x80) * 0x10000000 + (uVar4 - 0x80 << 0x23);
            param_2 = param_2 + 7;
            *param_1 = 1;
            goto LAB_14fa61be5;
          }
          uVar3 = (ulonglong)param_2[7];
          if (param_2[7] < 0x80) {
            lVar2 = 8;
          }
          else {
            bVar1 = param_2[8];
            if (bVar1 < 0x80) {
              *param_3 = ((uVar9 - 0x80) + ((ulonglong)bVar1 << 0x31)) * 0x80 +
                         ((ulonglong)*param_2 - 0x80) + (uVar8 - 0x80) * 0x4000 +
                         (uVar5 - 0x80) * 0x200000 + (uVar7 - 0x80) * 0x10000000 +
                         (uVar4 - 0x80 << 0x23) + (uVar6 - 0x80 << 0x2a) + (uVar3 - 0x80 << 0x31);
              param_2 = param_2 + 9;
              *param_1 = 1;
              goto LAB_14fa61be5;
            }
            if (0x7f < param_2[9]) {
              *param_1 = 0;
              param_2 = param_2 + 0xb;
              goto LAB_14fa61be5;
            }
            lVar2 = 10;
            uVar3 = (uVar3 - 0x80) +
                    (((ulonglong)bVar1 - 0x80) + (ulonglong)param_2[9] * 0x80) * 0x80;
          }
          uVar4 = (uVar4 - 0x80) + ((uVar6 - 0x80) + uVar3 * 0x80) * 0x80;
        }
        uVar5 = (uVar5 - 0x80) + ((uVar7 - 0x80) + uVar4 * 0x80) * 0x80;
      }
      *param_3 = ((ulonglong)*param_2 - 0x80) +
                 ((uVar9 - 0x80) + ((uVar8 - 0x80) + uVar5 * 0x80) * 0x80) * 0x80;
      param_2 = param_2 + lVar2;
      *param_1 = 1;
    }
  }
LAB_14fa61be5:
  *(byte **)(param_1 + 8) = param_2;
  return param_1;
}

// ReadVarint64Slow @ 14fa61c10

/* WARNING: Removing unreachable block (ram,0x00014fa61d49) */
/* private: bool __cdecl google::protobuf::io::CodedInputStream::ReadVarint64Slow(unsigned __int64 *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::ReadVarint64Slow(CodedInputStream *this,__uint64 *param_1)

{
  int *piVar1;
  byte bVar2;
  ZeroCopyInputStream *pZVar3;
  char cVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  LogMessage *pLVar7;
  byte *pbVar8;
  int iVar9;
  int local_res18 [2];
  ulonglong local_res20;
  int local_88 [2];
  uchar *local_80;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_78;
  ulong64 uStack_70;
  basic_string_view<char,std::char_traits<char>_> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58;
  LogMessage local_48;
  
  local_res20 = 0;
  iVar9 = 0;
  do {
    if (iVar9 == 0x46) {
LAB_14fa61deb:
      *param_1 = 0;
      return false;
    }
    pbVar8 = this->buffer_;
    if (pbVar8 == this->buffer_end_) {
      do {
        if (((0 < this->buffer_size_after_limit_) || (0 < this->overflow_bytes_)) ||
           (piVar1 = &this->total_bytes_read_, *piVar1 == this->current_limit_)) {
          if ((this->total_bytes_limit_ <= this->total_bytes_read_ - this->buffer_size_after_limit_)
             && (this->total_bytes_limit_ != this->current_limit_)) {
            pLVar7 = (LogMessage *)
                     absl::lts_20240722::log_internal::LogMessage::LogMessage
                               (&local_48,
                                "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                                ,0xbf,(ErrorTag)0x0);
            local_res20 = CONCAT44(local_res20._4_4_,2);
            local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       0x1535d6b70;
            uStack_70 = 0x42;
            local_58._Mydata = "A protocol message was rejected because it was too big (more than ";
            local_58._Mysize = 0x42;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_58);
            local_88[0] = this->total_bytes_limit_;
            pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>
                               (pLVar7,local_88);
            local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       0x1535d6bc0;
            uStack_70 = 0x95;
            local_58._Mydata =
                 " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/io/coded_stream.h."
            ;
            local_58._Mysize = 0x95;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_58);
            absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_48);
          }
          goto LAB_14fa61deb;
        }
        pZVar3 = this->input_;
        do {
          cVar4 = (**(code **)((longlong)*pZVar3 + 8))(pZVar3,&local_80,local_res18);
          if (cVar4 == '\0') {
            this->buffer_ = (uchar *)0x0;
            this->buffer_end_ = (uchar *)0x0;
            goto LAB_14fa61deb;
          }
        } while (local_res18[0] == 0);
        this->buffer_ = local_80;
        this->buffer_end_ = local_80 + local_res18[0];
        if ((local_res18[0] < 0) &&
           (pbVar6 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                               ((longlong)local_res18[0],0,"buffer_size >= 0"),
           pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
          local_78 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_78 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_70 = (pbVar6->_Mypair)._Myval2._Mysize;
          local_68._Mydata = (char *)local_78;
          local_68._Mysize = uStack_70;
          absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                    ((LogMessageFatal *)&local_58,
                     "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                     ,0x2b7,&local_68);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                    ((LogMessageFatal *)&local_58);
        }
        iVar5 = *piVar1;
        if (0x7fffffff - local_res18[0] < iVar5) {
          iVar5 = iVar5 + -0x7fffffff + local_res18[0];
          this->overflow_bytes_ = iVar5;
          this->buffer_end_ = this->buffer_end_ + -(longlong)iVar5;
          iVar5 = 0x7fffffff;
        }
        else {
          iVar5 = iVar5 + local_res18[0];
        }
        *piVar1 = iVar5;
        RecomputeBufferLimits(this);
        pbVar8 = this->buffer_;
      } while (pbVar8 == this->buffer_end_);
    }
    bVar2 = *pbVar8;
    local_res20 = local_res20 | (ulonglong)(bVar2 & 0x7f) << ((byte)iVar9 & 0x3f);
    this->buffer_ = pbVar8 + 1;
    iVar9 = iVar9 + 7;
    if (-1 < (char)bVar2) {
      *param_1 = local_res20;
      return true;
    }
  } while( true );
}

// ReadVarintSizeAsIntFallback @ 14fa61ef0

/* private: int __cdecl google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(void)
   __ptr64 */

int __thiscall
google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(CodedInputStream *this)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  pair<unsigned___int64,bool> local_18;
  
  if ((*(int *)&this->buffer_end_ - *(int *)&this->buffer_ < 10) &&
     ((this->buffer_end_ <= this->buffer_ || ((char)this->buffer_end_[-1] < '\0')))) {
    ReadVarint64Fallback(this,&local_18);
    if ((local_18.second == false) || (0x7fffffff < local_18.first)) {
      return -1;
    }
    goto LAB_14fa62254;
  }
  pbVar6 = this->buffer_;
  uVar7 = (ulonglong)pbVar6[1];
  if (pbVar6[1] < 0x80) {
    local_18.first = ((ulonglong)*pbVar6 - 0x80) + uVar7 * 0x80;
    pbVar6 = pbVar6 + 2;
LAB_14fa62226:
    if (local_18.first < 0x80000000) {
      this->buffer_ = pbVar6;
      local_18.first = local_18.first & 0xffffffff;
      goto LAB_14fa62254;
    }
  }
  else {
    uVar8 = (ulonglong)pbVar6[2];
    if (pbVar6[2] < 0x80) {
      local_18.first = ((uVar7 - 0x80) + uVar8 * 0x80) * 0x80 + ((ulonglong)*pbVar6 - 0x80);
      pbVar6 = pbVar6 + 3;
      goto LAB_14fa62226;
    }
    uVar2 = (ulonglong)pbVar6[3];
    if (pbVar6[3] < 0x80) {
      local_18.first =
           ((ulonglong)*pbVar6 - 0x80) +
           ((uVar7 - 0x80) + ((uVar8 - 0x80) + uVar2 * 0x80) * 0x80) * 0x80;
      pbVar6 = pbVar6 + 4;
      goto LAB_14fa62226;
    }
    uVar5 = (ulonglong)pbVar6[4];
    if (pbVar6[4] < 0x80) {
      local_18.first =
           ((uVar7 - 0x80) + uVar5 * 0x200000) * 0x80 + ((ulonglong)*pbVar6 - 0x80) +
           (uVar8 - 0x80) * 0x4000 + (uVar2 - 0x80) * 0x200000;
      pbVar6 = pbVar6 + 5;
      goto LAB_14fa62226;
    }
    uVar4 = (ulonglong)pbVar6[5];
    if (pbVar6[5] < 0x80) {
      local_18.first =
           ((ulonglong)*pbVar6 - 0x80) +
           ((uVar7 - 0x80) +
           ((uVar8 - 0x80) + ((uVar2 - 0x80) + ((uVar5 - 0x80) + uVar4 * 0x80) * 0x80) * 0x80) *
           0x80) * 0x80;
      pbVar6 = pbVar6 + 6;
      goto LAB_14fa62226;
    }
    uVar3 = (ulonglong)pbVar6[6];
    if (pbVar6[6] < 0x80) {
      local_18.first =
           ((uVar7 - 0x80) + (uVar3 << 0x23)) * 0x80 + ((ulonglong)*pbVar6 - 0x80) +
           (uVar8 - 0x80) * 0x4000 + (uVar2 - 0x80) * 0x200000 + (uVar5 - 0x80) * 0x10000000 +
           (uVar4 - 0x80 << 0x23);
      pbVar6 = pbVar6 + 7;
      goto LAB_14fa62226;
    }
    uVar9 = (ulonglong)pbVar6[7];
    if (pbVar6[7] < 0x80) {
      local_18.first =
           ((ulonglong)*pbVar6 - 0x80) +
           ((uVar7 - 0x80) +
           ((uVar8 - 0x80) +
           ((uVar2 - 0x80) +
           ((uVar5 - 0x80) + ((uVar4 - 0x80) + ((uVar3 - 0x80) + uVar9 * 0x80) * 0x80) * 0x80) *
           0x80) * 0x80) * 0x80) * 0x80;
      pbVar6 = pbVar6 + 8;
      goto LAB_14fa62226;
    }
    bVar1 = pbVar6[8];
    if (bVar1 < 0x80) {
      local_18.first =
           ((uVar7 - 0x80) + ((ulonglong)bVar1 << 0x31)) * 0x80 + ((ulonglong)*pbVar6 - 0x80) +
           (uVar8 - 0x80) * 0x4000 + (uVar2 - 0x80) * 0x200000 + (uVar5 - 0x80) * 0x10000000 +
           (uVar4 - 0x80 << 0x23) + (uVar3 - 0x80 << 0x2a) + (uVar9 - 0x80 << 0x31);
      pbVar6 = pbVar6 + 9;
      goto LAB_14fa62226;
    }
    if (pbVar6[9] < 0x80) {
      local_18.first =
           ((ulonglong)*pbVar6 - 0x80) +
           ((uVar7 - 0x80) +
           ((uVar8 - 0x80) +
           ((uVar2 - 0x80) +
           ((uVar5 - 0x80) +
           ((uVar4 - 0x80) +
           ((uVar3 - 0x80) +
           ((uVar9 - 0x80) + (((ulonglong)bVar1 - 0x80) + (ulonglong)pbVar6[9] * 0x80) * 0x80) *
           0x80) * 0x80) * 0x80) * 0x80) * 0x80) * 0x80) * 0x80;
      pbVar6 = pbVar6 + 10;
      goto LAB_14fa62226;
    }
  }
  local_18.first = 0xffffffff;
LAB_14fa62254:
  return (int)local_18.first;
}

// ReadVarintSizeAsIntSlow @ 14fa62260

/* private: int __cdecl google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntSlow(void)
   __ptr64 */

int __thiscall
google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntSlow(CodedInputStream *this)

{
  pair<unsigned___int64,bool> local_18;
  
  ReadVarint64Fallback(this,&local_18);
  if ((local_18.second == false) || (0x7fffffff < local_18.first)) {
    local_18.first = 0xffffffff;
  }
  return (int)local_18.first;
}

// RecomputeBufferLimits @ 14fa622a0

/* private: void __cdecl google::protobuf::io::CodedInputStream::RecomputeBufferLimits(void) __ptr64
    */

void __thiscall
google::protobuf::io::CodedInputStream::RecomputeBufferLimits(CodedInputStream *this)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = this->buffer_end_;
  this->buffer_end_ = puVar1 + this->buffer_size_after_limit_;
  iVar2 = this->current_limit_;
  if (this->total_bytes_limit_ < this->current_limit_) {
    iVar2 = this->total_bytes_limit_;
  }
  if (iVar2 < this->total_bytes_read_) {
    iVar2 = this->total_bytes_read_ - iVar2;
    this->buffer_end_ = puVar1 + this->buffer_size_after_limit_ + -(longlong)iVar2;
    this->buffer_size_after_limit_ = iVar2;
    return;
  }
  this->buffer_size_after_limit_ = 0;
  return;
}

// Refresh @ 14fa622e0

/* WARNING: Removing unreachable block (ram,0x00014fa623ca) */
/* private: bool __cdecl google::protobuf::io::CodedInputStream::Refresh(void) __ptr64 */

bool __thiscall google::protobuf::io::CodedInputStream::Refresh(CodedInputStream *this)

{
  int iVar1;
  ZeroCopyInputStream *pZVar2;
  char cVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  LogMessage *pLVar5;
  int local_res8 [2];
  undefined4 local_res10;
  int local_res18 [2];
  uchar *local_res20;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  local_res10 = 0;
  if (((0 < this->buffer_size_after_limit_) || (0 < this->overflow_bytes_)) ||
     (this->total_bytes_read_ == this->current_limit_)) {
    if ((this->total_bytes_limit_ <= this->total_bytes_read_ - this->buffer_size_after_limit_) &&
       (this->total_bytes_limit_ != this->current_limit_)) {
      pLVar5 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessage::LogMessage
                         ((LogMessage *)&local_38,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                          ,0xbf,(ErrorTag)0x0);
      local_res10 = 2;
      local_28._Mydata = "A protocol message was rejected because it was too big (more than ";
      local_28._Mysize = 0x42;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_28);
      local_res18[0] = this->total_bytes_limit_;
      pLVar5 = absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(pLVar5,local_res18);
      local_28._Mydata =
           " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/io/coded_stream.h."
      ;
      local_28._Mysize = 0x95;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_28);
      absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)&local_38);
    }
    return false;
  }
  pZVar2 = this->input_;
  do {
    cVar3 = (**(code **)((longlong)*pZVar2 + 8))(pZVar2,&local_res20,local_res8);
    if (cVar3 == '\0') goto LAB_14fa62426;
  } while (local_res8[0] == 0);
  if (cVar3 != '\0') {
    this->buffer_ = local_res20;
    this->buffer_end_ = local_res20 + local_res8[0];
    if ((local_res8[0] < 0) &&
       (pbVar4 = absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
                           ((longlong)local_res8[0],0,"buffer_size >= 0"),
       pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      local_38._Mydata = (char *)pbVar4;
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        local_38._Mydata = (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      local_38._Mysize = (pbVar4->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                ((LogMessageFatal *)&local_28,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\coded_stream.cc"
                 ,0x2b7,&local_38);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_28);
    }
    iVar1 = this->total_bytes_read_;
    if (iVar1 <= 0x7fffffff - local_res8[0]) {
      this->total_bytes_read_ = iVar1 + local_res8[0];
      RecomputeBufferLimits(this);
      return true;
    }
    local_res8[0] = iVar1 + -0x7fffffff + local_res8[0];
    this->overflow_bytes_ = local_res8[0];
    this->buffer_end_ = this->buffer_end_ + -(longlong)local_res8[0];
    this->total_bytes_read_ = 0x7fffffff;
    RecomputeBufferLimits(this);
    return true;
  }
LAB_14fa62426:
  this->buffer_ = (uchar *)0x0;
  this->buffer_end_ = (uchar *)0x0;
  return false;
}

// SetTotalBytesLimit @ 14fa62510

/* public: void __cdecl google::protobuf::io::CodedInputStream::SetTotalBytesLimit(int) __ptr64 */

void __thiscall
google::protobuf::io::CodedInputStream::SetTotalBytesLimit(CodedInputStream *this,int param_1)

{
  uchar *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = this->total_bytes_read_;
  iVar4 = ((iVar3 - *(int *)&this->buffer_end_) - this->buffer_size_after_limit_) +
          *(int *)&this->buffer_;
  if (iVar4 < param_1) {
    iVar4 = param_1;
  }
  puVar1 = this->buffer_end_;
  this->buffer_end_ = puVar1 + this->buffer_size_after_limit_;
  this->total_bytes_limit_ = iVar4;
  lVar2 = 0x28;
  if (iVar4 < this->current_limit_) {
    lVar2 = 0x30;
  }
  iVar4 = *(int *)((longlong)&this->buffer_ + lVar2);
  if (iVar4 < iVar3) {
    iVar3 = iVar3 - iVar4;
    this->buffer_end_ = puVar1 + this->buffer_size_after_limit_ + -(longlong)iVar3;
    this->buffer_size_after_limit_ = iVar3;
    return;
  }
  this->buffer_size_after_limit_ = 0;
  return;
}

// Skip @ 14fa62590

/* private: bool __cdecl google::protobuf::io::EpsCopyOutputStream::Skip(int,unsigned char * __ptr64
   * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::EpsCopyOutputStream::Skip
          (EpsCopyOutputStream *this,int param_1,uchar **param_2)

{
  char cVar1;
  uchar *puVar2;
  int local_res10 [2];
  uchar *local_res20;
  
  if (-1 < param_1) {
    if ((this->had_error_ == false) &&
       (local_res10[0] = Flush(this,*param_2), this->had_error_ == false)) {
      local_res20 = this->buffer_end_;
      if (local_res10[0] < param_1) {
        do {
          param_1 = param_1 - local_res10[0];
          cVar1 = (**(code **)((longlong)*this->stream_ + 8))
                            (this->stream_,&local_res20,local_res10);
          if (cVar1 == '\0') {
            this->had_error_ = true;
            this->end_ = this->buffer_ + 0x10;
            goto LAB_14fa6263a;
          }
        } while (local_res10[0] < param_1);
      }
      puVar2 = SetInitialBuffer(this,local_res20 + param_1,local_res10[0] - param_1);
      *param_2 = puVar2;
      return true;
    }
LAB_14fa6263a:
    *param_2 = this->buffer_;
  }
  return false;
}

// SkipFallback @ 14fa62660

/* private: bool __cdecl google::protobuf::io::CodedInputStream::SkipFallback(int,int) __ptr64 */

bool __thiscall
google::protobuf::io::CodedInputStream::SkipFallback(CodedInputStream *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < this->buffer_size_after_limit_) {
    this->buffer_ = this->buffer_ + param_2;
    return false;
  }
  iVar4 = param_1 - param_2;
  this->buffer_ = (uchar *)0x0;
  this->buffer_end_ = (uchar *)0x0;
  iVar2 = this->current_limit_;
  if (this->total_bytes_limit_ < this->current_limit_) {
    iVar2 = this->total_bytes_limit_;
  }
  iVar3 = iVar2 - this->total_bytes_read_;
  if (iVar3 < iVar4) {
    if (0 < iVar3) {
      this->total_bytes_read_ = iVar2;
      (**(code **)((longlong)*this->input_ + 0x18))();
    }
    return false;
  }
  cVar1 = (**(code **)((longlong)*this->input_ + 0x18))(this->input_,iVar4);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)((longlong)*this->input_ + 0x20))();
    this->total_bytes_read_ = iVar2;
    return false;
  }
  this->total_bytes_read_ = this->total_bytes_read_ + iVar4;
  return true;
}

// Trim @ 14fa62710

/* public: void __cdecl google::protobuf::io::CodedOutputStream::Trim(void) __ptr64 */

void __thiscall google::protobuf::io::CodedOutputStream::Trim(CodedOutputStream *this)

{
  uchar *puVar1;
  ZeroCopyOutputStream *pZVar2;
  int iVar3;
  
  if ((this->impl_).had_error_ != false) {
    this->cur_ = this->cur_;
    return;
  }
  iVar3 = EpsCopyOutputStream::Flush(&this->impl_,this->cur_);
  pZVar2 = (this->impl_).stream_;
  (**(code **)((longlong)*pZVar2 + 0x10))(pZVar2,iVar3);
  puVar1 = (this->impl_).buffer_;
  (this->impl_).end_ = puVar1;
  (this->impl_).buffer_end_ = puVar1;
  this->cur_ = puVar1;
  return;
}

// Trim @ 14fa62760

/* public: unsigned char * __ptr64 __cdecl google::protobuf::io::EpsCopyOutputStream::Trim(unsigned
   char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::Trim(EpsCopyOutputStream *this,uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  
  if (this->had_error_ != false) {
    return param_1;
  }
  iVar2 = Flush(this,param_1);
  (**(code **)((longlong)*this->stream_ + 0x10))(this->stream_,iVar2);
  puVar1 = this->buffer_;
  this->end_ = puVar1;
  this->buffer_end_ = puVar1;
  return puVar1;
}

// UnsafeWriteSize @ 14fa627b0

/* private: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::UnsafeWriteSize(unsigned int,unsigned char * __ptr64)
    */

uchar * __cdecl
google::protobuf::io::EpsCopyOutputStream::UnsafeWriteSize(uint param_1,uchar *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}

// WriteAliasedRaw @ 14fa627f0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteAliasedRaw(void const * __ptr64,int,unsigned char
   * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteAliasedRaw
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  
  if ((longlong)(this->end_ + (0x10 - (longlong)param_3)) <= (longlong)param_2) {
    puVar3 = this->buffer_;
    if (this->had_error_ == false) {
      iVar2 = Flush(this,param_3);
      (**(code **)((longlong)*this->stream_ + 0x10))(this->stream_,iVar2);
      this->end_ = puVar3;
      this->buffer_end_ = puVar3;
      param_3 = puVar3;
    }
    cVar1 = (**(code **)((longlong)*this->stream_ + 0x20))(this->stream_,param_1,param_2);
    if (cVar1 == '\0') {
      this->had_error_ = true;
      this->end_ = this->buffer_ + 0x10;
      param_3 = puVar3;
    }
    return param_3;
  }
  puVar3 = WriteRaw(this,param_1,param_2,param_3);
  return puVar3;
}

// WriteCord @ 14fa628a0

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteCord(class absl::lts_20240722::Cord const &
   __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteCord
          (EpsCopyOutputStream *this,Cord *param_1,uchar *param_2)

{
  char cVar1;
  ulonglong uVar2;
  uchar *puVar3;
  int iVar4;
  byte bVar5;
  ulong64 uVar6;
  
  iVar4 = (*(int *)&this->end_ - (int)param_2) + 0x10;
  bVar5 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  uVar2 = (ulonglong)(char)bVar5;
  if (this->stream_ != (ZeroCopyOutputStream *)0x0) {
    bVar5 = bVar5 & 1;
    if (bVar5 == 0) {
      uVar6 = uVar2 >> 1;
    }
    else {
      uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
    }
    uVar2 = uVar2 >> 1;
    if ((longlong)uVar6 <= (longlong)iVar4) {
      if (bVar5 != 0) {
        uVar2 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
      }
      if ((longlong)uVar2 < 0x200) goto LAB_14fa628e6;
    }
    puVar3 = this->buffer_;
    if (this->had_error_ == false) {
      iVar4 = Flush(this,param_2);
      (**(code **)((longlong)*this->stream_ + 0x10))(this->stream_,iVar4);
      this->end_ = puVar3;
      this->buffer_end_ = puVar3;
      param_2 = puVar3;
    }
    cVar1 = (**(code **)((longlong)*this->stream_ + 0x30))(this->stream_,param_1);
    if (cVar1 == '\0') {
      this->had_error_ = true;
      this->end_ = this->buffer_ + 0x10;
      param_2 = puVar3;
    }
    return param_2;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 >> 1;
  }
  else {
    uVar2 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if ((longlong)iVar4 < (longlong)uVar2) {
    this->had_error_ = true;
    this->end_ = this->buffer_ + 0x10;
    return this->buffer_;
  }
LAB_14fa628e6:
  puVar3 = (uchar *)FUN_14fa5fd00(param_1,param_2);
  return puVar3;
}

// WriteCordOutline @ 14fa629e0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteCordOutline(class absl::lts_20240722::Cord const
   & __ptr64,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteCordOutline
          (EpsCopyOutputStream *this,Cord *param_1,uchar *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uchar *puVar4;
  
  uVar3 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 >> 1;
  }
  else {
    uVar3 = (ulonglong)(uint)((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = (uint)uVar3;
  while (bVar1 = (byte)uVar3, 0x7f < uVar2) {
    uVar3 = uVar3 >> 7 & 0x1ffffff;
    *param_2 = bVar1 | 0x80;
    param_2 = param_2 + 1;
    uVar2 = (uint)uVar3;
  }
  *param_2 = bVar1;
  puVar4 = WriteCord(this,param_1,param_2 + 1);
  return puVar4;
}

// WriteCordToArray @ 14fa62a30

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteCordToArray(class absl::lts_20240722::Cord const &
   __ptr64,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteCordToArray(Cord *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)FUN_14fa5fd00();
  return puVar1;
}

// WriteLengthDelim @ 14fa62a40

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteLengthDelim(int,unsigned int,unsigned char *
   __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteLengthDelim
          (EpsCopyOutputStream *this,int param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  byte bVar2;
  
  for (uVar1 = param_1 * 8 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  while( true ) {
    param_3 = param_3 + 1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x80) break;
    param_2 = param_2 >> 7;
    *param_3 = bVar2 | 0x80;
  }
  *param_3 = bVar2;
  return param_3 + 1;
}

// WriteRaw @ 14fa62ab0

/* public: unsigned char * __ptr64 __cdecl google::protobuf::io::EpsCopyOutputStream::WriteRaw(void
   const * __ptr64,int,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRaw
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  
  sVar1 = (size_t)param_2;
  _Size = (size_t)(uint)param_2;
  if ((longlong)this->end_ - (longlong)param_3 < (longlong)sVar1) {
    iVar2 = ((int)this->end_ - (int)param_3) + 0x10;
    if (iVar2 < param_2) {
      do {
        sVar1 = (size_t)iVar2;
        memcpy(param_3,param_1,sVar1);
        param_2 = (int)_Size - iVar2;
        _Size = (size_t)(uint)param_2;
        param_1 = (void *)((longlong)param_1 + sVar1);
        param_3 = EnsureSpaceFallback(this,param_3 + sVar1);
        iVar2 = (*(int *)&this->end_ - (int)param_3) + 0x10;
      } while (iVar2 < param_2);
    }
    sVar1 = (size_t)param_2;
    _Size = sVar1;
  }
  memcpy(param_3,param_1,_Size);
  return param_3 + sVar1;
}

// WriteRawFallback @ 14fa62b60

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteRawFallback(void const * __ptr64,int,unsigned
   char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  int iVar1;
  size_t _Size;
  
  iVar1 = (*(int *)&this->end_ - (int)param_3) + 0x10;
  if (iVar1 < param_2) {
    do {
      _Size = (size_t)iVar1;
      memcpy(param_3,param_1,_Size);
      param_2 = param_2 - iVar1;
      param_1 = (void *)((longlong)param_1 + _Size);
      param_3 = EnsureSpaceFallback(this,param_3 + _Size);
      iVar1 = (*(int *)&this->end_ - (int)param_3) + 0x10;
    } while (iVar1 < param_2);
  }
  memcpy(param_3,param_1,(longlong)param_2);
  return param_3 + param_2;
}

// WriteRawMaybeAliased @ 14fa62c00

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteRawMaybeAliased(void const * __ptr64,int,unsigned
   char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteRawMaybeAliased
          (EpsCopyOutputStream *this,void *param_1,int param_2,uchar *param_3)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  
  if (this->aliasing_enabled_ == false) {
    puVar3 = WriteRaw(this,param_1,param_2,param_3);
    return puVar3;
  }
  if ((longlong)param_2 < (longlong)(this->end_ + (0x10 - (longlong)param_3))) {
    puVar3 = WriteRaw(this,param_1,param_2,param_3);
    return puVar3;
  }
  puVar3 = this->buffer_;
  if (this->had_error_ == false) {
    iVar2 = Flush(this,param_3);
    (**(code **)((longlong)*this->stream_ + 0x10))(this->stream_,iVar2);
    this->end_ = puVar3;
    this->buffer_end_ = puVar3;
    param_3 = puVar3;
  }
  cVar1 = (**(code **)((longlong)*this->stream_ + 0x20))(this->stream_,param_1,param_2);
  if (cVar1 == '\0') {
    this->had_error_ = true;
    this->end_ = this->buffer_ + 0x10;
    param_3 = puVar3;
  }
  return param_3;
}

// WriteRawToArray @ 14fa62cd0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteRawToArray(void const * __ptr64,int,unsigned char *
   __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteRawToArray(void *param_1,int param_2,uchar *param_3)

{
  memcpy(param_3,param_1,(ulonglong)(uint)param_2);
  return param_3 + param_2;
}

// WriteStringMaybeAliasedOutline @ 14fa62d10

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline(unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
          (EpsCopyOutputStream *this,uint param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,uchar *param_3)

{
  uchar *puVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar2 = (uint)param_2->_Mysize;
  for (uVar8 = param_1 * 8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
    *param_3 = (byte)uVar8 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar8;
  uVar8 = uVar2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar4 = (byte)uVar8;
    if (uVar8 < 0x80) break;
    uVar8 = uVar8 >> 7;
    *param_3 = bVar4 | 0x80;
  }
  pcVar3 = param_2->_Mydata;
  puVar7 = param_3 + 1;
  *param_3 = bVar4;
  if (this->aliasing_enabled_ != false) {
    if ((longlong)(int)uVar2 < (longlong)(this->end_ + (0x10 - (longlong)puVar7))) {
      puVar7 = WriteRaw(this,pcVar3,uVar2,puVar7);
      return puVar7;
    }
    puVar1 = this->buffer_;
    if (this->had_error_ == false) {
      iVar6 = Flush(this,puVar7);
      (**(code **)((longlong)*this->stream_ + 0x10))(this->stream_,iVar6);
      this->end_ = puVar1;
      this->buffer_end_ = puVar1;
      puVar7 = puVar1;
    }
    cVar5 = (**(code **)((longlong)*this->stream_ + 0x20))(this->stream_,pcVar3,uVar2);
    if (cVar5 == '\0') {
      this->had_error_ = true;
      this->end_ = this->buffer_ + 0x10;
      puVar7 = puVar1;
    }
    return puVar7;
  }
  puVar7 = WriteRaw(this,pcVar3,uVar2,puVar7);
  return puVar7;
}

// WriteStringOutline @ 14fa62e70

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteStringOutline(unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned char * __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteStringOutline
          (EpsCopyOutputStream *this,uint param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,uchar *param_3)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uchar *puVar5;
  
  if (this->end_ <= param_3) {
    param_3 = EnsureSpaceFallback(this,param_3);
  }
  uVar1 = (uint)param_2->_Mysize;
  for (uVar4 = param_1 * 8 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *param_3 = (byte)uVar4 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar4;
  uVar4 = uVar1;
  while( true ) {
    param_3 = param_3 + 1;
    bVar3 = (byte)uVar4;
    if (uVar4 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *param_3 = bVar3 | 0x80;
  }
  pcVar2 = param_2->_Mydata;
  *param_3 = bVar3;
  puVar5 = WriteRaw(this,pcVar2,uVar1,param_3 + 1);
  return puVar5;
}

// WriteStringToArray @ 14fa62f20

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteStringToArray(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteStringToArray
          (basic_string_view<char,std::char_traits<char>_> *param_1,uchar *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1->_Mysize;
  memcpy(param_2,param_1->_Mydata,(ulonglong)uVar1);
  return param_2 + (int)uVar1;
}

// WriteStringWithSizeToArray @ 14fa62f60

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned char * __ptr64) */

uchar * __cdecl
google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray
          (basic_string_view<char,std::char_traits<char>_> *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = (uint)param_1->_Mysize; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_2 = (byte)uVar2 | 0x80;
    param_2 = param_2 + 1;
  }
  uVar1 = (uint)param_1->_Mysize;
  *param_2 = (byte)uVar2;
  memcpy(param_2 + 1,param_1->_Mydata,(ulonglong)uVar1);
  return param_2 + 1 + (int)uVar1;
}

// WriteTag @ 14fa62fd0

/* private: unsigned char * __ptr64 __cdecl
   google::protobuf::io::EpsCopyOutputStream::WriteTag(unsigned int,unsigned int,unsigned char *
   __ptr64) __ptr64 */

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteTag
          (EpsCopyOutputStream *this,uint param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | param_2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  return param_3 + 1;
}

// as_string_data @ 14fa63010

/* struct std::pair<char * __ptr64,bool> __cdecl google::protobuf::io::as_string_data(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::io::as_string_data
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char *in_RDX;
  
  if (0xf < *(ulonglong *)(in_RDX + 0x18)) {
    in_RDX = *(char **)in_RDX;
  }
  (param_1->_Mypair)._Myval2._Bx._Ptr = in_RDX;
  (param_1->_Mypair)._Myval2._Bx._Buf[8] = '\x01';
  return param_1;
}

// FUN_15029ec00 @ 15029ec00

void FUN_15029ec00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029ec30 @ 15029ec30

void FUN_15029ec30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xb0) & 2) != 0) {
    *(uint *)(param_2 + 0xb0) = *(uint *)(param_2 + 0xb0) & 0xfffffffd;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x60));
  }
  return;
}

// FUN_15029ec70 @ 15029ec70

void FUN_15029ec70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 200) & 2) != 0) {
    *(uint *)(param_2 + 200) = *(uint *)(param_2 + 200) & 0xfffffffd;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x60));
  }
  return;
}

// FUN_15029ecb0 @ 15029ecb0

void FUN_15029ecb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 2) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffd;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x30));
  }
  return;
}

