// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 75

// pair<int*___ptr64,int*___ptr64><int*___ptr64&___ptr64,int*___ptr64&___ptr64,0> @ 1502489f0

/* public: __cdecl std::pair<int * __ptr64,int * __ptr64>::pair<int * __ptr64,int * __ptr64><int *
   __ptr64 & __ptr64,int * __ptr64 & __ptr64,0>(int * __ptr64 & __ptr64,int * __ptr64 & __ptr64)
   __ptr64 */

pair<int*___ptr64,int*___ptr64> * __thiscall
std::pair<int*___ptr64,int*___ptr64>::
pair<int*___ptr64,int*___ptr64><int*___ptr64&___ptr64,int*___ptr64&___ptr64,0>
          (pair<int*___ptr64,int*___ptr64> *this,int **param_1,int **param_2)

{
  *(int **)this = *param_1;
  *(int **)(this + 8) = *param_2;
  return this;
}

// HidePtr<void> @ 150248a10

/* unsigned __int64 __cdecl absl::lts_20240722::base_internal::HidePtr<void>(void * __ptr64) */

__uint64 __cdecl absl::lts_20240722::base_internal::HidePtr<void>(void *param_1)

{
  return (ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b;
}

// UnhidePtr<void> @ 150248a30

/* void * __ptr64 __cdecl absl::lts_20240722::base_internal::UnhidePtr<void>(unsigned __int64) */

void * __cdecl absl::lts_20240722::base_internal::UnhidePtr<void>(__uint64 param_1)

{
  return (void *)(param_1 ^ 0xf03a5f7bf03a5f7b);
}

// _Adl_verify_range<int*___ptr64,int*___ptr64> @ 150248a50

/* void __cdecl std::_Adl_verify_range<int * __ptr64,int * __ptr64>(int * __ptr64 const &
   __ptr64,int * __ptr64 const & __ptr64) */

void __cdecl std::_Adl_verify_range<int*___ptr64,int*___ptr64>(int **param_1,int **param_2)

{
  return;
}

// FUN_150248a60 @ 150248a60

longlong FUN_150248a60(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}

// FUN_150248aa0 @ 150248aa0

void * FUN_150248aa0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 * 8);
  return (void *)(param_2 * 8 + (longlong)param_3);
}

// _Get_unwrapped<int*___ptr64&___ptr64> @ 150248ae0

/* UNKNOWN __cdecl std::_Get_unwrapped<int * __ptr64 & __ptr64>(int * __ptr64 & __ptr64) */

int * __cdecl std::_Get_unwrapped<int*___ptr64&___ptr64>(int **param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<int*___ptr64&___ptr64,unsigned_int> @ 150248af0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<int * __ptr64 & __ptr64,unsigned int>(int * __ptr64 &
   __ptr64,unsigned int) */

int * __cdecl std::_Get_unwrapped_n<int*___ptr64&___ptr64,unsigned_int>(int **param_1,uint param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<int*___ptr64&___ptr64,unsigned___int64> @ 150248b00

/* UNKNOWN __cdecl std::_Get_unwrapped_n<int * __ptr64 & __ptr64,unsigned __int64>(int * __ptr64 &
   __ptr64,unsigned __int64) */

int * __cdecl
std::_Get_unwrapped_n<int*___ptr64&___ptr64,unsigned___int64>(int **param_1,__uint64 param_2)

{
  return *param_1;
}

// FUN_150248b20 @ 150248b20

void FUN_150248b20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_3 - param_1 >> 2;
  if (0x28 < lVar1) {
    lVar2 = lVar1 + 1 >> 3;
    lVar1 = lVar2 * 4 + param_1;
    FUN_150248e30(param_1,lVar1,lVar2 * 8 + param_1);
    FUN_150248e30(param_2 + lVar2 * -4,param_2,lVar2 * 4 + param_2);
    lVar3 = param_3 + lVar2 * -4;
    FUN_150248e30(param_3 + lVar2 * -8,lVar3,param_3);
    FUN_150248e30(lVar1,param_2,lVar3);
    return;
  }
  FUN_150248e30();
  return;
}

// _Idl_distance<int*___ptr64,int*___ptr64> @ 150248be0

/* UNKNOWN __cdecl std::_Idl_distance<int * __ptr64,int * __ptr64>(int * __ptr64 const & __ptr64,int
   * __ptr64 const & __ptr64) */

longlong __cdecl std::_Idl_distance<int*___ptr64,int*___ptr64>(int **param_1,int **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 2;
}

// FUN_150248c00 @ 150248c00

uint * FUN_150248c00(uint *param_1,uint *param_2,longlong *param_3)

{
  uint *_Dst;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  size_t _Size;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  _Dst = param_1 + 1;
  if (_Dst != param_2) {
    _Size = 4;
    puVar5 = _Dst;
    do {
      lVar3 = *param_3;
      uVar1 = *puVar5;
      iVar2 = **(int **)((ulonglong)uVar1 * 8 + lVar3);
      if (iVar2 < **(int **)(lVar3 + (ulonglong)*param_1 * 8)) {
        memmove(_Dst,param_1,_Size);
        *param_1 = uVar1;
      }
      else {
        puVar4 = (uint *)((longlong)param_1 + (_Size - 4));
        uVar8 = (ulonglong)*puVar4;
        puVar6 = puVar5;
        puVar7 = puVar5;
        if (iVar2 < **(int **)(lVar3 + uVar8 * 8)) {
          do {
            puVar7 = puVar4;
            *puVar6 = (uint)uVar8;
            uVar8 = (ulonglong)puVar7[-1];
            puVar4 = puVar7 + -1;
            puVar6 = puVar7;
          } while (**(int **)((ulonglong)uVar1 * 8 + *param_3) <
                   **(int **)(*param_3 + (ulonglong)puVar7[-1] * 8));
        }
        *puVar7 = uVar1;
      }
      puVar5 = puVar5 + 1;
      _Size = _Size + 4;
    } while (puVar5 != param_2);
  }
  return param_2;
}

// FUN_150248d00 @ 150248d00

void FUN_150248d00(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = param_2 - param_1 >> 2;
  lVar4 = param_2 - param_1 >> 3;
  if (0 < lVar4) {
    lVar5 = (longlong)(uVar7 - 1) >> 1;
    do {
      uVar1 = *(uint *)(param_1 + -4 + lVar4 * 4);
      lVar4 = lVar4 + -1;
      lVar6 = lVar4;
      while (lVar6 < lVar5) {
        lVar3 = (ulonglong)
                (**(int **)(*param_3 + (ulonglong)*(uint *)(param_1 + 4 + lVar6 * 8) * 8) <=
                **(int **)(*param_3 + (ulonglong)*(uint *)(param_1 + 8 + lVar6 * 8) * 8)) + 1 +
                lVar6 * 2;
        *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar3 * 4);
        lVar6 = lVar3;
      }
      if ((lVar6 == lVar5) && ((uVar7 & 1) == 0)) {
        *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + -4 + uVar7 * 4);
        lVar6 = uVar7 - 1;
      }
      if (lVar4 < lVar6) {
        do {
          lVar3 = lVar6 + -1 >> 1;
          uVar2 = *(uint *)(param_1 + lVar3 * 4);
          if (**(int **)(*param_3 + (ulonglong)uVar1 * 8) <=
              **(int **)(*param_3 + (ulonglong)uVar2 * 8)) break;
          *(uint *)(param_1 + lVar6 * 4) = uVar2;
          lVar6 = lVar3;
        } while (lVar4 < lVar3);
      }
      *(uint *)(param_1 + lVar6 * 4) = uVar1;
    } while (0 < lVar4);
  }
  return;
}

// FUN_150248e30 @ 150248e30

