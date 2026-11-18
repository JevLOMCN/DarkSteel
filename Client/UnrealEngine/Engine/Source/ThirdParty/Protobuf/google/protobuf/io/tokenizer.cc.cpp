// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 76

// _Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_><std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64> @ 14fb6b2c0

/* public: __cdecl std::_Alloc_temporary2<class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >::_Alloc_temporary2<class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > ><class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64>(class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __thiscall
std::
_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::
_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_><std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
          (_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *this,allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                 *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  *(allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)this =
       param_1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8),param_2);
  return this;
}

// FormatArgImpl<unsigned_char> @ 14fb6b2f0

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<unsigned
   char>(unsigned char const & __ptr64) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<unsigned_char>
          (FormatArgImpl *this,uchar *param_1)

{
  Data DVar1;
  undefined7 uStackX_9;
  
  DVar1._1_7_ = uStackX_9;
  DVar1.buf[0] = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<unsigned_char>;
  return this;
}

// operator<<<85> @ 14fb6b320

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<85>(char const (& __ptr64)[85]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<85>(LogMessage *this,char *param_1)

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

// operator<<<93> @ 14fb6b370

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<93>(char const (& __ptr64)[93]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<93>(LogMessage *this,char *param_1)

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

// FUN_14fb6b420 @ 14fb6b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fb6b420(Tokenizer *param_1,char *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  undefined1 auStack_68 [32];
  _Bxty *local_48;
  undefined8 uStack_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((byte)((char)param_1[0x80] - 0x30U) < 10) {
    do {
      google::protobuf::io::Tokenizer::NextChar(param_1);
    } while ((byte)((char)param_1[0x80] - 0x30U) < 10);
  }
  else {
    local_38._Ptr = (char *)0x0;
    local_38._8_8_ = 0;
    local_28 = 0;
    local_20 = 0;
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_2[uVar2] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,param_2,
               uVar2);
    local_48 = &local_38;
    if (0xf < local_20) {
      local_48 = (_Bxty *)local_38._Ptr;
    }
    uStack_40 = local_28;
    (**(code **)(**(longlong **)(param_1 + 0x78) + 8))
              (*(longlong **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),
               *(undefined4 *)(param_1 + 0xa0),&local_48);
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
      operator_delete((void *)uVar1,uVar2);
      return;
    }
  }
  return;
}

// FUN_14fb6b550 @ 14fb6b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fb6b550(Tokenizer *param_1,char *param_2)

{
  Tokenizer TVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStack_68 [32];
  _Bxty *local_48;
  undefined8 uStack_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  TVar1 = param_1[0x80];
  if (9 < (byte)((char)TVar1 - 0x30U)) {
    if ((5 < (byte)((char)TVar1 + 0x9fU)) && (5 < (byte)((char)TVar1 + 0xbfU))) {
      bVar2 = false;
      goto LAB_14fb6b58b;
    }
  }
  bVar2 = true;
LAB_14fb6b58b:
  if (bVar2) {
LAB_14fb6b663:
    do {
      google::protobuf::io::Tokenizer::NextChar(param_1);
      TVar1 = param_1[0x80];
      if ('/' < (char)TVar1) {
        if ((char)TVar1 < ':') goto LAB_14fb6b663;
      }
    } while ((('`' < (char)TVar1) && ((char)TVar1 < 'g')) || ((byte)((char)TVar1 + 0xbfU) < 6));
  }
  else {
    local_38._Ptr = (char *)0x0;
    local_38._8_8_ = 0;
    local_28 = 0;
    local_20 = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (param_2[uVar4] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,param_2,
               uVar4);
    local_48 = &local_38;
    if (0xf < local_20) {
      local_48 = (_Bxty *)local_38._Ptr;
    }
    uStack_40 = local_28;
    (**(code **)(**(longlong **)(param_1 + 0x78) + 8))
              (*(longlong **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),
               *(undefined4 *)(param_1 + 0xa0),&local_48);
    if (0xf < local_20) {
      uVar4 = local_20 + 1;
      uVar3 = local_38._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_20 + 0x28;
        uVar3 = *(undefined8 *)(local_38._Ptr + -8);
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete((void *)uVar3,uVar4);
      return;
    }
  }
  return;
}

// FUN_14fb6b6b0 @ 14fb6b6b0

void FUN_14fb6b6b0(Tokenizer *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while ((TVar1 = param_1[0x80], (byte)((char)TVar1 + 0x9fU) < 0x1a ||
         (((byte)((byte)TVar1 - 0x30) < 0x30 &&
          ((0x87fffffe03ffU >> ((ulonglong)((byte)TVar1 - 0x30) & 0x3f) & 1) != 0))))) {
    if (TVar1 == (Tokenizer)0xa) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (TVar1 == (Tokenizer)0x9) {
        uVar3 = uVar2 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = (uVar2 - uVar3) + 8;
      }
      else {
        iVar5 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    iVar5 = *(int *)(param_1 + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x90)) {
      param_1[0x80] = *(Tokenizer *)(*(longlong *)(param_1 + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      google::protobuf::io::Tokenizer::Refresh(param_1);
    }
  }
  return;
}

// FUN_14fb6b780 @ 14fb6b780

void FUN_14fb6b780(Tokenizer *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while (TVar1 = param_1[0x80], (byte)((char)TVar1 - 0x30U) < 10) {
    if (TVar1 == (Tokenizer)0xa) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (TVar1 == (Tokenizer)0x9) {
        uVar3 = uVar2 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = (uVar2 - uVar3) + 8;
      }
      else {
        iVar5 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    iVar5 = *(int *)(param_1 + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x90)) {
      param_1[0x80] = *(Tokenizer *)(*(longlong *)(param_1 + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      google::protobuf::io::Tokenizer::Refresh(param_1);
    }
  }
  return;
}

// FUN_14fb6b820 @ 14fb6b820

void FUN_14fb6b820(Tokenizer *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while (TVar1 = param_1[0x80], (byte)((char)TVar1 - 0x30U) < 8) {
    if (TVar1 == (Tokenizer)0xa) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (TVar1 == (Tokenizer)0x9) {
        uVar3 = uVar2 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = (uVar2 - uVar3) + 8;
      }
      else {
        iVar5 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    iVar5 = *(int *)(param_1 + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x90)) {
      param_1[0x80] = *(Tokenizer *)(*(longlong *)(param_1 + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      google::protobuf::io::Tokenizer::Refresh(param_1);
    }
  }
  return;
}

// FUN_14fb6b8c0 @ 14fb6b8c0

void FUN_14fb6b8c0(Tokenizer *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while ((TVar1 = param_1[0x80], TVar1 == (Tokenizer)0x20 || ((byte)((char)TVar1 - 9U) < 5))) {
    if (TVar1 == (Tokenizer)0xa) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (TVar1 == (Tokenizer)0x9) {
        uVar3 = uVar2 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = (uVar2 - uVar3) + 8;
      }
      else {
        iVar5 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    iVar5 = *(int *)(param_1 + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x90)) {
      param_1[0x80] = *(Tokenizer *)(*(longlong *)(param_1 + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      google::protobuf::io::Tokenizer::Refresh(param_1);
    }
  }
  return;
}

// FUN_14fb6b970 @ 14fb6b970

void FUN_14fb6b970(Tokenizer *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    TVar1 = param_1[0x80];
    if ((0x20 < (byte)TVar1) || ((0x100003a00U >> ((longlong)(char)TVar1 & 0x3fU) & 1) == 0)) break;
    if (TVar1 == (Tokenizer)0xa) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      iVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (TVar1 == (Tokenizer)0x9) {
        uVar3 = uVar2 & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        iVar5 = (uVar2 - uVar3) + 8;
      }
      else {
        iVar5 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0xa0) = iVar5;
    iVar5 = *(int *)(param_1 + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x90)) {
      param_1[0x80] = *(Tokenizer *)(*(longlong *)(param_1 + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      google::protobuf::io::Tokenizer::Refresh(param_1);
    }
  }
  return;
}

// Init<unsigned_char> @ 14fb6ba30

/* private: void __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Init<unsigned
   char>(unsigned char const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::Init<unsigned_char>
          (FormatArgImpl *this,uchar *param_1)

{
  Data DVar1;
  undefined7 uStackX_9;
  
  DVar1._1_7_ = uStackX_9;
  DVar1.buf[0] = *param_1;
  this->data_ = DVar1;
  this->dispatcher_ = Dispatch<unsigned_char>;
  return;
}

// StrAppendFormat<unsigned_int> @ 14fb6bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64
   __cdecl absl::lts_20240722::StrAppendFormat<unsigned int>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355> const & __ptr64,unsigned int
   const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrAppendFormat<unsigned_int>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          FormatSpecTemplate<655355> *param_2,uint *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)(param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  local_28[0] = *param_3;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
  local_48 = local_28;
  uStack_40 = 1;
  pbVar1 = str_format_internal::AppendPack(local_48._0_4_,&local_38,&local_48);
  return pbVar1;
}

// StrFormat<unsigned_char> @ 14fb6bb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrFormat<unsigned char>(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355> const & __ptr64,unsigned char
   const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrFormat<unsigned_char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          FormatSpecTemplate<655355> *param_1,uchar *param_2)

{
  undefined1 auStack_78 [32];
  uchar *local_58;
  undefined8 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uchar local_28;
  undefined7 uStack_27;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)param_1;
  uStack_34 = *(undefined4 *)(param_1 + 4);
  uStack_30 = *(undefined4 *)(param_1 + 8);
  uStack_2c = *(undefined4 *)(param_1 + 0xc);
  _local_28 = CONCAT71((int7)((ulonglong)__return_storage_ptr__ >> 8),*param_2);
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned_char>;
  local_58 = &local_28;
  uStack_50 = 1;
  str_format_internal::FormatPack(local_58._0_4_,&local_38,&local_58);
  return __return_storage_ptr__;
}

// FUN_14fb6bbe0 @ 14fb6bbe0

undefined8 FUN_14fb6bbe0(Tokenizer *param_1)

{
  if ((byte)((char)param_1[0x80] - 0x30U) < 10) {
    google::protobuf::io::Tokenizer::NextChar(param_1);
    return 1;
  }
  return 0;
}

// FUN_14fb6bc10 @ 14fb6bc10

undefined8 FUN_14fb6bc10(Tokenizer *param_1)

{
  Tokenizer TVar1;
  
  TVar1 = param_1[0x80];
  if ((((0x37 < (byte)((byte)TVar1 - 0x3f)) ||
       ((0xa8808c20000001U >> ((ulonglong)((byte)TVar1 - 0x3f) & 0x3f) & 1) == 0)) &&
      (TVar1 != (Tokenizer)0x27)) && (TVar1 != (Tokenizer)0x22)) {
    return 0;
  }
  google::protobuf::io::Tokenizer::NextChar(param_1);
  return 1;
}

// FUN_14fb6bc60 @ 14fb6bc60

undefined8 FUN_14fb6bc60(Tokenizer *param_1)

{
  Tokenizer TVar1;
  
  TVar1 = param_1[0x80];
  if (((9 < (byte)((char)TVar1 - 0x30U)) && (5 < (byte)((char)TVar1 + 0x9fU))) &&
     (5 < (byte)((char)TVar1 + 0xbfU))) {
    return 0;
  }
  google::protobuf::io::Tokenizer::NextChar(param_1);
  return 1;
}

// FUN_14fb6bca0 @ 14fb6bca0

undefined8 FUN_14fb6bca0(Tokenizer *param_1)

{
  if (((byte)((char)param_1[0x80] + 0xbfU) < 0x3a) &&
     ((0x3ffffff43ffffffU >> ((ulonglong)(byte)((char)param_1[0x80] + 0xbfU) & 0x3f) & 1) != 0)) {
    google::protobuf::io::Tokenizer::NextChar(param_1);
    return 1;
  }
  return 0;
}

// FUN_14fb6bce0 @ 14fb6bce0

undefined8 FUN_14fb6bce0(Tokenizer *param_1)

{
  if ((byte)((char)param_1[0x80] - 0x30U) < 8) {
    google::protobuf::io::Tokenizer::NextChar(param_1);
    return 1;
  }
  return 0;
}

// FUN_14fb6bd10 @ 14fb6bd10

undefined8 FUN_14fb6bd10(Tokenizer *param_1)

{
  if ((byte)((char)param_1[0x80] - 1U) < 0x1f) {
    google::protobuf::io::Tokenizer::NextChar(param_1);
    return 1;
  }
  return 0;
}

// FUN_14fb6bd40 @ 14fb6bd40

undefined8 FUN_14fb6bd40(Tokenizer *param_1)

{
  if ((param_1[0x80] != (Tokenizer)0x20) && (4 < (byte)((char)param_1[0x80] - 9U))) {
    return 0;
  }
  google::protobuf::io::Tokenizer::NextChar(param_1);
  return 1;
}

// FUN_14fb6bd70 @ 14fb6bd70

undefined8 FUN_14fb6bd70(Tokenizer *param_1)

{
  if (((byte)param_1[0x80] < 0x21) &&
     ((0x100003a00U >> ((longlong)(char)param_1[0x80] & 0x3fU) & 1) != 0)) {
    google::protobuf::io::Tokenizer::NextChar(param_1);
    return 1;
  }
  return 0;
}

// _Adl_verify_range<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*___ptr64> @ 14fb6bdb0

/* void __cdecl std::_Adl_verify_range<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64 const
   & __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_2)

{
  return;
}

// _Get_unwrapped_n<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64&___ptr64,unsigned___int64> @ 14fb6bdc0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64 & __ptr64,unsigned __int64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64 &
   __ptr64,unsigned __int64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::
_Get_unwrapped_n<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64&___ptr64,unsigned___int64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_1,
          __uint64 param_2)

{
  return *param_1;
}

// _Seek_wrapped<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*___ptr64&___ptr64> @ 14fb6bdd0

/* void __cdecl std::_Seek_wrapped<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 & __ptr64>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64 & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Seek_wrapped<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*___ptr64&___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Uninitialized_fill_n<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14fb6bde0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl std::_Uninitialized_fill_n<class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,unsigned __int64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::
_Uninitialized_fill_n<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          __uint64 param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
          allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *param_4)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_3);
    param_1 = param_1 + 0x20;
  }
  _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,param_1,
             param_4);
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// fill<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> @ 14fb6be60

/* void __cdecl std::fill<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 const,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64 const,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
std::
fill<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  for (; param_1 != param_2;
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)param_1 + 0x20)) {
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1 !=
        param_3) {
      pbVar1 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 0x18)) {
        pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  param_3;
      }
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_1,(char *)pbVar1,*(ulong64 *)(param_3 + 0x10));
    }
  }
  return;
}

// fill_n<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,unsigned___int64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> @ 14fb6bec0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl std::fill_n<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,unsigned __int64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,unsigned __int64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::
fill_n<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,unsigned___int64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          __uint64 param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (param_1 != param_3) {
      pbVar1 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 0x18)) {
        pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  param_3;
      }
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,
                 (char *)pbVar1,*(ulong64 *)(param_3 + 0x10));
    }
    param_1 = param_1 + 0x20;
  }
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// FUN_14fb6bf30 @ 14fb6bf30

undefined8 *
FUN_14fb6bf30(undefined8 *param_1,undefined8 *param_2,
             allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x1000000;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    param_2[2] = 0;
    *(undefined1 *)puVar1 = 0;
  }
  if (param_3 !=
      (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0) {
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)param_3 !=
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_3 + 8)) {
      std::
      _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  param_3,*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(param_3 + 8),param_3);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)param_3;
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar1 = (undefined8 *)*param_4;
    }
    param_4[2] = 0;
    *(undefined1 *)puVar1 = 0;
  }
  return param_1;
}

// Token @ 14fb6bff0

/* public: __cdecl google::protobuf::io::Tokenizer::Token::Token(void) __ptr64 */

Token * __thiscall google::protobuf::io::Tokenizer::Token::Token(Token *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xf;
  this[8] = (Token)0x0;
  return this;
}

// Tokenizer @ 14fb6c020

/* public: __cdecl google::protobuf::io::Tokenizer::Tokenizer(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class google::protobuf::io::ErrorCollector *
   __ptr64) __ptr64 */

