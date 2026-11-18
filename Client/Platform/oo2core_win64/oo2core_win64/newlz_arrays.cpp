// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 32

// OodleFree @ 14f3a1b00

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3a1b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3a1b10

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

// RR_GET16_NATIVE @ 14f3a1b50

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3a1b60

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3a1b70

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT16_NATIVE @ 14f3a1b80

void __cdecl oo2::RR_PUT16_NATIVE(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// RR_PUT32_NATIVE @ 14f3a1b90

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// count_zero_run_len @ 14f3a1ba0

long64 __cdecl oo2::count_zero_run_len(uint *param_1,long64 param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (-1 < param_2 + -2) {
    do {
      if (*(longlong *)(param_1 + lVar1) != 0) {
        return lVar1 + (ulonglong)((int)*(longlong *)(param_1 + lVar1) == 0);
      }
      lVar1 = lVar1 + 2;
    } while (lVar1 <= param_2 + -2);
  }
  for (; (lVar1 < param_2 && (param_1[lVar1] == 0)); lVar1 = lVar1 + 1) {
  }
  return lVar1;
}

// newLZ_get_array_comp @ 14f3a1c00

long64 __cdecl
oo2::newLZ_get_array_comp
          (uint param_1,uchar **param_2,uchar *param_3,uchar *param_4,long64 *param_5,long64 param_6
          ,uchar *param_7,uchar *param_8)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uchar *puVar6;
  ulonglong uVar7;
  int iVar8;
  char *pcVar9;
  
  if (5 < param_1) {
    return -1;
  }
  if (*param_3 < 0x80) {
    if (4 < (longlong)param_4 - (longlong)param_3) {
      uVar1 = *(uint *)(param_3 + 1);
      uVar3 = (uVar1 & 0xff00) << 8;
      puVar6 = param_3 + 5;
      uVar7 = (ulonglong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | uVar3 & 0x3ffff);
      if ((longlong)param_4 - (longlong)puVar6 < (longlong)uVar7) {
        return -1;
      }
      uVar5 = (ulonglong)((uint)(CONCAT14(*param_3,uVar3 | uVar1 << 0x18) >> 0x12) & 0x3ffff) + 1;
      if (param_6 < (longlong)uVar5) {
        return -1;
      }
      if (uVar5 <= uVar7) {
        return -1;
      }
      goto LAB_14f3a1d54;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3a1cf7;
    pcVar9 = "OODLE ERROR : corruption : 5 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar8 = 0x3ce;
  }
  else {
    if (3 < (longlong)param_4 - (longlong)param_3) {
      uVar1 = *(uint *)param_3;
      puVar6 = param_3 + 3;
      uVar3 = (uVar1 & 0xff00) << 8;
      uVar7 = (ulonglong)(((uVar1 & 0xff0000) >> 8 | uVar3 & 0x3ff00) >> 8);
      if ((longlong)param_4 - (longlong)puVar6 < (longlong)uVar7) {
        return -1;
      }
      uVar5 = uVar7 + 1 + (ulonglong)((uVar3 | uVar1 << 0x18) >> 0x12 & 0x3ff);
      if (param_6 < (longlong)uVar5) {
        return -1;
      }
LAB_14f3a1d54:
      puVar2 = *param_2;
      if (puVar2 == param_7) {
        if ((longlong)param_8 - (longlong)param_7 < (longlong)uVar5) {
          return -1;
        }
        param_7 = param_7 + uVar5;
      }
      if (param_1 == 5) {
        uVar4 = newLZ_get_array_split(puVar6,uVar7,puVar2,uVar5,param_7,param_8);
      }
      else if (param_1 == 3) {
        uVar4 = newLZ_get_array_rle(puVar6,uVar7,puVar2,uVar5,param_7,param_8);
      }
      else if (param_1 == 1) {
        uVar4 = newlz_get_array_tans(puVar6,uVar7,puVar2,uVar5,param_7,param_8);
      }
      else {
        uVar4 = newlz_get_array_huff(puVar6,uVar7,puVar2,uVar5,param_1 == 4);
      }
      if (uVar7 != uVar4) {
        return -1;
      }
      *param_5 = uVar5;
      return (long64)(puVar6 + (uVar7 - (longlong)param_3));
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3a1cf7;
    pcVar9 = "OODLE ERROR : corruption : 4 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar8 = 0x3ae;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",iVar8,pcVar9);
LAB_14f3a1cf7:
  ooLogErrorPost();
  return -1;
}

// newLZ_get_arraylens @ 14f3a1e20

long64 __cdecl
oo2::newLZ_get_arraylens(uchar *param_1,uchar *param_2,long64 *param_3,long64 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  char *pcVar9;
  
  lVar6 = (longlong)param_2 - (longlong)param_1;
  if (lVar6 < 2) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3a1f89;
    pcVar9 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar8 = 0x30b;
  }
  else {
    bVar1 = *param_1;
    bVar4 = bVar1 >> 4;
    if (bVar1 < 0x80) {
      if (3 < lVar6) {
        if (bVar4 == 0) {
          uVar2 = *(uint *)param_1;
          uVar3 = (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8;
          uVar5 = (ulonglong)((uVar3 | uVar2 << 0x18 & 0x3ffff00) >> 8);
          if (0x3ffff < (uVar3 | uVar2 << 0x18) >> 8) {
            return -1;
          }
          if (param_4 < (longlong)uVar5) {
            return -1;
          }
          if ((longlong)param_2 - (longlong)(param_1 + 3) < (longlong)uVar5) {
            return -1;
          }
          *param_3 = uVar5;
          return (long64)(param_1 + 3 + (uVar5 - (longlong)param_1));
        }
        if (5 < bVar4) {
          return -1;
        }
        if (lVar6 < 5) {
          return -1;
        }
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = (uVar2 & 0xff00) << 8;
        uVar5 = (ulonglong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | uVar3 & 0x3ffff);
        if ((longlong)param_2 - (longlong)(param_1 + 5) < (longlong)uVar5) {
          return -1;
        }
        uVar7 = (ulonglong)((uint)(CONCAT14(bVar1,uVar3 | uVar2 << 0x18) >> 0x12) & 0x3ffff) + 1;
        if (param_4 < (longlong)uVar7) {
          return -1;
        }
        if (uVar7 <= uVar5) {
          return -1;
        }
        *param_3 = uVar7;
        return (long64)(param_1 + 5 + (uVar5 - (longlong)param_1));
      }
      if (lVar6 != 3) {
        return -1;
      }
      if (CONCAT21(CONCAT11(bVar1,param_1[1]),param_1[2]) == 0) {
        *param_3 = 0;
        return 3;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3a1f89;
      pcVar9 = "OODLE ERROR : corruption : header == 0\n";
      iVar8 = 0x356;
    }
    else {
      if ((bVar4 & 7) == 0) {
        uVar5 = (ulonglong)((ushort)(*(ushort *)param_1 >> 8 | *(ushort *)param_1 << 8) & 0xfff);
        if (param_4 < (longlong)uVar5) {
          return -1;
        }
        if (param_2 < param_1 + uVar5 + 2) {
          return -1;
        }
        *param_3 = uVar5;
        return (long64)(param_1 + (uVar5 - (longlong)param_1) + 2);
      }
      if (3 < lVar6) {
        uVar2 = *(uint *)param_1;
        uVar3 = (uVar2 & 0xff00) << 8;
        if (5 < (bVar4 & 7)) {
          return -1;
        }
        uVar5 = (ulonglong)(((uVar2 & 0xff0000) >> 8 | uVar3 & 0x3ff00) >> 8);
        if (param_2 < param_1 + uVar5 + 3) {
          return -1;
        }
        lVar6 = uVar5 + 1 + (ulonglong)((uVar3 | uVar2 << 0x18) >> 0x12 & 0x3ff);
        if (param_4 < lVar6) {
          return -1;
        }
        *param_3 = lVar6;
        return (long64)(param_1 + (uVar5 - (longlong)param_1) + 3);
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3a1f89;
      pcVar9 = "OODLE ERROR : corruption : 4 <= rrPtrDiff( from_end - from_ptr )\n";
      iVar8 = 0x328;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",iVar8,pcVar9);
LAB_14f3a1f89:
  ooLogErrorPost();
  return -1;
}

// newLZ_put_array @ 14f3a2060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,float param_9,rrArenaAllocator *param_10,
          int param_11,uint *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long64 lVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 auStackY_4b8 [32];
  uint local_458 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  if (param_4 < 0x21) {
    *param_8 = (float)param_4 + __real_40400000;
    lVar5 = newLZ_put_array_uncompressed(param_1,param_2,param_3,param_4);
  }
  else {
    CountHistoArrayU8(param_3,param_4,local_458,0x100,false);
    if (param_12 != (uint *)0x0) {
      lVar7 = 8;
      puVar6 = local_458;
      do {
        uVar1 = *(undefined8 *)(puVar6 + 2);
        uVar2 = *(undefined8 *)(puVar6 + 4);
        uVar3 = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)param_12 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_12 + 2) = uVar1;
        uVar1 = *(undefined8 *)(puVar6 + 8);
        uVar4 = *(undefined8 *)(puVar6 + 10);
        *(undefined8 *)(param_12 + 4) = uVar2;
        *(undefined8 *)(param_12 + 6) = uVar3;
        uVar2 = *(undefined8 *)(puVar6 + 0xc);
        uVar3 = *(undefined8 *)(puVar6 + 0xe);
        *(undefined8 *)(param_12 + 8) = uVar1;
        *(undefined8 *)(param_12 + 10) = uVar4;
        uVar1 = *(undefined8 *)(puVar6 + 0x10);
        uVar4 = *(undefined8 *)(puVar6 + 0x12);
        *(undefined8 *)(param_12 + 0xc) = uVar2;
        *(undefined8 *)(param_12 + 0xe) = uVar3;
        uVar2 = *(undefined8 *)(puVar6 + 0x14);
        uVar3 = *(undefined8 *)(puVar6 + 0x16);
        *(undefined8 *)(param_12 + 0x10) = uVar1;
        *(undefined8 *)(param_12 + 0x12) = uVar4;
        uVar1 = *(undefined8 *)(puVar6 + 0x18);
        uVar4 = *(undefined8 *)(puVar6 + 0x1a);
        *(undefined8 *)(param_12 + 0x14) = uVar2;
        *(undefined8 *)(param_12 + 0x16) = uVar3;
        uVar2 = *(undefined8 *)(puVar6 + 0x1c);
        uVar3 = *(undefined8 *)(puVar6 + 0x1e);
        *(undefined8 *)(param_12 + 0x18) = uVar1;
        *(undefined8 *)(param_12 + 0x1a) = uVar4;
        *(undefined8 *)(param_12 + 0x1c) = uVar2;
        *(undefined8 *)(param_12 + 0x1e) = uVar3;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 0x20;
        param_12 = param_12 + 0x20;
      } while (lVar7 != 0);
    }
    lVar5 = newLZ_put_array_histo
                      (param_1,param_2,param_3,param_4,local_458,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11);
  }
  return lVar5;
}

// newLZ_put_array_comp_header @ 14f3a21e0

uchar * __cdecl
oo2::newLZ_put_array_comp_header(uchar *param_1,int param_2,long64 param_3,long64 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_4 + -0x40000 + ((longlong)param_2 * 0x40000 + param_3) * 0x40000;
  *param_1 = (uchar)((ulonglong)lVar2 >> 0x20);
  uVar1 = (uint)lVar2;
  *(uint *)(param_1 + 1) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return (uchar *)(param_4 + 4 + (longlong)(param_1 + 1));
}

// newLZ_put_array_histo @ 14f3a2220

long64 __cdecl
oo2::newLZ_put_array_histo
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,uint param_6,
          float param_7,OodleSpeedFit *param_8,float *param_9,float param_10,
          rrArenaAllocator *param_11,int param_12)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long64 lVar7;
  ulonglong *puVar8;
  uchar *_Src;
  size_t sVar9;
  size_t sVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  uchar *local_res10;
  uint local_b8;
  float local_b4;
  float local_b0 [2];
  size_t local_a8 [2];
  rrArenaAllocator *local_98;
  uchar *local_90;
  longlong local_88;
  
  local_a8[1] = 0xfffffffffffffffe;
  lVar14 = (longlong)param_2 - (longlong)param_1;
  if (lVar14 < 6) {
    return -1;
  }
  local_res10 = param_2;
  uVar5 = simd_find_max_U32_256(param_5);
  fVar17 = __real_4e800000;
  if ((0 < param_4) && (uVar5 == (uint)param_4)) {
    if (param_4 < 6) {
      *param_9 = (float)param_4 + __real_40400000;
      lVar7 = newLZ_put_array_uncompressed(param_1,param_2,param_3,param_4);
      return lVar7;
    }
    if ((param_6 & 0x80) != 0) {
      fVar17 = (*param_8->memcpy)(param_4);
      fVar17 = fVar17 * param_7 + __real_40c00000;
      if (*param_9 <= fVar17) {
        return -1;
      }
      *param_9 = fVar17;
      param_1[5] = *param_3;
      lVar14 = param_4 * 0x40000 + 0x2ffffc0001;
      *param_1 = (uchar)((ulonglong)lVar14 >> 0x20);
      uVar5 = (uint)lVar14;
      *(uint *)(param_1 + 1) = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | uVar5 << 0x18;
      return 6;
    }
    if (lVar14 < 8) {
      return -1;
    }
    fVar17 = (*param_8->memcpy)(param_4);
    fVar17 = fVar17 * param_7 + __real_41000000;
    if (*param_9 <= fVar17) {
      return -1;
    }
    *param_9 = fVar17;
    bVar2 = *param_3;
    param_1[5] = '\0';
    param_1[6] = bVar2 >> 2 | 0x40;
    param_1[7] = bVar2 << 6;
    lVar14 = param_4 * 0x40000 + 0x1ffffc0003;
    *param_1 = (uchar)((ulonglong)lVar14 >> 0x20);
    uVar5 = (uint)lVar14;
    *(uint *)(param_1 + 1) = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | uVar5 << 0x18;
    return 8;
  }
  fVar20 = (float)param_4 + __real_40400000;
  fVar19 = *param_9;
  if (fVar20 <= *param_9) {
    fVar19 = fVar20;
  }
  local_b8 = 0;
  sVar9 = param_4;
  local_a8[0] = param_4;
  if ((param_12 < 3) && (uVar15 = 0, uVar5 < (uint)(param_4 >> 7))) goto LAB_14f3a28e6;
  if ((param_6 & 4) != 0) {
    fVar18 = (*param_8->rle)(param_4);
    lVar16 = (longlong)(fVar19 - (fVar18 * param_7 + __real_40a00000));
    if (lVar14 + -5 < lVar16) {
      lVar16 = lVar14 + -5;
    }
    if (0 < lVar16) {
      local_98 = param_11;
      local_88 = lVar16;
      if (param_11 == (rrArenaAllocator *)0x0) {
        _Src = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar16,0x10);
        if (_Src == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(lVar16);
        }
      }
      else {
        uVar13 = lVar16 + 0xfU & 0xfffffffffffffff0;
        uVar12 = (ulonglong)(-(uint)(param_11->m_unorderedStart != 0) & 0x10);
        _Src = (uchar *)param_11->m_cur;
        if ((uchar *)(param_11->m_size + param_11->m_base) < _Src + uVar13 + uVar12) {
          if (param_11->m_allowFallback == 0) {
            _Src = (uchar *)0x0;
          }
          else {
            _Src = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar13,0x10);
            if (_Src == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
              Oodle_Core_Malloc_Failed(uVar13);
            }
          }
        }
        else {
          puVar11 = (ulonglong *)(_Src + uVar13);
          param_11->m_cur = (ulong64)puVar11;
          if (param_11->m_unorderedStart != 0) {
            *puVar11 = uVar13;
            puVar11[1] = 0;
            param_11->m_cur = param_11->m_cur + uVar12;
            puVar11 = (ulonglong *)param_11->m_cur;
          }
          puVar8 = (ulonglong *)param_11->m_cur_max;
          if ((ulonglong *)param_11->m_cur_max <= puVar11) {
            puVar8 = puVar11;
          }
          param_11->m_cur_max = (ulong64)puVar8;
        }
      }
      local_90 = _Src;
      if ((_Src == (uchar *)0x0) &&
         (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                     "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar6 != 0)) {
        pcVar4 = (code *)swi(3);
        lVar7 = (*pcVar4)();
        return lVar7;
      }
      local_res8[0] = 1.0737418e+09;
      sVar9 = newLZ_put_array_rle(_Src,_Src + lVar16,param_3,param_4,param_7,param_8,local_res8,
                                  param_11,param_6,param_12);
      if (((longlong)sVar9 <= lVar16) && (local_res8[0] < fVar19)) {
        memcpy(param_1 + 5,_Src,sVar9);
        local_b8 = 3;
        fVar17 = local_res8[0];
        local_a8[0] = sVar9;
        if (local_res8[0] <= fVar19) {
          fVar19 = local_res8[0];
        }
      }
      sVar9 = local_a8[0];
      if (_Src != (uchar *)0x0) {
        if (param_11 == (rrArenaAllocator *)0x0) {
LAB_14f3a26ce:
          (*g_fp_OodleCore_Plugin_Free)(_Src);
          sVar9 = local_a8[0];
        }
        else {
          uVar12 = lVar16 + 0xfU & 0xfffffffffffffff0;
          if ((uchar *)param_11->m_unorderedStart == (uchar *)0x0) {
            if (_Src + uVar12 != (uchar *)param_11->m_cur) goto LAB_14f3a26ce;
            param_11->m_cur = (longlong)param_11->m_cur - uVar12;
          }
          else {
            if ((_Src < (uchar *)param_11->m_unorderedStart) ||
               ((uchar *)(param_11->m_size + param_11->m_base) <= _Src)) goto LAB_14f3a26ce;
            plVar1 = (longlong *)(_Src + uVar12);
            plVar1[1] = 1;
            plVar3 = (longlong *)param_11->m_cur;
            if (plVar1 + 2 == plVar3) {
              while ((plVar3 != (longlong *)param_11->m_unorderedStart && (plVar1[1] == 1))) {
                param_11->m_cur = param_11->m_cur + (-0x10 - *plVar1);
                plVar3 = (longlong *)param_11->m_cur;
                plVar1 = plVar3 + -2;
              }
            }
          }
        }
      }
    }
  }
  uVar15 = local_b8;
  if (0x1f < param_4) {
    local_b8 = 0;
    local_b4 = fVar19;
    sVar10 = newLZ_put_array_huff
                       (param_1 + 5,local_res10,param_3,param_4,param_5,param_7,param_8,&local_b4,
                        param_10,&local_b8,param_6,param_11,param_12);
    fVar18 = __real_4e800000;
    if (((longlong)sVar10 <= param_4) && (fVar18 = fVar17, -1 < (longlong)sVar10)) {
      sVar9 = sVar10;
      fVar18 = local_b4;
      fVar19 = local_b4;
      uVar15 = local_b8;
    }
    fVar17 = fVar18;
    if (((param_6 & 2) != 0) &&
       (local_b0[0] = fVar19,
       sVar10 = newLZ_put_array_tans
                          (param_1 + 5,local_res10,param_3,param_4,param_5,param_7,param_8,local_b0,
                           param_11), -1 < (longlong)sVar10)) {
      uVar15 = 1;
      sVar9 = sVar10;
      fVar17 = local_b0[0];
      fVar19 = local_b0[0];
    }
    if (((param_6 & 0x10) != 0) && (((fVar17 < *param_9 || (param_4 < 0x20000)) || (8 < param_12))))
    {
      local_a8[0] = CONCAT44(local_a8[0]._4_4_,0x4e800000);
      sVar10 = newLZ_put_array_sub_split
                         (param_1 + 5,local_res10,param_3,param_4,param_5,param_11,param_12,param_6,
                          param_7,param_8,fVar19,(float *)local_a8);
      if (-1 < (longlong)sVar10) {
        sVar9 = sVar10;
        fVar17 = (float)local_a8[0];
        uVar15 = 5;
      }
    }
  }
LAB_14f3a28e6:
  if (fVar17 < fVar20) {
    lVar14 = ((longlong)(int)uVar15 * 0x40000 + param_4) * 0x40000 + -0x40000 + sVar9;
    *param_1 = (uchar)((ulonglong)lVar14 >> 0x20);
    uVar5 = (uint)lVar14;
    *(uint *)(param_1 + 1) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    *param_9 = fVar17;
    return sVar9 + 5;
  }
  if (fVar20 < *param_9) {
    if (param_4 < 0x40000) {
      if (param_4 + 3 <= lVar14) {
        *param_1 = (uchar)((ulonglong)param_4 >> 0x10);
        param_1[1] = (uchar)((ulonglong)param_4 >> 8);
        param_1[2] = (uchar)param_4;
        memcpy(param_1 + 3,param_3,param_4);
        *param_9 = fVar20;
        return (long64)(param_1 + 3 + (param_4 - (longlong)param_1));
      }
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",0x1e6,
                   "OODLE ERROR : from_len too big !?\n");
      }
      ooLogErrorPost();
    }
  }
  return -1;
}

