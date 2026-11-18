// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 110

// pair<unsigned___int64,unsigned___int64><unsigned___int64&___ptr64,int,0> @ 14f8f4680

/* public: __cdecl std::pair<unsigned __int64,unsigned __int64>::pair<unsigned __int64,unsigned
   __int64><unsigned __int64 & __ptr64,int,0>(unsigned __int64 & __ptr64,int && __ptr64) __ptr64 */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
pair<unsigned___int64,unsigned___int64><unsigned___int64&___ptr64,int,0>
          (pair<unsigned___int64,unsigned___int64> *this,__uint64 *param_1,int *param_2)

{
  this->first = *param_1;
  this->second = (longlong)*param_2;
  return this;
}

// pair<unsigned___int64,unsigned___int64><unsigned___int64,unsigned___int64,0> @ 14f8f46a0

/* public: __cdecl std::pair<unsigned __int64,unsigned __int64>::pair<unsigned __int64,unsigned
   __int64><unsigned __int64,unsigned __int64,0>(void) __ptr64 */

pair<unsigned___int64,unsigned___int64> * __thiscall
std::pair<unsigned___int64,unsigned___int64>::
pair<unsigned___int64,unsigned___int64><unsigned___int64,unsigned___int64,0>
          (pair<unsigned___int64,unsigned___int64> *this)

{
  this->first = 0;
  this->second = 0;
  return this;
}

// operator==<unsigned___int64,unsigned___int64,unsigned___int64,unsigned___int64> @ 14f8f46c0

/* bool __cdecl std::operator==<unsigned __int64,unsigned __int64,unsigned __int64,unsigned
   __int64>(struct std::pair<unsigned __int64,unsigned __int64> const & __ptr64,struct
   std::pair<unsigned __int64,unsigned __int64> const & __ptr64) */

bool __cdecl
std::operator==<unsigned___int64,unsigned___int64,unsigned___int64,unsigned___int64>
          (pair<unsigned___int64,unsigned___int64> *param_1,
          pair<unsigned___int64,unsigned___int64> *param_2)

{
  if ((param_1->first == param_2->first) && (param_1->second == param_2->second)) {
    return true;
  }
  return false;
}

// operator()<unsigned___int64,unsigned___int64> @ 14f8f46e0

/* public: UNKNOWN __cdecl std::_Synth_three_way::operator()<unsigned __int64,unsigned
   __int64>(unsigned __int64 const & __ptr64,unsigned __int64 const & __ptr64)const __ptr64 */

__uint64 * __thiscall
std::_Synth_three_way::operator()<unsigned___int64,unsigned___int64>
          (_Synth_three_way *this,__uint64 *param_1,__uint64 *param_2)

{
  undefined1 uVar1;
  ulonglong *in_R9;
  
  if (*param_2 == *in_R9) {
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar1 = 0xff;
  if (*in_R9 <= *param_2) {
    uVar1 = 1;
  }
  *(undefined1 *)param_1 = uVar1;
  return param_1;
}

// ERROR_UNKNOWN_OPERATOR_TYPE<unsigned___int64,unsigned___int64,unsigned___int64,unsigned___int64> @ 14f8f4710

/* struct std::strong_ordering __cdecl std::ERROR UNKNOWN OPERATOR TYPE<unsigned __int64,unsigned
   __int64,unsigned __int64,unsigned __int64>(struct std::pair<unsigned __int64,unsigned __int64>
   const & __ptr64,struct std::pair<unsigned __int64,unsigned __int64> const & __ptr64) */

strong_ordering __cdecl
std::
ERROR_UNKNOWN_OPERATOR_TYPE<unsigned___int64,unsigned___int64,unsigned___int64,unsigned___int64>
          (pair<unsigned___int64,unsigned___int64> *param_1,
          pair<unsigned___int64,unsigned___int64> *param_2)

{
  schar sVar1;
  bool bVar2;
  
  bVar2 = param_1->first < param_2->first;
  if ((param_1->first == param_2->first) &&
     (bVar2 = param_1->second < param_2->second, param_1->second == param_2->second)) {
    return (strong_ordering)'\0';
  }
  sVar1 = -1;
  if (!bVar2) {
    sVar1 = '\x01';
  }
  return (strong_ordering)sVar1;
}

// _Checked_x86_x64_countr_zero<unsigned___int64> @ 14f8f4740

/* int __cdecl std::_Checked_x86_x64_countr_zero<unsigned __int64>(unsigned __int64) */

int __cdecl std::_Checked_x86_x64_countr_zero<unsigned___int64>(__uint64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (4 < __isa_available) {
    iVar2 = 0;
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = 0x40;
  }
  return iVar2;
}

// _Countl_zero_fallback<unsigned_int> @ 14f8f4770

/* int __cdecl std::_Countl_zero_fallback<unsigned int>(unsigned int) */

int __cdecl std::_Countl_zero_fallback<unsigned_int>(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  
  iVar3 = 0x20;
  uVar5 = 0x10;
  do {
    sVar4 = (sbyte)uVar5;
    uVar1 = param_1 >> sVar4;
    if (param_1 >> sVar4 == 0) {
      uVar1 = param_1;
    }
    iVar2 = iVar3 - uVar5;
    if (param_1 >> sVar4 == 0) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    uVar5 = uVar5 >> 1;
    param_1 = uVar1;
  } while (uVar5 != 0);
  return iVar3 - uVar1;
}

// _Countl_zero_fallback<unsigned___int64> @ 14f8f47c0

/* int __cdecl std::_Countl_zero_fallback<unsigned __int64>(unsigned __int64) */

int __cdecl std::_Countl_zero_fallback<unsigned___int64>(__uint64 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  iVar2 = 0x40;
  uVar5 = 0x20;
  do {
    uVar4 = param_1 >> (sbyte)uVar5;
    uVar3 = uVar4;
    if (uVar4 == 0) {
      uVar3 = param_1;
    }
    iVar1 = iVar2 - uVar5;
    if (uVar4 == 0) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    uVar5 = uVar5 >> 1;
    param_1 = uVar3;
  } while (uVar5 != 0);
  return iVar2 - (int)uVar3;
}

// _Countr_zero<unsigned_int,0> @ 14f8f4810

/* int __cdecl std::_Countr_zero<unsigned int,0>(unsigned int) */

int __cdecl std::_Countr_zero<unsigned_int,0>(uint param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    iVar1 = 0;
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x80000000) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    iVar1 = 0x20;
  }
  return iVar1;
}

// _Countr_zero<unsigned___int64,0> @ 14f8f4830

/* int __cdecl std::_Countr_zero<unsigned __int64,0>(unsigned __int64) */

int __cdecl std::_Countr_zero<unsigned___int64,0>(__uint64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (4 < __isa_available) {
    iVar2 = 0;
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = 0x40;
  }
  return iVar2;
}

// _Countr_zero_bsf<unsigned___int64> @ 14f8f4860

/* int __cdecl std::_Countr_zero_bsf<unsigned __int64>(unsigned __int64) */

int __cdecl std::_Countr_zero_bsf<unsigned___int64>(__uint64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = 0x40;
  }
  return iVar2;
}

// _Countr_zero_fallback<unsigned_int> @ 14f8f4880

/* int __cdecl std::_Countr_zero_fallback<unsigned int>(unsigned int) */

int __cdecl std::_Countr_zero_fallback<unsigned_int>(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x20;
  uVar4 = 0x10;
  uVar3 = param_1 - 1 & ~param_1;
  do {
    uVar1 = uVar3 >> (sbyte)uVar4;
    iVar2 = iVar5 - uVar4;
    if (uVar3 >> (sbyte)uVar4 == 0) {
      uVar1 = uVar3;
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
    uVar3 = uVar1;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  return (uVar3 - iVar5) + 0x20;
}

// _Countr_zero_fallback<unsigned___int64> @ 14f8f48c0

/* int __cdecl std::_Countr_zero_fallback<unsigned __int64>(unsigned __int64) */

int __cdecl std::_Countr_zero_fallback<unsigned___int64>(__uint64 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x40;
  uVar4 = 0x20;
  uVar2 = param_1 - 1 & ~param_1;
  do {
    uVar3 = uVar2 >> (sbyte)uVar4;
    iVar1 = iVar5 - uVar4;
    if (uVar3 == 0) {
      uVar3 = uVar2;
      iVar1 = iVar5;
    }
    iVar5 = iVar1;
    uVar2 = uVar3;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  return ((int)uVar2 - iVar5) + 0x40;
}

// _Countr_zero_tzcnt<unsigned___int64> @ 14f8f4920

/* int __cdecl std::_Countr_zero_tzcnt<unsigned __int64>(unsigned __int64) */

int __cdecl std::_Countr_zero_tzcnt<unsigned___int64>(__uint64 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// bit_width<unsigned___int64,0> @ 14f8f4930

/* int __cdecl std::bit_width<unsigned __int64,0>(unsigned __int64) */

int __cdecl std::bit_width<unsigned___int64,0>(__uint64 param_1)

{
  longlong lVar1;
  
  if (4 < __isa_available) {
    return 0x40 - (int)LZCOUNT(param_1);
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  return 0x40 - (0x3f - (int)lVar1);
}

// countl_zero<unsigned___int64,0> @ 14f8f4960

/* int __cdecl std::countl_zero<unsigned __int64,0>(unsigned __int64) */

int __cdecl std::countl_zero<unsigned___int64,0>(__uint64 param_1)

{
  longlong lVar1;
  
  if (4 < __isa_available) {
    return (int)LZCOUNT(param_1);
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x40;
  }
  return 0x3f - (int)lVar1;
}

// countr_zero<unsigned_int,0> @ 14f8f4990

/* int __cdecl std::countr_zero<unsigned int,0>(unsigned int) */

int __cdecl std::countr_zero<unsigned_int,0>(uint param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    iVar1 = 0;
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x80000000) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    iVar1 = 0x20;
  }
  return iVar1;
}

// countr_zero<unsigned___int64,0> @ 14f8f49b0

/* int __cdecl std::countr_zero<unsigned __int64,0>(unsigned __int64) */

int __cdecl std::countr_zero<unsigned___int64,0>(__uint64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (4 < __isa_available) {
    iVar2 = 0;
    for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = 0x40;
  }
  return iVar2;
}

// isnan<double> @ 14f8f49e0

/* bool __cdecl isnan<double>(double) */

bool __cdecl isnan<double>(double param_1)

{
  return NAN(param_1);
}

// FUN_14f8f49f0 @ 14f8f49f0

undefined1 FUN_14f8f49f0(undefined8 *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char local_res10 [8];
  int local_res18 [2];
  
  iVar6 = 0;
  *param_2 = 0;
  local_res18[0] = param_3;
  cVar1 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_res10[0] != '\0') {
    iVar4 = *(int *)(&DAT_153533750 + (longlong)local_res18[0] * 4) + 1;
    if ((int)(-0x80000000 % (longlong)local_res18[0]) < 1) {
      iVar4 = *(int *)(&DAT_153533750 + (longlong)local_res18[0] * 4);
    }
    pbVar3 = (byte *)*param_1;
    pbVar7 = pbVar3 + param_1[1];
    do {
      if (pbVar7 <= pbVar3) {
        uVar2 = 1;
LAB_14f8f4b30:
        *param_2 = iVar6;
        return uVar2;
      }
      iVar5 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar3];
      if (local_res18[0] <= iVar5) {
        uVar2 = 0;
        goto LAB_14f8f4b30;
      }
      if ((iVar6 < iVar4) || (iVar6 * local_res18[0] < iVar5 + -0x80000000)) {
        *param_2 = -0x80000000;
        return 0;
      }
      iVar6 = iVar6 * local_res18[0] - iVar5;
      pbVar3 = pbVar3 + 1;
    } while( true );
  }
  pbVar3 = (byte *)*param_1;
  pbVar7 = pbVar3 + param_1[1];
  do {
    if (pbVar7 <= pbVar3) {
      uVar2 = 1;
LAB_14f8f4a9e:
      *param_2 = iVar6;
      return uVar2;
    }
    iVar4 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar3];
    if (local_res18[0] <= iVar4) {
      uVar2 = 0;
      goto LAB_14f8f4a9e;
    }
    if ((*(int *)(&DAT_1535336b0 + (longlong)local_res18[0] * 4) < iVar6) ||
       (0x7fffffff - iVar4 < iVar6 * local_res18[0])) {
      *param_2 = 0x7fffffff;
      return 0;
    }
    iVar6 = iVar6 * local_res18[0] + iVar4;
    pbVar3 = pbVar3 + 1;
  } while( true );
}

