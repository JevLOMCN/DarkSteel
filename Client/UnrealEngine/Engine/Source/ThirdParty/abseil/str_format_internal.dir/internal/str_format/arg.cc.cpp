// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 265

// VoidPtr<char_const_,0> @ 1501db340

/* public: __cdecl absl::lts_20240722::str_format_internal::VoidPtr::VoidPtr<char const ,0>(char
   const * __ptr64) __ptr64 */

VoidPtr * __thiscall
absl::lts_20240722::str_format_internal::VoidPtr::VoidPtr<char_const_,0>
          (VoidPtr *this,char *param_1)

{
  this->value = (ulong64)param_1;
  return this;
}

// VoidPtr<wchar_t_const_,0> @ 1501db350

/* public: __cdecl absl::lts_20240722::str_format_internal::VoidPtr::VoidPtr<wchar_t const
   ,0>(wchar_t const * __ptr64) __ptr64 */

VoidPtr * __thiscall
absl::lts_20240722::str_format_internal::VoidPtr::VoidPtr<wchar_t_const_,0>
          (VoidPtr *this,wchar_t *param_1)

{
  this->value = (ulong64)param_1;
  return this;
}

// CompressedTuple<unsigned___int64,std::allocator<char>_><unsigned___int64&___ptr64,std::allocator<char>_const&___ptr64,1> @ 1501db360

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<unsigned __int64,class
   std::allocator<char> >::CompressedTuple<unsigned __int64,class std::allocator<char> ><unsigned
   __int64 & __ptr64,class std::allocator<char> const & __ptr64,1>(unsigned __int64 & __ptr64,class
   std::allocator<char> const & __ptr64) __ptr64 */

CompressedTuple<unsigned___int64,std::allocator<char>_> * __thiscall
absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>::
CompressedTuple<unsigned___int64,std::allocator<char>_><unsigned___int64&___ptr64,std::allocator<char>_const&___ptr64,1>
          (CompressedTuple<unsigned___int64,std::allocator<char>_> *this,__uint64 *param_1,
          allocator<char> *param_2)

{
  *(__uint64 *)this = *param_1;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>,std::integer_sequence<unsigned___int64,0,1>,1><unsigned___int64&___ptr64,std::allocator<char>_const&___ptr64> @ 1501db370

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<unsigned __int64,class
   std::allocator<char> >,struct std::integer_sequence<unsigned
   __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<unsigned __int64,class
   std::allocator<char> >,struct std::integer_sequence<unsigned __int64,0,1>,1><unsigned __int64 &
   __ptr64,class std::allocator<char> const & __ptr64>(struct std::in_place_t,unsigned __int64 &
   __ptr64,class std::allocator<char> const & __ptr64) __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>,std::integer_sequence<unsigned___int64,0,1>,1><unsigned___int64&___ptr64,std::allocator<char>_const&___ptr64>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,__uint64 *param_2,allocator<char> *param_3)

{
  *(__uint64 *)this = *param_2;
  return this;
}

// Storage<std::allocator<char>,1,1><std::allocator<char>_const&___ptr64> @ 1501db380

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<char>,1,1>::Storage<class std::allocator<char>,1,1><class std::allocator<char>
   const & __ptr64>(struct std::in_place_t,class std::allocator<char> const & __ptr64) __ptr64 */

Storage<std::allocator<char>,1,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<std::allocator<char>,1,1>
::Storage<std::allocator<char>,1,1><std::allocator<char>_const&___ptr64>
          (Storage<std::allocator<char>,1,1> *this,in_place_t param_1,allocator<char> *param_2)

{
  return this;
}

// ArgumentToConv<signed_char> @ 1501db390

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<signed char>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<signed_char>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<char> @ 1501db3a0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<char>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<char>(void)

{
  return kNumeric|c|kStar;
}

// ArgumentToConv<unsigned_char> @ 1501db3b0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned char>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned_char>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<short> @ 1501db3c0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<short>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<short>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<unsigned_short> @ 1501db3d0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned short>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned_short>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<int> @ 1501db3e0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<int>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<int>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<unsigned_int> @ 1501db3f0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned int>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned_int>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<long> @ 1501db400

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<long>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<long>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<unsigned_long> @ 1501db410

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned long>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned_long>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<float> @ 1501db420

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<float>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<float>(void)

{
  return v|kFloating;
}

// ArgumentToConv<double> @ 1501db430

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<double>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<double>(void)

{
  return v|kFloating;
}

// ArgumentToConv<long_double> @ 1501db440

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<long double>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<long_double>(void)

{
  return v|kFloating;
}

// ArgumentToConv<char_const*___ptr64> @ 1501db450

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<char const * __ptr64>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<char_const*___ptr64>(void)

{
  return kPointer|kString;
}

// ArgumentToConv<wchar_t_const*___ptr64> @ 1501db460

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<wchar_t const * __ptr64>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<wchar_t_const*___ptr64>(void)

{
  return kPointer|kString;
}

// ArgumentToConv<absl::lts_20240722::str_format_internal::VoidPtr> @ 1501db470

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<struct
   absl::lts_20240722::str_format_internal::VoidPtr>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::
ArgumentToConv<absl::lts_20240722::str_format_internal::VoidPtr>(void)

{
  return kPointer;
}

// ArgumentToConv<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501db480

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::
ArgumentToConv<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>(void)

{
  return v|kString;
}

// ArgumentToConv<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 1501db490

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::
ArgumentToConv<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>(void)

{
  return v|kString;
}

// ArgumentToConv<std::basic_string_view<char,std::char_traits<char>_>_> @ 1501db4a0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class std::basic_string_view<char,struct
   std::char_traits<char> > >(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::
ArgumentToConv<std::basic_string_view<char,std::char_traits<char>_>_>(void)

{
  return v|kString;
}

// ArgumentToConv<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_> @ 1501db4b0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> > >(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::
ArgumentToConv<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_>(void)

{
  return v|kString;
}

// ArgumentToConv<absl::lts_20240722::int128> @ 1501db4c0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class absl::lts_20240722::int128>(void)
    */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<absl::lts_20240722::int128>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<absl::lts_20240722::uint128> @ 1501db4d0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<class absl::lts_20240722::uint128>(void)
    */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<absl::lts_20240722::uint128>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<__int64> @ 1501db4e0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<__int64>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<__int64>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<unsigned___int64> @ 1501db4f0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned __int64>(void) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ArgumentToConv<unsigned___int64>(void)

{
  return v|kNumeric|c|kStar;
}

// ArgumentToConv<bool> @ 1501db500

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ArgumentToConv<bool>(void) */

FormatConversionCharSet __cdecl absl::lts_20240722::str_format_internal::ArgumentToConv<bool>(void)

{
  return v|kNumeric|c|kStar;
}

// ConstructRange<std::allocator<char>,char*___ptr64> @ 1501db510

/* void __cdecl absl::lts_20240722::memory_internal::ConstructRange<class std::allocator<char>,char
   * __ptr64>(class std::allocator<char> & __ptr64,char * __ptr64,char * __ptr64) */

void __cdecl
absl::lts_20240722::memory_internal::ConstructRange<std::allocator<char>,char*___ptr64>
          (allocator<char> *param_1,char *param_2,char *param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *param_2 = '\0';
  }
  return;
}

// FUN_1501db530 @ 1501db530

undefined8 FUN_1501db530(float param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionChar FVar1;
  bool bVar2;
  
  FVar1 = param_2->conv_;
  if (FVar1 == v) {
    param_2->conv_ = g;
  }
  else if (((FVar1 != a) && (FVar1 != e)) && (FVar1 != f)) {
    if (A < FVar1) {
      return 0;
    }
    if ((0xba00U >> (FVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  bVar2 = absl::lts_20240722::str_format_internal::ConvertFloatImpl(param_1,param_2,param_3);
  if (!bVar2) {
    return 0;
  }
  return 1;
}

// FUN_1501db580 @ 1501db580

undefined8 FUN_1501db580(double param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionChar FVar1;
  bool bVar2;
  
  FVar1 = param_2->conv_;
  if (FVar1 == v) {
    param_2->conv_ = g;
  }
  else if (((FVar1 != a) && (FVar1 != e)) && (FVar1 != f)) {
    if (A < FVar1) {
      return 0;
    }
    if ((0xba00U >> (FVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  bVar2 = absl::lts_20240722::str_format_internal::ConvertFloatImpl(param_1,param_2,param_3);
  if (!bVar2) {
    return 0;
  }
  return 1;
}

// FUN_1501db5d0 @ 1501db5d0

undefined8
FUN_1501db5d0(longdouble param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionChar FVar1;
  bool bVar2;
  
  FVar1 = param_2->conv_;
  if (FVar1 == v) {
    param_2->conv_ = g;
  }
  else if (((FVar1 != a) && (FVar1 != e)) && (FVar1 != f)) {
    if (A < FVar1) {
      return 0;
    }
    if ((0xba00U >> (FVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  bVar2 = absl::lts_20240722::str_format_internal::ConvertFloatImpl(param_1,param_2,param_3);
  if (!bVar2) {
    return 0;
  }
  return 1;
}

// ConvertIntArg<signed_char> @ 1501db620

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<signed char>(signed
   char,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<signed_char>
          (char param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  ulonglong uVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar7 = (uint)param_1;
  uVar8 = (ulonglong)uVar7;
  pcVar4 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501db65b::switchdataD_1501db7d4)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar2 = FUN_1501dfc50(uVar8 & 0xff);
      return (bool)uVar2;
    }
    uVar2 = FUN_1501e0430(uVar8 & 0xffff,&local_78,param_3);
    return (bool)uVar2;
  case s:
  case n:
  case p:
    cVar1 = (char)pcVar4;
    param_2->conv_ = param_2->conv_ + cVar1;
    *pcVar4 = *pcVar4 + cVar1;
    *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) + cVar1;
    *pcVar4 = *pcVar4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    goto LAB_1501db743;
  case o:
    local_68 = local_2c;
    do {
      bVar5 = (byte)uVar8;
      local_68 = local_68 + -1;
      bVar6 = bVar5 >> 3;
      uVar8 = (ulonglong)bVar6;
      *local_68 = (bVar5 & 7) + 0x30;
    } while (bVar6 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    uVar7 = (uint)(byte)param_1;
LAB_1501db743:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(uVar7,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    local_2e = *(undefined2 *)
                (
                "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                + (uVar8 & 0xff) * 2);
    local_68 = (char *)&local_2e;
    if ((char)local_2e == '0') {
      local_68 = (char *)((longlong)&local_2e + 1);
    }
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar7 = (uint)uVar8;
      uVar8 = uVar8 >> 4 & 0xf;
      *local_68 = "0123456789ABCDEF"[uVar7 & 0xf];
    } while ((char)uVar8 != '\0');
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar3 = ConvertFloatImpl((double)(int)uVar7,param_2,param_3);
    return bVar3;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar2 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar2 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar2;
}

// ConvertIntArg<char> @ 1501db830

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<char>(char,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<char>
          (char param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  ulonglong uVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar7 = (uint)param_1;
  uVar8 = (ulonglong)uVar7;
  pcVar4 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501db86b::switchdataD_1501db9e4)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar2 = FUN_1501dfc50(uVar8 & 0xff);
      return (bool)uVar2;
    }
    uVar2 = FUN_1501e0430(uVar8 & 0xffff,&local_78,param_3);
    return (bool)uVar2;
  case s:
  case n:
  case p:
    cVar1 = (char)pcVar4;
    param_2->conv_ = param_2->conv_ + cVar1;
    *pcVar4 = *pcVar4 + cVar1;
    *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) + cVar1;
    *pcVar4 = *pcVar4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    goto LAB_1501db953;
  case o:
    local_68 = local_2c;
    do {
      bVar5 = (byte)uVar8;
      local_68 = local_68 + -1;
      bVar6 = bVar5 >> 3;
      uVar8 = (ulonglong)bVar6;
      *local_68 = (bVar5 & 7) + 0x30;
    } while (bVar6 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    uVar7 = (uint)(byte)param_1;
LAB_1501db953:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(uVar7,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    local_2e = *(undefined2 *)
                (
                "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                + (uVar8 & 0xff) * 2);
    local_68 = (char *)&local_2e;
    if ((char)local_2e == '0') {
      local_68 = (char *)((longlong)&local_2e + 1);
    }
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar7 = (uint)uVar8;
      uVar8 = uVar8 >> 4 & 0xf;
      *local_68 = "0123456789ABCDEF"[uVar7 & 0xf];
    } while ((char)uVar8 != '\0');
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar3 = ConvertFloatImpl((double)(int)uVar7,param_2,param_3);
    return bVar3;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar2 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar2 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar2;
}

// ConvertIntArg<unsigned_char> @ 1501dba40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned char>(unsigned
   char,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned_char>
          (uchar param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  ulonglong uVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar8 = (ulonglong)param_1;
  pcVar5 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dba7b::switchdataD_1501dbbe0)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar2 = FUN_1501dfc50(uVar8);
      return (bool)uVar2;
    }
    uVar2 = FUN_1501e0430(uVar8,&local_78,param_3);
    return (bool)uVar2;
  case s:
  case n:
  case p:
    cVar1 = (char)pcVar5;
    param_2->conv_ = param_2->conv_ + cVar1;
    *pcVar5 = *pcVar5 + cVar1;
    *(char *)((longlong)pcVar5 * 2) = *(char *)((longlong)pcVar5 * 2) + cVar1;
    *pcVar5 = *pcVar5 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer((uint)param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar6 = (byte)uVar8;
      local_68 = local_68 + -1;
      bVar7 = bVar6 >> 3;
      uVar8 = (ulonglong)bVar7;
      *local_68 = (bVar6 & 7) + 0x30;
    } while (bVar7 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    local_2e = *(undefined2 *)
                (
                "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                + uVar8 * 2);
    local_68 = (char *)&local_2e;
    if ((char)local_2e == '0') {
      local_68 = (char *)((longlong)&local_2e + 1);
    }
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar4 = (uint)uVar8;
      uVar8 = uVar8 >> 4;
      *local_68 = "0123456789ABCDEF"[uVar4 & 0xf];
    } while ((char)uVar8 != '\0');
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar3 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar3;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar2 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar2 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar2;
}

// ConvertIntArg<short> @ 1501dbc40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<short>(short,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<short>
          (short param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar9 = (uint)param_1;
  uVar10 = (ulonglong)uVar9;
  pcVar5 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dbc7b::switchdataD_1501dbe14)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar3 = FUN_1501dfc50(uVar10 & 0xff);
      return (bool)uVar3;
    }
    uVar3 = FUN_1501e0430(uVar10 & 0xffff,&local_78);
    return (bool)uVar3;
  case s:
  case n:
  case p:
    cVar2 = (char)pcVar5;
    param_2->conv_ = param_2->conv_ + cVar2;
    *pcVar5 = *pcVar5 + cVar2;
    *(char *)((longlong)pcVar5 * 2) = *(char *)((longlong)pcVar5 * 2) + cVar2;
    *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    goto LAB_1501dbd85;
  case o:
    local_68 = local_2c;
    do {
      bVar7 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3 & 0x1fff;
      *local_68 = (bVar7 & 7) + 0x30;
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    uVar9 = (uint)(ushort)param_1;
LAB_1501dbd85:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(uVar9,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    pcVar5 = local_2c;
    do {
      local_68 = pcVar5;
      pcVar5 = local_68 + -2;
      uVar6 = uVar10 & 0xff;
      uVar8 = (ushort)uVar10 >> 8;
      uVar10 = (ulonglong)uVar8;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + uVar6 * 2);
      *(undefined2 *)pcVar5 = uVar1;
    } while (uVar8 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar9 = (uint)uVar10;
      uVar10 = uVar10 >> 4 & 0xfff;
      *local_68 = "0123456789ABCDEF"[uVar9 & 0xf];
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar4 = ConvertFloatImpl((double)(int)uVar9,param_2,param_3);
    return bVar4;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar3 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar3;
}

// ConvertIntArg<unsigned_short> @ 1501dbe70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned short>(unsigned
   short,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned_short>
          (ushort param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  byte bVar8;
  ushort uVar9;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dbeab::switchdataD_1501dc040)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar3 = FUN_1501dfc50(uVar10 & 0xff);
      return (bool)uVar3;
    }
    uVar3 = FUN_1501e0430(uVar10,&local_78);
    return (bool)uVar3;
  case s:
  case n:
  case p:
    cVar2 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer((uint)param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar8 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar8 & 7) + 0x30;
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar7 = uVar10 & 0xff;
      uVar9 = (ushort)uVar10 >> 8;
      uVar10 = (ulonglong)uVar9;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + uVar7 * 2);
      *(undefined2 *)pcVar6 = uVar1;
    } while (uVar9 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar5 = (uint)uVar10;
      uVar10 = uVar10 >> 4;
      *local_68 = "0123456789ABCDEF"[uVar5 & 0xf];
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar4 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar4;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar3 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar3;
}

// ConvertIntArg<int> @ 1501dc0a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<int>(int,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<int>
          (int param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 in_register_0000000c;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)(uint)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dc0da::switchdataD_1501dc25c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar4 = FUN_1501dfc50();
      return (bool)uVar4;
    }
    uVar4 = FUN_1501e0430(CONCAT44(in_register_0000000c,param_1),&local_78);
    return (bool)uVar4;
  case s:
  case n:
  case p:
    cVar3 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    goto LAB_1501dc1e0;
  case o:
    local_68 = local_2c;
    do {
      bVar7 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar7 & 7) + 0x30;
    } while ((int)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
LAB_1501dc1e0:
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + (uVar10 & 0xff) * 2);
      *(undefined2 *)pcVar6 = uVar1;
      uVar2 = uVar10 >> 8;
      uVar10 = uVar10 >> 8;
    } while ((int)uVar2 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      uVar8 = (uint)uVar10;
      local_68 = local_68 + -1;
      uVar9 = uVar8 >> 4;
      uVar10 = (ulonglong)uVar9;
      *local_68 = "0123456789ABCDEF"[uVar8 & 0xf];
    } while (uVar9 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar5 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar5;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar4 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar4 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar4;
}

// ConvertIntArg<unsigned_int> @ 1501dc2b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned int>(unsigned
   int,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned_int>
          (uint param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dc2ea::switchdataD_1501dc46c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar4 = FUN_1501dfc50(uVar10 & 0xff);
      return (bool)uVar4;
    }
    uVar4 = FUN_1501e0430(uVar10 & 0xffff,&local_78);
    return (bool)uVar4;
  case s:
  case n:
  case p:
    cVar3 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar7 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar7 & 7) + 0x30;
    } while ((int)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + (uVar10 & 0xff) * 2);
      *(undefined2 *)pcVar6 = uVar1;
      uVar2 = uVar10 >> 8;
      uVar10 = uVar10 >> 8;
    } while ((int)uVar2 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      uVar8 = (uint)uVar10;
      local_68 = local_68 + -1;
      uVar9 = uVar8 >> 4;
      uVar10 = (ulonglong)uVar9;
      *local_68 = "0123456789ABCDEF"[uVar8 & 0xf];
    } while (uVar9 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar5 = ConvertFloatImpl((double)uVar10,param_2,param_3);
    return bVar5;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar4 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar4 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar4;
}

// ConvertIntArg<long> @ 1501dc4c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<long>(long,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<long>
          (long param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 in_register_0000000c;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)(uint)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dc4fa::switchdataD_1501dc67c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar4 = FUN_1501dfc50();
      return (bool)uVar4;
    }
    uVar4 = FUN_1501e0430(CONCAT44(in_register_0000000c,param_1),&local_78);
    return (bool)uVar4;
  case s:
  case n:
  case p:
    cVar3 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    goto LAB_1501dc600;
  case o:
    local_68 = local_2c;
    do {
      bVar7 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar7 & 7) + 0x30;
    } while ((int)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
LAB_1501dc600:
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + (uVar10 & 0xff) * 2);
      *(undefined2 *)pcVar6 = uVar1;
      uVar2 = uVar10 >> 8;
      uVar10 = uVar10 >> 8;
    } while ((int)uVar2 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      uVar8 = (uint)uVar10;
      local_68 = local_68 + -1;
      uVar9 = uVar8 >> 4;
      uVar10 = (ulonglong)uVar9;
      *local_68 = "0123456789ABCDEF"[uVar8 & 0xf];
    } while (uVar9 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar5 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar5;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar4 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar4 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar4;
}

