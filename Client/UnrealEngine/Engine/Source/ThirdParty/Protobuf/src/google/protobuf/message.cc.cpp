// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 390

// GetTypeNameImpl @ 14fa26510

/* protected: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::Message::GetTypeNameImpl(struct google::protobuf::internal::ClassData const *
   __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::Message::GetTypeNameImpl
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          ClassData *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  Metadata *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  Metadata local_18;
  
  pMVar2 = GetMetadataImpl(&local_18,(ClassDataFull *)param_1);
  pbVar1 = pMVar2->descriptor->all_names_;
  pbVar3 = pbVar1 + 1;
  if (0xf < pbVar1[1]._Mypair._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             pbVar1[1]._Mypair._Myval2._Bx._Ptr;
  }
  __return_storage_ptr__->_Mysize = pbVar1[1]._Mypair._Myval2._Mysize;
  __return_storage_ptr__->_Mydata = (char *)pbVar3;
  return __return_storage_ptr__;
}

// GetTcParseTableImpl @ 14fa26560

/* protected: static struct google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Message::GetTcParseTableImpl(class google::protobuf::MessageLite const &
   __ptr64) */

TcParseTableBase * __cdecl google::protobuf::Message::GetTcParseTableImpl(MessageLite *param_1)

{
  atomic<unsigned_int> aVar1;
  Reflection *this;
  uint uVar2;
  ClassDataFull *pCVar3;
  Metadata *pMVar4;
  TcParseTableBase *pTVar5;
  bool bVar6;
  Metadata local_18;
  
  pCVar3 = (ClassDataFull *)(**(code **)(param_1->_padding_ + 0x18))();
  pMVar4 = GetMetadataImpl(&local_18,pCVar3);
  this = pMVar4->reflection;
  if ((this->tcparse_table_once_).control_ != (atomic<unsigned_int>)0xdd) {
    LOCK();
    bVar6 = (this->tcparse_table_once_).control_ == (atomic<unsigned_int>)0x0;
    if (bVar6) {
      (this->tcparse_table_once_).control_ = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((bVar6) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (&(this->tcparse_table_once_).control_,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>&&___ptr64)'
                            ::__l2::trans,SCHEDULE_COOPERATIVE_AND_KERNEL), uVar2 == 0)) {
      pTVar5 = Reflection::CreateTcParseTable(this);
      this->tcparse_table_ = pTVar5;
      LOCK();
      aVar1 = (this->tcparse_table_once_).control_;
      (this->tcparse_table_once_).control_ = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(&this->tcparse_table_once_,1);
      }
    }
  }
  return this->tcparse_table_;
}

// SpaceUsedLongImpl @ 14fa26600

/* protected: static unsigned __int64 __cdecl google::protobuf::Message::SpaceUsedLongImpl(class
   google::protobuf::MessageLite const & __ptr64) */

__uint64 __cdecl google::protobuf::Message::SpaceUsedLongImpl(MessageLite *param_1)

{
  ClassDataFull *pCVar1;
  Metadata *pMVar2;
  __uint64 _Var3;
  Metadata local_18;
  
  pCVar1 = (ClassDataFull *)(**(code **)(param_1->_padding_ + 0x18))();
  pMVar2 = GetMetadataImpl(&local_18,pCVar1);
  _Var3 = Reflection::SpaceUsedLong(pMVar2->reflection,(Message *)param_1);
  return _Var3;
}

// FUN_14fa26640 @ 14fa26640

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14fa26640(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             Message *param_2)

{
  google::protobuf::Message::InitializationErrorString(param_2,param_1);
  return param_1;
}

// FUN_14fa26670 @ 14fa26670

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14fa26670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             Message *param_2)

{
  google::protobuf::Message::DebugString(param_2,param_1);
  return param_1;
}

// FUN_14fa266a0 @ 14fa266a0

void FUN_14fa266a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_14fa2a4f0(param_1 + 0xe);
    google::protobuf::DynamicMessageFactory::~DynamicMessageFactory
              ((DynamicMessageFactory *)(param_1 + 5));
    FUN_14fa2a560(param_1 + 1);
    *param_1 = google::protobuf::MessageFactory::vftable;
    operator_delete(param_1,0x90);
  }
  return;
}

// tuple<google::protobuf::Message_const*___ptr64&___ptr64><google::protobuf::Message_const*___ptr64&___ptr64,0> @ 14fa266f0

/* public: __cdecl std::tuple<class google::protobuf::Message const * __ptr64 &
   __ptr64>::tuple<class google::protobuf::Message const * __ptr64 & __ptr64><class
   google::protobuf::Message const * __ptr64 & __ptr64,0>(class google::protobuf::Message const *
   __ptr64 & __ptr64) __ptr64 */

tuple<google::protobuf::Message_const*___ptr64&___ptr64> * __thiscall
std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>::
tuple<google::protobuf::Message_const*___ptr64&___ptr64><google::protobuf::Message_const*___ptr64&___ptr64,0>
          (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *this,Message **param_1)

{
  *(Message ***)this = param_1;
  return this;
}

// _Tuple_val<google::protobuf::Message_const*___ptr64&___ptr64><google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa26700

/* public: __cdecl std::_Tuple_val<class google::protobuf::Message const * __ptr64 &
   __ptr64>::_Tuple_val<class google::protobuf::Message const * __ptr64 & __ptr64><class
   google::protobuf::Message const * __ptr64 & __ptr64>(class google::protobuf::Message const *
   __ptr64 & __ptr64) __ptr64 */

_Tuple_val<google::protobuf::Message_const*___ptr64&___ptr64> * __thiscall
std::_Tuple_val<google::protobuf::Message_const*___ptr64&___ptr64>::
_Tuple_val<google::protobuf::Message_const*___ptr64&___ptr64><google::protobuf::Message_const*___ptr64&___ptr64>
          (_Tuple_val<google::protobuf::Message_const*___ptr64&___ptr64> *this,Message **param_1)

{
  *(Message ***)this = param_1;
  return this;
}

// allocator<char><google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa267d0

/* public: __cdecl std::allocator<char>::allocator<char><struct
   google::protobuf::internal::DescriptorTable const * __ptr64>(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> const & __ptr64) __ptr64 */

allocator<char> * __thiscall
std::allocator<char>::allocator<char><google::protobuf::internal::DescriptorTable_const*___ptr64>
          (allocator<char> *this,
          allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1)

{
  return this;
}

// allocator<absl::lts_20240722::container_internal::AlignedType<8>_><google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa267e0

/* public: __cdecl std::allocator<struct absl::lts_20240722::container_internal::AlignedType<8>
   >::allocator<struct absl::lts_20240722::container_internal::AlignedType<8> ><struct
   google::protobuf::internal::DescriptorTable const * __ptr64>(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> const & __ptr64) __ptr64 */

allocator<absl::lts_20240722::container_internal::AlignedType<8>_> * __thiscall
std::allocator<absl::lts_20240722::container_internal::AlignedType<8>_>::
allocator<absl::lts_20240722::container_internal::AlignedType<8>_><google::protobuf::internal::DescriptorTable_const*___ptr64>
          (allocator<absl::lts_20240722::container_internal::AlignedType<8>_> *this,
          allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1)

{
  return this;
}

// optional<google::protobuf::Message_const*___ptr64><google::protobuf::Message_const*___ptr64,0> @ 14fa267f0

/* public: __cdecl std::optional<class google::protobuf::Message const * __ptr64>::optional<class
   google::protobuf::Message const * __ptr64><class google::protobuf::Message const *
   __ptr64,0>(class google::protobuf::Message const * __ptr64 && __ptr64) __ptr64 */

optional<google::protobuf::Message_const*___ptr64> * __thiscall
std::optional<google::protobuf::Message_const*___ptr64>::
optional<google::protobuf::Message_const*___ptr64><google::protobuf::Message_const*___ptr64,0>
          (optional<google::protobuf::Message_const*___ptr64> *this,Message **param_1)

{
  *(Message **)this = *param_1;
  this[8] = (optional<google::protobuf::Message_const*___ptr64>)0x1;
  return this;
}

// _Optional_construct_base<google::protobuf::Message_const*___ptr64><google::protobuf::Message_const*___ptr64> @ 14fa26810

/* public: __cdecl std::_Optional_construct_base<class google::protobuf::Message const *
   __ptr64>::_Optional_construct_base<class google::protobuf::Message const * __ptr64><class
   google::protobuf::Message const * __ptr64>(struct std::in_place_t,class google::protobuf::Message
   const * __ptr64 && __ptr64) __ptr64 */

_Optional_construct_base<google::protobuf::Message_const*___ptr64> * __thiscall
std::_Optional_construct_base<google::protobuf::Message_const*___ptr64>::
_Optional_construct_base<google::protobuf::Message_const*___ptr64><google::protobuf::Message_const*___ptr64>
          (_Optional_construct_base<google::protobuf::Message_const*___ptr64> *this,
          in_place_t param_1,Message **param_2)

{
  *(Message **)this = *param_2;
  this[8] = (_Optional_construct_base<google::protobuf::Message_const*___ptr64>)0x1;
  return this;
}

// _Optional_destruct_base<google::protobuf::Message_const*___ptr64,1><google::protobuf::Message_const*___ptr64> @ 14fa26830

/* public: __cdecl std::_Optional_destruct_base<class google::protobuf::Message const *
   __ptr64,1>::_Optional_destruct_base<class google::protobuf::Message const * __ptr64,1><class
   google::protobuf::Message const * __ptr64>(struct std::in_place_t,class google::protobuf::Message
   const * __ptr64 && __ptr64) __ptr64 */

_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1> * __thiscall
std::_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1>::
_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1><google::protobuf::Message_const*___ptr64>
          (_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1> *this,
          in_place_t param_1,Message **param_2)

{
  *(Message **)this = *param_2;
  this[8] = (_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1>)0x1;
  return this;
}

// tuple<google::protobuf::Message_const*___ptr64&___ptr64><std::_Exact_args_t,google::protobuf::Message_const*___ptr64&___ptr64,0> @ 14fa26890

/* public: __cdecl std::tuple<class google::protobuf::Message const * __ptr64 &
   __ptr64>::tuple<class google::protobuf::Message const * __ptr64 & __ptr64><struct
   std::_Exact_args_t,class google::protobuf::Message const * __ptr64 & __ptr64,0>(struct
   std::_Exact_args_t,class google::protobuf::Message const * __ptr64 & __ptr64) __ptr64 */

tuple<google::protobuf::Message_const*___ptr64&___ptr64> * __thiscall
std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>::
tuple<google::protobuf::Message_const*___ptr64&___ptr64><std::_Exact_args_t,google::protobuf::Message_const*___ptr64&___ptr64,0>
          (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *this,_Exact_args_t param_1,
          Message **param_2)

{
  *(Message ***)this = param_2;
  return this;
}

// Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1><std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa268b0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const *
   __ptr64>,3,1>::Storage<class std::allocator<struct google::protobuf::internal::DescriptorTable
   const * __ptr64>,3,1><class std::allocator<struct google::protobuf::internal::DescriptorTable
   const * __ptr64> >(struct std::in_place_t,class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> && __ptr64) __ptr64 */

Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1>::
Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1><std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1>
           *this,in_place_t param_1,
          allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_2)

{
  return this;
}

// operator<<<char_[73]> @ 14fa26a30

/* class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::operator<<<char [73]>(class
   absl::lts_20240722::log_internal::NullStream & __ptr64,char const (& __ptr64)[73]) */

NullStream * __cdecl
absl::lts_20240722::log_internal::operator<<<char_[73]>(NullStream *param_1,char *param_2)

{
  return param_1;
}

// operator<<<29> @ 14fa26a40

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<29>(char const (& __ptr64)[29]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<29>(LogMessage *this,char *param_1)

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

// operator<<<59> @ 14fa26a90

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<59>(char const (& __ptr64)[59]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<59>(LogMessage *this,char *param_1)

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

// operator<<<61> @ 14fa26ae0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<61>(char const (& __ptr64)[61]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<61>(LogMessage *this,char *param_1)

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

// FUN_14fa26b30 @ 14fa26b30

undefined8 * FUN_14fa26b30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 local_28 [8];
  undefined8 *local_20;
  char local_18;
  
  FUN_14fa29000(param_1,local_28,param_2);
  if (local_18 != '\0') {
    *local_20 = *param_2;
    local_20[1] = 0;
    return local_20 + 1;
  }
  return local_20 + 1;
}

// FUN_14fa26b80 @ 14fa26b80

ulonglong FUN_14fa26b80(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  void *_Buf2;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  size_t _Size;
  
  uVar3 = *param_2;
  if (uVar3 != *(ulonglong *)*param_1) {
    _Buf2 = *(void **)(*(ulonglong *)*param_1 + 0x10);
    puVar1 = (undefined8 *)(uVar3 + 0x10);
    uVar3 = 0xffffffffffffffff;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)*puVar1 + _Size) != '\0');
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)_Buf2 + uVar3) != '\0');
    if (_Size == uVar3) {
      iVar2 = memcmp((void *)*puVar1,_Buf2,_Size);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_14fa26bce;
    }
    return uVar3 & 0xffffffffffffff00;
  }
LAB_14fa26bce:
  return CONCAT71((int7)(uVar3 >> 8),1);
}

// FUN_14fa26be0 @ 14fa26be0

ulonglong FUN_14fa26be0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  undefined8 *puVar2;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(*param_2 + 0x10) + _Size) != '\0');
  puVar2 = (undefined8 *)*param_1;
  if (_Size == puVar2[1]) {
    iVar1 = memcmp(*(void **)(*param_2 + 0x10),(void *)*puVar2,_Size);
    puVar2 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}

// FUN_14fa26c30 @ 14fa26c30

ulonglong FUN_14fa26c30(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// FUN_14fa26cb0 @ 14fa26cb0

longlong FUN_14fa26cb0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_14fa28e60(*param_1);
  if (*(char *)(param_2 + 0x10) != '\0') {
    **(undefined8 **)(param_2 + 8) = *param_4;
  }
  return param_2;
}

// Add<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> @ 14fa26d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl google::protobuf::internal::RepeatedFieldAccessor::Add<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void *
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldAccessor::
Add<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          (RepeatedFieldAccessor *this,void *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,param_2);
  (**(code **)((longlong)*this + 0x28))(this,param_1,&local_38);
  if (0xf < local_20) {
    uVar2 = local_20 + 1;
    uVar1 = local_38._Ptr;
    if (0xfff < uVar2) {
      uVar2 = local_20 + 0x28;
      uVar1 = *(undefined8 *)(local_38._Ptr + -8);
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar1,uVar2);
  }
  return;
}

// AddAllocated<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14fa26e00

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::AddAllocated<class
   google::protobuf::internal::GenericTypeHandler<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocated<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (RepeatedPtrFieldBase *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  RepeatedPtrFieldBase *pRVar5;
  byte bVar6;
  bool bVar7;
  
  if (this->arena_ == (Arena *)0x0) {
    pvVar3 = this->tagged_rep_or_elem_;
    bVar6 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
    if (bVar6 == 0) {
      bVar7 = this->capacity_proxy_ + 1 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar7 = pvVar3 != (void *)0x0;
    }
    if (!bVar7) {
      if (bVar6 == 0) {
        uVar4 = *(uint *)((longlong)pvVar3 + -1);
        pRVar5 = (RepeatedPtrFieldBase *)((longlong)pvVar3 + 7);
      }
      else {
        uVar4 = (uint)(pvVar3 != (void *)0x0);
        pRVar5 = this;
      }
      if (this->current_size_ < (int)uVar4) {
        if ((~(byte)pvVar3 & 1) == 0) {
          uVar4 = *(uint *)((longlong)pvVar3 + -1);
        }
        else {
          uVar4 = (uint)(pvVar3 != (void *)0x0);
        }
        (&pRVar5->tagged_rep_or_elem_)[(int)uVar4] =
             (&pRVar5->tagged_rep_or_elem_)[this->current_size_];
      }
      iVar2 = this->current_size_;
      this->current_size_ = iVar2 + 1;
      (&pRVar5->tagged_rep_or_elem_)[iVar2] = param_1;
      if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
        piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
        *piVar1 = *piVar1 + 1;
        return;
      }
      return;
    }
  }
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (this,param_1,(Arena *)0x0,this->arena_);
  return;
}

// AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14fa26ec0

/* protected: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<class
   google::protobuf::internal::GenericTypeHandler<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class google::protobuf::Arena *
   __ptr64,class google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (RepeatedPtrFieldBase *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2,
          Arena *param_3)

{
  if ((param_3 == (Arena *)0x0) || (param_2 != (Arena *)0x0)) {
    if (param_3 != param_2) {
      param_1 = CloneSlow(param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)param_1);
    }
  }
  else if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    ThreadSafeArena::AddCleanup
              (&param_3->impl_,param_1,
               arena_delete_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (this,param_1);
  return;
}

// AllocateInternal<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>,1> @ 14fa26f20

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateInternal<struct
   google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet>,1>(void) __ptr64 */

void * __thiscall
google::protobuf::Arena::
AllocateInternal<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>,1>
          (Arena *this)

{
  void *pvVar1;
  
  pvVar1 = Allocate(this,0x18);
  return pvVar1;
}

// CalculateReserveSize<google::protobuf::UnknownField,16> @ 14fa26f60

/* int __cdecl google::protobuf::internal::CalculateReserveSize<class
   google::protobuf::UnknownField,16>(int,int) */

int __cdecl
google::protobuf::internal::CalculateReserveSize<google::protobuf::UnknownField,16>
          (int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (0x3ffffff7 < param_1) {
    return 0x7fffffff;
  }
  iVar1 = param_1 * 2 + 1;
  if (iVar1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1;
}

// CallOnceImpl<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_> @ 14fa26f90

/* void __cdecl absl::lts_20240722::base_internal::CallOnceImpl<class `private: struct
   google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64'::`2'::<lambda_1> >(struct
   std::atomic<unsigned int> * __ptr64,enum absl::lts_20240722::base_internal::SchedulingMode,class
   `private: struct google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64'::`2'::<lambda_1> && __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::
CallOnceImpl<_private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64_::_2_::<lambda_1>_>
          (atomic<unsigned_int> *param_1,SchedulingMode param_2,<lambda_1> *param_3)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  TcParseTableBase *pTVar3;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar2 = SpinLockWait(param_1,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>&&___ptr64)'
                            ::__l2::trans,param_2), uVar2 == 0)) {
    pTVar3 = google::protobuf::Reflection::CreateTcParseTable(*(Reflection **)param_3);
    *(TcParseTableBase **)(*(longlong *)param_3 + 0x68) = pTVar3;
    LOCK();
    aVar1 = *param_1;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
    }
  }
  return;
}

// FUN_14fa27000 @ 14fa27000

void FUN_14fa27000(atomic<unsigned_int> *param_1,SchedulingMode param_2,undefined8 *param_3)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1535d60d0,param_2), uVar2 == 0)) {
    google::protobuf::internal::AssignDescriptorsOnceInnerCall((DescriptorTable *)*param_3);
    LOCK();
    aVar1 = *param_1;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
    }
  }
  return;
}

// Check_EQImpl<google::protobuf::internal::RepeatedPtrFieldMessageAccessor_const*___ptr64,google::protobuf::internal::RepeatedFieldAccessor_const*___ptr64> @ 14fa27070

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<class
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor const * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64>(class
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor const * __ptr64 const & __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64 const & __ptr64,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
Check_EQImpl<google::protobuf::internal::RepeatedPtrFieldMessageAccessor_const*___ptr64,google::protobuf::internal::RepeatedFieldAccessor_const*___ptr64>
          (RepeatedPtrFieldMessageAccessor **param_1,RepeatedFieldAccessor **param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if ((RepeatedFieldAccessor *)*param_1 == *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                     ((RepeatedFieldAccessor *)*param_1,*param_2,param_3);
  return pbVar1;
}

// Construct<google::protobuf::Arena*___ptr64> @ 14fa27090

/* private: static struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl
   google::protobuf::Arena::InternalHelper<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >::Construct<class google::protobuf::Arena * __ptr64>(void * __ptr64,class
   google::protobuf::Arena * __ptr64 && __ptr64) */

Container<google::protobuf::UnknownFieldSet> * __cdecl
google::protobuf::Arena::
InternalHelper<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
::Construct<google::protobuf::Arena*___ptr64>(void *param_1,Arena **param_2)

{
  *(Arena **)((longlong)param_1 + 8) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return param_1;
}

// Create<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_> @ 14fa270b0

/* public: static struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl google::protobuf::Arena::Create<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >(class google::protobuf::Arena * __ptr64) */

Container<google::protobuf::UnknownFieldSet> * __cdecl
google::protobuf::Arena::
Create<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
          (Arena *param_1)

{
  Container<google::protobuf::UnknownFieldSet> *pCVar1;
  
  if (param_1 != (Arena *)0x0) {
    pCVar1 = Allocate(param_1,0x18);
    (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
    *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
    return pCVar1;
  }
  pCVar1 = ::operator_new(0x18);
  if (pCVar1 != (Container<google::protobuf::UnknownFieldSet> *)0x0) {
    (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
    return pCVar1;
  }
  return (Container<google::protobuf::UnknownFieldSet> *)0x0;
}

// CreateArenaCompatible<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_> @ 14fa27110

/* private: static struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl
   google::protobuf::Arena::CreateArenaCompatible<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >(class google::protobuf::Arena * __ptr64) */

Container<google::protobuf::UnknownFieldSet> * __cdecl
google::protobuf::Arena::
CreateArenaCompatible<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
          (Arena *param_1)

{
  Container<google::protobuf::UnknownFieldSet> *pCVar1;
  
  if (param_1 != (Arena *)0x0) {
    pCVar1 = Allocate(param_1,0x18);
    (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
    *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
    return pCVar1;
  }
  pCVar1 = ::operator_new(0x18);
  if (pCVar1 != (Container<google::protobuf::UnknownFieldSet> *)0x0) {
    (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
    return pCVar1;
  }
  return (Container<google::protobuf::UnknownFieldSet> *)0x0;
}

// Deallocate<8,std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa27170

/* void __cdecl absl::lts_20240722::container_internal::Deallocate<8,class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> * __ptr64,void * __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::container_internal::
Deallocate<8,std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          void *param_2,__uint64 param_3)

{
  void *pvVar1;
  ulong64 uVar2;
  
  uVar2 = param_3 + 7 & 0xfffffffffffffff8;
  pvVar1 = param_2;
  if (0xfff < uVar2) {
    pvVar1 = *(void **)((longlong)param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pvVar1,uVar2);
  return;
}

// Deallocate<> @ 14fa271c0

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)
    void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,class std::vector<struct CHN * __ptr64,class std::allocator<struct
   CHN * __ptr64> > > > >(class std::allocator<struct std::pair<unsigned long const ,class
   std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> > > > * __ptr64,void
   * __ptr64,unsigned __int64)
    void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned __int64 const ,unsigned long> > >(class std::allocator<struct
   std::pair<unsigned __int64 const ,unsigned long> > * __ptr64,void * __ptr64,unsigned __int64)
    void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   PublicSymbolEntry> >(class std::allocator<struct PublicSymbolEntry> * __ptr64,void *
   __ptr64,unsigned __int64)
     6 names - too many to list
   
   Library: Visual Studio 2019 Release */

void Deallocate<>(undefined8 param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  ulong64 uVar2;
  
  uVar2 = param_3 + 7U & 0xfffffffffffffff8;
  pvVar1 = param_2;
  if (0xfff < uVar2) {
    pvVar1 = *(void **)((longlong)param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar1,uVar2);
  return;
}

// FUN_14fa272f0 @ 14fa272f0

ulonglong FUN_14fa272f0(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  void *_Buf2;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  size_t _Size;
  
  uVar3 = *param_2;
  if (uVar3 != *(ulonglong *)*param_1) {
    _Buf2 = *(void **)(*(ulonglong *)*param_1 + 0x10);
    puVar1 = (undefined8 *)(uVar3 + 0x10);
    uVar3 = 0xffffffffffffffff;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)*puVar1 + _Size) != '\0');
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)_Buf2 + uVar3) != '\0');
    if (_Size == uVar3) {
      iVar2 = memcmp((void *)*puVar1,_Buf2,_Size);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_14fa2733e;
    }
    return uVar3 & 0xffffffffffffff00;
  }
LAB_14fa2733e:
  return CONCAT71((int7)(uVar3 >> 8),1);
}

// FUN_14fa27350 @ 14fa27350

ulonglong FUN_14fa27350(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  undefined8 *puVar2;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(*param_2 + 0x10) + _Size) != '\0');
  puVar2 = (undefined8 *)*param_1;
  if (_Size == puVar2[1]) {
    iVar1 = memcmp(*(void **)(*param_2 + 0x10),(void *)*puVar2,_Size);
    puVar2 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}

// FUN_14fa273a0 @ 14fa273a0

longlong FUN_14fa273a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_14fa28e60(*param_2,param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    **(undefined8 **)(param_1 + 8) = *param_3;
  }
  return param_1;
}

// FUN_14fa273f0 @ 14fa273f0

ulonglong FUN_14fa273f0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet> @ 14fa27470

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DeleteOutOfLineHelper<class
   google::protobuf::UnknownFieldSet>(void) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::
DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>(InternalMetadata *this)

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  
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

// DoClear<google::protobuf::UnknownFieldSet> @ 14fa27530

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoClear<class
   google::protobuf::UnknownFieldSet>(void) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  uint uVar2;
  
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

// DoCreateMessage<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_> @ 14fa27580

/* private: struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl
   google::protobuf::Arena::DoCreateMessage<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >(void) __ptr64 */

Container<google::protobuf::UnknownFieldSet> * __thiscall
google::protobuf::Arena::
DoCreateMessage<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
          (Arena *this)

{
  Container<google::protobuf::UnknownFieldSet> *pCVar1;
  
  pCVar1 = Allocate(this,0x18);
  (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)this;
  *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
  return pCVar1;
}

// DoMergeFrom<google::protobuf::UnknownFieldSet> @ 14fa275b0

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoMergeFrom<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::UnknownFieldSet const & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this,UnknownFieldSet *param_1)

{
  UnknownFieldSet *this_00;
  
  if ((this->ptr_ & 1) != 0) {
    UnknownFieldSet::MergeFrom((UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8),param_1);
    return;
  }
  this_00 = mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this);
  UnknownFieldSet::MergeFrom(this_00,param_1);
  return;
}

// DoSwap<google::protobuf::UnknownFieldSet> @ 14fa27600

/* private: void __cdecl google::protobuf::internal::InternalMetadata::DoSwap<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::UnknownFieldSet * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::DoSwap<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this,UnknownFieldSet *param_1)

{
  UnknownFieldSet *this_00;
  
  if ((this->ptr_ & 1) != 0) {
    UnknownFieldSet::Swap((UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8),param_1);
    return;
  }
  this_00 = mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this);
  UnknownFieldSet::Swap(this_00,param_1);
  return;
}

// DownCastMessage<google::protobuf::Message> @ 14fa27650

/* class google::protobuf::Message const & __ptr64 __cdecl google::protobuf::DownCastMessage<class
   google::protobuf::Message>(class google::protobuf::MessageLite const & __ptr64) */

Message * __cdecl google::protobuf::DownCastMessage<google::protobuf::Message>(MessageLite *param_1)

{
  return (Message *)param_1;
}

// Get<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fa27660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::internal::RepeatedFieldAccessor::Get<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void const *
   __ptr64,int)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::RepeatedFieldAccessor::
Get<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (RepeatedFieldAccessor *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          void *param_1,int param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  uStack_30 = 0;
  local_28 = ___xmm_000000000000000f0000000000000000;
  uStack_20 = _UNK_15076add8;
  local_38 = (void *)0x0;
  local_40 = __return_storage_ptr__;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (**(code **)((longlong)*this + 0x10))(0,param_1,param_2,&local_38);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(__return_storage_ptr__,pbVar1);
  if (0xf < uStack_20) {
    uVar3 = uStack_20 + 1;
    pvVar2 = local_38;
    if (0xfff < uVar3) {
      uVar3 = uStack_20 + 0x28;
      pvVar2 = *(void **)((longlong)local_38 + -8);
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  return __return_storage_ptr__;
}

// GetReferenceableValue<google::protobuf::internal::RepeatedFieldAccessor_const*___ptr64> @ 14fa27720

/* class google::protobuf::internal::RepeatedFieldAccessor const * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::GetReferenceableValue<class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64>(class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64 const & __ptr64) */

RepeatedFieldAccessor ** __cdecl
absl::lts_20240722::log_internal::
GetReferenceableValue<google::protobuf::internal::RepeatedFieldAccessor_const*___ptr64>
          (RepeatedFieldAccessor **param_1)

{
  return param_1;
}

// GetReferenceableValue<google::protobuf::internal::RepeatedPtrFieldMessageAccessor_const*___ptr64> @ 14fa27730

/* class google::protobuf::internal::RepeatedPtrFieldMessageAccessor const * __ptr64 const & __ptr64
   __cdecl absl::lts_20240722::log_internal::GetReferenceableValue<class
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor const * __ptr64>(class
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor const * __ptr64 const & __ptr64) */

RepeatedPtrFieldMessageAccessor ** __cdecl
absl::lts_20240722::log_internal::
GetReferenceableValue<google::protobuf::internal::RepeatedPtrFieldMessageAccessor_const*___ptr64>
          (RepeatedPtrFieldMessageAccessor **param_1)

{
  return param_1;
}

// FUN_14fa277b0 @ 14fa277b0

undefined ** FUN_14fa277b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4ae4) {
    _Init_thread_header(&DAT_1553e4ae4);
    if (DAT_1553e4ae4 == -1) {
      atexit(FUN_1504743c0);
      _Init_thread_footer(&DAT_1553e4ae4);
    }
  }
  return &PTR_vftable_154e1cea8;
}

// FUN_14fa27820 @ 14fa27820

undefined ** FUN_14fa27820(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4ae8) {
    _Init_thread_header(&DAT_1553e4ae8);
    if (DAT_1553e4ae8 == -1) {
      atexit(FUN_1504743d0);
      _Init_thread_footer(&DAT_1553e4ae8);
    }
  }
  return &PTR_vftable_154e1ceb0;
}

// GrowSizeIntoSingleGroup<absl::lts_20240722::container_internal::hash_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>,std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa278f0

/* public: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::GrowSizeIntoSingleGroup<struct
   absl::lts_20240722::container_internal::hash_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>,class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::
GrowSizeIntoSingleGroup<absl::lts_20240722::container_internal::hash_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>,std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (HashSetResizeHelper *this,CommonFields *param_1,
          allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  pvVar1 = (param_1->heap_or_soo_).heap.slot_array.p;
  uVar4 = 0;
  uVar2 = *(ulonglong *)(this + 0x10);
  lVar3 = *(longlong *)(this + 8);
  if (uVar2 != 0) {
    do {
      if (-1 < *(char *)(uVar4 + *(longlong *)this)) {
        *(undefined8 *)((longlong)pvVar1 + (uVar4 ^ (uVar2 >> 1) + 1) * 8) =
             *(undefined8 *)(lVar3 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(this + 0x10));
  }
  return;
}

// InternalDeallocate<0> @ 14fa27940

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::InternalDeallocate<0>(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::InternalDeallocate<0>
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
  uVar2 = ((longlong)(this->soo_rep_).field0_0x0.long_rep.capacity + 1) * 0x10;
  if (*(Arena **)(uVar1 - 0x10) == (Arena *)0x0) {
    ::operator_delete((void *)(uVar1 - 0x10),uVar2);
    return;
  }
  Arena::ReturnArrayMemory(*(Arena **)(uVar1 - 0x10),(void *)(uVar1 - 0x10),uVar2);
  return;
}

// IsDestructionTrivial<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa27990

/* UNKNOWN __cdecl absl::lts_20240722::container_internal::IsDestructionTrivial<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>,struct
   google::protobuf::internal::DescriptorTable const * __ptr64>(void) */

undefined1 __cdecl
absl::lts_20240722::container_internal::
IsDestructionTrivial<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64>
          (void)