Tokenizer * __thiscall
google::protobuf::io::Tokenizer::Tokenizer
          (Tokenizer *this,ZeroCopyInputStream *param_1,ErrorCollector *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  Tokenizer TVar5;
  void *pvVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  Tokenizer *_Src;
  void *_Dst;
  Tokenizer *_Dst_00;
  Tokenizer *local_res10;
  
  _Src = this + 8;
  *(longlong *)_Src = 0;
  *(undefined8 *)(this + 0x10) = 0;
  _Dst = (void *)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xf;
  *_Src = (Tokenizer)0x0;
  _Dst_00 = this + 0x40;
  *(longlong *)_Dst_00 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  local_res10 = this + 0x50;
  *(ulonglong *)local_res10 = 0;
  *(undefined8 *)(this + 0x58) = 0xf;
  *_Dst_00 = (Tokenizer)0x0;
  *(ZeroCopyInputStream **)(this + 0x70) = param_1;
  *(ErrorCollector **)(this + 0x78) = param_2;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (Tokenizer)0x0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  this[0xb4] = (Tokenizer)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x38) = 0;
  if (_Dst_00 == _Src) goto LAB_14fb6c20f;
  uVar9 = *(ulonglong *)(this + 0x18);
  if (0xf < *(ulonglong *)(this + 0x20)) {
    _Src = *(Tokenizer **)_Src;
  }
  uVar3 = *(ulonglong *)(this + 0x58);
  if (uVar9 <= uVar3) {
    if (0xf < uVar3) {
      _Dst_00 = *(Tokenizer **)_Dst_00;
    }
    *(ulonglong *)local_res10 = uVar9;
    memmove(_Dst_00,_Src,uVar9);
    _Dst_00[uVar9] = (Tokenizer)0x0;
    goto LAB_14fb6c20f;
  }
  uVar10 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlen_string();
  }
  uVar7 = uVar9 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar10 = uVar7;
    if (uVar7 < uVar1) {
      uVar10 = uVar1;
    }
    uVar1 = uVar10 + 1;
    if (0xfff < uVar1) {
      uVar7 = uVar10 + 0x28;
      if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      goto LAB_14fb6c187;
    }
    if (uVar1 != 0) {
      _Dst = ::operator_new(uVar1);
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_14fb6c187:
    pvVar6 = ::operator_new(uVar7);
    if (pvVar6 == (void *)0x0) goto LAB_14fb6c2b4;
    _Dst = (void *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar6;
  }
  *(ulonglong *)local_res10 = uVar9;
  *(ulonglong *)(this + 0x58) = uVar10;
  memcpy(_Dst,_Src,uVar9);
  *(undefined1 *)((longlong)_Dst + uVar9) = 0;
  if (0xf < uVar3) {
    pvVar6 = *(void **)_Dst_00;
    uVar9 = uVar3 + 1;
    pvVar8 = pvVar6;
    if (0xfff < uVar9) {
      uVar9 = uVar3 + 0x28;
      pvVar8 = *(void **)((longlong)pvVar6 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8))) {
LAB_14fb6c2b4:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar8,uVar9);
  }
  *(void **)_Dst_00 = _Dst;
LAB_14fb6c20f:
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x30);
  if (this[0x98] == (Tokenizer)0x0) {
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      iVar2 = *(int *)(this + 0xb0);
      if (iVar2 < *(int *)(this + 0x90)) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                    (this + 0xa8),(char *)((longlong)iVar2 + *(longlong *)(this + 0x88)),
                   (longlong)(*(int *)(this + 0x90) - iVar2));
        *(undefined4 *)(this + 0xb0) = 0;
      }
    }
    local_res10 = (Tokenizer *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    do {
      cVar4 = (**(code **)(**(longlong **)(this + 0x70) + 8))
                        (*(longlong **)(this + 0x70),&local_res10,this + 0x90);
      if (cVar4 == '\0') {
        *(undefined4 *)(this + 0x90) = 0;
        this[0x98] = (Tokenizer)0x1;
        goto LAB_14fb6c2c9;
      }
    } while (*(int *)(this + 0x90) == 0);
    *(Tokenizer **)(this + 0x88) = local_res10;
    TVar5 = *local_res10;
  }
  else {
LAB_14fb6c2c9:
    TVar5 = (Tokenizer)0x0;
  }
  this[0x80] = TVar5;
  return this;
}

// ~_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> @ 14fb6c300

/* public: __cdecl std::_Alloc_temporary2<class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >::~_Alloc_temporary2<class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > >(void) __ptr64 */

void __thiscall
std::
_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::
~_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *this)

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
  this[8] = (_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
             )0x0;
  return;
}

// FUN_14fb6c370 @ 14fb6c370

void FUN_14fb6c370(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong64 uVar11;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar1 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x3d) != '\0')) &&
     (puVar9 = (undefined8 *)(param_1 + 0x18), puVar9 != puVar1)) {
    uVar4 = puVar1[1];
    uVar5 = *puVar9;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *puVar9 = *puVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = puVar1[3];
    *(undefined8 *)(param_1 + 0x28) = puVar1[2];
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(param_1 + 0x18);
    uVar11 = uVar2 + 1;
    pvVar10 = pvVar3;
    if (0xfff < uVar11) {
      pvVar10 = *(void **)((longlong)pvVar3 + -8);
      uVar11 = uVar2 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,uVar11);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

// ~ErrorCollector @ 14fb6c410

/* public: virtual __cdecl google::protobuf::io::ErrorCollector::~ErrorCollector(void) __ptr64 */

void __thiscall google::protobuf::io::ErrorCollector::~ErrorCollector(ErrorCollector *this)

{
  *(undefined ***)this = vftable;
  return;
}

// ~Token @ 14fb6c430

/* public: __cdecl google::protobuf::io::Tokenizer::Token::~Token(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::Token::~Token(Token *this)

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
  this[8] = (Token)0x0;
  return;
}

// ~Tokenizer @ 14fb6c4a0

/* public: __cdecl google::protobuf::io::Tokenizer::~Tokenizer(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::~Tokenizer(Tokenizer *this)

{
  if (*(int *)(this + 0x94) < *(int *)(this + 0x90)) {
    (**(code **)(**(longlong **)(this + 0x70) + 0x10))
              (*(longlong **)(this + 0x70),*(int *)(this + 0x90) - *(int *)(this + 0x94));
  }
  Token::~Token((Token *)(this + 0x38));
  Token::~Token((Token *)this);
  return;
}

// operator= @ 14fb6c4f0

/* public: struct google::protobuf::io::Tokenizer::Token & __ptr64 __cdecl
   google::protobuf::io::Tokenizer::Token::operator=(struct google::protobuf::io::Tokenizer::Token
   const & __ptr64) __ptr64 */

Token * __thiscall google::protobuf::io::Tokenizer::Token::operator=(Token *this,Token *param_1)

{
  Token *pTVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  pTVar1 = param_1 + 8;
  if (this + 8 != pTVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      pTVar1 = *(Token **)pTVar1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8),
               (char *)pTVar1,*(ulong64 *)(param_1 + 0x18));
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}

// AddError @ 14fb6c550

/* private: void __cdecl google::protobuf::io::Tokenizer::AddError(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::io::Tokenizer::AddError
          (Tokenizer *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  ulong64 uStack_10;
  
  local_18 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    local_18 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uStack_10 = (param_1->_Mypair)._Myval2._Mysize;
  (**(code **)(**(longlong **)(this + 0x78) + 8))
            (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),*(undefined4 *)(this + 0xa0),
             &local_18);
  return;
}

// FUN_14fb6c5b0 @ 14fb6c5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fb6c5b0(uint param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  char local_54 [12];
  char *local_48;
  undefined8 uStack_40;
  uint *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = 0;
  if (param_1 < 0x80) {
    uVar2 = 1;
  }
  else {
    if (param_1 < 0x800) {
      uVar2 = 2;
      uVar1 = (param_1 & 0x7c0 | 0x3020) << 2;
    }
    else if (param_1 < 0x10000) {
      uVar2 = 3;
      uVar1 = ((param_1 & 0xf000 | 0xe0808) << 2 | param_1 & 0xfc0) << 2;
    }
    else {
      if (0x10ffff < param_1) {
        local_28[0] = param_1;
        local_20 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
        local_38 = local_28;
        local_48 = "\\U%08x";
        uStack_30 = 1;
        uStack_2c = 0;
        uStack_40 = 6;
        absl::lts_20240722::str_format_internal::AppendPack(param_2,&local_48,&local_38);
        return;
      }
      uVar2 = 4;
      uVar1 = (((param_1 & 0x1c0000 | 0xffc20202) << 2 | param_1 & 0x3f000) << 2 | param_1 & 0xfc0)
              << 2;
    }
    param_1 = uVar1 | param_1 & 0x3f;
  }
  local_58 = param_1;
  local_58 = google::protobuf::ghtonl(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_2,local_54 + -uVar2,uVar2);
  return;
}

// ConsumeBlockComment @ 14fb6c780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __cdecl google::protobuf::io::Tokenizer::ConsumeBlockComment(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::Tokenizer::ConsumeBlockComment
          (Tokenizer *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  Tokenizer TVar13;
  int iVar14;
  char *pcVar15;
  ulong64 uVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar3 = *(undefined4 *)(this + 0x9c);
  iVar4 = *(int *)(this + 0xa0);
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) = param_1;
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
  }
LAB_14fb6c7e3:
  do {
    while( true ) {
      TVar13 = this[0x80];
      while ((((TVar13 != (Tokenizer)0x0 && (TVar13 != (Tokenizer)0x2a)) &&
              (TVar13 != (Tokenizer)0x2f)) && (TVar13 != (Tokenizer)0xa))) {
        uVar5 = *(uint *)(this + 0xa0);
        if (TVar13 == (Tokenizer)0x9) {
          uVar11 = uVar5 & 0x80000007;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
          }
          iVar14 = (uVar5 - uVar11) + 8;
        }
        else {
          iVar14 = uVar5 + 1;
        }
        *(int *)(this + 0xa0) = iVar14;
        iVar14 = *(int *)(this + 0x94);
        iVar12 = iVar14 + 1;
        *(int *)(this + 0x94) = iVar12;
        if (iVar12 < *(int *)(this + 0x90)) {
          this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar14);
        }
        else {
          Refresh(this);
        }
        TVar13 = this[0x80];
      }
      if (TVar13 != (Tokenizer)0xa) break;
      NextChar(this);
      if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        iVar14 = *(int *)(this + 0xb0);
        if (*(int *)(this + 0x94) != iVar14) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                      (this + 0xa8),(char *)((longlong)iVar14 + *(longlong *)(this + 0x88)),
                     (longlong)(*(int *)(this + 0x94) - iVar14));
        }
        *(undefined8 *)(this + 0xa8) = 0;
        *(undefined4 *)(this + 0xb0) = 0xffffffff;
      }
      while( true ) {
        TVar13 = this[0x80];
        if ((0x20 < (byte)TVar13) || ((0x100003a00U >> ((longlong)(char)TVar13 & 0x3fU) & 1) == 0))
        break;
        if (TVar13 == (Tokenizer)0xa) {
          *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
          iVar14 = 0;
        }
        else {
          uVar5 = *(uint *)(this + 0xa0);
          if (TVar13 == (Tokenizer)0x9) {
            uVar11 = uVar5 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            iVar14 = (uVar5 - uVar11) + 8;
          }
          else {
            iVar14 = uVar5 + 1;
          }
        }
        *(int *)(this + 0xa0) = iVar14;
        iVar14 = *(int *)(this + 0x94);
        iVar12 = iVar14 + 1;
        *(int *)(this + 0x94) = iVar12;
        if (iVar12 < *(int *)(this + 0x90)) {
          this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar14);
        }
        else {
          Refresh(this);
        }
      }
      if ((TVar13 == (Tokenizer)0x2a) && (NextChar(this), this[0x80] == (Tokenizer)0x2f)) {
        NextChar(this);
        return;
      }
      if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) = param_1
        ;
        *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
      }
    }
    if (TVar13 == (Tokenizer)0x2a) {
      NextChar(this);
      TVar13 = this[0x80];
      if (TVar13 == (Tokenizer)0x2f) {
        NextChar(this);
        if (param_1 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        StopRecording(this);
        puVar1 = &(param_1->_Mypair)._Myval2._Mysize;
        uVar6 = *puVar1;
        uVar2 = uVar6 - 2;
        if (uVar2 <= uVar6) {
          if (0xf < (param_1->_Mypair)._Myval2._Myres) {
            param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          *puVar1 = uVar2;
          *(undefined1 *)((longlong)param_1 + uVar2) = 0;
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::_String_val<std::_Simple_types<char>_>::_Xran();
      }
    }
    else if (TVar13 == (Tokenizer)0x2f) {
      NextChar(this);
      TVar13 = this[0x80];
      if (TVar13 == (Tokenizer)0x2a) {
        local_88 = (char *)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0xf;
        local_88 = ::operator_new(0x40);
        uVar7 = s______inside_block_comment___Blo._8_8_;
        local_78 = 0x3c;
        local_70 = 0x3f;
        *(undefined8 *)local_88 = s______inside_block_comment___Blo._0_8_;
        *(undefined8 *)(local_88 + 8) = uVar7;
        uVar10 = s______inside_block_comment___Blo._28_4_;
        uVar9 = s______inside_block_comment___Blo._24_4_;
        uVar8 = s______inside_block_comment___Blo._20_4_;
        *(undefined4 *)(local_88 + 0x10) = s______inside_block_comment___Blo._16_4_;
        *(undefined4 *)(local_88 + 0x14) = uVar8;
        *(undefined4 *)(local_88 + 0x18) = uVar9;
        *(undefined4 *)(local_88 + 0x1c) = uVar10;
        uVar7 = s______inside_block_comment___Blo._40_8_;
        *(undefined8 *)(local_88 + 0x20) = s______inside_block_comment___Blo._32_8_;
        *(undefined8 *)(local_88 + 0x28) = uVar7;
        *(undefined8 *)(local_88 + 0x30) = s______inside_block_comment___Blo._48_8_;
        *(undefined4 *)(local_88 + 0x38) = s______inside_block_comment___Blo._56_4_;
        local_88[0x3c] = '\0';
        uStack_a0 = 0x3c;
        local_a8._0_4_ = SUB84(local_88,0);
        local_a8._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        local_98 = (undefined4)local_a8;
        uStack_94 = local_a8._4_4_;
        uStack_90 = 0x3c;
        uStack_8c = 0;
        local_a8 = local_88;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_98);
        if (0xf < local_70) {
          uVar16 = local_70 + 1;
          pcVar15 = local_88;
          if (0xfff < uVar16) {
            uVar16 = local_70 + 0x28;
            pcVar15 = *(char **)(local_88 + -8);
            if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar15)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar15,uVar16);
        }
        goto LAB_14fb6c7e3;
      }
    }
    if (TVar13 == (Tokenizer)0x0) {
      local_68 = (char *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_68 = ::operator_new(0x30);
      uVar7 = s_End_of_file_inside_block_commen._8_8_;
      local_58 = 0x21;
      local_50 = 0x2f;
      *(undefined8 *)local_68 = s_End_of_file_inside_block_commen._0_8_;
      *(undefined8 *)(local_68 + 8) = uVar7;
      uVar10 = s_End_of_file_inside_block_commen._28_4_;
      uVar9 = s_End_of_file_inside_block_commen._24_4_;
      uVar8 = s_End_of_file_inside_block_commen._20_4_;
      *(undefined4 *)(local_68 + 0x10) = s_End_of_file_inside_block_commen._16_4_;
      *(undefined4 *)(local_68 + 0x14) = uVar8;
      *(undefined4 *)(local_68 + 0x18) = uVar9;
      *(undefined4 *)(local_68 + 0x1c) = uVar10;
      local_68[0x20] = s_End_of_file_inside_block_commen[0x20];
      local_68[0x21] = '\0';
      uStack_a0 = 0x21;
      local_a8._0_4_ = SUB84(local_68,0);
      local_a8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      local_98 = (undefined4)local_a8;
      uStack_94 = local_a8._4_4_;
      uStack_90 = 0x21;
      uStack_8c = 0;
      local_a8 = local_68;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xa0),&local_98);
      if (0xf < local_50) {
        uVar16 = local_50 + 1;
        pcVar15 = local_68;
        if (0xfff < uVar16) {
          uVar16 = local_50 + 0x28;
          pcVar15 = *(char **)(local_68 + -8);
          if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar15)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pcVar15,uVar16);
      }
      local_a8 = "  Comment started here.";
      uStack_a0 = 0x17;
      local_98 = 0x535de390;
      uStack_94 = 1;
      uStack_90 = 0x17;
      uStack_8c = 0;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),uVar3,iVar4 + -2,&local_98);
      if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        StopRecording(this);
      }
      return;
    }
  } while( true );
}

// ConsumeLineComment @ 14fb6cc70

/* private: void __cdecl google::protobuf::io::Tokenizer::ConsumeLineComment(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::Tokenizer::ConsumeLineComment
          (Tokenizer *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) = param_1;
  }
  TVar1 = this[0x80];
  while ((TVar1 != (Tokenizer)0x0 && (TVar1 != (Tokenizer)0xa))) {
    uVar2 = *(uint *)(this + 0xa0);
    if (TVar1 == (Tokenizer)0x9) {
      uVar3 = uVar2 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      iVar5 = (uVar2 - uVar3) + 8;
    }
    else {
      iVar5 = uVar2 + 1;
    }
    *(int *)(this + 0xa0) = iVar5;
    iVar5 = *(int *)(this + 0x94);
    iVar4 = iVar5 + 1;
    *(int *)(this + 0x94) = iVar4;
    if (iVar4 < *(int *)(this + 0x90)) {
      this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar5);
    }
    else {
      Refresh(this);
    }
    TVar1 = this[0x80];
  }
  if (TVar1 == (Tokenizer)0xa) {
    NextChar(this);
  }
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    iVar5 = *(int *)(this + 0xb0);
    if (*(int *)(this + 0x94) != iVar5) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8),
                 (char *)((longlong)iVar5 + *(longlong *)(this + 0x88)),
                 (longlong)(*(int *)(this + 0x94) - iVar5));
    }
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xb0) = 0xffffffff;
  }
  return;
}

// ConsumeNumber @ 14fb6cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: enum google::protobuf::io::Tokenizer::TokenType __cdecl
   google::protobuf::io::Tokenizer::ConsumeNumber(bool,bool) __ptr64 */

