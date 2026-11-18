// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 29

// pair<unsigned___int64,unsigned___int64><unsigned___int64&___ptr64,unsigned___int64&___ptr64,0> @ 14f8dfcb0

/* public: __cdecl std::pair<unsigned __int64,unsigned __int64>::pair<unsigned __int64,unsigned
   __int64><unsigned __int64 & __ptr64,unsigned __int64 & __ptr64,0>(unsigned __int64 &
   __ptr64,unsigned __int64 & __ptr64) __ptr64 */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
pair<unsigned___int64,unsigned___int64><unsigned___int64&___ptr64,unsigned___int64&___ptr64,0>
          (pair<unsigned___int64,unsigned___int64> *this,__uint64 *param_1,__uint64 *param_2)

{
  this->first = *param_1;
  this->second = *param_2;
  return this;
}

// _Maklocstr<wchar_t> @ 14f8dfcd0

/* wchar_t * __ptr64 __cdecl std::_Maklocstr<wchar_t>(char const * __ptr64,wchar_t * __ptr64,struct
   _Cvtvec const & __ptr64) */

wchar_t * __cdecl std::_Maklocstr<wchar_t>(char *param_1,wchar_t *param_2,_Cvtvec *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *extraout_RAX;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  size_t sVar7;
  char *pcVar8;
  wchar_t *pwVar9;
  wchar_t local_res8 [4];
  undefined8 local_res20;
  undefined8 local_38 [2];
  longlong lVar6;
  
  lVar3 = 0;
  local_res20 = 0;
  lVar5 = -1;
  do {
    lVar6 = lVar5;
    lVar5 = lVar6 + 1;
  } while (param_1[lVar5] != '\0');
  sVar7 = lVar6 + 2;
  sVar4 = sVar7;
  pcVar8 = param_1;
  while ((sVar4 != 0 &&
         (iVar1 = _Mbrtowc(local_res8,pcVar8,sVar4,(mbstate_t *)&local_res20,param_3), 0 < iVar1)))
  {
    lVar3 = lVar3 + 1;
    pcVar8 = pcVar8 + iVar1;
    sVar4 = sVar4 - (longlong)iVar1;
  }
  sVar4 = lVar3 + 1;
  pwVar2 = calloc(sVar4,2);
  if (pwVar2 != (wchar_t *)0x0) {
    local_38[0] = 0;
    pwVar9 = pwVar2;
    while ((sVar4 != 0 &&
           (iVar1 = _Mbrtowc(pwVar9,param_1,sVar7,(mbstate_t *)local_38,param_3), 0 < iVar1))) {
      pwVar9 = pwVar9 + 1;
      param_1 = param_1 + iVar1;
      sVar4 = sVar4 - 1;
    }
    *pwVar9 = L'\0';
    return pwVar2;
  }
  _Xbad_alloc();
  return extraout_RAX;
}

// forward<unsigned___int64&___ptr64> @ 14f8dfde0

/* unsigned __int64 & __ptr64 __cdecl std::forward<unsigned __int64 & __ptr64>(unsigned __int64 &
   __ptr64) */

__uint64 * __cdecl std::forward<unsigned___int64&___ptr64>(__uint64 *param_1)

{
  return param_1;
}

// rotl<unsigned___int64,0> @ 14f8dfdf0

/* unsigned __int64 __cdecl std::rotl<unsigned __int64,0>(unsigned __int64,int) */

__uint64 __cdecl std::rotl<unsigned___int64,0>(__uint64 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x3f;
  return param_1 << bVar1 | param_1 >> 0x40 - bVar1;
}

// rotr<unsigned___int64,0> @ 14f8dfe00

/* unsigned __int64 __cdecl std::rotr<unsigned __int64,0>(unsigned __int64,int) */

__uint64 __cdecl std::rotr<unsigned___int64,0>(__uint64 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x3f;
  return param_1 >> bVar1 | param_1 << 0x40 - bVar1;
}

// uint128 @ 14f8dfe10

/* private: __cdecl absl::lts_20240722::uint128::uint128(unsigned __int64,unsigned __int64) __ptr64
    */

uint128 * __thiscall
absl::lts_20240722::uint128::uint128(uint128 *this,__uint64 param_1,__uint64 param_2)