// newLZ_put_array_huff3_memset @ 14f3a2a00

uchar * __cdecl oo2::newLZ_put_array_huff3_memset(uchar *param_1,long64 param_2,uchar param_3)

{
  uint uVar1;
  longlong lVar2;
  
  param_1[6] = param_3 >> 2 | 0x40;
  lVar2 = param_2 * 0x40000 + 0x1ffffc0003;
  param_1[5] = '\0';
  param_1[7] = param_3 << 6;
  *param_1 = (uchar)((ulonglong)lVar2 >> 0x20);
  uVar1 = (uint)lVar2;
  *(uint *)(param_1 + 1) = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | uVar1 << 0x18;
  return param_1 + 8;
}

// newLZ_put_array_huff3_memset_payload @ 14f3a2a50

uchar * __cdecl oo2::newLZ_put_array_huff3_memset_payload(uchar *param_1,uchar param_2)

{
  *param_1 = '\0';
  param_1[1] = param_2 >> 2 | 0x40;
  param_1[2] = param_2 << 6;
  return param_1 + 3;
}

// newLZ_put_array_memset @ 14f3a2a70

long64 __cdecl
oo2::newLZ_put_array_memset
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,rrArenaAllocator *param_9)

{
  byte bVar1;
  long64 lVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_4 < 6) {
    *param_8 = (float)param_4 + __real_40400000;
    lVar2 = newLZ_put_array_uncompressed(param_1,param_2,param_3,param_4);
    return lVar2;
  }
  if ((param_5 & 0x80) == 0) {
    if (7 < (longlong)param_2 - (longlong)param_1) {
      fVar5 = (*param_7->memcpy)(param_4);
      fVar5 = fVar5 * param_6 + __real_41000000;
      if (fVar5 < *param_8) {
        *param_8 = fVar5;
        bVar1 = *param_3;
        param_1[6] = bVar1 >> 2 | 0x40;
        lVar4 = param_4 * 0x40000 + 0x1ffffc0003;
        param_1[5] = '\0';
        param_1[7] = bVar1 << 6;
        *param_1 = (uchar)((ulonglong)lVar4 >> 0x20);
        uVar3 = (uint)lVar4;
        *(uint *)(param_1 + 1) = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18;
        return 8;
      }
    }
  }
  else if (5 < (longlong)param_2 - (longlong)param_1) {
    fVar5 = (*param_7->memcpy)(param_4);
    fVar5 = fVar5 * param_6 + __real_40c00000;
    if (fVar5 < *param_8) {
      *param_8 = fVar5;
      param_1[5] = *param_3;
      lVar4 = param_4 * 0x40000 + 0x2ffffc0001;
      *param_1 = (uchar)((ulonglong)lVar4 >> 0x20);
      uVar3 = (uint)lVar4;
      *(uint *)(param_1 + 1) = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18;
      return 6;
    }
  }
  return -1;
}

