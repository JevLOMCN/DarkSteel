// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 61

// tuple<unsigned___int64_const&___ptr64><unsigned___int64_const&___ptr64,0> @ 1501d7c00

/* public: __cdecl std::tuple<unsigned __int64 const & __ptr64>::tuple<unsigned __int64 const &
   __ptr64><unsigned __int64 const & __ptr64,0>(unsigned __int64 const & __ptr64) __ptr64 */

tuple<unsigned___int64_const&___ptr64> * __thiscall
std::tuple<unsigned___int64_const&___ptr64>::
tuple<unsigned___int64_const&___ptr64><unsigned___int64_const&___ptr64,0>
          (tuple<unsigned___int64_const&___ptr64> *this,__uint64 *param_1)

{
  *(__uint64 **)this = param_1;
  return this;
}

// tuple<unsigned___int64_const&___ptr64><std::_Exact_args_t,unsigned___int64_const&___ptr64,0> @ 1501d7c10

/* public: __cdecl std::tuple<unsigned __int64 const & __ptr64>::tuple<unsigned __int64 const &
   __ptr64><struct std::_Exact_args_t,unsigned __int64 const & __ptr64,0>(struct
   std::_Exact_args_t,unsigned __int64 const & __ptr64) __ptr64 */

tuple<unsigned___int64_const&___ptr64> * __thiscall
std::tuple<unsigned___int64_const&___ptr64>::
tuple<unsigned___int64_const&___ptr64><std::_Exact_args_t,unsigned___int64_const&___ptr64,0>
          (tuple<unsigned___int64_const&___ptr64> *this,_Exact_args_t param_1,__uint64 *param_2)

