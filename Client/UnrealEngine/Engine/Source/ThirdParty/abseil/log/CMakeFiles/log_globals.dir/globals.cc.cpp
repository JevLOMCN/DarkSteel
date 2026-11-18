// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 44

// DummyFunction @ 1501d4080

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(void)>::DummyFunction(void) */

void __cdecl
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction(void)

{
  return;
}

// tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,0> @ 1501d4090

/* public: __cdecl std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,int const & __ptr64>::tuple<class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64><class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,0>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64)
   __ptr64 */

tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64> *
__thiscall
std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1,int *param_2)

{
  *(int **)this = param_2;
  *(basic_string_view<char,std::char_traits<char>_> **)(this + 8) = param_1;
  return this;
}

// tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64><std::_Exact_args_t,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64,0> @ 1501d40b0

/* public: __cdecl std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,int const & __ptr64>::tuple<class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64><struct std::_Exact_args_t,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const &
   __ptr64,0>(struct std::_Exact_args_t,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64) __ptr64 */

tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64> *
__thiscall
std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64><std::_Exact_args_t,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
           *this,_Exact_args_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          int *param_3)

{
  *(int **)this = param_3;
  *(basic_string_view<char,std::char_traits<char>_> **)(this + 8) = param_2;
  return this;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64> @ 1501d40d0

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          *param_2)

{
  uint *puVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  puVar1 = (uint *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (ulonglong)*puVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
  return (MixingHashState)param_1.state_;
}

// HashOf<std::basic_string_view<char,std::char_traits<char>_>,int> @ 1501d4160

/* unsigned __int64 __cdecl absl::lts_20240722::HashOf<class std::basic_string_view<char,struct
   std::char_traits<char> >,int>(class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,int const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::HashOf<std::basic_string_view<char,std::char_traits<char>_>,int>
          (basic_string_view<char,std::char_traits<char>_> *param_1,int *param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong local_res8;
  
  uVar1 = param_1->_Mysize;
  hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)&hash_internal::MixingHashState::kSeed,
             (__uint64)param_1->_Mydata);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (ulonglong)(uint)*param_2;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_> @ 1501d41e0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   >(class absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          *param_2)

{
  uint *puVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  puVar1 = (uint *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (ulonglong)*puVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
  return (MixingHashState)param_1.state_;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64>_> @ 1501d4270

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<char const * __ptr64> >(struct std::_Atomic_padded<char const * __ptr64> &
   __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64>_>
          (_Atomic_padded<char_const*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64>_> @ 1501d4280

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<char const * __ptr64> >(struct std::_Atomic_padded<char const * __ptr64>
   const & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<char_const*___ptr64>_>
          (_Atomic_padded<char_const*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,char_const*___ptr64> @ 1501d4290

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,char const * __ptr64>(char const * __ptr64
   const & __ptr64) */

__int64 __cdecl std::_Atomic_reinterpret_as<__int64,char_const*___ptr64>(char **param_1)

{
  return (__int64)*param_1;
}

// combine<std::basic_string_view<char,std::char_traits<char>_>,int> @ 1501d42a0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class
   std::basic_string_view<char,struct std::char_traits<char> >,int>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine<std::basic_string_view<char,std::char_traits<char>_>,int>
          (MixingHashState param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          int *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint *in_R9;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_3 + 2);
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)param_3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = lVar1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (ulonglong)*in_R9;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
  return (MixingHashState)param_1.state_;
}

// combine<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_> @ 1501d4330

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   >(class absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::
combine<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          *param_2)

{
  uint *puVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  puVar1 = (uint *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (ulonglong)*puVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
  return (MixingHashState)param_1.state_;
}

// get<1,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64> @ 1501d43c0

/* int const & __ptr64 __cdecl std::get<1,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64>(class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   const & __ptr64) */

int * __cdecl
std::get<1,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
           *param_1)

{
  return *(int **)param_1;
}

// get<0,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64> @ 1501d43d0