// newLZ_put_array_small_allowed @ 14f3a2be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_small_allowed
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,float param_9,rrArenaAllocator *param_10,
          int param_11,uint *param_12)

{
  size_t _Size;
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStackY_4c8 [32];
  size_t local_468 [2];
  uint local_458 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (param_4 < 0x21) {
    *param_8 = (float)param_4 + __real_40400000;
    lVar7 = newLZ_put_array_uncompressed(param_1,param_2,param_3,param_4);
  }
  else {
    CountHistoArrayU8(param_3,param_4,local_458,0x100,false);
    if (param_12 != (uint *)0x0) {
      lVar7 = 8;
      puVar8 = local_458;
      do {
        uVar2 = *(undefined8 *)(puVar8 + 2);
        uVar3 = *(undefined8 *)(puVar8 + 4);
        uVar4 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)param_12 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_12 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar8 + 8);
        uVar5 = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)(param_12 + 4) = uVar3;
        *(undefined8 *)(param_12 + 6) = uVar4;
        uVar3 = *(undefined8 *)(puVar8 + 0xc);
        uVar4 = *(undefined8 *)(puVar8 + 0xe);
        *(undefined8 *)(param_12 + 8) = uVar2;
        *(undefined8 *)(param_12 + 10) = uVar5;
        uVar2 = *(undefined8 *)(puVar8 + 0x10);
        uVar5 = *(undefined8 *)(puVar8 + 0x12);
        *(undefined8 *)(param_12 + 0xc) = uVar3;
        *(undefined8 *)(param_12 + 0xe) = uVar4;
        uVar3 = *(undefined8 *)(puVar8 + 0x14);
        uVar4 = *(undefined8 *)(puVar8 + 0x16);
        *(undefined8 *)(param_12 + 0x10) = uVar2;
        *(undefined8 *)(param_12 + 0x12) = uVar5;
        uVar2 = *(undefined8 *)(puVar8 + 0x18);
        uVar5 = *(undefined8 *)(puVar8 + 0x1a);
        *(undefined8 *)(param_12 + 0x14) = uVar3;
        *(undefined8 *)(param_12 + 0x16) = uVar4;
        uVar3 = *(undefined8 *)(puVar8 + 0x1c);
        uVar4 = *(undefined8 *)(puVar8 + 0x1e);
        *(undefined8 *)(param_12 + 0x18) = uVar2;
        *(undefined8 *)(param_12 + 0x1a) = uVar5;
        *(undefined8 *)(param_12 + 0x1c) = uVar3;
        *(undefined8 *)(param_12 + 0x1e) = uVar4;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 0x20;
        param_12 = param_12 + 0x20;
      } while (lVar7 != 0);
    }
    lVar7 = newLZ_put_array_histo
                      (param_1,param_2,param_3,param_4,local_458,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11);
  }
  if (lVar7 < 0) {
    lVar7 = -1;
  }
  else if (lVar7 < 0x1005) {
    bVar1 = *param_1;
    newLZ_get_arraylens(param_1,param_1 + lVar7,(long64 *)local_468,0x20000);
    if (bVar1 >> 4 == 0) {
      if (0xfff < (longlong)local_468[0]) {
        return lVar7;
      }
      *(ushort *)param_1 = (ushort)((ushort)local_468[0] | 0x8000) >> 8 | (ushort)local_468[0] << 8;
      memmove(param_1 + 2,param_1 + 3,local_468[0]);
      lVar7 = local_468[0] + 2;
      fVar10 = *param_8 - __real_3f800000;
    }
    else {
      _Size = lVar7 - 5;
      if (0x3ff < (longlong)_Size) {
        return lVar7;
      }
      lVar9 = (local_468[0] - _Size) + -1;
      if (0x3ff < lVar9) {
        return lVar7;
      }
      uVar6 = ((bVar1 >> 4 | 0xfffffff8) << 10 | (uint)lVar9) << 10 | (uint)_Size;
      *(uint *)param_1 = (uVar6 & 0xffffff) >> 0x10 | uVar6 & 0xff00 | ((uint)_Size & 0xff) << 0x10;
      memmove(param_1 + 3,param_1 + 5,_Size);
      lVar7 = lVar7 + -2;
      fVar10 = *param_8 - __real_40000000;
    }
    *param_8 = fVar10;
  }
  return lVar7;
}

