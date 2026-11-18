// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 55

// ByteCopy<unsigned_int,unsigned_int> @ 14f3a7630

void __cdecl oo2::ByteCopy<unsigned_int,unsigned_int>(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteSwap<unsigned_int> @ 14f3a7640

void __cdecl oo2::ByteSwap<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// stdsort<unsigned_int_*,oo2::stdgreater<unsigned_int>_> @ 14f3a7660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::stdsort<unsigned_int_*,oo2::stdgreater<unsigned_int>_>
          (uint *param_1,uint *param_2,stdgreater<unsigned_int> param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar11 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 2);
  puVar14 = param_1 + (uVar11 - 1);
  uVar7 = uVar11;
  puVar16 = local_48;
  if (1 < uVar11) {
    do {
      puVar15 = puVar16;
      puVar16 = puVar15 + -3;
      uVar7 = (uVar7 >> 2) + (uVar7 >> 1);
    } while (uVar7 != 0);
    puVar15[-4] = 0;
LAB_14f3a7710:
    do {
      if (1 < uVar11) {
        if (uVar11 == 2) {
          uVar1 = *param_1;
          if (uVar1 < *puVar14) {
            *param_1 = *puVar14;
            *puVar14 = uVar1;
          }
        }
        else {
          uVar3 = *param_1;
          uVar1 = *puVar14;
          uVar7 = uVar11 >> 1;
          uVar2 = param_1[uVar7];
          puVar5 = param_1 + uVar7;
          if (uVar3 < uVar2) {
            if (uVar1 < uVar2) {
              if (uVar1 < uVar3) {
                *param_1 = uVar2;
                *puVar5 = uVar3;
                goto LAB_14f3a7787;
              }
              *puVar5 = uVar3;
              *param_1 = uVar2;
              uVar3 = *puVar5;
              *puVar5 = *puVar14;
            }
            else {
              *param_1 = uVar1;
            }
LAB_14f3a7784:
            *puVar14 = uVar3;
          }
          else if (uVar2 < uVar1) {
            if (uVar3 <= uVar1) {
              *param_1 = uVar2;
              *puVar5 = uVar3;
              uVar3 = *param_1;
              *param_1 = *puVar14;
              goto LAB_14f3a7784;
            }
            *puVar5 = uVar1;
            *puVar14 = uVar2;
          }
LAB_14f3a7787:
          if (4 < uVar11) {
            if (puVar16 == local_48) {
LAB_14f3a7896:
              uVar7 = uVar7 - 1;
              puVar5 = puVar5 + -1;
              uVar6 = uVar7 * 2 + 1;
              puVar8 = puVar5;
LAB_14f3a78b0:
              puVar10 = param_1 + uVar6;
              puVar9 = puVar10 + 1;
              if ((puVar9 <= puVar14) && (*puVar9 < *puVar10)) {
                uVar6 = uVar6 + 1;
                puVar10 = puVar9;
              }
              uVar1 = *puVar8;
              if (*puVar10 < uVar1) goto code_r0x00014f3a78d4;
              goto LAB_14f3a78e9;
            }
            uVar1 = *puVar5;
            *puVar5 = *param_1;
            *param_1 = uVar1;
            puVar5 = param_1;
            puVar8 = puVar14;
            while( true ) {
              uVar1 = *param_1;
              do {
                puVar9 = puVar8 + -1;
                puVar8 = puVar8 + -1;
              } while (*puVar9 < uVar1);
              puVar10 = puVar5;
              if (puVar8 <= puVar5) break;
              do {
                puVar5 = puVar10;
                uVar2 = puVar5[1];
                puVar10 = puVar5 + 1;
              } while (uVar1 < uVar2);
              if (puVar8 <= puVar10) break;
              *puVar10 = *puVar9;
              *puVar8 = uVar2;
              puVar5 = puVar10;
            }
            *param_1 = *puVar5;
            *puVar5 = uVar1;
            puVar8 = puVar5;
            do {
              puVar8 = puVar8 + 1;
              if (puVar14 <= puVar8) break;
            } while (uVar1 <= *puVar8);
            do {
              puVar5 = puVar5 + -1;
              if (puVar5 <= param_1) break;
            } while (*puVar5 <= uVar1);
            lVar13 = (longlong)puVar14 - (longlong)puVar8 >> 2;
            lVar12 = (longlong)puVar5 - (longlong)param_1 >> 2;
            uVar11 = lVar13 + 1;
            uVar7 = lVar12 + 1;
            puVar9 = param_1;
            puVar10 = puVar5;
            if (uVar7 > uVar11) {
              puVar9 = puVar8;
              puVar10 = puVar14;
              puVar8 = param_1;
              puVar14 = puVar5;
            }
            *puVar16 = (ulonglong)puVar9;
            lVar4 = lVar13;
            if (uVar7 <= uVar11) {
              lVar4 = lVar12;
            }
            puVar16[1] = (ulonglong)puVar10;
            puVar16[2] = lVar4 + 1;
            if (uVar7 <= uVar11) {
              lVar12 = lVar13;
            }
            uVar11 = lVar12 + 1;
            param_1 = puVar8;
            puVar16 = puVar16 + 3;
            goto LAB_14f3a7710;
          }
          if (uVar11 != 3) {
            uVar1 = *puVar5;
            uVar2 = param_1[1];
            if (uVar2 < uVar1) {
              if (*puVar14 < uVar2) {
                param_1[1] = uVar1;
                *puVar5 = uVar2;
              }
              else {
                *puVar5 = uVar2;
                param_1[1] = uVar1;
                uVar1 = *puVar5;
                *puVar5 = *puVar14;
                *puVar14 = uVar1;
              }
            }
            else {
              uVar1 = *param_1;
              if (uVar1 < uVar2) {
                *param_1 = uVar2;
                param_1[1] = uVar1;
              }
            }
          }
        }
      }
LAB_14f3a7963:
      uVar11 = puVar16[-1];
      param_1 = (uint *)puVar16[-3];
      puVar14 = (uint *)puVar16[-2];
      puVar16 = puVar16 + -3;
    } while (uVar11 != 0);
  }
  return;
code_r0x00014f3a78d4:
  *puVar8 = *puVar10;
  uVar6 = uVar6 * 2 + 1;
  *puVar10 = uVar1;
  puVar8 = puVar10;
  if (uVar11 <= uVar6) {
LAB_14f3a78e9:
    if (uVar7 == 0) {
      uVar11 = uVar11 - 1;
      uVar1 = *param_1;
      *param_1 = *puVar14;
      uVar6 = 1;
      *puVar14 = uVar1;
      puVar14 = puVar14 + -1;
      puVar8 = param_1;
      if (uVar11 < 2) goto LAB_14f3a7963;
      goto LAB_14f3a78b0;
    }
    goto LAB_14f3a7896;
  }
  goto LAB_14f3a78b0;
}

// swap3<unsigned_int> @ 14f3a79e0

void __cdecl oo2::swap3<unsigned_int>(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = *param_1;
  *param_1 = *param_3;
  *param_3 = uVar1;
  return;
}

// swap<unsigned_int> @ 14f3a7a00