TokenType __thiscall
google::protobuf::io::Tokenizer::ConsumeNumber(Tokenizer *this,bool param_1,bool param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  Tokenizer TVar10;
  int iVar11;
  char *pcVar12;
  ulong64 uVar13;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined8 uStack_40;
  char *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar2 = false;
  if (param_1) {
    TVar10 = this[0x80];
    if ((TVar10 == (Tokenizer)0x78) || (TVar10 == (Tokenizer)0x58)) {
      NextChar(this);
      TVar10 = this[0x80];
      if (((byte)((char)TVar10 - 0x30U) < 10) ||
         (((byte)((char)TVar10 + 0x9fU) < 6 || ((byte)((char)TVar10 + 0xbfU) < 6)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
LAB_14fb6cee0:
        do {
          NextChar(this);
          TVar10 = this[0x80];
          if ('/' < (char)TVar10) {
            if ((char)TVar10 < ':') goto LAB_14fb6cee0;
          }
        } while ((('`' < (char)TVar10) && ((char)TVar10 < 'g')) ||
                ((byte)((char)TVar10 + 0xbfU) < 6));
      }
      else {
        local_38 = (char *)0x0;
        uStack_30 = 0;
        local_28 = 0;
        local_20 = 0xf;
        local_48 = ::operator_new(0x30);
        uVar3 = s__0x__must_be_followed_by_hex_di._8_8_;
        local_28 = 0x24;
        local_20 = 0x2f;
        *(undefined8 *)local_48 = s__0x__must_be_followed_by_hex_di._0_8_;
        *(undefined8 *)(local_48 + 8) = uVar3;
        uVar6 = s__0x__must_be_followed_by_hex_di._28_4_;
        uVar5 = s__0x__must_be_followed_by_hex_di._24_4_;
        uVar4 = s__0x__must_be_followed_by_hex_di._20_4_;
        *(undefined4 *)(local_48 + 0x10) = s__0x__must_be_followed_by_hex_di._16_4_;
        *(undefined4 *)(local_48 + 0x14) = uVar4;
        *(undefined4 *)(local_48 + 0x18) = uVar5;
        *(undefined4 *)(local_48 + 0x1c) = uVar6;
        *(undefined4 *)(local_48 + 0x20) = s__0x__must_be_followed_by_hex_di._32_4_;
        local_48[0x24] = '\0';
        uStack_40 = 0x24;
        local_38 = local_48;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_48);
        if (0xf < local_20) {
          uVar13 = local_20 + 1;
          pcVar12 = local_38;
          if (0xfff < uVar13) {
            uVar13 = local_20 + 0x28;
            pcVar12 = *(char **)(local_38 + -8);
            if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar12,uVar13);
        }
      }
    }
    else {
      if (9 < (byte)((char)TVar10 - 0x30U)) goto LAB_14fb6d08d;
      while( true ) {
        TVar10 = this[0x80];
        if (7 < (byte)((char)TVar10 - 0x30U)) break;
        if (TVar10 == (Tokenizer)0xa) {
          *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
          iVar11 = 0;
        }
        else {
          uVar9 = *(uint *)(this + 0xa0);
          if (TVar10 == (Tokenizer)0x9) {
            uVar7 = uVar9 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            iVar11 = (uVar9 - uVar7) + 8;
          }
          else {
            iVar11 = uVar9 + 1;
          }
        }
        *(int *)(this + 0xa0) = iVar11;
        iVar11 = *(int *)(this + 0x94);
        iVar8 = iVar11 + 1;
        *(int *)(this + 0x94) = iVar8;
        if (iVar8 < *(int *)(this + 0x90)) {
          this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar11);
        }
        else {
          Refresh(this);
        }
      }
      if ((byte)((char)TVar10 - 0x30U) < 10) {
        local_38 = (char *)0x0;
        uStack_30 = 0;
        local_28 = 0;
        local_20 = 0xf;
        local_48 = ::operator_new(0x40);
        uVar3 = s_Numbers_starting_with_leading_z._8_8_;
        local_28 = 0x34;
        local_20 = 0x3f;
        *(undefined8 *)local_48 = s_Numbers_starting_with_leading_z._0_8_;
        *(undefined8 *)(local_48 + 8) = uVar3;
        uVar6 = s_Numbers_starting_with_leading_z._28_4_;
        uVar5 = s_Numbers_starting_with_leading_z._24_4_;
        uVar4 = s_Numbers_starting_with_leading_z._20_4_;
        *(undefined4 *)(local_48 + 0x10) = s_Numbers_starting_with_leading_z._16_4_;
        *(undefined4 *)(local_48 + 0x14) = uVar4;
        *(undefined4 *)(local_48 + 0x18) = uVar5;
        *(undefined4 *)(local_48 + 0x1c) = uVar6;
        uVar3 = s_Numbers_starting_with_leading_z._40_8_;
        *(undefined8 *)(local_48 + 0x20) = s_Numbers_starting_with_leading_z._32_8_;
        *(undefined8 *)(local_48 + 0x28) = uVar3;
        *(undefined4 *)(local_48 + 0x30) = s_Numbers_starting_with_leading_z._48_4_;
        local_48[0x34] = '\0';
        uStack_40 = 0x34;
        local_38 = local_48;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_48);
        if (0xf < local_20) {
          uVar13 = local_20 + 1;
          pcVar12 = local_38;
          if (0xfff < uVar13) {
            uVar13 = local_20 + 0x28;
            pcVar12 = *(char **)(local_38 + -8);
            if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar12,uVar13);
        }
        FUN_14fb6b780(this);
      }
    }
  }
  else {
LAB_14fb6d08d:
    if (param_2) {
LAB_14fb6d0ab:
      bVar2 = true;
      FUN_14fb6b780(this);
    }
    else {
      FUN_14fb6b780();
      bVar2 = false;
      if (this[0x80] == (Tokenizer)0x2e) {
        NextChar(this);
        goto LAB_14fb6d0ab;
      }
    }
    TVar10 = this[0x80];
    if ((TVar10 == (Tokenizer)0x65) || (TVar10 == (Tokenizer)0x45)) {
      NextChar(this);
      bVar2 = true;
      if ((this[0x80] == (Tokenizer)0x2d) || (this[0x80] == (Tokenizer)0x2b)) {
        NextChar(this);
      }
      if ((byte)((char)this[0x80] - 0x30U) < 10) {
        do {
          NextChar(this);
          TVar10 = this[0x80];
        } while ((byte)((char)TVar10 - 0x30U) < 10);
      }
      else {
        local_38 = (char *)0x0;
        uStack_30 = 0;
        local_28 = 0;
        local_20 = 0xf;
        local_48 = ::operator_new(0x30);
        uVar3 = s__e__must_be_followed_by_exponen._8_8_;
        local_28 = 0x21;
        local_20 = 0x2f;
        *(undefined8 *)local_48 = s__e__must_be_followed_by_exponen._0_8_;
        *(undefined8 *)(local_48 + 8) = uVar3;
        uVar6 = s__e__must_be_followed_by_exponen._28_4_;
        uVar5 = s__e__must_be_followed_by_exponen._24_4_;
        uVar4 = s__e__must_be_followed_by_exponen._20_4_;
        *(undefined4 *)(local_48 + 0x10) = s__e__must_be_followed_by_exponen._16_4_;
        *(undefined4 *)(local_48 + 0x14) = uVar4;
        *(undefined4 *)(local_48 + 0x18) = uVar5;
        *(undefined4 *)(local_48 + 0x1c) = uVar6;
        local_48[0x20] = s__e__must_be_followed_by_exponen[0x20];
        local_48[0x21] = '\0';
        uStack_40 = 0x21;
        local_38 = local_48;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_48);
        if (0xf < local_20) {
          uVar13 = local_20 + 1;
          pcVar12 = local_38;
          if (0xfff < uVar13) {
            uVar13 = local_20 + 0x28;
            pcVar12 = *(char **)(local_38 + -8);
            if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar12,uVar13);
        }
        TVar10 = this[0x80];
      }
    }
    if ((this[0xb4] != (Tokenizer)0x0) &&
       ((TVar10 == (Tokenizer)0x66 || (TVar10 == (Tokenizer)0x46)))) {
      NextChar(this);
      bVar2 = true;
    }
  }
  uVar9 = (byte)this[0x80] - 0x41;
  if ((((byte)uVar9 < 0x3a) && ((0x3ffffff43ffffffU >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)) &&
     (this[0xbc] != (Tokenizer)0x0)) {
    local_38 = (char *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0xf;
    local_48 = ::operator_new(0x30);
    uVar3 = s_Need_space_between_number_and_i._8_8_;
    local_28 = 0x29;
    local_20 = 0x2f;
    *(undefined8 *)local_48 = s_Need_space_between_number_and_i._0_8_;
    *(undefined8 *)(local_48 + 8) = uVar3;
    uVar6 = s_Need_space_between_number_and_i._28_4_;
    uVar5 = s_Need_space_between_number_and_i._24_4_;
    uVar4 = s_Need_space_between_number_and_i._20_4_;
    *(undefined4 *)(local_48 + 0x10) = s_Need_space_between_number_and_i._16_4_;
    *(undefined4 *)(local_48 + 0x14) = uVar4;
    *(undefined4 *)(local_48 + 0x18) = uVar5;
    *(undefined4 *)(local_48 + 0x1c) = uVar6;
    *(undefined8 *)(local_48 + 0x20) = s_Need_space_between_number_and_i._32_8_;
    local_48[0x28] = s_Need_space_between_number_and_i[0x28];
    local_48[0x29] = '\0';
    uStack_40 = 0x29;
    local_38 = local_48;
    (**(code **)(**(longlong **)(this + 0x78) + 8))
              (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),*(undefined4 *)(this + 0xa0)
               ,&local_48);
    if (local_20 < 0x10) goto LAB_14fb6d4e5;
    uVar13 = local_20 + 1;
    pcVar12 = local_38;
    if (0xfff < uVar13) {
      uVar13 = local_20 + 0x28;
      pcVar12 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)*(char **)(local_38 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (this[0x80] != (Tokenizer)0x2e) goto LAB_14fb6d4e5;
    local_28 = 0;
    local_20 = 0xf;
    local_38 = (char *)0x0;
    uStack_30 = 0;
    if (bVar2) {
      local_48 = ::operator_new(0x40);
      uVar3 = s_Already_saw_decimal_point_or_ex._8_8_;
      local_28 = 0x3e;
      local_20 = 0x3f;
      *(undefined8 *)local_48 = s_Already_saw_decimal_point_or_ex._0_8_;
      *(undefined8 *)(local_48 + 8) = uVar3;
      uVar6 = s_Already_saw_decimal_point_or_ex._28_4_;
      uVar5 = s_Already_saw_decimal_point_or_ex._24_4_;
      uVar4 = s_Already_saw_decimal_point_or_ex._20_4_;
      *(undefined4 *)(local_48 + 0x10) = s_Already_saw_decimal_point_or_ex._16_4_;
      *(undefined4 *)(local_48 + 0x14) = uVar4;
      *(undefined4 *)(local_48 + 0x18) = uVar5;
      *(undefined4 *)(local_48 + 0x1c) = uVar6;
      uVar3 = s_Already_saw_decimal_point_or_ex._40_8_;
      *(undefined8 *)(local_48 + 0x20) = s_Already_saw_decimal_point_or_ex._32_8_;
      *(undefined8 *)(local_48 + 0x28) = uVar3;
      *(undefined8 *)(local_48 + 0x30) = s_Already_saw_decimal_point_or_ex._48_8_;
      *(undefined4 *)(local_48 + 0x38) = s_Already_saw_decimal_point_or_ex._56_4_;
      *(undefined2 *)(local_48 + 0x3c) = s_Already_saw_decimal_point_or_ex._60_2_;
      local_48[0x3e] = '\0';
      uStack_40 = 0x3e;
      local_38 = local_48;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xa0),&local_48);
      if (local_20 < 0x10) goto LAB_14fb6d4e5;
      uVar13 = local_20 + 1;
      pcVar12 = local_38;
      if (0xfff < uVar13) {
        uVar13 = local_20 + 0x28;
        pcVar12 = *(char **)(local_38 + -8);
        if ((char *)0x1f < local_38 + (-8 - (longlong)*(char **)(local_38 + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      local_48 = ::operator_new(0x30);
      uVar3 = s_Hex_and_octal_numbers_must_be_i._8_8_;
      local_28 = 0x27;
      local_20 = 0x2f;
      *(undefined8 *)local_48 = s_Hex_and_octal_numbers_must_be_i._0_8_;
      *(undefined8 *)(local_48 + 8) = uVar3;
      uVar6 = s_Hex_and_octal_numbers_must_be_i._28_4_;
      uVar5 = s_Hex_and_octal_numbers_must_be_i._24_4_;
      uVar4 = s_Hex_and_octal_numbers_must_be_i._20_4_;
      *(undefined4 *)(local_48 + 0x10) = s_Hex_and_octal_numbers_must_be_i._16_4_;
      *(undefined4 *)(local_48 + 0x14) = uVar4;
      *(undefined4 *)(local_48 + 0x18) = uVar5;
      *(undefined4 *)(local_48 + 0x1c) = uVar6;
      *(undefined4 *)(local_48 + 0x20) = s_Hex_and_octal_numbers_must_be_i._32_4_;
      *(undefined2 *)(local_48 + 0x24) = s_Hex_and_octal_numbers_must_be_i._36_2_;
      local_48[0x26] = s_Hex_and_octal_numbers_must_be_i[0x26];
      local_48[0x27] = '\0';
      uStack_40 = 0x27;
      local_38 = local_48;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xa0),&local_48);
      if (local_20 < 0x10) goto LAB_14fb6d4e5;
      uVar13 = local_20 + 1;
      pcVar12 = local_38;
      if (0xfff < uVar13) {
        uVar13 = local_20 + 0x28;
        pcVar12 = *(char **)(local_38 + -8);
        if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  ::operator_delete(pcVar12,uVar13);
LAB_14fb6d4e5:
  return bVar2 + 3;
}

// ConsumeString @ 14fb6d520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __cdecl google::protobuf::io::Tokenizer::ConsumeString(char) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::ConsumeString(Tokenizer *this,char param_1)

{
  Tokenizer TVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulong64 uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TVar1 = this[0x80];
  do {
    if (TVar1 == (Tokenizer)0x0) {
      local_68 = (char *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_68 = ::operator_new(0x20);
      uVar2 = s_Unexpected_end_of_string_._8_8_;
      local_58 = 0x19;
      local_50 = 0x1f;
      *(undefined8 *)local_68 = s_Unexpected_end_of_string_._0_8_;
      *(undefined8 *)(local_68 + 8) = uVar2;
      *(undefined8 *)(local_68 + 0x10) = s_Unexpected_end_of_string_._16_8_;
      local_68[0x18] = s_Unexpected_end_of_string_[0x18];
      local_68[0x19] = '\0';
      uStack_a0 = 0x19;
      local_a8._0_4_ = SUB84(local_68,0);
      local_a8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      local_b8 = (undefined4)local_a8;
      uStack_b4 = local_a8._4_4_;
      uStack_b0 = 0x19;
      uStack_ac = 0;
      local_a8 = local_68;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xa0),&local_b8);
      if (0xf < local_50) {
        uVar7 = local_50 + 1;
        pcVar6 = local_68;
        if (0xfff < uVar7) {
          uVar7 = local_50 + 0x28;
          pcVar6 = *(char **)(local_68 + -8);
          if ((char *)0x1f < local_68 + (-8 - (longlong)*(char **)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_14fb6dd29:
        ::operator_delete(pcVar6,uVar7);
      }
      return;
    }
    if (TVar1 == (Tokenizer)0xa) {
      if (this[0xbd] == (Tokenizer)0x0) {
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        local_68 = ::operator_new(0x40);
        uVar2 = s_Multiline_strings_are_not_allow._8_8_;
        local_58 = 0x35;
        local_50 = 0x3f;
        *(undefined8 *)local_68 = s_Multiline_strings_are_not_allow._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar2;
        uVar5 = s_Multiline_strings_are_not_allow._28_4_;
        uVar4 = s_Multiline_strings_are_not_allow._24_4_;
        uVar3 = s_Multiline_strings_are_not_allow._20_4_;
        *(undefined4 *)(local_68 + 0x10) = s_Multiline_strings_are_not_allow._16_4_;
        *(undefined4 *)(local_68 + 0x14) = uVar3;
        *(undefined4 *)(local_68 + 0x18) = uVar4;
        *(undefined4 *)(local_68 + 0x1c) = uVar5;
        uVar2 = s_Multiline_strings_are_not_allow._40_8_;
        *(undefined8 *)(local_68 + 0x20) = s_Multiline_strings_are_not_allow._32_8_;
        *(undefined8 *)(local_68 + 0x28) = uVar2;
        *(undefined4 *)(local_68 + 0x30) = s_Multiline_strings_are_not_allow._48_4_;
        local_68[0x34] = s_Multiline_strings_are_not_allow[0x34];
        local_68[0x35] = '\0';
        uStack_a0 = 0x35;
        local_a8._0_4_ = SUB84(local_68,0);
        local_a8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        local_b8 = (undefined4)local_a8;
        uStack_b4 = local_a8._4_4_;
        uStack_b0 = 0x35;
        uStack_ac = 0;
        local_a8 = local_68;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_b8);
        if (local_50 < 0x10) {
          return;
        }
        uVar7 = local_50 + 1;
        pcVar6 = local_68;
        if (0xfff < uVar7) {
          uVar7 = local_50 + 0x28;
          pcVar6 = *(char **)(local_68 + -8);
          if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_14fb6dd29;
      }
LAB_14fb6db47:
      NextChar(this);
    }
    else {
      if (TVar1 != (Tokenizer)0x5c) {
        if (TVar1 == (Tokenizer)param_1) {
          NextChar(this);
          return;
        }
        goto LAB_14fb6db47;
      }
      NextChar(this);
      TVar1 = this[0x80];
      if (((((byte)((byte)TVar1 - 0x3f) < 0x38) &&
           ((0xa8808c20000001U >> ((ulonglong)((byte)TVar1 - 0x3f) & 0x3f) & 1) != 0)) ||
          (TVar1 == (Tokenizer)0x27)) ||
         ((TVar1 == (Tokenizer)0x22 || ((byte)((char)TVar1 - 0x30U) < 8)))) goto LAB_14fb6db47;
      if ((TVar1 == (Tokenizer)0x78) || (TVar1 == (Tokenizer)0x58)) {
        NextChar(this);
        TVar1 = this[0x80];
        if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
           ((byte)((char)TVar1 + 0xbfU) < 6)) goto LAB_14fb6db47;
        local_48 = (char *)0x0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0xf;
        local_48 = ::operator_new(0x30);
        uVar2 = s_Expected_hex_digits_for_escape_._8_8_;
        local_38 = 0x28;
        local_30 = 0x2f;
        *(undefined8 *)local_48 = s_Expected_hex_digits_for_escape_._0_8_;
        *(undefined8 *)(local_48 + 8) = uVar2;
        uVar5 = s_Expected_hex_digits_for_escape_._28_4_;
        uVar4 = s_Expected_hex_digits_for_escape_._24_4_;
        uVar3 = s_Expected_hex_digits_for_escape_._20_4_;
        *(undefined4 *)(local_48 + 0x10) = s_Expected_hex_digits_for_escape_._16_4_;
        *(undefined4 *)(local_48 + 0x14) = uVar3;
        *(undefined4 *)(local_48 + 0x18) = uVar4;
        *(undefined4 *)(local_48 + 0x1c) = uVar5;
        *(undefined8 *)(local_48 + 0x20) = s_Expected_hex_digits_for_escape_._32_8_;
        local_48[0x28] = '\0';
        uStack_90 = 0x28;
        local_98._0_4_ = SUB84(local_48,0);
        local_98._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        local_b8 = (undefined4)local_98;
        uStack_b4 = local_98._4_4_;
        uStack_b0 = 0x28;
        uStack_ac = 0;
        local_98 = local_48;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_b8);
        if (0xf < local_30) {
          uVar7 = local_30 + 1;
          pcVar6 = local_48;
          if (0xfff < uVar7) {
            uVar7 = local_30 + 0x28;
            pcVar6 = *(char **)(local_48 + -8);
            if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar6,uVar7);
        }
      }
      else if (TVar1 == (Tokenizer)0x75) {
        NextChar(this);
        TVar1 = this[0x80];
        if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
           ((byte)((char)TVar1 + 0xbfU) < 6)) {
          NextChar(this);
          TVar1 = this[0x80];
          if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
             ((byte)((char)TVar1 + 0xbfU) < 6)) {
            NextChar(this);
            TVar1 = this[0x80];
            if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
               ((byte)((char)TVar1 + 0xbfU) < 6)) {
              NextChar(this);
              TVar1 = this[0x80];
              if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
                 ((byte)((char)TVar1 + 0xbfU) < 6)) goto LAB_14fb6db47;
            }
          }
        }
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        local_68 = ::operator_new(0x40);
        uVar2 = s_Expected_four_hex_digits_for__u._8_8_;
        local_58 = 0x30;
        local_50 = 0x3f;
        *(undefined8 *)local_68 = s_Expected_four_hex_digits_for__u._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar2;
        uVar5 = s_Expected_four_hex_digits_for__u._28_4_;
        uVar4 = s_Expected_four_hex_digits_for__u._24_4_;
        uVar3 = s_Expected_four_hex_digits_for__u._20_4_;
        *(undefined4 *)(local_68 + 0x10) = s_Expected_four_hex_digits_for__u._16_4_;
        *(undefined4 *)(local_68 + 0x14) = uVar3;
        *(undefined4 *)(local_68 + 0x18) = uVar4;
        *(undefined4 *)(local_68 + 0x1c) = uVar5;
        uVar2 = s_Expected_four_hex_digits_for__u._40_8_;
        *(undefined8 *)(local_68 + 0x20) = s_Expected_four_hex_digits_for__u._32_8_;
        *(undefined8 *)(local_68 + 0x28) = uVar2;
        local_68[0x30] = '\0';
        uStack_80 = 0x30;
        local_88._0_4_ = SUB84(local_68,0);
        local_88._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        local_b8 = (undefined4)local_88;
        uStack_b4 = local_88._4_4_;
        uStack_b0 = 0x30;
        uStack_ac = 0;
        local_88 = local_68;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_b8);
        if (0xf < local_50) {
          uVar7 = local_50 + 1;
          pcVar6 = local_68;
          if (0xfff < uVar7) {
            uVar7 = local_50 + 0x28;
            pcVar6 = *(char **)(local_68 + -8);
            if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar6,uVar7);
        }
      }
      else if (TVar1 == (Tokenizer)0x55) {
        NextChar(this);
        if ((this[0x80] == (Tokenizer)0x30) && (NextChar(this), this[0x80] == (Tokenizer)0x30)) {
          NextChar(this);
          if ((this[0x80] == (Tokenizer)0x30) || (this[0x80] == (Tokenizer)0x31)) {
            NextChar(this);
            TVar1 = this[0x80];
            if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
               ((byte)((char)TVar1 + 0xbfU) < 6)) {
              NextChar(this);
              TVar1 = this[0x80];
              if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
                 ((byte)((char)TVar1 + 0xbfU) < 6)) {
                NextChar(this);
                TVar1 = this[0x80];
                if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
                   ((byte)((char)TVar1 + 0xbfU) < 6)) {
                  NextChar(this);
                  TVar1 = this[0x80];
                  if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
                     ((byte)((char)TVar1 + 0xbfU) < 6)) {
                    NextChar(this);
                    TVar1 = this[0x80];
                    if ((((byte)((char)TVar1 - 0x30U) < 10) || ((byte)((char)TVar1 + 0x9fU) < 6)) ||
                       ((byte)((char)TVar1 + 0xbfU) < 6)) goto LAB_14fb6db47;
                  }
                }
              }
            }
          }
        }
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        local_68 = ::operator_new(0x40);
        uVar2 = s_Expected_eight_hex_digits_up_to._8_8_;
        local_58 = 0x3d;
        local_50 = 0x3f;
        *(undefined8 *)local_68 = s_Expected_eight_hex_digits_up_to._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar2;
        uVar5 = s_Expected_eight_hex_digits_up_to._28_4_;
        uVar4 = s_Expected_eight_hex_digits_up_to._24_4_;
        uVar3 = s_Expected_eight_hex_digits_up_to._20_4_;
        *(undefined4 *)(local_68 + 0x10) = s_Expected_eight_hex_digits_up_to._16_4_;
        *(undefined4 *)(local_68 + 0x14) = uVar3;
        *(undefined4 *)(local_68 + 0x18) = uVar4;
        *(undefined4 *)(local_68 + 0x1c) = uVar5;
        uVar2 = s_Expected_eight_hex_digits_up_to._40_8_;
        *(undefined8 *)(local_68 + 0x20) = s_Expected_eight_hex_digits_up_to._32_8_;
        *(undefined8 *)(local_68 + 0x28) = uVar2;
        *(undefined8 *)(local_68 + 0x30) = s_Expected_eight_hex_digits_up_to._48_8_;
        *(undefined4 *)(local_68 + 0x38) = s_Expected_eight_hex_digits_up_to._56_4_;
        local_68[0x3c] = s_Expected_eight_hex_digits_up_to[0x3c];
        local_68[0x3d] = '\0';
        uStack_70 = 0x3d;
        local_78._0_4_ = SUB84(local_68,0);
        local_78._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        local_b8 = (undefined4)local_78;
        uStack_b4 = local_78._4_4_;
        uStack_b0 = 0x3d;
        uStack_ac = 0;
        local_78 = local_68;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_b8);
        if (0xf < local_50) {
          uVar7 = local_50 + 1;
          pcVar6 = local_68;
          if (0xfff < uVar7) {
            uVar7 = local_50 + 0x28;
            pcVar6 = *(char **)(local_68 + -8);
            if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar6,uVar7);
        }
      }
      else {
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        local_68 = ::operator_new(0x30);
        uVar2 = s_Invalid_escape_sequence_in_stri._8_8_;
        local_58 = 0x2a;
        local_50 = 0x2f;
        *(undefined8 *)local_68 = s_Invalid_escape_sequence_in_stri._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar2;
        uVar5 = s_Invalid_escape_sequence_in_stri._28_4_;
        uVar4 = s_Invalid_escape_sequence_in_stri._24_4_;
        uVar3 = s_Invalid_escape_sequence_in_stri._20_4_;
        *(undefined4 *)(local_68 + 0x10) = s_Invalid_escape_sequence_in_stri._16_4_;
        *(undefined4 *)(local_68 + 0x14) = uVar3;
        *(undefined4 *)(local_68 + 0x18) = uVar4;
        *(undefined4 *)(local_68 + 0x1c) = uVar5;
        *(undefined8 *)(local_68 + 0x20) = s_Invalid_escape_sequence_in_stri._32_8_;
        *(undefined2 *)(local_68 + 0x28) = s_Invalid_escape_sequence_in_stri._40_2_;
        local_68[0x2a] = '\0';
        uStack_a0 = 0x2a;
        local_a8._0_4_ = SUB84(local_68,0);
        local_a8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        local_b8 = (undefined4)local_a8;
        uStack_b4 = local_a8._4_4_;
        uStack_b0 = 0x2a;
        uStack_ac = 0;
        local_a8 = local_68;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_b8);
        if (0xf < local_50) {
          uVar7 = local_50 + 1;
          pcVar6 = local_68;
          if (0xfff < uVar7) {
            uVar7 = local_50 + 0x28;
            pcVar6 = *(char **)(local_68 + -8);
            if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pcVar6,uVar7);
        }
      }
    }
    TVar1 = this[0x80];
  } while( true );
}