{
  undefined1 local_res8;
  
  return local_res8;
}

// FUN_14fa27ab0 @ 14fa27ab0

void * FUN_14fa27ab0(void *param_1)

{
  google::protobuf::internal::OnShutdownRun(FUN_14fa266a0,param_1);
  return param_1;
}

// FUN_14fa27b20 @ 14fa27b20

ulonglong FUN_14fa27b20(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14fa27ba0

/* protected: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<class
   google::protobuf::internal::GenericTypeHandler<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (RepeatedPtrFieldBase *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte bVar6;
  void *pvVar7;
  ulong64 uVar8;
  uint uVar9;
  RepeatedPtrFieldBase *pRVar10;
  int iVar11;
  bool bVar12;
  
  iVar2 = this->current_size_;
  iVar11 = this->capacity_proxy_ + 1;
  if (iVar2 < iVar11) {
    pvVar3 = this->tagged_rep_or_elem_;
    bVar6 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
    if (bVar6 == 0) {
      bVar12 = iVar11 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar12 = pvVar3 != (void *)0x0;
    }
    if (bVar12) {
      pRVar10 = this;
      if (bVar6 == 0) {
        pRVar10 = (RepeatedPtrFieldBase *)((longlong)iVar2 * 8 + 7 + (longlong)pvVar3);
      }
      if ((this->arena_ == (Arena *)0x0) &&
         (plVar4 = pRVar10->tagged_rep_or_elem_, plVar4 != (longlong *)0x0)) {
        uVar5 = plVar4[3];
        if (0xf < uVar5) {
          pvVar3 = (void *)*plVar4;
          uVar8 = uVar5 + 1;
          pvVar7 = pvVar3;
          if (0xfff < uVar8) {
            pvVar7 = *(void **)((longlong)pvVar3 + -8);
            uVar8 = uVar5 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pvVar7,uVar8);
        }
        plVar4[2] = 0;
        plVar4[3] = 0xf;
        *(undefined1 *)plVar4 = 0;
        ::operator_delete(plVar4,0x20);
      }
    }
    else {
      if (bVar6 == 0) {
        uVar9 = *(uint *)((longlong)pvVar3 + -1);
      }
      else {
        uVar9 = (uint)(pvVar3 != (void *)0x0);
      }
      if (iVar2 < (int)uVar9) {
        if (bVar6 == 0) {
          *(undefined8 *)((longlong)*(int *)((longlong)pvVar3 + -1) * 8 + 7 + (longlong)pvVar3) =
               *(undefined8 *)((longlong)pvVar3 + (longlong)iVar2 * 8 + 7);
          piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
          *piVar1 = *piVar1 + 1;
        }
        else {
          this->tagged_rep_or_elem_ = pvVar3;
          piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
          *piVar1 = *piVar1 + 1;
        }
      }
      else if (bVar6 == 0) {
        *(int *)((longlong)pvVar3 + -1) = *(int *)((longlong)pvVar3 + -1) + 1;
      }
    }
  }
  else {
    InternalExtend(this,1);
    piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
    *piVar1 = *piVar1 + 1;
  }
  iVar2 = this->current_size_;
  this->current_size_ = iVar2 + 1;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + (longlong)iVar2 * 8 + 7);
  }
  this->tagged_rep_or_elem_ = param_1;
  return;
}

// _Copy_memmove<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField*___ptr64> @ 14fa27d10

/* class google::protobuf::UnknownField * __ptr64 __cdecl std::_Copy_memmove<class
   google::protobuf::UnknownField const * __ptr64,class google::protobuf::UnknownField *
   __ptr64>(class google::protobuf::UnknownField const * __ptr64,class
   google::protobuf::UnknownField const * __ptr64,class google::protobuf::UnknownField * __ptr64) */

UnknownField * __cdecl
std::
_Copy_memmove<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField*___ptr64>
          (UnknownField *param_1,UnknownField *param_2,UnknownField *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (UnknownField *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_n<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField*___ptr64> @ 14fa27d50

/* class google::protobuf::UnknownField * __ptr64 __cdecl std::_Copy_memmove_n<class
   google::protobuf::UnknownField const * __ptr64,class google::protobuf::UnknownField *
   __ptr64>(class google::protobuf::UnknownField const * __ptr64,unsigned __int64,class
   google::protobuf::UnknownField * __ptr64) */

UnknownField * __cdecl
std::
_Copy_memmove_n<google::protobuf::UnknownField_const*___ptr64,google::protobuf::UnknownField*___ptr64>
          (UnknownField *param_1,__uint64 param_2,UnknownField *param_3)

{
  memmove(param_3,param_1,param_2 * 0x10);
  return param_3 + param_2;
}

// _Get_unwrapped_n<google::protobuf::UnknownField*___ptr64&___ptr64,int> @ 14fa27d90

/* UNKNOWN __cdecl std::_Get_unwrapped_n<class google::protobuf::UnknownField * __ptr64 &
   __ptr64,int>(class google::protobuf::UnknownField * __ptr64 & __ptr64,int) */

UnknownField * __cdecl
std::_Get_unwrapped_n<google::protobuf::UnknownField*___ptr64&___ptr64,int>
          (UnknownField **param_1,int param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<google::protobuf::UnknownField_const*___ptr64_const&___ptr64,int> @ 14fa27da0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<class google::protobuf::UnknownField const * __ptr64 const
   & __ptr64,int>(class google::protobuf::UnknownField const * __ptr64 const & __ptr64,int) */

UnknownField * __cdecl
std::_Get_unwrapped_n<google::protobuf::UnknownField_const*___ptr64_const&___ptr64,int>
          (UnknownField **param_1,int param_2)

{
  return *param_1;
}

// _Seek_wrapped<google::protobuf::UnknownField*___ptr64,google::protobuf::UnknownField*___ptr64&___ptr64> @ 14fa27db0

/* void __cdecl std::_Seek_wrapped<class google::protobuf::UnknownField * __ptr64,class
   google::protobuf::UnknownField * __ptr64 & __ptr64>(class google::protobuf::UnknownField *
   __ptr64 & __ptr64,class google::protobuf::UnknownField * __ptr64 & __ptr64) */

void __cdecl
std::
_Seek_wrapped<google::protobuf::UnknownField*___ptr64,google::protobuf::UnknownField*___ptr64&___ptr64>
          (UnknownField **param_1,UnknownField **param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<google::protobuf::UnknownField*___ptr64> @ 14fa27dc0

/* UNKNOWN __cdecl std::_To_address<class google::protobuf::UnknownField * __ptr64>(class
   google::protobuf::UnknownField * __ptr64 const & __ptr64) */

UnknownField * __cdecl
std::_To_address<google::protobuf::UnknownField*___ptr64>(UnknownField **param_1)

{
  return *param_1;
}

// _To_address<google::protobuf::UnknownField_const*___ptr64> @ 14fa27dd0

/* UNKNOWN __cdecl std::_To_address<class google::protobuf::UnknownField const * __ptr64>(class
   google::protobuf::UnknownField const * __ptr64 const & __ptr64) */

UnknownField * __cdecl
std::_To_address<google::protobuf::UnknownField_const*___ptr64>(UnknownField **param_1)

{
  return *param_1;
}

// _Tuple_get<0,google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa27de0

/* UNKNOWN && __ptr64 __cdecl std::_Tuple_get<0,class google::protobuf::Message const * __ptr64 &
   __ptr64>(class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> && __ptr64)
    */

UNKNOWN * __cdecl
std::_Tuple_get<0,google::protobuf::Message_const*___ptr64&___ptr64>
          (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *param_1)

{
  return *(UNKNOWN **)param_1;
}

// FUN_14fa27e00 @ 14fa27e00

ulonglong FUN_14fa27e00(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  void *_Buf2;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  size_t _Size;
  
  uVar3 = *param_2;
  if (uVar3 != *(ulonglong *)*param_1) {
    _Buf2 = *(void **)(*(ulonglong *)*param_1 + 0x10);
    puVar1 = (undefined8 *)(uVar3 + 0x10);
    uVar3 = 0xffffffffffffffff;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)*puVar1 + _Size) != '\0');
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)_Buf2 + uVar3) != '\0');
    if (_Size == uVar3) {
      iVar2 = memcmp((void *)*puVar1,_Buf2,_Size);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_14fa27e4e;
    }
    return uVar3 & 0xffffffffffffff00;
  }
LAB_14fa27e4e:
  return CONCAT71((int7)(uVar3 >> 8),1);
}

// FUN_14fa27e60 @ 14fa27e60

ulonglong FUN_14fa27e60(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  void *_Buf2;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  size_t _Size;
  
  uVar3 = *param_2;
  if (uVar3 != *(ulonglong *)*param_1) {
    _Buf2 = *(void **)(*(ulonglong *)*param_1 + 0x10);
    puVar1 = (undefined8 *)(uVar3 + 0x10);
    uVar3 = 0xffffffffffffffff;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)*puVar1 + _Size) != '\0');
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)_Buf2 + uVar3) != '\0');
    if (_Size == uVar3) {
      iVar2 = memcmp((void *)*puVar1,_Buf2,_Size);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_14fa27eae;
    }
    return uVar3 & 0xffffffffffffff00;
  }
LAB_14fa27eae:
  return CONCAT71((int7)(uVar3 >> 8),1);
}

// FUN_14fa27f00 @ 14fa27f00

ulonglong FUN_14fa27f00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  undefined8 *puVar2;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(*param_2 + 0x10) + _Size) != '\0');
  puVar2 = (undefined8 *)*param_1;
  if (_Size == puVar2[1]) {
    iVar1 = memcmp(*(void **)(*param_2 + 0x10),(void *)*puVar2,_Size);
    puVar2 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}

// FUN_14fa27f50 @ 14fa27f50

ulonglong FUN_14fa27f50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  undefined8 *puVar2;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(*param_2 + 0x10) + _Size) != '\0');
  puVar2 = (undefined8 *)*param_1;
  if (_Size == puVar2[1]) {
    iVar1 = memcmp(*(void **)(*param_2 + 0x10),(void *)*puVar2,_Size);
    puVar2 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}

// FUN_14fa27fa0 @ 14fa27fa0

longlong FUN_14fa27fa0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_14fa28e60(*param_2,param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    **(undefined8 **)(param_1 + 8) = *param_3;
  }
  return param_1;
}

// FUN_14fa27ff0 @ 14fa27ff0

longlong FUN_14fa27ff0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_14fa28e60(*param_2,param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    **(undefined8 **)(param_1 + 8) = *param_3;
  }
  return param_1;
}

// FUN_14fa280e0 @ 14fa280e0

ulonglong FUN_14fa280e0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// FUN_14fa28160 @ 14fa28160

ulonglong FUN_14fa28160(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// call_once<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_> @ 14fa281e0

/* void __cdecl absl::lts_20240722::call_once<class `private: struct
   google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64'::`2'::<lambda_1> >(class
   absl::lts_20240722::once_flag & __ptr64,class `private: struct
   google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64'::`2'::<lambda_1> && __ptr64) */

void __cdecl
absl::lts_20240722::
call_once<_private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64_::_2_::<lambda_1>_>
          (once_flag *param_1,<lambda_1> *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  TcParseTableBase *pTVar3;
  bool bVar4;
  
  if (param_1->control_ != (atomic<unsigned_int>)0xdd) {
    LOCK();
    bVar4 = param_1->control_ == (atomic<unsigned_int>)0x0;
    if (bVar4) {
      param_1->control_ = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((bVar4) ||
       (uVar2 = base_internal::SpinLockWait
                          (&param_1->control_,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>&&___ptr64)'
                            ::__l2::trans,SCHEDULE_COOPERATIVE_AND_KERNEL), uVar2 == 0)) {
      pTVar3 = google::protobuf::Reflection::CreateTcParseTable(*(Reflection **)param_2);
      *(TcParseTableBase **)(*(longlong *)param_2 + 0x68) = pTVar3;
      LOCK();
      aVar1 = param_1->control_;
      param_1->control_ = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(param_1,1);
      }
    }
  }
  return;
}

// FUN_14fa28270 @ 14fa28270

void FUN_14fa28270(atomic<unsigned_int> *param_1,undefined8 *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  
  if (*param_1 != (atomic<unsigned_int>)0xdd) {
    LOCK();
    aVar1 = *param_1;
    if (aVar1 == (atomic<unsigned_int>)0x0) {
      *param_1 = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((aVar1 == (atomic<unsigned_int>)0x0) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (param_1,3,(SpinLockWaitTransition *)&DAT_1535d60d0,
                           SCHEDULE_COOPERATIVE_AND_KERNEL), uVar2 == 0)) {
      google::protobuf::internal::AssignDescriptorsOnceInnerCall((DescriptorTable *)*param_2);
      LOCK();
      aVar1 = *param_1;
      *param_1 = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(param_1,1);
      }
    }
  }
  return;
}