void FUN_150248e30(uint *param_1,uint *param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (**(int **)(*param_4 + (ulonglong)uVar1 * 8) < **(int **)(*param_4 + (ulonglong)*param_1 * 8))
  {
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  if (**(int **)(*param_4 + (ulonglong)uVar1 * 8) < **(int **)(*param_4 + (ulonglong)*param_2 * 8))
  {
    *param_3 = *param_2;
    *param_2 = uVar1;
    if (**(int **)(*param_4 + (ulonglong)uVar1 * 8) < **(int **)(*param_4 + (ulonglong)*param_1 * 8)
       ) {
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}

// _Move_backward_unchecked<int*___ptr64,int*___ptr64> @ 150248eb0

/* int * __ptr64 __cdecl std::_Move_backward_unchecked<int * __ptr64,int * __ptr64>(int *
   __ptr64,int * __ptr64,int * __ptr64) */

int * __cdecl
std::_Move_backward_unchecked<int*___ptr64,int*___ptr64>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return piVar1;
}

// _Next_iter<int*___ptr64> @ 150248ed0

/* int * __ptr64 __cdecl std::_Next_iter<int * __ptr64>(int * __ptr64) */

int * __cdecl std::_Next_iter<int*___ptr64>(int *param_1)

{
  return param_1 + 1;
}

// FUN_150248ee0 @ 150248ee0

ulonglong * FUN_150248ee0(ulonglong *param_1,uint *param_2,uint *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  lVar4 = (longlong)param_3 + (-4 - (longlong)param_2) >> 2;
  if (lVar4 < 0x29) {
    FUN_150248e30(param_2,puVar8,param_3 + -1);
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    FUN_150248e30(param_2,param_2 + lVar4,param_2 + lVar4 * 2);
    FUN_150248e30(puVar8 + -lVar4,puVar8,puVar8 + lVar4);
    puVar6 = param_3 + (-1 - lVar4);
    FUN_150248e30(param_3 + lVar4 * -2 + -1,puVar6,param_3 + -1);
    FUN_150248e30(param_2 + lVar4,puVar8,puVar6);
  }
  puVar6 = puVar8 + 1;
  if (param_2 < puVar8) {
    uVar5 = *puVar8;
    do {
      puVar1 = puVar8 + -1;
      puVar9 = puVar8 + -1;
      iVar3 = **(int **)(*param_4 + (ulonglong)*puVar1 * 8);
      iVar2 = **(int **)(*param_4 + (ulonglong)uVar5 * 8);
      if ((iVar3 < iVar2) || (iVar2 < iVar3)) break;
      puVar8 = puVar9;
      uVar5 = *puVar1;
    } while (param_2 < puVar9);
  }
  puVar1 = puVar6;
  puVar9 = puVar8;
  if (puVar6 < param_3) {
    iVar2 = **(int **)(*param_4 + (ulonglong)*puVar8 * 8);
    do {
      iVar3 = **(int **)(*param_4 + (ulonglong)*puVar6 * 8);
      puVar1 = puVar6;
      if ((iVar3 < iVar2) || (iVar2 < iVar3)) break;
      puVar6 = puVar6 + 1;
      puVar1 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x000150249004:
  do {
    puVar7 = puVar8;
    if (param_3 <= puVar1) {
joined_r0x000150249046:
      for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
        puVar7 = puVar7 + -1;
        iVar3 = **(int **)(*param_4 + (ulonglong)*puVar7 * 8);
        iVar2 = **(int **)(*param_4 + (ulonglong)*puVar9 * 8);
        if (iVar2 <= iVar3) {
          if (iVar2 < iVar3) break;
          puVar9 = puVar9 + -1;
          if (puVar9 != puVar7) {
            uVar5 = *puVar9;
            *puVar9 = *puVar7;
            *puVar7 = uVar5;
          }
        }
      }
      if (puVar8 == param_2) {
        if (puVar1 == param_3) {
          *param_1 = (ulonglong)puVar9;
          param_1[1] = (ulonglong)puVar6;
          return param_1;
        }
        if (puVar6 != puVar1) {
          uVar5 = *puVar9;
          *puVar9 = *puVar6;
          *puVar6 = uVar5;
        }
        uVar5 = *puVar9;
        puVar6 = puVar6 + 1;
        *puVar9 = *puVar1;
        *puVar1 = uVar5;
        puVar1 = puVar1 + 1;
        puVar9 = puVar9 + 1;
      }
      else {
        puVar8 = puVar8 + -1;
        if (puVar1 == param_3) {
          puVar9 = puVar9 + -1;
          if (puVar8 != puVar9) {
            uVar5 = *puVar8;
            *puVar8 = *puVar9;
            *puVar9 = uVar5;
          }
          puVar7 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          uVar5 = *puVar9;
          *puVar9 = *puVar7;
          *puVar6 = uVar5;
        }
        else {
          uVar5 = *puVar1;
          *puVar1 = *puVar8;
          *puVar8 = uVar5;
          puVar1 = puVar1 + 1;
        }
      }
      goto joined_r0x000150249004;
    }
    iVar3 = **(int **)(*param_4 + (ulonglong)*puVar9 * 8);
    iVar2 = **(int **)(*param_4 + (ulonglong)*puVar1 * 8);
    if (iVar2 <= iVar3) {
      if (iVar2 < iVar3) goto joined_r0x000150249046;
      if (puVar6 != puVar1) {
        uVar5 = *puVar6;
        *puVar6 = *puVar1;
        *puVar1 = uVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

// FUN_150249130 @ 150249130

void FUN_150249130(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar2 = param_2;
  while (lVar2 < lVar3) {
    lVar4 = lVar2 * 2 +
            (ulonglong)
            (**(int **)(*param_5 + (ulonglong)*(uint *)(param_1 + 4 + lVar2 * 8) * 8) <=
            **(int **)(*param_5 + (ulonglong)*(uint *)(param_1 + 8 + lVar2 * 8) * 8)) + 1;
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
    lVar2 = lVar4;
  }
  if ((lVar2 == lVar3) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar2 = param_3 - 1;
  }
  if (param_2 < lVar2) {
    do {
      lVar3 = lVar2 + -1 >> 1;
      uVar1 = *(uint *)(param_1 + lVar3 * 4);
      if (**(int **)(*param_5 + (ulonglong)*param_4 * 8) <=
          **(int **)(*param_5 + (ulonglong)uVar1 * 8)) goto LAB_150249204;
      *(uint *)(param_1 + lVar2 * 4) = uVar1;
      lVar2 = lVar3;
    } while (param_2 < lVar3);
    *(uint *)(param_1 + lVar3 * 4) = *param_4;
  }
  else {
LAB_150249204:
    *(uint *)(param_1 + lVar2 * 4) = *param_4;
  }
  return;
}

// FUN_150249250 @ 150249250

void FUN_150249250(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 local_res8 [8];
  
  if (7 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
    local_res8[0] = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    FUN_150249130(param_1,0,(param_2 + -4) - (longlong)param_1 >> 2,local_res8,param_3);
  }
  return;
}

// _Prev_iter<int*___ptr64> @ 1502492a0

/* int * __ptr64 __cdecl std::_Prev_iter<int * __ptr64>(int * __ptr64) */

int * __cdecl std::_Prev_iter<int*___ptr64>(int *param_1)

{
  return param_1 + -1;
}

// FUN_1502492b0 @ 1502492b0

void FUN_1502492b0(longlong param_1,longlong param_2,longlong param_3,uint *param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 <= param_3) {
    *(uint *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    lVar2 = param_2 + -1 >> 1;
    uVar1 = *(uint *)(param_1 + lVar2 * 4);
    if (**(int **)(*param_5 + (ulonglong)*param_4 * 8) <=
        **(int **)(*param_5 + (ulonglong)uVar1 * 8)) {
      *(uint *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(uint *)(param_1 + param_2 * 4) = uVar1;
    param_2 = lVar2;
  } while (param_3 < lVar2);
  *(uint *)(param_1 + lVar2 * 4) = *param_4;
  return;
}

// FUN_150249350 @ 150249350

void FUN_150249350(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 local_res8 [2];
  
  if (7 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
    puVar1 = (undefined4 *)(param_2 + -4);
    do {
      local_res8[0] = *puVar1;
      *puVar1 = *param_1;
      FUN_150249130(param_1,0,(longlong)puVar1 - (longlong)param_1 >> 2,local_res8,param_3);
      puVar1 = puVar1 + -1;
    } while (7 < (longlong)((4 - (longlong)param_1) + (longlong)puVar1 & 0xfffffffffffffffcU));
  }
  return;
}

// FUN_1502493f0 @ 1502493f0

void FUN_1502493f0(uint *param_1,uint *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  size_t _Size;
  longlong lVar12;
  uint local_res8 [2];
  uint *local_38;
  uint *local_30;
  
  uVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar3 & 0xfffffffffffffffc) < 0x81) {
      if ((param_1 != param_2) && (puVar6 = param_1 + 1, puVar6 != param_2)) {
        _Size = 4;
        puVar7 = puVar6;
        do {
          lVar11 = *param_4;
          uVar1 = *puVar7;
          iVar2 = **(int **)((ulonglong)uVar1 * 8 + lVar11);
          if (iVar2 < **(int **)(lVar11 + (ulonglong)*param_1 * 8)) {
            memmove(puVar6,param_1,_Size);
            *param_1 = uVar1;
          }
          else {
            puVar5 = (uint *)((_Size - 4) + (longlong)param_1);
            uVar3 = (ulonglong)*puVar5;
            puVar8 = puVar7;
            puVar9 = puVar7;
            if (iVar2 < **(int **)(lVar11 + uVar3 * 8)) {
              do {
                puVar9 = puVar5;
                *puVar8 = (uint)uVar3;
                uVar3 = (ulonglong)puVar9[-1];
                puVar5 = puVar9 + -1;
                puVar8 = puVar9;
              } while (**(int **)(*param_4 + (ulonglong)uVar1 * 8) <
                       **(int **)(*param_4 + (ulonglong)puVar9[-1] * 8));
            }
            *puVar9 = uVar1;
          }
          puVar7 = puVar7 + 1;
          _Size = _Size + 4;
        } while (puVar7 != param_2);
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_150248ee0(&local_38,param_1,param_2,param_4);
    puVar7 = local_30;
    puVar6 = local_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_38 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_30 & 0xfffffffffffffffcU)) {
      FUN_1502493f0(param_1,local_38,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar7;
    }
    else {
      FUN_1502493f0(local_30,param_2,param_3,param_4);
    }
    uVar3 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  }
  uVar3 = (longlong)param_2 - (longlong)param_1 >> 2;
  lVar11 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (0 < lVar11) {
    lVar12 = (longlong)(uVar3 - 1) >> 1;
    do {
      uVar1 = param_1[lVar11 + -1];
      lVar11 = lVar11 + -1;
      lVar10 = lVar11;
      while (lVar10 < lVar12) {
        lVar4 = (ulonglong)
                (**(int **)(*param_4 + (ulonglong)param_1[lVar10 * 2 + 1] * 8) <=
                **(int **)(*param_4 + (ulonglong)param_1[lVar10 * 2 + 2] * 8)) + 1 + lVar10 * 2;
        param_1[lVar10] = param_1[lVar4];
        lVar10 = lVar4;
      }
      if ((lVar10 == lVar12) && ((uVar3 & 1) == 0)) {
        param_1[lVar10] = param_1[uVar3 - 1];
        lVar10 = uVar3 - 1;
      }
      if (lVar11 < lVar10) {
        do {
          lVar4 = lVar10 + -1 >> 1;
          if (**(int **)(*param_4 + (ulonglong)uVar1 * 8) <=
              **(int **)(*param_4 + (ulonglong)param_1[lVar4] * 8)) break;
          param_1[lVar10] = param_1[lVar4];
          lVar10 = lVar4;
        } while (lVar11 < lVar4);
      }
      param_1[lVar10] = uVar1;
    } while (0 < lVar11);
  }
  if ((longlong)uVar3 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  do {
    local_res8[0] = *param_2;
    *param_2 = *param_1;
    FUN_150249130(param_1,0,(longlong)param_2 - (longlong)param_1 >> 2,local_res8,param_4);
    param_2 = param_2 + -1;
  } while (7 < (longlong)((4 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffffcU));
  return;
}

// copy_n<int*___ptr64,unsigned_int,int*___ptr64> @ 1502496c0

/* int * __ptr64 __cdecl std::copy_n<int * __ptr64,unsigned int,int * __ptr64>(int *
   __ptr64,unsigned int,int * __ptr64) */

int * __cdecl
std::copy_n<int*___ptr64,unsigned_int,int*___ptr64>(int *param_1,uint param_2,int *param_3)

{
  if (param_2 != 0) {
    memmove(param_3,param_1,(ulonglong)param_2 * 4);
    return param_3 + param_2;
  }
  return param_3;
}

// FUN_150249710 @ 150249710

void * FUN_150249710(void *param_1,uint param_2,void *param_3)

{
  if (param_2 != 0) {
    memmove(param_3,param_1,(ulonglong)param_2 * 8);
    return (void *)((ulonglong)param_2 * 8 + (longlong)param_3);
  }
  return param_3;
}

// fill_n<int*___ptr64,unsigned___int64,int> @ 150249760

/* int * __ptr64 __cdecl std::fill_n<int * __ptr64,unsigned __int64,int>(int * __ptr64,unsigned
   __int64,int const & __ptr64) */

int * __cdecl
std::fill_n<int*___ptr64,unsigned___int64,int>(int *param_1,__uint64 param_2,int *param_3)

{
  if (param_2 != 0) {
    if (*param_3 == 0) {
      memset(param_1,0,param_2 * 4);
      return param_1 + param_2;
    }
    do {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}

// merge<int*___ptr64,int*___ptr64,int*___ptr64> @ 1502497e0

/* int * __ptr64 __cdecl std::merge<int * __ptr64,int * __ptr64,int * __ptr64>(int * __ptr64,int *
   __ptr64,int * __ptr64,int * __ptr64,int * __ptr64) */

int * __cdecl
std::merge<int*___ptr64,int*___ptr64,int*___ptr64>
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *_Dst;
  bool bVar4;
  
  if ((param_1 != param_2) && (piVar3 = param_5, param_3 != param_4)) {
    do {
      iVar1 = *param_3;
      param_5 = piVar3 + 1;
      iVar2 = *param_1;
      if (iVar1 < iVar2) {
        param_3 = param_3 + 1;
        *piVar3 = iVar1;
        bVar4 = param_3 == param_4;
      }
      else {
        param_1 = param_1 + 1;
        *piVar3 = iVar2;
        bVar4 = param_1 == param_2;
      }
      piVar3 = param_5;
    } while (!bVar4);
  }
  memmove(param_5,param_1,(longlong)param_2 - (longlong)param_1);
  _Dst = (void *)((longlong)param_5 + ((longlong)param_2 - (longlong)param_1));
  memmove(_Dst,param_3,(longlong)param_4 - (longlong)param_3);
  return (int *)(((longlong)param_4 - (longlong)param_3) + (longlong)_Dst);
}

// merge<int*___ptr64,int*___ptr64,int*___ptr64,std::less<void>_> @ 150249880

/* int * __ptr64 __cdecl std::merge<int * __ptr64,int * __ptr64,int * __ptr64,struct std::less<void>
   >(int * __ptr64,int * __ptr64,int * __ptr64,int * __ptr64,int * __ptr64,struct std::less<void>)
    */

int * __cdecl
std::merge<int*___ptr64,int*___ptr64,int*___ptr64,std::less<void>_>
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,less<void> param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *_Dst;
  bool bVar4;
  
  if ((param_1 != param_2) && (piVar3 = param_5, param_3 != param_4)) {
    do {
      iVar1 = *param_1;
      param_5 = piVar3 + 1;
      iVar2 = *param_3;
      if (iVar2 < iVar1) {
        param_3 = param_3 + 1;
        *piVar3 = iVar2;
        bVar4 = param_3 == param_4;
      }
      else {
        param_1 = param_1 + 1;
        *piVar3 = iVar1;
        bVar4 = param_1 == param_2;
      }
      piVar3 = param_5;
    } while (!bVar4);
  }
  memmove(param_5,param_1,(longlong)param_2 - (longlong)param_1);
  _Dst = (void *)((longlong)param_5 + ((longlong)param_2 - (longlong)param_1));
  memmove(_Dst,param_3,(longlong)param_4 - (longlong)param_3);
  return (int *)(((longlong)param_4 - (longlong)param_3) + (longlong)_Dst);
}

// GraphCycles @ 150249990

/* WARNING: Removing unreachable block (ram,0x0001502499b8) */
/* WARNING: Removing unreachable block (ram,0x0001502499c0) */
/* public: __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::GraphCycles(void)
   __ptr64 */

GraphCycles * __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::GraphCycles(GraphCycles *this)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar1 = DAT_155409f18;
  if ((DAT_155409f18 & 1) == 0) {
    DAT_155409f18 = DAT_155409f18 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar1 & 1) == 0) {
    base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155409f18);
  }
  if (DAT_155409f20 == (Arena *)0x0) {
    DAT_155409f20 = base_internal::LowLevelAlloc::NewArena(0);
  }
  uVar2 = DAT_155409f18;
  uVar4 = DAT_155409f18 & 2;
  LOCK();
  UNLOCK();
  uVar1 = DAT_155409f18 & 0xfffffff8;
  DAT_155409f18 = uVar4;
  if (uVar1 != 0) {
    base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155409f18,uVar2);
  }
  plVar3 = base_internal::LowLevelAlloc::AllocWithArena(0x100168,DAT_155409f20);
  *(undefined4 *)(plVar3 + 9) = 0;
  *plVar3 = (longlong)(plVar3 + 1);
  *(undefined4 *)((longlong)plVar3 + 0x4c) = 8;
  plVar3[10] = (longlong)(plVar3 + 0xb);
  *(undefined4 *)(plVar3 + 0xf) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x7c) = 8;
  plVar3[0x10] = (longlong)plVar3;
  memset(plVar3 + 0x11,-1,0xfffec);
  *(undefined4 *)(plVar3 + 0x20014) = 0;
  plVar3[0x2000f] = (longlong)(plVar3 + 0x20010);
  plVar3[0x20015] = (longlong)(plVar3 + 0x20016);
  plVar3[0x2001b] = (longlong)(plVar3 + 0x2001c);
  plVar3[0x20021] = (longlong)(plVar3 + 0x20022);
  plVar3[0x20027] = (longlong)(plVar3 + 0x20028);
  *(undefined4 *)(plVar3 + 0x2001a) = 0;
  *(undefined4 *)(plVar3 + 0x20020) = 0;
  *(undefined4 *)(plVar3 + 0x20026) = 0;
  *(undefined4 *)(plVar3 + 0x2002c) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x1000a4) = 8;
  *(undefined4 *)((longlong)plVar3 + 0x1000d4) = 8;
  *(undefined4 *)((longlong)plVar3 + 0x100104) = 8;
  *(undefined4 *)((longlong)plVar3 + 0x100134) = 8;
  *(undefined4 *)((longlong)plVar3 + 0x100164) = 8;
  *(longlong **)this = plVar3;
  return this;
}

// FUN_150249b20 @ 150249b20

longlong FUN_150249b20(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 0x44) = 8;
  *(longlong *)(param_1 + 0x18) = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x44) = 8;
  *(undefined4 *)(param_1 + 0x40) = 8;
  uVar1 = 0;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 4) = 0xffffffff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < *(uint *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 8;
  *(longlong *)(param_1 + 0x50) = param_1 + 0x58;
  *(undefined4 *)(param_1 + 0x7c) = 8;
  *(undefined4 *)(param_1 + 0x78) = 8;
  uVar2 = 0;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + uVar2 * 4) = 0xffffffff;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}