// EndToken @ 14fb6dd90

/* private: void __cdecl google::protobuf::io::Tokenizer::EndToken(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::EndToken(Tokenizer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb0);
  if (*(int *)(this + 0x94) != iVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8),
               (char *)((longlong)iVar1 + *(longlong *)(this + 0x88)),
               (longlong)(*(int *)(this + 0x94) - iVar1));
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0xa0);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  return;
}

// FUN_14fb6de00 @ 14fb6de00

byte * FUN_14fb6de00(byte *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar1 = *param_1;
  pbVar5 = param_1 + 1;
  iVar4 = 0;
  *param_2 = 0;
  if (bVar1 == 0x75) {
    lVar2 = 4;
  }
  else {
    if (bVar1 != 0x55) {
      return param_1;
    }
    lVar2 = 8;
  }
  pbVar6 = pbVar5 + lVar2;
  iVar3 = 0;
  for (; pbVar5 < pbVar6; pbVar5 = pbVar5 + 1) {
    if (*pbVar5 == 0) {
      return param_1;
    }
    iVar3 = iVar3 * 0x10 + (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar5];
    *param_2 = iVar3;
  }
  if (((iVar3 - 0xd800U < 0x400) && (*pbVar6 == 0x5c)) && (pbVar6[1] == 0x75)) {
    for (pbVar5 = pbVar6 + 2; pbVar5 < pbVar6 + 6; pbVar5 = pbVar5 + 1) {
      if (*pbVar5 == 0) {
        return pbVar6;
      }
      iVar4 = iVar4 * 0x10 + (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar5];
    }
    if (iVar4 - 0xdc00U < 0x400) {
      *param_2 = ((iVar3 - 0xd800U) * 0x400 | iVar4 - 0xdc00U) + 0x10000;
      pbVar6 = pbVar6 + 6;
    }
  }
  return pbVar6;
}

// FUN_14fb6df00 @ 14fb6df00

void FUN_14fb6df00(undefined8 *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
    if (*(char *)((longlong)param_1 + 0x3f) == '\0') {
      this = (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              *)param_1[1];
      if (this != (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *)0x0) {
        this_00 = (this->_Mypair)._Myval2._Mylast;
        if (this_00 == (this->_Mypair)._Myval2._Myend) {
          std::
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          ::
          _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                    (this,this_00,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1 + 3));
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (param_1 + 3));
          ppbVar1 = &(this->_Mypair)._Myval2._Mylast;
          *ppbVar1 = *ppbVar1 + 1;
        }
      }
    }
    else {
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_1 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = (char *)(param_1 + 3);
        if (0xf < (ulonglong)param_1[6]) {
          pcVar3 = *(char **)pcVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_1,
                   pcVar3,param_1[5]);
      }
      *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
      *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
    }
    puVar2 = param_1 + 3;
    if (0xf < (ulonglong)param_1[6]) {
      puVar2 = (undefined8 *)param_1[3];
    }
    param_1[5] = 0;
    *(undefined1 *)puVar2 = 0;
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
    *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  }
  return;
}

// FUN_14fb6dfc0 @ 14fb6dfc0

longlong FUN_14fb6dfc0(longlong param_1)

{
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_14fb6df00();
  }
  *(undefined2 *)(param_1 + 0x3d) = 1;
  return param_1 + 0x18;
}

// FUN_14fb6dff0 @ 14fb6dff0

longlong FUN_14fb6dff0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x3d) != '\0') && (*(char *)(param_1 + 0x3e) == '\0')) {
    FUN_14fb6df00();
  }
  *(undefined2 *)(param_1 + 0x3d) = 0x101;
  return param_1 + 0x18;
}

// IsIdentifier @ 14fb6e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static bool __cdecl google::protobuf::io::Tokenizer::IsIdentifier(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

bool __cdecl
google::protobuf::io::Tokenizer::IsIdentifier
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  byte bVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  _Bxty *p_Var8;
  undefined1 auStack_58 [40];
  _Bxty local_30;
  longlong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (uVar1 != 0) {
    uVar6 = (param_1->_Mypair)._Myval2._Myres;
    pbVar4 = param_1;
    if (0xf < uVar6) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    bVar3 = (pbVar4->_Mypair)._Myval2._Bx._Buf[0] + 0xbf;
    if ((bVar3 < 0x3a) && ((0x3ffffff43ffffffU >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
      uVar1 = uVar1 - 1;
      local_30._Ptr = (char *)0x0;
      local_30._8_8_ = 0;
      uVar7 = 0xffffffffffffffff;
      if (uVar1 != 0xffffffffffffffff) {
        uVar7 = uVar1;
      }
      local_20 = 0;
      uStack_18 = 0;
      if (0xf < uVar6) {
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                 (param_1->_Mypair)._Myval2._Bx._Buf + 1,uVar7);
      uVar5 = &local_30;
      if (0xf < uStack_18) {
        uVar5 = local_30._Ptr;
      }
      p_Var8 = (_Bxty *)(uVar5 + local_20);
      do {
        if ((_Bxty *)uVar5 == p_Var8) {
          bVar2 = false;
LAB_14fb6e271:
          if (0xf < uStack_18) {
            uVar6 = uStack_18 + 1;
            uVar5 = local_30._Ptr;
            if (0xfff < uVar6) {
              uVar5 = *(undefined8 *)(local_30._Ptr + -8);
              uVar6 = uStack_18 + 0x28;
              if ((char *)0x1f < local_30._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar5,uVar6);
          }
          return !bVar2;
        }
        if ((0x19 < (byte)(*(char *)uVar5 + 0x9fU)) &&
           ((bVar3 = *(char *)uVar5 - 0x30, 0x2f < bVar3 ||
            ((0x87fffffe03ffU >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)))) {
          bVar2 = true;
          goto LAB_14fb6e271;
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
  }
  return false;
}

// FUN_14fb6e310 @ 14fb6e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fb6e310(undefined8 *param_1)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *this;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_68 [32];
  _Bxty *local_48;
  undefined1 local_38 [8];
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 7) + 1;
  if (*(char *)((longlong)param_1 + 0x3d) == '\0') {
    iVar2 = *(int *)(param_1 + 7);
  }
  if (iVar2 == 1) {
    if ((*(char *)((longlong)param_1 + 0x3c) != '\0') &&
       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_1 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*param_1);
      this = (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              *)param_1[1];
      if (this != (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *)0x0) {
        local_48 = &local_30;
        std::
        vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
        ::insert(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_38,
                 (__uint64)(this->_Mypair)._Myval2._Myfirst,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000001);
      }
      puVar1 = (undefined8 *)*param_1;
      puVar3 = puVar1;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar3 = (undefined8 *)*puVar1;
      }
      puVar1[2] = 0;
      *(undefined1 *)puVar3 = 0;
      if (0xf < local_18) {
        uVar5 = local_18 + 1;
        uVar4 = local_30._Ptr;
        if (0xfff < uVar5) {
          uVar5 = local_18 + 0x28;
          uVar4 = *(undefined8 *)(local_30._Ptr + -8);
          if ((char *)0x1f < local_30._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete((void *)uVar4,uVar5);
      }
    }
    FUN_14fb6df00(param_1);
  }
  return;
}

// Next @ 14fb6e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: bool __cdecl google::protobuf::io::Tokenizer::Next(void) __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::Next(Tokenizer *this)

{
  Tokenizer TVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  NextCommentStatus NVar10;
  uint uVar11;
  int iVar12;
  TokenType TVar13;
  Tokenizer *pTVar14;
  int iVar15;
  Tokenizer *pTVar16;
  char *******pppppppcVar17;
  ulong64 uVar18;
  undefined1 auStack_b8 [32];
  char *******local_98;
  undefined8 uStack_90;
  char *******local_88;
  code *pcStack_80;
  char *******local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  char *******local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)this;
  pTVar16 = this + 8;
  if (this + 0x40 != pTVar16) {
    pTVar14 = pTVar16;
    if (0xf < *(ulonglong *)(this + 0x20)) {
      pTVar14 = *(Tokenizer **)pTVar16;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x40),
               (char *)pTVar14,*(ulong64 *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x30);
  TVar1 = this[0x98];
  while (TVar1 == (Tokenizer)0x0) {
    *(undefined4 *)this = 0;
    pTVar14 = pTVar16;
    if (0xf < *(ulonglong *)(this + 0x20)) {
      pTVar14 = *(Tokenizer **)pTVar16;
    }
    *(undefined8 *)(this + 0x18) = 0;
    *pTVar14 = (Tokenizer)0x0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x9c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0xa0);
    *(Tokenizer **)(this + 0xa8) = pTVar16;
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
    TVar1 = this[0x80];
    if (this[0xbf] == (Tokenizer)0x0) {
      if ((TVar1 == (Tokenizer)0x20) || ((byte)((char)TVar1 - 9U) < 5)) {
        NextChar(this);
        while ((TVar1 = this[0x80], TVar1 == (Tokenizer)0x20 || ((byte)((char)TVar1 - 9U) < 5))) {
          if (TVar1 == (Tokenizer)0xa) {
            *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
            iVar15 = 0;
          }
          else {
            uVar2 = *(uint *)(this + 0xa0);
            if (TVar1 == (Tokenizer)0x9) {
              uVar11 = uVar2 & 0x80000007;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
              }
              iVar15 = (uVar2 - uVar11) + 8;
            }
            else {
              iVar15 = uVar2 + 1;
            }
          }
          *(int *)(this + 0xa0) = iVar15;
          iVar15 = *(int *)(this + 0x94);
          iVar12 = iVar15 + 1;
          *(int *)(this + 0x94) = iVar12;
          if (iVar12 < *(int *)(this + 0x90)) {
            this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar15);
          }
          else {
            Refresh(this);
          }
        }
        *(undefined4 *)this = 7;
        if (this[0xbe] != (Tokenizer)0x0) goto LAB_14fb6e50c;
      }
LAB_14fb6e76f:
      if ((this[0xbe] != (Tokenizer)0x0) &&
         ((this[0xbf] != (Tokenizer)0x0 && (this[0x80] == (Tokenizer)0xa)))) {
        NextChar(this);
        *(undefined4 *)this = 8;
        goto LAB_14fb6e50c;
      }
      bVar5 = false;
    }
    else {
      if ((0x20 < (byte)TVar1) || ((0x100003a00U >> ((longlong)(char)TVar1 & 0x3fU) & 1) == 0))
      goto LAB_14fb6e76f;
      NextChar(this);
      FUN_14fb6b970(this);
      *(undefined4 *)this = 7;
LAB_14fb6e50c:
      bVar5 = true;
    }
    iVar15 = *(int *)(this + 0xb0);
    if (*(int *)(this + 0x94) != iVar15) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8),
                 (char *)((longlong)iVar15 + *(longlong *)(this + 0x88)),
                 (longlong)(*(int *)(this + 0x94) - iVar15));
    }
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xb0) = 0xffffffff;
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0xa0);
    if (bVar5) {
      return true;
    }
    NVar10 = TryConsumeCommentStart(this);
    if (NVar10 == 0) {
      TVar1 = this[0x80];
      while ((TVar1 != (Tokenizer)0x0 && (TVar1 != (Tokenizer)0xa))) {
        uVar2 = *(uint *)(this + 0xa0);
        if (TVar1 == (Tokenizer)0x9) {
          uVar11 = uVar2 & 0x80000007;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
          }
          iVar15 = (uVar2 - uVar11) + 8;
        }
        else {
          iVar15 = uVar2 + 1;
        }
        *(int *)(this + 0xa0) = iVar15;
        iVar15 = *(int *)(this + 0x94);
        iVar12 = iVar15 + 1;
        *(int *)(this + 0x94) = iVar12;
        if (iVar12 < *(int *)(this + 0x90)) {
          this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar15);
        }
        else {
          Refresh(this);
        }
        TVar1 = this[0x80];
      }
      if (TVar1 == (Tokenizer)0xa) {
        NextChar(this);
      }
    }
    else if (NVar10 == 1) {
      ConsumeBlockComment(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               0x0);
    }
    else {
      if (NVar10 == 2) {
        return true;
      }
      if (this[0x98] != (Tokenizer)0x0) break;
      if ((0x1e < (byte)((char)this[0x80] - 1U)) && (this[0x80] != (Tokenizer)0x0)) {
        *(undefined4 *)this = 0;
        pTVar16 = this + 8;
        if (0xf < *(ulonglong *)(this + 0x20)) {
          pTVar16 = *(Tokenizer **)(this + 8);
        }
        *(undefined8 *)(this + 0x18) = 0;
        *pTVar16 = (Tokenizer)0x0;
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x9c);
        *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0xa0);
        *(Tokenizer **)(this + 0xa8) = this + 8;
        *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
        TVar1 = this[0x80];
        if (((byte)((byte)TVar1 - 0x41) < 0x3a) &&
           ((0x3ffffff43ffffffU >> ((ulonglong)((byte)TVar1 - 0x41) & 0x3f) & 1) != 0)) {
          NextChar(this);
          while ((TVar1 = this[0x80], (byte)((char)TVar1 + 0x9fU) < 0x1a ||
                 (((byte)((byte)TVar1 - 0x30) < 0x30 &&
                  ((0x87fffffe03ffU >> ((ulonglong)((byte)TVar1 - 0x30) & 0x3f) & 1) != 0))))) {
            if (TVar1 == (Tokenizer)0xa) {
              *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
              iVar15 = 0;
            }
            else {
              uVar2 = *(uint *)(this + 0xa0);
              if (TVar1 == (Tokenizer)0x9) {
                uVar11 = uVar2 & 0x80000007;
                if ((int)uVar11 < 0) {
                  uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
                }
                iVar15 = (uVar2 - uVar11) + 8;
              }
              else {
                iVar15 = uVar2 + 1;
              }
            }
            *(int *)(this + 0xa0) = iVar15;
            iVar15 = *(int *)(this + 0x94);
            iVar12 = iVar15 + 1;
            *(int *)(this + 0x94) = iVar12;
            if (iVar12 < *(int *)(this + 0x90)) {
              this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar15);
            }
            else {
              Refresh(this);
            }
          }
          *(undefined4 *)this = 2;
          EndToken(this);
          return true;
        }
        if (TVar1 == (Tokenizer)0x30) {
          NextChar(this);
          TVar13 = ConsumeNumber(this,true,false);
          *(TokenType *)this = TVar13;
          EndToken(this);
          return true;
        }
        if (TVar1 == (Tokenizer)0x2e) {
          NextChar(this);
          if ((byte)((char)this[0x80] - 0x30U) < 10) {
            NextChar(this);
            if (((*(int *)(this + 0x38) == 2) && (*(int *)(this + 0x28) == *(int *)(this + 0x60)))
               && (*(int *)(this + 0x2c) == *(int *)(this + 0x68))) {
              local_88 = (char *******)0x1535de3d8;
              pcStack_80 = (code *)0x30;
              local_98 = (char *******)0x1535de3d8;
              uStack_90 = 0x30;
              (**(code **)(**(longlong **)(this + 0x78) + 8))
                        (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                         *(int *)(this + 0xa0) + -2,&local_98);
            }
            TVar13 = ConsumeNumber(this,false,true);
            *(TokenType *)this = TVar13;
            EndToken(this);
            return true;
          }
        }
        else {
          if ((byte)((char)TVar1 - 0x30U) < 10) {
            NextChar(this);
            TVar13 = ConsumeNumber(this,false,false);
            *(TokenType *)this = TVar13;
            EndToken(this);
            return true;
          }
          if (TVar1 == (Tokenizer)0x22) {
            NextChar(this);
            ConsumeString(this,'\"');
            *(undefined4 *)this = 5;
            EndToken(this);
            return true;
          }
          if (TVar1 == (Tokenizer)0x27) {
            NextChar(this);
            ConsumeString(this,'\'');
            *(undefined4 *)this = 5;
            EndToken(this);
            return true;
          }
          if ((char)TVar1 < '\0') {
            plVar3 = *(longlong **)(this + 0x78);
            pcVar4 = *(code **)(*plVar3 + 8);
            local_88 = (char *******)CONCAT71(local_88._1_7_,TVar1);
            pcStack_80 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                         Dispatch<unsigned_char>;
            local_78 = (char *******)&local_88;
            uStack_70 = 1;
            local_98 = (char *******)0x1535de410;
            uStack_90 = 0x24;
            absl::lts_20240722::str_format_internal::FormatPack(local_58,&local_98,&local_78);
            local_98 = (char *******)local_58;
            if (0xf < local_40) {
              local_98 = local_58[0];
            }
            uStack_90 = local_48;
            uStack_70 = local_48;
            local_78 = local_98;
            (*pcVar4)(plVar3,*(undefined4 *)(this + 0x9c),*(undefined4 *)(this + 0xa0),&local_78);
            if (0xf < local_40) {
              uVar18 = local_40 + 1;
              pppppppcVar17 = local_58[0];
              if (0xfff < uVar18) {
                uVar18 = local_40 + 0x28;
                pppppppcVar17 = (char *******)local_58[0][-1];
                if ((char *)0x1f < (char *)((longlong)local_58[0] + (-8 - (longlong)pppppppcVar17)))
                {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              ::operator_delete(pppppppcVar17,uVar18);
            }
          }
          NextChar(this);
        }
        *(undefined4 *)this = 6;
        EndToken(this);
        return true;
      }
      local_78 = (char *******)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
      local_98 = ::operator_new(0x30);
      uVar6 = s_Invalid_control_characters_enco._8_8_;
      local_68 = 0x2f;
      local_60 = 0x2f;
      *local_98 = (char ******)s_Invalid_control_characters_enco._0_8_;
      local_98[1] = (char ******)uVar6;
      uVar9 = s_Invalid_control_characters_enco._28_4_;
      uVar8 = s_Invalid_control_characters_enco._24_4_;
      uVar7 = s_Invalid_control_characters_enco._20_4_;
      *(undefined4 *)(local_98 + 2) = s_Invalid_control_characters_enco._16_4_;
      *(undefined4 *)((longlong)local_98 + 0x14) = uVar7;
      *(undefined4 *)(local_98 + 3) = uVar8;
      *(undefined4 *)((longlong)local_98 + 0x1c) = uVar9;
      local_98[4] = (char ******)s_Invalid_control_characters_enco._32_8_;
      *(undefined4 *)(local_98 + 5) = s_Invalid_control_characters_enco._40_4_;
      *(undefined2 *)((longlong)local_98 + 0x2c) = s_Invalid_control_characters_enco._44_2_;
      *(char *)((longlong)local_98 + 0x2e) = s_Invalid_control_characters_enco[0x2e];
      *(char *)((longlong)local_98 + 0x2f) = '\0';
      pcStack_80 = (code *)0x2f;
      uStack_90 = 0x2f;
      local_88 = local_98;
      local_78 = local_98;
      (**(code **)(**(longlong **)(this + 0x78) + 8))
                (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xa0),&local_98);
      if (0xf < local_60) {
        uVar18 = local_60 + 1;
        pppppppcVar17 = local_78;
        if (0xfff < uVar18) {
          uVar18 = local_60 + 0x28;
          pppppppcVar17 = (char *******)local_78[-1];
          if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)pppppppcVar17))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pppppppcVar17,uVar18);
      }
      do {
        do {
          NextChar(this);
        } while ((byte)((char)this[0x80] - 1U) < 0x1f);
        if (this[0x98] != (Tokenizer)0x0) goto LAB_14fb6e852;
      } while (this[0x80] == (Tokenizer)0x0);
    }
    TVar1 = this[0x98];
  }
LAB_14fb6e852:
  *(undefined4 *)this = 1;
  pTVar16 = this + 8;
  if (0xf < *(ulonglong *)(this + 0x20)) {
    pTVar16 = *(Tokenizer **)(this + 8);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *pTVar16 = (Tokenizer)0x0;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0xa0);
  return false;
}

// NextChar @ 14fb6ec40

/* private: void __cdecl google::protobuf::io::Tokenizer::NextChar(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::NextChar(Tokenizer *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (this[0x80] == (Tokenizer)0xa) {
    *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
    *(undefined4 *)(this + 0xa0) = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0xa0);
    if (this[0x80] == (Tokenizer)0x9) {
      uVar3 = uVar1 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)(this + 0xa0) = (uVar1 - uVar3) + 8;
    }
    else {
      *(uint *)(this + 0xa0) = uVar1 + 1;
    }
  }
  iVar2 = *(int *)(this + 0x94);
  iVar4 = iVar2 + 1;
  *(int *)(this + 0x94) = iVar4;
  if (iVar4 < *(int *)(this + 0x90)) {
    this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar2);
    return;
  }
  Refresh(this);
  return;
}

// NextWithComments @ 14fb6ecd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl google::protobuf::io::Tokenizer::NextWithComments(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > > * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::Tokenizer::NextWithComments
          (Tokenizer *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  Tokenizer TVar2;
  uint uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  _Bxty *p_Var8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  NextCommentStatus NVar17;
  int iVar18;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar19;
  undefined8 uVar20;
  int iVar21;
  Tokenizer *_Buf1;
  Tokenizer *pTVar22;
  ulong64 uVar23;
  int iVar24;
  undefined1 auStack_f8 [32];
  _Bxty *local_d8;
  char *local_c8;
  undefined8 uStack_c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_b8;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *local_b0;
  _Bxty *local_a8;
  _Bxty local_a0;
  char *local_90;
  ulonglong uStack_88;
  int local_80;
  undefined4 local_7c;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0._8_8_ = 0;
  local_90 = (char *)0x0;
  uStack_88 = 0xf;
  local_a0._Ptr = (char *)0x0;
  local_80 = 0;
  local_7c = 0x1000000;
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pbVar19 = param_1;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      pbVar19 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (pbVar19->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  local_b8 = param_1;
  local_b0 = param_2;
  local_a8 = (_Bxty *)param_3;
  if (param_2 !=
      (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
       *)0x0) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2->_Mypair)._Myval2._Myfirst;
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2->_Mypair)._Myval2._Mylast;
    if (pbVar4 != pbVar5) {
      std::
      _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pbVar4,pbVar5,
                 (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *
                 )param_2);
      (param_2->_Mypair)._Myval2._Mylast = (param_2->_Mypair)._Myval2._Myfirst;
    }
  }
  if (param_3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pbVar19 = param_3;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      pbVar19 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_3->_Mypair)._Myval2._Mysize = 0;
    (pbVar19->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  iVar18 = *(int *)(this + 0x9c);
  iVar24 = -1;
  if (*(int *)this == 0) {
    if (this[0x80] == (Tokenizer)0xef) {
      NextChar(this);
      if ((this[0x80] != (Tokenizer)0xbb) || (NextChar(this), this[0x80] != (Tokenizer)0xbf)) {
        local_78._Ptr = (char *)0x0;
        local_78._8_8_ = 0;
        local_68 = 0;
        local_60 = 0xf;
        local_c8 = ::operator_new(0x60);
        uVar20 = s_Proto_file_starts_with_0xEF_but._8_8_;
        local_68 = 0x55;
        local_60 = 0x5f;
        *(undefined8 *)local_c8 = s_Proto_file_starts_with_0xEF_but._0_8_;
        *(undefined8 *)(local_c8 + 8) = uVar20;
        uVar20 = s_Proto_file_starts_with_0xEF_but._24_8_;
        *(undefined8 *)(local_c8 + 0x10) = s_Proto_file_starts_with_0xEF_but._16_8_;
        *(undefined8 *)(local_c8 + 0x18) = uVar20;
        uVar20 = s_Proto_file_starts_with_0xEF_but._40_8_;
        *(undefined8 *)(local_c8 + 0x20) = s_Proto_file_starts_with_0xEF_but._32_8_;
        *(undefined8 *)(local_c8 + 0x28) = uVar20;
        uVar12 = s_Proto_file_starts_with_0xEF_but._60_4_;
        uVar11 = s_Proto_file_starts_with_0xEF_but._56_4_;
        uVar10 = s_Proto_file_starts_with_0xEF_but._52_4_;
        *(undefined4 *)(local_c8 + 0x30) = s_Proto_file_starts_with_0xEF_but._48_4_;
        *(undefined4 *)(local_c8 + 0x34) = uVar10;
        *(undefined4 *)(local_c8 + 0x38) = uVar11;
        *(undefined4 *)(local_c8 + 0x3c) = uVar12;
        uVar20 = s_Proto_file_starts_with_0xEF_but._72_8_;
        *(undefined8 *)(local_c8 + 0x40) = s_Proto_file_starts_with_0xEF_but._64_8_;
        *(undefined8 *)(local_c8 + 0x48) = uVar20;
        *(undefined4 *)(local_c8 + 0x50) = s_Proto_file_starts_with_0xEF_but._80_4_;
        local_c8[0x54] = s_Proto_file_starts_with_0xEF_but[0x54];
        local_c8[0x55] = '\0';
        uStack_c0 = 0x55;
        local_78._Ptr = local_c8;
        (**(code **)(**(longlong **)(this + 0x78) + 8))
                  (*(longlong **)(this + 0x78),*(undefined4 *)(this + 0x9c),
                   *(undefined4 *)(this + 0xa0),&local_c8);
        if (0xf < local_60) {
          uVar23 = local_60 + 1;
          uVar20 = local_78._Ptr;
          if (0xfff < uVar23) {
            uVar23 = local_60 + 0x28;
            uVar20 = *(undefined8 *)(local_78._Ptr + -8);
            if ((char *)0x1f < local_78._Ptr + (-8 - uVar20)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar20,uVar23);
        }
        bVar14 = false;
        goto LAB_14fb6f695;
      }
      NextChar(this);
    }
    local_7c = local_7c & 0xffffff;
    iVar18 = -1;
LAB_14fb6f150:
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            TVar2 = this[0x80];
            if ((0x20 < (byte)TVar2) || ((0x100003a00U >> ((longlong)(char)TVar2 & 0x3fU) & 1) == 0)
               ) break;
            if (TVar2 == (Tokenizer)0xa) {
              *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
              iVar21 = 0;
            }
            else {
              uVar3 = *(uint *)(this + 0xa0);
              if (TVar2 == (Tokenizer)0x9) {
                uVar15 = uVar3 & 0x80000007;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                }
                iVar21 = (uVar3 - uVar15) + 8;
              }
              else {
                iVar21 = uVar3 + 1;
              }
            }
            *(int *)(this + 0xa0) = iVar21;
            iVar21 = *(int *)(this + 0x94);
            iVar16 = iVar21 + 1;
            *(int *)(this + 0x94) = iVar16;
            if (iVar16 < *(int *)(this + 0x90)) {
              this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar21);
            }
            else {
              Refresh(this);
            }
          }
          NVar17 = TryConsumeCommentStart(this);
          pvVar13 = local_b0;
          if (NVar17 != 0) break;
          if ((local_7c._1_1_ != '\0') && (local_7c._2_1_ == '\0')) {
            FUN_14fb6df00(&local_b8);
          }
          local_7c._0_3_ = CONCAT21(0x101,(byte)local_7c);
          ConsumeLineComment(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a0);
        }
        if (NVar17 != 1) break;
        if (local_7c._1_1_ != '\0') {
          if (local_7c._3_1_ == '\0') {
            if (local_b0 !=
                (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                 *)0x0) {
              pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
              if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
                std::
                vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                ::
                _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                          (local_b0,pbVar19,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_a0);
              }
              else {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_a0);
                ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
                *ppbVar1 = *ppbVar1 + 1;
              }
            }
          }
          else {
            if (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            {
              uVar20 = &local_a0;
              if (0xf < uStack_88) {
                uVar20 = local_a0._Ptr;
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                        (local_b8,(char *)uVar20,(ulong64)local_90);
            }
            local_7c = 1;
          }
          uVar20 = &local_a0;
          if (0xf < uStack_88) {
            uVar20 = local_a0._Ptr;
          }
          local_90 = (char *)0x0;
          *(char *)uVar20 = '\0';
          local_80 = local_80 + 1;
        }
        local_7c._0_3_ = CONCAT21(1,(byte)local_7c);
        ConsumeBlockComment(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_a0);
        while( true ) {
          TVar2 = this[0x80];
          if ((0x20 < (byte)TVar2) || ((0x100003a00U >> ((longlong)(char)TVar2 & 0x3fU) & 1) == 0))
          break;
          if (TVar2 == (Tokenizer)0xa) {
            *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
            iVar21 = 0;
          }
          else {
            uVar3 = *(uint *)(this + 0xa0);
            if (TVar2 == (Tokenizer)0x9) {
              uVar15 = uVar3 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              iVar21 = (uVar3 - uVar15) + 8;
            }
            else {
              iVar21 = uVar3 + 1;
            }
          }
          *(int *)(this + 0xa0) = iVar21;
          iVar21 = *(int *)(this + 0x94);
          iVar16 = iVar21 + 1;
          *(int *)(this + 0x94) = iVar16;
          if (iVar16 < *(int *)(this + 0x90)) {
            this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar21);
          }
          else {
            Refresh(this);
          }
        }
        if (TVar2 == (Tokenizer)0xa) {
          NextChar(this);
        }
      }
      if (NVar17 == 2) break;
      if (NVar17 == 3) {
        if (this[0x80] != (Tokenizer)0xa) {
          bVar14 = Next(this);
          if (bVar14) {
            pTVar22 = this + 8;
            lVar6 = *(longlong *)(this + 0x18);
            uVar7 = *(ulonglong *)(this + 0x20);
            _Buf1 = pTVar22;
            if (0xf < uVar7) {
              _Buf1 = *(Tokenizer **)pTVar22;
            }
            if ((lVar6 == 1) && (iVar21 = memcmp(_Buf1,"}",1), iVar21 == 0)) goto LAB_14fb6f4a3;
            if (0xf < uVar7) {
              pTVar22 = *(Tokenizer **)pTVar22;
            }
            if ((lVar6 == 1) && (iVar21 = memcmp(pTVar22,"]",1), iVar21 == 0)) goto LAB_14fb6f4a3;
            pTVar22 = this + 8;
            if (0xf < uVar7) {
              pTVar22 = *(Tokenizer **)pTVar22;
            }
            if ((lVar6 == 1) && (iVar21 = memcmp(pTVar22,")",1), iVar21 == 0)) goto LAB_14fb6f4a3;
          }
          else {
LAB_14fb6f4a3:
            pvVar13 = local_b0;
            if (local_7c._1_1_ != '\0') {
              if (local_7c._3_1_ == '\0') {
                if (local_b0 !=
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *)0x0) {
                  pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
                  if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
                    std::
                    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                    ::
                    _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                              (local_b0,pbVar19,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_a0);
                  }
                  else {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    basic_string<char,std::char_traits<char>,std::allocator<char>_>
                              (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)&local_a0);
                    ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
                    *ppbVar1 = *ppbVar1 + 1;
                  }
                }
              }
              else {
                if (local_b8 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  uVar20 = &local_a0;
                  if (0xf < uStack_88) {
                    uVar20 = local_a0._Ptr;
                  }
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            (local_b8,(char *)uVar20,(ulong64)local_90);
                }
                local_7c = CONCAT31(local_7c._1_3_,1);
                local_7c = local_7c & 0xffffff;
              }
              uVar20 = &local_a0;
              if (0xf < uStack_88) {
                uVar20 = local_a0._Ptr;
              }
              local_90 = (char *)0x0;
              *(char *)uVar20 = '\0';
              local_7c._0_2_ = (ushort)(byte)local_7c;
              local_80 = local_80 + 1;
            }
            if (!bVar14) goto LAB_14fb6f695;
          }
          if ((iVar18 == *(int *)(this + 0x9c)) || (iVar24 == *(int *)(this + 0x9c))) {
            iVar18 = local_80;
            if (local_7c._1_1_ != '\0') {
              iVar18 = local_80 + 1;
            }
            if (iVar18 == 1) {
              if (((byte)local_7c != '\0') &&
                 (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0
                 )) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_78,local_b8);
                if (local_b0 !=
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *)0x0) {
                  local_d8 = &local_78;
                  std::
                  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  ::insert(local_b0,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_c8,(__uint64)(local_b0->_Mypair)._Myval2._Myfirst,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &DAT_00000001);
                }
                pbVar19 = local_b8;
                if (0xf < (local_b8->_Mypair)._Myval2._Myres) {
                  pbVar19 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (local_b8->_Mypair)._Myval2._Bx._Ptr;
                }
                (local_b8->_Mypair)._Myval2._Mysize = 0;
                (pbVar19->_Mypair)._Myval2._Bx._Buf[0] = '\0';
                if (0xf < local_60) {
                  uVar23 = local_60 + 1;
                  uVar20 = local_78._Ptr;
                  if (0xfff < uVar23) {
                    uVar23 = local_60 + 0x28;
                    uVar20 = *(undefined8 *)(local_78._Ptr + -8);
                    if ((char *)0x1f < local_78._Ptr + (-8 - uVar20)) {
                    /* WARNING: Subroutine does not return */
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  ::operator_delete((void *)uVar20,uVar23);
                }
              }
              pvVar13 = local_b0;
              if (local_7c._1_1_ != '\0') {
                if (local_7c._3_1_ == '\0') {
                  if (local_b0 !=
                      (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                       *)0x0) {
                    pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
                    if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
                      std::
                      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                      ::
                      _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                                (local_b0,pbVar19,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_a0);
                    }
                    else {
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)&local_a0);
                      ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
                      *ppbVar1 = *ppbVar1 + 1;
                    }
                  }
                }
                else {
                  if (local_b8 !=
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    uVar20 = &local_a0;
                    if (0xf < uStack_88) {
                      uVar20 = local_a0._Ptr;
                    }
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                              (local_b8,(char *)uVar20,(ulong64)local_90);
                  }
                  local_7c = CONCAT31(local_7c._1_3_,1);
                  local_7c = local_7c & 0xffffff;
                }
                uVar20 = &local_a0;
                if (0xf < uStack_88) {
                  uVar20 = local_a0._Ptr;
                }
                local_90 = (char *)0x0;
                *(char *)uVar20 = '\0';
                local_7c._0_2_ = (ushort)(byte)local_7c;
                local_80 = local_80 + 1;
              }
            }
          }
          goto LAB_14fb6f695;
        }
        NextChar(this);
        pvVar13 = local_b0;
        if (local_7c._1_1_ != '\0') {
          if (local_7c._3_1_ == '\0') {
            if (local_b0 !=
                (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                 *)0x0) {
              pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
              if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
                std::
                vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                ::
                _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                          (local_b0,pbVar19,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_a0);
              }
              else {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_a0);
                ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
                *ppbVar1 = *ppbVar1 + 1;
              }
            }
          }
          else {
            if (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            {
              uVar20 = &local_a0;
              if (0xf < uStack_88) {
                uVar20 = local_a0._Ptr;
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                        (local_b8,(char *)uVar20,(ulong64)local_90);
            }
            local_7c = CONCAT31(local_7c._1_3_,1);
          }
          uVar20 = &local_a0;
          if (0xf < uStack_88) {
            uVar20 = local_a0._Ptr;
          }
          local_90 = (char *)0x0;
          *(char *)uVar20 = '\0';
          local_7c._0_2_ = (ushort)(byte)local_7c;
          local_80 = local_80 + 1;
        }
        local_7c = local_7c & 0xffffff;
      }
    }
  }
  else {
    FUN_14fb6b970(this);
    NVar17 = TryConsumeCommentStart(this);
    pvVar13 = local_b0;
    if (NVar17 == 0) {
      iVar24 = *(int *)(this + 0x9c);
      if ((local_7c._1_1_ != '\0') && (local_7c._2_1_ == '\0')) {
        if (local_7c._3_1_ == '\0') {
          if (local_b0 !=
              (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               *)0x0) {
            pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
            if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
              std::
              vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ::
              _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                        (local_b0,pbVar19,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_a0);
            }
            else {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_a0);
              ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
              *ppbVar1 = *ppbVar1 + 1;
            }
          }
        }
        else {
          if (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            uVar20 = &local_a0;
            if (0xf < uStack_88) {
              uVar20 = local_a0._Ptr;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (local_b8,(char *)uVar20,(ulong64)local_90);
          }
          local_7c = 1;
        }
        uVar20 = &local_a0;
        if (0xf < uStack_88) {
          uVar20 = local_a0._Ptr;
        }
        local_90 = (char *)0x0;
        *(char *)uVar20 = '\0';
        local_80 = local_80 + 1;
      }
      local_7c._0_3_ = CONCAT21(0x101,(byte)local_7c);
      ConsumeLineComment(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a0);
      if (local_7c._1_1_ != '\0') {
        if (local_7c._3_1_ == '\0') {
LAB_14fb6f0ec:
          pvVar13 = local_b0;
          if (local_b0 !=
              (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               *)0x0) {
            pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
            if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
              std::
              vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ::
              _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                        (local_b0,pbVar19,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_a0);
            }
            else {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_a0);
              ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
              *ppbVar1 = *ppbVar1 + 1;
            }
          }
        }
        else {
          if (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            uVar20 = &local_a0;
            if (0xf < uStack_88) {
              uVar20 = local_a0._Ptr;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (local_b8,(char *)uVar20,(ulong64)local_90);
          }
LAB_14fb6f0e2:
          local_7c = CONCAT31(local_7c._1_3_,1);
          local_7c = local_7c & 0xffffff;
        }
LAB_14fb6f121:
        local_90 = (char *)0x0;
        uVar20 = &local_a0;
        if (0xf < uStack_88) {
          uVar20 = local_a0._Ptr;
        }
        *(char *)uVar20 = '\0';
        local_80 = local_80 + 1;
        local_7c._0_2_ = (ushort)(byte)local_7c;
      }
      goto LAB_14fb6f150;
    }
    if (NVar17 == 1) {
      if (local_7c._1_1_ != '\0') {
        if (local_7c._3_1_ == '\0') {
          if (local_b0 !=
              (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               *)0x0) {
            pbVar19 = (local_b0->_Mypair)._Myval2._Mylast;
            if (pbVar19 == (local_b0->_Mypair)._Myval2._Myend) {
              std::
              vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ::
              _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                        (local_b0,pbVar19,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_a0);
            }
            else {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (pbVar19,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_a0);
              ppbVar1 = &(pvVar13->_Mypair)._Myval2._Mylast;
              *ppbVar1 = *ppbVar1 + 1;
            }
          }
        }
        else {
          if (local_b8 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            uVar20 = &local_a0;
            if (0xf < uStack_88) {
              uVar20 = local_a0._Ptr;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (local_b8,(char *)uVar20,(ulong64)local_90);
          }
          local_7c = 1;
        }
        uVar20 = &local_a0;
        if (0xf < uStack_88) {
          uVar20 = local_a0._Ptr;
        }
        local_90 = (char *)0x0;
        *(char *)uVar20 = '\0';
        local_80 = local_80 + 1;
      }
      local_7c._0_3_ = CONCAT21(1,(byte)local_7c);
      ConsumeBlockComment(this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_a0);
      iVar24 = *(int *)(this + 0x9c);
      FUN_14fb6b970(this);
      if (local_7c._1_1_ != '\0') {
        if (local_7c._3_1_ == '\0') goto LAB_14fb6f0ec;
        if (local_b8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14fb6f0e2;
        uVar20 = &local_a0;
        if (0xf < uStack_88) {
          uVar20 = local_a0._Ptr;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (local_b8,(char *)uVar20,(ulong64)local_90);
        local_7c = CONCAT31(local_7c._1_3_,1);
        local_7c = local_7c & 0xffffff;
        goto LAB_14fb6f121;
      }
      goto LAB_14fb6f150;
    }
    if (NVar17 != 2) {
      if (NVar17 == 3) {
        if (this[0x80] != (Tokenizer)0xa) {
          bVar14 = Next(this);
          goto LAB_14fb6f695;
        }
        NextChar(this);
      }
      goto LAB_14fb6f150;
    }
  }
  bVar14 = true;
LAB_14fb6f695:
  if (((local_a8 != (_Bxty *)0x0) && (local_7c._1_1_ != '\0')) && (&local_a0 != local_a8)) {
    p_Var8 = (_Bxty *)local_a8->_Ptr;
    uVar20 = *(undefined8 *)((longlong)local_a8 + 8);
    pcVar9 = local_a8[1]._Ptr;
    uVar7 = *(undefined8 *)((longlong)local_a8 + 0x18);
    local_a8->_Ptr = local_a0._Ptr;
    *(undefined8 *)((longlong)local_a8 + 8) = local_a0._8_8_;
    *(char **)(local_a8 + 1) = local_90;
    *(ulonglong *)((longlong)local_a8 + 0x18) = uStack_88;
    local_a0._Ptr = (char *)p_Var8;
    local_a0._8_8_ = uVar20;
    local_90 = pcVar9;
    uStack_88 = uVar7;
  }
  if (0xf < uStack_88) {
    uVar23 = uStack_88 + 1;
    uVar20 = local_a0._Ptr;
    if (0xfff < uVar23) {
      uVar23 = uStack_88 + 0x28;
      uVar20 = *(undefined8 *)(local_a0._Ptr + -8);
      if ((char *)0x1f < local_a0._Ptr + (-8 - uVar20)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar20,uVar23);
  }
  return bVar14;
}

// ParseFloat @ 14fb6f740

/* public: static double __cdecl google::protobuf::io::Tokenizer::ParseFloat(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

double __cdecl
google::protobuf::io::Tokenizer::ParseFloat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  double dVar1;
  char *local_18 [2];
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  dVar1 = NoLocaleStrtod((char *)param_1,local_18);
  return dVar1;
}

// ParseInteger @ 14fb6f7c0

/* public: static bool __cdecl google::protobuf::io::Tokenizer::ParseInteger(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64) */

bool __cdecl
google::protobuf::io::Tokenizer::ParseInteger
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,__uint64 param_2
          ,__uint64 *param_3)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  bVar6 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
  uVar4 = 0x199999999999999a;
  uVar7 = 10;
  if (bVar6 == 0x30) {
    if (((param_1->_Mypair)._Myval2._Bx._Buf[1] + 0xa8U & 0xdf) == 0) {
      bVar6 = (param_1->_Mypair)._Myval2._Bx._Buf[2];
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)&(param_1->_Mypair)._Myval2._Bx + 2);
      uVar4 = 0x1000000000000000;
      uVar7 = 0x10;
      goto LAB_14fb6f844;
    }
    uVar4 = 0x2000000000000000;
    uVar7 = 8;
  }
  else {
LAB_14fb6f844:
    uVar5 = 0;
    if (bVar6 == 0) goto LAB_14fb6f8b7;
  }
  do {
    uVar5 = 0;
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
    cVar1 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar6];
    uVar3 = (ulonglong)cVar1;
    if ((int)uVar7 <= (int)cVar1) goto LAB_14fb6f8bc;
    bVar6 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
    if (cVar1 != '\0') {
      uVar5 = uVar3;
      if (bVar6 != 0) goto LAB_14fb6f880;
      break;
    }
  } while (bVar6 != 0);