// construct<google::protobuf::internal::DescriptorTable_const*___ptr64,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64> @ 14fa28340

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >::construct<struct
   google::protobuf::internal::DescriptorTable const * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64>(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> &
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 const,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
::
construct<google::protobuf::internal::DescriptorTable_const*___ptr64,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2,DescriptorTable **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64> @ 14fa283f0

/* public: static void __cdecl absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>::construct<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64>(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> *
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>::
construct<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2,DescriptorTable **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64> @ 14fa28400

/* public: static void __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::construct<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64>(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> *
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::
construct<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2,DescriptorTable **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<google::protobuf::internal::DescriptorTable_const*___ptr64,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64,0> @ 14fa284d0

/* struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 __cdecl
   std::construct_at<struct google::protobuf::internal::DescriptorTable const * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64,0>(struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 const,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 const & __ptr64) */

DescriptorTable ** __cdecl
std::
construct_at<google::protobuf::internal::DescriptorTable_const*___ptr64,google::protobuf::internal::DescriptorTable_const*___ptr64_const&___ptr64,0>
          (DescriptorTable **param_1,DescriptorTable **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// destroy<google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa28580

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >::destroy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> & __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
::destroy<google::protobuf::internal::DescriptorTable_const*___ptr64>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2)

{
  return;
}

// destroy<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa285b0

/* public: static UNKNOWN __cdecl absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>::destroy<class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

undefined1 __cdecl
absl::lts_20240722::container_internal::
FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>::
destroy<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2)

{
  undefined1 local_res18;
  
  return local_res18;
}

// destroy<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa285c0

/* public: static UNKNOWN __cdecl
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::destroy<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> >(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> *
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

undefined1 __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::destroy<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2)

{
  undefined1 local_res18;
  
  return local_res18;
}

// destroy_at<google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa28600

/* void __cdecl std::destroy_at<struct google::protobuf::internal::DescriptorTable const *
   __ptr64>(struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 const) */

void __cdecl
std::destroy_at<google::protobuf::internal::DescriptorTable_const*___ptr64>
          (DescriptorTable **param_1)

{
  return;
}

// destroy_is_trivial<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa28630

/* public: static bool __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::destroy_is_trivial<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> >(void) */

bool __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::destroy_is_trivial<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (void)

{
  return true;
}

// element<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa28660

/* public: static struct google::protobuf::internal::DescriptorTable const * __ptr64 & __ptr64
   __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::element<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >(struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

DescriptorTable ** __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::
element<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (DescriptorTable **param_1)

{
  return param_1;
}

// FUN_14fa28670 @ 14fa28670

longlong FUN_14fa28670(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  FUN_14fa28e60();
  if (*(char *)(param_2 + 0x10) != '\0') {
    **(undefined8 **)(param_2 + 8) = *param_3;
  }
  return param_2;
}

// FUN_14fa28720 @ 14fa28720

longlong * FUN_14fa28720(ulonglong *param_1,longlong *param_2,ulonglong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  char cVar21;
  char cVar22;
  uint uVar20;
  char cVar23;
  longlong lStack_30;
  
  uVar2 = *param_1;
  if (uVar2 < 2) {
    if ((1 < param_1[1]) && (param_1[2] == *param_3)) {
      *param_2 = (longlong)&absl::lts_20240722::container_internal::kSooControl;
      param_2[1] = (longlong)(param_1 + 2);
      return param_2;
    }
    *param_2 = 0;
    param_2[1] = lStack_30;
    return param_2;
  }
  uVar3 = *param_3;
  lVar16 = 0;
  uVar4 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) + uVar3;
  uVar12 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8) ^
           SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0);
  uVar14 = (uVar4 >> 5 ^ uVar12) >> 7;
  uVar10 = (undefined1)uVar12;
  uVar7 = CONCAT11(uVar10,uVar10);
  uVar20 = CONCAT22(uVar7,uVar7) & 0x7f7f7f7f;
  lVar13 = lVar16;
  do {
    uVar14 = uVar14 & uVar2;
    pcVar1 = (char *)(uVar14 + uVar4);
    cVar19 = (char)uVar20;
    auVar17[0] = -(*pcVar1 == cVar19);
    cVar21 = (char)(uVar20 >> 8);
    auVar17[1] = -(pcVar1[1] == cVar21);
    cVar22 = (char)(uVar20 >> 0x10);
    auVar17[2] = -(pcVar1[2] == cVar22);
    cVar23 = (char)(uVar20 >> 0x18);
    auVar17[3] = -(pcVar1[3] == cVar23);
    auVar17[4] = -(pcVar1[4] == cVar19);
    auVar17[5] = -(pcVar1[5] == cVar21);
    auVar17[6] = -(pcVar1[6] == cVar22);
    auVar17[7] = -(pcVar1[7] == cVar23);
    auVar17[8] = -(pcVar1[8] == cVar19);
    auVar17[9] = -(pcVar1[9] == cVar21);
    auVar17[10] = -(pcVar1[10] == cVar22);
    auVar17[0xb] = -(pcVar1[0xb] == cVar23);
    auVar17[0xc] = -(pcVar1[0xc] == cVar19);
    auVar17[0xd] = -(pcVar1[0xd] == cVar21);
    auVar17[0xe] = -(pcVar1[0xe] == cVar22);
    auVar17[0xf] = -(pcVar1[0xf] == cVar23);
    uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
    if (uVar11 != 0) {
      do {
        uVar8 = uVar11 | 0xffff0000;
        if (__isa_available < 5) {
          uVar9 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
        }
        else {
          uVar9 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
        }
        uVar12 = uVar9 + uVar14 & uVar2;
        puVar15 = (ulonglong *)(uVar12 * 0x10 + param_1[3]);
        if (*puVar15 == uVar3) {
          lVar16 = uVar12 + uVar4;
          param_2[1] = (longlong)puVar15;
          goto LAB_14fa288b1;
        }
        uVar11 = uVar11 & uVar11 - 1;
      } while (uVar11 != 0);
    }
    auVar18[0] = -(__xmm_80808080808080808080808080808080 == *pcVar1);
    auVar18[1] = -(UNK_1508be4f1 == pcVar1[1]);
    auVar18[2] = -(UNK_1508be4f2 == pcVar1[2]);
    auVar18[3] = -(UNK_1508be4f3 == pcVar1[3]);
    auVar18[4] = -(UNK_1508be4f4 == pcVar1[4]);
    auVar18[5] = -(UNK_1508be4f5 == pcVar1[5]);
    auVar18[6] = -(UNK_1508be4f6 == pcVar1[6]);
    auVar18[7] = -(UNK_1508be4f7 == pcVar1[7]);
    auVar18[8] = -(UNK_1508be4f8 == pcVar1[8]);
    auVar18[9] = -(UNK_1508be4f9 == pcVar1[9]);
    auVar18[10] = -(UNK_1508be4fa == pcVar1[10]);
    auVar18[0xb] = -(UNK_1508be4fb == pcVar1[0xb]);
    auVar18[0xc] = -(UNK_1508be4fc == pcVar1[0xc]);
    auVar18[0xd] = -(UNK_1508be4fd == pcVar1[0xd]);
    auVar18[0xe] = -(UNK_1508be4fe == pcVar1[0xe]);
    auVar18[0xf] = -(UNK_1508be4ff == pcVar1[0xf]);
    if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
LAB_14fa288b1:
      *param_2 = lVar16;
      return param_2;
    }
    lVar13 = lVar13 + 0x10;
    uVar14 = uVar14 + lVar13;
  } while( true );
}

// FUN_14fa288e0 @ 14fa288e0

longlong * FUN_14fa288e0(ulonglong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Buf1;
  bool bVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  void *_Buf2;
  int iVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  byte bVar26;
  ulonglong uVar27;
  ushort uVar28;
  size_t sVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  size_t _Size;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong local_res20;
  longlong lStack_70;
  
  if (*param_1 < 2) {
    if (1 < param_1[1]) {
      sVar29 = 0xffffffffffffffff;
      do {
        sVar29 = sVar29 + 1;
      } while (*(char *)((longlong)*(void **)(param_1[2] + 0x10) + sVar29) != '\0');
      if ((sVar29 == *(size_t *)(*param_3 + 8)) &&
         (iVar22 = memcmp(*(void **)(param_1[2] + 0x10),*(void **)*param_3,sVar29), iVar22 == 0)) {
        *param_2 = (longlong)&absl::lts_20240722::container_internal::kSooControl;
        param_2[1] = (longlong)(param_1 + 2);
        return param_2;
      }
    }
    *param_2 = 0;
    param_2[1] = lStack_70;
    return param_2;
  }
  uVar27 = *(ulonglong *)(*param_3 + 8);
  auVar32 = *param_3;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res20,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,auVar32._0_8_);
  uVar2 = param_1[2];
  uVar3 = *param_1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ((ulonglong)auVar32._12_4_ << 0x20 | uVar27 & 0xffffffff) + local_res20;
  lVar25 = 0;
  uVar27 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
           SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0);
  uVar30 = (uVar2 >> 5 ^ uVar27) >> 7;
  bVar26 = (byte)uVar27 & 0x7f;
  do {
    uVar30 = uVar30 & uVar3;
    pbVar1 = (byte *)(uVar30 + uVar2);
    bVar6 = *pbVar1;
    bVar7 = pbVar1[1];
    bVar8 = pbVar1[2];
    bVar9 = pbVar1[3];
    bVar10 = pbVar1[4];
    bVar11 = pbVar1[5];
    bVar12 = pbVar1[6];
    bVar13 = pbVar1[7];
    bVar14 = pbVar1[8];
    bVar15 = pbVar1[9];
    bVar16 = pbVar1[10];
    bVar17 = pbVar1[0xb];
    bVar18 = pbVar1[0xc];
    bVar19 = pbVar1[0xd];
    bVar20 = pbVar1[0xe];
    bVar21 = pbVar1[0xf];
    auVar32[0] = -(bVar26 == bVar6);
    auVar32[1] = -(bVar26 == bVar7);
    auVar32[2] = -(bVar26 == bVar8);
    auVar32[3] = -(bVar26 == bVar9);
    auVar32[4] = -(bVar26 == bVar10);
    auVar32[5] = -(bVar26 == bVar11);
    auVar32[6] = -(bVar26 == bVar12);
    auVar32[7] = -(bVar26 == bVar13);
    auVar32[8] = -(bVar26 == bVar14);
    auVar32[9] = -(bVar26 == bVar15);
    auVar32[10] = -(bVar26 == bVar16);
    auVar32[0xb] = -(bVar26 == bVar17);
    auVar32[0xc] = -(bVar26 == bVar18);
    auVar32[0xd] = -(bVar26 == bVar19);
    auVar32[0xe] = -(bVar26 == bVar20);
    auVar32[0xf] = -(bVar26 == bVar21);
    uVar28 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    if (uVar28 != 0) {
      _Buf2 = *(void **)*param_3;
      sVar29 = *(size_t *)(*param_3 + 8);
      uVar27 = param_1[3];
      bVar4 = __isa_available < 5;
      do {
        uVar23 = uVar28 | 0xffff0000;
        if (bVar4) {
          uVar24 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
            }
          }
        }
        else {
          uVar24 = 0;
          for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
        }
        uVar31 = uVar24 + uVar30 & uVar3;
        _Buf1 = *(void **)(*(longlong *)(uVar27 + uVar31 * 8) + 0x10);
        _Size = 0xffffffffffffffff;
        do {
          _Size = _Size + 1;
        } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
        if ((_Size == sVar29) && (iVar22 = memcmp(_Buf1,_Buf2,_Size), iVar22 == 0)) {
          lVar25 = param_1[2] + uVar31;
          param_2[1] = uVar27 + uVar31 * 8;
          goto LAB_14fa28b62;
        }
        uVar28 = uVar28 & uVar28 - 1;
      } while (uVar28 != 0);
    }
    auVar33[0] = -(__xmm_80808080808080808080808080808080 == bVar6);
    auVar33[1] = -(UNK_1508be4f1 == bVar7);
    auVar33[2] = -(UNK_1508be4f2 == bVar8);
    auVar33[3] = -(UNK_1508be4f3 == bVar9);
    auVar33[4] = -(UNK_1508be4f4 == bVar10);
    auVar33[5] = -(UNK_1508be4f5 == bVar11);
    auVar33[6] = -(UNK_1508be4f6 == bVar12);
    auVar33[7] = -(UNK_1508be4f7 == bVar13);
    auVar33[8] = -(UNK_1508be4f8 == bVar14);
    auVar33[9] = -(UNK_1508be4f9 == bVar15);
    auVar33[10] = -(UNK_1508be4fa == bVar16);
    auVar33[0xb] = -(UNK_1508be4fb == bVar17);
    auVar33[0xc] = -(UNK_1508be4fc == bVar18);
    auVar33[0xd] = -(UNK_1508be4fd == bVar19);
    auVar33[0xe] = -(UNK_1508be4fe == bVar20);
    auVar33[0xf] = -(UNK_1508be4ff == bVar21);
    if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
      lVar25 = 0;
LAB_14fa28b62:
      *param_2 = lVar25;
      return param_2;
    }
    lVar25 = lVar25 + 0x10;
    uVar30 = uVar30 + lVar25;
  } while( true );
}

// FUN_14fa28ba0 @ 14fa28ba0

longlong * FUN_14fa28ba0(ulonglong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  char cVar15;
  char cVar16;
  uint uVar14;
  char cVar17;
  
  uVar2 = param_1[2];
  lVar10 = 0;
  uVar9 = (uVar2 >> 5 ^ param_4) >> 7;
  uVar3 = CONCAT11((char)param_4,(char)param_4);
  uVar14 = CONCAT22(uVar3,uVar3) & 0x7f7f7f7f;
  do {
    uVar9 = uVar9 & *param_1;
    pcVar1 = (char *)(uVar9 + uVar2);
    cVar13 = (char)uVar14;
    auVar11[0] = -(*pcVar1 == cVar13);
    cVar15 = (char)(uVar14 >> 8);
    auVar11[1] = -(pcVar1[1] == cVar15);
    cVar16 = (char)(uVar14 >> 0x10);
    auVar11[2] = -(pcVar1[2] == cVar16);
    cVar17 = (char)(uVar14 >> 0x18);
    auVar11[3] = -(pcVar1[3] == cVar17);
    auVar11[4] = -(pcVar1[4] == cVar13);
    auVar11[5] = -(pcVar1[5] == cVar15);
    auVar11[6] = -(pcVar1[6] == cVar16);
    auVar11[7] = -(pcVar1[7] == cVar17);
    auVar11[8] = -(pcVar1[8] == cVar13);
    auVar11[9] = -(pcVar1[9] == cVar15);
    auVar11[10] = -(pcVar1[10] == cVar16);
    auVar11[0xb] = -(pcVar1[0xb] == cVar17);
    auVar11[0xc] = -(pcVar1[0xc] == cVar13);
    auVar11[0xd] = -(pcVar1[0xd] == cVar15);
    auVar11[0xe] = -(pcVar1[0xe] == cVar16);
    auVar11[0xf] = -(pcVar1[0xf] == cVar17);
    uVar5 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf;
    if (uVar5 != 0) {
      do {
        uVar4 = uVar5 | 0xffff0000;
        if (__isa_available < 5) {
          uVar6 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
        }
        else {
          uVar6 = 0;
          for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
        }
        uVar7 = uVar6 + uVar9 & *param_1;
        plVar8 = (longlong *)(uVar7 * 0x10 + param_1[3]);
        if (*plVar8 == *param_3) {
          param_2[1] = (longlong)plVar8;
          *param_2 = uVar7 + uVar2;
          return param_2;
        }
        uVar5 = uVar5 & uVar5 - 1;
      } while (uVar5 != 0);
    }
    auVar12[0] = -(__xmm_80808080808080808080808080808080 == *pcVar1);
    auVar12[1] = -(UNK_1508be4f1 == pcVar1[1]);
    auVar12[2] = -(UNK_1508be4f2 == pcVar1[2]);
    auVar12[3] = -(UNK_1508be4f3 == pcVar1[3]);
    auVar12[4] = -(UNK_1508be4f4 == pcVar1[4]);
    auVar12[5] = -(UNK_1508be4f5 == pcVar1[5]);
    auVar12[6] = -(UNK_1508be4f6 == pcVar1[6]);
    auVar12[7] = -(UNK_1508be4f7 == pcVar1[7]);
    auVar12[8] = -(UNK_1508be4f8 == pcVar1[8]);
    auVar12[9] = -(UNK_1508be4f9 == pcVar1[9]);
    auVar12[10] = -(UNK_1508be4fa == pcVar1[10]);
    auVar12[0xb] = -(UNK_1508be4fb == pcVar1[0xb]);
    auVar12[0xc] = -(UNK_1508be4fc == pcVar1[0xc]);
    auVar12[0xd] = -(UNK_1508be4fd == pcVar1[0xd]);
    auVar12[0xe] = -(UNK_1508be4fe == pcVar1[0xe]);
    auVar12[0xf] = -(UNK_1508be4ff == pcVar1[0xf]);
    if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar12 >> 0x37,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x47,0) & 1) != 0) || (SUB161(auVar12 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x57,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar12 >> 0x67,0) & 1) != 0) || (SUB161(auVar12 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x77,0) & 1) != 0) || auVar12[0xf] < '\0') {
      *param_2 = 0;
      return param_2;
    }
    lVar10 = lVar10 + 0x10;
    uVar9 = uVar9 + lVar10;
  } while( true );
}

// FUN_14fa28cc0 @ 14fa28cc0

void FUN_14fa28cc0(ulonglong *param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *_Buf1;
  bool bVar5;
  undefined2 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  void *_Buf2;
  size_t sVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ushort uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  size_t _Size;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar33;
  char cVar35;
  char cVar36;
  uint uVar34;
  char cVar37;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  lVar30 = 0;
  uVar28 = (uVar3 >> 5 ^ param_4) >> 7;
  uVar6 = CONCAT11((char)param_4,(char)param_4);
  uVar34 = CONCAT22(uVar6,uVar6) & 0x7f7f7f7f;
  do {
    uVar28 = uVar28 & uVar2;
    pcVar1 = (char *)(uVar28 + uVar3);
    cVar7 = *pcVar1;
    cVar8 = pcVar1[1];
    cVar9 = pcVar1[2];
    cVar10 = pcVar1[3];
    cVar11 = pcVar1[4];
    cVar12 = pcVar1[5];
    cVar13 = pcVar1[6];
    cVar14 = pcVar1[7];
    cVar15 = pcVar1[8];
    cVar16 = pcVar1[9];
    cVar17 = pcVar1[10];
    cVar18 = pcVar1[0xb];
    cVar19 = pcVar1[0xc];
    cVar20 = pcVar1[0xd];
    cVar21 = pcVar1[0xe];
    cVar22 = pcVar1[0xf];
    cVar33 = (char)uVar34;
    auVar31[0] = -(cVar7 == cVar33);
    cVar35 = (char)(uVar34 >> 8);
    auVar31[1] = -(cVar8 == cVar35);
    cVar36 = (char)(uVar34 >> 0x10);
    auVar31[2] = -(cVar9 == cVar36);
    cVar37 = (char)(uVar34 >> 0x18);
    auVar31[3] = -(cVar10 == cVar37);
    auVar31[4] = -(cVar11 == cVar33);
    auVar31[5] = -(cVar12 == cVar35);
    auVar31[6] = -(cVar13 == cVar36);
    auVar31[7] = -(cVar14 == cVar37);
    auVar31[8] = -(cVar15 == cVar33);
    auVar31[9] = -(cVar16 == cVar35);
    auVar31[10] = -(cVar17 == cVar36);
    auVar31[0xb] = -(cVar18 == cVar37);
    auVar31[0xc] = -(cVar19 == cVar33);
    auVar31[0xd] = -(cVar20 == cVar35);
    auVar31[0xe] = -(cVar21 == cVar36);
    auVar31[0xf] = -(cVar22 == cVar37);
    uVar27 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar27 != 0) {
      _Buf2 = (void *)*param_3;
      sVar23 = param_3[1];
      uVar4 = param_1[3];
      bVar5 = __isa_available < 5;
      do {
        uVar24 = uVar27 | 0xffff0000;
        if (bVar5) {
          uVar26 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
        }
        else {
          uVar26 = 0;
          for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
            uVar26 = uVar26 + 1;
          }
        }
        uVar29 = uVar26 + uVar28 & uVar2;
        _Size = 0xffffffffffffffff;
        _Buf1 = *(void **)(*(longlong *)(uVar4 + uVar29 * 8) + 0x10);
        do {
          _Size = _Size + 1;
        } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
        if ((_Size == sVar23) && (iVar25 = memcmp(_Buf1,_Buf2,_Size), iVar25 == 0)) {
          *param_2 = param_1[2] + uVar29;
          param_2[1] = uVar4 + uVar29 * 8;
          return;
        }
        uVar27 = uVar27 & uVar27 - 1;
      } while (uVar27 != 0);
    }
    auVar32[0] = -(__xmm_80808080808080808080808080808080 == cVar7);
    auVar32[1] = -(UNK_1508be4f1 == cVar8);
    auVar32[2] = -(UNK_1508be4f2 == cVar9);
    auVar32[3] = -(UNK_1508be4f3 == cVar10);
    auVar32[4] = -(UNK_1508be4f4 == cVar11);
    auVar32[5] = -(UNK_1508be4f5 == cVar12);
    auVar32[6] = -(UNK_1508be4f6 == cVar13);
    auVar32[7] = -(UNK_1508be4f7 == cVar14);
    auVar32[8] = -(UNK_1508be4f8 == cVar15);
    auVar32[9] = -(UNK_1508be4f9 == cVar16);
    auVar32[10] = -(UNK_1508be4fa == cVar17);
    auVar32[0xb] = -(UNK_1508be4fb == cVar18);
    auVar32[0xc] = -(UNK_1508be4fc == cVar19);
    auVar32[0xd] = -(UNK_1508be4fd == cVar20);
    auVar32[0xe] = -(UNK_1508be4fe == cVar21);
    auVar32[0xf] = -(UNK_1508be4ff == cVar22);
    if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') {
      *param_2 = 0;
      return;
    }
    lVar30 = lVar30 + 0x10;
    uVar28 = uVar28 + lVar30;
  } while( true );
}

// FUN_14fa28e60 @ 14fa28e60

undefined8 * FUN_14fa28e60(CommonFields *param_1,undefined8 *param_2,longlong *param_3)

{
  HeapOrSoo *pHVar1;
  void *pvVar2;
  void *_Buf1;
  undefined1 auVar3 [16];
  int iVar4;
  size_t sVar5;
  __uint64 _Var6;
  longlong lVar7;
  size_t _Size;
  undefined1 local_res20;
  ctrl_t **local_38;
  HeapOrSoo *pHStack_30;
  
  if (1 < param_1->capacity_) {
    FUN_14fa29170();
    return param_2;
  }
  pHVar1 = &param_1->heap_or_soo_;
  if (param_1->size_ < 2) {
    param_1->size_ = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHVar1;
    return param_2;
  }
  if ((pHVar1->heap).control == (ctrl_t *)*param_3) {
LAB_14fa28fa8:
    local_38 = &absl::lts_20240722::container_internal::kSooControl;
    *(undefined1 *)(param_2 + 2) = 0;
    pHStack_30 = pHVar1;
  }
  else {
    pvVar2 = *(void **)((ctrl_t *)*param_3 + 0x10);
    lVar7 = -1;
    _Buf1 = *(void **)((pHVar1->heap).control + 0x10);
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
    sVar5 = 0xffffffffffffffff;
    do {
      sVar5 = sVar5 + 1;
    } while (*(char *)((longlong)pvVar2 + sVar5) != '\0');
    if (_Size == sVar5) {
      iVar4 = memcmp(_Buf1,pvVar2,_Size);
      if (iVar4 == 0) goto LAB_14fa28fa8;
    }
    FUN_14fa30670(param_1,3,local_res20);
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(*(__uint64 *)(*param_3 + 0x10) + lVar7) != '\0');
    absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
              ((MixingHashState)&local_38,
               (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
               *(__uint64 *)(*param_3 + 0x10));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = lVar7 + (longlong)local_38;
    _Var6 = absl::lts_20240722::container_internal::PrepareInsertAfterSoo
                      (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0),8,param_1);
    pvVar2 = (param_1->heap_or_soo_).heap.slot_array.p;
    local_38 = (ctrl_t **)((pHVar1->heap).control + _Var6);
    *(undefined1 *)(param_2 + 2) = 1;
    pHStack_30 = (HeapOrSoo *)((longlong)pvVar2 + _Var6 * 8);
  }
  *param_2 = local_38;
  param_2[1] = pHStack_30;
  return param_2;
}

// FUN_14fa29000 @ 14fa29000

undefined8 * FUN_14fa29000(CommonFields *param_1,undefined8 *param_2,longlong *param_3)

{
  HeapOrSoo *pHVar1;
  ctrl_t *pcVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  __uint64 _Var6;
  undefined1 local_res20;
  
  if (1 < param_1->capacity_) {
    FUN_14fa29400();
    return param_2;
  }
  pHVar1 = &param_1->heap_or_soo_;
  if (param_1->size_ < 2) {
    param_1->size_ = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHVar1;
    return param_2;
  }
  if ((pHVar1->heap).control == (ctrl_t *)*param_3) {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHVar1;
    return param_2;
  }
  FUN_14fa30370(param_1,3,local_res20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + *param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0)) + *param_3;
  _Var6 = absl::lts_20240722::container_internal::PrepareInsertAfterSoo
                    (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0),0x10,param_1);
  pcVar2 = (pHVar1->heap).control;
  pvVar3 = (param_1->heap_or_soo_).heap.slot_array.p;
  *(undefined1 *)(param_2 + 2) = 1;
  *param_2 = pcVar2 + _Var6;
  param_2[1] = (void *)(_Var6 * 0x10 + (longlong)pvVar3);
  return param_2;
}

// FUN_14fa29170 @ 14fa29170

void FUN_14fa29170(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Buf2;
  void *_Buf1;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined2 uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  size_t sVar26;
  __uint64 _Var27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ushort uVar33;
  size_t _Size;
  longlong *plVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  longlong local_98 [2];
  ulonglong local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong *plStack_70;
  
  lVar30 = -1;
  do {
    lVar30 = lVar30 + 1;
  } while (*(char *)(*(__uint64 *)(*param_3 + 0x10) + lVar30) != '\0');
  plStack_70 = (longlong *)lVar30;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_98,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_3 + 0x10));
  uVar2 = *param_1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = lVar30 + local_98[0];
  uVar31 = param_1[2];
  local_78 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8) ^
             SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0);
  local_98[0] = 0;
  uVar32 = (uVar31 >> 5 ^ local_78) >> 7;
  uVar7 = CONCAT11((char)local_78,(char)local_78);
  uVar29 = CONCAT22(uVar7,uVar7) & 0x7f7f7f7f;
  iVar25 = __isa_available;
  local_88 = uVar31;
  do {
    uVar32 = uVar32 & uVar2;
    pcVar1 = (char *)(uVar32 + uVar31);
    cVar8 = *pcVar1;
    cVar9 = pcVar1[1];
    cVar10 = pcVar1[2];
    cVar11 = pcVar1[3];
    cVar12 = pcVar1[4];
    cVar13 = pcVar1[5];
    cVar14 = pcVar1[6];
    cVar15 = pcVar1[7];
    cVar16 = pcVar1[8];
    cVar17 = pcVar1[9];
    cVar18 = pcVar1[10];
    cVar19 = pcVar1[0xb];
    cVar20 = pcVar1[0xc];
    cVar21 = pcVar1[0xd];
    cVar22 = pcVar1[0xe];
    cVar23 = pcVar1[0xf];
    cVar37 = (char)uVar29;
    auVar35[0] = -(cVar8 == cVar37);
    cVar38 = (char)(uVar29 >> 8);
    auVar35[1] = -(cVar9 == cVar38);
    cVar39 = (char)(uVar29 >> 0x10);
    auVar35[2] = -(cVar10 == cVar39);
    cVar40 = (char)(uVar29 >> 0x18);
    auVar35[3] = -(cVar11 == cVar40);
    auVar35[4] = -(cVar12 == cVar37);
    auVar35[5] = -(cVar13 == cVar38);
    auVar35[6] = -(cVar14 == cVar39);
    auVar35[7] = -(cVar15 == cVar40);
    auVar35[8] = -(cVar16 == cVar37);
    auVar35[9] = -(cVar17 == cVar38);
    auVar35[10] = -(cVar18 == cVar39);
    auVar35[0xb] = -(cVar19 == cVar40);
    auVar35[0xc] = -(cVar20 == cVar37);
    auVar35[0xd] = -(cVar21 == cVar38);
    auVar35[0xe] = -(cVar22 == cVar39);
    auVar35[0xf] = -(cVar23 == cVar40);
    uVar33 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
    if (uVar33 != 0) {
      lVar30 = *param_3;
      uVar3 = param_1[3];
      bVar5 = iVar25 < 5;
      do {
        uVar24 = uVar33 | 0xffff0000;
        if (bVar5) {
          uVar28 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
            }
          }
        }
        else {
          uVar28 = 0;
          for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
        }
        uVar31 = uVar28 + uVar32 & uVar2;
        plVar34 = (longlong *)(uVar31 * 8 + uVar3);
        lVar4 = *plVar34;
        if (lVar4 == lVar30) {
LAB_14fa29335:
          local_78 = param_1[2] + uVar31;
          *(undefined1 *)(param_2 + 2) = 0;
          plStack_70 = plVar34;
          goto LAB_14fa293cf;
        }
        _Buf2 = *(void **)(lVar30 + 0x10);
        _Size = 0xffffffffffffffff;
        _Buf1 = *(void **)(lVar4 + 0x10);
        do {
          _Size = _Size + 1;
        } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
        sVar26 = 0xffffffffffffffff;
        do {
          sVar26 = sVar26 + 1;
        } while (*(char *)((longlong)_Buf2 + sVar26) != '\0');
        if ((_Size == sVar26) && (iVar25 = memcmp(_Buf1,_Buf2,_Size), iVar25 == 0))
        goto LAB_14fa29335;
        uVar33 = uVar33 & uVar33 - 1;
        uVar31 = local_88;
        iVar25 = __isa_available;
      } while (uVar33 != 0);
    }
    auVar36[0] = -(cVar8 == __xmm_80808080808080808080808080808080);
    auVar36[1] = -(cVar9 == UNK_1508be4f1);
    auVar36[2] = -(cVar10 == UNK_1508be4f2);
    auVar36[3] = -(cVar11 == UNK_1508be4f3);
    auVar36[4] = -(cVar12 == UNK_1508be4f4);
    auVar36[5] = -(cVar13 == UNK_1508be4f5);
    auVar36[6] = -(cVar14 == UNK_1508be4f6);
    auVar36[7] = -(cVar15 == UNK_1508be4f7);
    auVar36[8] = -(cVar16 == UNK_1508be4f8);
    auVar36[9] = -(cVar17 == UNK_1508be4f9);
    auVar36[10] = -(cVar18 == UNK_1508be4fa);
    auVar36[0xb] = -(cVar19 == UNK_1508be4fb);
    auVar36[0xc] = -(cVar20 == UNK_1508be4fc);
    auVar36[0xd] = -(cVar21 == UNK_1508be4fd);
    auVar36[0xe] = -(cVar22 == UNK_1508be4fe);
    auVar36[0xf] = -(cVar23 == UNK_1508be4ff);
    uVar33 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
    if (uVar33 != 0) {
      uVar29 = uVar33 | 0xffff0000;
      if (iVar25 < 5) {
        uVar24 = 0;
        if (uVar29 != 0) {
          for (; (uVar29 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
          }
        }
      }
      else {
        uVar24 = 0;
        for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
      }
      local_88 = uVar24 + uVar32 & uVar2;
      lStack_80 = local_98[0];
      _Var27 = absl::lts_20240722::container_internal::PrepareInsertNonSoo
                         (param_1,local_78,&local_88,&DAT_1535d6128);
      uVar2 = param_1[3];
      local_78 = param_1[2] + _Var27;
      *(undefined1 *)(param_2 + 2) = 1;
      plStack_70 = (longlong *)(uVar2 + _Var27 * 8);
LAB_14fa293cf:
      *param_2 = local_78;
      param_2[1] = (longlong)plStack_70;
      return;
    }
    local_98[0] = local_98[0] + 0x10;
    uVar32 = uVar32 + local_98[0];
  } while( true );
}

// FUN_14fa29400 @ 14fa29400

longlong * FUN_14fa29400(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 uVar5;
  uint uVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  ulonglong local_38;
  longlong *plStack_30;
  
  lVar12 = *param_3;
  plStack_30 = (longlong *)0x0;
  uVar2 = param_1[2];
  local_38 = *param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + lVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0)) + lVar12;
  uVar15 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
           SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0);
  uVar13 = (uVar2 >> 5 ^ uVar15) >> 7;
  uVar5 = CONCAT11((char)uVar15,(char)uVar15);
  uVar10 = CONCAT22(uVar5,uVar5) & 0x7f7f7f7f;
  do {
    uVar13 = uVar13 & local_38;
    pcVar1 = (char *)(uVar13 + uVar2);
    cVar18 = (char)uVar10;
    auVar16[0] = -(*pcVar1 == cVar18);
    cVar19 = (char)(uVar10 >> 8);
    auVar16[1] = -(pcVar1[1] == cVar19);
    cVar20 = (char)(uVar10 >> 0x10);
    auVar16[2] = -(pcVar1[2] == cVar20);
    cVar21 = (char)(uVar10 >> 0x18);
    auVar16[3] = -(pcVar1[3] == cVar21);
    auVar16[4] = -(pcVar1[4] == cVar18);
    auVar16[5] = -(pcVar1[5] == cVar19);
    auVar16[6] = -(pcVar1[6] == cVar20);
    auVar16[7] = -(pcVar1[7] == cVar21);
    auVar16[8] = -(pcVar1[8] == cVar18);
    auVar16[9] = -(pcVar1[9] == cVar19);
    auVar16[10] = -(pcVar1[10] == cVar20);
    auVar16[0xb] = -(pcVar1[0xb] == cVar21);
    auVar16[0xc] = -(pcVar1[0xc] == cVar18);
    auVar16[0xd] = -(pcVar1[0xd] == cVar19);
    auVar16[0xe] = -(pcVar1[0xe] == cVar20);
    auVar16[0xf] = -(pcVar1[0xf] == cVar21);
    uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    if (uVar11 != 0) {
      do {
        uVar6 = uVar11 | 0xffff0000;
        if (__isa_available < 5) {
          uVar9 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
        }
        else {
          uVar9 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
        }
        uVar7 = uVar9 + uVar13 & local_38;
        plVar14 = (longlong *)(uVar7 * 0x10 + param_1[3]);
        if (*plVar14 == lVar12) {
          lVar12 = uVar7 + uVar2;
          *(undefined1 *)(param_2 + 2) = 0;
          plStack_30 = plVar14;
          goto LAB_14fa29595;
        }
        uVar11 = uVar11 & uVar11 - 1;
      } while (uVar11 != 0);
    }
    auVar17[0] = -(*pcVar1 == __xmm_80808080808080808080808080808080);
    auVar17[1] = -(pcVar1[1] == UNK_1508be4f1);
    auVar17[2] = -(pcVar1[2] == UNK_1508be4f2);
    auVar17[3] = -(pcVar1[3] == UNK_1508be4f3);
    auVar17[4] = -(pcVar1[4] == UNK_1508be4f4);
    auVar17[5] = -(pcVar1[5] == UNK_1508be4f5);
    auVar17[6] = -(pcVar1[6] == UNK_1508be4f6);
    auVar17[7] = -(pcVar1[7] == UNK_1508be4f7);
    auVar17[8] = -(pcVar1[8] == UNK_1508be4f8);
    auVar17[9] = -(pcVar1[9] == UNK_1508be4f9);
    auVar17[10] = -(pcVar1[10] == UNK_1508be4fa);
    auVar17[0xb] = -(pcVar1[0xb] == UNK_1508be4fb);
    auVar17[0xc] = -(pcVar1[0xc] == UNK_1508be4fc);
    auVar17[0xd] = -(pcVar1[0xd] == UNK_1508be4fd);
    auVar17[0xe] = -(pcVar1[0xe] == UNK_1508be4fe);
    auVar17[0xf] = -(pcVar1[0xf] == UNK_1508be4ff);
    uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
    if (uVar11 != 0) {
      uVar10 = uVar11 | 0xffff0000;
      if (__isa_available < 5) {
        uVar6 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
      else {
        uVar6 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
      }
      local_38 = uVar6 + uVar13 & local_38;
      _Var8 = absl::lts_20240722::container_internal::PrepareInsertNonSoo
                        (param_1,uVar15,&local_38,&DAT_1535d60f8);
      lVar12 = param_1[2] + _Var8;
      *(undefined1 *)(param_2 + 2) = 1;
      plStack_30 = (longlong *)(_Var8 * 0x10 + param_1[3]);
LAB_14fa29595:
      *param_2 = lVar12;
      param_2[1] = (longlong)plStack_30;
      return param_2;
    }
    plStack_30 = (longlong *)((longlong)plStack_30 + 0x10);
    uVar13 = uVar13 + (longlong)plStack_30;
  } while( true );
}

// FUN_14fa295d0 @ 14fa295d0

undefined8 * FUN_14fa295d0(CommonFields *param_1,undefined8 *param_2,longlong *param_3)

{
  void *pvVar1;
  void *_Buf1;
  undefined1 auVar2 [16];
  int iVar3;
  size_t sVar4;
  __uint64 _Var5;
  longlong lVar6;
  size_t _Size;
  undefined1 local_res8;
  longlong local_res20;
  ctrl_t **local_28;
  HeapOrSoo *pHStack_20;
  
  pHStack_20 = &param_1->heap_or_soo_;
  if (param_1->size_ < 2) {
    param_1->size_ = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHStack_20;
    return param_2;
  }
  if ((pHStack_20->heap).control == (ctrl_t *)*param_3) {
LAB_14fa2970d:
    local_28 = &absl::lts_20240722::container_internal::kSooControl;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    pvVar1 = *(void **)((ctrl_t *)*param_3 + 0x10);
    lVar6 = -1;
    _Buf1 = *(void **)((pHStack_20->heap).control + 0x10);
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
    sVar4 = 0xffffffffffffffff;
    do {
      sVar4 = sVar4 + 1;
    } while (*(char *)((longlong)pvVar1 + sVar4) != '\0');
    if (_Size == sVar4) {
      iVar3 = memcmp(_Buf1,pvVar1,_Size);
      if (iVar3 == 0) goto LAB_14fa2970d;
    }
    FUN_14fa30670(param_1,3,local_res8);
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(*(__uint64 *)(*param_3 + 0x10) + lVar6) != '\0');
    absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
              ((MixingHashState)&local_res20,
               (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
               *(__uint64 *)(*param_3 + 0x10));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = lVar6 + local_res20;
    _Var5 = absl::lts_20240722::container_internal::PrepareInsertAfterSoo
                      (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0),8,param_1);
    pvVar1 = (param_1->heap_or_soo_).heap.slot_array.p;
    local_28 = (ctrl_t **)((pHStack_20->heap).control + _Var5);
    *(undefined1 *)(param_2 + 2) = 1;
    pHStack_20 = (HeapOrSoo *)((longlong)pvVar1 + _Var5 * 8);
  }
  *param_2 = local_28;
  param_2[1] = pHStack_20;
  return param_2;
}

// FUN_14fa29750 @ 14fa29750

undefined8 * FUN_14fa29750(CommonFields *param_1,undefined8 *param_2,longlong *param_3)

{
  HeapOrSoo *pHVar1;
  ctrl_t *pcVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  __uint64 _Var6;
  undefined1 local_res8;
  
  pHVar1 = &param_1->heap_or_soo_;
  if (param_1->size_ < 2) {
    param_1->size_ = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHVar1;
  }
  else if ((pHVar1->heap).control == (ctrl_t *)*param_3) {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = pHVar1;
  }
  else {
    FUN_14fa30370(param_1,3,local_res8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + *param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0)) + *param_3;
    _Var6 = absl::lts_20240722::container_internal::PrepareInsertAfterSoo
                      (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0),0x10,param_1);
    pcVar2 = (pHVar1->heap).control;
    *(undefined1 *)(param_2 + 2) = 1;
    pvVar3 = (param_1->heap_or_soo_).heap.slot_array.p;
    *param_2 = pcVar2 + _Var6;
    param_2[1] = (void *)(_Var6 * 0x10 + (longlong)pvVar3);
  }
  return param_2;
}

// FUN_14fa29880 @ 14fa29880

undefined8 * FUN_14fa29880(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uStack_10;
  
  if ((1 < *(ulonglong *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) == *param_3)) {
    *param_2 = &absl::lts_20240722::container_internal::kSooControl;
    param_2[1] = (longlong *)(param_1 + 0x10);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = uStack_10;
  return param_2;
}

// FUN_14fa298e0 @ 14fa298e0

undefined8 * FUN_14fa298e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Buf1;
  int iVar1;
  size_t _Size;
  ctrl_t **local_18;
  longlong lStack_10;
  
  if (1 < *(ulonglong *)(param_1 + 8)) {
    _Size = 0xffffffffffffffff;
    _Buf1 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x10);
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)_Buf1 + _Size) != '\0');
    if (_Size == param_3[1]) {
      iVar1 = memcmp(_Buf1,(void *)*param_3,_Size);
      if (iVar1 == 0) {
        local_18 = &absl::lts_20240722::container_internal::kSooControl;
        lStack_10 = param_1 + 0x10;
        goto LAB_14fa29948;
      }
    }
  }
  local_18 = (ctrl_t **)0x0;
LAB_14fa29948:
  *param_2 = local_18;
  param_2[1] = lStack_10;
  return param_2;
}

// forward<google::protobuf::UnknownField*___ptr64&___ptr64> @ 14fa29970

/* class google::protobuf::UnknownField * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::UnknownField * __ptr64 & __ptr64>(class google::protobuf::UnknownField *
   __ptr64 & __ptr64) */

UnknownField ** __cdecl
std::forward<google::protobuf::UnknownField*___ptr64&___ptr64>(UnknownField **param_1)

{
  return param_1;
}

// forward<google::protobuf::internal::DescriptorTable_const*___ptr64&___ptr64> @ 14fa29980

/* struct google::protobuf::internal::DescriptorTable const * __ptr64 & __ptr64 __cdecl
   std::forward<struct google::protobuf::internal::DescriptorTable const * __ptr64 & __ptr64>(struct
   google::protobuf::internal::DescriptorTable const * __ptr64 & __ptr64) */

DescriptorTable ** __cdecl
std::forward<google::protobuf::internal::DescriptorTable_const*___ptr64&___ptr64>
          (DescriptorTable **param_1)

{
  return param_1;
}

// forward<google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa29990

/* class google::protobuf::Message const * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::Message const * __ptr64 & __ptr64>(class google::protobuf::Message const *
   __ptr64 & __ptr64) */

Message ** __cdecl
std::forward<google::protobuf::Message_const*___ptr64&___ptr64>(Message **param_1)

{
  return param_1;
}

// forward<google::protobuf::Message_const*___ptr64> @ 14fa299c0

/* class google::protobuf::Message const * __ptr64 && __ptr64 __cdecl std::forward<class
   google::protobuf::Message const * __ptr64>(class google::protobuf::Message const * __ptr64 &
   __ptr64) */

Message ** __cdecl std::forward<google::protobuf::Message_const*___ptr64>(Message **param_1)

{
  return param_1;
}

// forward<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_> @ 14fa29a70

/* class `private: struct google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64'::`2'::<lambda_1> && __ptr64
   __cdecl std::forward<class `private: struct google::protobuf::internal::TcParseTableBase const *
   __ptr64 __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1> >(class `private: struct google::protobuf::internal::TcParseTableBase
   const * __ptr64 __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1> & __ptr64) */

<lambda_1> * __cdecl
std::
forward<_private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64_::_2_::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return param_1;
}

// forward<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa29a90

/* class std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> &&
   __ptr64 __cdecl std::forward<class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> >(class std::allocator<struct
   google::protobuf::internal::DescriptorTable const * __ptr64> & __ptr64) */

allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> * __cdecl
std::forward<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (allocator<struct_google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1)

{
  return (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *)param_1;
}

// forward<std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>_> @ 14fa29ab0

/* class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> && __ptr64 __cdecl
   std::forward<class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> >(class
   std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> & __ptr64) */

tuple<google::protobuf::Message_const*___ptr64&___ptr64> * __cdecl
std::forward<std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>_>
          (tuple<class_google::protobuf::Message_const*___ptr64&___ptr64> *param_1)

{
  return (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *)param_1;
}

// forward_as_tuple<google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa29ae0

/* class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> __cdecl
   std::forward_as_tuple<class google::protobuf::Message const * __ptr64 & __ptr64>(class
   google::protobuf::Message const * __ptr64 & __ptr64) */

Message ** __cdecl
std::forward_as_tuple<google::protobuf::Message_const*___ptr64&___ptr64>(Message **param_1)

{
  Message *in_RDX;
  
  *param_1 = in_RDX;
  return param_1;
}

// FUN_14fa29bc0 @ 14fa29bc0

longlong FUN_14fa29bc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  FUN_14fa28e60();
  if (*(char *)(param_2 + 0x10) != '\0') {
    **(undefined8 **)(param_2 + 8) = *param_3;
  }
  return param_2;
}

// invoke<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_> @ 14fa29c00

/* void __cdecl std::invoke<class `private: struct google::protobuf::internal::TcParseTableBase
   const * __ptr64 __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1> >(class `private: struct google::protobuf::internal::TcParseTableBase
   const * __ptr64 __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1> && __ptr64) */

void __cdecl
std::
invoke<_private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64_::_2_::<lambda_1>_>
          (<lambda_1> *param_1)

{
  TcParseTableBase *pTVar1;
  
  pTVar1 = google::protobuf::Reflection::CreateTcParseTable(*(Reflection **)param_1);
  *(TcParseTableBase **)(*(longlong *)param_1 + 0x68) = pTVar1;
  return;
}

// launder<google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa29c40

/* struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64 __cdecl
   std::launder<struct google::protobuf::internal::DescriptorTable const * __ptr64>(struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

DescriptorTable ** __cdecl
std::launder<google::protobuf::internal::DescriptorTable_const*___ptr64>(DescriptorTable **param_1)

{
  return param_1;
}

// move<std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>&___ptr64> @ 14fa29c80

/* class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> && __ptr64 __cdecl
   std::move<class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> &
   __ptr64>(class std::tuple<class google::protobuf::Message const * __ptr64 & __ptr64> & __ptr64)
    */

tuple<google::protobuf::Message_const*___ptr64&___ptr64> * __cdecl
std::move<std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>&___ptr64>
          (tuple<class_google::protobuf::Message_const*___ptr64&___ptr64> *param_1)

{
  return (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *)param_1;
}

// move<google::protobuf::UnknownField&___ptr64> @ 14fa29ca0

/* class google::protobuf::UnknownField && __ptr64 __cdecl std::move<class
   google::protobuf::UnknownField & __ptr64>(class google::protobuf::UnknownField & __ptr64) */

UnknownField * __cdecl std::move<google::protobuf::UnknownField&___ptr64>(UnknownField *param_1)

{
  return param_1;
}

// mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet> @ 14fa29cb0

/* private: class google::protobuf::UnknownFieldSet * __ptr64 __cdecl
   google::protobuf::internal::InternalMetadata::mutable_unknown_fields_slow<class
   google::protobuf::UnknownFieldSet>(void) __ptr64 */

UnknownFieldSet * __thiscall
google::protobuf::internal::InternalMetadata::
mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(InternalMetadata *this)

{
  undefined8 *puVar1;
  Arena *this_00;
  
  this_00 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    this_00 = (Arena *)(this_00->impl_).tag_and_id_;
  }
  if (this_00 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x18);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      goto LAB_14fa29d09;
    }
    puVar1[1] = 0;
  }
  else {
    puVar1 = Arena::Allocate(this_00,0x18);
    puVar1[1] = this_00;
  }
  *(undefined1 *)(puVar1 + 2) = 0;
LAB_14fa29d09:
  this->ptr_ = (ulonglong)puVar1 | 1;
  *puVar1 = this_00;
  return (UnknownFieldSet *)(puVar1 + 1);
}

// to_address<google::protobuf::UnknownField_const_> @ 14fa29d30

/* class google::protobuf::UnknownField const * __ptr64 __cdecl std::to_address<class
   google::protobuf::UnknownField const >(class google::protobuf::UnknownField const * __ptr64
   const) */

UnknownField * __cdecl std::to_address<google::protobuf::UnknownField_const_>(UnknownField *param_1)

{
  return param_1;
}

// to_address<google::protobuf::UnknownField> @ 14fa29d40

/* class google::protobuf::UnknownField * __ptr64 __cdecl std::to_address<class
   google::protobuf::UnknownField>(class google::protobuf::UnknownField * __ptr64 const) */

UnknownField * __cdecl std::to_address<google::protobuf::UnknownField>(UnknownField *param_1)

{
  return param_1;
}

// transfer<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_> @ 14fa29d50

/* public: static void __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::transfer<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> >(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> *
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::transfer<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>_>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *param_1,
          DescriptorTable **param_2,DescriptorTable **param_3)

{
  *param_2 = *param_3;
  return;
}

// transfer_impl<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,void> @ 14fa29db0

/* private: static struct std::integral_constant<bool,1> __cdecl
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::transfer_impl<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>,void>(class
   std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64> *
   __ptr64,struct google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64,struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64,struct
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::Rank1) */

integral_constant<bool,1> __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::transfer_impl<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  return (integral_constant<bool,1>)0x0;
}

// FUN_14fa29dc0 @ 14fa29dc0

undefined1 FUN_14fa29dc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  return local_18;
}

// FUN_14fa29de0 @ 14fa29de0

longlong FUN_14fa29de0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  FUN_14fa29000();
  if (*(char *)(param_2 + 0x10) != '\0') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *puVar1 = *param_3;
    puVar1[1] = 0;
  }
  return param_2;
}

// FUN_14fa29e30 @ 14fa29e30

longlong FUN_14fa29e30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  FUN_14fa29000();
  if (*(char *)(param_2 + 0x10) != '\0') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *puVar1 = *param_3;
    puVar1[1] = *param_4;
  }
  return param_2;
}

// FUN_14fa29e80 @ 14fa29e80

longlong FUN_14fa29e80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  FUN_14fa29000();
  if (*(char *)(param_2 + 0x10) != '\0') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *puVar1 = *param_3;
    puVar1[1] = 0;
  }
  return param_2;
}

// FUN_14fa29ed0 @ 14fa29ed0

longlong FUN_14fa29ed0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  FUN_14fa29000();
  if (*(char *)(param_2 + 0x10) != '\0') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *puVar1 = *param_3;
    puVar1[1] = *param_4;
  }
  return param_2;
}

// uninitialized_copy_n<google::protobuf::UnknownField_const*___ptr64,int,google::protobuf::UnknownField*___ptr64> @ 14fa29f20