// FUN_150249bd0 @ 150249bd0

longlong * FUN_150249bd0(longlong *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  *param_1 = (longlong)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 5) = 8;
  uVar1 = 0;
  do {
    *(undefined4 *)(*param_1 + (ulonglong)uVar1 * 4) = 0xffffffff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < *(uint *)(param_1 + 5));
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}

// FUN_150249c30 @ 150249c30

undefined8 * FUN_150249c30(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  memset(param_1 + 1,-1,0xfffec);
  return param_1;
}

// Rep @ 150249c60

/* public: __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::Rep::Rep(void) __ptr64
    */

Rep * __thiscall absl::lts_20240722::synchronization_internal::GraphCycles::Rep::Rep(Rep *this)

{
  *(undefined4 *)(this + 0x4c) = 8;
  *(Rep **)this = this + 8;
  *(undefined4 *)(this + 0x48) = 0;
  *(Rep **)(this + 0x50) = this + 0x58;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 8;
  *(Rep **)(this + 0x80) = this;
  memset(this + 0x88,-1,0xfffec);
  *(undefined4 *)(this + 0x1000a0) = 0;
  *(Rep **)(this + 0x100078) = this + 0x100080;
  *(undefined4 *)(this + 0x1000a4) = 8;
  *(Rep **)(this + 0x1000a8) = this + 0x1000b0;
  *(undefined4 *)(this + 0x1000d0) = 0;
  *(undefined4 *)(this + 0x1000d4) = 8;
  *(Rep **)(this + 0x1000d8) = this + 0x1000e0;
  *(undefined4 *)(this + 0x100100) = 0;
  *(undefined4 *)(this + 0x100104) = 8;
  *(Rep **)(this + 0x100108) = this + 0x100110;
  *(undefined4 *)(this + 0x100130) = 0;
  *(undefined4 *)(this + 0x100134) = 8;
  *(Rep **)(this + 0x100138) = this + 0x100140;
  *(undefined4 *)(this + 0x100160) = 0;
  *(undefined4 *)(this + 0x100164) = 8;
  return this;
}

// FUN_150249d60 @ 150249d60

void FUN_150249d60(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((undefined8 *)*param_1);
  }
  return;
}

// FUN_150249d90 @ 150249d90

void FUN_150249d90(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((undefined8 *)*param_1);
  }
  return;
}

// ~GraphCycles @ 150249dc0

/* public: __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::~GraphCycles(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::~GraphCycles(GraphCycles *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(longlong **)this;
  puVar2 = puVar3 + *(uint *)(*(longlong **)this + 9);
  for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((longlong)pvVar1 + 0x50) != (void *)((longlong)pvVar1 + 0x58)) {
        base_internal::LowLevelAlloc::Free(*(void **)((longlong)pvVar1 + 0x50));
      }
      if (*(void **)((longlong)pvVar1 + 0x18) != (void *)((longlong)pvVar1 + 0x20)) {
        base_internal::LowLevelAlloc::Free(*(void **)((longlong)pvVar1 + 0x18));
      }
      base_internal::LowLevelAlloc::Free(pvVar1);
    }
  }
  puVar2 = *(undefined8 **)this;
  if ((undefined8 *)puVar2[0x20027] != puVar2 + 0x20028) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[0x20027]);
  }
  if ((undefined8 *)puVar2[0x20021] != puVar2 + 0x20022) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[0x20021]);
  }
  if ((undefined8 *)puVar2[0x2001b] != puVar2 + 0x2001c) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[0x2001b]);
  }
  if ((undefined8 *)puVar2[0x20015] != puVar2 + 0x20016) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[0x20015]);
  }
  if ((undefined8 *)puVar2[0x2000f] != puVar2 + 0x20010) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[0x2000f]);
  }
  if ((undefined8 *)puVar2[10] != puVar2 + 0xb) {
    base_internal::LowLevelAlloc::Free((undefined8 *)puVar2[10]);
  }
  if ((undefined8 *)*puVar2 != puVar2 + 1) {
    base_internal::LowLevelAlloc::Free((undefined8 *)*puVar2);
  }
  base_internal::LowLevelAlloc::Free(*(void **)this);
  return;
}

// FUN_150249f00 @ 150249f00

void FUN_150249f00(longlong param_1)

{
  if (*(void **)(param_1 + 0x50) != (void *)(param_1 + 0x58)) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free(*(void **)(param_1 + 0x50));
  }
  if (*(void **)(param_1 + 0x18) != (void *)(param_1 + 0x20)) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free(*(void **)(param_1 + 0x18));
  }
  return;
}

// FUN_150249f40 @ 150249f40

void FUN_150249f40(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((undefined8 *)*param_1);
  }
  return;
}

// ~Rep @ 150249f70

/* public: __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::Rep::~Rep(void)
   __ptr64 */

void __thiscall absl::lts_20240722::synchronization_internal::GraphCycles::Rep::~Rep(Rep *this)

{
  if (*(Rep **)(this + 0x100138) != this + 0x100140) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x100138));
  }
  if (*(Rep **)(this + 0x100108) != this + 0x100110) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x100108));
  }
  if (*(Rep **)(this + 0x1000d8) != this + 0x1000e0) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x1000d8));
  }
  if (*(Rep **)(this + 0x1000a8) != this + 0x1000b0) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x1000a8));
  }
  if (*(Rep **)(this + 0x100078) != this + 0x100080) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x100078));
  }
  if (*(Rep **)(this + 0x50) != this + 0x58) {
    base_internal::LowLevelAlloc::Free(*(Rep **)(this + 0x50));
  }
  if (*(Rep **)this != this + 8) {
    base_internal::LowLevelAlloc::Free(*(Rep **)this);
  }
  return;
}

