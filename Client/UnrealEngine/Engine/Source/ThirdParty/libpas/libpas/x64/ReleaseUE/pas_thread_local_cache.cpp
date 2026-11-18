// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 24

// pas_thread_local_cache_size_for_allocator_index_capacity @ 140d568c0

ulong64 __cdecl pas_thread_local_cache_size_for_allocator_index_capacity(uint param_1)

{
  code *pcVar1;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (pas_page_malloc_cached_alignment - 1 <
      (pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1)) {
    return -pas_page_malloc_cached_alignment &
           (param_1 << 3) + pas_page_malloc_cached_alignment + 0x1f7f;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_fast_tls_destructor @ 140d56910

void __cdecl pas_fast_tls_destructor(void *param_1)

{
  code *pcVar1;
  
  pas_fast_tls_set(&DAT_00000001);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08) ==
      1) {
    if (param_1 != &DAT_00000001) {
      destroy(param_1,pas_lock_is_not_held);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// destroy @ 140d56990

void __cdecl destroy(pas_thread_local_cache *param_1,pas_lock_hold_mode param_2)

{
  pas_lock *SRWLock;
  pas_thread_local_cache_node *ppVar1;
  code *pcVar2;
  BOOL BVar3;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if (param_1 != (pas_thread_local_cache *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    flush_deallocation_log_for_scavenger(param_1);
    param_1->deallocation_log_index = 0;
    param_1->num_logged_bytes = 0;
    param_1->deallocation_log_dirty = true;
    ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    pas_thread_local_cache_stop_local_allocators(param_1,pas_lock_is_held);
  }
  ppVar1 = param_1->node;
  SRWLock = &ppVar1->scavenger_lock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pas_thread_local_cache_node_deallocate(ppVar1);
  BVar3 = CloseHandle(param_1->thread);
  if (BVar3 != 0) {
    pas_thread_local_cache_deallocate(param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (param_2 != pas_lock_is_not_held) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140d56a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_create @ 140d56a80

pas_thread_local_cache * __cdecl pas_thread_local_cache_create(void)

{
  code *pcVar1;
  uint uVar2;
  BOOL BVar3;
  pas_thread_local_cache *ppVar4;
  pas_thread_local_cache_node *ppVar5;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  ulonglong uVar6;
  pas_thread_local_cache_layout_node_opaque *ppVar7;
  ulong64 uVar8;
  longlong lVar9;
  pas_thread_local_cache_layout_segment *ppVar10;
  
  uVar2 = pas_thread_local_cache_layout_next_allocator_index;
  ppVar4 = allocate_cache(pas_thread_local_cache_layout_next_allocator_index);
  ppVar5 = pas_thread_local_cache_node_allocate();
  ppVar4->node = ppVar5;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = GetCurrentThread();
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,&ppVar4->thread,0,
                          0,2);
  if (BVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar4->allocator_index_upper_bound = uVar2;
  pas_local_allocator_construct_unselected((pas_local_allocator *)ppVar4->local_allocators);
  if (pas_thread_local_cache_layout_first_segment != (pas_thread_local_cache_layout_segment *)0x0) {
    ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
             (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
    if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar7) {
      ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
    }
    if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
      lVar9 = 0;
      ppVar10 = pas_thread_local_cache_layout_first_segment;
      do {
        while( true ) {
          pas_thread_local_cache_layout_node_commit_and_construct(ppVar7,ppVar4);
          ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
                   (ulonglong)ppVar10->nodes[lVar9 + 1].payload;
          if (ppVar7 <= (pas_thread_local_cache_layout_node_opaque *)&DAT_00000007) break;
          ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
          if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d56b50;
LAB_140d56b87:
          ppVar10 = ppVar10->next;
          if (ppVar10 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d56bb1;
          uVar6 = (ulonglong)ppVar10->nodes[0].payload;
          uVar8 = 0;
          if (7 < uVar6) {
            uVar8 = pas_compact_heap_reservation_base;
          }
          ppVar7 = (pas_thread_local_cache_layout_node_opaque *)(uVar8 + uVar6);
          lVar9 = 0;
          if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d56bb1;
        }
        if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d56b87;
LAB_140d56b50:
        lVar9 = lVar9 + 1;
      } while (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0);
    }
  }
LAB_140d56bb1:
  ppVar4->node->cache = ppVar4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(longlong *)(lVar9 + 0x9c08) == 1) &&
     ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d48) != '\0' || (__dyn_tls_on_demand_init(), *(ulonglong *)(lVar9 + 0x9c08) < 2))
     )) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_fast_tls_set(ppVar4);
  return ppVar4;
}

// allocate_cache @ 140d56c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_thread_local_cache * __cdecl allocate_cache(uint param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  int iVar3;
  pas_thread_local_cache *ppVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  pas_alignment local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_1 < 8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar7 = -uVar2 & uVar2 + param_1 * 8 + 0x1f7f;
  local_40.alignment_begin = 0;
  local_40.alignment = pas_page_malloc_cached_alignment;
  ppVar4 = pas_large_utility_free_heap_allocate_with_alignment
                     (uVar7,&local_40,"pas_thread_local_cache");
  memset(ppVar4,0,uVar7);
  uVar7 = (ulonglong)(param_1 + 0x1f >> 3 & 0xfffffffc);
  puVar5 = pas_large_utility_free_heap_allocate
                     (uVar7,"pas_thread_local_cache/should_stop_bitvector");
  ppVar4->should_stop_bitvector = puVar5;
  memset(puVar5,0,uVar7);
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar8 = (ulonglong)(param_1 * 8) + 0x1f7f;
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  if (((-uVar2 & uVar2 + lVar8) >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f)) + 0x1f <
      0x20) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  puVar5 = pas_large_utility_free_heap_allocate
                     (((-uVar2 & uVar2 + lVar8) >>
                      ((byte)pas_page_malloc_cached_alignment_shift & 0x3f)) + 0x1f >> 3 &
                      0xfffffffffffffffc,"pas_thread_local_cache/pages_committed");
  ppVar4->pages_committed = puVar5;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  memset(ppVar4->pages_committed,0,
         ((-uVar2 & uVar2 + lVar8) >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f)) + 0x1f
         >> 3 & 0x1ffffffffffffffc);
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = pas_page_malloc_cached_alignment;
  if (pas_page_malloc_cached_alignment - 1 <
      (pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1)) {
    if (pas_page_malloc_cached_alignment_shift == 0) {
      pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
    }
    uVar7 = (-uVar2 & lVar8 + uVar2) >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
    if (uVar7 != 0) {
      uVar6 = uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = uVar7 - 1;
        ppVar4->pages_committed[uVar6 >> 5] =
             ppVar4->pages_committed[uVar6 >> 5] | 1 << ((byte)uVar6 & 0x1e);
      }
      if (uVar7 != 1) {
        uVar7 = uVar6 - 1;
        iVar3 = (int)uVar6;
        do {
          iVar3 = iVar3 + -2;
          ppVar4->pages_committed[uVar7 >> 5] =
               ppVar4->pages_committed[uVar7 >> 5] | 1 << ((byte)iVar3 + 1 & 0x1f);
          ppVar4->pages_committed[uVar7 - 1 >> 5] =
               ppVar4->pages_committed[uVar7 - 1 >> 5] | 1 << ((byte)iVar3 & 0x1f);
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0xffffffffffffffff);
      }
    }
    ppVar4->allocator_index_capacity = param_1;
    if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
      return ppVar4;
    }
    pcVar1 = (code *)swi(3);
    ppVar4 = (pas_thread_local_cache *)(*pcVar1)();
    return ppVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_destroy @ 140d56fd0

void __cdecl pas_thread_local_cache_destroy(pas_lock_hold_mode param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  ppVar3 = *(pas_thread_local_cache **)(lVar2 + 0x9c08);
  if (ppVar3 < (pas_thread_local_cache *)&DAT_00000002) {
    return;
  }
  puVar1 = (ulonglong *)(lVar2 + 0x9c08);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
    if (*puVar1 != 1) goto LAB_140d57085;
  }
  else if (ppVar3 != (pas_thread_local_cache *)&DAT_00000001) goto LAB_140d57085;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d48) != '\0') || (__dyn_tls_on_demand_init(), *puVar1 < 2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
LAB_140d57085:
  pas_fast_tls_set((void *)0x0);
  destroy(ppVar3,param_1);
  return;
}

// pas_thread_local_cache_get_slow @ 140d570b0

pas_thread_local_cache * __cdecl
pas_thread_local_cache_get_slow(pas_heap_config *param_1,pas_lock_hold_mode param_2)

