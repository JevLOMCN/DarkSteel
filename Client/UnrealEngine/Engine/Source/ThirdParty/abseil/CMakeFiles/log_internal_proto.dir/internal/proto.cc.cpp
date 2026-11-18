// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 15

// operator[] @ 14f8e7490

/* public: char const & __ptr64 __cdecl absl::lts_20240722::Span<char const >::operator[](unsigned
   __int64)const __ptr64 */

char * __thiscall
absl::lts_20240722::Span<char_const_>::operator[](Span<char_const_> *this,__uint64 param_1)

{
  return this->ptr_ + param_1;
}

// operator[] @ 14f8e74a0

/* public: char & __ptr64 __cdecl absl::lts_20240722::Span<char>::operator[](unsigned __int64)const
   __ptr64 */

char * __thiscall absl::lts_20240722::Span<char>::operator[](Span<char> *this,__uint64 param_1)

{
  return this->ptr_ + param_1;
}

// DecodeFrom @ 14f8e7560

/* public: bool __cdecl absl::lts_20240722::log_internal::ProtoField::DecodeFrom(class
   absl::lts_20240722::Span<char const > * __ptr64) __ptr64 */

bool __thiscall
absl::lts_20240722::log_internal::ProtoField::DecodeFrom
          (ProtoField *this,Span<char_const_> *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = param_1->len_;
  if (uVar7 == 0) {
    return false;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar8 = uVar4;
  uVar9 = uVar4;
  if (uVar7 != 0) {
    uVar6 = uVar4;
    do {
      pbVar1 = (byte *)(param_1->ptr_ + uVar9);
      uVar9 = uVar9 + 1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 + 7;
      uVar8 = uVar8 | (ulonglong)(*pbVar1 & 0x7f) << (bVar5 & 0x3f);
      if (-1 < (char)*pbVar1) break;
    } while (uVar9 < uVar7);
  }
  param_1->ptr_ = param_1->ptr_ + uVar9;
  uVar6 = (ulonglong)((uint)uVar8 & 7);
  param_1->len_ = uVar7 - uVar9;
  *(ulonglong *)this = uVar8 >> 3;
  *(ulonglong *)(this + 8) = uVar6;
  if (uVar6 == 0) {
    uVar7 = param_1->len_;
    uVar8 = uVar4;
    if (uVar7 != 0) {
      uVar9 = uVar4;
      do {
        pbVar1 = (byte *)(param_1->ptr_ + uVar8);
        uVar8 = uVar8 + 1;
        bVar5 = (byte)uVar9;
        uVar9 = uVar9 + 7;
        uVar4 = uVar4 | (ulonglong)(*pbVar1 & 0x7f) << (bVar5 & 0x3f);
        if (-1 < (char)*pbVar1) break;
      } while (uVar8 < uVar7);
    }
    param_1->ptr_ = param_1->ptr_ + uVar8;
    param_1->len_ = uVar7 - uVar8;
    *(ulonglong *)(this + 0x10) = uVar4;
  }
  else {
    if (uVar6 == 1) {
      uVar7 = param_1->len_;
      uVar8 = uVar4;
      if (uVar7 != 0) {
        uVar9 = uVar4;
        do {
          pbVar1 = (byte *)(param_1->ptr_ + uVar8);
          uVar8 = uVar8 + 1;
          bVar5 = (byte)uVar9;
          uVar9 = uVar9 + 8;
          uVar4 = uVar4 | (ulonglong)*pbVar1 << (bVar5 & 0x3f);
          if (uVar9 == 0x40) break;
        } while (uVar8 < uVar7);
      }
      param_1->ptr_ = param_1->ptr_ + uVar8;
      param_1->len_ = uVar7 - uVar8;
      *(ulonglong *)(this + 0x10) = uVar4;
      return true;
    }
    if (uVar6 == 2) {
      uVar7 = param_1->len_;
      uVar8 = uVar4;
      if (uVar7 != 0) {
        uVar9 = uVar4;
        do {
          pbVar1 = (byte *)(param_1->ptr_ + uVar8);
          uVar8 = uVar8 + 1;
          bVar5 = (byte)uVar9;
          uVar9 = uVar9 + 7;
          uVar4 = uVar4 | (ulonglong)(*pbVar1 & 0x7f) << (bVar5 & 0x3f);
          if (-1 < (char)*pbVar1) break;
        } while (uVar8 < uVar7);
      }
      param_1->ptr_ = param_1->ptr_ + uVar8;
      param_1->len_ = uVar7 - uVar8;
      *(ulonglong *)(this + 0x10) = uVar4;
      uVar7 = param_1->len_;
      if (uVar7 < uVar4) {
        uVar4 = uVar7;
      }
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      *(char **)(this + 0x18) = param_1->ptr_;
      *(ulonglong *)(this + 0x20) = uVar7;
      lVar2 = *(longlong *)(this + 0x20);
      param_1->ptr_ = param_1->ptr_ + lVar2;
      param_1->len_ = param_1->len_ - lVar2;
      return true;
    }
    if (uVar6 == 5) {
      uVar7 = param_1->len_;
      uVar8 = uVar4;
      if (uVar7 != 0) {
        uVar9 = uVar4;
        do {
          pbVar1 = (byte *)(param_1->ptr_ + uVar8);
          uVar8 = uVar8 + 1;
          bVar5 = (byte)uVar9;
          uVar9 = uVar9 + 8;
          uVar3 = (uint)uVar4 | (uint)*pbVar1 << (bVar5 & 0x1f);
          uVar4 = (ulonglong)uVar3;
          if (uVar9 == 0x20) break;
        } while (uVar8 < uVar7);
      }
      param_1->ptr_ = param_1->ptr_ + uVar8;
      param_1->len_ = uVar7 - uVar8;
      *(ulonglong *)(this + 0x10) = (ulonglong)uVar3;
      return true;
    }
  }
  return true;
}

// FUN_14f8e7790 @ 14f8e7790

ulonglong FUN_14f8e7790(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = param_1[1];
  uVar4 = 0;
  uVar5 = uVar4;
  uVar6 = uVar4;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(*param_1 + uVar5);
      uVar5 = uVar5 + 1;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 + 7;
      uVar6 = uVar6 | (ulonglong)(*pbVar1 & 0x7f) << (bVar3 & 0x3f);
      if (-1 < (char)*pbVar1) break;
    } while (uVar5 < uVar2);
  }
  *param_1 = *param_1 + uVar5;
  param_1[1] = uVar2 - uVar5;
  return uVar6;
}