// operator[] @ 15024a070

/* public: int & __ptr64 __cdecl std::array<int,262139>::operator[](unsigned __int64) __ptr64 */

int * __thiscall std::array<int,262139>::operator[](array<int,262139> *this,__uint64 param_1)

{
  return (int *)(this + param_1 * 4);
}

// FUN_15024a100 @ 15024a100

void FUN_15024a100(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  plVar1 = param_1 + 0x20016;
  if ((longlong *)param_1[0x20015] != plVar1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)param_1[0x20015]);
  }
  param_1[0x20015] = (longlong)plVar1;
  plVar2 = param_1 + 0x20028;
  *(undefined4 *)(param_1 + 0x2001a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1000d4) = 8;
  if ((longlong *)param_1[0x20027] != plVar2) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)param_1[0x20027]);
  }
  param_1[0x20027] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 0x2002c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100164) = 8;
  iVar6 = (int)param_1[0x2002c] + 1;
  *(undefined4 *)plVar2 = param_2;
  *(int *)(param_1 + 0x2002c) = iVar6;
  do {
    if (iVar6 == 0) {
      return;
    }
    uVar9 = (int)param_1[0x2002c] - 1;
    uVar3 = *(uint *)(param_1[0x20027] + (ulonglong)uVar9 * 4);
    *(uint *)(param_1 + 0x2002c) = uVar9;
    lVar4 = *(longlong *)(*param_1 + (ulonglong)uVar3 * 8);
    if (*(char *)(lVar4 + 0xc) == '\0') {
      *(undefined1 *)(lVar4 + 0xc) = 1;
      uVar8 = *(uint *)(param_1 + 0x2001a);
      uVar9 = *(uint *)((longlong)param_1 + 0x1000d4);
      if (uVar8 == uVar9) {
        if (uVar9 < uVar8 + 1) {
          do {
            uVar9 = uVar9 * 2;
          } while (uVar9 < uVar8 + 1);
          *(uint *)((longlong)param_1 + 0x1000d4) = uVar9;
        }
        pvVar7 = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                           ((ulonglong)uVar9 << 2,DAT_155409f20);
        uVar8 = 0;
        if (*(uint *)(param_1 + 0x2001a) != 0) {
          memmove(pvVar7,(void *)param_1[0x20015],(ulonglong)*(uint *)(param_1 + 0x2001a) << 2);
          uVar8 = *(uint *)(param_1 + 0x2001a);
        }
        if ((longlong *)param_1[0x20015] != plVar1) {
          absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)param_1[0x20015]);
          uVar8 = *(uint *)(param_1 + 0x2001a);
        }
        param_1[0x20015] = (longlong)pvVar7;
      }
      *(uint *)(param_1[0x20015] + (ulonglong)uVar8 * 4) = uVar3;
      *(int *)(param_1 + 0x2001a) = (int)param_1[0x2001a] + 1;
      uVar10 = 0;
      while ((uint)uVar10 < *(uint *)(lVar4 + 0x40)) {
        while( true ) {
          uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x18) + uVar10 * 4);
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if (-1 < (int)uVar3) break;
          if (*(uint *)(lVar4 + 0x40) <= uVar9) goto LAB_15024a28d;
        }
        piVar5 = *(int **)(*param_1 + (ulonglong)uVar3 * 8);
        if (((char)piVar5[3] == '\0') && (param_3 < *piVar5)) {
          uVar9 = *(uint *)((longlong)param_1 + 0x100164);
          if (*(uint *)(param_1 + 0x2002c) == uVar9) {
            uVar8 = *(uint *)(param_1 + 0x2002c) + 1;
            if (uVar9 < uVar8) {
              do {
                uVar9 = uVar9 * 2;
              } while (uVar9 < uVar8);
              *(uint *)((longlong)param_1 + 0x100164) = uVar9;
            }
            pvVar7 = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                               ((ulonglong)uVar9 << 2,DAT_155409f20);
            if (*(uint *)(param_1 + 0x2002c) != 0) {
              memmove(pvVar7,(void *)param_1[0x20027],(ulonglong)*(uint *)(param_1 + 0x2002c) << 2);
            }
            if ((longlong *)param_1[0x20027] != param_1 + 0x20028) {
              absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)param_1[0x20027]);
            }
            param_1[0x20027] = (longlong)pvVar7;
          }
          *(uint *)(param_1[0x20027] + (ulonglong)*(uint *)(param_1 + 0x2002c) * 4) = uVar3;
          *(int *)(param_1 + 0x2002c) = (int)param_1[0x2002c] + 1;
        }
      }
    }
LAB_15024a28d:
    iVar6 = (int)param_1[0x2002c];
  } while( true );
}

// CheckInvariants @ 15024a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::CheckInvariants(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::CheckInvariants(GraphCycles *this)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  uint local_88;
  ulonglong local_80;
  int local_78;
  int local_70;
  undefined4 *local_68;
  undefined4 local_60 [8];
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)this;
  local_68 = local_60;
  local_3c = 8;
  local_40 = 8;
  uVar7 = 0;
  do {
    local_68[uVar7] = 0xffffffff;
    uVar8 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar8;
  } while (uVar8 < local_40);
  local_38 = 0;
  uVar7 = 0;
  if ((int)plVar2[9] != 0) {
    do {
      piVar3 = *(int **)(*plVar2 + uVar7 * 8);
      uVar11 = *(ulonglong *)(piVar3 + 4) ^ 0xf03a5f7bf03a5f7b;
      uVar8 = (uint)uVar7;
      local_88 = uVar8;
      if (uVar11 != 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar11;
        lVar10 = SUB168(ZEXT816(0x140019001f403) * auVar4,8);
        uVar9 = *(uint *)((longlong)plVar2 +
                         (uVar11 + ((uVar11 - lVar10 >> 1) + lVar10 >> 0x11) * -0x3fffb & 0xffffffff
                         ) * 4 + 0x88);
        if (uVar9 != 0xffffffff) {
          do {
            lVar10 = *(longlong *)(*(longlong *)plVar2[0x10] + (ulonglong)uVar9 * 8);
            if (*(ulonglong *)(lVar10 + 0x10) == *(ulonglong *)(piVar3 + 4)) goto LAB_15024a46b;
            uVar9 = *(uint *)(lVar10 + 8);
          } while (uVar9 != 0xffffffff);
        }
        uVar9 = 0xffffffff;
LAB_15024a46b:
        if (uVar9 != uVar8) {
          local_80 = uVar11;
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"graphcycles.cc",400,"Did not find live node in hash table %u %p");
        }
      }
      if ((char)piVar3[3] != '\0') {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"graphcycles.cc",0x193,"Did not clear visited marker on node %u");
      }
      local_88 = *piVar3;
      uVar7 = (ulonglong)(local_88 * 0x29 & local_40 - 1);
      uVar11 = 0;
      bVar5 = false;
      iVar1 = local_68[uVar7];
      while (local_88 != iVar1) {
        if (iVar1 == -1) {
          if (bVar5) {
            uVar7 = uVar11;
          }
          break;
        }
        if ((iVar1 == -2) && (!bVar5)) {
          bVar5 = true;
          uVar11 = uVar7;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1U & local_40 - 1);
        iVar1 = local_68[uVar7];
      }
      iVar1 = local_68[uVar7];
      if (iVar1 == local_88) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog(kFatal,"graphcycles.cc",0x196,"Duplicate occurrence of rank %d");
      }
      if (iVar1 == -1) {
        local_38 = local_38 + 1;
      }
      local_68[uVar7] = local_88;
      if (local_40 - (local_40 >> 2) <= local_38) {
        FUN_15024b080(&local_68);
      }
      uVar7 = 0;
      while ((uint)uVar7 < (uint)piVar3[0x1e]) {
        while( true ) {
          uVar9 = *(uint *)(*(longlong *)(piVar3 + 0x14) + uVar7 * 4);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          if (-1 < (int)uVar9) break;
          if ((uint)piVar3[0x1e] <= uVar6) goto LAB_15024a540;
        }
        local_70 = **(int **)(*plVar2 + (ulonglong)uVar9 * 8);
        local_78 = *piVar3;
        if (local_70 <= local_78) {
          local_80 = CONCAT44(local_80._4_4_,uVar9);
          local_88 = uVar8;
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"graphcycles.cc",0x19e,"Edge %u ->%d has bad rank assignment %d->%d");
        }
      }
LAB_15024a540:
      uVar7 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < *(uint *)(plVar2 + 9));
  }
  if (local_68 != local_60) {
    base_internal::LowLevelAlloc::Free(local_68);
  }
  return true;
}

// FUN_15024a680 @ 15024a680

ulonglong FUN_15024a680(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  lVar3 = SUB168(ZEXT816(0x140019001f403) * auVar2,8);
  uVar1 = *(uint *)((longlong)param_1 +
                   (ulonglong)
                   (uint)((int)param_2 + (int)((param_2 - lVar3 >> 1) + lVar3 >> 0x11) * -0x3fffb) *
                   4 + 8);
  if (uVar1 != 0xffffffff) {
    do {
      lVar3 = *(longlong *)(*(longlong *)*param_1 + (ulonglong)uVar1 * 8);
      if (*(ulonglong *)(lVar3 + 0x10) == (param_2 ^ 0xf03a5f7bf03a5f7b)) {
        return (ulonglong)uVar1;
      }
      uVar1 = *(uint *)(lVar3 + 8);
    } while (uVar1 != 0xffffffff);
  }
  return 0xffffffff;
}

// FUN_15024a6f0 @ 15024a6f0

ulonglong FUN_15024a6f0(longlong *param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = (int)param_1[5] - 1;
  bVar1 = false;
  uVar2 = (ulonglong)(param_2 * 0x29 & uVar5);
  iVar3 = *(int *)(*param_1 + uVar2 * 4);
  if (param_2 != iVar3) {
    while (iVar3 != -1) {
      if ((iVar3 == -2) && (!bVar1)) {
        bVar1 = true;
        uVar4 = uVar2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1U & uVar5);
      iVar3 = *(int *)(*param_1 + uVar2 * 4);
      if (param_2 == iVar3) {
        return uVar2;
      }
    }
    if (bVar1) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}

// FindPath @ 15024a780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: int __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::FindPath(struct
   absl::lts_20240722::synchronization_internal::GraphId,struct
   absl::lts_20240722::synchronization_internal::GraphId,int,struct
   absl::lts_20240722::synchronization_internal::GraphId * __ptr64 const)const __ptr64 */