// newLZ_put_array_uncomp_header @ 14f3a2e50

uchar * __cdecl oo2::newLZ_put_array_uncomp_header(uchar *param_1,long64 param_2)

{
  param_1[2] = (uchar)param_2;
  *param_1 = (uchar)((ulonglong)param_2 >> 0x10);
  param_1[1] = (uchar)((ulonglong)param_2 >> 8);
  return param_1 + 3;
}

// newLZ_put_array_uncompressed @ 14f3a2e80

long64 __cdecl
oo2::newLZ_put_array_uncompressed(uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4)

{
  if (0x3ffff < param_4) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",0x214,
                 "OODLE ERROR : from_len too big !?\n");
    }
    ooLogErrorPost();
    return -1;
  }
  if ((longlong)param_2 - (longlong)param_1 < param_4 + 3) {
    return -1;
  }
  param_1[2] = (uchar)param_4;
  *param_1 = (uchar)((ulonglong)param_4 >> 0x10);
  param_1[1] = (uchar)((ulonglong)param_4 >> 8);
  memcpy(param_1 + 3,param_3,param_4);
  return param_4 + 3;
}

// newLZ_reput_array_small @ 14f3a2f40

long64 __cdecl oo2::newLZ_reput_array_small(uchar *param_1,long64 param_2,float *param_3)