// ConvertIntArg<unsigned_long> @ 1501dc6d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned long>(unsigned
   long,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned_long>
          (ulong param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dc70a::switchdataD_1501dc88c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar4 = FUN_1501dfc50(uVar10 & 0xff);
      return (bool)uVar4;
    }
    uVar4 = FUN_1501e0430(uVar10 & 0xffff,&local_78);
    return (bool)uVar4;
  case s:
  case n:
  case p:
    cVar3 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar7 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar7 & 7) + 0x30;
    } while ((int)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + (uVar10 & 0xff) * 2);
      *(undefined2 *)pcVar6 = uVar1;
      uVar2 = uVar10 >> 8;
      uVar10 = uVar10 >> 8;
    } while ((int)uVar2 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      uVar8 = (uint)uVar10;
      local_68 = local_68 + -1;
      uVar9 = uVar8 >> 4;
      uVar10 = (ulonglong)uVar9;
      *local_68 = "0123456789ABCDEF"[uVar8 & 0xf];
    } while (uVar9 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar5 = ConvertFloatImpl((double)uVar10,param_2,param_3);
    return bVar5;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar4 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar4 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar4;
}

// ConvertIntArg<absl::lts_20240722::int128> @ 1501dc8e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<class
   absl::lts_20240722::int128>(class absl::lts_20240722::int128,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<absl::lts_20240722::int128>
          (int128 *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  basic_string_view<char,std::char_traits<char>_> local_88;
  char *local_78;
  ulonglong uStack_70;
  char *local_68;
  char *local_60;
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dc91c::switchdataD_1501dcc30)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78 = *(char **)param_2;
    uStack_70 = CONCAT44(uStack_70._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar4 = FUN_1501dfc50((char)param_1->lo_);
      return (bool)uVar4;
    }
    uVar4 = FUN_1501e0430((short)param_1->lo_,&local_78);
    return (bool)uVar4;
  case s:
  case n:
  case p:
    cVar3 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    local_88._Mysize = param_1->hi_;
    uVar7 = 0;
    local_78 = (char *)param_1->lo_;
    local_88._Mydata = local_78;
    if (0x7fffffffffffffff < local_88._Mysize) {
      local_88._Mysize = -local_88._Mysize;
      local_88._Mydata = (char *)-(longlong)local_78;
      uVar7 = 1;
      if (local_78 != (char *)0x0) {
        local_88._Mysize = local_88._Mysize - 1;
      }
    }
    goto LAB_1501dcbb1;
  case o:
    local_78 = (char *)param_1->lo_;
    local_68 = local_2c;
    uStack_70 = param_1->hi_;
    do {
      do {
        local_68 = local_68 + -1;
        *local_68 = ((byte)local_78 & 7) + 0x30;
        local_78 = (char *)(uStack_70 << 0x3d | (ulonglong)local_78 >> 3);
        uStack_70 = uStack_70 >> 3;
      } while (local_78 != (char *)0x0);
    } while (uStack_70 != 0);
    local_60 = local_2c + -(longlong)local_68;
    local_88._Mydata = (char *)0x0;
    local_78 = (char *)0x0;
    local_88._Mysize = 0;
    uStack_70 = 0;
    break;
  case u:
    local_88._Mysize = param_1->hi_;
    uVar7 = 0;
    local_78 = (char *)param_1->lo_;
    local_88._Mydata = local_78;
LAB_1501dcbb1:
    FUN_1501e1070(&local_68,&local_88,uVar7);
    break;
  case x:
    uStack_70 = param_1->hi_;
    local_78 = (char *)param_1->lo_;
    pcVar6 = local_2c;
    do {
      do {
        local_68 = pcVar6;
        pcVar6 = local_68 + -2;
        uVar1 = *(undefined2 *)
                 (
                 "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                 + ((ulonglong)local_78 & 0xff) * 2);
        local_78 = (char *)(uStack_70 << 0x38 | (ulonglong)local_78 >> 8);
        uStack_70 = uStack_70 >> 8;
        *(undefined2 *)pcVar6 = uVar1;
      } while (local_78 != (char *)0x0);
    } while (uStack_70 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    local_88._Mydata = (char *)0x0;
    local_78 = (char *)0x0;
    local_88._Mysize = 0;
    uStack_70 = 0;
    break;
  case X:
    uStack_70 = param_1->hi_;
    local_68 = local_2c;
    local_78 = (char *)param_1->lo_;
    do {
      do {
        local_68 = local_68 + -1;
        *local_68 = "0123456789ABCDEF"[(uint)local_78 & 0xf];
        local_78 = (char *)(uStack_70 << 0x3c | (ulonglong)local_78 >> 4);
        uStack_70 = uStack_70 >> 4;
      } while (local_78 != (char *)0x0);
    } while (uStack_70 != 0);
    local_60 = local_2c + -(longlong)local_68;
    local_88._Mydata = (char *)0x0;
    local_78 = (char *)0x0;
    local_88._Mysize = 0;
    uStack_70 = 0;
    break;
  default:
    dVar2 = int128::operator_double(param_1);
    bVar5 = ConvertFloatImpl(dVar2,param_2,param_3);
    return bVar5;
  }
  if (param_2->flags_ == kBasic) {
    local_88._Mydata = local_68;
    local_88._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_88);
    uVar4 = 1;
  }
  else {
    local_78 = *(char **)param_2;
    uStack_70 = CONCAT44(uStack_70._4_4_,param_2->precision_);
    uVar4 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar4;
}

// ConvertIntArg<absl::lts_20240722::uint128> @ 1501dcc90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<class
   absl::lts_20240722::uint128>(class absl::lts_20240722::uint128,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<absl::lts_20240722::uint128>
          (uint128 *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  uint128 *puVar8;
  ulong64 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint128 local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  uint128 local_b8;
  uint128 local_a8;
  char *local_98;
  ulong64 local_90;
  char local_5e [2];
  undefined2 local_5c [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  pcVar10 = switchD_1501dbc7b::caseD_1.e_magic +
            (&switchD_1501dccd0::switchdataD_1501dd040)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_e8._0_1_ = param_2->conv_;
    local_e8._1_1_ = param_2->flags_;
    local_e8._2_1_ = param_2->length_mod_;
    local_e8._3_1_ = param_2->field_0x3;
    local_e8._4_4_ = param_2->width_;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar6 = FUN_1501dfc50((char)param_1->lo_);
      return (bool)uVar6;
    }
    uVar6 = FUN_1501e0430((short)param_1->lo_,&local_e8);
    return (bool)uVar6;
  case s:
  case n:
  case p:
    cVar5 = (char)pcVar10;
    *(char *)&param_1->lo_ = (char)param_1->lo_ + cVar5;
    *pcVar10 = *pcVar10 + cVar5;
    *(char *)((longlong)pcVar10 * 2) = *(char *)((longlong)pcVar10 * 2) + cVar5;
    *pcVar10 = *pcVar10 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    local_c8._Mydata = (char *)param_1->lo_;
    local_c8._Mysize = param_1->hi_;
    FUN_1501e1070(&local_98,&local_c8,0);
    goto LAB_1501dcf6b;
  case o:
    local_e8 = param_1->lo_;
    uStack_e0 = param_1->hi_;
    local_98 = (char *)local_5c;
    do {
      do {
        local_98 = local_98 + -1;
        *local_98 = ((byte)local_e8 & 7) + 0x30;
        local_e8 = uStack_e0 << 0x3d | local_e8 >> 3;
        uStack_e0 = uStack_e0 >> 3;
      } while (local_e8 != 0);
      local_d8.hi_ = uStack_e0;
    } while (uStack_e0 != 0);
    break;
  case u:
    pcVar10 = (char *)local_5c;
    uVar14 = (int)param_1->lo_;
    uVar15 = *(undefined4 *)((longlong)&param_1->lo_ + 4);
    uVar16 = (int)param_1->hi_;
    uVar17 = *(undefined4 *)((longlong)&param_1->hi_ + 4);
    local_e8 = param_1->lo_;
    uStack_e0 = param_1->hi_;
    while( true ) {
      local_c8._Mydata = &DAT_00000064;
      local_c8._Mysize = 0;
      local_d8.lo_ = CONCAT44(uVar15,uVar14);
      local_d8.hi_ = CONCAT44(uVar17,uVar16);
      pcVar11 = pcVar10 + -2;
      puVar8 = lts_20240722::operator%(&local_b8,&local_d8,(uint128 *)&local_c8);
      numbers_internal::PutTwoDigits((uint)puVar8->lo_,pcVar11);
      local_c8._Mydata = &DAT_00000064;
      local_c8._Mysize = 0;
      local_d8.lo_ = CONCAT44(uVar15,uVar14);
      local_d8.hi_ = CONCAT44(uVar17,uVar16);
      puVar8 = lts_20240722::operator/(&local_a8,&local_d8,(uint128 *)&local_c8);
      uVar9 = puVar8->lo_;
      uVar2 = puVar8->hi_;
      if ((uVar9 == 0) && (uVar2 == 0)) break;
      local_e8._0_4_ = (undefined4)uVar9;
      local_e8._4_4_ = (undefined4)(uVar9 >> 0x20);
      uStack_e0._0_4_ = (undefined4)uVar2;
      uStack_e0._4_4_ = (undefined4)(uVar2 >> 0x20);
      pcVar10 = pcVar11;
      uVar14 = (undefined4)local_e8;
      uVar15 = local_e8._4_4_;
      uVar16 = (undefined4)uStack_e0;
      uVar17 = uStack_e0._4_4_;
      local_e8 = uVar9;
      uStack_e0 = uVar2;
    }
    if (*pcVar11 == '0') {
      pcVar11 = pcVar10 + -1;
    }
    local_90 = (longlong)local_5c - (longlong)pcVar11;
    local_e8 = 0;
    uStack_e0 = 0;
    local_98 = pcVar11;
    goto LAB_1501dcf6b;
  case x:
    local_e8 = param_1->lo_;
    puVar13 = local_5c;
    uVar9 = param_1->hi_;
    do {
      do {
        uStack_e0 = uVar9;
        puVar12 = puVar13;
        puVar13 = puVar12 + -1;
        uVar1 = *(undefined2 *)
                 (
                 "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                 + (local_e8 & 0xff) * 2);
        local_e8 = uStack_e0 << 0x38 | local_e8 >> 8;
        uVar9 = uStack_e0 >> 8;
        *puVar13 = uVar1;
      } while (local_e8 != 0);
    } while (uVar9 != 0);
    local_98 = (char *)(CONCAT71((uint7)(uStack_e0 >> 0x10),(char)uVar1 == '0') + -2 +
                       (longlong)puVar12);
    local_d8.hi_ = 0;
    break;
  case X:
    local_e8 = param_1->lo_;
    uStack_e0 = param_1->hi_;
    local_98 = (char *)local_5c;
    do {
      do {
        local_98 = local_98 + -1;
        *local_98 = "0123456789ABCDEF"[(uint)local_e8 & 0xf];
        local_e8 = uStack_e0 << 0x3c | local_e8 >> 4;
        uStack_e0 = uStack_e0 >> 4;
      } while (local_e8 != 0);
    } while (uStack_e0 != 0);
    local_d8.hi_ = 0;
    break;
  default:
    dVar4 = ldexp((double)param_1->hi_,0x40);
    uVar3 = param_1->lo_;
    if (-1 < (longlong)uVar3) {
      bVar7 = ConvertFloatImpl((double)(longlong)uVar3 + dVar4,param_2,param_3);
      return bVar7;
    }
    bVar7 = ConvertFloatImpl((double)uVar3 + dVar4,param_2,param_3);
    return bVar7;
  }
  local_d8.lo_ = 0;
  local_90 = (longlong)local_5c - (longlong)local_98;
  local_e8 = local_d8.lo_;
  uStack_e0 = local_d8.hi_;
LAB_1501dcf6b:
  if (param_2->flags_ == kBasic) {
    local_c8._Mydata = local_98;
    local_c8._Mysize = local_90;
    FormatSinkImpl::Append(param_3,&local_c8);
    uVar6 = 1;
  }
  else {
    local_e8._0_1_ = param_2->conv_;
    local_e8._1_1_ = param_2->flags_;
    local_e8._2_1_ = param_2->length_mod_;
    local_e8._3_1_ = param_2->field_0x3;
    local_e8._4_4_ = param_2->width_;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,param_2->precision_);
    uVar6 = FUN_1501dfce0(&local_98,&local_e8,param_3);
  }
  return (bool)uVar6;
}

// ConvertIntArg<__int64> @ 1501dd0a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<__int64>(__int64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<__int64>
          (__int64 param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dd0da::switchdataD_1501dd25c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar3 = FUN_1501dfc50();
      return (bool)uVar3;
    }
    uVar3 = FUN_1501e0430((int)local_78._Mydata,&local_78);
    return (bool)uVar3;
  case s:
  case n:
  case p:
    cVar2 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    goto LAB_1501dd1de;
  case o:
    local_68 = local_2c;
    do {
      bVar8 = (byte)param_1;
      local_68 = local_68 + -1;
      param_1 = (ulonglong)param_1 >> 3;
      *local_68 = (bVar8 & 7) + 0x30;
    } while (param_1 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case u:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
LAB_1501dd1de:
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      uVar7 = param_1 & 0xff;
      pcVar6 = local_68 + -2;
      param_1 = (ulonglong)param_1 >> 8;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + uVar7 * 2);
      *(undefined2 *)pcVar6 = uVar1;
    } while (param_1 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar5 = (uint)param_1;
      param_1 = (ulonglong)param_1 >> 4;
      *local_68 = "0123456789ABCDEF"[uVar5 & 0xf];
    } while (param_1 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar4 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar4;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar3 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar3;
}