void __cdecl oo2::swap<unsigned_int>(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// operator() @ 14f3a7a20

bool __thiscall
oo2::stdgreater<unsigned_int>::operator()
          (stdgreater<unsigned_int> *this,uint *param_1,uint *param_2)

{
  return *param_2 < *param_1;
}

// operator() @ 14f3a7a30

void __thiscall
oo2::swap_functor<unsigned_int>::operator()
          (swap_functor<unsigned_int> *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// OodleFree @ 14f3a7a50

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3a7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3a7a60

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// RR_GET32_NATIVE @ 14f3a7aa0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3a7ab0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3a7ac0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// U8_check @ 14f3a7ad0

uchar __cdecl oo2::U8_check(int param_1)

{
  return (uchar)param_1;
}

// U8_check @ 14f3a7ae0

uchar __cdecl oo2::U8_check(uint param_1)

{
  return (uchar)param_1;
}

// choose_alt_offset_modulo_brute @ 14f3a7b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2::choose_alt_offset_modulo_brute(uint *param_1,int param_2,float param_3,OodleSpeedFit *param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_6b8 [32];
  uint local_698 [128];
  uint local_498 [256];
  ulonglong local_98;
  
  fVar2 = __real_40c00000;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  lVar10 = (longlong)param_2;
  if (param_2 < 0x20) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar7 = 1;
    fVar14 = __real_4e800000;
    do {
      rrMemSetZero(local_498,0x400);
      rrMemSetZero(local_698,0x200);
      lVar9 = 0;
      iVar5 = 0;
      if (param_2 != 0) {
        do {
          uVar3 = param_1[lVar9];
          lVar9 = lVar9 + 1;
          uVar8 = uVar3 / uVar7 + 8;
          iVar1 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          bVar4 = (char)iVar1 - 3;
          bVar4 = (byte)(uVar8 >> (bVar4 & 0x1f)) ^ 8 | bVar4 * '\b';
          iVar5 = iVar5 + (uint)(bVar4 >> 3);
          local_498[bVar4] = local_498[bVar4] + 1;
          local_698[(ulonglong)uVar3 % (ulonglong)uVar7 & 0xff] =
               local_698[(ulonglong)uVar3 % (ulonglong)uVar7 & 0xff] + 1;
        } while (lVar9 < lVar10);
      }
      uVar3 = newlz_array_estimate_complen_bits(local_498,0x100,param_2);
      fVar13 = (float)(int)((uVar3 + 7 >> 3) + ((int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3));
      if (1 < uVar7) {
        fVar11 = (*param_4->simd_mul_s32_sub_u8)(lVar10);
        uVar3 = newlz_array_estimate_complen_bits(local_698,0x80,param_2);
        fVar12 = (*param_4->huff3)(lVar10,0x80,0x14,fVar2);
        fVar13 = fVar12 * param_3 + (float)(uVar3 + 7 >> 3) + fVar13 + fVar11 * param_3;
      }
      uVar3 = uVar7;
      if (fVar14 <= fVar13) {
        uVar3 = uVar6;
        fVar13 = fVar14;
      }
      fVar14 = fVar13;
      uVar6 = uVar3;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x81);
  }
  return uVar6;
}

// choose_alt_offset_modulo_fast @ 14f3a7d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
oo2::choose_alt_offset_modulo_fast(uint *param_1,int param_2,float param_3,OodleSpeedFit *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2a8 [32];
  stdgreater<unsigned_int> local_278;
  uint local_268 [8];
  int local_248 [121];
  uint local_64 [3];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar7 = 0;
  uVar6 = uVar7;
  piVar10 = local_248;
  iVar3 = 8;
  do {
    iVar4 = iVar3 + -4;
    iVar8 = (int)uVar6;
    piVar10[-8] = iVar8 + (int)__xmm_00000003000000020000000100000000;
    piVar10[-7] = iVar8 + __xmm_00000003000000020000000100000000._4_4_;
    piVar10[-6] = iVar8 + _UNK_150631e08;
    piVar10[-5] = iVar8 + _UNK_150631e0c;
    iVar1 = iVar3 + 4;
    uVar9 = iVar8 + 0x10;
    uVar6 = (ulonglong)uVar9;
    piVar10[-4] = iVar4 + (int)__xmm_00000003000000020000000100000000;
    piVar10[-3] = iVar4 + __xmm_00000003000000020000000100000000._4_4_;
    piVar10[-2] = iVar4 + _UNK_150631e08;
    piVar10[-1] = iVar4 + _UNK_150631e0c;
    iVar4 = iVar3 + 0x10;
    *piVar10 = iVar3 + (int)__xmm_00000003000000020000000100000000;
    piVar10[1] = iVar3 + __xmm_00000003000000020000000100000000._4_4_;
    piVar10[2] = iVar3 + _UNK_150631e08;
    piVar10[3] = iVar3 + _UNK_150631e0c;
    piVar10[4] = iVar1 + (int)__xmm_00000003000000020000000100000000;
    piVar10[5] = iVar1 + __xmm_00000003000000020000000100000000._4_4_;
    piVar10[6] = iVar1 + _UNK_150631e08;
    piVar10[7] = iVar1 + _UNK_150631e0c;
    piVar10 = piVar10 + 0x10;
    iVar3 = iVar4;
  } while (iVar4 < 0x88);
  if ((int)uVar9 < 0x81) {
    puVar5 = local_268 + (int)uVar9;
    do {
      *puVar5 = (uint)uVar6;
      puVar5 = puVar5 + 1;
      uVar9 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
    } while ((int)uVar9 < 0x81);
  }
  uVar6 = uVar7;
  if (0 < param_2) {
    do {
      if ((int)param_1[uVar6] < 0x81) {
        local_268[(int)param_1[uVar6]] = local_268[(int)param_1[uVar6]] + 0x100;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)param_2);
  }
  stdsort<unsigned_int_*,oo2::stdgreater<unsigned_int>_>(local_268,local_64,local_278);
  uVar9 = 1;
  fVar11 = cost_alt_offset_modulo(1,param_1,param_2,param_3,param_4);
  do {
    bVar2 = (byte)local_268[uVar7];
    if ((1 < bVar2) &&
       (fVar12 = cost_alt_offset_modulo((uint)bVar2,param_1,param_2,param_3,param_4),
       fVar12 < fVar11)) {
      fVar11 = fVar12;
      uVar9 = (uint)bVar2;
    }
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < 4);
  return uVar9;
}

// cost_alt_offset_modulo @ 14f3a7f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
oo2::cost_alt_offset_modulo
          (int param_1,uint *param_2,int param_3,float param_4,OodleSpeedFit *param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_678 [32];
  uint local_658 [128];
  uint local_458 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_678;
  lVar5 = (longlong)param_3;
  rrMemSetZero(local_458,0x400);
  rrMemSetZero(local_658,0x200);
  iVar4 = 0;
  if (0 < param_3) {
    lVar7 = 0;
    do {
      uVar2 = param_2[lVar7];
      lVar7 = lVar7 + 1;
      uVar6 = uVar2 / (uint)param_1 + 8;
      iVar1 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      bVar3 = (char)iVar1 - 3;
      bVar3 = (byte)(uVar6 >> (bVar3 & 0x1f)) ^ 8 | bVar3 * '\b';
      iVar4 = iVar4 + (uint)(bVar3 >> 3);
      local_458[bVar3] = local_458[bVar3] + 1;
      local_658[(ulonglong)uVar2 % (ulonglong)(uint)param_1 & 0xff] =
           local_658[(ulonglong)uVar2 % (ulonglong)(uint)param_1 & 0xff] + 1;
    } while (lVar7 < lVar5);
  }
  uVar2 = newlz_array_estimate_complen_bits(local_458,0x100,param_3);
  fVar10 = (float)(int)((uVar2 + 7 >> 3) + ((int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3));
  if (1 < param_1) {
    fVar8 = (*param_5->simd_mul_s32_sub_u8)(lVar5);
    uVar2 = newlz_array_estimate_complen_bits(local_658,0x80,param_3);
    fVar9 = (*param_5->huff3)(lVar5,0x80,0x14,__real_40c00000);
    fVar10 = fVar9 * param_4 + (float)(uVar2 + 7 >> 3) + fVar10 + fVar8 * param_4;
  }
  return fVar10;
}

// get_nbit_mask @ 14f3a8080

uint __cdecl oo2::get_nbit_mask(uint param_1)

{
  return masks[param_1];
}

// newLZ_alt_offset_pack_high_rawbits @ 14f3a80a0

uint __cdecl oo2::newLZ_alt_offset_pack_high_rawbits(uint param_1,uint param_2,uint param_3)

{
  return param_1 / param_3 + 8 & (1 << ((byte)param_2 & 0x1f)) - 1U;
}

// newLZ_alt_offset_pack_u8_modulo1 @ 14f3a80d0

uchar __cdecl oo2::newLZ_alt_offset_pack_u8_modulo1(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 + 8;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  bVar3 = (char)iVar1 - 3;
  return (byte)(uVar2 >> (bVar3 & 0x1f)) ^ 8 | bVar3 * '\b';
}

// newLZ_alt_offset_pack_u8s @ 14f3a80f0

void __cdecl oo2::newLZ_alt_offset_pack_u8s(uint param_1,uchar *param_2,uchar *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  *param_3 = (uchar)(param_1 % (uint)param_4);
  uVar3 = param_1 / (uint)param_4 + 8;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  bVar2 = (char)iVar1 - 3;
  *param_2 = (byte)(uVar3 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
  return;
}

// newLZ_alt_offset_unpack_numrawbits @ 14f3a8120

uint __cdecl oo2::newLZ_alt_offset_unpack_numrawbits(uchar param_1)

{
  return (uint)(param_1 >> 3);
}

// newLZ_get_excesses @ 14f3a8140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_get_excesses
          (_rrVarBits_ *param_1,_rrVarBits_ *param_2,uint *param_3,uint *param_4,long64 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  uchar *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [32];
  uchar *local_a8;
  uchar *local_a0;
  uint *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong auStack_70 [7];
  
  auStack_70[5] = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar17 = param_2->m_inv_bitlen;
  uVar10 = param_2->m_bits;
  puVar14 = param_2->m_cur;
  lVar16 = param_1->m_inv_bitlen;
  puVar13 = (ulonglong *)param_1->m_cur;
  uVar8 = param_1->m_bits;
  local_a0 = (uchar *)((longlong)puVar13 -
                      ((longlong)((0x3f - lVar16) + (ulonglong)((uint)(0x3f - lVar16 >> 0x3f) & 7))
                      >> 3));
  local_a8 = puVar14 + ((longlong)((ulonglong)((uint)(0x3f - lVar17 >> 0x3f) & 7) + (0x3f - lVar17))
                       >> 3);
  local_98 = param_3;
  if (local_a8 < local_a0) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",0x4f3,
                 "OODLE ERROR : corruption : vb1_init <= vb2_init\n");
    }
    ooLogErrorPost();
  }
  else {
    lVar2 = (longlong)puVar14 - (longlong)puVar13;
    puVar6 = param_3;
    while (0x20 < lVar2) {
      if (param_4 < puVar6) {
        return -1;
      }
      uVar9 = *puVar13;
      uVar8 = uVar8 | (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                       (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                       (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
                       (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) >> (0x3fU - (char)lVar16 & 0x3f);
      lVar2 = lVar17 >> 3;
      puVar13 = (ulonglong *)((longlong)puVar13 + (lVar16 >> 3));
      uVar10 = uVar10 | *(ulonglong *)(puVar14 + -8) >> (0x3fU - (char)lVar17 & 0x3f);
      if (uVar8 < 0x8000000000000) {
        return -1;
      }
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      lVar3 = (ulonglong)(0x3f - (int)lVar3) * 2 + 7;
      lVar16 = lVar16 + lVar3 + (lVar16 >> 3) * -8;
      if (uVar10 < 0x8000000000000) {
        return -1;
      }
      lVar1 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      lVar1 = (ulonglong)(0x3f - (int)lVar1) * 2 + 7;
      lVar17 = lVar17 + lVar1 + lVar2 * -8;
      bVar4 = (byte)lVar3;
      bVar5 = (byte)lVar1;
      *puVar6 = (int)(uVar8 >> (0x40 - bVar4 & 0x3f)) - 0x40;
      puVar6[1] = (int)(uVar10 >> (0x40 - bVar5 & 0x3f)) - 0x40;
      uVar9 = *puVar13;
      puVar13 = (ulonglong *)((longlong)puVar13 + (lVar16 >> 3));
      uVar9 = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
               | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 |
               (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) >>
              (0x3fU - (char)lVar16 & 0x3f) | uVar8 << (bVar4 & 0x3f);
      uVar11 = *(ulonglong *)(puVar14 + (-8 - lVar2)) >> (0x3fU - (char)lVar17 & 0x3f) |
               uVar10 << (bVar5 & 0x3f);
      puVar14 = puVar14 + (-(lVar17 >> 3) - lVar2);
      if (uVar9 < 0x8000000000000) {
        return -1;
      }
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      lVar2 = (ulonglong)(0x3f - (int)lVar2) * 2 + 7;
      bVar4 = (byte)lVar2;
      uVar8 = uVar9 << (bVar4 & 0x3f);
      lVar16 = lVar16 + lVar2 + (lVar16 >> 3) * -8;
      if (uVar11 < 0x8000000000000) {
        return -1;
      }
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      lVar2 = (ulonglong)(0x3f - (int)lVar2) * 2 + 7;
      bVar5 = (byte)lVar2;
      uVar10 = uVar11 << (bVar5 & 0x3f);
      lVar17 = lVar17 + lVar2 + (lVar17 >> 3) * -8;
      puVar6[2] = (int)(uVar9 >> (0x40 - bVar4 & 0x3f)) - 0x40;
      puVar6[3] = (int)(uVar11 >> (0x40 - bVar5 & 0x3f)) - 0x40;
      puVar6 = puVar6 + 4;
      lVar2 = (longlong)puVar14 - (longlong)puVar13;
    }
    local_88 = 0;
    uStack_80 = 0;
    lVar2 = 8;
    if ((longlong)puVar13 - (longlong)local_a0 < 8) {
      lVar2 = (longlong)puVar13 - (longlong)local_a0;
    }
    local_78 = 0;
    auStack_70[0] = 0;
    lVar3 = 8;
    if ((longlong)local_a8 - (longlong)puVar14 < 8) {
      lVar3 = (longlong)local_a8 - (longlong)puVar14;
    }
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[4] = 0;
    memcpy((void *)((longlong)auStack_70 - lVar2),(void *)((longlong)puVar13 - lVar2),
           lVar3 + lVar2 + ((longlong)puVar14 - (longlong)puVar13));
    puVar12 = auStack_70;
    lVar2 = (longlong)auStack_70 + ((longlong)puVar14 - (longlong)puVar13);
    uVar9 = ((longlong)((ulonglong)((uint)(0x3f - lVar17 >> 0x3f) & 7) + (0x3f - lVar17)) >> 3) +
            lVar2;
    for (; puVar6 <= param_4; puVar6 = puVar6 + 2) {
      uVar11 = *puVar12;
      puVar12 = (ulonglong *)((longlong)puVar12 + (lVar16 >> 3));
      uVar11 = uVar8 | (uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                        (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                        (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                        (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38) >> (0x3fU - (char)lVar16 & 0x3f)
      ;
      lVar16 = lVar16 + (lVar16 >> 3) * -8;
      puVar7 = puVar6;
      if (uVar11 < 0x8000000000000) {
        lVar16 = 0x32 - lVar16;
        if ((ulonglong)
            ((longlong)puVar12 - ((longlong)(lVar16 + (ulonglong)((uint)(lVar16 >> 0x3f) & 7)) >> 3)
            ) <= uVar9) {
          return -1;
        }
code_r0x00014f3a8640:
        if (param_4 < puVar7) {
          return -1;
        }
        lVar17 = (longlong)puVar7 - (longlong)param_3 >> 2;
        if (param_5 != 0) {
          if (param_5 != lVar17) {
            return -1;
          }
          return lVar17;
        }
        return lVar17;
      }
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      lVar3 = (ulonglong)(0x3f - (int)lVar3) * 2 + 7;
      bVar4 = (byte)lVar3;
      lVar16 = lVar16 + lVar3;
      uVar8 = uVar11 << (bVar4 & 0x3f);
      uVar15 = (longlong)puVar12 -
               ((longlong)((0x3f - lVar16) + (ulonglong)((uint)(0x3f - lVar16 >> 0x3f) & 7)) >> 3);
      if (uVar9 < uVar15) goto code_r0x00014f3a8640;
      *puVar6 = (int)(uVar11 >> (0x40 - bVar4 & 0x3f)) - 0x40;
      puVar13 = (ulonglong *)(lVar2 + -8);
      puVar7 = puVar6 + 1;
      lVar2 = lVar2 - (lVar17 >> 3);
      uVar11 = uVar10 | *puVar13 >> (0x3fU - (char)lVar17 & 0x3f);
      lVar17 = lVar17 + (lVar17 >> 3) * -8;
      if (uVar11 < 0x8000000000000) {
        lVar17 = 0x32 - lVar17;
        if (uVar15 <= (ulonglong)
                      (((longlong)(lVar17 + (ulonglong)((uint)(lVar17 >> 0x3f) & 7)) >> 3) + lVar2))
        {
          return -1;
        }
        goto code_r0x00014f3a8640;
      }
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      lVar3 = (ulonglong)(0x3f - (int)lVar3) * 2 + 7;
      bVar4 = (byte)lVar3;
      lVar17 = lVar17 + lVar3;
      uVar10 = uVar11 << (bVar4 & 0x3f);
      uVar9 = ((longlong)((ulonglong)((uint)(0x3f - lVar17 >> 0x3f) & 7) + (0x3f - lVar17)) >> 3) +
              lVar2;
      if (uVar9 < uVar15) goto code_r0x00014f3a8640;
      *puVar7 = (int)(uVar11 >> (0x40 - bVar4 & 0x3f)) - 0x40;
    }
  }
  return -1;
}

// newLZ_get_offsets_excesses @ 14f3a8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
oo2::newLZ_get_offsets_excesses
          (uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,long64 param_5,uint param_6,
          uchar *param_7,long64 param_8,int *param_9,uint *param_10,long64 param_11,uchar param_12,
          int param_13)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [11];
  undefined1 auVar25 [13];
  undefined1 auVar26 [14];
  uint5 uVar27;
  undefined1 auVar28 [15];
  undefined1 auVar29 [11];
  undefined1 auVar30 [13];
  undefined1 auVar31 [14];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [12];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  undefined1 auVar37 [13];
  undefined1 auVar38 [13];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [12];
  bool bVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  bool bVar69;
  longlong lVar70;
  uchar *puVar71;
  long64 lVar72;
  uchar *puVar73;
  longlong lVar74;
  ulonglong uVar75;
  uint *puVar76;
  int *piVar77;
  int *piVar78;
  int iVar79;
  uint uVar80;
  byte bVar81;
  char *pcVar82;
  ulonglong uVar83;
  ulonglong *puVar84;
  uchar *puVar85;
  ulonglong *puVar86;
  uchar *puVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  short sVar99;
  ushort uVar101;
  undefined1 auVar91 [16];
  char cVar100;
  ushort uVar102;
  undefined1 auVar92 [16];
  undefined1 auStackY_a08 [32];
  ulonglong *local_9c8;
  longlong local_9a8;
  _rrVarBits_ local_980;
  KrakenOffsetState local_958;
  uint local_918 [512];
  uint local_118 [8];
  undefined1 local_f8 [32];
  ulonglong local_d8 [2];
  ulonglong local_c8 [10];
  ulonglong local_78 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  lVar70 = (longlong)param_13;
  if ((param_2 <= param_1) && (param_12 == '\0')) {
    return -1;
  }
  if ((longlong)param_2 - (longlong)param_1 < lVar70) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3a8b52;
    pcVar82 = "OODLE ERROR : corruption : excess_stream_bytes > comp_bytes\n";
    iVar79 = 0x5f6;
  }
  else {
    local_9a8 = 0;
    puVar73 = param_2 + -lVar70;
    bVar42 = false;
    puVar71 = puVar73;
    puVar86 = (ulonglong *)param_1;
    if (puVar73 <= param_1 + 0x40) {
      bVar42 = true;
      if (puVar73 < param_1) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3a8b52;
        pcVar82 = "OODLE ERROR : corruption : b >= f\n";
        iVar79 = 0x61f;
        goto LAB_14f3a8b47;
      }
      lVar74 = 0x30;
      if (lVar70 < 0x30) {
        lVar74 = lVar70;
      }
      memset(local_f8,0,0xa0);
      memcpy(local_c8,param_1,(size_t)(puVar73 + (lVar74 - (longlong)param_1)));
      puVar71 = puVar73 + ((longlong)local_c8 - (longlong)param_1);
      puVar86 = local_c8;
    }
    uVar83 = *puVar86;
    puVar84 = (ulonglong *)&DAT_00000007;
    piVar77 = *(int **)(puVar71 + -8);
    puVar85 = puVar71 + -7;
    puVar87 = (uchar *)((longlong)puVar86 + 7);
    local_9c8 = (ulonglong *)&DAT_00000007;
    piVar78 = (int *)(uVar83 >> 0x38 | (uVar83 & 0xff000000000000) >> 0x28 |
                      (uVar83 & 0xff0000000000) >> 0x18 | (uVar83 & 0xff00000000) >> 8 |
                      (uVar83 & 0xff000000) << 8 | (uVar83 & 0xff0000) << 0x18 |
                      (uVar83 & 0xff00) << 0x28 | uVar83 << 0x38);
    if (param_12 == '\0') {
      if (piVar77 < (int *)0x200000000000) {
        return -1;
      }
      lVar70 = 0x3f;
      if (piVar77 != (int *)0x0) {
        for (; (ulonglong)piVar77 >> lVar70 == 0; lVar70 = lVar70 + -1) {
        }
      }
      lVar70 = (ulonglong)(0x3f - (int)lVar70) * 2;
      bVar81 = (char)lVar70 + 1;
      uVar83 = lVar70 + 8;
      local_9a8 = ((ulonglong)piVar77 >> (0x40 - bVar81 & 0x3f)) - 1;
      puVar85 = puVar85 + -(uVar83 >> 3);
      piVar77 = (int *)(*(ulonglong *)(puVar71 + -0xf) >> (0x3fU - (char)uVar83 & 0x3f) |
                       (longlong)piVar77 << (bVar81 & 0x3f));
      local_9c8 = (ulonglong *)(uVar83 + (uVar83 >> 3) * -8);
    }
    if (0 < param_5) {
      local_958.offs_u8_end = param_3 + param_5;
      local_958.neg_offs_s32 = param_9;
      local_958.bitc[0] = 0;
      local_958.neg_offs_s32_base = (int *)0x0;
      local_958.neg_offs_ref_base = (int *)0x0;
      local_958.bitc[1] = -((int)-(longlong)local_9c8 + 0x3f) & 7;
      local_958.bitp[1] = puVar85 + (-(longlong)local_9c8 + 0x46 >> 3);
      local_958.offs_u8 = param_3;
      local_958.bitp[0] = (uchar *)puVar86;
      if (param_6 == 0) {
        if (((byte)g_rrCPUx86_feature_flags & 8) == 0) {
          bVar69 = newLZ_offset44_decode64_tab(&local_958);
        }
        else {
          bVar69 = newLZ_offset44_decode_sse4(&local_958);
        }
      }
      else if (((byte)g_rrCPUx86_feature_flags & 8) == 0) {
        bVar69 = newLZ_offsetalt_decode64_tab(&local_958);
      }
      else {
        bVar69 = newLZ_offsetalt_decode_sse4(&local_958);
      }
      puVar85 = local_958.bitp[1];
      puVar71 = local_958.bitp[0];
      if (bVar69 == false) {
        return -1;
      }
      puVar86 = (ulonglong *)local_958.bitp[1];
      puVar84 = (ulonglong *)local_958.bitp[0];
      if (local_958.bitp[1] <= (ulonglong *)((longlong)local_958.bitp[0] + 0x40)) {
        if (bVar42) {
          if (local_958.bitp[1] < (ulonglong *)((longlong)local_958.bitp[0] + -0x10)) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3a8b52;
            pcVar82 = "OODLE ERROR : corruption : b >= f-16\n";
          }
          else if (local_958.bitp[1] < local_d8) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3a8b52;
            pcVar82 = "OODLE ERROR : corruption : b >= safe_space+(32)\n";
          }
          else {
            if (local_958.bitp[0] <= local_78) goto LAB_14f3a89ef;
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3a8b52;
            pcVar82 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(32)\n";
          }
        }
        else {
          if (local_958.bitp[0] <= local_958.bitp[1]) {
            lVar70 = 0x30;
            if ((longlong)local_958.bitp[0] - (longlong)param_1 < 0x30) {
              lVar70 = (longlong)local_958.bitp[0] - (longlong)param_1;
            }
            lVar74 = 0x30;
            if ((longlong)param_2 - (longlong)local_958.bitp[1] < 0x30) {
              lVar74 = (longlong)param_2 - (longlong)local_958.bitp[1];
            }
            memset(local_f8,0,0xa0);
            memcpy((void *)((longlong)local_c8 - lVar70),(void *)((longlong)puVar71 - lVar70),
                   (size_t)((longlong)puVar85 + ((lVar74 + lVar70) - (longlong)puVar71)));
            puVar86 = (ulonglong *)((longlong)puVar85 + ((longlong)local_c8 - (longlong)puVar71));
            puVar84 = local_c8;
            goto LAB_14f3a89ef;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3a8b52;
          pcVar82 = "OODLE ERROR : corruption : b >= f\n";
        }
        iVar79 = 0x6ae;
        goto LAB_14f3a8b47;
      }
LAB_14f3a89ef:
      uVar83 = *puVar84;
      puVar87 = (uchar *)((longlong)puVar84 + 7);
      puVar85 = (uchar *)((longlong)puVar86 + -7);
      puVar84 = (ulonglong *)((ulonglong)local_958.bitc[0] + 7);
      piVar78 = (int *)((uVar83 >> 0x38 | (uVar83 & 0xff000000000000) >> 0x28 |
                         (uVar83 & 0xff0000000000) >> 0x18 | (uVar83 & 0xff00000000) >> 8 |
                         (uVar83 & 0xff000000) << 8 | (uVar83 & 0xff0000) << 0x18 |
                         (uVar83 & 0xff00) << 0x28 | uVar83 << 0x38) <<
                       ((byte)local_958.bitc[0] & 0x3f));
      piVar77 = (int *)(puVar86[-1] << ((byte)local_958.bitc[1] & 0x3f));
      local_9c8 = (ulonglong *)((ulonglong)local_958.bitc[1] + 7);
      if (1 < param_6) {
        simd_mul_s32_sub_u8(param_9,param_5,param_6,param_4);
      }
    }
    sVar68 = _UNK_1531df13e;
    sVar67 = _UNK_1531df13c;
    sVar66 = _UNK_1531df13a;
    sVar65 = _UNK_1531df138;
    sVar64 = _UNK_1531df136;
    sVar63 = _UNK_1531df134;
    sVar62 = _UNK_1531df132;
    sVar61 = ___xmm_00030003000300030003000300030003;
    puVar71 = puVar73;
    if (param_12 != '\0') {
      if (puVar87 + ((-((longlong)
                        ((ulonglong)((uint)(0x3f - (longlong)local_9c8 >> 0x3f) & 7) +
                        (0x3f - (longlong)local_9c8)) >> 3) -
                     ((longlong)
                      ((0x3f - (longlong)puVar84) +
                      (ulonglong)((uint)(0x3f - (longlong)puVar84 >> 0x3f) & 7)) >> 3)) -
                    (longlong)puVar85) != (uchar *)0x0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3a8b52;
        iVar79 = 0x6f8;
        pcVar82 = "OODLE ERROR : corruption : ptr_delta == 0\n";
        goto LAB_14f3a8b47;
      }
      if (param_13 != 0) {
        puVar71 = param_2;
        piVar77 = (int *)0x0;
        piVar78 = (int *)0x0;
        local_9c8 = (ulonglong *)0x3f;
        puVar84 = (ulonglong *)0x3f;
        puVar85 = param_2;
        puVar87 = puVar73;
      }
    }
    uVar83 = 0;
    if ((local_9a8 == 0) && (param_13 < 1)) {
      if (puVar87 + ((-((longlong)
                        ((ulonglong)((uint)(0x3f - (longlong)local_9c8 >> 0x3f) & 7) +
                        (0x3f - (longlong)local_9c8)) >> 3) -
                     ((longlong)
                      ((0x3f - (longlong)puVar84) +
                      (ulonglong)((uint)(0x3f - (longlong)puVar84 >> 0x3f) & 7)) >> 3)) -
                    (longlong)puVar85) == (uchar *)0x0) {
        pauVar1 = (undefined1 (*) [16])(param_10 + param_8);
        iVar79 = ___xmm_00000003000000030000000300000003;
        iVar43 = _UNK_150ae9804;
        iVar44 = _UNK_150ae9808;
        iVar45 = _UNK_150ae980c;
        for (; ___xmm_00000003000000030000000300000003 = iVar79, _UNK_150ae9804 = iVar43,
            _UNK_150ae9808 = iVar44, _UNK_150ae980c = iVar45,
            param_10 < (undefined1 (*) [16])(pauVar1[-2] + 4);
            param_10 = (uint *)((longlong)param_10 + 0x20)) {
          uVar75 = *(ulonglong *)param_7;
          param_7 = (uchar *)((longlong)param_7 + 8);
          auVar4._8_6_ = 0;
          auVar4._0_8_ = uVar75;
          auVar4[0xe] = (char)(uVar75 >> 0x38);
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar75;
          auVar8[0xc] = (char)(uVar75 >> 0x30);
          auVar8._13_2_ = auVar4._13_2_;
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar75;
          auVar10._12_3_ = auVar8._12_3_;
          auVar12._8_2_ = 0;
          auVar12._0_8_ = uVar75;
          auVar12[10] = (char)(uVar75 >> 0x28);
          auVar12._11_4_ = auVar10._11_4_;
          auVar14._8_2_ = 0;
          auVar14._0_8_ = uVar75;
          auVar14._10_5_ = auVar12._10_5_;
          auVar16[8] = (char)(uVar75 >> 0x20);
          auVar16._0_8_ = uVar75;
          auVar16._9_6_ = auVar14._9_6_;
          auVar22._7_8_ = 0;
          auVar22._0_7_ = auVar16._8_7_;
          Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar75 >> 0x18));
          auVar32._9_6_ = 0;
          auVar32._0_9_ = Var23;
          auVar24._1_10_ = SUB1510(auVar32 << 0x30,5);
          auVar24[0] = (char)(uVar75 >> 0x10);
          auVar33._11_4_ = 0;
          auVar33._0_11_ = auVar24;
          auVar25._1_12_ = SUB1512(auVar33 << 0x20,3);
          auVar25[0] = (char)(uVar75 >> 8);
          sVar99 = (short)Var23 + sVar64;
          uVar101 = auVar16._8_2_ + sVar65;
          auVar34._2_2_ = uVar101;
          auVar34._0_2_ = sVar99;
          auVar91._2_2_ = 0;
          auVar91._0_2_ = uVar101;
          auVar91._4_2_ = auVar12._10_2_ + sVar66;
          auVar91._6_2_ = 0;
          auVar91._8_2_ = auVar8._12_2_ + sVar67;
          auVar91._10_2_ = 0;
          auVar91._12_2_ = (auVar4._13_2_ >> 8) + sVar68;
          auVar91._14_2_ = 0;
          auVar34._4_8_ = 0;
          auVar5._12_2_ = sVar99;
          auVar5._0_12_ = auVar34 << 0x30;
          auVar26._6_8_ = 0;
          auVar26._0_6_ =
               (uint6)(CONCAT44(auVar5._10_4_,CONCAT22(auVar24._0_2_ + sVar63,sVar99)) >> 0x10);
          auVar88._6_8_ = SUB148(auVar26 << 0x40,6);
          auVar88._4_2_ = auVar25._0_2_ + sVar62;
          auVar88._2_2_ = 0;
          auVar88._0_2_ = (ushort)(byte)uVar75 + sVar61;
          auVar88._14_2_ = 0;
          *(undefined1 (*) [16])param_10 = auVar88;
          *(undefined1 (*) [16])((longlong)param_10 + 0x10) = auVar91;
          iVar79 = ___xmm_00000003000000030000000300000003;
          iVar43 = _UNK_150ae9804;
          iVar44 = _UNK_150ae9808;
          iVar45 = _UNK_150ae980c;
        }
        uVar75 = (ulonglong)((longlong)pauVar1 + (3 - (longlong)param_10)) >> 2;
        if (pauVar1 < param_10) {
          uVar75 = uVar83;
        }
        if (((uVar75 != 0) && (0xf < uVar75)) &&
           (((undefined1 (*) [16])((uVar75 - 1) + (longlong)param_7) < param_10 ||
            (*(undefined1 (*) [16])((longlong)param_10 + -0x10) + uVar75 * 4 + 0xc < param_7)))) {
          do {
            uVar80 = (uint)*(ulonglong *)param_7;
            uVar83 = uVar83 + 0x10;
            auVar18[0xc] = (char)(uVar80 >> 0x18);
            auVar18._0_12_ = ZEXT712(0);
            uVar27 = CONCAT32(auVar18._10_3_,(ushort)(byte)(uVar80 >> 0x10));
            auVar35._5_8_ = 0;
            auVar35._0_5_ = uVar27;
            *(uint *)*(undefined1 (*) [16])param_10 = (uVar80 & 0xff) + iVar79;
            *(int *)(*(undefined1 (*) [16])param_10 + 4) =
                 (int)CONCAT72(SUB137(auVar35 << 0x40,6),(ushort)(byte)(uVar80 >> 8)) + iVar43;
            *(int *)(*(undefined1 (*) [16])param_10 + 8) = (int)uVar27 + iVar44;
            *(uint *)(*(undefined1 (*) [16])param_10 + 0xc) =
                 (uint)(uint3)(auVar18._10_3_ >> 0x10) + iVar45;
            uVar80 = *(uint *)((longlong)param_7 + 4);
            auVar19[0xc] = (char)(uVar80 >> 0x18);
            auVar19._0_12_ = ZEXT712(0);
            uVar27 = CONCAT32(auVar19._10_3_,(ushort)(byte)(uVar80 >> 0x10));
            auVar36._5_8_ = 0;
            auVar36._0_5_ = uVar27;
            *(uint *)*(undefined1 (*) [16])((longlong)param_10 + 0x10) = (uVar80 & 0xff) + iVar79;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x10) + 4) =
                 (int)CONCAT72(SUB137(auVar36 << 0x40,6),(ushort)(byte)(uVar80 >> 8)) + iVar43;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x10) + 8) = (int)uVar27 + iVar44;
            *(uint *)(*(undefined1 (*) [16])((longlong)param_10 + 0x10) + 0xc) =
                 (uint)(uint3)(auVar19._10_3_ >> 0x10) + iVar45;
            uVar80 = (uint)*(ulonglong *)((longlong)param_7 + 8);
            auVar20[0xc] = (char)(uVar80 >> 0x18);
            auVar20._0_12_ = ZEXT712(0);
            uVar27 = CONCAT32(auVar20._10_3_,(ushort)(byte)(uVar80 >> 0x10));
            auVar37._5_8_ = 0;
            auVar37._0_5_ = uVar27;
            *(uint *)*(undefined1 (*) [16])((longlong)param_10 + 0x20) = (uVar80 & 0xff) + iVar79;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x20) + 4) =
                 (int)CONCAT72(SUB137(auVar37 << 0x40,6),(ushort)(byte)(uVar80 >> 8)) + iVar43;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x20) + 8) = (int)uVar27 + iVar44;
            *(uint *)(*(undefined1 (*) [16])((longlong)param_10 + 0x20) + 0xc) =
                 (uint)(uint3)(auVar20._10_3_ >> 0x10) + iVar45;
            uVar80 = *(uint *)((longlong)param_7 + 0xc);
            param_7 = (uchar *)((longlong)param_7 + 0x10);
            auVar21[0xc] = (char)(uVar80 >> 0x18);
            auVar21._0_12_ = ZEXT712(0);
            uVar27 = CONCAT32(auVar21._10_3_,(ushort)(byte)(uVar80 >> 0x10));
            auVar38._5_8_ = 0;
            auVar38._0_5_ = uVar27;
            *(uint *)*(undefined1 (*) [16])((longlong)param_10 + 0x30) = (uVar80 & 0xff) + iVar79;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x30) + 4) =
                 (int)CONCAT72(SUB137(auVar38 << 0x40,6),(ushort)(byte)(uVar80 >> 8)) + iVar43;
            *(int *)(*(undefined1 (*) [16])((longlong)param_10 + 0x30) + 8) = (int)uVar27 + iVar44;
            *(uint *)(*(undefined1 (*) [16])((longlong)param_10 + 0x30) + 0xc) =
                 (uint)(uint3)(auVar21._10_3_ >> 0x10) + iVar45;
            param_10 = (uint *)((longlong)param_10 + 0x40);
          } while (uVar83 < (uVar75 & 0xfffffffffffffff0));
        }
        for (; param_10 < pauVar1; param_10 = (uint *)(*(undefined1 (*) [16])param_10 + 4)) {
          uVar83 = *(ulonglong *)param_7;
          param_7 = (uchar *)((longlong)param_7 + 1);
          *(uint *)*(undefined1 (*) [16])param_10 = (byte)uVar83 + 3;
        }
        return 1;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3a8b52;
      iVar79 = 0x7e5;
      pcVar82 = "OODLE ERROR : corruption : ptr_delta == 0\n";
    }
    else {
      local_980.m_cur = puVar85;
      local_980.m_end = puVar71;
      local_980.m_bits = (ulong64)piVar77;
      local_980.m_inv_bitlen = (long64)local_9c8;
      local_958.offs_u8 = puVar87;
      local_958.offs_u8_end = puVar71;
      local_958.neg_offs_s32 = piVar78;
      local_958.bitp[0] = (uchar *)puVar84;
      lVar72 = newLZ_get_excesses((_rrVarBits_ *)&local_958,&local_980,local_918,local_118,local_9a8
                                 );
      sVar68 = _UNK_1531df13e;
      sVar67 = _UNK_1531df13c;
      sVar66 = _UNK_1531df13a;
      sVar65 = _UNK_1531df138;
      sVar64 = _UNK_1531df136;
      sVar63 = _UNK_1531df134;
      sVar62 = _UNK_1531df132;
      sVar61 = ___xmm_00030003000300030003000300030003;
      cVar60 = UNK_15060db2f;
      cVar59 = UNK_15060db2e;
      cVar58 = UNK_15060db2d;
      cVar57 = UNK_15060db2c;
      cVar56 = UNK_15060db2b;
      cVar55 = UNK_15060db2a;
      cVar54 = UNK_15060db29;
      cVar53 = UNK_15060db28;
      cVar52 = UNK_15060db27;
      cVar51 = UNK_15060db26;
      cVar50 = UNK_15060db25;
      cVar49 = UNK_15060db24;
      cVar48 = UNK_15060db23;
      cVar47 = UNK_15060db22;
      cVar46 = UNK_15060db21;
      bVar81 = __xmm_ffffffffffffffffffffffffffffffff;
      if (lVar72 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3a8b52;
        pcVar82 = "OODLE ERROR : corruption : invalid excess stream\n";
        iVar79 = 0x71d;
      }
      else if (param_8 < lVar72) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3a8b52;
        pcVar82 = "OODLE ERROR : corruption : excess_u32_count > excesses_count\n";
        iVar79 = 0x724;
      }
      else {
        pauVar1 = (undefined1 (*) [16])(param_10 + param_8);
        puVar2 = local_918 + lVar72;
        puVar76 = local_918;
        for (; param_10 < (undefined1 (*) [16])(pauVar1[-2] + 4);
            param_10 = (uint *)((longlong)param_10 + 0x20)) {
          uVar83 = *(ulonglong *)param_7;
          cVar100 = (char)(uVar83 >> 0x38);
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar83;
          auVar6[0xe] = cVar100;
          cVar98 = (char)(uVar83 >> 0x30);
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar83;
          auVar9[0xc] = cVar98;
          auVar9._13_2_ = auVar6._13_2_;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar83;
          auVar11._12_3_ = auVar9._12_3_;
          cVar97 = (char)(uVar83 >> 0x28);
          auVar13._8_2_ = 0;
          auVar13._0_8_ = uVar83;
          auVar13[10] = cVar97;
          auVar13._11_4_ = auVar11._11_4_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar83;
          auVar15._10_5_ = auVar13._10_5_;
          cVar96 = (char)(uVar83 >> 0x20);
          auVar17[8] = cVar96;
          auVar17._0_8_ = uVar83;
          auVar17._9_6_ = auVar15._9_6_;
          auVar28._7_8_ = 0;
          auVar28._0_7_ = auVar17._8_7_;
          cVar95 = (char)(uVar83 >> 0x18);
          Var23 = CONCAT81(SUB158(auVar28 << 0x40,7),cVar95);
          auVar39._9_6_ = 0;
          auVar39._0_9_ = Var23;
          cVar94 = (char)(uVar83 >> 0x10);
          auVar29._1_10_ = SUB1510(auVar39 << 0x30,5);
          auVar29[0] = cVar94;
          auVar40._11_4_ = 0;
          auVar40._0_11_ = auVar29;
          cVar93 = (char)(uVar83 >> 8);
          auVar30._1_12_ = SUB1512(auVar40 << 0x20,3);
          auVar30[0] = cVar93;
          auVar89[0] = -((byte)uVar83 == bVar81);
          auVar89[1] = -(cVar93 == cVar46);
          auVar89[2] = -(cVar94 == cVar47);
          auVar89[3] = -(cVar95 == cVar48);
          auVar89[4] = -(cVar96 == cVar49);
          auVar89[5] = -(cVar97 == cVar50);
          auVar89[6] = -(cVar98 == cVar51);
          auVar89[7] = -(cVar100 == cVar52);
          auVar89[8] = -(cVar53 == '\0');
          auVar89[9] = -(cVar54 == '\0');
          auVar89[10] = -(cVar55 == '\0');
          auVar89[0xb] = -(cVar56 == '\0');
          auVar89[0xc] = -(cVar57 == '\0');
          auVar89[0xd] = -(cVar58 == '\0');
          auVar89[0xe] = -(cVar59 == '\0');
          auVar89[0xf] = -(cVar60 == '\0');
          sVar99 = (short)Var23 + sVar64;
          uVar102 = auVar17._8_2_ + sVar65;
          auVar41._2_2_ = uVar102;
          auVar41._0_2_ = sVar99;
          uVar101 = (ushort)(SUB161(auVar89 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar89[0xf] >> 7) << 0xf;
          uVar80 = (uint)uVar101;
          auVar41._4_8_ = 0;
          auVar7._12_2_ = sVar99;
          auVar7._0_12_ = auVar41 << 0x30;
          auVar31._6_8_ = 0;
          auVar31._0_6_ =
               (uint6)(CONCAT44(auVar7._10_4_,CONCAT22(auVar29._0_2_ + sVar63,sVar99)) >> 0x10);
          auVar90._6_8_ = SUB148(auVar31 << 0x40,6);
          auVar90._4_2_ = auVar30._0_2_ + sVar62;
          auVar90._2_2_ = 0;
          auVar90._0_2_ = (ushort)(byte)uVar83 + sVar61;
          auVar90._14_2_ = 0;
          auVar92._2_2_ = 0;
          auVar92._0_2_ = uVar102;
          auVar92._4_2_ = auVar13._10_2_ + sVar66;
          auVar92._6_2_ = 0;
          auVar92._8_2_ = auVar9._12_2_ + sVar67;
          auVar92._10_2_ = 0;
          auVar92._12_2_ = (auVar6._13_2_ >> 8) + sVar68;
          auVar92._14_2_ = 0;
          *(undefined1 (*) [16])param_10 = auVar90;
          *(undefined1 (*) [16])((longlong)param_10 + 0x10) = auVar92;
          if (uVar101 != 0) {
            do {
              uVar3 = *puVar76;
              puVar76 = puVar76 + 1;
              iVar79 = 0;
              if (uVar80 != 0) {
                for (; (uVar80 >> iVar79 & 1) == 0; iVar79 = iVar79 + 1) {
                }
              }
              *(uint *)(*(undefined1 (*) [16])param_10 + (longlong)iVar79 * 4) = uVar3 + 0x102;
              uVar80 = uVar80 & uVar80 - 1;
            } while (uVar80 != 0);
            if (puVar2 < puVar76) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3a8b52;
              pcVar82 = "OODLE ERROR : corruption : excesses_u32_ptr <= excesses_u32_end\n";
              iVar79 = 0x761;
              goto LAB_14f3a8b47;
            }
          }
          param_7 = (uchar *)((longlong)param_7 + 8);
        }
        for (; param_10 < pauVar1; param_10 = (uint *)(*(undefined1 (*) [16])param_10 + 4)) {
          uVar83 = *(ulonglong *)param_7;
          uVar80 = (uint)(byte)uVar83;
          param_7 = (uchar *)((longlong)param_7 + 1);
          if ((byte)uVar83 == 0xff) {
            if (puVar2 <= puVar76) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3a8b52;
              pcVar82 = "OODLE ERROR : corruption : excesses_u32_ptr < excesses_u32_end\n";
              iVar79 = 2000;
              goto LAB_14f3a8b47;
            }
            uVar80 = *puVar76;
            puVar76 = puVar76 + 1;
            uVar80 = uVar80 + 0xff;
          }
          *(uint *)*(undefined1 (*) [16])param_10 = uVar80 + 3;
        }
        if (puVar76 == puVar2) {
          return 1;
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3a8b52;
        pcVar82 = "OODLE ERROR : corruption : excesses_u32_ptr == excesses_u32_end\n";
        iVar79 = 0x7d7;
      }
    }
  }