/* class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64 __cdecl
   std::get<0,class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int
   const & __ptr64>(class std::tuple<class std::basic_string_view<char,struct std::char_traits<char>
   > const & __ptr64,int const & __ptr64> const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::get<0,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
           *param_1)

{
  return *(basic_string_view<char,std::char_traits<char>_> **)(param_1 + 8);
}

// hash<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>,0> @ 1501d43e0

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const &
   __ptr64>,0>(class std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,int const & __ptr64> const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
           *param_1)

{
  uint *puVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong local_res8;
  
  puVar1 = *(uint **)param_1;
  _Var2 = (*(__uint64 **)(param_1 + 8))[1];
  combine_contiguous((MixingHashState)&local_res8,(uchar *)&kSeed,**(__uint64 **)(param_1 + 8));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (ulonglong)*puVar1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
}

// hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>,0,1> @ 1501d4460

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_tuple<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const &
   __ptr64>,0,1>(class absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int const & __ptr64>
   const & __ptr64,struct std::integer_sequence<unsigned __int64,0,1>) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>,0,1>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
          *param_2,integer_sequence<unsigned___int64,0,1> param_3)

{
  __uint64 *p_Var1;
  uint *puVar2;
  __uint64 _Var3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined7 in_register_00000081;
  longlong local_res8;
  
  p_Var1 = (__uint64 *)((undefined8 *)CONCAT71(in_register_00000081,param_3))[1];
  puVar2 = *(uint **)CONCAT71(in_register_00000081,param_3);
  _Var3 = p_Var1[1];
  MixingHashState::combine_contiguous((MixingHashState)&local_res8,(uchar *)param_2,*p_Var1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = _Var3 + local_res8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + (ulonglong)*puVar2;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8);
  return (MixingHashState)param_1.state_;
}

// tie<std::basic_string_view<char,std::char_traits<char>_>_const_,int_const_> @ 1501d44f0

/* class std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,int const & __ptr64> __cdecl std::tie<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,int const >(class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::tie<std::basic_string_view<char,std::char_traits<char>_>_const_,int_const_>
          (basic_string_view<char,std::char_traits<char>_> *param_1,int *param_2)

{
  char *in_R8;
  
  param_1->_Mydata = in_R8;
  param_1->_Mysize = (ulong64)param_2;
  return param_1;
}

// ScopedMinLogLevel @ 1501d4510

/* public: __cdecl absl::lts_20240722::log_internal::ScopedMinLogLevel::ScopedMinLogLevel(enum
   absl::lts_20240722::LogSeverityAtLeast) __ptr64 */

ScopedMinLogLevel * __thiscall
absl::lts_20240722::log_internal::ScopedMinLogLevel::ScopedMinLogLevel
          (ScopedMinLogLevel *this,LogSeverityAtLeast param_1)

{
  code *pcVar1;
  
  *(LogSeverityAtLeast *)this = DAT_1554076f8;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  DAT_1554076f8 = param_1;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return this;
}

// ScopedStderrThreshold @ 1501d4570

/* public: __cdecl absl::lts_20240722::ScopedStderrThreshold::ScopedStderrThreshold(enum
   absl::lts_20240722::LogSeverityAtLeast) __ptr64 */

ScopedStderrThreshold * __thiscall
absl::lts_20240722::ScopedStderrThreshold::ScopedStderrThreshold
          (ScopedStderrThreshold *this,LogSeverityAtLeast param_1)

{
  code *pcVar1;
  
  *(LogSeverityAtLeast *)this = DAT_154e47238;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  DAT_154e47238 = param_1;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return this;
}

// ~ScopedMinLogLevel @ 1501d45d0

/* public: __cdecl absl::lts_20240722::log_internal::ScopedMinLogLevel::~ScopedMinLogLevel(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::ScopedMinLogLevel::~ScopedMinLogLevel(ScopedMinLogLevel *this)

{
  code *pcVar1;
  
  DAT_1554076f8 = *(undefined4 *)this;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}

// ~ScopedStderrThreshold @ 1501d4620

/* public: __cdecl absl::lts_20240722::ScopedStderrThreshold::~ScopedStderrThreshold(void) __ptr64
    */