int __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::FindPath
          (GraphCycles *this,ulonglong param_2,ulonglong param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 auStack_b8 [32];
  GraphCycles *local_98;
  longlong local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined4 local_78 [8];
  uint local_58;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar12 = (longlong)param_4;
  local_90 = param_5;
  plVar5 = *(longlong **)this;
  lVar13 = *(longlong *)(*plVar5 + (param_2 & 0xffffffff) * 8);
  lVar7 = 0;
  if (*(int *)(lVar13 + 4) == (int)(param_2 >> 0x20)) {
    lVar7 = lVar13;
  }
  if (lVar7 != 0) {
    lVar13 = *(longlong *)(*plVar5 + (param_3 & 0xffffffff) * 8);
    lVar7 = 0;
    if (*(int *)(lVar13 + 4) == (int)(param_3 >> 0x20)) {
      lVar7 = lVar13;
    }
    if (lVar7 != 0) {
      iVar17 = 0;
      local_80 = local_78;
      local_54 = 8;
      local_58 = 8;
      uVar10 = 0;
      do {
        local_80[uVar10] = 0xffffffff;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < local_58);
      local_50 = 0;
      plVar2 = plVar5 + 0x20027;
      plVar1 = plVar5 + 0x20028;
      local_98 = this;
      if ((longlong *)*plVar2 != plVar1) {
        base_internal::LowLevelAlloc::Free((longlong *)*plVar2);
      }
      *plVar2 = (longlong)plVar1;
      *(undefined4 *)(plVar5 + 0x2002c) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x100164) = 8;
      *(int *)plVar1 = (int)param_2;
      *(int *)(plVar5 + 0x2002c) = (int)plVar5[0x2002c] + 1;
      puVar16 = local_80;
      if ((int)plVar5[0x2002c] != 0) {
        lVar13 = 0;
        local_88 = lVar12;
        do {
          uVar11 = (int)plVar5[0x2002c] - 1;
          uVar9 = *(uint *)(*plVar2 + (ulonglong)uVar11 * 4);
          *(uint *)(plVar5 + 0x2002c) = uVar11;
          if ((int)uVar9 < 0) {
            iVar17 = iVar17 + -1;
            lVar13 = lVar13 + -1;
            puVar16 = local_80;
          }
          else {
            if (lVar13 < lVar12) {
              *(ulonglong *)(local_90 + lVar13 * 8) =
                   CONCAT44(*(undefined4 *)
                             (*(longlong *)(**(longlong **)local_98 + (ulonglong)uVar9 * 8) + 4),
                            uVar9);
            }
            iVar17 = iVar17 + 1;
            lVar13 = lVar13 + 1;
            if ((int)plVar5[0x2002c] == *(int *)((longlong)plVar5 + 0x100164)) {
              FUN_15024afa0(plVar2,(int)plVar5[0x2002c] + 1);
            }
            *(undefined4 *)(*plVar2 + (ulonglong)*(uint *)(plVar5 + 0x2002c) * 4) = 0xffffffff;
            *(int *)(plVar5 + 0x2002c) = (int)plVar5[0x2002c] + 1;
            puVar16 = local_80;
            if (uVar9 == (uint)param_3) goto LAB_15024aa35;
            uVar10 = 0;
            while( true ) {
              lVar7 = *(longlong *)((ulonglong)uVar9 * 8 + *plVar5);
              uVar11 = *(uint *)(lVar7 + 0x78);
              lVar12 = local_88;
              if (uVar11 <= (uint)uVar10) break;
              while( true ) {
                iVar3 = *(int *)(*(longlong *)(lVar7 + 0x50) + uVar10 * 4);
                uVar14 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar14;
                if (-1 < iVar3) break;
                if (uVar11 <= uVar14) goto LAB_15024a966;
              }
              uVar8 = (ulonglong)(iVar3 * 0x29 & local_58 - 1);
              uVar15 = 0;
              bVar6 = false;
              iVar4 = puVar16[uVar8];
              while (iVar3 != iVar4) {
                if (iVar4 == -1) {
                  if (bVar6) {
                    uVar8 = uVar15;
                  }
                  break;
                }
                if ((iVar4 == -2) && (!bVar6)) {
                  bVar6 = true;
                  uVar15 = uVar8;
                }
                uVar8 = (ulonglong)((int)uVar8 + 1U & local_58 - 1);
                iVar4 = puVar16[uVar8];
              }
              if (puVar16[uVar8] != iVar3) {
                if (puVar16[uVar8] == -1) {
                  local_50 = local_50 + 1;
                }
                puVar16[uVar8] = iVar3;
                if (local_58 - (local_58 >> 2) <= local_50) {
                  FUN_15024b080(&local_80);
                }
                if ((int)plVar5[0x2002c] == *(int *)((longlong)plVar5 + 0x100164)) {
                  FUN_15024afa0(plVar2,(int)plVar5[0x2002c] + 1);
                }
                *(int *)(*plVar2 + (ulonglong)*(uint *)(plVar5 + 0x2002c) * 4) = iVar3;
                *(int *)(plVar5 + 0x2002c) = (int)plVar5[0x2002c] + 1;
                puVar16 = local_80;
              }
            }
          }
LAB_15024a966:
        } while ((int)plVar5[0x2002c] != 0);
      }
      iVar17 = 0;
LAB_15024aa35:
      if (puVar16 == local_78) {
        return iVar17;
      }
      base_internal::LowLevelAlloc::Free(puVar16);
      return iVar17;
    }
  }
  return 0;
}

// FUN_15024aa80 @ 15024aa80

longlong FUN_15024aa80(ulonglong *param_1,undefined4 param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar6;
  
  puVar1 = param_1 + 0x20010;
  if ((ulonglong *)param_1[0x2000f] != puVar1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((ulonglong *)param_1[0x2000f]);
  }
  param_1[0x2000f] = (ulonglong)puVar1;
  puVar2 = param_1 + 0x20028;
  *(undefined4 *)(param_1 + 0x20014) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1000a4) = 8;
  if ((ulonglong *)param_1[0x20027] != puVar2) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((ulonglong *)param_1[0x20027]);
  }
  param_1[0x20027] = (ulonglong)puVar2;
  *(undefined4 *)(param_1 + 0x2002c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100164) = 8;
  uVar5 = (int)param_1[0x2002c] + 1;
  uVar6 = (ulonglong)uVar5;
  *(undefined4 *)puVar2 = param_2;
  *(uint *)(param_1 + 0x2002c) = uVar5;
  do {
    if (uVar5 == 0) {
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    uVar9 = (int)param_1[0x2002c] - 1;
    uVar5 = *(uint *)(param_1[0x20027] + (ulonglong)uVar9 * 4);
    *(uint *)(param_1 + 0x2002c) = uVar9;
    uVar6 = *param_1;
    lVar3 = *(longlong *)(uVar6 + (ulonglong)uVar5 * 8);
    if (*(char *)(lVar3 + 0xc) == '\0') {
      *(undefined1 *)(lVar3 + 0xc) = 1;
      uVar8 = (uint)param_1[0x20014];
      uVar9 = *(uint *)((longlong)param_1 + 0x1000a4);
      if (uVar8 == uVar9) {
        if (uVar9 < uVar8 + 1) {
          do {
            uVar9 = uVar9 * 2;
          } while (uVar9 < uVar8 + 1);
          *(uint *)((longlong)param_1 + 0x1000a4) = uVar9;
        }
        pvVar7 = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                           ((ulonglong)uVar9 << 2,DAT_155409f20);
        uVar8 = 0;
        if ((uint)param_1[0x20014] != 0) {
          memmove(pvVar7,(void *)param_1[0x2000f],(ulonglong)(uint)param_1[0x20014] << 2);
          uVar8 = (uint)param_1[0x20014];
        }
        if ((ulonglong *)param_1[0x2000f] != puVar1) {
          absl::lts_20240722::base_internal::LowLevelAlloc::Free((ulonglong *)param_1[0x2000f]);
          uVar8 = (uint)param_1[0x20014];
        }
        param_1[0x2000f] = (ulonglong)pvVar7;
      }
      uVar6 = param_1[0x2000f];
      *(uint *)(uVar6 + (ulonglong)uVar8 * 4) = uVar5;
      *(int *)(param_1 + 0x20014) = (int)param_1[0x20014] + 1;
      uVar10 = 0;
      while ((uint)uVar10 < *(uint *)(lVar3 + 0x78)) {
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)(lVar3 + 0x50) + uVar10 * 4);
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if (-1 < (int)uVar5) break;
          if (*(uint *)(lVar3 + 0x78) <= uVar9) goto LAB_15024ac0d;
        }
        puVar4 = *(uint **)(*param_1 + (ulonglong)uVar5 * 8);
        uVar9 = *puVar4;
        uVar6 = (ulonglong)uVar9;
        if (uVar9 == param_3) {
          return (ulonglong)(uint3)(uVar9 >> 8) << 8;
        }
        if (((char)puVar4[3] == '\0') && ((int)uVar9 < (int)param_3)) {
          uVar9 = *(uint *)((longlong)param_1 + 0x100164);
          if ((uint)param_1[0x2002c] == uVar9) {
            uVar8 = (uint)param_1[0x2002c] + 1;
            if (uVar9 < uVar8) {
              do {
                uVar9 = uVar9 * 2;
              } while (uVar9 < uVar8);
              *(uint *)((longlong)param_1 + 0x100164) = uVar9;
            }
            pvVar7 = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                               ((ulonglong)uVar9 << 2,DAT_155409f20);
            if ((uint)param_1[0x2002c] != 0) {
              memmove(pvVar7,(void *)param_1[0x20027],(ulonglong)(uint)param_1[0x2002c] << 2);
            }
            if ((ulonglong *)param_1[0x20027] != param_1 + 0x20028) {
              absl::lts_20240722::base_internal::LowLevelAlloc::Free((ulonglong *)param_1[0x20027]);
            }
            param_1[0x20027] = (ulonglong)pvVar7;
          }
          uVar6 = param_1[0x20027];
          *(uint *)(uVar6 + (ulonglong)(uint)param_1[0x2002c] * 4) = uVar5;
          *(int *)(param_1 + 0x2002c) = (int)param_1[0x2002c] + 1;
        }
      }
    }
LAB_15024ac0d:
    uVar5 = (uint)param_1[0x2002c];
  } while( true );
}

// GetId @ 15024ad00

/* public: struct absl::lts_20240722::synchronization_internal::GraphId __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::GetId(void * __ptr64) __ptr64 */