/* class google::protobuf::UnknownField * __ptr64 __cdecl std::uninitialized_copy_n<class
   google::protobuf::UnknownField const * __ptr64,int,class google::protobuf::UnknownField *
   __ptr64>(class google::protobuf::UnknownField const * __ptr64 const,int,class
   google::protobuf::UnknownField * __ptr64) */

UnknownField * __cdecl
std::
uninitialized_copy_n<google::protobuf::UnknownField_const*___ptr64,int,google::protobuf::UnknownField*___ptr64>
          (UnknownField *param_1,int param_2,UnknownField *param_3)

{
  if (param_2 < 1) {
    return param_3;
  }
  memmove(param_3,param_1,(longlong)param_2 * 0x10);
  return param_3 + param_2;
}

// <lambda_1> @ 14fa29f70

/* public: __cdecl `private: struct google::protobuf::internal::TcParseTableBase const * __ptr64
   __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class google::protobuf::Reflection const * __ptr64) __ptr64
    */

<lambda_1> * __thiscall
`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,Reflection *param_1)

{
  *(Reflection **)this = param_1;
  return this;
}

// Container<google::protobuf::UnknownFieldSet> @ 14fa29ff0

/* public: __cdecl google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet>::Container<class google::protobuf::UnknownFieldSet>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

Container<google::protobuf::UnknownFieldSet> * __thiscall
google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>::
Container<google::protobuf::UnknownFieldSet>
          (Container<google::protobuf::UnknownFieldSet> *this,Arena *param_1)

{
  (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
  return this;
}

// RepeatedField<google::protobuf::UnknownField> @ 14fa2a010

/* public: __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::RepeatedField<class google::protobuf::UnknownField>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedField<google::protobuf::UnknownField> * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::
RepeatedField<google::protobuf::UnknownField>
          (RepeatedField<google::protobuf::UnknownField> *this,Arena *param_1)

{
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8) = 0;
  return this;
}

// RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fa2a030

/* public: __cdecl google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::RepeatedPtrField<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void) __ptr64
    */

RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// _Optional_construct_base<google::protobuf::Message_const*___ptr64> @ 14fa2a050

/* public: __cdecl std::_Optional_construct_base<class google::protobuf::Message const *
   __ptr64>::_Optional_construct_base<class google::protobuf::Message const * __ptr64>(void) __ptr64
    */

_Optional_construct_base<google::protobuf::Message_const*___ptr64> * __thiscall
std::_Optional_construct_base<google::protobuf::Message_const*___ptr64>::
_Optional_construct_base<google::protobuf::Message_const*___ptr64>
          (_Optional_construct_base<google::protobuf::Message_const*___ptr64> *this)

{
  this[8] = (_Optional_construct_base<google::protobuf::Message_const*___ptr64>)0x0;
  return this;
}

// _Optional_destruct_base<google::protobuf::Message_const*___ptr64,1> @ 14fa2a060

/* public: __cdecl std::_Optional_destruct_base<class google::protobuf::Message const *
   __ptr64,1>::_Optional_destruct_base<class google::protobuf::Message const * __ptr64,1>(void)
   __ptr64 */

_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1> * __thiscall
std::_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1>::
_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1>
          (_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1> *this)

{
  this[8] = (_Optional_destruct_base<google::protobuf::Message_const*___ptr64,1>)0x0;
  return this;
}

// allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> @ 14fa2a070

/* public: __cdecl std::allocator<struct google::protobuf::internal::DescriptorTable const *
   __ptr64>::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>(void)
   __ptr64 */

allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> * __thiscall
std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>::
allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>
          (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *this)

{
  return this;
}

// FUN_14fa2a090 @ 14fa2a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a090(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  return param_1;
}

// FUN_14fa2a0f0 @ 14fa2a0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a0f0(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  return param_1;
}

// optional<google::protobuf::Message_const*___ptr64> @ 14fa2a160

/* public: __cdecl std::optional<class google::protobuf::Message const * __ptr64>::optional<class
   google::protobuf::Message const * __ptr64>(struct std::nullopt_t) __ptr64 */

optional<google::protobuf::Message_const*___ptr64> * __thiscall
std::optional<google::protobuf::Message_const*___ptr64>::
optional<google::protobuf::Message_const*___ptr64>
          (optional<google::protobuf::Message_const*___ptr64> *this,nullopt_t param_1)

{
  this[8] = (optional<google::protobuf::Message_const*___ptr64>)0x0;
  return this;
}

// optional<google::protobuf::Message_const*___ptr64> @ 14fa2a170

/* public: __cdecl std::optional<class google::protobuf::Message const * __ptr64>::optional<class
   google::protobuf::Message const * __ptr64>(void) __ptr64 */

optional<google::protobuf::Message_const*___ptr64> * __thiscall
std::optional<google::protobuf::Message_const*___ptr64>::
optional<google::protobuf::Message_const*___ptr64>
          (optional<google::protobuf::Message_const*___ptr64> *this)

{
  this[8] = (optional<google::protobuf::Message_const*___ptr64>)0x0;
  return this;
}

// FUN_14fa2a180 @ 14fa2a180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a180(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  return param_1;
}

// FUN_14fa2a1e0 @ 14fa2a1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a1e0(undefined8 *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  return param_1;
}

// FUN_14fa2a230 @ 14fa2a230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a230(undefined8 *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  return param_1;
}

// tuple<google::protobuf::Message_const*___ptr64&___ptr64> @ 14fa2a280

/* public: __cdecl std::tuple<class google::protobuf::Message const * __ptr64 &
   __ptr64>::tuple<class google::protobuf::Message const * __ptr64 & __ptr64>(class std::tuple<class
   google::protobuf::Message const * __ptr64 & __ptr64> && __ptr64) __ptr64 */

tuple<google::protobuf::Message_const*___ptr64&___ptr64> * __thiscall
std::tuple<google::protobuf::Message_const*___ptr64&___ptr64>::
tuple<google::protobuf::Message_const*___ptr64&___ptr64>
          (tuple<google::protobuf::Message_const*___ptr64&___ptr64> *this,
          tuple<class_google::protobuf::Message_const*___ptr64&___ptr64> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

// FUN_14fa2a290 @ 14fa2a290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa2a290(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  *param_1 = google::protobuf::_anon_FB416D7A::GeneratedMessageFactory::vftable;
  local_30 = 1;
  uStack_28 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = local_20;
  param_1[4] = uStack_18;
  local_38 = param_1;
  google::protobuf::DynamicMessageFactory::DynamicMessageFactory
            ((DynamicMessageFactory *)(param_1 + 5));
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  param_1[0x10] = local_20;
  param_1[0x11] = uStack_18;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}

// MessageFactory @ 14fa2a340

/* public: __cdecl google::protobuf::MessageFactory::MessageFactory(void) __ptr64 */

MessageFactory * __thiscall google::protobuf::MessageFactory::MessageFactory(MessageFactory *this)

{
  *this = (MessageFactory)vftable;
  return this;
}

// UnknownFieldSet @ 14fa2a390

/* private: __cdecl google::protobuf::UnknownFieldSet::UnknownFieldSet(class google::protobuf::Arena
   * __ptr64) __ptr64 */

UnknownFieldSet * __thiscall
google::protobuf::UnknownFieldSet::UnknownFieldSet(UnknownFieldSet *this,Arena *param_1)

{
  (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8) = 0;
  return this;
}

// UnknownFieldSet @ 14fa2a3b0

/* public: __cdecl google::protobuf::UnknownFieldSet::UnknownFieldSet(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

UnknownFieldSet * __thiscall
google::protobuf::UnknownFieldSet::UnknownFieldSet
          (UnknownFieldSet *this,InternalVisibility param_1,Arena *param_2)

{
  (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_2;
  *(undefined1 *)((longlong)&(this->fields_).soo_rep_.field0_0x0 + 8) = 0;
  return this;
}

// ~Container<google::protobuf::UnknownFieldSet> @ 14fa2a450

/* public: __cdecl google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet>::~Container<class google::protobuf::UnknownFieldSet>(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>::
~Container<google::protobuf::UnknownFieldSet>(Container<google::protobuf::UnknownFieldSet> *this)

{
  UnknownFieldSet *this_00;
  ulong64 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  this_00 = &this->unknown_fields;
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    UnknownFieldSet::ClearFallback(this_00);
  }
  uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    plVar4 = (longlong *)((uVar2 & 0xfffffffffffffff8) - 0x10);
    if (*plVar4 == 0) {
      ::operator_delete(plVar4,((longlong)
                                (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.capacity
                               + 1) * 0x10);
    }
  }
  return;
}

// FUN_14fa2a4f0 @ 14fa2a4f0

void FUN_14fa2a4f0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong64 uVar6;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    return;
  }
  uVar2 = (ulonglong)((byte)param_1[1] & 1);
  lVar3 = param_1[2] - uVar2;
  uVar6 = (uVar1 + 0x1f + uVar2 & 0xfffffffffffffff8) + uVar1 * 0x10;
  pvVar4 = (void *)(lVar3 + -8);
  pvVar5 = pvVar4;
  if (0xfff < uVar6) {
    pvVar5 = *(void **)(lVar3 + -0x10);
    uVar6 = uVar6 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar5,uVar6);
  return;
}

// FUN_14fa2a560 @ 14fa2a560

void FUN_14fa2a560(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  uVar5 = *param_1;
  if (uVar5 < 2) {
    return;
  }
  uVar1 = (ulonglong)((byte)param_1[1] & 1);
  lVar2 = param_1[2] - uVar1;
  pvVar3 = (void *)(lVar2 + -8);
  uVar5 = (uVar1 + 0x1f + uVar5 & 0xfffffffffffffff8) + uVar5 * 8;
  pvVar4 = pvVar3;
  if (0xfff < uVar5) {
    pvVar4 = *(void **)(lVar2 + -0x10);
    uVar5 = uVar5 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar4,uVar5);
  return;
}

// FUN_14fa2a5d0 @ 14fa2a5d0

void FUN_14fa2a5d0(undefined8 *param_1)

{
  FUN_14fa2a4f0(param_1 + 0xe);
  google::protobuf::DynamicMessageFactory::~DynamicMessageFactory
            ((DynamicMessageFactory *)(param_1 + 5));
  FUN_14fa2a560(param_1 + 1);
  *param_1 = google::protobuf::MessageFactory::vftable;
  return;
}

// ~MapFieldAccessor @ 14fa2a610

/* public: virtual __cdecl google::protobuf::internal::MapFieldAccessor::~MapFieldAccessor(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldAccessor::~MapFieldAccessor(MapFieldAccessor *this)

{
  return;
}

// ~MessageFactory @ 14fa2a620

/* public: virtual __cdecl google::protobuf::MessageFactory::~MessageFactory(void) __ptr64 */

void __thiscall google::protobuf::MessageFactory::~MessageFactory(MessageFactory *this)

{
  *this = (MessageFactory)vftable;
  return;
}

// ~RepeatedPtrFieldMessageAccessor @ 14fa2a640

/* public: virtual __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::~RepeatedPtrFieldMessageAccessor(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::~RepeatedPtrFieldMessageAccessor
          (RepeatedPtrFieldMessageAccessor *this)

{
  return;
}

// operator* @ 14fa2a680

/* public: class google::protobuf::Message const * __ptr64 & __ptr64 __cdecl
   std::_Optional_construct_base<class google::protobuf::Message const * __ptr64>::operator*(void)
   __ptr64&  */

Message ** __thiscall
std::_Optional_construct_base<google::protobuf::Message_const*___ptr64>::operator*
          (_Optional_construct_base<google::protobuf::Message_const*___ptr64> *this)

{
  return (Message **)this;
}

// FUN_14fa2a6b0 @ 14fa2a6b0

void FUN_14fa2a6b0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_14fa2a4f0(param_2 + 0xe);
    google::protobuf::DynamicMessageFactory::~DynamicMessageFactory
              ((DynamicMessageFactory *)(param_2 + 5));
    FUN_14fa2a560(param_2 + 1);
    *param_2 = google::protobuf::MessageFactory::vftable;
    operator_delete(param_2,0x90);
  }
  return;
}

// operator() @ 14fa2a700

/* public: __cdecl `private: struct google::protobuf::internal::TcParseTableBase const * __ptr64
   __cdecl google::protobuf::Reflection::GetTcParseTable(void)const
   __ptr64'::`2'::<lambda_1>::operator()(void)const __ptr64 */

void __thiscall
`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this)

{
  TcParseTableBase *pTVar1;
  
  pTVar1 = google::protobuf::Reflection::CreateTcParseTable(*(Reflection **)this);
  *(TcParseTableBase **)(*(longlong *)this + 0x68) = pTVar1;
  return;
}

// FUN_14fa2a760 @ 14fa2a760

longlong FUN_14fa2a760(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + *param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *param_2;
  plVar9 = (longlong *)
           absl::lts_20240722::container_internal::find_first_non_full<void>
                     ((CommonFields *)&stack0xffffffffffffffe8,*(__uint64 *)(param_1 + 8));
  bVar10 = (SUB161(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
           SUB161(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) & 0x7f;
  lVar6 = *plVar9;
  lVar7 = plVar9[1];
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar2 = puVar1[2];
  *(byte *)(uVar2 + lVar6) = bVar10;
  uVar3 = *puVar1;
  *(byte *)((ulonglong)((uint)uVar3 & 0xf) + (lVar6 - 0xfU & uVar3) + uVar2) = bVar10;
  lVar8 = param_2[1];
  plVar9 = (longlong *)(lVar6 * 0x10 + **(longlong **)(param_1 + 0x10));
  *plVar9 = *param_2;
  plVar9[1] = lVar8;
  return lVar7;
}

// FUN_14fa2a830 @ 14fa2a830

longlong FUN_14fa2a830(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulong64 uVar9;
  longlong local_res8;
  ulong64 local_10;
  
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + uVar9) != '\0');
  local_10 = uVar9;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9 + local_res8;
  plVar7 = (longlong *)
           absl::lts_20240722::container_internal::find_first_non_full<void>
                     ((CommonFields *)&stack0xffffffffffffffe8,*(__uint64 *)(param_1 + 8));
  bVar8 = (SUB161(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
          SUB161(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) & 0x7f;
  lVar5 = *plVar7;
  lVar6 = plVar7[1];
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar2 = puVar1[2];
  *(byte *)(uVar2 + lVar5) = bVar8;
  uVar3 = *puVar1;
  *(byte *)((ulonglong)((uint)uVar3 & 0xf) + (lVar5 - 0xfU & uVar3) + uVar2) = bVar8;
  *(longlong *)(**(longlong **)(param_1 + 0x10) + lVar5 * 8) = *param_2;
  return lVar6;
}

// FUN_14fa2a910 @ 14fa2a910

undefined8 FUN_14fa2a910(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  size_t sVar2;
  size_t _Size;
  
  if (param_2 != param_3) {
    sVar2 = 0xffffffffffffffff;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)*(void **)(param_2 + 0x10) + _Size) != '\0');
    do {
      sVar2 = sVar2 + 1;
    } while (*(char *)((longlong)*(void **)(param_3 + 0x10) + sVar2) != '\0');
    if ((_Size != sVar2) ||
       (iVar1 = memcmp(*(void **)(param_2 + 0x10),*(void **)(param_3 + 0x10),_Size), iVar1 != 0)) {
      return 0;
    }
  }
  return 1;
}

// FUN_14fa2a970 @ 14fa2a970

ulonglong FUN_14fa2a970(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(param_2 + 0x10) + _Size) != '\0');
  if (_Size == param_3[1]) {
    iVar1 = memcmp(*(void **)(param_2 + 0x10),(void *)*param_3,_Size);
    param_3 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    }
  }
  return (ulonglong)param_3 & 0xffffffffffffff00;
}

// FUN_14fa2a9c0 @ 14fa2a9c0

ulonglong FUN_14fa2a9c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  
  _Size = param_2[1];
  if (_Size == param_3[1]) {
    iVar1 = memcmp((void *)*param_2,(void *)*param_3,_Size);
    _Size = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(_Size >> 8),1);
    }
  }
  return _Size & 0xffffffffffffff00;
}

// FUN_14fa2aa10 @ 14fa2aa10

ulonglong FUN_14fa2aa10(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res10 [3];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(param_2 + 0x10) + lVar2) != '\0');
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res10,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res10[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// FUN_14fa2aa80 @ 14fa2aa80

ulonglong FUN_14fa2aa80(undefined8 param_1,__uint64 *param_2)

{
  __uint64 _Var1;
  undefined1 auVar2 [16];
  longlong local_res10 [3];
  
  _Var1 = param_2[1];
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res10,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,*param_2);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _Var1 + local_res10[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
}

// `scalar_deleting_destructor' @ 14fa2aae0

/* public: void * __ptr64 __cdecl google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet>::`scalar deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>::
_scalar_deleting_destructor_(Container<google::protobuf::UnknownFieldSet> *this,uint param_1)

{
  ulong64 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar1 = (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar4 = (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar4 = (uint)uVar1 & 3;
  }
  if (uVar4 != 0) {
    UnknownFieldSet::ClearFallback(&this->unknown_fields);
  }
  uVar2 = (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    plVar3 = (longlong *)((uVar2 & 0xfffffffffffffff8) - 0x10);
    if (*plVar3 == 0) {
      ::operator_delete(plVar3,((longlong)
                                (this->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.capacity
                               + 1) * 0x10);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// FUN_14fa2ab80 @ 14fa2ab80

undefined8 * FUN_14fa2ab80(undefined8 *param_1,ulonglong param_2)

{
  FUN_14fa2a4f0(param_1 + 0xe);
  google::protobuf::DynamicMessageFactory::~DynamicMessageFactory
            ((DynamicMessageFactory *)(param_1 + 5));
  FUN_14fa2a560(param_1 + 1);
  *param_1 = google::protobuf::MessageFactory::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,0x90);
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 14fa2abe0

/* public: virtual void * __ptr64 __cdecl google::protobuf::internal::MapFieldAccessor::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::MapFieldAccessor::_scalar_deleting_destructor_
          (MapFieldAccessor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fa2ac10

/* public: virtual void * __ptr64 __cdecl google::protobuf::MessageFactory::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::MessageFactory::_scalar_deleting_destructor_(MessageFactory *this,uint param_1)

{
  *this = (MessageFactory)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fa2ac50

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::_scalar_deleting_destructor_
          (RepeatedPtrFieldMessageAccessor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Add @ 14fa2ac80

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<int>::Add(void *
   __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::Add
          (RepeatedFieldWrapper<int> *this,void *param_1,void *param_2)

{
  int iVar1;
  RepeatedField<int> *this_00;
  
  this_00 = (RepeatedField<int> *)(**(code **)(*(longlong *)this + 0x88))();
  iVar1 = (**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<int>::Add(this_00,iVar1);
  return;
}

// Add @ 14fa2ace0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::Add(void * __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::Add
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1,void *param_2)

{
  uint uVar1;
  RepeatedField<unsigned_int> *this_00;
  
  this_00 = (RepeatedField<unsigned_int> *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = (**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<unsigned_int>::Add(this_00,uVar1);
  return;
}

// Add @ 14fa2ad40

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<float>::Add(void *
   __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::Add
          (RepeatedFieldWrapper<float> *this,void *param_1,void *param_2)

{
  RepeatedField<float> *this_00;
  float fVar1;
  
  this_00 = (RepeatedField<float> *)(**(code **)(*(longlong *)this + 0x88))();
  fVar1 = (float)(**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<float>::Add(this_00,fVar1);
  return;
}

// Add @ 14fa2ada0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<double>::Add(void *
   __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::Add
          (RepeatedFieldWrapper<double> *this,void *param_1,void *param_2)

{
  double dVar1;
  RepeatedField<double> *this_00;
  
  this_00 = (RepeatedField<double> *)(**(code **)(*(longlong *)this + 0x88))();
  dVar1 = (double)(**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<double>::Add(this_00,dVar1);
  return;
}

// Add @ 14fa2ae00

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<__int64>::Add(void
   * __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::Add
          (RepeatedFieldWrapper<__int64> *this,void *param_1,void *param_2)

{
  RepeatedField<__int64> *this_00;
  __int64 _Var1;
  
  this_00 = (RepeatedField<__int64> *)(**(code **)(*(longlong *)this + 0x88))();
  _Var1 = (**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<__int64>::Add(this_00,_Var1);
  return;
}

// Add @ 14fa2ae60

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::Add(void * __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::Add
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1,void *param_2)

{
  RepeatedField<unsigned___int64> *this_00;
  __uint64 _Var1;
  
  this_00 = (RepeatedField<unsigned___int64> *)(**(code **)(*(longlong *)this + 0x88))();
  _Var1 = (**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<unsigned___int64>::Add(this_00,_Var1);
  return;
}

// Add @ 14fa2aec0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<bool>::Add(void *
   __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::Add
          (RepeatedFieldWrapper<bool> *this,void *param_1,void *param_2)

{
  bool bVar1;
  RepeatedField<bool> *this_00;
  
  this_00 = (RepeatedField<bool> *)(**(code **)(*(longlong *)this + 0x88))();
  bVar1 = (bool)(**(code **)(*(longlong *)this + 0x90))(this,param_2);
  RepeatedField<bool>::Add(this_00,bVar1);
  return;
}

// Add @ 14fa2af20

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::Add(void *
   __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Add
          (RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  RepeatedPtrFieldBase *this_00;
  byte bVar6;
  RepeatedPtrFieldBase *pRVar7;
  bool bVar8;
  
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (**(code **)(*(longlong *)this + 0x90))(this,param_2);
  (**(code **)(*(longlong *)this + 0x98))(this,param_2,pbVar5);
  this_00 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
  if (this_00->arena_ == (Arena *)0x0) {
    pvVar3 = this_00->tagged_rep_or_elem_;
    bVar6 = ~*(byte *)&this_00->tagged_rep_or_elem_ & 1;
    if (bVar6 == 0) {
      bVar8 = this_00->capacity_proxy_ + 1 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar8 = pvVar3 != (void *)0x0;
    }
    if (!bVar8) {
      if (bVar6 == 0) {
        uVar4 = *(uint *)((longlong)pvVar3 + -1);
        pRVar7 = (RepeatedPtrFieldBase *)((longlong)pvVar3 + 7);
      }
      else {
        uVar4 = (uint)(pvVar3 != (void *)0x0);
        pRVar7 = this_00;
      }
      if (this_00->current_size_ < (int)uVar4) {
        if (bVar6 == 0) {
          uVar4 = *(uint *)((longlong)pvVar3 + -1);
        }
        else {
          uVar4 = (uint)(pvVar3 != (void *)0x0);
        }
        (&pRVar7->tagged_rep_or_elem_)[(int)uVar4] =
             (&pRVar7->tagged_rep_or_elem_)[this_00->current_size_];
      }
      iVar2 = this_00->current_size_;
      this_00->current_size_ = iVar2 + 1;
      (&pRVar7->tagged_rep_or_elem_)[iVar2] = pbVar5;
      if ((~*(byte *)&this_00->tagged_rep_or_elem_ & 1) != 0) {
        return;
      }
      piVar1 = (int *)((longlong)this_00->tagged_rep_or_elem_ + -1);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
  RepeatedPtrFieldBase::
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (this_00,pbVar5,(Arena *)0x0,this_00->arena_);
  return;
}

// Add @ 14fa2b040

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::Add(void * __ptr64,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Add
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  Message *pMVar5;
  RepeatedPtrFieldBase *this_00;
  Arena *pAVar6;
  byte bVar7;
  RepeatedPtrFieldBase *pRVar8;
  bool bVar9;
  
  pMVar5 = (Message *)(**(code **)(*(longlong *)this + 0x90))(this,param_2);
  (**(code **)(*(longlong *)this + 0x98))(this,param_2,pMVar5);
  this_00 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
  pAVar6 = GenericTypeHandler<google::protobuf::Message>::GetArena(pMVar5);
  if (this_00->arena_ == pAVar6) {
    pvVar3 = this_00->tagged_rep_or_elem_;
    bVar7 = ~*(byte *)&this_00->tagged_rep_or_elem_ & 1;
    if (bVar7 == 0) {
      bVar9 = this_00->capacity_proxy_ + 1 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar9 = pvVar3 != (void *)0x0;
    }
    if (!bVar9) {
      if (bVar7 == 0) {
        uVar4 = *(uint *)((longlong)pvVar3 + -1);
        pRVar8 = (RepeatedPtrFieldBase *)((longlong)pvVar3 + 7);
      }
      else {
        uVar4 = (uint)(pvVar3 != (void *)0x0);
        pRVar8 = this_00;
      }
      if (this_00->current_size_ < (int)uVar4) {
        if (bVar7 == 0) {
          uVar4 = *(uint *)((longlong)pvVar3 + -1);
        }
        else {
          uVar4 = (uint)(pvVar3 != (void *)0x0);
        }
        (&pRVar8->tagged_rep_or_elem_)[(int)uVar4] =
             (&pRVar8->tagged_rep_or_elem_)[this_00->current_size_];
      }
      iVar2 = this_00->current_size_;
      this_00->current_size_ = iVar2 + 1;
      (&pRVar8->tagged_rep_or_elem_)[iVar2] = pMVar5;
      if ((~*(byte *)&this_00->tagged_rep_or_elem_ & 1) != 0) {
        return;
      }
      piVar1 = (int *)((longlong)this_00->tagged_rep_or_elem_ + -1);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
  RepeatedPtrFieldBase::
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
            (this_00,pMVar5,pAVar6,this_00->arena_);
  return;
}

// AddAllocated @ 14fa2b160

/* public: void __cdecl google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::AddAllocated(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
AddAllocated(RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pRVar4;
  bool bVar5;
  
  if (*(Arena **)&this->field_0x10 == (Arena *)0x0) {
    lVar2 = *(longlong *)this;
    if ((~*(byte *)this & 1) == 0) {
      bVar5 = *(int *)&this->field_0xc + 1 <= *(int *)(lVar2 + -1);
    }
    else {
      bVar5 = lVar2 != 0;
    }
    if (!bVar5) {
      if ((~*(byte *)this & 1) == 0) {
        uVar3 = *(uint *)(lVar2 + -1);
        pRVar4 = (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  *)(lVar2 + 7);
      }
      else {
        uVar3 = (uint)(lVar2 != 0);
        pRVar4 = this;
      }
      if (*(int *)&this->field_0x8 < (int)uVar3) {
        if ((~(byte)lVar2 & 1) == 0) {
          uVar3 = *(uint *)(lVar2 + -1);
        }
        else {
          uVar3 = (uint)(lVar2 != 0);
        }
        *(undefined8 *)(&pRVar4->field_0x0 + (longlong)(int)uVar3 * 8) =
             *(undefined8 *)(&pRVar4->field_0x0 + (longlong)*(int *)&this->field_0x8 * 8);
      }
      iVar1 = *(int *)&this->field_0x8;
      *(int *)&this->field_0x8 = iVar1 + 1;
      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
       (&pRVar4->field_0x0 + (longlong)iVar1 * 8) = param_1;
      if ((~*(byte *)this & 1) == 0) {
        *(int *)(*(longlong *)this + -1) = *(int *)(*(longlong *)this + -1) + 1;
        return;
      }
      return;
    }
  }
  internal::RepeatedPtrFieldBase::
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ((RepeatedPtrFieldBase *)this,param_1,(Arena *)0x0,*(Arena **)&this->field_0x10);
  return;
}

// AdvanceIterator @ 14fa2b220

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::AdvanceIterator(void const *
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::AdvanceIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1,void *param_2)

{
  return (void *)((longlong)param_2 + 1);
}

// BeginIterator @ 14fa2b230

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::BeginIterator(void const *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::BeginIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1)

{
  return (void *)0x0;
}

// ByteSizeLong @ 14fa2b240

/* public: virtual unsigned __int64 __cdecl google::protobuf::Message::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::Message::ByteSizeLong(Message *this)

{
  __uint64 _Var1;
  longlong lVar2;
  
  _Var1 = internal::WireFormat::ByteSize(this);
  lVar2 = (**(code **)(*(longlong *)this + 0x18))(this);
  if (((int)_Var1 != 0) || (*(int *)(&this->field_0x0 + *(uint *)(lVar2 + 0x38)) != 0)) {
    *(int *)(&this->field_0x0 + *(uint *)(lVar2 + 0x38)) = (int)_Var1;
  }
  return _Var1;
}

// ByteSizeLongImpl @ 14fa2b290

/* protected: static unsigned __int64 __cdecl google::protobuf::Message::ByteSizeLongImpl(class
   google::protobuf::MessageLite const & __ptr64) */

__uint64 __cdecl google::protobuf::Message::ByteSizeLongImpl(MessageLite *param_1)

{
  __uint64 _Var1;
  longlong lVar2;
  
  _Var1 = internal::WireFormat::ByteSize((Message *)param_1);
  lVar2 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (((int)_Var1 != 0) ||
     (*(int *)((longlong)&param_1->_padding_ + (ulonglong)*(uint *)(lVar2 + 0x38)) != 0)) {
    *(int *)((longlong)&param_1->_padding_ + (ulonglong)*(uint *)(lVar2 + 0x38)) = (int)_Var1;
  }
  return _Var1;
}

// CheckInitialized @ 14fa2b2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl google::protobuf::Message::CheckInitialized(void)const __ptr64 */

void __thiscall google::protobuf::Message::CheckInitialized(Message *this)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LogMessage *pLVar5;
  ClassDataFull *pCVar6;
  Metadata *pMVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  void *pvVar9;
  ulong64 uVar10;
  undefined1 auStack_78 [32];
  basic_string_view<char,std::char_traits<char>_> local_58;
  undefined4 local_48;
  LogMessageFatal local_40;
  _Bxty local_30;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar3 = false;
  bVar2 = false;
  local_48 = 0;
  bVar4 = MessageLite::IsInitialized((MessageLite *)this);
  if (!bVar4) {
    local_58._Mydata = "IsInitialized()";
    local_58._Mysize = (ulong64)&DAT_0000000f;
    pLVar5 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       (&local_40,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                        ,0x92,&local_58);
    local_48 = 1;
    local_58._Mydata = "Message of type \"";
    local_58._Mysize = (ulong64)&DAT_00000011;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_58);
    pCVar6 = (ClassDataFull *)(**(code **)(*(longlong *)this + 0x18))(this);
    pMVar7 = GetMetadataImpl((Metadata *)&local_58,pCVar6);
    pbVar8 = pMVar7->descriptor->all_names_;
    local_58._Mydata = (char *)(pbVar8 + 1);
    if (0xf < pbVar8[1]._Mypair._Myval2._Myres) {
      local_58._Mydata = pbVar8[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_58._Mysize = pbVar8[1]._Mypair._Myval2._Mysize;
    pLVar5 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar5,&local_58);
    local_58._Mydata = "\" is missing required fields: ";
    local_58._Mysize = 0x1e;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar5,&local_58);
    pbVar8 = InitializationErrorString
                       (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_30);
    bVar3 = true;
    bVar2 = true;
    local_48 = 3;
    absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar5,pbVar8);
  }
  if (bVar2) {
    if (0xf < uStack_18) {
      uVar10 = uStack_18 + 1;
      pvVar1 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
      pvVar9 = pvVar1;
      if (0xfff < uVar10) {
        uVar10 = uStack_18 + 0x28;
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar9,uVar10);
    }
    local_20 = ___xmm_000000000000000f0000000000000000;
    uStack_18 = _UNK_15076add8;
    local_30._Buf[0] = '\0';
  }
  if (!bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_40);
}

// Clear @ 14fa2b4c0

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Clear(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Clear
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
    return;
  }
  (this->soo_rep_).field0_0x0.long_rep.size = 0;
  return;
}