// FUN_14f8f4b70 @ 14f8f4b70

void FUN_14f8f4b70(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  char local_res10 [8];
  undefined4 local_res18 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res18[0] = param_3;
  cVar1 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if (cVar1 == '\0') {
    return;
  }
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  if (local_res10[0] == '\0') {
    FUN_14f8f52a0();
    return;
  }
  FUN_14f8f4e40(&local_18,local_res18[0],param_2);
  return;
}

// FUN_14f8f4bf0 @ 14f8f4bf0

undefined1 FUN_14f8f4bf0(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  char local_res10 [8];
  int local_res18 [4];
  
  lVar6 = 0;
  *param_2 = 0;
  local_res18[0] = param_3;
  cVar2 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if (cVar2 == '\0') {
    return 0;
  }
  pbVar4 = (byte *)*param_1;
  if (local_res10[0] == '\0') {
    lVar7 = (longlong)local_res18[0];
    pbVar8 = pbVar4 + param_1[1];
    while( true ) {
      if (pbVar8 <= pbVar4) {
        *param_2 = lVar6;
        return 1;
      }
      lVar5 = (longlong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar4];
      if (lVar7 <= lVar5) break;
      if ((*(longlong *)(&DAT_1535337f0 + lVar7 * 8) < lVar6) ||
         (lVar6 = lVar6 * lVar7,
         lVar6 - (0x7fffffffffffffff - lVar5) != 0 && 0x7fffffffffffffff - lVar5 <= lVar6)) {
        *param_2 = 0x7fffffffffffffff;
        return 0;
      }
      lVar6 = lVar6 + lVar5;
      pbVar4 = pbVar4 + 1;
    }
    *param_2 = lVar6;
    return 0;
  }
  lVar5 = (longlong)local_res18[0];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = SUB168(SEXT816(-0x8000000000000000),8);
  lVar7 = *(longlong *)(&DAT_153533920 + lVar5 * 8) + 1;
  if (SUB168((auVar1 << 0x40 | ZEXT816(0x8000000000000000)) % SEXT816(lVar5),0) < 1) {
    lVar7 = *(longlong *)(&DAT_153533920 + lVar5 * 8);
  }
  pbVar8 = pbVar4 + param_1[1];
  do {
    if (pbVar8 <= pbVar4) {
      uVar3 = 1;
LAB_14f8f4d4f:
      *param_2 = lVar6;
      return uVar3;
    }
    cVar2 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar4];
    if (local_res18[0] <= cVar2) {
      uVar3 = 0;
      goto LAB_14f8f4d4f;
    }
    if ((lVar6 < lVar7) || (lVar6 * lVar5 < (longlong)cVar2 + -0x8000000000000000)) {
      *param_2 = -0x8000000000000000;
      return 0;
    }
    lVar6 = lVar6 * lVar5 - (longlong)cVar2;
    pbVar4 = pbVar4 + 1;
  } while( true );
}

// FUN_14f8f4d80 @ 14f8f4d80

ulonglong FUN_14f8f4d80(undefined8 *param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  uVar1 = (ulonglong)(uint)(-0x80000000 / param_2);
  pbVar3 = (byte *)*param_1;
  iVar4 = *(int *)(&DAT_153533750 + (longlong)param_2 * 4) + 1;
  if (-0x80000000 % param_2 < 1) {
    iVar4 = *(int *)(&DAT_153533750 + (longlong)param_2 * 4);
  }
  pbVar6 = pbVar3 + param_1[1];
  while( true ) {
    if (pbVar6 <= pbVar3) {
      *param_3 = iVar5;
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    uVar1 = (ulonglong)*pbVar3;
    iVar2 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[uVar1];
    if (param_2 <= iVar2) {
      *param_3 = iVar5;
      return 0;
    }
    if (iVar5 < iVar4) break;
    uVar1 = (ulonglong)(iVar2 + 0x80000000U);
    if (iVar5 * param_2 < (int)(iVar2 + 0x80000000U)) break;
    iVar5 = iVar5 * param_2 - iVar2;
    pbVar3 = pbVar3 + 1;
  }
  *param_3 = -0x80000000;
  return uVar1 & 0xffffffffffffff00;
}

// FUN_14f8f4e40 @ 14f8f4e40

ulonglong FUN_14f8f4e40(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int128 iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  ulong64 uVar5;
  long64 lVar6;
  int128 *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulong64 uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  bool bVar17;
  int128 local_a8;
  int128 local_98;
  int128 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  int128 local_68;
  int128 local_58 [2];
  
  uVar15 = (ulonglong)param_2;
  lVar11 = 0;
  uStack_70 = 0x8000000000000000;
  local_98.hi_ = 0;
  local_78 = 0;
  uVar12 = 0;
  local_98.lo_ = 0;
  uVar14 = *(ulonglong *)(&DAT_153533460 + uVar15 * 0x10);
  lVar4 = *(longlong *)(&UNK_153533468 + uVar15 * 0x10);
  local_88.hi_ = -0x8000000000000000;
  local_88.lo_ = 0;
  local_a8.lo_ = uVar14;
  local_a8.hi_ = lVar4;
  local_68.lo_ = uVar15;
  local_68.hi_ = (longlong)uVar15 >> 0x3f;
  piVar7 = absl::lts_20240722::operator%(local_58,&local_88,&local_68);
  if (piVar7->hi_ == 0) {
    piVar7 = (int128 *)piVar7->lo_;
    bVar17 = piVar7 != (int128 *)0x0;
  }
  else {
    piVar7 = (int128 *)piVar7->hi_;
    bVar17 = 0 < (longlong)piVar7;
  }
  if (bVar17) {
    local_88.hi_ = lVar4;
    if (uVar14 + 1 < uVar14) {
      local_88.hi_ = lVar4 + 1;
    }
    piVar7 = &local_88;
    local_a8.lo_ = uVar14 + 1;
    local_a8.hi_ = local_88.hi_;
  }
  lVar6 = local_a8.hi_;
  uVar5 = local_a8.lo_;
  pbVar13 = (byte *)*param_1;
  pbVar16 = pbVar13 + param_1[1];
  if (pbVar13 < pbVar16) {
    while (uVar14 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar13],
          "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar13] < param_2) {
      if (lVar11 == lVar6) {
        bVar17 = uVar12 < uVar5;
      }
      else {
        bVar17 = lVar11 < lVar6;
      }
      uVar9 = 0;
      if (bVar17) {
LAB_14f8f5051:
        *param_3 = local_78;
        param_3[1] = uStack_70;
        return uVar9 & 0xffffffffffffff00;
      }
      uVar8 = uVar15 * uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar15;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      uVar10 = ((longlong)uVar15 >> 0x3f) * uVar12 + SUB168(auVar2 * auVar3,8) + uVar15 * lVar11;
      uVar9 = ((longlong)uVar14 >> 0x3f) + 0x8000000000000000;
      if (uVar10 == uVar9) {
        bVar17 = uVar8 < uVar14;
        uVar9 = uVar14;
      }
      else {
        bVar17 = (longlong)uVar10 < (longlong)uVar9;
      }
      if (bVar17) goto LAB_14f8f5051;
      local_a8.hi_ = uVar10 - ((longlong)uVar14 >> 0x3f);
      if (uVar8 < uVar14) {
        local_98.lo_ = uVar8 - uVar14;
        local_98.hi_ = local_a8.hi_ + -1;
        piVar7 = &local_98;
      }
      else {
        local_a8.lo_ = uVar8 - uVar14;
        piVar7 = &local_a8;
      }
      iVar1 = *piVar7;
      local_98.lo_._0_4_ = (undefined4)iVar1.lo_;
      local_98.lo_._4_4_ = iVar1.lo_._4_4_;
      local_98.hi_._0_4_ = (undefined4)iVar1.hi_;
      local_98.hi_._4_4_ = iVar1.hi_._4_4_;
      pbVar13 = pbVar13 + 1;
      if (pbVar16 <= pbVar13) goto LAB_14f8f5062;
      uVar12 = iVar1.lo_;
      lVar11 = iVar1.hi_;
    }
    uVar14 = 0;
  }
  else {
LAB_14f8f5062:
    uVar14 = CONCAT71((int7)((ulonglong)piVar7 >> 8),1);
  }
  *(undefined4 *)param_3 = (undefined4)local_98.lo_;
  *(undefined4 *)((longlong)param_3 + 4) = local_98.lo_._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)local_98.hi_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_98.hi_._4_4_;
  return uVar14;
}

// FUN_14f8f5090 @ 14f8f5090

ulonglong FUN_14f8f5090(undefined8 *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = (longlong)param_2;
  lVar7 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(SEXT816(-0x8000000000000000),8);
  auVar2 = auVar2 << 0x40 | ZEXT816(0x8000000000000000);
  uVar3 = SUB168(auVar2 / SEXT816(lVar5),0);
  pbVar4 = (byte *)*param_1;
  lVar8 = *(longlong *)(&DAT_153533920 + lVar5 * 8) + 1;
  if (SUB168(auVar2 % SEXT816(lVar5),0) < 1) {
    lVar8 = *(longlong *)(&DAT_153533920 + lVar5 * 8);
  }
  pbVar6 = pbVar4 + param_1[1];
  do {
    if (pbVar6 <= pbVar4) {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_14f8f512f:
      *param_3 = lVar7;
      return uVar3;
    }
    uVar3 = (ulonglong)*pbVar4;
    cVar1 = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[uVar3];
    if (param_2 <= cVar1) {
      uVar3 = 0;
      goto LAB_14f8f512f;
    }
    if (lVar7 < lVar8) {
LAB_14f8f5147:
      *param_3 = -0x8000000000000000;
      return uVar3 & 0xffffffffffffff00;
    }
    uVar3 = (longlong)cVar1 + 0x8000000000000000;
    if (lVar7 * lVar5 < (longlong)uVar3) goto LAB_14f8f5147;
    lVar7 = lVar7 * lVar5 - (longlong)cVar1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}

// FUN_14f8f5160 @ 14f8f5160

ulonglong FUN_14f8f5160(undefined8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)*param_1;
  uVar3 = 0;
  pbVar6 = pbVar5 + param_1[1];
  while( true ) {
    iVar1 = (int)uVar3;
    if (pbVar6 <= pbVar5) {
      *param_3 = iVar1;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    iVar4 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar5];
    if (param_2 <= iVar4) {
      *param_3 = iVar1;
      return uVar3 & 0xffffffffffffff00;
    }
    if (*(int *)(&DAT_1535336b0 + (longlong)param_2 * 4) < iVar1) break;
    uVar2 = iVar1 * param_2;
    uVar3 = (ulonglong)uVar2;
    if (0x7fffffff - iVar4 < (int)uVar2) break;
    uVar3 = (ulonglong)(uVar2 + iVar4);
    pbVar5 = pbVar5 + 1;
  }
  *param_3 = 0x7fffffff;
  return uVar3 & 0xffffffffffffff00;
}

// FUN_14f8f5200 @ 14f8f5200

ulonglong FUN_14f8f5200(undefined8 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = (byte *)*param_1;
  uVar2 = 0;
  pbVar5 = pbVar4 + param_1[1];
  while( true ) {
    uVar1 = (uint)uVar2;
    if (pbVar5 <= pbVar4) {
      *param_3 = uVar1;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar3 = (uint)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar4];
    if (param_2 <= uVar3) {
      *param_3 = uVar1;
      return uVar2 & 0xffffffffffffff00;
    }
    if (*(uint *)(&DAT_153533a50 + (longlong)(int)param_2 * 4) < uVar1) break;
    uVar1 = uVar1 * param_2;
    uVar2 = (ulonglong)uVar1;
    if (~uVar3 < uVar1) break;
    uVar2 = (ulonglong)(uVar1 + uVar3);
    pbVar4 = pbVar4 + 1;
  }
  *param_3 = 0xffffffff;
  return uVar2 & 0xffffffffffffff00;
}

// FUN_14f8f52a0 @ 14f8f52a0