LAB_14f3a8b47:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",iVar79,pcVar82);
LAB_14f3a8b52:
  ooLogErrorPost();
  return -1;
}

// newLZ_offset44_decode64_tab @ 14f3a8f80

bool __cdecl oo2::newLZ_offset44_decode64_tab(KrakenOffsetState *param_1)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  sbyte sVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  
  puVar1 = param_1->offs_u8_end;
  puVar13 = (ulonglong *)param_1->offs_u8;
  if (7 < (longlong)puVar1 - (longlong)puVar13) {
    puVar20 = (ulonglong *)param_1->bitp[0];
    if (7 < (longlong)param_1->bitp[1] - (longlong)puVar20) {
      piVar14 = param_1->neg_offs_s32;
      uVar11 = param_1->bitc[0];
      puVar19 = (ulonglong *)(param_1->bitp[1] + -8);
      uVar7 = param_1->bitc[1];
      for (; uVar17 = uVar11, puVar13 < puVar1 + -7;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar10)) {
        uVar17 = uVar11 & 7;
        puVar20 = (ulonglong *)((longlong)puVar20 + (ulonglong)(uVar11 >> 3));
        uVar11 = uVar7 >> 3;
        uVar7 = uVar7 & 7;
        puVar19 = (ulonglong *)((longlong)puVar19 - (ulonglong)uVar11);
        if (puVar19 < puVar20) break;
        uVar2 = *puVar13;
        uVar15 = *puVar20;
        uVar3 = *puVar19;
        uVar15 = uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                 (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                 (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                 (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
        if ((-uVar2 - 0x101010101011 & uVar2 & 0x808080808080) == 0) {
          uVar11 = (int)((uVar2 & 0xff) >> 4) + 4;
          iVar18 = uVar17 + uVar11;
          sVar9 = (sbyte)iVar18;
          *piVar14 = newlz_offsets44_bias_tab[uVar2 & 0xff] +
                     (((uint)(uVar15 << sVar9) | (uint)(uVar15 >> 0x40 - sVar9)) & masks[uVar11]) *
                     -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 1) >> 4) + 4;
          iVar8 = uVar7 + uVar11;
          sVar9 = (sbyte)iVar8;
          piVar14[1] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 1)] +
                       (((uint)(uVar3 << sVar9) | (uint)(uVar3 >> 0x40 - sVar9)) & masks[uVar11]) *
                       -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 2) >> 4) + 4;
          iVar18 = iVar18 + uVar11;
          bVar4 = (byte)iVar18 & 0x3f;
          piVar14[2] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 2)] +
                       (((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) & masks[uVar11])
                       * -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 3) >> 4) + 4;
          iVar8 = iVar8 + uVar11;
          bVar4 = (byte)iVar8 & 0x3f;
          piVar14[3] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 3)] +
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar11]) *
                       -0x10;
          uVar7 = (*(byte *)((longlong)puVar13 + 4) >> 4) + 4;
          uVar11 = iVar18 + uVar7;
          bVar4 = (byte)uVar11 & 0x3f;
          piVar14[4] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 4)] +
                       (((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) & masks[uVar7]) *
                       -0x10;
          uVar17 = (*(byte *)((longlong)puVar13 + 5) >> 4) + 4;
          uVar7 = iVar8 + uVar17;
          bVar4 = (byte)uVar7 & 0x3f;
          iVar8 = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 5)] +
                  (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar17]) * -0x10
          ;