void * __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::GetId(GraphCycles *this,void *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong in_R8;
  ulonglong uVar11;
  longlong *plVar12;
  
  plVar12 = *(longlong **)this;
  uVar3 = FUN_15024a680(plVar12 + 0x10);
  if (uVar3 == 0xffffffff) {
    if ((int)plVar12[0xf] == 0) {
      puVar5 = base_internal::LowLevelAlloc::AllocWithArena(0x1d0,DAT_155409f20);
      uVar6 = 0;
      puVar5[0x11] = 8;
      *(uint **)(puVar5 + 6) = puVar5 + 8;
      puVar5[0x11] = 8;
      puVar5[0x10] = 8;
      uVar11 = uVar6;
      do {
        *(undefined4 *)(*(longlong *)(puVar5 + 6) + uVar11 * 4) = 0xffffffff;
        uVar3 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar3;
      } while (uVar3 < puVar5[0x10]);
      puVar5[0x12] = 0;
      puVar5[0x1f] = 8;
      *(uint **)(puVar5 + 0x14) = puVar5 + 0x16;
      puVar5[0x1f] = 8;
      puVar5[0x1e] = 8;
      do {
        *(undefined4 *)(*(longlong *)(puVar5 + 0x14) + uVar6 * 4) = 0xffffffff;
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
      } while (uVar3 < puVar5[0x1e]);
      puVar5[0x20] = 0;
      puVar5[1] = 1;
      *(undefined1 *)(puVar5 + 3) = 0;
      *puVar5 = *(uint *)(*(longlong *)this + 0x48);
      *(ulonglong *)(puVar5 + 4) = in_R8 ^ 0xf03a5f7bf03a5f7b;
      puVar5[0x22] = 0;
      puVar5[0x23] = 0;
      plVar12 = *(longlong **)this;
      if ((int)plVar12[9] == *(int *)((longlong)plVar12 + 0x4c)) {
        FUN_15024b010(plVar12,(int)plVar12[9] + 1);
      }
      *(uint **)(*plVar12 + (ulonglong)*(uint *)(plVar12 + 9) * 8) = puVar5;
      *(int *)(plVar12 + 9) = (int)plVar12[9] + 1;
      puVar7 = (undefined8 *)(*(longlong *)this + 0x80);
      uVar3 = *puVar5;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = in_R8;
      lVar8 = SUB168(ZEXT816(0x140019001f403) * auVar1,8);
      uVar10 = (int)in_R8 + (int)((in_R8 - lVar8 >> 1) + lVar8 >> 0x11) * -0x3fffb;
      *(undefined4 *)(*(longlong *)(*(longlong *)*puVar7 + (ulonglong)uVar3 * 8) + 8) =
           *(undefined4 *)((longlong)puVar7 + (ulonglong)uVar10 * 4 + 8);
      *(uint *)((longlong)puVar7 + (ulonglong)uVar10 * 4 + 8) = uVar3;
      *(undefined8 *)param_1 = *(undefined8 *)puVar5;
      return param_1;
    }
    uVar10 = (int)plVar12[0xf] - 1;
    uVar3 = *(uint *)(plVar12[10] + (ulonglong)uVar10 * 4);
    *(uint *)(plVar12 + 0xf) = uVar10;
    lVar8 = *(longlong *)(**(longlong **)this + (ulonglong)uVar3 * 8);
    *(ulonglong *)(lVar8 + 0x10) = in_R8 ^ 0xf03a5f7bf03a5f7b;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    puVar7 = (undefined8 *)(*(longlong *)this + 0x80);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = in_R8;
    lVar9 = SUB168(ZEXT816(0x140019001f403) * auVar2,8);
    uVar10 = (int)in_R8 + (int)((in_R8 - lVar9 >> 1) + lVar9 >> 0x11) * -0x3fffb;
    *(undefined4 *)(*(longlong *)(*(longlong *)*puVar7 + (ulonglong)uVar3 * 8) + 8) =
         *(undefined4 *)((longlong)puVar7 + (ulonglong)uVar10 * 4 + 8);
    *(uint *)((longlong)puVar7 + (ulonglong)uVar10 * 4 + 8) = uVar3;
    uVar4 = CONCAT44(*(undefined4 *)(lVar8 + 4),uVar3);
  }
  else {
    uVar4 = CONCAT44(*(undefined4 *)(*(longlong *)(*plVar12 + (ulonglong)uVar3 * 8) + 4),uVar3);
  }
  *(undefined8 *)param_1 = uVar4;
  return param_1;
}

// GetStackTrace @ 15024af60

/* public: int __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::GetStackTrace(struct
   absl::lts_20240722::synchronization_internal::GraphId,void * __ptr64 * __ptr64 * __ptr64) __ptr64
    */

int __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::GetStackTrace
          (GraphCycles *this,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar2 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_2 >> 0x20)) {
    lVar2 = lVar1;
  }
  if (lVar2 == 0) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = lVar2 + 0x90;
  return *(int *)(lVar2 + 0x8c);
}

// FUN_15024afa0 @ 15024afa0

void FUN_15024afa0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  if (uVar1 < param_2) {
    do {
      uVar1 = uVar1 * 2;
    } while (uVar1 < param_2);
    *(uint *)((longlong)param_1 + 0x2c) = uVar1;
  }
  _Dst = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                   ((ulonglong)uVar1 << 2,DAT_155409f20);
  if (*(uint *)(param_1 + 5) != 0) {
    memmove(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 5) << 2);
  }
  if ((undefined8 *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((undefined8 *)*param_1);
  }
  *param_1 = _Dst;
  return;
}

// FUN_15024b010 @ 15024b010

void FUN_15024b010(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x4c);
  if (uVar1 < param_2) {
    do {
      uVar1 = uVar1 * 2;
    } while (uVar1 < param_2);
    *(uint *)((longlong)param_1 + 0x4c) = uVar1;
  }
  _Dst = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                   ((ulonglong)uVar1 << 3,DAT_155409f20);
  if (*(uint *)(param_1 + 9) != 0) {
    memmove(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 9) << 3);
  }
  if ((undefined8 *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((undefined8 *)*param_1);
  }
  *param_1 = _Dst;
  return;
}

// FUN_15024b080 @ 15024b080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_15024b080(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int *piVar3;
  void *_Dst;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50 [8];
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = local_50;
  uVar7 = 0;
  local_30 = 0;
  uVar4 = 8;
  local_2c = 8;
  plVar1 = param_1 + 1;
  piVar3 = (int *)*param_1;
  uVar6 = *(uint *)(param_1 + 5);
  if ((longlong *)piVar3 == plVar1) {
    piVar3 = local_58;
    if (8 < uVar6) {
      do {
        local_2c = (int)uVar4 * 2;
        uVar4 = (ulonglong)local_2c;
      } while (local_2c < uVar6);
      piVar3 = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                         (uVar4 << 2,DAT_155409f20);
      if (local_30 != 0) {
        memmove(piVar3,local_58,(ulonglong)local_30 << 2);
      }
      if (local_58 != local_50) {
        absl::lts_20240722::base_internal::LowLevelAlloc::Free(local_58);
      }
    }
    local_58 = piVar3;
    local_30 = uVar6;
    if (*(uint *)(param_1 + 5) != 0) {
      memmove(local_58,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 5) << 2);
    }
  }
  else {
    local_30 = uVar6;
    local_2c = *(uint *)((longlong)param_1 + 0x2c);
    *param_1 = (longlong)plVar1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
    local_58 = piVar3;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = local_30 * 2;
  uVar6 = *(uint *)((longlong)param_1 + 0x2c);
  if (uVar6 < uVar2) {
    do {
      uVar6 = uVar6 * 2;
    } while (uVar6 < uVar2);
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    _Dst = absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena
                     ((ulonglong)uVar6 << 2,DAT_155409f20);
    if (*(uint *)(param_1 + 5) != 0) {
      memmove(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 5) << 2);
    }
    if ((void *)*param_1 != plVar1) {
      absl::lts_20240722::base_internal::LowLevelAlloc::Free((void *)*param_1);
    }
    *param_1 = (longlong)_Dst;
  }
  *(uint *)(param_1 + 5) = uVar2;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*param_1 + uVar7 * 4) = 0xffffffff;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 5));
  }
  piVar3 = local_58 + local_30;
  for (piVar5 = local_58; piVar5 != piVar3; piVar5 = piVar5 + 1) {
    if (-1 < *piVar5) {
      FUN_15024c1b0(param_1);
    }
  }
  if (local_58 != local_50) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free(local_58);
  }
  return;
}

// HasEdge @ 15024b260

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::HasEdge(struct
   absl::lts_20240722::synchronization_internal::GraphId,struct
   absl::lts_20240722::synchronization_internal::GraphId)const __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::HasEdge
          (GraphCycles *this,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = (int)param_3;
  uVar8 = 0;
  lVar2 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar9 = 0;
  if (*(int *)(lVar2 + 4) == (int)(param_2 >> 0x20)) {
    lVar9 = lVar2;
  }
  if (lVar9 != 0) {
    lVar2 = *(longlong *)(**(longlong **)this + (param_3 & 0xffffffff) * 8);
    lVar5 = 0;
    if (*(int *)(lVar2 + 4) == (int)(param_3 >> 0x20)) {
      lVar5 = lVar2;
    }
    if (lVar5 != 0) {
      bVar3 = false;
      lVar2 = *(longlong *)(lVar9 + 0x50);
      uVar6 = *(int *)(lVar9 + 0x78) - 1;
      uVar4 = (ulonglong)(iVar7 * 0x29 & uVar6);
      iVar1 = *(int *)(lVar2 + uVar4 * 4);
      while (iVar7 != iVar1) {
        if (iVar1 == -1) {
          if (bVar3) {
            uVar4 = (ulonglong)uVar8;
          }
          break;
        }
        if ((iVar1 == -2) && (!bVar3)) {
          bVar3 = true;
          uVar8 = (uint)uVar4;
        }
        uVar4 = (ulonglong)((uint)uVar4 + 1 & uVar6);
        iVar1 = *(int *)(lVar2 + uVar4 * 4);
      }
      if (*(int *)(lVar2 + uVar4 * 4) == iVar7) {
        return true;
      }
    }
  }
  return false;
}

// HasNode @ 15024b310

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::HasNode(struct
   absl::lts_20240722::synchronization_internal::GraphId) __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::HasNode
          (GraphCycles *this,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar2 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_2 >> 0x20)) {
    lVar2 = lVar1;
  }
  return lVar2 != 0;
}

// FUN_15024b3c0 @ 15024b3c0

void FUN_15024b3c0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((void *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((void *)*param_1);
  }
  *param_1 = (longlong)(param_1 + 1);
  uVar2 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 5) = 8;
  do {
    *(undefined4 *)(*param_1 + uVar2 * 4) = 0xffffffff;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 5));
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}

// FUN_15024b420 @ 15024b420

/* WARNING: Removing unreachable block (ram,0x00015024b436) */
/* WARNING: Removing unreachable block (ram,0x00015024b43e) */

void FUN_15024b420(void)

{
  uint uVar1;
  
  uVar1 = DAT_155409f18;
  if ((DAT_155409f18 & 1) == 0) {
    DAT_155409f18 = DAT_155409f18 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar1 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155409f18);
  }
  if (DAT_155409f20 == (Arena *)0x0) {
    DAT_155409f20 = absl::lts_20240722::base_internal::LowLevelAlloc::NewArena(0);
  }
  uVar1 = DAT_155409f18;
  DAT_155409f18 = DAT_155409f18 & 2;
  LOCK();
  UNLOCK();
  if ((uVar1 & 0xfffffff8) == 0) {
    return;
  }
  absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155409f18,uVar1);
  return;
}