ulonglong FUN_14f8f52a0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte *pbVar14;
  bool bVar15;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong local_50;
  
  pbVar10 = (byte *)*param_1;
  uVar13 = (ulonglong)param_2;
  uVar7 = 0;
  lVar12 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  pauVar3 = (undefined1 (*) [16])(uVar13 * 0x10);
  lVar8 = (longlong)uVar13 >> 0x3f;
  pbVar14 = pbVar10 + param_1[1];
  pauVar6 = pauVar3;
  if (pbVar14 <= pbVar10) {
LAB_14f8f543b:
    uVar7 = CONCAT71((int7)((ulonglong)pauVar6 >> 8),1);
LAB_14f8f543d:
    *(undefined4 *)param_3 = local_78;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
    *(undefined4 *)(param_3 + 1) = uStack_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_6c;
    return uVar7;
  }
  do {
    local_58 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar10];
    lVar9 = (longlong)local_58 >> 0x3f;
    if (lVar9 == lVar8) {
      bVar15 = local_58 < uVar13;
    }
    else {
      bVar15 = lVar9 < lVar8;
    }
    if (!bVar15) {
      uVar7 = 0;
      goto LAB_14f8f543d;
    }
    uVar5 = *(ulonglong *)pauVar3[0x15353321];
    if (lVar12 == *(longlong *)(pauVar3[0x15353321] + 8)) {
      bVar15 = uVar5 < uVar7;
    }
    else {
      bVar15 = *(longlong *)(pauVar3[0x15353321] + 8) < lVar12;
    }
    if (bVar15) {
LAB_14f8f5429:
      *param_3 = 0xffffffffffffffff;
      param_3[1] = 0x7fffffffffffffff;
      return uVar5 & 0xffffffffffffff00;
    }
    uVar4 = uVar13 * uVar7;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar13;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    uVar5 = 0x7fffffffffffffff - lVar9;
    uVar11 = lVar8 * uVar7 + uVar13 * lVar12 + SUB168(auVar1 * auVar2,8);
    uVar7 = ~local_58;
    if (uVar11 == uVar5) {
      bVar15 = uVar7 <= uVar4 && uVar4 - uVar7 != 0;
      uVar5 = uVar7;
    }
    else {
      bVar15 = (longlong)uVar5 < (longlong)uVar11;
    }
    if (bVar15) goto LAB_14f8f5429;
    local_58 = uVar4 + local_58;
    if (local_58 < uVar4) {
      local_68 = local_58;
      lStack_60 = lVar9 + uVar11 + 1;
      pauVar6 = (undefined1 (*) [16])&local_68;
    }
    else {
      pauVar6 = (undefined1 (*) [16])&local_58;
      local_50 = lVar9 + uVar11;
    }
    auVar1 = *pauVar6;
    local_78 = auVar1._0_4_;
    uStack_74 = auVar1._4_4_;
    uStack_70 = auVar1._8_4_;
    uStack_6c = auVar1._12_4_;
    pbVar10 = pbVar10 + 1;
    if (pbVar14 <= pbVar10) goto LAB_14f8f543b;
    uVar7 = auVar1._0_8_;
    lVar12 = auVar1._8_8_;
  } while( true );
}

// FUN_14f8f5470 @ 14f8f5470

ulonglong FUN_14f8f5470(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong local_50;
  
  pbVar8 = (byte *)*param_1;
  uVar6 = 0;
  uVar7 = 0;
  pbVar10 = pbVar8 + param_1[1];
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uVar9 = (ulonglong)param_2;
  pauVar3 = (undefined1 (*) [16])(uVar9 * 0x10);
  uVar12 = (longlong)param_2 >> 0x3f;
  pauVar5 = pauVar3;
  if (pbVar8 < pbVar10) {
    do {
      local_58 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar8];
      uVar11 = (longlong)local_58 >> 0x3f;
      bVar13 = uVar11 < uVar12;
      if (uVar11 == uVar12) {
        bVar13 = local_58 < uVar9;
      }
      if (!bVar13) {
        *(undefined4 *)param_3 = local_78;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
        *(undefined4 *)(param_3 + 1) = uStack_70;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_6c;
        return (ulonglong)param_3 & 0xffffffffffffff00;
      }
      bVar13 = *(ulonglong *)(pauVar3[0x153532fc] + 8) < uVar7;
      if (*(ulonglong *)(pauVar3[0x153532fc] + 8) == uVar7) {
        bVar13 = *(ulonglong *)pauVar3[0x153532fc] < uVar6;
      }
      if (bVar13) {
LAB_14f8f561d:
        *param_3 = 0xffffffffffffffff;
        param_3[1] = 0xffffffffffffffff;
        return (ulonglong)param_3 & 0xffffffffffffff00;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar4 = SUB168(auVar1 * auVar2,0);
      uVar6 = SUB168(auVar1 * auVar2,8) + uVar9 * uVar7 + uVar12 * uVar6;
      if (~uVar11 == uVar6) {
        bVar13 = ~local_58 < uVar4;
      }
      else {
        bVar13 = ~uVar11 < uVar6;
      }
      if (bVar13) goto LAB_14f8f561d;
      local_58 = local_58 + uVar4;
      if (local_58 < uVar4) {
        local_68 = local_58;
        lStack_60 = uVar6 + uVar11 + 1;
        pauVar5 = (undefined1 (*) [16])&local_68;
      }
      else {
        pauVar5 = (undefined1 (*) [16])&local_58;
        local_50 = uVar6 + uVar11;
      }
      auVar1 = *pauVar5;
      local_78 = auVar1._0_4_;
      uStack_74 = auVar1._4_4_;
      uStack_70 = auVar1._8_4_;
      uStack_6c = auVar1._12_4_;
      pbVar8 = pbVar8 + 1;
      if (pbVar10 <= pbVar8) break;
      uVar6 = auVar1._0_8_;
      uVar7 = auVar1._8_8_;
    } while( true );
  }
  *(undefined4 *)param_3 = local_78;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_74;
  *(undefined4 *)(param_3 + 1) = uStack_70;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_6c;
  return CONCAT71((int7)((ulonglong)pauVar5 >> 8),1);
}

// FUN_14f8f5650 @ 14f8f5650