{
  size_t _Size;
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  size_t local_res10;
  
  if (param_2 < 0x1005) {
    bVar1 = *param_1;
    newLZ_get_arraylens(param_1,param_1 + param_2,(long64 *)&local_res10,0x20000);
    if (bVar1 >> 4 == 0) {
      if ((longlong)local_res10 < 0x1000) {
        *(ushort *)param_1 = (ushort)((ushort)local_res10 | 0x8000) >> 8 | (ushort)local_res10 << 8;
        memmove(param_1 + 2,param_1 + 3,local_res10);
        param_2 = local_res10 + 2;
        *param_3 = *param_3 - __real_3f800000;
      }
    }
    else {
      _Size = param_2 - 5;
      if (((longlong)_Size < 0x400) && (lVar3 = (local_res10 - _Size) + -1, lVar3 < 0x400)) {
        uVar2 = ((bVar1 >> 4 | 0xfffffff8) << 10 | (uint)lVar3) << 10 | (uint)_Size;
        *(uint *)param_1 =
             (uVar2 & 0xffffff) >> 0x10 | uVar2 & 0xff00 | ((uint)_Size & 0xff) << 0x10;
        memmove(param_1 + 3,param_1 + 5,_Size);
        param_2 = param_2 + -2;
        *param_3 = *param_3 - __real_40000000;
      }
    }
  }
  return param_2;
}