LAB_14f3a9370:
          lVar10 = 6;
          piVar14[5] = iVar8;
          lVar12 = 0x18;
        }
        else {
          if ((-uVar2 - 0x20202020203 & uVar2 & 0x808080808080) != 0) {
            return false;
          }
          uVar11 = uVar17 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                            [uVar2 & 0xff];
          bVar4 = (byte)uVar11 & 0x3f;
          uVar16 = ((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) &
                   masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                               [uVar2 & 0xff]];
          uVar17 = uVar16 << 4;
          if (0xef < (byte)uVar2) {
            uVar17 = uVar16;
          }
          *piVar14 = newlz_offsets44_bias_tab[uVar2 & 0xff] - uVar17;
          bVar4 = *(byte *)((longlong)puVar13 + 1);
          uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                          [bVar4];
          bVar5 = (byte)uVar7 & 0x3f;
          uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                   masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                               [bVar4]];
          uVar17 = uVar16 << 4;
          if (0xef < bVar4) {
            uVar17 = uVar16;
          }
          piVar14[1] = newlz_offsets44_bias_tab[bVar4] - uVar17;
          if ((uVar11 < 0x22) && (uVar7 < 0x22)) {
            bVar4 = *(byte *)((longlong)puVar13 + 2);
            uVar11 = uVar11 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                              [bVar4];
            bVar5 = (byte)uVar11 & 0x3f;
            uVar16 = ((uint)(uVar15 << bVar5) | (uint)(uVar15 >> 0x40 - bVar5)) &
                     masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                 [bVar4]];
            uVar17 = uVar16 << 4;
            if (0xef < bVar4) {
              uVar17 = uVar16;
            }
            piVar14[2] = newlz_offsets44_bias_tab[bVar4] - uVar17;
            bVar4 = *(byte *)((longlong)puVar13 + 3);
            uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                            [bVar4];
            bVar5 = (byte)uVar7 & 0x3f;
            uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                     masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                 [bVar4]];
            uVar17 = uVar16 << 4;
            if (0xef < bVar4) {
              uVar17 = uVar16;
            }
            piVar14[3] = newlz_offsets44_bias_tab[bVar4] - uVar17;
            if ((uVar11 < 0x22) && (uVar7 < 0x22)) {
              bVar4 = *(byte *)((longlong)puVar13 + 4);
              uVar11 = uVar11 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                [bVar4];
              bVar5 = (byte)uVar11 & 0x3f;
              uVar16 = ((uint)(uVar15 << bVar5) | (uint)(uVar15 >> 0x40 - bVar5)) &
                       masks["\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                             [bVar4]];
              uVar17 = uVar16 << 4;
              if (0xef < bVar4) {
                uVar17 = uVar16;
              }
              piVar14[4] = newlz_offsets44_bias_tab[bVar4] - uVar17;
              bVar4 = *(byte *)((longlong)puVar13 + 5);
              uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                              [bVar4];
              bVar5 = (byte)uVar7 & 0x3f;
              uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                       masks["\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                             [bVar4]];
              uVar17 = uVar16 << 4;
              if (0xef < bVar4) {
                uVar17 = uVar16;
              }
              iVar8 = newlz_offsets44_bias_tab[bVar4] - uVar17;
              goto LAB_14f3a9370;
            }
            lVar10 = 4;
            lVar12 = 0x10;
          }
          else {
            lVar10 = 2;
            lVar12 = 8;
          }
        }
        piVar14 = (int *)((longlong)piVar14 + lVar12);
      }
      param_1->offs_u8 = (uchar *)puVar13;
      param_1->bitp[0] = (uchar *)((ulonglong)(uVar17 >> 3) + (longlong)puVar20);
      param_1->neg_offs_s32 = piVar14;
      param_1->bitc[0] = uVar17 & 7;
      param_1->bitp[1] = (uchar *)((longlong)puVar19 + (8 - (ulonglong)(uVar7 >> 3)));
      param_1->bitc[1] = uVar7 & 7;
    }
  }
  bVar6 = newLZ_offset44_decode_finish(param_1);
  return bVar6;
}

// newLZ_offset44_decode_arm64 @ 14f3a9430

bool __cdecl oo2::newLZ_offset44_decode_arm64(KrakenOffsetState *param_1)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  sbyte sVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  
  puVar1 = param_1->offs_u8_end;
  puVar13 = (ulonglong *)param_1->offs_u8;
  if (7 < (longlong)puVar1 - (longlong)puVar13) {
    puVar20 = (ulonglong *)param_1->bitp[0];
    if (7 < (longlong)param_1->bitp[1] - (longlong)puVar20) {
      piVar14 = param_1->neg_offs_s32;
      uVar11 = param_1->bitc[0];
      puVar19 = (ulonglong *)(param_1->bitp[1] + -8);
      uVar7 = param_1->bitc[1];
      for (; uVar17 = uVar11, puVar13 < puVar1 + -7;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar10)) {
        uVar17 = uVar11 & 7;
        puVar20 = (ulonglong *)((longlong)puVar20 + (ulonglong)(uVar11 >> 3));
        uVar11 = uVar7 >> 3;
        uVar7 = uVar7 & 7;
        puVar19 = (ulonglong *)((longlong)puVar19 - (ulonglong)uVar11);
        if (puVar19 < puVar20) break;
        uVar2 = *puVar13;
        uVar15 = *puVar20;
        uVar3 = *puVar19;
        uVar15 = uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                 (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                 (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                 (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
        if ((-uVar2 - 0x101010101011 & uVar2 & 0x808080808080) == 0) {
          uVar11 = (int)((uVar2 & 0xff) >> 4) + 4;
          iVar18 = uVar17 + uVar11;
          sVar9 = (sbyte)iVar18;
          *piVar14 = newlz_offsets44_bias_tab[uVar2 & 0xff] +
                     (((uint)(uVar15 << sVar9) | (uint)(uVar15 >> 0x40 - sVar9)) & masks[uVar11]) *
                     -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 1) >> 4) + 4;
          iVar8 = uVar7 + uVar11;
          sVar9 = (sbyte)iVar8;
          piVar14[1] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 1)] +
                       (((uint)(uVar3 << sVar9) | (uint)(uVar3 >> 0x40 - sVar9)) & masks[uVar11]) *
                       -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 2) >> 4) + 4;
          iVar18 = iVar18 + uVar11;
          bVar4 = (byte)iVar18 & 0x3f;
          piVar14[2] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 2)] +
                       (((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) & masks[uVar11])
                       * -0x10;
          uVar11 = (*(byte *)((longlong)puVar13 + 3) >> 4) + 4;
          iVar8 = iVar8 + uVar11;
          bVar4 = (byte)iVar8 & 0x3f;
          piVar14[3] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 3)] +
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar11]) *
                       -0x10;
          uVar7 = (*(byte *)((longlong)puVar13 + 4) >> 4) + 4;
          uVar11 = iVar18 + uVar7;
          bVar4 = (byte)uVar11 & 0x3f;
          piVar14[4] = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 4)] +
                       (((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) & masks[uVar7]) *
                       -0x10;
          uVar17 = (*(byte *)((longlong)puVar13 + 5) >> 4) + 4;
          uVar7 = iVar8 + uVar17;
          bVar4 = (byte)uVar7 & 0x3f;
          iVar8 = newlz_offsets44_bias_tab[*(byte *)((longlong)puVar13 + 5)] +
                  (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar17]) * -0x10
          ;