// Clear @ 14fa2b4f0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<int>::Clear(void *
   __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::Clear
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b530

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::Clear(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::Clear
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b570

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<float>::Clear(void
   * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::Clear
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b5b0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<double>::Clear(void
   * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::Clear
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b5f0

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::Clear(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::Clear
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b630

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::Clear(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::Clear
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b670

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<bool>::Clear(void *
   __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::Clear
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffffffffffff8;
    return;
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}

// Clear @ 14fa2b6b0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::Clear(void *
   __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
Clear(RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
      *this,void *param_1)

{
  RepeatedPtrFieldBase *this_00;
  
  this_00 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))();
  if (0 < this_00->current_size_) {
    RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (this_00);
    return;
  }
  return;
}

// Clear @ 14fa2b6e0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::Clear(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Clear
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  RepeatedPtrFieldBase *this_00;
  
  this_00 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))();
  if (0 < this_00->current_size_) {
    RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              (this_00);
    return;
  }
  return;
}

// Clear @ 14fa2b710

/* public: virtual void __cdecl google::protobuf::Message::Clear(void) __ptr64 */

void __thiscall google::protobuf::Message::Clear(Message *this)

{
  undefined8 *puVar1;
  Reflection *this_00;
  InternalMetadata *pIVar2;
  UnknownFieldSet *this_01;
  undefined8 *puVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
  this_00 = (Reflection *)FUN_14fb865a0();
  puStack_28 = (undefined8 *)0x0;
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  Reflection::ListFields
            (this_00,this,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&puStack_28);
  puVar1 = puStack_20;
  for (puVar3 = puStack_28; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    Reflection::ClearField(this_00,this,(FieldDescriptor *)*puVar3);
  }
  pIVar2 = Reflection::GetInternalMetadata(this_00,this);
  if ((pIVar2->ptr_ & 1) != 0) {
    this_01 = Reflection::MutableUnknownFields(this_00,this);
    uVar5 = (this_01->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar5 >> 2) & 1) == 0) {
      uVar4 = (this_01->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar4 = (uint)uVar5 & 3;
    }
    if (uVar4 != 0) {
      UnknownFieldSet::ClearFallback(this_01);
    }
  }
  if (puStack_28 != (undefined8 *)0x0) {
    uVar5 = lStack_18 - (longlong)puStack_28 & 0xfffffffffffffff8;
    puVar3 = puStack_28;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      puVar3 = (undefined8 *)puStack_28[-1];
      if (0x1f < (ulonglong)((longlong)puStack_28 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar3,uVar5);
  }
  return;
}

// ClearImpl @ 14fa2b720

/* protected: void __cdecl google::protobuf::Message::ClearImpl(void) __ptr64 */

void __thiscall google::protobuf::Message::ClearImpl(Message *this)

{
  internal::ReflectionOps::Clear(this);
  return;
}

// ComputeUnknownFieldsSize @ 14fa2b740

/* protected: unsigned __int64 __cdecl google::protobuf::Message::ComputeUnknownFieldsSize(unsigned
   __int64,class google::protobuf::internal::CachedSize const * __ptr64)const __ptr64 */

__uint64 __thiscall
google::protobuf::Message::ComputeUnknownFieldsSize
          (Message *this,__uint64 param_1,CachedSize *param_2)

{
  UnknownFieldSet *pUVar1;
  __uint64 _Var2;
  atomic<int> aVar3;
  
  if ((this->field_0x8 & 1) == 0) {
    pUVar1 = UnknownFieldSet::default_instance();
  }
  else {
    pUVar1 = (UnknownFieldSet *)((*(ulonglong *)&this->field_0x8 & 0xfffffffffffffffe) + 8);
  }
  _Var2 = internal::WireFormat::ComputeUnknownFieldsSize(pUVar1);
  aVar3 = SUB84(param_1 + _Var2,0);
  if ((aVar3 != (atomic<int>)0x0) || (param_2->atom_ != (atomic<int>)0x0)) {
    param_2->atom_ = aVar3;
  }
  return param_1 + _Var2;
}

// ConvertFromT @ 14fa2b7b0

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertFromT(int const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<int> *this,int *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b7c0

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertFromT(unsigned
   int const & __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned_int>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<unsigned_int> *this,uint *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b7d0

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertFromT(float const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<float> *this,float *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b7e0

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertFromT(double const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<double> *this,double *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b7f0

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::ConvertFromT(__int64 const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<__int64> *this,__int64 *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b800

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned
   __int64>::ConvertFromT(unsigned __int64 const & __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned___int64>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<unsigned___int64> *this,__uint64 *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b810

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertFromT(bool const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertFromT
          (RepeatedFieldPrimitiveAccessor<bool> *this,bool *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b820

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertFromT(class
   google::protobuf::Message const & __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertFromT
          (RepeatedPtrFieldMessageAccessor *this,Message *param_1,void *param_2)

{
  return param_1;
}

// ConvertFromT @ 14fa2b830

/* protected: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertFromT(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertFromT
          (RepeatedPtrFieldStringAccessor *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,void *param_2)

{
  return param_1;
}

// ConvertToT @ 14fa2b840

/* protected: virtual int __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertToT(void const *
   __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<int> *this,void *param_1)

{
  return *(int *)param_1;
}

// ConvertToT @ 14fa2b850

/* protected: virtual unsigned int __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertToT(void const *
   __ptr64)const __ptr64 */

uint __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned_int>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<unsigned_int> *this,void *param_1)

{
  return *(uint *)param_1;
}

// ConvertToT @ 14fa2b860

/* protected: virtual float __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertToT(void const *
   __ptr64)const __ptr64 */

float __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<float> *this,void *param_1)

{
  return *(float *)param_1;
}

// ConvertToT @ 14fa2b870

/* protected: virtual double __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertToT(void const *
   __ptr64)const __ptr64 */

double __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<double> *this,void *param_1)

{
  return *(double *)param_1;
}

// ConvertToT @ 14fa2b880

/* protected: virtual __int64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::ConvertToT(void const *
   __ptr64)const __ptr64 */

__int64 __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<__int64> *this,void *param_1)

{
  return *(__int64 *)param_1;
}

// ConvertToT @ 14fa2b890

/* protected: virtual unsigned __int64 __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned __int64>::ConvertToT(void
   const * __ptr64)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned___int64>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<unsigned___int64> *this,void *param_1)

{
  return *(__uint64 *)param_1;
}

// ConvertToT @ 14fa2b8a0

/* protected: virtual bool __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertToT(void const *
   __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertToT
          (RepeatedFieldPrimitiveAccessor<bool> *this,void *param_1)

{
  return (bool)*(undefined1 *)param_1;
}

// ConvertToT @ 14fa2b8b0

/* protected: virtual void __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertToT(void const *
   __ptr64,class google::protobuf::Message * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertToT
          (RepeatedPtrFieldMessageAccessor *this,void *param_1,Message *param_2)

{
  protobuf::Message::CopyFrom(param_2,param_1);
  return;
}

// ConvertToT @ 14fa2b8c0

/* protected: virtual void __cdecl
   google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertToT(void const * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertToT
          (RepeatedPtrFieldStringAccessor *this,void *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulong64 *puVar1;
  
  if (param_2 != param_1) {
    puVar1 = (ulong64 *)((longlong)param_1 + 0x10);
    if (0xf < *(ulonglong *)((longlong)param_1 + 0x18)) {
      param_1 = *(void **)param_1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,param_1,*puVar1);
    return;
  }
  return;
}

// CopyFrom @ 14fa2b8f0

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::CopyFrom(class google::protobuf::RepeatedField<class
   google::protobuf::UnknownField> const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::CopyFrom
          (RepeatedField<google::protobuf::UnknownField> *this,
          RepeatedField<class_google::protobuf::UnknownField> *param_1)

{
  ulonglong uVar1;
  
  if (param_1 == (RepeatedField<class_google::protobuf::UnknownField> *)this) {
    return;
  }
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
    MergeFrom(this,param_1);
    return;
  }
  (this->soo_rep_).field0_0x0.long_rep.size = 0;
  MergeFrom(this,param_1);
  return;
}

// CopyFrom @ 14fa2b930

/* WARNING: Removing unreachable block (ram,0x00014fa2bb3f) */
/* WARNING: Removing unreachable block (ram,0x00014fa2bb54) */
/* WARNING: Removing unreachable block (ram,0x00014fa2bb6f) */
/* public: void __cdecl google::protobuf::Message::CopyFrom(class google::protobuf::Message const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Message::CopyFrom(Message *this,Message *param_1)

{
  Descriptor *pDVar1;
  longlong lVar2;
  longlong lVar3;
  ClassDataFull *pCVar4;
  Metadata *pMVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  LogMessage *pLVar7;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c8;
  ulong64 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  basic_string_view<char,std::char_traits<char>_> local_a8;
  char *local_98;
  undefined8 uStack_90;
  basic_string_view<char,std::char_traits<char>_> local_88;
  Metadata local_78;
  Metadata local_68;
  Metadata local_58 [3];
  
  if (param_1 != this) {
    lVar2 = (**(code **)(*(longlong *)this + 0x18))();
    lVar3 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    if ((lVar3 == 0) || (lVar3 != lVar2)) {
      pCVar4 = (ClassDataFull *)(**(code **)(*(longlong *)this + 0x18))(this);
      pMVar5 = GetMetadataImpl(&local_78,pCVar4);
      pDVar1 = pMVar5->descriptor;
      pCVar4 = (ClassDataFull *)(**(code **)(*(longlong *)param_1 + 0x18))(param_1);
      pMVar5 = GetMetadataImpl(&local_68,pCVar4);
      if ((pMVar5->descriptor != pDVar1) &&
         (pbVar6 = absl::lts_20240722::log_internal::
                   MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                             (pMVar5->descriptor,pDVar1,"from.GetDescriptor() == descriptor"),
         pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
        local_d8._Mydata = (char *)pbVar6;
        if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
          local_d8._Mydata = (pbVar6->_Mypair)._Myval2._Bx._Ptr;
        }
        local_d8._Mysize = (pbVar6->_Mypair)._Myval2._Mysize;
        local_c8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_d8._Mydata;
        uStack_c0 = local_d8._Mysize;
        pLVar7 = (LogMessage *)
                 absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                           ((LogMessageFatal *)&local_78,
                            "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                            ,0x74,&local_d8);
        local_b8 = ": Tried to copy from a message with a different type. to: ";
        uStack_b0 = 0x3a;
        local_d8._Mydata = ": Tried to copy from a message with a different type. to: ";
        local_d8._Mysize = 0x3a;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_d8);
        pbVar6 = pDVar1->all_names_;
        local_a8._Mydata = (char *)(pbVar6 + 1);
        if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
          local_a8._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_a8._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
        pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_a8);
        local_98 = ", from: ";
        uStack_90 = 8;
        local_d8._Mydata = ", from: ";
        local_d8._Mysize = 8;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar7,&local_d8);
        pCVar4 = (ClassDataFull *)(**(code **)(*(longlong *)param_1 + 0x18))(param_1);
        pMVar5 = GetMetadataImpl(local_58,pCVar4);
        pbVar6 = pMVar5->descriptor->all_names_;
        local_88._Mydata = (char *)(pbVar6 + 1);
        if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
          local_88._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_88._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_88);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                  ((LogMessageFatal *)&local_78);
      }
      internal::ReflectionOps::Copy(param_1,this);
    }
    else {
      (**(code **)(*(longlong *)this + 8))(this);
      (**(code **)(lVar2 + 0x20))(this,param_1);
    }
  }
  return;
}

// CopyIterator @ 14fa2bb90

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::CopyIterator(void const *
   __ptr64,void const * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::CopyIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1,void *param_2)

{
  return param_2;
}

// CreateSplitMessageGeneric @ 14fa2bba0

/* void * __ptr64 __cdecl google::protobuf::internal::CreateSplitMessageGeneric(class
   google::protobuf::Arena * __ptr64,void const * __ptr64,unsigned __int64,void const * __ptr64,void
   const * __ptr64) */

void * __cdecl
google::protobuf::internal::CreateSplitMessageGeneric
          (Arena *param_1,void *param_2,__uint64 param_3,void *param_4,void *param_5)

{
  void *_Dst;
  
  if (param_1 == (Arena *)0x0) {
    _Dst = ::operator_new(param_3);
  }
  else {
    _Dst = Arena::Allocate(param_1,param_3 + 7 & 0xfffffffffffffff8);
  }
  memcpy(_Dst,param_2,param_3);
  return _Dst;
}

// DeleteIterator @ 14fa2bc00

/* public: virtual void __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::DeleteIterator(void const *
   __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::DeleteIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1,void *param_2)

{
  return;
}

// DiscardUnknownFields @ 14fa2bc10

/* WARNING: Removing unreachable block (ram,0x00014fb86118) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::Message::DiscardUnknownFields(void) __ptr64 */

void __thiscall google::protobuf::Message::DiscardUnknownFields(Message *this)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  CppType CVar4;
  int iVar5;
  Reflection *this_00;
  UnknownFieldSet *pUVar6;
  MapFieldBase *this_01;
  Descriptor *pDVar7;
  Metadata *pMVar8;
  FieldDescriptor *pFVar9;
  FieldDescriptor *pFVar10;
  LogMessage *pLVar11;
  Message *pMVar12;
  uint uVar13;
  ulong64 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  longlong lStack_1f8;
  undefined1 auStack_1e8 [56];
  MapValueConstRef MStack_1b0;
  char *pcStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  undefined8 uStack_160;
  basic_string_view<char,std::char_traits<char>_> bStack_158;
  char *pcStack_148;
  undefined8 uStack_140;
  char *pcStack_138;
  undefined8 uStack_130;
  basic_string_view<char,std::char_traits<char>_> bStack_128;
  basic_string_view<char,std::char_traits<char>_> bStack_118;
  basic_string_view<char,std::char_traits<char>_> bStack_108;
  basic_string_view<char,std::char_traits<char>_> bStack_f8;
  basic_string_view<char,std::char_traits<char>_> bStack_e8;
  basic_string_view<char,std::char_traits<char>_> bStack_d8;
  basic_string_view<char,std::char_traits<char>_> bStack_c8;
  LogMessageFatal LStack_b8;
  MapIterator MStack_a8;
  Metadata MStack_58;
  Metadata aMStack_48 [2];
  
  this_00 = (Reflection *)FUN_14fb865a0();
  pUVar6 = Reflection::GetUnknownFields(this_00,this);
  uVar14 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar14 >> 2) & 1) == 0) {
    uVar13 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar13 = (uint)uVar14 & 3;
  }
  if (uVar13 != 0) {
    pUVar6 = Reflection::MutableUnknownFields(this_00,this);
    uVar14 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar14 >> 2) & 1) == 0) {
      uVar13 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar13 = (uint)uVar14 & 3;
    }
    if (uVar13 != 0) {
      UnknownFieldSet::ClearFallback(pUVar6);
    }
  }
  puStack_208 = (undefined8 *)0x0;
  puStack_200 = (undefined8 *)0x0;
  lStack_1f8 = 0;
  Reflection::ListFields
            (this_00,this,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&puStack_208);
  puVar2 = puStack_200;
  puVar16 = puStack_208;
  do {
    if (puVar16 == puVar2) {
      if (puStack_208 != (undefined8 *)0x0) {
        uVar14 = lStack_1f8 - (longlong)puStack_208 & 0xfffffffffffffff8;
        puVar16 = puStack_208;
        if (0xfff < uVar14) {
          uVar14 = uVar14 + 0x27;
          puVar16 = (undefined8 *)puStack_208[-1];
          if (0x1f < (ulonglong)((longlong)puStack_208 + (-8 - (longlong)puVar16))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(puVar16,uVar14);
      }
      return;
    }
    pFVar10 = (FieldDescriptor *)*puVar16;
    if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar10->type_ * 4) ==
        10) {
      if ((((pFVar10->type_ == 0xb) &&
           (bVar3 = FieldDescriptor::is_map_message_type(pFVar10), bVar3)) &&
          (this_01 = Reflection::MutableMapData(this_00,this,pFVar10),
          this_01 != (MapFieldBase *)0x0)) &&
         (bVar3 = internal::MapFieldBase::IsMapValid(this_01), bVar3)) {
        pDVar7 = FieldDescriptor::message_type(pFVar10);
        if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap +
                    (ulonglong)pDVar7->fields_[1].type_ * 4) == 10) {
          auStack_1e8._48_4_ = 0;
          MStack_1b0.data_ = (Message *)0x0;
          MStack_1b0.type_ = 0;
          pMVar8 = GetMetadata(this,&MStack_58);
          auStack_1e8._24_8_ = Reflection::MutableMapData(pMVar8->reflection,this,pFVar10);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_key(pDVar7);
          auStack_1e8._48_4_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_value(pDVar7);
          MStack_1b0.type_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          MStack_a8.key_.type_ = 0;
          MStack_a8.value_._0_8_ = 0;
          MStack_a8.value_._8_4_ = 0;
          pMVar8 = GetMetadata(this,aMStack_48);
          MStack_a8.map_ = Reflection::MutableMapData(pMVar8->reflection,this,pFVar10);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_key(pDVar7);
          MStack_a8.key_.type_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar10 = Descriptor::map_value(pDVar7);
          MStack_a8.value_._8_4_ =
               *(undefined4 *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar10->type_ * 4);
          internal::MapFieldBase::MapBegin(this_01,(MapIterator *)auStack_1e8);
          internal::MapFieldBase::MapEnd(this_01,&MStack_a8);
          bVar3 = internal::MapFieldBase::EqualIterator
                            ((MapFieldBase *)auStack_1e8._24_8_,(MapIterator *)auStack_1e8,
                             &MStack_a8);
          while (!bVar3) {
            uVar1 = *(ulonglong *)auStack_1e8._24_8_;
            if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
              *(undefined4 *)(uVar1 + 0x1f) = 0;
            }
            CVar4 = MapValueConstRef::type(&MStack_1b0);
            if (CVar4 != CPPTYPE_MESSAGE) {
              pLVar11 = (LogMessage *)
                        absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                  (&LStack_b8,
                                   "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                   ,0x305);
              pcStack_198 = "Protocol Buffer map usage error:\n";
              uStack_190 = 0x21;
              bStack_118._Mydata = "Protocol Buffer map usage error:\n";
              bStack_118._Mysize = 0x21;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_118);
              pcStack_188 = "MapValueRef::MutableMessageValue";
              uStack_180 = 0x20;
              bStack_108._Mydata = "MapValueRef::MutableMessageValue";
              bStack_108._Mysize = 0x20;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_108);
              pcStack_178 = " type does not match\n";
              uStack_170 = 0x15;
              bStack_f8._Mydata = " type does not match\n";
              bStack_f8._Mysize = 0x15;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_f8);
              pcStack_168 = "  Expected : ";
              uStack_160 = 0xd;
              bStack_e8._Mydata = "  Expected : ";
              bStack_e8._Mysize = 0xd;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_e8);
              bStack_158._Mydata = PTR_s_message_1535d0170;
              bStack_158._Mysize = 0xffffffffffffffff;
              do {
                bStack_158._Mysize = bStack_158._Mysize + 1;
              } while (PTR_s_message_1535d0170[bStack_158._Mysize] != '\0');
              pLVar11 = absl::lts_20240722::log_internal::LogMessage::operator<<
                                  (pLVar11,&bStack_158);
              pcStack_148 = "\n";
              uStack_140 = 1;
              bStack_d8._Mydata = "\n";
              bStack_d8._Mysize = 1;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_d8);
              pcStack_138 = "  Actual   : ";
              uStack_130 = 0xd;
              bStack_c8._Mydata = "  Actual   : ";
              bStack_c8._Mysize = 0xd;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&bStack_c8);
              CVar4 = MapValueConstRef::type(&MStack_1b0);
              bStack_128._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
              bStack_128._Mysize = 0xffffffffffffffff;
              do {
                bStack_128._Mysize = bStack_128._Mysize + 1;
              } while (bStack_128._Mydata[bStack_128._Mysize] != '\0');
              absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar11,&bStack_128);
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&LStack_b8);
            }
            DiscardUnknownFields(MStack_1b0.data_);
            internal::MapFieldBase::IncreaseIterator
                      ((MapFieldBase *)auStack_1e8._24_8_,(MapIterator *)auStack_1e8);
            bVar3 = internal::MapFieldBase::EqualIterator
                              ((MapFieldBase *)auStack_1e8._24_8_,(MapIterator *)auStack_1e8,
                               &MStack_a8);
          }
        }
      }
      else if (pFVar10->is_repeated_) {
        iVar5 = Reflection::FieldSize(this_00,this,pFVar10);
        iVar15 = 0;
        if (0 < iVar5) {
          do {
            pMVar12 = Reflection::MutableRepeatedMessage(this_00,this,pFVar10,iVar15);
            DiscardUnknownFields(pMVar12);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5);
        }
      }
      else {
        pMVar12 = Reflection::MutableMessage(this_00,this,pFVar10,(MessageFactory *)0x0);
        DiscardUnknownFields(pMVar12);
      }
    }
    puVar16 = puVar16 + 1;
  } while( true );
}

// EndIterator @ 14fa2bc20

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EndIterator(void const *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EndIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 8))();
  return (void *)(longlong)iVar1;
}

// EqualsIterator @ 14fa2bc40

/* public: virtual bool __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EqualsIterator(void const *
   __ptr64,void const * __ptr64,void const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EqualsIterator
          (RandomAccessRepeatedFieldAccessor *this,void *param_1,void *param_2,void *param_3)

{
  return param_2 == param_3;
}

// ExchangeCurrentSize @ 14fa2bc50

/* private: int __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::ExchangeCurrentSize(bool,int) __ptr64 */

int __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::ExchangeCurrentSize
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1,int param_2)

{
  int iVar1;
  
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)param_2;
    return *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  iVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
  (this->soo_rep_).field0_0x0.long_rep.size = param_2;
  return iVar1;
}

// FUN_14fa2bc80 @ 14fa2bc80

undefined8 FUN_14fa2bc80(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  undefined8 *local_10;
  
  FUN_14fa288e0(param_1 + 8,&local_18,param_2);
  if (local_18 == 0) {
    return 0;
  }
  return *local_10;
}

// FUN_14fa2bcc0 @ 14fa2bcc0

undefined8 * FUN_14fa2bcc0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  longlong local_18;
  longlong local_10;
  
  local_res18[0] = param_3;
  FUN_14fa28720(param_1 + 0x70,&local_18,local_res18);
  if (local_18 == 0) {
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = *(undefined8 *)(local_10 + 8);
  return param_2;
}

// FindInitializationErrors @ 14fa2bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl google::protobuf::Message::FindInitializationErrors(class std::vector<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > > * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::Message::FindInitializationErrors
          (Message *this,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38._8_8_ = 0;
  local_28 = 0;
  local_20 = 0xf;
  local_38._Ptr = (char *)0x0;
  internal::ReflectionOps::FindInitializationErrors
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
             param_1);
  if (0xf < local_20) {
    uVar2 = local_20 + 1;
    uVar1 = local_38._Ptr;
    if (0xfff < uVar2) {
      uVar2 = local_20 + 0x28;
      uVar1 = *(undefined8 *)(local_38._Ptr + -8);
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar1,uVar2);
  }
  return;
}

// Get @ 14fa2bdc0

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<int>::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::Get
          (RepeatedFieldWrapper<int> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2be26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))
                             (this,(longlong)puVar4 + (longlong)param_2 * 4,param_3);
  return pvVar3;
}

// Get @ 14fa2be30

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Get(void const * __ptr64,int,void
   * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::Get
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2be96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))
                             (this,(longlong)puVar4 + (longlong)param_2 * 4,param_3);
  return pvVar3;
}

// Get @ 14fa2bea0

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::Get
          (RepeatedFieldWrapper<float> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2bf06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))
                             (this,(longlong)puVar4 + (longlong)param_2 * 4,param_3);
  return pvVar3;
}

// Get @ 14fa2bf10

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::Get
          (RepeatedFieldWrapper<double> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2bf76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))(this,puVar4 + param_2,param_3);
  return pvVar3;
}

// Get @ 14fa2bf80

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::Get
          (RepeatedFieldWrapper<__int64> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2bfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))(this,puVar4 + param_2,param_3);
  return pvVar3;
}

// Get @ 14fa2bff0

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<unsigned __int64>::Get(void const *
   __ptr64,int,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::Get
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2c056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))(this,puVar4 + param_2,param_3);
  return pvVar3;
}

// Get @ 14fa2c060

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<bool>::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::Get
          (RepeatedFieldWrapper<bool> *this,void *param_1,int param_2,void *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = (ulonglong *)(**(code **)(lVar1 + 0x80))();
  puVar4 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014fa2c0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(lVar1 + 0x98))(this,(longlong)puVar4 + (longlong)param_2,param_3);
  return pvVar3;
}

// Get @ 14fa2c0e0

/* public: class google::protobuf::Message const & __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::Message>::Get(int)const __ptr64 */

Message * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::Get
          (RepeatedPtrField<google::protobuf::Message> *this,int param_1)

{
  Message *pMVar1;
  
  pMVar1 = *(Message **)this;
  if ((~*(byte *)this & 1) == 0) {
    pMVar1 = *(Message **)(&pMVar1->field_0x7 + (longlong)param_1 * 8);
  }
  return pMVar1;
}

// Get @ 14fa2c100

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::Get(void const * __ptr64,int,void *
   __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Get
          (RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1,int param_2,void *param_3)

{
  code *pcVar1;
  byte *pbVar2;
  void *pvVar3;
  
  pcVar1 = *(code **)(*(longlong *)this + 0xa0);
  pbVar2 = (byte *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~*pbVar2 & 1) == 0) {
    pbVar2 = (byte *)((longlong)param_2 * 8 + 7 + *(longlong *)pbVar2);
  }
  pvVar3 = (void *)(*pcVar1)(this,*(undefined8 *)pbVar2,param_3);
  return pvVar3;
}

// Get @ 14fa2c170

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldWrapper<class google::protobuf::Message>::Get(void
   const * __ptr64,int,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Get
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1,int param_2,
          void *param_3)

{
  code *pcVar1;
  byte *pbVar2;
  void *pvVar3;
  
  pcVar1 = *(code **)(*(longlong *)this + 0xa0);
  pbVar2 = (byte *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~*pbVar2 & 1) == 0) {
    pbVar2 = (byte *)((longlong)param_2 * 8 + 7 + *(longlong *)pbVar2);
  }
  pvVar3 = (void *)(*pcVar1)(this,*(undefined8 *)pbVar2,param_3);
  return pvVar3;
}

// GetArena @ 14fa2c1e0

/* public: static class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::GenericTypeHandler<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::GetArena(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

Arena * __cdecl
google::protobuf::internal::
GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::GetArena
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  return (Arena *)0x0;
}

// GetArena @ 14fa2c1f0

/* public: static class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message>::GetArena(class
   google::protobuf::Message * __ptr64) */

Arena * __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetArena
          (Message *param_1)

{
  Arena *pAVar1;
  
  pAVar1 = (Arena *)(*(ulonglong *)&param_1->field_0x8 & 0xfffffffffffffffe);
  if ((param_1->field_0x8 & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  return pAVar1;
}

// GetArena @ 14fa2c210

/* private: class google::protobuf::Arena * __ptr64 __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::GetArena(bool)const __ptr64 */

Arena * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::GetArena
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1)

{
  Arena *pAVar1;
  
  pAVar1 = (Arena *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
  if (!param_1) {
    pAVar1 = *(Arena **)&pAVar1[-1].impl_.first_arena_.cached_block_length_;
  }
  return pAVar1;
}

// GetArena @ 14fa2c230

/* public: class google::protobuf::Arena * __ptr64 __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::GetArena(void) __ptr64 */

Arena * __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::GetArena
          (RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  Arena *pAVar2;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  pAVar2 = (Arena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    pAVar2 = *(Arena **)&pAVar2[-1].impl_.first_arena_.cached_block_length_;
  }
  return pAVar2;
}

// GetIteratorValue @ 14fa2c250

/* public: virtual void const * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::GetIteratorValue(void const *
   __ptr64,void const * __ptr64,void * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::GetIteratorValue
          (RandomAccessRepeatedFieldAccessor *this,void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fa2c253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(*(longlong *)this + 0x10))();
  return pvVar1;
}

// GetMetadata @ 14fa2c260

/* protected: struct google::protobuf::Metadata __cdecl
   google::protobuf::Message::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::Message::GetMetadata(Message *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  ClassDataFull *pCVar2;
  Metadata *pMVar3;
  Metadata local_18;
  
  pCVar2 = (ClassDataFull *)(**(code **)(*(longlong *)this + 0x18))();
  pMVar3 = GetMetadataImpl(&local_18,pCVar2);
  pRVar1 = pMVar3->reflection;
  __return_storage_ptr__->descriptor = pMVar3->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadataImpl @ 14fa2c2a0

/* protected: static struct google::protobuf::Metadata __cdecl
   google::protobuf::Message::GetMetadataImpl(struct google::protobuf::internal::ClassDataFull const
   & __ptr64) */

Metadata * __cdecl
google::protobuf::Message::GetMetadataImpl(Metadata *__return_storage_ptr__,ClassDataFull *param_1)

{
  atomic<unsigned_int> aVar1;
  DescriptorTable *pDVar2;
  atomic<unsigned_int> *paVar3;
  uint uVar4;
  
  pDVar2 = param_1->descriptor_table;
  if (pDVar2 != (DescriptorTable *)0x0) {
    if (param_1->get_metadata_tracker != (_func___cdecl_void *)0x0) {
      (*param_1->get_metadata_tracker)();
    }
    paVar3 = &pDVar2->once->control_;
    if (*paVar3 != (atomic<unsigned_int>)0xdd) {
      LOCK();
      aVar1 = *paVar3;
      if (aVar1 == (atomic<unsigned_int>)0x0) {
        *paVar3 = (atomic<unsigned_int>)0x65c2937b;
      }
      UNLOCK();
      if ((aVar1 == (atomic<unsigned_int>)0x0) ||
         (uVar4 = absl::lts_20240722::base_internal::SpinLockWait
                            (paVar3,3,(SpinLockWaitTransition *)&DAT_1535d60d0,
                             SCHEDULE_COOPERATIVE_AND_KERNEL), uVar4 == 0)) {
        internal::AssignDescriptorsOnceInnerCall(pDVar2);
        LOCK();
        aVar1 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)0xdd;
        UNLOCK();
        if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
          AbslInternalSpinLockWake_lts_20240722(paVar3,1);
        }
      }
    }
  }
  __return_storage_ptr__->descriptor = param_1->descriptor;
  __return_storage_ptr__->reflection = param_1->reflection;
  return __return_storage_ptr__;
}

// FUN_14fa2c370 @ 14fa2c370

longlong FUN_14fa2c370(longlong param_1,longlong param_2)

{
  Mutex *this;
  longlong lVar1;
  DescriptorPool *pDVar2;
  longlong local_res10;
  Mutex *local_res18;
  undefined1 local_28 [8];
  longlong *local_20;
  char local_18;
  
  local_res10 = param_2;
  lVar1 = FUN_14fa2fa20();
  if ((lVar1 == 0) &&
     (pDVar2 = google::protobuf::DescriptorPool::generated_pool(),
     *(DescriptorPool **)(*(longlong *)(local_res10 + 0x10) + 0x18) == pDVar2)) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 8))();
    this = (Mutex *)(param_1 + 0x68);
    local_res18 = this;
    absl::lts_20240722::Mutex::Lock(this);
    FUN_14fa29000(param_1 + 0x70,local_28,&local_res10);
    if (local_18 != '\0') {
      *local_20 = local_res10;
      local_20[1] = 0;
    }
    local_20[1] = lVar1;
    absl::lts_20240722::Mutex::Unlock(this);
  }
  return lVar1;
}

// GetRepeatedField @ 14fa2c420