LAB_14fb6f8b7:
  if (param_2 < uVar5) {
LAB_14fb6f8bc:
    bVar2 = false;
  }
  else {
    *param_3 = uVar5;
    bVar2 = true;
  }
  return bVar2;
  while( true ) {
    bVar6 = (param_1->_Mypair)._Myval2._Bx._Buf[1];
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
    uVar3 = uVar5;
    if (bVar6 == 0) break;
LAB_14fb6f880:
    cVar1 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[bVar6];
    if ((((cVar1 < '\0') || ((int)uVar7 <= (int)cVar1)) || (uVar4 <= uVar3)) ||
       (uVar5 = uVar3 * uVar7 + (longlong)cVar1, uVar5 < uVar7)) goto LAB_14fb6f8bc;
  }
  goto LAB_14fb6f8b7;
}

// ParseStringAppend @ 14fb6f8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl google::protobuf::io::Tokenizer::ParseStringAppend(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64) */

void __cdecl
google::protobuf::io::Tokenizer::ParseStringAppend
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> bVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  ulong64 uVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar13 = (param_1->_Mypair)._Myval2._Mysize;
  if (uVar13 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x10);
    local_98 = param_1;
    if (*(ulonglong *)(param_2 + 0x18) < lVar3 + uVar13) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2,uVar13,
                 local_a8);
      *(longlong *)(param_2 + 0x10) = lVar3;
    }
    pbVar2 = local_98;
    if (0xf < (local_98->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (local_98->_Mypair)._Myval2._Bx._Ptr;
    }
    local_a0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((pbVar2->_Mypair)._Myval2._Bx._Buf + 1);
    bVar11 = *local_a0;
    while (bVar11 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     0x0) {
      pbVar12 = local_a0 + 1;
      if (bVar11 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                    0x5c) {
        bVar1 = *pbVar12;
        iVar4 = (int)(char)bVar1;
        if (bVar1 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     0x0) goto LAB_14fb6fd8d;
        if ((byte)((char)bVar1 - 0x30U) < 8) {
          bVar11 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    ("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" + (byte)bVar1);
          bVar1 = local_a0[2];
          if ((byte)((char)bVar1 - 0x30U) < 8) {
            bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     ("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(byte)bVar1] +
                     (char)bVar11 * '\b');
            pbVar12 = local_a0 + 2;
          }
          bVar1 = pbVar12[1];
          local_a0 = pbVar12;
          if ((byte)((char)bVar1 - 0x30U) < 8) {
            bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     ("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(byte)bVar1] +
                     (char)bVar11 * '\b');
            local_a0 = pbVar12 + 1;
          }
          uVar6 = *(ulonglong *)(param_2 + 0x10);
          uVar8 = *(ulonglong *)(param_2 + 0x18);
          if (uVar8 <= uVar6) goto LAB_14fb6fdd7;
LAB_14fb6fa1b:
          *(ulonglong *)(param_2 + 0x10) = uVar6 + 1;
          pbVar12 = param_2;
          if (0xf < uVar8) {
            pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        **)param_2;
          }
          pbVar12[uVar6] = bVar11;
          pbVar12[uVar6 + 1] =
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
        }
        else {
          if ((iVar4 - 0x58U & 0xdf) != 0) {
            if ((iVar4 - 0x55U & 0xdf) == 0) {
              local_a0 = local_a0 + 2;
              if (bVar1 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            )0x75) {
                lVar3 = 4;
LAB_14fb6faf6:
                uVar7 = 0;
                for (pbVar9 = local_a0; pbVar9 < local_a0 + lVar3; pbVar9 = pbVar9 + 1) {
                  if (*pbVar9 ==
                      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                      0x0) goto LAB_14fb6fcd6;
                  uVar7 = uVar7 * 0x10 +
                          (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(byte)*pbVar9];
                }
                pbVar9 = local_a0 + lVar3;
                if (((uVar7 - 0xd800 < 0x400) &&
                    (*pbVar9 ==
                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     0x5c)) &&
                   (pbVar9[1] ==
                    (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                    0x75)) {
                  iVar4 = 0;
                  for (pbVar10 = pbVar9 + 2; pbVar10 < pbVar9 + 6; pbVar10 = pbVar10 + 1) {
                    if (*pbVar10 ==
                        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         )0x0) goto LAB_14fb6fba6;
                    iVar4 = iVar4 * 0x10 +
                            (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(byte)*pbVar10];
                  }
                  if (iVar4 - 0xdc00U < 0x400) {
                    uVar7 = ((uVar7 - 0xd800) * 0x400 | iVar4 - 0xdc00U) + 0x10000;
                    pbVar9 = pbVar9 + 6;
                  }
                }
LAB_14fb6fba6:
                if (pbVar9 != pbVar12) {
                  local_a0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)((ulonglong)pbVar12 & 0xffffffff00000000);
                  if (uVar7 < 0x80) {
                    uVar13 = 1;
                  }
                  else {
                    if (uVar7 < 0x800) {
                      uVar5 = uVar7 & 0x7c0 | 0x3020;
                      uVar13 = 2;
                    }
                    else {
                      if (uVar7 < 0x10000) {
                        uVar5 = uVar7 & 0xf000 | 0xe0808;
                        uVar13 = 3;
                      }
                      else {
                        if (0x10ffff < uVar7) {
                          local_58 = CONCAT44(uStack_8c,uVar7);
                          local_50 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                                     Dispatch<unsigned_int>;
                          local_88 = &local_58;
                          uStack_80 = 1;
                          uStack_60 = 1;
                          uStack_5c = 0;
                          local_78 = "\\U%08x";
                          local_70 = 6;
                          local_90 = uVar7;
                          local_68 = local_88;
                          absl::lts_20240722::str_format_internal::AppendPack
                                    (param_2,&local_78,&local_68);
                          local_a0 = pbVar9 + -1;
                          goto LAB_14fb6fde9;
                        }
                        uVar5 = (uVar7 & 0x1c0000 | 0xffc20202) << 2 | uVar7 & 0x3f000;
                        uVar13 = 4;
                      }
                      uVar5 = uVar5 << 2 | uVar7 & 0xfc0;
                    }
                    uVar7 = uVar5 << 2 | uVar7 & 0x3f;
                  }
                  local_a0._0_4_ = uVar7;
                  local_a0._4_4_ = (int)((ulonglong)pbVar12 >> 0x20);
                  uVar7 = ghtonl(uVar7);
                  local_a0 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)CONCAT44(local_a0._4_4_,uVar7);
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             param_2,(char *)((longlong)&local_a0 + (4 - uVar13)),uVar13);
                  local_a0 = pbVar9 + -1;
                  goto LAB_14fb6fde9;
                }
              }
              else if (bVar1 == (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 )0x55) {
                lVar3 = 8;
                goto LAB_14fb6faf6;
              }
LAB_14fb6fcd6:
              bVar11 = *pbVar12;
              uVar6 = *(ulonglong *)(param_2 + 0x10);
              uVar8 = *(ulonglong *)(param_2 + 0x18);
              local_a0 = pbVar12;
              if (uVar8 <= uVar6) goto LAB_14fb6fdd7;
            }
            else {
              switch(iVar4) {
              case 0x22:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x22;
                break;
              default:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x3f;
                break;
              case 0x27:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x27;
                break;
              case 0x5c:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x5c;
                break;
              case 0x61:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x7;
                break;
              case 0x62:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x8;
                break;
              case 0x66:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0xc;
                break;
              case 0x6e:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0xa;
                break;
              case 0x72:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0xd;
                break;
              case 0x74:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0x9;
                break;
              case 0x76:
                bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          )0xb;
              }
              uVar6 = *(ulonglong *)(param_2 + 0x10);
              uVar8 = *(ulonglong *)(param_2 + 0x18);
              if (uVar8 <= uVar6) {
                local_a0 = pbVar12;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           param_2,1,local_a8);
                local_a0 = pbVar12;
                goto LAB_14fb6fde9;
              }
            }
            *(ulonglong *)(param_2 + 0x10) = uVar6 + 1;
            pbVar9 = param_2;
            if (0xf < uVar8) {
              pbVar9 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         **)param_2;
            }
            pbVar9[uVar6] = bVar11;
            pbVar9[uVar6 + 1] =
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
            local_a0 = pbVar12;
            goto LAB_14fb6fde9;
          }
          bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0
          ;
          bVar1 = local_a0[2];
          if ((((byte)((char)bVar1 - 0x30U) < 10) || ((byte)((char)bVar1 + 0x9fU) < 6)) ||
             ((byte)((char)bVar1 + 0xbfU) < 6)) {
            pbVar12 = local_a0 + 2;
            bVar11 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" + (byte)bVar1);
          }
          bVar1 = pbVar12[1];
          if ((((byte)((char)bVar1 - 0x30U) < 10) || ((byte)((char)bVar1 + 0x9fU) < 6)) ||
             (local_a0 = pbVar12, (byte)((char)bVar1 + 0xbfU) < 6)) {
            local_a0 = pbVar12 + 1;
            bVar11 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     ((char)bVar11 * '\x10' +
                     "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[(byte)bVar1]);
          }
          uVar6 = *(ulonglong *)(param_2 + 0x10);
          uVar8 = *(ulonglong *)(param_2 + 0x18);
          if (uVar6 < uVar8) goto LAB_14fb6fa1b;
LAB_14fb6fdd7:
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2,1,
                     local_a8);
        }
      }
      else {
LAB_14fb6fd8d:
        pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (local_98,0);
        if ((bVar11 != *pbVar9) ||
           (*pbVar12 !=
            (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0)) {
          uVar6 = *(ulonglong *)(param_2 + 0x10);
          if (*(ulonglong *)(param_2 + 0x18) <= uVar6) goto LAB_14fb6fdd7;
          *(ulonglong *)(param_2 + 0x10) = uVar6 + 1;
          pbVar12 = param_2;
          if (0xf < *(ulonglong *)(param_2 + 0x18)) {
            pbVar12 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        **)param_2;
          }
          pbVar12[uVar6] = bVar11;
          pbVar12[uVar6 + 1] =
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
        }
      }