// newlz_array_estimate_complen_bits @ 14f3a3080

uint __cdecl oo2::newlz_array_estimate_complen_bits(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  lVar8 = (longlong)param_2;
  if (param_3 < 0x20) {
    if (param_3 != 0) {
      lVar2 = 0;
      if (-1 < lVar8 + -2) {
        do {
          if (*(longlong *)(param_1 + lVar2) != 0) {
            lVar2 = (ulonglong)((int)*(longlong *)(param_1 + lVar2) == 0) + lVar2;
            goto LAB_14f3a30f0;
          }
          lVar2 = lVar2 + 2;
        } while (lVar2 <= lVar8 + -2);
      }
      for (; (lVar2 < lVar8 && (param_1[lVar2] == 0)); lVar2 = lVar2 + 1) {
      }
LAB_14f3a30f0:
      if ((lVar2 < lVar8) && (param_1[lVar2] == param_3)) {
        return 0x30;
      }
    }
    uVar7 = param_3 * 8 + 0x18;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar12 = 0;
    uVar3 = uVar5;
    uVar6 = uVar5;
    uVar13 = uVar5;
    uVar15 = uVar5;
    uVar14 = uVar7;
    if (0 < param_2) {
      do {
        uVar7 = (uint)uVar5;
        uVar14 = (uint)uVar15;
        uVar12 = (uint)uVar6;
        uVar6 = 0;
        iVar10 = (int)uVar3;
        lVar8 = (longlong)(param_2 - iVar10) + -2;
        uVar3 = uVar6;
        if (-1 < lVar8) {
          do {
            if (*(longlong *)(param_1 + (longlong)iVar10 + uVar3) != 0) {
              iVar4 = (uint)((int)*(longlong *)(param_1 + (longlong)iVar10 + uVar3) == 0) +
                      (int)uVar3;
              goto LAB_14f3a3191;
            }
            uVar3 = uVar3 + 2;
          } while ((longlong)uVar3 <= lVar8);
        }
        for (; ((longlong)uVar3 < (longlong)(param_2 - iVar10) &&
               (param_1[(longlong)iVar10 + uVar3] == 0)); uVar3 = uVar3 + 1) {
        }
        iVar4 = (int)uVar3;
LAB_14f3a3191:
        uVar11 = iVar10 + iVar4;
        uVar3 = (ulonglong)uVar11;
        if (iVar4 != 0) {
          uVar1 = (iVar4 - 1U >> 1) + 1;
          iVar10 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          uVar7 = uVar7 + iVar10 * 2 + 2;
        }
        if (param_2 <= (int)uVar11) break;
        puVar9 = param_1 + (int)uVar11;
        do {
          uVar11 = (uint)uVar6;
          uVar14 = *puVar9;
          if (uVar14 == 0) break;
          uVar11 = uVar11 + 1;
          uVar6 = (ulonglong)uVar11;
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar1;
          iVar10 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          puVar9 = puVar9 + 1;
          uVar15 = (ulonglong)((int)uVar15 + iVar10 * 2 + 1);
          uVar13 = uVar13 + (ulonglong)
                            (uint)c_rr_log2_table
                                  [uVar14 * (int)(0x40000000 / (ulonglong)param_3) >> 0x11] *
                            (ulonglong)uVar14;
        } while ((int)uVar1 < param_2);
        uVar14 = (uint)uVar15;
        iVar10 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        uVar12 = uVar12 + uVar11;
        uVar7 = uVar7 + iVar10 * 2 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar6 = (ulonglong)uVar12;
      } while ((int)uVar3 < param_2);
      if (uVar12 == 1) {
        return 0x30;
      }
    }
    if (uVar12 * 8 < uVar7) {
      uVar7 = uVar12 * 8;
    }
    uVar7 = uVar7 + 0x28 + uVar14 + (int)(uVar13 >> 0xd);
  }
  return uVar7;
}