/* protected: virtual class google::protobuf::RepeatedField<int> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<int>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<int> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::GetRepeatedField
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c430

/* protected: virtual class google::protobuf::RepeatedField<unsigned int> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<unsigned_int> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::GetRepeatedField
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c440

/* protected: virtual class google::protobuf::RepeatedField<float> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<float> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::GetRepeatedField
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c450

/* protected: virtual class google::protobuf::RepeatedField<double> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<double> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::GetRepeatedField
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c460

/* protected: virtual class google::protobuf::RepeatedField<__int64> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<__int64> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::GetRepeatedField
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c470

/* protected: virtual class google::protobuf::RepeatedField<unsigned __int64> const * __ptr64
   __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned __int64>::GetRepeatedField(void
   const * __ptr64)const __ptr64 */

RepeatedField<unsigned___int64> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::GetRepeatedField
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c480

/* protected: virtual class google::protobuf::RepeatedField<bool> const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<bool>::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedField<bool> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::GetRepeatedField
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c490

/* protected: virtual class google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::GetRepeatedField(void const *
   __ptr64)const __ptr64 */

RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
GetRepeatedField(RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                 *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c4a0

/* protected: virtual class google::protobuf::RepeatedPtrField<class google::protobuf::Message>
   const * __ptr64 __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::GetRepeatedField(void const * __ptr64)const __ptr64 */

RepeatedPtrField<google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::GetRepeatedField
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  return param_1;
}

// GetRepeatedField @ 14fa2c4b0

/* protected: virtual class google::protobuf::RepeatedPtrField<class google::protobuf::Message>
   const * __ptr64 __cdecl google::protobuf::internal::MapFieldAccessor::GetRepeatedField(void const
   * __ptr64)const __ptr64 */

RepeatedPtrField<google::protobuf::Message> * __thiscall
google::protobuf::internal::MapFieldAccessor::GetRepeatedField(MapFieldAccessor *this,void *param_1)

{
  RepeatedPtrFieldBase *pRVar1;
  
  pRVar1 = MapFieldBase::GetRepeatedField(param_1);
  return (RepeatedPtrField<google::protobuf::Message> *)pRVar1;
}

// GetTcParseTable @ 14fa2c4c0

/* private: struct google::protobuf::internal::TcParseTableBase const * __ptr64 __cdecl
   google::protobuf::Reflection::GetTcParseTable(void)const __ptr64 */

TcParseTableBase * __thiscall google::protobuf::Reflection::GetTcParseTable(Reflection *this)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  TcParseTableBase *pTVar3;
  bool bVar4;
  
  if ((this->tcparse_table_once_).control_ != (atomic<unsigned_int>)0xdd) {
    LOCK();
    bVar4 = (this->tcparse_table_once_).control_ == (atomic<unsigned_int>)0x0;
    if (bVar4) {
      (this->tcparse_table_once_).control_ = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((bVar4) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (&(this->tcparse_table_once_).control_,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>_>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,`private:_struct_google::protobuf::internal::TcParseTableBase_const*___ptr64___cdecl_google::protobuf::Reflection::GetTcParseTable(void)const___ptr64'::`2'::<lambda_1>&&___ptr64)'
                            ::__l2::trans,SCHEDULE_COOPERATIVE_AND_KERNEL), uVar2 == 0)) {
      pTVar3 = CreateTcParseTable(this);
      this->tcparse_table_ = pTVar3;
      LOCK();
      aVar1 = (this->tcparse_table_once_).control_;
      (this->tcparse_table_once_).control_ = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(&this->tcparse_table_once_,1);
      }
    }
    return this->tcparse_table_;
  }
  return this->tcparse_table_;
}

// Grow @ 14fa2c560

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Grow(bool,int,int) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Grow
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  void *_Src;
  Arena *this_00;
  int iVar4;
  ulong64 uVar5;
  
  iVar4 = 0;
  if (!param_1) {
    iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  this_00 = (Arena *)(uVar3 & 0xfffffffffffffff8);
  if ((~((byte)uVar3 >> 2) & 1) == 0) {
    this_00 = *(Arena **)&this_00[-1].impl_.first_arena_.cached_block_length_;
  }
  if (param_3 < 1) {
    iVar4 = 1;
  }
  else if (iVar4 < 0x3ffffff8) {
    iVar4 = iVar4 * 2 + 1;
    if (iVar4 < param_3) {
      iVar4 = param_3;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  uVar5 = (longlong)iVar4 * 0x10 + 0x10;
  if (this_00 == (Arena *)0x0) {
    if (0x7fffffff < ((longlong)iVar4 & 0xfffffffffffffffU)) {
      iVar4 = 0x7fffffff;
    }
    puVar2 = ::operator_new(uVar5);
  }
  else {
    puVar2 = Arena::AllocateForArray(this_00,uVar5);
  }
  *puVar2 = this_00;
  if (0 < param_2) {
    if (param_1) {
      _Src = (void *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    memcpy(puVar2 + 2,_Src,(longlong)param_2 << 4);
  }
  piVar1 = &(this->soo_rep_).field0_0x0.long_rep.capacity;
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.size = *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  else {
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar5 = ((longlong)*piVar1 + 1) * 0x10;
    if (*(Arena **)(uVar3 - 0x10) == (Arena *)0x0) {
      ::operator_delete((void *)(uVar3 - 0x10),uVar5);
    }
    else {
      Arena::ReturnArrayMemory(*(Arena **)(uVar3 - 0x10),(void *)(uVar3 - 0x10),uVar5);
    }
  }
  *piVar1 = iVar4;
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulonglong)(puVar2 + 2) | 4;
  return;
}

// GrowNoAnnotate @ 14fa2c570

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::GrowNoAnnotate(bool,int,int) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::GrowNoAnnotate
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  void *_Src;
  Arena *this_00;
  int iVar4;
  ulong64 uVar5;
  
  iVar4 = 0;
  if (!param_1) {
    iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  this_00 = (Arena *)(uVar3 & 0xfffffffffffffff8);
  if ((~((byte)uVar3 >> 2) & 1) == 0) {
    this_00 = *(Arena **)&this_00[-1].impl_.first_arena_.cached_block_length_;
  }
  if (param_3 < 1) {
    iVar4 = 1;
  }
  else if (iVar4 < 0x3ffffff8) {
    iVar4 = iVar4 * 2 + 1;
    if (iVar4 < param_3) {
      iVar4 = param_3;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  uVar5 = (longlong)iVar4 * 0x10 + 0x10;
  if (this_00 == (Arena *)0x0) {
    if (0x7fffffff < ((longlong)iVar4 & 0xfffffffffffffffU)) {
      iVar4 = 0x7fffffff;
    }
    puVar2 = ::operator_new(uVar5);
  }
  else {
    puVar2 = Arena::AllocateForArray(this_00,uVar5);
  }
  *puVar2 = this_00;
  if (0 < param_2) {
    if (param_1) {
      _Src = (void *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    memcpy(puVar2 + 2,_Src,(longlong)param_2 << 4);
  }
  piVar1 = &(this->soo_rep_).field0_0x0.long_rep.capacity;
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.size = *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  else {
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar5 = ((longlong)*piVar1 + 1) * 0x10;
    if (*(Arena **)(uVar3 - 0x10) == (Arena *)0x0) {
      ::operator_delete((void *)(uVar3 - 0x10),uVar5);
    }
    else {
      Arena::ReturnArrayMemory(*(Arena **)(uVar3 - 0x10),(void *)(uVar3 - 0x10),uVar5);
    }
  }
  *piVar1 = iVar4;
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulonglong)(puVar2 + 2) | 4;
  return;
}

// InitializationErrorString @ 14fa2c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl google::protobuf::Message::InitializationErrorString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Message::InitializationErrorString
          (Message *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong64 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Src;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 *puVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  char *pcVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_48;
  _Bxty local_40;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_40._8_8_ = 0;
  local_30 = 0;
  local_28 = 0xf;
  local_40._Ptr = (char *)0x0;
  local_48 = __return_storage_ptr__;
  internal::ReflectionOps::FindInitializationErrors
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
             &local_60);
  if (0xf < local_28) {
    uVar5 = local_28 + 1;
    uVar3 = local_40._Ptr;
    if (0xfff < uVar5) {
      uVar5 = local_28 + 0x28;
      uVar3 = *(undefined8 *)(local_40._Ptr + -8);
      if ((char *)0x1f < local_40._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar3,uVar5);
  }
  pbVar1 = local_60._Mypair._Myval2._Mylast;
  pbVar8 = local_60._Mypair._Myval2._Myfirst;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_68 = 0x10;
  if (local_60._Mypair._Myval2._Myfirst != local_60._Mypair._Myval2._Mylast) {
    uVar5 = ((local_60._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mysize;
    pbVar6 = local_60._Mypair._Myval2._Myfirst;
    while (pbVar6 + 1 != local_60._Mypair._Myval2._Mylast) {
      uVar5 = uVar5 + 2 + pbVar6[1]._Mypair._Myval2._Mysize;
      pbVar6 = pbVar6 + 1;
    }
    if (uVar5 != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                (__return_storage_ptr__,uVar5,'\0');
      pbVar6 = __return_storage_ptr__;
      if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      _Src = pbVar8;
      if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
        _Src = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
      }
      memcpy(pbVar6,_Src,(pbVar8->_Mypair)._Myval2._Mysize);
      pcVar9 = (pbVar6->_Mypair)._Myval2._Bx._Buf + (pbVar8->_Mypair)._Myval2._Mysize;
      while (pbVar8 = pbVar8 + 1, pbVar8 != pbVar1) {
        *(undefined2 *)pcVar9 = s___._0_2_;
        pbVar6 = pbVar8;
        if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
          pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar8->_Mypair)._Myval2._Bx._Ptr;
        }
        memcpy(pcVar9 + 2,pbVar6,(pbVar8->_Mypair)._Myval2._Mysize);
        pcVar9 = pcVar9 + 2 + (pbVar8->_Mypair)._Myval2._Mysize;
      }
    }
  }
  pbVar8 = local_60._Mypair._Myval2._Mylast;
  if (local_60._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    if (local_60._Mypair._Myval2._Myfirst != local_60._Mypair._Myval2._Mylast) {
      puVar7 = &((local_60._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myres;
      do {
        uVar2 = *puVar7;
        if (0xf < uVar2) {
          uVar5 = uVar2 + 1;
          pcVar9 = (((_String_val<std::_Simple_types<char>_> *)(puVar7 + -3))->_Bx)._Ptr;
          pcVar4 = pcVar9;
          if (0xfff < uVar5) {
            uVar5 = uVar2 + 0x28;
            pcVar4 = *(char **)(pcVar9 + -8);
            if ((char *)0x1f < pcVar9 + (-8 - (longlong)pcVar4)) goto LAB_14fa2c8c4;
          }
          ::operator_delete(pcVar4,uVar5);
        }
        puVar7[-1] = 0;
        *puVar7 = 0xf;
        (((_String_val<std::_Simple_types<char>_> *)(puVar7 + -3))->_Bx)._Buf[0] = '\0';
        pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar7 + 1);
        puVar7 = puVar7 + 4;
      } while (pbVar1 != pbVar8);
    }
    uVar5 = (longlong)local_60._Mypair._Myval2._Myend - (longlong)local_60._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar8 = local_60._Mypair._Myval2._Myfirst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_60._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      if (0x1f < (ulonglong)((longlong)local_60._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar8)))
      {
LAB_14fa2c8c4:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pbVar8,uVar5);
  }
  return __return_storage_ptr__;
}

// InternalRegisterGeneratedFile @ 14fa2c900

/* public: static void __cdecl
   google::protobuf::MessageFactory::InternalRegisterGeneratedFile(struct
   google::protobuf::internal::DescriptorTable const * __ptr64) */

void __cdecl
google::protobuf::MessageFactory::InternalRegisterGeneratedFile(DescriptorTable *param_1)

{
  DescriptorTable *pDVar1;
  longlong lVar2;
  LogMessage *this;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  char *pcVar4;
  DescriptorTable *local_res10;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  undefined1 local_c8 [16];
  char local_b8;
  OstreamView local_a8;
  
  lVar2 = FUN_14fa309f0();
  local_res10 = param_1;
  FUN_14fa28e60(lVar2 + 8,local_c8,&local_res10);
  if (local_b8 != '\0') {
    *(DescriptorTable **)local_c8._8_8_ = local_res10;
    return;
  }
  this = (LogMessage *)
         absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                   ((LogMessageFatal *)local_c8,
                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                    ,0x15c);
  local_d8._Mydata = "File is already registered: ";
  local_d8._Mysize = 0x1c;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_d8);
  pDVar1 = local_res10;
  absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
            (&local_a8,(this->data_)._Mypair._Myval2);
  pbVar3 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_a8);
  pcVar4 = "(null)";
  if (pDVar1->filename != (char *)0x0) {
    pcVar4 = pDVar1->filename;
  }
  std::operator<<<std::char_traits<char>_>(pbVar3,pcVar4);
  absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_a8);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)local_c8);
}

// InternalRegisterGeneratedMessage @ 14fa2ca10

/* public: static void __cdecl
   google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(class
   google::protobuf::Descriptor const * __ptr64,class google::protobuf::Message const * __ptr64) */

void __cdecl
google::protobuf::MessageFactory::InternalRegisterGeneratedMessage
          (Descriptor *param_1,Message *param_2)

{
  longlong lVar1;
  Descriptor *local_res8 [2];
  undefined1 local_28 [8];
  undefined8 *local_20;
  char local_18;
  
  lVar1 = FUN_14fa309f0();
  local_res8[0] = param_1;
  absl::lts_20240722::Mutex::AssertHeld((Mutex *)(lVar1 + 0x68));
  FUN_14fa29000(lVar1 + 0x70,local_28,local_res8);
  if (local_18 != '\0') {
    *local_20 = local_res8[0];
    local_20[1] = param_2;
    return;
  }
  return;
}

// InternalSwap @ 14fa2ca90

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::InternalSwap(class google::protobuf::RepeatedField<class
   google::protobuf::UnknownField> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::InternalSwap
          (RepeatedField<google::protobuf::UnknownField> *this,
          RepeatedField<class_google::protobuf::UnknownField> *param_1)

{
  internal::memswap<16>((char *)this,(char *)param_1);
  return;
}

// IsEmpty @ 14fa2caa0

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedFieldWrapper<int>::IsEmpty(void
   const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::IsEmpty
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cae0

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::IsEmpty(void const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::IsEmpty
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cb20

/* public: virtual bool __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::IsEmpty(void const * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::IsEmpty
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cb60

/* public: virtual bool __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::IsEmpty(void const * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::IsEmpty
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cba0

/* public: virtual bool __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::IsEmpty(void const * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::IsEmpty
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cbe0

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::IsEmpty(void const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::IsEmpty
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cc20

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedFieldWrapper<bool>::IsEmpty(void
   const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::IsEmpty
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (*puVar1 & 3) == 0;
  }
  return (int)puVar1[1] == 0;
}

// IsEmpty @ 14fa2cc60

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::IsEmpty(void
   const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
IsEmpty(RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
        *this,void *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x80))();
  return *(int *)(lVar1 + 8) == 0;
}

// IsEmpty @ 14fa2cc80

/* public: virtual bool __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::IsEmpty(void const * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::IsEmpty
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x80))();
  return *(int *)(lVar1 + 8) == 0;
}

// IsInitializedImpl @ 14fa2cca0

/* protected: static bool __cdecl google::protobuf::Message::IsInitializedImpl(class
   google::protobuf::MessageLite const & __ptr64) */

bool __cdecl google::protobuf::Message::IsInitializedImpl(MessageLite *param_1)

{
  bool bVar1;
  
  bVar1 = internal::ReflectionOps::IsInitialized((Message *)param_1);
  return bVar1;
}

// IteratorToPosition @ 14fa2ccc0

/* private: static __int64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::IteratorToPosition(void const *
   __ptr64) */

__int64 __cdecl
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::IteratorToPosition(void *param_1)

{
  return (__int64)param_1;
}

// MaybeComputeUnknownFieldsSize @ 14fa2ccd0

/* protected: unsigned __int64 __cdecl
   google::protobuf::Message::MaybeComputeUnknownFieldsSize(unsigned __int64,class
   google::protobuf::internal::CachedSize const * __ptr64)const __ptr64 */

__uint64 __thiscall
google::protobuf::Message::MaybeComputeUnknownFieldsSize
          (Message *this,__uint64 param_1,CachedSize *param_2)

{
  __uint64 _Var1;
  
  if ((this->field_0x8 & 1) == 0) {
    if ((SUB84(param_1,0) != (atomic<int>)0x0) || (param_2->atom_ != (atomic<int>)0x0)) {
      param_2->atom_ = SUB84(param_1,0);
    }
  }
  else {
    _Var1 = internal::WireFormat::ComputeUnknownFieldsSize
                      ((UnknownFieldSet *)
                       ((*(ulonglong *)&this->field_0x8 & 0xfffffffffffffffe) + 8));
    param_1 = _Var1 + param_1;
    if ((SUB84(param_1,0) != (atomic<int>)0x0) || (param_2->atom_ != (atomic<int>)0x0)) {
      param_2->atom_ = SUB84(param_1,0);
      return param_1;
    }
  }
  return param_1;
}

// MergeFrom @ 14fa2cd40

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::MergeFrom(class google::protobuf::RepeatedField<class
   google::protobuf::UnknownField> const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::MergeFrom
          (RepeatedField<google::protobuf::UnknownField> *this,
          RepeatedField<class_google::protobuf::UnknownField> *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  RepeatedField<class_google::protobuf::UnknownField> *_Src;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  
  bVar8 = ~((byte)*(undefined8 *)param_1 >> 2) & 1;
  if (bVar8 == 0) {
    uVar7 = *(uint *)(param_1 + 8);
  }
  else {
    uVar7 = (uint)*(undefined8 *)param_1 & 3;
  }
  if (uVar7 != 0) {
    uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    uVar9 = (uint)uVar2 & 3;
    bVar5 = (bool)(~((byte)uVar2 >> 2) & 1);
    if (bVar5 == false) {
      uVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
      iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
    }
    else {
      iVar4 = 0;
      uVar1 = uVar9;
    }
    iVar10 = uVar7 + uVar1;
    piVar11 = &(this->soo_rep_).field0_0x0.long_rep.size;
    puVar6 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
    if (iVar4 < iVar10) {
      if (bVar5 == false) {
        uVar9 = *piVar11;
      }
      Grow(this,bVar5,uVar9,iVar10);
    }
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar3 >> 2) & 1) == 0) {
      puVar6 = (undefined1 *)(uVar3 & 0xfffffffffffffff8);
      uVar9 = *piVar11;
      *piVar11 = iVar10;
    }
    else {
      uVar9 = (uint)uVar3 & 3;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (longlong)iVar10 | uVar3 & 0xfffffffffffffff8;
    }
    if (bVar8 == 0) {
      _Src = (RepeatedField<class_google::protobuf::UnknownField> *)
             (*(ulonglong *)param_1 & 0xfffffffffffffff8);
    }
    else {
      _Src = param_1 + 8;
    }
    if (0 < (int)uVar7) {
      memmove(puVar6 + (longlong)(int)uVar9 * 0x10,_Src,(longlong)(int)uVar7 << 4);
    }
  }
  return;
}

// MergeFrom @ 14fa2ce50

/* public: void __cdecl google::protobuf::Message::MergeFrom(class google::protobuf::Message const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Message::MergeFrom(Message *this,Message *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x18))();
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
  if ((lVar1 != 0) && (lVar1 == lVar2)) {
    (**(code **)(lVar1 + 0x20))(this,param_1);
    return;
  }
  internal::ReflectionOps::Merge(param_1,this);
  return;
}

// MergeImpl @ 14fa2cec0

/* protected: static void __cdecl google::protobuf::Message::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Message::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  internal::ReflectionOps::Merge((Message *)param_2,(Message *)param_1);
  return;
}

// MutableRepeatedField @ 14fa2cee0

/* protected: virtual class google::protobuf::RepeatedField<int> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<int>::MutableRepeatedField(void * __ptr64)const
   __ptr64 */

RepeatedField<int> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::MutableRepeatedField
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cef0

/* protected: virtual class google::protobuf::RepeatedField<unsigned int> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedField<unsigned_int> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::MutableRepeatedField
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf00

/* protected: virtual class google::protobuf::RepeatedField<float> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedField<float> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::MutableRepeatedField
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf10

/* protected: virtual class google::protobuf::RepeatedField<double> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedField<double> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::MutableRepeatedField
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf20

/* protected: virtual class google::protobuf::RepeatedField<__int64> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedField<__int64> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::MutableRepeatedField
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf30

/* protected: virtual class google::protobuf::RepeatedField<unsigned __int64> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<unsigned __int64>::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedField<unsigned___int64> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::MutableRepeatedField
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf40

/* protected: virtual class google::protobuf::RepeatedField<bool> * __ptr64 __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<bool>::MutableRepeatedField(void * __ptr64)const
   __ptr64 */

RepeatedField<bool> * __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::MutableRepeatedField
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf50

/* protected: virtual class google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldWrapper<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::MutableRepeatedField(void * __ptr64)const
   __ptr64 */

RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
MutableRepeatedField
          (RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf60

/* protected: virtual class google::protobuf::RepeatedPtrField<class google::protobuf::Message> *
   __ptr64 __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::MutableRepeatedField(void * __ptr64)const __ptr64 */

RepeatedPtrField<google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::MutableRepeatedField
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  return param_1;
}

// MutableRepeatedField @ 14fa2cf70

/* protected: virtual class google::protobuf::RepeatedPtrField<class google::protobuf::Message> *
   __ptr64 __cdecl google::protobuf::internal::MapFieldAccessor::MutableRepeatedField(void *
   __ptr64)const __ptr64 */

RepeatedPtrField<google::protobuf::Message> * __thiscall
google::protobuf::internal::MapFieldAccessor::MutableRepeatedField
          (MapFieldAccessor *this,void *param_1)

{
  RepeatedPtrFieldBase *pRVar1;
  
  pRVar1 = MapFieldBase::MutableRepeatedField(param_1);
  return (RepeatedPtrField<google::protobuf::Message> *)pRVar1;
}

// New @ 14fa2cf80

/* private: static struct google::protobuf::internal::InternalMetadata::Container<class
   google::protobuf::UnknownFieldSet> * __ptr64 __cdecl
   google::protobuf::Arena::InternalHelper<struct
   google::protobuf::internal::InternalMetadata::Container<class google::protobuf::UnknownFieldSet>
   >::New(void) */

Container<google::protobuf::UnknownFieldSet> * __cdecl
google::protobuf::Arena::
InternalHelper<google::protobuf::internal::InternalMetadata::Container<google::protobuf::UnknownFieldSet>_>
::New(void)

{
  Container<google::protobuf::UnknownFieldSet> *pCVar1;
  
  pCVar1 = ::operator_new(0x18);
  if (pCVar1 != (Container<google::protobuf::UnknownFieldSet> *)0x0) {
    (pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0.long_rep.elements_int = 0;
    *(undefined1 *)((longlong)&(pCVar1->unknown_fields).fields_.soo_rep_.field0_0x0 + 8) = 0;
    return pCVar1;
  }
  return (Container<google::protobuf::UnknownFieldSet> *)0x0;
}

// New @ 14fa2cfc0

/* protected: virtual class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::New(void const * __ptr64)const
   __ptr64 */

Message * __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::New
          (RepeatedPtrFieldMessageAccessor *this,void *param_1)

{
  MessageLite *pMVar1;
  
  pMVar1 = MessageLite::New(param_1,(Arena *)0x0);
  return (Message *)pMVar1;
}

// New @ 14fa2cfd0

/* protected: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldStringAccessor::New(void const * __ptr64)const
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::RepeatedPtrFieldStringAccessor::New
          (RepeatedPtrFieldStringAccessor *this,void *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = ::operator_new(0x20);
  if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0xf;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    return pbVar1;
  }
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
}

// PositionToIterator @ 14fa2d010

/* private: static void * __ptr64 __cdecl
   google::protobuf::internal::RandomAccessRepeatedFieldAccessor::PositionToIterator(__int64) */

void * __cdecl
google::protobuf::internal::RandomAccessRepeatedFieldAccessor::PositionToIterator(__int64 param_1)

{
  return (void *)param_1;
}

// FUN_14fa2d020 @ 14fa2d020

void FUN_14fa2d020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  LogMessage *this;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  char *pcVar3;
  longlong local_res10;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  undefined1 local_c8 [16];
  char local_b8;
  OstreamView local_a8;
  
  local_res10 = param_2;
  FUN_14fa28e60(param_1 + 8,local_c8,&local_res10);
  if (local_b8 != '\0') {
    *(longlong *)local_c8._8_8_ = local_res10;
    return;
  }
  this = (LogMessage *)
         absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                   ((LogMessageFatal *)local_c8,
                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                    ,0x15c);
  local_d8._Mydata = "File is already registered: ";
  local_d8._Mysize = 0x1c;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_d8);
  lVar1 = local_res10;
  absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
            (&local_a8,(this->data_)._Mypair._Myval2);
  pbVar2 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_a8);
  pcVar3 = "(null)";
  if (*(char **)(lVar1 + 0x10) != (char *)0x0) {
    pcVar3 = *(char **)(lVar1 + 0x10);
  }
  std::operator<<<std::char_traits<char>_>(pbVar2,pcVar3);
  absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_a8);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)local_c8);
}

// FUN_14fa2d120 @ 14fa2d120

void FUN_14fa2d120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined1 local_28 [8];
  undefined8 *local_20;
  char local_18;
  
  local_res10 = param_2;
  absl::lts_20240722::Mutex::AssertHeld((Mutex *)(param_1 + 0x68));
  FUN_14fa29000(param_1 + 0x70,local_28,&local_res10);
  if (local_18 != '\0') {
    *local_20 = local_res10;
    local_20[1] = param_3;
    return;
  }
  return;
}

// RemoveLast @ 14fa2d190

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<int>::RemoveLast(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::RemoveLast
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d1e0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::RemoveLast(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::RemoveLast
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d230

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::RemoveLast(void * __ptr64)const __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::RemoveLast
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d280

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::RemoveLast(void * __ptr64)const __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::RemoveLast
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d2d0

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::RemoveLast(void * __ptr64)const
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::RemoveLast
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d320

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::RemoveLast(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::RemoveLast
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d370

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<bool>::RemoveLast(void * __ptr64)const __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::RemoveLast
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = *puVar2;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    *puVar2 = uVar1 & 0xfffffffffffffff8 | (longlong)(int)(((uint)uVar1 & 3) - 1);
    return;
  }
  *(int *)(puVar2 + 1) = (int)puVar2[1] + -1;
  return;
}

// RemoveLast @ 14fa2d3c0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::RemoveLast(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::RemoveLast
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this->field_0x8;
  *(int *)&this->field_0x8 = iVar1 + -1;
  if ((~*(byte *)this & 1) == 0) {
    this = (RepeatedPtrField<google::protobuf::Message> *)
           (*(longlong *)this + -1 + (longlong)iVar1 * 8);
  }
  (**(code **)(**(longlong **)this + 8))();
  return;
}

// RemoveLast @ 14fa2d400

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::RemoveLast(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
RemoveLast(RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  iVar1 = *(int *)(pbVar3 + 8);
  *(int *)(pbVar3 + 8) = iVar1 + -1;
  if ((~*pbVar3 & 1) == 0) {
    pbVar3 = (byte *)(*(longlong *)pbVar3 + -1 + (longlong)iVar1 * 8);
  }
  puVar2 = *(undefined8 **)pbVar3;
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2[2] = 0;
    *(undefined1 *)*puVar2 = 0;
    return;
  }
  puVar2[2] = 0;
  *(undefined1 *)puVar2 = 0;
  return;
}

// RemoveLast @ 14fa2d470

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::RemoveLast(void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::RemoveLast
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  iVar1 = *(int *)(pbVar2 + 8);
  *(int *)(pbVar2 + 8) = iVar1 + -1;
  if ((~*pbVar2 & 1) == 0) {
    pbVar2 = (byte *)(*(longlong *)pbVar2 + -1 + (longlong)iVar1 * 8);
  }
  (**(code **)(**(longlong **)pbVar2 + 8))();
  return;
}

// RepeatedFieldAccessor @ 14fa2d4c0

/* WARNING: Removing unreachable block (ram,0x00014fa2d643) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: class google::protobuf::internal::RepeatedFieldAccessor const * __ptr64 __cdecl
   google::protobuf::Reflection::RepeatedFieldAccessor(class google::protobuf::FieldDescriptor const
   * __ptr64)const __ptr64 */

RepeatedFieldAccessor * __thiscall
google::protobuf::Reflection::RepeatedFieldAccessor(Reflection *this,FieldDescriptor *param_1)

{
  bool bVar1;
  CppStringType CVar2;
  LogMessage *pLVar3;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (!param_1->is_repeated_) {
    local_38._Mydata = "field->is_repeated()";
    local_38._Mysize = 0x14;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
               ,0x1d1,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  switch(*(undefined4 *)
          ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)param_1->type_ * 4)) {
  case 1:
  case 8:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce68;
  case 2:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce78;
  case 3:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce70;
  case 4:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce80;
  case 5:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce90;
  case 6:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce88;
  case 7:
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ce98;
  case 9:
    break;
  case 10:
    if ((param_1->type_ == 0xb) && (bVar1 = FieldDescriptor::is_map_message_type(param_1), bVar1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < DAT_1553e4ae4) &&
         (_Init_thread_header(&DAT_1553e4ae4), DAT_1553e4ae4 == -1)) {
        atexit(FUN_1504743c0);
        _Init_thread_footer(&DAT_1553e4ae4);
      }
      return (RepeatedFieldAccessor *)&PTR_vftable_154e1cea8;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < DAT_1553e4ae8) &&
       (_Init_thread_header(&DAT_1553e4ae8), DAT_1553e4ae8 == -1)) {
      atexit(FUN_1504743d0);
      _Init_thread_footer(&DAT_1553e4ae8);
    }
    return (RepeatedFieldAccessor *)&PTR_vftable_154e1ceb0;
  default:
switchD_14fa2d54e_default:
    pLVar3 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_28,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                        ,0x1ef);
    local_38._Mydata = "Should not reach here.";
    local_38._Mysize = 0x16;
    local_18._Mydata = "Should not reach here.";
    local_18._Mysize = 0x16;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_18);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_28);
  }
  CVar2 = FieldDescriptor::cpp_string_type(param_1);
  if (CVar2 != kView) {
    if (CVar2 == kCord) {
      pLVar3 = (LogMessage *)
               absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                         ((LogMessageFatal *)&local_18,
                          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\message.cc"
                          ,0x1e2);
      local_38._Mydata = "Repeated cords are not supported.";
      local_38._Mysize = 0x21;
      local_28._Mydata = "Repeated cords are not supported.";
      local_28._Mysize = 0x21;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_18);
    }
    if (CVar2 != kString) goto switchD_14fa2d54e_default;
  }
  return (RepeatedFieldAccessor *)&PTR_vftable_154e1cea0;
}

// Reserve @ 14fa2d7e0

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Reserve(int) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Reserve
          (RepeatedField<google::protobuf::UnknownField> *this,int param_1)

{
  ulong64 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  bVar3 = (bool)(~((byte)uVar1 >> 2) & 1);
  if (bVar3 == false) {
    iVar2 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 < param_1) {
    if (bVar3 != false) {
      Grow(this,bVar3,(uint)uVar1 & 3,param_1);
      return;
    }
    Grow(this,false,(this->soo_rep_).field0_0x0.long_rep.size,param_1);
    return;
  }
  return;
}

// Set @ 14fa2d820

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<int>::Set(void *
   __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::Set
          (RepeatedFieldWrapper<int> *this,void *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  *(undefined4 *)((longlong)puVar3 + (longlong)param_2 * 4) = uVar1;
  return;
}

// Set @ 14fa2d8a0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::Set(void * __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::Set
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  *(undefined4 *)((longlong)puVar3 + (longlong)param_2 * 4) = uVar1;
  return;
}