{
  code *pcVar1;
  pas_thread_local_cache *ppVar2;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  pas_fast_tls_initialize_if_necessary();
  pas_heap_config_activate(param_1);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulonglong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08) < 2
     ) {
    ppVar2 = pas_thread_local_cache_create();
    if (param_2 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_get_local_allocator_slow @ 140d57150

pas_local_allocator_result * __cdecl
pas_thread_local_cache_get_local_allocator_slow
          (pas_local_allocator_result *__return_storage_ptr__,pas_thread_local_cache *param_1,
          uint param_2,pas_lock_hold_mode param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  pas_thread_local_cache *ppVar5;
  ulonglong uVar6;
  longlong lVar7;
  pas_thread_local_cache_layout_segment *ppVar8;
  pas_thread_local_cache_layout_node_opaque *ppVar9;
  ulong64 uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = param_1->allocator_index_upper_bound;
  if (param_2 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_thread_local_cache_flush_deallocation_log(param_1,param_3);
  if (param_3 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  uVar3 = pas_thread_local_cache_layout_next_allocator_index;
  if (pas_thread_local_cache_layout_next_allocator_index <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar5 = param_1;
  if (param_1->allocator_index_capacity < pas_thread_local_cache_layout_next_allocator_index) {
    uVar4 = param_1->allocator_index_capacity * 2;
    if (uVar4 <= pas_thread_local_cache_layout_next_allocator_index) {
      uVar4 = pas_thread_local_cache_layout_next_allocator_index;
    }
    ppVar5 = allocate_cache(uVar4);
    ppVar5->node = param_1->node;
    ppVar5->thread = param_1->thread;
    ppVar5->allocator_index_upper_bound = param_1->allocator_index_upper_bound;
    pas_local_allocator_construct_unselected((pas_local_allocator *)ppVar5->local_allocators);
    if (pas_thread_local_cache_layout_first_segment != (pas_thread_local_cache_layout_segment *)0x0)
    {
      ppVar9 = (pas_thread_local_cache_layout_node_opaque *)
               (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
      if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar9) {
        ppVar9 = ppVar9 + pas_compact_heap_reservation_base;
      }
      if (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
        lVar7 = 0;
        ppVar8 = pas_thread_local_cache_layout_first_segment;
        do {
          while( true ) {
            uVar4 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar9);
            if (uVar1 <= uVar4) goto LAB_140d572e3;
            pas_thread_local_cache_layout_node_move(ppVar9,ppVar5,param_1);
            ppVar9 = (pas_thread_local_cache_layout_node_opaque *)
                     (ulonglong)ppVar8->nodes[lVar7 + 1].payload;
            if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000007 < ppVar9) break;
            if (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d57270;
LAB_140d572b8:
            ppVar8 = ppVar8->next;
            if (ppVar8 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d572e3;
            uVar6 = (ulonglong)ppVar8->nodes[0].payload;
            uVar10 = 0;
            if (7 < uVar6) {
              uVar10 = pas_compact_heap_reservation_base;
            }
            ppVar9 = (pas_thread_local_cache_layout_node_opaque *)(uVar10 + uVar6);
            lVar7 = 0;
            if (ppVar9 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d572e3;
          }
          ppVar9 = ppVar9 + pas_compact_heap_reservation_base;
          if (ppVar9 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d572b8;
LAB_140d57270:
          lVar7 = lVar7 + 1;
        } while (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0);
      }
    }
LAB_140d572e3:
    memcpy(ppVar5->should_stop_bitvector,param_1->should_stop_bitvector,
           (ulonglong)(param_1->allocator_index_upper_bound + 0x1f >> 3 & 0xfffffffc));
    ppVar5->node->cache = ppVar5;
  }
  if (pas_thread_local_cache_layout_first_segment != (pas_thread_local_cache_layout_segment *)0x0) {
    ppVar9 = (pas_thread_local_cache_layout_node_opaque *)
             (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
    if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar9) {
      ppVar9 = ppVar9 + pas_compact_heap_reservation_base;
    }
    if (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
      lVar7 = 0;
      ppVar8 = pas_thread_local_cache_layout_first_segment;
      do {
        while( true ) {
          uVar4 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar9);
          if (uVar1 <= uVar4) {
            if (uVar3 <= uVar4) goto LAB_140d573c3;
            pas_thread_local_cache_layout_node_commit_and_construct(ppVar9,ppVar5);
          }
          ppVar9 = (pas_thread_local_cache_layout_node_opaque *)
                   (ulonglong)ppVar8->nodes[lVar7 + 1].payload;
          if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000007 < ppVar9) break;
          if (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d57350;
LAB_140d57398:
          ppVar8 = ppVar8->next;
          if (ppVar8 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d573c3;
          uVar6 = (ulonglong)ppVar8->nodes[0].payload;
          uVar10 = 0;
          if (7 < uVar6) {
            uVar10 = pas_compact_heap_reservation_base;
          }
          ppVar9 = (pas_thread_local_cache_layout_node_opaque *)(uVar10 + uVar6);
          lVar7 = 0;
          if (ppVar9 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d573c3;
        }
        ppVar9 = ppVar9 + pas_compact_heap_reservation_base;
        if (ppVar9 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d57398;
LAB_140d57350:
        lVar7 = lVar7 + 1;
      } while (ppVar9 != (pas_thread_local_cache_layout_node_opaque *)0x0);
    }
  }
LAB_140d573c3:
  ppVar5->allocator_index_upper_bound = uVar3;
  if (ppVar5 == param_1) {
    ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  else {
    pas_thread_local_cache_deallocate(param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(longlong *)(lVar7 + 0x9c08) == 1) &&
       ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d48) != '\0' ||
        (__dyn_tls_on_demand_init(), *(ulonglong *)(lVar7 + 0x9c08) < 2)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_fast_tls_set(ppVar5);
  }
  if (param_2 < ppVar5->allocator_index_upper_bound) {
    __return_storage_ptr__->did_succeed = true;
    __return_storage_ptr__->allocator = ppVar5->local_allocators + param_2;
    return __return_storage_ptr__;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_flush_deallocation_log @ 140d574e0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
pas_thread_local_cache_flush_deallocation_log
          (pas_thread_local_cache *param_1,pas_lock_hold_mode param_2)

{
  pas_local_allocator_scavenger_data *ppVar1;
  uint *puVar2;
  char cVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  PSRWLOCK SRWLock;
  pas_segregated_page_config_kind pVar11;
  longlong lVar12;
  ulonglong uVar13;
  pas_segregated_page *ppVar14;
  uint uVar15;
  pas_segregated_view_opaque *ppVar16;
  uint uVar17;
  ulonglong uVar18;
  
  if (param_1 == (pas_thread_local_cache *)0x0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if ((ulonglong)param_1->deallocation_log_index != 0) {
    SRWLock = (PSRWLOCK)0x0;
    uVar9 = (ulonglong)param_1->deallocation_log_index;
LAB_140d57545:
    uVar10 = param_1->deallocation_log[uVar9 - 1];
    uVar18 = uVar9 - 1;
    uVar13 = uVar9 - 1;
    switch((uint)uVar10 & 0x3f) {
    case 0:
      do {
        if (0x3f < uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar9 == 1) goto joined_r0x000140d57b38;
        uVar10 = param_1->deallocation_log[uVar9 - 2];
        uVar13 = uVar9 - 1;
        uVar9 = uVar13;
      } while ((uVar10 & 0x3f) == 0);
      goto switchD_140d5756b_default;
    case 1:
      pVar11 = pas_segregated_page_config_kind_null;
      goto LAB_140d57bae;
    case 2:
      pVar11 = pas_segregated_page_config_kind_pas_utility_small;
      break;
    case 3:
      pVar11 = pas_segregated_page_config_kind_pas_utility_small;
      goto LAB_140d57bae;
    case 4:
      pVar11 = pas_segregated_page_config_kind_bmalloc_small_segregated;
      break;
    case 5:
      do {
        ppVar14 = (pas_segregated_page *)(uVar10 >> 6 & 0x3ffffffffffc000);
        if (SRWLock != (PSRWLOCK)ppVar14->lock_ptr) {
          SRWLock = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow
                              (ppVar14,(pas_lock *)SRWLock,ppVar14->lock_ptr);
        }
        bVar7 = (byte)((uint)uVar10 >> 10) & 0x1f;
        puVar2 = (uint *)((longlong)ppVar14->alloc_bits + (ulonglong)((uint)(uVar10 >> 0xd) & 0x7c))
        ;
        *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        if (*puVar2 == 0) {
          if (((ulonglong)ppVar14->owner & 7) != 0) {
            ppVar16 = (pas_segregated_view_opaque *)((ulonglong)ppVar14->owner & 0xfffffffffffffff8)
            ;
            if (ppVar14->is_in_use_for_allocation == true) {
              ppVar14->eligibility_notification_has_been_deferred = true;
            }
            else {
              uVar15 = ppVar14->view_cache_index;
              if (uVar15 < param_1->allocator_index_upper_bound) {
                ppVar1 = (pas_local_allocator_scavenger_data *)(param_1->local_allocators + uVar15);
                cVar3 = *(char *)((longlong)param_1->local_allocators + (ulonglong)uVar15 * 8 + 7);
                if (cVar3 != '\x01') {
                  if (cVar3 != '\0') goto LAB_140d57669;
                  pas_local_allocator_scavenger_data_commit_if_necessary_slow
                            (ppVar1,
                             pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_not_in_use_with_scavenger_lock_held_mode
                             ,pas_local_allocator_view_cache_kind);
                }
                ppVar14->is_in_use_for_allocation = true;
                bVar7 = ppVar1[1].dirty + 1;
                if (ppVar1[1].is_in_use <= bVar7) {
                  bVar7 = false;
                }
                if (bVar7 == ppVar1[1].should_stop_count) {
                  ppVar1[1].encoded_kind_and_location = '\x02';
                }
                uVar18 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                if ((uVar18 & 7) != 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                if (uVar18 < 8) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                lVar12 = (ulonglong)ppVar1[1].dirty * 3;
                (&ppVar1[2].is_in_use)[lVar12] = SUB81(uVar18 >> 3,0);
                (&ppVar1[2].should_stop_count)[lVar12] = (uchar)(uVar18 >> 0xb);
                (&ppVar1[2].dirty)[lVar12] = SUB41((uint)uVar18 >> 0x13,0);
                ppVar1[1].dirty = (bool)bVar7;
              }
              else {
LAB_140d57669:
                pas_segregated_directory_view_did_become_eligible_at_index
                          ((pas_segregated_directory *)
                           (((uint)(byte)ppVar16[10] * 0x80000 + (uint)*(ushort *)(ppVar16 + 8) * 8)
                           + pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar16 + 0xc))
                ;
              }
            }
            ppVar14->owner = ppVar16;
          }
          uVar10 = (ppVar14->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar10 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar14,pas_note_emptiness_clear_num_non_empty_words);
            param_1->deallocation_log[uVar9 - 1] = 0;
          }
          else {
            (ppVar14->emptiness).num_non_empty_words_or_live_bytes = uVar10;
            param_1->deallocation_log[uVar9 - 1] = 0;
          }
        }
        else {
          param_1->deallocation_log[uVar9 - 1] = 0;
        }
        if (uVar9 == 1) goto joined_r0x000140d57b38;
        uVar10 = param_1->deallocation_log[uVar9 - 2];
        uVar9 = uVar9 - 1;
        uVar13 = uVar9;
      } while (((uint)uVar10 & 0x3f) == 5);
      goto switchD_140d5756b_default;
    case 6:
      pVar11 = pas_segregated_page_config_kind_bmalloc_medium_segregated;
      break;
    case 7:
      do {
        uVar13 = uVar18;
        if (bmalloc_medium_page_header_table.hashtable.table ==
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d57810:
          ppVar14 = (pas_segregated_page *)0x0;
        }
        else {
          uVar15 = (uint)(uVar10 >> 0x1b) & 0xfffffff ^ (uint)(uVar10 >> 0x17);
          uVar15 = uVar15 * 0x20 + (uVar15 ^ 0xdeadbeef);
          uVar15 = uVar15 >> 0xb ^ uVar15;
          uVar9 = (ulonglong)
                  ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar15);
          uVar4 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar9].low;
          while (uVar4 != (uVar10 >> 6 & 0x3fffffffffe0000)) {
            uVar15 = uVar15 + 1;
            if (uVar4 == 0xffffffffffffffff) goto LAB_140d57810;
            uVar9 = (ulonglong)
                    (uVar15 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar4 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar9].low;
          }
          ppVar14 = (pas_segregated_page *)
                    (bmalloc_medium_page_header_table.hashtable.table)->array[uVar9].high;
        }
        if (SRWLock != (PSRWLOCK)ppVar14->lock_ptr) {
          SRWLock = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow
                              (ppVar14,(pas_lock *)SRWLock,ppVar14->lock_ptr);
        }
        uVar9 = (ulonglong)((uint)(uVar10 >> 0x12) & 0x1c);
        uVar15 = *(uint *)((longlong)ppVar14->alloc_bits + uVar9) &
                 ~(1 << ((uint)uVar10 >> 0xf & 0x1f));
        *(uint *)((longlong)ppVar14->alloc_bits + uVar9) = uVar15;
        ppVar16 = ppVar14->owner;
        if (((ulonglong)ppVar16 & 7) != 0) {
          ppVar16 = (pas_segregated_view_opaque *)((ulonglong)ppVar16 & 0xfffffffffffffff8);
          if (ppVar14->is_in_use_for_allocation == true) {
            ppVar14->eligibility_notification_has_been_deferred = true;
          }
          else {
            uVar17 = ppVar14->view_cache_index;
            if (uVar17 < param_1->allocator_index_upper_bound) {
              ppVar1 = (pas_local_allocator_scavenger_data *)(param_1->local_allocators + uVar17);
              cVar3 = *(char *)((longlong)param_1->local_allocators + (ulonglong)uVar17 * 8 + 7);
              if (cVar3 != '\x01') {
                if (cVar3 != '\0') goto LAB_140d57898;
                pas_local_allocator_scavenger_data_commit_if_necessary_slow
                          (ppVar1,
                           pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_not_in_use_with_scavenger_lock_held_mode
                           ,pas_local_allocator_view_cache_kind);
              }
              ppVar14->is_in_use_for_allocation = true;
              bVar7 = ppVar1[1].dirty + 1;
              if (ppVar1[1].is_in_use <= bVar7) {
                bVar7 = false;
              }
              if (bVar7 == ppVar1[1].should_stop_count) {
                ppVar1[1].encoded_kind_and_location = '\x02';
              }
              uVar9 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar9) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if (uVar9 < 8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              lVar12 = (ulonglong)ppVar1[1].dirty * 3;
              (&ppVar1[2].is_in_use)[lVar12] = SUB81(uVar9 >> 3,0);
              (&ppVar1[2].should_stop_count)[lVar12] = (uchar)(uVar9 >> 0xb);
              (&ppVar1[2].dirty)[lVar12] = SUB41((uint)uVar9 >> 0x13,0);
              ppVar1[1].dirty = (bool)bVar7;
            }
            else {
LAB_140d57898:
              pas_segregated_directory_view_did_become_eligible_at_index
                        ((pas_segregated_directory *)
                         (((uint)(byte)ppVar16[10] * 0x80000 + (uint)*(ushort *)(ppVar16 + 8) * 8) +
                         pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar16 + 0xc));
            }
          }
          ppVar14->owner = ppVar16;
        }
        uVar17 = (uint)(uVar10 >> 6) & 0x1ffff;
        if (((ulonglong)ppVar16 & 6) == 0) {
          uVar8 = ppVar14->object_size;
          if (uVar8 != 0) goto LAB_140d579a7;
LAB_140d579cd:
          bVar6 = false;
        }
        else {
          if (((uint)ppVar16 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar9 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar16 & 0xfffffffffffffff8) + 0x14 +
                           (ulonglong)(uVar17 >> 0xc) * 4);
          lVar12 = pas_compact_heap_reservation_base + uVar9 * 8;
          if (uVar9 == 0) {
            lVar12 = 0;
          }
          uVar8 = *(uint *)((ulonglong)
                            ((uint)*(byte *)(lVar12 + 0xd) * 0x80000 +
                            (uint)*(ushort *)(lVar12 + 0xb) * 8) + 0x20 +
                           pas_compact_heap_reservation_base) & 0x7ffffff;
          if (uVar8 == 0) goto LAB_140d579cd;
LAB_140d579a7:
          if (0x20000 < (ulonglong)uVar17 + (ulonglong)uVar8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar9 = ((ulonglong)uVar8 + (ulonglong)uVar17) - 1 >> 0xc;
          uVar18 = (ulonglong)(uVar17 >> 0xc);
          if (uVar9 < uVar18) goto LAB_140d579cd;
          bVar6 = false;
          do {
            cVar3 = *(char *)((longlong)ppVar14[1].alloc_bits + (uVar18 - 0x10));
            if (cVar3 == '\0') {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (cVar3 == -1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            *(char *)((longlong)ppVar14[1].alloc_bits + (uVar18 - 0x10)) = cVar3 + -1;
            bVar6 = (bool)(bVar6 | (char)(cVar3 + -1) == '\0');
            uVar18 = uVar18 + 1;
          } while (uVar9 + 1 != uVar18);
        }
        if (pas_segregated_page_deallocate_should_verify_granules == true) {
          pas_segregated_page_verify_granules(ppVar14);
        }
        if (bVar6) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar14,pas_note_emptiness_keep_num_non_empty_words);
        }
        if (uVar15 == 0) {
          uVar10 = (ppVar14->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar10 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar14,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar14->emptiness).num_non_empty_words_or_live_bytes = uVar10;
          }
        }
        param_1->deallocation_log[uVar13] = 0;
        if (uVar13 == 0) goto joined_r0x000140d57b38;
        uVar10 = param_1->deallocation_log[uVar13 - 1];
        uVar18 = uVar13 - 1;
      } while (((uint)uVar10 & 0x3f) == 7);
      goto switchD_140d5756b_default;
    case 8:
      pVar11 = pas_segregated_page_config_kind_verse_small_segregated;
      break;
    case 9:
      pVar11 = pas_segregated_page_config_kind_verse_small_segregated;
      goto LAB_140d57bae;
    case 10:
      pVar11 = pas_segregated_page_config_kind_verse_medium_segregated;
      break;
    case 0xb:
      pVar11 = pas_segregated_page_config_kind_verse_medium_segregated;
LAB_140d57bae:
      pas_segregated_page_config_kind_get_string(pVar11);
                    /* WARNING: Subroutine does not return */
      pas_panic("Deallocation logging is disabled for %s/%s, but here we are.\n");
    default:
      goto switchD_140d5756b_default;
    }
    pas_segregated_page_config_kind_get_string(pVar11);
                    /* WARNING: Subroutine does not return */
    pas_panic("Deallocation logging is disabled for %s/%s, but here we are.\n");
  }
LAB_140d57ada:
  param_1->deallocation_log_index = 0;
  param_1->num_logged_bytes = 0;
  param_1->deallocation_log_dirty = true;
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if (param_2 != pas_lock_is_not_held) {
    return;
  }
  pas_scavenger_notify_eligibility_if_needed();
  return;
switchD_140d5756b_default:
  uVar9 = uVar13;
  if (uVar13 == 0) goto joined_r0x000140d57b38;
  goto LAB_140d57545;
joined_r0x000140d57b38:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  goto LAB_140d57ada;
}

// pas_thread_local_cache_deallocate @ 140d57bd0

void __cdecl pas_thread_local_cache_deallocate(pas_thread_local_cache *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  pas_large_utility_free_heap_deallocate
            (param_1->should_stop_bitvector,
             (ulonglong)(param_1->allocator_index_capacity + 0x1f >> 3 & 0xfffffffc));
  uVar1 = param_1->allocator_index_capacity;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar3 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  pas_large_utility_free_heap_deallocate
            (param_1->pages_committed,
             ((-uVar3 & (uVar1 << 3) + uVar3 + 0x1f7f) >>
             ((byte)pas_page_malloc_cached_alignment_shift & 0x3f)) + 0x1f >> 3 & 0xfffffffffffffffc
            );
  uVar1 = param_1->allocator_index_capacity;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (pas_page_malloc_cached_alignment - 1 <
      (pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1)) {
    uVar4 = -pas_page_malloc_cached_alignment &
            (uVar1 << 3) + pas_page_malloc_cached_alignment + 0x1f7f;
    pas_page_malloc_commit_without_mprotect(param_1,uVar4,pas_may_mmap);
    pas_large_utility_free_heap_deallocate(param_1,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_is_committed @ 140d57cf0

bool __cdecl
pas_thread_local_cache_is_committed(pas_thread_local_cache *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  uVar2 = (ulonglong)param_2 * 8 + 0x1f80 >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
  uVar1 = (ulonglong)param_3 * 8 + 0x1f7f >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
  bVar4 = true;
  if (uVar2 <= uVar1) {
    if ((param_1->pages_committed[uVar2 >> 5] >> ((uint)uVar2 & 0x1f) & 1) == 0) {
      bVar4 = false;
    }
    else {
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        if (uVar2 - uVar1 == 1) break;
      } while ((param_1->pages_committed[uVar2 >> 5] >> ((uint)uVar2 & 0x1f) & 1) != 0);
      bVar4 = uVar1 <= uVar3;
    }
  }
  return bVar4;
}

// pas_thread_local_cache_compute_decommit_exclusion_range @ 140d57da0

pas_decommit_exclusion_range * __cdecl
pas_thread_local_cache_compute_decommit_exclusion_range
          (pas_decommit_exclusion_range *__return_storage_ptr__,pas_thread_local_cache *param_1,
          uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = (ulonglong)param_3 * 8;
  if (uVar7 < (ulonglong)param_2 * 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = (ulonglong)param_2 * 8 + 0x1f80;
  if (pas_page_malloc_cached_alignment_shift == 0) {
    uVar5 = pas_page_malloc_alignment_shift_slow();
    uVar7 = uVar7 + 0x1f7f >> ((byte)uVar5 & 0x3f);
    pas_page_malloc_cached_alignment_shift = uVar5;
    if (uVar5 == 0) {
      pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
      uVar5 = 0;
    }
  }
  else {
    uVar7 = uVar7 + 0x1f7f >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
    uVar5 = pas_page_malloc_cached_alignment_shift;
  }
  uVar3 = (ulonglong)param_3 * 8 + 0x1f80;
  uVar9 = uVar2 >> ((byte)uVar5 & 0x3f);
  uVar6 = uVar2;
  uVar8 = uVar3;
  if (uVar9 <= uVar7) {
    do {
      uVar1 = uVar9 + 1;
      if ((param_1->pages_committed[uVar9 >> 5] >> ((uint)uVar9 & 0x1f) & 1) == 0) {
        uVar10 = uVar1 << ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        uVar9 = uVar9 << ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
        if (uVar9 < uVar2) {
          uVar9 = uVar2;
        }
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
      }
      uVar9 = uVar1;
    } while (uVar7 + 1 != uVar1);
  }
  __return_storage_ptr__->start_of_possible_decommit = uVar6;
  __return_storage_ptr__->end_of_possible_decommit = uVar8;
  if (uVar6 == uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return __return_storage_ptr__;
}

// pas_thread_local_cache_ensure_committed @ 140d57ec0

void __cdecl
pas_thread_local_cache_ensure_committed(pas_thread_local_cache *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  uVar4 = (ulonglong)param_2 * 8 + 0x1f80 >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
  uVar5 = (ulonglong)param_3 * 8 + 0x1f7f >> ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
  if (uVar4 <= uVar5) {
    do {
      if ((param_1->pages_committed[uVar4 >> 5] >> ((uint)uVar4 & 0x1f) & 1) == 0) {
        BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
        if (BVar2 != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = pas_page_malloc_cached_alignment;
        if (pas_page_malloc_cached_alignment == 0) {
          uVar3 = pas_page_malloc_alignment_slow();
        }
        pas_page_malloc_cached_alignment = uVar3;
        if (pas_page_malloc_cached_alignment_shift == 0) {
          pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
        }
        pas_page_malloc_commit_without_mprotect
                  ((void *)((longlong)param_1->deallocation_log +
                           (uVar4 << ((byte)pas_page_malloc_cached_alignment_shift & 0x3f))),uVar3,
                   pas_may_mmap);
        param_1->pages_committed[uVar4 >> 5] =
             param_1->pages_committed[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
    } while (uVar5 + 1 != uVar4);
  }
  return;
}

// pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow @ 140d57ff0

pas_local_allocator_result * __cdecl
pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
          (pas_local_allocator_result *__return_storage_ptr__,uint param_1,pas_heap_config *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  pas_thread_local_cache *ppVar4;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  ppVar4 = *(pas_thread_local_cache **)(lVar2 + 0x9c08);
  if (ppVar4 == (pas_thread_local_cache *)&DAT_00000001) goto LAB_140d58118;
  puVar1 = (ulonglong *)(lVar2 + 0x9c08);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
    ppVar4 = (pas_thread_local_cache *)*puVar1;
    if (ppVar4 < (pas_thread_local_cache *)&DAT_00000002) goto LAB_140d58088;
  }
  else if (ppVar4 <= (pas_thread_local_cache *)&DAT_00000001) {
LAB_140d58088:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_fast_tls_initialize_if_necessary();
    pas_heap_config_activate(param_2);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *puVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ppVar4 = pas_thread_local_cache_create();
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if (param_1 != 0) {
    if (param_1 < ppVar4->allocator_index_upper_bound) {
      __return_storage_ptr__->did_succeed = true;
      __return_storage_ptr__->allocator = ppVar4->local_allocators + param_1;
      return __return_storage_ptr__;
    }
    if (param_1 != 0xffffffff) {
      pas_thread_local_cache_get_local_allocator_slow
                (__return_storage_ptr__,ppVar4,param_1,pas_lock_is_not_held);
      return __return_storage_ptr__;
    }
  }
LAB_140d58118:
  __return_storage_ptr__->did_succeed = false;
  __return_storage_ptr__->allocator = (void *)0x0;
  return __return_storage_ptr__;
}

// pas_thread_local_cache_allocator_index_for_allocator @ 140d58140

uint __cdecl
pas_thread_local_cache_allocator_index_for_allocator(pas_thread_local_cache *param_1,void *param_2)

{
  ulong64 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  puVar1 = param_1->local_allocators;
  if (param_2 < puVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (puVar1 + param_1->allocator_index_upper_bound <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = (longlong)param_2 - (longlong)puVar1;
  if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar3 >> 3 < (ulonglong)param_1->allocator_index_upper_bound) {
    if (uVar3 >> 0x23 == 0) {
      return (uint)(uVar3 >> 3);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_stop_local_allocators @ 140d58190

void __cdecl
pas_thread_local_cache_stop_local_allocators
          (pas_thread_local_cache *param_1,pas_lock_hold_mode param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  pas_thread_local_cache_layout_node_opaque *ppVar4;
  ulong64 uVar5;
  pas_thread_local_cache_layout_segment *ppVar6;
  longlong lVar7;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if (pas_thread_local_cache_layout_first_segment != (pas_thread_local_cache_layout_segment *)0x0) {
    ppVar4 = (pas_thread_local_cache_layout_node_opaque *)
             (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
    if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar4) {
      ppVar4 = ppVar4 + pas_compact_heap_reservation_base;
    }
    if (ppVar4 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
      lVar7 = 0;
      ppVar6 = pas_thread_local_cache_layout_first_segment;
      do {
        while( true ) {
          uVar2 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar4);
          if (param_1->allocator_index_upper_bound <= uVar2) goto LAB_140d58297;
          bVar1 = pas_thread_local_cache_layout_node_is_committed(ppVar4,param_1);
          if (bVar1) {
            pas_thread_local_cache_layout_node_stop(ppVar4,param_1,pas_lock_lock_mode_lock);
          }
          ppVar4 = (pas_thread_local_cache_layout_node_opaque *)
                   (ulonglong)ppVar6->nodes[lVar7 + 1].payload;
          if (ppVar4 <= (pas_thread_local_cache_layout_node_opaque *)&DAT_00000007) break;
          ppVar4 = ppVar4 + pas_compact_heap_reservation_base;
          if (ppVar4 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d58200;
LAB_140d58267:
          ppVar6 = ppVar6->next;
          if (ppVar6 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d58297;
          uVar3 = (ulonglong)ppVar6->nodes[0].payload;
          uVar5 = 0;
          if (7 < uVar3) {
            uVar5 = pas_compact_heap_reservation_base;
          }
          ppVar4 = (pas_thread_local_cache_layout_node_opaque *)(uVar5 + uVar3);
          lVar7 = 0;
          if (ppVar4 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d58297;
        }
        if (ppVar4 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d58267;
LAB_140d58200:
        lVar7 = lVar7 + 1;
      } while (ppVar4 != (pas_thread_local_cache_layout_node_opaque *)0x0);
    }
  }
LAB_140d58297:
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if (param_2 == pas_lock_is_not_held) {
                    /* WARNING: Could not recover jumptable at 0x000140d582ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
  return;
}

// pas_thread_local_cache_stop_local_allocators_if_necessary @ 140d582e0

void __cdecl
pas_thread_local_cache_stop_local_allocators_if_necessary
          (pas_thread_local_cache *param_1,pas_local_allocator *param_2)

{
  pas_local_allocator *ppVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_1->should_stop_some != true) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  uVar7 = param_1->allocator_index_upper_bound + 0x1f;
  if (0x1f < uVar7) {
    puVar3 = param_1->should_stop_bitvector;
    uVar11 = 0;
    do {
      uVar10 = puVar3[uVar11];
      if (uVar10 != 0) {
        do {
          uVar9 = 0;
          for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar8 = uVar11 << 5 | (ulonglong)uVar9;
          if (param_1->allocator_index_upper_bound <= uVar8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          ppVar1 = (pas_local_allocator *)(param_1->local_allocators + uVar8);
          if (((*(byte *)((longlong)param_1->local_allocators + uVar8 * 8 + 3) & 0x7f) == 2) &&
             (ppVar1->is_stashing_alloc_bits != false)) goto LAB_140d5832a;
          bVar4 = (byte)uVar9 & 0x1f;
          uVar9 = -2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4;
          puVar2 = puVar3 + uVar11;
          *puVar2 = *puVar2 & uVar9;
          if ((ppVar1 != param_2) && ((ppVar1->scavenger_data).should_stop_count != '\0')) {
            pas_local_allocator_scavenger_data_stop
                      ((pas_local_allocator_scavenger_data *)ppVar1,pas_lock_lock_mode_lock);
          }
          uVar10 = uVar10 & uVar9;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7 >> 5);
  }
  param_1->should_stop_some = false;
LAB_140d5832a:
                    /* WARNING: Could not recover jumptable at 0x000140d58345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  return;
}

// pas_thread_local_cache_flush_deallocation_log_direct @ 140d58410

void __cdecl
pas_thread_local_cache_flush_deallocation_log_direct
          (pas_thread_local_cache *param_1,pas_lock_hold_mode param_2)

{
  if (param_1 != (pas_thread_local_cache *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    flush_deallocation_log_for_scavenger(param_1);
    param_1->deallocation_log_index = 0;
    param_1->num_logged_bytes = 0;
    param_1->deallocation_log_dirty = true;
    ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
    if (param_2 == pas_lock_is_not_held) {
      pas_scavenger_notify_eligibility_if_needed();
      return;
    }
  }
  return;
}

// pas_thread_local_cache_for_all @ 140d58490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
pas_thread_local_cache_for_all
          (pas_allocator_scavenge_action param_1,pas_deallocator_scavenge_action param_2,
          pas_thread_local_cache_decommit_action param_3)

{
  ulonglong uVar1;
  pas_thread_local_cache_node **pppVar2;
  pas_local_allocator_scavenger_data *ppVar3;
  ulonglong uVar4;
  pas_thread_local_cache *ppVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  DWORD DVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  pas_thread_local_cache_layout_segment *ppVar15;
  pas_thread_local_cache_layout_segment *ppVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  pas_thread_local_cache_layout_node_opaque *ppVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  pas_thread_local_cache_node *ppVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulong64 uVar25;
  ulong64 uVar26;
  ulonglong uVar27;
  byte bVar28;
  undefined1 auStackY_108 [32];
  ulong64 local_b0;
  scavenger_thread_suspend_data local_4c;
  bool local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar14 = pas_page_malloc_cached_alignment;
  if (pas_page_malloc_cached_alignment == 0) {
    uVar14 = pas_page_malloc_alignment_slow();
  }
  pas_page_malloc_cached_alignment = uVar14;
  local_b0 = pas_page_malloc_cached_alignment_shift;
  if (pas_page_malloc_cached_alignment_shift == 0) {
    local_b0 = pas_page_malloc_alignment_shift_slow();
  }
  local_49 = false;
  pas_page_malloc_cached_alignment_shift = local_b0;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_thread_suspend_lock);
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (pas_thread_local_cache_node_first != (pas_thread_local_cache_node *)0x0) {
    if (param_1 != pas_allocator_scavenge_no_action) {
      uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      ppVar22 = pas_thread_local_cache_node_first;
      do {
        ppVar5 = ppVar22->cache;
        if (ppVar5 != (pas_thread_local_cache *)0x0) {
          AcquireSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
          if (param_2 == pas_deallocator_scavenge_flush_log_action) {
LAB_140d58680:
            flush_deallocation_log_for_scavenger(ppVar5);
          }
          else if (param_2 == pas_deallocator_scavenge_flush_log_if_clean_action) {
            if (ppVar5->deallocation_log_dirty != true) goto LAB_140d58680;
            ppVar5->deallocation_log_dirty = false;
            local_49 = ppVar5->deallocation_log_index != 0;
          }
          local_4c.did_suspend = false;
          local_4c.is_scavenger_itself = false;
          uVar26 = 0x1fc0;
          if (pas_thread_local_cache_layout_first_segment ==
              (pas_thread_local_cache_layout_segment *)0x0) {
            ppVar15 = (pas_thread_local_cache_layout_segment *)0x0;
            uVar21 = 0;
            ppVar16 = (pas_thread_local_cache_layout_segment *)0x0;
            uVar25 = 0;
          }
          else {
            uVar20 = (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
            uVar21 = 0;
            if (7 < uVar20) {
              uVar21 = pas_compact_heap_reservation_base;
            }
            ppVar19 = (pas_thread_local_cache_layout_node_opaque *)(uVar21 + uVar20);
            ppVar16 = pas_thread_local_cache_layout_first_segment;
            if (ppVar19 == (pas_thread_local_cache_layout_node_opaque *)0x0) {
              ppVar15 = (pas_thread_local_cache_layout_segment *)0x0;
              uVar21 = 0;
              uVar25 = 0;
            }
            else {
              ppVar15 = (pas_thread_local_cache_layout_segment *)0x0;
              uVar21 = 0;
              uVar25 = 0;
              do {
                while( true ) {
                  uVar9 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar19);
                  if (ppVar5->allocator_index_upper_bound <= uVar9) goto joined_r0x000140d58a58;
                  uVar20 = (ulonglong)uVar9;
                  ppVar3 = (pas_local_allocator_scavenger_data *)(ppVar5->local_allocators + uVar20)
                  ;
                  if (param_3 != pas_thread_local_cache_decommit_if_possible_action) break;
                  uVar10 = pas_thread_local_cache_layout_node_num_allocator_indices(ppVar19);
                  uVar27 = (ulonglong)(uVar10 + uVar9) * 8;
                  if (uVar27 < uVar20 * 8) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  if (pas_page_malloc_cached_alignment_shift == 0) {
                    uVar13 = pas_page_malloc_alignment_shift_slow();
                    uVar27 = uVar27 + 0x1f7f >> ((byte)uVar13 & 0x3f);
                    pas_page_malloc_cached_alignment_shift = uVar13;
                    if (uVar13 == 0) {
                      pas_page_malloc_cached_alignment_shift =
                           pas_page_malloc_alignment_shift_slow();
                      uVar13 = 0;
                    }
                  }
                  else {
                    uVar27 = uVar27 + 0x1f7f >>
                             ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
                    uVar13 = pas_page_malloc_cached_alignment_shift;
                  }
                  uVar4 = (ulonglong)(uVar10 + uVar9) * 8 + 0x1f80;
                  uVar20 = uVar20 * 8 + 0x1f80;
                  uVar23 = uVar20 >> ((byte)uVar13 & 0x3f);
                  uVar17 = uVar4;
                  uVar18 = uVar20;
                  if (uVar23 <= uVar27) {
                    do {
                      uVar1 = uVar23 + 1;
                      if ((ppVar5->pages_committed[uVar23 >> 5] >> ((uint)uVar23 & 0x1f) & 1) == 0)
                      {
                        uVar24 = uVar1 << ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
                        if (uVar4 < uVar24) {
                          uVar24 = uVar4;
                        }
                        if (uVar18 <= uVar24) {
                          uVar18 = uVar24;
                        }
                        uVar23 = uVar23 << ((byte)pas_page_malloc_cached_alignment_shift & 0x3f);
                        if (uVar23 < uVar20) {
                          uVar23 = uVar20;
                        }
                        if (uVar23 <= uVar17) {
                          uVar17 = uVar23;
                        }
                      }
                      uVar23 = uVar1;
                    } while (uVar27 + 1 != uVar1);
                  }
                  if (uVar18 == uVar17) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  if (uVar18 < uVar26) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  if (uVar17 < uVar26) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  if (uVar18 < uVar17) {
                    stop_allocator(ppVar5,param_1,uVar9,ppVar3,&local_49,&local_4c);
                    bVar7 = pas_local_allocator_scavenger_data_is_stopped(ppVar3);
                    if (bVar7) {
                      if (ppVar15 == (pas_thread_local_cache_layout_segment *)0x0) {
                        uVar21 = uVar25;
                        ppVar15 = ppVar16;
                      }
                      goto joined_r0x000140d58988;
                    }
                    uVar20 = uVar17;
                    if (uVar18 < uVar17) goto LAB_140d589a7;
                  }
                  else {
joined_r0x000140d58988:
                    bVar7 = uVar17 < uVar18;
                    uVar20 = uVar18;
                    uVar18 = uVar17;
                    if (bVar7) {
LAB_140d589a7:
                      decommit_allocator_range(ppVar5,ppVar15,uVar21,uVar26,uVar18,ppVar16,uVar25);
                      uVar21 = 0;
                      ppVar15 = (pas_thread_local_cache_layout_segment *)0x0;
                      ppVar19 = (pas_thread_local_cache_layout_node_opaque *)
                                (ulonglong)ppVar16->nodes[uVar25 + 1].payload;
                      uVar26 = uVar20;
                      if (ppVar19 <= (pas_thread_local_cache_layout_node_opaque *)&DAT_00000007)
                      goto LAB_140d589e4;
                      goto LAB_140d586f0;
                    }
                  }
                  ppVar19 = (pas_thread_local_cache_layout_node_opaque *)
                            (ulonglong)ppVar16->nodes[uVar25 + 1].payload;
                  if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar19)
                  goto LAB_140d586f0;
LAB_140d589e4:
                  if (ppVar19 != (pas_thread_local_cache_layout_node_opaque *)0x0)
                  goto LAB_140d58700;
LAB_140d589ef:
                  ppVar16 = ppVar16->next;
                  if (ppVar16 == (pas_thread_local_cache_layout_segment *)0x0) {
                    uVar25 = 0;
                    ppVar16 = (pas_thread_local_cache_layout_segment *)0x0;
                    goto joined_r0x000140d58a58;
                  }
                  uVar20 = (ulonglong)ppVar16->nodes[0].payload;
                  uVar25 = 0;
                  if (7 < uVar20) {
                    uVar25 = pas_compact_heap_reservation_base;
                  }
                  ppVar19 = (pas_thread_local_cache_layout_node_opaque *)(uVar25 + uVar20);
                  uVar25 = 0;
                  if (ppVar19 == (pas_thread_local_cache_layout_node_opaque *)0x0)
                  goto joined_r0x000140d58a58;
                }
                stop_allocator(ppVar5,param_1,uVar9,ppVar3,&local_49,&local_4c);
                ppVar19 = (pas_thread_local_cache_layout_node_opaque *)
                          (ulonglong)ppVar16->nodes[uVar25 + 1].payload;
                if (ppVar19 <= (pas_thread_local_cache_layout_node_opaque *)&DAT_00000007)
                goto LAB_140d589e4;
LAB_140d586f0:
                ppVar19 = ppVar19 + pas_compact_heap_reservation_base;
                if (ppVar19 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d589ef;
LAB_140d58700:
                uVar25 = uVar25 + 1;
              } while (ppVar19 != (pas_thread_local_cache_layout_node_opaque *)0x0);
joined_r0x000140d58a58:
              if (((((ushort)local_4c & 1) != 0) && (local_4c.is_scavenger_itself == false)) &&
                 (DVar11 = ResumeThread(ppVar5->thread), DVar11 == 0xffffffff)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
            }
          }
          if (param_3 == pas_thread_local_cache_decommit_if_possible_action) {
            if ((char)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) !=
                '\x01') {
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            bVar28 = (byte)local_b0;
            uVar20 = ((uVar14 - 1) + uVar26 & -uVar14) >> (bVar28 & 0x3f);
            uVar9 = ppVar5->allocator_index_capacity;
            if (pas_page_malloc_cached_alignment == 0) {
              pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
            }
            if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
                pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            uVar27 = (-pas_page_malloc_cached_alignment &
                     (uVar9 << 3) + pas_page_malloc_cached_alignment + 0x1f7f) >> (bVar28 & 0x3f);
            if (uVar20 < uVar27) {
              do {
                while ((ppVar5->pages_committed[uVar20 >> 5] >> ((uint)uVar20 & 0x1f) & 1) == 0) {
                  decommit_allocator_range
                            (ppVar5,ppVar15,uVar21,uVar26,uVar20 << (bVar28 & 0x3f),ppVar16,uVar25);
                  uVar20 = uVar20 + 1;
                  uVar26 = uVar20 << (bVar28 & 0x3f);
                  uVar21 = 0;
                  ppVar15 = (pas_thread_local_cache_layout_segment *)0x0;
                  if (uVar20 == uVar27) goto LAB_140d58bbd;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar27);
LAB_140d58bbd:
              uVar9 = ppVar5->allocator_index_capacity;
            }
            else {
              uVar9 = ppVar5->allocator_index_capacity;
            }
            if (pas_page_malloc_cached_alignment == 0) {
              pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
            }
            if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
                pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            decommit_allocator_range
                      (ppVar5,ppVar15,uVar21,uVar26,
                       -pas_page_malloc_cached_alignment &
                       (uVar9 << 3) + pas_page_malloc_cached_alignment + 0x1f7f,ppVar16,uVar25);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
        }
        ppVar22 = ppVar22->next;
        bVar28 = local_49;
      } while (ppVar22 != (pas_thread_local_cache_node *)0x0);
      goto LAB_140d58d0c;
    }
    ppVar22 = pas_thread_local_cache_node_first;
    if (param_2 == pas_deallocator_scavenge_flush_log_action) {
      do {
        ppVar5 = ppVar22->cache;
        if (ppVar5 != (pas_thread_local_cache *)0x0) {
          AcquireSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
          flush_deallocation_log_for_scavenger(ppVar5);
          ReleaseSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
        }
        pppVar2 = &ppVar22->next;
        ppVar22 = *pppVar2;
      } while (*pppVar2 != (pas_thread_local_cache_node *)0x0);
    }
    else {
      if (param_2 == pas_deallocator_scavenge_flush_log_if_clean_action) {
        bVar28 = false;
        do {
          ppVar5 = ppVar22->cache;
          if (ppVar5 != (pas_thread_local_cache *)0x0) {
            AcquireSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
            if (ppVar5->deallocation_log_dirty == false) {
              flush_deallocation_log_for_scavenger(ppVar5);
            }
            else {
              ppVar5->deallocation_log_dirty = false;
              bVar28 = ppVar5->deallocation_log_index != 0;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
          }
          ppVar22 = ppVar22->next;
        } while (ppVar22 != (pas_thread_local_cache_node *)0x0);
        goto LAB_140d58d0c;
      }
      do {
        if (ppVar22->cache != (pas_thread_local_cache *)0x0) {
          AcquireSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
          ReleaseSRWLockExclusive((PSRWLOCK)&ppVar22->scavenger_lock);
        }
        pppVar2 = &ppVar22->next;
        ppVar22 = *pppVar2;
      } while (*pppVar2 != (pas_thread_local_cache_node *)0x0);
    }
  }
  bVar28 = 0;
LAB_140d58d0c:
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_thread_suspend_lock);
  if ((local_48 ^ (ulonglong)auStackY_108) != __security_cookie.value) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  return (bool)(bVar28 & 1);
}

// flush_deallocation_log_for_scavenger @ 140d58d70

/* WARNING: Type propagation algorithm not settling */

void __cdecl flush_deallocation_log_for_scavenger(pas_thread_local_cache *param_1)

{
  uint *puVar1;
  char cVar2;
  ulong64 uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  PSRWLOCK SRWLock;
  pas_segregated_page_config_kind pVar10;
  longlong lVar11;
  pas_segregated_view_opaque *ppVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  pas_segregated_page *ppVar16;
  ulonglong uVar17;
  
  if ((ulonglong)param_1->deallocation_log_index == 0) {
    return;
  }
  SRWLock = (PSRWLOCK)0x0;
  uVar8 = (ulonglong)param_1->deallocation_log_index;
LAB_140d58da6:
  uVar9 = param_1->deallocation_log[uVar8 - 1];
  uVar17 = uVar8 - 1;
  uVar14 = uVar8 - 1;
  switch((uint)uVar9 & 0x3f) {
  case 0:
    do {
      if (0x3f < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar8 == 1) goto LAB_140d5919c;
      uVar9 = param_1->deallocation_log[uVar8 - 2];
      uVar14 = uVar8 - 1;
      uVar8 = uVar14;
    } while ((uVar9 & 0x3f) == 0);
switchD_140d58dcb_default:
    uVar8 = uVar14;
    if (uVar14 == 0) {
LAB_140d5919c:
      if (SRWLock == (PSRWLOCK)0x0) {
        return;
      }
      ReleaseSRWLockExclusive(SRWLock);
      return;
    }
    goto LAB_140d58da6;
  case 1:
    pVar10 = pas_segregated_page_config_kind_null;
    goto LAB_140d5921a;
  case 2:
    pVar10 = pas_segregated_page_config_kind_pas_utility_small;
    break;
  case 3:
    pVar10 = pas_segregated_page_config_kind_pas_utility_small;
    goto LAB_140d5921a;
  case 4:
    pVar10 = pas_segregated_page_config_kind_bmalloc_small_segregated;
    break;
  case 5:
    do {
      ppVar16 = (pas_segregated_page *)(uVar9 >> 6 & 0x3ffffffffffc000);
      if (SRWLock != (PSRWLOCK)ppVar16->lock_ptr) {
        SRWLock = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow
                            (ppVar16,(pas_lock *)SRWLock,ppVar16->lock_ptr);
      }
      bVar4 = (byte)((uint)uVar9 >> 10) & 0x1f;
      puVar1 = (uint *)((longlong)ppVar16->alloc_bits + (ulonglong)((uint)(uVar9 >> 0xd) & 0x7c));
      *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      if (*puVar1 == 0) {
        if (((ulonglong)ppVar16->owner & 7) != 0) {
          ppVar12 = (pas_segregated_view_opaque *)((ulonglong)ppVar16->owner & 0xfffffffffffffff8);
          if (ppVar16->is_in_use_for_allocation == true) {
            ppVar16->eligibility_notification_has_been_deferred = true;
          }
          else {
            pas_segregated_directory_view_did_become_eligible_at_index
                      ((pas_segregated_directory *)
                       (((uint)(byte)ppVar12[10] * 0x80000 + (uint)*(ushort *)(ppVar12 + 8) * 8) +
                       pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar12 + 0xc));
          }
          ppVar16->owner = ppVar12;
        }
        uVar9 = (ppVar16->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar9 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar16,pas_note_emptiness_clear_num_non_empty_words);
          param_1->deallocation_log[uVar8 - 1] = 0;
        }
        else {
          (ppVar16->emptiness).num_non_empty_words_or_live_bytes = uVar9;
          param_1->deallocation_log[uVar8 - 1] = 0;
        }
      }
      else {
        param_1->deallocation_log[uVar8 - 1] = 0;
      }
      if (uVar8 == 1) goto LAB_140d5919c;
      uVar9 = param_1->deallocation_log[uVar8 - 2];
      uVar8 = uVar8 - 1;
      uVar14 = uVar8;
    } while (((uint)uVar9 & 0x3f) == 5);
    goto switchD_140d58dcb_default;
  case 6:
    pVar10 = pas_segregated_page_config_kind_bmalloc_medium_segregated;
    break;
  case 7:
    do {
      uVar14 = uVar17;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d58fb0:
        ppVar16 = (pas_segregated_page *)0x0;
      }
      else {
        uVar13 = (uint)(uVar9 >> 0x1b) & 0xfffffff ^ (uint)(uVar9 >> 0x17);
        uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
        uVar13 = uVar13 >> 0xb ^ uVar13;
        uVar8 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13)
        ;
        uVar3 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar8].low;
        while (uVar3 != (uVar9 >> 6 & 0x3fffffffffe0000)) {
          uVar13 = uVar13 + 1;
          if (uVar3 == 0xffffffffffffffff) goto LAB_140d58fb0;
          uVar8 = (ulonglong)
                  (uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar3 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar8].low;
        }
        ppVar16 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar8].high;
      }
      if (SRWLock != (PSRWLOCK)ppVar16->lock_ptr) {
        SRWLock = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow
                            (ppVar16,(pas_lock *)SRWLock,ppVar16->lock_ptr);
      }
      uVar8 = (ulonglong)((uint)(uVar9 >> 0x12) & 0x1c);
      uVar13 = *(uint *)((longlong)ppVar16->alloc_bits + uVar8) &
               ~(1 << ((uint)uVar9 >> 0xf & 0x1f));
      *(uint *)((longlong)ppVar16->alloc_bits + uVar8) = uVar13;
      ppVar12 = ppVar16->owner;
      if (((ulonglong)ppVar12 & 7) != 0) {
        ppVar12 = (pas_segregated_view_opaque *)((ulonglong)ppVar12 & 0xfffffffffffffff8);
        if (ppVar16->is_in_use_for_allocation == true) {
          ppVar16->eligibility_notification_has_been_deferred = true;
        }
        else {
          pas_segregated_directory_view_did_become_eligible_at_index
                    ((pas_segregated_directory *)
                     (((uint)(byte)ppVar12[10] * 0x80000 + (uint)*(ushort *)(ppVar12 + 8) * 8) +
                     pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar12 + 0xc));
        }
        ppVar16->owner = ppVar12;
      }
      uVar15 = (uint)(uVar9 >> 6) & 0x1ffff;
      if (((ulonglong)ppVar12 & 6) == 0) {
        uVar7 = ppVar16->object_size;
        if (uVar7 != 0) goto LAB_140d59088;
LAB_140d590ae:
        bVar6 = false;
      }
      else {
        if (((uint)ppVar12 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar8 = (ulonglong)
                *(uint *)(((ulonglong)ppVar12 & 0xfffffffffffffff8) + 0x14 +
                         (ulonglong)(uVar15 >> 0xc) * 4);
        lVar11 = pas_compact_heap_reservation_base + uVar8 * 8;
        if (uVar8 == 0) {
          lVar11 = 0;
        }
        uVar7 = *(uint *)((ulonglong)
                          ((uint)*(byte *)(lVar11 + 0xd) * 0x80000 +
                          (uint)*(ushort *)(lVar11 + 0xb) * 8) + 0x20 +
                         pas_compact_heap_reservation_base) & 0x7ffffff;
        if (uVar7 == 0) goto LAB_140d590ae;
LAB_140d59088:
        if (0x20000 < (ulonglong)uVar15 + (ulonglong)uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar8 = ((ulonglong)uVar7 + (ulonglong)uVar15) - 1 >> 0xc;
        uVar17 = (ulonglong)(uVar15 >> 0xc);
        if (uVar8 < uVar17) goto LAB_140d590ae;
        bVar6 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar16[1].alloc_bits + (uVar17 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          *(char *)((longlong)ppVar16[1].alloc_bits + (uVar17 - 0x10)) = cVar2 + -1;
          bVar6 = (bool)(bVar6 | (char)(cVar2 + -1) == '\0');
          uVar17 = uVar17 + 1;
        } while (uVar8 + 1 != uVar17);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar16);
      }
      if (bVar6) {
        pas_segregated_page_note_emptiness_impl(ppVar16,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar13 == 0) {
        uVar9 = (ppVar16->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar9 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar16,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar16->emptiness).num_non_empty_words_or_live_bytes = uVar9;
        }
      }
      param_1->deallocation_log[uVar14] = 0;
      if (uVar14 == 0) goto LAB_140d5919c;
      uVar9 = param_1->deallocation_log[uVar14 - 1];
      uVar17 = uVar14 - 1;
    } while (((uint)uVar9 & 0x3f) == 7);
    goto switchD_140d58dcb_default;
  case 8:
    pVar10 = pas_segregated_page_config_kind_verse_small_segregated;
    break;
  case 9:
    pVar10 = pas_segregated_page_config_kind_verse_small_segregated;
    goto LAB_140d5921a;
  case 10:
    pVar10 = pas_segregated_page_config_kind_verse_medium_segregated;
    break;
  case 0xb:
    pVar10 = pas_segregated_page_config_kind_verse_medium_segregated;
LAB_140d5921a:
    pas_segregated_page_config_kind_get_string(pVar10);
                    /* WARNING: Subroutine does not return */
    pas_panic("Deallocation logging is disabled for %s/%s, but here we are.\n");
  default:
    goto switchD_140d58dcb_default;
  }
  pas_segregated_page_config_kind_get_string(pVar10);
                    /* WARNING: Subroutine does not return */
  pas_panic("Deallocation logging is disabled for %s/%s, but here we are.\n");
}

// stop_allocator @ 140d59240

void __cdecl
stop_allocator(pas_thread_local_cache *param_1,pas_allocator_scavenge_action param_2,uint param_3,
              pas_local_allocator_scavenger_data *param_4,bool *param_5,
              scavenger_thread_suspend_data *param_6)

{
  byte bVar1;
  HANDLE Thread;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if (param_2 == pas_allocator_scavenge_request_stop_action) {
    if (param_4->dirty == true) {
      param_4->dirty = false;
      goto LAB_140d5932d;
    }
    bVar3 = pas_local_allocator_scavenger_data_is_stopped(param_4);
    if (bVar3) {
      return;
    }
    bVar1 = param_4->should_stop_count;
    if (bVar1 < pas_local_allocator_should_stop_count_for_suspend) {
      param_4->should_stop_count = bVar1 + 1;
      param_1->should_stop_bitvector[param_3 >> 5] =
           param_1->should_stop_bitvector[param_3 >> 5] | 1 << ((byte)param_3 & 0x1f);
      param_1->should_stop_some = true;
      goto LAB_140d5932d;
    }
    if (bVar1 != pas_local_allocator_should_stop_count_for_suspend) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else if (param_2 != pas_allocator_scavenge_force_stop_action) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar3 = pas_local_allocator_scavenger_data_is_stopped(param_4);
  if (bVar3) {
    return;
  }
  if (param_6->did_suspend == false) {
    param_6->did_suspend = true;
    Thread = param_1->thread;
    if (Thread == (HANDLE)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    DVar4 = GetThreadId(Thread);
    DVar5 = GetCurrentThreadId();
    param_6->is_scavenger_itself = DVar4 == DVar5;
    if ((DVar4 != DVar5) && (DVar4 = SuspendThread(Thread), DVar4 == 0xffffffff)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if (param_6->did_suspend == false) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_4->is_in_use == false) {
    if (param_4->is_in_use == true) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar3 = pas_local_allocator_scavenger_data_stop(param_4,pas_lock_lock_mode_try_lock);
    if (bVar3) {
      return;
    }
  }
LAB_140d5932d:
  *param_5 = true;
  return;
}

// decommit_allocator_range @ 140d59360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
decommit_allocator_range
          (pas_thread_local_cache *param_1,pas_thread_local_cache_layout_segment *param_2,
          ulong64 param_3,ulong64 param_4,ulong64 param_5,
          pas_thread_local_cache_layout_segment *param_6,ulong64 param_7)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  ulonglong uVar4;
  byte bVar5;
  pas_thread_local_cache_layout_node_opaque *ppVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [40];
  ulong64 local_60;
  pas_range local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = pas_page_malloc_cached_alignment;
  if (pas_page_malloc_cached_alignment == 0) {
    uVar9 = pas_page_malloc_alignment_slow();
  }
  pas_page_malloc_cached_alignment = uVar9;
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  if ((uVar9 ^ uVar9 - 1) <= uVar9 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar5 = (byte)pas_page_malloc_cached_alignment_shift;
  uVar9 = (-uVar9 & (param_4 + uVar9) - 1) >> (bVar5 & 0x3f);
  uVar10 = param_5 >> (bVar5 & 0x3f);
  if (uVar9 < uVar10) {
    uVar11 = uVar10 << (bVar5 & 0x3f);
    uVar8 = uVar9 << (bVar5 & 0x3f);
    local_60 = uVar11 - uVar8;
    if (uVar11 < uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_2 != (pas_thread_local_cache_layout_segment *)0x0) &&
       (param_3 != param_7 || param_2 != param_6)) {
      uVar4 = (ulonglong)param_2->nodes[param_3].payload;
      uVar7 = pas_compact_heap_reservation_base;
      if (uVar4 < 8) {
        uVar7 = 0;
      }
      ppVar6 = (pas_thread_local_cache_layout_node_opaque *)(uVar7 + uVar4);
      do {
        local_58.begin = uVar8;
        local_58.end = uVar11;
        pas_thread_local_cache_layout_node_prepare_to_decommit(ppVar6,param_1,&local_58);
        if (param_2 == (pas_thread_local_cache_layout_segment *)0x0) {
LAB_140d59520:
          param_2 = param_2->next;
          if (param_2 == (pas_thread_local_cache_layout_segment *)0x0) {
            param_3 = 0;
            param_2 = (pas_thread_local_cache_layout_segment *)0x0;
            ppVar6 = (pas_thread_local_cache_layout_node_opaque *)0x0;
          }
          else {
            uVar4 = (ulonglong)param_2->nodes[0].payload;
            uVar7 = 0;
            if (7 < uVar4) {
              uVar7 = pas_compact_heap_reservation_base;
            }
            ppVar6 = (pas_thread_local_cache_layout_node_opaque *)(uVar7 + uVar4);
            param_3 = 0;
          }
        }
        else {
          ppVar6 = (pas_thread_local_cache_layout_node_opaque *)
                   (ulonglong)param_2->nodes[param_3 + 1].payload;
          if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar6) {
            ppVar6 = ppVar6 + pas_compact_heap_reservation_base;
          }
          if (ppVar6 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d59520;
          param_3 = param_3 + 1;
        }
      } while (param_3 != param_7 || param_2 != param_6);
    }
    do {
      uVar1 = param_1->pages_committed[uVar9 >> 5];
      if ((uVar1 >> ((uint)uVar9 & 0x1f) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1->pages_committed[uVar9 >> 5] = uVar1 & ~(1 << ((byte)uVar9 & 0x1f));
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
    pas_page_malloc_decommit_without_mprotect
              ((void *)((longlong)param_1->deallocation_log + uVar8),local_60,pas_may_mmap);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pas_thread_local_cache_append_deallocation_slow @ 140d595f0

void __cdecl
pas_thread_local_cache_append_deallocation_slow
          (pas_thread_local_cache *param_1,ulong64 param_2,
          pas_segregated_page_config_kind_and_role param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = param_1->deallocation_log_index;
  if ((ulonglong)uVar1 < 1000) {
    param_1->deallocation_log[uVar1] = (longlong)(int)param_3 | param_2 << 6;
    param_1->deallocation_log_index = uVar1 + 1;
    pas_thread_local_cache_flush_deallocation_log(param_1,pas_lock_is_not_held);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_shrink @ 140d59630

void __cdecl
pas_thread_local_cache_shrink(pas_thread_local_cache *param_1,pas_lock_hold_mode param_2)

{
  if (param_1 == (pas_thread_local_cache *)0x0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  flush_deallocation_log_for_scavenger(param_1);
  param_1->deallocation_log_index = 0;
  param_1->num_logged_bytes = 0;
  param_1->deallocation_log_dirty = true;
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->node->scavenger_lock);
  if (param_2 != pas_lock_is_not_held) {
    pas_thread_local_cache_stop_local_allocators(param_1,param_2);
    return;
  }
  pas_scavenger_notify_eligibility_if_needed();
  pas_thread_local_cache_stop_local_allocators(param_1,pas_lock_is_not_held);
  pas_scavenger_notify_eligibility_if_needed();
  return;
}