// InsertEdge @ 15024b4a0

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::InsertEdge(struct
   absl::lts_20240722::synchronization_internal::GraphId,struct
   absl::lts_20240722::synchronization_internal::GraphId) __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::InsertEdge
          (GraphCycles *this,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  
  plVar2 = *(longlong **)this;
  piVar3 = *(int **)(*plVar2 + (param_2 & 0xffffffff) * 8);
  piVar7 = (int *)0x0;
  if (piVar3[1] == (int)(param_2 >> 0x20)) {
    piVar7 = piVar3;
  }
  piVar3 = *(int **)(*plVar2 + (param_3 & 0xffffffff) * 8);
  piVar6 = (int *)0x0;
  if (piVar3[1] == (int)(param_3 >> 0x20)) {
    piVar6 = piVar3;
  }
  if ((piVar7 != (int *)0x0) && (piVar6 != (int *)0x0)) {
    if (piVar7 == piVar6) {
      return false;
    }
    cVar4 = FUN_15024c1b0(piVar7 + 0x14,param_3 & 0xffffffff);
    if ((cVar4 != '\0') && (FUN_15024c1b0(piVar6 + 6,param_2 & 0xffffffff), *piVar6 < *piVar7)) {
      cVar4 = FUN_15024aa80(plVar2,param_3 & 0xffffffff);
      if (cVar4 == '\0') {
        FUN_15024c0d0(piVar7 + 0x14,param_3 & 0xffffffff);
        FUN_15024c0d0(piVar6 + 6,param_2 & 0xffffffff);
        puVar5 = (uint *)plVar2[0x2000f];
        puVar1 = puVar5 + *(uint *)(plVar2 + 0x20014);
        for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
          *(undefined1 *)(*(longlong *)(*plVar2 + (ulonglong)*puVar5 * 8) + 0xc) = 0;
        }
        return false;
      }
      FUN_15024a100(plVar2,param_2 & 0xffffffff,*piVar6);
      FUN_15024bc00(plVar2);
    }
  }
  return true;
}

// IsReachable @ 15024b5d0

/* public: bool __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::IsReachable(struct
   absl::lts_20240722::synchronization_internal::GraphId,struct
   absl::lts_20240722::synchronization_internal::GraphId)const __ptr64 */

bool __thiscall absl::lts_20240722::synchronization_internal::GraphCycles::IsReachable(void)

{
  int iVar1;
  
  iVar1 = FindPath();
  return 0 < iVar1;
}

// FUN_15024b620 @ 15024b620

void FUN_15024b620(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  
  if ((longlong *)*param_2 == param_2 + 1) {
    uVar1 = *(uint *)(param_2 + 5);
    if (*(uint *)((longlong)param_1 + 0x2c) < uVar1) {
      FUN_15024afa0(param_1,uVar1);
    }
    *(uint *)(param_1 + 5) = uVar1;
    if (*(uint *)(param_2 + 5) != 0) {
      memmove((void *)*param_1,(void *)*param_2,(ulonglong)*(uint *)(param_2 + 5) << 2);
    }
  }
  else {
    if ((longlong *)*param_1 != param_1 + 1) {
      absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)*param_1);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *param_2 = (longlong)(param_2 + 1);
    *(undefined4 *)((longlong)param_2 + 0x2c) = 8;
  }
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}

// FUN_15024b6c0 @ 15024b6c0

void FUN_15024b6c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_2;
  puVar1 = puVar4 + *(uint *)(param_2 + 5);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar3 = *puVar4;
    lVar2 = (ulonglong)uVar3 * 8;
    *puVar4 = **(uint **)(lVar2 + *param_1);
    *(undefined1 *)(*(longlong *)(*param_1 + lVar2) + 0xc) = 0;
    if ((int)param_3[5] == *(int *)((longlong)param_3 + 0x2c)) {
      FUN_15024afa0(param_3,(int)param_3[5] + 1);
    }
    *(uint *)(*param_3 + (ulonglong)*(uint *)(param_3 + 5) * 4) = uVar3;
    *(int *)(param_3 + 5) = (int)param_3[5] + 1;
  }
  return;
}

// Ptr @ 15024b7c0

/* public: void * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::Ptr(struct
   absl::lts_20240722::synchronization_internal::GraphId) __ptr64 */

void * __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::Ptr(GraphCycles *this,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar2 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_2 >> 0x20)) {
    lVar2 = lVar1;
  }
  if (lVar2 == 0) {
    return (void *)0x0;
  }
  return (void *)(*(ulonglong *)(lVar2 + 0x10) ^ 0xf03a5f7bf03a5f7b);
}

// RemoveEdge @ 15024b890

/* public: void __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::RemoveEdge(struct
   absl::lts_20240722::synchronization_internal::GraphId,struct
   absl::lts_20240722::synchronization_internal::GraphId) __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::RemoveEdge
          (GraphCycles *this,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar3 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_2 >> 0x20)) {
    lVar3 = lVar1;
  }
  lVar1 = *(longlong *)(**(longlong **)this + (param_3 & 0xffffffff) * 8);
  lVar2 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_3 >> 0x20)) {
    lVar2 = lVar1;
  }
  if ((lVar3 != 0) && (lVar2 != 0)) {
    FUN_15024c0d0(lVar3 + 0x50,(int)param_3);
    FUN_15024c0d0(lVar2 + 0x18,param_2 & 0xffffffff);
  }
  return;
}

// RemoveNode @ 15024b910

/* public: void __cdecl absl::lts_20240722::synchronization_internal::GraphCycles::RemoveNode(void *
   __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::RemoveNode
          (GraphCycles *this,void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  puVar12 = (undefined8 *)(*(longlong *)this + 0x80);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  lVar7 = SUB168(ZEXT816(0x140019001f403) * auVar3,8);
  lVar7 = (ulonglong)
          (uint)((int)param_1 +
                (int)(((ulonglong)((longlong)param_1 - lVar7) >> 1) + lVar7 >> 0x11) * -0x3fffb) + 2
  ;
  uVar9 = *(uint *)((longlong)puVar12 + lVar7 * 4);
  puVar10 = (undefined4 *)((longlong)puVar12 + lVar7 * 4);
  if (uVar9 != 0xffffffff) {
    while (lVar7 = *(longlong *)(*(longlong *)*puVar12 + (ulonglong)uVar9 * 8),
          *(ulonglong *)(lVar7 + 0x10) != ((ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b)) {
      uVar9 = *(uint *)(lVar7 + 8);
      puVar10 = (undefined4 *)(lVar7 + 8);
      if (uVar9 == 0xffffffff) {
        return;
      }
    }
    *puVar10 = *(undefined4 *)(lVar7 + 8);
    *(undefined4 *)(lVar7 + 8) = 0xffffffff;
    if (uVar9 != 0xffffffff) {
      uVar8 = 0;
      lVar7 = *(longlong *)(**(longlong **)this + (ulonglong)uVar9 * 8);
      while ((uint)uVar8 < *(uint *)(lVar7 + 0x78)) {
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)(lVar7 + 0x50) + uVar8 * 4);
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar11;
          if (-1 < (int)uVar6) break;
          if (*(uint *)(lVar7 + 0x78) <= uVar11) goto LAB_15024ba04;
        }
        uVar13 = 0;
        bVar4 = false;
        lVar1 = *(longlong *)(**(longlong **)this + (ulonglong)uVar6 * 8);
        lVar2 = *(longlong *)(lVar1 + 0x18);
        uVar11 = *(int *)(lVar1 + 0x40) - 1;
        uVar5 = (ulonglong)(uVar9 * 0x29 & uVar11);
        uVar6 = *(uint *)(lVar2 + uVar5 * 4);
        while (uVar9 != uVar6) {
          if (uVar6 == 0xffffffff) {
            if (bVar4) {
              uVar5 = uVar13;
            }
            break;
          }
          if ((uVar6 == 0xfffffffe) && (!bVar4)) {
            bVar4 = true;
            uVar13 = uVar5;
          }
          uVar5 = (ulonglong)((int)uVar5 + 1U & uVar11);
          uVar6 = *(uint *)(lVar2 + uVar5 * 4);
        }
        if (*(uint *)(lVar2 + uVar5 * 4) == uVar9) {
          *(undefined4 *)(lVar2 + uVar5 * 4) = 0xfffffffe;
        }
      }
LAB_15024ba04:
      uVar8 = 0;
      while ((uint)uVar8 < *(uint *)(lVar7 + 0x40)) {
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)(lVar7 + 0x18) + uVar8 * 4);
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar11;
          if (-1 < (int)uVar6) break;
          if (*(uint *)(lVar7 + 0x40) <= uVar11) goto LAB_15024ba34;
        }
        uVar13 = 0;
        bVar4 = false;
        lVar1 = *(longlong *)(**(longlong **)this + (ulonglong)uVar6 * 8);
        lVar2 = *(longlong *)(lVar1 + 0x50);
        uVar11 = *(int *)(lVar1 + 0x78) - 1;
        uVar5 = (ulonglong)(uVar9 * 0x29 & uVar11);
        uVar6 = *(uint *)(lVar2 + uVar5 * 4);
        while (uVar9 != uVar6) {
          if (uVar6 == 0xffffffff) {
            if (bVar4) {
              uVar5 = uVar13;
            }
            break;
          }
          if ((uVar6 == 0xfffffffe) && (!bVar4)) {
            bVar4 = true;
            uVar13 = uVar5;
          }
          uVar5 = (ulonglong)((int)uVar5 + 1U & uVar11);
          uVar6 = *(uint *)(lVar2 + uVar5 * 4);
        }
        if (*(uint *)(lVar2 + uVar5 * 4) == uVar9) {
          *(undefined4 *)(lVar2 + uVar5 * 4) = 0xfffffffe;
        }
      }
LAB_15024ba34:
      if (*(void **)(lVar7 + 0x18) != (void *)(lVar7 + 0x20)) {
        base_internal::LowLevelAlloc::Free(*(void **)(lVar7 + 0x18));
      }
      *(void **)(lVar7 + 0x18) = (void *)(lVar7 + 0x20);
      uVar8 = 0;
      *(undefined4 *)(lVar7 + 0x44) = 8;
      *(undefined4 *)(lVar7 + 0x40) = 8;
      do {
        *(undefined4 *)(*(longlong *)(lVar7 + 0x18) + uVar8 * 4) = 0xffffffff;
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar7 + 0x40));
      *(undefined4 *)(lVar7 + 0x48) = 0;
      if (*(void **)(lVar7 + 0x50) != (void *)(lVar7 + 0x58)) {
        base_internal::LowLevelAlloc::Free(*(void **)(lVar7 + 0x50));
      }
      *(void **)(lVar7 + 0x50) = (void *)(lVar7 + 0x58);
      uVar8 = 0;
      *(undefined4 *)(lVar7 + 0x7c) = 8;
      *(undefined4 *)(lVar7 + 0x78) = 8;
      do {
        *(undefined4 *)(*(longlong *)(lVar7 + 0x50) + uVar8 * 4) = 0xffffffff;
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar7 + 0x78));
      *(undefined4 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0xf03a5f7bf03a5f7b;
      if (*(int *)(lVar7 + 4) != -1) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        lVar7 = *(longlong *)this;
        if (*(int *)(lVar7 + 0x78) == *(int *)(lVar7 + 0x7c)) {
          FUN_15024afa0(lVar7 + 0x50,*(int *)(lVar7 + 0x78) + 1);
        }
        *(uint *)(*(longlong *)(lVar7 + 0x50) + (ulonglong)*(uint *)(lVar7 + 0x78) * 4) = uVar9;
        *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + 1;
      }
    }
  }
  return;
}

// FUN_15024bc00 @ 15024bc00

void FUN_15024bc00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int *_Src;
  uint uVar7;
  int *piVar8;
  int *_Dst;
  ulonglong uVar9;
  int *_Src_00;
  bool bVar10;
  
  FUN_1502493f0(param_1[0x20015],param_1[0x20015] + (ulonglong)*(uint *)(param_1 + 0x2001a) * 4,
                (ulonglong)*(uint *)(param_1 + 0x2001a),param_1);
  FUN_1502493f0(param_1[0x2000f],param_1[0x2000f] + (ulonglong)*(uint *)(param_1 + 0x20014) * 4,
                (ulonglong)*(uint *)(param_1 + 0x20014),param_1);
  plVar1 = param_1 + 0x2001b;
  if ((longlong *)*plVar1 != param_1 + 0x2001c) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((longlong *)*plVar1);
  }
  uVar9 = 0;
  *plVar1 = (longlong)(param_1 + 0x2001c);
  *(undefined4 *)(param_1 + 0x20020) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100104) = 8;
  FUN_15024b6c0(param_1,param_1 + 0x20015,plVar1);
  FUN_15024b6c0(param_1,param_1 + 0x2000f,plVar1);
  uVar7 = (int)param_1[0x20014] + (int)param_1[0x2001a];
  if (*(uint *)((longlong)param_1 + 0x100134) < uVar7) {
    FUN_15024afa0(param_1 + 0x20021,uVar7);
  }
  *(uint *)(param_1 + 0x20026) = uVar7;
  _Src = (int *)param_1[0x20015];
  _Src_00 = (int *)param_1[0x2000f];
  _Dst = (int *)param_1[0x20021];
  piVar2 = _Src + *(uint *)(param_1 + 0x2001a);
  piVar3 = _Src_00 + *(uint *)(param_1 + 0x20014);
  if ((_Src != piVar2) && (piVar8 = _Dst, _Src_00 != piVar3)) {
    do {
      iVar5 = *_Src_00;
      _Dst = piVar8 + 1;
      iVar6 = *_Src;
      if (iVar5 < iVar6) {
        _Src_00 = _Src_00 + 1;
        *piVar8 = iVar5;
        bVar10 = _Src_00 == piVar3;
      }
      else {
        _Src = _Src + 1;
        *piVar8 = iVar6;
        bVar10 = _Src == piVar2;
      }
      piVar8 = _Dst;
    } while (!bVar10);
  }
  memmove(_Dst,_Src,(longlong)piVar2 - (longlong)_Src);
  memmove((void *)(((longlong)piVar2 - (longlong)_Src) + (longlong)_Dst),_Src_00,
          (longlong)piVar3 - (longlong)_Src_00);
  if ((int)param_1[0x20020] != 0) {
    do {
      lVar4 = uVar9 * 4;
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      **(undefined4 **)(*param_1 + (ulonglong)*(uint *)(lVar4 + *plVar1) * 8) =
           *(undefined4 *)(lVar4 + param_1[0x20021]);
    } while (uVar7 < *(uint *)(param_1 + 0x20020));
  }
  return;
}

// TestOnlyAddNodes @ 15024bde0

/* public: void __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::TestOnlyAddNodes(unsigned int) __ptr64
    */