LAB_14fb6fde9:
      local_a0 = local_a0 + 1;
      bVar11 = *local_a0;
    }
  }
  return;
}

// RecordTo @ 14fb6ff20

/* private: void __cdecl google::protobuf::io::Tokenizer::RecordTo(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::io::Tokenizer::RecordTo
          (Tokenizer *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) = param_1;
  return;
}

// Refresh @ 14fb6ff40

/* private: void __cdecl google::protobuf::io::Tokenizer::Refresh(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::Refresh(Tokenizer *this)

{
  int iVar1;
  char cVar2;
  Tokenizer *local_res8;
  
  if (this[0x98] != (Tokenizer)0x0) {
    this[0x80] = (Tokenizer)0x0;
    return;
  }
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8) !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    iVar1 = *(int *)(this + 0xb0);
    if (iVar1 < *(int *)(this + 0x90)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8),
                 (char *)((longlong)iVar1 + *(longlong *)(this + 0x88)),
                 (longlong)(*(int *)(this + 0x90) - iVar1));
      *(undefined4 *)(this + 0xb0) = 0;
    }
  }
  local_res8 = (Tokenizer *)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  do {
    cVar2 = (**(code **)(**(longlong **)(this + 0x70) + 8))
                      (*(longlong **)(this + 0x70),&local_res8,this + 0x90);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x90) = 0;
      this[0x98] = (Tokenizer)0x1;
      this[0x80] = (Tokenizer)0x0;
      return;
    }
  } while (*(int *)(this + 0x90) == 0);
  *(Tokenizer **)(this + 0x88) = local_res8;
  this[0x80] = *local_res8;
  return;
}

// SetValue @ 14fb70040

/* public: static union absl::lts_20240722::str_format_internal::FormatArgImpl::Data __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned
   char,2>::SetValue(unsigned char const & __ptr64) */