LAB_14f3a9370:
          lVar10 = 6;
          piVar14[5] = iVar8;
          lVar12 = 0x18;
        }
        else {
          if ((-uVar2 - 0x20202020203 & uVar2 & 0x808080808080) != 0) {
            return false;
          }
          uVar11 = uVar17 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                            [uVar2 & 0xff];
          bVar4 = (byte)uVar11 & 0x3f;
          uVar16 = ((uint)(uVar15 << bVar4) | (uint)(uVar15 >> 0x40 - bVar4)) &
                   masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                               [uVar2 & 0xff]];
          uVar17 = uVar16 << 4;
          if (0xef < (byte)uVar2) {
            uVar17 = uVar16;
          }
          *piVar14 = newlz_offsets44_bias_tab[uVar2 & 0xff] - uVar17;
          bVar4 = *(byte *)((longlong)puVar13 + 1);
          uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                          [bVar4];
          bVar5 = (byte)uVar7 & 0x3f;
          uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                   masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                               [bVar4]];
          uVar17 = uVar16 << 4;
          if (0xef < bVar4) {
            uVar17 = uVar16;
          }
          piVar14[1] = newlz_offsets44_bias_tab[bVar4] - uVar17;
          if ((uVar11 < 0x22) && (uVar7 < 0x22)) {
            bVar4 = *(byte *)((longlong)puVar13 + 2);
            uVar11 = uVar11 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                              [bVar4];
            bVar5 = (byte)uVar11 & 0x3f;
            uVar16 = ((uint)(uVar15 << bVar5) | (uint)(uVar15 >> 0x40 - bVar5)) &
                     masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                 [bVar4]];
            uVar17 = uVar16 << 4;
            if (0xef < bVar4) {
              uVar17 = uVar16;
            }
            piVar14[2] = newlz_offsets44_bias_tab[bVar4] - uVar17;
            bVar4 = *(byte *)((longlong)puVar13 + 3);
            uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                            [bVar4];
            bVar5 = (byte)uVar7 & 0x3f;
            uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                     masks[(uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                 [bVar4]];
            uVar17 = uVar16 << 4;
            if (0xef < bVar4) {
              uVar17 = uVar16;
            }
            piVar14[3] = newlz_offsets44_bias_tab[bVar4] - uVar17;
            if ((uVar11 < 0x22) && (uVar7 < 0x22)) {
              bVar4 = *(byte *)((longlong)puVar13 + 4);
              uVar11 = uVar11 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                                [bVar4];
              bVar5 = (byte)uVar11 & 0x3f;
              uVar16 = ((uint)(uVar15 << bVar5) | (uint)(uVar15 >> 0x40 - bVar5)) &
                       masks["\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                             [bVar4]];
              uVar17 = uVar16 << 4;
              if (0xef < bVar4) {
                uVar17 = uVar16;
              }
              piVar14[4] = newlz_offsets44_bias_tab[bVar4] - uVar17;
              bVar4 = *(byte *)((longlong)puVar13 + 5);
              uVar7 = uVar7 + "\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                              [bVar4];
              bVar5 = (byte)uVar7 & 0x3f;
              uVar16 = ((uint)(uVar3 << bVar5) | (uint)(uVar3 >> 0x40 - bVar5)) &
                       masks["\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x04\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x05\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\v\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x10\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x12\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d"
                             [bVar4]];
              uVar17 = uVar16 << 4;
              if (0xef < bVar4) {
                uVar17 = uVar16;
              }
              iVar8 = newlz_offsets44_bias_tab[bVar4] - uVar17;
              goto LAB_14f3a9370;
            }
            lVar10 = 4;
            lVar12 = 0x10;
          }
          else {
            lVar10 = 2;
            lVar12 = 8;
          }
        }
        piVar14 = (int *)((longlong)piVar14 + lVar12);
      }
      param_1->offs_u8 = (uchar *)puVar13;
      param_1->bitp[0] = (uchar *)((ulonglong)(uVar17 >> 3) + (longlong)puVar20);
      param_1->neg_offs_s32 = piVar14;
      param_1->bitc[0] = uVar17 & 7;
      param_1->bitp[1] = (uchar *)((longlong)puVar19 + (8 - (ulonglong)(uVar7 >> 3)));
      param_1->bitc[1] = uVar7 & 7;
    }
  }
  bVar6 = newLZ_offset44_decode_finish(param_1);
  return bVar6;
}

// newLZ_offset44_decode_finish @ 14f3a9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl oo2::newLZ_offset44_decode_finish(KrakenOffsetState *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong *_Src;
  size_t _Size;
  ulonglong *puVar11;
  ulonglong *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  byte *local_50;
  ulonglong local_48 [2];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_78;
  _Src = (ulonglong *)param_1->bitp[0];
  puVar12 = (ulonglong *)0x0;
  puVar11 = (ulonglong *)param_1->bitp[1];
  local_50 = param_1->offs_u8_end;
  pbVar8 = param_1->offs_u8;
  piVar14 = param_1->neg_offs_s32;
  uVar5 = param_1->bitc[0];
  uVar10 = param_1->bitc[1];
  local_58 = (ulonglong *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  if (_Src <= puVar11) {
    puVar7 = puVar12;
    if (pbVar8 != local_50) {
      do {
        _Size = (longlong)puVar11 - (longlong)_Src;
        if ((longlong)_Size < 8) {
          if (puVar12 != (ulonglong *)0x0) {
            return false;
          }
          local_58 = _Src;
          memcpy(local_48,_Src,_Size);
          memcpy((void *)((longlong)local_38 - _Size),_Src,_Size);
          _Src = local_48;
          puVar12 = (ulonglong *)(0x10 - _Size);
          puVar11 = local_38;
        }
        bVar1 = *pbVar8;
        pbVar9 = pbVar8 + 1;
        uVar3 = *_Src;
        uVar2 = puVar11[-1];
        uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
        if (bVar1 < 0xf0) {
          uVar6 = (bVar1 >> 4) + 4;
          uVar13 = uVar5 + uVar6;
          iVar4 = ((bVar1 & 0xf) - 0xe8) +
                  ((uint)(uVar3 >> (0x40U - (char)uVar13 & 0x3f)) & masks[uVar6]) * 0x10 +
                  masks[uVar6] * 0x10;
        }
        else {
          uVar6 = bVar1 - 0xe0;
          if (0x1d < uVar6) {
            return false;
          }
          uVar13 = uVar5 + uVar6;
          iVar4 = masks[uVar6] + 0x7eff01 +
                  ((uint)(uVar3 >> (0x40U - (char)uVar13 & 0x3f)) & masks[uVar6]);
          if (0x3fffffff < iVar4) {
            return false;
          }
        }
        *piVar14 = -iVar4;
        piVar15 = piVar14 + 1;
        if (pbVar9 != local_50) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar8 + 2;
          if (bVar1 < 0xf0) {
            uVar5 = (bVar1 >> 4) + 4;
            uVar10 = uVar10 + uVar5;
            iVar4 = ((bVar1 & 0xf) - 0xe8) +
                    ((uint)(uVar2 >> (0x40U - (char)uVar10 & 0x3f)) & masks[uVar5]) * 0x10 +
                    masks[uVar5] * 0x10;
          }
          else {
            uVar5 = bVar1 - 0xe0;
            if (0x1d < uVar5) {
              return false;
            }
            uVar10 = uVar10 + uVar5;
            iVar4 = masks[uVar5] + 0x7eff01 +
                    ((uint)(uVar2 >> (0x40U - (char)uVar10 & 0x3f)) & masks[uVar5]);
            if (0x3fffffff < iVar4) {
              return false;
            }
          }
          *piVar15 = -iVar4;
          piVar15 = piVar14 + 2;
        }
        uVar5 = uVar13 & 7;
        _Src = (ulonglong *)((longlong)_Src + (ulonglong)(uVar13 >> 3));
        uVar6 = uVar10 >> 3;
        uVar10 = uVar10 & 7;
        puVar11 = (ulonglong *)((longlong)puVar11 - (ulonglong)uVar6);
        puVar7 = local_58;
        pbVar8 = pbVar9;
        piVar14 = piVar15;
      } while (pbVar9 != local_50);
    }
    if ((longlong)puVar12 <=
        (longlong)
        ((longlong)puVar11 +
        ((-(ulonglong)(uVar5 != 0) - (ulonglong)(uVar10 != 0)) - (longlong)_Src))) {
      if (puVar12 != (ulonglong *)0x0) {
        puVar11 = (ulonglong *)
                  ((longlong)puVar7 + (-(longlong)local_48 - (longlong)puVar12) + (longlong)puVar11)
        ;
        _Src = (ulonglong *)(((longlong)puVar7 - (longlong)local_48) + (longlong)_Src);
      }
      param_1->bitp[0] = (uchar *)_Src;
      param_1->bitp[1] = (uchar *)puVar11;
      param_1->bitc[0] = uVar5;
      param_1->bitc[1] = uVar10;
      return true;
    }
  }
  return false;
}

// newLZ_offset44_pack_high_rawbits @ 14f3a9710

uint __cdecl oo2::newLZ_offset44_pack_high_rawbits(uint param_1,uint param_2)

{
  return (param_1 - (1 << ((byte)param_2 & 0x1f))) - 0x7eff00;
}

// newLZ_offset44_pack_low_rawbits @ 14f3a9730

uint __cdecl oo2::newLZ_offset44_pack_low_rawbits(uint param_1,uint param_2)

{
  return (param_1 + 0xf8 >> 4) - (1 << ((byte)param_2 & 0x1f));
}

// newLZ_offset44_unpack_high_numrawbits @ 14f3a9750

uint __cdecl oo2::newLZ_offset44_unpack_high_numrawbits(uchar param_1)

{
  return param_1 - 0xe0;
}

// newLZ_offset44_unpack_low_numrawbits @ 14f3a9760

uint __cdecl oo2::newLZ_offset44_unpack_low_numrawbits(uchar param_1)

{
  return (param_1 >> 4) + 4;
}

// newLZ_offset44_unpack_numrawbits @ 14f3a9770

uint __cdecl oo2::newLZ_offset44_unpack_numrawbits(uchar param_1)

{
  if (param_1 < 0xf0) {
    return (param_1 >> 4) + 4;
  }
  return param_1 - 0xe0;
}

// newLZ_offsetalt_decode64_tab @ 14f3a97a0

bool __cdecl oo2::newLZ_offsetalt_decode64_tab(KrakenOffsetState *param_1)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  sbyte sVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  
  puVar1 = param_1->offs_u8_end;
  puVar19 = (ulonglong *)param_1->offs_u8;
  if (7 < (longlong)puVar1 - (longlong)puVar19) {
    puVar14 = (ulonglong *)param_1->bitp[0];
    if (7 < (longlong)param_1->bitp[1] - (longlong)puVar14) {
      piVar15 = param_1->neg_offs_s32;
      uVar18 = param_1->bitc[0];
      puVar20 = (ulonglong *)(param_1->bitp[1] + -8);
      uVar8 = param_1->bitc[1];
      for (; uVar16 = uVar18, puVar19 < puVar1 + -7;
          puVar19 = (ulonglong *)((longlong)puVar19 + lVar11)) {
        uVar16 = uVar18 & 7;
        puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(uVar18 >> 3));
        uVar18 = uVar8 >> 3;
        uVar8 = uVar8 & 7;
        puVar20 = (ulonglong *)((longlong)puVar20 - (ulonglong)uVar18);
        if (puVar20 < puVar14) break;
        uVar2 = *puVar19;
        uVar13 = *puVar14;
        uVar3 = *puVar20;
        uVar13 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                 (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                 (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                 (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        if ((-uVar2 - 0x686868686869 & uVar2 & 0x808080808080) == 0) {
          uVar5 = (uVar2 & 0xff) >> 3;
          iVar17 = uVar16 + (int)uVar5;
          sVar10 = (sbyte)iVar17;
          *piVar15 = newlz_offsetsalt_bias_tab[uVar2 & 0xff] -
                     (((uint)(uVar13 << sVar10) | (uint)(uVar13 >> 0x40 - sVar10)) & masks[uVar5]);
          uVar5 = (uVar2 >> 8 & 0xff) >> 3;
          iVar9 = uVar8 + (int)uVar5;
          sVar10 = (sbyte)iVar9;
          piVar15[1] = newlz_offsetsalt_bias_tab[uVar2 >> 8 & 0xff] -
                       (((uint)(uVar3 << sVar10) | (uint)(uVar3 >> 0x40 - sVar10)) & masks[uVar5]);
          uVar5 = (uVar2 >> 0x10 & 0xff) >> 3;
          uVar18 = iVar17 + (int)uVar5;
          bVar4 = (byte)uVar18 & 0x3f;
          piVar15[2] = newlz_offsetsalt_bias_tab[uVar2 >> 0x10 & 0xff] -
                       (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5]);
          uVar5 = (uVar2 >> 0x18 & 0xff) >> 3;
          uVar8 = iVar9 + (int)uVar5;
          bVar4 = (byte)uVar8 & 0x3f;
          piVar15[3] = newlz_offsetsalt_bias_tab[uVar2 >> 0x18 & 0xff] -
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar5]);
LAB_14f3a9a85:
          uVar5 = (uVar2 >> 0x20 & 0xff) >> 3;
          uVar18 = uVar18 + (int)uVar5;
          bVar4 = (byte)uVar18 & 0x3f;
          uVar6 = (uVar2 >> 0x28 & 0xff) >> 3;
          uVar8 = uVar8 + (int)uVar6;
          piVar15[4] = newlz_offsetsalt_bias_tab[uVar2 >> 0x20 & 0xff] -
                       (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5]);
          bVar4 = (byte)uVar8 & 0x3f;
          lVar11 = 6;
          piVar15[5] = newlz_offsetsalt_bias_tab[uVar2 >> 0x28 & 0xff] -
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar6]);
          lVar12 = 0x18;
        }
        else {
          if ((-uVar2 - 0x282828282829 & uVar2 & 0x808080808080) != 0) {
            return false;
          }
          uVar5 = (uVar2 & 0xff) >> 3;
          uVar18 = uVar16 + (int)uVar5;
          *piVar15 = newlz_offsetsalt_bias_tab[uVar2 & 0xff] -
                     (((uint)(uVar13 << (sbyte)uVar18) | (uint)(uVar13 >> 0x40 - (sbyte)uVar18)) &
                     masks[uVar5]);
          uVar5 = (uVar2 >> 8 & 0xff) >> 3;
          uVar8 = uVar8 + (int)uVar5;
          piVar15[1] = newlz_offsetsalt_bias_tab[uVar2 >> 8 & 0xff] -
                       (((uint)(uVar3 << (sbyte)uVar8) | (uint)(uVar3 >> 0x40 - (sbyte)uVar8)) &
                       masks[uVar5]);
          if ((uVar18 < 0x26) && (uVar8 < 0x26)) {
            uVar5 = (uVar2 >> 0x10 & 0xff) >> 3;
            uVar18 = uVar18 + (int)uVar5;
            bVar4 = (byte)uVar18 & 0x3f;
            piVar15[2] = newlz_offsetsalt_bias_tab[uVar2 >> 0x10 & 0xff] -
                         (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5])
            ;
            uVar5 = (uVar2 >> 0x18 & 0xff) >> 3;
            uVar8 = uVar8 + (int)uVar5;
            bVar4 = (byte)uVar8 & 0x3f;
            piVar15[3] = newlz_offsetsalt_bias_tab[uVar2 >> 0x18 & 0xff] -
                         (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar5]);
            if ((uVar18 < 0x26) && (uVar8 < 0x26)) goto LAB_14f3a9a85;
            lVar11 = 4;
            lVar12 = 0x10;
          }
          else {
            lVar11 = 2;
            lVar12 = 8;
          }
        }
        piVar15 = (int *)((longlong)piVar15 + lVar12);
      }
      param_1->offs_u8 = (uchar *)puVar19;
      param_1->bitp[0] = (uchar *)((ulonglong)(uVar16 >> 3) + (longlong)puVar14);
      param_1->neg_offs_s32 = piVar15;
      param_1->bitc[0] = uVar16 & 7;
      param_1->bitp[1] = (uchar *)((longlong)puVar20 + (8 - (ulonglong)(uVar8 >> 3)));
      param_1->bitc[1] = uVar8 & 7;
    }
  }
  bVar7 = newLZ_offsetalt_decode_finish(param_1);
  return bVar7;
}

// newLZ_offsetalt_decode_arm64 @ 14f3a9ba0

