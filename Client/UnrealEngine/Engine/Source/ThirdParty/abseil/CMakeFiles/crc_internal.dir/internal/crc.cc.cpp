// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 27

// MaskOfLength<unsigned_int> @ 150246f60

/* unsigned int __cdecl absl::lts_20240722::crc_internal::MaskOfLength<unsigned int>(int) */

uint __cdecl absl::lts_20240722::crc_internal::MaskOfLength<unsigned_int>(int param_1)

{
  return (2 << ((char)param_1 - 1U & 0x1f)) - 1;
}

// RotateRight<unsigned_int> @ 150246f80

/* unsigned int __cdecl absl::lts_20240722::crc_internal::RotateRight<unsigned int>(unsigned
   int,int,int) */

uint __cdecl
absl::lts_20240722::crc_internal::RotateRight<unsigned_int>(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = (char)param_2 - (byte)param_3;
  return (2 << (bVar1 - 1 & 0x1f)) - 1U & param_1 >> ((byte)param_3 & 0x1f) |
         param_1 << (bVar1 & 0x1f);
}

// RoundUp<4> @ 150246fb0

/* unsigned char const * __ptr64 __cdecl absl::lts_20240722::crc_internal::RoundUp<4>(unsigned char
   const * __ptr64) */

uchar * __cdecl absl::lts_20240722::crc_internal::RoundUp<4>(uchar *param_1)

{
  return (uchar *)((ulonglong)(param_1 + 3) & 0xfffffffffffffffc);
}

// CRC32 @ 150247030

/* public: __cdecl absl::lts_20240722::crc_internal::CRC32::CRC32(void) __ptr64 */

CRC32 * __thiscall absl::lts_20240722::crc_internal::CRC32::CRC32(CRC32 *this)

{
  *(undefined ***)this = vftable;
  return this;
}

// CRC @ 150247050

/* protected: __cdecl absl::lts_20240722::crc_internal::CRC::CRC(void) __ptr64 */

CRC * __thiscall absl::lts_20240722::crc_internal::CRC::CRC(CRC *this)

{
  *(undefined ***)this = vftable;
  return this;
}

// CRCImpl @ 150247070

/* public: __cdecl absl::lts_20240722::crc_internal::CRCImpl::CRCImpl(void) __ptr64 */

CRCImpl * __thiscall absl::lts_20240722::crc_internal::CRCImpl::CRCImpl(CRCImpl *this)

{
  *(undefined ***)this = vftable;
  return this;
}

// ~CRC32 @ 150247090

/* public: virtual __cdecl absl::lts_20240722::crc_internal::CRC32::~CRC32(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRC32::~CRC32(CRC32 *this)

{
  *(undefined ***)this = CRC::vftable;
  return;
}

// ~CRC @ 1502470b0

/* public: virtual __cdecl absl::lts_20240722::crc_internal::CRC::~CRC(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRC::~CRC(CRC *this)

{
  *(undefined ***)this = vftable;
  return;
}

// ~CRCImpl @ 1502470d0

/* public: virtual __cdecl absl::lts_20240722::crc_internal::CRCImpl::~CRCImpl(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRCImpl::~CRCImpl(CRCImpl *this)

{
  *(undefined ***)this = CRC::vftable;
  return;
}

// FUN_150247180 @ 150247180

void FUN_150247180(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)param_1[1];
  uVar1 = *(uint *)*param_1;
  *(uint *)*param_1 =
       *(uint *)(lVar2 + 0x1008 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
       *(uint *)(lVar2 + 0xc08 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
       *(uint *)(lVar2 + 0x808 + (ulonglong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(lVar2 + 0x1408 + (ulonglong)(uVar1 & 0xff) * 4) ^ **(uint **)param_1[2];
  uVar1 = *(uint *)param_1[3];
  lVar2 = *(longlong *)param_1[1];
  *(uint *)param_1[3] =
       *(uint *)(lVar2 + 0x1008 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
       *(uint *)(lVar2 + 0xc08 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
       *(uint *)(lVar2 + 0x808 + (ulonglong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(lVar2 + 0x1408 + (ulonglong)(uVar1 & 0xff) * 4) ^
       *(uint *)(*(longlong *)param_1[2] + 4);
  uVar1 = *(uint *)param_1[4];
  lVar2 = *(longlong *)param_1[1];
  *(uint *)param_1[4] =
       *(uint *)(lVar2 + 0x1008 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
       *(uint *)(lVar2 + 0xc08 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
       *(uint *)(lVar2 + 0x808 + (ulonglong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(lVar2 + 0x1408 + (ulonglong)(uVar1 & 0xff) * 4) ^
       *(uint *)(*(longlong *)param_1[2] + 8);
  lVar2 = *(longlong *)param_1[1];
  uVar1 = *(uint *)param_1[5];
  *(uint *)param_1[5] =
       *(uint *)(lVar2 + 0x1008 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
       *(uint *)(lVar2 + 0xc08 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
       *(uint *)(lVar2 + 0x808 + (ulonglong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(lVar2 + 0x1408 + (ulonglong)(uVar1 & 0xff) * 4) ^
       *(uint *)(*(longlong *)param_1[2] + 0xc);
  *(longlong *)param_1[2] = *(longlong *)param_1[2] + 0x10;
  return;
}

// `scalar_deleting_destructor' @ 150247360

/* public: virtual void * __ptr64 __cdecl absl::lts_20240722::crc_internal::CRC32::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::crc_internal::CRC32::_scalar_deleting_destructor_(CRC32 *this,uint param_1)

{
  *(undefined ***)this = CRC::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2008);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1502473a0

/* public: virtual void * __ptr64 __cdecl absl::lts_20240722::crc_internal::CRC::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::crc_internal::CRC::_scalar_deleting_destructor_(CRC *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1502473e0

/* public: virtual void * __ptr64 __cdecl absl::lts_20240722::crc_internal::CRCImpl::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::crc_internal::CRCImpl::_scalar_deleting_destructor_(CRCImpl *this,uint param_1)

{
  *(undefined ***)this = CRC::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Crc32c @ 150247420

/* public: static class absl::lts_20240722::crc_internal::CRC * __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CRC::Crc32c(void) */