void __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::TestOnlyAddNodes
          (GraphCycles *this,uint param_1)

{
  GraphCycles *_Dst;
  GraphCycles *pGVar1;
  uint uVar2;
  GraphCycles *pGVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = *(longlong *)this;
  uVar2 = *(uint *)(lVar6 + 0x48);
  if (*(uint *)(lVar6 + 0x4c) < param_1) {
    FUN_15024b010(lVar6);
  }
  *(uint *)(lVar6 + 0x48) = param_1;
  if (uVar2 < param_1) {
    uVar4 = uVar2;
    if (1 < param_1 - uVar2) {
      pGVar3 = *(GraphCycles **)this;
      _Dst = (GraphCycles *)(*(longlong *)pGVar3 + (ulonglong)uVar2 * 8);
      pGVar1 = (GraphCycles *)(*(longlong *)pGVar3 + (ulonglong)(param_1 - 1) * 8);
      if (((this < _Dst) || (pGVar1 < this)) && ((pGVar3 < _Dst || (pGVar1 < pGVar3)))) {
        uVar5 = param_1 - (param_1 - uVar2 & 1);
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 < uVar5);
        memset(_Dst,0,(ulonglong)((uVar5 - uVar2) + 1 >> 1) << 4);
        if (param_1 <= uVar4) {
          return;
        }
      }
    }
    uVar7 = (ulonglong)(param_1 - uVar4);
    lVar6 = (ulonglong)uVar4 * 8;
    do {
      *(undefined8 *)(lVar6 + **(longlong **)this) = 0;
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 != 0);
  }
  return;
}

// UpdateStackTrace @ 15024bec0

/* public: void __cdecl
   absl::lts_20240722::synchronization_internal::GraphCycles::UpdateStackTrace(struct
   absl::lts_20240722::synchronization_internal::GraphId,int,int (__cdecl*)(void * __ptr64 *
   __ptr64,int)) __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::GraphCycles::UpdateStackTrace
          (GraphCycles *this,ulonglong param_2,int param_3,code *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(**(longlong **)this + (param_2 & 0xffffffff) * 8);
  lVar3 = 0;
  if (*(int *)(lVar1 + 4) == (int)(param_2 >> 0x20)) {
    lVar3 = lVar1;
  }
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x88) < param_3)) {
    uVar2 = (*param_4)(lVar3 + 0x90,0x28);
    *(undefined4 *)(lVar3 + 0x8c) = uVar2;
    *(int *)(lVar3 + 0x88) = param_3;
  }
  return;
}

// FUN_15024bf70 @ 15024bf70

void FUN_15024bf70(longlong *param_1)

{
  if ((void *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((void *)*param_1);
  }
  *param_1 = (longlong)(param_1 + 1);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  return;
}

// FUN_15024bfb0 @ 15024bfb0

void FUN_15024bfb0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((void *)*param_1 != param_1 + 1) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free((void *)*param_1);
  }
  *param_1 = (longlong)(param_1 + 1);
  uVar2 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 5) = 8;
  do {
    *(undefined4 *)(*param_1 + uVar2 * 4) = 0xffffffff;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 5));
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}

// FUN_15024c010 @ 15024c010

ulonglong FUN_15024c010(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  lVar1 = *param_1;
  uVar5 = (int)param_1[5] - 1;
  bVar2 = false;
  uVar4 = (ulonglong)(param_2 * 0x29 & uVar5);
  iVar6 = *(int *)(lVar1 + uVar4 * 4);
  if (param_2 != iVar6) {
    while (iVar6 != -1) {
      if ((iVar6 == -2) && (!bVar2)) {
        bVar2 = true;
        uVar7 = uVar4;
      }
      uVar3 = (int)uVar4 + 1U & uVar5;
      uVar4 = (ulonglong)uVar3;
      iVar6 = *(int *)(lVar1 + uVar4 * 4);
      if (param_2 == iVar6) {
        return (ulonglong)CONCAT31((int3)(uVar3 >> 8),iVar6 == param_2);
      }
    }
    if (bVar2) {
      uVar4 = uVar7;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),*(int *)(lVar1 + uVar4 * 4) == param_2);
}

// FUN_15024c0d0 @ 15024c0d0

void FUN_15024c0d0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  lVar2 = *param_1;
  uVar5 = (int)param_1[5] - 1;
  bVar3 = false;
  uVar4 = (ulonglong)(param_2 * 0x29 & uVar5);
  iVar1 = *(int *)(lVar2 + uVar4 * 4);
  do {
    if (param_2 == iVar1) {
LAB_15024c11e:
      if (*(int *)(lVar2 + uVar4 * 4) == param_2) {
        *(undefined4 *)(lVar2 + uVar4 * 4) = 0xfffffffe;
      }
      return;
    }
    if (iVar1 == -1) {
      if (bVar3) {
        uVar4 = uVar6;
      }
      goto LAB_15024c11e;
    }
    if ((iVar1 == -2) && (!bVar3)) {
      bVar3 = true;
      uVar6 = uVar4;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1U & uVar5);
    iVar1 = *(int *)(lVar2 + uVar4 * 4);
  } while( true );
}

// fill @ 15024c170

/* public: void __cdecl std::array<int,262139>::fill(int const & __ptr64) __ptr64 */

void __thiscall std::array<int,262139>::fill(array<int,262139> *this,int *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3fffb;
  if (*param_1 == 0) {
    memset(this,0,0xfffec);
    return;
  }
  do {
    *(int *)this = *param_1;
    this = this + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// FUN_15024c1b0 @ 15024c1b0

undefined8 FUN_15024c1b0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar4 = (int)param_1[5] - 1;
  uVar6 = 0;
  bVar3 = false;
  uVar5 = (ulonglong)(param_2 * 0x29 & uVar4);
  iVar1 = *(int *)(lVar2 + uVar5 * 4);
  do {
    if (param_2 == iVar1) {
LAB_15024c20c:
      iVar1 = *(int *)(lVar2 + uVar5 * 4);
      if (iVar1 == param_2) {
        return 0;
      }
      if (iVar1 == -1) {
        *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      }
      *(int *)(lVar2 + uVar5 * 4) = param_2;
      if (*(uint *)(param_1 + 5) - (*(uint *)(param_1 + 5) >> 2) <= *(uint *)(param_1 + 6)) {
        FUN_15024b080(param_1);
      }
      return 1;
    }
    if (iVar1 == -1) {
      if (bVar3) {
        uVar5 = uVar6;
      }
      goto LAB_15024c20c;
    }
    if ((iVar1 == -2) && (!bVar3)) {
      bVar3 = true;
      uVar6 = uVar5;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1U & uVar4);
    iVar1 = *(int *)(lVar2 + uVar5 * 4);
  } while( true );
}

// FUN_15024c270 @ 15024c270

void FUN_15024c270(longlong *param_1,undefined4 *param_2)

{
  if ((int)param_1[5] == *(int *)((longlong)param_1 + 0x2c)) {
    FUN_15024afa0(param_1,(int)param_1[5] + 1);
  }
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 5) * 4) = *param_2;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}

// FUN_15024c2b0 @ 15024c2b0

void FUN_15024c2b0(longlong *param_1,undefined8 *param_2)

{
  if ((int)param_1[9] == *(int *)((longlong)param_1 + 0x4c)) {
    FUN_15024b010(param_1,(int)param_1[9] + 1);
  }
  *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 9) * 8) = *param_2;
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  return;
}

// FUN_15024c300 @ 15024c300

void FUN_15024c300(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    FUN_15024afa0();
    *(uint *)(param_1 + 0x28) = param_2;
    return;
  }
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}

// FUN_15024c340 @ 15024c340

void FUN_15024c340(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x4c) < param_2) {
    FUN_15024b010();
    *(uint *)(param_1 + 0x48) = param_2;
    return;
  }
  *(uint *)(param_1 + 0x48) = param_2;
  return;
}

