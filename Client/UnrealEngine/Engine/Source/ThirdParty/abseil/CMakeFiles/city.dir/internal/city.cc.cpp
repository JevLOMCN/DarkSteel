// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 20

// pair<unsigned___int64,unsigned___int64><unsigned___int64,unsigned___int64,0> @ 14f8dea70

/* public: __cdecl std::pair<unsigned __int64,unsigned __int64>::pair<unsigned __int64,unsigned
   __int64><unsigned __int64,unsigned __int64,0>(unsigned __int64 && __ptr64,unsigned __int64 &&
   __ptr64) __ptr64 */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
pair<unsigned___int64,unsigned___int64><unsigned___int64,unsigned___int64,0>
          (pair<unsigned___int64,unsigned___int64> *this,__uint64 *param_1,__uint64 *param_2)

{
  this->first = *param_1;
  this->second = *param_2;
  return this;
}

// operator=<std::pair<unsigned___int64,unsigned___int64>,0> @ 14f8dea90

/* public: struct std::pair<unsigned __int64,unsigned __int64> & __ptr64 __cdecl std::pair<unsigned
   __int64,unsigned __int64>::operator=<struct std::pair<unsigned __int64,unsigned
   __int64>,0>(struct std::pair<unsigned __int64,unsigned __int64> && __ptr64) __ptr64 */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
operator=<std::pair<unsigned___int64,unsigned___int64>,0>
          (pair<unsigned___int64,unsigned___int64> *this,
          pair<unsigned___int64,unsigned___int64> *param_1)

{
  this->first = param_1->first;
  this->second = param_1->second;
  return this;
}

// forward<unsigned___int64> @ 14f8deab0

/* unsigned __int64 && __ptr64 __cdecl std::forward<unsigned __int64>(unsigned __int64 & __ptr64) */

__uint64 * __cdecl std::forward<unsigned___int64>(__uint64 *param_1)

{
  return param_1;
}

// make_pair<unsigned___int64,unsigned___int64> @ 14f8deac0

/* struct std::pair<unsigned __int64,unsigned __int64> __cdecl std::make_pair<unsigned
   __int64,unsigned __int64>(unsigned __int64 && __ptr64,unsigned __int64 && __ptr64) */

pair<unsigned___int64,unsigned___int64> * __cdecl
std::make_pair<unsigned___int64,unsigned___int64>
          (pair<unsigned___int64,unsigned___int64> *__return_storage_ptr__,__uint64 *param_1,
          __uint64 *param_2)

{
  __return_storage_ptr__->first = *param_1;
  __return_storage_ptr__->second = *param_2;
  return __return_storage_ptr__;
}

// move<unsigned_int&___ptr64> @ 14f8deae0

/* unsigned int && __ptr64 __cdecl std::move<unsigned int & __ptr64>(unsigned int & __ptr64) */

uint * __cdecl std::move<unsigned_int&___ptr64>(uint *param_1)

{
  return param_1;
}

// move<unsigned___int64&___ptr64> @ 14f8deaf0

/* unsigned __int64 && __ptr64 __cdecl std::move<unsigned __int64 & __ptr64>(unsigned __int64 &
   __ptr64) */

__uint64 * __cdecl std::move<unsigned___int64&___ptr64>(__uint64 *param_1)

{
  return param_1;
}

// swap<unsigned_int,0> @ 14f8deb00

/* void __cdecl std::swap<unsigned int,0>(unsigned int & __ptr64,unsigned int & __ptr64) */

void __cdecl std::swap<unsigned_int,0>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// swap<unsigned___int64,0> @ 14f8deb20

/* void __cdecl std::swap<unsigned __int64,0>(unsigned __int64 & __ptr64,unsigned __int64 & __ptr64)
    */

void __cdecl std::swap<unsigned___int64,0>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 _Var1;
  
  _Var1 = *param_1;
  *param_1 = *param_2;
  *param_2 = _Var1;
  return;
}

// CityHash32 @ 14f8deb40

/* unsigned int __cdecl absl::lts_20240722::hash_internal::CityHash32(char const * __ptr64,unsigned
   __int64) */

