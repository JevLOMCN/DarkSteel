// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 302

// _mi_process_init @ 141d8dfa0

int __cdecl _mi_process_init(void)

{
  char *pcVar1;
  ulong64 uVar2;
  mi_option_desc_s *pmVar3;
  longlong lVar4;
  bool bVar5;
  
  mi_heap_main_init();
  os_preloading = false;
  atexit(mi_process_done);
  LOCK();
  uVar2 = out_len + 1;
  UNLOCK();
  if (0x8000 < out_len) {
    out_len = 0x8000;
  }
  bVar5 = os_preloading == false;
  pcVar1 = out_buf + out_len;
  out_len = uVar2;
  *pcVar1 = '\0';
  if (bVar5) {
    _cputs(out_buf);
  }
  *pcVar1 = '\n';
  mi_out_default = mi_out_buf_stderr;
  pmVar3 = options;
  lVar4 = 0;
  do {
    if (pmVar3->init == UNINIT) {
      mi_option_init(pmVar3);
    }
    if (lVar4 != 2) {
      _mi_verbose_message("option \'%s\': %ld\n");
    }
    lVar4 = lVar4 + 1;
    pmVar3 = pmVar3 + 1;
  } while ((longlong)pmVar3 < 0x154b878e0);
  if (options[0x14].init == UNINIT) {
    mi_option_init(options + 0x14);
  }
  mi_max_error_count = (ulong64)options[0x14].value;
  if (options[0x15].init == UNINIT) {
    mi_option_init(options + 0x15);
  }
  mi_max_warning_count = (ulong64)options[0x15].value;
  mi_process_init();
  if (mi_redirected != false) {
    _mi_verbose_message("malloc is redirected.\n");
  }
  return 0;
}

// _mi_abandoned_await_readers @ 141d8e0d0

void __cdecl _mi_abandoned_await_readers(void)

{
  do {
  } while (abandoned_readers != 0);
  return;
}

// _mi_abandoned_reclaim_all @ 141d8e0f0

void __cdecl _mi_abandoned_reclaim_all(mi_heap_s *param_1,mi_segments_tld_s *param_2)

{
  mi_segment_s *pmVar1;
  
  pmVar1 = mi_abandoned_pop();
  while (pmVar1 != (mi_segment_s *)0x0) {
    mi_segment_reclaim(pmVar1,param_1,0,(bool *)0x0,param_2);
    pmVar1 = mi_abandoned_pop();
  }
  return;
}

// _mi_arena_alloc @ 141d8e150

void * __cdecl
_mi_arena_alloc(ulong64 param_1,bool *param_2,bool *param_3,bool *param_4,bool *param_5,
               ulong64 *param_6,mi_os_tld_s *param_7)

{
  void *pvVar1;
  
  pvVar1 = _mi_arena_alloc_aligned(param_1,0x800000,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return pvVar1;
}

// _mi_arena_alloc_aligned @ 141d8e1a0

void * __cdecl
_mi_arena_alloc_aligned
          (ulong64 param_1,ulong64 param_2,bool *param_3,bool *param_4,bool *param_5,bool *param_6,
          ulong64 *param_7,mi_os_tld_s *param_8)

{
  ulonglong uVar1;
  bool bVar2;
  bool *pbVar3;
  ulong64 *puVar4;
  int iVar5;
  void *pvVar6;
  ulong64 uVar7;
  bool **ppbVar8;
  ulong64 uVar9;
  bool **ppbVar10;
  bool bVar11;
  
  puVar4 = param_7;
  pbVar3 = param_6;
  param_6._0_1_ = 0;
  *param_7 = 0;
  *pbVar3 = false;
  ppbVar10 = &param_6;
  if (param_4 != (bool *)0x0) {
    ppbVar10 = (bool **)param_4;
  }
  *param_5 = false;
  iVar5 = _mi_os_numa_node(param_8);
  if (((param_1 < 0x400000) || (0x800000 < param_2)) ||
     (pvVar6 = mi_arena_allocate(iVar5,param_1,param_2,param_3,(bool *)ppbVar10,param_5,pbVar3,
                                 puVar4,param_8), pvVar6 == (void *)0x0)) {
    if (options[0x12].init == UNINIT) {
      mi_option_init(options + 0x12);
    }
    if (options[0x12].value == 0) {
      *pbVar3 = true;
      *puVar4 = 0;
      bVar2 = *param_3;
      pvVar6 = (void *)0x0;
      if (param_1 != 0) {
        uVar7 = _mi_os_good_alloc_size(param_1);
        uVar1 = os_page_size - 1;
        if ((os_page_size & uVar1) == 0) {
          uVar9 = ~uVar1 & uVar1 + param_2;
        }
        else {
          uVar9 = ((uVar1 + param_2) / os_page_size) * os_page_size;
        }
        bVar11 = false;
        param_7._0_1_ = 0;
        ppbVar8 = (bool **)&param_7;
        if (ppbVar10 != (bool **)0x0) {
          bVar11 = *(bool *)ppbVar10;
          param_7._0_1_ = bVar11;
          *(bool *)ppbVar10 = false;
          ppbVar8 = ppbVar10;
        }
        pvVar6 = mi_os_mem_alloc_aligned(uVar7,uVar9,bVar2,bVar11,(bool *)ppbVar8,&_mi_stats_main);
        if (pvVar6 != (void *)0x0) {
          *param_5 = *(bool *)ppbVar10;
        }
      }
    }
    else {
      pvVar6 = (void *)0x0;
    }
  }
  return pvVar6;
}

// _mi_arena_free @ 141d8e340

void __cdecl
_mi_arena_free(void *param_1,ulong64 param_2,ulong64 param_3,bool param_4,mi_os_tld_s *param_5)

{
  longlong lVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    if (param_3 == 0) {
      uVar3 = _mi_os_good_alloc_size(param_2);
      mi_os_mem_free(param_1,uVar3,param_4,&_mi_stats_main);
      return;
    }
    uVar4 = param_2 + 0x7fffff >> 0x17;
    lVar1 = *(longlong *)(&DAT_154f914f8 + (param_3 & 0xff) * 8);
    if (lVar1 == 0) {
      _mi_error_message(0x16,"trying to free from non-existent arena: %p, size %zu, memid: 0x%zx\n")
      ;
    }
    else if (param_3 >> 0xe < *(ulonglong *)(lVar1 + 0x10)) {
      if (*(char *)(lVar1 + 0x1d) == '\0') {
        _mi_os_decommit(param_1,uVar4 << 0x17,param_5->stats);
        _mi_bitmap_unclaim_across
                  (*(ulong64 **)(lVar1 + 0x30),*(ulong64 *)(lVar1 + 0x10),uVar4,param_3 >> 8);
      }
      bVar2 = _mi_bitmap_unclaim_across
                        ((ulong64 *)(lVar1 + 0x38),*(ulong64 *)(lVar1 + 0x10),uVar4,param_3 >> 8);
      if (!bVar2) {
        _mi_error_message(0xb,"trying to free an already freed block: %p, size %zu\n");
      }
    }
    else {
      _mi_error_message(0x16,
                        "trying to free from non-existent arena block: %p, size %zu, memid: 0x%zx\n"
                       );
    }
  }
  return;
}

// _mi_bin @ 141d8e4a0

uchar __cdecl _mi_bin(ulong64 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 + 7 >> 3;
  if (uVar2 < 2) {
    return '\x01';
  }
  if (uVar2 < 9) {
    return (char)uVar2 + 1U & 0xfe;
  }
  if (0x4000 < uVar2) {
    return 'I';
  }
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) {
    return 0xfd;
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (((byte)(uVar2 >> ((char)lVar1 - 2U & 0x3f)) & 3) - 3) + (char)lVar1 * '\x04';
}

// _mi_bin_size @ 141d8e500

ulong64 __cdecl _mi_bin_size(uchar param_1)

{
  return _mi_heap_empty.pages[param_1].block_size;
}

// _mi_bitmap_claim @ 141d8e520

bool __cdecl
_mi_bitmap_claim(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,bool *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_3 < 0x40) {
    uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << ((byte)param_4 & 0x3f);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  uVar1 = param_1[param_4 >> 6];
  do {
    LOCK();
    uVar2 = param_1[param_4 >> 6];
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      param_1[param_4 >> 6] = uVar1 | uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar4);
  if (param_5 != (bool *)0x0) {
    *param_5 = (uVar3 & uVar2) != uVar3;
  }
  return (uVar3 & uVar2) == 0;
}

// _mi_bitmap_claim_across @ 141d8e5a0

bool __cdecl
_mi_bitmap_claim_across
          (ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,bool *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar7 = (uint)param_4 & 0x3f;
  uVar9 = param_4 >> 6;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar5 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar6 = 0;
      uVar1 = 0;
      uVar8 = 0;
    }
    else {
      uVar5 = 0xffffffffffffffff;
      uVar1 = 0;
      uVar6 = 0;
      uVar8 = 0;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    uVar1 = 0x40 - (ulonglong)uVar7;
    if (uVar1 < 0x40) {
      uVar5 = (1L << ((byte)uVar1 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
    uVar1 = param_3 - uVar1;
    uVar8 = uVar1 >> 6;
    if ((uVar1 & 0x3f) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (1L << ((byte)uVar1 & 0x3f)) - 1;
    }
  }
  uVar2 = param_1[uVar9];
  do {
    LOCK();
    uVar3 = param_1[uVar9];
    bVar10 = uVar2 == uVar3;
    if (bVar10) {
      param_1[uVar9] = uVar2 | uVar5;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar10);
  puVar4 = param_1 + uVar9 + 1;
  bVar11 = (uVar3 & uVar5) != uVar5;
  bVar10 = (uVar3 & uVar5) == 0;
  while (uVar8 != 0) {
    uVar8 = uVar8 - 1;
    uVar9 = *puVar4;
    do {
      LOCK();
      uVar5 = *puVar4;
      bVar12 = uVar9 == uVar5;
      if (bVar12) {
        *puVar4 = uVar9 | uVar6;
        uVar5 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar5;
    } while (!bVar12);
    puVar4 = puVar4 + 1;
    bVar12 = false;
    if ((uVar5 & uVar6) == 0) {
      bVar12 = bVar10;
    }
    bVar10 = bVar12;
    if ((uVar5 & uVar6) != uVar6) {
      bVar11 = true;
    }
  }
  bVar12 = bVar10;
  if (uVar1 != 0) {
    uVar9 = *puVar4;
    do {
      LOCK();
      uVar6 = *puVar4;
      bVar12 = uVar9 == uVar6;
      if (bVar12) {
        *puVar4 = uVar9 | uVar1;
        uVar6 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar6;
    } while (!bVar12);
    bVar12 = false;
    if ((uVar6 & uVar1) == 0) {
      bVar12 = bVar10;
    }
    if ((uVar6 & uVar1) != uVar1) {
      bVar11 = true;
    }
  }
  if (param_5 != (bool *)0x0) {
    *param_5 = bVar11;
  }
  return bVar12;
}

// _mi_bitmap_is_any_claimed @ 141d8e760

bool __cdecl
_mi_bitmap_is_any_claimed(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  if (0x3f < param_3) {
    return param_1[param_4 >> 6] != 0;
  }
  return (param_1[param_4 >> 6] & (1L << ((byte)param_3 & 0x3f)) + -1 << ((byte)param_4 & 0x3f)) !=
         0;
}

// _mi_bitmap_is_any_claimed_across @ 141d8e7b0

bool __cdecl
_mi_bitmap_is_any_claimed_across(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  bool local_18 [24];
  
  mi_bitmap_is_claimedx_across(param_1,param_2,param_3,param_4,local_18);
  return local_18[0];
}

// _mi_bitmap_is_claimed @ 141d8e7e0

bool __cdecl _mi_bitmap_is_claimed(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  
  if (0x3f < param_3) {
    return param_1[param_4 >> 6] == 0xffffffffffffffff;
  }
  uVar1 = (1L << ((byte)param_3 & 0x3f)) + -1 << ((byte)param_4 & 0x3f);
  return (param_1[param_4 >> 6] & uVar1) == uVar1;
}

// _mi_bitmap_is_claimed_across @ 141d8e830

bool __cdecl
_mi_bitmap_is_claimed_across(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  bool bVar1;
  
  bVar1 = mi_bitmap_is_claimedx_across(param_1,param_2,param_3,param_4,(bool *)0x0);
  return bVar1;
}

// _mi_bitmap_try_find_claim_field @ 141d8e850

bool __cdecl
_mi_bitmap_try_find_claim_field(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar1 = param_1[param_2];
  if (uVar1 == 0xffffffffffffffff) {
LAB_141d8e91b:
    bVar6 = false;
  }
  else {
    if (param_3 < 0x40) {
      lVar5 = (1L << ((byte)param_3 & 0x3f)) + -1;
    }
    else {
      lVar5 = -1;
    }
    uVar4 = 0x40;
    uVar2 = ~uVar1;
    if ((uVar2 != 0) && (uVar4 = 0, uVar2 != 0)) {
      for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar2 = lVar5 << ((byte)uVar4 & 0x3f);
    do {
      while( true ) {
        if (0x40 - param_3 < uVar4) goto LAB_141d8e91b;
        uVar3 = uVar2 & uVar1;
        if (uVar3 == 0) break;
        if (param_3 == 1) {
          lVar5 = 1;
        }
        else {
          lVar5 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          lVar5 = (-uVar4 - (ulonglong)(0x3f - (int)lVar5)) + 0x40;
        }
        uVar4 = uVar4 + lVar5;
        uVar2 = uVar2 << ((byte)lVar5 & 0x3f);
      }
      LOCK();
      uVar3 = param_1[param_2];
      bVar6 = uVar1 == uVar3;
      if (bVar6) {
        param_1[param_2] = uVar2 | uVar1;
        uVar3 = uVar1;
      }
      UNLOCK();
      uVar1 = uVar3;
    } while (!bVar6);
    bVar6 = true;
    *param_4 = param_2 * 0x40 + uVar4;
  }
  return bVar6;
}

// _mi_bitmap_try_find_from_claim @ 141d8e940

bool __cdecl
_mi_bitmap_try_find_from_claim
          (ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar5 = 0;
      if (param_3 < param_2) {
        uVar5 = param_3;
      }
      uVar1 = param_1[uVar5];
      if (uVar1 != 0xffffffffffffffff) {
        if (param_4 < 0x40) {
          lVar6 = (1L << ((byte)param_4 & 0x3f)) + -1;
        }
        else {
          lVar6 = -1;
        }
        uVar2 = ~uVar1;
        uVar7 = 0x40;
        if ((uVar2 != 0) && (uVar7 = 0, uVar2 != 0)) {
          for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        uVar2 = lVar6 << ((byte)uVar7 & 0x3f);
        while (uVar7 <= 0x40 - param_4) {
          uVar3 = uVar2 & uVar1;
          if (uVar3 == 0) {
            LOCK();
            uVar3 = param_1[uVar5];
            bVar8 = uVar1 == uVar3;
            if (bVar8) {
              param_1[uVar5] = uVar2 | uVar1;
              uVar3 = uVar1;
            }
            UNLOCK();
            uVar1 = uVar3;
            if (bVar8) {
              *param_5 = uVar5 * 0x40 + uVar7;
              return true;
            }
          }
          else {
            if (param_4 == 1) {
              lVar6 = 1;
            }
            else {
              lVar6 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              lVar6 = (-uVar7 - (ulonglong)(0x3f - (int)lVar6)) + 0x40;
            }
            uVar7 = uVar7 + lVar6;
            uVar2 = uVar2 << ((byte)lVar6 & 0x3f);
          }
        }
      }
      uVar4 = uVar4 + 1;
      param_3 = uVar5 + 1;
    } while (uVar4 < param_2);
  }
  return false;
}

// _mi_bitmap_try_find_from_claim_across @ 141d8ea60

bool __cdecl
_mi_bitmap_try_find_from_claim_across
          (ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 *param_5)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_4 == 1) {
    bVar2 = _mi_bitmap_try_find_from_claim(param_1,param_2,param_3,1,param_5);
    return bVar2;
  }
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = 0;
      if (param_3 < param_2) {
        uVar6 = param_3;
      }
      if ((param_4 < 0x41) && (uVar1 = param_1[uVar6], uVar1 != 0xffffffffffffffff)) {
        if (param_4 < 0x40) {
          lVar5 = (1L << ((byte)param_4 & 0x3f)) + -1;
        }
        else {
          lVar5 = -1;
        }
        uVar3 = ~uVar1;
        uVar8 = 0x40;
        if ((uVar3 != 0) && (uVar8 = 0, uVar3 != 0)) {
          for (; (uVar3 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        uVar3 = lVar5 << ((byte)uVar8 & 0x3f);
        while (uVar8 <= 0x40 - param_4) {
          uVar4 = uVar3 & uVar1;
          if (uVar4 == 0) {
            LOCK();
            uVar4 = param_1[uVar6];
            bVar2 = uVar1 == uVar4;
            if (bVar2) {
              param_1[uVar6] = uVar3 | uVar1;
              uVar4 = uVar1;
            }
            UNLOCK();
            uVar1 = uVar4;
            if (bVar2) {
              *param_5 = uVar6 * 0x40 + uVar8;
              return true;
            }
          }
          else {
            lVar5 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            lVar5 = (-uVar8 - (ulonglong)(0x3f - (int)lVar5)) + 0x40;
            uVar8 = uVar8 + lVar5;
            uVar3 = uVar3 << ((byte)lVar5 & 0x3f);
          }
        }
      }
      bVar2 = mi_bitmap_try_find_claim_field_across(param_1,param_2,uVar6,param_4,0,param_5);
      if (bVar2) {
        return true;
      }
      uVar7 = uVar7 + 1;
      param_3 = uVar6 + 1;
    } while (uVar7 < param_2);
  }
  return false;
}

// _mi_bitmap_unclaim @ 141d8ebc0

bool __cdecl _mi_bitmap_unclaim(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_3 < 0x40) {
    uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << ((byte)param_4 & 0x3f);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  uVar1 = param_1[param_4 >> 6];
  do {
    LOCK();
    uVar2 = param_1[param_4 >> 6];
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      param_1[param_4 >> 6] = uVar1 & ~uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar4);
  return (uVar3 & uVar2) == uVar3;
}

// _mi_bitmap_unclaim_across @ 141d8ec30

bool __cdecl
_mi_bitmap_unclaim_across(ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = (uint)param_4 & 0x3f;
  uVar5 = param_4 >> 6;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar4 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar4 = 0xffffffffffffffff;
      uVar8 = 0;
      uVar6 = 0;
      uVar9 = 0;
    }
  }
  else {
    uVar8 = 0x40 - (ulonglong)uVar7;
    uVar6 = 0xffffffffffffffff;
    if (uVar8 < 0x40) {
      uVar4 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    uVar8 = param_3 - uVar8;
    uVar9 = uVar8 >> 6;
    if ((uVar8 & 0x3f) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (1L << ((byte)uVar8 & 0x3f)) - 1;
    }
  }
  uVar1 = param_1[uVar5];
  do {
    LOCK();
    uVar2 = param_1[uVar5];
    bVar10 = uVar1 == uVar2;
    if (bVar10) {
      param_1[uVar5] = uVar1 & ~uVar4;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar10);
  puVar3 = param_1 + uVar5 + 1;
  bVar10 = (uVar2 & uVar4) == uVar4;
  if (uVar9 != 0) {
    do {
      uVar9 = uVar9 - 1;
      uVar5 = *puVar3;
      do {
        LOCK();
        uVar4 = *puVar3;
        bVar11 = uVar5 == uVar4;
        if (bVar11) {
          *puVar3 = uVar5 & ~uVar6;
          uVar4 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar4;
      } while (!bVar11);
      puVar3 = puVar3 + 1;
      bVar11 = false;
      if ((uVar4 & uVar6) == uVar6) {
        bVar11 = bVar10;
      }
      bVar10 = bVar11;
    } while (uVar9 != 0);
  }
  if (uVar8 == 0) {
    return bVar10;
  }
  uVar5 = *puVar3;
  do {
    LOCK();
    uVar6 = *puVar3;
    bVar11 = uVar5 == uVar6;
    if (bVar11) {
      *puVar3 = uVar5 & ~uVar8;
      uVar6 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar6;
  } while (!bVar11);
  if ((uVar6 & uVar8) != uVar8) {
    bVar10 = false;
  }
  return bVar10;
}

// _mi_block_zero_init @ 141d8edd0

void __cdecl _mi_block_zero_init(mi_page_s *param_1,void *param_2,ulong64 param_3)

{
  ulong64 _Size;
  
  if ((param_1->is_zero != 0) && (8 < param_3)) {
    *(undefined8 *)param_2 = 0;
    return;
  }
  _Size = mi_usable_size(param_2);
  memset(param_2,0,_Size);
  return;
}

// _mi_clock_end @ 141d8ee20

long64 __cdecl _mi_clock_end(long64 param_1)

{
  long64 lVar1;
  
  lVar1 = _mi_clock_now();
  return (lVar1 - mi_clock_diff) - param_1;
}

// _mi_clock_now @ 141d8ee50

long64 __cdecl _mi_clock_now(void)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(&local_res8);
  if (mfreq.QuadPart == 0) {
    QueryPerformanceFrequency(local_res10);
    mfreq.QuadPart = local_res10[0].QuadPart / 1000;
    if (mfreq.QuadPart == 0) {
      mfreq.QuadPart = 1;
    }
  }
  return local_res8.QuadPart / mfreq.QuadPart;
}

// _mi_clock_start @ 141d8eed0

long64 __cdecl _mi_clock_start(void)

{
  long64 lVar1;
  long64 lVar2;
  
  if ((double)mi_clock_diff == 0.0) {
    lVar1 = _mi_clock_now();
    lVar2 = _mi_clock_now();
    mi_clock_diff = lVar2 - lVar1;
  }
  lVar1 = _mi_clock_now();
  return lVar1;
}

// _mi_deferred_free @ 141d8ef20

void __cdecl _mi_deferred_free(mi_heap_s *param_1,bool param_2)

{
  param_1->tld->heartbeat = param_1->tld->heartbeat + 1;
  if ((deferred_free != (_func___cdecl_void_bool_ulong64_void_ptr *)0x0) &&
     (param_1->tld->recurse == false)) {
    param_1->tld->recurse = true;
    (*deferred_free)(param_2,param_1->tld->heartbeat,deferred_arg);
    param_1->tld->recurse = false;
  }
  return;
}

// _mi_error_message @ 141d8ef80

void __cdecl _mi_error_message(int param_1,char *param_2)

{
  bool bVar1;
  ulong64 uVar2;
  char local_res18 [16];
  
  if (options[0].init == UNINIT) {
    mi_option_init(options);
  }
  if (options[0].value == 0) {
    if (options[2].init == UNINIT) {
      mi_option_init(options + 2);
    }
    if (options[2].value == 0) goto LAB_141d8f00b;
  }
  LOCK();
  uVar2 = error_count + 1;
  UNLOCK();
  bVar1 = error_count <= mi_max_error_count;
  error_count = uVar2;
  if (bVar1) {
    mi_vfprintf((_func___cdecl_void_char_ptr_void_ptr *)0x0,(void *)0x0,"mimalloc: error: ",param_2,
                local_res18);
  }
LAB_141d8f00b:
  if (mi_error_handler != (_func___cdecl_void_int_void_ptr *)0x0) {
    (*mi_error_handler)(param_1,mi_error_arg);
  }
  return;
}

// _mi_fprintf @ 141d8f040

void __cdecl _mi_fprintf(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2,char *param_3)

{
  char local_res20 [8];
  
  mi_vfprintf(param_1,param_2,(char *)0x0,param_3,local_res20);
  return;
}

// _mi_fputs @ 141d8f070

void __cdecl
_mi_fputs(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2,char *param_3,char *param_4)

{
  void *pvVar1;
  _func___cdecl_void_char_ptr_void_ptr *p_Var2;
  char *pcVar3;
  
  if (((param_1 != (_func___cdecl_void_char_ptr_void_ptr *)0x0) &&
      (p_Var2 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(1), param_1 != p_Var2)) &&
     (p_Var2 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(2), param_1 != p_Var2)) {
    if (param_3 != (char *)0x0) {
      (*param_1)(param_3,param_2);
    }
    (*param_1)(param_4,param_2);
    return;
  }
  pvVar1 = mi_out_arg;
  pcVar3 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc20);
  if (*pcVar3 == '\0') {
    p_Var2 = mi_out_default;
    if (mi_out_default == (_func___cdecl_void_char_ptr_void_ptr *)0x0) {
      p_Var2 = mi_out_buf;
    }
    *pcVar3 = '\x01';
    if (param_3 != (char *)0x0) {
      (*p_Var2)(param_3,pvVar1);
    }
    (*p_Var2)(param_4,pvVar1);
    *pcVar3 = '\0';
  }
  return;
}

// _mi_free_block @ 141d8f150

void __cdecl _mi_free_block(mi_page_s *param_1,bool param_2,mi_block_s *param_3)

{
  uint *puVar1;
  ulong64 uVar2;
  byte bVar3;
  
  if (!param_2) {
    _mi_free_block_mt(param_1,param_3);
    return;
  }
  param_3->next = (ulong64)param_1->local_free;
  puVar1 = &param_1->used;
  *puVar1 = *puVar1 - 1;
  param_1->local_free = param_3;
  if (*puVar1 == 0) {
    _mi_page_retire(param_1);
    return;
  }
  if (((param_1->flags).full_aligned & 1) != 0) {
    uVar2 = param_1->xheap;
    (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfe;
    bVar3 = _mi_bin((ulonglong)param_1->xblock_size);
    (param_1->flags).full_aligned = (param_1->flags).full_aligned | 1;
    mi_page_queue_enqueue_from
              ((mi_page_queue_s *)(uVar2 + (ulonglong)bVar3 * 0x18 + 0x410),
               (mi_page_queue_s *)(uVar2 + 0xb00),param_1);
    return;
  }
  return;
}

// _mi_free_block_mt @ 141d8f1e0

void __cdecl _mi_free_block_mt(mi_page_s *param_1,mi_block_s *param_2)

{
  ulong64 *puVar1;
  mi_heap_s *pmVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  bool bVar9;
  
  if (*(int *)(((ulonglong)param_1 & 0xffffffffff800000) + 0x68) == 1) {
    pmVar2 = mi_heap_get_default();
    puVar1 = (ulong64 *)(((ulonglong)param_1 & 0xffffffffff800000) + 0x70);
    LOCK();
    bVar9 = *puVar1 == 0;
    if (bVar9) {
      *puVar1 = pmVar2->thread_id;
    }
    UNLOCK();
    if (bVar9) {
      param_2->next = (ulong64)param_1->free;
      param_1->used = param_1->used - 1;
      param_1->is_zero = '\0';
      param_1->free = param_2;
      _mi_segment_page_free(param_1,true,&pmVar2->tld->segments);
      return;
    }
  }
  else {
    uVar6 = param_1->xthread_free;
    do {
      uVar7 = uVar6 & 3;
      if ((uVar6 & 3) == 0) {
        uVar8 = uVar6 & 0xfffffffffffffffd | 1;
      }
      else {
        param_2->next = uVar6 & 0xfffffffffffffffc;
        uVar8 = (ulonglong)((uint)uVar6 & 3) | (ulonglong)param_2;
      }
      LOCK();
      uVar3 = param_1->xthread_free;
      bVar9 = uVar6 == uVar3;
      if (bVar9) {
        param_1->xthread_free = uVar8;
        uVar3 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar3;
    } while (!bVar9);
    if (uVar7 == 0) {
      uVar8 = param_1->xheap;
      if (uVar8 != 0) {
        uVar4 = *(ulong64 *)(uVar8 + 0xb18);
        do {
          param_2->next = uVar4;
          LOCK();
          uVar5 = *(ulong64 *)(uVar8 + 0xb18);
          bVar9 = uVar4 == uVar5;
          if (bVar9) {
            *(ulong64 *)(uVar8 + 0xb18) = (ulong64)param_2;
            uVar5 = uVar4;
          }
          UNLOCK();
          uVar4 = uVar5;
        } while (!bVar9);
      }
      uVar6 = param_1->xthread_free;
      do {
        LOCK();
        uVar7 = param_1->xthread_free;
        bVar9 = uVar6 == uVar7;
        if (bVar9) {
          param_1->xthread_free = uVar6 & 0xfffffffffffffffe | 2;
          uVar7 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar7;
      } while (!bVar9);
    }
  }
  return;
}

// _mi_free_delayed_block @ 141d8f2e0

bool __cdecl _mi_free_delayed_block(mi_block_s *param_1)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  mi_block_s *pmVar6;
  longlong lVar7;
  mi_page_s *pmVar8;
  bool bVar9;
  
  lVar7 = ((ulonglong)param_1 & 0xffffffffff800000) + 0x80 +
          ((longlong)param_1 - ((ulonglong)param_1 & 0xffffffffff800000) >> 0x10) * 0x50;
  pmVar8 = (mi_page_s *)(lVar7 - (ulonglong)*(uint *)(lVar7 + 4));
  do {
    do {
      uVar4 = pmVar8->xthread_free;
      uVar3 = (uint)uVar4 & 3;
    } while (uVar3 == 1);
    if (((uVar4 & 3) == 0) || (uVar3 == 3)) break;
    LOCK();
    bVar9 = uVar4 == pmVar8->xthread_free;
    if (bVar9) {
      pmVar8->xthread_free = uVar4 & 0xfffffffffffffffc;
    }
    UNLOCK();
  } while (!bVar9);
  uVar4 = pmVar8->xthread_free;
  if ((pmVar8->xthread_free & 0xfffffffffffffffc) != 0) {
    do {
      pmVar6 = (mi_block_s *)(uVar4 & 0xfffffffffffffffc);
      LOCK();
      uVar5 = pmVar8->xthread_free;
      bVar9 = uVar4 == uVar5;
      if (bVar9) {
        pmVar8->xthread_free = (ulonglong)((uint)uVar4 & 3);
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar9);
    if (pmVar6 != (mi_block_s *)0x0) {
      uVar3 = 1;
      pmVar1 = pmVar6;
      for (pmVar2 = (mi_block_s *)pmVar6->next; pmVar2 != (mi_block_s *)0x0;
          pmVar2 = (mi_block_s *)pmVar2->next) {
        if (pmVar8->capacity < uVar3) goto LAB_141d8f3a7;
        uVar3 = uVar3 + 1;
        pmVar1 = pmVar2;
      }
      if (pmVar8->capacity < uVar3) {
LAB_141d8f3a7:
        _mi_error_message(0xe,"corrupted thread-free list\n");
      }
      else {
        pmVar1->next = (ulong64)pmVar8->local_free;
        pmVar8->used = pmVar8->used - uVar3;
        pmVar8->local_free = pmVar6;
      }
    }
  }
  if ((pmVar8->local_free != (mi_block_s *)0x0) && (pmVar8->free == (mi_block_s *)0x0)) {
    pmVar8->is_zero = '\0';
    pmVar8->free = pmVar8->local_free;
    pmVar8->local_free = (mi_block_s *)0x0;
  }
  _mi_free_block(pmVar8,true,param_1);
  return true;
}

// _mi_get_ntallocatevirtualmemoryex @ 141d8f410

_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong * __cdecl
_mi_get_ntallocatevirtualmemoryex(void)

{
  HMODULE hModule;
  _func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *p_Var1;
  
  hModule = LoadLibraryW(L"ntdll.dll");
  if (hModule != (HMODULE)0x0) {
    p_Var1 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
             GetProcAddress(hModule,"NtAllocateVirtualMemoryEx");
    FreeLibrary(hModule);
    return p_Var1;
  }
  return (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
}

// _mi_get_virtualalloc2 @ 141d8f470

_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong * __cdecl
_mi_get_virtualalloc2(void)

{
  HMODULE hModule;
  _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *p_Var1;
  
  hModule = LoadLibraryW(L"kernelbase.dll");
  if (hModule != (HMODULE)0x0) {
    p_Var1 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
             GetProcAddress(hModule,"VirtualAlloc2FromApp");
    if (p_Var1 == (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0
       ) {
      p_Var1 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
               GetProcAddress(hModule,"VirtualAlloc2");
    }
    FreeLibrary(hModule);
    return p_Var1;
  }
  return (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
}

// _mi_heap_collect_abandon @ 141d8f4e0

void __cdecl _mi_heap_collect_abandon(mi_heap_s *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  mi_tld_s *pmVar4;
  mi_page_s *pmVar5;
  uint uVar6;
  longlong lVar7;
  mi_page_queue_s *pmVar8;
  mi_segment_s *pmVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) {
    _mi_deferred_free(param_1,true);
    lVar7 = 0x4b;
    if (param_1->page_count != 0) {
      pmVar8 = param_1->pages;
      lVar10 = 0x4b;
      do {
        pmVar5 = pmVar8->first;
joined_r0x000141d8f537:
        pmVar3 = pmVar5;
        if (pmVar3 != (mi_page_s *)0x0) {
          do {
            do {
              uVar2 = pmVar3->xthread_free;
              uVar6 = (uint)uVar2 & 3;
            } while (uVar6 == 1);
            pmVar5 = pmVar3->next;
            if (uVar6 == 3) break;
            LOCK();
            bVar11 = uVar2 == pmVar3->xthread_free;
            if (bVar11) {
              pmVar3->xthread_free = uVar2 | 3;
            }
            UNLOCK();
          } while (!bVar11);
          goto joined_r0x000141d8f537;
        }
        pmVar8 = pmVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    _mi_heap_delayed_free(param_1);
    _mi_heap_collect_retired(param_1,true);
    if (param_1->page_count != 0) {
      pmVar8 = param_1->pages;
      do {
        pmVar5 = pmVar8->first;
        while (pmVar5 != (mi_page_s *)0x0) {
          pmVar3 = pmVar5->next;
          _mi_page_free_collect(pmVar5,true);
          if (pmVar5->used == 0) {
            _mi_page_free(pmVar5,pmVar8,true);
            pmVar5 = pmVar3;
          }
          else {
            _mi_page_abandon(pmVar5,pmVar8);
            pmVar5 = pmVar3;
          }
        }
        pmVar8 = pmVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    pmVar4 = param_1->tld;
    while (pmVar9 = (pmVar4->segments).cache, pmVar9 != (mi_segment_s *)0x0) {
      puVar1 = &(pmVar4->segments).cache_count;
      *puVar1 = *puVar1 - 1;
      (pmVar4->segments).cache = pmVar9->next;
      pmVar9->next = (mi_segment_s *)0x0;
      mi_stat_update(&((pmVar4->segments).stats)->segments_cache,-1);
      mi_segment_os_free(pmVar9,&pmVar4->segments);
    }
  }
  return;
}

// _mi_heap_collect_retired @ 141d8f680

void __cdecl _mi_heap_collect_retired(mi_heap_s *param_1,bool param_2)

{
  undefined1 *puVar1;
  mi_page_s *pmVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = param_1->page_retired_min;
  uVar7 = 0;
  uVar8 = 0x4a;
  if (param_1->page_retired_max < uVar6) {
    param_1->page_retired_min = 0x4a;
    param_1->page_retired_max = 0;
  }
  else {
    do {
      pmVar2 = param_1->pages[uVar6].first;
      if ((pmVar2 != (mi_page_s *)0x0) && (1 < (byte)(pmVar2->retire_expire << 1))) {
        bVar5 = pmVar2->is_zero;
        if (pmVar2->used == 0) {
          cVar3 = pmVar2->retire_expire - 1;
          pmVar2->is_zero = bVar5;
          pmVar2->retire_expire = cVar3;
          if ((param_2) || ((byte)(cVar3 * '\x02' | bVar5) < 2)) {
            _mi_page_free(param_1->pages[uVar6].first,param_1->pages + uVar6,param_2);
          }
          else {
            uVar4 = uVar6;
            if (uVar8 <= uVar6) {
              uVar4 = uVar8;
            }
            uVar8 = uVar4;
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
          }
        }
        else {
          pmVar2->is_zero = bVar5;
          pmVar2->retire_expire = '\0';
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= param_1->page_retired_max);
    param_1->page_retired_min = uVar8;
    param_1->page_retired_max = uVar7;
  }
  return;
}

// _mi_heap_delayed_free @ 141d8f780

void __cdecl _mi_heap_delayed_free(mi_heap_s *param_1)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  mi_block_s *pmVar3;
  mi_block_s *pmVar4;
  bool bVar5;
  
  pmVar1 = param_1->thread_delayed_free;
  do {
    pmVar4 = pmVar1;
    if (pmVar4 == (mi_block_s *)0x0) {
      return;
    }
    LOCK();
    pmVar1 = param_1->thread_delayed_free;
    bVar5 = pmVar4 == pmVar1;
    if (bVar5) {
      param_1->thread_delayed_free = (mi_block_s *)0x0;
      pmVar1 = pmVar4;
    }
    UNLOCK();
  } while (!bVar5);
  do {
    pmVar1 = (mi_block_s *)pmVar4->next;
    bVar5 = _mi_free_delayed_block(pmVar4);
    if (!bVar5) {
      pmVar2 = param_1->thread_delayed_free;
      do {
        pmVar4->next = (ulong64)pmVar2;
        LOCK();
        pmVar3 = param_1->thread_delayed_free;
        bVar5 = pmVar2 == pmVar3;
        if (bVar5) {
          param_1->thread_delayed_free = pmVar4;
          pmVar3 = pmVar2;
        }
        UNLOCK();
        pmVar2 = pmVar3;
      } while (!bVar5);
    }
    pmVar4 = pmVar1;
  } while (pmVar1 != (mi_block_s *)0x0);
  return;
}

// _mi_heap_destroy_pages @ 141d8f800

void __cdecl _mi_heap_destroy_pages(mi_heap_s *param_1)

{
  mi_page_s *pmVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  uint uVar4;
  mi_segment_s *pmVar5;
  longlong lVar6;
  mi_segments_tld_s *pmVar7;
  mi_page_queue_s *pmVar8;
  bool bVar9;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1->page_count != 0)) {
    lVar6 = 0x4b;
    pmVar8 = param_1->pages;
    do {
      pmVar3 = pmVar8->first;
      while (pmVar3 != (mi_page_s *)0x0) {
        pmVar1 = pmVar3->next;
        do {
          do {
            uVar2 = pmVar3->xthread_free;
            uVar4 = (uint)uVar2 & 3;
          } while (uVar4 == 1);
          if (uVar4 == 3) break;
          LOCK();
          bVar9 = uVar2 == pmVar3->xthread_free;
          if (bVar9) {
            pmVar3->xthread_free = uVar2 | 3;
          }
          UNLOCK();
        } while (!bVar9);
        pmVar3->used = 0;
        pmVar3->next = (mi_page_s *)0x0;
        pmVar5 = (mi_segment_s *)((ulonglong)pmVar3 & 0xffffffffff800000);
        pmVar3->prev = (mi_page_s *)0x0;
        pmVar7 = &param_1->tld->segments;
        mi_segment_page_clear(pmVar3,pmVar7);
        pmVar3 = pmVar1;
        if (pmVar5->used == 0) {
          mi_segment_free(pmVar5,false,pmVar7);
        }
        else if (pmVar5->used == pmVar5->abandoned) {
          mi_segment_abandon(pmVar5,pmVar7);
        }
      }
      pmVar8 = pmVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  mi_heap_reset_pages(param_1);
  return;
}

// _mi_heap_done @ 141d8f940

bool __cdecl _mi_heap_done(mi_heap_s *param_1)

{
  mi_heap_s *pmVar1;
  bool bVar2;
  mi_heap_s *pmVar3;
  ulong dwFlsIndex;
  int iVar4;
  int *piVar5;
  mi_heap_s *pmVar6;
  ulonglong uVar7;
  mi_stats_s *_Dst;
  long64 lVar8;
  
  dwFlsIndex = mi_fls_key;
  if (param_1 == &_mi_heap_empty) {
    return true;
  }
  if ((_mi_heap_main.thread_id == 0) || ((void *)_mi_heap_main.thread_id == Self)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pmVar6 = &_mi_heap_empty;
  if (bVar2) {
    pmVar6 = &_mi_heap_main;
  }
  *(mi_heap_s **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18) = pmVar6
  ;
  FlsSetValue(dwFlsIndex,pmVar6);
  pmVar6 = param_1->tld->heap_backing;
  if (pmVar6 != &_mi_heap_empty) {
    pmVar1 = pmVar6->tld->heaps;
    while (pmVar3 = pmVar1, pmVar3 != (mi_heap_s *)0x0) {
      pmVar1 = pmVar3->next;
      if (pmVar3 != pmVar6) {
        mi_heap_delete(pmVar3);
      }
    }
    if (pmVar6 != &_mi_heap_main) {
      _mi_heap_collect_abandon(pmVar6);
    }
    _Dst = &pmVar6->tld->stats;
    if (_Dst != &_mi_stats_main) {
      mi_stats_add(&_mi_stats_main,_Dst);
      memset(_Dst,0,0x240);
    }
    if ((pmVar6 != &_mi_heap_main) && (pmVar6 != (mi_heap_s *)0x0)) {
      uVar7 = 0x1208;
      if (0x1208 < ~os_page_size) {
        uVar7 = os_page_size + 0x1207;
        if ((os_page_size & os_page_size - 1) == 0) {
          uVar7 = ~(os_page_size - 1) & uVar7;
        }
        else {
          uVar7 = uVar7 - uVar7 % os_page_size;
        }
        if (uVar7 == 0) {
          return false;
        }
      }
      iVar4 = (*pVirtualFree)(pmVar6,0,0x8000);
      lVar8 = -uVar7;
      mi_stat_update(&_mi_stats_main.committed,lVar8);
      mi_stat_update(&_mi_stats_main.reserved,lVar8);
      if (iVar4 == 0) {
        piVar5 = _errno();
        strerror(*piVar5);
        _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
      }
    }
  }
  return false;
}

// _mi_heap_init @ 141d8fb20

bool __cdecl _mi_heap_init(void)

{
  mi_heap_s *_Dst;
  ulong uVar1;
  mi_heap_s *_Dst_00;
  ulong64 uVar2;
  longlong lVar3;
  mi_tld_s *pmVar4;
  mi_heap_s *pmVar5;
  mi_heap_s *pmVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18);
  if ((mi_heap_s *)*plVar7 == &_mi_heap_empty) {
    if ((_mi_heap_main.thread_id == 0) || ((void *)_mi_heap_main.thread_id == Self)) {
      if (_mi_heap_main.cookie == 0) {
        _mi_heap_main.thread_id = (ulong64)Self;
        _mi_heap_main.cookie = _os_random_weak(0x141d973d0);
        _mi_random_init(&_mi_heap_main.random);
        _mi_heap_main.keys[0] = _mi_heap_random_next(&_mi_heap_main);
        _mi_heap_main.keys[1] = _mi_heap_random_next(&_mi_heap_main);
      }
      uVar1 = mi_fls_key;
      *plVar7 = (longlong)&_mi_heap_main;
      FlsSetValue(uVar1,&_mi_heap_main);
    }
    else {
      _Dst_00 = _mi_os_alloc(0x1208,&_mi_stats_main);
      if ((_Dst_00 == (mi_heap_s *)0x0) &&
         (_Dst_00 = _mi_os_alloc(0x1208,&_mi_stats_main), _Dst_00 == (mi_heap_s *)0x0)) {
        _mi_error_message(0xc,"unable to allocate thread local heap metadata (%zu bytes)\n");
      }
      else {
        _Dst = _Dst_00 + 1;
        if (_mi_cpu_has_fsrm == false) {
          memcpy(_Dst,&tld_empty,0x618);
        }
        else {
          pmVar4 = &tld_empty;
          pmVar5 = _Dst;
          for (lVar3 = 0x618; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(char *)&pmVar5->tld = (char)pmVar4->heartbeat;
            pmVar4 = (mi_tld_s *)((longlong)&pmVar4->heartbeat + 1);
            pmVar5 = (mi_heap_s *)((longlong)&pmVar5->tld + 1);
          }
        }
        if (_mi_cpu_has_fsrm == false) {
          memcpy(_Dst_00,&_mi_heap_empty,0xbf0);
        }
        else {
          pmVar5 = &_mi_heap_empty;
          pmVar6 = _Dst_00;
          for (lVar3 = 0xbf0; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined1 *)&pmVar6->tld = *(undefined1 *)&pmVar5->tld;
            pmVar5 = (mi_heap_s *)((longlong)&pmVar5->tld + 1);
            pmVar6 = (mi_heap_s *)((longlong)&pmVar6->tld + 1);
          }
        }
        _Dst_00->thread_id = (ulong64)Self;
        _mi_random_init(&_Dst_00->random);
        uVar2 = _mi_heap_random_next(_Dst_00);
        _Dst_00->cookie = uVar2 | 1;
        uVar2 = _mi_heap_random_next(_Dst_00);
        _Dst_00->keys[0] = uVar2;
        uVar2 = _mi_heap_random_next(_Dst_00);
        _Dst_00->keys[1] = uVar2;
        _Dst_00->tld = (mi_tld_s *)_Dst;
        _Dst_00[1].pages_free_direct[0x76] = (mi_page_s *)(_Dst_00[1].pages_free_direct + 0x7a);
        _Dst_00[1].pages_free_direct[0x79] = (mi_page_s *)(_Dst_00[1].pages_free_direct + 0x7a);
        uVar1 = mi_fls_key;
        _Dst_00[1].pages_free_direct[0x77] = (mi_page_s *)(_Dst_00[1].pages_free_direct + 0x78);
        _Dst_00[1].pages_free_direct[1] = (mi_page_s *)_Dst_00;
        _Dst_00[1].pages_free_direct[2] = (mi_page_s *)_Dst_00;
        *plVar7 = (longlong)_Dst_00;
        FlsSetValue(uVar1,_Dst_00);
      }
    }
    return false;
  }
  return true;
}

// _mi_heap_main_get @ 141d8fd70

mi_heap_s * __cdecl _mi_heap_main_get(void)

{
  mi_heap_main_init();
  return &_mi_heap_main;
}

// _mi_heap_malloc_zero @ 141d8fd90

void * __cdecl _mi_heap_malloc_zero(mi_heap_s *param_1,ulong64 param_2,bool param_3)

{
  undefined8 *_Dst;
  ulong64 _Size;
  longlong lVar1;
  
  if (param_2 < 0x401) {
    lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (param_2 + 7 & 0xfffffffffffffff8))
    ;
    _Dst = *(undefined8 **)(lVar1 + 0x10);
    if (_Dst != (undefined8 *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(undefined8 *)(lVar1 + 0x10) = *_Dst;
      goto LAB_141d8fdd0;
    }
  }
  _Dst = _mi_malloc_generic(param_1,param_2);
LAB_141d8fdd0:
  if ((param_3) && (_Dst != (undefined8 *)0x0)) {
    lVar1 = ((longlong)_Dst - ((ulonglong)_Dst & 0xffffffffff800000) >> 0x10) * 0x50 + 0x80 +
            ((ulonglong)_Dst & 0xffffffffff800000);
    if (((*(byte *)((lVar1 - (ulonglong)*(uint *)(lVar1 + 4)) + 0xf) & 1) != 0) && (8 < param_2)) {
      *_Dst = 0;
      return _Dst;
    }
    _Size = mi_usable_size(_Dst);
    memset(_Dst,0,_Size);
  }
  return _Dst;
}

// _mi_heap_page_destroy @ 141d8fe60

bool __cdecl
_mi_heap_page_destroy
          (mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3,void *param_4,
          void *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  mi_segment_s *pmVar3;
  mi_segments_tld_s *pmVar4;
  bool bVar5;
  
  do {
    do {
      uVar1 = param_3->xthread_free;
      uVar2 = (uint)uVar1 & 3;
    } while (uVar2 == 1);
    if (uVar2 == 3) break;
    LOCK();
    bVar5 = uVar1 == param_3->xthread_free;
    if (bVar5) {
      param_3->xthread_free = uVar1 | 3;
    }
    UNLOCK();
  } while (!bVar5);
  param_3->used = 0;
  pmVar3 = (mi_segment_s *)((ulonglong)param_3 & 0xffffffffff800000);
  param_3->next = (mi_page_s *)0x0;
  param_3->prev = (mi_page_s *)0x0;
  pmVar4 = &param_1->tld->segments;
  mi_segment_page_clear(param_3,pmVar4);
  if (pmVar3->used != 0) {
    if (pmVar3->used == pmVar3->abandoned) {
      mi_segment_abandon(pmVar3,pmVar4);
    }
    return true;
  }
  mi_segment_free(pmVar3,false,pmVar4);
  return true;
}

// _mi_heap_random_next @ 141d8ff10

ulong64 __cdecl _mi_heap_random_next(mi_heap_s *param_1)

{
  mi_random_cxt_s *pmVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = (param_1->random).output_available;
  pmVar1 = &param_1->random;
  if ((int)uVar5 < 1) {
    chacha_block(pmVar1);
    uVar5 = 0x10;
    (param_1->random).output_available = 0x10;
  }
  uVar3 = *(undefined4 *)((longlong)pmVar1 + (0x20 - (ulonglong)uVar5) * 4);
  *(undefined4 *)((longlong)pmVar1 + (0x20 - (ulonglong)uVar5) * 4) = 0;
  piVar2 = &(param_1->random).output_available;
  *piVar2 = *piVar2 + -1;
  uVar5 = (param_1->random).output_available;
  uVar6 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    chacha_block(pmVar1);
    uVar6 = 0x10;
    (param_1->random).output_available = 0x10;
  }
  uVar4 = *(undefined4 *)((longlong)pmVar1 + (0x20 - uVar6) * 4);
  *(undefined4 *)((longlong)pmVar1 + (0x20 - uVar6) * 4) = 0;
  piVar2 = &(param_1->random).output_available;
  *piVar2 = *piVar2 + -1;
  return CONCAT44(uVar3,uVar4);
}

// _mi_heap_realloc_zero @ 141d8ffc0

void * __cdecl _mi_heap_realloc_zero(mi_heap_s *param_1,void *param_2,ulong64 param_3,bool param_4)

{
  uint *puVar1;
  void *pvVar2;
  mi_block_s *pmVar3;
  undefined8 *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  mi_page_s *pmVar6;
  mi_segment_s *pmVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  
  if (param_2 == (void *)0x0) {
    pvVar2 = _mi_heap_malloc_zero(param_1,param_3,param_4);
    return pvVar2;
  }
  uVar4 = 0;
  pmVar7 = (mi_segment_s *)((ulonglong)param_2 & 0xffffffffff800000);
  if (pmVar7 != (mi_segment_s *)0x0) {
    uVar4 = (ulonglong)((longlong)param_2 - (longlong)pmVar7) >> 0x10;
    pmVar6 = (mi_page_s *)
             ((longlong)pmVar7 +
             ((uVar4 * 0x50 + 0x80) - (ulonglong)pmVar7->slices[uVar4].slice_offset));
    if (((pmVar6->flags).full_aligned & 2) == 0) {
      uVar4 = (ulonglong)pmVar6->xblock_size;
      if (0x7ffffff < uVar4) {
        uVar4 = (ulonglong)pmVar6->slice_count << 0x10;
      }
    }
    else {
      pmVar3 = _mi_page_ptr_unalign(pmVar7,pmVar6,param_2);
      uVar4 = (ulonglong)pmVar6->xblock_size;
      if (0x7ffffff < uVar4) {
        uVar4 = (ulonglong)pmVar6->slice_count << 0x10;
      }
      uVar4 = (uVar4 - (longlong)param_2) + (longlong)pmVar3;
    }
  }
  if ((param_3 <= uVar4) && (uVar4 >> 1 <= param_3)) {
    return param_2;
  }
  if (param_3 < 0x401) {
    lVar5 = *(longlong *)((longlong)param_1->pages_free_direct + (param_3 + 7 & 0xfffffffffffffff8))
    ;
    _Dst = *(undefined8 **)(lVar5 + 0x10);
    if (_Dst != (undefined8 *)0x0) {
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      *(undefined8 *)(lVar5 + 0x10) = *_Dst;
      goto LAB_141d900ce;
    }
  }
  _Dst = _mi_malloc_generic(param_1,param_3);
LAB_141d900ce:
  if (_Dst != (undefined8 *)0x0) {
    if ((param_4) && (uVar4 < param_3)) {
      lVar5 = uVar4 - 8;
      if (uVar4 < 8) {
        lVar5 = 0;
      }
      memset((undefined1 *)(lVar5 + (longlong)_Dst),0,param_3 - lVar5);
    }
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    puVar8 = param_2;
    puVar9 = _Dst;
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,param_2,param_3);
    }
    else {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      }
    }
    if (pmVar7 != (mi_segment_s *)0x0) {
      uVar4 = (ulonglong)((longlong)param_2 - (longlong)pmVar7) >> 0x10;
      if ((Self == (void *)pmVar7->thread_id) &&
         (pmVar6 = (mi_page_s *)
                   ((longlong)pmVar7 +
                   ((uVar4 * 0x50 + 0x80) - (ulonglong)pmVar7->slices[uVar4].slice_offset)),
         (pmVar6->flags).full_aligned == '\0')) {
        *(mi_block_s **)param_2 = pmVar6->local_free;
        puVar1 = &pmVar6->used;
        *puVar1 = *puVar1 - 1;
        pmVar6->local_free = param_2;
        if (*puVar1 == 0) {
          _mi_page_retire(pmVar6);
        }
      }
      else {
        mi_free_generic(pmVar7,Self == (void *)pmVar7->thread_id,param_2);
      }
    }
  }
  return _Dst;
}

// _mi_heap_set_default_direct @ 141d901c0

void __cdecl _mi_heap_set_default_direct(mi_heap_s *param_1)

{
  *(mi_heap_s **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18) =
       param_1;
                    /* WARNING: Could not recover jumptable at 0x000141d901e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlsSetValue(mi_fls_key,param_1);
  return;
}

// _mi_is_main_thread @ 141d90200

bool __cdecl _mi_is_main_thread(void)

{
  if ((_mi_heap_main.thread_id != 0) && ((void *)_mi_heap_main.thread_id != Self)) {
    return false;
  }
  return true;
}

// _mi_malloc_generic @ 141d90230

/* WARNING: Removing unreachable block (ram,0x000141d9027c) */

void * __cdecl _mi_malloc_generic(mi_heap_s *param_1,ulong64 param_2)

{
  bool bVar1;
  mi_block_s *pmVar2;
  mi_block_s *pmVar3;
  mi_block_s *pmVar4;
  mi_page_s *pmVar5;
  mi_block_s *pmVar6;
  
  do {
    if (param_1 == &_mi_heap_empty) {
      mi_process_init();
      bVar1 = _mi_heap_init();
      if (!bVar1) {
        LOCK();
        UNLOCK();
        if (_mi_stats_main.threads.peak < _mi_stats_main.threads.current + 1) {
          LOCK();
          UNLOCK();
          _mi_stats_main.threads.peak = _mi_stats_main.threads.current + 1;
        }
        LOCK();
        _mi_stats_main.threads.allocated = _mi_stats_main.threads.allocated + 1;
        UNLOCK();
        _mi_stats_main.threads.current = _mi_stats_main.threads.current + 1;
      }
      param_1 = *(mi_heap_s **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc18);
      if (param_1 == &_mi_heap_empty) {
        return (void *)0x0;
      }
    }
    param_1->tld->heartbeat = param_1->tld->heartbeat + 1;
    if ((deferred_free != (_func___cdecl_void_bool_ulong64_void_ptr *)0x0) &&
       (param_1->tld->recurse == false)) {
      param_1->tld->recurse = true;
      (*deferred_free)(false,param_1->tld->heartbeat,deferred_arg);
      param_1->tld->recurse = false;
    }
    pmVar2 = param_1->thread_delayed_free;
    do {
      pmVar6 = pmVar2;
      if (pmVar6 == (mi_block_s *)0x0) goto LAB_141d9035b;
      LOCK();
      pmVar2 = param_1->thread_delayed_free;
      bVar1 = pmVar6 == pmVar2;
      if (bVar1) {
        param_1->thread_delayed_free = (mi_block_s *)0x0;
        pmVar2 = pmVar6;
      }
      UNLOCK();
    } while (!bVar1);
    do {
      pmVar2 = (mi_block_s *)pmVar6->next;
      bVar1 = _mi_free_delayed_block(pmVar6);
      if (!bVar1) {
        pmVar3 = param_1->thread_delayed_free;
        do {
          pmVar6->next = (ulong64)pmVar3;
          LOCK();
          pmVar4 = param_1->thread_delayed_free;
          bVar1 = pmVar3 == pmVar4;
          if (bVar1) {
            param_1->thread_delayed_free = pmVar6;
            pmVar4 = pmVar3;
          }
          UNLOCK();
          pmVar3 = pmVar4;
        } while (!bVar1);
      }
      pmVar6 = pmVar2;
    } while (pmVar2 != (mi_block_s *)0x0);
LAB_141d9035b:
    pmVar5 = mi_find_page(param_1,param_2);
    if (pmVar5 == (mi_page_s *)0x0) {
      mi_heap_collect_ex(param_1,MI_FORCE);
      pmVar5 = mi_find_page(param_1,param_2);
      if (pmVar5 == (mi_page_s *)0x0) {
        _mi_error_message(0xc,"unable to allocate memory (%zu bytes)\n");
        return (void *)0x0;
      }
    }
    pmVar2 = pmVar5->free;
    if (pmVar2 != (mi_block_s *)0x0) {
      pmVar5->used = pmVar5->used + 1;
      pmVar5->free = (mi_block_s *)pmVar2->next;
      return pmVar2;
    }
  } while( true );
}

// _mi_memcpy @ 141d90400

void __cdecl _mi_memcpy(void *param_1,void *param_2,ulong64 param_3)

{
  if (!_mi_cpu_has_fsrm) {
    memcpy(param_1,param_2,param_3);
    return;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined1 *)((longlong)param_2 + 1);
    param_1 = (undefined1 *)((longlong)param_1 + 1);
  }
  return;
}

// _mi_options_init @ 141d90440

void __cdecl _mi_options_init(void)

{
  char *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  mi_option_desc_s *pmVar4;
  longlong lVar5;
  
  bVar3 = os_preloading;
  LOCK();
  uVar2 = out_len + 1;
  UNLOCK();
  if (0x8000 < out_len) {
    out_len = 0x8000;
  }
  pcVar1 = out_buf + out_len;
  out_len = uVar2;
  *pcVar1 = '\0';
  if (!bVar3) {
    _cputs(out_buf);
  }
  *pcVar1 = '\n';
  mi_out_default = mi_out_buf_stderr;
  pmVar4 = options;
  lVar5 = 0;
  do {
    if (pmVar4->init == UNINIT) {
      mi_option_init(pmVar4);
    }
    if (lVar5 != 2) {
      _mi_verbose_message("option \'%s\': %ld\n");
    }
    lVar5 = lVar5 + 1;
    pmVar4 = pmVar4 + 1;
  } while ((longlong)pmVar4 < 0x154b878e0);
  if (options[0x14].init == UNINIT) {
    mi_option_init(options + 0x14);
  }
  mi_max_error_count = (ulong64)options[0x14].value;
  if (options[0x15].init == UNINIT) {
    mi_option_init(options + 0x15);
  }
  mi_max_warning_count = (longlong)options[0x15].value;
  return;
}

// _mi_os_alloc @ 141d90540

void * __cdecl _mi_os_alloc(ulong64 param_1,mi_stats_s *param_2)

{
  ulong64 uVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  uVar1 = _mi_os_good_alloc_size(param_1);
  if (uVar1 == 0) {
    return (void *)0x0;
  }
  if ((large_os_page_size != 0) && (options[6].init == UNINIT)) {
    mi_option_init(options + 6);
  }
  pvVar2 = mi_win_virtual_allocx((void *)0x0,uVar1,0,0x3000);
  if (pvVar2 == (void *)0x0) {
    GetLastError();
    _mi_warning_message(
                       "unable to allocate OS memory (%zu bytes, error code: %i, address: %p, large only: %d, allow large: %d)\n"
                       );
    return (void *)0x0;
  }
  mi_stat_update(&_mi_stats_main.reserved,uVar1);
  mi_stat_update(&_mi_stats_main.committed,uVar1);
  return pvVar2;
}

// _mi_os_alloc_aligned @ 141d90620

void * __cdecl
_mi_os_alloc_aligned(ulong64 param_1,ulong64 param_2,bool param_3,bool *param_4,mi_stats_s *param_5)

{
  ulonglong uVar1;
  ulong64 uVar2;
  bool *pbVar3;
  void *pvVar4;
  ulong64 uVar5;
  bool local_res8 [8];
  
  if (param_1 != 0) {
    uVar2 = _mi_os_good_alloc_size(param_1);
    uVar1 = os_page_size - 1;
    if ((os_page_size & uVar1) == 0) {
      uVar5 = ~uVar1 & uVar1 + param_2;
    }
    else {
      uVar5 = ((uVar1 + param_2) / os_page_size) * os_page_size;
    }
    local_res8[0] = false;
    pbVar3 = local_res8;
    if (param_4 != (bool *)0x0) {
      local_res8[0] = *param_4;
      *param_4 = false;
      pbVar3 = param_4;
    }
    pvVar4 = mi_os_mem_alloc_aligned(uVar2,uVar5,param_3,local_res8[0],pbVar3,&_mi_stats_main);
    return pvVar4;
  }
  return (void *)0x0;
}

// _mi_os_alloc_huge_os_pages @ 141d906e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d9096c) */
/* WARNING: Removing unreachable block (ram,0x000141d909ac) */

void * __cdecl
_mi_os_alloc_huge_os_pages
          (ulong64 param_1,int param_2,long64 param_3,ulong64 *param_4,ulong64 *param_5)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  ulong64 uVar6;
  long64 lVar7;
  long64 lVar8;
  HANDLE pvVar9;
  void *pvVar10;
  longlong lVar11;
  int *piVar12;
  void *pvVar13;
  ulonglong uVar14;
  void *pvVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStackY_d8 [32];
  void *local_98;
  ulong64 local_90;
  ulonglong *local_88;
  ulong64 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_80 = param_5;
  if (param_5 != (ulong64 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (ulong64 *)0x0) {
    *param_4 = 0;
  }
  pvVar13 = ThreadLocalStoragePointer;
  uVar14 = (ulonglong)_tls_index;
  pvVar10 = (void *)mi_huge_start;
  local_98 = (void *)param_3;
  local_88 = param_4;
  do {
    pvVar15 = pvVar10;
    if (pvVar10 == (void *)0x0) {
      uVar6 = _mi_heap_random_next
                        (*(mi_heap_s **)(*(longlong *)((longlong)pvVar13 + uVar14 * 8) + 0xc18));
      pvVar15 = (void *)(((ulonglong)((uint)(uVar6 >> 0x11) & 0xfff) + 0x8000) * 0x40000000);
    }
    pvVar2 = local_98;
    LOCK();
    bVar17 = pvVar10 != (void *)mi_huge_start;
    pvVar3 = (void *)((longlong)pvVar15 + param_1 * 0x40000000);
    if (bVar17) {
      pvVar10 = (void *)mi_huge_start;
      pvVar3 = (void *)mi_huge_start;
    }
    mi_huge_start = (ulong64)pvVar3;
    UNLOCK();
  } while (bVar17);
  if (pvVar15 == (void *)0x0) {
    pvVar15 = (void *)0x0;
  }
  else {
    if ((double)mi_clock_diff == 0.0) {
      lVar7 = _mi_clock_now();
      lVar8 = _mi_clock_now();
      mi_clock_diff = lVar8 - lVar7;
    }
    lVar7 = _mi_clock_now();
    uVar14 = 0;
    pvVar13 = pvVar15;
    if (param_1 != 0) {
      do {
        mi_win_enable_large_os_pages();
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        if ((pNtAllocateVirtualMemoryEx ==
             (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0)
           || (mi_huge_pages_available == false)) {
LAB_141d908cb:
          if ((pVirtualAlloc2 ==
               (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0)
             || (param_2 < 0)) {
            pvVar10 = (*pVirtualAlloc)(pvVar13,0x40000000,0x20003000,4);
          }
          else {
            local_78 = CONCAT71(local_78._1_7_,2);
            local_70 = CONCAT44(local_70._4_4_,param_2);
            pvVar9 = GetCurrentProcess();
            pvVar10 = (*pVirtualAlloc2)(pvVar9,pvVar13,0x40000000,0x20003000,4,&local_78,1);
          }
        }
        else {
          local_78 = 5;
          local_70 = 0x10;
          if (-1 < param_2) {
            local_68 = 2;
            local_60 = (ulonglong)(uint)param_2;
          }
          local_90 = 0x40000000;
          local_98 = pvVar13;
          pvVar9 = GetCurrentProcess();
          lVar4 = (*pNtAllocateVirtualMemoryEx)
                            (pvVar9,&local_98,&local_90,0x20003000,4,&local_78,(param_2 >> 0x1f) + 2
                            );
          if ((lVar4 != 0) || (pvVar10 = local_98, local_98 == (void *)0x0)) {
            mi_huge_pages_available = false;
            _mi_warning_message(
                               "unable to allocate using huge (1gb) pages, trying large (2mb) pages instead (status 0x%lx)\n"
                               );
            goto LAB_141d908cb;
          }
        }
        if (pvVar10 != pvVar13) {
          if (pvVar10 != (void *)0x0) {
            _mi_warning_message("could not allocate contiguous huge page %zu at %p\n");
            iVar5 = (*pVirtualFree)(pvVar10,0,0x8000);
            mi_stat_update(&_mi_stats_main.committed,-0x40000000);
            mi_stat_update(&_mi_stats_main.reserved,-0x40000000);
            if (iVar5 == 0) {
              piVar12 = _errno();
              strerror(*piVar12);
              _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
            }
          }
          break;
        }
        LOCK();
        lVar11 = _mi_stats_main.committed.current + 0x40000000;
        UNLOCK();
        if (_mi_stats_main.committed.peak < _mi_stats_main.committed.current + 0x40000000) {
          LOCK();
          UNLOCK();
          _mi_stats_main.committed.peak = _mi_stats_main.committed.current + 0x40000000;
        }
        LOCK();
        _mi_stats_main.committed.allocated = _mi_stats_main.committed.allocated + 0x40000000;
        UNLOCK();
        LOCK();
        lVar1 = _mi_stats_main.reserved.current + 0x40000000;
        UNLOCK();
        if (_mi_stats_main.reserved.peak < _mi_stats_main.reserved.current + 0x40000000) {
          LOCK();
          UNLOCK();
          _mi_stats_main.reserved.peak = _mi_stats_main.reserved.current + 0x40000000;
        }
        LOCK();
        _mi_stats_main.reserved.allocated = _mi_stats_main.reserved.allocated + 0x40000000;
        UNLOCK();
        _mi_stats_main.reserved.current = lVar1;
        _mi_stats_main.committed.current = lVar11;
        if (0 < (longlong)pvVar2) {
          lVar8 = _mi_clock_now();
          uVar16 = (lVar8 - mi_clock_diff) - lVar7;
          if ((uVar14 != 0) &&
             (lVar11 = (uVar16 / (uVar14 + 1)) * param_1,
             lVar11 + (longlong)pvVar2 * -2 != 0 && (longlong)pvVar2 * 2 <= lVar11)) {
            uVar16 = (longlong)pvVar2 + 1;
          }
          if ((longlong)pvVar2 < (longlong)uVar16) {
            _mi_warning_message("huge page allocation timed out\n");
            break;
          }
        }
        uVar14 = uVar14 + 1;
        pvVar13 = (void *)((longlong)pvVar13 + 0x40000000);
      } while (uVar14 < param_1);
    }
    if (local_88 != (ulonglong *)0x0) {
      *local_88 = uVar14;
    }
    if (local_80 != (ulong64 *)0x0) {
      *local_80 = uVar14 << 0x1e;
    }
    if (uVar14 == 0) {
      pvVar15 = (void *)0x0;
    }
  }
  return pvVar15;
}

// _mi_os_commit @ 141d90b10

bool __cdecl _mi_os_commit(void *param_1,ulong64 param_2,bool *param_3,mi_stats_s *param_4)

{
  ulonglong uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = os_page_size - 1;
    uVar3 = (longlong)param_1 + param_2 + uVar1;
    pvVar5 = (void *)(((ulonglong)param_1 / os_page_size) * os_page_size);
    if ((os_page_size & uVar1) == 0) {
      uVar3 = ~uVar1 & uVar3;
    }
    else {
      uVar3 = (uVar3 / os_page_size) * os_page_size;
    }
    if (0 < (longlong)(uVar3 - (longlong)pvVar5)) {
      mi_stat_update(&_mi_stats_main.committed,param_2);
      LOCK();
      _mi_stats_main.commit_calls.count = _mi_stats_main.commit_calls.count + 1;
      UNLOCK();
      LOCK();
      _mi_stats_main.commit_calls.total = _mi_stats_main.commit_calls.total + 1;
      UNLOCK();
      pvVar4 = (*pVirtualAlloc)(pvVar5,uVar3 - (longlong)pvVar5,0x1000,4);
      if (pvVar4 == pvVar5) {
        return true;
      }
      DVar2 = GetLastError();
      if (DVar2 != 0) {
        _mi_warning_message("%s error: start: %p, csize: 0x%x, err: %i\n");
      }
      return DVar2 == 0;
    }
  }
  return true;
}

// _mi_os_decommit @ 141d90c40

bool __cdecl _mi_os_decommit(void *param_1,ulong64 param_2,mi_stats_s *param_3)

{
  ulonglong uVar1;
  int iVar2;
  DWORD DVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = os_page_size - 1;
    if ((os_page_size & uVar1) == 0) {
      pvVar4 = (void *)(~uVar1 & uVar1 + (longlong)param_1);
    }
    else {
      pvVar4 = (void *)(((uVar1 + (longlong)param_1) / os_page_size) * os_page_size);
    }
    uVar5 = (((longlong)param_1 + param_2) / os_page_size) * os_page_size - (longlong)pvVar4;
    if (0 < (longlong)uVar5) {
      mi_stat_update(&_mi_stats_main.committed,-param_2);
      iVar2 = (*pVirtualFree)(pvVar4,uVar5,0x4000);
      if (iVar2 != 0) {
        return true;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        _mi_warning_message("%s error: start: %p, csize: 0x%x, err: %i\n");
      }
      return DVar3 == 0;
    }
  }
  return true;
}

// _mi_os_free @ 141d90d40

void __cdecl _mi_os_free(void *param_1,ulong64 param_2,mi_stats_s *param_3)

{
  int iVar1;
  ulong64 uVar2;
  int *piVar3;
  long64 lVar4;
  
  if (((param_2 != 0) && (param_1 != (void *)0x0)) &&
     (uVar2 = _mi_os_good_alloc_size(param_2), uVar2 != 0)) {
    iVar1 = (*pVirtualFree)(param_1,0,0x8000);
    lVar4 = -uVar2;
    mi_stat_update(&_mi_stats_main.committed,lVar4);
    mi_stat_update(&_mi_stats_main.reserved,lVar4);
    if (iVar1 == 0) {
      piVar3 = _errno();
      strerror(*piVar3);
      _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
    }
  }
  return;
}

// _mi_os_free_ex @ 141d90de0

void __cdecl _mi_os_free_ex(void *param_1,ulong64 param_2,bool param_3,mi_stats_s *param_4)

{
  ulong64 uVar1;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = _mi_os_good_alloc_size(param_2);
    mi_os_mem_free(param_1,uVar1,param_3,&_mi_stats_main);
  }
  return;
}

// _mi_os_free_huge_pages @ 141d90e30

void __cdecl _mi_os_free_huge_pages(void *param_1,ulong64 param_2,mi_stats_s *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if ((param_1 != (void *)0x0) && (0x3fffffff < param_2)) {
    uVar3 = param_2 >> 0x1e;
    do {
      iVar1 = (*pVirtualFree)(param_1,0,0x8000);
      mi_stat_update(&_mi_stats_main.committed,-0x40000000);
      mi_stat_update(&_mi_stats_main.reserved,-0x40000000);
      if (iVar1 == 0) {
        piVar2 = _errno();
        strerror(*piVar2);
        _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// _mi_os_good_alloc_size @ 141d90ee0

ulong64 __cdecl _mi_os_good_alloc_size(ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = os_page_size;
  if (0x7ffff < param_1) {
    if (param_1 < 0x200000) {
      return param_1 + 0xffff & 0xffffffffffff0000;
    }
    if (param_1 < 0x800000) {
      return param_1 + 0x3ffff & 0xfffffffffffc0000;
    }
    if (param_1 < 0x2000000) {
      return param_1 + 0xfffff & 0xfffffffffff00000;
    }
    uVar3 = 0x400000;
  }
  if (~uVar3 <= param_1) {
    return param_1;
  }
  uVar1 = uVar3 - 1;
  uVar2 = param_1 + uVar1;
  if ((uVar3 & uVar1) != 0) {
    return uVar2 - uVar2 % uVar3;
  }
  return ~uVar1 & uVar2;
}

// _mi_os_init @ 141d90f80

void __cdecl _mi_os_init(void)

{
  HMODULE pHVar1;
  _func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *p_Var2;
  _SYSTEM_INFO local_38;
  
  GetSystemInfo(&local_38);
  if (local_38.dwPageSize != 0) {
    os_page_size = (ulonglong)local_38.dwPageSize;
  }
  if (local_38.dwAllocationGranularity != 0) {
    os_alloc_granularity = (ulonglong)local_38.dwAllocationGranularity;
  }
  p_Var2 = pNtAllocateVirtualMemoryEx;
  if (pVirtualAlloc == (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)0x0) {
    pVirtualAlloc = VirtualAlloc_exref;
    pVirtualFree = VirtualFree_exref;
    pHVar1 = LoadLibraryW(L"kernelbase.dll");
    p_Var2 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
    if (pHVar1 != (HMODULE)0x0) {
      p_Var2 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
               GetProcAddress(pHVar1,"VirtualAlloc2FromApp");
      if (p_Var2 == (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong
                     *)0x0) {
        p_Var2 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
                 GetProcAddress(pHVar1,"VirtualAlloc2");
      }
      FreeLibrary(pHVar1);
    }
    pVirtualAlloc2 =
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)p_Var2;
    pHVar1 = LoadLibraryW(L"ntdll.dll");
    p_Var2 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
    if (pHVar1 != (HMODULE)0x0) {
      p_Var2 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
               GetProcAddress(pHVar1,"NtAllocateVirtualMemoryEx");
      FreeLibrary(pHVar1);
    }
  }
  pNtAllocateVirtualMemoryEx = p_Var2;
  pHVar1 = LoadLibraryW(L"kernel32.dll");
  if (pHVar1 != (HMODULE)0x0) {
    pGetCurrentProcessorNumberEx =
         (_func___cdecl_void__PROCESSOR_NUMBER_ptr *)
         GetProcAddress(pHVar1,"GetCurrentProcessorNumberEx");
    pGetNumaProcessorNodeEx =
         (_func___cdecl_int__PROCESSOR_NUMBER_ptr_ushort_ptr *)
         GetProcAddress(pHVar1,"GetNumaProcessorNodeEx");
    pGetNumaNodeProcessorMaskEx =
         (_func___cdecl_int_ushort__GROUP_AFFINITY_ptr *)
         GetProcAddress(pHVar1,"GetNumaNodeProcessorMaskEx");
    FreeLibrary(pHVar1);
  }
  if (options[6].init == UNINIT) {
    mi_option_init(options + 6);
  }
  if (options[6].value == 0) {
    if (options[7].init == UNINIT) {
      mi_option_init(options + 7);
    }
    if (options[7].value == 0) {
      return;
    }
  }
  mi_win_enable_large_os_pages();
  return;
}

// _mi_os_large_page_size @ 141d91130

ulong64 __cdecl _mi_os_large_page_size(void)

{
  ulong64 uVar1;
  
  uVar1 = os_page_size;
  if (large_os_page_size != 0) {
    uVar1 = large_os_page_size;
  }
  return uVar1;
}

// _mi_os_numa_node @ 141d91150

int __cdecl _mi_os_numa_node(mi_os_tld_s *param_1)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  undefined2 local_res10;
  _PROCESSOR_NUMBER local_res18 [4];
  
  if (_mi_numa_node_count == 1) {
    return 0;
  }
  uVar4 = _mi_os_numa_node_count();
  uVar5 = 0;
  iVar1 = 0;
  if (1 < uVar4) {
    if ((pGetCurrentProcessorNumberEx == (_func___cdecl_void__PROCESSOR_NUMBER_ptr *)0x0) ||
       (pGetNumaProcessorNodeEx == (_func___cdecl_int__PROCESSOR_NUMBER_ptr_ushort_ptr *)0x0)) {
      DVar2 = GetCurrentProcessorNumber();
      local_res10 = (ushort)local_res10._1_1_ << 8;
      BVar3 = GetNumaProcessorNode((UCHAR)DVar2,(PUCHAR)&local_res10);
      if (BVar3 != 0) {
        uVar5 = (ulonglong)(byte)local_res10;
      }
    }
    else {
      (*pGetCurrentProcessorNumberEx)(local_res18);
      local_res10 = 0;
      iVar1 = (*pGetNumaProcessorNodeEx)(local_res18,&local_res10);
      if (iVar1 != 0) {
        uVar5 = (ulonglong)local_res10;
      }
    }
    iVar1 = (int)uVar5;
    if (uVar4 <= uVar5) {
      iVar1 = (int)(uVar5 % uVar4);
    }
  }
  return iVar1;
}

// _mi_os_numa_node_count @ 141d91210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl _mi_os_numa_node_count(void)

{
  ulong64 uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_58 [32];
  ULONG local_38 [2];
  ulong64 local_30;
  _GROUP_AFFINITY local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (_mi_numa_node_count == 0) {
    if (options[0x11].init == UNINIT) {
      mi_option_init(options + 0x11);
    }
    lVar3 = options[0x11].value;
    if (options[0x11].value < 1) {
      local_38[0] = 0;
      GetNumaHighestNodeNumber(local_38);
      for (; local_38[0] != 0; local_38[0] = local_38[0] - 1) {
        if (pGetNumaNodeProcessorMaskEx == (_func___cdecl_int_ushort__GROUP_AFFINITY_ptr *)0x0) {
          iVar2 = GetNumaNodeProcessorMask((UCHAR)local_38[0],&local_30);
          uVar1 = local_30;
        }
        else {
          iVar2 = (*pGetNumaNodeProcessorMaskEx)((ushort)local_38[0],&local_28);
          uVar1 = local_28.Mask;
        }
        if ((iVar2 != 0) && (uVar1 != 0)) break;
      }
      lVar3 = local_38[0] + 1;
    }
    if (lVar3 < 1) {
      lVar3 = 1;
    }
    _mi_numa_node_count = (ulong64)lVar3;
    _mi_verbose_message("using %zd numa regions\n");
  }
  return _mi_numa_node_count;
}

// _mi_os_numa_node_count_get @ 141d91310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl _mi_os_numa_node_count_get(void)

{
  ulong64 uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_58 [32];
  ULONG local_38 [2];
  ulong64 local_30;
  _GROUP_AFFINITY local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (_mi_numa_node_count == 0) {
    if (options[0x11].init == UNINIT) {
      mi_option_init(options + 0x11);
    }
    lVar3 = options[0x11].value;
    if (options[0x11].value < 1) {
      local_38[0] = 0;
      GetNumaHighestNodeNumber(local_38);
      for (; local_38[0] != 0; local_38[0] = local_38[0] - 1) {
        if (pGetNumaNodeProcessorMaskEx == (_func___cdecl_int_ushort__GROUP_AFFINITY_ptr *)0x0) {
          iVar2 = GetNumaNodeProcessorMask((UCHAR)local_38[0],&local_30);
          uVar1 = local_30;
        }
        else {
          iVar2 = (*pGetNumaNodeProcessorMaskEx)((ushort)local_38[0],&local_28);
          uVar1 = local_28.Mask;
        }
        if ((iVar2 != 0) && (uVar1 != 0)) break;
      }
      lVar3 = local_38[0] + 1;
    }
    if (lVar3 < 1) {
      lVar3 = 1;
    }
    _mi_numa_node_count = (ulong64)lVar3;
    _mi_verbose_message("using %zd numa regions\n");
  }
  return _mi_numa_node_count;
}

// _mi_os_numa_node_get @ 141d91410

int __cdecl _mi_os_numa_node_get(mi_os_tld_s *param_1)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  undefined2 local_res10;
  _PROCESSOR_NUMBER local_res18 [4];
  
  uVar4 = _mi_os_numa_node_count();
  if (uVar4 < 2) {
    return 0;
  }
  uVar5 = 0;
  if ((pGetCurrentProcessorNumberEx == (_func___cdecl_void__PROCESSOR_NUMBER_ptr *)0x0) ||
     (pGetNumaProcessorNodeEx == (_func___cdecl_int__PROCESSOR_NUMBER_ptr_ushort_ptr *)0x0)) {
    DVar2 = GetCurrentProcessorNumber();
    local_res10 = (ushort)local_res10._1_1_ << 8;
    BVar3 = GetNumaProcessorNode((UCHAR)DVar2,(PUCHAR)&local_res10);
    if (BVar3 != 0) {
      uVar5 = (ulonglong)(byte)local_res10;
    }
  }
  else {
    (*pGetCurrentProcessorNumberEx)(local_res18);
    local_res10 = 0;
    iVar1 = (*pGetNumaProcessorNodeEx)(local_res18,&local_res10);
    if (iVar1 != 0) {
      uVar5 = (ulonglong)local_res10;
    }
  }
  iVar1 = (int)uVar5;
  if (uVar4 <= uVar5) {
    iVar1 = (int)(uVar5 % uVar4);
  }
  return iVar1;
}

// _mi_os_page_size @ 141d914c0

ulong64 __cdecl _mi_os_page_size(void)

{
  return os_page_size;
}

// _mi_os_protect @ 141d914d0

bool __cdecl _mi_os_protect(void *param_1,ulong64 param_2)

{
  bool bVar1;
  
  bVar1 = mi_os_protectx(param_1,param_2,true);
  return bVar1;
}

// _mi_os_reset @ 141d914e0

bool __cdecl _mi_os_reset(void *param_1,ulong64 param_2,mi_stats_s *param_3)

{
  bool bVar1;
  
  if (options[5].init == UNINIT) {
    mi_option_init(options + 5);
  }
  if (options[5].value != 0) {
    bVar1 = _mi_os_decommit(param_1,param_2,&_mi_stats_main);
    return bVar1;
  }
  bVar1 = mi_os_resetx(param_1,param_2,true,&_mi_stats_main);
  return bVar1;
}

// _mi_os_shrink @ 141d91550

bool __cdecl _mi_os_shrink(void *param_1,ulong64 param_2,ulong64 param_3,mi_stats_s *param_4)

{
  ulonglong uVar1;
  int iVar2;
  DWORD DVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  if ((param_3 <= param_2) && (param_1 != (void *)0x0)) {
    if (param_2 == param_3) {
      return true;
    }
    uVar1 = (longlong)param_1 + param_3;
    if ((param_2 - param_3 != 0) && (uVar1 != 0)) {
      uVar4 = os_page_size - 1;
      if ((os_page_size & uVar4) == 0) {
        uVar4 = ~uVar4 & uVar4 + uVar1;
      }
      else {
        uVar4 = ((uVar4 + uVar1) / os_page_size) * os_page_size;
      }
      lVar7 = (((param_2 - param_3) + uVar1) / os_page_size) * os_page_size - uVar4;
      if ((0 < lVar7) && (uVar4 == uVar1)) {
        if (uVar4 != 0) {
          uVar1 = os_page_size - 1;
          if ((os_page_size & uVar1) == 0) {
            pvVar5 = (void *)(~uVar1 & uVar1 + uVar4);
          }
          else {
            pvVar5 = (void *)(((uVar1 + uVar4) / os_page_size) * os_page_size);
          }
          uVar6 = ((uVar4 + lVar7) / os_page_size) * os_page_size - (longlong)pvVar5;
          if (0 < (longlong)uVar6) {
            mi_stat_update(&_mi_stats_main.committed,-lVar7);
            iVar2 = (*pVirtualFree)(pvVar5,uVar6,0x4000);
            if (iVar2 != 0) {
              return true;
            }
            DVar3 = GetLastError();
            if (DVar3 != 0) {
              _mi_warning_message("%s error: start: %p, csize: 0x%x, err: %i\n");
            }
            return DVar3 == 0;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// _mi_os_unprotect @ 141d916d0

bool __cdecl _mi_os_unprotect(void *param_1,ulong64 param_2)

{
  bool bVar1;
  
  bVar1 = mi_os_protectx(param_1,param_2,false);
  return bVar1;
}

// _mi_os_unreset @ 141d916e0

bool __cdecl _mi_os_unreset(void *param_1,ulong64 param_2,bool *param_3,mi_stats_s *param_4)

{
  DWORD DVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulong64 uVar6;
  
  if (options[5].init == UNINIT) {
    mi_option_init(options + 5);
  }
  if (options[5].value == 0) {
    *param_3 = false;
    if ((param_2 != 0) && (param_1 != (void *)0x0)) {
      uVar4 = os_page_size - 1;
      if ((os_page_size & uVar4) == 0) {
        uVar4 = ~uVar4 & uVar4 + (longlong)param_1;
      }
      else {
        uVar4 = ((uVar4 + (longlong)param_1) / os_page_size) * os_page_size;
      }
      lVar3 = (((longlong)param_1 + param_2) / os_page_size) * os_page_size - uVar4;
      if (0 < lVar3) {
        mi_stat_update(&_mi_stats_main.reset,-lVar3);
      }
    }
    return true;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar4 = os_page_size - 1;
    if ((os_page_size & uVar4) == 0) {
      pvVar5 = (void *)(~uVar4 & uVar4 + (longlong)param_1);
    }
    else {
      pvVar5 = (void *)(((uVar4 + (longlong)param_1) / os_page_size) * os_page_size);
    }
    uVar6 = (((longlong)param_1 + param_2) / os_page_size) * os_page_size - (longlong)pvVar5;
    if (0 < (longlong)uVar6) {
      mi_stat_update(&_mi_stats_main.committed,param_2);
      LOCK();
      _mi_stats_main.commit_calls.count = _mi_stats_main.commit_calls.count + 1;
      UNLOCK();
      LOCK();
      _mi_stats_main.commit_calls.total = _mi_stats_main.commit_calls.total + 1;
      UNLOCK();
      pvVar2 = (*pVirtualAlloc)(pvVar5,uVar6,0x1000,4);
      if (pvVar2 == pvVar5) {
        return true;
      }
      DVar1 = GetLastError();
      if (DVar1 != 0) {
        _mi_warning_message("%s error: start: %p, csize: 0x%x, err: %i\n");
      }
      return DVar1 == 0;
    }
  }
  return true;
}

// _mi_page_abandon @ 141d918b0

void __cdecl _mi_page_abandon(mi_page_s *param_1,mi_page_queue_s *param_2)

{
  mi_stat_count_s *pmVar1;
  long64 *plVar2;
  mi_heap_s *pmVar3;
  mi_tld_s *pmVar4;
  mi_stats_s *pmVar5;
  longlong lVar6;
  longlong lVar7;
  mi_segment_s *pmVar8;
  bool bVar9;
  
  pmVar3 = (mi_heap_s *)param_1->xheap;
  pmVar4 = pmVar3->tld;
  if (param_1->prev != (mi_page_s *)0x0) {
    param_1->prev->next = param_1->next;
  }
  if (param_1->next != (mi_page_s *)0x0) {
    param_1->next->prev = param_1->prev;
  }
  if (param_1 == param_2->last) {
    param_2->last = param_1->prev;
  }
  if (param_1 == param_2->first) {
    param_2->first = param_1->next;
    mi_heap_queue_first_update(pmVar3,param_2);
  }
  pmVar3->page_count = pmVar3->page_count - 1;
  (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfe;
  param_1->next = (mi_page_s *)0x0;
  pmVar8 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  param_1->prev = (mi_page_s *)0x0;
  param_1->xheap = 0;
  pmVar8->abandoned = pmVar8->abandoned + 1;
  pmVar5 = (pmVar4->segments).stats;
  pmVar1 = &pmVar5->pages_abandoned;
  if ((pmVar1 < &_mi_stats_main) ||
     ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar1)) {
    lVar7 = (pmVar5->pages_abandoned).current + 1;
    (pmVar5->pages_abandoned).current = lVar7;
    if ((pmVar5->pages_abandoned).peak < lVar7) {
      (pmVar5->pages_abandoned).peak = lVar7;
    }
    pmVar1->allocated = pmVar1->allocated + 1;
  }
  else {
    LOCK();
    plVar2 = &(pmVar5->pages_abandoned).current;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    do {
      lVar6 = (pmVar5->pages_abandoned).peak;
      if (lVar7 + 1 <= lVar6) break;
      plVar2 = &(pmVar5->pages_abandoned).peak;
      LOCK();
      bVar9 = lVar6 == *plVar2;
      if (bVar9) {
        *plVar2 = lVar7 + 1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    pmVar1->allocated = pmVar1->allocated + 1;
    UNLOCK();
  }
  if (pmVar8->used == pmVar8->abandoned) {
    mi_segment_abandon(pmVar8,&pmVar4->segments);
  }
  return;
}

// _mi_page_free @ 141d91a10

void __cdecl _mi_page_free(mi_page_s *param_1,mi_page_queue_s *param_2,bool param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  mi_stat_count_s *pmVar3;
  longlong *plVar4;
  
  (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfd;
  uVar2 = (ulonglong)param_1->xblock_size;
  plVar4 = (longlong *)param_1->xheap;
  if (0x7ffffff < uVar2) {
    uVar2 = (ulonglong)param_1->slice_count << 0x10;
  }
  if (0x20000 < uVar2) {
    if (uVar2 < 0x400001) {
      pmVar3 = (mi_stat_count_s *)(*plVar4 + 0x538);
    }
    else {
      pmVar3 = (mi_stat_count_s *)(*plVar4 + 0x518);
    }
    mi_stat_update(pmVar3,-uVar2);
  }
  lVar1 = *plVar4;
  mi_page_queue_remove(param_2,param_1);
  param_1->xheap = 0;
  _mi_segment_page_free(param_1,param_3,(mi_segments_tld_s *)(lVar1 + 0x20));
  return;
}

// _mi_page_free_collect @ 141d91ab0

void __cdecl _mi_page_free_collect(mi_page_s *param_1,bool param_2)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  mi_block_s *pmVar6;
  bool bVar7;
  
  if ((param_2) || ((param_1->xthread_free & 0xfffffffffffffffc) != 0)) {
    uVar3 = param_1->xthread_free;
    do {
      pmVar6 = (mi_block_s *)(uVar3 & 0xfffffffffffffffc);
      LOCK();
      uVar4 = param_1->xthread_free;
      bVar7 = uVar3 == uVar4;
      if (bVar7) {
        param_1->xthread_free = (ulonglong)((uint)uVar3 & 3);
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar4;
    } while (!bVar7);
    if (pmVar6 != (mi_block_s *)0x0) {
      uVar5 = 1;
      pmVar1 = pmVar6;
      for (pmVar2 = (mi_block_s *)pmVar6->next; pmVar2 != (mi_block_s *)0x0;
          pmVar2 = (mi_block_s *)pmVar2->next) {
        if (param_1->capacity < uVar5) goto LAB_141d91b18;
        uVar5 = uVar5 + 1;
        pmVar1 = pmVar2;
      }
      if (param_1->capacity < uVar5) {
LAB_141d91b18:
        _mi_error_message(0xe,"corrupted thread-free list\n");
      }
      else {
        pmVar1->next = (ulong64)param_1->local_free;
        param_1->used = param_1->used - uVar5;
        param_1->local_free = pmVar6;
      }
    }
  }
  pmVar6 = param_1->local_free;
  if (pmVar6 != (mi_block_s *)0x0) {
    if (param_1->free == (mi_block_s *)0x0) {
      param_1->free = pmVar6;
    }
    else {
      if (!param_2) {
        return;
      }
      for (pmVar1 = (mi_block_s *)pmVar6->next; pmVar1 != (mi_block_s *)0x0;
          pmVar1 = (mi_block_s *)pmVar1->next) {
        pmVar6 = pmVar1;
      }
      pmVar6->next = (ulong64)param_1->free;
      param_1->free = param_1->local_free;
    }
    param_1->is_zero = '\0';
    param_1->local_free = (mi_block_s *)0x0;
  }
  return;
}

// _mi_page_malloc @ 141d91ba0

void * __cdecl _mi_page_malloc(mi_heap_s *param_1,mi_page_s *param_2,ulong64 param_3)

{
  mi_block_s *pmVar1;
  void *pvVar2;
  
  pmVar1 = param_2->free;
  if (pmVar1 == (mi_block_s *)0x0) {
    pvVar2 = _mi_malloc_generic(param_1,param_3);
    return pvVar2;
  }
  param_2->used = param_2->used + 1;
  param_2->free = (mi_block_s *)pmVar1->next;
  return pmVar1;
}

// _mi_page_ptr_unalign @ 141d91bd0

mi_block_s * __cdecl _mi_page_ptr_unalign(mi_segment_s *param_1,mi_page_s *param_2,void *param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2->xblock_size;
  if (0x7ffffff < uVar1) {
    uVar1 = (ulonglong)param_2->slice_count << 0x10;
  }
  return (mi_block_s *)
         ((longlong)param_3 -
         (ulonglong)
         ((longlong)param_3 +
         ((((longlong)param_2 + (-0x80 - (longlong)param_1)) / 0x50) * -0x10000 - (longlong)param_1)
         ) % uVar1);
}

// _mi_page_queue_append @ 141d91c30

ulong64 __cdecl
_mi_page_queue_append(mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_queue_s *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulong64 uVar3;
  mi_page_s *pmVar4;
  bool bVar5;
  
  pmVar4 = param_3->first;
  if (pmVar4 == (mi_page_s *)0x0) {
    return 0;
  }
  uVar3 = 0;
  do {
    pmVar4->xheap = (ulong64)param_1;
    do {
      do {
        uVar1 = pmVar4->xthread_free;
        uVar2 = (uint)uVar1 & 3;
      } while (uVar2 == 1);
      if (((uVar1 & 3) == 0) || (uVar2 == 3)) break;
      LOCK();
      bVar5 = uVar1 == pmVar4->xthread_free;
      if (bVar5) {
        pmVar4->xthread_free = uVar1 & 0xfffffffffffffffc;
      }
      UNLOCK();
    } while (!bVar5);
    pmVar4 = pmVar4->next;
    uVar3 = uVar3 + 1;
    if (pmVar4 == (mi_page_s *)0x0) {
      if (param_2->last != (mi_page_s *)0x0) {
        param_2->last->next = param_3->first;
        param_3->first->prev = param_2->last;
        param_2->last = param_3->last;
        return uVar3;
      }
      param_2->first = param_3->first;
      param_2->last = param_3->last;
      mi_heap_queue_first_update(param_1,param_2);
      return uVar3;
    }
  } while( true );
}

// _mi_page_reclaim @ 141d91d00

void __cdecl _mi_page_reclaim(mi_heap_s *param_1,mi_page_s *param_2)

{
  mi_page_queue_s *pmVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_2->xblock_size;
  if (0x7ffffff < uVar2) {
    uVar2 = (ulonglong)param_2->slice_count << 0x10;
  }
  pmVar1 = mi_page_queue(param_1,uVar2);
  (param_2->flags).full_aligned =
       pmVar1->block_size == 0x20010 | (param_2->flags).full_aligned & 0xfe;
  param_2->next = pmVar1->first;
  param_2->prev = (mi_page_s *)0x0;
  if (pmVar1->first == (mi_page_s *)0x0) {
    pmVar1->last = param_2;
  }
  else {
    pmVar1->first->prev = param_2;
  }
  pmVar1->first = param_2;
  mi_heap_queue_first_update(param_1,pmVar1);
  param_1->page_count = param_1->page_count + 1;
  return;
}

// _mi_page_retire @ 141d91d80

void __cdecl _mi_page_retire(mi_page_s *param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  mi_stat_count_s *pmVar4;
  mi_segments_tld_s *pmVar5;
  mi_segment_s *pmVar6;
  longlong *plVar7;
  mi_page_queue_s *pmVar8;
  
  (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfd;
  if (((param_1->flags).full_aligned & 1) == 0) {
    bVar2 = _mi_bin((ulonglong)param_1->xblock_size);
  }
  else {
    bVar2 = 0x4a;
  }
  plVar7 = (longlong *)param_1->xheap;
  pmVar8 = (mi_page_queue_s *)(plVar7 + (ulonglong)bVar2 * 3 + 0x82);
  uVar1 = param_1->xblock_size;
  uVar3 = (ulonglong)uVar1;
  if ((((uVar1 < 0x20001) && (((param_1->flags).full_aligned & 1) == 0)) &&
      (pmVar8->last == param_1)) && (pmVar8->first == param_1)) {
    param_1->retire_expire = '\0';
    bVar2 = 6;
    if (uVar1 < 0x4001) {
      bVar2 = 0x12;
    }
    param_1->field_0xf = param_1->field_0xf | bVar2;
    uVar3 = ((longlong)pmVar8 + (-0x410 - (longlong)plVar7)) / 0x18;
    if (uVar3 < (ulonglong)plVar7[0x17a]) {
      plVar7[0x17a] = uVar3;
    }
    if ((ulonglong)plVar7[0x17b] < uVar3) {
      plVar7[0x17b] = uVar3;
      return;
    }
  }
  else {
    (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfd;
    if (0x7ffffff < uVar1) {
      uVar3 = (ulonglong)param_1->slice_count << 0x10;
    }
    if (0x20000 < uVar3) {
      if (uVar3 < 0x400001) {
        pmVar4 = (mi_stat_count_s *)(*plVar7 + 0x538);
      }
      else {
        pmVar4 = (mi_stat_count_s *)(*plVar7 + 0x518);
      }
      mi_stat_update(pmVar4,-uVar3);
    }
    pmVar5 = (mi_segments_tld_s *)(*plVar7 + 0x20);
    mi_page_queue_remove(pmVar8,param_1);
    param_1->xheap = 0;
    pmVar6 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
    mi_segment_page_clear(param_1,pmVar5);
    if (pmVar6->used == 0) {
      mi_segment_free(pmVar6,false,pmVar5);
      return;
    }
    if (pmVar6->used == pmVar6->abandoned) {
      mi_segment_abandon(pmVar6,pmVar5);
    }
  }
  return;
}

// _mi_page_unfull @ 141d91f10

void __cdecl _mi_page_unfull(mi_page_s *param_1)

{
  ulong64 uVar1;
  byte bVar2;
  
  if (((param_1->flags).full_aligned & 1) != 0) {
    uVar1 = param_1->xheap;
    (param_1->flags).full_aligned = (param_1->flags).full_aligned & 0xfe;
    bVar2 = _mi_bin((ulonglong)param_1->xblock_size);
    (param_1->flags).full_aligned = (param_1->flags).full_aligned | 1;
    mi_page_queue_enqueue_from
              ((mi_page_queue_s *)(uVar1 + (ulonglong)bVar2 * 0x18 + 0x410),
               (mi_page_queue_s *)(uVar1 + 0xb00),param_1);
  }
  return;
}

// _mi_page_use_delayed_free @ 141d91f70

void __cdecl _mi_page_use_delayed_free(mi_page_s *param_1,mi_delayed_e param_2,bool param_3)

{
  ulonglong uVar1;
  mi_delayed_e mVar2;
  bool bVar3;
  
  do {
    do {
      uVar1 = param_1->xthread_free;
      mVar2 = (mi_delayed_e)uVar1 & MI_NEVER_DELAYED_FREE;
    } while (mVar2 == MI_DELAYED_FREEING);
    if (param_2 == mVar2) {
      return;
    }
    if ((!param_3) && (mVar2 == MI_NEVER_DELAYED_FREE)) {
      return;
    }
    LOCK();
    bVar3 = uVar1 == param_1->xthread_free;
    if (bVar3) {
      param_1->xthread_free = uVar1 & 0xfffffffffffffffc | (longlong)(int)param_2;
    }
    UNLOCK();
  } while (!bVar3);
  return;
}

// _mi_preloading @ 141d91fc0

bool __cdecl _mi_preloading(void)

{
  return os_preloading;
}

// _mi_random_init @ 141d91fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _mi_random_init(mi_random_cxt_s *param_1)

{
  NTSTATUS NVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)&local_38,0x20,2);
  if (-1 < NVar1) goto LAB_141d9223e;
  _mi_warning_message("unable to use secure randomness\n");
  uVar2 = _os_random_weak(0);
  uVar3 = 0x302b8631721c51be;
  if (uVar2 == 0) {
    local_38 = 0x721c51be;
    uVar4 = 0x88d8e4836109d035;
    local_34 = 0x6109d035;
LAB_141d9207b:
    uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
    uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
    uVar4 = uVar4 >> 0x1f ^ uVar4;
    local_30 = (undefined4)uVar4;
    if (uVar4 == 0) {
      local_2c = 0x721c51be;
      uVar4 = 0x88d8e4836109d035;
      local_28 = 0x6109d035;
      goto LAB_141d920df;
    }
LAB_141d9217e:
    uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
    uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
    uVar4 = uVar4 >> 0x1f ^ uVar4;
    local_2c = (undefined4)uVar4;
    if (uVar4 != 0) goto LAB_141d922c5;
    local_28 = 0x721c51be;
    uVar4 = 0x88d8e4836109d035;
    local_24 = 0x6109d035;
LAB_141d921e2:
    uVar3 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
    uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
    uVar3 = uVar3 >> 0x1f ^ uVar3;
    local_20 = (undefined4)uVar3;
    if (uVar3 == 0) {
      uVar3 = 0x11;
    }
  }
  else {
    uVar4 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
    uVar4 = uVar4 >> 0x1f ^ uVar4;
    local_38 = (undefined4)uVar4;
    if (uVar4 == 0) {
      local_34 = 0x721c51be;
      uVar4 = 0x88d8e4836109d035;
      local_30 = 0x6109d035;
      goto LAB_141d9217e;
    }
    uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
    uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
    uVar4 = uVar4 >> 0x1f ^ uVar4;
    local_34 = (undefined4)uVar4;
    if (uVar4 != 0) goto LAB_141d9207b;
    local_30 = 0x721c51be;
    uVar4 = 0x88d8e4836109d035;
    local_2c = 0x6109d035;
LAB_141d922c5:
    uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
    uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
    uVar4 = uVar4 >> 0x1f ^ uVar4;
    local_28 = (undefined4)uVar4;
    if (uVar4 == 0) {
      local_24 = 0x721c51be;
      uVar3 = 0x88d8e4836109d035;
      local_20 = 0x6109d035;
    }
    else {
LAB_141d920df:
      uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
      uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
      uVar4 = uVar4 >> 0x1f ^ uVar4;
      local_24 = (undefined4)uVar4;
      if (uVar4 != 0) goto LAB_141d921e2;
      local_20 = 0x721c51be;
    }
  }
  uVar3 = (uVar3 >> 0x1e ^ uVar3) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  local_1c = (uint)(uVar3 >> 0x1f) ^ (uint)uVar3;
LAB_141d9223e:
  chacha_init(param_1,(uchar *)&local_38,(ulong64)param_1);
  return;
}

// _mi_random_next @ 141d92340

ulong64 __cdecl _mi_random_next(mi_random_cxt_s *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = param_1->output_available;
  if ((int)uVar3 < 1) {
    chacha_block(param_1);
    uVar3 = 0x10;
    param_1->output_available = 0x10;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + (0x20 - (ulonglong)uVar3) * 4);
  *(undefined4 *)((longlong)param_1 + (0x20 - (ulonglong)uVar3) * 4) = 0;
  param_1->output_available = param_1->output_available + -1;
  uVar4 = (ulonglong)(uint)param_1->output_available;
  if (param_1->output_available < 1) {
    chacha_block(param_1);
    uVar4 = 0x10;
    param_1->output_available = 0x10;
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + (0x20 - uVar4) * 4);
  *(undefined4 *)((longlong)param_1 + (0x20 - uVar4) * 4) = 0;
  param_1->output_available = param_1->output_available + -1;
  return CONCAT44(uVar1,uVar2);
}

// _mi_random_split @ 141d923e0

void __cdecl _mi_random_split(mi_random_cxt_s *param_1,mi_random_cxt_s *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  mi_random_cxt_s *pmVar3;
  
  param_2->input[0] = 0;
  param_2->input[1] = 0;
  param_2->input[2] = 0;
  param_2->input[3] = 0;
  param_2->input[4] = 0;
  param_2->input[5] = 0;
  param_2->input[6] = 0;
  param_2->input[7] = 0;
  param_2->input[8] = 0;
  param_2->input[9] = 0;
  param_2->input[10] = 0;
  param_2->input[0xb] = 0;
  param_2->input[0xc] = 0;
  param_2->input[0xd] = 0;
  param_2->input[0xe] = 0;
  param_2->input[0xf] = 0;
  param_2->output[0] = 0;
  param_2->output[1] = 0;
  param_2->output[2] = 0;
  param_2->output[3] = 0;
  param_2->output[4] = 0;
  param_2->output[5] = 0;
  param_2->output[6] = 0;
  param_2->output[7] = 0;
  param_2->output[8] = 0;
  param_2->output[9] = 0;
  param_2->output[10] = 0;
  param_2->output[0xb] = 0;
  param_2->output[0xc] = 0;
  param_2->output[0xd] = 0;
  param_2->output[0xe] = 0;
  param_2->output[0xf] = 0;
  param_2->output_available = 0;
  if (_mi_cpu_has_fsrm == false) {
    uVar1 = *(undefined8 *)(param_1->input + 2);
    *(undefined8 *)param_2->input = *(undefined8 *)param_1->input;
    *(undefined8 *)(param_2->input + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_1->input + 6);
    *(undefined8 *)(param_2->input + 4) = *(undefined8 *)(param_1->input + 4);
    *(undefined8 *)(param_2->input + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1->input + 10);
    *(undefined8 *)(param_2->input + 8) = *(undefined8 *)(param_1->input + 8);
    *(undefined8 *)(param_2->input + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_1->input + 0xe);
    *(undefined8 *)(param_2->input + 0xc) = *(undefined8 *)(param_1->input + 0xc);
    *(undefined8 *)(param_2->input + 0xe) = uVar1;
  }
  else {
    pmVar3 = param_2;
    for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(char *)pmVar3->input = (char)param_1->input[0];
      param_1 = (mi_random_cxt_s *)((longlong)param_1->input + 1);
      pmVar3 = (mi_random_cxt_s *)((longlong)pmVar3->input + 1);
    }
  }
  param_2->input[0xc] = 0;
  param_2->input[0xd] = 0;
  *(mi_random_cxt_s **)(param_2->input + 0xe) = param_2;
  chacha_block(param_2);
  return;
}

// _mi_segment_cache_pop @ 141d92480

void * __cdecl
_mi_segment_cache_pop
          (ulong64 param_1,ulong64 *param_2,bool *param_3,bool *param_4,bool *param_5,
          ulong64 *param_6,mi_os_tld_s *param_7)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if (param_1 == 0x800000) {
    iVar3 = _mi_os_numa_node(param_7);
    uVar11 = 0;
    uVar13 = uVar11;
    if (0 < iVar3) {
      uVar4 = _mi_os_numa_node_count();
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4;
      uVar13 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10)) / auVar2,0) * (longlong)iVar3;
      if (0xf < uVar13) {
        uVar13 = 0;
      }
    }
    uVar5 = uVar13;
    uVar10 = uVar11;
    uVar9 = uVar11;
    if (*param_3 != false) {
      do {
        uVar8 = uVar11;
        if (uVar5 < 0x10) {
          uVar8 = uVar5;
        }
        uVar5 = cache_available_large[uVar8];
        if ((uVar5 != 0xffffffffffffffff) && (uVar6 = ~uVar5, uVar6 != 0)) {
          uVar12 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          uVar6 = 1L << ((byte)uVar12 & 0x3f);
          uVar12 = uVar12 & 0xffffffff;
          while (uVar12 < 0x40) {
            if ((uVar5 & uVar6) == 0) {
              LOCK();
              uVar7 = cache_available_large[uVar8];
              bVar14 = uVar5 == uVar7;
              if (bVar14) {
                cache_available_large[uVar8] = uVar6 | uVar5;
                uVar7 = uVar5;
              }
              UNLOCK();
              uVar5 = uVar7;
              if (bVar14) {
                bVar14 = true;
                uVar12 = uVar8 * 0x40 + uVar12;
                goto LAB_141d9260f;
              }
            }
            else {
              uVar12 = uVar12 + 1;
              uVar6 = uVar6 * 2;
            }
          }
        }
        uVar9 = uVar9 + 1;
        uVar5 = uVar8 + 1;
      } while (uVar9 < 0x10);
    }
    do {
      uVar5 = uVar11;
      if (uVar13 < 0x10) {
        uVar5 = uVar13;
      }
      uVar13 = cache_available[uVar5];
      if ((uVar13 != 0xffffffffffffffff) && (uVar9 = ~uVar13, uVar9 != 0)) {
        uVar12 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        uVar9 = 1L << ((byte)uVar12 & 0x3f);
        uVar12 = uVar12 & 0xffffffff;
        while (uVar12 < 0x40) {
          if ((uVar13 & uVar9) == 0) {
            LOCK();
            uVar8 = cache_available[uVar5];
            bVar14 = uVar13 == uVar8;
            if (bVar14) {
              cache_available[uVar5] = uVar9 | uVar13;
              uVar8 = uVar13;
            }
            UNLOCK();
            uVar13 = uVar8;
            if (bVar14) {
              uVar12 = uVar5 * 0x40 + uVar12;
              bVar14 = false;
LAB_141d9260f:
              *param_3 = bVar14;
              pvVar1 = cache[uVar12].p;
              *param_6 = cache[uVar12].memid;
              *param_4 = cache[uVar12].is_pinned;
              *param_5 = false;
              uVar4 = cache[uVar12].commit_mask;
              cache[uVar12].p = (void *)0x0;
              cache[uVar12].expire = 0;
              *param_2 = uVar4;
              LOCK();
              cache_inuse[uVar12 >> 6] = cache_inuse[uVar12 >> 6] & ~(1L << ((byte)uVar12 & 0x3f));
              UNLOCK();
              return pvVar1;
            }
          }
          else {
            uVar12 = uVar12 + 1;
            uVar9 = uVar9 * 2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar13 = uVar5 + 1;
    } while (uVar10 < 0x10);
  }
  return (void *)0x0;
}

// _mi_segment_cache_push @ 141d926c0

bool __cdecl
_mi_segment_cache_push
          (void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,bool param_5,bool param_6,
          mi_os_tld_s *param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  long64 lVar7;
  ulong64 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if ((param_2 == 0x800000) && (((ulonglong)param_1 & 0x7fffff) == 0)) {
    iVar2 = _mi_os_numa_node((mi_os_tld_s *)0x0);
    uVar10 = 0;
    uVar9 = uVar10;
    if (0 < iVar2) {
      uVar4 = _mi_os_numa_node_count();
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar9 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10)) / auVar1,0) * (longlong)iVar2;
      if (0xf < uVar9) {
        uVar9 = 0;
      }
    }
    mi_segment_cache_purge(param_7);
    uVar13 = uVar10;
    do {
      uVar11 = uVar10;
      if (uVar9 < 0x10) {
        uVar11 = uVar9;
      }
      uVar9 = cache_inuse[uVar11];
      if ((uVar9 != 0xffffffffffffffff) && (uVar5 = ~uVar9, uVar5 != 0)) {
        uVar12 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        uVar5 = 1L << ((byte)uVar12 & 0x3f);
        uVar12 = uVar12 & 0xffffffff;
        while (uVar12 < 0x40) {
          if ((uVar9 & uVar5) == 0) {
            LOCK();
            uVar6 = cache_inuse[uVar11];
            bVar14 = uVar9 == uVar6;
            if (bVar14) {
              cache_inuse[uVar11] = uVar5 | uVar9;
              uVar6 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar6;
            if (bVar14) {
              uVar12 = uVar11 * 0x40 + uVar12;
              cache[uVar12].commit_mask = param_4;
              *(bool *)(uVar12 * 0x28 + 0x154f91750) = param_6;
              cache[uVar12].p = param_1;
              cache[uVar12].memid = param_3;
              cache[uVar12].expire = 0;
              if ((((param_4 != 0) && (!param_5)) && (!param_6)) &&
                 (bVar14 = mi_option_is_enabled(mi_option_allow_decommit), bVar14)) {
                lVar3 = mi_option_get(mi_option_segment_decommit_delay);
                if (lVar3 == 0) {
                  do {
                  } while (abandoned_readers != 0);
                  mi_commit_mask_decommit
                            (&cache[uVar12].commit_mask,param_1,0x800000,param_7->stats);
                }
                else {
                  lVar7 = _mi_clock_now();
                  cache[uVar12].expire = lVar7 + lVar3;
                }
              }
              puVar8 = cache_available;
              if (param_5) {
                puVar8 = cache_available_large;
              }
              LOCK();
              puVar8[uVar12 >> 6] = puVar8[uVar12 >> 6] & ~(1L << ((byte)uVar12 & 0x3f));
              UNLOCK();
              return true;
            }
          }
          else {
            uVar12 = uVar12 + 1;
            uVar5 = uVar5 * 2;
          }
        }
      }
      uVar13 = uVar13 + 1;
      uVar9 = uVar11 + 1;
    } while (uVar13 < 0x10);
  }
  return false;
}

// _mi_segment_huge_page_free @ 141d928f0

void __cdecl
_mi_segment_huge_page_free(mi_segment_s *param_1,mi_page_s *param_2,mi_block_s *param_3)

{
  mi_heap_s *pmVar1;
  bool bVar2;
  
  pmVar1 = mi_heap_get_default();
  LOCK();
  bVar2 = param_1->thread_id == 0;
  if (bVar2) {
    param_1->thread_id = pmVar1->thread_id;
  }
  UNLOCK();
  if (bVar2) {
    param_3->next = (ulong64)param_2->free;
    param_2->used = param_2->used - 1;
    param_2->is_zero = '\0';
    param_2->free = param_3;
    _mi_segment_page_free(param_2,true,&pmVar1->tld->segments);
  }
  return;
}

// _mi_segment_map_allocated_at @ 141d92960

void __cdecl _mi_segment_map_allocated_at(mi_segment_s *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_1 < (mi_segment_s *)0x140000000000) {
    uVar3 = (ulonglong)param_1 >> 0x1d;
    if (uVar3 != 0) {
      uVar1 = mi_segment_map[uVar3];
      do {
        LOCK();
        uVar2 = mi_segment_map[uVar3];
        bVar4 = uVar1 == uVar2;
        if (bVar4) {
          mi_segment_map[uVar3] = uVar1 | 1L << ((uint)((ulonglong)param_1 >> 0x17) & 0x3f);
          uVar2 = uVar1;
        }
        UNLOCK();
        uVar1 = uVar2;
      } while (!bVar4);
    }
  }
  return;
}

// _mi_segment_map_freed_at @ 141d929b0

void __cdecl _mi_segment_map_freed_at(mi_segment_s *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (param_1 < (mi_segment_s *)0x140000000000) {
    uVar3 = (ulonglong)param_1 >> 0x1d;
    if (uVar3 != 0) {
      uVar1 = mi_segment_map[uVar3];
      do {
        LOCK();
        uVar2 = mi_segment_map[uVar3];
        bVar4 = uVar1 == uVar2;
        if (bVar4) {
          mi_segment_map[uVar3] = uVar1 & ~(1L << ((uint)((ulonglong)param_1 >> 0x17) & 0x3f));
          uVar2 = uVar1;
        }
        UNLOCK();
        uVar1 = uVar2;
      } while (!bVar4);
    }
  }
  return;
}

// _mi_segment_page_abandon @ 141d92a00

void __cdecl _mi_segment_page_abandon(mi_page_s *param_1,mi_segments_tld_s *param_2)

{
  mi_stat_count_s *pmVar1;
  long64 *plVar2;
  mi_stats_s *pmVar3;
  longlong lVar4;
  longlong lVar5;
  mi_segment_s *pmVar6;
  bool bVar7;
  
  pmVar6 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  pmVar6->abandoned = pmVar6->abandoned + 1;
  pmVar3 = param_2->stats;
  pmVar1 = &pmVar3->pages_abandoned;
  if ((pmVar1 < &_mi_stats_main) ||
     ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar1)) {
    lVar5 = (pmVar3->pages_abandoned).current + 1;
    (pmVar3->pages_abandoned).current = lVar5;
    if ((pmVar3->pages_abandoned).peak < lVar5) {
      (pmVar3->pages_abandoned).peak = lVar5;
    }
    pmVar1->allocated = pmVar1->allocated + 1;
  }
  else {
    LOCK();
    plVar2 = &(pmVar3->pages_abandoned).current;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    do {
      lVar4 = (pmVar3->pages_abandoned).peak;
      if (lVar5 + 1 <= lVar4) break;
      plVar2 = &(pmVar3->pages_abandoned).peak;
      LOCK();
      bVar7 = lVar4 == *plVar2;
      if (bVar7) {
        *plVar2 = lVar5 + 1;
      }
      UNLOCK();
    } while (!bVar7);
    LOCK();
    pmVar1->allocated = pmVar1->allocated + 1;
    UNLOCK();
  }
  if (pmVar6->used != pmVar6->abandoned) {
    return;
  }
  mi_segment_abandon(pmVar6,param_2);
  return;
}

// _mi_segment_page_alloc @ 141d92ab0

mi_page_s * __cdecl
_mi_segment_page_alloc
          (mi_heap_s *param_1,ulong64 param_2,mi_segments_tld_s *param_3,mi_os_tld_s *param_4)

{
  mi_page_s *pmVar1;
  mi_segment_s *pmVar2;
  mi_page_s *local_res10 [3];
  
  if (param_2 < 0x4001) {
    pmVar1 = mi_segments_page_alloc(param_1,MI_PAGE_SMALL,param_2,param_2,param_3,param_4);
    return pmVar1;
  }
  if (param_2 < 0x20001) {
    pmVar1 = mi_segments_page_alloc(param_1,MI_PAGE_MEDIUM,0x80000,param_2,param_3,param_4);
    return pmVar1;
  }
  if (param_2 < 0x400001) {
    pmVar1 = mi_segments_page_alloc(param_1,MI_PAGE_LARGE,param_2,param_2,param_3,param_4);
    return pmVar1;
  }
  local_res10[0] = (mi_page_s *)0x0;
  pmVar2 = mi_segment_init((mi_segment_s *)0x0,param_2,param_3,param_4,local_res10);
  if ((pmVar2 != (mi_segment_s *)0x0) && (local_res10[0] != (mi_page_s *)0x0)) {
    pmVar2->thread_id = 0;
    return local_res10[0];
  }
  return (mi_page_s *)0x0;
}

// _mi_segment_page_free @ 141d92b80

void __cdecl _mi_segment_page_free(mi_page_s *param_1,bool param_2,mi_segments_tld_s *param_3)

{
  mi_segment_s *pmVar1;
  
  pmVar1 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  mi_segment_page_clear(param_1,param_3);
  if (pmVar1->used == 0) {
    mi_segment_free(pmVar1,param_2,param_3);
    return;
  }
  if (pmVar1->used == pmVar1->abandoned) {
    mi_segment_abandon(pmVar1,param_3);
  }
  return;
}

// _mi_segment_page_start @ 141d92c00

uchar * __cdecl _mi_segment_page_start(mi_segment_s *param_1,mi_page_s *param_2,ulong64 *param_3)

{
  if (param_3 != (ulong64 *)0x0) {
    *param_3 = (ulonglong)param_2->slice_count << 0x10;
  }
  return (uchar *)((longlong)param_1 +
                  (((longlong)param_2 + (-0x80 - (longlong)param_1)) / 0x50) * 0x10000);
}

// _mi_segment_thread_collect @ 141d92c50

void __cdecl _mi_segment_thread_collect(mi_segments_tld_s *param_1)

{
  mi_segment_s *pmVar1;
  
  while (pmVar1 = param_1->cache, pmVar1 != (mi_segment_s *)0x0) {
    param_1->cache_count = param_1->cache_count - 1;
    param_1->cache = pmVar1->next;
    pmVar1->next = (mi_segment_s *)0x0;
    mi_stat_update(&param_1->stats->segments_cache,-1);
    mi_segment_os_free(pmVar1,param_1);
  }
  return;
}

// _mi_stat_counter_increase @ 141d92cc0

void __cdecl _mi_stat_counter_increase(mi_stat_counter_s *param_1,ulong64 param_2)

{
  if (((mi_stat_counter_s *)0x154f911bf < param_1) && (param_1 < &_mi_process_is_initialized)) {
    LOCK();
    param_1->count = param_1->count + 1;
    UNLOCK();
    LOCK();
    param_1->total = param_1->total + param_2;
    UNLOCK();
    return;
  }
  param_1->count = param_1->count + 1;
  param_1->total = param_1->total + param_2;
  return;
}

// _mi_stat_decrease @ 141d92cf0

void __cdecl _mi_stat_decrease(mi_stat_count_s *param_1,ulong64 param_2)

{
  mi_stat_update(param_1,-param_2);
  return;
}

// _mi_stat_increase @ 141d92d00

void __cdecl _mi_stat_increase(mi_stat_count_s *param_1,ulong64 param_2)

{
  long64 *plVar1;
  longlong lVar2;
  ulong64 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    if (((mi_stat_count_s *)0x154f911bf < param_1) && (param_1 < &_mi_process_is_initialized)) {
      LOCK();
      plVar1 = &param_1->current;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + param_2;
      UNLOCK();
      do {
        lVar2 = param_1->peak;
        if ((longlong)(lVar4 + param_2) <= lVar2) break;
        LOCK();
        bVar5 = lVar2 == param_1->peak;
        if (bVar5) {
          param_1->peak = lVar4 + param_2;
        }
        UNLOCK();
      } while (!bVar5);
      uVar3 = -param_2;
      if ((longlong)-param_2 < 0) {
        uVar3 = param_2;
      }
      if ((longlong)param_2 < 1) {
        param_1 = (mi_stat_count_s *)&param_1->freed;
      }
      LOCK();
      param_1->allocated = param_1->allocated + uVar3;
      UNLOCK();
      return;
    }
    lVar4 = param_1->current + param_2;
    param_1->current = lVar4;
    if (param_1->peak < lVar4) {
      param_1->peak = lVar4;
    }
    if (0 < (longlong)param_2) {
      param_1->allocated = param_1->allocated + param_2;
      return;
    }
    param_1->freed = param_1->freed - param_2;
  }
  return;
}

// _mi_stats_done @ 141d92d10

void __cdecl _mi_stats_done(mi_stats_s *param_1)

{
  if (param_1 != &_mi_stats_main) {
    mi_stats_add(&_mi_stats_main,param_1);
    memset(param_1,0,0x240);
    return;
  }
  return;
}

// _mi_stats_print @ 141d92d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
_mi_stats_print(mi_stats_s *param_1,_func___cdecl_void_char_ptr_void_ptr *param_2,void *param_3)

{
  longlong lVar1;
  HANDLE pvVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStackY_258 [32];
  _func___cdecl_void_char_ptr_void_ptr *local_208;
  void *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  _FILETIME local_1e0;
  _FILETIME local_1d8;
  _FILETIME local_1d0;
  _FILETIME local_1c8 [2];
  undefined1 local_1b8 [8];
  long64 local_1b0;
  longlong local_178;
  char local_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f8 = local_148;
  local_1e8 = 0xff;
  local_1f0 = 0;
  local_208 = param_2;
  local_200 = param_3;
  _mi_fprintf(mi_buffered_out,&local_208,"%10s: %10s %10s %10s %10s %10s %10s\n");
  _mi_fprintf(mi_buffered_out,&local_208,"%10s:");
  lVar1 = (param_1->reserved).peak;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reserved).allocated;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reserved).freed;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reserved).current;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  snprintf(local_168,0x20,"%d %s ");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  pcVar5 = "  not all freed!\n";
  pcVar3 = "  not all freed!\n";
  if ((param_1->reserved).allocated <= (param_1->reserved).freed) {
    pcVar3 = "  ok\n";
  }
  _mi_fprintf(mi_buffered_out,&local_208,pcVar3);
  _mi_fprintf(mi_buffered_out,&local_208,"%10s:");
  lVar1 = (param_1->committed).peak;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->committed).allocated;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->committed).freed;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->committed).current;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  snprintf(local_168,0x20,"%d %s ");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  pcVar3 = "  not all freed!\n";
  if ((param_1->committed).allocated <= (param_1->committed).freed) {
    pcVar3 = "  ok\n";
  }
  _mi_fprintf(mi_buffered_out,&local_208,pcVar3);
  _mi_fprintf(mi_buffered_out,&local_208,"%10s:");
  lVar1 = (param_1->reset).peak;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reset).allocated;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reset).freed;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  lVar1 = (param_1->reset).current;
  lVar4 = -lVar1;
  if (lVar4 < 0) {
    lVar4 = lVar1;
  }
  if (lVar4 < 0x400) {
    snprintf(local_168,0x20,"%d %s ");
  }
  else {
    snprintf(local_168,0x20,"%ld.%ld %s%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  snprintf(local_168,0x20,"%d %s ");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  _mi_fprintf(mi_buffered_out,&local_208,"%11s");
  if ((param_1->reset).allocated <= (param_1->reset).freed) {
    pcVar5 = "  ok\n";
  }
  _mi_fprintf(mi_buffered_out,&local_208,pcVar5);
  mi_stat_print(&param_1->page_committed,"touched",1,mi_buffered_out,&local_208);
  mi_stat_print(&param_1->segments,"segments",-1,mi_buffered_out,&local_208);
  mi_stat_print(&param_1->segments_abandoned,"-abandoned",-1,mi_buffered_out,&local_208);
  mi_stat_print(&param_1->segments_cache,"-cached",-1,mi_buffered_out,&local_208);
  mi_stat_print(&param_1->pages,"pages",-1,mi_buffered_out,&local_208);
  mi_stat_print(&param_1->pages_abandoned,"-abandoned",-1,mi_buffered_out,&local_208);
  mi_stat_counter_print(&param_1->pages_extended,"-extended",mi_buffered_out,&local_208);
  mi_stat_counter_print(&param_1->page_no_retire,"-noretire",mi_buffered_out,&local_208);
  mi_stat_counter_print(&param_1->mmap_calls,"mmaps",mi_buffered_out,&local_208);
  mi_stat_counter_print(&param_1->commit_calls,"commits",mi_buffered_out,&local_208);
  mi_stat_print(&param_1->threads,"threads",-1,mi_buffered_out,&local_208);
  _mi_fprintf(mi_buffered_out,&local_208,"%10s: %5ld.%ld avg\n");
  _mi_os_numa_node_count();
  _mi_fprintf(mi_buffered_out,&local_208,"%10s: %7i\n");
  _mi_clock_now();
  pvVar2 = GetCurrentProcess();
  GetProcessTimes(pvVar2,local_1c8,&local_1d0,&local_1d8,&local_1e0);
  pvVar2 = GetCurrentProcess();
  K32GetProcessMemoryInfo(pvVar2,local_1b8,0x48);
  _mi_fprintf(mi_buffered_out,&local_208,"%10s: %7ld.%03ld s\n");
  _mi_fprintf(mi_buffered_out,&local_208,
              "%10s: user: %ld.%03ld s, system: %ld.%03ld s, faults: %lu, rss: ");
  mi_printf_amount(local_1b0,1,mi_buffered_out,&local_208,"%s");
  if (local_178 != 0) {
    _mi_fprintf(mi_buffered_out,&local_208,", commit: ");
    mi_printf_amount(local_178,1,mi_buffered_out,&local_208,"%s");
  }
  _mi_fprintf(mi_buffered_out,&local_208,"\n");
  return;
}

// _mi_trace_message @ 141d93fc0

void __cdecl _mi_trace_message(char *param_1)

{
  char local_res10 [24];
  
  if (options[2].init == UNINIT) {
    mi_option_init(options + 2);
  }
  if (1 < options[2].value) {
    mi_vfprintf((_func___cdecl_void_char_ptr_void_ptr *)0x0,(void *)0x0,"mimalloc: ",param_1,
                local_res10);
  }
  return;
}

// _mi_verbose_message @ 141d94030

void __cdecl _mi_verbose_message(char *param_1)

{
  char local_res10 [24];
  
  if (options[2].init == UNINIT) {
    mi_option_init(options + 2);
  }
  if (options[2].value != 0) {
    mi_vfprintf((_func___cdecl_void_char_ptr_void_ptr *)0x0,(void *)0x0,"mimalloc: ",param_1,
                local_res10);
  }
  return;
}

// _mi_warning_message @ 141d940a0

void __cdecl _mi_warning_message(char *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  char local_res10 [24];
  
  bVar2 = mi_option_is_enabled(mi_option_show_errors);
  if ((!bVar2) && (bVar2 = mi_option_is_enabled(mi_option_verbose), !bVar2)) {
    return;
  }
  LOCK();
  uVar1 = warning_count + 1;
  UNLOCK();
  bVar2 = warning_count <= mi_max_warning_count;
  warning_count = uVar1;
  if (bVar2) {
    mi_vfprintf((_func___cdecl_void_char_ptr_void_ptr *)0x0,(void *)0x0,"mimalloc: warning: ",
                param_1,local_res10);
  }
  return;
}

// _mi_win_call_virtual_alloc @ 141d94120

void * __cdecl _mi_win_call_virtual_alloc(void *param_1,ulong64 param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141d94120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (*pVirtualAlloc)(param_1,param_2,param_3,param_4);
  return pvVar1;
}

// _mi_win_call_virtual_free @ 141d94130

int __cdecl _mi_win_call_virtual_free(void *param_1,ulong64 param_2,ulong param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141d94130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*pVirtualFree)(param_1,param_2,param_3);
  return iVar1;
}

// _os_random_weak @ 141d94140

ulong64 __cdecl _os_random_weak(ulong64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = local_res8[0].QuadPart ^ 0x141d94140U ^ param_1;
  for (lVar2 = (ulonglong)(((uint)(uVar1 >> 0x11) ^ (uint)uVar1) & 0xf) + 1; lVar2 != 0;
      lVar2 = lVar2 + -1) {
    if (uVar1 == 0) {
      uVar1 = 0x11;
    }
    uVar1 = (uVar1 >> 0x1e ^ uVar1) * -0x40a7b892e31b1a47;
    uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
    uVar1 = uVar1 >> 0x1f ^ uVar1;
  }
  return uVar1;
}

// chacha_block @ 141d941e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl chacha_block(mi_random_cxt_s *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_c8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  
  if ((param_1->input + 0xf < &local_78) || ((mi_random_cxt_s *)(auStack_40 + 4) < param_1)) {
    local_78 = *(undefined8 *)param_1->input;
    uStack_70 = *(undefined8 *)(param_1->input + 2);
    local_68 = *(undefined8 *)(param_1->input + 4);
    uStack_60 = *(undefined8 *)(param_1->input + 6);
    local_58 = *(undefined8 *)(param_1->input + 8);
    uStack_50 = *(undefined8 *)(param_1->input + 10);
    local_48 = *(undefined8 *)(param_1->input + 0xc);
    auStack_40._0_8_ = *(undefined8 *)(param_1->input + 0xe);
  }
  else {
    local_78 = *(undefined8 *)param_1->input;
    uStack_70 = *(undefined8 *)(param_1->input + 2);
    local_68 = *(undefined8 *)(param_1->input + 4);
    uStack_60 = *(undefined8 *)(param_1->input + 6);
    local_58 = *(undefined8 *)(param_1->input + 8);
    uStack_50 = *(undefined8 *)(param_1->input + 10);
    local_48 = *(undefined8 *)(param_1->input + 0xc);
    auStack_40._0_8_ = *(undefined8 *)(param_1->input + 0xe);
  }
  local_c8 = local_58._4_4_;
  local_a8 = uStack_70._4_4_;
  local_ac = (uint)uStack_70;
  local_b0 = local_78._4_4_;
  local_88 = 10;
  do {
    local_48._0_4_ = (uint)local_78 + (uint)local_68 ^ (uint)local_48;
    uVar5 = (uint)local_48 >> 0x10 | (uint)local_48 << 0x10;
    local_58._0_4_ = (uint)local_58 + uVar5;
    uVar8 = (uint)local_58 ^ (uint)local_68;
    uVar8 = uVar8 >> 0x14 | uVar8 << 0xc;
    local_78._0_4_ = (uint)local_78 + (uint)local_68 + uVar8;
    uVar5 = (uint)local_78 ^ uVar5;
    uVar5 = uVar5 >> 0x18 | uVar5 << 8;
    local_58._0_4_ = uVar5 + (uint)local_58;
    uVar8 = (uint)local_58 ^ uVar8;
    uVar8 = uVar8 >> 0x19 | uVar8 << 7;
    local_48._4_4_ = local_b0 + local_68._4_4_ ^ local_48._4_4_;
    uVar6 = local_48._4_4_ >> 0x10 | local_48._4_4_ << 0x10;
    local_c8 = local_c8 + uVar6;
    uVar1 = local_68._4_4_ ^ local_c8;
    uVar1 = uVar1 >> 0x14 | uVar1 << 0xc;
    local_b0 = local_b0 + local_68._4_4_ + uVar1;
    uVar6 = local_b0 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 8;
    local_c8 = uVar6 + local_c8;
    uVar1 = local_c8 ^ uVar1;
    uVar2 = uVar1 >> 0x19 | uVar1 << 7;
    auStack_40._0_4_ = local_ac + (uint)uStack_60 ^ auStack_40._0_4_;
    uVar1 = (uint)auStack_40._0_4_ >> 0x10 | auStack_40._0_4_ << 0x10;
    uStack_50._0_4_ = (uint)uStack_50 + uVar1;
    uVar9 = (uint)uStack_60 ^ (uint)uStack_50;
    uVar9 = uVar9 >> 0x14 | uVar9 << 0xc;
    local_ac = local_ac + (uint)uStack_60 + uVar9;
    uVar1 = local_ac ^ uVar1;
    uVar1 = uVar1 >> 0x18 | uVar1 << 8;
    uStack_50._0_4_ = uVar1 + (uint)uStack_50;
    uVar9 = (uint)uStack_50 ^ uVar9;
    auStack_40._4_4_ = local_a8 + uStack_60._4_4_ ^ auStack_40._4_4_;
    uVar4 = uVar9 >> 0x19 | uVar9 << 7;
    uVar7 = (uint)auStack_40._4_4_ >> 0x10 | auStack_40._4_4_ << 0x10;
    uStack_50._4_4_ = uVar7 + uStack_50._4_4_;
    uVar9 = uStack_60._4_4_ ^ uStack_50._4_4_;
    uVar9 = uVar9 >> 0x14 | uVar9 << 0xc;
    local_a8 = local_a8 + uStack_60._4_4_ + uVar9;
    local_78._0_4_ = uVar2 + (uint)local_78;
    uVar7 = local_a8 ^ uVar7;
    uVar7 = uVar7 >> 0x18 | uVar7 << 8;
    uStack_50._4_4_ = uVar7 + uStack_50._4_4_;
    uVar7 = (uint)local_78 ^ uVar7;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar9 = uStack_50._4_4_ ^ uVar9;
    uVar3 = uVar9 >> 0x19 | uVar9 << 7;
    uStack_50._0_4_ = uVar7 + (uint)uStack_50;
    uVar2 = (uint)uStack_50 ^ uVar2;
    uVar9 = uVar2 >> 0x14 | uVar2 << 0xc;
    local_78._0_4_ = uVar9 + (uint)local_78;
    uVar7 = (uint)local_78 ^ uVar7;
    auStack_40._4_4_ = uVar7 >> 0x18 | uVar7 << 8;
    uStack_50._0_4_ = auStack_40._4_4_ + (uint)uStack_50;
    uVar9 = (uint)uStack_50 ^ uVar9;
    local_b0 = uVar4 + local_b0;
    local_68._4_4_ = uVar9 >> 0x19 | uVar9 << 7;
    uVar5 = local_b0 ^ uVar5;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uStack_50._4_4_ = uVar5 + uStack_50._4_4_;
    uVar4 = uStack_50._4_4_ ^ uVar4;
    uVar9 = uVar4 >> 0x14 | uVar4 << 0xc;
    local_b0 = local_b0 + uVar9;
    uVar5 = local_b0 ^ uVar5;
    local_48._0_4_ = uVar5 >> 0x18 | uVar5 << 8;
    uStack_50._4_4_ = (uint)local_48 + uStack_50._4_4_;
    uVar9 = uStack_50._4_4_ ^ uVar9;
    local_ac = uVar3 + local_ac;
    uStack_60._0_4_ = uVar9 >> 0x19 | uVar9 << 7;
    uVar6 = local_ac ^ uVar6;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    local_58._0_4_ = (uint)local_58 + uVar6;
    uVar3 = (uint)local_58 ^ uVar3;
    uVar5 = uVar3 >> 0x14 | uVar3 << 0xc;
    local_ac = uVar5 + local_ac;
    local_a8 = uVar8 + local_a8;
    uVar6 = local_ac ^ uVar6;
    local_48._4_4_ = uVar6 >> 0x18 | uVar6 << 8;
    uVar1 = local_a8 ^ uVar1;
    uVar6 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_58._0_4_ = local_48._4_4_ + (uint)local_58;
    local_c8 = local_c8 + uVar6;
    uVar5 = (uint)local_58 ^ uVar5;
    uVar8 = local_c8 ^ uVar8;
    uStack_60._4_4_ = uVar5 >> 0x19 | uVar5 << 7;
    uVar5 = uVar8 >> 0x14 | uVar8 << 0xc;
    local_a8 = uVar5 + local_a8;
    uVar6 = local_a8 ^ uVar6;
    auStack_40._0_4_ = uVar6 >> 0x18 | uVar6 << 8;
    local_c8 = local_c8 + auStack_40._0_4_;
    uVar5 = local_c8 ^ uVar5;
    local_68._0_4_ = uVar5 >> 0x19 | uVar5 << 7;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  param_1->output[0] = (uint)local_78 + param_1->input[0];
  param_1->output[1] = local_b0 + param_1->input[1];
  param_1->output[2] = local_ac + param_1->input[2];
  param_1->output[3] = local_a8 + param_1->input[3];
  param_1->output[4] = param_1->input[4] + (uint)local_68;
  param_1->output[5] = param_1->input[5] + local_68._4_4_;
  param_1->output[6] = param_1->input[6] + (uint)uStack_60;
  param_1->output[7] = uStack_60._4_4_ + param_1->input[7];
  param_1->output[8] = param_1->input[8] + (uint)local_58;
  param_1->output[9] = param_1->input[9] + local_c8;
  param_1->output[10] = (uint)uStack_50 + param_1->input[10];
  param_1->output[0xb] = uStack_50._4_4_ + param_1->input[0xb];
  uVar5 = param_1->input[0xc];
  param_1->output[0xc] = (uint)local_48 + uVar5;
  uVar8 = param_1->input[0xd];
  param_1->output[0xd] = uVar8 + local_48._4_4_;
  uVar6 = param_1->input[0xe];
  param_1->output[0xe] = uVar6 + auStack_40._0_4_;
  uVar5 = uVar5 + 1;
  param_1->output[0xf] = param_1->input[0xf] + auStack_40._4_4_;
  param_1->output_available = 0x10;
  param_1->input[0xc] = uVar5;
  if ((uVar5 == 0) && (uVar8 = uVar8 + 1, param_1->input[0xd] = uVar8, uVar8 == 0)) {
    param_1->input[0xe] = uVar6 + 1;
  }
  return;
}

// chacha_init @ 141d945b0

void __cdecl chacha_init(mi_random_cxt_s *param_1,uchar *param_2,ulong64 param_3)

{
  param_1->input[4] = 0;
  param_1->input[5] = 0;
  param_1->input[6] = 0;
  param_1->input[7] = 0;
  param_1->input[8] = 0;
  param_1->input[9] = 0;
  param_1->input[10] = 0;
  param_1->input[0xb] = 0;
  param_1->input[0xc] = 0;
  param_1->input[0xd] = 0;
  param_1->input[0xe] = 0;
  param_1->input[0xf] = 0;
  param_1->output[0] = 0;
  param_1->output[1] = 0;
  param_1->output[2] = 0;
  param_1->output[3] = 0;
  param_1->output[4] = 0;
  param_1->output[5] = 0;
  param_1->output[6] = 0;
  param_1->output[7] = 0;
  param_1->output[8] = 0;
  param_1->output[9] = 0;
  param_1->output[10] = 0;
  param_1->output[0xb] = 0;
  param_1->output[0xc] = 0;
  param_1->output[0xd] = 0;
  param_1->output[0xe] = 0;
  param_1->output[0xf] = 0;
  param_1->output_available = 0;
  param_1->input[0] = 0x61707865;
  param_1->input[1] = 0x3320646e;
  param_1->input[2] = 0x79622d32;
  param_1->input[3] = 0x6b206574;
  param_1->input[4] = *(uint *)param_2;
  param_1->input[5] = *(uint *)(param_2 + 4);
  param_1->input[6] = *(uint *)(param_2 + 8);
  param_1->input[7] = *(uint *)(param_2 + 0xc);
  param_1->input[8] = *(uint *)(param_2 + 0x10);
  param_1->input[9] = *(uint *)(param_2 + 0x14);
  param_1->input[10] = *(uint *)(param_2 + 0x18);
  param_1->input[0xb] = *(uint *)(param_2 + 0x1c);
  *(ulong64 *)(param_1->input + 0xe) = param_3;
  param_1->input[0xc] = 0;
  param_1->input[0xd] = 0;
  return;
}

// mi__expand @ 141d94730

void * __cdecl mi__expand(void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  mi_block_s *pmVar2;
  int *piVar3;
  mi_segment_s *pmVar4;
  mi_page_s *pmVar5;
  
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
    if (pmVar4 != (mi_segment_s *)0x0) {
      uVar1 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
      pmVar5 = (mi_page_s *)
               ((longlong)pmVar4 +
               ((uVar1 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar1].slice_offset));
      if (((pmVar5->flags).full_aligned & 2) == 0) {
        uVar1 = (ulonglong)pmVar5->xblock_size;
        if (0x7ffffff < uVar1) {
          uVar1 = (ulonglong)pmVar5->slice_count << 0x10;
        }
      }
      else {
        pmVar2 = _mi_page_ptr_unalign(pmVar4,pmVar5,param_1);
        uVar1 = (ulonglong)pmVar5->xblock_size;
        if (0x7ffffff < uVar1) {
          uVar1 = (ulonglong)pmVar5->slice_count << 0x10;
        }
        uVar1 = (uVar1 - (longlong)param_1) + (longlong)pmVar2;
      }
    }
    if (param_2 <= uVar1) {
      return param_1;
    }
  }
  piVar3 = _errno();
  *piVar3 = 0xc;
  return (void *)0x0;
}

// mi_abandoned_pop @ 141d94800

/* WARNING: Removing unreachable block (ram,0x000141d94859) */
/* WARNING: Removing unreachable block (ram,0x000141d948df) */

mi_segment_s * __cdecl mi_abandoned_pop(void)

{
  mi_segment_s *pmVar1;
  mi_segment_s *pmVar2;
  ulong64 uVar3;
  mi_segment_s *pmVar4;
  ulong64 uVar5;
  mi_segment_s *pmVar6;
  ulong64 uVar7;
  bool bVar8;
  
  pmVar6 = abandoned_visited;
  if ((abandoned & 0xffffffffff800000) != 0) {
LAB_141d94877:
    LOCK();
    UNLOCK();
    uVar5 = abandoned;
    do {
      pmVar6 = (mi_segment_s *)(uVar5 & 0xffffffffff800000);
      if (pmVar6 == (mi_segment_s *)0x0) {
        LOCK();
        UNLOCK();
        return (mi_segment_s *)0x0;
      }
      LOCK();
      bVar8 = uVar5 != abandoned;
      uVar7 = (ulonglong)((int)uVar5 + 1U & 0x7fffff) | (ulonglong)pmVar6->abandoned_next;
      if (bVar8) {
        uVar5 = abandoned;
        uVar7 = abandoned;
      }
      abandoned = uVar7;
      UNLOCK();
    } while (bVar8);
    LOCK();
    UNLOCK();
    pmVar6->abandoned_next = (mi_segment_s *)0x0;
    LOCK();
    abandoned_count = abandoned_count - 1;
    UNLOCK();
    return pmVar6;
  }
  if (abandoned_visited != (mi_segment_s *)0x0) {
    LOCK();
    abandoned_visited = (mi_segment_s *)0x0;
    UNLOCK();
    if (pmVar6 != (mi_segment_s *)0x0) {
      if ((abandoned & 0xffffffffff800000) == 0) {
        abandoned = (ulonglong)((int)abandoned + 1U & 0x7fffff) | (ulonglong)pmVar6;
        LOCK();
        UNLOCK();
        uVar7 = abandoned_visited_count;
      }
      else {
        pmVar4 = pmVar6->abandoned_next;
        pmVar2 = pmVar6;
        while (pmVar1 = pmVar4, uVar5 = abandoned, pmVar1 != (mi_segment_s *)0x0) {
          pmVar2 = pmVar1;
          pmVar4 = pmVar1->abandoned_next;
        }
        do {
          uVar7 = abandoned_visited_count;
          pmVar2->abandoned_next = (mi_segment_s *)(uVar5 & 0xffffffffff800000);
          LOCK();
          bVar8 = uVar5 != abandoned;
          uVar3 = (ulonglong)((int)uVar5 + 1U & 0x7fffff) | (ulonglong)pmVar6;
          if (bVar8) {
            uVar5 = abandoned;
            uVar3 = abandoned;
          }
          abandoned = uVar3;
          UNLOCK();
        } while (bVar8);
      }
      LOCK();
      abandoned_count = abandoned_count + uVar7;
      UNLOCK();
      LOCK();
      abandoned_visited_count = abandoned_visited_count - uVar7;
      UNLOCK();
      goto LAB_141d94877;
    }
  }
  return (mi_segment_s *)0x0;
}

// mi_aligned_alloc @ 141d94960

void * __cdecl mi_aligned_alloc(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (((param_1 == 0) || ((param_1 & param_1 - 1) != 0)) || ((param_2 & param_1 - 1) != 0)) {
    return (void *)0x0;
  }
  if ((param_1 != 8) && ((param_1 != 0x10 || (param_2 < 9)))) {
    pvVar1 = mi_malloc_aligned(param_2,param_1);
    return pvVar1;
  }
  pvVar1 = mi_malloc(param_2);
  return pvVar1;
}

// mi_aligned_offset_recalloc @ 141d949b0

void * __cdecl
mi_aligned_offset_recalloc
          (void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_3;
  if (((param_2 != 1) &&
      (((uVar3 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = mi_heap_realloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,uVar3,param_4,param_5,true);
  return pvVar2;
}

// mi_aligned_recalloc @ 141d94a60

void * __cdecl mi_aligned_recalloc(void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  mi_heap_s *pmVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  ulong64 uVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  uVar4 = param_3;
  if (((param_2 != 1) &&
      (((uVar4 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (8 < param_4) {
    pvVar3 = mi_heap_realloc_zero_aligned_at
                       (pmVar1,param_1,uVar4,param_4,(ulonglong)param_1 % param_4,true);
    return pvVar3;
  }
  pvVar3 = _mi_heap_realloc_zero(pmVar1,param_1,uVar4,true);
  return pvVar3;
}

// mi_arena_alloc @ 141d94b30

bool __cdecl mi_arena_alloc(mi_arena_s *param_1,ulong64 param_2,ulong64 *param_3)

{
  ulong64 uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = param_1->field_count;
  if (param_2 == 1) {
    bVar2 = _mi_bitmap_try_find_from_claim(param_1->blocks_inuse,uVar1,0,1,param_3);
    if (bVar2) {
LAB_141d94c47:
      param_1->search_idx = *param_3 >> 6;
      return true;
    }
  }
  else {
    uVar10 = 0;
    uVar3 = uVar10;
    uVar8 = uVar10;
    if (uVar1 != 0) {
      do {
        uVar7 = uVar10;
        if (uVar3 < uVar1) {
          uVar7 = uVar3;
        }
        if ((param_2 < 0x41) && (uVar3 = param_1->blocks_inuse[uVar7], uVar3 != 0xffffffffffffffff))
        {
          if (param_2 < 0x40) {
            lVar6 = (1L << ((byte)param_2 & 0x3f)) + -1;
          }
          else {
            lVar6 = -1;
          }
          uVar4 = ~uVar3;
          uVar9 = 0x40;
          if ((uVar4 != 0) && (uVar9 = 0, uVar4 != 0)) {
            for (; (uVar4 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          uVar4 = lVar6 << ((byte)uVar9 & 0x3f);
          while (uVar9 <= 0x40 - param_2) {
            uVar5 = uVar4 & uVar3;
            if (uVar5 == 0) {
              LOCK();
              uVar5 = param_1->blocks_inuse[uVar7];
              bVar2 = uVar3 == uVar5;
              if (bVar2) {
                param_1->blocks_inuse[uVar7] = uVar4 | uVar3;
                uVar5 = uVar3;
              }
              UNLOCK();
              uVar3 = uVar5;
              if (bVar2) {
                *param_3 = uVar7 * 0x40 + uVar9;
                goto LAB_141d94c47;
              }
            }
            else {
              lVar6 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              lVar6 = (-uVar9 - (ulonglong)(0x3f - (int)lVar6)) + 0x40;
              uVar9 = uVar9 + lVar6;
              uVar4 = uVar4 << ((byte)lVar6 & 0x3f);
            }
          }
        }
        bVar2 = mi_bitmap_try_find_claim_field_across
                          (param_1->blocks_inuse,uVar1,uVar7,param_2,0,param_3);
        if (bVar2) goto LAB_141d94c47;
        uVar8 = uVar8 + 1;
        uVar3 = uVar7 + 1;
      } while (uVar8 < uVar1);
    }
  }
  return false;
}

// mi_arena_alloc_from @ 141d94cc0

void * __cdecl
mi_arena_alloc_from(mi_arena_s *param_1,ulong64 param_2,ulong64 param_3,bool *param_4,bool *param_5,
                   bool *param_6,bool *param_7,ulong64 *param_8,mi_os_tld_s *param_9)

{
  bool bVar1;
  uchar *puVar2;
  bool local_18 [8];
  ulong64 local_10;
  
  bVar1 = mi_arena_alloc(param_1,param_3,&local_10);
  if (bVar1) {
    puVar2 = param_1->start + local_10 * 0x800000;
    *param_8 = param_2 + 1 & 0xff | local_10 << 8;
    bVar1 = _mi_bitmap_claim_across
                      (param_1->blocks_dirty,param_1->field_count,param_3,local_10,(bool *)0x0);
    *param_7 = bVar1;
    *param_5 = param_1->is_large;
    if ((param_1->is_large == false) && (param_1->is_committed == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *param_6 = bVar1;
    if (param_1->is_committed == false) {
      if (*param_4 == false) {
        bVar1 = mi_bitmap_is_claimedx_across
                          (param_1->blocks_committed,param_1->field_count,param_3,local_10,
                           (bool *)0x0);
        *param_4 = bVar1;
      }
      else {
        _mi_bitmap_claim_across
                  (param_1->blocks_committed,param_1->field_count,param_3,local_10,local_18);
        if ((local_18[0] != false) &&
           (_mi_os_commit(puVar2,param_3 << 0x17,local_18,param_9->stats), local_18[0] != false)) {
          *param_7 = true;
        }
      }
    }
    else {
      *param_4 = true;
    }
  }
  else {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}

// mi_arena_allocate @ 141d94e10

void * __cdecl
mi_arena_allocate(int param_1,ulong64 param_2,ulong64 param_3,bool *param_4,bool *param_5,
                 bool *param_6,bool *param_7,ulong64 *param_8,mi_os_tld_s *param_9)

{
  mi_arena_s *pmVar1;
  ulong64 uVar2;
  void *pvVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  
  uVar2 = mi_arena_count;
  uVar6 = param_2 + 0x7fffff >> 0x17;
  if ((mi_arena_count != 0) && (uVar5 = 0, uVar4 = uVar5, mi_arena_count != 0)) {
    do {
      pmVar1 = mi_arenas[uVar4];
      if (pmVar1 == (mi_arena_s *)0x0) {
        if (uVar2 == 0) {
          return (void *)0x0;
        }
        break;
      }
      if ((((pmVar1->numa_node < 0) || (pmVar1->numa_node == param_1)) &&
          ((*param_5 != false || (pmVar1->is_large == false)))) &&
         (pvVar3 = mi_arena_alloc_from(pmVar1,uVar4,uVar6,param_4,param_5,param_6,param_7,param_8,
                                       param_9), pvVar3 != (void *)0x0)) {
        return pvVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    do {
      pmVar1 = mi_arenas[uVar5];
      if (pmVar1 == (mi_arena_s *)0x0) {
        return (void *)0x0;
      }
      if (((-1 < pmVar1->numa_node) && (pmVar1->numa_node != param_1)) &&
         (((*param_5 != false || (pmVar1->is_large == false)) &&
          (pvVar3 = mi_arena_alloc_from(pmVar1,uVar5,uVar6,param_4,param_5,param_6,param_7,param_8,
                                        param_9), pvVar3 != (void *)0x0)))) {
        return pvVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return (void *)0x0;
}

// mi_bitmap_is_claimedx_across @ 141d94fa0

bool __cdecl
mi_bitmap_is_claimedx_across
          (ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,bool *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar2 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar3 = 0;
      uVar8 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = 0xffffffffffffffff;
      uVar8 = uVar3;
    }
  }
  else {
    uVar3 = 0x40 - (ulonglong)uVar7;
    if (uVar3 < 0x40) {
      uVar2 = (1L << ((byte)uVar3 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    uVar3 = param_3 - uVar3;
    uVar8 = uVar3 >> 6;
    if ((uVar3 & 0x3f) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (1L << ((byte)uVar3 & 0x3f)) - 1;
    }
  }
  puVar4 = param_1 + (param_4 >> 6) + 1;
  bVar9 = (uVar2 & param_1[param_4 >> 6]) != 0;
  bVar6 = (uVar2 & param_1[param_4 >> 6]) == uVar2;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    bVar5 = false;
    if ((uVar1 & uVar2) == uVar2) {
      bVar5 = bVar6;
    }
    if ((uVar1 & uVar2) != 0) {
      bVar9 = true;
    }
    bVar6 = bVar5;
  }
  if (uVar3 != 0) {
    bVar5 = false;
    if ((uVar2 & *puVar4) == uVar2) {
      bVar5 = bVar6;
    }
    bVar6 = bVar5;
    if ((uVar2 & *puVar4) != 0) {
      bVar9 = true;
    }
  }
  if (param_5 != (bool *)0x0) {
    *param_5 = bVar9;
  }
  return bVar6;
}

// mi_bitmap_try_find_claim_field_across @ 141d95110

bool __cdecl
mi_bitmap_try_find_claim_field_across
          (ulong64 *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 *param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  bool bVar11;
  
  puVar1 = param_1 + param_3;
  do {
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      uVar7 = 0x40;
    }
    else {
      lVar2 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar6 = 0x3f - (int)lVar2;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        return false;
      }
    }
    if (param_4 <= uVar7) {
      bVar11 = _mi_bitmap_try_find_claim_field(param_1,param_3,param_4,param_6);
      return bVar11;
    }
    uVar8 = uVar7;
    puVar9 = puVar1;
    if (param_2 - param_3 <= (param_4 - uVar7) + 0x3f >> 6) {
      return false;
    }
    do {
      puVar10 = puVar9 + 1;
      if (param_4 < uVar8 + 0x40) {
        uVar4 = param_4 - uVar8;
        if (uVar4 < 0x40) {
          uVar5 = (1L << ((byte)uVar4 & 0x3f)) - 1;
        }
        else {
          uVar5 = 0xffffffffffffffff;
        }
      }
      else {
        uVar4 = 0x40;
        uVar5 = 0xffffffffffffffff;
      }
      if ((puVar9[1] & uVar5) != 0) {
        return false;
      }
      uVar8 = uVar8 + uVar4;
      puVar9 = puVar10;
    } while (uVar8 < param_4);
    if (uVar7 < 0x40) {
      uVar8 = (1L << ((byte)uVar7 & 0x3f)) + -1 << (0x40 - (byte)uVar7 & 0x3f);
    }
    else {
      uVar8 = 0xffffffffffffffff;
    }
    do {
      puVar9 = puVar1;
      if ((uVar3 & uVar8) != 0) goto joined_r0x000141d9526a;
      LOCK();
      uVar4 = *puVar1;
      bVar11 = uVar3 == uVar4;
      if (bVar11) {
        *puVar1 = uVar8 | uVar3;
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar4;
    } while (!bVar11);
    while (puVar9 = puVar9 + 1, puVar9 < puVar10) {
      LOCK();
      uVar3 = *puVar9;
      if (uVar3 == 0) {
        *puVar9 = 0xffffffffffffffff;
      }
      UNLOCK();
      if (uVar3 != 0) goto joined_r0x000141d9526a;
    }
    uVar3 = *puVar9;
    while ((uVar3 & uVar5) == 0) {
      LOCK();
      uVar4 = *puVar9;
      bVar11 = uVar3 == uVar4;
      if (bVar11) {
        *puVar9 = uVar5 | uVar3;
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar4;
      if (bVar11) {
        *param_6 = (param_3 + 1) * 0x40 - uVar7;
        return true;
      }
    }
joined_r0x000141d9526a:
    while (puVar9 = puVar9 + -1, puVar1 < puVar9) {
      *puVar9 = 0;
    }
    if (puVar9 == puVar1) {
      uVar3 = *puVar9;
      do {
        LOCK();
        uVar7 = *puVar9;
        bVar11 = uVar3 == uVar7;
        if (bVar11) {
          *puVar9 = ~uVar8 & uVar3;
          uVar7 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar7;
      } while (!bVar11);
    }
    if (3 < param_5) {
      return false;
    }
    param_5 = param_5 + 1;
  } while( true );
}

// mi_buffered_flush @ 141d95300

void __cdecl mi_buffered_flush(buffered_s *param_1)

{
  _func___cdecl_void_char_ptr_void_ptr *p_Var1;
  char *pcVar2;
  void *pvVar3;
  _func___cdecl_void_char_ptr_void_ptr *p_Var4;
  code *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  param_1->buf[param_1->used] = '\0';
  p_Var1 = param_1->out;
  pcVar2 = param_1->buf;
  pvVar3 = param_1->arg;
  if (p_Var1 != (_func___cdecl_void_char_ptr_void_ptr *)0x0) {
    p_Var4 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(1);
    if (p_Var1 != p_Var4) {
      p_Var4 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(2);
      if (p_Var1 != p_Var4) {
        (*p_Var1)(pcVar2,pvVar3);
        goto LAB_141d953a4;
      }
    }
  }
  pvVar3 = mi_out_arg;
  pcVar5 = mi_out_default;
  pcVar6 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc20);
  if (*pcVar6 == '\0') {
    bVar7 = mi_out_default == (_func___cdecl_void_char_ptr_void_ptr *)0x0;
    *pcVar6 = '\x01';
    if (bVar7) {
      pcVar5 = mi_out_buf;
    }
    (*pcVar5)(pcVar2,pvVar3);
    *pcVar6 = '\0';
  }
LAB_141d953a4:
  param_1->used = 0;
  return;
}

// mi_buffered_out @ 141d953d0

void __cdecl mi_buffered_out(char *param_1,void *param_2)

{
  char *pcVar1;
  char cVar2;
  
  if ((param_1 != (char *)0x0) && (param_2 != (void *)0x0)) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      if (*(ulonglong *)((longlong)param_2 + 0x20) <= *(ulonglong *)((longlong)param_2 + 0x18)) {
        mi_buffered_flush(param_2);
      }
      *(char *)(*(longlong *)((longlong)param_2 + 0x18) + *(longlong *)((longlong)param_2 + 0x10)) =
           cVar2;
      *(longlong *)((longlong)param_2 + 0x18) = *(longlong *)((longlong)param_2 + 0x18) + 1;
      if (cVar2 == '\n') {
        mi_buffered_flush(param_2);
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

// mi_calloc @ 141d95460

void * __cdecl mi_calloc(ulong64 param_1,ulong64 param_2)

{
  mi_heap_s *pmVar1;
  undefined1 auVar2 [16];
  undefined8 *_Dst;
  ulong64 _Size;
  longlong lVar3;
  ulonglong uVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  uVar4 = param_2;
  if (((param_1 != 1) &&
      (((uVar4 = param_1 * param_2, 0xffffffff < param_2 || (0xffffffff < param_1)) &&
       (param_2 != 0)))) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_1)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (uVar4 < 0x401) {
    lVar3 = *(longlong *)((longlong)pmVar1->pages_free_direct + (uVar4 + 7 & 0xfffffffffffffff8));
    _Dst = *(undefined8 **)(lVar3 + 0x10);
    if (_Dst != (undefined8 *)0x0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(undefined8 *)(lVar3 + 0x10) = *_Dst;
      goto LAB_141d9551a;
    }
  }
  _Dst = _mi_malloc_generic(pmVar1,uVar4);
LAB_141d9551a:
  if (_Dst != (undefined8 *)0x0) {
    lVar3 = ((ulonglong)_Dst & 0xffffffffff800000) +
            ((longlong)_Dst - ((ulonglong)_Dst & 0xffffffffff800000) >> 0x10) * 0x50 + 0x80;
    if (((*(byte *)((lVar3 - (ulonglong)*(uint *)(lVar3 + 4)) + 0xf) & 1) != 0) && (8 < uVar4)) {
      *_Dst = 0;
      return _Dst;
    }
    _Size = mi_usable_size(_Dst);
    memset(_Dst,0,_Size);
  }
  return _Dst;
}

// mi_calloc_aligned @ 141d955a0

void * __cdecl mi_calloc_aligned(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_calloc_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,0);
  return pvVar1;
}

// mi_calloc_aligned_at @ 141d955f0

void * __cdecl mi_calloc_aligned_at(ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_calloc_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,param_4);
  return pvVar1;
}

// mi_cfree @ 141d95640

void __cdecl mi_cfree(void *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  mi_page_s *pmVar6;
  ulonglong uVar7;
  mi_segment_s *pmVar8;
  
  pmVar8 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar8 < (mi_segment_s *)0x140000000000) {
    uVar7 = (ulonglong)((uint)((ulonglong)param_1 >> 0x17) & 0x3f);
    uVar5 = (ulonglong)param_1 >> 0x1d;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar7;
  }
  uVar3 = 1L << (sbyte)uVar7;
  if ((mi_segment_map[uVar5] & uVar3) == 0) {
    if (uVar5 == 0) {
      return;
    }
    uVar4 = uVar3 - 1 & mi_segment_map[uVar5];
    uVar3 = uVar5;
    if (uVar4 == 0) {
      uVar3 = uVar5 - 1;
      if (uVar3 == 0) {
        return;
      }
      while (uVar4 = mi_segment_map[uVar3], uVar4 == 0) {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) {
          return;
        }
      }
    }
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = (longlong)pmVar8 +
            (((uVar3 - uVar5) * 0x40 - uVar7) + (0x3f - (ulonglong)(0x3f - (int)lVar2))) * 0x800000;
    if (uVar5 == 0) {
      return;
    }
    if ((uVar5 ^ _mi_heap_main.cookie) != *(ulonglong *)(uVar5 + 0x50)) {
      return;
    }
    if ((void *)(*(longlong *)(uVar5 + 0x58) * 0x10000 + uVar5) <= param_1) {
      return;
    }
  }
  else if (pmVar8 == (mi_segment_s *)0x0) {
    return;
  }
  if (pmVar8 != (mi_segment_s *)0x0) {
    uVar5 = (ulonglong)((longlong)param_1 - (longlong)pmVar8) >> 0x10;
    if ((Self == (void *)pmVar8->thread_id) &&
       (pmVar6 = (mi_page_s *)
                 ((longlong)pmVar8 +
                 ((uVar5 * 0x50 + 0x80) - (ulonglong)pmVar8->slices[uVar5].slice_offset)),
       (pmVar6->flags).full_aligned == '\0')) {
      *(mi_block_s **)param_1 = pmVar6->local_free;
      puVar1 = &pmVar6->used;
      *puVar1 = *puVar1 - 1;
      pmVar6->local_free = param_1;
      if (*puVar1 == 0) {
        _mi_page_retire(pmVar6);
        return;
      }
    }
    else {
      mi_free_generic(pmVar8,Self == (void *)pmVar8->thread_id,param_1);
    }
  }
  return;
}

// mi_check_owned @ 141d957c0

bool __cdecl mi_check_owned(void *param_1)

{
  mi_heap_s *pmVar1;
  mi_page_s *pmVar2;
  mi_page_s *pmVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  mi_page_queue_s *pmVar7;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (((pmVar1 == (mi_heap_s *)0x0) || (pmVar1 == &_mi_heap_empty)) ||
     (((ulonglong)param_1 & 7) != 0)) {
    return false;
  }
  if (pmVar1->page_count != 0) {
    pmVar7 = pmVar1->pages;
    uVar5 = 0;
    do {
      pmVar3 = pmVar7->first;
      while (pmVar2 = pmVar3, pmVar2 != (mi_page_s *)0x0) {
        pvVar4 = (void *)(((longlong)
                           ((longlong)pmVar2 + (-0x80 - ((ulonglong)pmVar2 & 0xffffffffff800000))) /
                          0x50) * 0x10000 + ((ulonglong)pmVar2 & 0xffffffffff800000));
        uVar6 = (ulonglong)pmVar2->xblock_size;
        if (0x7ffffff < uVar6) {
          uVar6 = (ulonglong)pmVar2->slice_count << 0x10;
        }
        pmVar3 = pmVar2->next;
        if ((pvVar4 <= param_1) && (param_1 < (void *)(pmVar2->capacity * uVar6 + (longlong)pvVar4))
           ) {
          return true;
        }
      }
      uVar5 = uVar5 + 1;
      pmVar7 = pmVar7 + 1;
    } while (uVar5 < 0x4b);
  }
  return false;
}

// mi_collect @ 141d958f0

void __cdecl mi_collect(bool param_1)

{
  mi_heap_collect_ex(*(mi_heap_s **)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                     (uint)param_1);
  return;
}

// mi_commit_mask_committed_size @ 141d95920

ulong64 __cdecl mi_commit_mask_committed_size(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0xffffffffffffffff) {
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      if ((param_1 & 1) == 0) {
        lVar1 = lVar2;
      }
      param_1 = param_1 >> 1;
      lVar2 = lVar1;
    } while (param_1 != 0);
    param_2 = (param_2 >> 6) * lVar1;
  }
  return param_2;
}

// mi_commit_mask_decommit @ 141d95970

void __cdecl
mi_commit_mask_decommit(ulong64 *param_1,void *param_2,ulong64 param_3,mi_stats_s *param_4)

{
  ulonglong uVar1;
  int iVar2;
  DWORD DVar3;
  void *pvVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = *param_1;
  if (uVar5 == 0) {
    *param_1 = 0;
    return;
  }
  if (uVar5 != 0xffffffffffffffff) {
    lVar11 = 0;
    uVar9 = os_page_size;
    do {
      lVar8 = 0;
      if ((uVar5 & 1) != 0) {
        do {
          uVar5 = uVar5 >> 1;
          lVar8 = lVar8 + 1;
        } while ((uVar5 & 1) != 0);
        if (lVar8 != 0) {
          lVar10 = lVar8 * (param_3 >> 6);
          pvVar4 = (void *)(lVar11 * (param_3 >> 6) + (longlong)param_2);
          if ((lVar10 != 0) && (pvVar4 != (void *)0x0)) {
            uVar1 = uVar9 - 1;
            if ((uVar9 & uVar1) == 0) {
              pvVar7 = (void *)(~uVar1 & uVar1 + (longlong)pvVar4);
            }
            else {
              pvVar7 = (void *)(((uVar1 + (longlong)pvVar4) / uVar9) * uVar9);
            }
            uVar6 = ((ulonglong)(lVar10 + (longlong)pvVar4) / uVar9) * uVar9 - (longlong)pvVar7;
            if (0 < (longlong)uVar6) {
              mi_stat_update(&_mi_stats_main.committed,-lVar10);
              iVar2 = (*pVirtualFree)(pvVar7,uVar6,0x4000);
              uVar9 = os_page_size;
              if ((iVar2 == 0) && (DVar3 = GetLastError(), uVar9 = os_page_size, DVar3 != 0)) {
                _mi_warning_message("%s error: start: %p, csize: 0x%x, err: %i\n");
                uVar9 = os_page_size;
              }
            }
          }
        }
      }
      uVar5 = uVar5 >> 1;
      lVar11 = lVar11 + 1 + lVar8;
    } while (uVar5 != 0);
    *param_1 = 0;
    return;
  }
  _mi_os_decommit(param_2,param_3,param_4);
  *param_1 = 0;
  return;
}

// mi_debug_show_arenas @ 141d95b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl mi_debug_show_arenas(void)

{
  mi_arena_s *pmVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulong64 *puVar6;
  longlong lVar7;
  ulong64 uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [80];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  uVar3 = mi_arena_count;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar11 = 0;
  if (mi_arena_count != 0) {
    do {
      pmVar1 = mi_arenas[uVar11];
      if (pmVar1 == (mi_arena_s *)0x0) {
        return;
      }
      _mi_verbose_message("arena %zu: %zu blocks with %zu fields\n");
      uVar8 = pmVar1->field_count;
      if (uVar8 != 0) {
        puVar6 = pmVar1->blocks_inuse;
        do {
          uVar2 = *puVar6;
          uVar4 = 1;
          lVar7 = 4;
          puVar9 = local_58 + 0xe;
          do {
            uVar10 = 0x78;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4) != 0) {
              uVar5 = 0x78;
            }
            puVar9[1] = uVar5;
            if ((uVar2 & uVar4 << 1) == 0) {
              uVar10 = 0x2e;
            }
            *puVar9 = uVar10;
            uVar10 = 0x78;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4 << 2) != 0) {
              uVar5 = 0x78;
            }
            puVar9[-1] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 3) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-2] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 4) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-3] = uVar5;
            if ((uVar2 & uVar4 << 5) == 0) {
              uVar10 = 0x2e;
            }
            puVar9[-4] = uVar10;
            uVar10 = 0x78;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4 << 6) != 0) {
              uVar5 = 0x78;
            }
            puVar9[-5] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 7) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-6] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 8) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-7] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 9) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-8] = uVar5;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4 << 10) != 0) {
              uVar5 = uVar10;
            }
            puVar9[-9] = uVar5;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4 << 0xb) != 0) {
              uVar5 = uVar10;
            }
            puVar9[-10] = uVar5;
            uVar5 = uVar10;
            if ((uVar2 & uVar4 << 0xc) == 0) {
              uVar5 = 0x2e;
            }
            puVar9[-0xb] = uVar5;
            if ((uVar2 & uVar4 << 0xd) == 0) {
              uVar10 = 0x2e;
            }
            puVar9[-0xc] = uVar10;
            uVar10 = 0x78;
            uVar5 = 0x2e;
            if ((uVar2 & uVar4 << 0xe) != 0) {
              uVar5 = 0x78;
            }
            puVar9[-0xd] = uVar5;
            if ((uVar2 & uVar4 << 0xf) == 0) {
              uVar10 = 0x2e;
            }
            puVar9[-0xe] = uVar10;
            uVar4 = uVar4 << 0x10 | uVar4 >> 0x30;
            lVar7 = lVar7 + -1;
            puVar9 = puVar9 + -0x10;
          } while (lVar7 != 0);
          local_58[0x10] = 0;
          _mi_verbose_message("%s%s\n");
          puVar6 = puVar6 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      _mi_verbose_message("  blocks in use (\'x\'): %zu\n");
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar3);
  }
  return;
}

// mi_dupenv_s @ 141d95e60

int __cdecl mi_dupenv_s(char **param_1,ulong64 *param_2,char *param_3)

{
  char *_Str;
  char *pcVar1;
  size_t sVar2;
  
  if ((param_1 == (char **)0x0) || (param_3 == (char *)0x0)) {
    return 0x16;
  }
  if (param_2 != (ulong64 *)0x0) {
    *param_2 = 0;
  }
  _Str = getenv(param_3);
  if (_Str == (char *)0x0) {
    *param_1 = (char *)0x0;
    return 0;
  }
  pcVar1 = mi_strdup(_Str);
  *param_1 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    return 0xc;
  }
  if (param_2 != (ulong64 *)0x0) {
    sVar2 = strlen(_Str);
    *param_2 = sVar2;
  }
  return 0;
}

// mi_expand @ 141d95f10

void * __cdecl mi_expand(void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  mi_block_s *pmVar2;
  mi_segment_s *pmVar3;
  mi_page_s *pmVar4;
  
  if (param_1 == (void *)0x0) {
    return (void *)0x0;
  }
  pmVar3 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar3 == (mi_segment_s *)0x0) {
    if (param_2 != 0) {
      param_1 = (void *)0x0;
    }
    return param_1;
  }
  uVar1 = (ulonglong)((longlong)param_1 - (longlong)pmVar3) >> 0x10;
  pmVar4 = (mi_page_s *)
           ((longlong)pmVar3 +
           ((uVar1 * 0x50 + 0x80) - (ulonglong)pmVar3->slices[uVar1].slice_offset));
  if (((pmVar4->flags).full_aligned & 2) == 0) {
    uVar1 = (ulonglong)pmVar4->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar4->slice_count << 0x10;
    }
  }
  else {
    pmVar2 = _mi_page_ptr_unalign(pmVar3,pmVar4,param_1);
    uVar1 = (ulonglong)pmVar4->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar4->slice_count << 0x10;
    }
    uVar1 = (longlong)pmVar2 + (uVar1 - (longlong)param_1);
  }
  if (uVar1 < param_2) {
    param_1 = (void *)0x0;
  }
  return param_1;
}

// mi_ext_set_win32_allocators @ 141d95ff0

void __cdecl mi_ext_set_win32_allocators(mi_ext_win32_allocators_s *param_1)

{
  pVirtualAlloc = param_1->VirtualAlloc;
  pVirtualFree = param_1->VirtualFree;
  pVirtualAlloc2 = param_1->VirtualAlloc2;
  pNtAllocateVirtualMemoryEx = param_1->NtAllocateVirtualMemoryEx;
  return;
}

// mi_find_page @ 141d96030

mi_page_s * __cdecl mi_find_page(mi_heap_s *param_1,ulong64 param_2)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  ulong64 uVar3;
  mi_page_queue_s *pmVar4;
  mi_page_s *pmVar5;
  uint uVar6;
  ulonglong uVar7;
  mi_block_s *pmVar8;
  mi_stat_counter_s *pmVar9;
  bool bVar10;
  
  if (0x20000 < param_2) {
    if (0x7fffffffffffffff < param_2) {
      _mi_error_message(0x84,"allocation request is too large (%zu bytes)\n");
      return (mi_page_s *)0x0;
    }
    uVar3 = _mi_os_good_alloc_size(param_2);
    if (uVar3 < 0x400001) {
      pmVar4 = mi_page_queue(param_1,uVar3);
    }
    else {
      pmVar4 = (mi_page_queue_s *)0x0;
    }
    pmVar5 = mi_page_fresh_alloc(param_1,pmVar4,uVar3);
    if (pmVar5 != (mi_page_s *)0x0) {
      uVar7 = (ulonglong)pmVar5->xblock_size;
      if (0x7ffffff < uVar7) {
        uVar7 = (ulonglong)pmVar5->slice_count << 0x10;
      }
      if (pmVar4 == (mi_page_queue_s *)0x0) {
        pmVar5->xheap = 0;
      }
      if (uVar7 < 0x400001) {
        mi_stat_update(&(param_1->tld->stats).large,uVar7);
        pmVar9 = &(param_1->tld->stats).large_count;
      }
      else {
        mi_stat_update(&(param_1->tld->stats).huge,uVar7);
        pmVar9 = &(param_1->tld->stats).huge_count;
      }
      if (((mi_stat_counter_s *)0x154f911bf < pmVar9) && (pmVar9 < &_mi_process_is_initialized)) {
        LOCK();
        pmVar9->count = pmVar9->count + 1;
        UNLOCK();
        LOCK();
        pmVar9->total = pmVar9->total + 1;
        UNLOCK();
        return pmVar5;
      }
      pmVar9->count = pmVar9->count + 1;
      pmVar9->total = pmVar9->total + 1;
    }
    return pmVar5;
  }
  pmVar4 = mi_page_queue(param_1,param_2);
  pmVar5 = pmVar4->first;
  if (pmVar5 != (mi_page_s *)0x0) {
    uVar7 = pmVar5->xthread_free;
    if ((uVar7 & 0xfffffffffffffffc) != 0) {
      do {
        pmVar8 = (mi_block_s *)(uVar7 & 0xfffffffffffffffc);
        LOCK();
        uVar3 = pmVar5->xthread_free;
        bVar10 = uVar7 == uVar3;
        if (bVar10) {
          pmVar5->xthread_free = (ulonglong)((uint)uVar7 & 3);
          uVar3 = uVar7;
        }
        UNLOCK();
        uVar7 = uVar3;
      } while (!bVar10);
      if (pmVar8 != (mi_block_s *)0x0) {
        uVar6 = 1;
        pmVar1 = pmVar8;
        for (pmVar2 = (mi_block_s *)pmVar8->next; pmVar2 != (mi_block_s *)0x0;
            pmVar2 = (mi_block_s *)pmVar2->next) {
          if (pmVar5->capacity < uVar6) goto LAB_141d961c7;
          uVar6 = uVar6 + 1;
          pmVar1 = pmVar2;
        }
        if (pmVar5->capacity < uVar6) {
LAB_141d961c7:
          _mi_error_message(0xe,"corrupted thread-free list\n");
        }
        else {
          pmVar1->next = (ulong64)pmVar5->local_free;
          pmVar5->used = pmVar5->used - uVar6;
          pmVar5->local_free = pmVar8;
        }
      }
    }
    if (pmVar5->local_free != (mi_block_s *)0x0) {
      if (pmVar5->free != (mi_block_s *)0x0) goto LAB_141d9620f;
      pmVar5->is_zero = '\0';
      pmVar5->free = pmVar5->local_free;
      pmVar5->local_free = (mi_block_s *)0x0;
    }
    if (pmVar5->free != (mi_block_s *)0x0) {
LAB_141d9620f:
      pmVar5->retire_expire = '\0';
      return pmVar5;
    }
  }
  pmVar5 = mi_page_queue_find_free_ex(param_1,pmVar4,true);
  return pmVar5;
}

// mi_fls_done @ 141d96250

/* WARNING: Removing unreachable block (ram,0x000141d9627c) */

void __cdecl mi_fls_done(void *param_1)

{
  mi_heap_s *pmVar1;
  bool bVar2;
  mi_heap_s *pmVar3;
  ulong dwFlsIndex;
  int iVar4;
  int *piVar5;
  mi_heap_s *pmVar6;
  ulonglong uVar7;
  mi_stats_s *_Dst;
  long64 lVar8;
  
  lVar8 = _mi_stats_main.threads.current;
  dwFlsIndex = mi_fls_key;
  if (param_1 != (void *)0x0) {
    LOCK();
    _mi_stats_main.threads.current = _mi_stats_main.threads.current + -1;
    UNLOCK();
    if (_mi_stats_main.threads.peak < lVar8 + -1) {
      LOCK();
      UNLOCK();
      _mi_stats_main.threads.peak = lVar8 + -1;
    }
    LOCK();
    _mi_stats_main.threads.freed = _mi_stats_main.threads.freed + 1;
    UNLOCK();
    if (*(void **)((longlong)param_1 + 0xb20) == Self) {
      if (param_1 == &_mi_heap_empty) {
        return;
      }
      if ((_mi_heap_main.thread_id == 0) || ((void *)_mi_heap_main.thread_id == Self)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pmVar6 = &_mi_heap_empty;
      if (bVar2) {
        pmVar6 = &_mi_heap_main;
      }
      *(mi_heap_s **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18) =
           pmVar6;
      FlsSetValue(dwFlsIndex,pmVar6);
      pmVar6 = *(mi_heap_s **)(*(longlong *)param_1 + 0x10);
      if (pmVar6 != &_mi_heap_empty) {
        pmVar1 = pmVar6->tld->heaps;
        while (pmVar3 = pmVar1, pmVar3 != (mi_heap_s *)0x0) {
          pmVar1 = pmVar3->next;
          if (pmVar3 != pmVar6) {
            mi_heap_delete(pmVar3);
          }
        }
        if (pmVar6 != &_mi_heap_main) {
          _mi_heap_collect_abandon(pmVar6);
        }
        _Dst = &pmVar6->tld->stats;
        if (_Dst != &_mi_stats_main) {
          mi_stats_add(&_mi_stats_main,_Dst);
          memset(_Dst,0,0x240);
        }
        if ((pmVar6 != &_mi_heap_main) && (pmVar6 != (mi_heap_s *)0x0)) {
          uVar7 = 0x1208;
          if (0x1208 < ~os_page_size) {
            uVar7 = os_page_size + 0x1207;
            if ((os_page_size & os_page_size - 1) == 0) {
              uVar7 = ~(os_page_size - 1) & uVar7;
            }
            else {
              uVar7 = uVar7 - uVar7 % os_page_size;
            }
            if (uVar7 == 0) {
              return;
            }
          }
          iVar4 = (*pVirtualFree)(pmVar6,0,0x8000);
          lVar8 = -uVar7;
          mi_stat_update(&_mi_stats_main.committed,lVar8);
          mi_stat_update(&_mi_stats_main.reserved,lVar8);
          if (iVar4 == 0) {
            piVar5 = _errno();
            strerror(*piVar5);
            _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
          }
        }
      }
      return;
    }
  }
  return;
}

// mi_free @ 141d962b0

void __cdecl mi_free(void *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  mi_segment_s *pmVar4;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 != (mi_segment_s *)0x0) {
    uVar2 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
    if ((Self != (void *)pmVar4->thread_id) ||
       (pmVar3 = (mi_page_s *)
                 ((longlong)pmVar4 +
                 ((uVar2 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar2].slice_offset)),
       (pmVar3->flags).full_aligned != '\0')) {
      mi_free_generic(pmVar4,Self == (void *)pmVar4->thread_id,param_1);
      return;
    }
    *(mi_block_s **)param_1 = pmVar3->local_free;
    puVar1 = &pmVar3->used;
    *puVar1 = *puVar1 - 1;
    pmVar3->local_free = param_1;
    if (*puVar1 == 0) {
      _mi_page_retire(pmVar3);
      return;
    }
  }
  return;
}

// mi_free_aligned @ 141d96330

void __cdecl mi_free_aligned(void *param_1,ulong64 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  mi_segment_s *pmVar4;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 != (mi_segment_s *)0x0) {
    uVar2 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
    if ((Self != (void *)pmVar4->thread_id) ||
       (pmVar3 = (mi_page_s *)
                 ((longlong)pmVar4 +
                 ((uVar2 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar2].slice_offset)),
       (pmVar3->flags).full_aligned != '\0')) {
      mi_free_generic(pmVar4,Self == (void *)pmVar4->thread_id,param_1);
      return;
    }
    *(mi_block_s **)param_1 = pmVar3->local_free;
    puVar1 = &pmVar3->used;
    *puVar1 = *puVar1 - 1;
    pmVar3->local_free = param_1;
    if (*puVar1 == 0) {
      _mi_page_retire(pmVar3);
      return;
    }
  }
  return;
}

// mi_free_generic @ 141d963b0

void __cdecl mi_free_generic(mi_segment_s *param_1,bool param_2,void *param_3)

{
  ulonglong uVar1;
  mi_page_s *pmVar2;
  
  uVar1 = (ulonglong)((longlong)param_3 - (longlong)param_1) >> 0x10;
  pmVar2 = (mi_page_s *)
           ((longlong)param_1 +
           ((uVar1 * 0x50 + 0x80) - (ulonglong)param_1->slices[uVar1].slice_offset));
  if (((pmVar2->flags).full_aligned & 2) != 0) {
    uVar1 = (ulonglong)pmVar2->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar2->slice_count << 0x10;
    }
    param_3 = (void *)((longlong)param_3 -
                      (ulonglong)
                      ((longlong)param_3 +
                      ((((longlong)pmVar2 + (-0x80 - (longlong)param_1)) / 0x50) * -0x10000 -
                      (longlong)param_1)) % uVar1);
  }
  _mi_free_block(pmVar2,param_2,param_3);
  return;
}

// mi_free_size @ 141d96450

void __cdecl mi_free_size(void *param_1,ulong64 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  mi_segment_s *pmVar4;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 != (mi_segment_s *)0x0) {
    uVar2 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
    if ((Self != (void *)pmVar4->thread_id) ||
       (pmVar3 = (mi_page_s *)
                 ((longlong)pmVar4 +
                 ((uVar2 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar2].slice_offset)),
       (pmVar3->flags).full_aligned != '\0')) {
      mi_free_generic(pmVar4,Self == (void *)pmVar4->thread_id,param_1);
      return;
    }
    *(mi_block_s **)param_1 = pmVar3->local_free;
    puVar1 = &pmVar3->used;
    *puVar1 = *puVar1 - 1;
    pmVar3->local_free = param_1;
    if (*puVar1 == 0) {
      _mi_page_retire(pmVar3);
      return;
    }
  }
  return;
}

// mi_free_size_aligned @ 141d964d0

void __cdecl mi_free_size_aligned(void *param_1,ulong64 param_2,ulong64 param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  mi_segment_s *pmVar4;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 != (mi_segment_s *)0x0) {
    uVar2 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
    if ((Self != (void *)pmVar4->thread_id) ||
       (pmVar3 = (mi_page_s *)
                 ((longlong)pmVar4 +
                 ((uVar2 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar2].slice_offset)),
       (pmVar3->flags).full_aligned != '\0')) {
      mi_free_generic(pmVar4,Self == (void *)pmVar4->thread_id,param_1);
      return;
    }
    *(mi_block_s **)param_1 = pmVar3->local_free;
    puVar1 = &pmVar3->used;
    *puVar1 = *puVar1 - 1;
    pmVar3->local_free = param_1;
    if (*puVar1 == 0) {
      _mi_page_retire(pmVar3);
      return;
    }
  }
  return;
}

// mi_good_size @ 141d96550

ulong64 __cdecl mi_good_size(ulong64 param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  if (param_1 < 0x20001) {
    bVar2 = _mi_bin(param_1);
    return _mi_heap_empty.pages[bVar2].block_size;
  }
  uVar1 = os_page_size - 1;
  if ((os_page_size & uVar1) == 0) {
    return ~uVar1 & uVar1 + param_1;
  }
  return ((uVar1 + param_1) / os_page_size) * os_page_size;
}

// mi_heap_area_visit_blocks @ 141d965b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
mi_heap_area_visit_blocks
          (mi_heap_area_ex_s *param_1,
          _func___cdecl_bool_mi_heap_s_ptr_mi_heap_area_s_ptr_void_ptr_ulong64_void_ptr *param_2,
          void *param_3)

{
  ushort uVar1;
  mi_page_s *pmVar2;
  mi_block_s *pmVar3;
  mi_block_s *pmVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  void *pvVar11;
  undefined1 auStackY_2078 [32];
  ulonglong local_2048 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x141d965ca;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2078;
  if (((param_1 != (mi_heap_area_ex_s *)0x0) && (pmVar2 = param_1->page, pmVar2 != (mi_page_s *)0x0)
      ) && (_mi_page_free_collect(pmVar2,true), pmVar2->used != 0)) {
    uVar10 = (ulong64)pmVar2->xblock_size;
    if (0x7ffffff < uVar10) {
      uVar10 = (ulonglong)pmVar2->slice_count << 0x10;
    }
    uVar1 = pmVar2->capacity;
    pvVar11 = (void *)(((longlong)
                        ((longlong)pmVar2 + (-0x80 - ((ulonglong)pmVar2 & 0xffffffffff800000))) /
                       0x50) * 0x10000 + ((ulonglong)pmVar2 & 0xffffffffff800000));
    if (uVar1 == 1) {
      bVar5 = (*param_2)((mi_heap_s *)pmVar2->xheap,&param_1->area,pvVar11,uVar10,param_3);
      return bVar5;
    }
    memset(local_2048,0,0x2000);
    pmVar4 = pmVar2->free;
    while (pmVar4 != (mi_block_s *)0x0) {
      pmVar3 = (mi_block_s *)pmVar4->next;
      uVar6 = (ulonglong)((longlong)pmVar4 - (longlong)pvVar11) / uVar10;
      uVar9 = uVar6 & 0xfffffffffffffff8;
      puVar8 = (ulonglong *)((longlong)local_2048 + uVar9);
      *puVar8 = *puVar8 | 1L << (uVar6 - uVar9 & 0x3f);
      pmVar4 = pmVar3;
    }
    uVar9 = 0;
    if (uVar1 != 0) {
      do {
        uVar6 = *(ulonglong *)((longlong)local_2048 + (uVar9 & 0xfffffffffffffff8));
        uVar7 = uVar9 - (uVar9 & 0xfffffffffffffff8);
        if ((uVar7 == 0) && (uVar6 == 0xffffffffffffffff)) {
          uVar9 = uVar9 + 7;
          pvVar11 = (void *)((longlong)pvVar11 + uVar10 * 7);
        }
        else if (((uVar6 >> (uVar7 & 0x3f) & 1) == 0) &&
                (bVar5 = (*param_2)((mi_heap_s *)pmVar2->xheap,&param_1->area,pvVar11,uVar10,param_3
                                   ), !bVar5)) {
          return false;
        }
        uVar9 = uVar9 + 1;
        pvVar11 = (void *)((longlong)pvVar11 + uVar10);
      } while (uVar9 < pmVar2->capacity);
    }
  }
  return true;
}

// mi_heap_area_visitor @ 141d96780

bool __cdecl mi_heap_area_visitor(mi_heap_s *param_1,mi_heap_area_ex_s *param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)((longlong)param_3 + 8))
                    (param_1,param_2,0,(param_2->area).block_size,
                     *(undefined8 *)((longlong)param_3 + 0x10));
  if (cVar1 == '\0') {
    return false;
  }
  if (*(char *)param_3 != '\0') {
    bVar2 = mi_heap_area_visit_blocks
                      (param_2,*(_func___cdecl_bool_mi_heap_s_ptr_mi_heap_area_s_ptr_void_ptr_ulong64_void_ptr
                                 **)((longlong)param_3 + 8),*(void **)((longlong)param_3 + 0x10));
    return bVar2;
  }
  return true;
}

// mi_heap_calloc @ 141d967f0

void * __cdecl mi_heap_calloc(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  undefined8 *_Dst;
  ulong64 _Size;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_3;
  if (((param_2 != 1) &&
      (((uVar3 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (uVar3 < 0x401) {
    lVar2 = *(longlong *)((longlong)param_1->pages_free_direct + (uVar3 + 7 & 0xfffffffffffffff8));
    _Dst = *(undefined8 **)(lVar2 + 0x10);
    if (_Dst != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *_Dst;
      goto LAB_141d9683f;
    }
  }
  _Dst = _mi_malloc_generic(param_1,uVar3);
LAB_141d9683f:
  if (_Dst != (undefined8 *)0x0) {
    lVar2 = ((ulonglong)_Dst & 0xffffffffff800000) + 0x80 +
            ((longlong)_Dst - ((ulonglong)_Dst & 0xffffffffff800000) >> 0x10) * 0x50;
    if (((*(byte *)((lVar2 - (ulonglong)*(uint *)(lVar2 + 4)) + 0xf) & 1) != 0) && (8 < uVar3)) {
      *_Dst = 0;
      return _Dst;
    }
    _Size = mi_usable_size(_Dst);
    memset(_Dst,0,_Size);
  }
  return _Dst;
}

// mi_heap_calloc_aligned @ 141d96930

void * __cdecl
mi_heap_calloc_aligned(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_calloc_aligned_at(param_1,param_2,param_3,param_4,0);
  return pvVar1;
}

// mi_heap_calloc_aligned_at @ 141d96950

void * __cdecl
mi_heap_calloc_aligned_at
          (mi_heap_s *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ulonglong uVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = param_3;
  if (((param_2 != 1) &&
      (((uVar9 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar4._8_8_ = 0, auVar4._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar4,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (0x7fffffffffffffff < uVar9) {
    return (void *)0x0;
  }
  if ((param_4 == 0) || (uVar1 = param_4 - 1, (param_4 & uVar1) != 0)) {
    return (void *)0x0;
  }
  if (uVar9 < 0x401) {
    lVar8 = *(longlong *)((longlong)param_1->pages_free_direct + (uVar9 + 7 & 0xfffffffffffffff8));
    puVar6 = *(undefined8 **)(lVar8 + 0x10);
    if ((puVar6 != (undefined8 *)0x0) && (((longlong)puVar6 + param_5 & uVar1) == 0)) {
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      *(undefined8 *)(lVar8 + 0x10) = *puVar6;
      if (((*(byte *)(lVar8 + 0xf) & 1) != 0) && (8 < uVar9)) {
        *puVar6 = 0;
        return puVar6;
      }
      uVar5 = mi_usable_size(puVar6);
      memset(puVar6,0,uVar5);
      return puVar6;
    }
  }
  if ((((param_5 != 0) || (uVar9 < param_4)) || (0x20000 < uVar9)) || ((uVar9 & uVar1) != 0)) {
    pvVar7 = _mi_heap_malloc_zero(param_1,(param_4 - 1) + uVar9,true);
    if (pvVar7 == (void *)0x0) {
      return (void *)0x0;
    }
    uVar5 = param_4 - ((longlong)pvVar7 + param_5 & uVar1);
    if (uVar5 != param_4) {
      pvVar3 = (void *)(uVar5 + (longlong)pvVar7);
      if (pvVar3 != pvVar7) {
        lVar8 = ((ulonglong)pvVar7 & 0xffffffffff800000) +
                ((longlong)pvVar7 - ((ulonglong)pvVar7 & 0xffffffffff800000) >> 0x10) * 0x50 + 0x80;
        pbVar2 = (byte *)((lVar8 - (ulonglong)*(uint *)(lVar8 + 4)) + 0xe);
        *pbVar2 = *pbVar2 | 2;
        return pvVar3;
      }
      return pvVar3;
    }
    return pvVar7;
  }
  if (uVar9 < 0x401) {
    lVar8 = *(longlong *)((longlong)param_1->pages_free_direct + (uVar9 + 7 & 0xfffffffffffffff8));
    puVar6 = *(undefined8 **)(lVar8 + 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      *(undefined8 *)(lVar8 + 0x10) = *puVar6;
      goto LAB_141d96acd;
    }
  }
  puVar6 = _mi_malloc_generic(param_1,uVar9);
LAB_141d96acd:
  if (puVar6 == (undefined8 *)0x0) {
    return (void *)0x0;
  }
  lVar8 = ((longlong)puVar6 - ((ulonglong)puVar6 & 0xffffffffff800000) >> 0x10) * 0x50 + 0x80 +
          ((ulonglong)puVar6 & 0xffffffffff800000);
  if (((*(byte *)((lVar8 - (ulonglong)*(uint *)(lVar8 + 4)) + 0xf) & 1) != 0) && (8 < uVar9)) {
    *puVar6 = 0;
    return puVar6;
  }
  uVar5 = mi_usable_size(puVar6);
  memset(puVar6,0,uVar5);
  return puVar6;
}

// mi_heap_check_owned @ 141d96bc0

bool __cdecl mi_heap_check_owned(mi_heap_s *param_1,void *param_2)

{
  mi_page_s *pmVar1;
  mi_page_s *pmVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  mi_page_queue_s *pmVar6;
  
  if (((param_1 == (mi_heap_s *)0x0) || (param_1 == &_mi_heap_empty)) ||
     (((ulonglong)param_2 & 7) != 0)) {
    return false;
  }
  if (param_1->page_count != 0) {
    pmVar6 = param_1->pages;
    uVar4 = 0;
    do {
      pmVar2 = pmVar6->first;
      while (pmVar1 = pmVar2, pmVar1 != (mi_page_s *)0x0) {
        pvVar3 = (void *)(((longlong)
                           ((longlong)pmVar1 + (-0x80 - ((ulonglong)pmVar1 & 0xffffffffff800000))) /
                          0x50) * 0x10000 + ((ulonglong)pmVar1 & 0xffffffffff800000));
        uVar5 = (ulonglong)pmVar1->xblock_size;
        if (0x7ffffff < uVar5) {
          uVar5 = (ulonglong)pmVar1->slice_count << 0x10;
        }
        pmVar2 = pmVar1->next;
        if ((pvVar3 <= param_2) && (param_2 < (void *)(pmVar1->capacity * uVar5 + (longlong)pvVar3))
           ) {
          return true;
        }
      }
      uVar4 = uVar4 + 1;
      pmVar6 = pmVar6 + 1;
    } while (uVar4 < 0x4b);
  }
  return false;
}

// mi_heap_collect @ 141d96cd0

void __cdecl mi_heap_collect(mi_heap_s *param_1,bool param_2)

{
  mi_heap_collect_ex(param_1,(uint)param_2);
  return;
}

// mi_heap_collect_ex @ 141d96cf0

void __cdecl mi_heap_collect_ex(mi_heap_s *param_1,mi_collect_e param_2)

{
  ulong64 *puVar1;
  mi_tld_s *pmVar2;
  ulonglong uVar3;
  mi_page_s *pmVar4;
  mi_page_s *pmVar5;
  uint uVar6;
  mi_segment_s *pmVar7;
  mi_page_queue_s *pmVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) {
    _mi_deferred_free(param_1,0 < (int)param_2);
    lVar10 = 0x4b;
    if (param_2 == MI_FORCE) {
      if ((((_mi_heap_main.thread_id == 0) || ((void *)_mi_heap_main.thread_id == Self)) &&
          (pmVar2 = param_1->tld, pmVar2->heap_backing == param_1)) &&
         (param_1->no_reclaim == false)) {
        pmVar7 = mi_abandoned_pop();
        while (pmVar7 != (mi_segment_s *)0x0) {
          mi_segment_reclaim(pmVar7,param_1,0,(bool *)0x0,&pmVar2->segments);
          pmVar7 = mi_abandoned_pop();
        }
      }
    }
    else if ((param_2 == MI_ABANDON) && (param_1->page_count != 0)) {
      pmVar8 = param_1->pages;
      lVar9 = 0x4b;
      do {
        pmVar4 = pmVar8->first;
joined_r0x000141d96dd6:
        pmVar5 = pmVar4;
        if (pmVar5 != (mi_page_s *)0x0) {
          do {
            do {
              uVar3 = pmVar5->xthread_free;
              uVar6 = (uint)uVar3 & 3;
            } while (uVar6 == 1);
            pmVar4 = pmVar5->next;
            if (uVar6 == 3) break;
            LOCK();
            bVar11 = uVar3 == pmVar5->xthread_free;
            if (bVar11) {
              pmVar5->xthread_free = uVar3 | 3;
            }
            UNLOCK();
          } while (!bVar11);
          goto joined_r0x000141d96dd6;
        }
        pmVar8 = pmVar8 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    _mi_heap_delayed_free(param_1);
    _mi_heap_collect_retired(param_1,0 < (int)param_2);
    if (param_1->page_count != 0) {
      pmVar8 = param_1->pages;
      do {
        pmVar4 = pmVar8->first;
        while (pmVar5 = pmVar4, pmVar5 != (mi_page_s *)0x0) {
          pmVar4 = pmVar5->next;
          _mi_page_free_collect(pmVar5,0 < (int)param_2);
          if (pmVar5->used == 0) {
            _mi_page_free(pmVar5,pmVar8,0 < (int)param_2);
          }
          else if (param_2 == MI_ABANDON) {
            _mi_page_abandon(pmVar5,pmVar8);
          }
        }
        pmVar8 = pmVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (0 < (int)param_2) {
      pmVar2 = param_1->tld;
      while (pmVar7 = (pmVar2->segments).cache, pmVar7 != (mi_segment_s *)0x0) {
        puVar1 = &(pmVar2->segments).cache_count;
        *puVar1 = *puVar1 - 1;
        (pmVar2->segments).cache = pmVar7->next;
        pmVar7->next = (mi_segment_s *)0x0;
        mi_stat_update(&((pmVar2->segments).stats)->segments_cache,-1);
        mi_segment_os_free(pmVar7,&pmVar2->segments);
      }
    }
  }
  return;
}

// mi_heap_contains_block @ 141d96f40

bool __cdecl mi_heap_contains_block(mi_heap_s *param_1,void *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((param_1 == (mi_heap_s *)0x0) || (param_1 == &_mi_heap_empty)) {
    return false;
  }
  if ((param_2 != (void *)0x0) &&
     (uVar1 = (ulonglong)param_2 & 0xffffffffff800000,
     (uVar1 ^ _mi_heap_main.cookie) == *(ulonglong *)(uVar1 + 0x50))) {
    lVar2 = uVar1 + 0x80 + ((longlong)param_2 - uVar1 >> 0x10) * 0x50;
    return param_1 == *(mi_heap_s **)((lVar2 - (ulonglong)*(uint *)(lVar2 + 4)) + 0x30);
  }
  return param_1 == (mi_heap_s *)0x0;
}

// mi_heap_delete @ 141d96fb0

void __cdecl mi_heap_delete(mi_heap_s *param_1)

{
  mi_heap_s *pmVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  mi_page_s **ppmVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) {
    pmVar1 = param_1->tld->heap_backing;
    if (pmVar1 == param_1) {
      _mi_heap_collect_abandon(param_1);
    }
    else if (param_1->page_count != 0) {
      _mi_heap_delayed_free(param_1);
      ppmVar8 = &pmVar1->pages[0].last;
      lVar9 = (longlong)param_1 - (longlong)pmVar1;
      lVar7 = 0x4b;
      do {
        lVar5 = *(longlong *)(lVar9 + -8 + (longlong)ppmVar8);
        lVar6 = 0;
        if (lVar5 != 0) {
          do {
            *(mi_heap_s **)(lVar5 + 0x30) = pmVar1;
            do {
              do {
                uVar2 = *(ulonglong *)(lVar5 + 0x28);
                uVar4 = (uint)uVar2 & 3;
              } while (uVar4 == 1);
              if (((uVar2 & 3) == 0) || (uVar4 == 3)) break;
              LOCK();
              bVar10 = uVar2 == *(ulonglong *)(lVar5 + 0x28);
              if (bVar10) {
                *(ulonglong *)(lVar5 + 0x28) = uVar2 & 0xfffffffffffffffc;
              }
              UNLOCK();
            } while (!bVar10);
            lVar5 = *(longlong *)(lVar5 + 0x38);
            lVar6 = lVar6 + 1;
          } while (lVar5 != 0);
          pmVar3 = *(mi_page_s **)(lVar9 + -8 + (longlong)ppmVar8);
          if (*ppmVar8 == (mi_page_s *)0x0) {
            ((mi_page_queue_s *)(ppmVar8 + -1))->first = pmVar3;
            *ppmVar8 = *(mi_page_s **)((longlong)ppmVar8 + lVar9);
            mi_heap_queue_first_update(pmVar1,(mi_page_queue_s *)(ppmVar8 + -1));
          }
          else {
            (*ppmVar8)->next = pmVar3;
            *(mi_page_s **)(*(longlong *)(lVar9 + -8 + (longlong)ppmVar8) + 0x40) = *ppmVar8;
            *ppmVar8 = *(mi_page_s **)((longlong)ppmVar8 + lVar9);
          }
        }
        pmVar1->page_count = pmVar1->page_count + lVar6;
        ppmVar8 = ppmVar8 + 3;
        param_1->page_count = param_1->page_count - lVar6;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          _mi_heap_delayed_free(param_1);
          mi_heap_reset_pages(param_1);
          mi_heap_free(param_1);
          return;
        }
      } while( true );
    }
    mi_heap_free(param_1);
  }
  return;
}

// mi_heap_destroy @ 141d97130

void __cdecl mi_heap_destroy(mi_heap_s *param_1)

{
  mi_page_s *pmVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  uint uVar4;
  mi_segment_s *pmVar5;
  longlong lVar6;
  mi_segments_tld_s *pmVar7;
  mi_page_queue_s *pmVar8;
  bool bVar9;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) {
    if (param_1->no_reclaim == false) {
      mi_heap_delete(param_1);
      return;
    }
    if (param_1->page_count != 0) {
      lVar6 = 0x4b;
      pmVar8 = param_1->pages;
      do {
        pmVar3 = pmVar8->first;
        while (pmVar3 != (mi_page_s *)0x0) {
          pmVar1 = pmVar3->next;
          do {
            do {
              uVar2 = pmVar3->xthread_free;
              uVar4 = (uint)uVar2 & 3;
            } while (uVar4 == 1);
            if (uVar4 == 3) break;
            LOCK();
            bVar9 = uVar2 == pmVar3->xthread_free;
            if (bVar9) {
              pmVar3->xthread_free = uVar2 | 3;
            }
            UNLOCK();
          } while (!bVar9);
          pmVar3->used = 0;
          pmVar3->next = (mi_page_s *)0x0;
          pmVar5 = (mi_segment_s *)((ulonglong)pmVar3 & 0xffffffffff800000);
          pmVar3->prev = (mi_page_s *)0x0;
          pmVar7 = &param_1->tld->segments;
          mi_segment_page_clear(pmVar3,pmVar7);
          pmVar3 = pmVar1;
          if (pmVar5->used == 0) {
            mi_segment_free(pmVar5,false,pmVar7);
          }
          else if (pmVar5->used == pmVar5->abandoned) {
            mi_segment_abandon(pmVar5,pmVar7);
          }
        }
        pmVar8 = pmVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    mi_heap_reset_pages(param_1);
    mi_heap_free(param_1);
  }
  return;
}

// mi_heap_free @ 141d97290

void __cdecl mi_heap_free(mi_heap_s *param_1)

{
  mi_heap_s *pmVar1;
  mi_heap_s *pmVar2;
  
  if (((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) &&
     (pmVar1 = param_1->tld->heap_backing, pmVar1 != param_1)) {
    if (param_1 ==
        *(mi_heap_s **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)) {
      _mi_heap_set_default_direct(pmVar1);
    }
    pmVar1 = param_1->tld->heaps;
    if (pmVar1 == param_1) {
      param_1->tld->heaps = param_1->next;
    }
    else {
      while (pmVar2 = pmVar1, pmVar2 != (mi_heap_s *)0x0) {
        pmVar1 = pmVar2->next;
        if (pmVar2->next == param_1) {
          pmVar2->next = param_1->next;
          mi_free(param_1);
          return;
        }
      }
    }
    mi_free(param_1);
  }
  return;
}

// mi_heap_get_backing @ 141d97340

mi_heap_s * __cdecl mi_heap_get_backing(void)

{
  mi_heap_s *pmVar1;
  
  pmVar1 = mi_heap_get_default();
  return pmVar1->tld->heap_backing;
}

// mi_heap_get_default @ 141d97360

/* WARNING: Removing unreachable block (ram,0x000141d9738f) */

mi_heap_s * __cdecl mi_heap_get_default(void)

{
  bool bVar1;
  
  mi_process_init();
  bVar1 = _mi_heap_init();
  if (!bVar1) {
    LOCK();
    UNLOCK();
    if (_mi_stats_main.threads.peak < _mi_stats_main.threads.current + 1) {
      LOCK();
      UNLOCK();
      _mi_stats_main.threads.peak = _mi_stats_main.threads.current + 1;
    }
    LOCK();
    _mi_stats_main.threads.allocated = _mi_stats_main.threads.allocated + 1;
    UNLOCK();
    _mi_stats_main.threads.current = _mi_stats_main.threads.current + 1;
  }
  return *(mi_heap_s **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18);
}

// mi_heap_main_init @ 141d973d0

void __cdecl mi_heap_main_init(void)

{
  if (_mi_heap_main.cookie == 0) {
    _mi_heap_main.thread_id = (ulong64)Self;
    _mi_heap_main.cookie = _os_random_weak(0x141d973d0);
    _mi_random_init(&_mi_heap_main.random);
    _mi_heap_main.keys[0] = _mi_heap_random_next(&_mi_heap_main);
    _mi_heap_main.keys[1] = _mi_heap_random_next(&_mi_heap_main);
  }
  return;
}

// mi_heap_malloc @ 141d97440

/* WARNING: Removing unreachable block (ram,0x000141d9027c) */

void * __cdecl mi_heap_malloc(mi_heap_s *param_1,ulong64 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  mi_block_s *pmVar4;
  mi_block_s *pmVar5;
  mi_block_s *pmVar6;
  mi_page_s *pmVar7;
  void *pvVar8;
  mi_block_s *pmVar9;
  
  if (0x400 < param_2) {
    pvVar8 = _mi_malloc_generic(param_1,param_2);
    return pvVar8;
  }
  lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (param_2 + 7 & 0xfffffffffffffff8));
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(undefined8 *)(lVar1 + 0x10) = *puVar2;
    return puVar2;
  }
  do {
    if (param_1 == &_mi_heap_empty) {
      mi_process_init();
      bVar3 = _mi_heap_init();
      if (!bVar3) {
        LOCK();
        UNLOCK();
        if (_mi_stats_main.threads.peak < _mi_stats_main.threads.current + 1) {
          LOCK();
          UNLOCK();
          _mi_stats_main.threads.peak = _mi_stats_main.threads.current + 1;
        }
        LOCK();
        _mi_stats_main.threads.allocated = _mi_stats_main.threads.allocated + 1;
        UNLOCK();
        _mi_stats_main.threads.current = _mi_stats_main.threads.current + 1;
      }
      param_1 = *(mi_heap_s **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc18);
      if (param_1 == &_mi_heap_empty) {
        return (void *)0x0;
      }
    }
    param_1->tld->heartbeat = param_1->tld->heartbeat + 1;
    if ((deferred_free != (_func___cdecl_void_bool_ulong64_void_ptr *)0x0) &&
       (param_1->tld->recurse == false)) {
      param_1->tld->recurse = true;
      (*deferred_free)(false,param_1->tld->heartbeat,deferred_arg);
      param_1->tld->recurse = false;
    }
    pmVar4 = param_1->thread_delayed_free;
    do {
      pmVar9 = pmVar4;
      if (pmVar9 == (mi_block_s *)0x0) goto LAB_141d9035b;
      LOCK();
      pmVar4 = param_1->thread_delayed_free;
      bVar3 = pmVar9 == pmVar4;
      if (bVar3) {
        param_1->thread_delayed_free = (mi_block_s *)0x0;
        pmVar4 = pmVar9;
      }
      UNLOCK();
    } while (!bVar3);
    do {
      pmVar4 = (mi_block_s *)pmVar9->next;
      bVar3 = _mi_free_delayed_block(pmVar9);
      if (!bVar3) {
        pmVar5 = param_1->thread_delayed_free;
        do {
          pmVar9->next = (ulong64)pmVar5;
          LOCK();
          pmVar6 = param_1->thread_delayed_free;
          bVar3 = pmVar5 == pmVar6;
          if (bVar3) {
            param_1->thread_delayed_free = pmVar9;
            pmVar6 = pmVar5;
          }
          UNLOCK();
          pmVar5 = pmVar6;
        } while (!bVar3);
      }
      pmVar9 = pmVar4;
    } while (pmVar4 != (mi_block_s *)0x0);
LAB_141d9035b:
    pmVar7 = mi_find_page(param_1,param_2);
    if (pmVar7 == (mi_page_s *)0x0) {
      mi_heap_collect_ex(param_1,MI_FORCE);
      pmVar7 = mi_find_page(param_1,param_2);
      if (pmVar7 == (mi_page_s *)0x0) {
        _mi_error_message(0xc,"unable to allocate memory (%zu bytes)\n");
        return (void *)0x0;
      }
    }
    pmVar4 = pmVar7->free;
    if (pmVar4 != (mi_block_s *)0x0) {
      pmVar7->used = pmVar7->used + 1;
      pmVar7->free = (mi_block_s *)pmVar4->next;
      return pmVar4;
    }
  } while( true );
}

// mi_heap_malloc_aligned @ 141d97480

void * __cdecl mi_heap_malloc_aligned(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at(param_1,param_2,param_3,0,false);
  return pvVar1;
}

// mi_heap_malloc_aligned_at @ 141d974a0

void * __cdecl
mi_heap_malloc_aligned_at(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at(param_1,param_2,param_3,param_4,false);
  return pvVar1;
}

// mi_heap_malloc_small @ 141d974c0

/* WARNING: Removing unreachable block (ram,0x000141d9027c) */

void * __cdecl mi_heap_malloc_small(mi_heap_s *param_1,ulong64 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  mi_block_s *pmVar4;
  mi_block_s *pmVar5;
  mi_block_s *pmVar6;
  mi_page_s *pmVar7;
  mi_block_s *pmVar8;
  
  lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (param_2 + 7 & 0xfffffffffffffff8));
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(undefined8 *)(lVar1 + 0x10) = *puVar2;
    return puVar2;
  }
  do {
    if (param_1 == &_mi_heap_empty) {
      mi_process_init();
      bVar3 = _mi_heap_init();
      if (!bVar3) {
        LOCK();
        UNLOCK();
        if (_mi_stats_main.threads.peak < _mi_stats_main.threads.current + 1) {
          LOCK();
          UNLOCK();
          _mi_stats_main.threads.peak = _mi_stats_main.threads.current + 1;
        }
        LOCK();
        _mi_stats_main.threads.allocated = _mi_stats_main.threads.allocated + 1;
        UNLOCK();
        _mi_stats_main.threads.current = _mi_stats_main.threads.current + 1;
      }
      param_1 = *(mi_heap_s **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc18);
      if (param_1 == &_mi_heap_empty) {
        return (void *)0x0;
      }
    }
    param_1->tld->heartbeat = param_1->tld->heartbeat + 1;
    if ((deferred_free != (_func___cdecl_void_bool_ulong64_void_ptr *)0x0) &&
       (param_1->tld->recurse == false)) {
      param_1->tld->recurse = true;
      (*deferred_free)(false,param_1->tld->heartbeat,deferred_arg);
      param_1->tld->recurse = false;
    }
    pmVar4 = param_1->thread_delayed_free;
    do {
      pmVar8 = pmVar4;
      if (pmVar8 == (mi_block_s *)0x0) goto LAB_141d9035b;
      LOCK();
      pmVar4 = param_1->thread_delayed_free;
      bVar3 = pmVar8 == pmVar4;
      if (bVar3) {
        param_1->thread_delayed_free = (mi_block_s *)0x0;
        pmVar4 = pmVar8;
      }
      UNLOCK();
    } while (!bVar3);
    do {
      pmVar4 = (mi_block_s *)pmVar8->next;
      bVar3 = _mi_free_delayed_block(pmVar8);
      if (!bVar3) {
        pmVar5 = param_1->thread_delayed_free;
        do {
          pmVar8->next = (ulong64)pmVar5;
          LOCK();
          pmVar6 = param_1->thread_delayed_free;
          bVar3 = pmVar5 == pmVar6;
          if (bVar3) {
            param_1->thread_delayed_free = pmVar8;
            pmVar6 = pmVar5;
          }
          UNLOCK();
          pmVar5 = pmVar6;
        } while (!bVar3);
      }
      pmVar8 = pmVar4;
    } while (pmVar4 != (mi_block_s *)0x0);
LAB_141d9035b:
    pmVar7 = mi_find_page(param_1,param_2);
    if (pmVar7 == (mi_page_s *)0x0) {
      mi_heap_collect_ex(param_1,MI_FORCE);
      pmVar7 = mi_find_page(param_1,param_2);
      if (pmVar7 == (mi_page_s *)0x0) {
        _mi_error_message(0xc,"unable to allocate memory (%zu bytes)\n");
        return (void *)0x0;
      }
    }
    pmVar4 = pmVar7->free;
    if (pmVar4 != (mi_block_s *)0x0) {
      pmVar7->used = pmVar7->used + 1;
      pmVar7->free = (mi_block_s *)pmVar4->next;
      return pmVar4;
    }
  } while( true );
}

// mi_heap_malloc_zero_aligned_at @ 141d974f0

void * __cdecl
mi_heap_malloc_zero_aligned_at
          (mi_heap_s *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,bool param_5)

{
  ulonglong uVar1;
  byte *pbVar2;
  void *pvVar3;
  mi_page_s *pmVar4;
  mi_block_s *pmVar5;
  void *pvVar6;
  ulong64 uVar7;
  longlong lVar8;
  
  if (((param_2 < 0x8000000000000000) && (param_3 != 0)) &&
     (uVar1 = param_3 - 1, (param_3 & uVar1) == 0)) {
    if (param_2 < 0x401) {
      pmVar4 = *(mi_page_s **)
                ((longlong)param_1->pages_free_direct + (param_2 + 7 & 0xfffffffffffffff8));
      pmVar5 = pmVar4->free;
      if ((pmVar5 != (mi_block_s *)0x0) && (((longlong)&pmVar5->next + param_4 & uVar1) == 0)) {
        pmVar4->used = pmVar4->used + 1;
        pmVar4->free = (mi_block_s *)pmVar5->next;
        if (!param_5) {
          return pmVar5;
        }
        _mi_block_zero_init(pmVar4,pmVar5,param_2);
        return pmVar5;
      }
    }
    if (((param_4 == 0) && (param_3 <= param_2)) &&
       ((param_2 < 0x20001 && ((param_2 & uVar1) == 0)))) {
      pvVar6 = _mi_heap_malloc_zero(param_1,param_2,param_5);
      return pvVar6;
    }
    pvVar6 = _mi_heap_malloc_zero(param_1,(param_2 - 1) + param_3,param_5);
    if (pvVar6 != (void *)0x0) {
      uVar7 = param_3 - ((longlong)pvVar6 + param_4 & uVar1);
      if (uVar7 == param_3) {
        return pvVar6;
      }
      pvVar3 = (void *)(uVar7 + (longlong)pvVar6);
      if (pvVar3 == pvVar6) {
        return pvVar3;
      }
      lVar8 = ((ulonglong)pvVar6 & 0xffffffffff800000) + 0x80 +
              ((longlong)pvVar6 - ((ulonglong)pvVar6 & 0xffffffffff800000) >> 0x10) * 0x50;
      pbVar2 = (byte *)((lVar8 - (ulonglong)*(uint *)(lVar8 + 4)) + 0xe);
      *pbVar2 = *pbVar2 | 2;
      return pvVar3;
    }
  }
  return (void *)0x0;
}

// mi_heap_mallocn @ 141d97640

void * __cdecl mi_heap_mallocn(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  ulong64 uVar5;
  
  uVar5 = param_3;
  if (((param_2 != 1) &&
      (((uVar5 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar3._8_8_ = 0, auVar3._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (uVar5 < 0x401) {
    lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (uVar5 + 7 & 0xfffffffffffffff8));
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(undefined8 *)(lVar1 + 0x10) = *puVar2;
      return puVar2;
    }
  }
  pvVar4 = _mi_malloc_generic(param_1,uVar5);
  return pvVar4;
}

// mi_heap_new @ 141d976f0

mi_heap_s * __cdecl mi_heap_new(void)

{
  mi_random_cxt_s *pmVar1;
  mi_tld_s *pmVar2;
  undefined8 uVar3;
  mi_heap_s *pmVar4;
  mi_heap_s *_Dst;
  ulong64 uVar5;
  longlong lVar6;
  mi_heap_s *pmVar7;
  mi_random_cxt_s *pmVar8;
  mi_heap_s *pmVar9;
  mi_random_cxt_s *pmVar10;
  
  pmVar4 = mi_heap_get_default();
  pmVar4 = pmVar4->tld->heap_backing;
  _Dst = _mi_malloc_generic(pmVar4,0xbf0);
  if (_Dst != (mi_heap_s *)0x0) {
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,&_mi_heap_empty,0xbf0);
    }
    else {
      pmVar7 = &_mi_heap_empty;
      pmVar9 = _Dst;
      for (lVar6 = 0xbf0; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)&pmVar9->tld = *(undefined1 *)&pmVar7->tld;
        pmVar7 = (mi_heap_s *)((longlong)&pmVar7->tld + 1);
        pmVar9 = (mi_heap_s *)((longlong)&pmVar9->tld + 1);
      }
    }
    pmVar1 = &_Dst->random;
    _Dst->tld = pmVar4->tld;
    _Dst->thread_id = (ulong64)Self;
    pmVar1->input[0] = 0;
    pmVar1->input[1] = 0;
    (_Dst->random).input[2] = 0;
    (_Dst->random).input[3] = 0;
    (_Dst->random).input[4] = 0;
    (_Dst->random).input[5] = 0;
    (_Dst->random).input[6] = 0;
    (_Dst->random).input[7] = 0;
    (_Dst->random).input[8] = 0;
    (_Dst->random).input[9] = 0;
    (_Dst->random).input[10] = 0;
    (_Dst->random).input[0xb] = 0;
    (_Dst->random).input[0xc] = 0;
    (_Dst->random).input[0xd] = 0;
    (_Dst->random).input[0xe] = 0;
    (_Dst->random).input[0xf] = 0;
    (_Dst->random).output[0] = 0;
    (_Dst->random).output[1] = 0;
    (_Dst->random).output[2] = 0;
    (_Dst->random).output[3] = 0;
    (_Dst->random).output[4] = 0;
    (_Dst->random).output[5] = 0;
    (_Dst->random).output[6] = 0;
    (_Dst->random).output[7] = 0;
    (_Dst->random).output[8] = 0;
    (_Dst->random).output[9] = 0;
    (_Dst->random).output[10] = 0;
    (_Dst->random).output[0xb] = 0;
    (_Dst->random).output[0xc] = 0;
    (_Dst->random).output[0xd] = 0;
    (_Dst->random).output[0xe] = 0;
    (_Dst->random).output[0xf] = 0;
    (_Dst->random).output_available = 0;
    if (_mi_cpu_has_fsrm == false) {
      uVar3 = *(undefined8 *)((pmVar4->random).input + 2);
      *(undefined8 *)pmVar1->input = *(undefined8 *)(pmVar4->random).input;
      *(undefined8 *)((_Dst->random).input + 2) = uVar3;
      uVar3 = *(undefined8 *)((pmVar4->random).input + 6);
      *(undefined8 *)((_Dst->random).input + 4) = *(undefined8 *)((pmVar4->random).input + 4);
      *(undefined8 *)((_Dst->random).input + 6) = uVar3;
      uVar3 = *(undefined8 *)((pmVar4->random).input + 10);
      *(undefined8 *)((_Dst->random).input + 8) = *(undefined8 *)((pmVar4->random).input + 8);
      *(undefined8 *)((_Dst->random).input + 10) = uVar3;
      uVar3 = *(undefined8 *)((pmVar4->random).input + 0xe);
      *(undefined8 *)((_Dst->random).input + 0xc) = *(undefined8 *)((pmVar4->random).input + 0xc);
      *(undefined8 *)((_Dst->random).input + 0xe) = uVar3;
    }
    else {
      pmVar8 = &pmVar4->random;
      pmVar10 = pmVar1;
      for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(char *)pmVar10->input = (char)pmVar8->input[0];
        pmVar8 = (mi_random_cxt_s *)((longlong)pmVar8->input + 1);
        pmVar10 = (mi_random_cxt_s *)((longlong)pmVar10->input + 1);
      }
    }
    (_Dst->random).input[0xc] = 0;
    (_Dst->random).input[0xd] = 0;
    *(mi_random_cxt_s **)((_Dst->random).input + 0xe) = pmVar1;
    chacha_block(pmVar1);
    uVar5 = _mi_heap_random_next(_Dst);
    _Dst->cookie = uVar5 | 1;
    uVar5 = _mi_heap_random_next(_Dst);
    _Dst->keys[0] = uVar5;
    uVar5 = _mi_heap_random_next(_Dst);
    pmVar2 = _Dst->tld;
    _Dst->keys[1] = uVar5;
    _Dst->no_reclaim = true;
    _Dst->next = pmVar2->heaps;
    pmVar2->heaps = _Dst;
    return _Dst;
  }
  return (mi_heap_s *)0x0;
}

// mi_heap_page_check_owned @ 141d97880

bool __cdecl
mi_heap_page_check_owned
          (mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3,void *param_4,
          void *param_5)

{
  ulonglong uVar1;
  void *pvVar2;
  
  uVar1 = (ulonglong)param_3->xblock_size;
  pvVar2 = (void *)(((longlong)
                     ((longlong)param_3 + (-0x80 - ((ulonglong)param_3 & 0xffffffffff800000))) /
                    0x50) * 0x10000 + ((ulonglong)param_3 & 0xffffffffff800000));
  if (0x7ffffff < uVar1) {
    uVar1 = (ulonglong)param_3->slice_count << 0x10;
  }
  if ((pvVar2 <= param_4) && (param_4 < (void *)(param_3->capacity * uVar1 + (longlong)pvVar2))) {
    *(undefined1 *)param_5 = 1;
    return false;
  }
  *(undefined1 *)param_5 = 0;
  return true;
}

// mi_heap_page_collect @ 141d97900

bool __cdecl
mi_heap_page_collect
          (mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3,void *param_4,
          void *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)param_4;
  _mi_page_free_collect(param_3,0 < iVar1);
  if (param_3->used == 0) {
    _mi_page_free(param_3,param_2,0 < iVar1);
  }
  else if (iVar1 == 2) {
    _mi_page_abandon(param_3,param_2);
  }
  return true;
}

// mi_heap_page_never_delayed_free @ 141d97980

bool __cdecl
mi_heap_page_never_delayed_free
          (mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3,void *param_4,
          void *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    do {
      uVar1 = param_3->xthread_free;
      uVar2 = (uint)uVar1 & 3;
    } while (uVar2 == 1);
    if (uVar2 == 3) {
      return true;
    }
    LOCK();
    bVar3 = uVar1 == param_3->xthread_free;
    if (bVar3) {
      param_3->xthread_free = uVar1 | 3;
    }
    UNLOCK();
  } while (!bVar3);
  return true;
}

// mi_heap_queue_first_update @ 141d979d0

void __cdecl mi_heap_queue_first_update(mi_heap_s *param_1,mi_page_queue_s *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  mi_page_queue_s *pmVar6;
  mi_page_s *pmVar7;
  mi_page_s **ppmVar8;
  byte bVar9;
  ulonglong uVar10;
  
  if (param_2->block_size < 0x401) {
    pmVar7 = &_mi_page_empty;
    if (param_2->first != (mi_page_s *)0x0) {
      pmVar7 = param_2->first;
    }
    uVar10 = param_2->block_size + 7 >> 3;
    if (param_1->pages_free_direct[uVar10] != pmVar7) {
      if (uVar10 < 2) {
        uVar5 = 0;
      }
      else {
        if (uVar10 < 9) {
          bVar9 = (char)uVar10 + 1U & 0xfe;
        }
        else if (uVar10 < 0x4001) {
          uVar4 = uVar10 - 1;
          if (uVar4 == 0) {
            cVar2 = '\0';
          }
          else {
            lVar1 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            cVar2 = (char)lVar1;
          }
          bVar9 = (((byte)(uVar4 >> (cVar2 - 2U & 0x3f)) & 3) - 3) + cVar2 * '\x04';
        }
        else {
          bVar9 = 0x49;
        }
        do {
          pmVar6 = param_2 + -1;
          uVar4 = param_2[-1].block_size + 7 >> 3;
          if (uVar4 < 2) {
            bVar3 = 1;
          }
          else if (uVar4 < 9) {
            bVar3 = (char)uVar4 + 1U & 0xfe;
          }
          else if (uVar4 < 0x4001) {
            uVar5 = uVar4 - 1;
            if (uVar5 == 0) {
              cVar2 = '\0';
            }
            else {
              lVar1 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                }
              }
              cVar2 = (char)lVar1;
            }
            bVar3 = (((byte)(uVar5 >> (cVar2 - 2U & 0x3f)) & 3) - 3) + cVar2 * '\x04';
          }
          else {
            bVar3 = 0x49;
          }
        } while ((bVar9 == bVar3) && (param_2 = pmVar6, param_1->pages < pmVar6));
        uVar5 = uVar4 + 1;
        if (uVar10 < uVar4 + 1) {
          uVar5 = uVar10;
        }
      }
      ppmVar8 = param_1->pages_free_direct + uVar5;
      for (uVar10 = (uVar10 - uVar5) * 8 + 8 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *ppmVar8 = pmVar7;
        ppmVar8 = ppmVar8 + 1;
      }
    }
  }
  return;
}

// mi_heap_realloc @ 141d97b30

void * __cdecl mi_heap_realloc(mi_heap_s *param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_realloc_zero(param_1,param_2,param_3,false);
  return pvVar1;
}

// mi_heap_realloc_aligned @ 141d97b40

void * __cdecl
mi_heap_realloc_aligned(mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  if (param_4 < 9) {
    pvVar1 = _mi_heap_realloc_zero(param_1,param_2,param_3,false);
    return pvVar1;
  }
  pvVar1 = mi_heap_realloc_zero_aligned_at
                     (param_1,param_2,param_3,param_4,(ulonglong)param_2 % param_4,false);
  return pvVar1;
}

// mi_heap_realloc_aligned_at @ 141d97b80

void * __cdecl
mi_heap_realloc_aligned_at
          (mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_realloc_zero_aligned_at(param_1,param_2,param_3,param_4,param_5,false);
  return pvVar1;
}

// mi_heap_realloc_zero_aligned_at @ 141d97bb0

void * __cdecl
mi_heap_realloc_zero_aligned_at
          (mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          bool param_6)

{
  undefined1 *_Dst;
  ulong64 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (param_4 < 9) {
    _Dst = _mi_heap_realloc_zero(param_1,param_2,param_3,param_6);
  }
  else if (param_2 == (void *)0x0) {
    _Dst = mi_heap_malloc_zero_aligned_at(param_1,param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = mi_usable_size(param_2);
    if ((((uVar1 < param_3) || (param_3 < uVar1 - (uVar1 >> 1))) ||
        (_Dst = param_2, ((longlong)param_2 + param_5) % param_4 != 0)) &&
       (_Dst = mi_heap_malloc_zero_aligned_at(param_1,param_3,param_4,param_5,false),
       _Dst != (undefined1 *)0x0)) {
      if (((param_6) && (uVar1 < param_3)) &&
         (lVar2 = ((ulonglong)_Dst & 0xffffffffff800000) + 0x80 +
                  ((longlong)_Dst - ((ulonglong)_Dst & 0xffffffffff800000) >> 0x10) * 0x50,
         (*(byte *)((lVar2 - (ulonglong)*(uint *)(lVar2 + 4)) + 0xf) & 1) == 0)) {
        lVar2 = uVar1 - 8;
        if (uVar1 < 8) {
          lVar2 = 0;
        }
        memset(_Dst + lVar2,0,param_3 - lVar2);
      }
      if (uVar1 < param_3) {
        param_3 = uVar1;
      }
      puVar3 = param_2;
      puVar4 = _Dst;
      if (_mi_cpu_has_fsrm == false) {
        memcpy(_Dst,param_2,param_3);
      }
      else {
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      mi_free(param_2);
    }
  }
  return _Dst;
}

// mi_heap_reallocf @ 141d97d20

void * __cdecl mi_heap_reallocf(mi_heap_s *param_1,void *param_2,ulong64 param_3)

{
  uint *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  mi_page_s *pmVar4;
  mi_segment_s *pmVar5;
  
  pvVar2 = _mi_heap_realloc_zero(param_1,param_2,param_3,false);
  if (((pvVar2 == (void *)0x0) && (param_2 != (void *)0x0)) &&
     (pmVar5 = (mi_segment_s *)((ulonglong)param_2 & 0xffffffffff800000),
     pmVar5 != (mi_segment_s *)0x0)) {
    uVar3 = (ulonglong)((longlong)param_2 - (longlong)pmVar5) >> 0x10;
    if ((Self == (void *)pmVar5->thread_id) &&
       (pmVar4 = (mi_page_s *)
                 ((longlong)pmVar5 +
                 ((uVar3 * 0x50 + 0x80) - (ulonglong)pmVar5->slices[uVar3].slice_offset)),
       (pmVar4->flags).full_aligned == '\0')) {
      *(mi_block_s **)param_2 = pmVar4->local_free;
      puVar1 = &pmVar4->used;
      *puVar1 = *puVar1 - 1;
      pmVar4->local_free = param_2;
      if (*puVar1 == 0) {
        _mi_page_retire(pmVar4);
        return (void *)0x0;
      }
    }
    else {
      mi_free_generic(pmVar5,Self == (void *)pmVar5->thread_id,param_2);
    }
  }
  return pvVar2;
}

// mi_heap_reallocn @ 141d97dd0

void * __cdecl mi_heap_reallocn(mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_4;
  if (((param_3 != 1) &&
      (((uVar3 = param_3 * param_4, 0xffffffff < param_4 || (0xffffffff < param_3)) &&
       (param_4 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_3)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = _mi_heap_realloc_zero(param_1,param_2,uVar3,false);
  return pvVar2;
}

// mi_heap_realpath @ 141d97e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * __cdecl mi_heap_realpath(mi_heap_s *param_1,char *param_2,char *param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int *piVar3;
  CHAR *lpBuffer;
  undefined1 auStack_148 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  lpBuffer = local_128;
  if (param_3 != (char *)0x0) {
    lpBuffer = param_3;
  }
  DVar1 = GetFullPathNameA(param_2,0x104,lpBuffer,(LPSTR *)0x0);
  if (DVar1 == 0) {
    pDVar2 = (DWORD *)_errno();
    DVar1 = GetLastError();
    *pDVar2 = DVar1;
    param_3 = (char *)0x0;
  }
  else if (DVar1 < 0x105) {
    if (param_3 == (char *)0x0) {
      param_3 = mi_heap_strndup(param_1,local_128,0x104);
    }
  }
  else {
    piVar3 = _errno();
    *piVar3 = 0x16;
    param_3 = (char *)0x0;
  }
  return param_3;
}

// mi_heap_recalloc @ 141d97f10

void * __cdecl mi_heap_recalloc(mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_4;
  if (((param_3 != 1) &&
      (((uVar3 = param_3 * param_4, 0xffffffff < param_4 || (0xffffffff < param_3)) &&
       (param_4 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_3)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = _mi_heap_realloc_zero(param_1,param_2,uVar3,true);
  return pvVar2;
}

// mi_heap_recalloc_aligned @ 141d97f90

void * __cdecl
mi_heap_recalloc_aligned
          (mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_4;
  if (((param_3 != 1) &&
      (((uVar3 = param_3 * param_4, 0xffffffff < param_4 || (0xffffffff < param_3)) &&
       (param_4 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_3)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (8 < param_5) {
    pvVar2 = mi_heap_realloc_zero_aligned_at
                       (param_1,param_2,uVar3,param_5,(ulonglong)param_2 % param_5,true);
    return pvVar2;
  }
  pvVar2 = _mi_heap_realloc_zero(param_1,param_2,uVar3,true);
  return pvVar2;
}

// mi_heap_recalloc_aligned_at @ 141d98030

void * __cdecl
mi_heap_recalloc_aligned_at
          (mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_4;
  if (((param_3 != 1) &&
      (((uVar3 = param_3 * param_4, 0xffffffff < param_4 || (0xffffffff < param_3)) &&
       (param_4 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_3)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = mi_heap_realloc_zero_aligned_at(param_1,param_2,uVar3,param_5,param_6,true);
  return pvVar2;
}

// mi_heap_reset_pages @ 141d980c0

void __cdecl mi_heap_reset_pages(mi_heap_s *param_1)

{
  longlong lVar1;
  mi_page_queue_s *pmVar2;
  mi_page_queue_s *pmVar3;
  
  memset(param_1->pages_free_direct,0,0x408);
  if (_mi_cpu_has_fsrm == false) {
    memcpy(param_1->pages,_mi_heap_empty.pages,0x708);
  }
  else {
    pmVar2 = _mi_heap_empty.pages;
    pmVar3 = param_1->pages;
    for (lVar1 = 0x708; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)&pmVar3->first = *(undefined1 *)&pmVar2->first;
      pmVar2 = (mi_page_queue_s *)((longlong)&pmVar2->first + 1);
      pmVar3 = (mi_page_queue_s *)((longlong)&pmVar3->first + 1);
    }
  }
  param_1->page_count = 0;
  param_1->thread_delayed_free = (mi_block_s *)0x0;
  return;
}

// mi_heap_rezalloc @ 141d98140

void * __cdecl mi_heap_rezalloc(mi_heap_s *param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_realloc_zero(param_1,param_2,param_3,true);
  return pvVar1;
}

// mi_heap_rezalloc_aligned @ 141d98150

void * __cdecl
mi_heap_rezalloc_aligned(mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  if (param_4 < 9) {
    pvVar1 = _mi_heap_realloc_zero(param_1,param_2,param_3,true);
    return pvVar1;
  }
  pvVar1 = mi_heap_realloc_zero_aligned_at
                     (param_1,param_2,param_3,param_4,(ulonglong)param_2 % param_4,true);
  return pvVar1;
}

// mi_heap_rezalloc_aligned_at @ 141d98190

void * __cdecl
mi_heap_rezalloc_aligned_at
          (mi_heap_s *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_realloc_zero_aligned_at(param_1,param_2,param_3,param_4,param_5,true);
  return pvVar1;
}

// mi_heap_set_default @ 141d981c0

mi_heap_s * __cdecl mi_heap_set_default(mi_heap_s *param_1)

{
  longlong lVar1;
  mi_heap_s *pmVar2;
  
  if ((param_1 != (mi_heap_s *)0x0) && (param_1 != &_mi_heap_empty)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pmVar2 = *(mi_heap_s **)(lVar1 + 0xc18);
    *(mi_heap_s **)(lVar1 + 0xc18) = param_1;
    FlsSetValue(mi_fls_key,param_1);
    return pmVar2;
  }
  return (mi_heap_s *)0x0;
}

// mi_heap_strdup @ 141d98230

char * __cdecl mi_heap_strdup(mi_heap_s *param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  char *_Dst;
  ulonglong _Size;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar2 = strlen(param_2);
  _Size = sVar2 + 1;
  if (_Size < 0x401) {
    lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (sVar2 + 8 & 0xfffffffffffffff8));
    _Dst = *(char **)(lVar1 + 0x10);
    if (_Dst != (char *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d982a1;
    }
  }
  _Dst = _mi_malloc_generic(param_1,_Size);
LAB_141d982a1:
  if (_Dst != (char *)0x0) {
    pcVar3 = _Dst;
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,param_2,_Size);
    }
    else {
      for (; _Size != 0; _Size = _Size - 1) {
        *pcVar3 = *param_2;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return _Dst;
}

// mi_heap_strndup @ 141d982f0

char * __cdecl mi_heap_strndup(mi_heap_s *param_1,char *param_2,ulong64 param_3)

{
  longlong lVar1;
  void *pvVar2;
  char *_Dst;
  size_t sVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  pvVar2 = memchr(param_2,0,param_3);
  if (pvVar2 != (void *)0x0) {
    param_3 = (longlong)pvVar2 - (longlong)param_2;
  }
  if (param_3 + 1 < 0x401) {
    lVar1 = *(longlong *)((longlong)param_1->pages_free_direct + (param_3 + 8 & 0xfffffffffffffff8))
    ;
    _Dst = *(char **)(lVar1 + 0x10);
    if (_Dst != (char *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d9836d;
    }
  }
  _Dst = _mi_malloc_generic(param_1,param_3 + 1);
LAB_141d9836d:
  if (_Dst == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = param_3;
  pcVar4 = _Dst;
  if (_mi_cpu_has_fsrm == false) {
    memcpy(_Dst,param_2,param_3);
    _Dst[param_3] = '\0';
    return _Dst;
  }
  for (; sVar3 != 0; sVar3 = sVar3 - 1) {
    *pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  _Dst[param_3] = '\0';
  return _Dst;
}

// mi_heap_visit_areas_page @ 141d983d0

bool __cdecl
mi_heap_visit_areas_page
          (mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3,void *param_4,
          void *param_5)

{
  undefined1 uVar1;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  mi_page_s *local_10;
  
  local_18 = (ulonglong)param_3->xblock_size;
  if (0x7ffffff < local_18) {
    local_18 = (ulonglong)param_3->slice_count << 0x10;
  }
  local_30 = param_3->reserved * local_18;
  local_28 = param_3->capacity * local_18;
  local_20 = (ulonglong)param_3->used;
  local_38 = ((longlong)((longlong)param_3 + (-0x80 - ((ulonglong)param_3 & 0xffffffffff800000))) /
             0x50) * 0x10000 + ((ulonglong)param_3 & 0xffffffffff800000);
  local_10 = param_3;
  uVar1 = (*param_4)(param_1,&local_38,param_5);
  return (bool)uVar1;
}

// mi_heap_visit_blocks @ 141d98480

bool __cdecl
mi_heap_visit_blocks
          (mi_heap_s *param_1,bool param_2,
          _func___cdecl_bool_mi_heap_s_ptr_mi_heap_area_s_ptr_void_ptr_ulong64_void_ptr *param_3,
          void *param_4)

{
  mi_page_s *pmVar1;
  bool bVar2;
  mi_page_queue_s *pmVar3;
  ulonglong uVar4;
  mi_heap_area_ex_s local_58;
  
  if ((param_1 == (mi_heap_s *)0x0) || (param_1->page_count == 0)) {
    return false;
  }
  pmVar3 = param_1->pages;
  uVar4 = 0;
  do {
    pmVar1 = pmVar3->first;
    while (local_58.page = pmVar1, local_58.page != (mi_page_s *)0x0) {
      local_58.area.block_size = (ulong64)(local_58.page)->xblock_size;
      pmVar1 = (local_58.page)->next;
      if (0x7ffffff < local_58.area.block_size) {
        local_58.area.block_size = (ulonglong)(local_58.page)->slice_count << 0x10;
      }
      local_58.area.reserved = (local_58.page)->reserved * local_58.area.block_size;
      local_58.area.committed = (local_58.page)->capacity * local_58.area.block_size;
      local_58.area.used = (ulong64)(local_58.page)->used;
      local_58.area.blocks =
           (void *)(((longlong)
                     ((longlong)local_58.page +
                     (-0x80 - ((ulonglong)local_58.page & 0xffffffffff800000))) / 0x50) * 0x10000 +
                   ((ulonglong)local_58.page & 0xffffffffff800000));
      bVar2 = (*param_3)(param_1,&local_58.area,(void *)0x0,local_58.area.block_size,param_4);
      if ((!bVar2) ||
         ((param_2 && (bVar2 = mi_heap_area_visit_blocks(&local_58,param_3,param_4), !bVar2)))) {
        return false;
      }
    }
    uVar4 = uVar4 + 1;
    pmVar3 = pmVar3 + 1;
    if (0x4a < uVar4) {
      return true;
    }
  } while( true );
}

// mi_heap_zalloc @ 141d985f0

void * __cdecl mi_heap_zalloc(mi_heap_s *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_malloc_zero(param_1,param_2,true);
  return pvVar1;
}

// mi_heap_zalloc_aligned @ 141d98600

void * __cdecl mi_heap_zalloc_aligned(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at(param_1,param_2,param_3,0,true);
  return pvVar1;
}

// mi_heap_zalloc_aligned_at @ 141d98620

void * __cdecl
mi_heap_zalloc_aligned_at(mi_heap_s *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at(param_1,param_2,param_3,param_4,true);
  return pvVar1;
}

// mi_is_in_heap_region @ 141d98640

bool __cdecl mi_is_in_heap_region(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_1 & 0xffffffffff800000;
  uVar6 = 0;
  uVar7 = uVar6;
  uVar8 = uVar6;
  if (uVar4 < 0x140000000000) {
    uVar7 = (ulonglong)param_1 >> 0x1d;
    uVar8 = (ulonglong)((uint)((ulonglong)param_1 >> 0x17) & 0x3f);
  }
  uVar2 = 1L << (sbyte)uVar8;
  uVar5 = uVar4;
  if (((mi_segment_map[uVar7] & uVar2) == 0) && (uVar5 = uVar6, uVar7 != 0)) {
    uVar3 = uVar2 - 1 & mi_segment_map[uVar7];
    uVar2 = uVar7;
    while (uVar3 == 0) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) goto LAB_141d98732;
      uVar3 = mi_segment_map[uVar2];
    }
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = uVar4 + (((uVar2 - uVar7) * 0x40 - uVar8) + (0x3f - (ulonglong)(0x3f - (int)lVar1))) *
                    0x800000;
    if ((uVar4 != 0) && ((uVar4 ^ _mi_heap_main.cookie) == *(ulonglong *)(uVar4 + 0x50))) {
      if ((void *)(*(longlong *)(uVar4 + 0x58) * 0x10000 + uVar4) <= param_1) {
        uVar4 = uVar6;
      }
      return uVar4 != 0;
    }
  }
LAB_141d98732:
  return uVar5 != 0;
}

// mi_is_redirected @ 141d98750

bool __cdecl mi_is_redirected(void)

{
  return mi_redirected;
}

// mi_malloc @ 141d98760

void * __cdecl mi_malloc(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      return puVar3;
    }
  }
  pvVar4 = _mi_malloc_generic(pmVar1,param_1);
  return pvVar4;
}

// mi_malloc_aligned @ 141d987c0

void * __cdecl mi_malloc_aligned(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,0,false);
  return pvVar1;
}

// mi_malloc_aligned_at @ 141d98810

void * __cdecl mi_malloc_aligned_at(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,false);
  return pvVar1;
}

// mi_malloc_size @ 141d98860

ulong64 __cdecl mi_malloc_size(void *param_1)

{
  ulonglong uVar1;
  mi_block_s *pmVar2;
  ulong64 uVar3;
  mi_segment_s *pmVar4;
  mi_page_s *pmVar5;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 == (mi_segment_s *)0x0) {
    return 0;
  }
  uVar1 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
  pmVar5 = (mi_page_s *)
           ((longlong)pmVar4 +
           ((uVar1 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar1].slice_offset));
  if (((pmVar5->flags).full_aligned & 2) != 0) {
    pmVar2 = _mi_page_ptr_unalign(pmVar4,pmVar5,param_1);
    uVar1 = (ulonglong)pmVar5->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar5->slice_count << 0x10;
    }
    return (uVar1 - (longlong)param_1) + (longlong)pmVar2;
  }
  uVar3 = (ulong64)pmVar5->xblock_size;
  if (0x7ffffff < uVar3) {
    uVar3 = (ulonglong)pmVar5->slice_count << 0x10;
  }
  return uVar3;
}

// mi_malloc_small @ 141d98900

void * __cdecl mi_malloc_small(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    pvVar4 = _mi_malloc_generic(pmVar1,param_1);
    return pvVar4;
  }
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  *(undefined8 *)(lVar2 + 0x10) = *puVar3;
  return puVar3;
}

// mi_malloc_usable_size @ 141d98950

ulong64 __cdecl mi_malloc_usable_size(void *param_1)

{
  ulonglong uVar1;
  mi_block_s *pmVar2;
  ulong64 uVar3;
  mi_segment_s *pmVar4;
  mi_page_s *pmVar5;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 == (mi_segment_s *)0x0) {
    return 0;
  }
  uVar1 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
  pmVar5 = (mi_page_s *)
           ((longlong)pmVar4 +
           ((uVar1 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar1].slice_offset));
  if (((pmVar5->flags).full_aligned & 2) != 0) {
    pmVar2 = _mi_page_ptr_unalign(pmVar4,pmVar5,param_1);
    uVar1 = (ulonglong)pmVar5->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar5->slice_count << 0x10;
    }
    return (uVar1 - (longlong)param_1) + (longlong)pmVar2;
  }
  uVar3 = (ulong64)pmVar5->xblock_size;
  if (0x7ffffff < uVar3) {
    uVar3 = (ulonglong)pmVar5->slice_count << 0x10;
  }
  return uVar3;
}

// mi_mallocn @ 141d989f0

void * __cdecl mi_mallocn(ulong64 param_1,ulong64 param_2)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  void *pvVar5;
  ulonglong uVar6;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  uVar6 = param_2;
  if (((param_1 != 1) &&
      (((uVar6 = param_1 * param_2, 0xffffffff < param_2 || (0xffffffff < param_1)) &&
       (param_2 != 0)))) &&
     (auVar4._8_8_ = 0, auVar4._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar4,0) < param_1)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (uVar6 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (uVar6 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      return puVar3;
    }
  }
  pvVar5 = _mi_malloc_generic(pmVar1,uVar6);
  return pvVar5;
}

// mi_manage_os_memory @ 141d98ac0

bool __cdecl
mi_manage_os_memory(void *param_1,ulong64 param_2,bool param_3,bool param_4,bool param_5,int param_6
                   )

{
  mi_arena_s **ppmVar1;
  bool bVar2;
  mi_arena_s *pmVar3;
  longlong lVar4;
  ulong64 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  
  bVar7 = true;
  if (!param_4) {
    bVar7 = param_3;
  }
  uVar8 = param_2 + 0x7fffff >> 0x17;
  uVar6 = uVar8 + 0x3f >> 6;
  lVar4 = 0x18;
  if (bVar7 != false) {
    lVar4 = 0x10;
  }
  pmVar3 = _mi_os_alloc(lVar4 * uVar6 + 0x40,&_mi_stats_main);
  bVar2 = false;
  if (pmVar3 != (mi_arena_s *)0x0) {
    pmVar3->block_count = uVar8;
    pmVar3->field_count = uVar6;
    puVar5 = (ulong64 *)0x0;
    pmVar3->start = param_1;
    pmVar3->numa_node = param_6;
    pmVar3->is_zero_init = param_5;
    pmVar3->is_large = param_4;
    pmVar3->is_committed = bVar7;
    pmVar3->search_idx = 0;
    pmVar3->blocks_dirty = pmVar3->blocks_inuse + uVar6;
    if (bVar7 == false) {
      puVar5 = pmVar3->blocks_inuse + uVar6 * 2;
    }
    pmVar3->blocks_committed = puVar5;
    uVar8 = uVar6 * 0x40 - uVar8;
    if (0 < (longlong)uVar8) {
      uVar6 = uVar6 * 0x40 - uVar8;
      if (uVar8 < 0x40) {
        uVar8 = (1L << ((byte)uVar8 & 0x3f)) + -1 << ((byte)uVar6 & 0x3f);
      }
      else {
        uVar8 = 0xffffffffffffffff;
      }
      LOCK();
      pmVar3->blocks_inuse[uVar6 >> 6] = pmVar3->blocks_inuse[uVar6 >> 6] | uVar8;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    if (mi_arena_count < 0x40) {
      ppmVar1 = mi_arenas + mi_arena_count;
      mi_arena_count = mi_arena_count + 1;
      *ppmVar1 = pmVar3;
    }
    else {
      LOCK();
      UNLOCK();
    }
    bVar2 = true;
  }
  return bVar2;
}

// mi_mbsdup @ 141d98c10

uchar * __cdecl mi_mbsdup(uchar *param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  size_t sVar3;
  uchar *_Dst;
  ulonglong _Size;
  uchar *puVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 == (uchar *)0x0) {
    return (uchar *)0x0;
  }
  sVar3 = strlen((char *)param_1);
  _Size = sVar3 + 1;
  if (_Size < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (sVar3 + 8 & 0xfffffffffffffff8));
    _Dst = *(uchar **)(lVar2 + 0x10);
    if (_Dst != (uchar *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d9e5e7;
    }
  }
  _Dst = _mi_malloc_generic(pmVar1,_Size);
LAB_141d9e5e7:
  if (_Dst != (uchar *)0x0) {
    puVar4 = _Dst;
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,param_1,_Size);
    }
    else {
      for (; _Size != 0; _Size = _Size - 1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return _Dst;
}

// mi_memalign @ 141d98c20

void * __cdecl mi_memalign(ulong64 param_1,ulong64 param_2)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if ((param_1 != 8) && ((param_1 != 0x10 || (param_2 < 9)))) {
    pvVar4 = mi_heap_malloc_zero_aligned_at
                       (*(mi_heap_s **)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18
                         ),param_2,param_1,0,false);
    return pvVar4;
  }
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_2 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_2 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      return puVar3;
    }
  }
  pvVar4 = _mi_malloc_generic(pmVar1,param_2);
  return pvVar4;
}

// mi_new @ 141d98cd0

void * __cdecl mi_new(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      goto LAB_141d98d2c;
    }
  }
  puVar3 = _mi_malloc_generic(pmVar1,param_1);
LAB_141d98d2c:
  if (puVar3 == (undefined8 *)0x0) {
    pvVar4 = mi_try_new(param_1,false);
    return pvVar4;
  }
  return puVar3;
}

// mi_new_aligned @ 141d98d50

void * __cdecl mi_new_aligned(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,0,false);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(0xc);
  }
  return pvVar1;
}

// mi_new_aligned_nothrow @ 141d98db0

void * __cdecl mi_new_aligned_nothrow(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,0,false);
  return pvVar1;
}

// mi_new_n @ 141d98e00

void * __cdecl mi_new_n(ulong64 param_1,ulong64 param_2)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar5 = param_2;
  if (((param_1 != 1) &&
      (((uVar5 = param_1 * param_2, 0xffffffff < param_2 || (0xffffffff < param_1)) &&
       (param_2 != 0)))) &&
     (auVar3._8_8_ = 0, auVar3._0_8_ = param_2,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0) < param_1)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
                    /* WARNING: Subroutine does not return */
    exit(0xc);
  }
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (uVar5 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (uVar5 + 7 & 0xfffffffffffffff8));
    puVar4 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar4;
      goto LAB_141d98eb6;
    }
  }
  puVar4 = _mi_malloc_generic(pmVar1,uVar5);
LAB_141d98eb6:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = mi_try_new(uVar5,false);
  }
  return puVar4;
}

// mi_new_nothrow @ 141d98ee0

void * __cdecl mi_new_nothrow(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      goto LAB_141d98f3c;
    }
  }
  puVar3 = _mi_malloc_generic(pmVar1,param_1);
LAB_141d98f3c:
  if (puVar3 == (undefined8 *)0x0) {
    pvVar4 = mi_try_new(param_1,true);
    return pvVar4;
  }
  return puVar3;
}

// mi_new_realloc @ 141d98f60

void * __cdecl mi_new_realloc(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,false);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(0xc);
  }
  return pvVar1;
}

// mi_new_reallocn @ 141d98fb0

void * __cdecl mi_new_reallocn(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_3;
  if (((param_2 == 1) ||
      (((uVar3 = param_2 * param_3, param_3 < 0x100000000 && (param_2 < 0x100000000)) ||
       (param_3 == 0)))) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    pvVar2 = _mi_heap_realloc_zero
                       (*(mi_heap_s **)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18
                         ),param_1,uVar3,false);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  else {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
  }
                    /* WARNING: Subroutine does not return */
  exit(0xc);
}

// mi_option_disable @ 141d99060

void __cdecl mi_option_disable(mi_option_e param_1)

{
  options[(int)param_1].value = 0;
  options[(int)param_1].init = INITIALIZED;
  return;
}

// mi_option_enable @ 141d99090

void __cdecl mi_option_enable(mi_option_e param_1)

{
  options[(int)param_1].value = 1;
  options[(int)param_1].init = INITIALIZED;
  return;
}

// mi_option_get @ 141d990c0

long __cdecl mi_option_get(mi_option_e param_1)

{
  if (options[(int)param_1].init == UNINIT) {
    mi_option_init(options + (int)param_1);
  }
  return options[(int)param_1].value;
}

// mi_option_init @ 141d99100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl mi_option_init(mi_option_desc_s *param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  char *local_c8 [2];
  char local_b8 [64];
  undefined1 local_78;
  CHAR local_68 [80];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8[0] = '\0';
  strncpy(local_b8,"mimalloc_",0x40);
  local_78 = 0;
  strncat(local_b8,param_1->name,0x40);
  local_78 = 0;
  local_68[0] = '\0';
  DVar2 = GetEnvironmentVariableA(local_b8,local_68,0x41);
  if (DVar2 - 1 < 0x40) {
    sVar5 = strlen(local_68);
    uVar7 = 0;
    uVar8 = 0x40;
    if ((0x40 < sVar5) || (uVar8 = sVar5, sVar5 != 0)) {
      do {
        iVar3 = toupper((int)local_68[uVar7]);
        local_b8[uVar7] = (char)iVar3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
      if (0x40 < uVar8) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
    }
    local_b8[uVar8] = '\0';
    if ((local_b8[0] == '\0') || (pcVar6 = strstr("1;TRUE;YES;ON",local_b8), pcVar6 != (char *)0x0))
    {
      param_1->value = 1;
    }
    else {
      pcVar6 = strstr("0;FALSE;NO;OFF",local_b8);
      if (pcVar6 == (char *)0x0) {
        local_c8[0] = local_b8;
        lVar4 = strtol(local_b8,local_c8,10);
        if (param_1->option == mi_option_reserve_os_memory) {
          cVar1 = *local_c8[0];
          if (cVar1 == 'K') {
            local_c8[0] = local_c8[0] + 1;
          }
          else if (cVar1 == 'M') {
            lVar4 = lVar4 << 10;
            local_c8[0] = local_c8[0] + 1;
          }
          else if (cVar1 == 'G') {
            lVar4 = lVar4 << 0x14;
            local_c8[0] = local_c8[0] + 1;
          }
          else {
            lVar4 = (long)((longlong)lVar4 + 0x3ffU >> 10);
          }
          if (*local_c8[0] == 'B') {
            local_c8[0] = local_c8[0] + 1;
          }
        }
        if (*local_c8[0] != '\0') {
          _mi_warning_message("environment option mimalloc_%s has an invalid value: %s\n");
          param_1->init = DEFAULTED;
          return;
        }
        param_1->value = lVar4;
      }
      else {
        param_1->value = 0;
      }
    }
    param_1->init = INITIALIZED;
  }
  else if (os_preloading == false) {
    param_1->init = DEFAULTED;
  }
  return;
}

// mi_option_is_enabled @ 141d99310

bool __cdecl mi_option_is_enabled(mi_option_e param_1)

{
  if (options[(int)param_1].init == UNINIT) {
    mi_option_init(options + (int)param_1);
  }
  return options[(int)param_1].value != 0;
}

// mi_option_set @ 141d99350

void __cdecl mi_option_set(mi_option_e param_1,long param_2)

{
  options[(int)param_1].value = param_2;
  options[(int)param_1].init = INITIALIZED;
  return;
}

// mi_option_set_default @ 141d99370

void __cdecl mi_option_set_default(mi_option_e param_1,long param_2)

{
  if (options[(int)param_1].init != INITIALIZED) {
    options[(int)param_1].value = param_2;
  }
  return;
}

// mi_option_set_enabled @ 141d99390

void __cdecl mi_option_set_enabled(mi_option_e param_1,bool param_2)

{
  options[(int)param_1].init = INITIALIZED;
  options[(int)param_1].value = (uint)param_2;
  return;
}

// mi_option_set_enabled_default @ 141d993c0

void __cdecl mi_option_set_enabled_default(mi_option_e param_1,bool param_2)

{
  if (options[(int)param_1].init != INITIALIZED) {
    options[(int)param_1].value = (uint)param_2;
  }
  return;
}

// mi_os_mem_alloc @ 141d993f0

void * __cdecl
mi_os_mem_alloc(ulong64 param_1,ulong64 param_2,bool param_3,bool param_4,bool *param_5,
               mi_stats_s *param_6)

{
  void *pvVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  bVar2 = false;
  if (param_3) {
    bVar2 = param_4;
  }
  uVar3 = 0x3000;
  if (!param_3) {
    uVar3 = 0x2000;
  }
  pvVar1 = mi_win_virtual_alloc((void *)0x0,param_1,param_2,uVar3,false,bVar2,param_5);
  if (pvVar1 != (void *)0x0) {
    mi_stat_update(&param_6->reserved,param_1);
    if (param_3) {
      mi_stat_update(&param_6->committed,param_1);
    }
  }
  return pvVar1;
}

// mi_os_mem_alloc_aligned @ 141d99490

void * __cdecl
mi_os_mem_alloc_aligned
          (ulong64 param_1,ulong64 param_2,bool param_3,bool param_4,bool *param_5,
          mi_stats_s *param_6)

{
  ulong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = false;
  if (param_3) {
    bVar5 = param_4;
  }
  if ((os_page_size <= param_2) && ((param_2 & param_2 - 1) == 0)) {
    uVar3 = os_page_size - 1;
    if ((os_page_size & uVar3) == 0) {
      uVar3 = ~uVar3 & uVar3 + param_1;
    }
    else {
      uVar3 = ((uVar3 + param_1) / os_page_size) * os_page_size;
    }
    pvVar2 = mi_os_mem_alloc(uVar3,param_2,param_3,bVar5,param_5,param_6);
    if (pvVar2 != (void *)0x0) {
      if ((ulonglong)pvVar2 % param_2 == 0) {
        return pvVar2;
      }
      mi_os_mem_free(pvVar2,uVar3,param_3,param_6);
      if (uVar3 < ~param_2) {
        uVar1 = 0x3000;
        if (!param_3) {
          uVar1 = 0x2000;
        }
        iVar6 = 0;
        while( true ) {
          pvVar2 = mi_os_mem_alloc(uVar3 + param_2,param_2,param_3,false,param_5,param_6);
          if (pvVar2 == (void *)0x0) break;
          if ((ulonglong)pvVar2 % param_2 == 0) {
            _mi_os_decommit((void *)(uVar3 + (longlong)pvVar2),param_2,param_6);
            return pvVar2;
          }
          mi_os_mem_free(pvVar2,uVar3 + param_2,param_3,param_6);
          pvVar4 = (void *)((param_2 - 1) + (longlong)pvVar2 & ~(param_2 - 1));
          pvVar2 = mi_win_virtual_alloc(pvVar4,uVar3,param_2,uVar1,false,bVar5,param_5);
          if (pvVar2 == pvVar4) {
            return pvVar2;
          }
          if (pvVar2 != (void *)0x0) {
            mi_os_mem_free(pvVar2,uVar3,param_3,param_6);
          }
          iVar6 = iVar6 + 1;
          if (2 < iVar6) {
            return (void *)0x0;
          }
        }
      }
    }
  }
  return (void *)0x0;
}

// mi_os_mem_free @ 141d99680

bool __cdecl mi_os_mem_free(void *param_1,ulong64 param_2,bool param_3,mi_stats_s *param_4)

{
  int iVar1;
  int *piVar2;
  long64 lVar3;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    iVar1 = (*pVirtualFree)(param_1,0,0x8000);
    lVar3 = -param_2;
    if (param_3) {
      mi_stat_update(&param_4->committed,lVar3);
    }
    mi_stat_update(&param_4->reserved,lVar3);
    if (iVar1 == 0) {
      piVar2 = _errno();
      strerror(*piVar2);
      _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
      return false;
    }
  }
  return true;
}

// mi_os_protectx @ 141d99730

bool __cdecl mi_os_protectx(void *param_1,ulong64 param_2,bool param_3)

{
  ulonglong uVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPVOID lpAddress;
  SIZE_T dwSize;
  DWORD flNewProtect;
  DWORD local_res10 [2];
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = os_page_size - 1;
    if ((os_page_size & uVar1) == 0) {
      lpAddress = (LPVOID)(~uVar1 & uVar1 + (longlong)param_1);
    }
    else {
      lpAddress = (LPVOID)(((uVar1 + (longlong)param_1) / os_page_size) * os_page_size);
    }
    dwSize = (((longlong)param_1 + param_2) / os_page_size) * os_page_size - (longlong)lpAddress;
    if (0 < (longlong)dwSize) {
      DVar3 = 0;
      local_res10[0] = 0;
      flNewProtect = 4;
      if (param_3) {
        flNewProtect = 1;
      }
      BVar2 = VirtualProtect(lpAddress,dwSize,flNewProtect,local_res10);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 != 0) {
          _mi_warning_message("mprotect error: start: %p, csize: 0x%x, err: %i\n");
        }
      }
      return DVar3 == 0;
    }
  }
  return false;
}

// mi_os_resetx @ 141d99810

bool __cdecl mi_os_resetx(void *param_1,ulong64 param_2,bool param_3,mi_stats_s *param_4)

{
  ulonglong uVar1;
  mi_stat_count_s *pmVar2;
  long64 *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  SIZE_T SVar8;
  SIZE_T dwSize;
  LPVOID lpAddress;
  bool bVar9;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = os_page_size - 1;
    if ((os_page_size & uVar1) == 0) {
      lpAddress = (LPVOID)(~uVar1 & uVar1 + (longlong)param_1);
    }
    else {
      lpAddress = (LPVOID)(((uVar1 + (longlong)param_1) / os_page_size) * os_page_size);
    }
    dwSize = (((longlong)param_1 + param_2) / os_page_size) * os_page_size - (longlong)lpAddress;
    if (0 < (longlong)dwSize) {
      pmVar2 = &param_4->reset;
      if (param_3) {
        if ((pmVar2 < &_mi_stats_main) ||
           ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar2)) {
          lVar6 = (param_4->reset).current + dwSize;
          (param_4->reset).current = lVar6;
          if ((param_4->reset).peak < lVar6) {
            (param_4->reset).peak = lVar6;
          }
          pmVar2->allocated = pmVar2->allocated + dwSize;
        }
        else {
          LOCK();
          plVar3 = &(param_4->reset).current;
          lVar6 = *plVar3;
          *plVar3 = *plVar3 + dwSize;
          UNLOCK();
          do {
            lVar5 = (param_4->reset).peak;
            if ((longlong)(lVar6 + dwSize) <= lVar5) break;
            plVar3 = &(param_4->reset).peak;
            LOCK();
            bVar9 = lVar5 == *plVar3;
            if (bVar9) {
              *plVar3 = lVar6 + dwSize;
            }
            UNLOCK();
          } while (!bVar9);
          SVar8 = dwSize;
          if ((longlong)dwSize < 1) {
            SVar8 = -dwSize;
          }
          lVar6 = 0x80;
          if ((longlong)dwSize < 1) {
            lVar6 = 0x88;
          }
          LOCK();
          plVar4 = (longlong *)((longlong)&(param_4->segments).allocated + lVar6);
          *plVar4 = *plVar4 + SVar8;
          UNLOCK();
        }
        pvVar7 = (*pVirtualAlloc)(lpAddress,dwSize,0x80000,4);
        if (pvVar7 != lpAddress) {
          return false;
        }
        if (lpAddress != (LPVOID)0x0) {
          VirtualUnlock(lpAddress,dwSize);
          return true;
        }
      }
      else {
        mi_stat_update(pmVar2,-dwSize);
      }
    }
  }
  return true;
}

// mi_out_buf @ 141d99980

void __cdecl mi_out_buf(char *param_1,void *param_2)

{
  size_t sVar1;
  char *pcVar2;
  ulong64 uVar3;
  
  uVar3 = out_len;
  if (((param_1 != (char *)0x0) && (out_len < 0x8000)) &&
     (sVar1 = strlen(param_1), uVar3 = out_len, sVar1 != 0)) {
    LOCK();
    UNLOCK();
    uVar3 = out_len + sVar1;
    if (out_len < 0x8000) {
      uVar3 = 0x7fff - out_len;
      if (out_len + sVar1 < 0x8000) {
        uVar3 = sVar1;
      }
      pcVar2 = out_buf + out_len;
      out_len = out_len + sVar1;
      _mi_memcpy(pcVar2,param_1,uVar3);
      uVar3 = out_len;
    }
  }
  out_len = uVar3;
  return;
}

// mi_out_buf_stderr @ 141d999f0

void __cdecl mi_out_buf_stderr(char *param_1,void *param_2)

{
  size_t sVar1;
  char *pcVar2;
  ulong64 uVar3;
  
  if (!os_preloading) {
    _cputs(param_1);
  }
  uVar3 = out_len;
  if ((param_1 != (char *)0x0) && (out_len < 0x8000)) {
    sVar1 = strlen(param_1);
    uVar3 = out_len;
    if (sVar1 != 0) {
      LOCK();
      UNLOCK();
      uVar3 = out_len + sVar1;
      if (out_len < 0x8000) {
        uVar3 = 0x7fff - out_len;
        if (out_len + sVar1 < 0x8000) {
          uVar3 = sVar1;
        }
        pcVar2 = out_buf + out_len;
        out_len = out_len + sVar1;
        _mi_memcpy(pcVar2,param_1,uVar3);
        return;
      }
    }
  }
  out_len = uVar3;
  return;
}

// mi_out_stderr @ 141d99a80

void __cdecl mi_out_stderr(char *param_1,void *param_2)

{
  if (!os_preloading) {
                    /* WARNING: Could not recover jumptable at 0x000141d99a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _cputs(param_1);
    return;
  }
  return;
}

// mi_page_extend_free @ 141d99aa0

void __cdecl mi_page_extend_free(mi_heap_s *param_1,mi_page_s *param_2,mi_tld_s *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2->free == (mi_block_s *)0x0) {
    if (param_2->capacity < param_2->reserved) {
      uVar3 = (ulonglong)param_2->xblock_size;
      if (0x7ffffff < param_2->xblock_size) {
        uVar3 = (ulonglong)param_2->slice_count << 0x10;
      }
      uVar2 = (ulonglong)param_2->reserved - (ulonglong)param_2->capacity;
      if (uVar3 < 0x1000) {
        uVar1 = 0x1000 / (uVar3 & 0xffffffff);
        if ((int)uVar1 == 0) {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
      if ((uVar1 < uVar2) && (uVar2 = uVar1, uVar1 == 0)) {
        uVar2 = 1;
      }
      mi_page_free_list_extend(param_2,uVar3,uVar2,&param_3->stats);
      param_2->capacity = param_2->capacity + (short)uVar2;
      if (param_2->is_zero_init == '\0') {
        param_2->is_zero = '\0';
      }
    }
  }
  return;
}

// mi_page_free_list_extend @ 141d99b50

void __cdecl
mi_page_free_list_extend(mi_page_s *param_1,ulong64 param_2,ulong64 param_3,mi_stats_s *param_4)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  mi_block_s *pmVar3;
  longlong lVar4;
  mi_block_s *pmVar5;
  
  lVar4 = ((longlong)((longlong)param_1 + (-0x80 - ((ulonglong)param_1 & 0xffffffffff800000))) /
          0x50) * 0x10000 + ((ulonglong)param_1 & 0xffffffffff800000);
  pmVar3 = (mi_block_s *)(((param_3 - 1) + (ulonglong)param_1->capacity) * param_2 + lVar4);
  pmVar5 = (mi_block_s *)(param_1->capacity * param_2 + lVar4);
  pmVar2 = pmVar5;
  while (pmVar2 <= pmVar3) {
    pmVar1 = (mi_block_s *)((longlong)&pmVar2->next + param_2);
    pmVar2->next = (ulong64)pmVar1;
    pmVar2 = pmVar1;
  }
  pmVar3->next = (ulong64)param_1->free;
  param_1->free = pmVar5;
  return;
}

// mi_page_fresh_alloc @ 141d99bf0

mi_page_s * __cdecl mi_page_fresh_alloc(mi_heap_s *param_1,mi_page_queue_s *param_2,ulong64 param_3)

{
  mi_segments_tld_s *pmVar1;
  mi_os_tld_s *pmVar2;
  mi_stat_count_s *pmVar3;
  long64 *plVar4;
  mi_tld_s *pmVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  mi_page_s *pmVar9;
  mi_segment_s *pmVar10;
  longlong lVar11;
  bool bVar12;
  mi_page_s *local_res8;
  
  pmVar2 = &param_1->tld->os;
  pmVar1 = &param_1->tld->segments;
  if (param_3 < 0x4001) {
    pmVar9 = mi_segments_page_alloc(param_1,MI_PAGE_SMALL,param_3,param_3,pmVar1,pmVar2);
  }
  else if (param_3 < 0x20001) {
    pmVar9 = mi_segments_page_alloc(param_1,MI_PAGE_MEDIUM,0x80000,param_3,pmVar1,pmVar2);
  }
  else if (param_3 < 0x400001) {
    pmVar9 = mi_segments_page_alloc(param_1,MI_PAGE_LARGE,param_3,param_3,pmVar1,pmVar2);
  }
  else {
    local_res8 = (mi_page_s *)0x0;
    pmVar10 = mi_segment_init((mi_segment_s *)0x0,param_3,pmVar1,pmVar2,&local_res8);
    if ((pmVar10 == (mi_segment_s *)0x0) || (local_res8 == (mi_page_s *)0x0)) {
      pmVar9 = (mi_page_s *)0x0;
    }
    else {
      pmVar10->thread_id = 0;
      pmVar9 = local_res8;
    }
  }
  if (pmVar9 == (mi_page_s *)0x0) {
    pmVar9 = (mi_page_s *)0x0;
  }
  else {
    pmVar5 = param_1->tld;
    pmVar9->xheap = (ulong64)param_1;
    uVar8 = 0x8000000;
    if (param_3 < 0x8000000) {
      uVar8 = (uint)param_3;
    }
    pmVar9->xblock_size = uVar8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_3;
    pmVar9->reserved = SUB162((ZEXT416(pmVar9->slice_count) << 0x10) / auVar7,0);
    pmVar9->field_0xf = pmVar9->field_0xf ^ (pmVar9->is_zero_init ^ pmVar9->is_zero) & 1;
    mi_page_extend_free(param_1,pmVar9,pmVar5);
    pmVar5 = param_1->tld;
    pmVar3 = &(pmVar5->stats).pages;
    if ((pmVar3 < &_mi_stats_main) ||
       ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar3)) {
      lVar11 = (pmVar5->stats).pages.current + 1;
      (pmVar5->stats).pages.current = lVar11;
      if ((pmVar5->stats).pages.peak < lVar11) {
        (pmVar5->stats).pages.peak = lVar11;
      }
      pmVar3->allocated = pmVar3->allocated + 1;
    }
    else {
      LOCK();
      plVar4 = &(pmVar5->stats).pages.current;
      lVar11 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      do {
        lVar6 = (pmVar5->stats).pages.peak;
        if (lVar11 + 1 <= lVar6) break;
        plVar4 = &(pmVar5->stats).pages.peak;
        LOCK();
        bVar12 = lVar6 == *plVar4;
        if (bVar12) {
          *plVar4 = lVar11 + 1;
        }
        UNLOCK();
      } while (!bVar12);
      LOCK();
      pmVar3->allocated = pmVar3->allocated + 1;
      UNLOCK();
    }
    if (param_2 != (mi_page_queue_s *)0x0) {
      mi_page_queue_push(param_1,param_2,pmVar9);
    }
  }
  return pmVar9;
}

// mi_page_queue @ 141d99dc0

mi_page_queue_s * __cdecl mi_page_queue(mi_heap_s *param_1,ulong64 param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 + 7 >> 3;
  if (uVar3 < 2) {
    return param_1->pages + 1;
  }
  if (uVar3 < 9) {
    return param_1->pages + ((char)uVar3 + 1U & 0xfe);
  }
  if (0x4000 < uVar3) {
    return param_1->pages + 0x49;
  }
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    cVar2 = (char)lVar1;
  }
  return param_1->pages + (byte)((((byte)(uVar3 >> (cVar2 - 2U & 0x3f)) & 3) - 3) + cVar2 * '\x04');
}

// mi_page_queue_enqueue_from @ 141d99e60

void __cdecl
mi_page_queue_enqueue_from(mi_page_queue_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3)

{
  mi_heap_s *pmVar1;
  
  pmVar1 = (mi_heap_s *)param_3->xheap;
  if (param_3->prev != (mi_page_s *)0x0) {
    param_3->prev->next = param_3->next;
  }
  if (param_3->next != (mi_page_s *)0x0) {
    param_3->next->prev = param_3->prev;
  }
  if (param_3 == param_2->last) {
    param_2->last = param_3->prev;
  }
  if (param_3 == param_2->first) {
    param_2->first = param_3->next;
    mi_heap_queue_first_update(pmVar1,param_2);
  }
  param_3->prev = param_1->last;
  param_3->next = (mi_page_s *)0x0;
  if (param_1->last == (mi_page_s *)0x0) {
    param_1->first = param_3;
    param_1->last = param_3;
    mi_heap_queue_first_update(pmVar1,param_1);
  }
  else {
    param_1->last->next = param_3;
    param_1->last = param_3;
  }
  (param_3->flags).full_aligned =
       param_1->block_size == 0x20010 | (param_3->flags).full_aligned & 0xfe;
  return;
}

// mi_page_queue_find_free_ex @ 141d99f40

mi_page_s * __cdecl
mi_page_queue_find_free_ex(mi_heap_s *param_1,mi_page_queue_s *param_2,bool param_3)

{
  mi_block_s *pmVar1;
  mi_block_s *pmVar2;
  mi_page_s *pmVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  mi_page_s *pmVar6;
  uint uVar7;
  mi_block_s *pmVar8;
  bool bVar9;
  
  pmVar6 = param_2->first;
  do {
    pmVar3 = pmVar6;
    if (pmVar3 == (mi_page_s *)0x0) {
      _mi_heap_collect_retired(param_1,false);
      pmVar6 = mi_page_fresh_alloc(param_1,param_2,param_2->block_size);
      if ((pmVar6 == (mi_page_s *)0x0) && (pmVar6 = (mi_page_s *)0x0, param_3)) {
        pmVar6 = mi_page_queue_find_free_ex(param_1,param_2,false);
      }
      return pmVar6;
    }
    pmVar6 = pmVar3->next;
    uVar4 = pmVar3->xthread_free;
    if ((pmVar3->xthread_free & 0xfffffffffffffffc) != 0) {
      do {
        pmVar8 = (mi_block_s *)(uVar4 & 0xfffffffffffffffc);
        LOCK();
        uVar5 = pmVar3->xthread_free;
        bVar9 = uVar4 == uVar5;
        if (bVar9) {
          pmVar3->xthread_free = (ulonglong)((uint)uVar4 & 3);
          uVar5 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar5;
      } while (!bVar9);
      if (pmVar8 != (mi_block_s *)0x0) {
        uVar7 = 1;
        pmVar1 = pmVar8;
        for (pmVar2 = (mi_block_s *)pmVar8->next; pmVar2 != (mi_block_s *)0x0;
            pmVar2 = (mi_block_s *)pmVar2->next) {
          if (pmVar3->capacity < uVar7) goto LAB_141d99fd7;
          uVar7 = uVar7 + 1;
          pmVar1 = pmVar2;
        }
        if (pmVar3->capacity < uVar7) {
LAB_141d99fd7:
          _mi_error_message(0xe,"corrupted thread-free list\n");
        }
        else {
          pmVar1->next = (ulong64)pmVar3->local_free;
          pmVar3->used = pmVar3->used - uVar7;
          pmVar3->local_free = pmVar8;
        }
      }
    }
    if (pmVar3->local_free != (mi_block_s *)0x0) {
      if (pmVar3->free != (mi_block_s *)0x0) goto LAB_141d9a130;
      pmVar3->is_zero = '\0';
      pmVar3->free = pmVar3->local_free;
      pmVar3->local_free = (mi_block_s *)0x0;
    }
    if (pmVar3->free != (mi_block_s *)0x0) {
LAB_141d9a130:
      pmVar3->retire_expire = '\0';
      return pmVar3;
    }
    if (pmVar3->capacity < pmVar3->reserved) {
      mi_page_extend_free(param_1,pmVar3,param_1->tld);
      goto LAB_141d9a130;
    }
    if (((pmVar3->flags).full_aligned & 1) == 0) {
      mi_page_queue_enqueue_from((mi_page_queue_s *)(pmVar3->xheap + 0xb00),param_2,pmVar3);
      uVar4 = pmVar3->xthread_free;
      if ((uVar4 & 0xfffffffffffffffc) != 0) {
        do {
          pmVar8 = (mi_block_s *)(uVar4 & 0xfffffffffffffffc);
          LOCK();
          uVar5 = pmVar3->xthread_free;
          bVar9 = uVar4 == uVar5;
          if (bVar9) {
            pmVar3->xthread_free = (ulonglong)((uint)uVar4 & 3);
            uVar5 = uVar4;
          }
          UNLOCK();
          uVar4 = uVar5;
        } while (!bVar9);
        if (pmVar8 != (mi_block_s *)0x0) {
          uVar7 = 1;
          pmVar1 = pmVar8;
          for (pmVar2 = (mi_block_s *)pmVar8->next; pmVar2 != (mi_block_s *)0x0;
              pmVar2 = (mi_block_s *)pmVar2->next) {
            if (pmVar3->capacity < uVar7) goto LAB_141d9a0a7;
            uVar7 = uVar7 + 1;
            pmVar1 = pmVar2;
          }
          if (pmVar3->capacity < uVar7) {
LAB_141d9a0a7:
            _mi_error_message(0xe,"corrupted thread-free list\n");
          }
          else {
            pmVar1->next = (ulong64)pmVar3->local_free;
            pmVar3->used = pmVar3->used - uVar7;
            pmVar3->local_free = pmVar8;
          }
        }
      }
      if ((pmVar3->local_free != (mi_block_s *)0x0) && (pmVar3->free == (mi_block_s *)0x0)) {
        pmVar3->is_zero = '\0';
        pmVar3->free = pmVar3->local_free;
        pmVar3->local_free = (mi_block_s *)0x0;
      }
    }
  } while( true );
}

// mi_page_queue_push @ 141d9a160

void __cdecl mi_page_queue_push(mi_heap_s *param_1,mi_page_queue_s *param_2,mi_page_s *param_3)

{
  (param_3->flags).full_aligned =
       param_2->block_size == 0x20010 | (param_3->flags).full_aligned & 0xfe;
  param_3->next = param_2->first;
  param_3->prev = (mi_page_s *)0x0;
  if (param_2->first == (mi_page_s *)0x0) {
    param_2->last = param_3;
  }
  else {
    param_2->first->prev = param_3;
  }
  param_2->first = param_3;
  mi_heap_queue_first_update(param_1,param_2);
  param_1->page_count = param_1->page_count + 1;
  return;
}

// mi_page_queue_remove @ 141d9a1c0

void __cdecl mi_page_queue_remove(mi_page_queue_s *param_1,mi_page_s *param_2)

{
  ulong64 *puVar1;
  mi_heap_s *pmVar2;
  
  pmVar2 = (mi_heap_s *)param_2->xheap;
  if (param_2->prev != (mi_page_s *)0x0) {
    param_2->prev->next = param_2->next;
  }
  if (param_2->next != (mi_page_s *)0x0) {
    param_2->next->prev = param_2->prev;
  }
  if (param_2 == param_1->last) {
    param_1->last = param_2->prev;
  }
  if (param_2 == param_1->first) {
    param_1->first = param_2->next;
    mi_heap_queue_first_update(pmVar2,param_1);
  }
  puVar1 = &pmVar2->page_count;
  *puVar1 = *puVar1 - 1;
  (param_2->flags).full_aligned = (param_2->flags).full_aligned & 0xfe;
  param_2->next = (mi_page_s *)0x0;
  param_2->prev = (mi_page_s *)0x0;
  return;
}

// mi_posix_memalign @ 141d9a260

int __cdecl mi_posix_memalign(void **param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  if (((param_1 == (void **)0x0) || ((param_2 & 7) != 0)) || ((param_2 & param_2 - 1) != 0)) {
    return 0x16;
  }
  if ((param_2 == 8) || ((param_2 == 0x10 && (8 < param_3)))) {
    pvVar1 = mi_malloc(param_3);
  }
  else {
    pvVar1 = mi_malloc_aligned(param_3,param_2);
  }
  if ((pvVar1 == (void *)0x0) && (param_3 != 0)) {
    return 0xc;
  }
  *param_1 = pvVar1;
  return 0;
}

// mi_printf_amount @ 141d9a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
mi_printf_amount(long64 param_1,long64 param_2,_func___cdecl_void_char_ptr_void_ptr *param_3,
                void *param_4,char *param_5)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined *local_68;
  char *local_60;
  undefined *local_58;
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar6 = &s_b;
  if (param_2 < 1) {
    puVar6 = &s__;
  }
  uVar2 = 0x400;
  if (param_2 == 0) {
    uVar2 = 1000;
  }
  if (0 < param_2) {
    param_1 = param_1 * param_2;
  }
  lVar4 = -param_1;
  if (-param_1 < 0) {
    lVar4 = param_1;
  }
  if (lVar4 < (longlong)uVar2) {
    local_68 = puVar6;
    snprintf(local_48,0x20,"%d %s ");
  }
  else {
    uVar5 = uVar2 * uVar2;
    uVar8 = uVar5;
    if (lVar4 < (longlong)uVar5) {
      uVar8 = uVar2;
    }
    pcVar3 = "m";
    if (lVar4 < (longlong)uVar5) {
      pcVar3 = "k";
    }
    uVar5 = uVar8 * uVar2;
    local_60 = "g";
    if (lVar4 < (longlong)(uVar8 * uVar2)) {
      uVar5 = uVar8;
      local_60 = pcVar3;
    }
    lVar4 = param_1 / (longlong)(uVar5 / 10);
    iVar7 = (int)lVar4 + (int)(lVar4 / 10) * -10;
    iVar1 = -iVar7;
    if (iVar1 < 0) {
      iVar1 = iVar7;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar1);
    local_58 = puVar6;
    snprintf(local_48,0x20,"%ld.%ld %s%s");
  }
  if (param_5 == (char *)0x0) {
    param_5 = "%11s";
  }
  _mi_fprintf(param_3,param_4,param_5);
  return;
}

// mi_process_done @ 141d9a460

void __cdecl mi_process_done(void)

{
  mi_heap_s *pmVar1;
  mi_stats_s *_Dst;
  
  if (!_mi_process_is_initialized) {
    return;
  }
  if (process_done) {
    return;
  }
  process_done = true;
  FlsSetValue(mi_fls_key,(PVOID)0x0);
  FlsFree(mi_fls_key);
  if (options[1].init == UNINIT) {
    mi_option_init(options + 1);
  }
  if (options[1].value == 0) {
    if (options[2].init == UNINIT) {
      mi_option_init(options + 2);
    }
    if (options[2].value == 0) goto LAB_141d9a528;
  }
  pmVar1 = mi_heap_get_default();
  _Dst = &pmVar1->tld->stats;
  if (_Dst != &_mi_stats_main) {
    mi_stats_add(&_mi_stats_main,_Dst);
    memset(_Dst,0,0x240);
  }
  _mi_stats_print(&_mi_stats_main,(_func___cdecl_void_char_ptr_void_ptr *)0x0,(void *)0x0);
LAB_141d9a528:
  _mi_verbose_message("process done: 0x%zx\n");
  os_preloading = true;
  return;
}

// mi_process_info @ 141d9a550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
mi_process_info(ulong64 *param_1,ulong64 *param_2,ulong64 *param_3,ulong64 *param_4,ulong64 *param_5
               ,ulong64 *param_6,ulong64 *param_7,ulong64 *param_8)

{
  long64 lVar1;
  long64 lVar2;
  HANDLE pvVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  undefined1 auStackY_118 [32];
  _FILETIME local_e8;
  _FILETIME local_e0;
  ulong64 *local_d8;
  ulong64 *local_d0;
  ulonglong *local_c8;
  _FILETIME local_c0;
  _FILETIME local_b8 [2];
  undefined1 local_a8 [4];
  uint local_a4;
  ulong64 local_a0;
  ulong64 local_98;
  ulong64 local_70;
  ulong64 local_68;
  ulonglong local_58;
  
  lVar1 = mi_process_start;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_3;
  lVar2 = _mi_clock_now();
  uVar7 = (lVar2 - lVar1) - mi_clock_diff;
  pvVar3 = GetCurrentProcess();
  GetProcessTimes(pvVar3,local_b8,&local_c0,&local_e0,&local_e8);
  uVar6 = (ulonglong)local_e8 / 10000;
  pvVar3 = GetCurrentProcess();
  K32GetProcessMemoryInfo(pvVar3,local_a8,0x48);
  uVar4 = 0;
  if (local_d8 != (ulong64 *)0x0) {
    uVar5 = uVar4;
    if ((-1 < (longlong)uVar7) && (uVar5 = 0x7fffffffffffffff, (longlong)uVar7 < 0x7fffffffffffffff)
       ) {
      uVar5 = uVar7;
    }
    *local_d8 = uVar5;
  }
  if (local_d0 != (ulong64 *)0x0) {
    if ((-1 < (longlong)uVar6) && (uVar4 = 0x7fffffffffffffff, uVar6 < 0x7fffffffffffffff)) {
      uVar4 = uVar6;
    }
    *local_d0 = uVar4;
  }
  if (local_c8 != (ulonglong *)0x0) {
    uVar6 = 0x7fffffffffffffff;
    if ((ulonglong)local_e0 / 10000 < 0x7fffffffffffffff) {
      uVar6 = (ulonglong)local_e0 / 10000;
    }
    *local_c8 = uVar6;
  }
  if (param_4 != (ulong64 *)0x0) {
    *param_4 = local_98;
  }
  if (param_5 != (ulong64 *)0x0) {
    *param_5 = local_a0;
  }
  if (param_6 != (ulong64 *)0x0) {
    *param_6 = local_70;
  }
  if (param_7 != (ulong64 *)0x0) {
    *param_7 = local_68;
  }
  if (param_8 != (ulong64 *)0x0) {
    *param_8 = (ulonglong)local_a4;
  }
  return;
}

// mi_process_init @ 141d9a730

/* WARNING: Removing unreachable block (ram,0x000141d9a7bd) */

void __cdecl mi_process_init(void)

{
  longlong lVar1;
  bool bVar2;
  DWORD dwFlsIndex;
  int iVar3;
  HMODULE pHVar4;
  _func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *p_Var5;
  mi_heap_s *pmVar6;
  long64 lVar7;
  long64 lVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  void *pvVar12;
  int *piVar13;
  mi_stats_s *_Dst;
  bool local_res8 [8];
  _SYSTEM_INFO local_38;
  
  if (_mi_process_is_initialized) {
    return;
  }
  _mi_process_is_initialized = true;
  if (!tls_initialized) {
    tls_initialized = true;
    dwFlsIndex = FlsAlloc(mi_fls_done);
    mi_fls_key = dwFlsIndex;
    *(mi_heap_s **)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18) =
         &_mi_heap_main;
    FlsSetValue(dwFlsIndex,&_mi_heap_main);
  }
  _mi_verbose_message("process init: 0x%zx\n");
  lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
  _mi_cpu_has_fsrm = (bool)((byte)(*(uint *)(lVar1 + 8) >> 4) & 1);
  GetSystemInfo(&local_38);
  if (local_38.dwPageSize != 0) {
    os_page_size = (ulonglong)local_38.dwPageSize;
  }
  if (local_38.dwAllocationGranularity != 0) {
    os_alloc_granularity = (ulonglong)local_38.dwAllocationGranularity;
  }
  p_Var5 = pNtAllocateVirtualMemoryEx;
  if (pVirtualAlloc == (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)0x0) {
    pVirtualAlloc = VirtualAlloc_exref;
    pVirtualFree = VirtualFree_exref;
    pHVar4 = LoadLibraryW(L"kernelbase.dll");
    p_Var5 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
    if (pHVar4 != (HMODULE)0x0) {
      p_Var5 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
               GetProcAddress(pHVar4,"VirtualAlloc2FromApp");
      if (p_Var5 == (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong
                     *)0x0) {
        p_Var5 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
                 GetProcAddress(pHVar4,"VirtualAlloc2");
      }
      FreeLibrary(pHVar4);
    }
    pVirtualAlloc2 =
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)p_Var5;
    pHVar4 = LoadLibraryW(L"ntdll.dll");
    p_Var5 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
    if (pHVar4 != (HMODULE)0x0) {
      p_Var5 = (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
               GetProcAddress(pHVar4,"NtAllocateVirtualMemoryEx");
      FreeLibrary(pHVar4);
    }
  }
  pNtAllocateVirtualMemoryEx = p_Var5;
  pHVar4 = LoadLibraryW(L"kernel32.dll");
  if (pHVar4 != (HMODULE)0x0) {
    pGetCurrentProcessorNumberEx =
         (_func___cdecl_void__PROCESSOR_NUMBER_ptr *)
         GetProcAddress(pHVar4,"GetCurrentProcessorNumberEx");
    pGetNumaProcessorNodeEx =
         (_func___cdecl_int__PROCESSOR_NUMBER_ptr_ushort_ptr *)
         GetProcAddress(pHVar4,"GetNumaProcessorNodeEx");
    pGetNumaNodeProcessorMaskEx =
         (_func___cdecl_int_ushort__GROUP_AFFINITY_ptr *)
         GetProcAddress(pHVar4,"GetNumaNodeProcessorMaskEx");
    FreeLibrary(pHVar4);
  }
  if (options[6].init == UNINIT) {
    mi_option_init(options + 6);
  }
  if (options[6].value == 0) {
    if (options[7].init == UNINIT) {
      mi_option_init(options + 7);
    }
    if (options[7].value == 0) goto LAB_141d9a953;
  }
  mi_win_enable_large_os_pages();
LAB_141d9a953:
  mi_heap_main_init();
  _mi_verbose_message("secure level: %d\n");
  mi_thread_init();
  pmVar6 = mi_heap_get_default();
  _Dst = &pmVar6->tld->stats;
  if (_Dst != &_mi_stats_main) {
    memset(_Dst,0,0x240);
  }
  memset(&_mi_stats_main,0,0x240);
  if (mi_process_start == 0) {
    if ((double)mi_clock_diff == 0.0) {
      lVar7 = _mi_clock_now();
      lVar8 = _mi_clock_now();
      mi_clock_diff = lVar8 - lVar7;
    }
    mi_process_start = _mi_clock_now();
  }
  if (options[7].init == UNINIT) {
    mi_option_init(options + 7);
  }
  if (options[7].value != 0) {
    if (options[7].init == UNINIT) {
      mi_option_init(options + 7);
    }
    mi_reserve_huge_os_pages_interleave
              ((longlong)options[7].value,0,(longlong)options[7].value * 500);
  }
  if (options[8].init == UNINIT) {
    mi_option_init(options + 8);
  }
  if (options[8].value != 0) {
    if (options[8].init == UNINIT) {
      mi_option_init(options + 8);
    }
    if ((0 < options[8].value) &&
       (uVar9 = _mi_os_good_alloc_size((longlong)options[8].value << 10), uVar9 != 0)) {
      uVar10 = _mi_os_good_alloc_size(uVar9);
      if ((os_page_size & os_page_size - 1) == 0) {
        uVar11 = ~(os_page_size - 1) & os_page_size + 0x7fffff;
      }
      else {
        uVar11 = ((os_page_size + 0x7fffff) / os_page_size) * os_page_size;
      }
      local_res8[0] = false;
      pvVar12 = mi_os_mem_alloc_aligned(uVar10,uVar11,true,true,local_res8,&_mi_stats_main);
      if (pvVar12 != (void *)0x0) {
        bVar2 = mi_manage_os_memory(pvVar12,uVar9,true,local_res8[0],true,-1);
        if (bVar2) {
          _mi_verbose_message("reserved %zu kb memory%s\n");
        }
        else {
          uVar9 = _mi_os_good_alloc_size(uVar9);
          if (uVar9 != 0) {
            iVar3 = (*pVirtualFree)(pvVar12,0,0x8000);
            mi_stat_update(&_mi_stats_main.committed,-uVar9);
            mi_stat_update(&_mi_stats_main.reserved,-uVar9);
            if (iVar3 == 0) {
              piVar13 = _errno();
              strerror(*piVar13);
              _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
            }
          }
          _mi_verbose_message("failed to reserve %zu k memory\n");
        }
      }
    }
  }
  return;
}

// mi_pvalloc @ 141d9ac20

void * __cdecl mi_pvalloc(ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  if (~os_page_size <= param_1) {
    return (void *)0x0;
  }
  uVar1 = os_page_size - 1;
  uVar2 = uVar1 + param_1;
  if ((os_page_size & uVar1) == 0) {
    uVar4 = ~uVar1 & uVar2;
  }
  else {
    uVar4 = uVar2 - uVar2 % os_page_size;
  }
  pvVar3 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      uVar4,os_page_size,0,false);
  return pvVar3;
}

// mi_realloc @ 141d9aca0

void * __cdecl mi_realloc(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,false);
  return pvVar1;
}

// mi_realloc_aligned @ 141d9ace0

void * __cdecl mi_realloc_aligned(void *param_1,ulong64 param_2,ulong64 param_3)

{
  mi_heap_s *pmVar1;
  void *pvVar2;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_3 < 9) {
    pvVar2 = _mi_heap_realloc_zero(pmVar1,param_1,param_2,false);
    return pvVar2;
  }
  pvVar2 = mi_heap_realloc_zero_aligned_at
                     (pmVar1,param_1,param_2,param_3,(ulonglong)param_1 % param_3,false);
  return pvVar2;
}

// mi_realloc_aligned_at @ 141d9ad50

void * __cdecl mi_realloc_aligned_at(void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_realloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,param_4,false);
  return pvVar1;
}

// mi_reallocarray @ 141d9ada0

void * __cdecl mi_reallocarray(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  int *piVar3;
  ulong64 uVar4;
  
  uVar4 = param_3;
  if (((param_2 == 1) ||
      (((uVar4 = param_2 * param_3, param_3 < 0x100000000 && (param_2 < 0x100000000)) ||
       (param_3 == 0)))) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    pvVar2 = _mi_heap_realloc_zero
                       (*(mi_heap_s **)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18
                         ),param_1,uVar4,false);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  else {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
  }
  piVar3 = _errno();
  *piVar3 = 0xc;
  return (void *)0x0;
}

// mi_reallocf @ 141d9ae50

void * __cdecl mi_reallocf(void *param_1,ulong64 param_2)

{
  uint *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  mi_page_s *pmVar4;
  mi_segment_s *pmVar5;
  
  pvVar2 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,false);
  if (((pvVar2 == (void *)0x0) && (param_1 != (void *)0x0)) &&
     (pmVar5 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000),
     pmVar5 != (mi_segment_s *)0x0)) {
    uVar3 = (ulonglong)((longlong)param_1 - (longlong)pmVar5) >> 0x10;
    if ((Self == (void *)pmVar5->thread_id) &&
       (pmVar4 = (mi_page_s *)
                 ((longlong)pmVar5 +
                 ((uVar3 * 0x50 + 0x80) - (ulonglong)pmVar5->slices[uVar3].slice_offset)),
       (pmVar4->flags).full_aligned == '\0')) {
      *(mi_block_s **)param_1 = pmVar4->local_free;
      puVar1 = &pmVar4->used;
      *puVar1 = *puVar1 - 1;
      pmVar4->local_free = param_1;
      if (*puVar1 == 0) {
        _mi_page_retire(pmVar4);
        return (void *)0x0;
      }
    }
    else {
      mi_free_generic(pmVar5,Self == (void *)pmVar5->thread_id,param_1);
    }
  }
  return pvVar2;
}

// mi_reallocn @ 141d9af30

void * __cdecl mi_reallocn(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_3;
  if (((param_2 != 1) &&
      (((uVar3 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,uVar3,false);
  return pvVar2;
}

// mi_realpath @ 141d9afd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * __cdecl mi_realpath(char *param_1,char *param_2)

{
  mi_heap_s *pmVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int *piVar4;
  CHAR *lpBuffer;
  undefined1 auStack_148 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  lpBuffer = local_128;
  if (param_2 != (char *)0x0) {
    lpBuffer = param_2;
  }
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  DVar2 = GetFullPathNameA(param_1,0x104,lpBuffer,(LPSTR *)0x0);
  if (DVar2 == 0) {
    pDVar3 = (DWORD *)_errno();
    DVar2 = GetLastError();
    *pDVar3 = DVar2;
    param_2 = (char *)0x0;
  }
  else if (DVar2 < 0x105) {
    if (param_2 == (char *)0x0) {
      param_2 = mi_heap_strndup(pmVar1,local_128,0x104);
    }
  }
  else {
    piVar4 = _errno();
    *piVar4 = 0x16;
    param_2 = (char *)0x0;
  }
  return param_2;
}

// mi_recalloc @ 141d9b0a0

void * __cdecl mi_recalloc(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_3;
  if (((param_2 != 1) &&
      (((uVar3 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,uVar3,true);
  return pvVar2;
}

// mi_recalloc_aligned @ 141d9b140

void * __cdecl mi_recalloc_aligned(void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  mi_heap_s *pmVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  ulong64 uVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  uVar4 = param_3;
  if (((param_2 != 1) &&
      (((uVar4 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  if (8 < param_4) {
    pvVar3 = mi_heap_realloc_zero_aligned_at
                       (pmVar1,param_1,uVar4,param_4,(ulonglong)param_1 % param_4,true);
    return pvVar3;
  }
  pvVar3 = _mi_heap_realloc_zero(pmVar1,param_1,uVar4,true);
  return pvVar3;
}

// mi_recalloc_aligned_at @ 141d9b210

void * __cdecl
mi_recalloc_aligned_at
          (void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong64 uVar3;
  
  uVar3 = param_3;
  if (((param_2 != 1) &&
      (((uVar3 = param_2 * param_3, 0xffffffff < param_3 || (0xffffffff < param_2)) &&
       (param_3 != 0)))) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    _mi_error_message(0x84,"allocation request is too large (%zu * %zu bytes)\n");
    return (void *)0x0;
  }
  pvVar2 = mi_heap_realloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,uVar3,param_4,param_5,true);
  return pvVar2;
}

// mi_register_deferred_free @ 141d9b2c0

void __cdecl
mi_register_deferred_free(_func___cdecl_void_bool_ulong64_void_ptr *param_1,void *param_2)

{
  deferred_free = param_1;
  deferred_arg = param_2;
  return;
}

// mi_register_error @ 141d9b2e0

void __cdecl mi_register_error(_func___cdecl_void_int_void_ptr *param_1,void *param_2)

{
  mi_error_handler = param_1;
  mi_error_arg = param_2;
  return;
}

// mi_register_output @ 141d9b300

void __cdecl mi_register_output(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2)

{
  char *pcVar1;
  ulong64 uVar2;
  
  mi_out_arg = param_2;
  mi_out_default = param_1;
  if (param_1 == (_func___cdecl_void_char_ptr_void_ptr *)0x0) {
    mi_out_default = mi_out_stderr;
  }
  if (param_1 != (_func___cdecl_void_char_ptr_void_ptr *)0x0) {
    LOCK();
    uVar2 = out_len + 0x8000;
    UNLOCK();
    if (0x8000 < out_len) {
      out_len = 0x8000;
    }
    pcVar1 = out_buf + out_len;
    out_len = uVar2;
    *pcVar1 = '\0';
                    /* WARNING: Could not recover jumptable at 0x000141d9b346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1)(out_buf,param_2);
    return;
  }
  return;
}

// mi_reserve_huge_os_pages @ 141d9b350

int __cdecl mi_reserve_huge_os_pages(ulong64 param_1,double param_2,ulong64 *param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  
  _mi_warning_message(
                     "mi_reserve_huge_os_pages is deprecated: use mi_reserve_huge_os_pages_interleave/at instead\n"
                     );
  if (param_3 != (ulong64 *)0x0) {
    *param_3 = 0;
  }
  dVar1 = param_2 * __real_408f400000000000;
  lVar3 = 0;
  if ((__real_43e0000000000000 <= dVar1) &&
     (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  iVar2 = mi_reserve_huge_os_pages_interleave(param_1,0,(longlong)dVar1 + lVar3);
  if ((iVar2 == 0) && (param_3 != (ulong64 *)0x0)) {
    *param_3 = param_1;
  }
  return iVar2;
}

// mi_reserve_huge_os_pages_at @ 141d9b3f0

int __cdecl mi_reserve_huge_os_pages_at(ulong64 param_1,int param_2,ulong64 param_3)

{
  bool bVar1;
  int iVar2;
  ulong64 uVar3;
  void *pvVar4;
  int *piVar5;
  ulonglong uVar6;
  ulong64 local_res8;
  ulong64 local_res20;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = -1;
  if (-2 < param_2) {
    iVar2 = param_2;
  }
  if (-1 < iVar2) {
    uVar3 = _mi_os_numa_node_count();
    iVar2 = (int)((ulonglong)(longlong)iVar2 % uVar3);
  }
  local_res20 = 0;
  local_res8 = 0;
  pvVar4 = _mi_os_alloc_huge_os_pages(param_1,iVar2,param_3,&local_res8,&local_res20);
  if ((pvVar4 == (void *)0x0) || (local_res8 == 0)) {
    _mi_warning_message("failed to reserve %zu gb huge pages\n");
  }
  else {
    _mi_verbose_message("numa node %i: reserved %zu gb huge pages (of the %zu gb requested)\n");
    uVar3 = local_res20;
    bVar1 = mi_manage_os_memory(pvVar4,local_res20,true,true,true,iVar2);
    if (bVar1) {
      return 0;
    }
    if (0x3fffffff < uVar3) {
      uVar6 = uVar3 >> 0x1e;
      do {
        iVar2 = (*pVirtualFree)(pvVar4,0,0x8000);
        mi_stat_update(&_mi_stats_main.committed,-0x40000000);
        mi_stat_update(&_mi_stats_main.reserved,-0x40000000);
        if (iVar2 == 0) {
          piVar5 = _errno();
          strerror(*piVar5);
          _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return 0xc;
}

// mi_reserve_huge_os_pages_interleave @ 141d9b570

int __cdecl mi_reserve_huge_os_pages_interleave(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  bool bVar1;
  int iVar2;
  ulong64 uVar3;
  void *pvVar4;
  int *piVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulong64 local_res8;
  ulong64 local_res20;
  
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_2 = _mi_os_numa_node_count(), param_2 == 0)) {
      param_2 = 1;
    }
    uVar10 = 0;
    uVar11 = uVar10;
    uVar6 = param_1;
    uVar8 = uVar10;
    if ((param_3 == 0) || (uVar11 = param_3 / param_2 + 0x32, param_2 != 0)) {
      do {
        if (uVar6 == 0) {
          return 0;
        }
        uVar9 = param_1 / param_2;
        if (uVar8 < param_1 % param_2) {
          uVar9 = param_1 / param_2 + 1;
        }
        iVar2 = (int)uVar8;
        if (uVar9 == 0) {
LAB_141d9b6c9:
          uVar7 = uVar6 - uVar9;
        }
        else {
          if (iVar2 < -1) {
            iVar2 = -1;
          }
          else if (-1 < iVar2) {
            uVar3 = _mi_os_numa_node_count();
            iVar2 = (int)((ulonglong)(longlong)iVar2 % uVar3);
          }
          local_res20 = 0;
          local_res8 = 0;
          pvVar4 = _mi_os_alloc_huge_os_pages(uVar9,iVar2,uVar11,&local_res8,&local_res20);
          if ((pvVar4 == (void *)0x0) || (local_res8 == 0)) {
            _mi_warning_message("failed to reserve %zu gb huge pages\n");
            return 0xc;
          }
          _mi_verbose_message("numa node %i: reserved %zu gb huge pages (of the %zu gb requested)\n"
                             );
          uVar3 = local_res20;
          bVar1 = mi_manage_os_memory(pvVar4,local_res20,true,true,true,iVar2);
          if (!bVar1) {
            if (uVar3 < 0x40000000) {
              return 0xc;
            }
            uVar11 = uVar3 >> 0x1e;
            do {
              iVar2 = (*pVirtualFree)(pvVar4,0,0x8000);
              mi_stat_update(&_mi_stats_main.committed,-0x40000000);
              mi_stat_update(&_mi_stats_main.reserved,-0x40000000);
              if (iVar2 == 0) {
                piVar5 = _errno();
                strerror(*piVar5);
                _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
              }
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            return 0xc;
          }
          uVar7 = uVar10;
          if (uVar9 <= uVar6) goto LAB_141d9b6c9;
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar7;
      } while (uVar8 < param_2);
    }
  }
  return 0;
}

// mi_reserve_os_memory @ 141d9b7a0

int __cdecl mi_reserve_os_memory(ulong64 param_1,bool param_2,bool param_3)

{
  bool bVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  void *pvVar5;
  bool local_res18 [16];
  
  uVar2 = _mi_os_good_alloc_size(param_1);
  if (uVar2 != 0) {
    uVar3 = _mi_os_good_alloc_size(uVar2);
    if ((os_page_size & os_page_size - 1) == 0) {
      uVar4 = ~(os_page_size - 1) & os_page_size + 0x7fffff;
    }
    else {
      uVar4 = ((os_page_size + 0x7fffff) / os_page_size) * os_page_size;
    }
    local_res18[0] = false;
    pvVar5 = mi_os_mem_alloc_aligned(uVar3,uVar4,param_2,param_3,local_res18,&_mi_stats_main);
    if (pvVar5 != (void *)0x0) {
      if ((local_res18[0] != false) || (param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      bVar1 = mi_manage_os_memory(pvVar5,uVar2,bVar1,local_res18[0],true,-1);
      if (bVar1) {
        _mi_verbose_message("reserved %zu kb memory%s\n");
        return 0;
      }
      uVar2 = _mi_os_good_alloc_size(uVar2);
      mi_os_mem_free(pvVar5,uVar2,param_2,&_mi_stats_main);
      _mi_verbose_message("failed to reserve %zu k memory\n");
    }
  }
  return 0xc;
}

// mi_rezalloc @ 141d9b8f0

void * __cdecl mi_rezalloc(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_realloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,true);
  return pvVar1;
}

// mi_rezalloc_aligned @ 141d9b930

void * __cdecl mi_rezalloc_aligned(void *param_1,ulong64 param_2,ulong64 param_3)

{
  mi_heap_s *pmVar1;
  void *pvVar2;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_3 < 9) {
    pvVar2 = _mi_heap_realloc_zero(pmVar1,param_1,param_2,true);
    return pvVar2;
  }
  pvVar2 = mi_heap_realloc_zero_aligned_at
                     (pmVar1,param_1,param_2,param_3,(ulonglong)param_1 % param_3,true);
  return pvVar2;
}

// mi_rezalloc_aligned_at @ 141d9b9a0

void * __cdecl mi_rezalloc_aligned_at(void *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_realloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,param_4,true);
  return pvVar1;
}

// mi_segment_abandon @ 141d9b9f0

void __cdecl mi_segment_abandon(mi_segment_s *param_1,mi_segments_tld_s *param_2)

{
  mi_stat_count_s *pmVar1;
  long64 *plVar2;
  mi_stats_s *pmVar3;
  longlong lVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulong64 uVar7;
  mi_page_s *pmVar8;
  bool bVar9;
  
  uVar7 = param_1->slice_entries;
  for (pmVar8 = param_1->slices; pmVar8 < param_1->slices + uVar7;
      pmVar8 = pmVar8 + pmVar8->slice_count) {
    if (pmVar8->xblock_size == 0) {
      mi_segment_span_remove_from_queue(pmVar8,param_2);
      pmVar8->xblock_size = 0;
    }
  }
  if (options[0xb].init == UNINIT) {
    mi_option_init(options + 0xb);
  }
  mi_segment_delayed_decommit(param_1,options[0xb].value != 0,param_2->stats);
  pmVar3 = param_2->stats;
  pmVar1 = &pmVar3->segments_abandoned;
  if ((pmVar1 < &_mi_stats_main) ||
     ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar1)) {
    lVar6 = (pmVar3->segments_abandoned).current + 1;
    (pmVar3->segments_abandoned).current = lVar6;
    if ((pmVar3->segments_abandoned).peak < lVar6) {
      (pmVar3->segments_abandoned).peak = lVar6;
    }
    pmVar1->allocated = pmVar1->allocated + 1;
  }
  else {
    LOCK();
    plVar2 = &(pmVar3->segments_abandoned).current;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    do {
      lVar4 = (pmVar3->segments_abandoned).peak;
      if (lVar6 + 1 <= lVar4) break;
      plVar2 = &(pmVar3->segments_abandoned).peak;
      LOCK();
      bVar9 = lVar4 == *plVar2;
      if (bVar9) {
        *plVar2 = lVar6 + 1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    pmVar1->allocated = pmVar1->allocated + 1;
    UNLOCK();
  }
  mi_segments_track_size((int)param_1->segment_slices * -0x10000,param_2);
  param_1->thread_id = 0;
  param_1->abandoned_next = (mi_segment_s *)0x0;
  param_1->abandoned_visits = 1;
  uVar7 = abandoned;
  do {
    param_1->abandoned_next = (mi_segment_s *)(uVar7 & 0xffffffffff800000);
    LOCK();
    bVar9 = uVar7 != abandoned;
    uVar5 = (ulonglong)((int)uVar7 + 1U & 0x7fffff) | (ulonglong)param_1;
    if (bVar9) {
      uVar7 = abandoned;
      uVar5 = abandoned;
    }
    abandoned = uVar5;
    UNLOCK();
  } while (bVar9);
  LOCK();
  abandoned_count = abandoned_count + 1;
  UNLOCK();
  return;
}

// mi_segment_cache_purge @ 141d9bb80

void __cdecl mi_segment_cache_purge(mi_os_tld_s *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar2 = _mi_clock_now();
  uVar6 = uVar2;
  if (uVar2 == 0) {
    uVar6 = 0x11;
  }
  uVar10 = 0;
  uVar6 = (uVar6 >> 0x1e ^ uVar6) * -0x40a7b892e31b1a47;
  uVar6 = (uVar6 >> 0x1b ^ uVar6) * -0x6b2fb644ecceee15;
  uVar5 = ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6) & 0x3ff;
  uVar6 = (ulonglong)uVar5;
  bVar1 = (byte)uVar5 & 0x3f;
  uVar9 = 1L << bVar1 | (ulonglong)(1 >> 0x40 - bVar1);
  uVar8 = uVar10;
  uVar11 = uVar10;
  do {
    if (0x3ff < uVar6) {
      uVar9 = 1;
      uVar6 = uVar10;
    }
    if ((cache[uVar6].expire != 0) && (cache[uVar6].expire <= (longlong)uVar2)) {
      uVar11 = uVar11 + 1;
      uVar7 = uVar6 >> 6;
      uVar3 = cache_available[uVar7];
      do {
        LOCK();
        uVar4 = cache_available[uVar7];
        bVar12 = uVar3 == uVar4;
        if (bVar12) {
          cache_available[uVar7] = uVar3 | uVar9;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar12);
      if ((uVar4 & uVar9) == 0) {
        if ((cache[uVar6].expire != 0) && (cache[uVar6].expire <= (longlong)uVar2)) {
          cache[uVar6].expire = 0;
          do {
          } while (abandoned_readers != 0);
          mi_commit_mask_decommit(&cache[uVar6].commit_mask,cache[uVar6].p,0x800000,param_1->stats);
        }
        LOCK();
        cache_available[uVar7] = cache_available[uVar7] & ~uVar9;
        UNLOCK();
      }
      if (4 < uVar11) {
        return;
      }
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar6 = uVar6 + 1;
    if (0xf < uVar8) {
      return;
    }
  } while( true );
}

// mi_segment_check_free @ 141d9bd20

bool __cdecl
mi_segment_check_free
          (mi_segment_s *param_1,ulong64 param_2,ulong64 param_3,mi_segments_tld_s *param_4)

{
  ulong64 uVar1;
  mi_block_s *pmVar2;
  mi_block_s *pmVar3;
  ulong64 uVar4;
  mi_page_s *pmVar5;
  ulonglong uVar6;
  uint uVar7;
  mi_block_s *pmVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = param_1->slice_entries;
  bVar9 = false;
  pmVar5 = param_1->slices + param_1->slices[0].slice_count;
  do {
    if (param_1->slices + uVar1 <= pmVar5) {
      return bVar9;
    }
    if (pmVar5->xblock_size == 0) {
      uVar6 = (ulonglong)pmVar5->slice_count;
      if (param_2 <= uVar6) {
        bVar9 = true;
      }
    }
    else {
      uVar6 = pmVar5->xthread_free;
      if ((uVar6 & 0xfffffffffffffffc) != 0) {
        do {
          pmVar8 = (mi_block_s *)(uVar6 & 0xfffffffffffffffc);
          LOCK();
          uVar4 = pmVar5->xthread_free;
          bVar10 = uVar6 == uVar4;
          if (bVar10) {
            pmVar5->xthread_free = (ulonglong)((uint)uVar6 & 3);
            uVar4 = uVar6;
          }
          UNLOCK();
          uVar6 = uVar4;
        } while (!bVar10);
        if (pmVar8 != (mi_block_s *)0x0) {
          uVar7 = 1;
          pmVar2 = pmVar8;
          for (pmVar3 = (mi_block_s *)pmVar8->next; pmVar3 != (mi_block_s *)0x0;
              pmVar3 = (mi_block_s *)pmVar3->next) {
            if (pmVar5->capacity < uVar7) goto LAB_141d9bde7;
            uVar7 = uVar7 + 1;
            pmVar2 = pmVar3;
          }
          if (pmVar5->capacity < uVar7) {
LAB_141d9bde7:
            _mi_error_message(0xe,"corrupted thread-free list\n");
          }
          else {
            pmVar2->next = (ulong64)pmVar5->local_free;
            pmVar5->used = pmVar5->used - uVar7;
            pmVar5->local_free = pmVar8;
          }
        }
      }
      if ((pmVar5->local_free != (mi_block_s *)0x0) && (pmVar5->free == (mi_block_s *)0x0)) {
        pmVar5->is_zero = '\0';
        pmVar5->free = pmVar5->local_free;
        pmVar5->local_free = (mi_block_s *)0x0;
      }
      if (pmVar5->used == 0) {
        mi_stat_update(&param_4->stats->pages_abandoned,-1);
        param_1->abandoned = param_1->abandoned - 1;
        pmVar5 = mi_segment_page_clear(pmVar5,param_4);
        if (param_2 <= pmVar5->slice_count) {
          uVar6 = (ulonglong)pmVar5->slice_count;
          bVar9 = true;
          goto LAB_141d9be8f;
        }
      }
      else if ((pmVar5->xblock_size == param_3) &&
              ((pmVar5->used < (uint)pmVar5->reserved ||
               ((pmVar5->xthread_free & 0xfffffffffffffffc) != 0)))) {
        bVar9 = true;
      }
      uVar6 = (ulonglong)pmVar5->slice_count;
    }
LAB_141d9be8f:
    pmVar5 = pmVar5 + uVar6;
  } while( true );
}

// mi_segment_commit_mask @ 141d9bed0

ulong64 __cdecl
mi_segment_commit_mask
          (mi_segment_s *param_1,bool param_2,uchar *param_3,ulong64 param_4,uchar **param_5,
          ulong64 *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_4 - 1 < 0x800000) &&
     (param_3 < (uchar *)(param_1->segment_slices * 0x10000 + (longlong)param_1))) {
    uVar1 = (longlong)param_3 - (longlong)param_1;
    uVar2 = uVar1 + param_4;
    if (!param_2) {
      uVar2 = uVar1 + param_4 + 0x1ffff;
    }
    uVar4 = uVar1 + 0x1ffff;
    if (!param_2) {
      uVar4 = uVar1;
    }
    uVar3 = 0;
    uVar5 = uVar4 & 0xfffffffffffe0000;
    uVar1 = (uVar2 & 0xfffffffffffe0000) - uVar5;
    if ((uVar2 & 0xfffffffffffe0000) <= uVar5) {
      uVar1 = uVar3;
    }
    *param_5 = (uchar *)((longlong)param_1->slices + (uVar5 - 0x80));
    *param_6 = uVar1;
    if (uVar1 != 0) {
      uVar1 = uVar1 >> 0x11;
      if (0x40 < uVar1 + (uVar4 >> 0x11)) {
        _mi_warning_message("commit mask overflow: %zu %zu %zu %zu 0x%p %zu\n");
      }
      if (uVar1 == 0x40) {
        return 0xffffffffffffffff;
      }
      if (uVar1 != 0) {
        uVar3 = (1L << ((byte)uVar1 & 0x3f)) + -1 << ((byte)(uVar4 >> 0x11) & 0x3f);
      }
      return uVar3;
    }
  }
  return 0;
}

// mi_segment_commitx @ 141d9c000

/* WARNING: Removing unreachable block (ram,0x000141d9c09c) */
/* WARNING: Removing unreachable block (ram,0x000141d9c15c) */

bool __cdecl
mi_segment_commitx(mi_segment_s *param_1,bool param_2,uchar *param_3,ulong64 param_4,
                  mi_stats_s *param_5)

{
  bool bVar1;
  long lVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  long64 lVar5;
  mi_stat_count_s *pmVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulong64 uVar10;
  bool local_res10 [8];
  uchar *local_18;
  ulong64 local_10;
  
  uVar3 = mi_segment_commit_mask(param_1,!param_2,param_3,param_4,&local_18,&local_10);
  if ((uVar3 != 0) && (local_10 != 0)) {
    if (param_2) {
      uVar7 = param_1->commit_mask & uVar3;
      if (uVar7 != uVar3) {
        uVar4 = mi_commit_mask_committed_size(uVar7,0x800000);
        uVar10 = -uVar4;
        if (uVar10 != 0) {
          LOCK();
          lVar9 = _mi_stats_main.committed.current + uVar10;
          UNLOCK();
          if (_mi_stats_main.committed.peak < (longlong)(_mi_stats_main.committed.current + uVar10))
          {
            LOCK();
            UNLOCK();
            _mi_stats_main.committed.peak = _mi_stats_main.committed.current + uVar10;
          }
          pmVar6 = &_mi_stats_main.committed;
          if ((longlong)uVar10 < 1) {
            pmVar6 = (mi_stat_count_s *)&_mi_stats_main.committed.freed;
            uVar10 = uVar4;
          }
          LOCK();
          _mi_stats_main.committed.current = lVar9;
          pmVar6->allocated = pmVar6->allocated + uVar10;
          UNLOCK();
        }
        bVar1 = _mi_os_commit(local_18,local_10,local_res10,param_5);
        if (!bVar1) {
          return false;
        }
        param_1->commit_mask = param_1->commit_mask | uVar3;
      }
      if ((param_1->decommit_mask & uVar3) != 0) {
        lVar2 = mi_option_get(mi_option_reset_delay);
        lVar5 = _mi_clock_now();
        param_1->decommit_expire = lVar5 + lVar2;
      }
    }
    else {
      uVar7 = param_1->commit_mask & uVar3;
      if (uVar7 != 0) {
        uVar10 = mi_commit_mask_committed_size(uVar7,0x800000);
        lVar9 = local_10 - uVar10;
        if (lVar9 != 0) {
          LOCK();
          UNLOCK();
          if (_mi_stats_main.committed.peak < _mi_stats_main.committed.current + lVar9) {
            LOCK();
            UNLOCK();
            _mi_stats_main.committed.peak = _mi_stats_main.committed.current + lVar9;
          }
          lVar8 = lVar9;
          if (lVar9 < 1) {
            lVar8 = -lVar9;
          }
          pmVar6 = &_mi_stats_main.committed;
          if (lVar9 < 1) {
            pmVar6 = (mi_stat_count_s *)&_mi_stats_main.committed.freed;
          }
          LOCK();
          _mi_stats_main.committed.current = _mi_stats_main.committed.current + lVar9;
          pmVar6->allocated = pmVar6->allocated + lVar8;
          UNLOCK();
        }
        if (param_1->allow_decommit != false) {
          _mi_os_decommit(local_18,local_10,param_5);
        }
        param_1->commit_mask = param_1->commit_mask & ~uVar3;
      }
    }
    param_1->decommit_mask = param_1->decommit_mask & ~uVar3;
  }
  return true;
}

// mi_segment_delayed_decommit @ 141d9c1d0

/* WARNING: Removing unreachable block (ram,0x000141d9c2ec) */

void __cdecl mi_segment_delayed_decommit(mi_segment_s *param_1,bool param_2,mi_stats_s *param_3)

{
  long64 lVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  mi_stat_count_s *pmVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulong64 uVar10;
  longlong lVar11;
  ulong64 local_res8;
  uchar *local_res20;
  
  if (((param_1->allow_decommit != false) && (param_1->decommit_mask != 0)) &&
     ((lVar1 = _mi_clock_now(), param_2 || (param_1->decommit_expire <= lVar1)))) {
    uVar8 = param_1->decommit_mask;
    lVar11 = 0;
    param_1->decommit_expire = 0;
    param_1->decommit_mask = 0;
    for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
      lVar9 = 0;
      if ((uVar8 & 1) != 0) {
        do {
          uVar8 = uVar8 >> 1;
          lVar9 = lVar9 + 1;
        } while ((uVar8 & 1) != 0);
        if (((lVar9 != 0) &&
            (uVar2 = mi_segment_commit_mask
                               (param_1,true,(uchar *)(lVar11 * 0x20000 + (longlong)param_1),
                                lVar9 * 0x20000,&local_res20,&local_res8), uVar2 != 0)) &&
           (local_res8 != 0)) {
          uVar5 = uVar2 & param_1->commit_mask;
          if (uVar5 != 0) {
            uVar10 = local_res8;
            uVar3 = mi_commit_mask_committed_size(uVar5,0x800000);
            lVar7 = uVar10 - uVar3;
            if (lVar7 != 0) {
              LOCK();
              UNLOCK();
              if (_mi_stats_main.committed.peak < _mi_stats_main.committed.current + lVar7) {
                LOCK();
                UNLOCK();
                _mi_stats_main.committed.peak = _mi_stats_main.committed.current + lVar7;
              }
              lVar6 = lVar7;
              if (lVar7 < 1) {
                lVar6 = -lVar7;
              }
              pmVar4 = &_mi_stats_main.committed;
              if (lVar7 < 1) {
                pmVar4 = (mi_stat_count_s *)&_mi_stats_main.committed.freed;
              }
              LOCK();
              _mi_stats_main.committed.current = _mi_stats_main.committed.current + lVar7;
              pmVar4->allocated = pmVar4->allocated + lVar6;
              UNLOCK();
            }
            if (param_1->allow_decommit != false) {
              _mi_os_decommit(local_res20,uVar10,param_3);
            }
            param_1->commit_mask = param_1->commit_mask & ~uVar2;
          }
          param_1->decommit_mask = param_1->decommit_mask & ~uVar2;
        }
      }
      lVar11 = lVar11 + 1 + lVar9;
    }
  }
  return;
}

// mi_segment_free @ 141d9c380

void __cdecl mi_segment_free(mi_segment_s *param_1,bool param_2,mi_segments_tld_s *param_3)

{
  mi_stat_count_s *pmVar1;
  long64 *plVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  mi_stats_s *pmVar5;
  longlong lVar6;
  longlong lVar7;
  mi_page_s *pmVar8;
  ulonglong uVar9;
  mi_segment_s *pmVar10;
  bool bVar11;
  
  uVar3 = param_1->slice_entries;
  for (pmVar8 = param_1->slices; pmVar8 < param_1->slices + uVar3;
      pmVar8 = pmVar8 + pmVar8->slice_count) {
    if ((pmVar8->xblock_size == 0) && (param_1->kind != MI_SEGMENT_HUGE)) {
      mi_segment_span_remove_from_queue(pmVar8,param_3);
    }
  }
  mi_stat_update(&param_3->stats->page_committed,param_1->segment_info_slices * -0x10000);
  if ((!param_2) && (param_1->segment_slices == 0x80)) {
    if (options[9].init == UNINIT) {
      mi_option_init(options + 9);
    }
    uVar9 = (ulonglong)options[9].value;
    uVar4 = param_3->cache_count;
    if ((uVar4 < uVar9) && (uVar4 < (param_3->peak_count >> 3) + 1)) {
      param_1->next = param_3->cache;
      pmVar5 = param_3->stats;
      param_3->cache_count = param_3->cache_count + 1;
      param_3->cache = param_1;
      pmVar1 = &pmVar5->segments_cache;
      if ((pmVar1 < &_mi_stats_main) ||
         ((undefined1 *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar1)) {
        lVar7 = (pmVar5->segments_cache).current + 1;
        (pmVar5->segments_cache).current = lVar7;
        if ((pmVar5->segments_cache).peak < lVar7) {
          (pmVar5->segments_cache).peak = lVar7;
        }
        pmVar1->allocated = pmVar1->allocated + 1;
        return;
      }
      LOCK();
      plVar2 = &(pmVar5->segments_cache).current;
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      do {
        lVar6 = (pmVar5->segments_cache).peak;
        if (lVar7 + 1 <= lVar6) break;
        plVar2 = &(pmVar5->segments_cache).peak;
        LOCK();
        bVar11 = lVar6 == *plVar2;
        if (bVar11) {
          *plVar2 = lVar7 + 1;
        }
        UNLOCK();
      } while (!bVar11);
      LOCK();
      pmVar1->allocated = pmVar1->allocated + 1;
      UNLOCK();
      return;
    }
    while (uVar9 < uVar4) {
      pmVar10 = param_3->cache;
      if (pmVar10 != (mi_segment_s *)0x0) {
        param_3->cache_count = uVar4 - 1;
        param_3->cache = pmVar10->next;
        pmVar10->next = (mi_segment_s *)0x0;
        mi_stat_update(&param_3->stats->segments_cache,-1);
        mi_segment_os_free(pmVar10,param_3);
      }
      uVar4 = param_3->cache_count;
    }
  }
  mi_segment_os_free(param_1,param_3);
  return;
}

// mi_segment_init @ 141d9c5a0

mi_segment_s * __cdecl
mi_segment_init(mi_segment_s *param_1,ulong64 param_2,mi_segments_tld_s *param_3,
               mi_os_tld_s *param_4,mi_page_s **param_5)

{
  bool bVar1;
  mi_os_tld_s *pmVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  mi_page_s *pmVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  mi_segments_tld_s *pmVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  undefined1 uVar14;
  bool local_res8 [8];
  ulong64 local_res10;
  mi_segments_tld_s *local_res18;
  mi_os_tld_s *local_res20;
  bool local_78;
  bool local_77;
  bool local_76 [6];
  mi_segment_s *local_70;
  ulonglong local_68;
  ulong64 local_60;
  mi_segment_s *local_58;
  ulong64 local_50;
  
  uVar5 = os_page_size + 0x287f;
  if ((os_page_size & os_page_size - 1) == 0) {
    uVar5 = ~(os_page_size - 1) & uVar5;
  }
  else {
    uVar5 = uVar5 - uVar5 % os_page_size;
  }
  uVar8 = uVar5 + 0xffff >> 0x10;
  if (param_2 == 0) {
    uVar5 = 0x800000;
  }
  else {
    uVar5 = param_2 + 0xffff + (uVar5 + 0xffff & 0xffffffffffff0000);
  }
  uVar5 = uVar5 >> 0x10;
  local_50 = uVar5;
  if (0x80 < uVar5) {
    local_50 = 0x80;
  }
  uVar11 = uVar5 << 0x10;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_68 = uVar8;
  local_58 = param_1;
  if (options[0xd].init == UNINIT) {
    mi_option_init(options + 0xd);
  }
  uVar12 = (ulonglong)options[0xd].value;
  uVar9 = param_3->count;
  if (uVar9 < uVar12) {
LAB_141d9c693:
    if (local_res10 == 0) {
      bVar3 = false;
      goto LAB_141d9c6a2;
    }
  }
  else {
    if (options[3].init == UNINIT) {
      mi_option_init(options + 3);
    }
    if (options[3].value == 0) goto LAB_141d9c693;
  }
  bVar3 = true;
LAB_141d9c6a2:
  pmVar2 = local_res20;
  local_77 = false;
  local_76[0] = bVar3;
  if (param_1 == (mi_segment_s *)0x0) {
    local_60 = 0;
    local_78 = false;
    local_70 = (mi_segment_s *)0x0;
    local_res8[0] = uVar12 <= uVar9;
    param_1 = _mi_segment_cache_pop
                        (uVar11,&local_60,local_res8,&local_78,&local_77,(ulong64 *)&local_70,
                         local_res20);
    uVar13 = local_60;
    uVar14 = local_78;
    if (param_1 == (mi_segment_s *)0x0) {
      local_78 = false;
      local_77 = false;
      local_70 = param_1;
      iVar4 = _mi_os_numa_node(pmVar2);
      uVar14 = 0;
      if ((uVar11 < 0x400000) ||
         (param_1 = mi_arena_allocate(iVar4,uVar11,0x800000,local_76,local_res8,&local_78,&local_77,
                                      (ulong64 *)&local_70,pmVar2), bVar3 = local_76[0],
         uVar14 = local_78, param_1 == (mi_segment_s *)0x0)) {
        if (options[0x12].init == UNINIT) {
          mi_option_init(options + 0x12);
        }
        if (options[0x12].value != 0) {
          return (mi_segment_s *)0x0;
        }
        local_77 = true;
        local_70 = (mi_segment_s *)0x0;
        if (uVar5 == 0) {
          param_1 = (mi_segment_s *)0x0;
        }
        else {
          uVar13 = _mi_os_good_alloc_size(uVar11);
          bVar1 = local_res8[0];
          if ((os_page_size & os_page_size - 1) == 0) {
            uVar6 = ~(os_page_size - 1) & os_page_size + 0x7fffff;
          }
          else {
            uVar6 = ((os_page_size + 0x7fffff) / os_page_size) * os_page_size;
          }
          local_res8[0] = false;
          param_1 = mi_os_mem_alloc_aligned(uVar13,uVar6,bVar3,bVar1,local_res8,&_mi_stats_main);
          if (param_1 != (mi_segment_s *)0x0) {
            uVar14 = local_res8[0];
          }
        }
        if (param_1 == (mi_segment_s *)0x0) {
          return (mi_segment_s *)0x0;
        }
        uVar13 = -(ulonglong)(bVar3 != false);
      }
      else {
        uVar13 = -(ulonglong)(local_76[0] != false);
      }
    }
    uVar9 = 0xffffffffffffffff;
    uVar8 = uVar8 * 0x10000 + 0x1ffff >> 0x11;
    if (uVar8 == 0x40) {
      uVar12 = 0xffffffffffffffff;
    }
    else if (uVar8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (1L << ((byte)uVar8 & 0x3f)) - 1;
    }
    if ((uVar12 & uVar13) != uVar12) {
      bVar3 = _mi_os_commit(param_1,uVar8 << 0x11,&local_77,local_res18->stats);
      if (!bVar3) {
        return (mi_segment_s *)0x0;
      }
      if (uVar8 != 0x40) {
        if (uVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (1L << ((byte)uVar8 & 0x3f)) - 1;
        }
      }
      uVar13 = uVar13 | uVar9;
    }
    pmVar10 = local_res18;
    param_1->memid = (ulong64)local_70;
    param_1->mem_is_pinned = (bool)uVar14;
    param_1->mem_is_large = local_res8[0];
    param_1->mem_is_committed = uVar13 == 0xffffffffffffffff;
    mi_segments_track_size((long)uVar11,local_res18);
    uVar8 = local_68;
    if (param_1 < (mi_segment_s *)0x140000000000) {
      uVar9 = (ulonglong)param_1 >> 0x1d;
      if (uVar9 != 0) {
        uVar11 = mi_segment_map[uVar9];
        do {
          LOCK();
          uVar6 = mi_segment_map[uVar9];
          bVar3 = uVar11 == uVar6;
          if (bVar3) {
            mi_segment_map[uVar9] = uVar11 | 1L << ((uint)((ulonglong)param_1 >> 0x17) & 0x3f);
            uVar6 = uVar11;
          }
          UNLOCK();
          uVar11 = uVar6;
        } while (!bVar3);
      }
    }
  }
  else {
    uVar13 = param_1->commit_mask;
    pmVar10 = local_res18;
  }
  param_1->abandoned_next = (mi_segment_s *)0x0;
  if (local_77 == false) {
    memset(&param_1->next,0,(uVar5 + 1) * 0x50);
  }
  if (local_58 == (mi_segment_s *)0x0) {
    param_1->commit_mask = uVar13;
    if (options[0xe].init == UNINIT) {
      mi_option_init(options + 0xe);
    }
    if (((options[0xe].value == 0) || (param_1->mem_is_pinned != false)) ||
       (param_1->mem_is_large != false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    param_1->allow_decommit = bVar3;
    param_1->decommit_expire = 0;
    param_1->decommit_mask = 0;
  }
  param_1->segment_slices = uVar5;
  param_1->segment_info_slices = uVar8;
  param_1->thread_id = (ulong64)Self;
  param_1->cookie = (ulonglong)param_1 ^ _mi_heap_main.cookie;
  param_1->slice_entries = local_50;
  param_1->kind = (uint)(local_res10 != 0);
  mi_stat_update(&pmVar10->stats->page_committed,uVar8 << 0x10);
  pmVar7 = mi_segment_span_allocate(param_1,0,uVar8,pmVar10);
  if (pmVar7 == (mi_page_s *)0x0) {
    return (mi_segment_s *)0x0;
  }
  param_1->used = 0;
  if (param_1->kind != MI_SEGMENT_NORMAL) {
    pmVar7 = mi_segment_span_allocate(param_1,uVar8,uVar5 - uVar8,pmVar10);
    *param_5 = pmVar7;
    return param_1;
  }
  mi_segment_span_free(param_1,uVar8,param_1->slice_entries - uVar8,pmVar10);
  return param_1;
}

// mi_segment_os_free @ 141d9ca90

/* WARNING: Removing unreachable block (ram,0x000141d9cbbc) */

void __cdecl mi_segment_os_free(mi_segment_s *param_1,mi_segments_tld_s *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  mi_stat_count_s *pmVar4;
  ulong64 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  lVar6 = 0;
  param_1->thread_id = 0;
  if (param_1 < (mi_segment_s *)0x140000000000) {
    uVar2 = (ulonglong)param_1 >> 0x1d;
    if (uVar2 != 0) {
      uVar5 = mi_segment_map[uVar2];
      do {
        LOCK();
        uVar3 = mi_segment_map[uVar2];
        bVar9 = uVar5 == uVar3;
        if (bVar9) {
          mi_segment_map[uVar2] = uVar5 & ~(1L << ((uint)((ulonglong)param_1 >> 0x17) & 0x3f));
          uVar3 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar3;
      } while (!bVar9);
    }
  }
  mi_segments_track_size((int)param_1->segment_slices * -0x10000,param_2);
  uVar2 = param_1->segment_slices;
  lVar7 = uVar2 << 0x10;
  if ((lVar7 == 0x800000) &&
     (bVar9 = _mi_segment_cache_push
                        (param_1,0x800000,param_1->memid,param_1->commit_mask,param_1->mem_is_large,
                         param_1->mem_is_pinned,param_2->os), bVar9)) {
    return;
  }
  uVar5 = param_1->commit_mask;
  if (uVar5 != 0xffffffffffffffff) {
    if (uVar5 == 0) goto LAB_141d9cbe4;
    do {
      lVar7 = lVar6 + 1;
      if ((uVar5 & 1) == 0) {
        lVar7 = lVar6;
      }
      uVar5 = uVar5 >> 1;
      lVar6 = lVar7;
    } while (uVar5 != 0);
    lVar7 = (uVar2 & 0xffffffffffff) * 0x400 * lVar7;
  }
  if (((lVar7 != 0) && (param_1->mem_is_pinned == false)) && (lVar6 = -lVar7, lVar6 != 0)) {
    LOCK();
    lVar1 = _mi_stats_main.committed.current + lVar6;
    UNLOCK();
    if (_mi_stats_main.committed.peak < _mi_stats_main.committed.current + lVar6) {
      LOCK();
      UNLOCK();
      _mi_stats_main.committed.peak = _mi_stats_main.committed.current + lVar6;
    }
    pmVar4 = &_mi_stats_main.committed;
    if (lVar6 < 1) {
      pmVar4 = (mi_stat_count_s *)&_mi_stats_main.committed.freed;
      lVar6 = lVar7;
    }
    LOCK();
    _mi_stats_main.committed.current = lVar1;
    pmVar4->allocated = pmVar4->allocated + lVar6;
    UNLOCK();
  }
LAB_141d9cbe4:
  do {
  } while (abandoned_readers != 0);
  uVar2 = param_1->memid;
  uVar5 = param_1->segment_slices * 0x10000;
  if (uVar5 != 0) {
    if (uVar2 == 0) {
      uVar5 = _mi_os_good_alloc_size(uVar5);
      mi_os_mem_free(param_1,uVar5,param_1->mem_is_pinned,&_mi_stats_main);
    }
    else {
      lVar6 = *(longlong *)(&DAT_154f914f8 + (uVar2 & 0xff) * 8);
      uVar8 = uVar5 + 0x7fffff >> 0x17;
      if (lVar6 == 0) {
        _mi_error_message(0x16,
                          "trying to free from non-existent arena: %p, size %zu, memid: 0x%zx\n");
      }
      else if (uVar2 >> 0xe < *(ulonglong *)(lVar6 + 0x10)) {
        if (*(char *)(lVar6 + 0x1d) == '\0') {
          _mi_os_decommit(param_1,uVar8 << 0x17,param_2->os->stats);
          _mi_bitmap_unclaim_across
                    (*(ulong64 **)(lVar6 + 0x30),*(ulong64 *)(lVar6 + 0x10),uVar8,uVar2 >> 8);
        }
        bVar9 = _mi_bitmap_unclaim_across
                          ((ulong64 *)(lVar6 + 0x38),*(ulong64 *)(lVar6 + 0x10),uVar8,uVar2 >> 8);
        if (!bVar9) {
          _mi_error_message(0xb,"trying to free an already freed block: %p, size %zu\n");
        }
      }
      else {
        _mi_error_message(0x16,
                          "trying to free from non-existent arena block: %p, size %zu, memid: 0x%zx\n"
                         );
      }
    }
  }
  return;
}

// mi_segment_page_clear @ 141d9cd20

mi_page_s * __cdecl mi_segment_page_clear(mi_page_s *param_1,mi_segments_tld_s *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  mi_page_s *pmVar3;
  ulong64 uVar4;
  uchar *puVar5;
  mi_segment_s *pmVar6;
  ulong64 local_res8;
  uchar *local_res10;
  
  uVar2 = (ulonglong)param_1->xblock_size;
  pmVar6 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (0x7ffffff < uVar2) {
    uVar2 = (ulonglong)param_1->slice_count << 0x10;
  }
  mi_stat_update(&param_2->stats->page_committed,-(param_1->capacity * uVar2));
  mi_stat_update(&param_2->stats->pages,-1);
  if ((pmVar6->mem_is_pinned == false) && (param_1->is_reset == 0)) {
    if (options[10].init == UNINIT) {
      mi_option_init(options + 10);
    }
    if (options[10].value != 0) {
      param_1->is_reset = '\x01';
      uVar4 = (ulonglong)param_1->slice_count << 0x10;
      puVar5 = (uchar *)((((longlong)param_1 + (-0x80 - (longlong)pmVar6)) / 0x50) * 0x10000 +
                        (longlong)pmVar6);
      if (options[5].init == UNINIT) {
        mi_option_init(options + 5);
      }
      if (options[5].value == 0) {
        bVar1 = mi_os_resetx(puVar5,uVar4,true,&_mi_stats_main);
      }
      else {
        bVar1 = _mi_os_decommit(puVar5,uVar4,&_mi_stats_main);
      }
      if (((bVar1 != false) && (bVar1 = mi_option_is_enabled(mi_option_reset_decommits), bVar1)) &&
         (pmVar6->kind != MI_SEGMENT_HUGE)) {
        uVar4 = mi_segment_commit_mask(pmVar6,false,puVar5,uVar4,&local_res10,&local_res8);
        pmVar6->commit_mask = pmVar6->commit_mask & ~uVar4;
      }
    }
  }
  param_1->is_zero_init = '\0';
  *(undefined8 *)&param_1->capacity = 0;
  *(undefined8 *)((longlong)&param_1->free + 2) = 0;
  *(undefined2 *)((longlong)&param_1->used + 2) = 0;
  param_1->local_free = (mi_block_s *)0x0;
  param_1->xthread_free = 0;
  param_1->xheap = 0;
  param_1->next = (mi_page_s *)0x0;
  param_1->prev = (mi_page_s *)0x0;
  param_1->padding[0] = 0;
  param_1->xblock_size = 1;
  pmVar3 = mi_segment_span_free_coalesce(param_1,param_2);
  pmVar6->used = pmVar6->used - 1;
  return pmVar3;
}

// mi_segment_reclaim @ 141d9cee0

mi_segment_s * __cdecl
mi_segment_reclaim(mi_segment_s *param_1,mi_heap_s *param_2,ulong64 param_3,bool *param_4,
                  mi_segments_tld_s *param_5)

{
  ulong64 uVar1;
  mi_block_s *pmVar2;
  mi_block_s *pmVar3;
  ulonglong uVar4;
  mi_page_s *pmVar5;
  mi_page_queue_s *pmVar6;
  uint uVar7;
  mi_block_s *pmVar8;
  ulong64 uVar9;
  bool bVar10;
  
  if (param_4 != (bool *)0x0) {
    *param_4 = false;
  }
  param_1->thread_id = (ulong64)Self;
  param_1->abandoned_visits = 0;
  mi_segments_track_size((int)param_1->segment_slices << 0x10,param_5);
  mi_stat_update(&param_5->stats->segments_abandoned,-1);
  uVar1 = param_1->slice_entries;
  pmVar5 = param_1->slices + param_1->slices[0].slice_count;
  do {
    if (param_1->slices + uVar1 <= pmVar5) {
      if (param_1->used == 0) {
        mi_segment_free(param_1,false,param_5);
        param_1 = (mi_segment_s *)0x0;
      }
      return param_1;
    }
    if (pmVar5->xblock_size == 0) {
      pmVar5 = mi_segment_span_free_coalesce(pmVar5,param_5);
    }
    else {
      mi_stat_update(&param_5->stats->pages_abandoned,-1);
      param_1->abandoned = param_1->abandoned - 1;
      pmVar5->xheap = (ulong64)param_2;
      do {
        do {
          uVar4 = pmVar5->xthread_free;
        } while (((uint)uVar4 & 3) == 1);
        if ((uVar4 & 3) == 0) break;
        LOCK();
        bVar10 = uVar4 == pmVar5->xthread_free;
        if (bVar10) {
          pmVar5->xthread_free = uVar4 & 0xfffffffffffffffc;
        }
        UNLOCK();
      } while (!bVar10);
      uVar4 = pmVar5->xthread_free;
      if ((uVar4 & 0xfffffffffffffffc) != 0) {
        do {
          pmVar8 = (mi_block_s *)(uVar4 & 0xfffffffffffffffc);
          LOCK();
          uVar9 = pmVar5->xthread_free;
          bVar10 = uVar4 == uVar9;
          if (bVar10) {
            pmVar5->xthread_free = (ulonglong)((uint)uVar4 & 3);
            uVar9 = uVar4;
          }
          UNLOCK();
          uVar4 = uVar9;
        } while (!bVar10);
        if (pmVar8 != (mi_block_s *)0x0) {
          uVar7 = 1;
          pmVar2 = pmVar8;
          for (pmVar3 = (mi_block_s *)pmVar8->next; pmVar3 != (mi_block_s *)0x0;
              pmVar3 = (mi_block_s *)pmVar3->next) {
            if (pmVar5->capacity < uVar7) goto LAB_141d9d037;
            uVar7 = uVar7 + 1;
            pmVar2 = pmVar3;
          }
          if (pmVar5->capacity < uVar7) {
LAB_141d9d037:
            _mi_error_message(0xe,"corrupted thread-free list\n");
          }
          else {
            pmVar2->next = (ulong64)pmVar5->local_free;
            pmVar5->used = pmVar5->used - uVar7;
            pmVar5->local_free = pmVar8;
          }
        }
      }
      if ((pmVar5->local_free != (mi_block_s *)0x0) && (pmVar5->free == (mi_block_s *)0x0)) {
        pmVar5->is_zero = '\0';
        pmVar5->free = pmVar5->local_free;
        pmVar5->local_free = (mi_block_s *)0x0;
      }
      if (pmVar5->used == 0) {
        pmVar5 = mi_segment_page_clear(pmVar5,param_5);
      }
      else {
        uVar9 = (ulong64)pmVar5->xblock_size;
        if (0x7ffffff < uVar9) {
          uVar9 = (ulonglong)pmVar5->slice_count << 0x10;
        }
        pmVar6 = mi_page_queue(param_2,uVar9);
        (pmVar5->flags).full_aligned =
             pmVar6->block_size == 0x20010 | (pmVar5->flags).full_aligned & 0xfe;
        pmVar5->next = pmVar6->first;
        pmVar5->prev = (mi_page_s *)0x0;
        if (pmVar6->first == (mi_page_s *)0x0) {
          pmVar6->last = pmVar5;
        }
        else {
          pmVar6->first->prev = pmVar5;
        }
        pmVar6->first = pmVar5;
        mi_heap_queue_first_update(param_2,pmVar6);
        param_2->page_count = param_2->page_count + 1;
        if ((param_3 == pmVar5->xblock_size) &&
           (((pmVar5->used < (uint)pmVar5->reserved ||
             ((pmVar5->xthread_free & 0xfffffffffffffffc) != 0)) && (param_4 != (bool *)0x0)))) {
          *param_4 = true;
        }
      }
    }
    pmVar5 = pmVar5 + pmVar5->slice_count;
  } while( true );
}

// mi_segment_span_allocate @ 141d9d180

mi_page_s * __cdecl
mi_segment_span_allocate
          (mi_segment_s *param_1,ulong64 param_2,ulong64 param_3,mi_segments_tld_s *param_4)

{
  int iVar1;
  bool bVar2;
  mi_page_s *pmVar3;
  mi_page_s *pmVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  mi_page_s *pmVar8;
  
  pmVar4 = param_1->slices + param_2;
  if (((param_1->commit_mask == 0xffffffffffffffff) && (param_1->decommit_mask == 0)) ||
     (bVar2 = mi_segment_commitx(param_1,true,
                                 (uchar *)((((longlong)pmVar4 + (-0x80 - (longlong)param_1)) / 0x50)
                                           * 0x10000 + (longlong)param_1),param_3 << 0x10,
                                 param_4->stats), bVar2)) {
    pmVar4->slice_count = (uint)param_3;
    pmVar4->slice_offset = 0;
    uVar7 = param_3 - 1;
    uVar6 = (uint)(param_3 << 0x10);
    if (0x7ffffff < param_3 << 0x10) {
      uVar6 = 0x8000000;
    }
    pmVar4->xblock_size = uVar6;
    if (7 < uVar7) {
      uVar7 = 7;
    }
    if (param_1->slice_entries <= uVar7 + param_2) {
      uVar7 = ~param_2 + param_1->slice_entries;
    }
    uVar5 = 1;
    pmVar3 = pmVar4 + 1;
    if (uVar7 != 0) {
      do {
        iVar1 = (int)uVar5;
        pmVar3->slice_count = 0;
        uVar5 = uVar5 + 1;
        pmVar3->slice_offset = iVar1 * 0x50;
        pmVar3->xblock_size = 1;
        pmVar3 = pmVar3 + 1;
      } while (uVar5 <= uVar7);
    }
    pmVar8 = param_1->slices + param_2 + param_3 + -1;
    if ((pmVar8 < param_1->slices + param_1->slice_entries) && (pmVar3 <= pmVar8)) {
      pmVar8->slice_count = 0;
      pmVar8->xblock_size = 1;
      pmVar8->slice_offset = (uint)param_3 * 0x50 - 0x50;
    }
    pmVar4->is_reset = '\0';
    pmVar4->is_committed = '\x01';
    param_1->used = param_1->used + 1;
  }
  else {
    pmVar4 = (mi_page_s *)0x0;
  }
  return pmVar4;
}

// mi_segment_span_free @ 141d9d320

void __cdecl
mi_segment_span_free
          (mi_segment_s *param_1,ulong64 param_2,ulong64 param_3,mi_segments_tld_s *param_4)

{
  longlong lVar1;
  mi_stats_s *pmVar2;
  long lVar3;
  mi_span_queue_s *pmVar4;
  ulong64 uVar5;
  long64 lVar6;
  ulonglong uVar7;
  uchar *puVar8;
  mi_page_s *pmVar9;
  ulong64 local_res8;
  uchar *local_res10;
  
  pmVar4 = (mi_span_queue_s *)0x0;
  if ((param_1->kind != MI_SEGMENT_HUGE) && (param_1->thread_id != 0)) {
    pmVar4 = mi_span_queue_for(param_3,param_4);
  }
  uVar7 = 1;
  if (param_3 != 0) {
    uVar7 = param_3;
  }
  pmVar9 = param_1->slices + param_2;
  pmVar9->slice_count = (uint)uVar7;
  pmVar9->slice_offset = 0;
  if (1 < uVar7) {
    lVar1 = uVar7 + param_2;
    param_1->slices[lVar1 + -1].slice_count = 0;
    param_1->slices[lVar1 + -1].slice_offset = (uint)uVar7 * 0x50 - 0x50;
    param_1->slices[lVar1 + -1].xblock_size = 0;
  }
  pmVar2 = param_4->stats;
  puVar8 = (uchar *)(((longlong)
                      ((longlong)pmVar9 + (-0x80 - ((ulonglong)pmVar9 & 0xffffffffff800000))) / 0x50
                     ) * 0x10000 + ((ulonglong)pmVar9 & 0xffffffffff800000));
  if (param_1->allow_decommit != false) {
    if (options[0xf].init == UNINIT) {
      mi_option_init(options + 0xf);
    }
    if (options[0xf].value == 0) {
      mi_segment_commitx(param_1,false,puVar8,uVar7 << 0x10,pmVar2);
    }
    else {
      uVar5 = mi_segment_commit_mask(param_1,true,puVar8,uVar7 << 0x10,&local_res10,&local_res8);
      if ((uVar5 != 0) && (local_res8 != 0)) {
        param_1->decommit_mask = param_1->decommit_mask | param_1->commit_mask & uVar5;
        lVar3 = mi_option_get(mi_option_reset_delay);
        lVar6 = _mi_clock_now();
        param_1->decommit_expire = lVar6 + lVar3;
      }
    }
  }
  if (pmVar4 != (mi_span_queue_s *)0x0) {
    pmVar9->prev = (mi_page_s *)0x0;
    pmVar9->next = pmVar4->first;
    pmVar4->first = pmVar9;
    if (pmVar9->next == (mi_page_s *)0x0) {
      pmVar4->last = pmVar9;
    }
    else {
      pmVar9->next->prev = pmVar9;
    }
  }
  pmVar9->xblock_size = 0;
  return;
}

// mi_segment_span_free_coalesce @ 141d9d4d0

mi_page_s * __cdecl mi_segment_span_free_coalesce(mi_page_s *param_1,mi_segments_tld_s *param_2)

{
  ulong64 uVar1;
  mi_segment_s *pmVar2;
  mi_page_s *pmVar3;
  ulong64 uVar4;
  
  pmVar2 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  uVar1 = pmVar2->thread_id;
  if (pmVar2->kind != MI_SEGMENT_HUGE) {
    uVar4 = (ulong64)param_1->slice_count;
    pmVar3 = param_1 + uVar4;
    if (((pmVar3 < pmVar2->slices + pmVar2->slice_entries) && (pmVar3->xblock_size == 0)) &&
       (uVar4 = uVar4 + pmVar3->slice_count, uVar1 != 0)) {
      mi_segment_span_remove_from_queue(pmVar3,param_2);
    }
    if (((pmVar2->slices < param_1) &&
        (pmVar3 = (mi_page_s *)((longlong)param_1 + (-0x50 - (ulonglong)param_1[-1].slice_offset)),
        pmVar3->xblock_size == 0)) &&
       (uVar4 = uVar4 + pmVar3->slice_count, param_1 = pmVar3, uVar1 != 0)) {
      mi_segment_span_remove_from_queue(pmVar3,param_2);
    }
    mi_segment_span_free
              (pmVar2,(longlong)((ulonglong)((uint)param_1 & 0x7fffff) - 0x80) / 0x50,uVar4,param_2)
    ;
    return param_1;
  }
  param_1->xblock_size = 0;
  return param_1;
}

// mi_segment_span_remove_from_queue @ 141d9d5e0

void __cdecl mi_segment_span_remove_from_queue(mi_page_s *param_1,mi_segments_tld_s *param_2)

{
  ulonglong uVar1;
  mi_span_queue_s *pmVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1->slice_count;
  if (1 < uVar5) {
    uVar1 = uVar5 - 1;
    if (uVar1 == 0) {
      uVar4 = 0x40;
    }
    else {
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar4 = 0x3f - (ulonglong)(0x3f - (int)lVar3);
      if (uVar4 < 3) goto LAB_141d9d636;
    }
    uVar5 = ((ulonglong)((uint)(uVar1 >> ((char)uVar4 - 2U & 0x3f)) & 3) | uVar4 * 4) - 4;
  }
LAB_141d9d636:
  pmVar2 = param_2->spans + uVar5;
  if (param_1->prev != (mi_page_s *)0x0) {
    param_1->prev->next = param_1->next;
  }
  if (param_1 == pmVar2->first) {
    pmVar2->first = param_1->next;
  }
  if (param_1->next != (mi_page_s *)0x0) {
    param_1->next->prev = param_1->prev;
  }
  if (param_1 == pmVar2->last) {
    pmVar2->last = param_1->prev;
  }
  param_1->xblock_size = 1;
  param_1->prev = (mi_page_s *)0x0;
  param_1->next = (mi_page_s *)0x0;
  return;
}

// mi_segments_page_alloc @ 141d9d6a0

mi_page_s * __cdecl
mi_segments_page_alloc
          (mi_heap_s *param_1,mi_page_kind_e param_2,ulong64 param_3,ulong64 param_4,
          mi_segments_tld_s *param_5,mi_os_tld_s *param_6)

{
  ulonglong uVar1;
  mi_segment_s *pmVar2;
  bool bVar3;
  mi_page_s *pmVar4;
  mi_segment_s *pmVar5;
  mi_segment_s *pmVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool local_res18 [8];
  
  uVar7 = 0x10000;
  if (0x80000 < param_3) {
    uVar7 = 0x80000;
  }
  uVar1 = (uVar7 - 1) + param_3;
LAB_141d9d6f0:
  do {
    if ((uVar7 - 1 & uVar7) == 0) {
      uVar8 = ~(uVar7 - 1) & uVar1;
    }
    else {
      uVar8 = uVar1 - uVar1 % uVar7;
    }
    pmVar4 = mi_segments_page_find_and_allocate(uVar8 >> 0x10,param_5);
    if (pmVar4 != (mi_page_s *)0x0) {
      mi_segment_delayed_decommit
                ((mi_segment_s *)((ulonglong)pmVar4 & 0xffffffffff800000),false,param_5->stats);
      return pmVar4;
    }
    local_res18[0] = false;
    iVar9 = 8;
    do {
      iVar9 = iVar9 + -1;
      pmVar5 = mi_abandoned_pop();
      if (pmVar5 == (mi_segment_s *)0x0) break;
      pmVar5->abandoned_visits = pmVar5->abandoned_visits + 1;
      bVar3 = mi_segment_check_free(pmVar5,uVar8 >> 0x10,param_4,param_5);
      if (pmVar5->used == 0) {
LAB_141d9d7a9:
        mi_segment_reclaim(pmVar5,param_1,0,(bool *)0x0,param_5);
      }
      else {
        if (bVar3) {
          pmVar5 = mi_segment_reclaim(pmVar5,param_1,param_4,local_res18,param_5);
          if (local_res18[0] != false) {
            return (mi_page_s *)0x0;
          }
          if (pmVar5 != (mi_segment_s *)0x0) goto LAB_141d9d6f0;
          break;
        }
        if (3 < pmVar5->abandoned_visits) goto LAB_141d9d7a9;
        mi_segment_delayed_decommit(pmVar5,false,param_5->stats);
        pmVar6 = abandoned_visited;
        do {
          pmVar5->abandoned_next = pmVar6;
          LOCK();
          bVar3 = pmVar6 != abandoned_visited;
          pmVar2 = pmVar5;
          if (bVar3) {
            pmVar6 = abandoned_visited;
            pmVar2 = abandoned_visited;
          }
          abandoned_visited = pmVar2;
          UNLOCK();
        } while (bVar3);
        LOCK();
        abandoned_visited_count = abandoned_visited_count + 1;
        UNLOCK();
      }
    } while (0 < iVar9);
    pmVar5 = mi_segment_init((mi_segment_s *)0x0,0,param_5,param_6,(mi_page_s **)0x0);
    if (pmVar5 == (mi_segment_s *)0x0) {
      return (mi_page_s *)0x0;
    }
  } while( true );
}

// mi_segments_page_find_and_allocate @ 141d9d880

mi_page_s * __cdecl mi_segments_page_find_and_allocate(ulong64 param_1,mi_segments_tld_s *param_2)

{
  mi_page_s *pmVar1;
  longlong lVar2;
  mi_page_s *pmVar3;
  ulonglong uVar4;
  mi_span_queue_s *pmVar5;
  mi_segment_s *pmVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  
  uVar8 = param_1;
  if (1 < param_1) {
    uVar7 = param_1 - 1;
    if (uVar7 == 0) {
      uVar4 = 0x40;
    }
    else {
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar4 = 0x3f - (ulonglong)(0x3f - (int)lVar2);
      if (uVar4 < 3) goto LAB_141d9d8c6;
    }
    uVar8 = ((ulonglong)((uint)(uVar7 >> ((char)uVar4 - 2U & 0x3f)) & 3) | uVar4 * 4) - 4;
  }
LAB_141d9d8c6:
  pmVar5 = param_2->spans + uVar8;
  uVar7 = 1;
  if (param_1 != 0) {
    uVar7 = param_1;
  }
  if (param_2->spans + 0x23 < pmVar5) {
    return (mi_page_s *)0x0;
  }
  do {
    for (pmVar1 = pmVar5->first; pmVar1 != (mi_page_s *)0x0; pmVar1 = pmVar1->next) {
      if (uVar7 <= pmVar1->slice_count) {
        if (pmVar1->prev != (mi_page_s *)0x0) {
          pmVar1->prev->next = pmVar1->next;
        }
        if (pmVar1 == pmVar5->first) {
          pmVar5->first = pmVar1->next;
        }
        if (pmVar1->next != (mi_page_s *)0x0) {
          pmVar1->next->prev = pmVar1->prev;
        }
        if (pmVar1 == pmVar5->last) {
          pmVar5->last = pmVar1->prev;
        }
        uVar8 = (ulong64)pmVar1->slice_count;
        pmVar1->prev = (mi_page_s *)0x0;
        pmVar6 = (mi_segment_s *)((ulonglong)pmVar1 & 0xffffffffff800000);
        pmVar1->next = (mi_page_s *)0x0;
        pmVar1->xblock_size = 1;
        if (uVar7 < uVar8) {
          mi_segment_span_free
                    (pmVar6,((longlong)pmVar1 + (-0x80 - (longlong)pmVar6)) / 0x50 + uVar7,
                     uVar8 - uVar7,param_2);
          uVar8 = uVar7 & 0xffffffff;
          pmVar1->slice_count = (uint)uVar7;
        }
        pmVar3 = mi_segment_span_allocate
                           (pmVar6,((longlong)pmVar1 + (-0x80 - (longlong)pmVar6)) / 0x50,uVar8,
                            param_2);
        if (pmVar3 == (mi_page_s *)0x0) {
          mi_segment_span_free_coalesce(pmVar1,param_2);
          return (mi_page_s *)0x0;
        }
        return pmVar3;
      }
    }
    pmVar5 = pmVar5 + 1;
    if (param_2->spans + 0x23 < pmVar5) {
      return (mi_page_s *)0x0;
    }
  } while( true );
}

// mi_segments_track_size @ 141d9da50

void __cdecl mi_segments_track_size(long param_1,mi_segments_tld_s *param_2)

{
  long64 *plVar1;
  mi_stats_s *pmVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = (longlong)param_1;
  pmVar2 = param_2->stats;
  if (param_1 < 0) {
    mi_stat_update(&pmVar2->segments,-1);
  }
  else if ((pmVar2 < &_mi_stats_main) ||
          ((mi_stats_s *)((longlong)&_mi_stats_main.large_count.count + 7) < pmVar2)) {
    lVar4 = (pmVar2->segments).current + 1;
    (pmVar2->segments).current = lVar4;
    if ((pmVar2->segments).peak < lVar4) {
      (pmVar2->segments).peak = lVar4;
    }
    (pmVar2->segments).allocated = (pmVar2->segments).allocated + 1;
  }
  else {
    LOCK();
    plVar1 = &(pmVar2->segments).current;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    do {
      lVar3 = (pmVar2->segments).peak;
      if (lVar4 + 1 <= lVar3) break;
      plVar1 = &(pmVar2->segments).peak;
      LOCK();
      bVar7 = lVar3 == *plVar1;
      if (bVar7) {
        *plVar1 = lVar4 + 1;
      }
      UNLOCK();
    } while (!bVar7);
    LOCK();
    (pmVar2->segments).allocated = (pmVar2->segments).allocated + 1;
    UNLOCK();
  }
  uVar5 = param_2->count + 1 + (lVar6 >> 0x3f & 0xfffffffffffffffeU);
  param_2->count = uVar5;
  if (param_2->peak_count < uVar5) {
    param_2->peak_count = uVar5;
  }
  uVar5 = param_2->current_size + lVar6;
  param_2->current_size = uVar5;
  if (param_2->peak_size < uVar5) {
    param_2->peak_size = uVar5;
  }
  return;
}

// mi_span_queue_for @ 141d9db30

mi_span_queue_s * __cdecl mi_span_queue_for(ulong64 param_1,mi_segments_tld_s *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (1 < param_1) {
    uVar1 = param_1 - 1;
    if (uVar1 == 0) {
      uVar3 = 0x40;
    }
    else {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar3 = 0x3f - (ulonglong)(0x3f - (int)lVar2);
      if (uVar3 < 3) goto LAB_141d9db83;
    }
    param_1 = ((ulonglong)((uint)(uVar1 >> ((char)uVar3 - 2U & 0x3f)) & 3) | uVar3 * 4) - 4;
  }
LAB_141d9db83:
  return param_2->spans + param_1;
}

// mi_stat_counter_print @ 141d9dba0

void __cdecl
mi_stat_counter_print
          (mi_stat_counter_s *param_1,char *param_2,_func___cdecl_void_char_ptr_void_ptr *param_3,
          void *param_4)

{
  _mi_fprintf(param_3,param_4,"%10s:");
  mi_printf_amount(param_1->total,-1,param_3,param_4,(char *)0x0);
  _mi_fprintf(param_3,param_4,"\n");
  return;
}

// mi_stat_print @ 141d9dc20

void __cdecl
mi_stat_print(mi_stat_count_s *param_1,char *param_2,long64 param_3,
             _func___cdecl_void_char_ptr_void_ptr *param_4,void *param_5)

{
  long64 lVar1;
  char *pcVar2;
  
  _mi_fprintf(param_4,param_5,"%10s:");
  lVar1 = param_1->peak;
  if (param_3 < 1) {
    if (-1 < param_3) {
      mi_printf_amount(lVar1,1,param_4,param_5,(char *)0x0);
      mi_printf_amount(param_1->allocated,1,param_4,param_5,(char *)0x0);
      _mi_fprintf(param_4,param_5,"%11s");
      mi_printf_amount(param_1->current,1,param_4,param_5,(char *)0x0);
      pcVar2 = "\n";
      goto LAB_141d9de49;
    }
    mi_printf_amount(lVar1,-1,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->allocated,-1,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->freed,-1,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->current,-1,param_4,param_5,(char *)0x0);
    if (param_3 != -1) {
      mi_printf_amount(-param_3,1,param_4,param_5,(char *)0x0);
      lVar1 = -(param_1->allocated / param_3);
      goto LAB_141d9ddba;
    }
    _mi_fprintf(param_4,param_5,"%22s");
  }
  else {
    mi_printf_amount(lVar1,param_3,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->allocated,param_3,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->freed,param_3,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_1->current,param_3,param_4,param_5,(char *)0x0);
    mi_printf_amount(param_3,1,param_4,param_5,(char *)0x0);
    if (param_3 == 1) {
      _mi_fprintf(param_4,param_5,"%11s");
    }
    else {
      lVar1 = param_1->allocated;
LAB_141d9ddba:
      mi_printf_amount(lVar1,0,param_4,param_5,(char *)0x0);
    }
  }
  pcVar2 = "  not all freed!\n";
  if (param_1->allocated <= param_1->freed) {
    pcVar2 = "  ok\n";
  }
LAB_141d9de49:
  _mi_fprintf(param_4,param_5,pcVar2);
  return;
}

// mi_stat_update @ 141d9de80

void __cdecl mi_stat_update(mi_stat_count_s *param_1,long64 param_2)

{
  long64 *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    if (((mi_stat_count_s *)0x154f911bf < param_1) && (param_1 < &_mi_process_is_initialized)) {
      LOCK();
      plVar1 = &param_1->current;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + param_2;
      UNLOCK();
      do {
        lVar2 = param_1->peak;
        if (lVar3 + param_2 <= lVar2) break;
        LOCK();
        bVar4 = lVar2 == param_1->peak;
        if (bVar4) {
          param_1->peak = lVar3 + param_2;
        }
        UNLOCK();
      } while (!bVar4);
      lVar3 = -param_2;
      if (-param_2 < 0) {
        lVar3 = param_2;
      }
      if (param_2 < 1) {
        param_1 = (mi_stat_count_s *)&param_1->freed;
      }
      LOCK();
      param_1->allocated = param_1->allocated + lVar3;
      UNLOCK();
      return;
    }
    lVar3 = param_1->current + param_2;
    param_1->current = lVar3;
    if (param_1->peak < lVar3) {
      param_1->peak = lVar3;
    }
    if (0 < param_2) {
      param_1->allocated = param_1->allocated + param_2;
      return;
    }
    param_1->freed = param_1->freed - param_2;
  }
  return;
}

// mi_stats_add @ 141d9df10

void __cdecl mi_stats_add(mi_stats_s *param_1,mi_stats_s *param_2)

{
  long64 *plVar1;
  mi_stat_count_s *pmVar2;
  longlong lVar3;
  mi_stat_counter_s *pmVar4;
  
  if (param_1 != param_2) {
    lVar3 = (param_2->segments).allocated;
    if ((lVar3 != 0) || ((param_2->segments).freed != 0)) {
      LOCK();
      (param_1->segments).allocated = (param_1->segments).allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments).current;
      *plVar1 = *plVar1 + (param_2->segments).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments).freed;
      *plVar1 = *plVar1 + (param_2->segments).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments).peak;
      *plVar1 = *plVar1 + (param_2->segments).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->pages;
    if ((pmVar2 != &param_2->pages) &&
       ((lVar3 = (param_2->pages).allocated, lVar3 != 0 || ((param_2->pages).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages).current;
      *plVar1 = *plVar1 + (param_2->pages).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages).freed;
      *plVar1 = *plVar1 + (param_2->pages).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages).peak;
      *plVar1 = *plVar1 + (param_2->pages).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->reserved;
    if ((pmVar2 != &param_2->reserved) &&
       ((lVar3 = (param_2->reserved).allocated, lVar3 != 0 || ((param_2->reserved).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reserved).current;
      *plVar1 = *plVar1 + (param_2->reserved).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reserved).freed;
      *plVar1 = *plVar1 + (param_2->reserved).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reserved).peak;
      *plVar1 = *plVar1 + (param_2->reserved).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->committed;
    if ((pmVar2 != &param_2->committed) &&
       ((lVar3 = (param_2->committed).allocated, lVar3 != 0 || ((param_2->committed).freed != 0))))
    {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->committed).current;
      *plVar1 = *plVar1 + (param_2->committed).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->committed).freed;
      *plVar1 = *plVar1 + (param_2->committed).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->committed).peak;
      *plVar1 = *plVar1 + (param_2->committed).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->reset;
    if ((pmVar2 != &param_2->reset) &&
       ((lVar3 = (param_2->reset).allocated, lVar3 != 0 || ((param_2->reset).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reset).current;
      *plVar1 = *plVar1 + (param_2->reset).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reset).freed;
      *plVar1 = *plVar1 + (param_2->reset).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->reset).peak;
      *plVar1 = *plVar1 + (param_2->reset).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->page_committed;
    if ((pmVar2 != &param_2->page_committed) &&
       ((lVar3 = (param_2->page_committed).allocated, lVar3 != 0 ||
        ((param_2->page_committed).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->page_committed).current;
      *plVar1 = *plVar1 + (param_2->page_committed).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->page_committed).freed;
      *plVar1 = *plVar1 + (param_2->page_committed).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->page_committed).peak;
      *plVar1 = *plVar1 + (param_2->page_committed).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->pages_abandoned;
    if ((pmVar2 != &param_2->pages_abandoned) &&
       ((lVar3 = (param_2->pages_abandoned).allocated, lVar3 != 0 ||
        ((param_2->pages_abandoned).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages_abandoned).current;
      *plVar1 = *plVar1 + (param_2->pages_abandoned).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages_abandoned).freed;
      *plVar1 = *plVar1 + (param_2->pages_abandoned).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages_abandoned).peak;
      *plVar1 = *plVar1 + (param_2->pages_abandoned).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->segments_abandoned;
    if ((pmVar2 != &param_2->segments_abandoned) &&
       ((lVar3 = (param_2->segments_abandoned).allocated, lVar3 != 0 ||
        ((param_2->segments_abandoned).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_abandoned).current;
      *plVar1 = *plVar1 + (param_2->segments_abandoned).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_abandoned).freed;
      *plVar1 = *plVar1 + (param_2->segments_abandoned).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_abandoned).peak;
      *plVar1 = *plVar1 + (param_2->segments_abandoned).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->threads;
    if ((pmVar2 != &param_2->threads) &&
       ((lVar3 = (param_2->threads).allocated, lVar3 != 0 || ((param_2->threads).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->threads).current;
      *plVar1 = *plVar1 + (param_2->threads).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->threads).freed;
      *plVar1 = *plVar1 + (param_2->threads).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->threads).peak;
      *plVar1 = *plVar1 + (param_2->threads).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->malloc;
    if ((pmVar2 != &param_2->malloc) &&
       ((lVar3 = (param_2->malloc).allocated, lVar3 != 0 || ((param_2->malloc).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->malloc).current;
      *plVar1 = *plVar1 + (param_2->malloc).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->malloc).freed;
      *plVar1 = *plVar1 + (param_2->malloc).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->malloc).peak;
      *plVar1 = *plVar1 + (param_2->malloc).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->segments_cache;
    if ((pmVar2 != &param_2->segments_cache) &&
       ((lVar3 = (param_2->segments_cache).allocated, lVar3 != 0 ||
        ((param_2->segments_cache).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_cache).current;
      *plVar1 = *plVar1 + (param_2->segments_cache).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_cache).freed;
      *plVar1 = *plVar1 + (param_2->segments_cache).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->segments_cache).peak;
      *plVar1 = *plVar1 + (param_2->segments_cache).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->normal;
    if ((pmVar2 != &param_2->normal) &&
       ((lVar3 = (param_2->normal).allocated, lVar3 != 0 || ((param_2->normal).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->normal).current;
      *plVar1 = *plVar1 + (param_2->normal).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->normal).freed;
      *plVar1 = *plVar1 + (param_2->normal).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->normal).peak;
      *plVar1 = *plVar1 + (param_2->normal).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->huge;
    if ((pmVar2 != &param_2->huge) &&
       ((lVar3 = (param_2->huge).allocated, lVar3 != 0 || ((param_2->huge).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->huge).current;
      *plVar1 = *plVar1 + (param_2->huge).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->huge).freed;
      *plVar1 = *plVar1 + (param_2->huge).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->huge).peak;
      *plVar1 = *plVar1 + (param_2->huge).peak;
      UNLOCK();
    }
    pmVar2 = &param_1->large;
    if ((pmVar2 != &param_2->large) &&
       ((lVar3 = (param_2->large).allocated, lVar3 != 0 || ((param_2->large).freed != 0)))) {
      LOCK();
      pmVar2->allocated = pmVar2->allocated + lVar3;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->large).current;
      *plVar1 = *plVar1 + (param_2->large).current;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->large).freed;
      *plVar1 = *plVar1 + (param_2->large).freed;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->large).peak;
      *plVar1 = *plVar1 + (param_2->large).peak;
      UNLOCK();
    }
    pmVar4 = &param_1->pages_extended;
    if (pmVar4 != &param_2->pages_extended) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->pages_extended).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->pages_extended).count;
      *plVar1 = *plVar1 + (param_2->pages_extended).count;
      UNLOCK();
    }
    pmVar4 = &param_1->mmap_calls;
    if (pmVar4 != &param_2->mmap_calls) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->mmap_calls).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->mmap_calls).count;
      *plVar1 = *plVar1 + (param_2->mmap_calls).count;
      UNLOCK();
    }
    pmVar4 = &param_1->commit_calls;
    if (pmVar4 != &param_2->commit_calls) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->commit_calls).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->commit_calls).count;
      *plVar1 = *plVar1 + (param_2->commit_calls).count;
      UNLOCK();
    }
    pmVar4 = &param_1->page_no_retire;
    if (pmVar4 != &param_2->page_no_retire) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->page_no_retire).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->page_no_retire).count;
      *plVar1 = *plVar1 + (param_2->page_no_retire).count;
      UNLOCK();
    }
    pmVar4 = &param_1->searches;
    if (pmVar4 != &param_2->searches) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->searches).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->searches).count;
      *plVar1 = *plVar1 + (param_2->searches).count;
      UNLOCK();
    }
    pmVar4 = &param_1->normal_count;
    if (pmVar4 != &param_2->normal_count) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->normal_count).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->normal_count).count;
      *plVar1 = *plVar1 + (param_2->normal_count).count;
      UNLOCK();
    }
    pmVar4 = &param_1->huge_count;
    if (pmVar4 != &param_2->huge_count) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->huge_count).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->huge_count).count;
      *plVar1 = *plVar1 + (param_2->huge_count).count;
      UNLOCK();
    }
    pmVar4 = &param_1->large_count;
    if (pmVar4 != &param_2->large_count) {
      LOCK();
      pmVar4->total = pmVar4->total + (param_2->large_count).total;
      UNLOCK();
      LOCK();
      plVar1 = &(param_1->large_count).count;
      *plVar1 = *plVar1 + (param_2->large_count).count;
      UNLOCK();
    }
  }
  return;
}

// mi_stats_merge @ 141d9e3a0

void __cdecl mi_stats_merge(void)

{
  mi_heap_s *pmVar1;
  mi_stats_s *_Dst;
  
  pmVar1 = mi_heap_get_default();
  _Dst = &pmVar1->tld->stats;
  if (_Dst != &_mi_stats_main) {
    mi_stats_add(&_mi_stats_main,_Dst);
    memset(_Dst,0,0x240);
    return;
  }
  return;
}

// mi_stats_print @ 141d9e3f0

void __cdecl mi_stats_print(void *param_1)

{
  mi_heap_s *pmVar1;
  mi_stats_s *_Dst;
  
  pmVar1 = mi_heap_get_default();
  _Dst = &pmVar1->tld->stats;
  if (_Dst != &_mi_stats_main) {
    mi_stats_add(&_mi_stats_main,_Dst);
    memset(_Dst,0,0x240);
  }
  _mi_stats_print(&_mi_stats_main,param_1,(void *)0x0);
  return;
}

// mi_stats_print_out @ 141d9e460

void __cdecl mi_stats_print_out(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2)

{
  mi_heap_s *pmVar1;
  mi_stats_s *_Dst;
  
  pmVar1 = mi_heap_get_default();
  _Dst = &pmVar1->tld->stats;
  if (_Dst != &_mi_stats_main) {
    mi_stats_add(&_mi_stats_main,_Dst);
    memset(_Dst,0,0x240);
  }
  _mi_stats_print(&_mi_stats_main,param_1,param_2);
  return;
}

// mi_stats_reset @ 141d9e4d0

void __cdecl mi_stats_reset(void)

{
  mi_heap_s *pmVar1;
  long64 lVar2;
  long64 lVar3;
  mi_stats_s *_Dst;
  
  pmVar1 = mi_heap_get_default();
  _Dst = &pmVar1->tld->stats;
  if (_Dst != &_mi_stats_main) {
    memset(_Dst,0,0x240);
  }
  memset(&_mi_stats_main,0,0x240);
  if (mi_process_start == 0) {
    if ((double)mi_clock_diff == 0.0) {
      lVar2 = _mi_clock_now();
      lVar3 = _mi_clock_now();
      mi_clock_diff = lVar3 - lVar2;
    }
    mi_process_start = _mi_clock_now();
  }
  return;
}

// mi_strdup @ 141d9e560

char * __cdecl mi_strdup(char *param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  size_t sVar3;
  char *_Dst;
  ulonglong _Size;
  char *pcVar4;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = strlen(param_1);
  _Size = sVar3 + 1;
  if (_Size < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (sVar3 + 8 & 0xfffffffffffffff8));
    _Dst = *(char **)(lVar2 + 0x10);
    if (_Dst != (char *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d9e5e7;
    }
  }
  _Dst = _mi_malloc_generic(pmVar1,_Size);
LAB_141d9e5e7:
  if (_Dst != (char *)0x0) {
    pcVar4 = _Dst;
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,param_1,_Size);
    }
    else {
      for (; _Size != 0; _Size = _Size - 1) {
        *pcVar4 = *param_1;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  return _Dst;
}

// mi_strndup @ 141d9e630

char * __cdecl mi_strndup(char *param_1,ulong64 param_2)

{
  char *pcVar1;
  
  pcVar1 = mi_heap_strndup(*(mi_heap_s **)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc18),param_1,param_2);
  return pcVar1;
}

// mi_thread_done @ 141d9e670

/* WARNING: Removing unreachable block (ram,0x000141d9e6ac) */

void __cdecl mi_thread_done(void)

{
  mi_heap_s *pmVar1;
  bool bVar2;
  mi_heap_s *pmVar3;
  ulong dwFlsIndex;
  int iVar4;
  int *piVar5;
  mi_heap_s *pmVar6;
  ulonglong uVar7;
  mi_stats_s *_Dst;
  long64 lVar8;
  
  lVar8 = _mi_stats_main.threads.current;
  dwFlsIndex = mi_fls_key;
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  LOCK();
  _mi_stats_main.threads.current = _mi_stats_main.threads.current + -1;
  UNLOCK();
  if (_mi_stats_main.threads.peak < lVar8 + -1) {
    LOCK();
    UNLOCK();
    _mi_stats_main.threads.peak = lVar8 + -1;
  }
  LOCK();
  _mi_stats_main.threads.freed = _mi_stats_main.threads.freed + 1;
  UNLOCK();
  if ((void *)pmVar1->thread_id != Self) {
    return;
  }
  if (pmVar1 == &_mi_heap_empty) {
    return;
  }
  if ((_mi_heap_main.thread_id == 0) || ((void *)_mi_heap_main.thread_id == Self)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pmVar6 = &_mi_heap_empty;
  if (bVar2) {
    pmVar6 = &_mi_heap_main;
  }
  *(mi_heap_s **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18) = pmVar6
  ;
  FlsSetValue(dwFlsIndex,pmVar6);
  pmVar1 = pmVar1->tld->heap_backing;
  if (pmVar1 != &_mi_heap_empty) {
    pmVar6 = pmVar1->tld->heaps;
    while (pmVar3 = pmVar6, pmVar3 != (mi_heap_s *)0x0) {
      pmVar6 = pmVar3->next;
      if (pmVar3 != pmVar1) {
        mi_heap_delete(pmVar3);
      }
    }
    if (pmVar1 != &_mi_heap_main) {
      _mi_heap_collect_abandon(pmVar1);
    }
    _Dst = &pmVar1->tld->stats;
    if (_Dst != &_mi_stats_main) {
      mi_stats_add(&_mi_stats_main,_Dst);
      memset(_Dst,0,0x240);
    }
    if ((pmVar1 != &_mi_heap_main) && (pmVar1 != (mi_heap_s *)0x0)) {
      uVar7 = 0x1208;
      if (0x1208 < ~os_page_size) {
        uVar7 = os_page_size + 0x1207;
        if ((os_page_size & os_page_size - 1) == 0) {
          uVar7 = ~(os_page_size - 1) & uVar7;
        }
        else {
          uVar7 = uVar7 - uVar7 % os_page_size;
        }
        if (uVar7 == 0) {
          return;
        }
      }
      iVar4 = (*pVirtualFree)(pmVar1,0,0x8000);
      lVar8 = -uVar7;
      mi_stat_update(&_mi_stats_main.committed,lVar8);
      mi_stat_update(&_mi_stats_main.reserved,lVar8);
      if (iVar4 == 0) {
        piVar5 = _errno();
        strerror(*piVar5);
        _mi_warning_message("munmap failed: %s, addr 0x%8li, size %lu\n");
      }
    }
  }
  return;
}

// mi_thread_init @ 141d9e6e0

/* WARNING: Removing unreachable block (ram,0x000141d9e70f) */

void __cdecl mi_thread_init(void)

{
  bool bVar1;
  
  mi_process_init();
  bVar1 = _mi_heap_init();
  if (!bVar1) {
    LOCK();
    UNLOCK();
    if (_mi_stats_main.threads.peak < _mi_stats_main.threads.current + 1) {
      LOCK();
      UNLOCK();
      _mi_stats_main.threads.peak = _mi_stats_main.threads.current + 1;
    }
    LOCK();
    _mi_stats_main.threads.allocated = _mi_stats_main.threads.allocated + 1;
    UNLOCK();
    _mi_stats_main.threads.current = _mi_stats_main.threads.current + 1;
  }
  return;
}

// mi_thread_stats_print_out @ 141d9e730

void __cdecl mi_thread_stats_print_out(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2)

{
  mi_heap_s *pmVar1;
  
  pmVar1 = mi_heap_get_default();
  _mi_stats_print(&pmVar1->tld->stats,param_1,param_2);
  return;
}

// mi_try_new @ 141d9e770

void * __cdecl mi_try_new(ulong64 param_1,bool param_2)

{
  if (!param_2) {
                    /* WARNING: Subroutine does not return */
    exit(0xc);
  }
  return (void *)0x0;
}

// mi_usable_size @ 141d9e7a0

ulong64 __cdecl mi_usable_size(void *param_1)

{
  ulonglong uVar1;
  mi_block_s *pmVar2;
  ulong64 uVar3;
  mi_segment_s *pmVar4;
  mi_page_s *pmVar5;
  
  pmVar4 = (mi_segment_s *)((ulonglong)param_1 & 0xffffffffff800000);
  if (pmVar4 == (mi_segment_s *)0x0) {
    return 0;
  }
  uVar1 = (ulonglong)((longlong)param_1 - (longlong)pmVar4) >> 0x10;
  pmVar5 = (mi_page_s *)
           ((longlong)pmVar4 +
           ((uVar1 * 0x50 + 0x80) - (ulonglong)pmVar4->slices[uVar1].slice_offset));
  if (((pmVar5->flags).full_aligned & 2) != 0) {
    pmVar2 = _mi_page_ptr_unalign(pmVar4,pmVar5,param_1);
    uVar1 = (ulonglong)pmVar5->xblock_size;
    if (0x7ffffff < uVar1) {
      uVar1 = (ulonglong)pmVar5->slice_count << 0x10;
    }
    return (uVar1 - (longlong)param_1) + (longlong)pmVar2;
  }
  uVar3 = (ulong64)pmVar5->xblock_size;
  if (0x7ffffff < uVar3) {
    uVar3 = (ulonglong)pmVar5->slice_count << 0x10;
  }
  return uVar3;
}

// mi_valloc @ 141d9e840

void * __cdecl mi_valloc(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if ((os_page_size != 8) && ((os_page_size != 0x10 || (param_1 < 9)))) {
    pvVar4 = mi_heap_malloc_zero_aligned_at
                       (*(mi_heap_s **)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18
                         ),param_1,os_page_size,0,false);
    return pvVar4;
  }
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (param_1 < 0x401) {
    lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      *(undefined8 *)(lVar2 + 0x10) = *puVar3;
      return puVar3;
    }
  }
  pvVar4 = _mi_malloc_generic(pmVar1,param_1);
  return pvVar4;
}

// mi_version @ 141d9e900

int __cdecl mi_version(void)

{
  return 200;
}

// mi_vfprintf @ 141d9e910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
mi_vfprintf(_func___cdecl_void_char_ptr_void_ptr *param_1,void *param_2,char *param_3,char *param_4,
           char *param_5)

{
  void *pvVar1;
  ulong64 *puVar2;
  _func___cdecl_void_char_ptr_void_ptr *p_Var3;
  code *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  char *local_250;
  char local_248 [512];
  ulonglong local_48;
  
  if (param_4 != (char *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
    pcVar5 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc20);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      puVar2 = __local_stdio_printf_options();
      local_250 = param_5;
      local_258 = 0;
      __stdio_common_vsprintf(*puVar2 | 2,local_248,0x1ff,param_4);
      *pcVar5 = '\0';
      if (((param_1 == (_func___cdecl_void_char_ptr_void_ptr *)0x0) ||
          (p_Var3 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(1), param_1 == p_Var3))
         || (p_Var3 = (_func___cdecl_void_char_ptr_void_ptr *)__acrt_iob_func(2), param_1 == p_Var3)
         ) {
        pvVar1 = mi_out_arg;
        pcVar4 = mi_out_default;
        if (*pcVar5 == '\0') {
          bVar6 = mi_out_default == (_func___cdecl_void_char_ptr_void_ptr *)0x0;
          *pcVar5 = '\x01';
          if (bVar6) {
            pcVar4 = mi_out_buf;
          }
          if (param_3 != (char *)0x0) {
            (*pcVar4)(param_3,pvVar1);
          }
          (*pcVar4)(local_248,pvVar1);
          *pcVar5 = '\0';
        }
      }
      else {
        if (param_3 != (char *)0x0) {
          (*param_1)(param_3,param_2);
        }
        (*param_1)(local_248,param_2);
      }
    }
  }
  return;
}

// mi_wcsdup @ 141d9ea60

ushort * __cdecl mi_wcsdup(ushort *param_1)

{
  ushort uVar1;
  mi_heap_s *pmVar2;
  longlong lVar3;
  ushort *_Dst;
  ulonglong _Size;
  ushort *puVar4;
  
  lVar3 = 0;
  if (param_1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  uVar1 = *param_1;
  while (uVar1 != 0) {
    lVar3 = lVar3 + 1;
    uVar1 = param_1[lVar3];
  }
  _Size = lVar3 * 2 + 2;
  pmVar2 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (_Size < 0x401) {
    lVar3 = *(longlong *)
             ((longlong)pmVar2->pages_free_direct + (lVar3 * 2 + 9U & 0xfffffffffffffff8));
    _Dst = *(ushort **)(lVar3 + 0x10);
    if (_Dst != (ushort *)0x0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d9eae7;
    }
  }
  _Dst = _mi_malloc_generic(pmVar2,_Size);
LAB_141d9eae7:
  if (_Dst != (ushort *)0x0) {
    puVar4 = _Dst;
    if (_mi_cpu_has_fsrm != false) {
      for (; _Size != 0; _Size = _Size - 1) {
        *(char *)puVar4 = (char)*param_1;
        param_1 = (ushort *)((longlong)param_1 + 1);
        puVar4 = (ushort *)((longlong)puVar4 + 1);
      }
      return _Dst;
    }
    memcpy(_Dst,param_1,_Size);
  }
  return _Dst;
}

// mi_wdupenv_s @ 141d9eb50

int __cdecl mi_wdupenv_s(ushort **param_1,ulong64 *param_2,ushort *param_3)

{
  wchar_t wVar1;
  mi_heap_s *pmVar2;
  wchar_t *_Str;
  ushort *_Dst;
  size_t sVar3;
  ulonglong _Size;
  wchar_t *pwVar4;
  longlong lVar5;
  ushort *puVar6;
  
  if ((param_1 == (ushort **)0x0) || (param_3 == (ushort *)0x0)) {
    return 0x16;
  }
  lVar5 = 0;
  if (param_2 != (ulong64 *)0x0) {
    *param_2 = 0;
  }
  _Str = _wgetenv((wchar_t *)param_3);
  if (_Str == (wchar_t *)0x0) {
    *param_1 = (ushort *)0x0;
    return 0;
  }
  wVar1 = *_Str;
  while (wVar1 != L'\0') {
    lVar5 = lVar5 + 1;
    wVar1 = _Str[lVar5];
  }
  _Size = lVar5 * 2 + 2;
  pmVar2 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  if (_Size < 0x401) {
    lVar5 = *(longlong *)
             ((longlong)pmVar2->pages_free_direct + (lVar5 * 2 + 9U & 0xfffffffffffffff8));
    _Dst = *(ushort **)(lVar5 + 0x10);
    if (_Dst != (ushort *)0x0) {
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)_Dst;
      goto LAB_141d9ec14;
    }
  }
  _Dst = _mi_malloc_generic(pmVar2,_Size);
LAB_141d9ec14:
  if (_Dst != (ushort *)0x0) {
    pwVar4 = _Str;
    puVar6 = _Dst;
    if (_mi_cpu_has_fsrm == false) {
      memcpy(_Dst,_Str,_Size);
    }
    else {
      for (; _Size != 0; _Size = _Size - 1) {
        *(char *)puVar6 = (char)*pwVar4;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
        puVar6 = (ushort *)((longlong)puVar6 + 1);
      }
    }
    *param_1 = _Dst;
    if (param_2 != (ulong64 *)0x0) {
      sVar3 = wcslen(_Str);
      *param_2 = sVar3;
    }
    return 0;
  }
  *param_1 = (ushort *)0x0;
  return 0xc;
}

// mi_win_enable_large_os_pages @ 141d9eca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl mi_win_enable_large_os_pages(void)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE ProcessHandle;
  bool bVar3;
  undefined1 auStackY_58 [32];
  HANDLE local_28;
  _TOKEN_PRIVILEGES local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (large_os_page_size != 0) {
    return true;
  }
  DVar2 = 0;
  local_28 = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_28);
  if (BVar1 == 0) {
LAB_141d9ed87:
    GetLastError();
  }
  else {
    BVar1 = LookupPrivilegeValueW
                      ((LPCWSTR)0x0,L"SeLockMemoryPrivilege",&local_20.Privileges[0].Luid);
    bVar3 = false;
    if (BVar1 != 0) {
      local_20.PrivilegeCount = 1;
      local_20.Privileges[0].Attributes = 2;
      BVar1 = AdjustTokenPrivileges(local_28,0,&local_20,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      bVar3 = false;
      if (BVar1 != 0) {
        DVar2 = GetLastError();
        bVar3 = DVar2 == 0;
        if (DVar2 == 0) {
          large_os_page_size = GetLargePageMinimum();
        }
      }
    }
    CloseHandle(local_28);
    bVar3 = !bVar3;
    if (!bVar3) goto LAB_141d9ed9f;
    if (DVar2 == 0) goto LAB_141d9ed87;
  }
  _mi_warning_message("cannot enable large OS page support, error %lu\n");
  bVar3 = true;
LAB_141d9ed9f:
  return !bVar3;
}

// mi_win_virtual_alloc @ 141d9edd0

/* WARNING: Removing unreachable block (ram,0x000141d9ee91) */

void * __cdecl
mi_win_virtual_alloc
          (void *param_1,ulong64 param_2,ulong64 param_3,ulong param_4,bool param_5,bool param_6,
          bool *param_7)

{
  bool bVar1;
  void *pvVar2;
  
  if (!param_5) {
    if (large_os_page_size == 0) goto LAB_141d9eecf;
    if (options[6].init == UNINIT) {
      mi_option_init(options + 6);
    }
    if (options[6].value == 0) goto LAB_141d9eecf;
    if ((param_2 % large_os_page_size == 0) && (param_3 % large_os_page_size == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_141d9eecf;
  }
  if ((param_6) && ((param_4 & 0x3000) == 0x3000)) {
    if ((param_5) || (large_page_try_ok == 0)) {
      *param_7 = true;
      pvVar2 = mi_win_virtual_allocx(param_1,param_2,param_3,param_4 | 0x20000000);
      if (param_5) {
        return pvVar2;
      }
      if (pvVar2 != (void *)0x0) {
        return pvVar2;
      }
      large_page_try_ok = 10;
    }
    else {
      large_page_try_ok = large_page_try_ok - 1;
      LOCK();
      UNLOCK();
    }
  }
LAB_141d9eecf:
  *param_7 = (bool)((byte)(param_4 >> 0x1d) & 1);
  pvVar2 = mi_win_virtual_allocx(param_1,param_2,param_3,param_4);
  if (pvVar2 == (void *)0x0) {
    GetLastError();
    _mi_warning_message(
                       "unable to allocate OS memory (%zu bytes, error code: %i, address: %p, large only: %d, allow large: %d)\n"
                       );
  }
  return pvVar2;
}

// mi_win_virtual_allocx @ 141d9ef50

void * __cdecl mi_win_virtual_allocx(void *param_1,ulong64 param_2,ulong64 param_3,ulong param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulong64 local_18;
  
  if (((param_3 != 0) && (param_3 % os_page_size == 0)) &&
     (pVirtualAlloc2 !=
      (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0)) {
    local_38 = 1;
    local_30 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = param_3;
    pvVar4 = GetCurrentProcess();
    pvVar5 = (*pVirtualAlloc2)(pvVar4,param_1,param_2,param_4,4,&local_38,1);
    if (pvVar5 != (void *)0x0) {
      return pvVar5;
    }
  }
  uVar2 = aligned_base;
  if (((param_1 == (void *)0x0) && (param_3 - 1 < 0x800000)) && ((param_2 & 0x7fffff) == 0)) {
    LOCK();
    uVar6 = aligned_base + param_2;
    UNLOCK();
    uVar1 = aligned_base - 1;
    pvVar5 = (void *)aligned_base;
    aligned_base = uVar6;
    if (0x1dffffffffff < uVar1) {
      uVar6 = _mi_heap_random_next
                        (*(mi_heap_s **)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc18));
      LOCK();
      uVar6 = ((ulonglong)((uint)(uVar6 >> 0x11) & 0xfffff) + 0x80000) * 0x800000;
      if (uVar2 + param_2 != aligned_base) {
        uVar6 = aligned_base;
      }
      aligned_base = uVar6;
      UNLOCK();
      LOCK();
      UNLOCK();
      pvVar5 = (void *)aligned_base;
      aligned_base = aligned_base + param_2;
    }
    if (((ulonglong)pvVar5 % param_3 == 0) && (pvVar5 != (void *)0x0)) {
      pvVar5 = (*pVirtualAlloc)(pvVar5,param_2,param_4,4);
      if (pvVar5 != (void *)0x0) {
        return pvVar5;
      }
      DVar3 = GetLastError();
      if ((DVar3 != 0x1e7) && (DVar3 != 0x57)) {
        return (void *)0x0;
      }
    }
  }
  pvVar5 = (*pVirtualAlloc)(param_1,param_2,param_4,4);
  return pvVar5;
}

// mi_zalloc @ 141d9f110

void * __cdecl mi_zalloc(ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = _mi_heap_malloc_zero
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,true);
  return pvVar1;
}

// mi_zalloc_aligned @ 141d9f150

void * __cdecl mi_zalloc_aligned(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,0,true);
  return pvVar1;
}

// mi_zalloc_aligned_at @ 141d9f1a0

void * __cdecl mi_zalloc_aligned_at(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = mi_heap_malloc_zero_aligned_at
                     (*(mi_heap_s **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18),
                      param_1,param_2,param_3,true);
  return pvVar1;
}

// mi_zalloc_small @ 141d9f1f0

void * __cdecl mi_zalloc_small(ulong64 param_1)

{
  mi_heap_s *pmVar1;
  undefined8 *_Dst;
  ulong64 _Size;
  longlong lVar2;
  
  pmVar1 = *(mi_heap_s **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc18)
  ;
  lVar2 = *(longlong *)((longlong)pmVar1->pages_free_direct + (param_1 + 7 & 0xfffffffffffffff8));
  _Dst = *(undefined8 **)(lVar2 + 0x10);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = _mi_malloc_generic(pmVar1,param_1);
    if (_Dst == (undefined8 *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    *(undefined8 *)(lVar2 + 0x10) = *_Dst;
  }
  lVar2 = ((ulonglong)_Dst & 0xffffffffff800000) +
          ((longlong)_Dst - ((ulonglong)_Dst & 0xffffffffff800000) >> 0x10) * 0x50 + 0x80;
  if (((*(byte *)((lVar2 - (ulonglong)*(uint *)(lVar2 + 4)) + 0xf) & 1) != 0) && (8 < param_1)) {
    *_Dst = 0;
    return _Dst;
  }
  _Size = mi_usable_size(_Dst);
  memset(_Dst,0,_Size);
  return _Dst;
}