ulonglong FUN_14f8f5650(undefined8 *param_1,int param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  
  lVar4 = (longlong)param_2;
  uVar1 = 0;
  pbVar2 = (byte *)*param_1;
  pbVar5 = pbVar2 + param_1[1];
  while( true ) {
    if (pbVar5 <= pbVar2) {
      *param_3 = uVar1;
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    lVar3 = (longlong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (lVar4 <= lVar3) break;
    if ((*(longlong *)(&DAT_1535337f0 + lVar4 * 8) < (longlong)uVar1) ||
       (uVar1 = uVar1 * lVar4,
       uVar1 - (0x7fffffffffffffff - lVar3) != 0 && 0x7fffffffffffffff - lVar3 <= (longlong)uVar1))
    {
      *param_3 = 0x7fffffffffffffff;
      return uVar1 & 0xffffffffffffff00;
    }
    uVar1 = uVar1 + lVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_3 = uVar1;
  return uVar1 & 0xffffffffffffff00;
}

// FUN_14f8f5710 @ 14f8f5710

ulonglong FUN_14f8f5710(undefined8 *param_1,int param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  uVar4 = (ulonglong)param_2;
  uVar1 = 0;
  pbVar2 = (byte *)*param_1;
  pbVar5 = pbVar2 + param_1[1];
  while( true ) {
    if (pbVar5 <= pbVar2) {
      *param_3 = uVar1;
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    uVar3 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (uVar4 <= uVar3) break;
    if ((*(ulonglong *)(&DAT_153533af0 + uVar4 * 8) < uVar1) ||
       (uVar1 = uVar1 * uVar4, ~uVar3 <= uVar1 && uVar1 - ~uVar3 != 0)) {
      *param_3 = 0xffffffffffffffff;
      return uVar1 & 0xffffffffffffff00;
    }
    uVar1 = uVar1 + uVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_3 = uVar1;
  return uVar1 & 0xffffffffffffff00;
}

// FUN_14f8f57b0 @ 14f8f57b0

undefined8 FUN_14f8f57b0(undefined8 *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  char local_res10 [8];
  uint local_res18 [2];
  
  uVar4 = 0;
  *param_2 = 0;
  local_res18[0] = param_3;
  cVar1 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if ((cVar1 == '\0') || (local_res10[0] != '\0')) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  pbVar5 = pbVar2 + param_1[1];
  while( true ) {
    if (pbVar5 <= pbVar2) {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = (uint)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (local_res18[0] <= uVar3) break;
    if ((*(uint *)(&DAT_153533a50 + (longlong)(int)local_res18[0] * 4) < uVar4) ||
       (~uVar3 < uVar4 * local_res18[0])) {
      *param_2 = 0xffffffff;
      return 0;
    }
    uVar4 = uVar4 * local_res18[0] + uVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_2 = uVar4;
  return 0;
}

// FUN_14f8f58b0 @ 14f8f58b0

ulonglong FUN_14f8f58b0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  char local_res10 [8];
  undefined4 local_res18 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res18[0] = param_3;
  uVar1 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if (((char)uVar1 != '\0') && (local_res10[0] == '\0')) {
    local_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    uVar1 = FUN_14f8f5470(&local_18,local_res18[0],param_2);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}

// FUN_14f8f5920 @ 14f8f5920

undefined8 FUN_14f8f5920(undefined8 *param_1,ulonglong *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char local_res10 [8];
  int local_res18 [2];
  
  uVar4 = 0;
  *param_2 = 0;
  local_res18[0] = param_3;
  cVar1 = FUN_14f8f7a80(param_1,local_res18,local_res10);
  if ((cVar1 == '\0') || (local_res10[0] != '\0')) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  uVar5 = (ulonglong)local_res18[0];
  pbVar6 = pbVar2 + param_1[1];
  while( true ) {
    if (pbVar6 <= pbVar2) {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (uVar5 <= uVar3) break;
    if ((*(ulonglong *)(&DAT_153533af0 + uVar5 * 8) < uVar4) ||
       (uVar4 = uVar4 * uVar5, ~uVar3 <= uVar4 && uVar4 - ~uVar3 != 0)) {
      *param_2 = 0xffffffffffffffff;
      return 0;
    }
    uVar4 = uVar4 + uVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_2 = uVar4;
  return 0;
}

// int128 @ 14f8f5a20

/* private: __cdecl absl::lts_20240722::int128::int128(__int64,unsigned __int64) __ptr64 */

int128 * __thiscall
absl::lts_20240722::int128::int128(int128 *this,__int64 param_1,__uint64 param_2)

{
  this->lo_ = param_2;
  this->hi_ = param_1;
  return this;
}

// int128 @ 14f8f5a40

/* public: __cdecl absl::lts_20240722::int128::int128(int) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::int128(int128 *this,int param_1)

{
  this->lo_ = (longlong)param_1;
  this->hi_ = (longlong)param_1 >> 0x3f;
  return this;
}

// uint128 @ 14f8f5a60

/* public: __cdecl absl::lts_20240722::uint128::uint128(int) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,int param_1)

{
  this->lo_ = (longlong)param_1;
  this->hi_ = (longlong)param_1 >> 0x3f;
  return this;
}

// uint128 @ 14f8f5a80

/* public: __cdecl absl::lts_20240722::uint128::uint128(class absl::lts_20240722::int128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,int128 *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->hi_;
  this->lo_ = param_1->lo_;
  this->hi_ = uVar1;
  return this;
}

// operator= @ 14f8f5aa0

/* public: class absl::lts_20240722::int128 & __ptr64 __cdecl
   absl::lts_20240722::int128::operator=(int) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::operator=(int128 *this,int param_1)

{
  this->lo_ = (longlong)param_1;
  this->hi_ = (longlong)param_1 >> 0x3f;
  return this;
}

// operator= @ 14f8f5ac0

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator=(int) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator=(uint128 *this,int param_1)

{
  this->lo_ = (longlong)param_1;
  this->hi_ = (longlong)param_1 >> 0x3f;
  return this;
}

// operator== @ 14f8f5ae0

/* bool __cdecl std::operator==(struct std::strong_ordering,struct std::_Literal_zero) */

bool __cdecl std::operator==(strong_ordering param_1,_Literal_zero param_2)

{
  return param_1._Value == '\0';
}

// operator* @ 14f8f5af0

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator*(class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::operator*(int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  longlong lVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  
  lVar6 = param_2->hi_;
  lVar1 = param_1->hi_;
  uVar2 = param_2->lo_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2->lo_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1->lo_;
  uVar3 = param_1->lo_;
  __return_storage_ptr__->lo_ = param_2->lo_ * param_1->lo_;
  __return_storage_ptr__->hi_ = lVar1 * uVar2 + lVar6 * uVar3 + SUB168(auVar4 * auVar5,8);
  return __return_storage_ptr__;
}

// operator- @ 14f8f5b40

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::operator-(int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  
  uVar1 = param_1->lo_ - param_2->lo_;
  lVar2 = param_1->hi_ - param_2->hi_;
  if (param_1->lo_ < param_2->lo_) {
    __return_storage_ptr__->lo_ = uVar1;
    __return_storage_ptr__->hi_ = lVar2 + -1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->lo_ = uVar1;
  __return_storage_ptr__->hi_ = lVar2;
  return __return_storage_ptr__;
}

// operator- @ 14f8f5ba0

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator-(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = param_1->lo_ - param_2->lo_;
  uVar2 = param_1->hi_ - param_2->hi_;
  if (param_1->lo_ < param_2->lo_) {
    __return_storage_ptr__->lo_ = uVar1;
    __return_storage_ptr__->hi_ = uVar2 - 1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->lo_ = uVar1;
  __return_storage_ptr__->hi_ = uVar2;
  return __return_storage_ptr__;
}

// operator+ @ 14f8f5c00

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::operator+(class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::operator+(int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1->lo_ + param_2->lo_;
  lVar2 = param_2->hi_ + param_1->hi_;
  if (uVar1 < param_1->lo_) {
    __return_storage_ptr__->lo_ = uVar1;
    __return_storage_ptr__->hi_ = lVar2 + 1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->lo_ = uVar1;
  __return_storage_ptr__->hi_ = lVar2;
  return __return_storage_ptr__;
}

// operator+ @ 14f8f5c70

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator+(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator+(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = param_1->lo_ + param_2->lo_;
  uVar2 = param_2->hi_ + param_1->hi_;
  if (uVar1 < param_1->lo_) {
    __return_storage_ptr__->lo_ = uVar1;
    __return_storage_ptr__->hi_ = uVar2 + 1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->lo_ = uVar1;
  __return_storage_ptr__->hi_ = uVar2;
  return __return_storage_ptr__;
}

// operator< @ 14f8f5ce0

/* bool __cdecl absl::lts_20240722::operator<(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

bool __cdecl absl::lts_20240722::operator<(int128 *param_1,int128 *param_2)

{
  if (param_1->hi_ == param_2->hi_) {
    return param_1->lo_ < param_2->lo_;
  }
  return param_1->hi_ < param_2->hi_;
}

// operator< @ 14f8f5d10

/* bool __cdecl absl::lts_20240722::operator<(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator<(uint128 *param_1,uint128 *param_2)

{
  bool bVar1;
  
  bVar1 = param_1->hi_ < param_2->hi_;
  if (param_1->hi_ == param_2->hi_) {
    bVar1 = param_1->lo_ < param_2->lo_;
  }
  return bVar1;
}

// operator> @ 14f8f5d40

/* bool __cdecl absl::lts_20240722::operator>(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

bool __cdecl absl::lts_20240722::operator>(int128 *param_1,int128 *param_2)

{
  if (param_1->hi_ == param_2->hi_) {
    return param_2->lo_ < param_1->lo_;
  }
  return param_2->hi_ < param_1->hi_;
}

// operator> @ 14f8f5d70

/* bool __cdecl absl::lts_20240722::operator>(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator>(uint128 *param_1,uint128 *param_2)

{
  if (param_2->hi_ == param_1->hi_) {
    return param_2->lo_ < param_1->lo_;
  }
  return param_2->hi_ < param_1->hi_;
}

// operator> @ 14f8f5db0

/* bool __cdecl std::operator>(struct std::strong_ordering,struct std::_Literal_zero) */

bool __cdecl std::operator>(strong_ordering param_1,_Literal_zero param_2)

{
  return '\0' < param_1._Value;
}

// operator>= @ 14f8f5dc0

/* bool __cdecl absl::lts_20240722::operator>=(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

bool __cdecl absl::lts_20240722::operator>=(int128 *param_1,int128 *param_2)

{
  if (param_1->hi_ == param_2->hi_) {
    return param_2->lo_ <= param_1->lo_;
  }
  return param_2->hi_ <= param_1->hi_;
}

// operator>= @ 14f8f5e00

/* bool __cdecl absl::lts_20240722::operator>=(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator>=(uint128 *param_1,uint128 *param_2)

{
  bool bVar1;
  
  bVar1 = param_1->hi_ < param_2->hi_;
  if (param_1->hi_ == param_2->hi_) {
    bVar1 = param_1->lo_ < param_2->lo_;
  }
  return !bVar1;
}

// operator*= @ 14f8f5e30

/* public: class absl::lts_20240722::int128 & __ptr64 __cdecl
   absl::lts_20240722::int128::operator*=(class absl::lts_20240722::int128) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::operator*=(int128 *this,int128 *param_1)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = param_1->lo_;
  lVar5 = param_1->hi_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = this->lo_;
  uVar1 = this->lo_;
  this->lo_ = param_1->lo_ * this->lo_;
  this->hi_ = lVar5 * uVar1 + SUB168(auVar2 * auVar3,8) + this->hi_ * uVar4;
  return this;
}

// operator+= @ 14f8f5ea0

/* public: class absl::lts_20240722::int128 & __ptr64 __cdecl
   absl::lts_20240722::int128::operator+=(class absl::lts_20240722::int128) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::operator+=(int128 *this,int128 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = this->lo_ + param_1->lo_;
  lVar2 = param_1->hi_ + this->hi_;
  if (uVar1 < this->lo_) {
    this->lo_ = uVar1;
    this->hi_ = lVar2 + 1;
    return this;
  }
  this->lo_ = uVar1;
  this->hi_ = lVar2;
  return this;
}

// operator+= @ 14f8f5f10

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator+=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator+=(uint128 *this,uint128 *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = this->lo_ + param_1->lo_;
  uVar2 = param_1->hi_ + this->hi_;
  if (uVar1 < this->lo_) {
    this->lo_ = uVar1;
    this->hi_ = uVar2 + 1;
    return this;
  }
  this->lo_ = uVar1;
  this->hi_ = uVar2;
  return this;
}

// operator-= @ 14f8f5f80

/* public: class absl::lts_20240722::int128 & __ptr64 __cdecl
   absl::lts_20240722::int128::operator-=(class absl::lts_20240722::int128) __ptr64 */

int128 * __thiscall absl::lts_20240722::int128::operator-=(int128 *this,int128 *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  
  uVar1 = this->lo_ - param_1->lo_;
  lVar2 = this->hi_ - param_1->hi_;
  if (this->lo_ < param_1->lo_) {
    this->lo_ = uVar1;
    this->hi_ = lVar2 + -1;
    return this;
  }
  this->lo_ = uVar1;
  this->hi_ = lVar2;
  return this;
}

// AddResult @ 14f8f5fe0

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::int128_internal::AddResult(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::int128_internal::AddResult
          (uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  ulong64 uVar1;
  
  if (param_1->lo_ < param_2->lo_) {
    uVar1 = param_1->hi_;
    __return_storage_ptr__->lo_ = param_1->lo_;
    __return_storage_ptr__->hi_ = uVar1 + 1;
    return __return_storage_ptr__;
  }
  uVar1 = param_1->hi_;
  __return_storage_ptr__->lo_ = param_1->lo_;
  __return_storage_ptr__->hi_ = uVar1;
  return __return_storage_ptr__;
}

// BitCastToSigned @ 14f8f6040

/* __int64 __cdecl absl::lts_20240722::int128_internal::BitCastToSigned(unsigned __int64) */

__int64 __cdecl absl::lts_20240722::int128_internal::BitCastToSigned(__uint64 param_1)

{
  return param_1;
}

// FUN_14f8f6050 @ 14f8f6050

longlong FUN_14f8f6050(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_1 < 10) {
    *(char *)param_2 = (char)param_1 + '0';
    return (longlong)param_2 + 1;
  }
  if (99999999 < param_1) {
    uVar4 = param_1 / 100000000;
    uVar1 = (ulonglong)(param_1 % 100000000) / 10000;
    uVar1 = (ulonglong)(param_1 % 100000000 + (int)uVar1 * -10000) << 0x20 | uVar1;
    uVar3 = uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f;
    lVar2 = (longlong)((int)(uVar4 - 10) >> 8);
    *(short *)param_2 =
         (short)(uVar4 * 0x100 + (uVar4 / 10) * -0x9ff + 0x3030 >> ((byte)(uVar4 - 10 >> 8) & 8));
    *(ulonglong *)(lVar2 + 2 + (longlong)param_2) =
         (uVar3 * -0x283bff99 + uVar1 * 0x670000 >> 10 & 0xf000f000f000f) * -0x9ff +
         uVar3 * -0x63ffff00 + 0x3030303030303030 + uVar1 * 0x1000000;
    return (longlong)param_2 + lVar2 + 10;
  }
  uVar1 = (ulonglong)(param_1 + (int)((ulonglong)param_1 / 10000) * -10000) << 0x20 |
          (ulonglong)param_1 / 10000;
  lVar2 = uVar1 * 0x10000 + (uVar1 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
  uVar1 = ((ulonglong)(lVar2 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff + lVar2 * 0x100;
  if (__isa_available < 5) {
    lVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    uVar4 = (uint)lVar2;
    if (uVar1 == 0) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = 0;
    for (uVar3 = uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
  }
  *param_2 = uVar1 + 0x3030303030303030 >> ((byte)uVar4 & 0x38);
  return (longlong)param_2 + (8 - (ulonglong)(uVar4 >> 3));
}

// FUN_14f8f6200 @ 14f8f6200

longlong * FUN_14f8f6200(ulonglong param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  if (0xffffffff < param_1) {
    uVar7 = param_1 / 100000000;
    uVar5 = (int)param_1 + (int)uVar7 * -100000000;
    if (param_1 < 10000000000000000) {
      plVar2 = (longlong *)FUN_14f8f6050(uVar7 & 0xffffffff,param_2);
    }
    else {
      iVar9 = (int)(uVar7 / 100000000);
      uVar6 = (int)uVar7 + iVar9 * -100000000;
      uVar4 = (ulonglong)uVar6 / 10000;
      uVar4 = (ulonglong)(uVar6 + (int)uVar4 * -10000) << 0x20 | uVar4;
      lVar8 = uVar4 * 0x10000 + (uVar4 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
      uVar6 = iVar9 * 0x10000 + (int)((uVar7 / 100000000) / 100) * -0x63ffff;
      uVar6 = uVar6 * 0x100 + ((uint)((ulonglong)uVar6 * 0x67 >> 10) & 0xf000f) * -0x9ff;
      if (__isa_available < 5) {
        uVar3 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (uVar6 == 0) {
          uVar3 = 0x20;
        }
      }
      else {
        uVar3 = 0;
        for (uVar1 = uVar6; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
      }
      *param_2 = uVar6 + 0x30303030 >> ((byte)uVar3 & 0x18);
      plVar2 = (longlong *)((longlong)param_2 + (4 - (ulonglong)(uVar3 >> 3)));
      *plVar2 = lVar8 * 0x100 + ((ulonglong)(lVar8 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
                0x3030303030303030;
      plVar2 = plVar2 + 1;
    }
    uVar7 = (ulonglong)uVar5 / 10000;
    uVar7 = (ulonglong)(uVar5 + (int)uVar7 * -10000) << 0x20 | uVar7;
    uVar4 = uVar7 * 0x28f6 >> 0x14 & 0x7f0000007f;
    *plVar2 = (uVar4 * -0x283bff99 + uVar7 * 0x670000 >> 10 & 0xf000f000f000f) * -0x9ff +
              uVar4 * -0x63ffff00 + 0x3030303030303030 + uVar7 * 0x1000000;
    return plVar2 + 1;
  }
  plVar2 = (longlong *)FUN_14f8f6050();
  return plVar2;
}

// FastIntToBuffer @ 14f8f64d0

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(int,char * __ptr64)
    */

char * __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(int param_1,char *param_2)

{
  char *pcVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_0000000c,param_1);
  if (param_1 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar2 = (ulonglong)(uint)-param_1;
  }
  pcVar1 = (char *)FUN_14f8f6050(uVar2,param_2);
  *pcVar1 = '\0';
  return pcVar1;
}

// FastIntToBuffer @ 14f8f6500

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(unsigned int,char *
   __ptr64) */

char * __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(uint param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_14f8f6050();
  *pcVar1 = '\0';
  return pcVar1;
}

// FastIntToBuffer @ 14f8f6520

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(__int64,char *
   __ptr64) */

char * __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(__int64 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_1 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
  }
  pcVar1 = (char *)FUN_14f8f6200(param_1,param_2);
  *pcVar1 = '\0';
  return pcVar1;
}

// FastIntToBuffer @ 14f8f6550

/* char * __ptr64 __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(unsigned
   __int64,char * __ptr64) */

char * __cdecl absl::lts_20240722::numbers_internal::FastIntToBuffer(__uint64 param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_14f8f6200();
  *pcVar1 = '\0';
  return pcVar1;
}

// FromHost16 @ 14f8f6570

/* unsigned short __cdecl absl::lts_20240722::little_endian::FromHost16(unsigned short) */

ushort __cdecl absl::lts_20240722::little_endian::FromHost16(ushort param_1)

{
  return param_1;
}

// FromHost32 @ 14f8f6580

/* unsigned int __cdecl absl::lts_20240722::little_endian::FromHost32(unsigned int) */

uint __cdecl absl::lts_20240722::little_endian::FromHost32(uint param_1)

{
  return param_1;
}

// FromHost64 @ 14f8f6590

/* unsigned __int64 __cdecl absl::lts_20240722::little_endian::FromHost64(unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::little_endian::FromHost64(__uint64 param_1)

{
  return param_1;
}

// Int128High64 @ 14f8f65a0

/* __int64 __cdecl absl::lts_20240722::Int128High64(class absl::lts_20240722::int128) */

__int64 __cdecl absl::lts_20240722::Int128High64(int128 *param_1)

{
  return param_1->hi_;
}

// Int128Low64 @ 14f8f65b0

/* unsigned __int64 __cdecl absl::lts_20240722::Int128Low64(class absl::lts_20240722::int128) */

__uint64 __cdecl absl::lts_20240722::Int128Low64(int128 *param_1)

{
  return param_1->lo_;
}

// Int128Max @ 14f8f65c0

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::Int128Max(void) */

int128 * __cdecl absl::lts_20240722::Int128Max(int128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0xffffffffffffffff;
  __return_storage_ptr__->hi_ = 0x7fffffffffffffff;
  return __return_storage_ptr__;
}

// Int128Min @ 14f8f65e0

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::Int128Min(void) */

int128 * __cdecl absl::lts_20240722::Int128Min(int128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0;
  __return_storage_ptr__->hi_ = -0x8000000000000000;
  return __return_storage_ptr__;
}

// MakeInt128 @ 14f8f6600

/* class absl::lts_20240722::int128 __cdecl absl::lts_20240722::MakeInt128(__int64,unsigned __int64)
    */

int128 * __cdecl
absl::lts_20240722::MakeInt128(int128 *__return_storage_ptr__,__int64 param_1,__uint64 param_2)

{
  __return_storage_ptr__->lo_ = param_2;
  __return_storage_ptr__->hi_ = param_1;
  return __return_storage_ptr__;
}

// FUN_14f8f6620 @ 14f8f6620

ulonglong * FUN_14f8f6620(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  param_3 = param_3 & 0xffffffff;
  uVar5 = (param_2[1] >> 0x20) * param_3;
  uVar4 = (param_2[1] & 0xffffffff) * param_3;
  uVar6 = (*param_2 >> 0x20) * param_3;
  param_3 = (*param_2 & 0xffffffff) * param_3;
  uVar3 = (uVar5 << 0x20) + uVar4;
  uVar4 = (uVar6 << 0x20) + (uVar5 >> 0x20) + param_3 + (ulonglong)(uVar3 < uVar4);
  uVar5 = (uVar6 >> 0x20) + (ulonglong)(uVar4 < param_3);
  if (uVar5 != 0) {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar5 != 0) {
        bVar2 = 0x3f - (char)lVar1;
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      bVar2 = (byte)LZCOUNT(uVar5);
    }
    *param_1 = (uVar5 << (bVar2 & 0x3f)) + (uVar4 >> (0x40 - bVar2 & 0x3f));
    param_1[1] = (uVar4 << (bVar2 & 0x3f)) + (uVar3 >> (0x40 - bVar2 & 0x3f));
    return param_1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return param_1;
}

// FUN_14f8f66f0 @ 14f8f66f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_14f8f66f0(ulonglong *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_58 [14];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)local_58;
  *param_1 = param_2;
  param_1[1] = 0;
  if (0xc < (int)param_3) {
    uVar5 = (ulonglong)param_3 / 0xd;
    param_3 = param_3 + (int)uVar5 * -0xd;
    do {
      uVar6 = (param_1[1] & 0xffffffff) * 0x48c27395;
      uVar7 = (param_1[1] >> 0x20) * 0x48c27395;
      uVar3 = (*param_1 & 0xffffffff) * 0x48c27395;
      uVar8 = (*param_1 >> 0x20) * 0x48c27395;
      uVar9 = (uVar7 << 0x20) + uVar6;
      uVar6 = (uVar8 << 0x20) + (uVar7 >> 0x20) + uVar3 + (ulonglong)(uVar9 < uVar6);
      uVar3 = (uVar8 >> 0x20) + (ulonglong)(uVar6 < uVar3);
      if (uVar3 != 0) {
        if (__isa_available < 5) {
          lVar1 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          if (uVar3 != 0) {
            bVar2 = 0x3f - (char)lVar1;
          }
          else {
            bVar2 = 0;
          }
        }
        else {
          bVar2 = (byte)LZCOUNT(uVar3);
        }
        uVar9 = (uVar9 >> (-bVar2 & 0x3f)) + (uVar6 << (bVar2 & 0x3f));
        uVar6 = (uVar6 >> (-bVar2 & 0x3f)) + (uVar3 << (bVar2 & 0x3f));
      }
      *param_1 = uVar6;
      param_1[1] = uVar9;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_58[0] = 1;
  local_58[1] = 5;
  local_58[2] = 0x19;
  local_58[3] = 0x7d;
  local_58[4] = 0x271;
  local_58[5] = 0xc35;
  local_58[6] = 0x3d09;
  local_58[7] = 0x1312d;
  local_58[8] = 0x5f5e1;
  local_58[9] = 0x1dcd65;
  local_58[10] = 0x9502f9;
  local_58[0xb] = 0x2e90edd;
  local_58[0xc] = 0xe8d4a51;
  uVar5 = (ulonglong)local_58[param_3 & 0xf];
  uVar3 = (param_1[1] >> 0x20) * uVar5;
  uVar8 = (*param_1 >> 0x20) * uVar5;
  uVar6 = (param_1[1] & 0xffffffff) * uVar5;
  uVar5 = (*param_1 & 0xffffffff) * uVar5;
  uVar7 = (uVar3 << 0x20) + uVar6;
  uVar6 = (uVar3 >> 0x20) + (uVar8 << 0x20) + uVar5 + (ulonglong)(uVar7 < uVar6);
  uVar5 = (uVar8 >> 0x20) + (ulonglong)(uVar6 < uVar5);
  if (uVar5 != 0) {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar5 != 0) {
        bVar2 = 0x3f - (char)lVar1;
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      bVar2 = (byte)LZCOUNT(uVar5);
    }
    uVar7 = (uVar7 >> (-bVar2 & 0x3f)) + (uVar6 << (bVar2 & 0x3f));
    uVar6 = (uVar6 >> (-bVar2 & 0x3f)) + (uVar5 << (bVar2 & 0x3f));
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  if (__isa_available < 5) {
    lVar1 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    if (uVar6 != 0) {
      iVar4 = 0x3f - (int)lVar1;
    }
    else {
      iVar4 = 0x40;
    }
  }
  else {
    iVar4 = (int)LZCOUNT(uVar6);
  }
  if (iVar4 != 0) {
    bVar2 = (byte)iVar4;
    param_1[1] = uVar7 << (bVar2 & 0x3f);
    *param_1 = (uVar7 >> (0x40 - bVar2 & 0x3f)) + (uVar6 << (bVar2 & 0x3f));
  }
  return param_1;
}

// PutTwoDigits @ 14f8f6a00

/* void __cdecl absl::lts_20240722::numbers_internal::PutTwoDigits(unsigned int,char * __ptr64) */

void __cdecl absl::lts_20240722::numbers_internal::PutTwoDigits(uint param_1,char *param_2)

{
  *(short *)param_2 =
       (short)param_1 * 0x100 + (short)((ulonglong)param_1 * 0x67 >> 10) * -0x9ff + 0x3030;
  return;
}

// SignedAddResult @ 14f8f6a40

/* class absl::lts_20240722::int128 __cdecl
   absl::lts_20240722::int128_internal::SignedAddResult(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::int128_internal::SignedAddResult
          (int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2)

{
  longlong lVar1;
  long64 lVar2;
  
  if (param_1->lo_ < param_2->lo_) {
    lVar1 = param_1->hi_;
    __return_storage_ptr__->lo_ = param_1->lo_;
    __return_storage_ptr__->hi_ = lVar1 + 1;
    return __return_storage_ptr__;
  }
  lVar2 = param_1->hi_;
  __return_storage_ptr__->lo_ = param_1->lo_;
  __return_storage_ptr__->hi_ = lVar2;
  return __return_storage_ptr__;
}

// SignedSubstructResult @ 14f8f6aa0

/* class absl::lts_20240722::int128 __cdecl
   absl::lts_20240722::int128_internal::SignedSubstructResult(class absl::lts_20240722::int128,class
   absl::lts_20240722::int128,class absl::lts_20240722::int128) */

int128 * __cdecl
absl::lts_20240722::int128_internal::SignedSubstructResult
          (int128 *__return_storage_ptr__,int128 *param_1,int128 *param_2,int128 *param_3)

{
  longlong lVar1;
  long64 lVar2;
  
  if (param_2->lo_ < param_3->lo_) {
    lVar1 = param_1->hi_;
    __return_storage_ptr__->lo_ = param_1->lo_;
    __return_storage_ptr__->hi_ = lVar1 + -1;
    return __return_storage_ptr__;
  }
  lVar2 = param_1->hi_;
  __return_storage_ptr__->lo_ = param_1->lo_;
  __return_storage_ptr__->hi_ = lVar2;
  return __return_storage_ptr__;
}

// SimpleAtob @ 14f8f6af0

/* bool __cdecl absl::lts_20240722::SimpleAtob(class std::basic_string_view<char,struct
   std::char_traits<char> >,bool * __ptr64) */

bool __cdecl
absl::lts_20240722::SimpleAtob
          (basic_string_view<char,std::char_traits<char>_> *param_1,bool *param_2)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2 == (bool *)0x0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"numbers.cc",0x70,"Check %s failed: %s","out != nullptr",
               "Output pointer must not be nullptr.");
  }
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  local_28._Mydata = "true";
  local_28._Mysize = 4;
  bVar1 = EqualsIgnoreCase(&local_18,&local_28);
  if (!bVar1) {
    local_28._Mydata = param_1->_Mydata;
    local_28._Mysize = param_1->_Mysize;
    local_18._Mydata = "t";
    local_18._Mysize = 1;
    bVar1 = EqualsIgnoreCase(&local_28,&local_18);
    if (!bVar1) {
      local_28._Mydata = param_1->_Mydata;
      local_28._Mysize = param_1->_Mysize;
      local_18._Mydata = "yes";
      local_18._Mysize = 3;
      bVar1 = EqualsIgnoreCase(&local_28,&local_18);
      if (!bVar1) {
        local_28._Mydata = param_1->_Mydata;
        local_28._Mysize = param_1->_Mysize;
        local_18._Mydata = "y";
        local_18._Mysize = 1;
        bVar1 = EqualsIgnoreCase(&local_28,&local_18);
        if (!bVar1) {
          local_28._Mydata = param_1->_Mydata;
          local_28._Mysize = param_1->_Mysize;
          local_18._Mydata = "1";
          local_18._Mysize = 1;
          bVar1 = EqualsIgnoreCase(&local_28,&local_18);
          if (!bVar1) {
            local_28._Mydata = param_1->_Mydata;
            local_28._Mysize = param_1->_Mysize;
            local_18._Mydata = "false";
            local_18._Mysize = 5;
            bVar1 = EqualsIgnoreCase(&local_28,&local_18);
            if (!bVar1) {
              local_28._Mydata = param_1->_Mydata;
              local_28._Mysize = param_1->_Mysize;
              local_18._Mydata = "f";
              local_18._Mysize = 1;
              bVar1 = EqualsIgnoreCase(&local_28,&local_18);
              if (!bVar1) {
                local_28._Mydata = param_1->_Mydata;
                local_28._Mysize = param_1->_Mysize;
                local_18._Mydata = "no";
                local_18._Mysize = 2;
                bVar1 = EqualsIgnoreCase(&local_28,&local_18);
                if (!bVar1) {
                  local_28._Mydata = param_1->_Mydata;
                  local_28._Mysize = param_1->_Mysize;
                  local_18._Mydata = "n";
                  local_18._Mysize = 1;
                  bVar1 = EqualsIgnoreCase(&local_28,&local_18);
                  if (!bVar1) {
                    local_28._Mydata = param_1->_Mydata;
                    local_28._Mysize = param_1->_Mysize;
                    local_18._Mydata = "0";
                    local_18._Mysize = 1;
                    bVar1 = EqualsIgnoreCase(&local_28,&local_18);
                    if (!bVar1) {
                      return false;
                    }
                  }
                }
              }
            }
            *param_2 = false;
            return true;
          }
        }
      }
    }
  }
  *param_2 = true;
  return true;
}

// SimpleAtod @ 14f8f6db0

/* bool __cdecl absl::lts_20240722::SimpleAtod(class std::basic_string_view<char,struct
   std::char_traits<char> >,double * __ptr64) */

bool __cdecl
absl::lts_20240722::SimpleAtod
          (basic_string_view<char,std::char_traits<char>_> *param_1,double *param_2)

{
  double *pdVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *local_18;
  ulonglong uStack_10;
  
  *param_2 = 0.0;
  local_18 = (byte *)param_1->_Mydata;
  uVar2 = param_1->_Mysize;
  pbVar7 = local_18;
  while ((pbVar7 != local_18 + uVar2 &&
         ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)*pbVar7) & 8) != 0))) {
    pbVar7 = pbVar7 + 1;
  }
  uVar8 = (longlong)pbVar7 - (longlong)local_18;
  if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  local_18 = local_18 + uVar8;
  uVar9 = 0xffffffffffffffff;
  if (uVar2 - uVar8 != 0xffffffffffffffff) {
    uVar9 = uVar2 - uVar8;
  }
  pbVar7 = local_18 + uVar9;
  do {
    pbVar3 = pbVar7;
    if (pbVar3 == local_18) break;
    pbVar7 = pbVar3 + -1;
  } while ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)pbVar3[-1]) & 8) != 0);
  uStack_10 = (longlong)pbVar3 - (longlong)local_18;
  if (uVar9 < (ulonglong)((longlong)pbVar3 - (longlong)local_18)) {
    uStack_10 = uVar9;
  }
  param_1->_Mydata = (char *)local_18;
  param_1->_Mysize = uStack_10;
  uVar4 = param_1->_Mysize;
  if ((uVar4 != 0) && (*param_1->_Mydata == '+')) {
    pcVar6 = param_1->_Mydata + 1;
    uVar4 = uVar4 - 1;
    param_1->_Mydata = pcVar6;
    if ((uVar4 != 0) && (*pcVar6 == '-')) {
      return false;
    }
  }
  pdVar1 = (double *)(param_1->_Mydata + uVar4);
  puVar5 = (undefined8 *)from_chars((char *)&local_18,param_1->_Mydata,pdVar1,(chars_format)param_2)
  ;
  if ((*(int *)(puVar5 + 1) != 0x16) && ((double *)*puVar5 == pdVar1)) {
    if (*(int *)(puVar5 + 1) == 0x22) {
      if (__real_3ff0000000000000 < *param_2) {
        *param_2 = INFINITY;
        return true;
      }
      if (*param_2 < __real_bff0000000000000) {
        *param_2 = -INFINITY;
      }
    }
    return true;
  }
  return false;
}

// SimpleAtof @ 14f8f6f30

/* bool __cdecl absl::lts_20240722::SimpleAtof(class std::basic_string_view<char,struct
   std::char_traits<char> >,float * __ptr64) */

bool __cdecl
absl::lts_20240722::SimpleAtof
          (basic_string_view<char,std::char_traits<char>_> *param_1,float *param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *local_18;
  ulonglong uStack_10;
  
  *param_2 = 0.0;
  local_18 = (byte *)param_1->_Mydata;
  uVar2 = param_1->_Mysize;
  pbVar7 = local_18;
  while ((pbVar7 != local_18 + uVar2 &&
         ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)*pbVar7) & 8) != 0))) {
    pbVar7 = pbVar7 + 1;
  }
  uVar8 = (longlong)pbVar7 - (longlong)local_18;
  if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  local_18 = local_18 + uVar8;
  uVar9 = 0xffffffffffffffff;
  if (uVar2 - uVar8 != 0xffffffffffffffff) {
    uVar9 = uVar2 - uVar8;
  }
  pbVar7 = local_18 + uVar9;
  do {
    pbVar3 = pbVar7;
    if (pbVar3 == local_18) break;
    pbVar7 = pbVar3 + -1;
  } while ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)pbVar3[-1]) & 8) != 0);
  uStack_10 = (longlong)pbVar3 - (longlong)local_18;
  if (uVar9 < (ulonglong)((longlong)pbVar3 - (longlong)local_18)) {
    uStack_10 = uVar9;
  }
  param_1->_Mydata = (char *)local_18;
  param_1->_Mysize = uStack_10;
  uVar4 = param_1->_Mysize;
  if ((uVar4 != 0) && (*param_1->_Mydata == '+')) {
    pcVar6 = param_1->_Mydata + 1;
    uVar4 = uVar4 - 1;
    param_1->_Mydata = pcVar6;
    if ((uVar4 != 0) && (*pcVar6 == '-')) {
      return false;
    }
  }
  pfVar1 = (float *)(param_1->_Mydata + uVar4);
  puVar5 = (undefined8 *)from_chars((char *)&local_18,param_1->_Mydata,pfVar1,(chars_format)param_2)
  ;
  if ((*(int *)(puVar5 + 1) != 0x16) && ((float *)*puVar5 == pfVar1)) {
    if (*(int *)(puVar5 + 1) == 0x22) {
      if (__real_3f800000 < *param_2) {
        *param_2 = INFINITY;
        return true;
      }
      if (*param_2 < __real_bf800000) {
        *param_2 = -INFINITY;
      }
    }
    return true;
  }
  return false;
}

// SixDigitsToBuffer @ 14f8f70a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned __int64 __cdecl absl::lts_20240722::numbers_internal::SixDigitsToBuffer(double,char *
   __ptr64) */

__uint64 __cdecl
absl::lts_20240722::numbers_internal::SixDigitsToBuffer(double param_1,char *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  short *psVar13;
  byte *pbVar14;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  char cStack_24;
  char cStack_22;
  undefined1 uStack_21;
  byte bStack_20;
  byte bStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (NAN(param_1)) {
    builtin_strncpy(param_2,"nan",4);
    return 3;
  }
  if (param_1 == 0.0) {
    iVar7 = _dsign();
    pcVar10 = param_2;
    if (iVar7 != 0) {
      *param_2 = '-';
      pcVar10 = param_2 + 1;
    }
    *pcVar10 = '0';
    pcVar10[1] = '\0';
    return (__uint64)(pcVar10 + 1 + -(longlong)param_2);
  }
  pcVar10 = param_2;
  if (param_1 < 0.0) {
    param_1 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    pcVar10 = param_2 + 1;
    *param_2 = '-';
  }
  if (__real_7fefffffffffffff < param_1) {
    builtin_strncpy(pcVar10,"inf",4);
    return (__uint64)(pcVar10 + (3 - (longlong)param_2));
  }
  puVar8 = (undefined8 *)FUN_14f8f7430(local_38,SUB84(param_1,0));
  uVar1 = *puVar8;
  uVar2 = *(undefined4 *)(puVar8 + 1);
  local_28 = (uint)uVar1;
  cStack_24 = (char)((ulonglong)uVar1 >> 0x20);
  cStack_22 = (char)((ulonglong)uVar1 >> 0x30);
  uStack_21 = (undefined1)((ulonglong)uVar1 >> 0x38);
  bStack_20 = (byte)uVar2;
  bStack_1f = (byte)((uint)uVar2 >> 8);
  *pcVar10 = '0';
  pcVar10[1] = '.';
  uVar5 = (undefined3)((ulonglong)uVar1 >> 0x28);
  uVar3 = (undefined2)((ulonglong)uVar1 >> 0x20);
  uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  switch(local_28) {
  case 0:
    *pcVar10 = cStack_24;
    *(uint *)(pcVar10 + 2) = CONCAT13(bStack_20,uVar5);
    pcVar10[6] = bStack_1f;
    cVar6 = pcVar10[6];
    pcVar10 = pcVar10 + 7;
    while (cVar6 == '0') {
      cVar6 = pcVar10[-2];
      pcVar10 = pcVar10 + -1;
    }
    pcVar9 = pcVar10 + -1;
    if (pcVar10[-1] != '.') {
      pcVar9 = pcVar10;
    }
    *pcVar9 = '\0';
    pbVar14 = (byte *)(pcVar9 + -(longlong)param_2);
    break;
  case 1:
    *(undefined2 *)pcVar10 = uVar3;
    pcVar10[2] = '.';
    *(uint *)(pcVar10 + 3) =
         CONCAT13(bStack_1f,CONCAT12(bStack_20,(short)((ulonglong)uVar1 >> 0x30)));
    cVar6 = pcVar10[6];
    pcVar10 = pcVar10 + 7;
    while (cVar6 == '0') {
      cVar6 = pcVar10[-2];
      pcVar10 = pcVar10 + -1;
    }
    goto LAB_14f8f7259;
  case 2:
    *(undefined2 *)pcVar10 = uVar3;
    pcVar10[2] = cStack_22;
    pcVar10[3] = '.';
    *(ushort *)(pcVar10 + 4) = CONCAT11(bStack_20,uStack_21);
    pcVar10[6] = bStack_1f;
    cVar6 = pcVar10[6];
    pcVar10 = pcVar10 + 7;
    while (cVar6 == '0') {
      cVar6 = pcVar10[-2];
      pcVar10 = pcVar10 + -1;
    }
LAB_14f8f7259:
    pcVar9 = pcVar10 + -1;
    if (pcVar10[-1] != '.') {
      pcVar9 = pcVar10;
    }
    *pcVar9 = '\0';
    pbVar14 = (byte *)(pcVar9 + -(longlong)param_2);
    break;
  case 3:
    *(undefined4 *)pcVar10 = uVar4;
    pbVar14 = (byte *)(pcVar10 + 4);
    if ((bStack_1f | bStack_20) != 0x30) {
      *pbVar14 = 0x2e;
      pcVar10[5] = bStack_20;
      pbVar14 = (byte *)(pcVar10 + 6);
      if (bStack_1f != 0x30) {
        *pbVar14 = bStack_1f;
        pbVar14 = (byte *)(pcVar10 + 7);
      }
    }
    *pbVar14 = 0;
    pbVar14 = pbVar14 + -(longlong)param_2;
    break;
  case 4:
    *(undefined4 *)pcVar10 = uVar4;
    pcVar10[4] = bStack_20;
    pcVar9 = pcVar10 + 5;
    if (bStack_1f != 0x30) {
      *pcVar9 = '.';
      pcVar10[6] = bStack_1f;
      pcVar9 = pcVar10 + 7;
    }
    goto LAB_14f8f71cf;
  case 5:
    *(undefined4 *)pcVar10 = uVar4;
    *(short *)(pcVar10 + 4) = (short)uVar2;
    pcVar10[6] = '\0';
    pbVar14 = (byte *)(pcVar10 + 6 + -(longlong)param_2);
    break;
  case 0xfffffffc:
    pcVar10[2] = '0';
    pcVar10 = pcVar10 + 1;
  case 0xfffffffd:
    pcVar10[2] = '0';
    pcVar10 = pcVar10 + 1;
  case 0xfffffffe:
    pcVar10[2] = '0';
    pcVar10 = pcVar10 + 1;
  case 0xffffffff:
    *(undefined4 *)(pcVar10 + 2) = uVar4;
    *(short *)(pcVar10 + 6) = (short)uVar2;
    pcVar9 = pcVar10 + 8;
    if (pcVar10[7] == '0') {
      do {
        pcVar11 = pcVar9 + -1;
        pcVar10 = pcVar9 + -2;
        pcVar9 = pcVar11;
      } while (*pcVar10 == '0');
      *pcVar11 = '\0';
      pbVar14 = (byte *)(pcVar11 + -(longlong)param_2);
    }
    else {
LAB_14f8f71cf:
      *pcVar9 = '\0';
      pbVar14 = (byte *)(pcVar9 + -(longlong)param_2);
    }
    break;
  default:
    *pcVar10 = cStack_24;
    *(uint *)(pcVar10 + 2) = CONCAT13(bStack_20,uVar5);
    pcVar10[6] = bStack_1f;
    cVar6 = pcVar10[6];
    pcVar10 = pcVar10 + 7;
    while (cVar6 == '0') {
      cVar6 = pcVar10[-2];
      pcVar10 = pcVar10 + -1;
    }
    pcVar9 = pcVar10 + -1;
    if (pcVar10[-1] != '.') {
      pcVar9 = pcVar10;
    }
    *pcVar9 = 'e';
    psVar13 = (short *)(pcVar9 + 2);
    uVar12 = local_28;
    if ((int)local_28 < 1) {
      uVar12 = -local_28;
    }
    cVar6 = '+';
    if ((int)local_28 < 1) {
      cVar6 = '-';
    }
    pcVar9[1] = cVar6;
    if (99 < (int)uVar12) {
      *(char *)psVar13 = (char)((int)uVar12 / 100) + '0';
      uVar12 = (int)uVar12 % 100;
      psVar13 = (short *)(pcVar9 + 3);
    }
    *psVar13 = (short)uVar12 * 0x100 + (short)((ulonglong)uVar12 * 0x67 >> 10) * -0x9ff + 0x3030;
    *(char *)(psVar13 + 1) = '\0';
    pbVar14 = (byte *)((longlong)(psVar13 + 1) - (longlong)param_2);
  }
  return (__uint64)pbVar14;
}

// FUN_14f8f7430 @ 14f8f7430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14f8f7430(int *param_1,double param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  int local_res8 [2];
  undefined1 local_48 [32];
  
  dVar1 = __real_43e0000000000000;
  dVar12 = param_2;
  if (param_2 < ___real_412e847f00000000) {
    if (param_2 < __real_0c06e93f5da2824c) {
      dVar12 = param_2 * ___real_75154fdd7f73bf3c;
    }
    iVar3 = -0xfb;
    if (__real_0c06e93f5da2824c <= param_2) {
      iVar3 = 5;
    }
    if (dVar12 < __real_269a71368f0f3047) {
      dVar12 = dVar12 * ___real_5a827748f9301d32;
      iVar3 = iVar3 + -0x80;
    }
    if (dVar12 < __real_33e41633a556e1ce) {
      dVar12 = dVar12 * ___real_4d384f03e93ff9f5;
      iVar3 = iVar3 + -0x40;
    }
    if (dVar12 < __real_3a88c240c4aecb14) {
      dVar12 = dVar12 * ___real_4693b8b5b5056e17;
      iVar3 = iVar3 + -0x20;
    }
    if (dVar12 < __real_3ddb7cdfd9d7bdbb) {
      dVar12 = dVar12 * ___real_4341c37937e08000;
      iVar3 = iVar3 + -0x10;
    }
    if (dVar12 < __real_3f847ae147ae147b) {
      dVar12 = dVar12 * __real_4197d78400000000;
      iVar3 = iVar3 + -8;
    }
    if (dVar12 < __real_4059000000000000) {
      dVar12 = dVar12 * __real_40c3880000000000;
      iVar3 = iVar3 + -4;
    }
    if (dVar12 < __real_40c3880000000000) {
      dVar12 = dVar12 * __real_4059000000000000;
      iVar3 = iVar3 + -2;
    }
    if (dVar12 < __real_40f86a0000000000) {
      dVar12 = dVar12 * __real_4024000000000000;
      iVar3 = iVar3 + -1;
    }
  }
  else {
    if (___real_7620427ead4cfed6 <= param_2) {
      dVar12 = param_2 * ___real_0ac8062864ac6f43;
    }
    iVar3 = 0x105;
    if (___real_7620427ead4cfed6 > param_2) {
      iVar3 = 5;
    }
    if (___real_5b8c2d43b93b0a8c <= dVar12) {
      dVar12 = dVar12 * ___real_255bba08cf8c979d;
      iVar3 = iVar3 + 0x80;
    }
    if (__real_4e428bc8abe49f64 <= dVar12) {
      dVar12 = dVar12 * ___real_32a50ffd44f4a73d;
      iVar3 = iVar3 + 0x40;
    }
    if (__real_479e17b84357691b <= dVar12) {
      dVar12 = dVar12 * ___real_3949f623d5a8a733;
      iVar3 = iVar3 + 0x20;
    }
    if (__real_444b1ae4d6e2ef50 <= dVar12) {
      dVar12 = dVar12 * __real_3c9cd2b297d889bc;
      iVar3 = iVar3 + 0x10;
    }
    if (__real_42a2309ce5400000 <= dVar12) {
      dVar12 = dVar12 * __real_3e45798ee2308c3a;
      iVar3 = iVar3 + 8;
    }
    if (__real_41cdcd6500000000 <= dVar12) {
      dVar12 = dVar12 * __real_3f1a36e2eb1c432d;
      iVar3 = iVar3 + 4;
    }
    if (__real_416312d000000000 <= dVar12) {
      dVar12 = dVar12 * __real_3f847ae147ae147b;
      iVar3 = iVar3 + 2;
    }
    if (__real_412e848000000000 <= dVar12) {
      dVar12 = dVar12 * __real_3fb999999999999a;
      iVar3 = iVar3 + 1;
    }
  }
  dVar12 = dVar12 * ___real_40f0000000000000;
  if (__real_43e0000000000000 <= dVar12) {
    dVar12 = dVar12 - __real_43e0000000000000;
  }
  uVar7 = (ulonglong)dVar12;
  if ((uVar7 & 0xffff) - 0x7fff < 2) {
    uVar8 = (uint)(uVar7 >> 0x10);
    dVar12 = frexp(param_2,local_res8);
    dVar12 = dVar12 * dVar1;
    if (dVar1 <= dVar12) {
      dVar12 = dVar12 - dVar1;
    }
    local_res8[0] = local_res8[0] + -0x40;
    iVar6 = uVar8 * 2 + 1;
    uVar7 = (longlong)dVar12 * 2;
    if (iVar3 < 6) {
      puVar4 = (ulonglong *)FUN_14f8f66f0(local_48,iVar6,0);
      uVar10 = *puVar4;
      uVar9 = puVar4[1];
      puVar4 = (ulonglong *)FUN_14f8f66f0(local_48,uVar7,5 - iVar3);
      uVar7 = *puVar4;
      uVar5 = puVar4[1];
    }
    else {
      puVar4 = (ulonglong *)FUN_14f8f66f0(local_48,iVar6,iVar3 + -5);
      uVar5 = 0;
      uVar10 = *puVar4;
      uVar9 = puVar4[1];
    }
    bVar11 = uVar7 < uVar10;
    if ((uVar7 == uVar10) && (bVar11 = uVar5 < uVar9, uVar5 == uVar9)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = -1;
      if (!bVar11) {
        cVar2 = '\x01';
      }
    }
    if (cVar2 < '\x01') {
      if ((uVar7 == uVar10) && (uVar5 == uVar9)) {
        uVar8 = uVar8 + (uVar8 & 1);
      }
    }
    else {
      uVar8 = uVar8 + 1;
    }
  }
  else {
    uVar8 = (uint)(uVar7 + 0x8000 >> 0x10);
  }
  uVar7 = (ulonglong)uVar8;
  if (uVar8 == 1000000) {
    uVar7 = 100000;
    iVar3 = iVar3 + 1;
  }
  *param_1 = iVar3;
  uVar10 = uVar7 / 10000;
  uVar8 = (int)uVar7 + (int)uVar10 * -10000;
  uVar7 = (ulonglong)uVar8 / 100;
  *(short *)(param_1 + 1) = (short)uVar10 * 0x100 + (short)(uVar10 * 0x67 >> 10) * -0x9ff + 0x3030;
  uVar8 = uVar8 + (int)uVar7 * -100;
  *(short *)((longlong)param_1 + 6) =
       (short)uVar7 * 0x100 + (short)(uVar7 * 0x67 >> 10) * -0x9ff + 0x3030;
  *(short *)(param_1 + 2) =
       (short)uVar8 * 0x100 + (short)((ulonglong)uVar8 * 0x67 >> 10) * -0x9ff + 0x3030;
  return param_1;
}

// Store16 @ 14f8f78b0

/* void __cdecl absl::lts_20240722::little_endian::Store16(void * __ptr64,unsigned short) */

void __cdecl absl::lts_20240722::little_endian::Store16(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// Store32 @ 14f8f78c0

/* void __cdecl absl::lts_20240722::little_endian::Store32(void * __ptr64,unsigned int) */

void __cdecl absl::lts_20240722::little_endian::Store32(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// Store64 @ 14f8f78d0

/* void __cdecl absl::lts_20240722::little_endian::Store64(void * __ptr64,unsigned __int64) */

void __cdecl absl::lts_20240722::little_endian::Store64(void *param_1,__uint64 param_2)

{
  *(__uint64 *)param_1 = param_2;
  return;
}

// SubstructResult @ 14f8f78e0

/* class absl::lts_20240722::uint128 __cdecl
   absl::lts_20240722::int128_internal::SubstructResult(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::int128_internal::SubstructResult
          (uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2,uint128 *param_3)

{
  ulong64 uVar1;
  
  if (param_2->lo_ < param_3->lo_) {
    uVar1 = param_1->hi_;
    __return_storage_ptr__->lo_ = param_1->lo_;
    __return_storage_ptr__->hi_ = uVar1 - 1;
    return __return_storage_ptr__;
  }
  uVar1 = param_1->hi_;
  __return_storage_ptr__->lo_ = param_1->lo_;
  __return_storage_ptr__->hi_ = uVar1;
  return __return_storage_ptr__;
}

// Uint128Max @ 14f8f7930

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::Uint128Max(void) */

uint128 * __cdecl absl::lts_20240722::Uint128Max(uint128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0xffffffffffffffff;
  __return_storage_ptr__->hi_ = 0xffffffffffffffff;
  return __return_storage_ptr__;
}

// UnalignedStore16 @ 14f8f7950

/* void __cdecl absl::lts_20240722::base_internal::UnalignedStore16(void * __ptr64,unsigned short)
    */

void __cdecl absl::lts_20240722::base_internal::UnalignedStore16(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// UnalignedStore32 @ 14f8f7960

/* void __cdecl absl::lts_20240722::base_internal::UnalignedStore32(void * __ptr64,unsigned int) */

void __cdecl absl::lts_20240722::base_internal::UnalignedStore32(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// UnalignedStore64 @ 14f8f7970

/* void __cdecl absl::lts_20240722::base_internal::UnalignedStore64(void * __ptr64,unsigned __int64)
    */

void __cdecl absl::lts_20240722::base_internal::UnalignedStore64(void *param_1,__uint64 param_2)

{
  *(__uint64 *)param_1 = param_2;
  return;
}

// fpclassify @ 14f8f7980

/* int __cdecl fpclassify(double) */

int __cdecl fpclassify(double param_1)

{
  short sVar1;
  
  sVar1 = _dclass();
  return (int)sVar1;
}

// infinity @ 14f8f79a0

/* public: static float __cdecl std::numeric_limits<float>::infinity(void) */

float __cdecl std::numeric_limits<float>::infinity(void)

{
  return __real_7f800000;
}

// infinity @ 14f8f79b0

/* public: static double __cdecl std::numeric_limits<double>::infinity(void) */

double __cdecl std::numeric_limits<double>::infinity(void)

{
  return __real_7ff0000000000000;
}

// max @ 14f8f79c0

/* public: static int __cdecl std::numeric_limits<int>::max(void) */

int __cdecl std::numeric_limits<int>::max(void)

{
  return 0x7fffffff;
}

// max @ 14f8f79d0

/* public: static unsigned int __cdecl std::numeric_limits<unsigned int>::max(void) */

uint __cdecl std::numeric_limits<unsigned_int>::max(void)

{
  return 0xffffffff;
}

// max @ 14f8f79e0

/* public: static double __cdecl std::numeric_limits<double>::max(void) */

double __cdecl std::numeric_limits<double>::max(void)

{
  return __real_7fefffffffffffff;
}

// max @ 14f8f79f0

/* public: static class absl::lts_20240722::int128 __cdecl std::numeric_limits<class
   absl::lts_20240722::int128>::max(void) */

int128 * __cdecl
std::numeric_limits<absl::lts_20240722::int128>::max(int128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0xffffffffffffffff;
  __return_storage_ptr__->hi_ = 0x7fffffffffffffff;
  return __return_storage_ptr__;
}

// max @ 14f8f7a10

/* public: static class absl::lts_20240722::uint128 __cdecl std::numeric_limits<class
   absl::lts_20240722::uint128>::max(void) */

uint128 * __cdecl
std::numeric_limits<absl::lts_20240722::uint128>::max(uint128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0xffffffffffffffff;
  __return_storage_ptr__->hi_ = 0xffffffffffffffff;
  return __return_storage_ptr__;
}

// min @ 14f8f7a30

/* public: static int __cdecl std::numeric_limits<int>::min(void) */

int __cdecl std::numeric_limits<int>::min(void)

{
  return -0x80000000;
}

// min @ 14f8f7a40

/* public: static class absl::lts_20240722::int128 __cdecl std::numeric_limits<class
   absl::lts_20240722::int128>::min(void) */

int128 * __cdecl
std::numeric_limits<absl::lts_20240722::int128>::min(int128 *__return_storage_ptr__)

{
  __return_storage_ptr__->lo_ = 0;
  __return_storage_ptr__->hi_ = -0x8000000000000000;
  return __return_storage_ptr__;
}

// min @ 14f8f7a60

/* public: static __int64 __cdecl std::numeric_limits<__int64>::min(void) */

__int64 __cdecl std::numeric_limits<__int64>::min(void)

{
  return -0x8000000000000000;
}

// FUN_14f8f7a80 @ 14f8f7a80

ulonglong FUN_14f8f7a80(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined7 uVar5;
  byte *pbVar6;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != (byte *)0x0) {
    iVar3 = *param_2;
    pbVar6 = pbVar4 + param_1[1];
    for (; pbVar4 < pbVar6; pbVar4 = pbVar4 + 1) {
      bVar2 = *pbVar4;
      if ((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + (ulonglong)bVar2
                    ) & 8) == 0) goto LAB_14f8f7af0;
    }
  }
LAB_14f8f7ad3:
  return (ulonglong)pbVar4 & 0xffffffffffffff00;
LAB_14f8f7af0:
  while (pbVar1 = pbVar6 + -1,
        (*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                  (ulonglong)pbVar6[-1]) & 8) != 0) {
    pbVar6 = pbVar1;
    if (pbVar1 <= pbVar4) {
      return (ulonglong)pbVar4 & 0xffffffffffffff00;
    }
  }
  if ((pbVar4 < pbVar6) &&
     (((*(bool *)param_3 = bVar2 == 0x2d, bVar2 != 0x2d && (*pbVar4 != 0x2b)) ||
      (pbVar4 = pbVar4 + 1, pbVar4 < pbVar6)))) {
    uVar5 = (undefined7)((ulonglong)pbVar4 >> 8);
    if (iVar3 == 0) {
      if ((longlong)pbVar6 - (longlong)pbVar4 < 2) {
        if (((longlong)pbVar6 - (longlong)pbVar4 < 1) || (*pbVar4 != 0x30)) goto LAB_14f8f7bc1;
      }
      else {
        if (*pbVar4 != 0x30) {
LAB_14f8f7bc1:
          *param_1 = pbVar4;
          param_1[1] = (longlong)pbVar6 - (longlong)pbVar4;
          *param_2 = 10;
          return CONCAT71(uVar5,1);
        }
        if ((pbVar4[1] + 0xa8 & 0xdf) == 0) {
          pbVar4 = pbVar4 + 2;
          if (pbVar4 < pbVar6) {
            *param_1 = pbVar4;
            param_1[1] = (longlong)pbVar6 - (longlong)pbVar4;
            *param_2 = 0x10;
            return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
          }
          goto LAB_14f8f7ad3;
        }
      }
      pbVar4 = pbVar4 + 1;
      *param_1 = pbVar4;
      param_1[1] = (longlong)pbVar6 - (longlong)pbVar4;
      *param_2 = 8;
      return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
    }
    if (iVar3 == 0x10) {
      if ((((longlong)pbVar6 - (longlong)pbVar4 < 2) || (*pbVar4 != 0x30)) ||
         ((pbVar4[1] + 0xa8 & 0xdf) != 0)) {
LAB_14f8f7c42:
        *param_1 = pbVar4;
        param_1[1] = (longlong)pbVar6 - (longlong)pbVar4;
        *param_2 = iVar3;
        return CONCAT71(uVar5,1);
      }
      pbVar4 = pbVar4 + 2;
      if (pbVar4 < pbVar6) {
        *param_1 = pbVar4;
        param_1[1] = (longlong)pbVar6 - (longlong)pbVar4;
        *param_2 = 0x10;
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
    }
    else if (iVar3 - 2U < 0x23) goto LAB_14f8f7c42;
  }
  goto LAB_14f8f7ad3;
}

// safe_strto128_base @ 14f8f7c70

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strto128_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::int128 *
   __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strto128_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,int128 *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int local_res8 [4];
  char local_res18 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  param_2->lo_ = 0;
  param_2->hi_ = 0;
  local_res8[0] = param_3;
  cVar1 = FUN_14f8f7a80(&local_18,local_res8,local_res18);
  if (cVar1 == '\0') {
    return false;
  }
  if (local_res18[0] == '\0') {
    uVar2 = FUN_14f8f52a0();
    return (bool)uVar2;
  }
  uVar2 = FUN_14f8f4e40(&local_18,local_res8[0],param_2);
  return (bool)uVar2;
}

// safe_strto32_base @ 14f8f7cf0

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strto32_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,int * __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strto32_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,int *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int local_res8 [2];
  char local_res18 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  iVar6 = 0;
  *param_2 = 0;
  local_res8[0] = param_3;
  cVar1 = FUN_14f8f7a80(&local_18,local_res8,local_res18);
  if (cVar1 == '\0') {
    return false;
  }
  if (local_res18[0] != '\0') {
    iVar4 = *(int *)(&DAT_153533750 + (longlong)local_res8[0] * 4) + 1;
    if ((int)(-0x80000000 % (longlong)local_res8[0]) < 1) {
      iVar4 = *(int *)(&DAT_153533750 + (longlong)local_res8[0] * 4);
    }
    pbVar3 = (byte *)CONCAT44(uStack_14,local_18);
    pbVar7 = pbVar3 + CONCAT44(uStack_c,uStack_10);
    do {
      if (pbVar7 <= pbVar3) {
        bVar2 = true;
LAB_14f8f7e30:
        *param_2 = iVar6;
        return bVar2;
      }
      iVar5 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar3];
      if (local_res8[0] <= iVar5) {
        bVar2 = false;
        goto LAB_14f8f7e30;
      }
      if ((iVar6 < iVar4) || (iVar6 * local_res8[0] < iVar5 + -0x80000000)) {
        *param_2 = -0x80000000;
        return false;
      }
      iVar6 = iVar6 * local_res8[0] - iVar5;
      pbVar3 = pbVar3 + 1;
    } while( true );
  }
  pbVar3 = (byte *)CONCAT44(uStack_14,local_18);
  pbVar7 = pbVar3 + CONCAT44(uStack_c,uStack_10);
  do {
    if (pbVar7 <= pbVar3) {
      bVar2 = true;
LAB_14f8f7d9e:
      *param_2 = iVar6;
      return bVar2;
    }
    iVar4 = (int)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar3];
    if (local_res8[0] <= iVar4) {
      bVar2 = false;
      goto LAB_14f8f7d9e;
    }
    if ((*(int *)(&DAT_1535336b0 + (longlong)local_res8[0] * 4) < iVar6) ||
       (0x7fffffff - iVar4 < iVar6 * local_res8[0])) {
      *param_2 = 0x7fffffff;
      return false;
    }
    iVar6 = iVar6 * local_res8[0] + iVar4;
    pbVar3 = pbVar3 + 1;
  } while( true );
}