uint __cdecl absl::lts_20240722::hash_internal::CityHash32(char *param_1,__uint64 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = (uint)param_2;
  if (0x18 < param_2) {
    uVar5 = ((uint)(*(int *)(param_1 + (param_2 - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 4)) * 0x16a88000) * 0x1b873593 ^ uVar3;
    uVar5 = ((uVar5 >> 0x13 | uVar5 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 - 0x10)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 0x10)) * 0x16a88000) * 0x1b873593;
    uVar5 = ((uVar5 >> 0x13 | uVar5 << 0xd) + 0xfaddaf14) * 5;
    uVar9 = ((uint)(*(int *)(param_1 + (param_2 - 8)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 8)) * 0x16a88000) * 0x1b873593 ^ uVar3 * -0x3361d2af;
    uVar9 = ((uVar9 >> 0x13 | uVar9 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 - 0xc)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 0xc)) * 0x16a88000) * 0x1b873593;
    uVar9 = ((uVar9 >> 0x13 | uVar9 << 0xd) + 0xfaddaf14) * 5;
    uVar3 = ((uint)(*(int *)(param_1 + (param_2 - 0x14)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 0x14)) * 0x16a88000) * 0x1b873593 + uVar3 * -0x3361d2af;
    uVar3 = ((uVar3 >> 0x13 | uVar3 * 0x2000) + 0xfaddaf14) * 5;
    uVar8 = (param_2 - 1) / 0x14;
    puVar7 = (uint *)(param_1 + 0x10);
    do {
      uVar10 = (puVar7[-4] * -0x3361d2af >> 0x11 | puVar7[-4] * 0x16a88000) * 0x1b873593;
      uVar5 = uVar10 ^ uVar5;
      uVar5 = (puVar7[-1] * -0x3361d2af >> 0x11 | puVar7[-1] * 0x16a88000) * 0x1b873593 + puVar7[-3]
              ^ (uVar5 >> 0x12 | uVar5 << 0xe) * 5 + 0xe6546b64;
      uVar3 = puVar7[-3] + uVar3;
      iVar4 = (uVar5 >> 0x13 | uVar5 << 0xd) + 0xfaddaf14 + *puVar7;
      uVar2 = iVar4 * 5;
      uVar5 = uVar10 + (uVar3 >> 0x13 | uVar3 * 0x2000) * -0x3361d2af;
      uVar3 = (puVar7[-2] * -0x3361d2af >> 0x11 | puVar7[-2] * 0x16a88000) * 0x1b873593 + uVar9;
      uVar10 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8;
      uVar9 = uVar10 | (uVar2 & 0xff00) << 8 | iVar4 * 0x5000000;
      uVar3 = ((uVar3 >> 0x12 | uVar3 * 0x4000) + 0xfaddaf14) * 5 ^ *puVar7;
      uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8;
      uVar3 = (uVar2 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) * 5;
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 5;
    } while (uVar8 != 0);
    uVar5 = uVar5 + ((uVar9 >> 0xb | uVar10 << 0x15) * -0x3361d2af >> 0x11 |
                    (uVar9 >> 0xb) * 0x16a88000) * -0x3361d2af;
    iVar4 = (uVar5 >> 0x13 | uVar5 * 0x2000) + 0xfaddaf14;
    iVar4 = ((uint)(iVar4 * 5) >> 0x11 | iVar4 * 0x28000) +
            ((uVar3 >> 0xb | uVar2 * 0xa00000) * -0x3361d2af >> 0x11 | (uVar3 >> 0xb) * 0x16a88000);
    uVar3 = ((uint)(iVar4 * -0x3361d2af) >> 0x13 | iVar4 * -0x3a55e000) * 5 + 0xe6546b64;
    return (uVar3 >> 0x11 | uVar3 * 0x8000) * -0x3361d2af;
  }
  if (0xc < param_2) {
    uVar3 = ((uint)(*(int *)(param_1 + ((param_2 >> 1) - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + ((param_2 >> 1) - 4)) * 0x16a88000) * 0x1b873593 ^ uVar3;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + 4) * 0x16a88000) * 0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 - 8)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 8)) * 0x16a88000) * 0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 >> 1)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 >> 1)) * 0x16a88000) * 0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)param_1 * -0x3361d2af) >> 0x11 | *(int *)param_1 * 0x16a88000) *
            0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            ((uint)(*(int *)(param_1 + (param_2 - 4)) * -0x3361d2af) >> 0x11 |
            *(int *)(param_1 + (param_2 - 4)) * 0x16a88000) * 0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    return uVar3 >> 0x10 ^ uVar3;
  }
  if (4 < param_2) {
    uVar9 = *(int *)(param_1 + ((uint)(param_2 >> 1) & 4)) * -0x3361d2af + 0x318f97d9;
    uVar5 = ((*(int *)param_1 + uVar3) * -0x3361d2af >> 0x11 |
            (*(int *)param_1 + uVar3) * 0x16a88000) * 0x1b873593 ^ uVar3 * 5;
    iVar4 = *(int *)(param_1 + (param_2 - 4)) + uVar3 * 5;
    uVar3 = ((uint)(iVar4 * -0x3361d2af) >> 0x11 | iVar4 * 0x16a88000) * 0x1b873593 ^
            ((uVar5 >> 0x13 | uVar5 << 0xd) + 0xfaddaf14) * 5;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5 ^
            (uVar9 >> 0x11 | uVar9 * 0x8000) * 0x1b873593;
    uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    return uVar3 >> 0x10 ^ uVar3;
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar9 = 9;
  uVar8 = uVar6;
  if (param_2 != 0) {
    do {
      pcVar1 = param_1 + uVar6;
      uVar6 = uVar6 + 1;
      uVar5 = (int)*pcVar1 + (int)uVar8 * -0x3361d2af;
      uVar9 = uVar9 ^ uVar5;
      uVar8 = (ulonglong)uVar5;
    } while (uVar6 < param_2);
  }
  uVar9 = (uVar3 * -0x3361d2af >> 0x11 | uVar3 * 0x16a88000) * 0x1b873593 ^ uVar9;
  uVar3 = (uVar5 * -0x3361d2af >> 0x11 | uVar5 * 0x16a88000) * 0x1b873593 ^
          ((uVar9 >> 0x13 | uVar9 << 0xd) + 0xfaddaf14) * 5;
  uVar3 = ((uVar3 >> 0x13 | uVar3 << 0xd) + 0xfaddaf14) * 5;
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  return uVar3 >> 0x10 ^ uVar3;
}