// Encode32Bit @ 14f8e77f0

/* bool __cdecl absl::lts_20240722::log_internal::Encode32Bit(unsigned __int64,unsigned int,class
   absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::Encode32Bit(__uint64 param_1,uint param_2,Span<char> *param_3)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1 * 8 | 5;
  if (uVar5 < 0x80) {
    uVar6 = 1;
  }
  else {
    _Var2 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar6 = _Var2 + 1;
  }
  if (param_3->len_ < uVar6 + 4) {
    param_3->len_ = 0;
    return false;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      uVar1 = uVar7 + 1;
      bVar4 = (byte)uVar5;
      uVar3 = 0xffffff80;
      if (uVar1 == uVar6) {
        uVar3 = 0;
      }
      uVar5 = uVar5 >> 7;
      param_3->ptr_[uVar7] = (byte)uVar3 | bVar4 & 0x7f;
      uVar7 = uVar1;
    } while (uVar1 < uVar6);
  }
  param_3->ptr_ = param_3->ptr_ + uVar6;
  param_3->len_ = param_3->len_ - uVar6;
  *param_3->ptr_ = (char)param_2;
  param_3->ptr_[1] = (char)(param_2 >> 8);
  param_3->ptr_[2] = (char)(param_2 >> 0x10);
  param_3->ptr_[3] = (char)(param_2 >> 0x18);
  param_3->ptr_ = param_3->ptr_ + 4;
  param_3->len_ = param_3->len_ - 4;
  return true;
}

// Encode64Bit @ 14f8e78e0

/* bool __cdecl absl::lts_20240722::log_internal::Encode64Bit(unsigned __int64,unsigned
   __int64,class absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::Encode64Bit(__uint64 param_1,__uint64 param_2,Span<char> *param_3)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1 * 8 | 1;
  if (uVar5 < 0x80) {
    uVar6 = 1;
  }
  else {
    _Var2 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar6 = _Var2 + 1;
  }
  if (param_3->len_ < uVar6 + 8) {
    param_3->len_ = 0;
    return false;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      uVar1 = uVar7 + 1;
      bVar4 = (byte)uVar5;
      uVar3 = 0xffffff80;
      if (uVar1 == uVar6) {
        uVar3 = 0;
      }
      uVar5 = uVar5 >> 7;
      param_3->ptr_[uVar7] = (byte)uVar3 | bVar4 & 0x7f;
      uVar7 = uVar1;
    } while (uVar1 < uVar6);
  }
  param_3->ptr_ = param_3->ptr_ + uVar6;
  param_3->len_ = param_3->len_ - uVar6;
  *param_3->ptr_ = (char)param_2;
  param_3->ptr_[1] = (char)(param_2 >> 8);
  param_3->ptr_[2] = (char)(param_2 >> 0x10);
  param_3->ptr_[3] = (char)(param_2 >> 0x18);
  param_3->ptr_[4] = (char)(param_2 >> 0x20);
  param_3->ptr_[5] = (char)(param_2 >> 0x28);
  param_3->ptr_[6] = (char)(param_2 >> 0x30);
  param_3->ptr_[7] = (char)(param_2 >> 0x38);
  param_3->ptr_ = param_3->ptr_ + 8;
  param_3->len_ = param_3->len_ - 8;
  return true;
}

// EncodeBytes @ 14f8e7a00

/* bool __cdecl absl::lts_20240722::log_internal::EncodeBytes(unsigned __int64,class
   absl::lts_20240722::Span<char const >,class absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeBytes
          (__uint64 param_1,Span<char_const_> *param_2,Span<char> *param_3)

{
  ulonglong _Size;
  char *_Src;
  bool bVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = param_1 * 8 | 2;
  uVar7 = 1;
  if (uVar6 < 0x80) {
    uVar10 = 1;
  }
  else {
    _Var2 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar10 = _Var2 + 1;
  }
  _Size = param_2->len_;
  if (0x7f < _Size) {
    _Var2 = VarintSize(_Size >> 7);
    uVar7 = _Var2 + 1;
  }
  uVar8 = 0;
  if (param_3->len_ < _Size + uVar7 + uVar10) {
    param_3->len_ = 0;
    bVar1 = false;
  }
  else {
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        uVar4 = uVar9 + 1;
        bVar5 = (byte)uVar6;
        uVar3 = 0xffffff80;
        if (uVar4 == uVar10) {
          uVar3 = uVar8;
        }
        uVar6 = uVar6 >> 7;
        param_3->ptr_[uVar9] = (byte)uVar3 | bVar5 & 0x7f;
        uVar9 = uVar4;
      } while (uVar4 < uVar10);
    }
    param_3->ptr_ = param_3->ptr_ + uVar10;
    param_3->len_ = param_3->len_ - uVar10;
    uVar6 = uVar8;
    uVar10 = _Size;
    if (uVar7 != 0) {
      do {
        uVar9 = uVar6 + 1;
        bVar5 = (byte)uVar10;
        uVar4 = 0xffffff80;
        if (uVar9 == uVar7) {
          uVar4 = uVar8;
        }
        uVar10 = uVar10 >> 7;
        param_3->ptr_[uVar6] = (byte)uVar4 | bVar5 & 0x7f;
        uVar6 = uVar9;
      } while (uVar9 < uVar7);
    }
    param_3->ptr_ = param_3->ptr_ + uVar7;
    _Src = param_2->ptr_;
    param_3->len_ = param_3->len_ - uVar7;
    memcpy(param_3->ptr_,_Src,_Size);
    param_3->ptr_ = param_3->ptr_ + _Size;
    bVar1 = true;
    param_3->len_ = param_3->len_ - _Size;
  }
  return bVar1;
}

// EncodeBytesTruncate @ 14f8e7b40

/* bool __cdecl absl::lts_20240722::log_internal::EncodeBytesTruncate(unsigned __int64,class
   absl::lts_20240722::Span<char const >,class absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeBytesTruncate
          (__uint64 param_1,Span<char_const_> *param_2,Span<char> *param_3)

{
  char *_Src;
  bool bVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong _Size;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  
  uVar10 = param_1 * 8 | 2;
  uVar7 = 1;
  if (uVar10 < 0x80) {
    uVar6 = 1;
  }
  else {
    _Var2 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar6 = _Var2 + 1;
  }
  _Size = param_2->len_;
  uVar8 = param_3->len_;
  uVar3 = _Size;
  if (uVar8 < _Size) {
    uVar3 = uVar8;
  }
  if (0x7f < uVar3) {
    _Var2 = VarintSize(uVar3 >> 7);
    uVar7 = _Var2 + 1;
  }
  if ((uVar7 + uVar6 <= uVar8) && (uVar8 < _Size + uVar7 + uVar6)) {
    _Size = (uVar8 - uVar7) - uVar6;
  }
  uVar3 = 0;
  if (uVar8 < _Size + uVar7 + uVar6) {
    param_3->len_ = 0;
    bVar1 = false;
  }
  else {
    uVar8 = uVar3;
    if (uVar6 != 0) {
      do {
        uVar5 = uVar8 + 1;
        bVar9 = (byte)uVar10;
        uVar4 = 0xffffff80;
        if (uVar5 == uVar6) {
          uVar4 = uVar3;
        }
        uVar10 = uVar10 >> 7;
        param_3->ptr_[uVar8] = (byte)uVar4 | bVar9 & 0x7f;
        uVar8 = uVar5;
      } while (uVar5 < uVar6);
    }
    param_3->ptr_ = param_3->ptr_ + uVar6;
    param_3->len_ = param_3->len_ - uVar6;
    uVar10 = _Size;
    uVar6 = uVar3;
    if (uVar7 != 0) {
      do {
        uVar8 = uVar6 + 1;
        uVar5 = 0xffffff80;
        if (uVar8 == uVar7) {
          uVar5 = uVar3;
        }
        param_3->ptr_[uVar6] = (byte)uVar5 | (byte)uVar10 & 0x7f;
        uVar10 = uVar10 >> 7;
        uVar6 = uVar8;
      } while (uVar8 < uVar7);
    }
    param_3->ptr_ = param_3->ptr_ + uVar7;
    _Src = param_2->ptr_;
    param_3->len_ = param_3->len_ - uVar7;
    memcpy(param_3->ptr_,_Src,_Size);
    param_3->ptr_ = param_3->ptr_ + _Size;
    bVar1 = true;
    param_3->len_ = param_3->len_ - _Size;
  }
  return bVar1;
}

// EncodeMessageLength @ 14f8e7cb0

/* void __cdecl absl::lts_20240722::log_internal::EncodeMessageLength(class
   absl::lts_20240722::Span<char>,class absl::lts_20240722::Span<char> const * __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::EncodeMessageLength(Span<char> *param_1,Span<char> *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar1 = (byte *)param_1->ptr_;
  if ((pbVar1 != (byte *)0x0) && (pbVar1 <= param_2->ptr_)) {
    pbVar2 = (byte *)param_1->len_;
    pbVar6 = (byte *)(param_2->ptr_ + (-(longlong)pbVar1 - (longlong)pbVar2));
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar1;
      pbVar7 = pbVar2;
      do {
        bVar5 = (byte)pbVar6;
        bVar4 = 0x80;
        if (pbVar3 + (1 - (longlong)pbVar1) == pbVar2) {
          bVar4 = 0;
        }
        pbVar6 = (byte *)((ulonglong)pbVar6 >> 7);
        *pbVar3 = bVar4 | bVar5 & 0x7f;
        pbVar7 = pbVar7 + -1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar7 != (byte *)0x0);
    }
  }
  return;
}

// EncodeMessageStart @ 14f8e7d30

/* class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::log_internal::EncodeMessageStart(unsigned __int64,unsigned __int64,class
   absl::lts_20240722::Span<char> * __ptr64) */