bool __cdecl oo2::newLZ_offsetalt_decode_arm64(KrakenOffsetState *param_1)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  sbyte sVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  
  puVar1 = param_1->offs_u8_end;
  puVar19 = (ulonglong *)param_1->offs_u8;
  if (7 < (longlong)puVar1 - (longlong)puVar19) {
    puVar14 = (ulonglong *)param_1->bitp[0];
    if (7 < (longlong)param_1->bitp[1] - (longlong)puVar14) {
      piVar15 = param_1->neg_offs_s32;
      uVar18 = param_1->bitc[0];
      puVar20 = (ulonglong *)(param_1->bitp[1] + -8);
      uVar8 = param_1->bitc[1];
      for (; uVar16 = uVar18, puVar19 < puVar1 + -7;
          puVar19 = (ulonglong *)((longlong)puVar19 + lVar11)) {
        uVar16 = uVar18 & 7;
        puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(uVar18 >> 3));
        uVar18 = uVar8 >> 3;
        uVar8 = uVar8 & 7;
        puVar20 = (ulonglong *)((longlong)puVar20 - (ulonglong)uVar18);
        if (puVar20 < puVar14) break;
        uVar2 = *puVar19;
        uVar13 = *puVar14;
        uVar3 = *puVar20;
        uVar13 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                 (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                 (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                 (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        if ((-uVar2 - 0x686868686869 & uVar2 & 0x808080808080) == 0) {
          uVar5 = (uVar2 & 0xff) >> 3;
          iVar17 = uVar16 + (int)uVar5;
          sVar10 = (sbyte)iVar17;
          *piVar15 = newlz_offsetsalt_bias_tab[uVar2 & 0xff] -
                     (((uint)(uVar13 << sVar10) | (uint)(uVar13 >> 0x40 - sVar10)) & masks[uVar5]);
          uVar5 = (uVar2 >> 8 & 0xff) >> 3;
          iVar9 = uVar8 + (int)uVar5;
          sVar10 = (sbyte)iVar9;
          piVar15[1] = newlz_offsetsalt_bias_tab[uVar2 >> 8 & 0xff] -
                       (((uint)(uVar3 << sVar10) | (uint)(uVar3 >> 0x40 - sVar10)) & masks[uVar5]);
          uVar5 = (uVar2 >> 0x10 & 0xff) >> 3;
          uVar18 = iVar17 + (int)uVar5;
          bVar4 = (byte)uVar18 & 0x3f;
          piVar15[2] = newlz_offsetsalt_bias_tab[uVar2 >> 0x10 & 0xff] -
                       (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5]);
          uVar5 = (uVar2 >> 0x18 & 0xff) >> 3;
          uVar8 = iVar9 + (int)uVar5;
          bVar4 = (byte)uVar8 & 0x3f;
          piVar15[3] = newlz_offsetsalt_bias_tab[uVar2 >> 0x18 & 0xff] -
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar5]);
LAB_14f3a9a85:
          uVar5 = (uVar2 >> 0x20 & 0xff) >> 3;
          uVar18 = uVar18 + (int)uVar5;
          bVar4 = (byte)uVar18 & 0x3f;
          uVar6 = (uVar2 >> 0x28 & 0xff) >> 3;
          uVar8 = uVar8 + (int)uVar6;
          piVar15[4] = newlz_offsetsalt_bias_tab[uVar2 >> 0x20 & 0xff] -
                       (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5]);
          bVar4 = (byte)uVar8 & 0x3f;
          lVar11 = 6;
          piVar15[5] = newlz_offsetsalt_bias_tab[uVar2 >> 0x28 & 0xff] -
                       (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar6]);
          lVar12 = 0x18;
        }
        else {
          if ((-uVar2 - 0x282828282829 & uVar2 & 0x808080808080) != 0) {
            return false;
          }
          uVar5 = (uVar2 & 0xff) >> 3;
          uVar18 = uVar16 + (int)uVar5;
          *piVar15 = newlz_offsetsalt_bias_tab[uVar2 & 0xff] -
                     (((uint)(uVar13 << (sbyte)uVar18) | (uint)(uVar13 >> 0x40 - (sbyte)uVar18)) &
                     masks[uVar5]);
          uVar5 = (uVar2 >> 8 & 0xff) >> 3;
          uVar8 = uVar8 + (int)uVar5;
          piVar15[1] = newlz_offsetsalt_bias_tab[uVar2 >> 8 & 0xff] -
                       (((uint)(uVar3 << (sbyte)uVar8) | (uint)(uVar3 >> 0x40 - (sbyte)uVar8)) &
                       masks[uVar5]);
          if ((uVar18 < 0x26) && (uVar8 < 0x26)) {
            uVar5 = (uVar2 >> 0x10 & 0xff) >> 3;
            uVar18 = uVar18 + (int)uVar5;
            bVar4 = (byte)uVar18 & 0x3f;
            piVar15[2] = newlz_offsetsalt_bias_tab[uVar2 >> 0x10 & 0xff] -
                         (((uint)(uVar13 << bVar4) | (uint)(uVar13 >> 0x40 - bVar4)) & masks[uVar5])
            ;
            uVar5 = (uVar2 >> 0x18 & 0xff) >> 3;
            uVar8 = uVar8 + (int)uVar5;
            bVar4 = (byte)uVar8 & 0x3f;
            piVar15[3] = newlz_offsetsalt_bias_tab[uVar2 >> 0x18 & 0xff] -
                         (((uint)(uVar3 << bVar4) | (uint)(uVar3 >> 0x40 - bVar4)) & masks[uVar5]);
            if ((uVar18 < 0x26) && (uVar8 < 0x26)) goto LAB_14f3a9a85;
            lVar11 = 4;
            lVar12 = 0x10;
          }
          else {
            lVar11 = 2;
            lVar12 = 8;
          }
        }
        piVar15 = (int *)((longlong)piVar15 + lVar12);
      }
      param_1->offs_u8 = (uchar *)puVar19;
      param_1->bitp[0] = (uchar *)((ulonglong)(uVar16 >> 3) + (longlong)puVar14);
      param_1->neg_offs_s32 = piVar15;
      param_1->bitc[0] = uVar16 & 7;
      param_1->bitp[1] = (uchar *)((longlong)puVar20 + (8 - (ulonglong)(uVar8 >> 3)));
      param_1->bitc[1] = uVar8 & 7;
    }
  }
  bVar7 = newLZ_offsetalt_decode_finish(param_1);
  return bVar7;
}

// newLZ_offsetalt_decode_finish @ 14f3a9bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl oo2::newLZ_offsetalt_decode_finish(KrakenOffsetState *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  size_t _Size;
  ulonglong *puVar9;
  ulonglong *_Src;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined1 auStack_68 [32];
  byte *local_48;
  ulonglong local_40 [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  _Src = (ulonglong *)param_1->bitp[0];
  puVar12 = (ulonglong *)0x0;
  puVar10 = (ulonglong *)param_1->bitp[1];
  local_48 = param_1->offs_u8_end;
  uVar5 = param_1->bitc[0];
  uVar8 = param_1->bitc[1];
  local_40[0] = 0;
  local_40[1] = 0;
  if (_Src <= puVar10) {
    pbVar6 = param_1->offs_u8;
    puVar13 = puVar12;
    piVar14 = param_1->neg_offs_s32;
    if (param_1->offs_u8 != local_48) {
      do {
        _Size = (longlong)puVar10 - (longlong)_Src;
        puVar9 = _Src;
        if ((longlong)_Size < 8) {
          if (puVar12 != (ulonglong *)0x0) {
            return false;
          }
          memcpy(local_40,_Src,_Size);
          memcpy((void *)((longlong)&local_30 - _Size),_Src,_Size);
          puVar9 = local_40;
          puVar12 = (ulonglong *)(0x10 - _Size);
          puVar10 = &local_30;
          puVar13 = _Src;
        }
        pbVar7 = pbVar6 + 1;
        uVar2 = puVar10[-1];
        bVar1 = *pbVar6 >> 3;
        uVar11 = (uint)bVar1;
        if (0x1a < uVar11) {
          return false;
        }
        uVar3 = *puVar9;
        uVar16 = uVar5 + uVar11;
        *piVar14 = 8 - ((uint)((uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) >>
                              (0x40U - (char)uVar16 & 0x3f)) & masks[uVar11] |
                       (*pbVar6 & 7 | 8) << bVar1);
        piVar15 = piVar14 + 1;
        if (pbVar7 != local_48) {
          bVar1 = *pbVar7;
          pbVar7 = pbVar6 + 2;
          bVar4 = bVar1 >> 3;
          uVar5 = (uint)bVar4;
          if (0x1a < uVar5) {
            return false;
          }
          uVar8 = uVar8 + uVar5;
          *piVar15 = 8 - ((uint)(uVar2 >> (0x40U - (char)uVar8 & 0x3f)) & masks[uVar5] |
                         (bVar1 & 7 | 8) << bVar4);
          piVar15 = piVar14 + 2;
        }
        uVar5 = uVar16 & 7;
        _Src = (ulonglong *)((longlong)puVar9 + (ulonglong)(uVar16 >> 3));
        uVar11 = uVar8 >> 3;
        uVar8 = uVar8 & 7;
        puVar10 = (ulonglong *)((longlong)puVar10 - (ulonglong)uVar11);
        pbVar6 = pbVar7;
        piVar14 = piVar15;
      } while (pbVar7 != local_48);
    }
    if ((longlong)puVar12 <=
        (longlong)
        ((longlong)puVar10 + ((-(ulonglong)(uVar5 != 0) - (ulonglong)(uVar8 != 0)) - (longlong)_Src)
        )) {
      if (puVar12 != (ulonglong *)0x0) {
        puVar10 = (ulonglong *)
                  ((longlong)puVar13 + (-(longlong)local_40 - (longlong)puVar12) + (longlong)puVar10
                  );
        _Src = (ulonglong *)(((longlong)puVar13 - (longlong)local_40) + (longlong)_Src);
      }
      param_1->bitp[0] = (uchar *)_Src;
      param_1->bitp[1] = (uchar *)puVar10;
      param_1->bitc[0] = uVar5;
      param_1->bitc[1] = uVar8;
      return true;
    }
  }
  return false;
}

// newLZ_put_excesses_u32_separate @ 14f3a9e00