// Set @ 14fa2d920

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<float>::Set(void *
   __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::Set
          (RepeatedFieldWrapper<float> *this,void *param_1,int param_2,void *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar3 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar2 = puVar1 + 1;
  if ((~((byte)*puVar1 >> 2) & 1) == 0) {
    puVar2 = (ulonglong *)(*puVar1 & 0xfffffffffffffff8);
  }
  *(undefined4 *)((longlong)puVar2 + (longlong)param_2 * 4) = uVar3;
  return;
}

// Set @ 14fa2d9a0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<double>::Set(void *
   __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::Set
          (RepeatedFieldWrapper<double> *this,void *param_1,int param_2,void *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar3 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar2 = puVar1 + 1;
  if ((~((byte)*puVar1 >> 2) & 1) == 0) {
    puVar2 = (ulonglong *)(*puVar1 & 0xfffffffffffffff8);
  }
  puVar2[param_2] = uVar3;
  return;
}

// Set @ 14fa2da20

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<__int64>::Set(void
   * __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::Set
          (RepeatedFieldWrapper<__int64> *this,void *param_1,int param_2,void *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar2 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar3 = puVar1 + 1;
  if ((~((byte)*puVar1 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar1 & 0xfffffffffffffff8);
  }
  puVar3[param_2] = uVar2;
  return;
}

// Set @ 14fa2daa0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::Set(void * __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::Set
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1,int param_2,void *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar1 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar2 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar3 = puVar1 + 1;
  if ((~((byte)*puVar1 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar1 & 0xfffffffffffffff8);
  }
  puVar3[param_2] = uVar2;
  return;
}

// Set @ 14fa2db20

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<bool>::Set(void *
   __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::Set
          (RepeatedFieldWrapper<bool> *this,void *param_1,int param_2,void *param_3)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  uVar1 = (**(code **)(*(longlong *)this + 0x90))(this,param_3);
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  *(undefined1 *)((longlong)puVar3 + (longlong)param_2) = uVar1;
  return;
}

// Set @ 14fa2dba0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::Set(void *
   __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Set
          (RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1,int param_2,void *param_3)

{
  code *pcVar1;
  byte *pbVar2;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x98);
  pbVar2 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~*pbVar2 & 1) == 0) {
    pbVar2 = (byte *)((longlong)param_2 * 8 + 7 + *(longlong *)pbVar2);
  }
  (*pcVar1)(this,param_3,*(undefined8 *)pbVar2);
  return;
}

// Set @ 14fa2dc10

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::Set(void * __ptr64,int,void const * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Set
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1,int param_2,
          void *param_3)

{
  code *pcVar1;
  byte *pbVar2;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x98);
  pbVar2 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  if ((~*pbVar2 & 1) == 0) {
    pbVar2 = (byte *)((longlong)param_2 * 8 + 7 + *(longlong *)pbVar2);
  }
  (*pcVar1)(this,param_3,*(undefined8 *)pbVar2);
  return;
}

// Set @ 14fa2dc80

/* public: void __cdecl google::protobuf::internal::CachedSize::Set(int)const __ptr64 */

void __thiscall google::protobuf::internal::CachedSize::Set(CachedSize *this,int param_1)

{
  if ((param_1 != 0) || (this->atom_ != (atomic<int>)0x0)) {
    this->atom_ = (atomic<int>)param_1;
  }
  return;
}

// SetDelegateToGeneratedFactory @ 14fa2dca0

/* public: void __cdecl google::protobuf::DynamicMessageFactory::SetDelegateToGeneratedFactory(bool)
   __ptr64 */

void __thiscall
google::protobuf::DynamicMessageFactory::SetDelegateToGeneratedFactory
          (DynamicMessageFactory *this,bool param_1)

{
  this[0x10] = (DynamicMessageFactory)param_1;
  return;
}