Span<char> * __cdecl
absl::lts_20240722::log_internal::EncodeMessageStart
          (Span<char> *__return_storage_ptr__,__uint64 param_1,__uint64 param_2,Span<char> *param_3)

{
  char *pcVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = param_1 * 8 | 2;
  uVar8 = 1;
  if (uVar7 < 0x80) {
    uVar4 = 1;
  }
  else {
    _Var2 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar4 = _Var2 + 1;
  }
  if (param_3->len_ < param_2) {
    param_2 = param_3->len_;
  }
  if (0x7f < param_2) {
    _Var2 = VarintSize(param_2 >> 7);
    uVar8 = _Var2 + 1;
  }
  uVar9 = 0;
  if (param_3->len_ < uVar8 + uVar4) {
    param_3->len_ = 0;
    __return_storage_ptr__->ptr_ = (char *)0x0;
    __return_storage_ptr__->len_ = 0;
  }
  else {
    uVar10 = uVar9;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar10 + 1;
        bVar6 = (byte)uVar7;
        uVar3 = 0xffffff80;
        if (uVar5 == uVar4) {
          uVar3 = uVar9;
        }
        uVar7 = uVar7 >> 7;
        param_3->ptr_[uVar10] = (byte)uVar3 | bVar6 & 0x7f;
        uVar10 = uVar5;
      } while (uVar5 < uVar4);
    }
    param_3->ptr_ = param_3->ptr_ + uVar4;
    pcVar1 = param_3->ptr_;
    uVar4 = param_3->len_ - uVar4;
    param_3->len_ = uVar4;
    if (uVar8 < uVar4) {
      uVar4 = uVar8;
    }
    uVar7 = uVar9;
    if (uVar8 != 0) {
      do {
        uVar10 = uVar7 + 1;
        uVar5 = 0xffffff80;
        if (uVar10 == uVar8) {
          uVar5 = uVar9;
        }
        param_3->ptr_[uVar7] = (char)uVar5;
        uVar7 = uVar10;
      } while (uVar10 < uVar8);
    }
    param_3->ptr_ = param_3->ptr_ + uVar8;
    param_3->len_ = param_3->len_ - uVar8;
    __return_storage_ptr__->ptr_ = pcVar1;
    __return_storage_ptr__->len_ = uVar4;
  }
  return __return_storage_ptr__;
}