Data __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_char,2>::SetValue
          (uchar *param_1)

{
  Data DVar1;
  undefined7 uStackX_9;
  
  DVar1._1_7_ = uStackX_9;
  DVar1.buf[0] = *param_1;
  return (Data)DVar1.ptr;
}

// StartToken @ 14fb70060

/* private: void __cdecl google::protobuf::io::Tokenizer::StartToken(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::StartToken(Tokenizer *this)

{
  Tokenizer *pTVar1;
  Tokenizer *pTVar2;
  
  pTVar1 = this + 8;
  *(undefined4 *)this = 0;
  pTVar2 = pTVar1;
  if (0xf < *(ulonglong *)(this + 0x20)) {
    pTVar2 = *(Tokenizer **)pTVar1;
  }
  *(undefined8 *)(this + 0x18) = 0;
  *pTVar2 = (Tokenizer)0x0;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0x94);
  *(Tokenizer **)(this + 0xa8) = pTVar1;
  return;
}

// StopRecording @ 14fb700b0

/* private: void __cdecl google::protobuf::io::Tokenizer::StopRecording(void) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::StopRecording(Tokenizer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb0);
  if (*(int *)(this + 0x94) != iVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0xa8),
               (char *)((longlong)iVar1 + *(longlong *)(this + 0x88)),
               (longlong)(*(int *)(this + 0x94) - iVar1));
  }
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}

// TryConsume @ 14fb701f0

/* private: bool __cdecl google::protobuf::io::Tokenizer::TryConsume(char) __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::TryConsume(Tokenizer *this,char param_1)

{
  if (this[0x80] == (Tokenizer)param_1) {
    NextChar(this);
    return true;
  }
  return false;
}

// TryConsumeCommentStart @ 14fb70220

/* private: enum google::protobuf::io::Tokenizer::NextCommentStatus __cdecl
   google::protobuf::io::Tokenizer::TryConsumeCommentStart(void) __ptr64 */