void __thiscall
absl::lts_20240722::ScopedStderrThreshold::~ScopedStderrThreshold(ScopedStderrThreshold *this)

{
  code *pcVar1;
  
  DAT_154e47238 = *(undefined4 *)this;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}

// operator() @ 1501d4670

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int
   const & __ptr64> >::operator()(class std::tuple<class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,int const & __ptr64> const & __ptr64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::
HashImpl<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_>
::operator()(HashImpl<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>_>
             *this,tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,int_const&___ptr64>
                   *param_1)

{
  uint *puVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong local_res10 [3];
  
  puVar1 = *(uint **)param_1;
  _Var2 = (*(__uint64 **)(param_1 + 8))[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)local_res10,(uchar *)&MixingHashState::kSeed,
             **(__uint64 **)(param_1 + 8));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res10[0];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (ulonglong)*puVar1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
}

// ClearLogBacktraceLocation @ 1501d46f0

/* void __cdecl absl::lts_20240722::ClearLogBacktraceLocation(void) */

void __cdecl absl::lts_20240722::ClearLogBacktraceLocation(void)

{
  DAT_155407700 = 0;
  return;
}

// DoLoad @ 1501d4710

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(void)>::DoLoad(void)const __ptr64)(void) */

_func_void * __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void)>::DoLoad
          (AtomicHook<void_(__cdecl*)(void)> *this)

{
  _func_void *p_Var1;
  
  p_Var1 = *(_func_void **)this;
  if (p_Var1 == (_func_void *)0x0) {
    p_Var1 = *(_func_void **)(this + 8);
  }
  return p_Var1;
}

// DoStore @ 1501d4730

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(void)>::DoStore(void (__cdecl*)(void)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void)>::DoStore
          (AtomicHook<void_(__cdecl*)(void)> *this,_func_void *param_1)