// FUN_14f8e7e90 @ 14f8e7e90

void FUN_14f8e7e90(ulonglong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = uVar4 + 1;
      bVar2 = (byte)param_1;
      bVar3 = 0x80;
      if (uVar1 == param_2) {
        bVar3 = 0;
      }
      param_1 = param_1 >> 7;
      *(byte *)(uVar4 + *param_3) = bVar3 | bVar2 & 0x7f;
      uVar4 = uVar1;
    } while (uVar1 < param_2);
  }
  *param_3 = *param_3 + param_2;
  param_3[1] = param_3[1] - param_2;
  return;
}

// EncodeVarint @ 14f8e7ee0

/* bool __cdecl absl::lts_20240722::log_internal::EncodeVarint(unsigned __int64,unsigned
   __int64,class absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeVarint
          (__uint64 param_1,__uint64 param_2,Span<char> *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = param_1 * 8;
  uVar8 = 1;
  if (uVar10 < 0x80) {
    uVar7 = 1;
  }
  else {
    _Var3 = VarintSize((param_1 & 0x1fffffffffffffff) >> 4);
    uVar7 = _Var3 + 1;
  }
  if (0x7f < param_2) {
    _Var3 = VarintSize(param_2 >> 7);
    uVar8 = _Var3 + 1;
  }
  uVar9 = 0;
  if (param_3->len_ < uVar8 + uVar7) {
    param_3->len_ = 0;
    bVar2 = false;
  }
  else {
    uVar5 = uVar9;
    if (uVar7 != 0) {
      do {
        uVar1 = uVar5 + 1;
        bVar6 = (byte)uVar10;
        uVar4 = 0xffffff80;
        if (uVar1 == uVar7) {
          uVar4 = uVar9;
        }
        uVar10 = uVar10 >> 7;
        param_3->ptr_[uVar5] = (byte)uVar4 | bVar6 & 0x7f;
        uVar5 = uVar1;
      } while (uVar1 < uVar7);
    }
    param_3->ptr_ = param_3->ptr_ + uVar7;
    param_3->len_ = param_3->len_ - uVar7;
    uVar10 = uVar9;
    if (uVar8 != 0) {
      do {
        uVar7 = uVar10 + 1;
        bVar6 = (byte)param_2;
        uVar5 = 0xffffff80;
        if (uVar7 == uVar8) {
          uVar5 = uVar9;
        }
        param_2 = param_2 >> 7;
        param_3->ptr_[uVar10] = (byte)uVar5 | bVar6 & 0x7f;
        uVar10 = uVar7;
      } while (uVar7 < uVar8);
    }
    param_3->ptr_ = param_3->ptr_ + uVar8;
    bVar2 = true;
    param_3->len_ = param_3->len_ - uVar8;
  }
  return bVar2;
}

// remove_prefix @ 14f8e8020

/* public: void __cdecl absl::lts_20240722::Span<char const >::remove_prefix(unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::Span<char_const_>::remove_prefix(Span<char_const_> *this,__uint64 param_1)

{
  this->ptr_ = this->ptr_ + param_1;
  this->len_ = this->len_ - param_1;
  return;
}

// remove_suffix @ 14f8e8030

/* public: void __cdecl absl::lts_20240722::Span<char const >::remove_suffix(unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::Span<char_const_>::remove_suffix(Span<char_const_> *this,__uint64 param_1)

{
  this->len_ = this->len_ - param_1;
  return;
}

// subspan @ 14f8e8040

/* public: class absl::lts_20240722::Span<char const > __cdecl absl::lts_20240722::Span<char const
   >::subspan(unsigned __int64,unsigned __int64)const __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::Span<char_const_>::subspan
          (Span<char_const_> *this,Span<char_const_> *__return_storage_ptr__,__uint64 param_1,
          __uint64 param_2)

{
  ulonglong uVar1;
  
  if (param_1 <= this->len_) {
    uVar1 = this->len_ - param_1;
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    __return_storage_ptr__->ptr_ = this->ptr_ + param_1;
    __return_storage_ptr__->len_ = uVar1;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  base_internal::ThrowStdOutOfRange("pos > size()");
}