// CityHash64 @ 14f8def60

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::CityHash64(char const *
   __ptr64,unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::hash_internal::CityHash64(char *param_1,__uint64 param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_res20;
  
  if (0x20 < param_2) {
    if (param_2 < 0x41) {
      uVar1 = *(longlong *)param_1 * -0x651e95c4d06fbfb1 + *(longlong *)(param_1 + (param_2 - 8));
      lVar14 = param_2 * 2 + -0x651e95c4d06fbfb1;
      lVar4 = *(longlong *)(param_1 + (param_2 - 0x18));
      lVar7 = *(longlong *)(param_1 + 0x18) * 9 + 1 +
              (*(ulonglong *)(param_1 + (param_2 - 0x20)) ^ uVar1);
      uVar3 = *(longlong *)(param_1 + 0x18) * 9 +
              *(longlong *)(param_1 + 0x10) * -0x651e95c4d06fbfb1;
      lVar10 = (uVar3 >> 0x2a | uVar3 * 0x400000) + lVar4;
      uVar1 = ((uVar1 >> 0x2b | uVar1 * 0x200000) +
              lVar7 + ((*(ulonglong *)(param_1 + 8) >> 0x1e | *(ulonglong *)(param_1 + 8) << 0x22) +
                      lVar4) * 9) * lVar14;
      uVar1 = ((uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
               uVar1 << 0x38) + lVar7 + lVar14 * *(longlong *)(param_1 + (param_2 - 0x10))) * lVar14
      ;
      uVar1 = ((uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
               uVar1 << 0x38) + lVar4 + uVar3 + lVar10 + *(longlong *)(param_1 + (param_2 - 8))) *
              lVar14;
      uVar3 = ((uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
               uVar1 << 0x38) + lVar4 + uVar3 + *(longlong *)(param_1 + 8)) * lVar14 +
              lVar14 * *(longlong *)(param_1 + (param_2 - 0x10)) +
              *(ulonglong *)(param_1 + (param_2 - 0x20));
      _Var2 = (uVar3 >> 0x2f ^ uVar3) * lVar14 + lVar10;
    }
    else {
      lVar14 = *(longlong *)(param_1 + (param_2 - 0x28));
      lVar7 = *(longlong *)(param_1 + (param_2 - 0x40)) + param_2;
      uVar12 = *(longlong *)(param_1 + (param_2 - 0x38)) + *(longlong *)(param_1 + (param_2 - 0x10))
      ;
      uVar3 = (*(longlong *)(param_1 + (param_2 - 0x30)) + param_2 ^
              *(ulonglong *)(param_1 + (param_2 - 0x18))) * -0x622015f714c7d297;
      lVar4 = *(longlong *)(param_1 + (param_2 - 0x20)) + -0x4b6d499041670d8d + uVar12;
      uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ *(ulonglong *)(param_1 + (param_2 - 0x18))) *
              -0x622015f714c7d297;
      uVar9 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
      uVar6 = lVar7 + *(longlong *)(param_1 + (param_2 - 0x30)) +
                      *(longlong *)(param_1 + (param_2 - 0x38));
      uVar3 = lVar14 + uVar6;
      uVar1 = lVar14 + lVar7 + uVar9;
      uVar5 = (uVar6 >> 0x2c | uVar6 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + lVar7;
      uVar6 = lVar4 + *(longlong *)(param_1 + (param_2 - 0x10)) +
                      *(longlong *)(param_1 + (param_2 - 0x18));
      uVar8 = *(longlong *)(param_1 + (param_2 - 8)) + uVar6;
      uVar1 = *(longlong *)(param_1 + (param_2 - 8)) + lVar4 + lVar14;
      lVar14 = lVar14 * -0x4b6d499041670d8d + *(longlong *)param_1;
      uVar1 = (uVar6 >> 0x2c | uVar6 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + lVar4;
      local_res20 = param_2 - 1 & 0xffffffffffffffc0;
      plVar11 = (longlong *)(param_1 + 0x30);
      do {
        lVar7 = uVar5 * -0x4b6d499041670d8d + plVar11[-6];
        uVar13 = uVar12 + *plVar11 + uVar5;
        uVar5 = plVar11[-5] + uVar3 + uVar12 + lVar14;
        uVar6 = lVar7 + plVar11[-4] + plVar11[-5];
        uVar12 = (uVar13 >> 0x2a | uVar13 * 0x400000) * -0x4b6d499041670d8d + plVar11[-1] + uVar3;
        lVar14 = (uVar8 + uVar9 >> 0x21 | (uVar8 + uVar9) * 0x80000000) * -0x4b6d499041670d8d;
        uVar9 = (uVar5 >> 0x25 | uVar5 * 0x8000000) * -0x4b6d499041670d8d ^ uVar1;
        uVar3 = plVar11[-3] + uVar6;
        lVar4 = uVar1 + plVar11[-2] + lVar14;
        uVar1 = uVar8 + plVar11[-3] + lVar7 + uVar9;
        uVar5 = (uVar6 >> 0x2c | uVar6 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + lVar7;
        uVar6 = lVar4 + plVar11[-1] + *plVar11;
        uVar1 = plVar11[-4] + plVar11[1] + lVar4 + uVar12;
        uVar8 = plVar11[1] + uVar6;
        uVar1 = (uVar6 >> 0x2c | uVar6 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + lVar4;
        local_res20 = local_res20 - 0x40;
        plVar11 = plVar11 + 8;
      } while (local_res20 != 0);
      uVar6 = (uVar1 ^ uVar5) * -0x622015f714c7d297;
      uVar1 = (uVar6 >> 0x2f ^ uVar1 ^ uVar6) * -0x622015f714c7d297;
      uVar3 = (uVar8 ^ uVar3) * -0x622015f714c7d297;
      uVar1 = (uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297 + lVar14;
      uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar8) * -0x622015f714c7d297;
      uVar3 = ((uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297 +
               (uVar12 >> 0x2f ^ uVar12) * -0x4b6d499041670d8d + uVar9 ^ uVar1) *
              -0x622015f714c7d297;
      uVar3 = (uVar3 >> 0x2f ^ uVar1 ^ uVar3) * -0x622015f714c7d297;
      _Var2 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    }
    return _Var2;
  }
  if (0x10 < param_2) {
    lVar14 = param_2 * 2 + -0x651e95c4d06fbfb1;
    uVar1 = lVar14 * *(longlong *)(param_1 + (param_2 - 8));
    uVar3 = *(longlong *)(param_1 + 8) + 0x9ae16a3b2f90404f;
    uVar6 = (uVar3 >> 0x12 | uVar3 << 0x2e) + uVar1 + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar3 = *(longlong *)(param_1 + 8) + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar3 = ((uVar3 >> 0x2b | uVar3 * 0x200000) + (uVar1 >> 0x1e | uVar1 << 0x22) +
             *(longlong *)(param_1 + (param_2 - 0x10)) * -0x651e95c4d06fbfb1 ^ uVar6) * lVar14;
    uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar6) * lVar14;
    return (uVar3 >> 0x2f ^ uVar3) * lVar14;
  }
  if (7 < param_2) {
    uVar1 = *(longlong *)param_1 + 0x9ae16a3b2f90404f;
    lVar14 = param_2 * 2 + -0x651e95c4d06fbfb1;
    uVar3 = *(ulonglong *)(param_1 + (param_2 - 8));
    uVar6 = ((uVar1 >> 0x19 | uVar1 << 0x27) + uVar3) * lVar14;
    uVar3 = ((uVar3 >> 0x25 | uVar3 << 0x1b) * lVar14 + uVar1 ^ uVar6) * lVar14;
    uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar6) * lVar14;
    return (uVar3 >> 0x2f ^ uVar3) * lVar14;
  }
  if (param_2 < 4) {
    if (param_2 == 0) {
      return 0x9ae16a3b2f90404f;
    }
    uVar3 = (ulonglong)(byte)param_1[param_2 >> 1] * -0x1e95c4d06fbfb100 +
            (ulonglong)(byte)*param_1 * -0x651e95c4d06fbfb1 ^
            (ulonglong)((int)param_2 + (uint)(byte)param_1[param_2 - 1] * 4) * -0x3c5a37a36834ced9;
    return (uVar3 >> 0x2f ^ uVar3) * -0x651e95c4d06fbfb1;
  }
  lVar14 = param_2 * 2 + -0x651e95c4d06fbfb1;
  uVar3 = (param_2 + (ulonglong)*(uint *)param_1 * 8 ^ (ulonglong)*(uint *)(param_1 + (param_2 - 4))
          ) * lVar14;
  uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ (ulonglong)*(uint *)(param_1 + (param_2 - 4))) * lVar14;
  return (uVar3 >> 0x2f ^ uVar3) * lVar14;
}

// CityHash64WithSeed @ 14f8df4b0

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::CityHash64WithSeed(char const *
   __ptr64,unsigned __int64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::CityHash64WithSeed
          (char *param_1,__uint64 param_2,__uint64 param_3)

{
  __uint64 _Var1;
  ulonglong uVar2;
  
  _Var1 = CityHash64(param_1,param_2);
  uVar2 = (_Var1 + 0x651e95c4d06fbfb1 ^ param_3) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ uVar2 ^ param_3) * -0x622015f714c7d297;
  return (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
}

// CityHash64WithSeeds @ 14f8df510

/* unsigned __int64 __cdecl absl::lts_20240722::hash_internal::CityHash64WithSeeds(char const *
   __ptr64,unsigned __int64,unsigned __int64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::CityHash64WithSeeds
          (char *param_1,__uint64 param_2,__uint64 param_3,__uint64 param_4)

{
  __uint64 _Var1;
  ulonglong uVar2;
  
  _Var1 = CityHash64(param_1,param_2);
  uVar2 = (_Var1 - param_3 ^ param_4) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ uVar2 ^ param_4) * -0x622015f714c7d297;
  return (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
}

// FUN_14f8df970 @ 14f8df970

longlong FUN_14f8df970(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_2 * 2 + -0x651e95c4d06fbfb1;
  uVar3 = param_1[1] + 0x9ae16a3b2f90404f;
  uVar2 = lVar1 * *(longlong *)((longlong)param_1 + param_2 + -8);
  uVar4 = param_1[1] + *param_1 * -0x4b6d499041670d8d;
  uVar3 = (uVar3 >> 0x12 | uVar3 << 0x2e) + uVar2 + *param_1 * -0x4b6d499041670d8d;
  uVar4 = ((uVar4 >> 0x2b | uVar4 * 0x200000) + (uVar2 >> 0x1e | uVar2 << 0x22) +
           *(longlong *)((longlong)param_1 + param_2 + -0x10) * -0x651e95c4d06fbfb1 ^ uVar3) * lVar1
  ;
  uVar3 = (uVar4 >> 0x2f ^ uVar3 ^ uVar4) * lVar1;
  return (uVar3 >> 0x2f ^ uVar3) * lVar1;
}

// FUN_14f8dfa10 @ 14f8dfa10

longlong FUN_14f8dfa10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = *(ulonglong *)((longlong)param_1 + param_2 + -0x20);
  lVar2 = *(longlong *)((longlong)param_1 + param_2 + -0x18);
  lVar3 = *(longlong *)((longlong)param_1 + param_2 + -8);
  uVar4 = param_1[1];
  lVar1 = param_2 * 2 + -0x651e95c4d06fbfb1;
  lVar7 = lVar1 * *(longlong *)((longlong)param_1 + param_2 + -0x10);
  uVar8 = *param_1 * -0x651e95c4d06fbfb1 + lVar3;
  uVar5 = param_1[2] * -0x651e95c4d06fbfb1 + param_1[3] * 9;
  lVar6 = param_1[3] * 9 + 1 + (uVar8 ^ uVar9);
  lVar10 = (uVar5 >> 0x2a | uVar5 * 0x400000) + lVar2;
  uVar8 = ((uVar8 >> 0x2b | uVar8 * 0x200000) +
          lVar6 + ((uVar4 >> 0x1e | uVar4 << 0x22) + lVar2) * 9) * lVar1;
  uVar8 = ((uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) + lVar6 + lVar7) * lVar1;
  uVar8 = ((uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) + uVar5 + lVar2 + lVar10 + lVar3) * lVar1;
  uVar9 = ((uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) + uVar5 + lVar2 + uVar4) * lVar1 + lVar7 +
          uVar9;
  return (uVar9 >> 0x2f ^ uVar9) * lVar1 + lVar10;
}

// UnalignedLoad32 @ 14f8dfba0

/* unsigned int __cdecl absl::lts_20240722::base_internal::UnalignedLoad32(void const * __ptr64) */

uint __cdecl absl::lts_20240722::base_internal::UnalignedLoad32(void *param_1)

{
  return *(uint *)param_1;
}

// UnalignedLoad64 @ 14f8dfbb0

/* unsigned __int64 __cdecl absl::lts_20240722::base_internal::UnalignedLoad64(void const * __ptr64)
    */

__uint64 __cdecl absl::lts_20240722::base_internal::UnalignedLoad64(void *param_1)

{
  return *(__uint64 *)param_1;
}

// FUN_14f8dfbc0 @ 14f8dfbc0

longlong * FUN_14f8dfbc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_2[3];
  param_3 = *param_2 + param_3;
  uVar3 = param_3 + param_2[2] + param_2[1];
  *param_1 = lVar2 + uVar3;
  uVar1 = lVar2 + param_3 + param_4;
  param_1[1] = (uVar3 >> 0x2c | uVar3 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + param_3;
  return param_1;
}

// FUN_14f8dfc10 @ 14f8dfc10

longlong *
FUN_14f8dfc10(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  param_6 = param_6 + param_2;
  uVar2 = param_6 + param_3 + param_4;
  *param_1 = param_5 + uVar2;
  uVar1 = param_7 + param_5 + param_6;
  param_1[1] = (uVar2 >> 0x2c | uVar2 * 0x100000) + (uVar1 >> 0x15 | uVar1 << 0x2b) + param_6;
  return param_1;
}

// gbswap_32 @ 14f8dfc90

/* unsigned int __cdecl absl::lts_20240722::gbswap_32(unsigned int) */

uint __cdecl absl::lts_20240722::gbswap_32(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

// gbswap_64 @ 14f8dfca0

/* unsigned __int64 __cdecl absl::lts_20240722::gbswap_64(unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::gbswap_64(__uint64 param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}