{
  this->lo_ = param_2;
  this->hi_ = param_1;
  return this;
}

// uint128 @ 14f8dfe30

/* public: __cdecl absl::lts_20240722::uint128::uint128(unsigned __int64) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,__uint64 param_1)

{
  this->lo_ = param_1;
  this->hi_ = 0;
  return this;
}

// operator>> @ 14f8dfe50

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator>>(class
   absl::lts_20240722::uint128,int) */

uint128 * __cdecl
absl::lts_20240722::operator>>(uint128 *__return_storage_ptr__,uint128 *param_1,int param_2)

{
  byte bVar1;
  ulong64 local_18;
  ulonglong uStack_10;
  
  bVar1 = (byte)param_2;
  if (0x3f < param_2) {
    __return_storage_ptr__->lo_ = param_1->hi_ >> (bVar1 - 0x40 & 0x3f);
    __return_storage_ptr__->hi_ = 0;
    return __return_storage_ptr__;
  }
  if (param_2 == 0) {
    local_18 = param_1->lo_;
    uStack_10 = param_1->hi_;
  }
  else {
    local_18 = param_1->hi_ << (0x40 - bVar1 & 0x3f) | param_1->lo_ >> (bVar1 & 0x3f);
    uStack_10 = param_1->hi_ >> (bVar1 & 0x3f);
  }
  __return_storage_ptr__->lo_ = local_18;
  __return_storage_ptr__->hi_ = uStack_10;
  return __return_storage_ptr__;
}

// operator_unsigned___int64 @ 14f8dff00