{
  *(__uint64 **)this = param_2;
  return this;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,unsigned___int64_const&___ptr64> @ 1501d7c20

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned __int64 const & __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned __int64 const &
   __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,unsigned___int64_const&___ptr64>
          (MixingHashState param_1,tuple<unsigned___int64_const&___ptr64> *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// HashOf<unsigned___int64> @ 1501d7c50

/* unsigned __int64 __cdecl absl::lts_20240722::HashOf<unsigned __int64>(unsigned __int64 const &
   __ptr64) */

__uint64 __cdecl absl::lts_20240722::HashOf<unsigned___int64>(__uint64 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&hash_internal::MixingHashState::kSeed + *param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64>_> @ 1501d7c80

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned __int64 const &
   __ptr64> >(class absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned
   __int64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64>_>
          (MixingHashState param_1,tuple<unsigned___int64_const&___ptr64> *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// _Checked_x86_x64_countl_zero<unsigned_short> @ 1501d7cb0

/* int __cdecl std::_Checked_x86_x64_countl_zero<unsigned short>(unsigned short) */

int __cdecl std::_Checked_x86_x64_countl_zero<unsigned_short>(ushort param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return (int)(ushort)LZCOUNT(param_1);
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x10;
  }
  return 0xf - iVar1;
}

// _Countl_zero_bsr<unsigned_short> @ 1501d7ce0

/* int __cdecl std::_Countl_zero_bsr<unsigned short>(unsigned short) */

int __cdecl std::_Countl_zero_bsr<unsigned_short>(ushort param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x10;
  }
  return 0xf - iVar1;
}

// _Countl_zero_lzcnt<unsigned_short> @ 1501d7d00

/* int __cdecl std::_Countl_zero_lzcnt<unsigned short>(unsigned short) */

int __cdecl std::_Countl_zero_lzcnt<unsigned_short>(ushort param_1)

{
  return (int)(ushort)LZCOUNT(param_1);
}

// combine<std::tuple<unsigned___int64_const&___ptr64>_> @ 1501d7d10

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class std::tuple<unsigned __int64
   const & __ptr64> >(class absl::lts_20240722::hash_internal::MixingHashState,class
   std::tuple<unsigned __int64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine<std::tuple<unsigned___int64_const&___ptr64>_>
          (MixingHashState param_1,tuple<unsigned___int64_const&___ptr64> *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// countl_zero<unsigned_short,0> @ 1501d7d40

/* int __cdecl std::countl_zero<unsigned short,0>(unsigned short) */

int __cdecl std::countl_zero<unsigned_short,0>(ushort param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return (int)(ushort)LZCOUNT(param_1);
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x10;
  }
  return 0xf - iVar1;
}

// find_first_non_full<void> @ 1501d7d70

/* struct absl::lts_20240722::container_internal::FindInfo __cdecl
   absl::lts_20240722::container_internal::find_first_non_full<void>(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64,unsigned __int64) */

CommonFields * __cdecl
absl::lts_20240722::container_internal::find_first_non_full<void>
          (CommonFields *param_1,__uint64 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  uint uVar8;
  ulonglong in_R8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  uVar3 = *(ulonglong *)param_2;
  uVar7 = 0;
  uVar6 = (uVar2 >> 5 ^ in_R8) >> 7 & uVar3;
  if (*(char *)(uVar6 + uVar2) < -1) {
    param_1->capacity_ = uVar6;
    param_1->size_ = 0;
    return param_1;
  }
  pcVar1 = (char *)(uVar6 + uVar2);
  auVar9[0] = -(*pcVar1 < __xmm_ffffffffffffffffffffffffffffffff);
  auVar9[1] = -(pcVar1[1] < UNK_15060db21);
  auVar9[2] = -(pcVar1[2] < UNK_15060db22);
  auVar9[3] = -(pcVar1[3] < UNK_15060db23);
  auVar9[4] = -(pcVar1[4] < UNK_15060db24);
  auVar9[5] = -(pcVar1[5] < UNK_15060db25);
  auVar9[6] = -(pcVar1[6] < UNK_15060db26);
  auVar9[7] = -(pcVar1[7] < UNK_15060db27);
  auVar9[8] = -(pcVar1[8] < UNK_15060db28);
  auVar9[9] = -(pcVar1[9] < UNK_15060db29);
  auVar9[10] = -(pcVar1[10] < UNK_15060db2a);
  auVar9[0xb] = -(pcVar1[0xb] < UNK_15060db2b);
  auVar9[0xc] = -(pcVar1[0xc] < UNK_15060db2c);
  auVar9[0xd] = -(pcVar1[0xd] < UNK_15060db2d);
  auVar9[0xe] = -(pcVar1[0xe] < UNK_15060db2e);
  auVar9[0xf] = -(pcVar1[0xf] < UNK_15060db2f);
  uVar4 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
  while (uVar4 == 0) {
    uVar7 = uVar7 + 0x10;
    uVar6 = uVar6 + uVar7 & uVar3;
    pcVar1 = (char *)(uVar6 + uVar2);
    auVar10[0] = -(*pcVar1 < __xmm_ffffffffffffffffffffffffffffffff);
    auVar10[1] = -(pcVar1[1] < UNK_15060db21);
    auVar10[2] = -(pcVar1[2] < UNK_15060db22);
    auVar10[3] = -(pcVar1[3] < UNK_15060db23);
    auVar10[4] = -(pcVar1[4] < UNK_15060db24);
    auVar10[5] = -(pcVar1[5] < UNK_15060db25);
    auVar10[6] = -(pcVar1[6] < UNK_15060db26);
    auVar10[7] = -(pcVar1[7] < UNK_15060db27);
    auVar10[8] = -(pcVar1[8] < UNK_15060db28);
    auVar10[9] = -(pcVar1[9] < UNK_15060db29);
    auVar10[10] = -(pcVar1[10] < UNK_15060db2a);
    auVar10[0xb] = -(pcVar1[0xb] < UNK_15060db2b);
    auVar10[0xc] = -(pcVar1[0xc] < UNK_15060db2c);
    auVar10[0xd] = -(pcVar1[0xd] < UNK_15060db2d);
    auVar10[0xe] = -(pcVar1[0xe] < UNK_15060db2e);
    auVar10[0xf] = -(pcVar1[0xf] < UNK_15060db2f);
    uVar4 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
  }
  uVar8 = uVar4 | 0xffff0000;
  if (__isa_available < 5) {
    uVar5 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    param_1->size_ = uVar7;
    param_1->capacity_ = uVar5 + uVar6 & uVar3;
    return param_1;
  }
  uVar5 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar5 = uVar5 + 1;
  }
  param_1->size_ = uVar7;
  param_1->capacity_ = uVar5 + uVar6 & uVar3;
  return param_1;
}

// get<0,unsigned___int64_const&___ptr64> @ 1501d7e30

/* unsigned __int64 const & __ptr64 __cdecl std::get<0,unsigned __int64 const & __ptr64>(class
   std::tuple<unsigned __int64 const & __ptr64> const & __ptr64) */

__uint64 * __cdecl
std::get<0,unsigned___int64_const&___ptr64>(tuple<unsigned___int64_const&___ptr64> *param_1)

{
  return *(__uint64 **)param_1;
}

// hash<std::tuple<unsigned___int64_const&___ptr64>,0> @ 1501d7e40

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<unsigned __int64 const
   & __ptr64>,0>(class std::tuple<unsigned __int64 const & __ptr64> const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<unsigned___int64_const&___ptr64>,0>(tuple<unsigned___int64_const&___ptr64> *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&kSeed + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64>,0> @ 1501d7e70

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_tuple<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned __int64 const &
   __ptr64>,0>(class absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned
   __int64 const & __ptr64> const & __ptr64,struct std::integer_sequence<unsigned __int64,0>) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64>,0>
          (MixingHashState param_1,tuple<unsigned___int64_const&___ptr64> *param_2,
          integer_sequence<unsigned___int64,0> param_3)

{
  undefined1 auVar1 [16];
  undefined7 in_register_00000081;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + **(longlong **)CONCAT71(in_register_00000081,param_3);
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// tie<unsigned___int64_const_> @ 1501d7ea0

/* class std::tuple<unsigned __int64 const & __ptr64> __cdecl std::tie<unsigned __int64 const
   >(unsigned __int64 const & __ptr64) */

__uint64 * __cdecl std::tie<unsigned___int64_const_>(__uint64 *param_1)

{
  __uint64 in_RDX;
  
  *param_1 = in_RDX;
  return param_1;
}

// operator() @ 1501d7ef0

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<unsigned __int64 const & __ptr64> >::operator()(class std::tuple<unsigned __int64
   const & __ptr64> const & __ptr64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::HashImpl<std::tuple<unsigned___int64_const&___ptr64>_>::
operator()(HashImpl<std::tuple<unsigned___int64_const&___ptr64>_> *this,
          tuple<unsigned___int64_const&___ptr64> *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&MixingHashState::kSeed + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// ClearBackingArray @ 1501d7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl absl::lts_20240722::container_internal::ClearBackingArray(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,struct
   absl::lts_20240722::container_internal::PolicyFunctions const & __ptr64,bool,bool) */

void __cdecl
absl::lts_20240722::container_internal::ClearBackingArray
          (CommonFields *param_1,PolicyFunctions *param_2,bool param_3,bool param_4)

{
  ctrl_t *pcVar1;
  ulong64 uVar2;
  MaybeInitializedPtr MVar3;
  ulong64 *puVar4;
  undefined1 auStack_78 [32];
  ulong64 local_58 [2];
  undefined *local_48;
  ulong64 local_38 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  param_1->size_ = (ulonglong)((uint)param_1->size_ & 1);
  if (param_3) {
    pcVar1 = (param_1->heap_or_soo_).heap.control;
    uVar2 = param_1->capacity_;
    memset(pcVar1,-0x80,uVar2 + 0x10);
    pcVar1[uVar2] = kSentinel;
    *(ulong64 *)((param_1->heap_or_soo_).heap.control + -8) =
         (param_1->capacity_ - (param_1->size_ >> 1)) - (param_1->capacity_ >> 3);
  }
  else {
    (*param_2->dealloc)(param_1,param_2);
    if (param_4) {
      local_38[1] = 0;
      puVar4 = local_38;
      local_38[0] = 1;
    }
    else {
      local_58[0] = 0;
      local_58[1] = 0;
      local_48 = &DAT_1536f4c80;
      puVar4 = local_58;
    }
    uVar2 = puVar4[1];
    pcVar1 = (ctrl_t *)puVar4[2];
    MVar3 = *(MaybeInitializedPtr *)(puVar4 + 3);
    param_1->capacity_ = *puVar4;
    param_1->size_ = uVar2;
    (param_1->heap_or_soo_).heap.control = pcVar1;
    (param_1->heap_or_soo_).heap.slot_array = MVar3;
  }
  return;
}

// ConvertDeletedToEmptyAndFullToDeleted @ 1501d8020

/* void __cdecl absl::lts_20240722::container_internal::ConvertDeletedToEmptyAndFullToDeleted(enum
   absl::lts_20240722::container_internal::ctrl_t * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::container_internal::ConvertDeletedToEmptyAndFullToDeleted
          (ctrl_t *param_1,__uint64 param_2)

{
  ctrl_t *pcVar1;
  ctrl_t cVar2;
  ctrl_t cVar3;
  ctrl_t cVar4;
  ctrl_t cVar5;
  ctrl_t cVar6;
  ctrl_t cVar7;
  ctrl_t cVar8;
  ctrl_t cVar9;
  ctrl_t cVar10;
  ctrl_t cVar11;
  ctrl_t cVar12;
  ctrl_t cVar13;
  ctrl_t cVar14;
  ctrl_t cVar15;
  ctrl_t cVar16;
  ctrl_t cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  ctrl_t *pcVar34;
  
  cVar33 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xf];
  cVar32 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xe];
  cVar31 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xd];
  cVar30 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xc];
  cVar29 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xb];
  cVar28 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[10];
  cVar27 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[9];
  cVar26 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[8];
  cVar25 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[7];
  cVar24 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[6];
  cVar23 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[5];
  cVar22 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[4];
  cVar21 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[3];
  cVar20 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[2];
  cVar19 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[1];
  cVar18 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0];
  cVar17 = UNK_1508be4ff;
  cVar16 = UNK_1508be4fe;
  cVar15 = UNK_1508be4fd;
  cVar14 = UNK_1508be4fc;
  cVar13 = UNK_1508be4fb;
  cVar12 = UNK_1508be4fa;
  cVar11 = UNK_1508be4f9;
  cVar10 = UNK_1508be4f8;
  cVar9 = UNK_1508be4f7;
  cVar8 = UNK_1508be4f6;
  cVar7 = UNK_1508be4f5;
  cVar6 = UNK_1508be4f4;
  cVar5 = UNK_1508be4f3;
  cVar4 = UNK_1508be4f2;
  cVar3 = UNK_1508be4f1;
  cVar2 = __xmm_80808080808080808080808080808080;
  pcVar1 = param_1 + param_2;
  for (pcVar34 = param_1; pcVar34 < pcVar1; pcVar34 = pcVar34 + 0x10) {
    *pcVar34 = ~-((char)*pcVar34 < '\0') & cVar18 | cVar2;
    pcVar34[1] = ~-((char)pcVar34[1] < '\0') & cVar19 | cVar3;
    pcVar34[2] = ~-((char)pcVar34[2] < '\0') & cVar20 | cVar4;
    pcVar34[3] = ~-((char)pcVar34[3] < '\0') & cVar21 | cVar5;
    pcVar34[4] = ~-((char)pcVar34[4] < '\0') & cVar22 | cVar6;
    pcVar34[5] = ~-((char)pcVar34[5] < '\0') & cVar23 | cVar7;
    pcVar34[6] = ~-((char)pcVar34[6] < '\0') & cVar24 | cVar8;
    pcVar34[7] = ~-((char)pcVar34[7] < '\0') & cVar25 | cVar9;
    pcVar34[8] = ~-((char)pcVar34[8] < '\0') & cVar26 | cVar10;
    pcVar34[9] = ~-((char)pcVar34[9] < '\0') & cVar27 | cVar11;
    pcVar34[10] = ~-((char)pcVar34[10] < '\0') & cVar28 | cVar12;
    pcVar34[0xb] = ~-((char)pcVar34[0xb] < '\0') & cVar29 | cVar13;
    pcVar34[0xc] = ~-((char)pcVar34[0xc] < '\0') & cVar30 | cVar14;
    pcVar34[0xd] = ~-((char)pcVar34[0xd] < '\0') & cVar31 | cVar15;
    pcVar34[0xe] = ~-((char)pcVar34[0xe] < '\0') & cVar32 | cVar16;
    pcVar34[0xf] = ~-((char)pcVar34[0xf] < '\0') & cVar33 | cVar17;
  }
  *(undefined8 *)(pcVar1 + 1) = *(undefined8 *)param_1;
  *(undefined4 *)(pcVar1 + 9) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(pcVar1 + 0xd) = *(undefined2 *)(param_1 + 0xc);
  pcVar1[0xf] = param_1[0xe];
  *pcVar1 = kSentinel;
  return;
}

// ConvertSpecialToEmptyAndFullToDeleted @ 1501d8090

/* public: void __cdecl
   absl::lts_20240722::container_internal::GroupSse2Impl::ConvertSpecialToEmptyAndFullToDeleted(enum
   absl::lts_20240722::container_internal::ctrl_t * __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::GroupSse2Impl::ConvertSpecialToEmptyAndFullToDeleted
          (GroupSse2Impl *this,ctrl_t *param_1)

{
  ctrl_t cVar1;
  ctrl_t cVar2;
  ctrl_t cVar3;
  ctrl_t cVar4;
  ctrl_t cVar5;
  ctrl_t cVar6;
  ctrl_t cVar7;
  ctrl_t cVar8;
  ctrl_t cVar9;
  ctrl_t cVar10;
  ctrl_t cVar11;
  ctrl_t cVar12;
  ctrl_t cVar13;
  ctrl_t cVar14;
  ctrl_t cVar15;
  
  cVar1 = ~-((this->ctrl).m128i_i8[1] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[1] |
          UNK_1508be4f1;
  cVar2 = ~-((this->ctrl).m128i_i8[2] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[2] |
          UNK_1508be4f2;
  cVar3 = ~-((this->ctrl).m128i_i8[3] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[3] |
          UNK_1508be4f3;
  cVar4 = ~-((this->ctrl).m128i_i8[4] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[4] |
          UNK_1508be4f4;
  cVar5 = ~-((this->ctrl).m128i_i8[5] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[5] |
          UNK_1508be4f5;
  cVar6 = ~-((this->ctrl).m128i_i8[6] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[6] |
          UNK_1508be4f6;
  cVar7 = ~-((this->ctrl).m128i_i8[7] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[7] |
          UNK_1508be4f7;
  cVar8 = ~-((this->ctrl).m128i_i8[8] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[8] |
          UNK_1508be4f8;
  cVar9 = ~-((this->ctrl).m128i_i8[9] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[9] |
          UNK_1508be4f9;
  cVar10 = ~-((this->ctrl).m128i_i8[10] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[10] |
           UNK_1508be4fa;
  cVar11 = ~-((this->ctrl).m128i_i8[0xb] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xb] |
           UNK_1508be4fb;
  cVar12 = ~-((this->ctrl).m128i_i8[0xc] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xc] |
           UNK_1508be4fc;
  cVar13 = ~-((this->ctrl).m128i_i8[0xd] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xd] |
           UNK_1508be4fd;
  cVar14 = ~-((this->ctrl).m128i_i8[0xe] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xe] |
           UNK_1508be4fe;
  cVar15 = ~-((this->ctrl).m128i_i8[0xf] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xf] |
           UNK_1508be4ff;
  *param_1 = ~-((this->ctrl).m128i_i8[0] < '\0') & __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0] |
             __xmm_80808080808080808080808080808080;
  param_1[1] = cVar1;
  param_1[2] = cVar2;
  param_1[3] = cVar3;
  param_1[4] = cVar4;
  param_1[5] = cVar5;
  param_1[6] = cVar6;
  param_1[7] = cVar7;
  param_1[8] = cVar8;
  param_1[9] = cVar9;
  param_1[10] = cVar10;
  param_1[0xb] = cVar11;
  param_1[0xc] = cVar12;
  param_1[0xd] = cVar13;
  param_1[0xe] = cVar14;
  param_1[0xf] = cVar15;
  return;
}

// FUN_1501d80b0 @ 1501d80b0

void FUN_1501d80b0(ulonglong *param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  uint uVar43;
  byte *pbVar44;
  undefined8 uVar45;
  ulonglong uVar46;
  uint uVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  byte bVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulonglong local_50;
  
  cVar42 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xf];
  cVar41 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xe];
  cVar40 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xd];
  cVar39 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xc];
  cVar38 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0xb];
  cVar37 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[10];
  cVar36 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[9];
  cVar35 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[8];
  cVar34 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[7];
  cVar33 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[6];
  cVar32 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[5];
  cVar31 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[4];
  cVar30 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[3];
  cVar29 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[2];
  cVar28 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[1];
  cVar27 = __xmm_7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e7e[0];
  bVar26 = UNK_1508be4ff;
  bVar25 = UNK_1508be4fe;
  bVar24 = UNK_1508be4fd;
  bVar23 = UNK_1508be4fc;
  bVar22 = UNK_1508be4fb;
  bVar21 = UNK_1508be4fa;
  bVar20 = UNK_1508be4f9;
  bVar19 = UNK_1508be4f8;
  bVar18 = UNK_1508be4f7;
  bVar17 = UNK_1508be4f6;
  bVar16 = UNK_1508be4f5;
  bVar15 = UNK_1508be4f4;
  bVar14 = UNK_1508be4f3;
  bVar13 = UNK_1508be4f2;
  bVar3 = UNK_1508be4f1;
  bVar55 = __xmm_80808080808080808080808080808080;
  pbVar4 = (byte *)param_1[2];
  uVar5 = param_1[3];
  uVar6 = *param_1;
  pbVar1 = pbVar4 + uVar6;
  for (pbVar44 = pbVar4; pbVar44 < pbVar1; pbVar44 = pbVar44 + 0x10) {
    *pbVar44 = ~-((char)*pbVar44 < '\0') & cVar27 | bVar55;
    pbVar44[1] = ~-((char)pbVar44[1] < '\0') & cVar28 | bVar3;
    pbVar44[2] = ~-((char)pbVar44[2] < '\0') & cVar29 | bVar13;
    pbVar44[3] = ~-((char)pbVar44[3] < '\0') & cVar30 | bVar14;
    pbVar44[4] = ~-((char)pbVar44[4] < '\0') & cVar31 | bVar15;
    pbVar44[5] = ~-((char)pbVar44[5] < '\0') & cVar32 | bVar16;
    pbVar44[6] = ~-((char)pbVar44[6] < '\0') & cVar33 | bVar17;
    pbVar44[7] = ~-((char)pbVar44[7] < '\0') & cVar34 | bVar18;
    pbVar44[8] = ~-((char)pbVar44[8] < '\0') & cVar35 | bVar19;
    pbVar44[9] = ~-((char)pbVar44[9] < '\0') & cVar36 | bVar20;
    pbVar44[10] = ~-((char)pbVar44[10] < '\0') & cVar37 | bVar21;
    pbVar44[0xb] = ~-((char)pbVar44[0xb] < '\0') & cVar38 | bVar22;
    pbVar44[0xc] = ~-((char)pbVar44[0xc] < '\0') & cVar39 | bVar23;
    pbVar44[0xd] = ~-((char)pbVar44[0xd] < '\0') & cVar40 | bVar24;
    pbVar44[0xe] = ~-((char)pbVar44[0xe] < '\0') & cVar41 | bVar25;
    pbVar44[0xf] = ~-((char)pbVar44[0xf] < '\0') & cVar42 | bVar26;
  }
  *(undefined8 *)(pbVar1 + 1) = *(undefined8 *)pbVar4;
  *(undefined4 *)(pbVar1 + 9) = *(undefined4 *)(pbVar4 + 8);
  *(undefined2 *)(pbVar1 + 0xd) = *(undefined2 *)(pbVar4 + 0xc);
  pbVar1[0xf] = pbVar4[0xe];
  *pbVar1 = 0xff;
  uVar45 = (*(code *)param_2[1])(param_1);
  pcVar7 = (code *)param_2[2];
  uVar52 = 0;
  pcVar8 = (code *)param_2[3];
  lVar9 = *param_2;
  if (uVar6 != 0) {
    uVar57 = 1;
    local_50 = 0xfffffffffffffff1;
    uVar51 = 0xffffffffffffffff;
    uVar53 = uVar5;
    do {
      uVar50 = uVar52;
      if ((pbVar4[uVar52] != 0x80) && (uVar50 = uVar51, pbVar4[uVar52] == 0xfe)) {
        uVar46 = (*pcVar7)(uVar45,uVar53);
        uVar10 = param_1[2];
        lVar48 = 0;
        uVar11 = *param_1;
        uVar56 = (uVar10 >> 5 ^ uVar46) >> 7 & uVar11;
        uVar49 = uVar56;
        if (-2 < *(char *)(uVar56 + uVar10)) {
          auVar2 = *(undefined1 (*) [16])(uVar56 + uVar10);
          auVar58[0] = -(auVar2[0] < __xmm_ffffffffffffffffffffffffffffffff);
          auVar58[1] = -(auVar2[1] < UNK_15060db21);
          auVar58[2] = -(auVar2[2] < UNK_15060db22);
          auVar58[3] = -(auVar2[3] < UNK_15060db23);
          auVar58[4] = -(auVar2[4] < UNK_15060db24);
          auVar58[5] = -(auVar2[5] < UNK_15060db25);
          auVar58[6] = -(auVar2[6] < UNK_15060db26);
          auVar58[7] = -(auVar2[7] < UNK_15060db27);
          auVar58[8] = -(auVar2[8] < UNK_15060db28);
          auVar58[9] = -(auVar2[9] < UNK_15060db29);
          auVar58[10] = -(auVar2[10] < UNK_15060db2a);
          auVar58[0xb] = -(auVar2[0xb] < UNK_15060db2b);
          auVar58[0xc] = -(auVar2[0xc] < UNK_15060db2c);
          auVar58[0xd] = -(auVar2[0xd] < UNK_15060db2d);
          auVar58[0xe] = -(auVar2[0xe] < UNK_15060db2e);
          auVar58[0xf] = -(auVar2[0xf] < UNK_15060db2f);
          uVar12 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar58[0xf] >> 7) << 0xf;
          while (uVar12 == 0) {
            lVar48 = lVar48 + 0x10;
            uVar49 = uVar49 + lVar48 & uVar11;
            auVar2 = *(undefined1 (*) [16])(uVar49 + uVar10);
            auVar59[0] = -(auVar2[0] < __xmm_ffffffffffffffffffffffffffffffff);
            auVar59[1] = -(auVar2[1] < UNK_15060db21);
            auVar59[2] = -(auVar2[2] < UNK_15060db22);
            auVar59[3] = -(auVar2[3] < UNK_15060db23);
            auVar59[4] = -(auVar2[4] < UNK_15060db24);
            auVar59[5] = -(auVar2[5] < UNK_15060db25);
            auVar59[6] = -(auVar2[6] < UNK_15060db26);
            auVar59[7] = -(auVar2[7] < UNK_15060db27);
            auVar59[8] = -(auVar2[8] < UNK_15060db28);
            auVar59[9] = -(auVar2[9] < UNK_15060db29);
            auVar59[10] = -(auVar2[10] < UNK_15060db2a);
            auVar59[0xb] = -(auVar2[0xb] < UNK_15060db2b);
            auVar59[0xc] = -(auVar2[0xc] < UNK_15060db2c);
            auVar59[0xd] = -(auVar2[0xd] < UNK_15060db2d);
            auVar59[0xe] = -(auVar2[0xe] < UNK_15060db2e);
            auVar59[0xf] = -(auVar2[0xf] < UNK_15060db2f);
            uVar12 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar59[0xf] >> 7) << 0xf;
          }
          uVar47 = uVar12 | 0xffff0000;
          if (__isa_available < 5) {
            uVar43 = 0;
            if (uVar47 != 0) {
              for (; (uVar47 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
              }
            }
          }
          else {
            uVar43 = 0;
            for (; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
              uVar43 = uVar43 + 1;
            }
          }
          uVar49 = uVar49 + uVar43 & uVar11;
        }
        bVar55 = (byte)uVar46 & 0x7f;
        if (((uVar49 - uVar56 ^ uVar52 - uVar56) & uVar6 & 0xfffffffffffffff0) == 0) {
          *(byte *)(uVar10 + uVar52) = bVar55;
          *(byte *)((ulonglong)((uint)*param_1 & 0xf) + (*param_1 & local_50) + uVar10) = bVar55;
        }
        else {
          lVar48 = uVar49 * lVar9 + uVar5;
          bVar3 = pbVar4[uVar49];
          *(byte *)(uVar49 + uVar10) = bVar55;
          uVar50 = *param_1;
          if (bVar3 == 0x80) {
            *(byte *)((ulonglong)((uint)uVar50 & 0xf) + (uVar49 - 0xf & uVar50) + uVar10) = bVar55;
            (*pcVar8)(param_1,lVar48,uVar53);
            uVar51 = param_1[2];
            *(undefined1 *)(uVar51 + uVar52) = 0x80;
            *(undefined1 *)((ulonglong)((uint)*param_1 & 0xf) + (*param_1 & local_50) + uVar51) =
                 0x80;
            uVar50 = uVar52;
          }
          else {
            *(byte *)((ulonglong)((uint)uVar50 & 0xf) + (uVar49 - 0xf & uVar50) + uVar10) = bVar55;
            uVar50 = uVar57;
            if (uVar51 == 0xffffffffffffffff) {
              while (uVar51 = uVar50, uVar51 < uVar6) {
                if (pbVar4[uVar51] == 0x80) goto LAB_1501d8396;
                uVar50 = uVar51 + 1;
              }
              uVar51 = 0xffffffffffffffff;
            }
LAB_1501d8396:
            lVar54 = uVar51 * lVar9 + uVar5;
            (*pcVar8)(param_1,lVar54,lVar48);
            (*pcVar8)(param_1,lVar48,uVar53);
            (*pcVar8)(param_1,uVar53,lVar54);
            uVar52 = uVar52 - 1;
            local_50 = local_50 - 1;
            uVar57 = uVar57 - 1;
            uVar53 = uVar53 - lVar9;
            uVar50 = uVar51;
          }
        }
      }
      local_50 = local_50 + 1;
      uVar53 = uVar53 + lVar9;
      uVar52 = uVar52 + 1;
      uVar57 = uVar57 + 1;
      uVar51 = uVar50;
    } while (uVar52 != uVar6);
  }
  *(ulonglong *)(param_1[2] - 8) = (*param_1 - (param_1[1] >> 1)) - (*param_1 >> 3);
  return;
}

// EmptyGeneration @ 1501d8400

/* unsigned char * __ptr64 __cdecl absl::lts_20240722::container_internal::EmptyGeneration(void) */

uchar * __cdecl absl::lts_20240722::container_internal::EmptyGeneration(void)

{
  return (uchar *)0x0;
}

// EraseMetaOnly @ 1501d8410

/* void __cdecl absl::lts_20240722::container_internal::EraseMetaOnly(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,unsigned __int64,unsigned __int64)
    */

void __cdecl
absl::lts_20240722::container_internal::EraseMetaOnly
          (CommonFields *param_1,__uint64 param_2,__uint64 param_3)

{
  ctrl_t *pcVar1;
  ctrl_t *pcVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  param_1->size_ = param_1->size_ - 2;
  if (param_1->capacity_ < 0x11) {
LAB_1501d84bb:
    pcVar1 = (param_1->heap_or_soo_).heap.control;
    pcVar1[param_2] = kEmpty;
    pcVar1[(ulonglong)((uint)param_1->capacity_ & 0xf) + (param_2 - 0xf & param_1->capacity_)] =
         kEmpty;
    pcVar1 = (param_1->heap_or_soo_).heap.control + -8;
    *(undefined8 *)pcVar1 = *(undefined8 *)pcVar1 + ~kDeleted;
    return;
  }
  pcVar2 = (param_1->heap_or_soo_).heap.control;
  pcVar1 = pcVar2 + param_2;
  auVar9[0] = -(*pcVar1 == __xmm_80808080808080808080808080808080);
  auVar9[1] = -(pcVar1[1] == UNK_1508be4f1);
  auVar9[2] = -(pcVar1[2] == UNK_1508be4f2);
  auVar9[3] = -(pcVar1[3] == UNK_1508be4f3);
  auVar9[4] = -(pcVar1[4] == UNK_1508be4f4);
  auVar9[5] = -(pcVar1[5] == UNK_1508be4f5);
  auVar9[6] = -(pcVar1[6] == UNK_1508be4f6);
  auVar9[7] = -(pcVar1[7] == UNK_1508be4f7);
  auVar9[8] = -(pcVar1[8] == UNK_1508be4f8);
  auVar9[9] = -(pcVar1[9] == UNK_1508be4f9);
  auVar9[10] = -(pcVar1[10] == UNK_1508be4fa);
  auVar9[0xb] = -(pcVar1[0xb] == UNK_1508be4fb);
  auVar9[0xc] = -(pcVar1[0xc] == UNK_1508be4fc);
  auVar9[0xd] = -(pcVar1[0xd] == UNK_1508be4fd);
  auVar9[0xe] = -(pcVar1[0xe] == UNK_1508be4fe);
  auVar9[0xf] = -(pcVar1[0xf] == UNK_1508be4ff);
  uVar4 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
  pcVar1 = pcVar2 + (param_2 - 0x10 & param_1->capacity_);
  auVar10[0] = -(*pcVar1 == __xmm_80808080808080808080808080808080);
  auVar10[1] = -(pcVar1[1] == UNK_1508be4f1);
  auVar10[2] = -(pcVar1[2] == UNK_1508be4f2);
  auVar10[3] = -(pcVar1[3] == UNK_1508be4f3);
  auVar10[4] = -(pcVar1[4] == UNK_1508be4f4);
  auVar10[5] = -(pcVar1[5] == UNK_1508be4f5);
  auVar10[6] = -(pcVar1[6] == UNK_1508be4f6);
  auVar10[7] = -(pcVar1[7] == UNK_1508be4f7);
  auVar10[8] = -(pcVar1[8] == UNK_1508be4f8);
  auVar10[9] = -(pcVar1[9] == UNK_1508be4f9);
  auVar10[10] = -(pcVar1[10] == UNK_1508be4fa);
  auVar10[0xb] = -(pcVar1[0xb] == UNK_1508be4fb);
  auVar10[0xc] = -(pcVar1[0xc] == UNK_1508be4fc);
  auVar10[0xd] = -(pcVar1[0xd] == UNK_1508be4fd);
  auVar10[0xe] = -(pcVar1[0xe] == UNK_1508be4fe);
  auVar10[0xf] = -(pcVar1[0xf] == UNK_1508be4ff);
  uVar5 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
  if ((uVar5 != 0) && (uVar4 != 0)) {
    uVar6 = uVar4 | 0xffff0000;
    if (__isa_available < 5) {
      uVar8 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    else {
      uVar8 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
    }
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar5 != 0) {
        uVar7 = (ulonglong)(0xf - iVar3);
      }
      else {
        uVar7 = 0x10;
      }
    }
    else {
      uVar7 = (ulonglong)(ushort)LZCOUNT(uVar5);
    }
    if (uVar7 + uVar8 < 0x10) goto LAB_1501d84bb;
  }
  *(undefined8 *)(pcVar2 + -8) = *(undefined8 *)(pcVar2 + -8) | 0x8000000000000000;
  pcVar1 = (param_1->heap_or_soo_).heap.control;
  pcVar1[param_2] = kDeleted;
  pcVar1[(ulonglong)((uint)param_1->capacity_ & 0xf) + (param_2 - 0xf & param_1->capacity_)] =
       kDeleted;
  return;
}

// FindFirstNonFullAfterResize @ 1501d8550

/* public: static struct absl::lts_20240722::container_internal::FindInfo __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::FindFirstNonFullAfterResize(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64,unsigned __int64,unsigned
   __int64) */

CommonFields * __cdecl
absl::lts_20240722::container_internal::HashSetResizeHelper::FindFirstNonFullAfterResize
          (CommonFields *param_1,__uint64 param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R9;
  
  uVar2 = *(ulonglong *)param_2;
  if ((uVar2 < 0x11) && (param_3 < uVar2)) {
    uVar1 = *(ulonglong *)(param_2 + 0x10);
    param_1->size_ = 0;
    uVar2 = (uVar1 >> 5 ^ in_R9) >> 7 & uVar2;
    uVar1 = param_3 >> 1;
    if ((uVar2 - param_3) - 1 < param_3) {
      uVar1 = uVar2;
    }
    param_1->capacity_ = uVar1;
    return param_1;
  }
  find_first_non_full<void>(param_1,param_2);
  return param_1;
}

// FUN_1501d85c0 @ 1501d85c0

CommonFields *
FUN_1501d85c0(CommonFields *param_1,ulonglong *param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 local_res8;
  
  uVar1 = *param_2;
  if ((uVar1 < 0x11) || (uVar1 * 0x19 < (param_2[1] >> 1) * 0x20)) {
    (**(code **)(param_4 + 0x28))(param_2,uVar1 * 2 + 1,local_res8);
  }
  else {
    FUN_1501d80b0(param_2,param_4);
  }
  absl::lts_20240722::container_internal::find_first_non_full<void>(param_1,(__uint64)param_2);
  return param_1;
}

// GetHashRefForEmptyHasher @ 1501d8640

/* void const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::GetHashRefForEmptyHasher(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64) */

void * __cdecl
absl::lts_20240722::container_internal::GetHashRefForEmptyHasher(CommonFields *param_1)

{
  return param_1;
}

// GrowIntoSingleGroupShuffleControlBytes @ 1501d8650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::GrowIntoSingleGroupShuffleControlBytes(enum
   absl::lts_20240722::container_internal::ctrl_t * __ptr64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::GrowIntoSingleGroupShuffleControlBytes
          (HashSetResizeHelper *this,ctrl_t *param_1,__uint64 param_2)

{
  ctrl_t *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar5 = _UNK_1508be4f8;
  uVar4 = ___xmm_80808080808080808080808080808080;
  uVar2 = *(ulonglong *)(this + 0x10);
  uVar6 = uVar2 >> 1;
  uVar7 = 0x7fL << (((byte)uVar6 & 7) << 3) ^ *(ulonglong *)(*(longlong *)this + 1 + uVar6);
  *(undefined8 *)param_1 = uVar7;
  *(undefined8 *)(param_1 + uVar2 + 1) = uVar4;
  *(undefined8 *)(param_1 + uVar2 + 1 + 8) = uVar5;
  lVar3 = *(longlong *)(this + 0x10);
  pcVar1 = param_1 + param_2 + 8;
  pcVar1[0] = kEmpty;
  pcVar1[1] = kEmpty;
  pcVar1[2] = kEmpty;
  pcVar1[3] = kEmpty;
  pcVar1[4] = kEmpty;
  pcVar1[5] = kEmpty;
  pcVar1[6] = kEmpty;
  pcVar1[7] = kEmpty;
  *(undefined8 *)(param_1 + param_2 + 1) = uVar7;
  pcVar1 = param_1 + lVar3 + param_2 + 2;
  pcVar1[0] = kEmpty;
  pcVar1[1] = kEmpty;
  pcVar1[2] = kEmpty;
  pcVar1[3] = kEmpty;
  param_1[param_2] = kSentinel;
  return;
}

// GrowIntoSingleGroupShuffleTransferableSlots @ 1501d86c0

/* private: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::GrowIntoSingleGroupShuffleTransferableSlots(void
   * __ptr64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::
GrowIntoSingleGroupShuffleTransferableSlots
          (HashSetResizeHelper *this,void *param_1,__uint64 param_2)

{
  size_t _Size;
  
  _Size = ((*(ulonglong *)(this + 0x10) >> 1) + 1) * param_2;
  memcpy(param_1,(void *)(*(longlong *)(this + 8) + _Size),
         (*(ulonglong *)(this + 0x10) >> 1) * param_2);
  memcpy((void *)(_Size + (longlong)param_1),*(void **)(this + 8),_Size);
  return;
}

// GrowSizeIntoSingleGroupTransferable @ 1501d8720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::GrowSizeIntoSingleGroupTransferable(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::GrowSizeIntoSingleGroupTransferable
          (HashSetResizeHelper *this,CommonFields *param_1,__uint64 param_2)

{
  ctrl_t *pcVar1;
  ctrl_t *pcVar2;
  ulong64 uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t _Size;
  undefined8 uVar7;
  
  uVar6 = _UNK_1508be4f8;
  uVar5 = ___xmm_80808080808080808080808080808080;
  pcVar2 = (param_1->heap_or_soo_).heap.control;
  uVar3 = param_1->capacity_;
  uVar7 = 0x7fL << (((byte)(*(ulonglong *)(this + 0x10) >> 1) & 7) << 3) ^
          *(ulonglong *)(*(longlong *)this + 1 + (*(ulonglong *)(this + 0x10) >> 1));
  *(undefined8 *)pcVar2 = uVar7;
  lVar4 = *(longlong *)(this + 0x10);
  *(undefined8 *)(pcVar2 + lVar4 + 1) = uVar5;
  *(undefined8 *)(pcVar2 + lVar4 + 1 + 8) = uVar6;
  pcVar1 = pcVar2 + uVar3 + 8;
  pcVar1[0] = kEmpty;
  pcVar1[1] = kEmpty;
  pcVar1[2] = kEmpty;
  pcVar1[3] = kEmpty;
  pcVar1[4] = kEmpty;
  pcVar1[5] = kEmpty;
  pcVar1[6] = kEmpty;
  pcVar1[7] = kEmpty;
  *(undefined8 *)(pcVar2 + uVar3 + 1) = uVar7;
  pcVar1 = pcVar2 + *(longlong *)(this + 0x10) + uVar3 + 2;
  pcVar1[0] = kEmpty;
  pcVar1[1] = kEmpty;
  pcVar1[2] = kEmpty;
  pcVar1[3] = kEmpty;
  pcVar2[uVar3] = kSentinel;
  _Dst = *(void **)((longlong)&param_1->heap_or_soo_ + 8);
  _Size = ((*(ulonglong *)(this + 0x10) >> 1) + 1) * param_2;
  memcpy(_Dst,(void *)(*(longlong *)(this + 8) + _Size),(*(ulonglong *)(this + 0x10) >> 1) * param_2
        );
  memcpy((void *)(_Size + (longlong)_Dst),*(void **)(this + 8),_Size);
  return;
}

// HasNoDeletedAndGrowthLeft @ 1501d87f0

/* public: bool __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::HasNoDeletedAndGrowthLeft(void)const __ptr64
    */

bool __thiscall
absl::lts_20240722::container_internal::GrowthInfo::HasNoDeletedAndGrowthLeft(GrowthInfo *this)

{
  return 0 < (longlong)this->growth_left_info_;
}

// HasNoGrowthLeftAndNoDeleted @ 1501d8800

/* public: bool __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::HasNoGrowthLeftAndNoDeleted(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::GrowthInfo::HasNoGrowthLeftAndNoDeleted(GrowthInfo *this)

{
  return this->growth_left_info_ == 0;
}

// InitControlBytesAfterSoo @ 1501d8810

/* private: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::InitControlBytesAfterSoo(enum
   absl::lts_20240722::container_internal::ctrl_t * __ptr64,enum
   absl::lts_20240722::container_internal::ctrl_t,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::InitControlBytesAfterSoo
          (HashSetResizeHelper *this,ctrl_t *param_1,ctrl_t param_2,__uint64 param_3)

{
  memset(param_1,-0x80,param_3 + 0x10);
  param_1[param_3 + 2] = param_2;
  param_1[1] = param_2;
  param_1[param_3] = kSentinel;
  return;
}

// IsDeleted @ 1501d8860

/* bool __cdecl absl::lts_20240722::container_internal::IsDeleted(enum
   absl::lts_20240722::container_internal::ctrl_t) */

bool __cdecl absl::lts_20240722::container_internal::IsDeleted(ctrl_t param_1)

{
  return param_1 == kDeleted;
}

// IsEmpty @ 1501d8870

/* bool __cdecl absl::lts_20240722::container_internal::IsEmpty(enum
   absl::lts_20240722::container_internal::ctrl_t) */

bool __cdecl absl::lts_20240722::container_internal::IsEmpty(ctrl_t param_1)

{
  return param_1 == kEmpty;
}

// LeadingZeros @ 1501d8880

/* public: unsigned int __cdecl absl::lts_20240722::container_internal::NonIterableBitMask<unsigned
   short,16,0>::LeadingZeros(void)const __ptr64 */

uint __thiscall
absl::lts_20240722::container_internal::NonIterableBitMask<unsigned_short,16,0>::LeadingZeros
          (NonIterableBitMask<unsigned_short,16,0> *this)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = this->mask_;
  if (4 < __isa_available) {
    return (uint)(ushort)LZCOUNT(uVar1);
  }
  iVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar1 == 0) {
    return 0x10;
  }
  return 0xf - iVar2;
}

// MaskEmptyOrDeleted @ 1501d88b0

/* public: class absl::lts_20240722::container_internal::NonIterableBitMask<unsigned short,16,0>
   __cdecl absl::lts_20240722::container_internal::GroupSse2Impl::MaskEmptyOrDeleted(void)const
   __ptr64 */

NonIterableBitMask<unsigned_short,16,0> __thiscall
absl::lts_20240722::container_internal::GroupSse2Impl::MaskEmptyOrDeleted(GroupSse2Impl *this)

{
  ushort *in_RDX;
  undefined1 auVar1 [16];
  
  auVar1[0] = -((this->ctrl).m128i_i8[0] < __xmm_ffffffffffffffffffffffffffffffff);
  auVar1[1] = -((this->ctrl).m128i_i8[1] < UNK_15060db21);
  auVar1[2] = -((this->ctrl).m128i_i8[2] < UNK_15060db22);
  auVar1[3] = -((this->ctrl).m128i_i8[3] < UNK_15060db23);
  auVar1[4] = -((this->ctrl).m128i_i8[4] < UNK_15060db24);
  auVar1[5] = -((this->ctrl).m128i_i8[5] < UNK_15060db25);
  auVar1[6] = -((this->ctrl).m128i_i8[6] < UNK_15060db26);
  auVar1[7] = -((this->ctrl).m128i_i8[7] < UNK_15060db27);
  auVar1[8] = -((this->ctrl).m128i_i8[8] < UNK_15060db28);
  auVar1[9] = -((this->ctrl).m128i_i8[9] < UNK_15060db29);
  auVar1[10] = -((this->ctrl).m128i_i8[10] < UNK_15060db2a);
  auVar1[0xb] = -((this->ctrl).m128i_i8[0xb] < UNK_15060db2b);
  auVar1[0xc] = -((this->ctrl).m128i_i8[0xc] < UNK_15060db2c);
  auVar1[0xd] = -((this->ctrl).m128i_i8[0xd] < UNK_15060db2d);
  auVar1[0xe] = -((this->ctrl).m128i_i8[0xe] < UNK_15060db2e);
  auVar1[0xf] = -((this->ctrl).m128i_i8[0xf] < UNK_15060db2f);
  *in_RDX = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf;
  return (NonIterableBitMask<unsigned_short,16,0>)(ushort)in_RDX;
}

// OverwriteControlAsFull @ 1501d88e0

/* public: void __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::OverwriteControlAsFull(enum
   absl::lts_20240722::container_internal::ctrl_t) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::GrowthInfo::OverwriteControlAsFull
          (GrowthInfo *this,ctrl_t param_1)

{
  this->growth_left_info_ = this->growth_left_info_ - (ulonglong)(param_1 == kEmpty);
  return;
}

// OverwriteEmptyAsFull @ 1501d8900

/* public: void __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::OverwriteEmptyAsFull(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::GrowthInfo::OverwriteEmptyAsFull(GrowthInfo *this)

{
  this->growth_left_info_ = this->growth_left_info_ - 1;
  return;
}

// OverwriteFullAsDeleted @ 1501d8910

/* public: void __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::OverwriteFullAsDeleted(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::GrowthInfo::OverwriteFullAsDeleted(GrowthInfo *this)

{
  this->growth_left_info_ = this->growth_left_info_ | 0x8000000000000000;
  return;
}

// OverwriteFullAsEmpty @ 1501d8930

/* public: void __cdecl
   absl::lts_20240722::container_internal::GrowthInfo::OverwriteFullAsEmpty(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::GrowthInfo::OverwriteFullAsEmpty(GrowthInfo *this)

{
  this->growth_left_info_ = this->growth_left_info_ + 1;
  return;
}

// PrepareInsertAfterSoo @ 1501d8940

/* unsigned __int64 __cdecl absl::lts_20240722::container_internal::PrepareInsertAfterSoo(unsigned
   __int64,unsigned __int64,class absl::lts_20240722::container_internal::CommonFields & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::container_internal::PrepareInsertAfterSoo
          (__uint64 param_1,__uint64 param_2,CommonFields *param_3)

{
  ctrl_t *pcVar1;
  ctrl_t *pcVar2;
  ulonglong uVar3;
  ctrl_t cVar4;
  
  pcVar2 = (param_3->heap_or_soo_).heap.control;
  param_3->size_ = param_3->size_ + 2;
  cVar4 = (ctrl_t)param_1 & ~kEmpty;
  pcVar1 = pcVar2 + -8;
  *(undefined8 *)pcVar1 = *(undefined8 *)pcVar1 - ~kDeleted;
  pcVar1 = (param_3->heap_or_soo_).heap.control;
  uVar3 = (ulonglong)((uint)(((ulonglong)pcVar2 >> 5 ^ param_1) >> 7) & 2);
  pcVar1[uVar3] = cVar4;
  pcVar1[uVar3 + param_3->capacity_ + 1] = cVar4;
  return uVar3;
}

// PrepareInsertCommon @ 1501d8980

/* void __cdecl absl::lts_20240722::container_internal::PrepareInsertCommon(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64) */

void __cdecl absl::lts_20240722::container_internal::PrepareInsertCommon(CommonFields *param_1)

{
  param_1->size_ = param_1->size_ + 2;
  return;
}

// PrepareInsertNonSoo @ 1501d8990

/* unsigned __int64 __cdecl absl::lts_20240722::container_internal::PrepareInsertNonSoo(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,unsigned __int64,struct
   absl::lts_20240722::container_internal::FindInfo,struct
   absl::lts_20240722::container_internal::PolicyFunctions const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::container_internal::PrepareInsertNonSoo
          (ulonglong *param_1,ulonglong param_2,__uint64 *param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined4 *puVar5;
  byte bVar6;
  undefined1 local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar2 = *(ulonglong *)(param_1[2] - 8);
  if (0 < (longlong)uVar2) goto LAB_1501d8ab3;
  if (uVar2 == 0) {
    uVar2 = *param_1;
    (**(code **)(param_4 + 0x28))(param_1,uVar2 * 2 + 1,local_res8);
    uVar3 = *param_1;
    if ((uVar3 < 0x11) && (uVar2 < uVar3)) {
      local_28 = (param_1[2] >> 5 ^ param_2) >> 7 & uVar3;
      if (uVar2 <= (local_28 - uVar2) - 1) {
        local_28 = uVar2 >> 1;
      }
      uStack_20 = 0;
    }
    else {
      find_first_non_full<void>((CommonFields *)&local_28,(__uint64)param_1);
    }
LAB_1501d8aaa:
  }
  else {
    if ((uVar2 & 0x7fffffffffffffff) == 0) {
      uVar2 = *param_1;
      if ((uVar2 < 0x11) || (uVar2 * 0x19 < (param_1[1] >> 1) * 0x20)) {
        (**(code **)(param_4 + 0x28))(param_1,uVar2 * 2 + 1,local_res8);
      }
      else {
        FUN_1501d80b0(param_1,param_4);
      }
      find_first_non_full<void>((CommonFields *)&local_28,(__uint64)param_1);
      goto LAB_1501d8aaa;
    }
    puVar5 = (undefined4 *)find_first_non_full<void>((CommonFields *)&local_28,(__uint64)param_1);
    local_28._0_4_ = *puVar5;
    local_28._4_4_ = puVar5[1];
    uStack_20._0_4_ = puVar5[2];
    uStack_20._4_4_ = puVar5[3];
  }
  *(undefined4 *)param_3 = (undefined4)local_28;
  *(undefined4 *)((longlong)param_3 + 4) = local_28._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_20._4_4_;
LAB_1501d8ab3:
  param_1[1] = param_1[1] + 2;
  _Var4 = *param_3;
  bVar6 = (byte)param_2 & 0x7f;
  plVar1 = (longlong *)(param_1[2] - 8);
  *plVar1 = *plVar1 - (ulonglong)(*(char *)(_Var4 + param_1[2]) == -0x80);
  uVar2 = param_1[2];
  *(byte *)(_Var4 + uVar2) = bVar6;
  *(byte *)((ulonglong)((uint)*param_1 & 0xf) + (_Var4 - 0xf & *param_1) + uVar2) = bVar6;
  return _Var4;
}

// RecordClearedReservation @ 1501d8b40

/* public: void __cdecl
   absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordClearedReservation(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordClearedReservation
          (HashtablezInfoHandle *this)

{
  return;
}

// RecordErase @ 1501d8b50

/* public: void __cdecl
   absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordErase(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordErase
          (HashtablezInfoHandle *this)

{
  return;
}

// RecordInsert @ 1501d8b60

/* public: void __cdecl
   absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordInsert(unsigned
   __int64,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashtablezInfoHandle::RecordInsert
          (HashtablezInfoHandle *this,__uint64 param_1,__uint64 param_2)

{
  return;
}

// RehashProbabilityConstant @ 1501d8b70

/* unsigned __int64 __cdecl absl::lts_20240722::container_internal::RehashProbabilityConstant(void)
    */

__uint64 __cdecl absl::lts_20240722::container_internal::RehashProbabilityConstant(void)

{
  return 0x10;
}

// SetCtrlInSingleGroupTable @ 1501d8b80

/* void __cdecl absl::lts_20240722::container_internal::SetCtrlInSingleGroupTable(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64,unsigned __int64,unsigned
   char,unsigned __int64) */

void __cdecl
absl::lts_20240722::container_internal::SetCtrlInSingleGroupTable
          (CommonFields *param_1,__uint64 param_2,uchar param_3,__uint64 param_4)

{
  ctrl_t *pcVar1;
  
  pcVar1 = (param_1->heap_or_soo_).heap.control;
  pcVar1[param_2] = param_3;
  pcVar1[param_2 + param_1->capacity_ + 1] = param_3;
  return;
}

// SetCtrlInSingleGroupTable @ 1501d8ba0

/* void __cdecl absl::lts_20240722::container_internal::SetCtrlInSingleGroupTable(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64,unsigned __int64,enum
   absl::lts_20240722::container_internal::ctrl_t,unsigned __int64) */

void __cdecl
absl::lts_20240722::container_internal::SetCtrlInSingleGroupTable
          (CommonFields *param_1,__uint64 param_2,ctrl_t param_3,__uint64 param_4)

{
  ctrl_t *pcVar1;
  
  pcVar1 = (param_1->heap_or_soo_).heap.control;
  pcVar1[param_2] = param_3;
  pcVar1[param_2 + param_1->capacity_ + 1] = param_3;
  return;
}

// ShouldInsertBackwards @ 1501d8bc0

/* bool __cdecl absl::lts_20240722::container_internal::ShouldInsertBackwards(unsigned
   __int64,unsigned __int64,enum absl::lts_20240722::container_internal::ctrl_t const * __ptr64) */

bool __cdecl
absl::lts_20240722::container_internal::ShouldInsertBackwards
          (__uint64 param_1,__uint64 param_2,ctrl_t *param_3)

{
  return false;
}

// ShouldInsertBackwardsForDebug @ 1501d8bd0

/* bool __cdecl absl::lts_20240722::container_internal::ShouldInsertBackwardsForDebug(unsigned
   __int64,unsigned __int64,enum absl::lts_20240722::container_internal::ctrl_t const * __ptr64) */

bool __cdecl
absl::lts_20240722::container_internal::ShouldInsertBackwardsForDebug
          (__uint64 param_1,__uint64 param_2,ctrl_t *param_3)

{
  ulonglong *puVar1;
  
  if (0xe < param_1) {
    puVar1 = (ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9e70);
    *puVar1 = *puVar1 + 1;
    if (6 < (((ulonglong)param_3 >> 5 ^ param_2) >> 7 ^ *puVar1 ^ (ulonglong)puVar1) % 0xd) {
      return true;
    }
  }
  return false;
}

// TrailingZeros @ 1501d8cb0

/* public: unsigned int __cdecl absl::lts_20240722::container_internal::NonIterableBitMask<unsigned
   short,16,0>::TrailingZeros(void)const __ptr64 */

uint __thiscall
absl::lts_20240722::container_internal::NonIterableBitMask<unsigned_short,16,0>::TrailingZeros
          (NonIterableBitMask<unsigned_short,16,0> *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = this->mask_ | 0xffff0000;
  if (4 < __isa_available) {
    uVar1 = 0;
    for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
      uVar1 = uVar1 + 1;
    }
    return uVar1;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// TransferSlotAfterSoo @ 1501d8cd0

/* private: void __cdecl
   absl::lts_20240722::container_internal::HashSetResizeHelper::TransferSlotAfterSoo(class
   absl::lts_20240722::container_internal::CommonFields & __ptr64,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::HashSetResizeHelper::TransferSlotAfterSoo
          (HashSetResizeHelper *this,CommonFields *param_1,__uint64 param_2)

{
  memcpy((void *)((longlong)(param_1->heap_or_soo_).heap.slot_array.p + param_2),this,param_2);
  return;
}

// decrement_size @ 1501d8da0

/* public: void __cdecl absl::lts_20240722::container_internal::CommonFields::decrement_size(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::CommonFields::decrement_size(CommonFields *this)

{
  this->size_ = this->size_ - 2;
  return;
}

// find_first_non_full_outofline @ 1501d8db0

/* struct absl::lts_20240722::container_internal::FindInfo __cdecl
   absl::lts_20240722::container_internal::find_first_non_full_outofline(class
   absl::lts_20240722::container_internal::CommonFields const & __ptr64,unsigned __int64) */

CommonFields * __cdecl
absl::lts_20240722::container_internal::find_first_non_full_outofline
          (CommonFields *param_1,__uint64 param_2)

{
  find_first_non_full<void>(param_1,param_2);
  return param_1;
}

// increment_size @ 1501d8dd0

/* public: void __cdecl absl::lts_20240722::container_internal::CommonFields::increment_size(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::CommonFields::increment_size(CommonFields *this)

{
  this->size_ = this->size_ + 2;
  return;
}

// maybe_increment_generation_on_insert @ 1501d8de0

/* public: void __cdecl
   absl::lts_20240722::container_internal::CommonFieldsGenerationInfoDisabled::maybe_increment_generation_on_insert(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::CommonFieldsGenerationInfoDisabled::
maybe_increment_generation_on_insert(CommonFieldsGenerationInfoDisabled *this)

{
  return;
}

// set_size @ 1501d8df0

/* public: void __cdecl absl::lts_20240722::container_internal::CommonFields::set_size(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::CommonFields::set_size(CommonFields *this,__uint64 param_1)

{
  this->size_ = param_1 * 2 | (ulonglong)((uint)this->size_ & 1);
  return;
}

// should_rehash_for_bug_detection_on_insert @ 1501d8e10

/* public: bool __cdecl
   absl::lts_20240722::container_internal::CommonFields::should_rehash_for_bug_detection_on_insert(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::CommonFields::should_rehash_for_bug_detection_on_insert
          (CommonFields *this)

{
  return false;
}

// should_rehash_for_bug_detection_on_insert @ 1501d8e20

/* public: bool __cdecl
   absl::lts_20240722::container_internal::CommonFieldsGenerationInfoDisabled::should_rehash_for_bug_detection_on_insert(enum
   absl::lts_20240722::container_internal::ctrl_t const * __ptr64,unsigned __int64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::CommonFieldsGenerationInfoDisabled::
should_rehash_for_bug_detection_on_insert
          (CommonFieldsGenerationInfoDisabled *this,ctrl_t *param_1,__uint64 param_2)

{
  return false;
}

// should_rehash_for_bug_detection_on_insert @ 1501d8e30

/* public: bool __cdecl
   absl::lts_20240722::container_internal::CommonFieldsGenerationInfoEnabled::should_rehash_for_bug_detection_on_insert(enum
   absl::lts_20240722::container_internal::ctrl_t const * __ptr64,unsigned __int64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::CommonFieldsGenerationInfoEnabled::
should_rehash_for_bug_detection_on_insert
          (CommonFieldsGenerationInfoEnabled *this,ctrl_t *param_1,__uint64 param_2)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  
  if (this->reserved_growth_ == 0xffffffffffffffff) {
    return true;
  }
  if (this->reserved_growth_ != 0) {
    return false;
  }
  puVar2 = (ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9e70)
  ;
  *puVar2 = *puVar2 + 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&hash_internal::MixingHashState::kSeed + (*puVar2 ^ (ulonglong)puVar2);
  return (((ulonglong)param_1 >> 5 ^ SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
          SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) >> 7 & param_2) < 0x10;
}

// should_rehash_for_bug_detection_on_move @ 1501d8ec0

/* public: bool __cdecl
   absl::lts_20240722::container_internal::CommonFieldsGenerationInfoEnabled::should_rehash_for_bug_detection_on_move(enum
   absl::lts_20240722::container_internal::ctrl_t const * __ptr64,unsigned __int64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::CommonFieldsGenerationInfoEnabled::
should_rehash_for_bug_detection_on_move
          (CommonFieldsGenerationInfoEnabled *this,ctrl_t *param_1,__uint64 param_2)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9e70)
  ;
  *puVar2 = *puVar2 + 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&hash_internal::MixingHashState::kSeed + (*puVar2 ^ (ulonglong)puVar2);
  return (((ulonglong)param_1 >> 5 ^ SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
          SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) >> 7 & param_2) < 0x10;
}