CRC * __cdecl absl::lts_20240722::crc_internal::CRC::Crc32c(void)

{
  CRCImpl *_Dst;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < DAT_155409f10) {
    _Init_thread_header(&DAT_155409f10);
    if (DAT_155409f10 == -1) {
      _Dst = TryNewCRC32AcceleratedX86ARMCombined();
      if (_Dst == (CRCImpl *)0x0) {
        _Dst = ::operator_new(0x2008);
        if (_Dst == (CRCImpl *)0x0) {
          _Dst = (CRCImpl *)0x0;
        }
        else {
          memset(_Dst,0,0x2008);
          *(undefined ***)_Dst = CRC32::vftable;
        }
      }
      (**(code **)(*(longlong *)_Dst + 0x30))(_Dst);
      DAT_155409f08 = (CRC *)_Dst;
      _Init_thread_footer(&DAT_155409f10);
      return DAT_155409f08;
    }
  }
  return DAT_155409f08;
}

// Extend @ 1502474f0

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::Extend(unsigned int *
   __ptr64,void const * __ptr64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::crc_internal::CRC32::Extend
          (CRC32 *this,uint *param_1,void *param_2,__uint64 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar2 = *param_1;
  puVar1 = (uint *)((longlong)param_2 + param_3);
  puVar6 = (uint *)((longlong)param_2 + 3U & 0xfffffffffffffffc);
  if (puVar6 <= puVar1) {
    for (; param_2 != puVar6; param_2 = (void *)((longlong)param_2 + 1)) {
      uVar2 = uVar2 >> 8 ^
              *(uint *)(this + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)(byte)*(uint *)param_2) * 4 +
                               8);
    }
  }
  if (0xf < (ulonglong)((longlong)puVar1 - (longlong)param_2)) {
    uVar4 = (ulonglong)(uVar2 ^ *(uint *)param_2);
    uVar2 = *(uint *)((longlong)param_2 + 4);
    uVar9 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
    uVar5 = *(uint *)((longlong)param_2 + 8);
    param_2 = (void *)((longlong)param_2 + 0x10);
    if (0x100 < (longlong)puVar1 - (longlong)param_2) {
      lVar10 = -(longlong)param_2;
      do {
        uVar7 = *(uint *)(this + (uVar4 >> 8 & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + (uVar4 >> 0x10 & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (uVar4 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + (uVar4 & 0xff) * 4 + 0x1408) ^ *(uint *)param_2;
        uVar2 = *(uint *)(this + ((ulonglong)(uVar2 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + (ulonglong)(byte)(uVar2 >> 0x10) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar2 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar2 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 4);
        uVar5 = *(uint *)(this + (ulonglong)(byte)(uVar5 >> 8) * 4 + 0x1008) ^
                *(uint *)(this + (ulonglong)(byte)(uVar5 >> 0x10) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar5 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 8);
        uVar8 = *(uint *)(this + (uVar9 >> 8 & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + (uVar9 >> 0x10 & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (uVar9 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + (uVar9 & 0xff) * 4 + 0x1408) ^ *(uint *)((longlong)param_2 + 0xc);
        uVar7 = *(uint *)(this + ((ulonglong)(uVar7 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar7 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar7 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x10);
        uVar2 = *(uint *)(this + ((ulonglong)(uVar2 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar2 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar2 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x14);
        uVar5 = *(uint *)(this + ((ulonglong)(uVar5 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar5 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar5 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar5 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x18);
        uVar8 = *(uint *)(this + ((ulonglong)(uVar8 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar8 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar8 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar8 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x1c);
        uVar7 = *(uint *)(this + ((ulonglong)(uVar7 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar7 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar7 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x20);
        uVar4 = (ulonglong)
                (*(uint *)(this + ((ulonglong)(uVar7 >> 8) & 0xff) * 4 + 0x1008) ^
                 *(uint *)(this + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4 + 0xc08) ^
                 *(uint *)(this + (ulonglong)(uVar7 >> 0x18) * 4 + 0x808) ^
                 *(uint *)(this + ((ulonglong)uVar7 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x30));
        uVar2 = *(uint *)(this + ((ulonglong)(uVar2 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar2 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar2 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x24);
        uVar2 = *(uint *)(this + ((ulonglong)(uVar2 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar2 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar2 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x34);
        uVar5 = *(uint *)(this + ((ulonglong)(uVar5 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar5 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar5 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar5 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x28);
        uVar5 = *(uint *)(this + ((ulonglong)(uVar5 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar5 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar5 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar5 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x38);
        lVar10 = lVar10 + -0x40;
        uVar7 = *(uint *)(this + ((ulonglong)(uVar8 >> 8) & 0xff) * 4 + 0x1008) ^
                *(uint *)(this + ((ulonglong)(uVar8 >> 0x10) & 0xff) * 4 + 0xc08) ^
                *(uint *)(this + (ulonglong)(uVar8 >> 0x18) * 4 + 0x808) ^
                *(uint *)(this + ((ulonglong)uVar8 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x2c);
        uVar9 = (ulonglong)
                (*(uint *)(this + ((ulonglong)(uVar7 >> 8) & 0xff) * 4 + 0x1008) ^
                 *(uint *)(this + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4 + 0xc08) ^
                 *(uint *)(this + (ulonglong)(uVar7 >> 0x18) * 4 + 0x808) ^
                 *(uint *)(this + ((ulonglong)uVar7 & 0xff) * 4 + 0x1408) ^
                *(uint *)((longlong)param_2 + 0x3c));
        param_2 = (void *)((longlong)param_2 + 0x40);
      } while (0x100 < (longlong)(lVar10 + (longlong)puVar1));
    }
    for (; 0xf < (ulonglong)((longlong)puVar1 - (longlong)param_2);
        param_2 = (void *)((longlong)param_2 + 0x10)) {
      uVar4 = (ulonglong)
              (*(uint *)(this + (uVar4 >> 8 & 0xff) * 4 + 0x1008) ^
               *(uint *)(this + (uVar4 >> 0x10 & 0xff) * 4 + 0xc08) ^
               *(uint *)(this + (uVar4 >> 0x18) * 4 + 0x808) ^
               *(uint *)(this + (uVar4 & 0xff) * 4 + 0x1408) ^ *(uint *)param_2);
      uVar2 = *(uint *)(this + (ulonglong)(byte)(uVar2 >> 8) * 4 + 0x1008) ^
              *(uint *)(this + (ulonglong)(byte)(uVar2 >> 0x10) * 4 + 0xc08) ^
              *(uint *)(this + (ulonglong)(uVar2 >> 0x18) * 4 + 0x808) ^
              *(uint *)(this + ((ulonglong)uVar2 & 0xff) * 4 + 0x1408) ^
              *(uint *)((longlong)param_2 + 4);
      uVar5 = *(uint *)(this + (ulonglong)(byte)(uVar5 >> 8) * 4 + 0x1008) ^
              *(uint *)(this + (ulonglong)(byte)(uVar5 >> 0x10) * 4 + 0xc08) ^
              *(uint *)(this + (ulonglong)(uVar5 >> 0x18) * 4 + 0x808) ^
              *(uint *)(this + ((ulonglong)uVar5 & 0xff) * 4 + 0x1408) ^
              *(uint *)((longlong)param_2 + 8);
      uVar9 = (ulonglong)
              (*(uint *)(this + (uVar9 >> 8 & 0xff) * 4 + 0x1008) ^
               *(uint *)(this + (uVar9 >> 0x10 & 0xff) * 4 + 0xc08) ^
               *(uint *)(this + (uVar9 >> 0x18) * 4 + 0x808) ^
               *(uint *)(this + (uVar9 & 0xff) * 4 + 0x1408) ^ *(uint *)((longlong)param_2 + 0xc));
    }
    uVar8 = (uint)uVar9;
    uVar7 = (uint)uVar4;
    for (; uVar3 = uVar2, 3 < (ulonglong)((longlong)puVar1 - (longlong)param_2);
        param_2 = (void *)((longlong)param_2 + 4)) {
      uVar7 = (uint)uVar9;
      uVar8 = *(uint *)(this + (uVar4 >> 8 & 0xff) * 4 + 0x1008) ^
              *(uint *)(this + (uVar4 >> 0x10 & 0xff) * 4 + 0xc08) ^
              *(uint *)(this + (uVar4 >> 0x18) * 4 + 0x808) ^
              *(uint *)(this + (uVar4 & 0xff) * 4 + 0x1408) ^ *(uint *)param_2;
      uVar9 = (ulonglong)uVar8;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar5;
      uVar5 = uVar7;
      uVar7 = uVar3;
    }
    uVar2 = uVar7 >> 8 ^ *(uint *)(this + (ulonglong)(byte)uVar7 * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar3 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8) ^ uVar3;
    uVar2 = uVar3 >> 8 ^ *(uint *)(this + (ulonglong)(uVar3 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar5 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8) ^ uVar5;
    uVar2 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar8 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8) ^ uVar8;
    uVar2 = uVar8 >> 8 ^ *(uint *)(this + (ulonglong)(uVar8 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
    uVar2 = uVar2 >> 8 ^ *(uint *)(this + (ulonglong)(uVar2 & 0xff) * 4 + 8);
  }
  for (; param_2 != puVar1; param_2 = (void *)((longlong)param_2 + 1)) {
    uVar2 = uVar2 >> 8 ^
            *(uint *)(this + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)(byte)*(uint *)param_2) * 4 + 8
                     );
  }
  *param_1 = uVar2;
  return;
}

// ExtendByZeroes @ 150247ce0

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::ExtendByZeroes(unsigned int
   * __ptr64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::crc_internal::CRC32::ExtendByZeroes(CRC32 *this,uint *param_1,__uint64 param_2)

{
  ExtendByZeroesImpl(param_1,param_2,(uint *)(this + 0x408),(uint *)(this + 8));
  return;
}

// ExtendByZeroesImpl @ 150247d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl absl::lts_20240722::crc_internal::CRC32::ExtendByZeroesImpl(unsigned
   int * __ptr64,unsigned __int64,unsigned int const * __ptr64 const,unsigned int const * __ptr64
   const) */

void __cdecl
absl::lts_20240722::crc_internal::CRC32::ExtendByZeroesImpl
          (uint *param_1,__uint64 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong local_48 [4];
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = __security_cookie.value ^ (ulonglong)local_48;
    uVar8 = *param_1;
    uVar5 = 0;
    do {
      if ((param_2 & 0xf) != 0) {
        local_48[0] = 0;
        lVar7 = 4;
        local_48[1] = (ulonglong)param_3[(longlong)(int)(((uint)param_2 & 0xf) + (int)uVar5) + -1] *
                      2;
        local_48[2] = (ulonglong)param_3[(longlong)(int)(((uint)param_2 & 0xf) + (int)uVar5) + -1]
                      << 2;
        local_48[3] = local_48[2] ^ local_48[1];
        uVar4 = 0;
        do {
          uVar6 = uVar8 & 3;
          uVar1 = uVar8 >> 6;
          uVar2 = uVar8 >> 4;
          uVar3 = uVar8 >> 2;
          uVar8 = uVar8 >> 8;
          uVar4 = uVar4 ^ ((local_48[uVar1 & 3] << 2 ^ local_48[uVar2 & 3]) << 2 ^
                          local_48[uVar3 & 3]) << 2 ^ local_48[uVar6];
          uVar4 = (ulonglong)param_4[uVar4 & 0xff] ^ uVar4 >> 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        uVar8 = (uint)uVar4;
      }
      uVar5 = (ulonglong)((int)uVar5 + 0xf);
      param_2 = param_2 >> 4;
    } while (param_2 != 0);
    *param_1 = uVar8;
  }
  return;
}

// FillWordTable @ 150247e30

/* public: static void __cdecl absl::lts_20240722::crc_internal::CRCImpl::FillWordTable(unsigned
   int,unsigned int,int,unsigned int (* __ptr64)[256]) */

void __cdecl
absl::lts_20240722::crc_internal::CRCImpl::FillWordTable
          (uint param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      iVar3 = 0x80;
      lVar8 = lVar5 * 0x100;
      param_4[lVar5 * 0x100] = 0;
      do {
        if (lVar5 == 0) {
          while (iVar3 == 0x80) {
            param_4[0x80] = param_2;
            iVar3 = 0x40;
          }
LAB_150247ec9:
          uVar4 = param_4[iVar3 * 2 + lVar8];
        }
        else {
          if (iVar3 != 0x80) goto LAB_150247ec9;
          uVar4 = param_4[lVar5 * 0x100 + -0xff];
        }
        lVar6 = (longlong)iVar3;
        uVar1 = param_1 ^ uVar4 >> 1;
        if ((uVar4 & 1) == 0) {
          uVar1 = uVar4 >> 1;
        }
        iVar3 = iVar3 >> 1;
        param_4[lVar6 + lVar8] = uVar1;
      } while (iVar3 != 0);
      iVar3 = 2;
      do {
        iVar2 = iVar3 * 2;
        lVar6 = (longlong)iVar2 - (longlong)(iVar3 + 1);
        puVar7 = param_4 + (iVar3 + 1) + lVar8;
        do {
          *puVar7 = puVar7[-(longlong)iVar3] ^ param_4[iVar3 + lVar8];
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
        iVar3 = iVar2;
      } while (iVar2 != 0x100);
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_3);
  }
  return;
}

// FillZeroesTable @ 150247f90

/* public: static int __cdecl absl::lts_20240722::crc_internal::CRCImpl::FillZeroesTable(unsigned
   int,unsigned int (* __ptr64)[256]) */

int __cdecl absl::lts_20240722::crc_internal::CRCImpl::FillZeroesTable(uint param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  
  lVar4 = 3;
  uVar8 = 0x40000000;
  do {
    uVar3 = (ulonglong)uVar8;
    uVar6 = 0;
    uVar9 = 0x80000000;
    do {
      uVar11 = uVar6 ^ (uint)uVar3;
      if ((uVar8 & uVar9) == 0) {
        uVar11 = uVar6;
      }
      uVar6 = uVar11;
      uVar1 = uVar3 >> 1;
      uVar2 = uVar3 & 1;
      uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
      if (uVar2 == 0) {
        uVar3 = uVar1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
    lVar4 = lVar4 + -1;
    uVar8 = uVar6;
  } while (lVar4 != 0);
  iVar12 = 0;
  lVar4 = 1;
  puVar7 = param_2 + 2;
  do {
    iVar12 = iVar12 + 0xf;
    puVar13 = puVar7 + 0xf;
    lVar5 = 3;
    uVar8 = uVar6;
    do {
      puVar7[-2] = uVar8;
      uVar3 = (ulonglong)uVar6;
      uVar9 = 0;
      uVar11 = 0x80000000;
      do {
        uVar10 = uVar9 ^ (uint)uVar3;
        if ((uVar8 & uVar11) == 0) {
          uVar10 = uVar9;
        }
        uVar9 = uVar10;
        uVar1 = uVar3 >> 1;
        uVar2 = uVar3 & 1;
        uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
        if (uVar2 == 0) {
          uVar3 = uVar1;
        }
        uVar11 = uVar11 >> 1;
      } while (uVar11 != 0);
      puVar7[-1] = uVar9;
      uVar3 = (ulonglong)uVar6;
      uVar8 = 0;
      uVar11 = 0x80000000;
      do {
        uVar10 = uVar8 ^ (uint)uVar3;
        if ((uVar9 & uVar11) == 0) {
          uVar10 = uVar8;
        }
        uVar8 = uVar10;
        uVar1 = uVar3 >> 1;
        uVar2 = uVar3 & 1;
        uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
        if (uVar2 == 0) {
          uVar3 = uVar1;
        }
        uVar11 = uVar11 >> 1;
      } while (uVar11 != 0);
      *puVar7 = uVar8;
      uVar3 = (ulonglong)uVar6;
      uVar9 = 0;
      uVar11 = 0x80000000;
      do {
        uVar10 = uVar9 ^ (uint)uVar3;
        if ((uVar8 & uVar11) == 0) {
          uVar10 = uVar9;
        }
        uVar9 = uVar10;
        uVar1 = uVar3 >> 1;
        uVar2 = uVar3 & 1;
        uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
        if (uVar2 == 0) {
          uVar3 = uVar1;
        }
        uVar11 = uVar11 >> 1;
      } while (uVar11 != 0);
      puVar7[1] = uVar9;
      uVar3 = (ulonglong)uVar6;
      uVar11 = 0;
      uVar8 = 0x80000000;
      do {
        uVar10 = uVar11 ^ (uint)uVar3;
        if ((uVar9 & uVar8) == 0) {
          uVar10 = uVar11;
        }
        uVar11 = uVar10;
        uVar1 = uVar3 >> 1;
        uVar2 = uVar3 & 1;
        uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
        if (uVar2 == 0) {
          uVar3 = uVar1;
        }
        uVar8 = uVar8 >> 1;
      } while (uVar8 != 0);
      puVar7[2] = uVar11;
      uVar3 = (ulonglong)uVar6;
      uVar10 = 0x80000000;
      uVar9 = 0;
      do {
        uVar8 = uVar9 ^ (uint)uVar3;
        if ((uVar11 & uVar10) == 0) {
          uVar8 = uVar9;
        }
        uVar1 = uVar3 >> 1;
        uVar2 = uVar3 & 1;
        uVar3 = (ulonglong)(param_1 ^ (uint)uVar1);
        if (uVar2 == 0) {
          uVar3 = uVar1;
        }
        uVar10 = uVar10 >> 1;
        uVar9 = uVar8;
      } while (uVar10 != 0);
      puVar7 = puVar7 + 5;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar4 = lVar4 << 4;
    puVar7 = puVar13;
    uVar6 = uVar8;
  } while (lVar4 != 0);
  if (0x100 < iVar12) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog(kFatal,"crc.cc",0xa0,"Check %s failed: %s","j <= 256","");
  }
  return iVar12;
}

// InitTables @ 1502481e0

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::InitTables(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRC32::InitTables(CRC32 *this)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar2 = operator_new__(0x1000);
  CRCImpl::FillWordTable(0x82f63b78,0x82f63b78,1,puVar2);
  lVar4 = 0x100;
  puVar3 = puVar2;
  do {
    *(uint *)(this + (8 - (longlong)puVar2) + (longlong)puVar3) = *puVar3;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  uVar5 = (*(uint *)(this + 0x1e8) ^ 0x82f63b) >> 8 ^
          *(uint *)(this + (ulonglong)((*(uint *)(this + 0x1e8) ^ 0x82f63b) & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  uVar5 = uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8);
  CRCImpl::FillWordTable
            (0x82f63b78,uVar5 >> 8 ^ *(uint *)(this + (ulonglong)(uVar5 & 0xff) * 4 + 8),4,puVar2);
  puVar3 = puVar2 + 1;
  do {
    lVar6 = 0x80;
    do {
      *(uint *)(this + (0x804 - (longlong)puVar2) + (longlong)puVar3) = puVar3[-1];
      *(uint *)(this + (0x808 - (longlong)puVar2) + (longlong)puVar3) = *puVar3;
      puVar3 = puVar3 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  iVar1 = CRCImpl::FillZeroesTable(0x82f63b78,puVar2);
  if (iVar1 < 0x101) {
    lVar4 = (longlong)iVar1;
    puVar3 = puVar2;
    if (0 < iVar1) {
      do {
        *(uint *)(this + (0x408 - (longlong)puVar2) + (longlong)puVar3) = *puVar3;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    operator_delete__(puVar2);
    CRCImpl::FillWordTable(0x8f6e37a0,0x8f6e37a0,1,(uint *)(this + 0x1808));
    iVar1 = CRCImpl::FillZeroesTable(0x8f6e37a0,(uint *)(this + 0x1c08));
    if (iVar1 < 0x101) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"crc.cc",0xfd,"Check %s failed: %s",
               "j <= static_cast<int>(ABSL_ARRAYSIZE(this->reverse_zeroes_))","");
  }
                    /* WARNING: Subroutine does not return */
  raw_log_internal::RawLog
            (kFatal,"crc.cc",0xd0,"Check %s failed: %s",
             "j <= static_cast<int>(ABSL_ARRAYSIZE(this->zeroes_))","");
}

// Load32 @ 150248410

/* unsigned int __cdecl absl::lts_20240722::little_endian::Load32(void const * __ptr64) */

uint __cdecl absl::lts_20240722::little_endian::Load32(void *param_1)

{
  return *(uint *)param_1;
}

// NewInternal @ 150248420

/* public: static class absl::lts_20240722::crc_internal::CRCImpl * __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CRCImpl::NewInternal(void) */

CRCImpl * __cdecl absl::lts_20240722::crc_internal::CRCImpl::NewInternal(void)

{
  CRCImpl *pCVar1;
  
  pCVar1 = TryNewCRC32AcceleratedX86ARMCombined();
  if (pCVar1 == (CRCImpl *)0x0) {
    pCVar1 = ::operator_new(0x2008);
    if (pCVar1 != (CRCImpl *)0x0) {
      memset(pCVar1,0,0x2008);
      *(undefined ***)pCVar1 = CRC32::vftable;
      (*(code *)CRC32::vftable[6])(pCVar1);
      return pCVar1;
    }
    pCVar1 = (CRCImpl *)0x0;
  }
  (**(code **)(*(longlong *)pCVar1 + 0x30))(pCVar1);
  return pCVar1;
}

// FUN_150248490 @ 150248490

void FUN_150248490(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0x80000000;
  do {
    uVar1 = uVar3 ^ param_2;
    if ((*param_1 & uVar4) == 0) {
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    uVar2 = param_2 >> 1;
    uVar1 = param_2 & 1;
    param_2 = uVar2 ^ param_3;
    if (uVar1 == 0) {
      param_2 = uVar2;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  *param_1 = uVar3;
  return;
}

// Scramble @ 150248540

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::Scramble(unsigned int *
   __ptr64)const __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRC32::Scramble(CRC32 *this,uint *param_1)

{
  *param_1 = *param_1 + 0x2e76e41b >> 0x11 | (*param_1 + 0x2e76e41b) * 0x8000;
  return;
}

// ToHost32 @ 150248560

/* unsigned int __cdecl absl::lts_20240722::little_endian::ToHost32(unsigned int) */

uint __cdecl absl::lts_20240722::little_endian::ToHost32(uint param_1)

{
  return param_1;
}

// UnextendByZeroes @ 150248570

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::UnextendByZeroes(unsigned
   int * __ptr64,unsigned __int64)const __ptr64 */

void __thiscall
absl::lts_20240722::crc_internal::CRC32::UnextendByZeroes
          (CRC32 *this,uint *param_1,__uint64 param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 >> 1 & 0x55555555 | (*param_1 & 0xd5555555) * 2;
  uVar1 = (uVar1 & 0xf3333333) << 2 | uVar1 >> 2 & 0x33333333;
  uVar1 = (uVar1 & 0xff0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f;
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  ExtendByZeroesImpl(param_1,param_2,(uint *)(this + 0x1c08),(uint *)(this + 0x1808));
  uVar1 = *param_1 >> 1 & 0x55555555 | (*param_1 & 0xd5555555) * 2;
  uVar1 = (uVar1 & 0xf3333333) << 2 | uVar1 >> 2 & 0x33333333;
  uVar1 = (uVar1 & 0xff0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f;
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

// Unscramble @ 150248640

/* public: virtual void __cdecl absl::lts_20240722::crc_internal::CRC32::Unscramble(unsigned int *
   __ptr64)const __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CRC32::Unscramble(CRC32 *this,uint *param_1)

{
  *param_1 = (*param_1 >> 0xf | *param_1 << 0x11) + 0xd1891be5;
  return;
}