// Size @ 14fa2dcb0

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<int>::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::Size
          (RepeatedFieldWrapper<int> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2dcf0

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::Size(void const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::Size
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2dd30

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<float>::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::Size
          (RepeatedFieldWrapper<float> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2dd70

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<double>::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::Size
          (RepeatedFieldWrapper<double> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2ddb0

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<__int64>::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::Size
          (RepeatedFieldWrapper<__int64> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2ddf0

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::Size(void const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::Size
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2de30

/* public: virtual int __cdecl google::protobuf::internal::RepeatedFieldWrapper<bool>::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::Size
          (RepeatedFieldWrapper<bool> *this,void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x80))();
  if ((~((byte)*puVar1 >> 2) & 1) != 0) {
    return (uint)*puVar1 & 3;
  }
  return *(int *)(puVar1 + 1);
}

// Size @ 14fa2de70

/* public: virtual int __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::Size(void
   const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Size
          (RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,void *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x80))();
  return *(int *)(lVar1 + 8);
}

// Size @ 14fa2de90

/* public: virtual int __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::Size(void const * __ptr64)const __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Size
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x80))();
  return *(int *)(lVar1 + 8);
}

// SpaceUsedLong @ 14fa2ded0

/* public: unsigned __int64 __cdecl google::protobuf::Message::SpaceUsedLong(void)const __ptr64 */

__uint64 __thiscall google::protobuf::Message::SpaceUsedLong(Message *this)

{
  longlong lVar1;
  __uint64 _Var2;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x18))();
  _Var2 = (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x18))(this);
  return _Var2;
}

// StaticValidityCheck @ 14fa2df00

/* private: static void __cdecl google::protobuf::RepeatedPtrField<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::StaticValidityCheck(void) */

void __cdecl
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
StaticValidityCheck(void)

{
  return;
}

// Swap @ 14fa2df10

/* public: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::Swap(class google::protobuf::RepeatedField<class
   google::protobuf::UnknownField> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::Swap
          (RepeatedField<google::protobuf::UnknownField> *this,
          RepeatedField<class_google::protobuf::UnknownField> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  SooRep_u_0 local_18;
  
  if ((RepeatedField<class_google::protobuf::UnknownField> *)this != param_1) {
    uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    uVar2 = uVar1 & 0xfffffffffffffff8;
    if ((~((byte)uVar1 >> 2) & 1) == 0) {
      uVar2 = *(ulonglong *)(uVar2 - 0x10);
    }
    local_18.long_rep.elements_int = *(ulonglong *)param_1 & 0xfffffffffffffff8;
    if ((~((byte)*(ulonglong *)param_1 >> 2) & 1) == 0) {
      local_18.long_rep.elements_int = *(ulonglong *)(local_18.long_rep.elements_int - 0x10);
    }
    if (uVar2 == local_18.long_rep.elements_int) {
      internal::memswap<16>((char *)this,(char *)param_1);
      return;
    }
    local_18.long_rep.size._0_1_ = 0;
    MergeFrom((RepeatedField<google::protobuf::UnknownField> *)&local_18.long_rep,
              (RepeatedField<class_google::protobuf::UnknownField> *)this);
    uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar1 >> 2) & 1) == 0) {
      (this->soo_rep_).field0_0x0.long_rep.size = 0;
    }
    else {
      (this->soo_rep_).field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
    }
    MergeFrom(this,param_1);
    if ((SooRep_u_0 *)param_1 != &local_18) {
      internal::memswap<16>((char *)param_1,(char *)&local_18);
    }
    if ((~((byte)local_18.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
      plVar3 = (longlong *)((local_18.long_rep.elements_int & 0xfffffffffffffff8) - 0x10);
      if (*plVar3 == 0) {
        ::operator_delete(plVar3,((longlong)local_18.long_rep.capacity + 1) * 0x10);
      }
    }
  }
  return;
}

// Swap @ 14fa2e010

/* WARNING: Removing unreachable block (ram,0x00014fa2e1f4) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e251) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e247) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e21d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e209) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e227) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e23c) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e231) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e213) */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Swap
          (RepeatedFieldPrimitiveAccessor<int> *this,void *param_1,RepeatedFieldAccessor *param_2,
          void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<int>::MergeFrom
                  ((RepeatedField<int> *)&local_38.long_rep,(RepeatedField<int> *)&this_00->long_rep
                  );
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<int>::MergeFrom
                  ((RepeatedField<int> *)&this_00->long_rep,(RepeatedField<int> *)&pSVar2->long_rep)
        ;
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 4 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2e270

/* WARNING: Removing unreachable block (ram,0x00014fa2e454) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e4b1) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e4a7) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e47d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e469) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e487) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e49c) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e491) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e473) */
/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned
   int>::Swap(void * __ptr64,class google::protobuf::internal::RepeatedFieldAccessor const *
   __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned_int>::Swap
          (RepeatedFieldPrimitiveAccessor<unsigned_int> *this,void *param_1,
          RepeatedFieldAccessor *param_2,void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<unsigned_int>::MergeFrom
                  ((RepeatedField<unsigned_int> *)&local_38.long_rep,
                   (RepeatedField<unsigned_int> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<unsigned_int>::MergeFrom
                  ((RepeatedField<unsigned_int> *)&this_00->long_rep,
                   (RepeatedField<unsigned_int> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 4 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2e4d0

/* WARNING: Removing unreachable block (ram,0x00014fa2e6b4) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e711) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e707) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6dd) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6c9) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6e7) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6fc) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6f1) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e6d3) */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Swap
          (RepeatedFieldPrimitiveAccessor<float> *this,void *param_1,RepeatedFieldAccessor *param_2,
          void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<float>::MergeFrom
                  ((RepeatedField<float> *)&local_38.long_rep,
                   (RepeatedField<float> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<float>::MergeFrom
                  ((RepeatedField<float> *)&this_00->long_rep,
                   (RepeatedField<float> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 4 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2e730

/* WARNING: Removing unreachable block (ram,0x00014fa2e914) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e971) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e967) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e93d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e929) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e947) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e95c) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e951) */
/* WARNING: Removing unreachable block (ram,0x00014fa2e933) */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Swap
          (RepeatedFieldPrimitiveAccessor<double> *this,void *param_1,RepeatedFieldAccessor *param_2
          ,void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<double>::MergeFrom
                  ((RepeatedField<double> *)&local_38.long_rep,
                   (RepeatedField<double> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<double>::MergeFrom
                  ((RepeatedField<double> *)&this_00->long_rep,
                   (RepeatedField<double> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 8 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2e990

/* WARNING: Removing unreachable block (ram,0x00014fa2eb74) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ebd1) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ebc7) */
/* WARNING: Removing unreachable block (ram,0x00014fa2eb9d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2eb89) */
/* WARNING: Removing unreachable block (ram,0x00014fa2eba7) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ebbc) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ebb1) */
/* WARNING: Removing unreachable block (ram,0x00014fa2eb93) */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<__int64>::Swap
          (RepeatedFieldPrimitiveAccessor<__int64> *this,void *param_1,
          RepeatedFieldAccessor *param_2,void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<__int64>::MergeFrom
                  ((RepeatedField<__int64> *)&local_38.long_rep,
                   (RepeatedField<__int64> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<__int64>::MergeFrom
                  ((RepeatedField<__int64> *)&this_00->long_rep,
                   (RepeatedField<__int64> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 8 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2ebf0

/* WARNING: Removing unreachable block (ram,0x00014fa2edd4) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ee31) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ee27) */
/* WARNING: Removing unreachable block (ram,0x00014fa2edfd) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ede9) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ee07) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ee1c) */
/* WARNING: Removing unreachable block (ram,0x00014fa2ee11) */
/* WARNING: Removing unreachable block (ram,0x00014fa2edf3) */
/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned
   __int64>::Swap(void * __ptr64,class google::protobuf::internal::RepeatedFieldAccessor const *
   __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned___int64>::Swap
          (RepeatedFieldPrimitiveAccessor<unsigned___int64> *this,void *param_1,
          RepeatedFieldAccessor *param_2,void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<unsigned___int64>::MergeFrom
                  ((RepeatedField<unsigned___int64> *)&local_38.long_rep,
                   (RepeatedField<unsigned___int64> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<unsigned___int64>::MergeFrom
                  ((RepeatedField<unsigned___int64> *)&this_00->long_rep,
                   (RepeatedField<unsigned___int64> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity * 8 + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2ee50

/* WARNING: Removing unreachable block (ram,0x00014fa2f030) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f08d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f083) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f059) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f045) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f063) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f078) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f06d) */
/* WARNING: Removing unreachable block (ram,0x00014fa2f04f) */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Swap
          (RepeatedFieldPrimitiveAccessor<bool> *this,void *param_1,RepeatedFieldAccessor *param_2,
          void *param_3)

{
  ulonglong uVar1;
  SooRep_u_0 *this_00;
  SooRep_u_0 *pSVar2;
  longlong *plVar3;
  ulonglong uVar4;
  SooRep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this == param_2) {
    this_00 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
    pSVar2 = (SooRep_u_0 *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
    if (this_00 != pSVar2) {
      uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar4 >> 2) & 1) == 0) {
        uVar4 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) - 8);
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffff8;
      }
      uVar1 = (((SooRep *)&(pSVar2->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
      if ((~((byte)uVar1 >> 2) & 1) == 0) {
        local_38.long_rep.elements_int = *(ulonglong *)((uVar1 & 0xfffffffffffffff8) - 8);
      }
      else {
        local_38.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
      }
      if (uVar4 == local_38.long_rep.elements_int) {
        memswap<16>((char *)this_00,(char *)pSVar2);
      }
      else {
        local_38.long_rep.size._0_1_ = 0;
        RepeatedField<bool>::MergeFrom
                  ((RepeatedField<bool> *)&local_38.long_rep,
                   (RepeatedField<bool> *)&this_00->long_rep);
        uVar4 = (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int;
        if ((~((byte)uVar4 >> 2) & 1) == 0) {
          (this_00->long_rep).size = 0;
        }
        else {
          (((SooRep *)&(this_00->long_rep).elements_int)->field0_0x0).long_rep.elements_int =
               uVar4 & 0xfffffffffffffff8;
        }
        RepeatedField<bool>::MergeFrom
                  ((RepeatedField<bool> *)&this_00->long_rep,
                   (RepeatedField<bool> *)&pSVar2->long_rep);
        if (pSVar2 != &local_38) {
          memswap<16>((char *)pSVar2,(char *)&local_38);
        }
        if ((~((byte)local_38.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
          plVar3 = (longlong *)((local_38.long_rep.elements_int & 0xfffffffffffffff8) - 8);
          if (*plVar3 == 0) {
            ::operator_delete(plVar3,(longlong)local_38.long_rep.capacity + 8);
          }
        }
      }
    }
    return;
  }
  local_28._Mydata = "this == other_mutator";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
             ,0xd0,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Swap @ 14fa2f0a0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::Swap(class
   google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > * __ptr64) __ptr64 */

void __thiscall
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Swap
          (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,RepeatedPtrField<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
                 *param_1)

{
  if (this == (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
               *)param_1) {
    return;
  }
  if (*(longlong *)&this->field_0x10 != *(longlong *)(param_1 + 0x10)) {
    internal::RepeatedPtrFieldBase::
    SwapFallback<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_1);
    return;
  }
  __std_swap_ranges_trivially_swappable_noalias(this,&this->field_0x10,param_1);
  return;
}

// Swap @ 14fa2f0c0

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Swap
          (RepeatedPtrFieldMessageAccessor *this,void *param_1,RepeatedFieldAccessor *param_2,
          void *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  RepeatedPtrFieldBase *this_00;
  RepeatedPtrFieldBase *pRVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((RepeatedFieldAccessor *)this != param_2) {
    pbVar1 = absl::lts_20240722::log_internal::
             MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                       (this,param_2,"this == other_mutator");
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_28._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_28._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_28._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_18,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/reflection_internal.h"
                 ,0x113,&local_28);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
    }
  }
  this_00 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))(this,param_1);
  pRVar2 = (RepeatedPtrFieldBase *)(**(code **)(*(longlong *)this + 0x88))(this,param_3);
  if (this_00 != pRVar2) {
    if (this_00->arena_ == pRVar2->arena_) {
      memswap<16>((char *)this_00,(char *)pRVar2);
      return;
    }
    RepeatedPtrFieldBase::
    SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
              (this_00,pRVar2);
  }
  return;
}

// Swap @ 14fa2f1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedPtrFieldStringAccessor::Swap(void * __ptr64,class
   google::protobuf::internal::RepeatedFieldAccessor const * __ptr64,void * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldStringAccessor::Swap
          (RepeatedPtrFieldStringAccessor *this,void *param_1,RepeatedFieldAccessor *param_2,
          void *param_3)

{
  uint uVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  RepeatedPtrFieldBase *pRVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  uint local_d8;
  RepeatedPtrFieldBase local_d0;
  LogMessageFatal local_b8;
  undefined8 local_a8;
  ulonglong local_a0;
  _Bxty local_98;
  ulonglong local_80;
  _Bxty local_78;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar9 = 0;
  local_d8 = 0;
  if ((RepeatedFieldAccessor *)this == param_2) {
    if (param_1 != param_3) {
      if (*(longlong *)((longlong)param_1 + 0x10) == *(longlong *)((longlong)param_3 + 0x10)) {
        memswap<16>(param_1,param_3);
      }
      else {
        RepeatedPtrFieldBase::
        SwapFallback<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (param_1,param_3);
      }
    }
  }
  else {
    local_d0.tagged_rep_or_elem_ = (void *)0x0;
    local_d0.current_size_ = 0;
    local_d0.capacity_proxy_ = 0;
    local_d0.arena_ = (Arena *)0x0;
    if (&local_d0 != param_1) {
      if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
        memswap<16>((char *)&local_d0,param_1);
      }
      else {
        RepeatedPtrFieldBase::
        SwapFallback<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (&local_d0,param_1);
      }
    }
    iVar2 = (**(code **)((longlong)*param_2 + 8))(param_2,param_3);
    iVar10 = iVar9;
    if (0 < iVar2) {
      do {
        local_b8._8_8_ = 0;
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8._0_8_ = (void *)0x0;
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (**(code **)((longlong)*param_2 + 0x10))(param_2,param_3,iVar10,&local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
                   pbVar3);
        local_d8 = local_d8 | 2;
        if (0xf < local_a0) {
          uVar7 = local_a0 + 1;
          pvVar5 = (void *)local_b8._0_8_;
          if (0xfff < uVar7) {
            uVar7 = local_a0 + 0x28;
            pvVar5 = *(void **)(local_b8._0_8_ + -8);
            if (0x1f < (ulonglong)(local_b8._0_8_ + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pvVar5,uVar7);
        }
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8._0_8_ = local_b8._0_8_ & 0xffffffffffffff00;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98);
        (**(code **)(*(longlong *)this + 0x28))(this,param_1,&local_78);
        if (0xf < local_60) {
          uVar7 = local_60 + 1;
          uVar6 = local_78._Ptr;
          if (0xfff < uVar7) {
            uVar7 = local_60 + 0x28;
            uVar6 = *(undefined8 *)(local_78._Ptr + -8);
            if ((char *)0x1f < local_78._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar6,uVar7);
        }
        if (0xf < local_80) {
          uVar7 = local_80 + 1;
          uVar6 = local_98._Ptr;
          if (0xfff < uVar7) {
            uVar7 = local_80 + 0x28;
            uVar6 = *(undefined8 *)(local_98._Ptr + -8);
            if ((char *)0x1f < local_98._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar6,uVar7);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2);
    }
    lVar4 = (**(code **)(*(longlong *)this + 0x80))(this,param_1);
    iVar10 = *(int *)(lVar4 + 8);
    (**(code **)((longlong)*param_2 + 0x18))(param_2,param_3);
    uVar1 = local_d8;
    if (0 < iVar10) {
      do {
        if ((~(byte)local_d0.tagged_rep_or_elem_ & 1) == 0) {
          if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_b8);
          }
          pRVar8 = (RepeatedPtrFieldBase *)
                   ((longlong)local_d0.tagged_rep_or_elem_ + (longlong)iVar9 * 8 + 7);
        }
        else {
          pRVar8 = &local_d0;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
                   pRVar8->tagged_rep_or_elem_);
        (**(code **)((longlong)*param_2 + 0x28))(param_2,param_3,&local_98);
        if (0xf < local_80) {
          uVar7 = local_80 + 1;
          uVar6 = local_98._Ptr;
          if (0xfff < uVar7) {
            uVar7 = local_80 + 0x28;
            uVar6 = *(undefined8 *)(local_98._Ptr + -8);
            if ((char *)0x1f < local_98._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar6,uVar7);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
    }
    if (local_d0.tagged_rep_or_elem_ != (void *)0x0) {
      RepeatedPtrFieldBase::
      Destroy<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                (&local_d0);
    }
  }
  return;
}

// Swap @ 14fa2f4a0

/* public: void __cdecl google::protobuf::UnknownFieldSet::Swap(class
   google::protobuf::UnknownFieldSet * __ptr64) __ptr64 */

void __thiscall
google::protobuf::UnknownFieldSet::Swap(UnknownFieldSet *this,UnknownFieldSet *param_1)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  SooRep_u_0 local_18;
  
  uVar5 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  uVar3 = uVar5 & 0xfffffffffffffff8;
  bVar1 = ~((byte)uVar5 >> 2) & 1;
  uVar5 = uVar3;
  if (bVar1 == 0) {
    uVar5 = *(ulonglong *)(uVar3 - 0x10);
  }
  uVar6 = (param_1->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  local_18.long_rep.elements_int = uVar6 & 0xfffffffffffffff8;
  bVar4 = ~((byte)uVar6 >> 2) & 1;
  uVar6 = local_18.long_rep.elements_int;
  if (bVar4 == 0) {
    uVar6 = *(ulonglong *)(local_18.long_rep.elements_int - 0x10);
  }
  if (uVar5 == uVar6) {
    if (this != param_1) {
      if (bVar1 == 0) {
        uVar3 = *(ulonglong *)(uVar3 - 0x10);
      }
      if (bVar4 == 0) {
        local_18.long_rep.elements_int = *(ulonglong *)(local_18.long_rep.elements_int - 0x10);
      }
      if (uVar3 == local_18.long_rep.elements_int) {
        internal::memswap<16>((char *)this,(char *)param_1);
        return;
      }
      local_18.long_rep.size._0_1_ = 0;
      RepeatedField<google::protobuf::UnknownField>::MergeFrom
                ((RepeatedField<google::protobuf::UnknownField> *)&local_18.long_rep,
                 (RepeatedField<class_google::protobuf::UnknownField> *)this);
      uVar5 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar5 >> 2) & 1) == 0) {
        (this->fields_).soo_rep_.field0_0x0.long_rep.size = 0;
      }
      else {
        (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int = uVar5 & 0xfffffffffffffff8;
      }
      RepeatedField<google::protobuf::UnknownField>::MergeFrom
                (&this->fields_,(RepeatedField<class_google::protobuf::UnknownField> *)param_1);
      if ((SooRep_u_0 *)param_1 != &local_18) {
        internal::memswap<16>((char *)param_1,(char *)&local_18);
      }
      if ((~((byte)local_18.long_rep.elements_int._0_1_ >> 2) & 1) == 0) {
        plVar2 = (longlong *)((local_18.long_rep.elements_int & 0xfffffffffffffff8) - 0x10);
        if (*plVar2 == 0) {
          ::operator_delete(plVar2,((longlong)local_18.long_rep.capacity + 1) * 0x10);
        }
      }
      return;
    }
  }
  else {
    SwapSlow(this,param_1);
  }
  return;
}

// SwapElements @ 14fa2f5e0

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<int>::SwapElements(void * __ptr64,int,int)const
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<int>::SwapElements
          (RepeatedFieldWrapper<int> *this,void *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  puVar3 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar4 = puVar3 + 1;
  if ((~((byte)*puVar3 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar3 & 0xfffffffffffffff8);
  }
  uVar2 = *(undefined4 *)((longlong)puVar4 + (longlong)param_2 * 4);
  puVar1 = (undefined4 *)((longlong)puVar4 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)puVar4 + (longlong)param_2 * 4) = *puVar1;
  *puVar1 = uVar2;
  return;
}

// SwapElements @ 14fa2f640

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   int>::SwapElements(void * __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned_int>::SwapElements
          (RepeatedFieldWrapper<unsigned_int> *this,void *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  puVar3 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar4 = puVar3 + 1;
  if ((~((byte)*puVar3 >> 2) & 1) == 0) {
    puVar4 = (ulonglong *)(*puVar3 & 0xfffffffffffffff8);
  }
  uVar2 = *(undefined4 *)((longlong)puVar4 + (longlong)param_2 * 4);
  puVar1 = (undefined4 *)((longlong)puVar4 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)puVar4 + (longlong)param_2 * 4) = *puVar1;
  *puVar1 = uVar2;
  return;
}

// SwapElements @ 14fa2f6a0

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<float>::SwapElements(void *
   __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<float>::SwapElements
          (RepeatedFieldWrapper<float> *this,void *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  uVar1 = *(undefined4 *)((longlong)puVar3 + (longlong)param_2 * 4);
  *(undefined4 *)((longlong)puVar3 + (longlong)param_2 * 4) =
       *(undefined4 *)((longlong)puVar3 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)puVar3 + (longlong)param_3 * 4) = uVar1;
  return;
}

// SwapElements @ 14fa2f700

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<double>::SwapElements(void *
   __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<double>::SwapElements
          (RepeatedFieldWrapper<double> *this,void *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  uVar1 = puVar3[param_2];
  puVar3[param_2] = puVar3[param_3];
  puVar3[param_3] = uVar1;
  return;
}

// SwapElements @ 14fa2f760

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<__int64>::SwapElements(void *
   __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<__int64>::SwapElements
          (RepeatedFieldWrapper<__int64> *this,void *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  uVar1 = puVar3[param_2];
  puVar3[param_2] = puVar3[param_3];
  puVar3[param_3] = uVar1;
  return;
}

// SwapElements @ 14fa2f7c0

/* public: virtual void __cdecl google::protobuf::internal::RepeatedFieldWrapper<unsigned
   __int64>::SwapElements(void * __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<unsigned___int64>::SwapElements
          (RepeatedFieldWrapper<unsigned___int64> *this,void *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  uVar1 = puVar3[param_2];
  puVar3[param_2] = puVar3[param_3];
  puVar3[param_3] = uVar1;
  return;
}

// SwapElements @ 14fa2f820

/* public: virtual void __cdecl
   google::protobuf::internal::RepeatedFieldWrapper<bool>::SwapElements(void * __ptr64,int,int)const
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedFieldWrapper<bool>::SwapElements
          (RepeatedFieldWrapper<bool> *this,void *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)(**(code **)(*(longlong *)this + 0x88))();
  puVar3 = puVar2 + 1;
  if ((~((byte)*puVar2 >> 2) & 1) == 0) {
    puVar3 = (ulonglong *)(*puVar2 & 0xfffffffffffffff8);
  }
  uVar1 = *(undefined1 *)((longlong)puVar3 + (longlong)param_2);
  *(undefined1 *)((longlong)puVar3 + (longlong)param_2) =
       *(undefined1 *)((longlong)puVar3 + (longlong)param_3);
  *(undefined1 *)((longlong)puVar3 + (longlong)param_3) = uVar1;
  return;
}

// SwapElements @ 14fa2f880

/* public: void __cdecl google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::SwapElements(int,int) __ptr64 */

void __thiscall
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
SwapElements(RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             *this,int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((~*(byte *)this & 1) != 0) {
    uVar1 = *(undefined8 *)this;
    *(undefined8 *)this = *(undefined8 *)this;
    *(undefined8 *)this = uVar1;
    return;
  }
  puVar3 = (undefined8 *)((longlong)param_2 * 8 + 7 + *(longlong *)this);
  puVar2 = (undefined8 *)((longlong)param_1 * 8 + 7 + *(longlong *)this);
  uVar1 = *puVar2;
  *puVar2 = *puVar3;
  *puVar3 = uVar1;
  return;
}

// SwapElements @ 14fa2f8d0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::SwapElements(int,int) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::SwapElements
          (RepeatedPtrField<google::protobuf::Message> *this,int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((~*(byte *)this & 1) != 0) {
    uVar1 = *(undefined8 *)this;
    *(undefined8 *)this = *(undefined8 *)this;
    *(undefined8 *)this = uVar1;
    return;
  }
  puVar3 = (undefined8 *)((longlong)param_2 * 8 + 7 + *(longlong *)this);
  puVar2 = (undefined8 *)((longlong)param_1 * 8 + 7 + *(longlong *)this);
  uVar1 = *puVar2;
  *puVar2 = *puVar3;
  *puVar3 = uVar1;
  return;
}

// SwapElements @ 14fa2f920

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::SwapElements(void * __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::
RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
SwapElements(RepeatedPtrFieldWrapper<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             *this,void *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  pbVar4 = pbVar3;
  if ((~*pbVar3 & 1) == 0) {
    lVar1 = *(longlong *)pbVar3;
    pbVar3 = (byte *)((longlong)param_3 * 8 + 7 + *(longlong *)pbVar3);
    pbVar4 = (byte *)((longlong)param_2 * 8 + 7 + lVar1);
  }
  uVar2 = *(undefined8 *)pbVar4;
  *(undefined8 *)pbVar4 = *(undefined8 *)pbVar3;
  *(undefined8 *)pbVar3 = uVar2;
  return;
}

// SwapElements @ 14fa2f980

/* public: virtual void __cdecl google::protobuf::internal::RepeatedPtrFieldWrapper<class
   google::protobuf::Message>::SwapElements(void * __ptr64,int,int)const __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::SwapElements
          (RepeatedPtrFieldWrapper<google::protobuf::Message> *this,void *param_1,int param_2,
          int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)(**(code **)(*(longlong *)this + 0x88))();
  pbVar4 = pbVar3;
  if ((~*pbVar3 & 1) == 0) {
    lVar1 = *(longlong *)pbVar3;
    pbVar3 = (byte *)((longlong)param_3 * 8 + 7 + *(longlong *)pbVar3);
    pbVar4 = (byte *)((longlong)param_2 * 8 + 7 + lVar1);
  }
  uVar2 = *(undefined8 *)pbVar4;
  *(undefined8 *)pbVar4 = *(undefined8 *)pbVar3;
  *(undefined8 *)pbVar3 = uVar2;
  return;
}

// ToCachedSize @ 14fa2f9e0

/* int __cdecl google::protobuf::internal::ToCachedSize(unsigned __int64) */

int __cdecl google::protobuf::internal::ToCachedSize(__uint64 param_1)

{
  return (int)param_1;
}

// TryGetGeneratedPrototype @ 14fa2f9f0

/* private: static class google::protobuf::Message const * __ptr64 __cdecl
   google::protobuf::MessageFactory::TryGetGeneratedPrototype(class google::protobuf::Descriptor
   const * __ptr64) */

Message * __cdecl google::protobuf::MessageFactory::TryGetGeneratedPrototype(Descriptor *param_1)

{
  undefined8 uVar1;
  Message *pMVar2;
  
  uVar1 = FUN_14fa309f0();
  pMVar2 = (Message *)FUN_14fa2fa20(uVar1,param_1);
  return pMVar2;
}

// FUN_14fa2fa20 @ 14fa2fa20

longlong FUN_14fa2fa20(longlong param_1,longlong param_2)

{
  Mutex *this;
  longlong *plVar1;
  DescriptorTable *pDVar2;
  DescriptorPool *pDVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong local_res8;
  Mutex *local_res10;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 *local_40;
  
  this = (Mutex *)(param_1 + 0x68);
  local_res10 = this;
  absl::lts_20240722::Mutex::ReaderLock(this);
  local_res8 = param_2;
  FUN_14fa28720(param_1 + 0x70,&local_58,&local_res8);
  if ((local_58 == (longlong *)0x0) || (lVar4 = *(longlong *)(lStack_50 + 8), lVar4 == 0)) {
    absl::lts_20240722::Mutex::ReaderUnlock(this);
    lVar4 = *(longlong *)(param_2 + 0x10);
    pDVar3 = google::protobuf::DescriptorPool::generated_pool();
    if (*(DescriptorPool **)(lVar4 + 0x18) == pDVar3) {
      plVar1 = *(longlong **)(lVar4 + 8);
      local_58 = plVar1;
      if (0xf < (ulonglong)plVar1[3]) {
        local_58 = (longlong *)*plVar1;
      }
      lStack_50 = plVar1[2];
      FUN_14fa288e0(param_1 + 8,&local_48,&local_58);
      if ((local_48 != 0) &&
         (pDVar2 = (DescriptorTable *)*local_40, pDVar2 != (DescriptorTable *)0x0)) {
        local_res10 = this;
        absl::lts_20240722::Mutex::Lock(this);
        local_res8 = param_2;
        FUN_14fa28720(param_1 + 0x70,&local_48,&local_res8);
        bVar5 = local_48 != 0;
        if (bVar5) {
          local_58 = (longlong *)local_40[1];
        }
        uVar6 = (undefined4)local_58;
        uVar7 = local_58._4_4_;
        lStack_50._0_1_ = bVar5;
        if (!bVar5) {
          google::protobuf::internal::RegisterFileLevelMetadata(pDVar2);
          local_res8 = param_2;
          FUN_14fa28720(param_1 + 0x70,&local_48,&local_res8);
          lStack_50._0_1_ = local_48 != 0;
          if ((bool)(undefined1)lStack_50) {
            local_58 = (longlong *)local_40[1];
          }
          uVar6 = (undefined4)local_58;
          uVar7 = local_58._4_4_;
        }
        absl::lts_20240722::Mutex::Unlock(this);
        return CONCAT44(uVar7,uVar6);
      }
    }
    lVar4 = 0;
  }
  else {
    absl::lts_20240722::Mutex::ReaderUnlock(this);
  }
  return lVar4;
}

// UninitializedCopyN @ 14fa2fbc0

/* private: static void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::UninitializedCopyN(class google::protobuf::UnknownField const *
   __ptr64,int,class google::protobuf::UnknownField * __ptr64) */

void __cdecl
google::protobuf::RepeatedField<google::protobuf::UnknownField>::UninitializedCopyN
          (UnknownField *param_1,int param_2,UnknownField *param_3)

{
  if (0 < param_2) {
    memmove(param_3,param_1,(longlong)param_2 << 4);
    return;
  }
  return;
}

// UnsafeArenaSwap @ 14fa2fbe0

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::UnsafeArenaSwap(class google::protobuf::RepeatedField<class
   google::protobuf::UnknownField> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::UnsafeArenaSwap
          (RepeatedField<google::protobuf::UnknownField> *this,
          RepeatedField<class_google::protobuf::UnknownField> *param_1)

{
  if ((RepeatedField<class_google::protobuf::UnknownField> *)this == param_1) {
    return;
  }
  __std_swap_ranges_trivially_swappable_noalias(this,this + 1,param_1);
  return;
}

// _InternalSerialize @ 14fa2fbf0

/* WARNING: Type propagation algorithm not settling */
/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Message::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Message::_InternalSerialize
          (Message *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  Descriptor *pDVar1;
  Reflection *this_00;
  ulonglong uVar2;
  FieldDescriptor **ppFVar3;
  FieldDescriptor **ppFVar4;
  int iVar5;
  Metadata *pMVar6;
  UnknownFieldSet *pUVar7;
  uchar *puVar8;
  FieldDescriptor *pFVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar13;
  UnknownField *this_01;
  byte *pbVar15;
  FieldDescriptor *pFStack_68;
  Metadata MStack_60;
  Metadata MStack_50;
  FieldDescriptor *pFStack_40;
  FieldDescriptor **ppFStack_38;
  FieldDescriptor **ppFStack_30;
  ulonglong uVar12;
  undefined1 *puVar14;
  
  pMVar6 = GetMetadata(this,&MStack_60);
  pDVar1 = pMVar6->descriptor;
  pMVar6 = GetMetadata(this,&MStack_50);
  this_00 = pMVar6->reflection;
  pFStack_40 = (FieldDescriptor *)0x0;
  ppFStack_38 = (FieldDescriptor **)0x0;
  uVar13 = 0;
  ppFStack_30 = (FieldDescriptor **)0x0;
  if ((pDVar1->options_->_impl_).map_entry_ == false) {
    Reflection::ListFields
              (this_00,this,
               (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&pFStack_40);
    pFVar9 = pFStack_40;
    ppFVar3 = ppFStack_38;
  }
  else {
    uVar12 = uVar13;
    pFVar9 = pFStack_40;
    ppFVar3 = ppFStack_38;
    if (0 < pDVar1->field_count_) {
      do {
        pFStack_68 = pDVar1->fields_ + (int)uVar12;
        if (ppFStack_38 == ppFStack_30) {
          std::
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                    ((vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                      *)&pFStack_40,ppFStack_38,&pFStack_68);
        }
        else {
          *ppFStack_38 = pFStack_68;
          ppFStack_38 = ppFStack_38 + 1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        pFVar9 = pFStack_40;
        ppFVar3 = ppFStack_38;
      } while ((int)uVar11 < pDVar1->field_count_);
    }
  }
  for (; ppFVar4 = ppFStack_38, pFVar9 != (FieldDescriptor *)ppFStack_38;
      pFVar9 = (FieldDescriptor *)((longlong)pFVar9 + 8)) {
    ppFStack_38 = ppFVar3;
    param_1 = internal::WireFormat::InternalSerializeField
                        (*(FieldDescriptor **)pFVar9,this,param_1,param_2);
    ppFVar3 = ppFStack_38;
    ppFStack_38 = ppFVar4;
  }
  if ((pDVar1->options_->_impl_).message_set_wire_format_ == false) {
    ppFStack_38 = ppFVar3;
    pUVar7 = Reflection::GetUnknownFields(this_00,this);
    param_1 = internal::WireFormat::InternalSerializeUnknownFieldsToArray(pUVar7,param_1,param_2);
  }
  else {
    ppFStack_38 = ppFVar3;
    pUVar7 = Reflection::GetUnknownFields(this_00,this);
    iVar5 = UnknownFieldSet::field_count(pUVar7);
    uVar12 = uVar13;
    if (0 < iVar5) {
      do {
        uVar2 = (pUVar7->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
        puVar14 = (undefined1 *)((longlong)&(pUVar7->fields_).soo_rep_.field0_0x0 + 8);
        if ((~((byte)uVar2 >> 2) & 1) == 0) {
          puVar14 = (undefined1 *)(uVar2 & 0xfffffffffffffff8);
        }
        this_01 = (UnknownField *)(puVar14 + uVar13);
        if (this_01->type_ == 3) {
          if (param_2->end_ <= param_1) {
            param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
          }
          param_1[0] = '\v';
          param_1[1] = '\x10';
          pbVar15 = param_1 + 2;
          for (uVar11 = this_01->number_; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
            *pbVar15 = (byte)uVar11 | 0x80;
            pbVar15 = pbVar15 + 1;
          }
          *pbVar15 = (byte)uVar11;
          pbVar15[1] = 0x1a;
          puVar8 = UnknownField::InternalSerializeLengthDelimitedNoTag(this_01,pbVar15 + 2,param_2);
          if (param_2->end_ <= puVar8) {
            puVar8 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,puVar8);
          }
          *puVar8 = '\f';
          param_1 = puVar8 + 1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar13 = uVar13 + 0x10;
        iVar5 = UnknownFieldSet::field_count(pUVar7);
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar5);
    }
  }
  if (pFStack_40 != (FieldDescriptor *)0x0) {
    uVar10 = (longlong)ppFStack_30 - (longlong)pFStack_40 & 0xfffffffffffffff8;
    pFVar9 = pFStack_40;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      pFVar9 = *(FieldDescriptor **)&pFStack_40[0xffffffffffffffff].field24_0x58;
      if (0x1f < (ulonglong)((longlong)pFStack_40 + (-8 - (longlong)pFVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pFVar9,uVar10);
  }
  return param_1;
}

// _InternalSerializeImpl @ 14fa2fc00

/* protected: static unsigned char * __ptr64 __cdecl
   google::protobuf::Message::_InternalSerializeImpl(class google::protobuf::MessageLite const &
   __ptr64,unsigned char * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::Message::_InternalSerializeImpl
          (MessageLite *param_1,uchar *param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  
  puVar1 = internal::WireFormat::_InternalSerialize((Message *)param_1,param_2,param_3);
  return puVar1;
}

// arena @ 14fa2fc40

/* private: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::UnknownFieldSet::arena(void) __ptr64 */

Arena * __thiscall google::protobuf::UnknownFieldSet::arena(UnknownFieldSet *this)

{
  ulonglong uVar1;
  Arena *pAVar2;
  
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  pAVar2 = (Arena *)(uVar1 & 0xfffffffffffffff8);
  if ((~((byte)(uVar1 >> 2) & 0x3f) & 1) == 0) {
    pAVar2 = *(Arena **)&pAVar2[-1].impl_.first_arena_.cached_block_length_;
  }
  return pAVar2;
}

// FUN_14fa2fce0 @ 14fa2fce0

void FUN_14fa2fce0(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  lVar1 = param_1[2] - (ulonglong)(*(byte *)(param_1 + 1) & 1);
  pvVar2 = (void *)(lVar1 + -8);
  uVar4 = (*param_1 + 0x1f + (ulonglong)(*(byte *)(param_1 + 1) & 1) & 0xfffffffffffffff8) +
          *param_1 * 0x10;
  pvVar3 = pvVar2;
  if (0xfff < uVar4) {
    pvVar3 = *(void **)(lVar1 + -0x10);
    uVar4 = uVar4 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar3,uVar4);
  return;
}

// FUN_14fa2fd50 @ 14fa2fd50

void FUN_14fa2fd50(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[2] - (ulonglong)(*(byte *)(param_1 + 1) & 1);
  pvVar2 = (void *)(lVar1 + -8);
  uVar4 = ((ulonglong)(*(byte *)(param_1 + 1) & 1) + 0x1f + *param_1 & 0xfffffffffffffff8) +
          *param_1 * 8;
  pvVar3 = pvVar2;
  if (0xfff < uVar4) {
    pvVar3 = *(void **)(lVar1 + -0x10);
    uVar4 = uVar4 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar3,uVar4);
  return;
}

// FUN_14fa2fdf0 @ 14fa2fdf0

void FUN_14fa2fdf0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong64 uVar6;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    return;
  }
  uVar2 = (ulonglong)((byte)param_1[1] & 1);
  lVar3 = param_1[2] - uVar2;
  uVar6 = (uVar1 + 0x1f + uVar2 & 0xfffffffffffffff8) + uVar1 * 0x10;
  pvVar4 = (void *)(lVar3 + -8);
  pvVar5 = pvVar4;
  if (0xfff < uVar6) {
    pvVar5 = *(void **)(lVar3 + -0x10);
    uVar6 = uVar6 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar5,uVar6);
  return;
}

// FUN_14fa2fe60 @ 14fa2fe60

void FUN_14fa2fe60(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  uVar5 = *param_1;
  if (uVar5 < 2) {
    return;
  }
  uVar1 = (ulonglong)((byte)param_1[1] & 1);
  lVar2 = param_1[2] - uVar1;
  pvVar3 = (void *)(lVar2 + -8);
  uVar5 = (uVar1 + 0x1f + uVar5 & 0xfffffffffffffff8) + uVar5 * 8;
  pvVar4 = pvVar3;
  if (0xfff < uVar5) {
    pvVar4 = *(void **)(lVar2 + -0x10);
    uVar5 = uVar5 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar4,uVar5);
  return;
}

// element @ 14fa2fee0

/* public: static struct google::protobuf::internal::DescriptorTable const * __ptr64 & __ptr64
   __cdecl absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>::element(struct
   google::protobuf::internal::DescriptorTable const * __ptr64 * __ptr64) */

DescriptorTable ** __cdecl
absl::lts_20240722::container_internal::
FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>::element
          (DescriptorTable **param_1)

{
  return param_1;
}

// empty @ 14fa2ff00

/* public: bool __cdecl google::protobuf::RepeatedField<int>::empty(void)const __ptr64 */

bool __thiscall google::protobuf::RepeatedField<int>::empty(RepeatedField<int> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa2ff30

/* public: bool __cdecl google::protobuf::RepeatedField<unsigned int>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedField<unsigned_int>::empty(RepeatedField<unsigned_int> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa2ff60

/* public: bool __cdecl google::protobuf::RepeatedField<float>::empty(void)const __ptr64 */

bool __thiscall google::protobuf::RepeatedField<float>::empty(RepeatedField<float> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa2ff90

/* public: bool __cdecl google::protobuf::RepeatedField<double>::empty(void)const __ptr64 */

bool __thiscall google::protobuf::RepeatedField<double>::empty(RepeatedField<double> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa2ffc0

/* public: bool __cdecl google::protobuf::RepeatedField<__int64>::empty(void)const __ptr64 */

bool __thiscall google::protobuf::RepeatedField<__int64>::empty(RepeatedField<__int64> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa2fff0

/* public: bool __cdecl google::protobuf::RepeatedField<unsigned __int64>::empty(void)const __ptr64
    */

bool __thiscall
google::protobuf::RepeatedField<unsigned___int64>::empty(RepeatedField<unsigned___int64> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa30020

/* public: bool __cdecl google::protobuf::RepeatedField<bool>::empty(void)const __ptr64 */

bool __thiscall google::protobuf::RepeatedField<bool>::empty(RepeatedField<bool> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) != 0) {
    return (uVar1 & 3) == 0;
  }
  return (this->soo_rep_).field0_0x0.long_rep.size == 0;
}

// empty @ 14fa30050

/* public: bool __cdecl google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::
RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::empty
          (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// generated_factory @ 14fa30100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static class google::protobuf::MessageFactory * __ptr64 __cdecl
   google::protobuf::MessageFactory::generated_factory(void) */

MessageFactory * __cdecl google::protobuf::MessageFactory::generated_factory(void)

{
  MessageFactory *pMVar1;
  undefined1 auStack_58 [32];
  MessageFactory *pMStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  MessageFactory MStack_20;
  MessageFactory MStack_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4ae0) {
    _Init_thread_header(&DAT_1553e4ae0);
    if (DAT_1553e4ae0 == -1) {
      pMVar1 = ::operator_new(0x90);
      pMStack_38 = pMVar1;
      if (pMVar1 == (MessageFactory *)0x0) {
        pMVar1 = (MessageFactory *)0x0;
      }
      else {
        *pMVar1 = (MessageFactory)_anon_FB416D7A::GeneratedMessageFactory::vftable;
        uStack_30 = 1;
        uStack_28 = 0;
        pMVar1[1] = (MessageFactory)0x1;
        pMVar1[2] = (MessageFactory)0x0;
        pMVar1[3] = MStack_20;
        pMVar1[4] = MStack_18;
        DynamicMessageFactory::DynamicMessageFactory((DynamicMessageFactory *)(pMVar1 + 5));
        pMVar1[0xd] = (MessageFactory)0x0;
        uStack_30 = 1;
        uStack_28 = 0;
        pMVar1[0xe] = (MessageFactory)0x1;
        pMVar1[0xf] = (MessageFactory)0x0;
        pMVar1[0x10] = MStack_20;
        pMVar1[0x11] = MStack_18;
        *(undefined1 *)(pMVar1 + 7) = 1;
      }
      internal::OnShutdownRun(FUN_14fa266a0,pMVar1);
      DAT_1553e4ad8 = pMVar1;
      _Init_thread_footer(&DAT_1553e4ae0);
    }
  }
  return DAT_1553e4ad8;
}

// get @ 14fa30140

/* public: class std::allocator<struct google::protobuf::internal::DescriptorTable const * __ptr64>
   & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<struct google::protobuf::internal::DescriptorTable const *
   __ptr64>,3,1>::get(void) __ptr64&  */

allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1>::get
          (Storage<std::allocator<google::protobuf::internal::DescriptorTable_const*___ptr64>,3,1>
           *this)

{
  return (allocator<google::protobuf::internal::DescriptorTable_const*___ptr64> *)this;
}

// has_value @ 14fa30170

/* public: bool __cdecl std::optional<class google::protobuf::Message const *
   __ptr64>::has_value(void)const __ptr64 */

bool __thiscall
std::optional<google::protobuf::Message_const*___ptr64>::has_value
          (optional<google::protobuf::Message_const*___ptr64> *this)

{
  return (bool)this[8];
}

// FUN_14fa301d0 @ 14fa301d0

ulonglong FUN_14fa301d0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(__uint64 *)(*param_2 + 0x10) + lVar2) != '\0');
  local_res8[0] = param_1;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             *(__uint64 *)(*param_2 + 0x10));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar2 + local_res8[0];
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// FUN_14fa30370 @ 14fa30370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fa30370(CommonFields *param_1,ulonglong param_2)

{
  ulong64 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  ctrl_t *pcVar7;
  ctrl_t *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *pvVar14;
  char cVar15;
  undefined1 auStack_a8 [32];
  char local_88;
  ulonglong local_80;
  CommonFields *local_78;
  MaybeInitializedPtr local_70;
  CommonFields **local_68;
  CommonFields *local_60;
  MaybeInitializedPtr *local_58;
  ctrl_t *local_50;
  void *pvStack_48;
  ulonglong local_40;
  byte local_38;
  char local_37;
  char local_36;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar1 = &param_1->size_;
  local_40 = param_1->capacity_;
  if (local_40 < 2) {
    cVar15 = '\x01';
    cVar5 = '\x01';
    if (*puVar1 < 2) goto LAB_14fa30416;
    pcVar8 = (param_1->heap_or_soo_).heap.control;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ctrl_t *)
                   ((longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                   (longlong)pcVar8);
    local_88 = '\x01';
    auVar3._8_8_ = 0;
    auVar3._0_8_ = pcVar8 + (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8) ^
                            SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0));
    auVar3 = ZEXT816(0x9ddfea08eb382d69) * auVar3;
    local_80 = CONCAT71(auVar3._1_7_,auVar3[0] ^ auVar3[8]) & 0xffffffffffffff7f;
  }
  else {
    cVar5 = '\0';
LAB_14fa30416:
    cVar15 = cVar5;
    local_88 = '\0';
    local_80 = CONCAT71(local_80._1_7_,0x80);
  }
  local_50 = (param_1->heap_or_soo_).heap.control;
  pvStack_48 = (param_1->heap_or_soo_).heap.slot_array.p;
  local_38 = (byte)*puVar1 & 1;
  uVar12 = param_2 + 0x1f & 0xfffffffffffffff8;
  param_1->capacity_ = param_2;
  local_78 = param_1;
  local_37 = cVar15;
  local_36 = local_88;
  plVar6 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_2 * 0x10 + uVar12);
  uVar10 = param_1->capacity_;
  uVar13 = 0;
  (param_1->heap_or_soo_).heap.control = (ctrl_t *)(plVar6 + 1);
  (param_1->heap_or_soo_).heap.slot_array.p = (void *)(uVar12 + (longlong)plVar6);
  *plVar6 = (uVar10 - (*puVar1 >> 1)) - (uVar10 >> 3);
  if ((param_2 < 0x11) && (local_40 < param_2)) {
    bVar4 = true;
    if (local_37 == '\0') {
      absl::lts_20240722::container_internal::HashSetResizeHelper::
      GrowSizeIntoSingleGroupTransferable((HashSetResizeHelper *)&local_50,param_1,0x10);
      lVar9 = (ulonglong)(local_38 != 0) + 8;
      pcVar7 = local_50 + -lVar9;
      uVar11 = (local_40 + 0x17 + lVar9 & 0xfffffffffffffff8) + local_40 * 0x10;
      pcVar8 = pcVar7;
      if (0xfff < uVar11) {
        pcVar8 = *(ctrl_t **)(pcVar7 + -8);
        uVar11 = uVar11 + 0x27;
        if ((ctrl_t *)0x1f < pcVar7 + (-8 - (longlong)pcVar8)) goto LAB_14fa30661;
      }
      operator_delete(pcVar8,uVar11);
    }
    else {
      absl::lts_20240722::container_internal::HashSetResizeHelper::InitControlBytesAfterSoo
                ((HashSetResizeHelper *)&local_50,(param_1->heap_or_soo_).heap.control,
                 (ctrl_t)local_80,param_2);
      if (local_36 != '\0') {
        absl::lts_20240722::container_internal::HashSetResizeHelper::TransferSlotAfterSoo
                  ((HashSetResizeHelper *)&local_50,param_1,0x10);
      }
    }
  }
  else {
    uVar11 = param_1->capacity_;
    bVar4 = false;
    pcVar8 = (param_1->heap_or_soo_).heap.control;
    memset(pcVar8,-0x80,uVar11 + 0x10);
    pcVar8[uVar11] = kSentinel;
  }
  param_1->size_ = param_1->size_ & 0xfffffffffffffffe;
  if (((cVar15 == '\0') || (local_88 != '\0')) &&
     (local_70 = (local_78->heap_or_soo_).heap.slot_array, !bVar4)) {
    local_68 = &local_78;
    local_58 = &local_70;
    local_60 = param_1;
    if (cVar15 == '\0') {
      uVar10 = local_40;
      pvVar14 = pvStack_48;
      if (local_40 != 0) {
        do {
          if (-1 < (char)local_50[uVar13]) {
            FUN_14fa2a760(&local_68,pvVar14);
            uVar10 = local_40;
          }
          uVar13 = uVar13 + 1;
          pvVar14 = (void *)((longlong)pvVar14 + 0x10);
        } while (uVar13 != uVar10);
      }
      pcVar7 = local_50 + -((ulonglong)(local_38 != 0) + 8);
      uVar11 = ((ulonglong)(local_38 != 0) + 0x1f + uVar10 & 0xfffffffffffffff8) + uVar10 * 0x10;
      pcVar8 = pcVar7;
      if (0xfff < uVar11) {
        pcVar8 = *(ctrl_t **)(pcVar7 + -8);
        uVar11 = uVar11 + 0x27;
        if ((ctrl_t *)0x1f < pcVar7 + (-8 - (longlong)pcVar8)) {
LAB_14fa30661:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pcVar8,uVar11);
    }
    else {
      FUN_14fa2a760(&local_68,&local_50);
    }
  }
  return;
}

// FUN_14fa30670 @ 14fa30670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fa30670(CommonFields *param_1,ulonglong param_2)

{
  ulong64 *puVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  CommonFields *pCVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *pvVar12;
  ctrl_t *pcVar13;
  ctrl_t *pcVar14;
  char cVar15;
  undefined1 auStack_a8 [32];
  char local_88;
  ulonglong local_80;
  CommonFields *local_78;
  MaybeInitializedPtr local_70;
  CommonFields **local_68;
  CommonFields *local_60;
  MaybeInitializedPtr *local_58;
  ctrl_t *local_50;
  void *pvStack_48;
  ulonglong local_40;
  byte local_38;
  char local_37;
  char local_36;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar1 = &param_1->size_;
  local_78 = param_1;
  if (param_1->capacity_ < 2) {
    cVar15 = '\x01';
    cVar6 = '\x01';
    if (*puVar1 < 2) goto LAB_14fa3072e;
    local_88 = '\x01';
    pCVar9 = (CommonFields *)0xffffffffffffffff;
    uVar2 = *(undefined8 *)((param_1->heap_or_soo_).heap.control + 0x10);
    do {
      pCVar9 = (CommonFields *)((longlong)&pCVar9->capacity_ + 1);
    } while (*(char *)((longlong)&pCVar9->capacity_ + uVar2) != '\0');
    local_60 = pCVar9;
    absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
              ((MixingHashState)&local_80,
               (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,uVar2);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)&pCVar9->capacity_ + local_80;
    auVar4 = ZEXT816(0x9ddfea08eb382d69) * auVar4;
    local_80 = CONCAT71(auVar4._9_7_,auVar4[8] ^ auVar4[0]) & 0xffffffffffffff7f;
    local_36 = '\x01';
  }
  else {
    cVar6 = '\0';
LAB_14fa3072e:
    cVar15 = cVar6;
    local_36 = '\0';
    local_80 = CONCAT71(local_80._1_7_,0x80);
    local_88 = '\0';
  }
  local_40 = param_1->capacity_;
  local_50 = (param_1->heap_or_soo_).heap.control;
  pvStack_48 = (param_1->heap_or_soo_).heap.slot_array.p;
  uVar10 = param_2 + 0x1f & 0xfffffffffffffff8;
  local_38 = (byte)*puVar1 & 1;
  param_1->capacity_ = param_2;
  local_37 = cVar15;
  plVar7 = std::_Allocate<16,std::_Default_allocate_traits,0>(uVar10 + param_2 * 8);
  uVar8 = param_1->capacity_;
  uVar11 = 0;
  (param_1->heap_or_soo_).heap.control = (ctrl_t *)(plVar7 + 1);
  (param_1->heap_or_soo_).heap.slot_array.p = (void *)(uVar10 + (longlong)plVar7);
  *plVar7 = (uVar8 - (*puVar1 >> 1)) - (uVar8 >> 3);
  if ((param_2 < 0x11) && (local_40 < param_2)) {
    bVar5 = true;
    if (local_37 == '\0') {
      absl::lts_20240722::container_internal::HashSetResizeHelper::
      GrowSizeIntoSingleGroupTransferable((HashSetResizeHelper *)&local_50,param_1,8);
      pcVar13 = local_50 + -((ulonglong)(local_38 != 0) + 8);
      uVar8 = ((ulonglong)(local_38 != 0) + 0x1f + local_40 & 0xfffffffffffffff8) + local_40 * 8;
      pcVar14 = pcVar13;
      if (0xfff < uVar8) {
        pcVar14 = *(ctrl_t **)(pcVar13 + -8);
        uVar8 = uVar8 + 0x27;
        if ((ctrl_t *)0x1f < pcVar13 + (-8 - (longlong)pcVar14)) goto LAB_14fa3096e;
      }
      operator_delete(pcVar14,uVar8);
    }
    else {
      absl::lts_20240722::container_internal::HashSetResizeHelper::InitControlBytesAfterSoo
                ((HashSetResizeHelper *)&local_50,(param_1->heap_or_soo_).heap.control,
                 (ctrl_t)local_80,param_2);
      if (local_36 != '\0') {
        absl::lts_20240722::container_internal::HashSetResizeHelper::TransferSlotAfterSoo
                  ((HashSetResizeHelper *)&local_50,param_1,8);
      }
    }
  }
  else {
    uVar3 = param_1->capacity_;
    bVar5 = false;
    pcVar14 = (param_1->heap_or_soo_).heap.control;
    memset(pcVar14,-0x80,uVar3 + 0x10);
    pcVar14[uVar3] = kSentinel;
  }
  param_1->size_ = param_1->size_ & 0xfffffffffffffffe;
  if (((cVar15 == '\0') || (local_88 != '\0')) &&
     (local_70 = (local_78->heap_or_soo_).heap.slot_array, !bVar5)) {
    local_68 = &local_78;
    local_58 = &local_70;
    local_60 = param_1;
    if (cVar15 == '\0') {
      uVar8 = local_40;
      pvVar12 = pvStack_48;
      if (local_40 != 0) {
        do {
          if (-1 < (char)local_50[uVar11]) {
            FUN_14fa2a830(&local_68,pvVar12);
            uVar8 = local_40;
          }
          uVar11 = uVar11 + 1;
          pvVar12 = (void *)((longlong)pvVar12 + 8);
        } while (uVar11 != uVar8);
      }
      pcVar13 = local_50 + -((ulonglong)(local_38 != 0) + 8);
      uVar8 = ((ulonglong)(local_38 != 0) + 0x1f + uVar8 & 0xfffffffffffffff8) + uVar8 * 8;
      pcVar14 = pcVar13;
      if (0xfff < uVar8) {
        pcVar14 = *(ctrl_t **)(pcVar13 + -8);
        uVar8 = uVar8 + 0x27;
        if ((ctrl_t *)0x1f < pcVar13 + (-8 - (longlong)pcVar14)) {
LAB_14fa3096e:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pcVar14,uVar8);
    }
    else {
      FUN_14fa2a830(&local_68,&local_50);
    }
  }
  return;
}

// set_size @ 14fa309d0

/* private: void __cdecl google::protobuf::RepeatedField<class
   google::protobuf::UnknownField>::set_size(bool,int) __ptr64 */

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::set_size
          (RepeatedField<google::protobuf::UnknownField> *this,bool param_1,int param_2)

{
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    (this->soo_rep_).field0_0x0.long_rep.elements_int =
         (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)param_2;
    return;
  }
  (this->soo_rep_).field0_0x0.long_rep.size = param_2;
  return;
}

// FUN_14fa309f0 @ 14fa309f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14fa309f0(void)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_1553e4ae0) {
    _Init_thread_header(&DAT_1553e4ae0);
    if (DAT_1553e4ae0 == -1) {
      puVar1 = operator_new(0x90);
      local_38 = puVar1;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
      }
      else {
        *puVar1 = google::protobuf::_anon_FB416D7A::GeneratedMessageFactory::vftable;
        local_30 = 1;
        uStack_28 = 0;
        puVar1[1] = 1;
        puVar1[2] = 0;
        puVar1[3] = local_20;
        puVar1[4] = uStack_18;
        google::protobuf::DynamicMessageFactory::DynamicMessageFactory
                  ((DynamicMessageFactory *)(puVar1 + 5));
        puVar1[0xd] = 0;
        local_30 = 1;
        uStack_28 = 0;
        puVar1[0xe] = 1;
        puVar1[0xf] = 0;
        puVar1[0x10] = local_20;
        puVar1[0x11] = uStack_18;
        *(undefined1 *)(puVar1 + 7) = 1;
      }
      google::protobuf::internal::OnShutdownRun(FUN_14fa266a0,puVar1);
      DAT_1553e4ad8 = puVar1;
      _Init_thread_footer(&DAT_1553e4ae0);
    }
  }
  return DAT_1553e4ad8;
}

// soo_enabled @ 14fa30b90

/* public: static bool __cdecl absl::lts_20240722::container_internal::hash_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::soo_enabled(void) */

bool __cdecl
absl::lts_20240722::container_internal::
hash_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::soo_enabled(void)

{
  return true;
}

// soo_enabled_impl @ 14fa30bb0

/* private: static bool __cdecl absl::lts_20240722::container_internal::hash_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::soo_enabled_impl(struct
   absl::lts_20240722::container_internal::hash_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::Rank0) */

bool __cdecl
absl::lts_20240722::container_internal::
hash_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::soo_enabled_impl(void)

{
  return true;
}

// store @ 14fa30c20

/* public: void __cdecl std::_Atomic_storage<int,4>::store(int) __ptr64 */

void __thiscall std::_Atomic_storage<int,4>::store(_Atomic_storage<int,4> *this,int param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 14fa30c30

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<int,4>::store(int,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<int,4>::store(_Atomic_storage<int,4> *this,int param_1,memory_order param_2)

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

// transfer_uses_memcpy @ 14fa30cd0

/* public: static bool __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::FlatHashSetPolicy<struct
   google::protobuf::internal::DescriptorTable const * __ptr64>,void>::transfer_uses_memcpy(void) */

bool __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::FlatHashSetPolicy<google::protobuf::internal::DescriptorTable_const*___ptr64>,void>
::transfer_uses_memcpy(void)

{
  return true;
}

// FUN_15029e150 @ 15029e150

void FUN_15029e150(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x38));
  }
  return;
}

// FUN_15029e180 @ 15029e180

void FUN_15029e180(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x48));
  }
  return;
}

// FUN_15029e1b0 @ 15029e1b0

void FUN_15029e1b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 2) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x80));
  }
  return;
}

// FUN_15029e270 @ 15029e270

void FUN_15029e270(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40)
              );
  }
  return;
}

// FUN_15029e2a0 @ 15029e2a0

void FUN_15029e2a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029e300 @ 15029e300

void FUN_15029e300(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029e360 @ 15029e360

void FUN_15029e360(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 2) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_15029e390 @ 15029e390

void FUN_15029e390(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 4) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_15029e5e0 @ 15029e5e0

void FUN_15029e5e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20),0x90);
  return;
}

// FUN_1504743c0 @ 1504743c0

void FUN_1504743c0(void)

{
  return;
}

// FUN_1504743d0 @ 1504743d0

void FUN_1504743d0(void)

{
  return;
}