NextCommentStatus __thiscall
google::protobuf::io::Tokenizer::TryConsumeCommentStart(Tokenizer *this)

{
  if (*(int *)(this + 0xb8) == 0) {
    if (this[0x80] != (Tokenizer)0x2f) {
      return 3;
    }
    NextChar(this);
    if (this[0x80] != (Tokenizer)0x2f) {
      if (this[0x80] != (Tokenizer)0x2a) {
        *(undefined4 *)this = 6;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8),"/"
                   ,1);
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x9c);
        *(int *)(this + 0x30) = *(int *)(this + 0xa0);
        *(int *)(this + 0x2c) = *(int *)(this + 0xa0) + -1;
        return 2;
      }
      NextChar(this);
      return 1;
    }
  }
  else {
    if (*(int *)(this + 0xb8) != 1) {
      return 3;
    }
    if (this[0x80] != (Tokenizer)0x23) {
      return 3;
    }
  }
  NextChar(this);
  return 0;
}

// TryConsumeNewline @ 14fb702e0

/* private: bool __cdecl google::protobuf::io::Tokenizer::TryConsumeNewline(void) __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::TryConsumeNewline(Tokenizer *this)

{
  if (((this[0xbe] != (Tokenizer)0x0) && (this[0xbf] != (Tokenizer)0x0)) &&
     (this[0x80] == (Tokenizer)0xa)) {
    NextChar(this);
    *(undefined4 *)this = 8;
    return true;
  }
  return false;
}

// TryConsumeWhitespace @ 14fb70330

/* private: bool __cdecl google::protobuf::io::Tokenizer::TryConsumeWhitespace(void) __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::TryConsumeWhitespace(Tokenizer *this)

{
  Tokenizer TVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  TVar1 = this[0x80];
  if (this[0xbf] == (Tokenizer)0x0) {
    if ((TVar1 == (Tokenizer)0x20) || ((byte)((char)TVar1 - 9U) < 5)) {
      NextChar(this);
      while ((TVar1 = this[0x80], TVar1 == (Tokenizer)0x20 || ((byte)((char)TVar1 - 9U) < 5))) {
        if (TVar1 == (Tokenizer)0xa) {
          *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
          iVar5 = 0;
        }
        else {
          uVar2 = *(uint *)(this + 0xa0);
          if (TVar1 == (Tokenizer)0x9) {
            uVar3 = uVar2 & 0x80000007;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
            }
            iVar5 = (uVar2 - uVar3) + 8;
          }
          else {
            iVar5 = uVar2 + 1;
          }
        }
        *(int *)(this + 0xa0) = iVar5;
        iVar5 = *(int *)(this + 0x94);
        iVar4 = iVar5 + 1;
        *(int *)(this + 0x94) = iVar4;
        if (iVar4 < *(int *)(this + 0x90)) {
          this[0x80] = *(Tokenizer *)(*(longlong *)(this + 0x88) + 1 + (longlong)iVar5);
        }
        else {
          Refresh(this);
        }
      }
      *(undefined4 *)this = 7;
      return (bool)this[0xbe];
    }
  }
  else if (((byte)TVar1 < 0x21) && ((0x100003a00U >> ((longlong)(char)TVar1 & 0x3fU) & 1) != 0)) {
    NextChar(this);
    FUN_14fb6b970(this);
    *(undefined4 *)this = 7;
    return true;
  }
  return false;
}

// TryParseFloat @ 14fb70450

/* public: static bool __cdecl google::protobuf::io::Tokenizer::TryParseFloat(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,double * __ptr64) */

bool __cdecl
google::protobuf::io::Tokenizer::TryParseFloat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,double *param_2)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  double dVar3;
  char *local_res8;
  
  pbVar2 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  dVar3 = NoLocaleStrtod((char *)pbVar2,&local_res8);
  *param_2 = dVar3;
  pcVar1 = local_res8;
  if ((*local_res8 + 0xbbU & 0xdf) == 0) {
    pcVar1 = local_res8 + 1;
    if ((*pcVar1 - 0x2bU & 0xfd) == 0) {
      pcVar1 = local_res8 + 2;
    }
  }
  if ((*pcVar1 + 0xbaU & 0xdf) == 0) {
    pcVar1 = pcVar1 + 1;
  }
  if (((longlong)pcVar1 - (longlong)pbVar2 == (param_1->_Mypair)._Myval2._Mysize) &&
     ((pbVar2->_Mypair)._Myval2._Bx._Buf[0] != '-')) {
    return true;
  }
  return false;
}

// _Check_offset_exclusive @ 14fb70520

/* public: void __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Check_offset_exclusive(unsigned __int64)const __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<char>_>::_Check_offset_exclusive
          (_String_val<std::_Simple_types<char>_> *this,__uint64 param_1)

{
  if (param_1 < this->_Mysize) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// _Get_value @ 14fb70540

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::_Alloc_temporary2<class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >::_Get_value(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::
_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::_Get_value(_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
             *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8);
}

// _Get_value @ 14fb70550

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl std::_Alloc_temporary2<class std::allocator<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   >::_Get_value(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::
_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::_Get_value(_Alloc_temporary2<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
             *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 8);
}

// at @ 14fb70560

/* public: char const & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::at(unsigned __int64)const __ptr64 */

char * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::at
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1)

{
  if (param_1 < (this->_Mypair)._Myval2._Mysize) {
    if (0xf < (this->_Mypair)._Myval2._Myres) {
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
    }
    return (char *)((longlong)&(this->_Mypair)._Myval2._Bx + param_1);
  }
                    /* WARNING: Subroutine does not return */
  _String_val<std::_Simple_types<char>_>::_Xran();
}

// insert @ 14fb70590

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > > __cdecl
   std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > >::insert(class std::_Vector_const_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > > >,unsigned __int64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::insert(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
         *this,_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
               param_1,__uint64 param_2,
        basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  void *pvVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  longlong lVar6;
  ulong64 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  _Bxty *p_Var11;
  _Bxty *p_Var12;
  ulonglong uVar13;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar14;
  longlong lVar15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar16;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar17;
  bool bVar18;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_stack_00000028;
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_50;
  ulonglong local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_40;
  
  pbVar5 = (this->_Mypair)._Myval2._Myfirst;
  p_Var12 = (_Bxty *)(this->_Mypair)._Myval2._Mylast;
  lVar15 = (longlong)(param_2 - (longlong)pbVar5) >> 5;
  pbVar17 = (this->_Mypair)._Myval2._Myend;
  if (param_3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000001) {
    bVar18 = (_Bxty *)param_2 == p_Var12;
  }
  else {
    bVar18 = false;
    if (param_3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14fb70971;
  }
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
      ((longlong)pbVar17 - (longlong)p_Var12 >> 5) < param_3) {
    lVar6 = (longlong)p_Var12 - (longlong)pbVar5 >> 5;
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
        (0x7ffffffffffffffU - lVar6) < param_3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    local_48 = (longlong)&(param_3->_Mypair)._Myval2._Bx + lVar6;
    uVar10 = (longlong)pbVar17 - (longlong)pbVar5 >> 5;
    if (uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) {
      uVar10 = (uVar10 >> 1) + uVar10;
      uVar13 = local_48;
      if (local_48 <= uVar10) {
        uVar13 = uVar10;
      }
      if (uVar13 < 0x800000000000000) {
        uVar7 = uVar13 * 0x20;
        if (uVar7 < 0x1000) {
          if (uVar7 == 0) {
            pbVar17 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          }
          else {
            pbVar17 = ::operator_new(uVar7);
          }
        }
        else {
          if (uVar7 + 0x27 <= uVar7) goto LAB_14fb7099d;
          pvVar4 = ::operator_new(uVar7 + 0x27);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          pbVar17 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    ((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
          pbVar17[-1]._Mypair._Myval2._Myres = (ulong64)pvVar4;
        }
        local_50 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (pbVar17 + lVar15);
        local_40 = pbVar17 + (longlong)&(param_3->_Mypair)._Myval2._Bx + lVar15;
        _Uninitialized_fill_n<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (local_50,(__uint64)param_3,in_stack_00000028,
                   (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                    *)this);
        pbVar16 = pbVar17;
        if (!bVar18) {
          _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                    (pbVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            param_2,pbVar17,
                     (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      *)this);
          pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2;
          pbVar16 = pbVar17 + (longlong)&(param_3->_Mypair)._Myval2._Bx + lVar15;
        }
        _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  (pbVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)p_Var12
                   ,pbVar16,(allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                             *)this);
        _Change_array(this,pbVar17,local_48,uVar13);
        goto LAB_14fb70971;
      }
    }
LAB_14fb7099d:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  if (bVar18) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)p_Var12,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)in_stack_00000028)
    ;
    ppbVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
  }
  else {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)in_stack_00000028)
    ;
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)((longlong)p_Var12 - param_2) >> 5);
    if (pbVar5 < param_3) {
      pbVar5 = _Uninitialized_fill_n<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                         ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)p_Var12->_Buf,(longlong)param_3 - (longlong)pbVar5,
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)local_70._Buf,
                          (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           *)this);
      (this->_Mypair)._Myval2._Mylast = pbVar5;
      pbVar5 = _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2
                          ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           p_Var12,pbVar5,
                          (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           *)this);
      (this->_Mypair)._Myval2._Mylast = pbVar5;
      for (; (_Bxty *)param_2 != p_Var12; param_2 = param_2 + 0x20) {
        if ((_Bxty *)param_2 != &local_70) {
          p_Var11 = &local_70;
          if (0xf < local_58) {
            p_Var11 = (_Bxty *)local_70._Ptr;
          }
          basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2,
                     p_Var11->_Buf,local_60);
        }
      }
    }
    else {
      lVar6 = (longlong)param_3 * 0x20;
      pbVar5 = _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (p_Var12->_Buf + (longlong)param_3 * -0x20),
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)p_Var12
                          ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           p_Var12,(allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                                    *)this);
      (this->_Mypair)._Myval2._Mylast = pbVar5;
      pbVar14 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (p_Var12->_Buf + (longlong)param_3 * -0x20);
      while (pbVar3 = pbVar14,
            (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_2
            != pbVar3) {
        pbVar14 = pbVar3 + -0x20;
        pbVar2 = pbVar14 + lVar6;
        if (pbVar2 != pbVar14) {
          uVar10 = *(ulonglong *)(pbVar14 + lVar6 + 0x18);
          if (0xf < uVar10) {
            pvVar4 = *(void **)pbVar2;
            uVar7 = uVar10 + 1;
            pvVar8 = pvVar4;
            if (0xfff < uVar7) {
              uVar7 = uVar10 + 0x28;
              pvVar8 = *(void **)((longlong)pvVar4 + -8);
              if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete(pvVar8,uVar7);
          }
          *(undefined8 *)(pbVar14 + lVar6 + 0x10) = 0;
          *(undefined8 *)(pbVar14 + lVar6 + 0x18) = 0xf;
          *pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                    0x0;
          uVar9 = *(undefined8 *)(pbVar3 + -0x18);
          *(undefined8 *)pbVar2 = *(undefined8 *)pbVar14;
          *(undefined8 *)(pbVar2 + 8) = uVar9;
          uVar9 = *(undefined8 *)(pbVar3 + -8);
          *(undefined8 *)(pbVar2 + 0x10) = *(undefined8 *)(pbVar3 + -0x10);
          *(undefined8 *)(pbVar2 + 0x18) = uVar9;
          *(undefined8 *)(pbVar3 + -0x10) = 0;
          *(undefined8 *)(pbVar3 + -8) = 0xf;
          *pbVar14 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)
                     0x0;
        }
      }
      for (; param_3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    ((longlong)&param_3[-1]._Mypair._Myval2._Myres + 7)) {
        if ((_Bxty *)param_2 != &local_70) {
          p_Var12 = &local_70;
          if (0xf < local_58) {
            p_Var12 = (_Bxty *)local_70._Ptr;
          }
          basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2,
                     p_Var12->_Buf,local_60);
        }
        param_2 = param_2 + 0x20;
      }
    }
    if (0xf < local_58) {
      uVar7 = local_58 + 1;
      uVar9 = local_70._Ptr;
      if (0xfff < uVar7) {
        uVar7 = local_58 + 0x28;
        uVar9 = *(undefined8 *)(local_70._Ptr + -8);
        if ((char *)0x1f < local_70._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete((void *)uVar9,uVar7);
    }
  }
LAB_14fb70971:
  ((param_1._Ptr)->_Mypair)._Myval2._Bx._Ptr = (char *)((this->_Mypair)._Myval2._Myfirst + lVar15);
  return;
}

// report_newlines @ 14fb709b0

/* public: bool __cdecl google::protobuf::io::Tokenizer::report_newlines(void)const __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::report_newlines(Tokenizer *this)

{
  return (bool)this[0xbf];
}

// report_whitespace @ 14fb709c0

/* public: bool __cdecl google::protobuf::io::Tokenizer::report_whitespace(void)const __ptr64 */

bool __thiscall google::protobuf::io::Tokenizer::report_whitespace(Tokenizer *this)

{
  return (bool)this[0xbe];
}

// set_report_newlines @ 14fb709d0

/* public: void __cdecl google::protobuf::io::Tokenizer::set_report_newlines(bool) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::set_report_newlines(Tokenizer *this,bool param_1)

{
  this[0xbe] = (Tokenizer)((byte)this[0xbe] | param_1);
  this[0xbf] = (Tokenizer)param_1;
  return;
}

// set_report_whitespace @ 14fb709f0

/* public: void __cdecl google::protobuf::io::Tokenizer::set_report_whitespace(bool) __ptr64 */

void __thiscall google::protobuf::io::Tokenizer::set_report_whitespace(Tokenizer *this,bool param_1)

{
  this[0xbf] = (Tokenizer)((byte)this[0xbf] & param_1);
  this[0xbe] = (Tokenizer)param_1;
  return;
}

// FUN_1502abe90 @ 1502abe90

void FUN_1502abe90(undefined8 param_1,longlong param_2)

{
  std::
  _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x20),
             *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_2 + 0x78),
             *(allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
              (param_2 + 0xc0));
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
              (param_2 + 0xc0),
             *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x30),
             *(ulong64 *)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

