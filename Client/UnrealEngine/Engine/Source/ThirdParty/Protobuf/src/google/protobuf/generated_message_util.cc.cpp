// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 42

// FUN_141455a90 @ 141455a90

void FUN_141455a90(void)

{
  google::protobuf::internal::InitProtobufDefaultsSlow();
  DAT_1553e4b09 = 0;
  return;
}

// _Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1><google::protobuf::MessageLite*___ptr64&___ptr64> @ 14fa80e90

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<class
   google::protobuf::MessageLite>,class google::protobuf::MessageLite *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<class
   google::protobuf::MessageLite>,class google::protobuf::MessageLite * __ptr64,1><class
   google::protobuf::MessageLite * __ptr64 & __ptr64>(struct std::_Zero_then_variadic_args_t,class
   google::protobuf::MessageLite * __ptr64 & __ptr64) __ptr64 */

_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1>
::
_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1><google::protobuf::MessageLite*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1,MessageLite **param_2)

{
  *(MessageLite **)this = *param_2;
  return this;
}

// unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_><std::default_delete<google::protobuf::MessageLite>,0> @ 14fa80ea0

/* public: __cdecl std::unique_ptr<class google::protobuf::MessageLite,struct
   std::default_delete<class google::protobuf::MessageLite> >::unique_ptr<class
   google::protobuf::MessageLite,struct std::default_delete<class google::protobuf::MessageLite>
   ><struct std::default_delete<class google::protobuf::MessageLite>,0>(class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_> *
__thiscall
std::unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>::
unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_><std::default_delete<google::protobuf::MessageLite>,0>
          (unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>
           *this,MessageLite *param_1)

{
  *(MessageLite **)this = param_1;
  return this;
}

// CodedOutputStream<google::protobuf::io::ArrayOutputStream,void> @ 14fa80eb0

/* public: __cdecl google::protobuf::io::CodedOutputStream::CodedOutputStream<class
   google::protobuf::io::ArrayOutputStream,void>(class google::protobuf::io::ArrayOutputStream *
   __ptr64) __ptr64 */

CodedOutputStream * __thiscall
google::protobuf::io::CodedOutputStream::
CodedOutputStream<google::protobuf::io::ArrayOutputStream,void>
          (CodedOutputStream *this,ArrayOutputStream *param_1)

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
  _Var3 = ArrayOutputStream::ByteCount(param_1);
  this->start_count_ = _Var3;
  bVar2 = ArrayOutputStream::Next(param_1,&local_res10,local_res8);
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

// Get<google::protobuf::MessageLite_const*___ptr64> @ 14fa80f70

/* class google::protobuf::MessageLite const * __ptr64 const & __ptr64 __cdecl
   google::protobuf::internal::Get<class google::protobuf::MessageLite const * __ptr64>(void const *
   __ptr64) */

MessageLite ** __cdecl
google::protobuf::internal::Get<google::protobuf::MessageLite_const*___ptr64>(void *param_1)

{
  return param_1;
}

// InitEagerly<google::protobuf::io::ArrayOutputStream> @ 14fa80f80

/* private: void __cdecl google::protobuf::io::CodedOutputStream::InitEagerly<class
   google::protobuf::io::ArrayOutputStream>(class google::protobuf::io::ArrayOutputStream * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::InitEagerly<google::protobuf::io::ArrayOutputStream>
          (CodedOutputStream *this,ArrayOutputStream *param_1)

{
  bool bVar1;
  uchar *puVar2;
  EpsCopyOutputStream *pEVar3;
  int local_res18 [2];
  uchar *local_res20;
  
  bVar1 = ArrayOutputStream::Next(param_1,&local_res20,local_res18);
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

// IsNull<9> @ 14fa80ff0

/* bool __cdecl google::protobuf::internal::IsNull<9>(void const * __ptr64) */

bool __cdecl google::protobuf::internal::IsNull<9>(void *param_1)

{
  return *(longlong *)((*(ulonglong *)param_1 & 0xfffffffffffffffc) + 0x10) == 0;
}

// IsNull<10> @ 14fa81010

/* bool __cdecl google::protobuf::internal::IsNull<10>(void const * __ptr64) */

bool __cdecl google::protobuf::internal::IsNull<10>(void *param_1)

{
  return *(longlong *)param_1 == 0;
}

// IsNull<11> @ 14fa81020

/* bool __cdecl google::protobuf::internal::IsNull<11>(void const * __ptr64) */