// safe_strto64_base @ 14f8f7e70

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strto64_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,__int64 * __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strto64_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,__int64 *param_2,int param_3)

{
  bool bVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  bVar1 = (bool)FUN_14f8f4bf0(&local_18);
  return bVar1;
}

// safe_strtou128_base @ 14f8f7ea0

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strtou128_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::uint128 *
   __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strtou128_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,uint128 *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int local_res8 [4];
  char local_res18 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  param_2->lo_ = 0;
  param_2->hi_ = 0;
  local_res8[0] = param_3;
  cVar1 = FUN_14f8f7a80(&local_18,local_res8,local_res18);
  if ((cVar1 != '\0') && (local_res18[0] == '\0')) {
    uVar2 = FUN_14f8f5470(&local_18,local_res8[0],param_2);
    return (bool)uVar2;
  }
  return false;
}

// safe_strtou32_base @ 14f8f7f10

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strtou32_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned int * __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strtou32_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,uint *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint local_res8 [2];
  char local_res18 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  uVar4 = 0;
  *param_2 = 0;
  local_res8[0] = param_3;
  cVar1 = FUN_14f8f7a80(&local_18,local_res8,local_res18);
  if ((cVar1 == '\0') || (local_res18[0] != '\0')) {
    return false;
  }
  pbVar2 = (byte *)CONCAT44(uStack_14,local_18);
  pbVar5 = pbVar2 + CONCAT44(uStack_c,uStack_10);
  while( true ) {
    if (pbVar5 <= pbVar2) {
      *param_2 = uVar4;
      return true;
    }
    uVar3 = (uint)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (local_res8[0] <= uVar3) break;
    if ((*(uint *)(&DAT_153533a50 + (longlong)(int)local_res8[0] * 4) < uVar4) ||
       (~uVar3 < uVar4 * local_res8[0])) {
      *param_2 = 0xffffffff;
      return false;
    }
    uVar4 = uVar4 * local_res8[0] + uVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_2 = uVar4;
  return false;
}