{
  _func_void *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void **)this;
  bVar2 = p_Var1 == (_func_void *)0x0;
  if (bVar2) {
    *(_func_void **)this = param_1;
    p_Var1 = (_func_void *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// EnableLogPrefix @ 1501d4750

/* void __cdecl absl::lts_20240722::EnableLogPrefix(bool) */

void __cdecl absl::lts_20240722::EnableLogPrefix(bool param_1)

{
  code *pcVar1;
  
  DAT_154e4723c = param_1;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}

// GetAndroidNativeTag @ 1501d4790

/* char const * __ptr64 __cdecl absl::lts_20240722::log_internal::GetAndroidNativeTag(void) */

char * __cdecl absl::lts_20240722::log_internal::GetAndroidNativeTag(void)

{
  return PTR_s_native_154e47240;
}

// FUN_1501d47a0 @ 1501d47a0

ulonglong FUN_1501d47a0(__uint64 *param_1,uint param_2)

{
  __uint64 _Var1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong local_res8;
  
  _Var1 = param_1[1];
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,*param_1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _Var1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (ulonglong)param_2;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// Load @ 1501d4820

/* public: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(void)>::Load(void)const __ptr64)(void) */

_func_void * __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void)>::Load
          (AtomicHook<void_(__cdecl*)(void)> *this)

{
  _func_void *p_Var1;
  
  p_Var1 = *(_func_void **)this;
  if (p_Var1 == (_func_void *)0x0) {
    p_Var1 = *(_func_void **)(this + 8);
  }
  if (p_Var1 == DummyFunction) {
    p_Var1 = (_func_void *)0x0;
  }
  return p_Var1;
}

// MinLogLevel @ 1501d4850

/* enum absl::lts_20240722::LogSeverityAtLeast __cdecl absl::lts_20240722::MinLogLevel(void) */

LogSeverityAtLeast __cdecl absl::lts_20240722::MinLogLevel(void)

{
  return DAT_1554076f8;
}

// RawEnableLogPrefix @ 1501d4860

/* void __cdecl absl::lts_20240722::log_internal::RawEnableLogPrefix(bool) */

void __cdecl absl::lts_20240722::log_internal::RawEnableLogPrefix(bool param_1)

{
  DAT_154e4723c = param_1;
  return;
}

// RawSetMinLogLevel @ 1501d4870

/* void __cdecl absl::lts_20240722::log_internal::RawSetMinLogLevel(enum
   absl::lts_20240722::LogSeverityAtLeast) */

void __cdecl absl::lts_20240722::log_internal::RawSetMinLogLevel(LogSeverityAtLeast param_1)

{
  DAT_1554076f8 = param_1;
  return;
}

// RawSetStderrThreshold @ 1501d4880

/* void __cdecl absl::lts_20240722::log_internal::RawSetStderrThreshold(enum
   absl::lts_20240722::LogSeverityAtLeast) */

void __cdecl absl::lts_20240722::log_internal::RawSetStderrThreshold(LogSeverityAtLeast param_1)

{
  DAT_154e47238 = param_1;
  return;
}

// SetAndroidNativeTag @ 1501d4890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl absl::lts_20240722::SetAndroidNativeTag(char const * __ptr64) */

void __cdecl absl::lts_20240722::SetAndroidNativeTag(char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  bool bVar5;
  undefined1 auStackY_98 [32];
  LogSeverity local_68 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1 == (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_58,"Check tag failed: ");
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>
                       (&local_38,"tag must be non-null.");
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_58,pbVar1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
    local_60 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1536f48b0;
    local_68[0] = 0x8a;
    local_68[1] = 3;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,local_68 + 1,(char **)&local_60,
               (int *)local_68,&local_58);
  }
  pbVar2 = ::operator_new(0x20);
  local_60 = pbVar2;
  if (pbVar2 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (param_1[uVar4] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (pbVar2,param_1,uVar4);
  }
  pbVar3 = pbVar2;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  LOCK();
  UNLOCK();
  bVar5 = PTR_s_native_154e47240 != "native";
  PTR_s_native_154e47240 = (undefined *)pbVar3;
  if (bVar5) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_58,
               "Check android_log_tag.exchange(tag_str->c_str(), std::memory_order_acq_rel) == kDefaultAndroidTag failed: "
              );
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>
                       (&local_38,"SetAndroidNativeTag() must only be called once per process!");
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_58,pbVar1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
    local_60 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1536f48b0;
    local_68[1] = 0x90;
    local_68[0] = kFatal;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,local_68,(char **)&local_60,
               (int *)(local_68 + 1),&local_58);
  }
  _DAT_155407708 = pbVar2;
  return;
}

// SetLogBacktraceLocation @ 1501d4a60

/* void __cdecl absl::lts_20240722::SetLogBacktraceLocation(class std::basic_string_view<char,struct
   std::char_traits<char> >,int) */

void __cdecl
absl::lts_20240722::SetLogBacktraceLocation
          (basic_string_view<char,std::char_traits<char>_> *param_1,int param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong local_res8 [2];
  
  uVar1 = param_1->_Mysize;
  hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)local_res8,(uchar *)&hash_internal::MixingHashState::kSeed,
             (__uint64)param_1->_Mydata);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1 + local_res8[0];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (ulonglong)(uint)param_2;
  DAT_155407700 =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
  return;
}

// SetLoggingGlobalsListener @ 1501d4b00

/* void __cdecl absl::lts_20240722::log_internal::SetLoggingGlobalsListener(void (__cdecl*)(void))
    */

void __cdecl absl::lts_20240722::log_internal::SetLoggingGlobalsListener(_func_void *param_1)

{
  _func_void *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e47248 != (_func_void *)0x0) {
    p_Var1 = DAT_154e47248;
  }
  DAT_154e47248 = p_Var1;
  UNLOCK();
  return;
}