bool __cdecl google::protobuf::internal::IsNull<11>(void *param_1)

{
  return *(longlong *)param_1 == 0;
}

// IsNull<12> @ 14fa81030

/* bool __cdecl google::protobuf::internal::IsNull<12>(void const * __ptr64) */

bool __cdecl google::protobuf::internal::IsNull<12>(void *param_1)

{
  return *(longlong *)((*(ulonglong *)param_1 & 0xfffffffffffffffc) + 0x10) == 0;
}

// Own<google::protobuf::MessageLite> @ 14fa81050

/* public: void __cdecl google::protobuf::Arena::Own<class google::protobuf::MessageLite>(class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::Arena::Own<google::protobuf::MessageLite>(Arena *this,MessageLite *param_1)

{
  if (param_1 != (MessageLite *)0x0) {
    internal::ThreadSafeArena::AddCleanup
              (&this->impl_,param_1,internal::arena_delete_object<google::protobuf::MessageLite>);
    return;
  }
  return;
}

// forward<google::protobuf::MessageLite*___ptr64&___ptr64> @ 14fa81070

/* class google::protobuf::MessageLite * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::MessageLite * __ptr64 & __ptr64>(class google::protobuf::MessageLite * __ptr64
   & __ptr64) */

MessageLite ** __cdecl
std::forward<google::protobuf::MessageLite*___ptr64&___ptr64>(MessageLite **param_1)

{
  return param_1;
}

// unknown_fields<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fa81080

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::internal::InternalMetadata::unknown_fields<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64
   (__cdecl*)(void))const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::InternalMetadata::
