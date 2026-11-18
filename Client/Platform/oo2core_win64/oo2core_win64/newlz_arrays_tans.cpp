// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 23

// log2tabled<13> @ 14f3d0b20

int __cdecl oo2::log2tabled<13>(uint param_1)

{
  return c_rr_log2_table[param_1];
}

// log2tabled_big<13> @ 14f3d0b40

int __cdecl oo2::log2tabled_big<13>(uint param_1)

{
  return c_rr_log2_table[param_1];
}

// rrAlignUpPointer<unsigned_char> @ 14f3d0b60

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// OodleFree @ 14f3d0b80

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3d0b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3d0b90

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

// RR_GET32_NATIVE @ 14f3d0bd0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3d0be0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3d0bf0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// newLZ_put_array_tans @ 14f3d0c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_tans
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,rrArenaAllocator *param_9)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong *puVar7;
  void *pvVar8;
  long64 lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStackY_7b8 [32];
  _rrVarBits_ local_718;
  newlz_tans_Encoder *local_6f8;
  ulonglong local_6f0;
  ulonglong local_6e0;
  uchar *local_6d8;
  uchar *local_6d0;
  rrArenaAllocator *local_6c0;
  uchar *local_6b8;
  float *local_6b0;
  rrArenaAllocator *local_6a8;
  void *local_6a0;
  ulonglong local_698;
  undefined8 local_690;
  uint local_688 [256];
  ulonglong local_288 [64];
  ulonglong local_88 [9];
  
  local_690 = 0xfffffffffffffffe;
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_6b0 = param_8;
  local_6c0 = param_9;
  if (param_4 < 0x20) {
    return -1;
  }
  fVar1 = *param_8;
  uVar16 = param_4 - 5;
  param_5[param_3[uVar16]] = param_5[param_3[uVar16]] - 1;
  param_5[param_3[param_4 + -4]] = param_5[param_3[param_4 + -4]] - 1;
  param_5[param_3[param_4 + -3]] = param_5[param_3[param_4 + -3]] - 1;
  param_5[param_3[param_4 + -2]] = param_5[param_3[param_4 + -2]] - 1;
  param_5[param_3[param_4 + -1]] = param_5[param_3[param_4 + -1]] - 1;
  local_6e0 = uVar16;
  local_6d8 = param_2;
  local_6b8 = param_1;
  uVar4 = rrIlog2roundf((float)(uVar16 & 0xffffffff));
  iVar15 = 0xb;
  if ((int)(uVar4 - 2) < 0xb) {
    iVar15 = uVar4 - 2;
  }
  iVar3 = 8;
  if (8 < iVar15) {
    iVar3 = iVar15;
  }
  iVar12 = 1 << ((byte)iVar3 & 0x1f);
  iVar15 = 0x100;
  lVar10 = 0x100;
  puVar6 = param_5 + 0xfe;
  do {
    if (puVar6[1] != 0) break;
    if (*puVar6 != 0) {
      iVar15 = iVar15 + -1;
      break;
    }
    if (puVar6[-1] != 0) {
      iVar15 = iVar15 + -2;
      break;
    }
    if (puVar6[-2] != 0) {
      iVar15 = iVar15 + -3;
      break;
    }
    lVar10 = lVar10 + -4;
    puVar6 = puVar6 + -4;
    iVar15 = iVar15 + -4;
  } while (0 < lVar10);
  iVar5 = normalize_counts_v6(local_688,iVar12,param_5,(int)uVar16,iVar15);
  param_5[param_3[uVar16]] = param_5[param_3[uVar16]] + 1;
  param_5[param_3[param_4 + -4]] = param_5[param_3[param_4 + -4]] + 1;
  param_5[param_3[param_4 + -3]] = param_5[param_3[param_4 + -3]] + 1;
  param_5[param_3[param_4 + -2]] = param_5[param_3[param_4 + -2]] + 1;
  param_5[param_3[param_4 + -1]] = param_5[param_3[param_4 + -1]] + 1;
  if (iVar5 < 2) {
    return -1;
  }
  fVar21 = (*param_7->tans)(uVar16,(longlong)iVar5,(longlong)iVar12);
  lVar10 = (longlong)(fVar1 - (fVar21 * param_6 + __real_40a00000));
  if (lVar10 < 4) {
    return -1;
  }
  lVar20 = (longlong)iVar15;
  memset(local_688 + lVar20,0,(longlong)(0x100 - iVar15) << 2);
  local_718.m_cur = (uchar *)local_288;
  local_718.m_end = (uchar *)local_88;
  local_718.m_bits = (ulong64)(iVar3 + -8);
  local_718.m_inv_bitlen = 0x3c;
  newlz_tans_PackCounts(&local_718,iVar3,local_688,iVar15,iVar5);
  lVar17 = 0x3f - local_718.m_inv_bitlen >> 3;
  uVar13 = local_718.m_bits << ((char)local_718.m_inv_bitlen + 1U & 0x3f);
  *(ulonglong *)local_718.m_cur =
       uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
       (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
       (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
  local_718.m_cur = (uchar *)((longlong)local_718.m_cur + lVar17);
  local_718.m_inv_bitlen = local_718.m_inv_bitlen + lVar17 * 8;
  if (-local_718.m_inv_bitlen != -0x3f && -1 < -local_718.m_inv_bitlen + 0x3f) {
    uVar4 = (int)local_718.m_inv_bitlen + 1U & 7;
    if (uVar4 != 0) {
      local_718.m_bits = local_718.m_bits << (sbyte)uVar4;
      local_718.m_inv_bitlen = local_718.m_inv_bitlen - (ulonglong)uVar4;
    }
    while (7 < 0x3f - local_718.m_inv_bitlen) {
      *local_718.m_cur = (uchar)(local_718.m_bits >> (0x37U - (char)local_718.m_inv_bitlen & 0x3f));
      local_718.m_cur = local_718.m_cur + 1;
      local_718.m_inv_bitlen = local_718.m_inv_bitlen + 8;
      local_718.m_bits =
           local_718.m_bits &
           *(uint *)((longlong)c_rrBitMask64 + local_718.m_inv_bitlen * -4 + 0x5c);
    }
  }
  local_6d0 = local_718.m_cur +
              (((longlong)
                ((ulonglong)((uint)(0x46 - local_718.m_inv_bitlen >> 0x3f) & 7) +
                (0x46 - local_718.m_inv_bitlen)) >> 3) - (longlong)local_288);
  lVar17 = 0;
  if (0 < iVar15) {
    lVar19 = (longlong)local_688 - (longlong)param_5;
    do {
      iVar12 = *(int *)(lVar19 + (longlong)param_5);
      if (iVar12 != 0) {
        lVar17 = lVar17 + (longlong)c_rr_log2_table[(uint)(iVar12 << (0xd - (byte)iVar3 & 0x1f))] *
                          (ulonglong)*param_5;
      }
      param_5 = param_5 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (lVar10 <= (longlong)(local_6d0 + (lVar17 >> 0x10))) {
    return -1;
  }
  uVar13 = newlz_tans_Encoder_Size(iVar3);
  local_6a8 = param_9;
  local_6f0 = uVar13;
  local_698 = uVar13;
  if (param_9 == (rrArenaAllocator *)0x0) {
    pvVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar13,0x10);
    uVar18 = uVar13;
  }
  else {
    uVar18 = uVar13 + 0xf & 0xfffffffffffffff0;
    uVar14 = (ulonglong)(-(uint)(param_9->m_unorderedStart != 0) & 0x10);
    pvVar8 = (void *)param_9->m_cur;
    if (uVar18 + uVar14 + (longlong)pvVar8 <= param_9->m_size + param_9->m_base) {
      puVar11 = (ulonglong *)(uVar18 + (longlong)pvVar8);
      param_9->m_cur = (ulong64)puVar11;
      if (param_9->m_unorderedStart != 0) {
        *puVar11 = uVar18;
        puVar11[1] = 0;
        param_9->m_cur = param_9->m_cur + uVar14;
        puVar11 = (ulonglong *)param_9->m_cur;
      }
      puVar7 = (ulonglong *)param_9->m_cur_max;
      if ((ulonglong *)param_9->m_cur_max <= puVar11) {
        puVar7 = puVar11;
      }
      param_9->m_cur_max = (ulong64)puVar7;
      goto LAB_14f3d106f;
    }
    if (param_9->m_allowFallback == 0) {
      pvVar8 = (void *)0x0;
      goto LAB_14f3d106f;
    }
    pvVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar18,0x10);
  }
  if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(uVar18);
  }
LAB_14f3d106f:
  local_6a0 = pvVar8;
  if ((pvVar8 == (void *)0x0) &&
     (iVar12 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar12 != 0)) {
    pcVar2 = (code *)swi(3);
    lVar9 = (*pcVar2)();
    return lVar9;
  }
  local_6f8 = newlz_tans_Encoder_Init(pvVar8,uVar13,iVar3);
  newlz_tans_Encoder_Fill(local_6f8,local_688,iVar15);
                    /* WARNING: Could not recover jumptable at 0x00014f3d1166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar9 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                    *(uint *)(&DAT_14f3d2410 + (longlong)((int)uVar16 % 10) * 4)))
                    (switchD_1501dbc7b::caseD_1.e_magic +
                     *(uint *)(&DAT_14f3d2410 + (longlong)((int)uVar16 % 10) * 4),
                     &switchD_1501dbc7b::caseD_1,param_3 + param_4 + -6);
  return lVar9;
}

// newlz_get_array_tans @ 14f3d2480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

long64 __cdecl
oo2::newlz_get_array_tans
          (uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,uchar *param_5,uchar *param_6
          )

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  long64 lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  size_t _Size;
  int iVar9;
  ulonglong uVar10;
  uchar *puVar11;
  uint uVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  undefined1 auStack_638 [32];
  int local_618;
  uchar *local_610;
  _rrVarBits_ local_608;
  ulonglong local_5e8;
  long64 local_5e0;
  newlz_tans_Decoder *local_5d8;
  long64 local_5d0;
  KrakenTansState local_5c8;
  newlz_tans_UnpackedCounts local_578;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_638;
  puVar11 = param_1 + param_2;
  local_610 = param_3;
  local_5e0 = param_4;
  local_5d0 = param_2;
  if (param_2 < 8) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3d264e;
    pcVar13 = "OODLE ERROR : corruption : comp_len >= 8\n";
    iVar9 = 0x4fa;
  }
  else if (param_4 < 5) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3d264e;
    pcVar13 = "OODLE ERROR : corruption : to_len >= 5\n";
    iVar9 = 0x4fb;
  }
  else {
    uVar6 = 0;
    puVar18 = (ulonglong *)(param_1 + 1);
    lVar14 = (longlong)puVar11 - (longlong)puVar18;
    uVar16 = (ulonglong)*param_1 << 0x38;
    if (lVar14 < 8) {
      uVar17 = uVar6;
      if (0 < lVar14) {
        uVar17 = (ulonglong)(byte)*puVar18;
      }
      uVar7 = uVar6;
      if (lVar14 != 1 && -1 < lVar14 + -1) {
        uVar7 = (ulonglong)param_1[2];
      }
      uVar15 = uVar6;
      if (lVar14 != 2 && -1 < lVar14 + -2) {
        uVar15 = (ulonglong)param_1[3];
      }
      uVar3 = uVar6;
      if (lVar14 != 3 && -1 < lVar14 + -3) {
        uVar3 = (ulonglong)param_1[4];
      }
      lVar14 = (longlong)puVar11 - (longlong)(param_1 + 5);
      uVar10 = uVar6;
      if (0 < lVar14) {
        uVar10 = (ulonglong)param_1[5];
      }
      uVar8 = uVar6;
      if (lVar14 != 1 && -1 < lVar14 + -1) {
        uVar8 = (ulonglong)param_1[6];
      }
      if (lVar14 != 2 && -1 < lVar14 + -2) {
        uVar6 = (ulonglong)param_1[7];
      }
      uVar6 = ((((((uVar17 << 8 | uVar7) << 8 | uVar15) << 8 | uVar3) << 8 | uVar10) << 8 | uVar8)
               << 8 | uVar6) << 8;
    }
    else {
      uVar6 = *puVar18;
      uVar6 = (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
              (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
              (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    }
    local_608.m_cur = param_1 + 7;
    uVar6 = uVar6 >> 8 | uVar16;
    local_608.m_end = puVar11;
    if ((longlong)uVar6 < 0) {
      local_608.m_bits = uVar16;
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3d264e;
      pcVar13 = "OODLE ERROR : corruption : flag == 0\n";
      iVar9 = 0x50c;
    }
    else {
      local_608.m_bits = uVar6 << 3;
      local_608.m_inv_bitlen = 10;
      local_5e8 = (uVar16 & 0x7fffffffffffffff) >> 0x3d;
      iVar9 = (uint)(uVar6 * 2 >> 0x3e) + 8;
      local_618 = iVar9;
      bVar1 = newlz_tans_UnPackCounts(&local_608,iVar9,&local_578);
      if (!bVar1) {
        return -1;
      }
      puVar18 = (ulonglong *)
                (local_608.m_cur +
                -((longlong)
                  ((0x3f - local_608.m_inv_bitlen) +
                  (ulonglong)((uint)(0x3f - local_608.m_inv_bitlen >> 0x3f) & 7)) >> 3));
      _Size = (longlong)puVar11 - (longlong)puVar18;
      if (7 < (longlong)_Size) {
LAB_14f3d2736:
        lVar4 = newlz_tans_Decoder_Size(iVar9);
        if ((longlong)param_6 - (longlong)param_5 < 0x10) {
          return -1;
        }
        if ((longlong)param_6 - (longlong)((ulonglong)(param_5 + 0xf) & 0xfffffffffffffff0) < lVar4)
        {
          return -1;
        }
        local_5d8 = newlz_tans_Decoder_Init
                              ((void *)((ulonglong)(param_5 + 0xf) & 0xfffffffffffffff0),lVar4,iVar9
                              );
        newlz_tans_Decoder_Fill(local_5d8,&local_578);
        uVar6 = *(ulonglong *)(puVar11 + -8);
        uVar12 = local_618 * -3 + 0x40;
        bVar5 = (char)local_5e8 + 8;
        local_5c8.tans_state[4] = (1 << (sbyte)iVar9) - 1;
        local_5c8.decodeptr = local_610;
        local_5c8.decodeend = local_610 + local_5e0 + -5;
        local_5c8.tans_state[0] = local_5c8.tans_state[4] & (uint)*puVar18;
        uVar17 = *puVar18 >> (bVar5 & 0x3f);
        uVar16 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                 (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8;
        local_5c8.bitc[0] = uVar12 & 7;
        local_5c8.tans_state[2] = local_5c8.tans_state[4] & (uint)uVar17;
        uVar17 = uVar17 >> (bVar5 & 0x3f);
        local_5c8.tans_state[1] = (uint)uVar16 & local_5c8.tans_state[4];
        local_5c8.bits[0] = (uint)(uVar17 >> (bVar5 & 0x3f));
        uVar6 = (uVar16 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                 (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38) >> (bVar5 & 0x3f);
        local_5c8.bitp[0] = (uchar *)((longlong)puVar18 + (8 - ((longlong)(int)uVar12 >> 3)));
        local_5c8.bitp[1] =
             (uchar *)(((longlong)(0x40 - (ulonglong)(uint)(local_618 * 2)) >> 3) +
                      (longlong)(puVar11 + -8));
        local_5c8.bits[1] = (uint)(uVar6 >> (bVar5 & 0x3f));
        local_5c8.table = local_5d8->decode_table_U8;
        local_5c8.bitc[1] = local_618 * -2 & 7;
        local_5c8.tans_state[3] = local_5c8.tans_state[4] & (uint)uVar6;
        local_5c8.tans_state[4] = local_5c8.tans_state[4] & (uint)uVar17;
        if ((char)g_rrCPUx86_feature_flags < '\0') {
          if ((g_rrCPUx86_feature_flags >> 0xe & 1) == 0) {
            cVar2 = oodle_newLZ_tans_x64_bmi2_kern();
          }
          else {
            cVar2 = oodle_newLZ_tans_x64_bmi2_rpl_kern();
          }
        }
        else {
          cVar2 = oodle_newLZ_tans_x64_generic_kern(&local_5c8);
        }
        if (cVar2 == '\0') {
          return -1;
        }
        bVar1 = tansx2_finish(&local_5c8);
        if (!bVar1) {
          return -1;
        }
        return local_5d0;
      }
      if (0 < (longlong)_Size) {
        local_58 = 0;
        local_68 = 0;
        uStack_60 = 0;
        memcpy(&uStack_60,puVar18,_Size);
        puVar11 = (uchar *)((longlong)&uStack_60 + _Size);
        puVar18 = &uStack_60;
        goto LAB_14f3d2736;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3d264e;
      pcVar13 = "OODLE ERROR : corruption : tans_compLen > 0\n";
      iVar9 = 0x52e;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_tans.cpp",iVar9,pcVar13);
LAB_14f3d264e:
  ooLogErrorPost();
  return -1;
}

// rrAlignUp64 @ 14f3d2900

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d2920

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3d2940

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3d2960

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrIlog2round @ 14f3d2970

uint __cdecl oo2::rrIlog2round(uint param_1)

{
  uint uVar1;
  
  uVar1 = rrIlog2roundf((float)param_1);
  return uVar1;
}

// rrPtrDiff @ 14f3d2990

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrVB_Get32BE_Masked @ 14f3d29a0

uint __cdecl oo2::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  uVar3 = 0;
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
  }
  if (lVar1 == 1 || lVar1 + -1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  if (lVar1 == 2 || lVar1 + -2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)param_1[2];
  }
  if (lVar1 != 3 && -1 < lVar1 + -3) {
    uVar3 = (uint)param_1[3];
  }
  return ((uVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar3;
}

// rrVB_Get64BE_Masked @ 14f3d2a20

ulong64 __cdecl oo2::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  lVar6 = (longlong)param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < lVar6) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}

// tansx2_finish @ 14f3d2b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl oo2::tansx2_finish(KrakenTansState *param_1)

{
  tans_decode_entry_U8 *ptVar1;
  uchar *puVar2;
  uint uVar3;
  uchar *puVar4;
  size_t _Size;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  tans_decode_entry_U8 *ptVar10;
  uint uVar11;
  char *pcVar12;
  ulonglong uVar13;
  void *_Src;
  ulonglong *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  uint local_70;
  size_t local_68;
  uint local_60;
  uint local_5c;
  tans_decode_entry_U8 *local_58;
  ulonglong local_50 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar14 = (ulonglong *)param_1->bitp[0];
  puVar5 = (ulonglong *)param_1->bitp[1];
  local_60 = param_1->bits[0];
  local_74 = param_1->bits[1];
  uVar8 = param_1->bitc[0];
  uVar6 = param_1->bitc[1];
  local_68 = 0;
  if (puVar5 < puVar14) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3d3023;
    pcVar12 = "OODLE ERROR : corruption : in1 >= in0\n";
    iVar9 = 0x313;
  }
  else {
    puVar2 = param_1->decodeend;
    ptVar10 = param_1->table;
    uVar7 = param_1->tans_state[0];
    local_78 = param_1->tans_state[2];
    local_70 = param_1->tans_state[4];
    uVar15 = param_1->tans_state[1];
    uVar16 = param_1->tans_state[3];
    local_58 = ptVar10;
    for (puVar4 = param_1->decodeptr; uVar3 = local_74, local_5c = uVar7, puVar4 < puVar2;
        puVar4 = puVar4 + 10) {
      uVar7 = uVar8;
      if ((longlong)puVar5 - (longlong)puVar14 < 10) {
        if (local_68 != 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3d3023;
          pcVar12 = "OODLE ERROR : corruption : final_nbytes == 0\n";
          iVar9 = 0x33a;
          goto LAB_14f3d3018;
        }
        uVar7 = uVar8 & 7;
        _Src = (void *)((longlong)puVar14 - (ulonglong)(uVar8 >> 3));
        uVar8 = uVar6 >> 3;
        uVar6 = uVar6 & 7;
        _Size = (longlong)puVar5 + ((ulonglong)uVar8 - (longlong)_Src);
        local_68 = _Size;
        if ((longlong)_Size < 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3d3023;
          pcVar12 = "OODLE ERROR : corruption : in_left >= 0\n";
          iVar9 = 0x340;
          goto LAB_14f3d3018;
        }
        memcpy(local_50,_Src,_Size);
        memcpy((void *)((longlong)&local_30 - _Size),_Src,_Size);
        puVar14 = local_50;
        puVar5 = &local_30;
        local_68 = 0x20 - local_68;
        ptVar10 = local_58;
      }
      uVar11 = local_60 | (int)*puVar14 << ((byte)uVar7 & 0x1f);
      puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(0x1f - uVar7 >> 3));
      ptVar1 = ptVar10 + local_5c;
      *puVar4 = ptVar10[local_5c].sym;
      uVar8 = (uVar7 | 0x18) - (uint)ptVar1->len;
      uVar7 = (ptVar1->mask & uVar11) + (uint)ptVar1->nextst;
      uVar11 = uVar11 >> (ptVar1->len & 0x1f);
      uVar3 = local_74;
      if (puVar2 <= puVar4 + 1) break;
      ptVar1 = ptVar10 + uVar15;
      puVar4[1] = ptVar10[uVar15].sym;
      uVar8 = uVar8 - ptVar1->len;
      uVar15 = (ptVar1->mask & uVar11) + (uint)ptVar1->nextst;
      if (puVar2 <= puVar4 + 2) break;
      uVar3 = (int)*puVar14 << ((byte)uVar8 & 0x1f) | uVar11 >> (ptVar1->len & 0x1f);
      puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(0x1f - uVar8 >> 3));
      ptVar1 = ptVar10 + local_78;
      puVar4[2] = ptVar10[local_78].sym;
      uVar8 = (uVar8 | 0x18) - (uint)ptVar1->len;
      local_78 = (ptVar1->mask & uVar3) + (uint)ptVar1->nextst;
      uVar3 = uVar3 >> (ptVar1->len & 0x1f);
      if (puVar2 <= puVar4 + 3) break;
      ptVar1 = ptVar10 + uVar16;
      puVar4[3] = ptVar10[uVar16].sym;
      uVar8 = uVar8 - ptVar1->len;
      uVar16 = (ptVar1->mask & uVar3) + (uint)ptVar1->nextst;
      if (puVar2 <= puVar4 + 4) break;
      local_60 = (int)*puVar14 << ((byte)uVar8 & 0x1f) | uVar3 >> (ptVar1->len & 0x1f);
      puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(0x1f - uVar8 >> 3));
      ptVar1 = ptVar10 + local_70;
      puVar4[4] = ptVar10[local_70].sym;
      uVar8 = (uVar8 | 0x18) - (uint)ptVar1->len;
      local_70 = (ptVar1->mask & local_60) + (uint)ptVar1->nextst;
      local_60 = local_60 >> (ptVar1->len & 0x1f);
      if (puVar2 <= puVar4 + 5) break;
      uVar11 = *(uint *)((longlong)puVar5 + -4);
      local_74 = local_74 |
                 (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) << ((byte)uVar6 & 0x1f);
      puVar4[5] = ptVar10[uVar7].sym;
      puVar5 = (ulonglong *)((longlong)puVar5 - (ulonglong)(0x1f - uVar6 >> 3));
      uVar13 = (ulonglong)uVar7;
      uVar7 = (ptVar10[uVar7].mask & local_74) + (uint)ptVar10[uVar7].nextst;
      local_74 = local_74 >> (ptVar10[uVar13].len & 0x1f);
      uVar6 = (uVar6 | 0x18) - (uint)ptVar10[uVar13].len;
      local_5c = uVar7;
      if (puVar2 <= puVar4 + 6) break;
      ptVar1 = ptVar10 + uVar15;
      puVar4[6] = ptVar10[uVar15].sym;
      uVar6 = uVar6 - ptVar1->len;
      uVar15 = (ptVar1->mask & local_74) + (uint)ptVar1->nextst;
      if (puVar2 <= puVar4 + 7) break;
      uVar3 = *(uint *)((longlong)puVar5 + -4);
      uVar3 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <<
              ((byte)uVar6 & 0x1f) | local_74 >> (ptVar1->len & 0x1f);
      puVar5 = (ulonglong *)((longlong)puVar5 - (ulonglong)(0x1f - uVar6 >> 3));
      ptVar1 = ptVar10 + local_78;
      puVar4[7] = ptVar10[local_78].sym;
      uVar6 = (uVar6 | 0x18) - (uint)ptVar1->len;
      local_78 = (ptVar1->mask & uVar3) + (uint)ptVar1->nextst;
      uVar3 = uVar3 >> (ptVar1->len & 0x1f);
      if (puVar2 <= puVar4 + 8) break;
      ptVar1 = ptVar10 + uVar16;
      puVar4[8] = ptVar10[uVar16].sym;
      uVar6 = uVar6 - ptVar1->len;
      uVar16 = (ptVar1->mask & uVar3) + (uint)ptVar1->nextst;
      if (puVar2 <= puVar4 + 9) break;
      uVar11 = *(uint *)((longlong)puVar5 + -4);
      local_74 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) << ((byte)uVar6 & 0x1f) | uVar3 >> (ptVar1->len & 0x1f);
      puVar5 = (ulonglong *)((longlong)puVar5 - (ulonglong)(0x1f - uVar6 >> 3));
      ptVar1 = ptVar10 + local_70;
      puVar4[9] = ptVar10[local_70].sym;
      uVar6 = (uVar6 | 0x18) - (uint)ptVar1->len;
      local_70 = (ptVar1->mask & local_74) + (uint)ptVar1->nextst;
      local_74 = local_74 >> (ptVar1->len & 0x1f);
    }
    local_74 = uVar3;
    if ((((ulonglong)(uVar6 >> 3) + (ulonglong)(uVar8 >> 3)) - (longlong)puVar14) + (longlong)puVar5
        == local_68) {
      if ((local_70 | uVar16 | local_78 | uVar15 | uVar7) < 0x100) {
        *puVar2 = (uchar)uVar7;
        puVar2[1] = (uchar)uVar15;
        puVar2[2] = (uchar)local_78;
        puVar2[3] = (uchar)uVar16;
        puVar2[4] = (uchar)local_70;
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3d3023;
      pcVar12 = "OODLE ERROR : corruption : tans_states_or <= 255\n";
      iVar9 = 0x3b6;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3d3023;
      pcVar12 = "OODLE ERROR : corruption : rrPtrDiff(in1 - in0) == (SINTa)final_nbytes\n";
      iVar9 = 0x3af;
    }
  }
LAB_14f3d3018:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_tans.cpp",iVar9,pcVar12);
LAB_14f3d3023:
  ooLogErrorPost();
  return false;
}

// tansx2_x64_asm @ 14f3d3080

bool __cdecl oo2::tansx2_x64_asm(KrakenTansState *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = oodle_newLZ_tans_x64_generic_kern();
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = tansx2_finish(param_1);
  return bVar2;
}

// tansx2_x64_bmi2_asm @ 14f3d30c0

bool __cdecl oo2::tansx2_x64_bmi2_asm(KrakenTansState *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = oodle_newLZ_tans_x64_bmi2_kern();
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = tansx2_finish(param_1);
  return bVar2;
}

// tansx2_x64_bmi2_rpl_asm @ 14f3d3100

bool __cdecl oo2::tansx2_x64_bmi2_rpl_asm(KrakenTansState *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = oodle_newLZ_tans_x64_bmi2_rpl_kern();
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = tansx2_finish(param_1);
  return bVar2;
}

// dtor$0 @ 150285500

void `oo2::newLZ_put_array_tans'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x110));
  return;
}