long64 __cdecl
oo2::newLZ_put_excesses_u32_separate(uchar *param_1,uchar *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  uchar *puVar8;
  uint uVar9;
  ulonglong uVar10;
  size_t _Size;
  ulonglong *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  longlong local_40;
  
  if (0xf < (longlong)param_2 - (longlong)param_1) {
    if (param_4 == 0) {
      return 0;
    }
    uVar4 = 0;
    local_40 = 0x3f;
    lVar13 = 0x3f;
    puVar8 = param_2;
    uVar10 = uVar4;
    puVar11 = (ulonglong *)param_1;
    lVar6 = 0x3f;
    uVar3 = uVar4;
    if (0 < param_4) {
      do {
        uVar9 = *param_3;
        uVar16 = (uVar9 >> 6) + 1;
        uVar2 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        uVar1 = uVar2 + 1;
        bVar5 = (byte)uVar2;
        if ((uVar4 & 1) == 0) {
          local_40 = local_40 - (ulonglong)uVar1;
          uVar14 = uVar3 << ((byte)uVar1 & 0x3f) | 1;
          lVar6 = 0x3f - local_40 >> 3;
          uVar3 = uVar14 << ((char)local_40 + 1U & 0x3f);
          *puVar11 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                     (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                     (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                     (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
          local_40 = local_40 + lVar6 * 8;
          puVar11 = (ulonglong *)((longlong)puVar11 + lVar6);
          if (uVar2 != 0) {
            local_40 = local_40 - (ulonglong)uVar2;
            uVar14 = (ulonglong)(uVar16 - (1 << (bVar5 & 0x1f))) | uVar14 << (bVar5 & 0x3f);
            uVar3 = uVar14 << ((char)local_40 + 1U & 0x3f);
            lVar6 = 0x3f - local_40 >> 3;
            *puVar11 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                       (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                       (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
            puVar11 = (ulonglong *)((longlong)puVar11 + lVar6);
            local_40 = local_40 + lVar6 * 8;
          }
          lVar6 = 0x45 - local_40 >> 3;
          uVar3 = (ulonglong)(uVar9 & 0x3f) | uVar14 << 6;
          uVar14 = uVar3 << ((char)local_40 - 5U & 0x3f);
          *puVar11 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                     (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                     (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                     (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
          puVar11 = (ulonglong *)((longlong)puVar11 + lVar6);
          local_40 = local_40 + lVar6 * 8 + -6;
        }
        else {
          lVar13 = lVar13 - (ulonglong)uVar1;
          uVar10 = uVar10 << ((byte)uVar1 & 0x3f) | 1;
          lVar6 = 0x3f - lVar13 >> 3;
          *(ulonglong *)(puVar8 + -8) = uVar10 << ((char)lVar13 + 1U & 0x3f);
          lVar13 = lVar6 * 8 + lVar13;
          lVar6 = (longlong)puVar8 - lVar6;
          if (uVar2 != 0) {
            lVar13 = lVar13 - (ulonglong)uVar2;
            uVar10 = (ulonglong)(uVar16 - (1 << (bVar5 & 0x1f))) | uVar10 << (bVar5 & 0x3f);
            lVar7 = 0x3f - lVar13 >> 3;
            *(ulonglong *)(lVar6 + -8) = uVar10 << ((char)lVar13 + 1U & 0x3f);
            lVar6 = lVar6 - lVar7;
            lVar13 = lVar13 + lVar7 * 8;
          }
          uVar10 = (ulonglong)(uVar9 & 0x3f) | uVar10 << 6;
          lVar7 = 0x45 - lVar13 >> 3;
          *(ulonglong *)(lVar6 + -8) = uVar10 << ((char)lVar13 - 5U & 0x3f);
          puVar8 = (uchar *)(lVar6 - lVar7);
          lVar13 = lVar13 + -6 + lVar7 * 8;
        }
        if ((longlong)puVar8 - (longlong)puVar11 < 9) {
          return -1;
        }
        uVar9 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar9;
        param_3 = param_3 + 1;
        lVar6 = local_40;
      } while ((int)uVar9 < param_4);
    }
    lVar7 = 0x3f - lVar6 >> 3;
    uVar4 = uVar3 << ((char)lVar6 + 1U & 0x3f);
    *puVar11 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
               | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 |
               (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    puVar12 = (undefined1 *)((longlong)puVar11 + lVar7);
    lVar6 = lVar6 + lVar7 * 8;
    lVar7 = lVar6;
    if (-lVar6 != -0x3f && -1 < -lVar6 + 0x3f) {
      uVar9 = (int)lVar6 + 1U & 7;
      uVar4 = (ulonglong)uVar9;
      lVar7 = lVar6 - uVar4;
      if (uVar4 == 0) {
        lVar7 = lVar6;
      }
      lVar6 = 0x3f - lVar7;
      if (7 < lVar6) {
        uVar14 = uVar3 << (sbyte)uVar9;
        if (uVar4 == 0) {
          uVar14 = uVar3;
        }
        puVar15 = (uint *)((longlong)c_rrBitMask64 + lVar7 * -4 + 0x5c);
        do {
          puVar15 = puVar15 + -8;
          *puVar12 = (char)(uVar14 >> ((char)lVar6 - 8U & 0x3f));
          lVar7 = lVar7 + 8;
          puVar12 = puVar12 + 1;
          uVar14 = uVar14 & *puVar15;
          lVar6 = lVar6 + -8;
        } while (7 < lVar6);
      }
    }
    lVar6 = 0x3f - lVar13 >> 3;
    *(ulonglong *)(puVar8 + -8) = uVar10 << ((char)lVar13 + 1U & 0x3f);
    puVar8 = puVar8 + -lVar6;
    lVar13 = lVar6 * 8 + lVar13;
    if (-lVar13 != -0x3f && -1 < -lVar13 + 0x3f) {
      uVar9 = (int)lVar13 + 1U & 7;
      uVar3 = (ulonglong)uVar9;
      lVar6 = lVar13 - uVar3;
      if (uVar3 == 0) {
        lVar6 = lVar13;
      }
      lVar13 = 0x3f - lVar6;
      if (7 < lVar13) {
        uVar4 = uVar10 << (sbyte)uVar9;
        if (uVar3 == 0) {
          uVar4 = uVar10;
        }
        puVar15 = (uint *)((longlong)c_rrBitMask64 + lVar6 * -4 + 0x5c);
        do {
          lVar13 = lVar13 + -8;
          puVar15 = puVar15 + -8;
          puVar8 = puVar8 + -1;
          *puVar8 = (uchar)(uVar4 >> ((byte)lVar13 & 0x3f));
          uVar4 = uVar4 & *puVar15;
        } while (7 < lVar13);
      }
    }
    if (8 < (longlong)puVar8 -
            (longlong)
            (puVar12 +
            ((longlong)((ulonglong)((uint)(0x46 - lVar7 >> 0x3f) & 7) + (0x46 - lVar7)) >> 3))) {
      _Size = (longlong)
              (puVar12 +
              ((longlong)((ulonglong)((uint)(0x46 - lVar7 >> 0x3f) & 7) + (0x46 - lVar7)) >> 3)) -
              (longlong)param_1;
      memmove(puVar8 + -_Size,param_1,_Size);
      return (longlong)param_2 - (longlong)(puVar8 + -_Size);
    }
  }
  return -1;
}

// newLZ_put_offset_44_or_alt_arrays @ 14f3aa1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_put_offset_44_or_alt_arrays
          (uchar *param_1,uchar *param_2,uchar *param_3,uint *param_4,int param_5,uint param_6,
          float param_7,OodleSpeedFit *param_8,float *param_9,float param_10,
          ENewLZ_MinOffset param_11,int param_12,int *param_13,rrArenaAllocator *param_14,
          OodleLZ_CompressionLevel param_15,uint *param_16,uint *param_17)

{
  code *pcVar1;
  undefined8 uVar2;
  OodleSpeedFit *pOVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  long64 lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  ulonglong *puVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  size_t sVar17;
  uint *puVar18;
  uint uVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  size_t sVar23;
  _func___cdecl_float_long64 *p_Var24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_588 [32];
  float local_528;
  float local_524;
  int local_520;
  int local_51c;
  OodleSpeedFit *local_518;
  uchar *local_510;
  size_t local_508;
  byte *local_500;
  byte *local_4f8;
  size_t local_4f0;
  ulonglong local_4e8;
  uint *local_4e0;
  float *local_4d8;
  uchar *local_4d0;
  uint *local_4c8;
  rrArenaAllocator *local_4c0;
  byte *local_4b8;
  ulonglong local_4b0;
  undefined8 local_4a8;
  uint local_498 [256];
  ulonglong local_98;
  
  local_4a8 = 0xfffffffffffffffe;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_588;
  sVar23 = (size_t)param_5;
  local_518 = param_8;
  local_4d8 = param_9;
  local_4c8 = (uint *)param_13;
  local_4e0 = param_17;
  uVar6 = 0;
  local_508 = 0x7fffffff;
  *param_9 = 1.0737418e+09;
  local_510 = param_3;
  local_4d0 = param_1;
  if (param_11 == eNewLZ_MinOffset_8) {
    local_508 = newLZ_put_array(param_1,param_2,param_3,sVar23,param_6,param_7,param_8,param_9,
                                param_10,param_14,param_15,param_16);
    if ((longlong)local_508 < 0) {
      return -1;
    }
    fVar26 = (*param_8->get_offsets44)(sVar23);
    *param_9 = fVar26 * param_7 + *param_9;
  }
  if (param_12 == 0) goto LAB_14f3aaa27;
  uVar25 = (ulonglong)(param_5 * 4 + 0x10);
  local_4c0 = param_14;
  local_4e8 = uVar25;
  local_4b0 = uVar25;
  if (param_14 == (rrArenaAllocator *)0x0) {
    pbVar13 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar25,0x10);
    uVar16 = uVar25;
joined_r0x00014f3aa40b:
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar16);
    }
  }
  else {
    uVar16 = uVar25 + 0xf & 0xfffffffffffffff0;
    uVar15 = (ulonglong)(-(uint)(param_14->m_unorderedStart != 0) & 0x10);
    pbVar13 = (byte *)param_14->m_cur;
    if ((byte *)(param_14->m_size + param_14->m_base) < pbVar13 + uVar16 + uVar15) {
      if (param_14->m_allowFallback != 0) {
        pbVar13 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar16,0x10);
        goto joined_r0x00014f3aa40b;
      }
      pbVar13 = (byte *)0x0;
    }
    else {
      puVar12 = (ulonglong *)(pbVar13 + uVar16);
      param_14->m_cur = (ulong64)puVar12;
      if (param_14->m_unorderedStart != 0) {
        *puVar12 = uVar16;
        puVar12[1] = 0;
        param_14->m_cur = param_14->m_cur + uVar15;
        puVar12 = (ulonglong *)param_14->m_cur;
      }
      puVar7 = (ulonglong *)param_14->m_cur_max;
      if ((ulonglong *)param_14->m_cur_max <= puVar12) {
        puVar7 = puVar12;
      }
      param_14->m_cur_max = (ulong64)puVar7;
    }
  }
  local_4b8 = pbVar13;
  if ((pbVar13 == (byte *)0x0) &&
     (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar5 != 0)) {
    pcVar1 = (code *)swi(3);
    lVar8 = (*pcVar1)();
    return lVar8;
  }
  local_4f8 = pbVar13 + param_5 * 2;
  local_500 = pbVar13 + uVar25;
  uVar6 = 1;
  local_4f0 = sVar23;
  if ((int)param_15 < 8) {
    if (3 < (int)param_15) {
      uVar6 = choose_alt_offset_modulo_fast(param_4,param_5,param_7,param_8);
    }
  }
  else {
    uVar6 = choose_alt_offset_modulo_brute(param_4,param_5,param_7,param_8);
  }
  iVar5 = 0;
  local_51c = 0;
  iVar22 = 0;
  local_520 = 0;
  if (0 < (longlong)sVar23) {
    if (uVar6 == 1) {
      pbVar20 = pbVar13;
      do {
        bVar10 = pbVar20[(longlong)local_510 - (longlong)pbVar13];
        if (bVar10 < 0xf0) {
          iVar11 = (bVar10 >> 4) + 4;
        }
        else {
          iVar11 = bVar10 - 0xe0;
        }
        iVar22 = iVar22 + iVar11;
        uVar14 = *param_4 + 8;
        iVar11 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        bVar10 = (char)iVar11 - 3;
        bVar10 = bVar10 * '\b' | (byte)(uVar14 >> (bVar10 & 0x1f)) ^ 8;
        *pbVar20 = bVar10;
        iVar5 = iVar5 + (uint)(bVar10 >> 3);
        param_4 = param_4 + 1;
        pbVar20 = pbVar20 + 1;
        sVar23 = sVar23 - 1;
        local_520 = iVar22;
        local_51c = iVar5;
      } while (sVar23 != 0);
    }
    else {
      sVar17 = sVar23;
      pbVar20 = pbVar13;
      do {
        bVar10 = pbVar20[(longlong)local_510 - (longlong)pbVar13];
        if (bVar10 < 0xf0) {
          iVar11 = (bVar10 >> 4) + 4;
        }
        else {
          iVar11 = bVar10 - 0xe0;
        }
        iVar22 = iVar22 + iVar11;
        uVar14 = *param_4;
        uVar19 = uVar14 / uVar6 + 8;
        iVar11 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        bVar10 = (char)iVar11 - 3;
        bVar10 = bVar10 * '\b' | (byte)(uVar19 >> (bVar10 & 0x1f)) ^ 8;
        *pbVar20 = bVar10;
        pbVar20[sVar23] = (byte)(uVar14 % uVar6);
        iVar5 = iVar5 + (uint)(bVar10 >> 3);
        param_4 = param_4 + 1;
        pbVar20 = pbVar20 + 1;
        sVar17 = sVar17 - 1;
        local_520 = iVar22;
        local_51c = iVar5;
      } while (sVar17 != 0);
    }
  }
  *local_4f8 = (char)uVar6 + 0x7f;
  pbVar20 = local_4f8 + 1;
  puVar18 = (uint *)0x0;
  if (param_16 != (uint *)0x0) {
    puVar18 = local_498;
    rrMemSetZero(local_498,0x400);
  }
  sVar23 = local_4f0;
  fVar26 = __real_53800000;
  local_524 = 1.0737418e+09;
  lVar8 = newLZ_put_array_small_allowed
                    (pbVar20,local_500,pbVar13,local_4f0,param_6,param_7,local_518,&local_524,
                     __real_53800000,param_14,param_15,puVar18);
  pOVar3 = local_518;
  if (lVar8 < 0) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3aa737;
    pcVar21 = "OODLE ERROR : offsets_alt_comp_len1 failed!";
    iVar5 = 0xb14;
LAB_14f3aa72c:
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",iVar5,pcVar21);
LAB_14f3aa737:
    ooLogErrorPost();
    if (pbVar13 == (byte *)0x0) {
      return -1;
    }
    if (param_14 != (rrArenaAllocator *)0x0) {
      uVar25 = local_4e8 + 0xf & 0xfffffffffffffff0;
      if ((byte *)param_14->m_unorderedStart == (byte *)0x0) {
        if (pbVar13 + uVar25 == (byte *)param_14->m_cur) {
          param_14->m_cur = (longlong)param_14->m_cur - uVar25;
          return -1;
        }
      }
      else if (((byte *)param_14->m_unorderedStart <= pbVar13) &&
              (pbVar13 < (byte *)(param_14->m_size + param_14->m_base))) {
        pbVar13 = pbVar13 + uVar25;
        pbVar13[8] = 1;
        pbVar13[9] = 0;
        pbVar13[10] = 0;
        pbVar13[0xb] = 0;
        pbVar13[0xc] = 0;
        pbVar13[0xd] = 0;
        pbVar13[0xe] = 0;
        pbVar13[0xf] = 0;
        pbVar20 = (byte *)param_14->m_cur;
        if (pbVar13 + 0x10 != pbVar20) {
          return -1;
        }
        while( true ) {
          if (pbVar20 == (byte *)param_14->m_unorderedStart) {
            return -1;
          }
          if (*(longlong *)(pbVar13 + 8) != 1) break;
          param_14->m_cur = param_14->m_cur + (-0x10 - *(longlong *)pbVar13);
          pbVar20 = (byte *)param_14->m_cur;
          pbVar13 = pbVar20 + -0x10;
        }
        return -1;
      }
    }
    (*g_fp_OodleCore_Plugin_Free)(pbVar13);
    return -1;
  }
  pbVar20 = pbVar20 + lVar8;
  local_528 = 0.0;
  if ((int)uVar6 < 2) {
    fVar26 = local_524 + __real_3f800000 + 0.0;
    if (uVar6 == 0) {
      fVar27 = (*local_518->get_offsets44)(sVar23);
    }
    else {
      p_Var24 = local_518->get_offsetsalt;
      if (uVar6 != 1) goto LAB_14f3aa814;
      fVar27 = (*p_Var24)(sVar23);
    }
  }
  else {
    local_528 = 1.0737418e+09;
    lVar8 = newLZ_put_array_small_allowed
                      (pbVar20,local_500,pbVar13 + sVar23,sVar23,param_6,param_7,local_518,
                       &local_528,fVar26,param_14,param_15,local_4e0);
    if (lVar8 < 0) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3aa737;
      pcVar21 = "OODLE ERROR : offsets_alt_comp_len2 failed!";
      iVar5 = 0xb27;
      goto LAB_14f3aa72c;
    }
    pbVar20 = pbVar20 + lVar8;
    fVar26 = local_524 + __real_3f800000 + local_528;
    p_Var24 = pOVar3->get_offsetsalt;
LAB_14f3aa814:
    fVar27 = (*local_518->simd_mul_s32_sub_u8)(sVar23);
    fVar28 = (*p_Var24)(sVar23);
    fVar27 = fVar27 + fVar28;
  }
  pfVar4 = local_4d8;
  fVar26 = fVar26 + fVar27 * param_7;
  sVar23 = (longlong)pbVar20 - (longlong)local_4f8;
  if ((float)((int)(local_520 + 7 + (local_520 + 7 >> 0x1f & 7U)) >> 3) + *local_4d8 <=
      (float)((int)(local_51c + 7 + (local_51c + 7 >> 0x1f & 7U)) >> 3) + fVar26) {
    uVar6 = 0;
  }
  else {
    memmove(local_4d0,local_4f8,sVar23);
    *pfVar4 = fVar26;
    local_508 = sVar23;
    memcpy(local_510,pbVar13,local_4f0);
    if (param_16 != (uint *)0x0) {
      lVar9 = 8;
      do {
        uVar2 = *(undefined8 *)(puVar18 + 2);
        *(undefined8 *)param_16 = *(undefined8 *)puVar18;
        *(undefined8 *)(param_16 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 6);
        *(undefined8 *)(param_16 + 4) = *(undefined8 *)(puVar18 + 4);
        *(undefined8 *)(param_16 + 6) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 10);
        *(undefined8 *)(param_16 + 8) = *(undefined8 *)(puVar18 + 8);
        *(undefined8 *)(param_16 + 10) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 0xe);
        *(undefined8 *)(param_16 + 0xc) = *(undefined8 *)(puVar18 + 0xc);
        *(undefined8 *)(param_16 + 0xe) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 0x12);
        *(undefined8 *)(param_16 + 0x10) = *(undefined8 *)(puVar18 + 0x10);
        *(undefined8 *)(param_16 + 0x12) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 0x16);
        *(undefined8 *)(param_16 + 0x14) = *(undefined8 *)(puVar18 + 0x14);
        *(undefined8 *)(param_16 + 0x16) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 0x1a);
        *(undefined8 *)(param_16 + 0x18) = *(undefined8 *)(puVar18 + 0x18);
        *(undefined8 *)(param_16 + 0x1a) = uVar2;
        uVar2 = *(undefined8 *)(puVar18 + 0x1e);
        *(undefined8 *)(param_16 + 0x1c) = *(undefined8 *)(puVar18 + 0x1c);
        *(undefined8 *)(param_16 + 0x1e) = uVar2;
        puVar18 = puVar18 + 0x20;
        lVar9 = lVar9 + -1;
        param_16 = param_16 + 0x20;
      } while (lVar9 != 0);
    }
  }
  if (pbVar13 == (byte *)0x0) goto LAB_14f3aaa27;
  if (param_14 != (rrArenaAllocator *)0x0) {
    uVar25 = local_4e8 + 0xf & 0xfffffffffffffff0;
    if ((byte *)param_14->m_unorderedStart == (byte *)0x0) {
      if (pbVar13 + uVar25 == (byte *)param_14->m_cur) {
        param_14->m_cur = (longlong)param_14->m_cur - uVar25;
        goto LAB_14f3aaa27;
      }
    }
    else if (((byte *)param_14->m_unorderedStart <= pbVar13) &&
            (pbVar13 < (byte *)(param_14->m_size + param_14->m_base))) {
      pbVar13 = pbVar13 + uVar25;
      pbVar13[8] = 1;
      pbVar13[9] = 0;
      pbVar13[10] = 0;
      pbVar13[0xb] = 0;
      pbVar13[0xc] = 0;
      pbVar13[0xd] = 0;
      pbVar13[0xe] = 0;
      pbVar13[0xf] = 0;
      pbVar20 = (byte *)param_14->m_cur;
      if (pbVar13 + 0x10 == pbVar20) {
        while ((pbVar20 != (byte *)param_14->m_unorderedStart && (*(longlong *)(pbVar13 + 8) == 1)))
        {
          param_14->m_cur = param_14->m_cur + (-0x10 - *(longlong *)pbVar13);
          pbVar20 = (byte *)param_14->m_cur;
          pbVar13 = pbVar20 + -0x10;
        }
      }
      goto LAB_14f3aaa27;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(pbVar13);
LAB_14f3aaa27:
  *local_4c8 = uVar6;
  return local_508;
}

// newLZ_put_offsets_excesses @ 14f3aaa80

long64 __cdecl
oo2::newLZ_put_offsets_excesses
          (uchar *param_1,uchar *param_2,uchar *param_3,uint *param_4,int param_5,int param_6,
          uint *param_7,int param_8,long64 param_9,long64 param_10)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  uchar *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong *puVar23;
  undefined1 *puVar24;
  uint local_64;
  longlong local_58;
  
  if (0x10 < (longlong)param_2 - (longlong)param_1) {
    uVar5 = 0;
    lVar22 = 0x3f;
    lVar19 = 0x3f;
    puVar15 = param_2;
    uVar17 = uVar5;
    if (param_9 == 0) {
      uVar17 = 1;
      uVar11 = 0x1f;
      if (param_8 + 1U != 0) {
        for (; param_8 + 1U >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      lVar18 = 0x3f - (ulonglong)(uVar11 + 1);
      uVar20 = (ulonglong)(uVar11 + 1 >> 3);
      lVar14 = (longlong)param_2 - uVar20;
      lVar19 = lVar18 + uVar20 * 8;
      *(longlong *)(param_2 + -8) = 1L << ((char)lVar18 + 1U & 0x3f);
      if (uVar11 != 0) {
        lVar19 = lVar19 - (ulonglong)uVar11;
        uVar17 = (ulonglong)(uint)((param_8 + 1) - (1 << ((byte)uVar11 & 0x1f))) |
                 1L << ((ulonglong)uVar11 & 0x3f);
        lVar18 = 0x3f - lVar19 >> 3;
        *(ulonglong *)(lVar14 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
        lVar14 = lVar14 - lVar18;
        lVar19 = lVar19 + lVar18 * 8;
      }
      lVar18 = 0x3f - lVar19 >> 3;
      *(ulonglong *)(lVar14 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
      lVar14 = lVar14 - lVar18;
      lVar19 = lVar19 + lVar18 * 8;
      lVar18 = 0x3f - lVar19 >> 3;
      *(ulonglong *)(lVar14 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
      puVar15 = (uchar *)(lVar14 - lVar18);
      lVar19 = lVar19 + lVar18 * 8;
    }
    uVar20 = uVar5;
    puVar23 = (ulonglong *)param_1;
    if (param_6 == 0) {
      local_64 = 0;
      uVar3 = uVar5;
      if (0 < (longlong)(param_5 + -3)) {
        puVar16 = param_4 + 2;
        local_58 = 0;
        do {
          if ((longlong)puVar15 - (longlong)puVar23 < 9) {
            return -1;
          }
          uVar11 = *(uint *)(param_3 + local_58);
          if ((~uVar11 + 0xefefeff0 & uVar11 & 0x80808080) != 0) break;
          uVar1 = ((uVar11 & 0xff) >> 4) + 4;
          sVar6 = (sbyte)uVar1;
          uVar2 = ((uVar11 >> 8 & 0xff) >> 4) + 4;
          sVar7 = (sbyte)uVar2;
          uVar10 = (uVar11 >> 0x14 & 0xf) + 4;
          sVar8 = (sbyte)uVar10;
          uVar20 = (longlong)(int)((*puVar16 + 0xf8 >> 4) - (1 << sVar8)) |
                   ((longlong)(int)((puVar16[-2] + 0xf8 >> 4) - (1 << sVar6)) | uVar20 << sVar6) <<
                   sVar8;
          lVar22 = lVar22 - ((ulonglong)uVar1 + (ulonglong)uVar10);
          uVar11 = (uVar11 >> 0x1c) + 4;
          sVar6 = (sbyte)uVar11;
          lVar19 = lVar19 - ((ulonglong)uVar2 + (ulonglong)uVar11);
          uVar17 = (longlong)(int)((puVar16[1] + 0xf8 >> 4) - (1 << sVar6)) |
                   ((longlong)(int)((puVar16[-1] + 0xf8 >> 4) - (1 << sVar7)) | uVar17 << sVar7) <<
                   sVar6;
          uVar3 = uVar20 << ((char)lVar22 + 1U & 0x3f);
          lVar14 = 0x3f - lVar22 >> 3;
          *puVar23 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                     (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                     (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                     (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
          puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
          lVar22 = lVar22 + lVar14 * 8;
          *(ulonglong *)(puVar15 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
          lVar14 = 0x3f - lVar19 >> 3;
          puVar15 = puVar15 + -lVar14;
          lVar19 = lVar19 + lVar14 * 8;
          local_64 = local_64 + 4;
          uVar3 = (ulonglong)local_64;
          local_58 = local_58 + 4;
          puVar16 = puVar16 + 4;
        } while (local_58 < param_5 + -3);
      }
      iVar21 = (int)uVar3;
      if (iVar21 < param_5) {
        pbVar13 = param_3 + iVar21;
        puVar16 = param_4 + iVar21;
        do {
          if ((longlong)puVar15 - (longlong)puVar23 < 9) {
            return -1;
          }
          bVar9 = *pbVar13;
          if (bVar9 < 0xf0) {
            uVar11 = (bVar9 >> 4) + 4;
            uVar12 = (ulonglong)uVar11;
            sVar6 = (sbyte)uVar11;
            uVar4 = (ulonglong)((*puVar16 + 0xf8 >> 4) - (1 << sVar6));
            if ((uVar3 & 1) == 0) {
              uVar20 = uVar20 << sVar6 | uVar4;
              goto LAB_14f3aae4f;
            }
            uVar17 = uVar17 << sVar6 | uVar4;
LAB_14f3aae7c:
            lVar19 = lVar19 - uVar12;
            lVar14 = 0x3f - lVar19 >> 3;
            *(ulonglong *)(puVar15 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
            puVar15 = puVar15 + -lVar14;
            lVar19 = lVar19 + lVar14 * 8;
          }
          else {
            uVar12 = (ulonglong)bVar9 - 0xe0;
            uVar4 = (ulonglong)((*puVar16 - (1 << (bVar9 + 0x20 & 0x1f))) - 0x7eff00);
            if ((uVar3 & 1) != 0) {
              uVar17 = uVar17 << (bVar9 + 0x20 & 0x3f) | uVar4;
              goto LAB_14f3aae7c;
            }
            uVar20 = uVar20 << (bVar9 + 0x20 & 0x3f) | uVar4;
LAB_14f3aae4f:
            lVar22 = lVar22 - uVar12;
            lVar14 = 0x3f - lVar22 >> 3;
            uVar12 = uVar20 << ((char)lVar22 + 1U & 0x3f);
            *puVar23 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                       (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                       (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                       (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
            puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
            lVar22 = lVar22 + lVar14 * 8;
          }
          uVar11 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar11;
          pbVar13 = pbVar13 + 1;
          puVar16 = puVar16 + 1;
        } while ((int)uVar11 < param_5);
      }
    }
    else {
      uVar3 = uVar5;
      if (0 < param_5) {
        do {
          if ((longlong)puVar15 - (longlong)puVar23 < 9) {
            return -1;
          }
          bVar9 = *param_3 >> 3;
          uVar12 = (ulonglong)(*param_4 / (uint)param_6 + 8 & (1 << bVar9) - 1U);
          if ((uVar3 & 1) == 0) {
            lVar22 = lVar22 - (ulonglong)bVar9;
            uVar20 = uVar20 << bVar9 | uVar12;
            lVar14 = 0x3f - lVar22 >> 3;
            uVar12 = uVar20 << ((char)lVar22 + 1U & 0x3f);
            *puVar23 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                       (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                       (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                       (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
            lVar22 = lVar22 + lVar14 * 8;
            puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
          }
          else {
            lVar19 = lVar19 - (ulonglong)bVar9;
            uVar17 = uVar17 << bVar9 | uVar12;
            lVar14 = 0x3f - lVar19 >> 3;
            *(ulonglong *)(puVar15 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
            puVar15 = puVar15 + -lVar14;
            lVar19 = lVar19 + lVar14 * 8;
          }
          uVar11 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar11;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
        } while ((int)uVar11 < param_5);
      }
    }
    if ((param_9 == 0) && (0 < param_8)) {
      do {
        uVar1 = *param_7;
        uVar11 = (uVar1 >> 6) + 1;
        uVar2 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        uVar10 = uVar2 + 1;
        bVar9 = (byte)uVar2;
        if ((uVar5 & 1) == 0) {
          lVar22 = lVar22 - (ulonglong)uVar10;
          uVar3 = uVar20 << ((byte)uVar10 & 0x3f) | 1;
          lVar14 = 0x3f - lVar22 >> 3;
          uVar20 = uVar3 << ((char)lVar22 + 1U & 0x3f);
          *puVar23 = uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 |
                     (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                     (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
                     (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
          lVar22 = lVar22 + lVar14 * 8;
          puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
          if (uVar2 != 0) {
            lVar22 = lVar22 - (ulonglong)uVar2;
            lVar14 = 0x3f - lVar22 >> 3;
            uVar3 = (ulonglong)(uVar11 - (1 << (bVar9 & 0x1f))) | uVar3 << (bVar9 & 0x3f);
            uVar20 = uVar3 << ((char)lVar22 + 1U & 0x3f);
            *puVar23 = uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 |
                       (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                       (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
                       (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
            lVar22 = lVar22 + lVar14 * 8;
            puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
          }
          uVar20 = (ulonglong)(uVar1 & 0x3f) | uVar3 << 6;
          lVar14 = 0x45 - lVar22 >> 3;
          uVar3 = uVar20 << ((char)lVar22 - 5U & 0x3f);
          *puVar23 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                     (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                     (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                     (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
          puVar23 = (ulonglong *)((longlong)puVar23 + lVar14);
          lVar22 = lVar14 * 8 + -6 + lVar22;
        }
        else {
          lVar19 = lVar19 - (ulonglong)uVar10;
          uVar17 = uVar17 << ((byte)uVar10 & 0x3f) | 1;
          lVar14 = 0x3f - lVar19 >> 3;
          *(ulonglong *)(puVar15 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
          lVar19 = lVar19 + lVar14 * 8;
          lVar14 = (longlong)puVar15 - lVar14;
          if (uVar2 != 0) {
            lVar19 = lVar19 - (ulonglong)uVar2;
            lVar18 = 0x3f - lVar19 >> 3;
            uVar17 = (ulonglong)(uVar11 - (1 << (bVar9 & 0x1f))) | uVar17 << (bVar9 & 0x3f);
            *(ulonglong *)(lVar14 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
            lVar19 = lVar19 + lVar18 * 8;
            lVar14 = lVar14 - lVar18;
          }
          uVar17 = (ulonglong)(uVar1 & 0x3f) | uVar17 << 6;
          lVar18 = 0x45 - lVar19 >> 3;
          *(ulonglong *)(lVar14 + -8) = uVar17 << ((char)lVar19 - 5U & 0x3f);
          puVar15 = (uchar *)(lVar14 - lVar18);
          lVar19 = lVar18 * 8 + -6 + lVar19;
        }
        if ((longlong)puVar15 - (longlong)puVar23 < 9) {
          return -1;
        }
        uVar11 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar11;
        param_7 = param_7 + 1;
      } while ((int)uVar11 < param_8);
    }
    lVar14 = 0x3f - lVar22 >> 3;
    uVar5 = uVar20 << ((char)lVar22 + 1U & 0x3f);
    *puVar23 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    puVar24 = (undefined1 *)((longlong)puVar23 + lVar14);
    lVar22 = lVar22 + lVar14 * 8;
    lVar14 = lVar22;
    if (-lVar22 != -0x3f && -1 < -lVar22 + 0x3f) {
      uVar11 = (int)lVar22 + 1U & 7;
      uVar5 = (ulonglong)uVar11;
      lVar14 = lVar22 - uVar5;
      if (uVar5 == 0) {
        lVar14 = lVar22;
      }
      lVar22 = 0x3f - lVar14;
      if (7 < lVar22) {
        uVar3 = uVar20 << (sbyte)uVar11;
        if (uVar5 == 0) {
          uVar3 = uVar20;
        }
        puVar16 = (uint *)((longlong)c_rrBitMask64 + lVar14 * -4 + 0x5c);
        do {
          puVar16 = puVar16 + -8;
          *puVar24 = (char)(uVar3 >> ((char)lVar22 - 8U & 0x3f));
          lVar14 = lVar14 + 8;
          puVar24 = puVar24 + 1;
          uVar3 = uVar3 & *puVar16;
          lVar22 = lVar22 + -8;
        } while (7 < lVar22);
      }
    }
    lVar22 = 0x3f - lVar19 >> 3;
    *(ulonglong *)(puVar15 + -8) = uVar17 << ((char)lVar19 + 1U & 0x3f);
    puVar15 = puVar15 + -lVar22;
    lVar19 = lVar19 + lVar22 * 8;
    if (-lVar19 != -0x3f && -1 < -lVar19 + 0x3f) {
      uVar11 = (int)lVar19 + 1U & 7;
      uVar5 = (ulonglong)uVar11;
      lVar22 = lVar19 - uVar5;
      if (uVar5 == 0) {
        lVar22 = lVar19;
      }
      lVar19 = 0x3f - lVar22;
      if (7 < lVar19) {
        uVar20 = uVar17 << (sbyte)uVar11;
        if (uVar5 == 0) {
          uVar20 = uVar17;
        }
        puVar16 = (uint *)((longlong)c_rrBitMask64 + lVar22 * -4 + 0x5c);
        do {
          lVar19 = lVar19 + -8;
          puVar16 = puVar16 + -8;
          puVar15 = puVar15 + -1;
          *puVar15 = (uchar)(uVar20 >> ((byte)lVar19 & 0x3f));
          uVar20 = uVar20 & *puVar16;
        } while (7 < lVar19);
      }
    }
    puVar24 = puVar24 + ((longlong)
                         ((ulonglong)((uint)(0x46 - lVar14 >> 0x3f) & 7) + (0x46 - lVar14)) >> 3);
    if (8 < (longlong)puVar15 - (longlong)puVar24) {
      memmove(puVar24,puVar15,(longlong)param_2 - (longlong)puVar15);
      puVar24 = puVar24 + ((longlong)param_2 - (longlong)puVar15);
      if (0 < param_10) {
        memmove(puVar24,param_2,param_10);
        puVar24 = puVar24 + param_10;
      }
      return (longlong)puVar24 - (longlong)param_1;
    }
  }
  return -1;
}

// newlz_array_estimate_complen_bytes @ 14f3ab360

uint __cdecl oo2::newlz_array_estimate_complen_bytes(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1,param_2,param_3);
  return uVar1 + 7 >> 3;
}

// put_alt_offset_u8_arrays @ 14f3ab380

void __cdecl
oo2::put_alt_offset_u8_arrays
          (uint *param_1,int param_2,uchar *param_3,uchar *param_4,int *param_5,int param_6,
          uchar *param_7,int *param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = 0;
  lVar5 = (longlong)param_2;
  iVar6 = 0;
  if (param_2 < 1) {
    *param_5 = 0;
    *param_8 = 0;
  }
  else if (param_6 == 1) {
    lVar8 = (longlong)param_7 - (longlong)param_3;
    do {
      bVar2 = param_3[lVar8];
      if (bVar2 < 0xf0) {
        iVar1 = (bVar2 >> 4) + 4;
      }
      else {
        iVar1 = bVar2 - 0xe0;
      }
      uVar3 = *param_1 + 8;
      iVar6 = iVar6 + iVar1;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      param_1 = param_1 + 1;
      bVar2 = (char)iVar1 - 3;
      bVar2 = (byte)(uVar3 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
      *param_3 = bVar2;
      iVar4 = iVar4 + (uint)(bVar2 >> 3);
      param_3 = param_3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *param_5 = iVar4;
    *param_8 = iVar6;
  }
  else {
    lVar8 = (longlong)param_7 - (longlong)param_3;
    lVar9 = (longlong)param_4 - (longlong)param_3;
    do {
      bVar2 = param_3[lVar8];
      if (bVar2 < 0xf0) {
        iVar1 = (bVar2 >> 4) + 4;
      }
      else {
        iVar1 = bVar2 - 0xe0;
      }
      uVar3 = *param_1;
      iVar6 = iVar6 + iVar1;
      param_1 = param_1 + 1;
      uVar7 = uVar3 / (uint)param_6 + 8;
      iVar1 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      bVar2 = (char)iVar1 - 3;
      bVar2 = (byte)(uVar7 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
      *param_3 = bVar2;
      param_3[lVar9] = (byte)(uVar3 % (uint)param_6);
      iVar4 = iVar4 + (uint)(bVar2 >> 3);
      param_3 = param_3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *param_5 = iVar4;
    *param_8 = iVar6;
  }
  return;
}

// rrAlignUp64 @ 14f3ab4d0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3ab4f0

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3ab510

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f3ab520

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrClz64 @ 14f3ab540

uint __cdecl oo2::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrCtz32 @ 14f3ab560

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrGetBitLevel_V_NonZero @ 14f3ab570

uint __cdecl oo2::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrPrintf_nop @ 14f3ab580

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f3ab590

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3ab5a0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrsimd_has_avx2 @ 14f3ab5b0

int __cdecl oo2::rrsimd_has_avx2(void)

{
  return 0;
}

// rrsimd_has_sse4 @ 14f3ab5c0

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// speedfit_estimate_entropy_array_time @ 14f3ab5d0

float __cdecl oo2::speedfit_estimate_entropy_array_time(OodleSpeedFit *param_1,long64 param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f3ab5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar1;
}

// speedfit_get_offsets_time @ 14f3ab600

float __cdecl oo2::speedfit_get_offsets_time(OodleSpeedFit *param_1,long64 param_2,int param_3)

{
  _func___cdecl_float_long64 *UNRECOVERED_JUMPTABLE;
  float fVar1;
  float fVar2;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3ab61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (*param_1->get_offsets44)(param_2);
    return fVar1;
  }
  UNRECOVERED_JUMPTABLE = param_1->get_offsetsalt;
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f3ab63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return fVar1;
  }
  fVar1 = (*param_1->simd_mul_s32_sub_u8)(param_2);
  fVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
  return fVar1 + fVar2;
}

// dtor$0 @ 150284f40

void `oo2::newLZ_put_offset_44_or_alt_arrays'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 200));
  return;
}