// ConvertIntArg<unsigned___int64> @ 1501dd2b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned __int64>(unsigned
   __int64,class absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<unsigned___int64>
          (__uint64 param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dd2ea::switchdataD_1501dd47c)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    if (param_2->length_mod_ != l) {
      uVar3 = FUN_1501dfc50();
      return (bool)uVar3;
    }
    uVar3 = FUN_1501e0430((int)local_78._Mydata,&local_78);
    return (bool)uVar3;
  case s:
  case n:
  case p:
    cVar2 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer(param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar8 = (byte)param_1;
      local_68 = local_68 + -1;
      param_1 = param_1 >> 3;
      *local_68 = (bVar8 & 7) + 0x30;
    } while (param_1 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      uVar7 = param_1 & 0xff;
      pcVar6 = local_68 + -2;
      param_1 = param_1 >> 8;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + uVar7 * 2);
      *(undefined2 *)pcVar6 = uVar1;
    } while (param_1 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar5 = (uint)param_1;
      param_1 = param_1 >> 4;
      *local_68 = "0123456789ABCDEF"[uVar5 & 0xf];
    } while (param_1 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    if (-1 < (longlong)param_1) {
      bVar4 = ConvertFloatImpl((double)(longlong)param_1,param_2,param_3);
      return bVar4;
    }
    bVar4 = ConvertFloatImpl((double)param_1,param_2,param_3);
    return bVar4;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar3 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar3;
}

// ConvertIntArg<wchar_t> @ 1501dd4d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertIntArg<wchar_t>(wchar_t,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertIntArg<wchar_t>
          (wchar_t param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  byte bVar8;
  ushort uVar9;
  undefined1 auStack_98 [32];
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  char *local_60;
  char local_58 [42];
  undefined2 local_2e;
  char local_2c [4];
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (ulonglong)(ushort)param_1;
  pcVar6 = switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_1501dd50b::switchdataD_1501dd690)[param_2->conv_];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->conv_) {
  case c:
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501e0430(uVar10,&local_78);
    return (bool)uVar3;
  case s:
  case n:
  case p:
    cVar2 = (char)pcVar6;
    param_2->conv_ = param_2->conv_ + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
    *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + cVar2;
    *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case d:
  case i:
  case u:
  case v:
    local_68 = local_58;
    local_60 = numbers_internal::FastIntToBuffer((uint)(ushort)param_1,local_58);
    local_60 = local_60 + (-0x10 - (longlong)&local_68);
    break;
  case o:
    local_68 = local_2c;
    do {
      bVar8 = (byte)uVar10;
      local_68 = local_68 + -1;
      uVar10 = uVar10 >> 3;
      *local_68 = (bVar8 & 7) + 0x30;
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case x:
    pcVar6 = local_2c;
    do {
      local_68 = pcVar6;
      pcVar6 = local_68 + -2;
      uVar7 = uVar10 & 0xff;
      uVar9 = (ushort)uVar10 >> 8;
      uVar10 = (ulonglong)uVar9;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + uVar7 * 2);
      *(undefined2 *)pcVar6 = uVar1;
    } while (uVar9 != 0);
    local_68 = local_68 + ((ulonglong)((char)uVar1 == '0') - 2);
    local_60 = local_2c + -(longlong)local_68;
    break;
  case X:
    local_68 = local_2c;
    do {
      local_68 = local_68 + -1;
      uVar5 = (uint)uVar10;
      uVar10 = uVar10 >> 4;
      *local_68 = "0123456789ABCDEF"[uVar5 & 0xf];
    } while ((short)uVar10 != 0);
    local_60 = local_2c + -(longlong)local_68;
    break;
  default:
    bVar4 = ConvertFloatImpl((double)(ushort)param_1,param_2,param_3);
    return bVar4;
  }
  if (param_2->flags_ == kBasic) {
    local_78._Mydata = local_68;
    local_78._Mysize = (ulong64)local_60;
    FormatSinkImpl::Append(param_3,&local_78);
    uVar3 = 1;
  }
  else {
    local_78._Mydata = *(char **)param_2;
    local_78._Mysize = CONCAT44(local_78._Mysize._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_68,&local_78,param_3);
  }
  return (bool)uVar3;
}

// Dispatch<signed_char> @ 1501dd6f0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<signed char>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<signed_char>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(int *)param_3 = (int)param_1.buf[0];
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<signed_char>(param_1.buf[0],local_18,param_3);
  return bVar1;
}

// Dispatch<char> @ 1501dd760

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(int *)param_3 = (int)param_1.buf[0];
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x1fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<char>(param_1.buf[0],local_18,param_3);
  return bVar1;
}

// Dispatch<unsigned_char> @ 1501dd7d0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned char>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_char>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(uint *)param_3 = param_1._0_4_ & 0xff;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<unsigned_char>(param_1.buf[0],local_18,param_3);
  return bVar1;
}

// Dispatch<short> @ 1501dd840

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<short>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<short>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(int *)param_3 = (int)param_1._0_2_;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<short>(param_1._0_2_,local_18,param_3);
  return bVar1;
}

// Dispatch<unsigned_short> @ 1501dd8b0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned short>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_short>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(uint *)param_3 = param_1._0_4_ & 0xffff;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<unsigned_short>(param_1._0_2_,local_18,param_3);
  return bVar1;
}

// Dispatch<int> @ 1501dd920

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(int *)param_3 = param_1._0_4_;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<int>(param_1._0_4_,local_18,param_3);
  return bVar1;
}

// Dispatch<unsigned_int> @ 1501dd980

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned int>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_int>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  uint uVar2;
  FormatConversionSpecImpl local_18 [2];
  
  uVar2 = param_1._0_4_;
  if (param_2->conv_ == (v|s)) {
    if (0x7fffffff < uVar2) {
      uVar2 = 0x7fffffff;
    }
    *(uint *)param_3 = uVar2;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<unsigned_int>(uVar2,local_18,param_3);
  return bVar1;
}

// Dispatch<long> @ 1501dd9f0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<long>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<long>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    *(long *)param_3 = param_1._0_4_;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<long>(param_1._0_4_,local_18,param_3);
  return bVar1;
}

// Dispatch<unsigned_long> @ 1501dda50

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned long>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_long>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  uint uVar2;
  FormatConversionSpecImpl local_18 [2];
  
  uVar2 = param_1._0_4_;
  if (param_2->conv_ == (v|s)) {
    if (0x7fffffff < uVar2) {
      uVar2 = 0x7fffffff;
    }
    *(uint *)param_3 = uVar2;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<unsigned_long>(uVar2,local_18,param_3);
  return bVar1;
}

// Dispatch<float> @ 1501ddac0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<float>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<float>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  float local_res8;
  FormatConversionSpecImpl local_18 [2];
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x9fe00U) != 0)) {
    local_18[0].precision_ = param_2->precision_;
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    if (local_18[0].conv_ == v) {
      local_18[0].conv_ = g;
    }
    else if (7 < (byte)(local_18[0].conv_ - f)) {
      return false;
    }
    local_res8 = param_1._0_4_;
    bVar1 = ConvertFloatImpl(local_res8,local_18,param_3);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Dispatch<double> @ 1501ddb40

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<double>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<double>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x9fe00U) != 0)) {
    local_18[0].precision_ = param_2->precision_;
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    if (local_18[0].conv_ == v) {
      local_18[0].conv_ = g;
    }
    else if (7 < (byte)(local_18[0].conv_ - f)) {
      return false;
    }
    bVar1 = ConvertFloatImpl((double)param_1,local_18,param_3);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Dispatch<long_double> @ 1501ddbc0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<long double>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<long_double>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x9fe00U) != 0)) {
    local_18[0].precision_ = param_2->precision_;
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    if (local_18[0].conv_ == v) {
      local_18[0].conv_ = g;
    }
    else if (7 < (byte)(local_18[0].conv_ - f)) {
      return false;
    }
    bVar1 = ConvertFloatImpl((longdouble)param_1,local_18,param_3);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Dispatch<char_const*___ptr64> @ 1501ddc40

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char const * __ptr64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char_const*___ptr64>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  undefined1 uVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x40004U) != 0)) {
    local_18[0].precision_ = param_2->precision_;
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    uVar1 = str_format_internal::FormatConvertImpl(param_1.ptr,local_18,param_3);
    return (bool)uVar1;
  }
  return false;
}

// Dispatch<wchar_t_const*___ptr64> @ 1501ddca0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<wchar_t const * __ptr64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<wchar_t_const*___ptr64>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  undefined1 uVar1;
  void *pvVar2;
  longlong lVar3;
  FormatConversionSpecImpl local_18;
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x40004U) != 0)) {
    local_18.conv_ = param_2->conv_;
    local_18.flags_ = param_2->flags_;
    local_18.length_mod_ = param_2->length_mod_;
    local_18._3_1_ = param_2->field_0x3;
    local_18.width_ = param_2->width_;
    if (local_18.conv_ != p) {
      if (param_1.ptr == (void *)0x0) {
        lVar3 = 0;
      }
      else if (param_2->precision_ < 0) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(short *)((longlong)param_1.ptr + lVar3 * 2) != 0);
      }
      else {
        pvVar2 = __std_find_trivial_2(param_1.ptr,param_1.ptr + (longlong)param_2->precision_ * 2,0)
        ;
        lVar3 = (longlong)pvVar2 - (longlong)param_1 >> 1;
      }
      local_18.conv_ = param_2->conv_;
      local_18.flags_ = param_2->flags_;
      local_18.length_mod_ = param_2->length_mod_;
      local_18._3_1_ = param_2->field_0x3;
      local_18.width_ = param_2->width_;
      local_18.precision_ = param_2->precision_;
      uVar1 = FUN_1501e0060(param_1.ptr,lVar3,&local_18,param_3);
      return (bool)uVar1;
    }
    local_18.precision_ = param_2->precision_;
    uVar1 = str_format_internal::FormatConvertImpl((VoidPtr)param_1,&local_18,param_3);
    return (bool)uVar1;
  }
  return false;
}

// Dispatch<absl::lts_20240722::str_format_internal::VoidPtr> @ 1501ddda0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<struct
   absl::lts_20240722::str_format_internal::VoidPtr>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Dispatch<absl::lts_20240722::str_format_internal::VoidPtr>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  undefined1 uVar1;
  FormatConversionSpecImpl local_18 [2];
  
  if ((param_2->conv_ != (v|s)) && (param_2->conv_ == p)) {
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    local_18[0].precision_ = param_2->precision_;
    uVar1 = str_format_internal::FormatConvertImpl((VoidPtr)param_1,local_18,param_3);
    return (bool)uVar1;
  }
  return false;
}

// Dispatch<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501ddde0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Dispatch<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  ulonglong _Size;
  void *_Dst;
  bool bVar1;
  undefined8 local_28;
  longlong local_20;
  Data local_18;
  ulonglong uStack_10;
  
  if ((param_2->conv_ == (v|s)) || ((1L << (param_2->conv_ + s & 0x3f) & 0x80004U) == 0)) {
    return false;
  }
  local_18 = param_1;
  if (0xf < *(ulonglong *)((longlong)param_1.ptr + 0x18)) {
                    /* WARNING: Load size is inaccurate */
    local_18.ptr = *param_1.ptr;
  }
  _Size = *(ulonglong *)((longlong)param_1.ptr + 0x10);
  local_28._0_1_ = param_2->conv_;
  local_28._1_1_ = param_2->flags_;
  local_28._2_1_ = param_2->length_mod_;
  local_28._3_1_ = param_2->field_0x3;
  local_28._4_4_ = param_2->width_;
  uStack_10 = _Size;
  if (local_28._1_1_ == 0) {
    if (_Size != 0) {
      _Dst = *(void **)((longlong)param_3 + 0x18);
      *(longlong *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + _Size;
      if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)_Dst)) <= _Size) {
        local_20 = (longlong)_Dst + (-0x20 - (longlong)param_3);
        local_28 = (longlong)param_3 + 0x20;
        (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_28);
        *(longlong *)((longlong)param_3 + 0x18) = (longlong)param_3 + 0x20;
        (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_18);
        return true;
      }
      memcpy(_Dst,local_18.ptr,_Size);
      *(longlong *)((longlong)param_3 + 0x18) = *(longlong *)((longlong)param_3 + 0x18) + _Size;
    }
    return true;
  }
  bVar1 = FormatSinkImpl::PutPaddedString
                    (param_3,(basic_string_view<char,std::char_traits<char>_> *)&local_18,
                     local_28._4_4_,param_2->precision_,(bool)(local_28._1_1_ & 1));
  return bVar1;
}

// Dispatch<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 1501ddf10

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   >(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Dispatch<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 local_18;
  int local_10;
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x80004U) != 0)) {
    puVar1 = (undefined8 *)((longlong)param_1.ptr + 0x10);
    if (7 < *(ulonglong *)((longlong)param_1.ptr + 0x18)) {
                    /* WARNING: Load size is inaccurate */
      param_1.ptr = *param_1.ptr;
    }
    local_18._0_1_ = param_2->conv_;
    local_18._1_1_ = param_2->flags_;
    local_18._2_1_ = param_2->length_mod_;
    local_18._3_1_ = param_2->field_0x3;
    local_18._4_4_ = param_2->width_;
    local_10 = param_2->precision_;
    uVar2 = FUN_1501e0060(param_1.ptr,*puVar1,&local_18,param_3);
    return (bool)uVar2;
  }
  return false;
}

// Dispatch<std::basic_string_view<char,std::char_traits<char>_>_> @ 1501ddf80

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   std::basic_string_view<char,struct std::char_traits<char> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  ulonglong _Size;
  void *_Dst;
  void *_Src;
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_38;
  longlong lStack_30;
  basic_string_view<char,std::char_traits<char>_> local_28 [2];
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x80004U) != 0)) {
    local_38._0_1_ = param_2->conv_;
    local_38._1_1_ = param_2->flags_;
    local_38._2_1_ = param_2->length_mod_;
    local_38._3_1_ = param_2->field_0x3;
    local_38._4_4_ = param_2->width_;
    if (local_38._1_1_ != 0) {
      local_28[0]._Mydata = *(char **)param_1.ptr;
      local_28[0]._Mysize = *(ulong64 *)((longlong)param_1.ptr + 8);
      bVar2 = FormatSinkImpl::PutPaddedString
                        (param_3,local_28,local_38._4_4_,param_2->precision_,
                         (bool)(local_38._1_1_ & 1));
      return bVar2;
    }
    _Size = *(ulonglong *)((longlong)param_1.ptr + 8);
                    /* WARNING: Load size is inaccurate */
    _Src = *param_1.ptr;
    uVar1 = *(undefined8 *)((longlong)param_1.ptr + 8);
    if (_Size != 0) {
      _Dst = *(void **)((longlong)param_3 + 0x18);
      *(longlong *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + _Size;
      if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)_Dst)) <= _Size) {
        lStack_30 = (longlong)_Dst + (-0x20 - (longlong)param_3);
        local_38 = (void *)((longlong)param_3 + 0x20);
        (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_38);
        *(longlong *)((longlong)param_3 + 0x18) = (longlong)param_3 + 0x20;
        local_38 = _Src;
        lStack_30 = uVar1;
        (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_38);
        return true;
      }
      memcpy(_Dst,_Src,_Size);
      *(longlong *)((longlong)param_3 + 0x18) = *(longlong *)((longlong)param_3 + 0x18) + _Size;
    }
    return true;
  }
  return false;
}

// Dispatch<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_> @ 1501de0b0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Dispatch<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  int local_10;
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x80004U) != 0)) {
    local_10 = param_2->precision_;
    local_18._0_1_ = param_2->conv_;
    local_18._1_1_ = param_2->flags_;
    local_18._2_1_ = param_2->length_mod_;
    local_18._3_1_ = param_2->field_0x3;
    local_18._4_4_ = param_2->width_;
    uVar1 = FUN_1501e0060(*(undefined8 *)param_1.ptr,*(undefined8 *)((longlong)param_1.ptr + 8),
                          &local_18,param_3);
    return (bool)uVar1;
  }
  return false;
}