/* public: __cdecl absl::lts_20240722::uint128::operator unsigned __int64(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::uint128::operator_unsigned___int64(uint128 *this)

{
  return this->lo_;
}

// operator* @ 14f8dff10

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator*(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator*(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2->lo_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1->lo_;
  __return_storage_ptr__->lo_ = SUB168(auVar1 * auVar2,0);
  __return_storage_ptr__->hi_ =
       param_1->hi_ * param_2->lo_ + param_2->hi_ * param_1->lo_ + SUB168(auVar1 * auVar2,8);
  return __return_storage_ptr__;
}

// operator^ @ 14f8dff50

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator^(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator^(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  __return_storage_ptr__->lo_ = param_1->lo_ ^ param_2->lo_;
  __return_storage_ptr__->hi_ = param_1->hi_ ^ param_2->hi_;
  return __return_storage_ptr__;
}

// operator*= @ 14f8dff80

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator*=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator*=(uint128 *this,uint128 *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1->lo_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = this->lo_;
  uVar1 = param_1->hi_;
  uVar2 = this->lo_;
  uVar3 = param_1->lo_;
  this->lo_ = SUB168(auVar4 * auVar5,0);
  this->hi_ = this->hi_ * uVar3 + uVar1 * uVar2 + SUB168(auVar4 * auVar5,8);
  return this;
}

// CombineContiguousImpl @ 14f8dffc0

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::CombineContiguousImpl(unsigned
   __int64,unsigned char const * __ptr64,unsigned __int64,struct std::integral_constant<int,4>) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::CombineContiguousImpl
          (__uint64 param_1,uchar *param_2,__uint64 param_3,integral_constant<int,4> param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  
  while( true ) {
    if (param_3 < 9) {
      if (param_3 < 4) {
        if (param_3 != 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = ((ulonglong)
                          ((uint)*(byte *)((param_3 >> 1) + (longlong)param_2) <<
                           (((byte)(param_3 >> 1) & 3) << 3) |
                          (uint)*(byte *)((longlong)param_2 + (param_3 - 1)) <<
                          ((char)param_3 * '\b' - 8U & 0x1f)) | (ulonglong)(byte)*(uint *)param_2) +
                         param_1;
          param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                    SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
        }
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ((ulonglong)*(uint *)((longlong)param_2 + (param_3 - 4)) <<
                        ((char)param_3 * '\b' - 0x20U & 0x3f) | (ulonglong)*(uint *)param_2) +
                       param_1;
        param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                  SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
      }
      return param_1;
    }
    if (param_3 < 0x401) break;
    uVar6 = param_3 >> 10;
    param_3 = param_3 + uVar6 * -0x400;
    do {
      uVar5 = CityHash32((char *)param_2,0x400);
      param_2 = (uchar *)((longlong)param_2 + 0x400);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5 + param_1;
      param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar5 = CityHash32((char *)param_2,param_3);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5 + param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// CombineContiguousImpl @ 14f8e00f0

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::CombineContiguousImpl(unsigned
   __int64,unsigned char const * __ptr64,unsigned __int64,struct std::integral_constant<int,8>) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::CombineContiguousImpl
          (__uint64 param_1,uchar *param_2,__uint64 param_3,integral_constant<int,8> param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  __uint64 _Var7;
  ulonglong uVar8;
  
  while( true ) {
    if (param_3 < 0x11) {
      if (param_3 < 9) {
        if (param_3 < 4) {
          if (param_3 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ((ulonglong)
                            ((uint)*(byte *)((param_3 >> 1) + (longlong)param_2) <<
                             (((byte)(param_3 >> 1) & 3) << 3) |
                            (uint)*(byte *)((longlong)param_2 + (param_3 - 1)) <<
                            ((char)param_3 * '\b' - 8U & 0x1f)) |
                           (ulonglong)(byte)*(ulonglong *)param_2) + param_1;
            param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                      SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8);
          }
        }
        else {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = ((ulonglong)*(uint *)((longlong)param_2 + (param_3 - 4)) <<
                          ((char)param_3 * '\b' - 0x20U & 0x3f) |
                         (ulonglong)(uint)*(ulonglong *)param_2) + param_1;
          param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
                    SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8);
        }
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (*(ulonglong *)param_2 >> 0x35 | *(ulonglong *)param_2 << 0xb) +
                       param_1 + 0x9ddfea08eb382d69;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_1 + 0x9ddfea08eb382d69 ^
                       *(ulonglong *)((longlong)param_2 + (param_3 - 8));
        param_1 = SUB168(auVar1 * auVar3,0) ^ SUB168(auVar1 * auVar3,8);
      }
      return param_1;
    }
    if (param_3 < 0x401) break;
    uVar8 = param_3 >> 10;
    param_3 = param_3 + uVar8 * -0x400;
    do {
      _Var7 = CityHash64((char *)param_2,0x400);
      param_2 = (uchar *)((longlong)param_2 + 0x400);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_1 + _Var7;
      param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  _Var7 = CityHash64((char *)param_2,param_3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = _Var7 + param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
}

// CombineLargeContiguousImpl32 @ 14f8e0250

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::CombineLargeContiguousImpl32(unsigned
   __int64,unsigned char const * __ptr64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::CombineLargeContiguousImpl32
          (__uint64 param_1,uchar *param_2,__uint64 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  
  if (0x3ff < param_3) {
    uVar4 = param_3 >> 10;
    param_3 = param_3 + uVar4 * -0x400;
    do {
      uVar2 = CityHash32((char *)param_2,0x400);
      param_2 = param_2 + 0x400;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 + param_1;
      param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  _Var3 = CombineContiguousImpl(param_1,param_2,param_3,(integral_constant<int,4>)0x0);
  return _Var3;
}

// CombineLargeContiguousImpl64 @ 14f8e0300

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::CombineLargeContiguousImpl64(unsigned
   __int64,unsigned char const * __ptr64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::CombineLargeContiguousImpl64
          (__uint64 param_1,uchar *param_2,__uint64 param_3)

{
  undefined1 auVar1 [16];
  __uint64 _Var2;
  ulonglong uVar3;
  
  if (0x3ff < param_3) {
    uVar3 = param_3 >> 10;
    param_3 = param_3 + uVar3 * -0x400;
    do {
      _Var2 = CityHash64((char *)param_2,0x400);
      param_2 = param_2 + 0x400;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1 + _Var2;
      param_1 = SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  _Var2 = CombineContiguousImpl(param_1,param_2,param_3,(integral_constant<int,8>)0x0);
  return _Var2;
}

// Hash64 @ 14f8e03b0

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Hash64(unsigned char const * __ptr64,unsigned
   __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::Hash64(uchar *param_1,__uint64 param_2)

{
  __uint64 _Var1;
  
  _Var1 = CityHash64((char *)param_1,param_2);
  return _Var1;
}

// LowLevelHashImpl @ 14f8e03c0

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::LowLevelHashImpl(unsigned char const *
   __ptr64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::LowLevelHashImpl
          (uchar *param_1,__uint64 param_2)

{
  __uint64 _Var1;
  
  _Var1 = LowLevelHashLenGt16(param_1,param_2,0x153531f80,(__uint64 *)&DAT_153531f88);
  return _Var1;
}

// MakeUint128 @ 14f8e03e0

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::MakeUint128(unsigned
   __int64,unsigned __int64) */