unknown_fields<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (InternalMetadata *this,
          _func_basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_ptr
          *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  if ((this->ptr_ & 1) != 0) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((this->ptr_ & 0xfffffffffffffffeU) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa81091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = (*param_1)();
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pbVar1;
}

// ~unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_> @ 14fa810a0

/* public: __cdecl std::unique_ptr<class google::protobuf::MessageLite,struct
   std::default_delete<class google::protobuf::MessageLite> >::~unique_ptr<class
   google::protobuf::MessageLite,struct std::default_delete<class google::protobuf::MessageLite>
   >(void) __ptr64 */

void __thiscall
std::unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>::
~unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>
          (unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>
           *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fa810b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~EmptyCord @ 14fa810c0

/* public: __cdecl google::protobuf::internal::EmptyCord::~EmptyCord(void) __ptr64 */

void __thiscall google::protobuf::internal::EmptyCord::~EmptyCord(EmptyCord *this)

{
  return;
}

// operator-> @ 14fa810d0

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl std::unique_ptr<class
   google::protobuf::MessageLite,struct std::default_delete<class google::protobuf::MessageLite>
   >::operator->(void)const __ptr64 */

MessageLite * __thiscall
std::unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>::
operator->(unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>
           *this)

{
  return *(MessageLite **)this;
}

// operator* @ 14fa810e0

/* public: class google::protobuf::MessageLite & __ptr64 __cdecl std::unique_ptr<class
   google::protobuf::MessageLite,struct std::default_delete<class google::protobuf::MessageLite>
   >::operator*(void)const __ptr64 */

MessageLite * __thiscall
std::unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>::
operator*(unique_ptr<google::protobuf::MessageLite,std::default_delete<google::protobuf::MessageLite>_>
          *this)

{
  return *(MessageLite **)this;
}

// operator() @ 14fa810f0

/* public: void __cdecl std::default_delete<class google::protobuf::MessageLite>::operator()(class
   google::protobuf::MessageLite * __ptr64)const __ptr64 */

void __thiscall
std::default_delete<google::protobuf::MessageLite>::operator()
          (default_delete<google::protobuf::MessageLite> *this,MessageLite *param_1)

{
  if (param_1 != (MessageLite *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fa81103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// DestroyString @ 14fa81110

/* void __cdecl google::protobuf::internal::DestroyString(void const * __ptr64) */

void __cdecl google::protobuf::internal::DestroyString(void *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)param_1;
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
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// DuplicateIfNonNullInternal @ 14fa81180

/* class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::DuplicateIfNonNullInternal(class google::protobuf::MessageLite *
   __ptr64) */

MessageLite * __cdecl google::protobuf::internal::DuplicateIfNonNullInternal(MessageLite *param_1)

{
  MessageLite *this;
  
  if (param_1 != (MessageLite *)0x0) {
    this = MessageLite::New(param_1,(Arena *)0x0);
    MessageLite::CheckTypeAndMergeFrom(this,param_1);
    return this;
  }
  return (MessageLite *)0x0;
}

// ExtensionSerializer @ 14fa811d0

/* void __cdecl google::protobuf::internal::ExtensionSerializer(class google::protobuf::MessageLite
   const * __ptr64,unsigned char const * __ptr64,unsigned int,unsigned int,unsigned int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::ExtensionSerializer
          (MessageLite *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,
          CodedOutputStream *param_6)

{
  uchar *puVar1;
  
  puVar1 = param_6->cur_;
  if (((ExtensionSet *)(param_2 + param_3))->flat_size_ != 0) {
    puVar1 = ExtensionSet::_InternalSerializeImpl
                       ((ExtensionSet *)(param_2 + param_3),param_1,param_4,param_5,puVar1,
                        &param_6->impl_);
  }
  param_6->cur_ = puVar1;
  return;
}

// GenericSwap @ 14fa81220

/* void __cdecl google::protobuf::internal::GenericSwap(class google::protobuf::MessageLite *
   __ptr64,class google::protobuf::MessageLite * __ptr64) */

void __cdecl google::protobuf::internal::GenericSwap(MessageLite *param_1,MessageLite *param_2)

{
  MessageLite *this;
  
  this = MessageLite::New(param_1,(Arena *)0x0);
  MessageLite::CheckTypeAndMergeFrom(this,param_1);
  (**(code **)(param_1->_padding_ + 8))(param_1);
  MessageLite::CheckTypeAndMergeFrom(param_1,param_2);
  (**(code **)(param_2->_padding_ + 8))(param_2);
  MessageLite::CheckTypeAndMergeFrom(param_2,this);
  if (this != (MessageLite *)0x0) {
    (**(code **)this->_padding_)(this,1);
  }
  return;
}

// GetOwnedMessageInternal @ 14fa812a0

/* class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::GetOwnedMessageInternal(class google::protobuf::Arena * __ptr64,class
   google::protobuf::MessageLite * __ptr64,class google::protobuf::Arena * __ptr64) */

MessageLite * __cdecl
google::protobuf::internal::GetOwnedMessageInternal
          (Arena *param_1,MessageLite *param_2,Arena *param_3)

{
  MessageLite *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (MessageLite *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = MessageLite::New(param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom(this,param_2);
  return this;
}

// Init @ 14fa81300

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::GlobalEmptyString::Init(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::GlobalEmptyString::Init(GlobalEmptyString *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
}

// InitProtobufDefaultsSlow @ 14fa81330

/* void __cdecl google::protobuf::internal::InitProtobufDefaultsSlow(void) */

void __cdecl google::protobuf::internal::InitProtobufDefaultsSlow(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4b24) {
    _Init_thread_header(&DAT_1553e4b24);
    if (DAT_1553e4b24 == -1) {
      init_protobuf_defaults_state = (atomic<bool>)0x1;
      DAT_1553e4b20 = 1;
      _Init_thread_footer(&DAT_1553e4b24);
      return;
    }
  }
  return;
}

// InitWeakDefaults @ 14fa813a0

/* void __cdecl google::protobuf::internal::InitWeakDefaults(void) */

void __cdecl google::protobuf::internal::InitWeakDefaults(void)

{
  return;
}

// New @ 14fa813b0

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::MessageLite::New(void)const __ptr64 */

MessageLite * __thiscall google::protobuf::MessageLite::New(MessageLite *this)

{
  MessageLite *pMVar1;
  
  pMVar1 = New(this,(Arena *)0x0);
  return pMVar1;
}

// OnShutdownDestroyString @ 14fa813c0

/* void __cdecl google::protobuf::internal::OnShutdownDestroyString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64) */

void __cdecl
google::protobuf::internal::OnShutdownDestroyString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  OnShutdownRun(DestroyString,param_1);
  return;
}

// SerializeMessageNoTable @ 14fa813e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl google::protobuf::internal::SerializeMessageNoTable(class
   google::protobuf::MessageLite const * __ptr64,struct google::protobuf::internal::ArrayOutput *
   __ptr64) */

void __cdecl
google::protobuf::internal::SerializeMessageNoTable(MessageLite *param_1,ArrayOutput *param_2)

{
  bool bVar1;
  __int64 _Var2;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  uchar *local_90;
  ArrayOutputStream local_88;
  CodedOutputStream local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  io::ArrayOutputStream::ArrayOutputStream(&local_88,*(void **)param_2,0x7fffffff,-1);
  local_68.impl_.end_ = local_68.impl_.buffer_;
  local_68.impl_.buffer_end_ = local_68.impl_.buffer_;
  local_68.impl_.stream_ = (ZeroCopyOutputStream *)&local_88;
  local_68.impl_.had_error_ = false;
  local_68.impl_.aliasing_enabled_ = false;
  local_68.impl_.is_serialization_deterministic_ =
       io::CodedOutputStream::default_serialization_deterministic_ != (atomic<bool>)0x0;
  local_68.impl_.skip_check_consistency = false;
  local_68.cur_ = local_68.impl_.buffer_;
  local_68.start_count_ = io::ArrayOutputStream::ByteCount(&local_88);
  bVar1 = io::ArrayOutputStream::Next(&local_88,&local_90,local_98);
  if ((bVar1) && (0 < local_98[0])) {
    if (local_98[0] < 0x11) {
      local_68.impl_.end_ = local_68.impl_.buffer_ + local_98[0];
      local_68.impl_.buffer_end_ = local_90;
      local_68.cur_ = local_68.impl_.buffer_;
    }
    else {
      local_68.impl_.end_ = local_90 + (longlong)local_98[0] + -0x10;
      local_68.impl_.buffer_end_ = (uchar *)0x0;
      local_68.cur_ = local_90;
    }
  }
  local_68.impl_.is_serialization_deterministic_ = *(bool *)(param_2 + 8);
  local_68.cur_ = (uchar *)(**(code **)(param_1->_padding_ + 0x20))(param_1,local_68.cur_,&local_68)
  ;
  _Var2 = io::EpsCopyOutputStream::ByteCount(&local_68.impl_,local_68.cur_);
  *(longlong *)param_2 = *(longlong *)param_2 + (longlong)((int)_Var2 - (int)local_68.start_count_);
  io::CodedOutputStream::~CodedOutputStream(&local_68);
  return;
}

// SerializeMessageNoTable @ 14fa81530

/* void __cdecl google::protobuf::internal::SerializeMessageNoTable(class
   google::protobuf::MessageLite const * __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::SerializeMessageNoTable(MessageLite *param_1,CodedOutputStream *param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(**(code **)(param_1->_padding_ + 0x20))(param_1,param_2->cur_,param_2);
  param_2->cur_ = puVar1;
  return;
}

// SerializeNotImplemented @ 14fa81560

/* void __cdecl google::protobuf::internal::SerializeNotImplemented(int) */

void __cdecl google::protobuf::internal::SerializeNotImplemented(int param_1)

{
  LogMessage *this;
  int local_res10 [2];
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  this = (LogMessage *)
         absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                   (&local_18,
                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\generated_message_util.cc"
                    ,0x150);
  local_28._Mydata = "Not implemented field number ";
  local_28._Mysize = 0x1d;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_28);
  local_res10[0] = param_1;
  absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(this,local_res10);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SerializeWithCachedSizes @ 14fa815f0

/* public: void __cdecl google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(class
   google::protobuf::MessageLite const * __ptr64,int,int,class
   google::protobuf::io::CodedOutputStream * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes
          (ExtensionSet *this,MessageLite *param_1,int param_2,int param_3,
          CodedOutputStream *param_4)

{
  uchar *puVar1;
  
  puVar1 = param_4->cur_;
  if (this->flat_size_ != 0) {
    puVar1 = _InternalSerializeImpl(this,param_1,param_2,param_3,puVar1,&param_4->impl_);
  }
  param_4->cur_ = puVar1;
  return;
}

// SetSerializationDeterministic @ 14fa81630

/* public: void __cdecl google::protobuf::io::CodedOutputStream::SetSerializationDeterministic(bool)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::SetSerializationDeterministic
          (CodedOutputStream *this,bool param_1)

{
  (this->impl_).is_serialization_deterministic_ = param_1;
  return;
}

// SetSerializationDeterministic @ 14fa81640

/* public: void __cdecl
   google::protobuf::io::EpsCopyOutputStream::SetSerializationDeterministic(bool) __ptr64 */

void __thiscall
google::protobuf::io::EpsCopyOutputStream::SetSerializationDeterministic
          (EpsCopyOutputStream *this,bool param_1)

{
  this->is_serialization_deterministic_ = param_1;
  return;
}

// StringSpaceUsedExcludingSelfLong @ 14fa81650

/* unsigned __int64 __cdecl google::protobuf::internal::StringSpaceUsedExcludingSelfLong(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

__uint64 __cdecl
google::protobuf::internal::StringSpaceUsedExcludingSelfLong
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (param_1->_Mypair)._Myval2._Myres;
  pbVar1 = param_1 + 1;
  if (0xf < uVar2) {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
        (param_1->_Mypair)._Myval2._Bx._Ptr < param_1) {
      return uVar2;
    }
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (param_1 < pbVar1) {
    uVar2 = 0;
  }
  return uVar2;
}

// UnknownFieldSerializerLite @ 14fa81680

/* void __cdecl google::protobuf::internal::UnknownFieldSerializerLite(unsigned char const *
   __ptr64,unsigned int,unsigned int,unsigned int,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::UnknownFieldSerializerLite
          (uchar *param_1,uint param_2,uint param_3,uint param_4,CodedOutputStream *param_5)

{
  ulonglong uVar1;
  GlobalEmptyString *pGVar2;
  uchar *puVar3;
  int iVar4;
  GlobalEmptyString *_Src;
  
  if ((param_1[param_2] & 1) == 0) {
    if (init_protobuf_defaults_state == (atomic<bool>)0x0) {
      InitProtobufDefaultsSlow();
    }
    pGVar2 = &fixed_address_empty_string;
  }
  else {
    pGVar2 = (GlobalEmptyString *)((*(ulonglong *)(param_1 + param_2) & 0xfffffffffffffffe) + 8);
  }
  _Src = pGVar2;
  if (0xf < (pGVar2->value_)._Mypair._Myval2._Myres) {
    _Src = (GlobalEmptyString *)(pGVar2->value_)._Mypair._Myval2._Bx._Ptr;
  }
  uVar1 = (pGVar2->value_)._Mypair._Myval2._Mysize;
  iVar4 = (int)uVar1;
  puVar3 = param_5->cur_;
  if ((longlong)(param_5->impl_).end_ - (longlong)puVar3 < (longlong)iVar4) {
    puVar3 = io::EpsCopyOutputStream::WriteRawFallback(&param_5->impl_,_Src,iVar4,puVar3);
  }
  else {
    memcpy(puVar3,_Src,uVar1 & 0xffffffff);
    puVar3 = puVar3 + iVar4;
  }
  param_5->cur_ = puVar3;
  return;
}

// _Get_first @ 14fa81720

/* public: struct std::default_delete<class google::protobuf::MessageLite> & __ptr64 __cdecl
   std::_Compressed_pair<struct std::default_delete<class google::protobuf::MessageLite>,class
   google::protobuf::MessageLite * __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<google::protobuf::MessageLite> * __thiscall
std::
_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1>
::_Get_first(_Compressed_pair<std::default_delete<google::protobuf::MessageLite>,google::protobuf::MessageLite*___ptr64,1>
             *this)

{
  return (default_delete<google::protobuf::MessageLite> *)this;
}

// _InternalSerialize @ 14fa81730

/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::_InternalSerialize(class google::protobuf::MessageLite
   const * __ptr64,int,int,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream *
   __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::internal::ExtensionSet::_InternalSerialize
          (ExtensionSet *this,MessageLite *param_1,int param_2,int param_3,uchar *param_4,
          EpsCopyOutputStream *param_5)

{
  uchar *puVar1;
  
  if (this->flat_size_ == 0) {
    return param_4;
  }
  puVar1 = _InternalSerializeImpl(this,param_1,param_2,param_3,param_4,param_5);
  return puVar1;
}

// store @ 14fa81750

/* public: void __cdecl std::_Atomic_storage<bool,1>::store(bool) __ptr64 */

void __thiscall std::_Atomic_storage<bool,1>::store(_Atomic_storage<bool,1> *this,bool param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 14fa81760

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<bool,1>::store(bool,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<bool,1>::store(_Atomic_storage<bool,1> *this,bool param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    (this->_Storage)._Value = param_1;
    return;
  default:
    LOCK();
    (this->_Storage)._Value = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    (this->_Storage)._Value = param_1;
    return;
  }
}

// FUN_15029fa70 @ 15029fa70

void FUN_15029fa70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150474450 @ 150474450

void FUN_150474450(void)

{
  return;
}