// Dispatch<absl::lts_20240722::int128> @ 1501de120

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   absl::lts_20240722::int128>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<absl::lts_20240722::int128>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_28;
  int128 local_18;
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) != 0)) {
    local_28.conv_ = param_2->conv_;
    local_28.flags_ = param_2->flags_;
    local_28.length_mod_ = param_2->length_mod_;
    local_28._3_1_ = param_2->field_0x3;
    local_28.width_ = param_2->width_;
    local_28.precision_ = param_2->precision_;
    local_18.lo_ = *(ulong64 *)param_1.ptr;
    local_18.hi_ = *(long64 *)((longlong)param_1.ptr + 8);
    bVar1 = ConvertIntArg<absl::lts_20240722::int128>(&local_18,&local_28,param_3);
    return bVar1;
  }
  return false;
}

// Dispatch<absl::lts_20240722::uint128> @ 1501de180

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<class
   absl::lts_20240722::uint128>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<absl::lts_20240722::uint128>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_28;
  uint128 local_18;
  
  if ((param_2->conv_ != (v|s)) && ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) != 0)) {
    local_28.conv_ = param_2->conv_;
    local_28.flags_ = param_2->flags_;
    local_28.length_mod_ = param_2->length_mod_;
    local_28._3_1_ = param_2->field_0x3;
    local_28.width_ = param_2->width_;
    local_28.precision_ = param_2->precision_;
    local_18.lo_ = *(ulong64 *)param_1.ptr;
    local_18.hi_ = *(ulong64 *)((longlong)param_1.ptr + 8);
    bVar1 = ConvertIntArg<absl::lts_20240722::uint128>(&local_18,&local_28,param_3);
    return bVar1;
  }
  return false;
}

// Dispatch<__int64> @ 1501de1e0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<__int64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<__int64>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    uVar2 = 0x7fffffff;
    if (((longlong)param_1.ptr < 0x80000000) &&
       (uVar2 = param_1._0_4_, (longlong)param_1.ptr < -0x80000000)) {
      uVar2 = 0x80000000;
    }
    *(undefined4 *)param_3 = uVar2;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) != 0) {
    local_18[0].precision_ = param_2->precision_;
    local_18[0].conv_ = param_2->conv_;
    local_18[0].flags_ = param_2->flags_;
    local_18[0].length_mod_ = param_2->length_mod_;
    local_18[0]._3_1_ = param_2->field_0x3;
    local_18[0].width_ = param_2->width_;
    bVar1 = ConvertIntArg<__int64>((__int64)param_1,local_18,param_3);
    return bVar1;
  }
  return false;
}

// Dispatch<unsigned___int64> @ 1501de260

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned __int64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  FormatConversionSpecImpl local_18 [2];
  
  if (param_2->conv_ == (v|s)) {
    uVar2 = param_1._0_4_;
    if ((void *)0x7fffffff < param_1.ptr) {
      uVar2 = 0x7fffffff;
    }
    *(undefined4 *)param_3 = uVar2;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  bVar1 = ConvertIntArg<unsigned___int64>((__uint64)param_1,local_18,param_3);
  return bVar1;
}

// Dispatch<bool> @ 1501de2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<bool>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,void * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<bool>
          (Data param_1,FormatConversionSpecImpl *param_2,void *param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  char *local_18;
  char *pcStack_10;
  
  if (param_2->conv_ == (v|s)) {
    *(uint *)param_3 = param_1._0_4_ & 0xff;
    return true;
  }
  if ((1L << (param_2->conv_ + s & 0x3f) & 0x9fffbU) == 0) {
    return false;
  }
  local_28[0] = param_2->conv_;
  local_28[1] = param_2->flags_;
  local_28[2] = param_2->length_mod_;
  local_28[3] = param_2->field_0x3;
  local_28._4_4_ = param_2->width_;
  if (local_28[0] != v) {
    uStack_20 = (char *)CONCAT44((int)((ulonglong)uStack_20 >> 0x20),param_2->precision_);
    bVar2 = ConvertIntArg<int>(param_1._0_4_ & 0xff,(FormatConversionSpecImpl *)local_28,param_3);
    return bVar2;
  }
  pcVar1 = *(char **)((longlong)param_3 + 0x18);
  if (param_1.buf[0] != '\0') {
    *(longlong *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + 4;
    local_18 = "true";
    pcStack_10 = (char *)0x4;
    if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)pcVar1)) < 5) {
      uStack_20 = pcVar1 + (-0x20 - (longlong)param_3);
      local_28 = (undefined1  [8])((longlong)param_3 + 0x20);
      (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,local_28);
      *(longlong *)((longlong)param_3 + 0x18) = (longlong)param_3 + 0x20;
      (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_18);
      return true;
    }
    *(undefined4 *)pcVar1 = _s_true;
    *(longlong *)((longlong)param_3 + 0x18) = *(longlong *)((longlong)param_3 + 0x18) + 4;
    return true;
  }
  *(longlong *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + 5;
  local_28 = (undefined1  [8])0x150611ad4;
  uStack_20 = (char *)0x5;
  if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)pcVar1)) < 6) {
    pcStack_10 = pcVar1 + (-0x20 - (longlong)param_3);
    local_18 = (char *)((longlong)param_3 + 0x20);
    (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_18);
    *(char **)((longlong)param_3 + 0x18) = (char *)((longlong)param_3 + 0x20);
    local_18 = (char *)local_28;
    pcStack_10 = uStack_20;
    (**(code **)((longlong)param_3 + 8))(*(undefined8 *)param_3,&local_18);
    return true;
  }
  *(undefined4 *)pcVar1 = s_false._0_4_;
  pcVar1[4] = s_false[4];
  *(longlong *)((longlong)param_3 + 0x18) = *(longlong *)((longlong)param_3 + 0x18) + 5;
  return true;
}

// ExtractCharSet<131067> @ 1501de490

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<131067>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<131067>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<131067>(void)

{
  return kNumeric|c|kStar;
}

// ExtractCharSet<262144> @ 1501de4a0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<262144>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<262144>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<262144>(void)

{
  return kPointer;
}

// ExtractCharSet<262148> @ 1501de4b0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<262148>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<262148>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<262148>(void)

{
  return kPointer|kString;
}

// ExtractCharSet<524292> @ 1501de4c0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<524292>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<524292>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<524292>(void)

{
  return v|kString;
}

// ExtractCharSet<654848> @ 1501de4d0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<654848>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<654848>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<654848>(void)

{
  return v|kFloating;
}

// ExtractCharSet<655355> @ 1501de4e0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::ExtractCharSet<655355>(struct
   absl::lts_20240722::str_format_internal::ArgConvertResult<655355>) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::ExtractCharSet<655355>(void)

{
  return v|kNumeric|c|kStar;
}