// safe_strtou64_base @ 14f8f8000

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strtou64_base(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64 * __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strtou64_base
          (basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 *param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int local_res8 [2];
  char local_res18 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  uVar4 = 0;
  *param_2 = 0;
  local_res8[0] = param_3;
  cVar1 = FUN_14f8f7a80(&local_18,local_res8,local_res18);
  if ((cVar1 == '\0') || (local_res18[0] != '\0')) {
    return false;
  }
  pbVar2 = (byte *)CONCAT44(uStack_14,local_18);
  uVar5 = (ulonglong)local_res8[0];
  pbVar6 = pbVar2 + CONCAT44(uStack_c,uStack_10);
  while( true ) {
    if (pbVar6 <= pbVar2) {
      *param_2 = uVar4;
      return true;
    }
    uVar3 = (ulonglong)"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"[*pbVar2];
    if (uVar5 <= uVar3) break;
    if ((*(ulonglong *)(&DAT_153533af0 + uVar5 * 8) < uVar4) ||
       (uVar4 = uVar4 * uVar5, ~uVar3 <= uVar4 && uVar4 - ~uVar3 != 0)) {
      *param_2 = 0xffffffffffffffff;
      return false;
    }
    uVar4 = uVar4 + uVar3;
    pbVar2 = pbVar2 + 1;
  }
  *param_2 = uVar4;
  return false;
}

// signbit @ 14f8f80f0

/* bool __cdecl signbit(double) */

bool __cdecl signbit(double param_1)

{
  int iVar1;
  
  iVar1 = _dsign();
  return iVar1 != 0;
}