// newlz_array_estimate_huff_J @ 14f3a3270

float __cdecl
oo2::newlz_array_estimate_huff_J
          (uint *param_1,int param_2,long64 param_3,float param_4,OodleSpeedFit *param_5)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1,param_2,(uint)param_3);
  fVar2 = (*param_5->huff3)(param_3,0x80,0x14,__real_40c00000);
  return fVar2 * param_4 + (float)uVar1 * __real_3e000000;
}

// rrAlignUp64 @ 14f3a32e0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3a3300

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrClz32 @ 14f3a3320

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

// rrGetBitLevel_V_NonZero @ 14f3a3340

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

// rrPrintfKill @ 14f3a3360

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPrintf_nop @ 14f3a3380

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff @ 14f3a3390

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrVarBits_CountBits_EliasGamma @ 14f3a33a0

int __cdecl oo2::rrVarBits_CountBits_EliasGamma(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 + 1 != 0) {
    for (; param_1 + 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1;
}

// speedfit_estimate_entropy_array_time @ 14f3a33c0

float __cdecl oo2::speedfit_estimate_entropy_array_time(OodleSpeedFit *param_1,long64 param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f3a33db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar1;
}

// dtor$0 @ 150284d20

void `oo2::newLZ_put_array_histo'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x90));
  return;
}