// FastIntToBuffer<signed_char> @ 1501de4f0

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<signed char>(signed
   char,char * __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<signed_char>(char param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((int)param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<char> @ 1501de500

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<char>(char,char *
   __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<char>(char param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((int)param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<unsigned_char> @ 1501de510

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned
   char>(unsigned char,char * __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned_char>(uchar param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((uint)param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<short> @ 1501de520

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<short>(short,char *
   __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<short>(short param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((int)param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<unsigned_short> @ 1501de530

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned
   short>(unsigned short,char * __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned_short>(ushort param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((uint)param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<long> @ 1501de540

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<long>(long,char *
   __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<long>(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer(param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<unsigned_long> @ 1501de550

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned
   long>(unsigned long,char * __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<unsigned_long>(ulong param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer(param_1,param_2);
  return pcVar1;
}

// FastIntToBuffer<wchar_t> @ 1501de560

/* char * __ptr64 __cdecl
   absl::lts_20240722::numbers_internal::FastIntToBuffer<wchar_t>(wchar_t,char * __ptr64) */

char * __cdecl
absl::lts_20240722::numbers_internal::FastIntToBuffer<wchar_t>(wchar_t param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = FastIntToBuffer((uint)(ushort)param_1,param_2);
  return pcVar1;
}

// FormatConvertImpl<bool,0> @ 1501de570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl<bool,0>(bool,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl<bool,0>
          (bool param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  FormatSinkImpl *local_18;
  char *pcStack_10;
  
  if (param_2->conv_ != v) {
    local_28[0] = param_2->conv_;
    local_28[1] = param_2->flags_;
    local_28[2] = param_2->length_mod_;
    local_28[3] = param_2->field_0x3;
    local_28._4_4_ = param_2->width_;
    uStack_20 = (char *)CONCAT44(uStack_20._4_4_,param_2->precision_);
    bVar2 = ConvertIntArg<int>((uint)param_1,(FormatConversionSpecImpl *)local_28,param_3);
    return bVar2;
  }
  pcVar1 = *(char **)(param_3 + 0x18);
  if (param_1) {
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 4;
    local_18 = (FormatSinkImpl *)&s_true;
    pcStack_10 = (char *)0x4;
    if (param_3 + (0x420 - (longlong)pcVar1) < (FormatSinkImpl *)0x5) {
      uStack_20 = pcVar1 + (-0x20 - (longlong)param_3);
      local_28 = (undefined1  [8])(param_3 + 0x20);
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,local_28);
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
      return true;
    }
    *(undefined4 *)pcVar1 = _s_true;
    *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 4;
    return true;
  }
  *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 5;
  local_28 = (undefined1  [8])0x150611ad4;
  uStack_20 = (char *)0x5;
  if (param_3 + (0x420 - (longlong)pcVar1) < (FormatSinkImpl *)0x6) {
    pcStack_10 = pcVar1 + (-0x20 - (longlong)param_3);
    local_18 = param_3 + 0x20;
    (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
    *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
    local_18 = (FormatSinkImpl *)local_28;
    pcStack_10 = uStack_20;
    (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
    return true;
  }
  *(undefined4 *)pcVar1 = s_false._0_4_;
  pcVar1[4] = s_false[4];
  *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 5;
  return true;
}

// FUN_1501de6f0 @ 1501de6f0

void FUN_1501de6f0(undefined8 *param_1,char param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer((int)param_2,(char *)(param_1 + 2))
  ;
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de730 @ 1501de730

void FUN_1501de730(undefined8 *param_1,char param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer((int)param_2,(char *)(param_1 + 2))
  ;
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de770 @ 1501de770

void FUN_1501de770(undefined8 *param_1,byte param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                     ((uint)param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de7b0 @ 1501de7b0

void FUN_1501de7b0(undefined8 *param_1,short param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer((int)param_2,(char *)(param_1 + 2))
  ;
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de7f0 @ 1501de7f0

void FUN_1501de7f0(undefined8 *param_1,ushort param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                     ((uint)param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de830 @ 1501de830

void FUN_1501de830(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de870 @ 1501de870

void FUN_1501de870(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de8b0 @ 1501de8b0

void FUN_1501de8b0(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de8f0 @ 1501de8f0

void FUN_1501de8f0(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de930 @ 1501de930

void FUN_1501de930(undefined8 *param_1,__int64 param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de970 @ 1501de970

void FUN_1501de970(undefined8 *param_1,__uint64 param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501de9b0 @ 1501de9b0

void FUN_1501de9b0(undefined8 *param_1,ushort param_2)

{
  char *pcVar1;
  
  *param_1 = param_1 + 2;
  pcVar1 = absl::lts_20240722::numbers_internal::FastIntToBuffer
                     ((uint)param_2,(char *)(param_1 + 2));
  param_1[1] = pcVar1 + (-0x10 - (longlong)param_1);
  return;
}

// FUN_1501deb50 @ 1501deb50

void FUN_1501deb50(longlong *param_1,uint128 *param_2)

{
  undefined2 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)((longlong)param_1 + 0x3c);
  do {
    puVar6 = puVar7;
    uVar2 = param_2->hi_;
    puVar7 = puVar6 + -1;
    uVar1 = *(undefined2 *)
             (
             "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
             + (ulonglong)(byte)param_2->lo_ * 2);
    uVar3 = param_2->lo_;
    *puVar7 = uVar1;
    param_2->lo_ = uVar2 << 0x38 | uVar3 >> 8;
    param_2->hi_ = param_2->hi_ >> 8;
    bVar4 = absl::lts_20240722::uint128::operator_bool(param_2);
  } while (bVar4);
  lVar5 = ((ulonglong)((char)uVar1 == '0') - 2) + (longlong)puVar6;
  *param_1 = lVar5;
  param_1[1] = (longlong)param_1 + (0x3c - lVar5);
  return;
}

// FUN_1501ded80 @ 1501ded80

void FUN_1501ded80(undefined8 *param_1,uint128 *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((longlong)param_1 + 0x3c);
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = param_2->hi_;
    *pcVar3 = "0123456789ABCDEF"[(uint)param_2->lo_ & 0xf];
    param_2->lo_ = uVar1 << 0x3c | param_2->lo_ >> 4;
    param_2->hi_ = param_2->hi_ >> 4;
    bVar2 = absl::lts_20240722::uint128::operator_bool(param_2);
  } while (bVar2);
  *param_1 = pcVar3;
  param_1[1] = (longlong)param_1 + (0x3c - (longlong)pcVar3);
  return;
}

// FUN_1501def80 @ 1501def80

void FUN_1501def80(undefined8 *param_1,uint128 *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((longlong)param_1 + 0x3c);
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = param_2->hi_;
    *pcVar3 = ((byte)param_2->lo_ & 7) + 0x30;
    param_2->lo_ = uVar1 << 0x3d | param_2->lo_ >> 3;
    param_2->hi_ = param_2->hi_ >> 3;
    bVar2 = absl::lts_20240722::uint128::operator_bool(param_2);
  } while (bVar2);
  *param_1 = pcVar3;
  param_1[1] = (longlong)param_1 + (0x3c - (longlong)pcVar3);
  return;
}

// ToInt<signed_char> @ 1501df050

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<signed
   char>(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<signed_char>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = (int)param_1.buf[0];
  return true;
}

// ToInt<char> @ 1501df060

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<char>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<char>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = (int)param_1.buf[0];
  return true;
}

// ToInt<unsigned_char> @ 1501df070

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned char>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned_char>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = param_1._0_4_ & 0xff;
  return true;
}

// ToInt<short> @ 1501df080

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<short>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<short>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = (int)param_1._0_2_;
  return true;
}

// ToInt<unsigned_short> @ 1501df090

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned short>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned_short>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = param_1._0_4_ & 0xffff;
  return true;
}

// ToInt<int> @ 1501df0a0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<int>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<int>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = param_1._0_4_;
  return true;
}

// ToInt<unsigned_int> @ 1501df0b0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned int>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned_int>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  uint uVar1;
  
  uVar1 = param_1._0_4_;
  if (0x7fffffff < uVar1) {
    uVar1 = 0x7fffffff;
  }
  *param_2 = uVar1;
  return true;
}

// ToInt<long> @ 1501df0d0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<long>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<long>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = param_1._0_4_;
  return true;
}

// ToInt<unsigned_long> @ 1501df0e0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned long>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned_long>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  uint uVar1;
  
  uVar1 = param_1._0_4_;
  if (0x7fffffff < uVar1) {
    uVar1 = 0x7fffffff;
  }
  *param_2 = uVar1;
  return true;
}

// ToInt<float> @ 1501df100

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<float>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<float>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<double> @ 1501df110

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<double>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<double>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<long_double> @ 1501df120

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<long
   double>(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<long_double>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<char_const*___ptr64> @ 1501df130

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<char
   const * __ptr64>(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int *
   __ptr64,struct std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<char_const*___ptr64>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<wchar_t_const*___ptr64> @ 1501df140

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<wchar_t const * __ptr64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<wchar_t_const*___ptr64>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<absl::lts_20240722::str_format_internal::VoidPtr> @ 1501df150

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<struct
   absl::lts_20240722::str_format_internal::VoidPtr>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
ToInt<absl::lts_20240722::str_format_internal::VoidPtr>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501df160

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
ToInt<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 1501df170

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   >(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
ToInt<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<std::basic_string_view<char,std::char_traits<char>_>_> @ 1501df180

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   std::basic_string_view<char,struct std::char_traits<char> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
ToInt<std::basic_string_view<char,std::char_traits<char>_>_>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_> @ 1501df190

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> > >(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
ToInt<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>_>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<absl::lts_20240722::int128> @ 1501df1a0

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   absl::lts_20240722::int128>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<absl::lts_20240722::int128>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<absl::lts_20240722::uint128> @ 1501df1b0

/* private: static bool __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<class
   absl::lts_20240722::uint128>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,0>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<absl::lts_20240722::uint128>
          (Data param_1,int *param_2,integral_constant<bool,0> param_3,
          integral_constant<bool,0> param_4)

{
  return false;
}

// ToInt<__int64> @ 1501df1c0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<__int64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<__int64>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  int iVar1;
  
  if (0x7fffffff < (longlong)param_1.ptr) {
    *param_2 = 0x7fffffff;
    return true;
  }
  iVar1 = param_1._0_4_;
  if ((longlong)param_1.ptr < -0x80000000) {
    iVar1 = -0x80000000;
  }
  *param_2 = iVar1;
  return true;
}

// ToInt<unsigned___int64> @ 1501df1f0

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned __int64>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<unsigned___int64>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  int iVar1;
  
  iVar1 = param_1._0_4_;
  if ((void *)0x7fffffff < param_1.ptr) {
    iVar1 = 0x7fffffff;
  }
  *param_2 = iVar1;
  return true;
}

// ToInt<bool> @ 1501df210

/* private: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<bool>(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data,int * __ptr64,struct
   std::integral_constant<bool,1>,struct std::integral_constant<bool,0>) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToInt<bool>
          (Data param_1,int *param_2,integral_constant<bool,1> param_3,
          integral_constant<bool,0> param_4)

{
  *param_2 = param_1._0_4_ & 0xff;
  return true;
}

// ToIntVal<signed_char> @ 1501df220

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<signed char>(signed char const &
   __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<signed_char>(char *param_1)

{
  return (int)*param_1;
}

// ToIntVal<char> @ 1501df230

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<char>(char const & __ptr64) */

int __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<char>(char *param_1)

{
  return (int)*param_1;
}

// ToIntVal<unsigned_char> @ 1501df240

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned char>(unsigned char
   const & __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned_char>(uchar *param_1)

{
  return (int)*param_1;
}

// ToIntVal<short> @ 1501df250

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<short>(short const & __ptr64) */

int __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<short>(short *param_1)

{
  return (int)*param_1;
}

// ToIntVal<unsigned_short> @ 1501df260

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned short>(unsigned short
   const & __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned_short>(ushort *param_1)

{
  return (int)*param_1;
}

// ToIntVal<int> @ 1501df270

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<int>(int const & __ptr64) */

int __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<int>(int *param_1)

{
  return *param_1;
}

// ToIntVal<unsigned_int> @ 1501df280

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned int>(unsigned int const
   & __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned_int>(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}

// ToIntVal<long> @ 1501df2a0

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<long>(long const & __ptr64) */

int __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<long>(long *param_1)

{
  return *param_1;
}

// ToIntVal<unsigned_long> @ 1501df2b0

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned long>(unsigned long
   const & __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned_long>(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}

// ToIntVal<__int64> @ 1501df2d0

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<__int64>(__int64 const &
   __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<__int64>(__int64 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (0x7fffffff < lVar1) {
    return 0x7fffffff;
  }
  iVar2 = (int)lVar1;
  if (lVar1 < -0x80000000) {
    iVar2 = -0x80000000;
  }
  return iVar2;
}

// ToIntVal<unsigned___int64> @ 1501df300

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned __int64>(unsigned
   __int64 const & __ptr64) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<unsigned___int64>
          (__uint64 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  if (0x7fffffff < *param_1) {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

// ToIntVal<bool> @ 1501df320

/* private: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<bool>(bool const & __ptr64) */

int __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::ToIntVal<bool>(bool *param_1)

{
  return (int)*param_1;
}

// _Adl_verify_range<wchar_t_const*___ptr64,wchar_t_const*___ptr64> @ 1501df330

/* void __cdecl std::_Adl_verify_range<wchar_t const * __ptr64,wchar_t const * __ptr64>(wchar_t
   const * __ptr64 const & __ptr64,wchar_t const * __ptr64 const & __ptr64) */

void __cdecl
std::_Adl_verify_range<wchar_t_const*___ptr64,wchar_t_const*___ptr64>
          (wchar_t **param_1,wchar_t **param_2)

{
  return;
}

// _Could_compare_equal_to_value_type<wchar_t_const*___ptr64,wchar_t> @ 1501df340

/* bool __cdecl std::_Could_compare_equal_to_value_type<wchar_t const * __ptr64,wchar_t>(wchar_t
   const & __ptr64) */

bool __cdecl
std::_Could_compare_equal_to_value_type<wchar_t_const*___ptr64,wchar_t>(wchar_t *param_1)

{
  return true;
}

// _Find_unchecked<wchar_t_const*___ptr64,wchar_t> @ 1501df350

/* wchar_t const * __ptr64 __cdecl std::_Find_unchecked<wchar_t const * __ptr64,wchar_t>(wchar_t
   const * __ptr64,wchar_t const * __ptr64 const,wchar_t const & __ptr64) */

wchar_t * __cdecl
std::_Find_unchecked<wchar_t_const*___ptr64,wchar_t>
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = __std_find_trivial_2(param_1,param_2,*param_3);
  return pwVar1;
}

// _Get_unwrapped<wchar_t_const*___ptr64&___ptr64> @ 1501df360

/* UNKNOWN __cdecl std::_Get_unwrapped<wchar_t const * __ptr64 & __ptr64>(wchar_t const * __ptr64 &
   __ptr64) */

wchar_t * __cdecl std::_Get_unwrapped<wchar_t_const*___ptr64&___ptr64>(wchar_t **param_1)

{
  return *param_1;
}

// _Get_unwrapped<wchar_t_const*___ptr64_const&___ptr64> @ 1501df370

/* UNKNOWN __cdecl std::_Get_unwrapped<wchar_t const * __ptr64 const & __ptr64>(wchar_t const *
   __ptr64 const & __ptr64) */

wchar_t * __cdecl std::_Get_unwrapped<wchar_t_const*___ptr64_const&___ptr64>(wchar_t **param_1)

{
  return *param_1;
}

// _Seek_wrapped<wchar_t_const*___ptr64,wchar_t_const*___ptr64> @ 1501df380

/* void __cdecl std::_Seek_wrapped<wchar_t const * __ptr64,wchar_t const * __ptr64>(wchar_t const *
   __ptr64 & __ptr64,wchar_t const * __ptr64 && __ptr64) */

void __cdecl
std::_Seek_wrapped<wchar_t_const*___ptr64,wchar_t_const*___ptr64>
          (wchar_t **param_1,wchar_t **param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<wchar_t_const*___ptr64> @ 1501df390

/* UNKNOWN __cdecl std::_To_address<wchar_t const * __ptr64>(wchar_t const * __ptr64 const &
   __ptr64) */

wchar_t * __cdecl std::_To_address<wchar_t_const*___ptr64>(wchar_t **param_1)

{
  return *param_1;
}

// __std_find_trivial<wchar_t_const_,wchar_t> @ 1501df3a0

/* wchar_t const * __ptr64 __cdecl __std_find_trivial<wchar_t const ,wchar_t>(wchar_t const *
   __ptr64,wchar_t const * __ptr64,wchar_t) */

wchar_t * __cdecl
__std_find_trivial<wchar_t_const_,wchar_t>(wchar_t *param_1,wchar_t *param_2,wchar_t param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = __std_find_trivial_2(param_1,param_2,param_3);
  return pwVar1;
}

// destroy<char> @ 1501df3b0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::destroy<char>(class std::allocator<char> & __ptr64,char * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::destroy<char>
          (allocator<char> *param_1,char *param_2)

{
  return;
}

// destroy_at<char> @ 1501df3c0

/* void __cdecl std::destroy_at<char>(char * __ptr64 const) */

void __cdecl std::destroy_at<char>(char *param_1)

{
  return;
}

// find<wchar_t_const*___ptr64,wchar_t> @ 1501df3d0

/* wchar_t const * __ptr64 __cdecl std::find<wchar_t const * __ptr64,wchar_t>(wchar_t const *
   __ptr64,wchar_t const * __ptr64 const,wchar_t const & __ptr64) */

wchar_t * __cdecl
std::find<wchar_t_const*___ptr64,wchar_t>(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = __std_find_trivial_2(param_1,param_2,*param_3);
  return pwVar1;
}

// forward<wchar_t_const*___ptr64> @ 1501df3e0

/* wchar_t const * __ptr64 && __ptr64 __cdecl std::forward<wchar_t const * __ptr64>(wchar_t const *
   __ptr64 & __ptr64) */

wchar_t ** __cdecl std::forward<wchar_t_const*___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// get<1> @ 1501df3f0

/* public: class std::allocator<char> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<unsigned __int64,class
   std::allocator<char> >::get<1>(void) __ptr64&  */

allocator<char> * __thiscall
absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>::
get<1>(CompressedTuple<unsigned___int64,std::allocator<char>_> *this)

{
  return (allocator<char> *)this;
}

// get<0> @ 1501df400

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<unsigned __int64,class
   std::allocator<char> >::get<0>(void)const __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::CompressedTuple<unsigned___int64,std::allocator<char>_>::
get<0>(CompressedTuple<unsigned___int64,std::allocator<char>_> *this)

{
  return (__uint64 *)this;
}

// to_address<wchar_t_const_> @ 1501df410

/* wchar_t const * __ptr64 __cdecl std::to_address<wchar_t const >(wchar_t const * __ptr64 const) */

wchar_t * __cdecl std::to_address<wchar_t_const_>(wchar_t *param_1)

{
  return param_1;
}

// <lambda_1> @ 1501df420

/* public: __cdecl `public: void __cdecl
   absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(unsigned __int64,char)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64,char & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`public:_void___cdecl_absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(unsigned___int64,char)___ptr64'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,FormatSinkImpl *param_1,char *param_2)

{
  *(FormatSinkImpl **)this = param_1;
  *(char **)(this + 8) = param_2;
  return this;
}

// FixedArray<char,-1,std::allocator<char>_> @ 1501df440

/* public: __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::FixedArray<char,-1,class std::allocator<char> >(unsigned __int64,class std::allocator<char>
   const & __ptr64) __ptr64 */

FixedArray<char,_1,std::allocator<char>_> * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::
FixedArray<char,_1,std::allocator<char>_>
          (FixedArray<char,_1,std::allocator<char>_> *this,__uint64 param_1,allocator<char> *param_2
          )

{
  FixedArray<char,_1,std::allocator<char>_> *pFVar1;
  
  *(__uint64 *)(this + 0x100) = param_1;
  pFVar1 = this;
  if (0x100 < param_1) {
    pFVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_1);
  }
  *(FixedArray<char,_1,std::allocator<char>_> **)(this + 0x108) = pFVar1;
  return this;
}

// Storage @ 1501df490

/* public: __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::Storage(unsigned __int64,class std::allocator<char> const & __ptr64) __ptr64 */

Storage * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::Storage
          (Storage *this,__uint64 param_1,allocator<char> *param_2)

{
  void *pvVar1;
  
  *(__uint64 *)(this + 0x100) = param_1;
  if (param_1 < 0x101) {
    *(Storage **)(this + 0x108) = this;
    return this;
  }
  pvVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_1);
  *(void **)(this + 0x108) = pvVar1;
  return this;
}

// ~FixedArray<char,-1,std::allocator<char>_> @ 1501df4e0

/* public: __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::~FixedArray<char,-1,class std::allocator<char> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::
~FixedArray<char,_1,std::allocator<char>_>(FixedArray<char,_1,std::allocator<char>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(this + 0x100);
  pvVar1 = *(void **)(this + 0x108);
  if (uVar3 < 0x101) {
    return;
  }
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
  return;
}

// ~Storage @ 1501df540

/* public: __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::~Storage(void) __ptr64 */

void __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::~Storage(Storage *this)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(this + 0x100);
  if (uVar3 < 0x101) {
    return;
  }
  pvVar1 = *(void **)(this + 0x108);
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
  return;
}

// operator[] @ 1501df5a0

/* public: char & __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::operator[](unsigned __int64) __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::operator[]
          (FixedArray<char,_1,std::allocator<char>_> *this,__uint64 param_1)

{
  return (char *)(*(longlong *)(this + 0x108) + param_1);
}

// operator_char @ 1501df5c0

/* public: __cdecl absl::lts_20240722::int128::operator char(void)const __ptr64 */

char __thiscall absl::lts_20240722::int128::operator_char(int128 *this)

{
  return (char)this->lo_;
}

// operator_double @ 1501df5d0

/* public: __cdecl absl::lts_20240722::int128::operator double(void)const __ptr64 */

double __thiscall absl::lts_20240722::int128::operator_double(int128 *this)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  int128 local_18;
  
  lVar1 = this->hi_;
  if ((lVar1 < 0) &&
     ((this->lo_ != 0 ||
      (local_18.lo_ = this->lo_, local_18.hi_ = lVar1, lVar1 != -0x8000000000000000)))) {
    local_18.lo_ = ~this->lo_ + 1;
    local_18.hi_ = (ulonglong)(this->lo_ == 0) + ~this->hi_;
    dVar3 = operator_double(&local_18);
    return (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar3 = ldexp((double)lVar1,0x40);
  uVar2 = this->lo_;
  if (-1 < (longlong)uVar2) {
    return (double)(longlong)uVar2 + dVar3;
  }
  return (double)uVar2 + dVar3;
}

// operator___int64 @ 1501df6a0

/* public: __cdecl absl::lts_20240722::int128::operator __int64(void)const __ptr64 */

__int64 __thiscall absl::lts_20240722::int128::operator___int64(int128 *this)

{
  return this->lo_;
}

// operator_wchar_t @ 1501df6b0

/* public: __cdecl absl::lts_20240722::int128::operator wchar_t(void)const __ptr64 */

wchar_t __thiscall absl::lts_20240722::int128::operator_wchar_t(int128 *this)

{
  return (wchar_t)this->lo_;
}

// operator_char @ 1501df6c0

/* public: __cdecl absl::lts_20240722::uint128::operator char(void)const __ptr64 */

char __thiscall absl::lts_20240722::uint128::operator_char(uint128 *this)

{
  return (char)this->lo_;
}

// operator_unsigned_int @ 1501df6d0

/* public: __cdecl absl::lts_20240722::uint128::operator unsigned int(void)const __ptr64 */

uint __thiscall absl::lts_20240722::uint128::operator_unsigned_int(uint128 *this)

{
  return (uint)this->lo_;
}

// operator_double @ 1501df6e0

/* public: __cdecl absl::lts_20240722::uint128::operator double(void)const __ptr64 */

double __thiscall absl::lts_20240722::uint128::operator_double(uint128 *this)

{
  ulonglong uVar1;
  double dVar2;
  
  dVar2 = ldexp((double)this->hi_,0x40);
  uVar1 = this->lo_;
  if (-1 < (longlong)uVar1) {
    return (double)(longlong)uVar1 + dVar2;
  }
  return (double)uVar1 + dVar2;
}

// operator_bool @ 1501df760

/* public: __cdecl absl::lts_20240722::uint128::operator bool(void)const __ptr64 */

bool __thiscall absl::lts_20240722::uint128::operator_bool(uint128 *this)

{
  if ((this->lo_ == 0) && (this->hi_ == 0)) {
    return false;
  }
  return true;
}

// operator_wchar_t @ 1501df780

/* public: __cdecl absl::lts_20240722::uint128::operator wchar_t(void)const __ptr64 */

wchar_t __thiscall absl::lts_20240722::uint128::operator_wchar_t(uint128 *this)

{
  return (wchar_t)this->lo_;
}

// operator- @ 1501df790

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::int128) */

int128 * __cdecl absl::lts_20240722::operator-(int128 *__return_storage_ptr__,int128 *param_1)

{
  __return_storage_ptr__->lo_ = ~param_1->lo_ + 1;
  __return_storage_ptr__->hi_ = (ulonglong)(param_1->lo_ == 0) + ~param_1->hi_;
  return __return_storage_ptr__;
}

// operator() @ 1501df7c0

/* public: __cdecl `public: void __cdecl
   absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(unsigned __int64,char)
   __ptr64'::`2'::<lambda_1>::operator()(unsigned __int64)const __ptr64 */

void __thiscall
`public:_void___cdecl_absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(unsigned___int64,char)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,__uint64 param_1)

{
  memset(*(void **)(*(longlong *)this + 0x18),(int)**(char **)(this + 8),param_1);
  *(longlong *)(*(longlong *)this + 0x18) = *(longlong *)(*(longlong *)this + 0x18) + param_1;
  return;
}

// operator/= @ 1501df800

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator/=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator/=(uint128 *this,uint128 *param_1)

{
  ulong64 uVar1;
  uint128 *puVar2;
  uint128 local_38;
  uint128 local_28;
  uint128 local_18;
  
  local_38.lo_ = param_1->lo_;
  local_38.hi_ = param_1->hi_;
  local_28.lo_ = this->lo_;
  local_28.hi_ = this->hi_;
  puVar2 = lts_20240722::operator/(&local_18,&local_28,&local_38);
  uVar1 = puVar2->hi_;
  this->lo_ = puVar2->lo_;
  this->hi_ = uVar1;
  return this;
}

// AnnotateConstruct @ 1501df850

/* public: void __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::NonEmptyInlinedStorage::AnnotateConstruct(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::NonEmptyInlinedStorage::
AnnotateConstruct(NonEmptyInlinedStorage *this,__uint64 param_1)

{
  return;
}

// AnnotateDestruct @ 1501df860

/* public: void __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::NonEmptyInlinedStorage::AnnotateDestruct(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::NonEmptyInlinedStorage::
AnnotateDestruct(NonEmptyInlinedStorage *this,__uint64 param_1)

{
  return;
}

// Append @ 1501df870

/* public: void __cdecl absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
          (FormatSinkImpl *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  FormatSinkImpl *_Size;
  void *_Dst;
  FormatSinkImpl *local_18;
  ulong64 uStack_10;
  
  _Size = (FormatSinkImpl *)param_1->_Mysize;
  if (_Size != (FormatSinkImpl *)0x0) {
    *(FormatSinkImpl **)(this + 0x10) = _Size + *(longlong *)(this + 0x10);
    _Dst = *(void **)(this + 0x18);
    if (this + (0x420 - (longlong)_Dst) <= _Size) {
      uStack_10 = (longlong)_Dst + (-0x20 - (longlong)this);
      local_18 = this + 0x20;
      (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
      local_18 = (FormatSinkImpl *)param_1->_Mydata;
      uStack_10 = param_1->_Mysize;
      *(FormatSinkImpl **)(this + 0x18) = this + 0x20;
      (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
      return;
    }
    memcpy(_Dst,param_1->_Mydata,(size_t)_Size);
    *(FormatSinkImpl **)(this + 0x18) = _Size + *(longlong *)(this + 0x18);
  }
  return;
}

// Append @ 1501df920

/* public: void __cdecl absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(unsigned
   __int64,char) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
          (FormatSinkImpl *this,__uint64 param_1,char param_2)

{
  FormatSinkImpl *_Dst;
  FormatSinkImpl *_Size;
  FormatSinkImpl *_Dst_00;
  FormatSinkImpl *local_28;
  FormatSinkImpl *local_20;
  
  if (param_1 != 0) {
    *(__uint64 *)(this + 0x10) = *(longlong *)(this + 0x10) + param_1;
    _Dst = *(FormatSinkImpl **)(this + 0x18);
    _Dst_00 = _Dst;
    if (this + (0x420 - (longlong)_Dst) < param_1) {
      _Dst_00 = this + 0x20;
      do {
        param_1 = (__uint64)(_Dst + (longlong)(param_1 + (-0x420 - (longlong)this)));
        _Size = this + (0x420 - (longlong)_Dst);
        if (_Size != (FormatSinkImpl *)0x0) {
          memset(_Dst,(int)param_2,(size_t)_Size);
          *(FormatSinkImpl **)(this + 0x18) = _Size + *(longlong *)(this + 0x18);
          _Dst = *(FormatSinkImpl **)(this + 0x18);
        }
        local_20 = _Dst + (-0x20 - (longlong)this);
        local_28 = _Dst_00;
        (**(code **)(this + 8))(*(undefined8 *)this,&local_28);
        *(FormatSinkImpl **)(this + 0x18) = _Dst_00;
        _Dst = _Dst_00;
      } while ((FormatSinkImpl *)0x400 < param_1);
    }
    memset(_Dst_00,(int)param_2,param_1);
    *(FormatSinkImpl **)(this + 0x18) = (FormatSinkImpl *)(param_1 + *(longlong *)(this + 0x18));
  }
  return;
}

// AsValueType @ 1501dfa10

/* private: static char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class
   std::allocator<char> >::AsValueType(char * __ptr64) */

char * __cdecl
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::AsValueType(char *param_1)

{
  return param_1;
}

// Avail @ 1501dfa20

/* private: unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::FormatSinkImpl::Avail(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::Avail(FormatSinkImpl *this)

{
  return (__uint64)(this + (0x420 - *(longlong *)(this + 0x18)));
}

// Contains @ 1501dfae0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* bool __cdecl absl::lts_20240722::str_format_internal::Contains(enum
   absl::lts_20240722::FormatConversionCharSet,enum absl::lts_20240722::FormatConversionChar) */

bool __cdecl
absl::lts_20240722::str_format_internal::Contains
          (FormatConversionCharSet param_1,FormatConversionChar param_2)

{
  return (param_1 >> ((ulonglong)(byte)(param_2 + s) & 0x3f) & 1) != 0;
}

// ConvertBoolArg @ 1501dfb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertBoolArg(bool,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertBoolArg(bool param_1,FormatSinkImpl *param_2)

{
  char *pcVar1;
  FormatSinkImpl *local_28;
  char *pcStack_20;
  FormatSinkImpl *local_18;
  char *pcStack_10;
  
  pcVar1 = *(char **)(param_2 + 0x18);
  if (!param_1) {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 5;
    local_28 = (FormatSinkImpl *)0x150611ad4;
    pcStack_20 = (char *)0x5;
    if (param_2 + (0x420 - (longlong)pcVar1) < (FormatSinkImpl *)0x6) {
      pcStack_10 = pcVar1 + (-0x20 - (longlong)param_2);
      local_18 = param_2 + 0x20;
      (**(code **)(param_2 + 8))(*(undefined8 *)param_2,&local_18);
      *(FormatSinkImpl **)(param_2 + 0x18) = param_2 + 0x20;
      local_18 = local_28;
      pcStack_10 = pcStack_20;
      (**(code **)(param_2 + 8))(*(undefined8 *)param_2,&local_18);
      return true;
    }
    *(undefined4 *)pcVar1 = s_false._0_4_;
    pcVar1[4] = s_false[4];
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 5;
    return true;
  }
  *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 4;
  local_18 = (FormatSinkImpl *)&s_true;
  pcStack_10 = (char *)0x4;
  if (param_2 + (0x420 - (longlong)pcVar1) < (FormatSinkImpl *)0x5) {
    pcStack_20 = pcVar1 + (-0x20 - (longlong)param_2);
    local_28 = param_2 + 0x20;
    (**(code **)(param_2 + 8))(*(undefined8 *)param_2,&local_28);
    *(FormatSinkImpl **)(param_2 + 0x18) = param_2 + 0x20;
    (**(code **)(param_2 + 8))(*(undefined8 *)param_2,&local_18);
    return true;
  }
  *(undefined4 *)pcVar1 = _s_true;
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 4;
  return true;
}

// FUN_1501dfc50 @ 1501dfc50

undefined8 FUN_1501dfc50(char param_1,longlong param_2,FormatSinkImpl *param_3)

{
  __uint64 _Var1;
  __uint64 _Var2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  
  uVar3 = (longlong)*(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) < 0) {
    uVar3 = 0;
  }
  _Var1 = uVar3 - 1;
  if (uVar3 < 2) {
    _Var1 = 0;
  }
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    _Var2 = _Var1;
    _Var1 = 1;
    cVar5 = ' ';
    cVar4 = param_1;
  }
  else {
    cVar4 = ' ';
    _Var2 = 1;
    cVar5 = param_1;
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_3,_Var2,cVar5);
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_3,_Var1,cVar4);
  return 1;
}

// FUN_1501dfce0 @ 1501dfce0

undefined8 FUN_1501dfce0(undefined8 *param_1,ulonglong *param_2,FormatSinkImpl *param_3)

{
  FormatSinkImpl *_Src;
  char cVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  FormatSinkImpl *pFVar5;
  FormatSinkImpl *pFVar6;
  FormatSinkImpl *_Size;
  FormatSinkImpl *pFVar7;
  FormatSinkImpl *pFVar8;
  ulonglong uVar9;
  FormatSinkImpl *pFVar10;
  byte bVar11;
  FormatSinkImpl *pFVar12;
  FormatSinkImpl *_Src_00;
  FormatSinkImpl *_Src_01;
  FormatSinkImpl *local_48;
  FormatSinkImpl *pFStack_40;
  FormatSinkImpl *local_38;
  FormatSinkImpl *pFStack_30;
  
  pFVar12 = (FormatSinkImpl *)0x0;
  pFVar8 = (FormatSinkImpl *)(longlong)*(int *)((longlong)param_2 + 4);
  if (*(int *)((longlong)param_2 + 4) < 0) {
    pFVar8 = pFVar12;
  }
  local_48 = (FormatSinkImpl *)*param_2;
  cVar1 = *(char *)*param_1;
  uVar9 = (ulonglong)(cVar1 < '1');
  _Size = (FormatSinkImpl *)(param_1[1] - uVar9);
  _Src = (FormatSinkImpl *)((char *)*param_1 + uVar9);
  pFVar7 = pFVar8 + -(longlong)_Size;
  if (pFVar8 <= _Size) {
    pFVar7 = pFVar12;
  }
  bVar3 = true;
  pFVar8 = pFVar12;
  _Src_01 = pFVar12;
  if ((char)local_48 == '\x02' || (char)local_48 == '\x03') {
    if (cVar1 == '-') {
      pFVar8 = (FormatSinkImpl *)&DAT_00000001;
      _Src_01 = (FormatSinkImpl *)&s__;
    }
    else if (((ulonglong)local_48 >> 8 & 2) == 0) {
      if (((ulonglong)local_48 >> 8 & 4) != 0) {
        pFVar8 = (FormatSinkImpl *)&DAT_00000001;
        _Src_01 = (FormatSinkImpl *)&s__;
      }
    }
    else {
      pFVar8 = (FormatSinkImpl *)&DAT_00000001;
      _Src_01 = (FormatSinkImpl *)&s__;
    }
  }
  pFStack_40 = (FormatSinkImpl *)CONCAT44((int)((ulonglong)pFStack_40 >> 0x20),(int)param_2[1]);
  pFVar5 = pFVar7 + -(longlong)pFVar8;
  if (pFVar7 <= pFVar8) {
    pFVar5 = pFVar12;
  }
  if ((((ulonglong)local_48 >> 8 & 8) == 0) && ((char)local_48 != '\x11')) {
    bVar3 = false;
  }
  bVar4 = true;
  if ((1 < (byte)((char)local_48 - 6U)) && ((char)local_48 != '\x11')) {
    bVar4 = false;
  }
  pFVar7 = pFVar12;
  _Src_00 = pFVar12;
  if (((bVar3) && (bVar4)) && (_Size != (FormatSinkImpl *)0x0)) {
    _Src_00 = (FormatSinkImpl *)&s_0x;
    pFVar7 = (FormatSinkImpl *)0xffffffffffffffff;
    if ((char)local_48 == '\a') {
      _Src_00 = (FormatSinkImpl *)&s_0X;
    }
    do {
      pFVar7 = pFVar7 + 1;
    } while (_Src_00[(longlong)pFVar7] != (FormatSinkImpl)0x0);
  }
  pFVar6 = pFVar5 + -(longlong)pFVar7;
  if (pFVar5 <= pFVar7) {
    pFVar6 = pFVar12;
  }
  bVar11 = (byte)((uint)(int)param_2[1] >> 0x1f) ^ 1;
  pFVar5 = (FormatSinkImpl *)&DAT_00000001;
  if (bVar11 != 0) {
    pFVar5 = (FormatSinkImpl *)(longlong)(int)param_2[1];
  }
  uVar9 = *param_2;
  if (((((uVar9 & 0x800) != 0) && ((char)*param_2 == '\x04')) &&
      ((_Size == (FormatSinkImpl *)0x0 || (*_Src != (FormatSinkImpl)0x30)))) && (pFVar5 < _Size + 1)
     ) {
    pFVar5 = _Size + 1;
  }
  pFVar10 = pFVar5 + -(longlong)_Size;
  if (pFVar5 <= _Size) {
    pFVar10 = pFVar12;
  }
  pFVar5 = pFVar6 + -(longlong)pFVar10;
  if (pFVar6 <= pFVar10) {
    pFVar5 = pFVar12;
  }
  pFVar6 = pFVar12;
  if ((uVar9 & 0x100) != 0) {
    pFVar6 = pFVar5;
    pFVar5 = pFVar12;
  }
  if ((bVar11 == 0) && ((uVar9 & 0x1000) != 0)) {
    pFVar10 = pFVar10 + (longlong)pFVar5;
    pFVar5 = (FormatSinkImpl *)0x0;
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_3,(__uint64)pFVar5,' ');
  local_38 = _Src_01;
  pFStack_30 = pFVar8;
  if (pFVar8 != (FormatSinkImpl *)0x0) {
    pvVar2 = *(void **)(param_3 + 0x18);
    *(FormatSinkImpl **)(param_3 + 0x10) = pFVar8 + *(longlong *)(param_3 + 0x10);
    if (pFVar8 < param_3 + (0x420 - (longlong)pvVar2)) {
      memcpy(pvVar2,_Src_01,(size_t)pFVar8);
      *(FormatSinkImpl **)(param_3 + 0x18) = pFVar8 + *(longlong *)(param_3 + 0x18);
    }
    else {
      pFStack_40 = (FormatSinkImpl *)((longlong)pvVar2 + (-0x20 - (longlong)param_3));
      local_48 = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_48);
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_38);
    }
  }
  local_48 = _Src_00;
  pFStack_40 = pFVar7;
  if (pFVar7 != (FormatSinkImpl *)0x0) {
    pvVar2 = *(void **)(param_3 + 0x18);
    *(FormatSinkImpl **)(param_3 + 0x10) = pFVar7 + *(longlong *)(param_3 + 0x10);
    if (pFVar7 < param_3 + (0x420 - (longlong)pvVar2)) {
      memcpy(pvVar2,_Src_00,(size_t)pFVar7);
      *(FormatSinkImpl **)(param_3 + 0x18) = pFVar7 + *(longlong *)(param_3 + 0x18);
    }
    else {
      pFStack_30 = (FormatSinkImpl *)((longlong)pvVar2 + (-0x20 - (longlong)param_3));
      local_38 = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_38);
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      local_38 = local_48;
      pFStack_30 = pFStack_40;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_38);
    }
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_3,(__uint64)pFVar10,'0');
  local_48 = _Src;
  pFStack_40 = _Size;
  if (_Size != (FormatSinkImpl *)0x0) {
    pvVar2 = *(void **)(param_3 + 0x18);
    *(FormatSinkImpl **)(param_3 + 0x10) = _Size + *(longlong *)(param_3 + 0x10);
    if (_Size < param_3 + (0x420 - (longlong)pvVar2)) {
      memcpy(pvVar2,_Src,(size_t)_Size);
      *(FormatSinkImpl **)(param_3 + 0x18) = _Size + *(longlong *)(param_3 + 0x18);
    }
    else {
      pFStack_30 = (FormatSinkImpl *)((longlong)pvVar2 + (-0x20 - (longlong)param_3));
      local_38 = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_38);
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      local_38 = local_48;
      pFStack_30 = pFStack_40;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_38);
    }
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_3,(__uint64)pFVar6,' ');
  return 1;
}

// FUN_1501e0060 @ 1501e0060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1501e0060(longlong param_1,FormatSinkImpl *param_2,undefined8 *param_3,
                  FormatSinkImpl *param_4)

{
  char *pcVar1;
  ushort uVar2;
  void *_Dst;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  longlong lVar6;
  byte bVar7;
  __uint64 _Var8;
  FormatSinkImpl *_Size;
  byte *pbVar9;
  FormatSinkImpl *pFVar10;
  byte bVar11;
  undefined1 auStack_188 [32];
  undefined8 local_158;
  FormatSinkImpl *local_150;
  basic_string_view<char,std::char_traits<char>_> local_148;
  char local_138 [256];
  __uint64 local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_38 = (longlong)param_2 * 4;
  if (local_38 < 0x101) {
    pcVar5 = local_138;
  }
  else {
    pcVar5 = std::_Allocate<16,std::_Default_allocate_traits,0>(local_38);
  }
  bVar4 = false;
  bVar11 = 0;
  _Size = (FormatSinkImpl *)0x0;
  pFVar10 = _Size;
  local_30 = pcVar5;
  if (param_2 != (FormatSinkImpl *)0x0) {
    do {
      pbVar9 = (byte *)(pcVar5 + (longlong)_Size);
      uVar2 = *(ushort *)(param_1 + (longlong)pFVar10 * 2);
      bVar7 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar9 = bVar7;
        lVar6 = 1;
      }
      else if (uVar2 < 0x800) {
        *pbVar9 = (byte)(uVar2 >> 6) | 0xc0;
        pbVar9[1] = bVar7 & 0x3f | 0x80;
        lVar6 = 2;
      }
      else if ((uVar2 < 0xd800) || (uVar2 - 0xe000 < 0x2000)) {
        *pbVar9 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar9[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        pbVar9[2] = bVar7 & 0x3f | 0x80;
        lVar6 = 3;
      }
      else if (uVar2 < 0xdc00) {
        bVar4 = true;
        bVar11 = bVar7 & 3;
        bVar7 = ((byte)(uVar2 >> 6) & 0xf) + 1;
        *pbVar9 = bVar7 >> 2 | 0xf0;
        pbVar9[1] = (bVar7 & 3 | 0xf8) << 4 | (byte)(uVar2 >> 2) & 0xf;
        lVar6 = 2;
      }
      else {
        if ((0xdfff < uVar2) || (!bVar4)) {
          bVar4 = false;
          goto LAB_1501e02c1;
        }
        *pbVar9 = (byte)(uVar2 >> 6) & 0xf | (bVar11 | 0xf8) << 4;
        pbVar9[1] = bVar7 & 0x3f | 0x80;
        bVar4 = false;
        bVar11 = 0;
        lVar6 = 2;
      }
      _Size = _Size + lVar6;
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 < param_2);
  }
  pcVar1 = (char *)*param_3;
  bVar11 = (byte)((ulonglong)pcVar1 >> 8);
  local_158 = (FormatSinkImpl *)pcVar1;
  if (bVar11 == 0) {
    if (_Size != (FormatSinkImpl *)0x0) {
      *(FormatSinkImpl **)(param_4 + 0x10) = _Size + *(longlong *)(param_4 + 0x10);
      _Dst = *(void **)(param_4 + 0x18);
      if (param_4 + (0x420 - (longlong)_Dst) <= _Size) {
        local_150 = (FormatSinkImpl *)((longlong)_Dst + (-0x20 - (longlong)param_4));
        local_158 = param_4 + 0x20;
        (**(code **)(param_4 + 8))(*(undefined8 *)param_4,&local_158);
        *(FormatSinkImpl **)(param_4 + 0x18) = param_4 + 0x20;
        local_158 = (FormatSinkImpl *)pcVar5;
        local_150 = _Size;
        (**(code **)(param_4 + 8))(*(undefined8 *)param_4,&local_158);
        bVar4 = true;
        goto LAB_1501e02c1;
      }
      memcpy(_Dst,pcVar5,(size_t)_Size);
      *(FormatSinkImpl **)(param_4 + 0x18) = _Size + *(longlong *)(param_4 + 0x18);
    }
    bVar4 = true;
  }
  else {
    local_158._4_4_ = (int)((ulonglong)pcVar1 >> 0x20);
    iVar3 = local_158._4_4_;
    local_148._Mydata = pcVar5;
    local_148._Mysize = (ulong64)_Size;
    bVar4 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                      (param_4,&local_148,iVar3,*(int *)(param_3 + 1),(bool)(bVar11 & 1));
  }
LAB_1501e02c1:
  if (0x100 < local_38) {
    pcVar5 = local_30;
    _Var8 = local_38;
    if (0xfff < local_38) {
      _Var8 = local_38 + 0x27;
      pcVar5 = *(char **)(local_30 + -8);
      if ((char *)0x1f < local_30 + (-8 - (longlong)pcVar5)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar5,_Var8);
  }
  return bVar4;
}

// FUN_1501e0340 @ 1501e0340

bool FUN_1501e0340(undefined8 *param_1,longlong param_2,FormatSinkImpl *param_3)

{
  FormatSinkImpl *_Size;
  void *_Dst;
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (*(byte *)(param_2 + 1) != 0) {
    local_18._Mydata = (char *)*param_1;
    local_18._Mysize = param_1[1];
    bVar1 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                      (param_3,&local_18,*(int *)(param_2 + 4),*(int *)(param_2 + 8),
                       (bool)(*(byte *)(param_2 + 1) & 1));
    return bVar1;
  }
  _Size = (FormatSinkImpl *)param_1[1];
  if (_Size != (FormatSinkImpl *)0x0) {
    _Dst = *(void **)(param_3 + 0x18);
    *(FormatSinkImpl **)(param_3 + 0x10) = _Size + *(longlong *)(param_3 + 0x10);
    if (param_3 + (0x420 - (longlong)_Dst) <= _Size) {
      local_18._Mysize = (longlong)_Dst + (-0x20 - (longlong)param_3);
      local_18._Mydata = (char *)(param_3 + 0x20);
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
      local_18._Mydata = (char *)*param_1;
      local_18._Mysize = param_1[1];
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
      return true;
    }
    memcpy(_Dst,(void *)*param_1,(size_t)_Size);
    *(FormatSinkImpl **)(param_3 + 0x18) = _Size + *(longlong *)(param_3 + 0x18);
  }
  return true;
}

// FUN_1501e0430 @ 1501e0430

undefined8 FUN_1501e0430(ushort param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  undefined8 local_28;
  undefined4 local_20;
  byte *local_18;
  undefined8 local_10;
  
  bVar2 = (byte)param_1;
  if (param_1 < 0x80) {
    local_10 = 1;
    local_res8 = bVar2;
  }
  else if (param_1 < 0x800) {
    local_10 = 2;
    local_res8 = (byte)(param_1 >> 6) | 0xc0;
    local_res9 = bVar2 & 0x3f | 0x80;
  }
  else {
    if ((0xd7ff < param_1) && (0x1fff < param_1 - 0xe000)) {
      return 0;
    }
    local_10 = 3;
    local_res8 = (byte)(param_1 >> 0xc) | 0xe0;
    local_res9 = (byte)(param_1 >> 6) & 0x3f | 0x80;
    local_resa = bVar2 & 0x3f | 0x80;
  }
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  local_18 = &local_res8;
  cVar1 = FUN_1501e0340(&local_18,&local_28);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}

// DefaultConstructorIsNonTrivial @ 1501e0500

/* private: static bool __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::DefaultConstructorIsNonTrivial(void) */

bool __cdecl
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::DefaultConstructorIsNonTrivial(void)

{
  return false;
}

// Excess @ 1501e0510

/* unsigned __int64 __cdecl absl::lts_20240722::str_format_internal::Excess(unsigned
   __int64,unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::str_format_internal::Excess(__uint64 param_1,__uint64 param_2)

{
  __uint64 _Var1;
  
  _Var1 = param_2 - param_1;
  if (param_2 <= param_1) {
    _Var1 = 0;
  }
  return _Var1;
}

// FlagsContains @ 1501e0530

/* bool __cdecl absl::lts_20240722::str_format_internal::FlagsContains(enum
   absl::lts_20240722::str_format_internal::Flags,enum
   absl::lts_20240722::str_format_internal::Flags) */

bool __cdecl absl::lts_20240722::str_format_internal::FlagsContains(Flags param_1,Flags param_2)

{
  return (param_1 & param_2) == param_2;
}

// Flush @ 1501e0540

/* public: void __cdecl absl::lts_20240722::str_format_internal::FormatSinkImpl::Flush(void) __ptr64
    */

void __thiscall absl::lts_20240722::str_format_internal::FormatSinkImpl::Flush(FormatSinkImpl *this)

{
  FormatSinkImpl *local_18;
  longlong local_10;
  
  local_10 = (*(longlong *)(this + 0x18) - (longlong)this) + -0x20;
  local_18 = this + 0x20;
  (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
  *(FormatSinkImpl **)(this + 0x18) = this + 0x20;
  return;
}

// FormatConversionCharIsFloat @ 1501e0590

/* bool __cdecl absl::lts_20240722::str_format_internal::FormatConversionCharIsFloat(enum
   absl::lts_20240722::FormatConversionChar) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharIsFloat(FormatConversionChar param_1)

{
  if (((param_1 - f & 0xf8) == 0) && (param_1 != G)) {
    return true;
  }
  return param_1 == G;
}

// FormatConversionCharToConvInt @ 1501e05b0

/* unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionCharToConvInt(enum
   absl::lts_20240722::FormatConversionChar) */

__uint64 __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharToConvInt(FormatConversionChar param_1)

{
  return 1L << (param_1 + s & 0x3f);
}

// FormatConvertImpl @ 1501e05d0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<131067> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(char,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (char param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<char>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0600

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<131067> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(wchar_t,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (wchar_t param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<wchar_t>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<262144> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(struct
   absl::lts_20240722::str_format_internal::VoidPtr,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

undefined8 __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (VoidPtr param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  FormatSinkImpl *local_78;
  longlong local_70;
  undefined *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  undefined2 local_1e;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1.value == 0) {
    puVar2 = *(undefined4 **)(param_3 + 0x18);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 5;
    local_68 = &s__nil_;
    uStack_60 = 5;
    if (param_3 + (0x420 - (longlong)puVar2) < (FormatSinkImpl *)0x6) {
      local_70 = (longlong)puVar2 + (-0x20 - (longlong)param_3);
      local_78 = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_78);
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_68);
      uVar3 = 1;
    }
    else {
      *puVar2 = _s__nil_;
      *(undefined1 *)(puVar2 + 1) = DAT_152b12a3c;
      uVar3 = 1;
      *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + 5;
    }
  }
  else {
    puVar6 = local_1c;
    do {
      puVar5 = puVar6;
      uVar4 = param_1.value;
      puVar6 = puVar5 + -1;
      uVar1 = *(undefined2 *)
               (
               "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
               + (uVar4 & 0xff) * 2);
      *puVar6 = uVar1;
      param_1.value = uVar4 >> 8;
    } while (uVar4 >> 8 != 0);
    local_78 = *(FormatSinkImpl **)param_2;
    local_58 = (longlong)puVar5 + CONCAT71((uint7)(uVar4 >> 0x10),(char)uVar1 == '0') + -2;
    local_50 = (longlong)local_1c - local_58;
    local_70 = CONCAT44(local_70._4_4_,param_2->precision_);
    uVar3 = FUN_1501dfce0(&local_58,&local_78,param_3);
  }
  return uVar3;
}

// FormatConvertImpl @ 1501e0780

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<262148> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(std::nullptr_t,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (undefined8 param_1,undefined8 *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0]._0_8_ = *param_2;
  local_18[0].precision_ = *(int *)(param_2 + 1);
  FormatConvertImpl((char *)0x0,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e07b0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<262148> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(char const * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

undefined1 __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (char *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  void *pvVar3;
  FormatSinkImpl *_Size;
  undefined1 local_28 [16];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2->conv_ == p) {
    local_28[0] = param_2->conv_;
    local_28[1] = param_2->flags_;
    local_28[2] = param_2->length_mod_;
    local_28[3] = param_2->field_0x3;
    local_28._4_4_ = param_2->width_;
    local_28._8_4_ = param_2->precision_;
    uVar1 = FormatConvertImpl((VoidPtr)param_1,(FormatConversionSpecImpl *)local_28,param_3);
    return uVar1;
  }
  if (param_1 == (char *)0x0) {
    _Size = (FormatSinkImpl *)0x0;
  }
  else if (param_2->precision_ < 0) {
    _Size = (FormatSinkImpl *)0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (param_1[(longlong)_Size] != '\0');
  }
  else {
    pvVar3 = __std_find_trivial_1(param_1,param_1 + param_2->precision_,'\0');
    _Size = (FormatSinkImpl *)((longlong)pvVar3 - (longlong)param_1);
  }
  local_28[0] = param_2->conv_;
  local_28[1] = param_2->flags_;
  local_28[2] = param_2->length_mod_;
  local_28[3] = param_2->field_0x3;
  local_28._4_4_ = param_2->width_;
  if (local_28[1] == kBasic) {
    if (_Size != (FormatSinkImpl *)0x0) {
      pvVar3 = *(void **)(param_3 + 0x18);
      *(FormatSinkImpl **)(param_3 + 0x10) = _Size + *(longlong *)(param_3 + 0x10);
      if (param_3 + (0x420 - (longlong)pvVar3) <= _Size) {
        local_28._8_8_ = (longlong)pvVar3 + (-0x20 - (longlong)param_3);
        local_28._0_8_ = param_3 + 0x20;
        (**(code **)(param_3 + 8))(*(undefined8 *)param_3,local_28);
        *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
        local_28._0_8_ = param_1;
        local_28._8_8_ = _Size;
        (**(code **)(param_3 + 8))(*(undefined8 *)param_3,local_28);
        return true;
      }
      memcpy(pvVar3,param_1,(size_t)_Size);
      *(FormatSinkImpl **)(param_3 + 0x18) = _Size + *(longlong *)(param_3 + 0x18);
    }
    bVar2 = true;
  }
  else {
    local_18._Mydata = param_1;
    local_18._Mysize = (ulong64)_Size;
    bVar2 = FormatSinkImpl::PutPaddedString
                      (param_3,&local_18,local_28._4_4_,param_2->precision_,
                       (bool)(local_28[1] & kLeft));
  }
  return bVar2;
}

// FormatConvertImpl @ 1501e0910

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<262148> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(wchar_t const * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (wchar_t *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  longlong lVar1;
  void *pvVar2;
  FormatConversionSpecImpl local_18;
  
  if (param_2->conv_ != p) {
    if (param_1 == (wchar_t *)0x0) {
      lVar1 = 0;
    }
    else if (param_2->precision_ < 0) {
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (param_1[lVar1] != L'\0');
    }
    else {
      pvVar2 = __std_find_trivial_2(param_1,param_1 + param_2->precision_,0);
      lVar1 = (longlong)pvVar2 - (longlong)param_1 >> 1;
    }
    local_18.precision_ = param_2->precision_;
    local_18.conv_ = param_2->conv_;
    local_18.flags_ = param_2->flags_;
    local_18.length_mod_ = param_2->length_mod_;
    local_18._3_1_ = param_2->field_0x3;
    local_18.width_ = param_2->width_;
    FUN_1501e0060(param_1,lVar1,&local_18,param_3);
    return;
  }
  local_18.conv_ = param_2->conv_;
  local_18.flags_ = param_2->flags_;
  local_18.length_mod_ = param_2->length_mod_;
  local_18._3_1_ = param_2->field_0x3;
  local_18.width_ = param_2->width_;
  local_18.precision_ = param_2->precision_;
  FormatConvertImpl((VoidPtr)param_1,&local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e09d0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<524292> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatSinkImpl *_Size;
  void *_Dst;
  bool bVar1;
  undefined8 local_28;
  longlong local_20;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = (char *)param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    local_18._Mydata = (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  local_28._0_1_ = param_2->conv_;
  local_28._1_1_ = param_2->flags_;
  local_28._2_1_ = param_2->length_mod_;
  local_28._3_1_ = param_2->field_0x3;
  local_28._4_4_ = param_2->width_;
  _Size = (FormatSinkImpl *)(param_1->_Mypair)._Myval2._Mysize;
  local_18._Mysize = (ulong64)_Size;
  if (local_28._1_1_ == 0) {
    if (_Size != (FormatSinkImpl *)0x0) {
      _Dst = *(void **)(param_3 + 0x18);
      *(FormatSinkImpl **)(param_3 + 0x10) = _Size + *(longlong *)(param_3 + 0x10);
      if (param_3 + (0x420 - (longlong)_Dst) <= _Size) {
        local_20 = (longlong)_Dst + (-0x20 - (longlong)param_3);
        local_28 = param_3 + 0x20;
        (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_28);
        *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
        (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_18);
        return true;
      }
      memcpy(_Dst,local_18._Mydata,(size_t)_Size);
      *(FormatSinkImpl **)(param_3 + 0x18) = _Size + *(longlong *)(param_3 + 0x18);
    }
    return true;
  }
  bVar1 = FormatSinkImpl::PutPaddedString
                    (param_3,&local_18,local_28._4_4_,param_2->precision_,(bool)(local_28._1_1_ & 1)
                    );
  return bVar1;
}

// FormatConvertImpl @ 1501e0ad0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<524292> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var1
  ;
  undefined8 local_18;
  int local_10;
  
  p_Var1 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18._0_1_ = param_2->conv_;
  local_18._1_1_ = param_2->flags_;
  local_18._2_1_ = param_2->length_mod_;
  local_18._3_1_ = param_2->field_0x3;
  local_18._4_4_ = param_2->width_;
  local_10 = param_2->precision_;
  FUN_1501e0060(param_1,(p_Var1->_Myval2)._Mysize,&local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0b10

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<524292> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatSinkImpl *_Size;
  void *_Dst;
  bool bVar1;
  undefined8 local_28;
  ulong64 uStack_20;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_28._0_1_ = param_2->conv_;
  local_28._1_1_ = param_2->flags_;
  local_28._2_1_ = param_2->length_mod_;
  local_28._3_1_ = param_2->field_0x3;
  local_28._4_4_ = param_2->width_;
  if (local_28._1_1_ != 0) {
    local_18._Mydata = param_1->_Mydata;
    local_18._Mysize = param_1->_Mysize;
    bVar1 = FormatSinkImpl::PutPaddedString
                      (param_3,&local_18,local_28._4_4_,param_2->precision_,
                       (bool)(local_28._1_1_ & 1));
    return bVar1;
  }
  _Size = (FormatSinkImpl *)param_1->_Mysize;
  if (_Size != (FormatSinkImpl *)0x0) {
    _Dst = *(void **)(param_3 + 0x18);
    *(FormatSinkImpl **)(param_3 + 0x10) = _Size + *(longlong *)(param_3 + 0x10);
    if (param_3 + (0x420 - (longlong)_Dst) <= _Size) {
      uStack_20 = (longlong)_Dst + (-0x20 - (longlong)param_3);
      local_28 = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_28);
      local_28 = (FormatSinkImpl *)param_1->_Mydata;
      uStack_20 = param_1->_Mysize;
      *(FormatSinkImpl **)(param_3 + 0x18) = param_3 + 0x20;
      (**(code **)(param_3 + 8))(*(undefined8 *)param_3,&local_28);
      return true;
    }
    memcpy(_Dst,param_1->_Mydata,(size_t)_Size);
    *(FormatSinkImpl **)(param_3 + 0x18) = _Size + *(longlong *)(param_3 + 0x18);
  }
  return true;
}

// FormatConvertImpl @ 1501e0c10

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<524292> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> >,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *param_1,
          FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  undefined8 local_18;
  int local_10;
  
  local_18._0_1_ = param_2->conv_;
  local_18._1_1_ = param_2->flags_;
  local_18._2_1_ = param_2->length_mod_;
  local_18._3_1_ = param_2->field_0x3;
  local_18._4_4_ = param_2->width_;
  local_10 = param_2->precision_;
  FUN_1501e0060(param_1->_Mydata,param_1->_Mysize,&local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0c50

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<654848> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(float,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

undefined8 __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (float param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  if (local_18[0].conv_ == v) {
    local_18[0].conv_ = g;
  }
  else if (7 < (byte)(local_18[0].conv_ - f)) {
    return 0;
  }
  bVar1 = ConvertFloatImpl(param_1,local_18,param_3);
  if (!bVar1) {
    return 0;
  }
  return 1;
}

// FormatConvertImpl @ 1501e0ca0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<654848> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(double,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

undefined8 __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (double param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  if (local_18[0].conv_ == v) {
    local_18[0].conv_ = g;
  }
  else if (7 < (byte)(local_18[0].conv_ - f)) {
    return 0;
  }
  bVar1 = ConvertFloatImpl(param_1,local_18,param_3);
  if (!bVar1) {
    return 0;
  }
  return 1;
}

// FormatConvertImpl @ 1501e0cf0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<654848> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(long double,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

undefined8 __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (longdouble param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].precision_ = param_2->precision_;
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  if (local_18[0].conv_ == v) {
    local_18[0].conv_ = g;
  }
  else if (7 < (byte)(local_18[0].conv_ - f)) {
    return 0;
  }
  bVar1 = ConvertFloatImpl(param_1,local_18,param_3);
  if (!bVar1) {
    return 0;
  }
  return 1;
}

// FormatConvertImpl @ 1501e0d40

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(signed char,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (char param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<signed_char>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0d70

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(unsigned char,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (uchar param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<unsigned_char>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0da0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(short,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (short param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<short>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0dd0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(unsigned short,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (ushort param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<unsigned_short>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0e00

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(int,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (int param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<int>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0e30

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(unsigned int,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (uint param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<unsigned_int>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0e60

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(long,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (long param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<long>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0e90

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(unsigned long,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (ulong param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<unsigned_long>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0ec0

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class absl::lts_20240722::int128,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (int128 *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_28;
  int128 local_18;
  
  local_28.conv_ = param_2->conv_;
  local_28.flags_ = param_2->flags_;
  local_28.length_mod_ = param_2->length_mod_;
  local_28._3_1_ = param_2->field_0x3;
  local_28.width_ = param_2->width_;
  local_28.precision_ = param_2->precision_;
  local_18.lo_ = param_1->lo_;
  local_18.hi_ = param_1->hi_;
  ConvertIntArg<absl::lts_20240722::int128>(&local_18,&local_28,param_3);
  return;
}

// FormatConvertImpl @ 1501e0f00

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(class
   absl::lts_20240722::uint128,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (uint128 *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_28;
  uint128 local_18;
  
  local_28.conv_ = param_2->conv_;
  local_28.flags_ = param_2->flags_;
  local_28.length_mod_ = param_2->length_mod_;
  local_28._3_1_ = param_2->field_0x3;
  local_28.width_ = param_2->width_;
  local_28.precision_ = param_2->precision_;
  local_18.lo_ = param_1->lo_;
  local_18.hi_ = param_1->hi_;
  ConvertIntArg<absl::lts_20240722::uint128>(&local_18,&local_28,param_3);
  return;
}

// FormatConvertImpl @ 1501e0f40

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(__int64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (__int64 param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<__int64>(param_1,local_18,param_3);
  return;
}

// FormatConvertImpl @ 1501e0f70

/* struct absl::lts_20240722::str_format_internal::ArgConvertResult<655355> __cdecl
   absl::lts_20240722::str_format_internal::FormatConvertImpl(unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConvertImpl
          (__uint64 param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  ConvertIntArg<unsigned___int64>(param_1,local_18,param_3);
  return;
}

// InitializeData @ 1501e0fa0

/* private: char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::InitializeData(void) __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::InitializeData
          (Storage *this)

{
  char *pcVar1;
  
  if (*(ulonglong *)(this + 0x100) < 0x101) {
    return (char *)this;
  }
  pcVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(*(ulonglong *)(this + 0x100));
  return pcVar1;
}

// FUN_1501e0fd0 @ 1501e0fd0

void FUN_1501e0fd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong local_28;
  ulonglong uStack_20;
  
  uStack_20 = param_2[1];
  uVar2 = 0;
  lVar1 = *param_2;
  local_28 = lVar1;
  if (0x7fffffffffffffff < uStack_20) {
    uStack_20 = -uStack_20;
    local_28 = -lVar1;
    uVar2 = 1;
    if (lVar1 != 0) {
      uStack_20 = uStack_20 - 1;
    }
  }
  FUN_1501e1070(param_1,&local_28,uVar2);
  return;
}

// FUN_1501e1070 @ 1501e1070

void FUN_1501e1070(undefined8 *param_1,uint128 *param_2,char param_3)

{
  ulong64 uVar1;
  bool bVar2;
  uint128 *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint128 local_78;
  uint128 local_68;
  uint128 local_58;
  uint128 local_48 [3];
  
  pcVar5 = (char *)((longlong)param_1 + 0x3c);
  do {
    pcVar4 = pcVar5;
    local_78.lo_ = param_2->lo_;
    local_78.hi_ = param_2->hi_;
    local_68.lo_ = 100;
    local_68.hi_ = 0;
    pcVar5 = pcVar4 + -2;
    puVar3 = absl::lts_20240722::operator%(&local_58,&local_78,&local_68);
    absl::lts_20240722::numbers_internal::PutTwoDigits((uint)puVar3->lo_,pcVar5);
    local_78.lo_ = param_2->lo_;
    local_78.hi_ = param_2->hi_;
    local_68.lo_ = 100;
    local_68.hi_ = 0;
    puVar3 = absl::lts_20240722::operator/(local_48,&local_78,&local_68);
    uVar1 = puVar3->hi_;
    param_2->lo_ = puVar3->lo_;
    param_2->hi_ = uVar1;
    bVar2 = absl::lts_20240722::uint128::operator_bool(param_2);
  } while (bVar2);
  pcVar4 = pcVar4 + ((ulonglong)(*pcVar5 == '0') - 2);
  if (param_3 != '\0') {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = '-';
  }
  *param_1 = pcVar4;
  param_1[1] = (longlong)param_1 + (0x3c - (longlong)pcVar4);
  return;
}

// UsingInlinedStorage @ 1501e1240

/* private: static bool __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::UsingInlinedStorage(unsigned __int64) */

bool __cdecl
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::UsingInlinedStorage
          (__uint64 param_1)

{
  return param_1 < 0x101;
}

// Value @ 1501e1260

/* public: static signed char __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<signed char,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

char __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<signed_char,2>::Value(Data param_1)

{
  return param_1.buf[0];
}

// Value @ 1501e1270

/* public: static char __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

char __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char,2>::Value(Data param_1)

{
  return param_1.buf[0];
}

// Value @ 1501e1280

/* public: static unsigned char __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned char,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

uchar __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_char,2>::Value
          (Data param_1)

{
  return param_1.buf[0];
}

// Value @ 1501e1290

/* public: static short __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<short,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

short __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<short,2>::Value(Data param_1)

{
  return param_1._0_2_;
}

// Value @ 1501e12a0

/* public: static unsigned short __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned short,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

ushort __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_short,2>::Value
          (Data param_1)

{
  return param_1._0_2_;
}

// Value @ 1501e12b0

/* public: static int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<int,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

int __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<int,2>::Value(Data param_1)

{
  return param_1._0_4_;
}

// Value @ 1501e12c0

/* public: static unsigned int __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned int,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

uint __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_int,2>::Value(Data param_1)

{
  return param_1._0_4_;
}

// Value @ 1501e12d0

/* public: static long __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<long,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

long __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<long,2>::Value(Data param_1)

{
  return param_1._0_4_;
}

// Value @ 1501e12e0

/* public: static unsigned long __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned long,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

ulong __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned_long,2>::Value
          (Data param_1)

{
  return param_1._0_4_;
}

// Value @ 1501e12f0

/* public: static float __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<float,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

float __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<float,2>::Value(Data param_1)

{
  return param_1._0_4_;
}

// Value @ 1501e1310

/* public: static double __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<double,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

double __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<double,2>::Value(Data param_1)

{
  return (double)param_1.ptr;
}

// Value @ 1501e1330

/* public: static long double __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<long double,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

longdouble __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<long_double,2>::Value(Data param_1)

{
  return (longdouble)param_1.ptr;
}

// Value @ 1501e1350

/* public: static char const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char const *
   __ptr64,2>::Value(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

char * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char_const*___ptr64,2>::Value
          (Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e1360

/* public: static wchar_t const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<wchar_t const *
   __ptr64,2>::Value(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

wchar_t * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<wchar_t_const*___ptr64,2>::Value
          (Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e1370

/* public: static struct absl::lts_20240722::str_format_internal::VoidPtr __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<struct
   absl::lts_20240722::str_format_internal::VoidPtr,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

VoidPtr __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Manager<absl::lts_20240722::str_format_internal::VoidPtr,2>::Value(Data param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1.ptr = in_RDX;
  return (VoidPtr)param_1.ptr;
}

// Value @ 1501e1380

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Manager<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>::Value(Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e1390

/* public: static class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >,0>::Value(union absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Manager<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,0>::Value
          (Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e13a0

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64
   __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   std::basic_string_view<char,struct std::char_traits<char> >,0>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Manager<std::basic_string_view<char,std::char_traits<char>_>,0>::Value(Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e13b0

/* public: static class std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> > const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> >,0>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

basic_string_view<wchar_t,std::char_traits<wchar_t>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::
Manager<std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>,0>::Value(Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e13c0

/* public: static class absl::lts_20240722::int128 const & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   absl::lts_20240722::int128,0>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

int128 * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<absl::lts_20240722::int128,0>::Value
          (Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e13d0

/* public: static class absl::lts_20240722::uint128 const & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<class
   absl::lts_20240722::uint128,0>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

uint128 * __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<absl::lts_20240722::uint128,0>::
Value(Data param_1)

{
  return param_1.ptr;
}

// Value @ 1501e13e0

/* public: static __int64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<__int64,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

__int64 __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<__int64,2>::Value(Data param_1)

{
  return (__int64)param_1.ptr;
}

// Value @ 1501e13f0

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned __int64,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

__uint64 __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<unsigned___int64,2>::Value
          (Data param_1)

{
  return (__uint64)param_1.ptr;
}

// Value @ 1501e1400

/* public: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<bool,2>::Value(union
   absl::lts_20240722::str_format_internal::FormatArgImpl::Data) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<bool,2>::Value(Data param_1)

{
  return (bool)param_1.buf[0];
}

// Write @ 1501e1530

/* public: void __cdecl absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Write(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Write
          (FormatRawSinkImpl *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
  return;
}

// alloc @ 1501e1560

/* public: class std::allocator<char> & __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class
   std::allocator<char> >::Storage::alloc(void) __ptr64 */

allocator<char> * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::alloc(Storage *this)

{
  return (allocator<char> *)(this + 0x100);
}

// allocate @ 1501e1570

/* public: static char * __ptr64 __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::allocate(class std::allocator<char> & __ptr64,unsigned __int64) */

char * __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::allocate
          (allocator<char> *param_1,__uint64 param_2)

{
  char *pcVar1;
  
  pcVar1 = _Allocate<16,std::_Default_allocate_traits,0>(param_2);
  return pcVar1;
}

// begin @ 1501e1580

/* public: char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::begin(void)const __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::begin(Storage *this)

{
  return *(char **)(this + 0x108);
}

// conversion_char @ 1501e1590

/* public: enum absl::lts_20240722::FormatConversionChar __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::conversion_char(void)const
   __ptr64 */

FormatConversionChar __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::conversion_char
          (FormatConversionSpecImpl *this)

{
  return this->conv_;
}

// data @ 1501e15a0

/* public: char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::data(void) __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::data
          (FixedArray<char,_1,std::allocator<char>_> *this)

{
  return *(char **)(this + 0x108);
}

// data @ 1501e15b0

/* public: char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::NonEmptyInlinedStorage::data(void) __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::NonEmptyInlinedStorage::data
          (NonEmptyInlinedStorage *this)

{
  return (char *)this;
}

// deallocate @ 1501e15c0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::deallocate(class std::allocator<char> & __ptr64,char * __ptr64 const,unsigned __int64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::deallocate
          (allocator<char> *param_1,char *param_2,__uint64 param_3)

{
  char *pcVar1;
  
  pcVar1 = param_2;
  if (0xfff < param_3) {
    pcVar1 = *(char **)(param_2 + -8);
    param_3 = param_3 + 0x27;
    if ((char *)0x1f < param_2 + (-8 - (longlong)pcVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pcVar1,param_3);
  return;
}

// end @ 1501e1610

/* public: char * __ptr64 __cdecl absl::lts_20240722::FixedArray<char,-1,class std::allocator<char>
   >::Storage::end(void)const __ptr64 */

char * __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::end(Storage *this)

{
  return (char *)(*(longlong *)(this + 0x108) + *(longlong *)(this + 0x100));
}

// get @ 1501e1630

/* public: class std::allocator<char> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<char>,1,1>::get(void) __ptr64&  */

allocator<char> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<std::allocator<char>,1,1>
::get(Storage<std::allocator<char>,1,1> *this)

{
  return (allocator<char> *)this;
}

// has_alt_flag @ 1501e1640

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_alt_flag(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_alt_flag
          (FormatConversionSpecImpl *this)

{
  return (bool)(this->flags_ >> 3 & 1);
}

// has_left_flag @ 1501e1650

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_left_flag(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_left_flag
          (FormatConversionSpecImpl *this)

{
  return (bool)(this->flags_ & kLeft);
}

// has_show_pos_flag @ 1501e1660

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_show_pos_flag(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_show_pos_flag
          (FormatConversionSpecImpl *this)

{
  return (bool)(this->flags_ >> 1 & 1);
}

// has_sign_col_flag @ 1501e1670

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_sign_col_flag(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_sign_col_flag
          (FormatConversionSpecImpl *this)

{
  return (bool)(this->flags_ >> 2 & 1);
}

// has_zero_flag @ 1501e1680

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_zero_flag(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::has_zero_flag
          (FormatConversionSpecImpl *this)

{
  return (bool)(this->flags_ >> 4 & 1);
}

// is_basic @ 1501e1690

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::is_basic(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::is_basic
          (FormatConversionSpecImpl *this)

{
  return this->flags_ == kBasic;
}

// length_mod @ 1501e16b0

/* public: enum absl::lts_20240722::LengthMod __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::length_mod(void)const __ptr64
    */

LengthMod __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::length_mod
          (FormatConversionSpecImpl *this)

{
  return this->length_mod_;
}

// precision @ 1501e16c0

/* public: int __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::precision(void)const __ptr64
    */

int __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::precision
          (FormatConversionSpecImpl *this)

{
  return this->precision_;
}

// set_conversion_char @ 1501e16d0

/* public: void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::set_conversion_char(enum
   absl::lts_20240722::FormatConversionChar) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::set_conversion_char
          (FormatConversionSpecImpl *this,FormatConversionChar param_1)

{
  this->conv_ = param_1;
  return;
}

// size @ 1501e16e0

/* public: unsigned __int64 __cdecl absl::lts_20240722::FixedArray<char,-1,class
   std::allocator<char> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::size
          (FixedArray<char,_1,std::allocator<char>_> *this)

{
  return *(__uint64 *)(this + 0x100);
}

// size @ 1501e16f0

/* public: unsigned __int64 __cdecl absl::lts_20240722::FixedArray<char,-1,class
   std::allocator<char> >::Storage::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::FixedArray<char,-1,std::allocator<char>_>::Storage::size(Storage *this)

{
  return *(__uint64 *)(this + 0x100);
}

// width @ 1501e1700

/* public: int __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::width(void)const __ptr64 */

int __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::width
          (FormatConversionSpecImpl *this)

{
  return this->width_;
}

// FUN_150330620 @ 150330620

void FUN_150330620(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