// SetMinLogLevel @ 1501d4b20

/* void __cdecl absl::lts_20240722::SetMinLogLevel(enum absl::lts_20240722::LogSeverityAtLeast) */

void __cdecl absl::lts_20240722::SetMinLogLevel(LogSeverityAtLeast param_1)

{
  code *pcVar1;
  
  DAT_1554076f8 = param_1;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}

// SetStderrThreshold @ 1501d4b60

/* void __cdecl absl::lts_20240722::SetStderrThreshold(enum absl::lts_20240722::LogSeverityAtLeast)
    */

void __cdecl absl::lts_20240722::SetStderrThreshold(LogSeverityAtLeast param_1)

{
  code *pcVar1;
  
  DAT_154e47238 = param_1;
  pcVar1 = DAT_154e47248;
  if (DAT_154e47248 == (code *)0x0) {
    pcVar1 = (code *)PTR_DummyFunction_154e47250;
  }
  if (pcVar1 == base_internal::AtomicHook<void_(__cdecl*)(void)>::DummyFunction) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}

// ShouldLogBacktraceAt @ 1501d4ba0

/* bool __cdecl absl::lts_20240722::log_internal::ShouldLogBacktraceAt(class
   std::basic_string_view<char,struct std::char_traits<char> >,int) */

bool __cdecl
absl::lts_20240722::log_internal::ShouldLogBacktraceAt
          (basic_string_view<char,std::char_traits<char>_> *param_1,int param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong local_res20;
  
  uVar4 = DAT_155407700;
  if (DAT_155407700 != 0) {
    uVar1 = param_1->_Mysize;
    hash_internal::MixingHashState::combine_contiguous
              ((MixingHashState)&local_res20,(uchar *)&hash_internal::MixingHashState::kSeed,
               (__uint64)param_1->_Mydata);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar1 + local_res20;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (ulonglong)(uint)param_2;
    if (uVar4 == (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8))) {
      return true;
    }
  }
  return false;
}

// ShouldPrependLogPrefix @ 1501d4c40

/* bool __cdecl absl::lts_20240722::ShouldPrependLogPrefix(void) */

bool __cdecl absl::lts_20240722::ShouldPrependLogPrefix(void)

{
  return (bool)DAT_154e4723c;
}

// StderrThreshold @ 1501d4c50

/* enum absl::lts_20240722::LogSeverityAtLeast __cdecl absl::lts_20240722::StderrThreshold(void) */

LogSeverityAtLeast __cdecl absl::lts_20240722::StderrThreshold(void)

{
  return DAT_154e47238;
}

// Store @ 1501d4c60

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(void)>::Store(void (__cdecl*)(void)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void)>::Store
          (AtomicHook<void_(__cdecl*)(void)> *this,_func_void *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void **)this = param_1;
  }
  UNLOCK();
  return;
}

// exchange @ 1501d4cb0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: char const * __ptr64 __cdecl std::_Atomic_storage<char const * __ptr64,8>::exchange(char
   const * __ptr64 const,enum std::memory_order) __ptr64 */

char * __thiscall
std::_Atomic_storage<char_const*___ptr64,8>::exchange
          (_Atomic_storage<char_const*___ptr64,8> *this,char *param_1,memory_order param_2)

{
  char *pcVar1;
  
  LOCK();
  pcVar1 = *(char **)this;
  *(char **)this = param_1;
  UNLOCK();
  return pcVar1;
}

// load @ 1501d4cc0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: char const * __ptr64 __cdecl std::_Atomic_storage<char const * __ptr64,8>::load(enum
   std::memory_order)const __ptr64 */

char * __thiscall
std::_Atomic_storage<char_const*___ptr64,8>::load
          (_Atomic_storage<char_const*___ptr64,8> *this,memory_order param_1)

{
  return *(char **)this;
}

// FUN_150330240 @ 150330240

void FUN_150330240(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38),0x20);
  return;
}