uint128 * __cdecl
absl::lts_20240722::MakeUint128(uint128 *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  __return_storage_ptr__->lo_ = param_2;
  __return_storage_ptr__->hi_ = param_1;
  return __return_storage_ptr__;
}

// Mix @ 14f8e0400

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Mix(unsigned __int64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::Mix(__uint64 param_1,__uint64 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
}

// PiecewiseChunkSize @ 14f8e0420

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::PiecewiseChunkSize(void) */

__uint64 __cdecl absl::lts_20240722::hash_internal::PiecewiseChunkSize(void)

{
  return 0x400;
}

// Read1To3 @ 14f8e0430

/* private: static unsigned int __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Read1To3(unsigned char const *
   __ptr64,unsigned __int64) */

uint __cdecl
absl::lts_20240722::hash_internal::MixingHashState::Read1To3(uchar *param_1,__uint64 param_2)

{
  return (uint)param_1[param_2 - 1] << ((char)param_2 * '\b' - 8U & 0x1f) |
         (uint)param_1[param_2 >> 1] << (((byte)(param_2 >> 1) & 3) << 3) | (uint)*param_1;
}

// Read4To8 @ 14f8e0470

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Read4To8(unsigned char const *
   __ptr64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::Read4To8(uchar *param_1,__uint64 param_2)

{
  return (ulonglong)*(uint *)(param_1 + (param_2 - 4)) << ((char)param_2 * '\b' - 0x20U & 0x3f) |
         (ulonglong)*(uint *)param_1;
}

// Read9To16 @ 14f8e0490

/* private: static struct std::pair<unsigned __int64,unsigned __int64> __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Read9To16(unsigned char const *
   __ptr64,unsigned __int64) */

pair<unsigned___int64,unsigned___int64> * __cdecl
absl::lts_20240722::hash_internal::MixingHashState::Read9To16
          (pair<unsigned___int64,unsigned___int64> *__return_storage_ptr__,uchar *param_1,
          __uint64 param_2)

{
  __return_storage_ptr__->first = *(ulong64 *)param_1;
  __return_storage_ptr__->second = *(ulong64 *)(param_1 + (param_2 - 8));
  return __return_storage_ptr__;
}

// Seed @ 14f8e04b0

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::Seed(void) */

__uint64 __cdecl absl::lts_20240722::hash_internal::MixingHashState::Seed(void)

{
  return 0x153531f80;
}

// Uint128High64 @ 14f8e04c0

/* unsigned __int64 __cdecl absl::lts_20240722::Uint128High64(class absl::lts_20240722::uint128) */

__uint64 __cdecl absl::lts_20240722::Uint128High64(uint128 *param_1)

{
  return param_1->hi_;
}

// Uint128Low64 @ 14f8e04d0

/* unsigned __int64 __cdecl absl::lts_20240722::Uint128Low64(class absl::lts_20240722::uint128) */

__uint64 __cdecl absl::lts_20240722::Uint128Low64(uint128 *param_1)

{
  return param_1->lo_;
}

// is_constant_evaluated @ 14f8e04e0

/* bool __cdecl std::is_constant_evaluated(void) */

bool __cdecl std::is_constant_evaluated(void)

{
  return false;
}

// wmemcpy @ 14f8e04f0

wchar_t * __cdecl wmemcpy(wchar_t *_S1,wchar_t *_S2,size_t _N)

{
  wchar_t *pwVar1;
  
  pwVar1 = memcpy(_S1,_S2,_N * 2);
  return pwVar1;
}

