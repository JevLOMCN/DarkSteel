// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 33

// verse_heap_initialize_page_cache_config @ 140d933a0

void __cdecl verse_heap_initialize_page_cache_config(pas_large_free_heap_config *param_1)

{
  param_1->type_size = 1;
  param_1->min_alignment = 1;
  param_1->aligned_allocator = page_cache_aligned_allocator;
  param_1->aligned_allocator_arg = (void *)0x0;
  param_1->deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  param_1->deallocator_arg = (void *)0x0;
  return;
}

// page_cache_aligned_allocator @ 140d933d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
page_cache_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStack_48 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_3 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_reservation_try_allocate_without_deallocating_padding
            (__return_storage_ptr__,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// verse_heap_create @ 140d93430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap * __cdecl verse_heap_create(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  pas_heap_runtime_config *ppVar2;
  pas_reserved_memory_provider *ppVar3;
  pas_heap *ppVar4;
  ulonglong uVar5;
  undefined1 auStackY_78 [32];
  pas_alignment local_48;
  pas_allocation_result local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (verse_heap_is_ready_for_allocation == true) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 ^ param_1 - 1) <= param_1 - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 != 0) {
    if (param_2 < 0x80000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = 0x80000;
    if (0x80000 < param_3) {
      uVar5 = param_3;
    }
    if ((uVar5 & uVar5 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_3 = uVar5;
    if ((uVar5 - 1 & param_2) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  ppVar2 = pas_immortal_heap_allocate(0xe0,"verse_heap_runtime_config",pas_object_allocation);
  *(undefined8 *)&ppVar2->field_0x5 = 0;
  *(undefined8 *)((longlong)&ppVar2->directory_size_bound_for_baseline_allocators + 1) = 0;
  *(undefined8 *)((longlong)&ppVar2->max_segregated_object_size + 1) = 0;
  *(undefined8 *)&ppVar2->field_0x1d = 0;
  *(undefined8 *)((longlong)&ppVar2->view_cache_capacity_for_object_size + 5) = 0;
  *(undefined8 *)&ppVar2[1].field_0x5 = 0;
  *(undefined8 *)((longlong)&ppVar2[1].directory_size_bound_for_baseline_allocators + 1) = 0;
  *(undefined8 *)((longlong)&ppVar2[1].max_segregated_object_size + 1) = 0;
  *(undefined8 *)&ppVar2[1].field_0x1d = 0;
  *(undefined8 *)((longlong)&ppVar2[1].view_cache_capacity_for_object_size + 5) = 0;
  *(undefined8 *)&ppVar2[2].field_0x5 = 0;
  *(undefined8 *)((longlong)&ppVar2[2].directory_size_bound_for_baseline_allocators + 1) = 0;
  *(undefined8 *)((longlong)&ppVar2[2].max_segregated_object_size + 1) = 0;
  *(undefined8 *)&ppVar2[2].field_0x1d = 0;
  *(undefined8 *)((longlong)&ppVar2[2].view_cache_capacity_for_object_size + 5) = 0;
  *(undefined8 *)&ppVar2[3].field_0x5 = 0;
  *(undefined8 *)((longlong)&ppVar2[3].directory_size_bound_for_baseline_allocators + 1) = 0;
  *(undefined8 *)((longlong)&ppVar2[3].max_segregated_object_size + 1) = 0;
  *(undefined8 *)&ppVar2[3].field_0x1d = 0;
  *(undefined8 *)((longlong)&ppVar2[3].view_cache_capacity_for_object_size + 5) = 0;
  *(undefined8 *)&ppVar2[4].field_0x5 = 0;
  *(undefined8 *)((longlong)&ppVar2[4].directory_size_bound_for_baseline_allocators + 1) = 0;
  *(undefined8 *)((longlong)&ppVar2[4].max_segregated_object_size + 1) = 0;
  *(undefined8 *)&ppVar2[4].field_0x1d = 0;
  *(undefined8 *)((longlong)&ppVar2[4].view_cache_capacity_for_object_size + 5) = 0;
  *(undefined8 *)&ppVar2[5].field_0x5 = 0;
  ppVar2[5].directory_size_bound_for_partial_views = 0;
  ppVar2[5].directory_size_bound_for_baseline_allocators = 0;
  ppVar2[5].directory_size_bound_for_no_view_cache = 0;
  ppVar2[5].max_segregated_object_size = 0;
  *(undefined4 *)ppVar2 = 2;
  ppVar2->field_0x4 = 2;
  ppVar2->directory_size_bound_for_baseline_allocators = 0;
  ppVar2->directory_size_bound_for_no_view_cache = 0xffffffff;
  ppVar2->max_segregated_object_size = 0xffffffff;
  ppVar2->view_cache_capacity_for_object_size =
       (_func___cdecl_ulong64_ulong64_pas_segregated_page_config_ptr *)0x0;
  if (param_2 == 0) {
    *(undefined8 *)(ppVar2 + 1) = 0;
    ppVar2[1].directory_size_bound_for_partial_views = 0;
    ppVar2[1].directory_size_bound_for_baseline_allocators = 0;
    ppVar2[1].directory_size_bound_for_no_view_cache = 0;
    ppVar2[1].max_segregated_object_size = 0;
    *(code **)&ppVar2[1].max_bitfit_object_size = pas_global_physical_page_sharing_cache_provider;
    ppVar3 = (pas_reserved_memory_provider *)0x0;
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_48.alignment_begin = 0;
    local_48.alignment = param_3;
    pas_reservation_free_heap_allocate_with_alignment
              (&local_38,param_2,&local_48,"verse_heap_reservation",pas_delegate_allocation);
    if ((local_38.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_38.begin == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_38.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(ulong64 *)(ppVar2 + 1) = local_38.begin;
    ppVar2[1].directory_size_bound_for_partial_views = (int)param_2;
    ppVar2[1].directory_size_bound_for_baseline_allocators = (int)(param_2 >> 0x20);
    ppVar2[1].directory_size_bound_for_no_view_cache = (int)param_3;
    ppVar2[1].max_segregated_object_size = (int)(param_3 >> 0x20);
    *(code **)&ppVar2[1].max_bitfit_object_size = pas_reserved_memory_provider_try_allocate;
    ppVar3 = pas_reserved_memory_provider_create(local_38.begin,param_2 + local_38.begin);
  }
  ppVar2[1].view_cache_capacity_for_object_size =
       (_func___cdecl_ulong64_ulong64_pas_segregated_page_config_ptr *)ppVar3;
  pas_large_heap_physical_page_sharing_cache_construct
            ((pas_large_heap_physical_page_sharing_cache *)(ppVar2 + 2),
             verse_heap_runtime_config_chunks_provider,ppVar2);
  pas_reserve_commit_cache_large_free_heap_construct
            ((pas_reserve_commit_cache_large_free_heap *)
             &ppVar2[3].directory_size_bound_for_partial_views);
  verse_heap_object_set_set_construct
            ((verse_heap_object_set_set *)&ppVar2[5].directory_size_bound_for_partial_views);
  verse_heap_object_set_set_add_set
            ((verse_heap_object_set_set *)&ppVar2[5].directory_size_bound_for_partial_views,
             &verse_heap_all_objects);
  ppVar4 = pas_immortal_heap_allocate(0x50,"pas_heap",pas_object_allocation);
  (ppVar4->large_heap).free_heap.num_mapped_bytes = 0;
  ppVar4->type = (pas_heap_type *)0x0;
  (ppVar4->segregated_heap).runtime_config = (pas_heap_runtime_config *)0x0;
  (ppVar4->segregated_heap).index_to_small_allocator_index = (uint *)0x0;
  (ppVar4->segregated_heap).index_to_small_size_directory =
       (pas_compact_atomic_segregated_size_directory_ptr *)0x0;
  (ppVar4->segregated_heap).basic_size_directory_and_head = 0;
  (ppVar4->segregated_heap).rare_data = 0;
  (ppVar4->segregated_heap).bitfit_heap = 0;
  (ppVar4->segregated_heap).small_index_upper_bound = 0;
  *(undefined8 *)&(ppVar4->large_heap).free_heap = 0;
  ppVar4->heap_ref = (pas_heap_ref *)0x0;
  *(undefined8 *)&ppVar4->next_heap = 0;
  ppVar4->type = (pas_heap_type *)param_1;
  pas_segregated_heap_construct(&ppVar4->segregated_heap,ppVar4,&verse_heap_config,ppVar2);
  pas_fast_large_free_heap_construct(&(ppVar4->large_heap).free_heap);
  ppVar4->config_kind = pas_heap_config_kind_verse;
  pas_all_heaps_add_heap(ppVar4);
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if ((local_28 ^ (ulonglong)auStackY_78) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    ppVar4 = (pas_heap *)(*pcVar1)();
    return ppVar4;
  }
  return ppVar4;
}

// verse_heap_get_base @ 140d93700

void * __cdecl verse_heap_get_base(pas_heap *param_1)

{
  code *pcVar1;
  
  if (param_1->config_kind == 3) {
    return *(void **)((param_1->segregated_heap).runtime_config + 1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_get_size @ 140d93720

ulong64 __cdecl verse_heap_get_size(pas_heap *param_1)

{
  pas_heap_runtime_config *ppVar1;
  code *pcVar2;
  ulong64 uVar3;
  
  if (param_1->config_kind == 3) {
    ppVar1 = (param_1->segregated_heap).runtime_config;
    uVar3._0_4_ = ppVar1[1].directory_size_bound_for_partial_views;
    uVar3._4_4_ = ppVar1[1].directory_size_bound_for_baseline_allocators;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// verse_heap_get_alignment @ 140d93740

ulong64 __cdecl verse_heap_get_alignment(pas_heap *param_1)

{
  pas_heap_runtime_config *ppVar1;
  code *pcVar2;
  ulong64 uVar3;
  
  if (param_1->config_kind == 3) {
    ppVar1 = (param_1->segregated_heap).runtime_config;
    uVar3._0_4_ = ppVar1[1].directory_size_bound_for_no_view_cache;
    uVar3._4_4_ = ppVar1[1].max_segregated_object_size;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// verse_heap_get_min_align @ 140d93760

ulong64 __cdecl verse_heap_get_min_align(pas_heap *param_1)

{
  code *pcVar1;
  
  if (param_1->config_kind == 3) {
    return (ulong64)param_1->type;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_add_to_set @ 140d93780

void __cdecl verse_heap_add_to_set(pas_heap *param_1,verse_heap_object_set *param_2)

{
  code *pcVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (verse_heap_is_ready_for_allocation == true) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->config_kind == 3) {
    verse_heap_object_set_set_add_set
              ((verse_heap_object_set_set *)
               &(param_1->segregated_heap).runtime_config[5].directory_size_bound_for_partial_views,
               param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d937ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_did_become_ready_for_allocation @ 140d937e0

void __cdecl verse_heap_did_become_ready_for_allocation(void)

{
  code *pcVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (verse_heap_is_ready_for_allocation != true) {
    verse_heap_is_ready_for_allocation = true;
                    /* WARNING: Could not recover jumptable at 0x000140d9380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_try_allocate @ 140d93820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl verse_heap_try_allocate(pas_heap *param_1,ulong64 param_2)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  pas_heap_type *ppVar4;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  pas_segregated_size_directory *ppVar10;
  void *pvVar11;
  ulong64 uVar12;
  pas_heap_type *ppVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStackY_78 [32];
  pas_baseline_allocator_result local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar15 = param_2 + 0xf >> 4;
  if (uVar15 < (param_1->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_1->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar15];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_1->segregated_heap,uVar15,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d9390e:
      local_48.did_succeed = false;
      local_48.allocator = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48.allocator = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_48.did_succeed = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d9390e;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)&local_48,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)&local_48,uVar8,&verse_heap_config);
  }
  if ((local_48.did_succeed & 1U) == 0) {
    ppVar4 = param_1->type;
    ppVar13 = ppVar4 + (ppVar4 == (pas_heap_type *)0x0);
    if (((((((param_1->segregated_heap).small_index_upper_bound <= uVar15) ||
           (ppVar5 = (param_1->segregated_heap).index_to_small_size_directory,
           ppVar5 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
          (uVar9 = (ulonglong)ppVar5[uVar15].payload,
          ppVar10 = (pas_segregated_size_directory *)(uVar9 * 8 + pas_compact_heap_reservation_base)
          , ppVar10 == (pas_segregated_size_directory *)0x0 || uVar9 == 0)) &&
         (ppVar10 = pas_segregated_heap_size_directory_for_index_slow
                              (&param_1->segregated_heap,uVar15,(uint *)0x0,&verse_heap_config),
         ppVar10 == (pas_segregated_size_directory *)0x0)) ||
        ((pas_heap_type *)(1L << ppVar10->alignment_shift) < ppVar4)) &&
       (ppVar10 = pas_heap_ensure_size_directory_for_size_slow
                            (param_1,param_2,(ulong64)ppVar13,pas_force_size_lookup,
                             &verse_heap_config,(uint *)0x0),
       ppVar10 == (pas_segregated_size_directory *)0x0)) {
      pvVar11 = try_allocate_large(param_1,param_2,(ulong64)ppVar13,pas_allocation_result_identity);
      goto LAB_140d93a62;
    }
    if (ppVar10->allocator_index == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              (&local_48,ppVar10,param_2,pas_force_size_lookup,&verse_heap_config,(uint *)0x0);
    if ((local_48.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (local_48.lock != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  else {
    ppVar13 = (pas_heap_type *)&DAT_00000001;
  }
  ((local_48.allocator)->scavenger_data).is_in_use = true;
  uVar8 = (local_48.allocator)->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar12 = (local_48.allocator)->page_ish;
    uVar15 = (local_48.allocator)->current_word;
    if (uVar15 == 0) {
      if ((local_48.allocator)->config_kind == 10) {
        uVar8 = (local_48.allocator)->end_offset;
        uVar1 = (local_48.allocator)->current_offset;
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < uVar8) {
          (local_48.allocator)->bits[uVar9] = 0;
          lVar14 = 0;
          do {
            if ((uVar8 - 1) - uVar9 == lVar14) {
              (local_48.allocator)->current_offset = uVar8;
              goto LAB_140d93b03;
            }
            uVar12 = uVar12 + 0x400;
            uVar15 = local_48.allocator[1].bits[uVar9 + lVar14 + -8];
            lVar14 = lVar14 + 1;
          } while (uVar15 == 0);
          (local_48.allocator)->current_offset = uVar1 + (int)lVar14;
          (local_48.allocator)->page_ish = uVar12;
          goto LAB_140d93a4c;
        }
LAB_140d93b03:
        verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                  ((pas_allocation_result *)&local_48,local_48.allocator,
                   &verse_heap_allocator_counts,pas_allocation_result_identity);
      }
      else {
        verse_heap_config_specialized_local_allocator_try_allocate_slow
                  ((pas_allocation_result *)&local_48,local_48.allocator,param_2,(ulong64)ppVar13,
                   &verse_heap_allocator_counts,pas_allocation_result_identity);
      }
      pvVar11 = (void *)CONCAT71(local_48._1_7_,local_48.did_succeed);
      goto LAB_140d93a62;
    }
LAB_140d93a4c:
    uVar9 = 0;
    for (uVar7 = uVar15; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
      uVar9 = uVar9 + 1;
    }
    (local_48.allocator)->current_word = uVar15 & ~(1L << (uVar9 & 0x3f));
    pvVar11 = (void *)((uint)((int)uVar9 << 4) + uVar12);
  }
  else {
    (local_48.allocator)->remaining = uVar8 - (local_48.allocator)->object_size;
    pvVar11 = (void *)((local_48.allocator)->payload_end - (ulonglong)uVar8);
  }
  ((local_48.allocator)->scavenger_data).is_in_use = false;
LAB_140d93a62:
  if ((local_30 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return pvVar11;
  }
  pcVar6 = (code *)swi(3);
  pvVar11 = (void *)(*pcVar6)();
  return pvVar11;
}

// pas_allocation_result_identity @ 140d93b60

pas_allocation_result * __cdecl
pas_allocation_result_identity
          (pas_allocation_result *__return_storage_ptr__,pas_allocation_result *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  pas_zero_mode pVar3;
  
  bVar1 = param_1->did_succeed;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  pVar3 = param_1->zero_mode;
  __return_storage_ptr__->begin = param_1->begin;
  __return_storage_ptr__->did_succeed = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar2;
  __return_storage_ptr__->zero_mode = pVar3;
  return __return_storage_ptr__;
}

// verse_heap_allocate @ 140d93b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl verse_heap_allocate(pas_heap *param_1,ulong64 param_2)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  pas_heap_type *ppVar4;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  pas_segregated_size_directory *ppVar10;
  void *pvVar11;
  ulong64 uVar12;
  pas_heap_type *ppVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStackY_78 [32];
  pas_baseline_allocator_result local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar15 = param_2 + 0xf >> 4;
  if (uVar15 < (param_1->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_1->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar15];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_1->segregated_heap,uVar15,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d93c5e:
      local_48.did_succeed = false;
      local_48.allocator = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48.allocator = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_48.did_succeed = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d93c5e;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)&local_48,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)&local_48,uVar8,&verse_heap_config);
  }
  if ((local_48.did_succeed & 1U) == 0) {
    ppVar4 = param_1->type;
    ppVar13 = ppVar4 + (ppVar4 == (pas_heap_type *)0x0);
    if (((((((param_1->segregated_heap).small_index_upper_bound <= uVar15) ||
           (ppVar5 = (param_1->segregated_heap).index_to_small_size_directory,
           ppVar5 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
          (uVar9 = (ulonglong)ppVar5[uVar15].payload,
          ppVar10 = (pas_segregated_size_directory *)(uVar9 * 8 + pas_compact_heap_reservation_base)
          , ppVar10 == (pas_segregated_size_directory *)0x0 || uVar9 == 0)) &&
         (ppVar10 = pas_segregated_heap_size_directory_for_index_slow
                              (&param_1->segregated_heap,uVar15,(uint *)0x0,&verse_heap_config),
         ppVar10 == (pas_segregated_size_directory *)0x0)) ||
        ((pas_heap_type *)(1L << ppVar10->alignment_shift) < ppVar4)) &&
       (ppVar10 = pas_heap_ensure_size_directory_for_size_slow
                            (param_1,param_2,(ulong64)ppVar13,pas_force_size_lookup,
                             &verse_heap_config,(uint *)0x0),
       ppVar10 == (pas_segregated_size_directory *)0x0)) {
      pvVar11 = try_allocate_large(param_1,param_2,(ulong64)ppVar13,
                                   pas_allocation_result_crash_on_error);
      goto LAB_140d93db2;
    }
    if (ppVar10->allocator_index == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              (&local_48,ppVar10,param_2,pas_force_size_lookup,&verse_heap_config,(uint *)0x0);
    if ((local_48.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (local_48.lock != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  else {
    ppVar13 = (pas_heap_type *)&DAT_00000001;
  }
  ((local_48.allocator)->scavenger_data).is_in_use = true;
  uVar8 = (local_48.allocator)->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar12 = (local_48.allocator)->page_ish;
    uVar15 = (local_48.allocator)->current_word;
    if (uVar15 == 0) {
      if ((local_48.allocator)->config_kind == 10) {
        uVar8 = (local_48.allocator)->end_offset;
        uVar1 = (local_48.allocator)->current_offset;
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < uVar8) {
          (local_48.allocator)->bits[uVar9] = 0;
          lVar14 = 0;
          do {
            if ((uVar8 - 1) - uVar9 == lVar14) {
              (local_48.allocator)->current_offset = uVar8;
              goto LAB_140d93e53;
            }
            uVar12 = uVar12 + 0x400;
            uVar15 = local_48.allocator[1].bits[uVar9 + lVar14 + -8];
            lVar14 = lVar14 + 1;
          } while (uVar15 == 0);
          (local_48.allocator)->current_offset = uVar1 + (int)lVar14;
          (local_48.allocator)->page_ish = uVar12;
          goto LAB_140d93d9c;
        }
LAB_140d93e53:
        verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                  ((pas_allocation_result *)&local_48,local_48.allocator,
                   &verse_heap_allocator_counts,pas_allocation_result_crash_on_error);
      }
      else {
        verse_heap_config_specialized_local_allocator_try_allocate_slow
                  ((pas_allocation_result *)&local_48,local_48.allocator,param_2,(ulong64)ppVar13,
                   &verse_heap_allocator_counts,pas_allocation_result_crash_on_error);
      }
      pvVar11 = (void *)CONCAT71(local_48._1_7_,local_48.did_succeed);
      goto LAB_140d93db2;
    }
LAB_140d93d9c:
    uVar9 = 0;
    for (uVar7 = uVar15; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
      uVar9 = uVar9 + 1;
    }
    (local_48.allocator)->current_word = uVar15 & ~(1L << (uVar9 & 0x3f));
    pvVar11 = (void *)((uint)((int)uVar9 << 4) + uVar12);
  }
  else {
    (local_48.allocator)->remaining = uVar8 - (local_48.allocator)->object_size;
    pvVar11 = (void *)((local_48.allocator)->payload_end - (ulonglong)uVar8);
  }
  ((local_48.allocator)->scavenger_data).is_in_use = false;
LAB_140d93db2:
  if ((local_30 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return pvVar11;
  }
  pcVar6 = (code *)swi(3);
  pvVar11 = (void *)(*pcVar6)();
  return pvVar11;
}

// pas_allocation_result_crash_on_error @ 140d93eb0

pas_allocation_result * __cdecl
pas_allocation_result_crash_on_error
          (pas_allocation_result *__return_storage_ptr__,pas_allocation_result *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  pas_zero_mode pVar3;
  
  if (param_1->did_succeed != false) {
    bVar1 = param_1->did_succeed;
    uVar2 = *(undefined3 *)&param_1->field_0x9;
    pVar3 = param_1->zero_mode;
    __return_storage_ptr__->begin = param_1->begin;
    __return_storage_ptr__->did_succeed = bVar1;
    *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar2;
    __return_storage_ptr__->zero_mode = pVar3;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  pas_panic_on_out_of_memory_error();
}

// verse_heap_try_allocate_with_alignment @ 140d93ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
verse_heap_try_allocate_with_alignment(pas_heap *param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  pas_segregated_size_directory *ppVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  longlong lVar14;
  pas_heap_type *ppVar15;
  undefined1 auStackY_88 [32];
  pas_baseline_allocator_result local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar12 = uVar13 + 0xf >> 4;
  if (uVar12 < (param_1->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_1->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar12];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_1->segregated_heap,uVar12,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d94004:
      local_50.did_succeed = false;
      local_50.allocator = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_50.allocator = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50.did_succeed = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d94004;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)&local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)&local_50,uVar8,&verse_heap_config);
  }
  bVar7 = local_50.did_succeed;
  if (((param_3 != 1) && ((local_50.did_succeed & 1U) != 0)) &&
     ((ulonglong)(1L << ((local_50.allocator)->alignment_shift & 0x3f)) < param_3)) {
    bVar7 = 0;
  }
  if ((bVar7 & 1) == 0) {
    ppVar15 = param_1->type;
    if (param_1->type < param_3) {
      ppVar15 = (pas_heap_type *)param_3;
    }
    uVar12 = param_2 + 0xf >> 4;
    if (((((((param_1->segregated_heap).small_index_upper_bound <= uVar12) ||
           (ppVar4 = (param_1->segregated_heap).index_to_small_size_directory,
           ppVar4 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
          (uVar9 = (ulonglong)ppVar4[uVar12].payload,
          ppVar10 = (pas_segregated_size_directory *)(uVar9 * 8 + pas_compact_heap_reservation_base)
          , ppVar10 == (pas_segregated_size_directory *)0x0 || uVar9 == 0)) &&
         (ppVar10 = pas_segregated_heap_size_directory_for_index_slow
                              (&param_1->segregated_heap,uVar12,(uint *)0x0,&verse_heap_config),
         ppVar10 == (pas_segregated_size_directory *)0x0)) ||
        ((pas_heap_type *)(1L << ppVar10->alignment_shift) < ppVar15)) &&
       (ppVar10 = pas_heap_ensure_size_directory_for_size_slow
                            (param_1,param_2,(ulong64)ppVar15,pas_force_size_lookup,
                             &verse_heap_config,(uint *)0x0),
       ppVar10 == (pas_segregated_size_directory *)0x0)) {
      pvVar11 = try_allocate_large(param_1,param_2,(ulong64)ppVar15,pas_allocation_result_identity);
      goto LAB_140d9417c;
    }
    if (ppVar10->allocator_index == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              (&local_50,ppVar10,uVar13,pas_force_size_lookup,&verse_heap_config,(uint *)0x0);
    if ((local_50.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    param_3 = (ulong64)ppVar15;
    if (local_50.lock != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  ((local_50.allocator)->scavenger_data).is_in_use = true;
  uVar8 = (local_50.allocator)->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar13 = (local_50.allocator)->page_ish;
    uVar12 = (local_50.allocator)->current_word;
    if (uVar12 == 0) {
      if ((local_50.allocator)->config_kind == 10) {
        uVar8 = (local_50.allocator)->end_offset;
        uVar1 = (local_50.allocator)->current_offset;
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < uVar8) {
          (local_50.allocator)->bits[uVar9] = 0;
          lVar14 = 0;
          do {
            if ((uVar8 - 1) - uVar9 == lVar14) {
              (local_50.allocator)->current_offset = uVar8;
              goto LAB_140d9421e;
            }
            uVar13 = uVar13 + 0x400;
            uVar12 = local_50.allocator[1].bits[uVar9 + lVar14 + -8];
            lVar14 = lVar14 + 1;
          } while (uVar12 == 0);
          (local_50.allocator)->current_offset = uVar1 + (int)lVar14;
          (local_50.allocator)->page_ish = uVar13;
          goto LAB_140d94166;
        }
LAB_140d9421e:
        verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                  ((pas_allocation_result *)&local_50,local_50.allocator,
                   &verse_heap_allocator_counts,pas_allocation_result_identity);
      }
      else {
        verse_heap_config_specialized_local_allocator_try_allocate_slow
                  ((pas_allocation_result *)&local_50,local_50.allocator,param_2,param_3,
                   &verse_heap_allocator_counts,pas_allocation_result_identity);
      }
      pvVar11 = (void *)CONCAT71(local_50._1_7_,local_50.did_succeed);
      goto LAB_140d9417c;
    }
LAB_140d94166:
    uVar9 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
      uVar9 = uVar9 + 1;
    }
    (local_50.allocator)->current_word = uVar12 & ~(1L << (uVar9 & 0x3f));
    pvVar11 = (void *)((uint)((int)uVar9 << 4) + uVar13);
  }
  else {
    (local_50.allocator)->remaining = uVar8 - (local_50.allocator)->object_size;
    pvVar11 = (void *)((local_50.allocator)->payload_end - (ulonglong)uVar8);
  }
  ((local_50.allocator)->scavenger_data).is_in_use = false;
LAB_140d9417c:
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return pvVar11;
  }
  pcVar5 = (code *)swi(3);
  pvVar11 = (void *)(*pcVar5)();
  return pvVar11;
}

// verse_heap_allocate_with_alignment @ 140d94270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl verse_heap_allocate_with_alignment(pas_heap *param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  pas_segregated_size_directory *ppVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  longlong lVar14;
  pas_heap_type *ppVar15;
  undefined1 auStackY_88 [32];
  pas_baseline_allocator_result local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar12 = uVar13 + 0xf >> 4;
  if (uVar12 < (param_1->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_1->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar12];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_1->segregated_heap,uVar12,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d94394:
      local_50.did_succeed = false;
      local_50.allocator = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_50.allocator = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50.did_succeed = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d94394;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)&local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)&local_50,uVar8,&verse_heap_config);
  }
  bVar7 = local_50.did_succeed;
  if (((param_3 != 1) && ((local_50.did_succeed & 1U) != 0)) &&
     ((ulonglong)(1L << ((local_50.allocator)->alignment_shift & 0x3f)) < param_3)) {
    bVar7 = 0;
  }
  if ((bVar7 & 1) == 0) {
    ppVar15 = param_1->type;
    if (param_1->type < param_3) {
      ppVar15 = (pas_heap_type *)param_3;
    }
    uVar12 = param_2 + 0xf >> 4;
    if (((((((param_1->segregated_heap).small_index_upper_bound <= uVar12) ||
           (ppVar4 = (param_1->segregated_heap).index_to_small_size_directory,
           ppVar4 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
          (uVar9 = (ulonglong)ppVar4[uVar12].payload,
          ppVar10 = (pas_segregated_size_directory *)(uVar9 * 8 + pas_compact_heap_reservation_base)
          , ppVar10 == (pas_segregated_size_directory *)0x0 || uVar9 == 0)) &&
         (ppVar10 = pas_segregated_heap_size_directory_for_index_slow
                              (&param_1->segregated_heap,uVar12,(uint *)0x0,&verse_heap_config),
         ppVar10 == (pas_segregated_size_directory *)0x0)) ||
        ((pas_heap_type *)(1L << ppVar10->alignment_shift) < ppVar15)) &&
       (ppVar10 = pas_heap_ensure_size_directory_for_size_slow
                            (param_1,param_2,(ulong64)ppVar15,pas_force_size_lookup,
                             &verse_heap_config,(uint *)0x0),
       ppVar10 == (pas_segregated_size_directory *)0x0)) {
      pvVar11 = try_allocate_large(param_1,param_2,(ulong64)ppVar15,
                                   pas_allocation_result_crash_on_error);
      goto LAB_140d9450c;
    }
    if (ppVar10->allocator_index == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              (&local_50,ppVar10,uVar13,pas_force_size_lookup,&verse_heap_config,(uint *)0x0);
    if ((local_50.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    param_3 = (ulong64)ppVar15;
    if (local_50.lock != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  ((local_50.allocator)->scavenger_data).is_in_use = true;
  uVar8 = (local_50.allocator)->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar13 = (local_50.allocator)->page_ish;
    uVar12 = (local_50.allocator)->current_word;
    if (uVar12 == 0) {
      if ((local_50.allocator)->config_kind == 10) {
        uVar8 = (local_50.allocator)->end_offset;
        uVar1 = (local_50.allocator)->current_offset;
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < uVar8) {
          (local_50.allocator)->bits[uVar9] = 0;
          lVar14 = 0;
          do {
            if ((uVar8 - 1) - uVar9 == lVar14) {
              (local_50.allocator)->current_offset = uVar8;
              goto LAB_140d945ae;
            }
            uVar13 = uVar13 + 0x400;
            uVar12 = local_50.allocator[1].bits[uVar9 + lVar14 + -8];
            lVar14 = lVar14 + 1;
          } while (uVar12 == 0);
          (local_50.allocator)->current_offset = uVar1 + (int)lVar14;
          (local_50.allocator)->page_ish = uVar13;
          goto LAB_140d944f6;
        }
LAB_140d945ae:
        verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                  ((pas_allocation_result *)&local_50,local_50.allocator,
                   &verse_heap_allocator_counts,pas_allocation_result_crash_on_error);
      }
      else {
        verse_heap_config_specialized_local_allocator_try_allocate_slow
                  ((pas_allocation_result *)&local_50,local_50.allocator,param_2,param_3,
                   &verse_heap_allocator_counts,pas_allocation_result_crash_on_error);
      }
      pvVar11 = (void *)CONCAT71(local_50._1_7_,local_50.did_succeed);
      goto LAB_140d9450c;
    }
LAB_140d944f6:
    uVar9 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
      uVar9 = uVar9 + 1;
    }
    (local_50.allocator)->current_word = uVar12 & ~(1L << (uVar9 & 0x3f));
    pvVar11 = (void *)((uint)((int)uVar9 << 4) + uVar13);
  }
  else {
    (local_50.allocator)->remaining = uVar8 - (local_50.allocator)->object_size;
    pvVar11 = (void *)((local_50.allocator)->payload_end - (ulonglong)uVar8);
  }
  ((local_50.allocator)->scavenger_data).is_in_use = false;
LAB_140d9450c:
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return pvVar11;
  }
  pcVar5 = (code *)swi(3);
  pvVar11 = (void *)(*pcVar5)();
  return pvVar11;
}

// verse_heap_start_allocating_black_before_handshake @ 140d94600

void __cdecl verse_heap_start_allocating_black_before_handshake(void)

{
  code *pcVar1;
  
  if (verse_heap_allocating_black_version != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_mark_bits_page_commit_controller_is_locked) {
    verse_heap_allocating_black_version = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_start_sweep_before_handshake @ 140d94630

void __cdecl verse_heap_start_sweep_before_handshake(void)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_current_iteration_state.version != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_mark_bits_page_commit_controller_is_locked) {
    uVar2 = verse_heap_latest_version + 1;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    verse_heap_allocating_black_version = uVar2;
    verse_heap_latest_version = uVar2;
    verse_heap_is_sweeping = true;
    verse_heap_swept_bytes = 0;
    if (9 < uVar2) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_start_sweep_after_handshake @ 140d946a0

ulong64 __cdecl verse_heap_start_sweep_after_handshake(void)

{
  code *pcVar1;
  
  if (verse_heap_allocating_black_version < 10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (!verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_current_iteration_state.version != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_swept_bytes == 0) {
    if (verse_heap_mark_bits_page_commit_controller_is_locked) {
      return (ulonglong)(verse_heap_all_objects.views.size + 1);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_end_sweep @ 140d946f0

void __cdecl verse_heap_end_sweep(void)

{
  code *pcVar1;
  
  if (verse_heap_allocating_black_version < 10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (!verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_current_iteration_state.version != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_mark_bits_page_commit_controller_is_locked) {
    verse_heap_allocating_black_version = 0;
    verse_heap_is_sweeping = false;
    pas_scavenger_notify_eligibility_if_needed();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_sweep_range @ 140d94740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d952c3) */
/* WARNING: Removing unreachable block (ram,0x000140d952e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl verse_heap_sweep_range(ulong64 param_1,ulong64 param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  uint *puVar3;
  ulong64 *puVar4;
  verse_heap_chunk_map_entry *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  uint uVar18;
  verse_heap_object_set **ppvVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  sbyte sVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulong64 *puVar31;
  ulong64 uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  ulonglong uVar36;
  code *pcVar37;
  longlong lVar38;
  bool bVar39;
  longlong lVar41;
  undefined1 auVar40 [16];
  longlong lVar42;
  longlong lVar43;
  char cVar44;
  ushort uVar45;
  byte bVar53;
  byte bVar59;
  undefined1 auVar48 [12];
  char cVar54;
  byte bVar55;
  char cVar56;
  byte bVar57;
  char cVar58;
  char cVar60;
  byte bVar61;
  char cVar62;
  undefined1 auVar51 [16];
  byte bVar63;
  undefined1 auVar52 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_178 [40];
  ulonglong *local_150;
  ulong64 *local_148;
  PSRWLOCK local_140;
  ulonglong local_138;
  pas_segregated_page *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c0;
  ushort uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_d8 = 0;
  uStack_d0 = 0;
  if (!verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)invalidInstructionException();
    (*pcVar37)();
  }
  if (verse_heap_current_iteration_state.version != 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)invalidInstructionException();
    (*pcVar37)();
  }
  if (!verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)invalidInstructionException();
    (*pcVar37)();
  }
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_140d952eb;
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (verse_heap_large_objects_header.version == verse_heap_allocating_black_version) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      (*pcVar37)();
    }
    verse_heap_large_objects_header.version = verse_heap_allocating_black_version;
    ppvVar19 = verse_heap_all_sets.sets;
    for (uVar30 = (ulonglong)verse_heap_all_sets.num_sets; uVar30 != 0; uVar30 = uVar30 - 1) {
      if (ppvVar19[uVar30 - 1] != &verse_heap_all_objects) {
        filter_large_entries
                  (ppvVar19[uVar30 - 1],sweep_large_filter_without_deallocating_callback,(void *)0x0
                  );
        ppvVar19 = verse_heap_all_sets.sets;
      }
    }
    filter_large_entries
              (&verse_heap_all_objects,sweep_large_filter_and_deallocate_callback,&local_d8);
    if ((verse_heap_all_objects.num_large_entries == 0) &&
       (verse_heap_large_objects_header.client_data != (void *)0x0)) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      (*pcVar37)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    param_1 = 1;
  }
  dVar16 = _UNK_1531e94a8;
  dVar15 = ___xmm_45300000000000004330000000000000;
  uVar14 = __xmm_00000000000000004530000043300000._4_4_;
  uVar13 = (undefined4)__xmm_00000000000000004530000043300000;
  auVar12 = ___xmm_55555555555555555555555555555555;
  auVar11 = ___xmm_33333333333333333333333333333333;
  auVar10 = ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
  dVar9 = __real_3fe6666666666666;
  local_d8 = param_2 - 1;
  uVar27 = (ulonglong)verse_heap_all_objects.views.size;
  lVar38 = (ulonglong)verse_heap_all_objects.views.spine.payload * 8 +
           pas_compact_heap_reservation_base;
  uVar30 = param_1 - 1;
  if ((ulonglong)verse_heap_all_objects.views.spine.payload == 0) {
    lVar38 = 0;
  }
  uVar36 = uVar30 & 0xffffffffffffff80;
  if (uVar36 < uVar27) {
    uVar21 = (ulonglong)((uint)uVar30 & 0x7f);
    uVar30 = uVar30 >> 7;
    puVar31 = (ulong64 *)0xffffffffffff;
    local_148 = (ulong64 *)0xffffffffffff;
    pcVar37 = AcquireSRWLockExclusive_exref;
    do {
      uVar34 = (ulonglong)*(uint *)(lVar38 + uVar30 * 4);
      lVar33 = uVar34 * 8 + pas_compact_heap_reservation_base;
      if (uVar34 == 0) {
        lVar33 = 0;
      }
      uVar20 = uVar27 - uVar36;
      uVar34 = 0x80;
      if (uVar20 < 0x80) {
        uVar34 = uVar20;
      }
      uVar17 = uVar34;
      lVar26 = lVar33;
      if (uVar21 < uVar20) {
        do {
          local_e8 = lVar26;
          local_f0 = uVar17;
          if (local_d8 <= uVar21 + uVar36) goto LAB_140d95293;
          uVar20 = (ulonglong)*(uint *)(lVar33 + uVar21 * 4);
          if (*(char *)(pas_compact_heap_reservation_base + 0xb + uVar20 * 8) == '\x01') {
            puVar35 = (ulonglong *)(pas_compact_heap_reservation_base + uVar20 * 8);
            local_140 = (PSRWLOCK)(puVar35 + 3);
            local_e0 = uVar21;
            (*pcVar37)();
            uVar32 = pas_compact_heap_reservation_base;
            if (*(char *)((longlong)puVar35 + 0xb) == '\x01') {
              puVar4 = (ulong64 *)*puVar35;
              cVar44 = *(char *)((ulonglong)
                                 ((uint)*(byte *)((longlong)puVar35 + 10) * 0x80000 +
                                 (uint)(ushort)puVar35[1] * 8) + 0xc +
                                pas_compact_heap_reservation_base);
              if (cVar44 == '\x05') {
                uVar23 = 0;
                if ((puVar4 <= puVar31) &&
                   (verse_heap_first_level_chunk_map[(ulonglong)puVar4 >> 0x22] !=
                    (verse_heap_chunk_map_entry *)0x0)) {
                  uVar23 = verse_heap_first_level_chunk_map[(ulonglong)puVar4 >> 0x22]
                           [(uint)((ulonglong)puVar4 >> 0x13) & 0x7fff].encoded_value[0];
                }
                uVar21 = (ulonglong)(uVar23 & 0xfffffff9);
                if (*(PSRWLOCK *)(pas_compact_heap_reservation_base + 0x48 + uVar21) != local_140) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                puVar1 = (ulonglong *)(pas_compact_heap_reservation_base + uVar21);
                if (puVar1[2] != verse_heap_allocating_black_version) {
                  puVar1[2] = verse_heap_allocating_black_version;
                  local_f8 = puVar1[0xb];
                  if (local_f8 == 0) {
                    if ((char)puVar1[4] == '\x01') {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      local_150 = puVar35;
                      (*pcVar37)();
                    }
                    local_150 = puVar35;
                    if (puVar1[5] != 0) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  else {
                    local_130 = (pas_segregated_page *)(uVar32 + uVar21 + 0x40);
                    uVar21 = (ulonglong)((uint)((ulonglong)puVar4 >> 7) & 0xffc) |
                             (ulonglong)puVar4 & 0xfffffffffff80000;
                    local_128 = (longlong)puVar1 + 0x6c;
                    local_138 = 0;
                    lVar33 = 0;
                    local_150 = puVar35;
                    local_118 = uVar36;
                    local_110 = lVar38;
                    local_108 = uVar27;
                    local_100 = uVar30;
                    do {
                      uVar23 = *(uint *)(local_128 + lVar33 * 4);
                      local_120 = lVar33;
                      if (uVar23 != 0) {
                        do {
                          uVar24 = 0;
                          for (uVar25 = uVar23; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000
                              ) {
                            uVar24 = uVar24 + 1;
                          }
                          uVar30 = lVar33 << 5 | (ulonglong)uVar24;
                          uVar25 = *(uint *)(uVar21 + uVar30 * 4);
                          if ((uVar25 & 1) == 0) {
                            puVar31 = puVar4 + uVar30 * 0x40;
                            bVar53 = (byte)((ulonglong)puVar31 >> 9) & 0x1f;
                            puVar3 = (uint *)((longlong)puVar1 +
                                             (ulonglong)((uint)((ulonglong)puVar31 >> 0xc) & 0x7c) +
                                             0x6c);
                            *puVar3 = *puVar3 & (-2 << bVar53 | 0xfffffffeU >> 0x20 - bVar53);
                            uVar30 = puVar1[0xc];
                            if ((uVar30 & 7) != 0) {
                              uVar30 = uVar30 & 0xfffffffffffffff8;
                              if (*(char *)((longlong)puVar1 + 0x41) == '\x01') {
                                *(undefined1 *)((longlong)puVar1 + 0x42) = 1;
                              }
                              else {
                                pas_segregated_directory_view_did_become_eligible_at_index
                                          ((pas_segregated_directory *)
                                           (((uint)*(byte *)(uVar30 + 10) * 0x80000 +
                                            (uint)*(ushort *)(uVar30 + 8) * 8) +
                                           pas_compact_heap_reservation_base),
                                           (ulonglong)*(uint *)(uVar30 + 0xc));
                              }
                              puVar1[0xc] = uVar30;
                            }
                            uVar25 = (uint)puVar31 & 0x7ffff;
                            if ((uVar30 & 6) == 0) {
                              uVar18 = *(uint *)((longlong)puVar1 + 0x44);
                              if (uVar18 != 0) goto LAB_140d94d94;
LAB_140d94db9:
                              bVar39 = false;
                            }
                            else {
                              if (((uint)uVar30 & 7) != 3) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              uVar30 = (ulonglong)
                                       *(uint *)((uVar30 & 0xfffffffffffffff8) + 0x14 +
                                                (ulonglong)(uVar25 >> 9) * 4);
                              lVar38 = pas_compact_heap_reservation_base + uVar30 * 8;
                              if (uVar30 == 0) {
                                lVar38 = 0;
                              }
                              uVar18 = *(uint *)((ulonglong)
                                                 ((uint)*(byte *)(lVar38 + 0xd) * 0x80000 +
                                                 (uint)*(ushort *)(lVar38 + 0xb) * 8) + 0x20 +
                                                pas_compact_heap_reservation_base) & 0x7ffffff;
                              if (uVar18 == 0) goto LAB_140d94db9;
LAB_140d94d94:
                              if (0x80000 < (ulonglong)uVar25 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              uVar30 = ((ulonglong)uVar18 + (ulonglong)uVar25) - 1 >> 0xc;
                              if (uVar30 < uVar25 >> 0xc) goto LAB_140d94db9;
                              uVar27 = (ulonglong)
                                       (((int)local_138 + uVar24) * 0x200 + (uint)puVar4 >> 0xc &
                                       0x7f) - 1;
                              bVar39 = false;
                              do {
                                cVar44 = *(char *)((longlong)puVar1 + uVar27 + 0xed);
                                if (cVar44 == '\0') {
                    /* WARNING: Does not return */
                                  pcVar37 = (code *)invalidInstructionException();
                                  (*pcVar37)();
                                }
                                if (cVar44 == -1) {
                    /* WARNING: Does not return */
                                  pcVar37 = (code *)invalidInstructionException();
                                  (*pcVar37)();
                                }
                                *(char *)((longlong)puVar1 + uVar27 + 0xed) = cVar44 + -1;
                                bVar39 = (bool)(bVar39 | (char)(cVar44 + -1) == '\0');
                                uVar27 = uVar27 + 1;
                              } while (uVar27 < uVar30);
                            }
                            if (pas_segregated_page_deallocate_should_verify_granules == true) {
                              pas_segregated_page_verify_granules(local_130);
                              if (!bVar39) goto LAB_140d94e36;
LAB_140d94efa:
                              pas_segregated_page_note_emptiness_impl
                                        (local_130,pas_note_emptiness_keep_num_non_empty_words);
                              uVar30 = puVar1[0xb] - (ulonglong)*(uint *)((longlong)puVar1 + 0x44);
                            }
                            else {
                              if (bVar39) goto LAB_140d94efa;
LAB_140d94e36:
                              uVar30 = puVar1[0xb] - (ulonglong)*(uint *)((longlong)puVar1 + 0x44);
                            }
                            if (uVar30 == 0) {
                              if (puVar1[5] != 0) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              uVar30 = *puVar1;
                              if (0xffffffffffff < uVar30) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              uVar18 = (uint)(uVar30 >> 0x13) & 0x7fff;
                              uVar25 = verse_heap_first_level_chunk_map[uVar30 >> 0x22][uVar18].
                                       encoded_value[0];
                              if ((uVar25 & 3) != 2) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              uVar28 = uVar25 & 0xfffffff8;
                              puVar35 = (ulonglong *)(pas_compact_heap_reservation_base + uVar28);
                              if (puVar35 != puVar1) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              if ((uVar25 & 4) == 0) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              if (puVar35 == (ulonglong *)0x0) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              if (pas_compact_heap_reservation_size <= uVar28) {
                    /* WARNING: Does not return */
                                pcVar37 = (code *)invalidInstructionException();
                                (*pcVar37)();
                              }
                              verse_heap_first_level_chunk_map[uVar30 >> 0x22][uVar18].encoded_value
                              [0] = uVar28 | 2;
                              pas_segregated_page_note_emptiness_impl
                                        (local_130,pas_note_emptiness_clear_num_non_empty_words);
                            }
                            else {
                              puVar1[0xb] = uVar30;
                            }
                          }
                          else {
                            *(uint *)(uVar21 + uVar30 * 4) = uVar25 & 0xfffffffe;
                          }
                          bVar53 = (byte)uVar24 & 0x1f;
                          uVar23 = uVar23 & (-2 << bVar53 | 0xfffffffeU >> 0x20 - bVar53);
                        } while (uVar23 != 0);
                      }
                      pcVar37 = AcquireSRWLockExclusive_exref;
                      lVar33 = local_120 + 1;
                      local_138 = (ulonglong)((int)local_138 + 0x20);
                    } while (lVar33 != 0x20);
                    if ((char)puVar1[4] == '\x01') {
                      uVar30 = (ulonglong)
                               *(uint *)(pas_compact_heap_reservation_base + 0xc +
                                        (ulonglong)
                                        *(uint *)((ulonglong)
                                                  ((uint)*(byte *)((longlong)local_150 + 10) *
                                                   0x80000 + (uint)(ushort)local_150[1] * 8) + 0x30
                                                 + pas_compact_heap_reservation_base) * 8);
                      if (uVar30 < 8) {
                    /* WARNING: Does not return */
                        pcVar37 = (code *)invalidInstructionException();
                        (*pcVar37)();
                      }
                      lVar38 = pas_compact_heap_reservation_base + uVar30;
                      lVar33 = 0;
                      do {
                        uVar23 = ~*(uint *)(local_128 + lVar33 * 4) & *(uint *)(lVar38 + lVar33 * 4)
                        ;
                        if (uVar23 != 0) {
                          do {
                            iVar6 = 0;
                            for (uVar24 = uVar23; (uVar24 & 1) == 0;
                                uVar24 = uVar24 >> 1 | 0x80000000) {
                              iVar6 = iVar6 + 1;
                            }
                            pbVar2 = (byte *)(uVar21 + (((ulonglong)(uint)(iVar6 << 5) |
                                                        lVar33 << 10) >> 3));
                            *pbVar2 = *pbVar2 & 0xfe;
                            bVar53 = (byte)iVar6 & 0x1f;
                            uVar23 = uVar23 & (-2 << bVar53 | 0xfffffffeU >> 0x20 - bVar53);
                          } while (uVar23 != 0);
                        }
                        lVar33 = lVar33 + 1;
                      } while (lVar33 != 0x20);
                      *(undefined1 *)(puVar1 + 4) = 0;
                    }
                    uVar30 = local_f8 - puVar1[0xb];
                    if ((longlong)uVar30 < 0) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                    bVar39 = CARRY8(uStack_d0,uVar30);
                    uStack_d0 = uStack_d0 + uVar30;
                    uVar30 = local_100;
                    puVar31 = local_148;
                    uVar27 = local_108;
                    uVar36 = local_118;
                    lVar38 = local_110;
                    if (bVar39) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                }
              }
              else {
                if (cVar44 != '\x04') {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                if ((PSRWLOCK)puVar4[7] != local_140) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                if (*puVar4 != verse_heap_allocating_black_version) {
                  *puVar4 = verse_heap_allocating_black_version;
                  if (puVar4[9] == 0) {
                    if ((char)puVar4[2] == '\x01') {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      local_150 = puVar35;
                      (*pcVar37)();
                    }
                    local_150 = puVar35;
                    if (puVar4[3] != 0) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  else {
                    uVar21 = (ulonglong)puVar4 & 0xfffffffffff80000;
                    uVar23 = (uint)((ulonglong)puVar4 >> 9) & 0x3ff;
                    uVar34 = (ulonglong)(uVar23 * 4);
                    if ((longlong)puVar4 + 0x5cU < uVar21 + uVar34 + 0x80 &&
                        uVar21 + uVar34 < (longlong)puVar4 + 0xdcU) {
                      lVar26 = uVar21 + uVar34 + 0x7c;
                      lVar29 = 0;
                      lVar33 = 0;
                      do {
                        uVar23 = *(uint *)(lVar26 + lVar29 * 4) &
                                 *(uint *)((longlong)puVar4 + lVar29 * 4 + 0xd8);
                        *(uint *)((longlong)puVar4 + lVar29 * 4 + 0xd8) = uVar23;
                        *(undefined4 *)(lVar26 + lVar29 * 4) = 0;
                        uVar23 = uVar23 - (uVar23 >> 1 & 0x55555555);
                        uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
                        lVar33 = lVar33 + (ulonglong)
                                          (((uVar23 >> 4) + uVar23 & 0xf0f0f0f) * 0x1010101 >> 0x18)
                        ;
                        lVar29 = lVar29 + -1;
                      } while (lVar29 != -0x20);
                    }
                    else {
                      lVar33 = uVar21 + (ulonglong)uVar23 * 4;
                      lVar29 = 0;
                      lVar41 = 0;
                      lVar26 = 0;
                      lVar42 = 0;
                      lVar43 = 0;
                      do {
                        uVar21 = *(ulonglong *)(lVar33 + 0x78 + lVar26 * 4) &
                                 *(ulonglong *)((longlong)puVar4 + lVar26 * 4 + 0xd4);
                        uVar34 = *(ulonglong *)(lVar33 + 0x70 + lVar26 * 4) &
                                 *(ulonglong *)((longlong)puVar4 + lVar26 * 4 + 0xcc);
                        *(ulonglong *)((longlong)puVar4 + lVar26 * 4 + 0xd4) = uVar21;
                        *(ulonglong *)((longlong)puVar4 + lVar26 * 4 + 0xcc) = uVar34;
                        *(undefined1 (*) [16])(lVar33 + 0x70 + lVar26 * 4) = (undefined1  [16])0x0;
                        auVar66._0_2_ = (ushort)(uVar21 >> 0x20) >> 1;
                        auVar66._2_2_ = (ushort)(uVar21 >> 0x31);
                        auVar66._4_4_ = 0;
                        auVar66._8_2_ = (ushort)uVar21 >> 1;
                        auVar66._10_2_ = (ushort)(uVar21 >> 0x10) >> 1;
                        auVar66._12_4_ = 0;
                        auVar66 = auVar66 & auVar12;
                        uVar45 = CONCAT11((char)(uVar21 >> 0x28) - auVar66[1],
                                          (char)(uVar21 >> 0x20) - auVar66[0]);
                        uVar23 = CONCAT13((char)(uVar21 >> 0x38) - auVar66[3],
                                          CONCAT12((char)(uVar21 >> 0x30) - auVar66[2],uVar45));
                        auVar47._0_10_ =
                             CONCAT19((char)(uVar21 >> 8) - auVar66[9],
                                      CONCAT18((char)uVar21 - auVar66[8],(ulonglong)uVar23));
                        auVar47[10] = (char)(uVar21 >> 0x10) - auVar66[10];
                        auVar47[0xb] = (char)(uVar21 >> 0x18) - auVar66[0xb];
                        auVar49[0xc] = -auVar66[0xc];
                        auVar49._0_12_ = auVar47;
                        auVar49[0xd] = -auVar66[0xd];
                        auVar69[0xe] = -auVar66[0xe];
                        auVar69._0_14_ = auVar49;
                        auVar69[0xf] = -auVar66[0xf];
                        auVar67 = auVar69 & auVar11;
                        auVar51._0_2_ = uVar45 >> 2;
                        auVar51._2_2_ = (ushort)(uVar23 >> 0x12);
                        auVar51._4_4_ = 0;
                        auVar51._8_2_ = (ushort)((unkuint10)auVar47._0_10_ >> 0x42);
                        auVar51._10_2_ = auVar47._10_2_ >> 2;
                        auVar51._12_2_ = auVar49._12_2_ >> 2;
                        auVar51._14_2_ = auVar69._14_2_ >> 2;
                        auVar51 = auVar51 & auVar11;
                        cVar44 = auVar51[0] + auVar67[0];
                        bVar53 = auVar51[1] + auVar67[1];
                        uVar46 = CONCAT11(bVar53,cVar44);
                        cVar54 = auVar51[2] + auVar67[2];
                        bVar55 = auVar51[3] + auVar67[3];
                        cVar56 = auVar51[8] + auVar67[8];
                        bVar57 = auVar51[9] + auVar67[9];
                        uVar45 = CONCAT11(bVar57,cVar56);
                        cVar58 = auVar51[10] + auVar67[10];
                        bVar59 = auVar51[0xb] + auVar67[0xb];
                        uVar7 = CONCAT13(bVar59,CONCAT12(cVar58,uVar45));
                        cVar60 = auVar51[0xc] + auVar67[0xc];
                        bVar61 = auVar51[0xd] + auVar67[0xd];
                        uVar8 = CONCAT15(bVar61,CONCAT14(cVar60,uVar7));
                        cVar62 = auVar51[0xe] + auVar67[0xe];
                        bVar63 = auVar51[0xf] + auVar67[0xf];
                        auVar68[0] = (char)(uVar46 >> 4) + cVar44;
                        auVar68[1] = (bVar53 >> 4) + bVar53;
                        auVar68[2] = (char)(ushort)(CONCAT13(bVar55,CONCAT12(cVar54,uVar46)) >> 0x14
                                                   ) + cVar54;
                        auVar68[3] = (bVar55 >> 4) + bVar55;
                        auVar68._4_4_ = 0;
                        auVar68[8] = (char)(uVar45 >> 4) + cVar56;
                        auVar68[9] = (bVar57 >> 4) + bVar57;
                        auVar68[10] = (char)(ushort)((uint)uVar7 >> 0x14) + cVar58;
                        auVar68[0xb] = (bVar59 >> 4) + bVar59;
                        auVar68[0xc] = (char)(ushort)((uint6)uVar8 >> 0x24) + cVar60;
                        auVar68[0xd] = (bVar61 >> 4) + bVar61;
                        auVar68[0xe] = (char)(ushort)(CONCAT17(bVar63,CONCAT16(cVar62,uVar8)) >>
                                                     0x34) + cVar62;
                        auVar68[0xf] = (bVar63 >> 4) + bVar63;
                        auVar69 = psadbw(auVar68 & auVar10,(undefined1  [16])0x0);
                        lVar29 = lVar29 + auVar69._0_8_;
                        lVar41 = lVar41 + auVar69._8_8_;
                        auVar64._0_2_ = (ushort)(uVar34 >> 0x20) >> 1;
                        auVar64._2_2_ = (ushort)(uVar34 >> 0x31);
                        auVar64._4_4_ = 0;
                        auVar64._8_2_ = (ushort)uVar34 >> 1;
                        auVar64._10_2_ = (ushort)(uVar34 >> 0x10) >> 1;
                        auVar64._12_4_ = 0;
                        auVar64 = auVar64 & auVar12;
                        uVar45 = CONCAT11((char)(uVar34 >> 0x28) - auVar64[1],
                                          (char)(uVar34 >> 0x20) - auVar64[0]);
                        uVar23 = CONCAT13((char)(uVar34 >> 0x38) - auVar64[3],
                                          CONCAT12((char)(uVar34 >> 0x30) - auVar64[2],uVar45));
                        auVar48._0_10_ =
                             CONCAT19((char)(uVar34 >> 8) - auVar64[9],
                                      CONCAT18((char)uVar34 - auVar64[8],(ulonglong)uVar23));
                        auVar48[10] = (char)(uVar34 >> 0x10) - auVar64[10];
                        auVar48[0xb] = (char)(uVar34 >> 0x18) - auVar64[0xb];
                        auVar50[0xc] = -auVar64[0xc];
                        auVar50._0_12_ = auVar48;
                        auVar50[0xd] = -auVar64[0xd];
                        auVar67[0xe] = -auVar64[0xe];
                        auVar67._0_14_ = auVar50;
                        auVar67[0xf] = -auVar64[0xf];
                        auVar69 = auVar67 & auVar11;
                        auVar52._0_2_ = uVar45 >> 2;
                        auVar52._2_2_ = (ushort)(uVar23 >> 0x12);
                        auVar52._4_4_ = 0;
                        auVar52._8_2_ = (ushort)((unkuint10)auVar48._0_10_ >> 0x42);
                        auVar52._10_2_ = auVar48._10_2_ >> 2;
                        auVar52._12_2_ = auVar50._12_2_ >> 2;
                        auVar52._14_2_ = auVar67._14_2_ >> 2;
                        auVar52 = auVar52 & auVar11;
                        cVar44 = auVar52[0] + auVar69[0];
                        bVar53 = auVar52[1] + auVar69[1];
                        uVar46 = CONCAT11(bVar53,cVar44);
                        cVar54 = auVar52[2] + auVar69[2];
                        bVar55 = auVar52[3] + auVar69[3];
                        cVar56 = auVar52[8] + auVar69[8];
                        bVar57 = auVar52[9] + auVar69[9];
                        uVar45 = CONCAT11(bVar57,cVar56);
                        cVar58 = auVar52[10] + auVar69[10];
                        bVar59 = auVar52[0xb] + auVar69[0xb];
                        uVar7 = CONCAT13(bVar59,CONCAT12(cVar58,uVar45));
                        cVar60 = auVar52[0xc] + auVar69[0xc];
                        bVar61 = auVar52[0xd] + auVar69[0xd];
                        uVar8 = CONCAT15(bVar61,CONCAT14(cVar60,uVar7));
                        cVar62 = auVar52[0xe] + auVar69[0xe];
                        bVar63 = auVar52[0xf] + auVar69[0xf];
                        auVar65[0] = (char)(uVar46 >> 4) + cVar44;
                        auVar65[1] = (bVar53 >> 4) + bVar53;
                        auVar65[2] = (char)(ushort)(CONCAT13(bVar55,CONCAT12(cVar54,uVar46)) >> 0x14
                                                   ) + cVar54;
                        auVar65[3] = (bVar55 >> 4) + bVar55;
                        auVar65._4_4_ = 0;
                        auVar65[8] = (char)(uVar45 >> 4) + cVar56;
                        auVar65[9] = (bVar57 >> 4) + bVar57;
                        auVar65[10] = (char)(ushort)((uint)uVar7 >> 0x14) + cVar58;
                        auVar65[0xb] = (bVar59 >> 4) + bVar59;
                        auVar65[0xc] = (char)(ushort)((uint6)uVar8 >> 0x24) + cVar60;
                        auVar65[0xd] = (bVar61 >> 4) + bVar61;
                        auVar65[0xe] = (char)(ushort)(CONCAT17(bVar63,CONCAT16(cVar62,uVar8)) >>
                                                     0x34) + cVar62;
                        auVar65[0xf] = (bVar63 >> 4) + bVar63;
                        auVar69 = psadbw(auVar65 & auVar10,(undefined1  [16])0x0);
                        lVar42 = lVar42 + auVar69._0_8_;
                        lVar43 = lVar43 + auVar69._8_8_;
                        lVar26 = lVar26 + -4;
                      } while (lVar26 != -0x20);
                      lVar33 = lVar43 + lVar41 + lVar42 + lVar29;
                    }
                    uVar32 = (ulonglong)*(uint *)((longlong)puVar4 + 0x34) * lVar33;
                    uVar21 = puVar4[9] - uVar32;
                    if ((longlong)uVar21 < 0) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      local_150 = puVar35;
                      (*pcVar37)();
                    }
                    bVar39 = CARRY8(uStack_d0,uVar21);
                    uStack_d0 = uStack_d0 + uVar21;
                    if (bVar39) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      local_150 = puVar35;
                      (*pcVar37)();
                    }
                    auVar40._8_4_ = (int)(uVar32 >> 0x20);
                    auVar40._0_8_ = uVar32;
                    auVar40._12_4_ = uVar14;
                    local_150 = puVar35;
                    if ((((auVar40._8_8_ - dVar16) + ((double)CONCAT44(uVar13,(int)uVar32) - dVar15)
                         ) / (double)*(uint *)(pas_compact_heap_reservation_base + 8 +
                                              (ulonglong)
                                              *(uint *)((ulonglong)
                                                        ((uint)*(byte *)((longlong)puVar35 + 10) *
                                                         0x80000 + (uint)(ushort)puVar35[1] * 8) +
                                                        0x30 + pas_compact_heap_reservation_base) *
                                              8) <= dVar9) && ((puVar4[10] & 7) != 0)) {
                      if (*(char *)((longlong)puVar4 + 0x31) == '\x01') {
                        *(undefined1 *)((longlong)puVar4 + 0x32) = 1;
                      }
                      else {
                        pas_segregated_directory_view_did_become_eligible_at_index
                                  ((pas_segregated_directory *)
                                   (((uint)*(byte *)((longlong)puVar35 + 10) * 0x80000 +
                                    (uint)(ushort)puVar35[1] * 8) +
                                   pas_compact_heap_reservation_base),
                                   (ulonglong)*(uint *)((longlong)puVar35 + 0xc));
                      }
                      puVar4[10] = (ulong64)puVar35;
                    }
                    puVar31 = local_148;
                    if (uVar32 == 0) {
                      if (puVar4[3] != 0) {
                    /* WARNING: Does not return */
                        pcVar37 = (code *)invalidInstructionException();
                        (*pcVar37)();
                      }
                      if ((ulong64 *)0xffffffffffff < puVar4) {
                    /* WARNING: Does not return */
                        pcVar37 = (code *)invalidInstructionException();
                        (*pcVar37)();
                      }
                      pvVar5 = verse_heap_first_level_chunk_map[(ulonglong)puVar4 >> 0x22];
                      uVar23 = (uint)((ulonglong)puVar4 >> 0x13) & 0x7fff;
                      if ((pvVar5[uVar23].encoded_value[0] & 1) == 0) {
                    /* WARNING: Does not return */
                        pcVar37 = (code *)invalidInstructionException();
                        (*pcVar37)();
                      }
                      uVar24 = (uint)puVar4 & 0x7ffff;
                      if (uVar24 < 0x4000) {
                    /* WARNING: Does not return */
                        pcVar37 = (code *)invalidInstructionException();
                        (*pcVar37)();
                      }
                      sVar22 = (sbyte)(uVar24 >> 0xe);
                      do {
                        uVar24 = pvVar5[uVar23].encoded_value[0];
                        uVar25 = uVar24 & (-2 << sVar22 | 0xfffffffeU >> 0x20 - sVar22);
                        if (uVar24 == uVar25) {
                    /* WARNING: Does not return */
                          pcVar37 = (code *)invalidInstructionException();
                          (*pcVar37)();
                        }
                        LOCK();
                        bVar39 = uVar24 == pvVar5[uVar23].encoded_value[0];
                        if (bVar39) {
                          pvVar5[uVar23].encoded_value[0] = uVar25;
                        }
                        UNLOCK();
                      } while (!bVar39);
                      pas_segregated_page_note_emptiness_impl
                                ((pas_segregated_page *)(puVar4 + 6),
                                 pas_note_emptiness_clear_num_non_empty_words);
                      *(undefined1 *)(puVar4 + 2) = 0;
                    }
                    else {
                      puVar4[9] = uVar32;
                      *(undefined1 *)(puVar4 + 2) = 0;
                    }
                  }
                }
              }
            }
            ReleaseSRWLockExclusive(local_140);
            uVar21 = local_e0;
            lVar33 = local_e8;
            uVar34 = local_f0;
          }
          uVar21 = uVar21 + 1;
          uVar17 = local_f0;
          lVar26 = local_e8;
        } while (uVar21 < uVar34);
      }
      uVar30 = uVar30 + 1;
      uVar36 = uVar30 * 0x80;
      uVar21 = 0;
    } while (uVar36 < uVar27);
  }
LAB_140d95293:
  if ((longlong)uStack_d0 < 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)invalidInstructionException();
    (*pcVar37)();
  }
  if (uStack_d0 != 0) {
    if (verse_heap_live_bytes < uStack_d0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      (*pcVar37)();
    }
    LOCK();
    UNLOCK();
    if (verse_heap_swept_bytes + uStack_d0 <= verse_heap_swept_bytes) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      verse_heap_live_bytes = verse_heap_live_bytes - uStack_d0;
      (*pcVar37)();
    }
    LOCK();
    UNLOCK();
    verse_heap_live_bytes = verse_heap_live_bytes - uStack_d0;
    verse_heap_swept_bytes = verse_heap_swept_bytes + uStack_d0;
  }
LAB_140d952eb:
  if ((local_c0 ^ (ulonglong)auStack_178) == __security_cookie.value) {
    return;
  }
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}

// verse_heap_get_thread_local_cache_node @ 140d953b0

pas_thread_local_cache_node * __cdecl verse_heap_get_thread_local_cache_node(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if (ppVar1 < (pas_thread_local_cache *)&DAT_00000002) {
    ppVar1 = pas_thread_local_cache_get_slow(&verse_heap_config,pas_lock_is_not_held);
  }
  return ppVar1->node;
}

// verse_heap_thread_local_cache_node_stop_local_allocators @ 140d95420

void __cdecl
verse_heap_thread_local_cache_node_stop_local_allocators
          (pas_thread_local_cache_node *param_1,ulong64 param_2)

{
  pas_thread_local_cache *ppVar1;
  pas_thread_local_cache_layout_node_opaque *ppVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_1 == (pas_thread_local_cache_node *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->scavenger_lock);
  if (param_1->version == param_2) {
    ppVar1 = param_1->cache;
    if (ppVar1 == (pas_thread_local_cache *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = (ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.size;
    if (uVar7 != 0) {
      uVar8 = 0;
      uVar6 = 0;
      do {
        lVar5 = (ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.array.payload *
                8 + pas_compact_heap_reservation_base;
        if ((ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.array.payload == 0)
        {
          lVar5 = 0;
        }
        ppVar2 = *(pas_thread_local_cache_layout_node_opaque **)(lVar5 + uVar8 * 8);
        uVar4 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar2);
        if (uVar4 <= uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (ppVar1->allocator_index_upper_bound <= uVar4) break;
        pas_thread_local_cache_layout_node_stop(ppVar2,ppVar1,pas_lock_lock_mode_lock);
        uVar8 = uVar8 + 1;
        uVar6 = uVar4;
      } while (uVar7 != uVar8);
    }
  }
  else if (param_1->version <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Could not recover jumptable at 0x000140d954ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->scavenger_lock);
  return;
}

// verse_heap_find_allocated_object_start @ 140d95510

ulong64 __cdecl verse_heap_find_allocated_object_start(ulong64 param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((param_1 < 0x1000000000000) &&
     (verse_heap_first_level_chunk_map[param_1 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)) {
    uVar7 = verse_heap_first_level_chunk_map[param_1 >> 0x22][(uint)(param_1 >> 0x13) & 0x7fff].
            encoded_value[0];
    uVar3 = (ulonglong)uVar7;
    if (uVar3 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((uVar7 & 2) == 0) {
          if (*(ulonglong *)(pas_compact_heap_reservation_base + uVar3) <= param_1) {
            if (*(ulonglong *)(pas_compact_heap_reservation_base + 8 + uVar3) <= param_1) {
              return 0;
            }
            return *(ulonglong *)(pas_compact_heap_reservation_base + uVar3);
          }
        }
        else if ((uVar7 & 4) != 0) {
          uVar2 = *(uint *)(pas_compact_heap_reservation_base + 0x44 +
                           (ulonglong)(uVar7 & 0xfffffff8));
          if ((uVar2 & 0x1ff) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar5 = pas_compact_heap_reservation_base + (uVar7 & 0xfffffff8);
          uVar7 = (uint)(param_1 >> 9);
          uVar8 = uVar7 & 0x3ff;
          uVar9 = (ulonglong)uVar8;
          uVar7 = uVar7 & 7;
          uVar4 = (ulonglong)(uVar8 >> 3);
          uVar3 = *(longlong *)(lVar5 + 0x65 + uVar4) << ((byte)uVar7 ^ 7);
          if (uVar3 == 0) {
            if (uVar8 < 0x40) {
              return 0;
            }
            lVar10 = (ulonglong)uVar7 + 0x39;
            if (uVar2 >> 9 <= (uint)lVar10) {
              return 0;
            }
            uVar9 = uVar9 - lVar10;
            uVar3 = *(ulonglong *)(lVar5 + 0x5d + uVar4);
            if (uVar3 == 0) {
              lVar6 = uVar4 - 0xf;
              uVar4 = (ulonglong)(uVar2 >> 9) - lVar10;
              do {
                if (uVar4 < 0x41) {
                  return 0;
                }
                if (lVar6 < 1) {
                  return 0;
                }
                uVar4 = uVar4 - 0x40;
                uVar9 = uVar9 - 0x40;
                uVar3 = *(ulonglong *)(lVar5 + 100 + lVar6);
                lVar6 = lVar6 + -8;
              } while (uVar3 == 0);
            }
          }
          uVar4 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          uVar3 = (uVar9 - (uVar4 ^ 0x3f)) * 0x200;
          if (uVar3 - 0x1000 < 0x7f000) {
            uVar3 = uVar3 | param_1 & 0xfffffff80000;
            if ((ulonglong)uVar2 <= param_1 - uVar3) {
              return 0;
            }
            return uVar3;
          }
        }
      }
      else {
        uVar2 = (uint)param_1 & 0x7ffff;
        if ((0x3fff < uVar2) && ((uVar7 >> (uVar2 >> 0xe) & 1) != 0)) {
          uVar3 = param_1 & 0xffffffffc000;
          uVar7 = *(uint *)(uVar3 + 0x34);
          if ((uVar7 & 0xf) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar2 = (uint)(param_1 >> 4);
          uVar8 = uVar2 & 0x3ff;
          uVar9 = (ulonglong)uVar8;
          uVar2 = uVar2 & 7;
          uVar11 = (ulonglong)(uVar8 >> 3);
          uVar4 = *(longlong *)(uVar3 + 0x55 + uVar11) << ((byte)uVar2 ^ 7);
          if (uVar4 == 0) {
            if (uVar8 < 0x40) {
              return 0;
            }
            lVar5 = (ulonglong)uVar2 + 0x39;
            if (uVar7 >> 4 <= (uint)lVar5) {
              return 0;
            }
            uVar9 = uVar9 - lVar5;
            uVar4 = *(ulonglong *)(uVar3 + 0x4d + uVar11);
            if (uVar4 == 0) {
              lVar10 = uVar11 - 0xf;
              uVar11 = (ulonglong)(uVar7 >> 4) - lVar5;
              do {
                if (uVar11 < 0x41) {
                  return 0;
                }
                if (lVar10 < 1) {
                  return 0;
                }
                uVar11 = uVar11 - 0x40;
                uVar9 = uVar9 - 0x40;
                uVar4 = *(ulonglong *)(uVar3 + 0x54 + lVar10);
                lVar10 = lVar10 + -8;
              } while (uVar4 == 0);
            }
          }
          uVar11 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          uVar4 = (uVar9 - (uVar11 ^ 0x3f)) * 0x10;
          if (uVar4 - 0xdc < 0x3f24) {
            uVar4 = uVar4 | uVar3;
            if ((ulonglong)uVar7 <= param_1 - uVar4) {
              return 0;
            }
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}

// verse_heap_get_allocation_size @ 140d95790

ulong64 __cdecl verse_heap_get_allocation_size(ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if ((param_1 < 0x1000000000000) &&
     (verse_heap_first_level_chunk_map[param_1 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)) {
    uVar1 = verse_heap_first_level_chunk_map[param_1 >> 0x22][(uint)(param_1 >> 0x13) & 0x7fff].
            encoded_value[0];
    uVar3 = (ulonglong)uVar1;
    if (uVar3 != 0) {
      if ((uVar1 & 3) == 0) {
        return *(longlong *)(pas_compact_heap_reservation_base + 8 + uVar3) -
               *(longlong *)(pas_compact_heap_reservation_base + uVar3);
      }
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 3) == 2) {
          return (ulonglong)
                 *(uint *)((uVar1 & 0xfffffff8) + pas_compact_heap_reservation_base + 0x44);
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      return (ulonglong)*(uint *)((param_1 & 0xffffffffc000) + 0x34);
    }
  }
  return 0;
}

// verse_heap_owns_address @ 140d95830

bool __cdecl verse_heap_owns_address(ulong64 param_1)

{
  if ((param_1 >> 0x30 == 0) &&
     (verse_heap_first_level_chunk_map[param_1 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)) {
    return verse_heap_first_level_chunk_map[param_1 >> 0x22][(uint)(param_1 >> 0x13) & 0x7fff].
           encoded_value[0] != 0;
  }
  return false;
}

// verse_heap_object_is_allocated @ 140d95870

bool __cdecl verse_heap_object_is_allocated(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)verse_heap_find_allocated_object_start((ulong64)param_1);
  return pvVar1 == param_1;
}

// verse_heap_get_page_header @ 140d95890

verse_heap_page_header * __cdecl verse_heap_get_page_header(ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  
  if ((param_1 < 0x1000000000000) &&
     (verse_heap_first_level_chunk_map[param_1 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)) {
    uVar1 = verse_heap_first_level_chunk_map[param_1 >> 0x22][(uint)(param_1 >> 0x13) & 0x7fff].
            encoded_value[0];
    if ((uVar1 & 1) != 0) {
      return (verse_heap_page_header *)(param_1 & 0xffffffffc000);
    }
    if (uVar1 != 0 && (uVar1 & 2) == 0) {
      return &verse_heap_large_objects_header;
    }
    if ((uVar1 & 2) != 0) {
      return (verse_heap_page_header *)
             ((uVar1 & 0xfffffff8) + pas_compact_heap_reservation_base + 0x10);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// verse_heap_get_heap @ 140d95920

pas_heap * __cdecl verse_heap_get_heap(ulong64 param_1)

{
  uint uVar1;
  pas_segregated_view_opaque *ppVar2;
  code *pcVar3;
  longlong lVar4;
  pas_segregated_size_directory *ppVar5;
  pas_heap *ppVar6;
  ulonglong uVar7;
  
  if ((param_1 < 0x1000000000000) &&
     (verse_heap_first_level_chunk_map[param_1 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)) {
    uVar1 = verse_heap_first_level_chunk_map[param_1 >> 0x22][(uint)(param_1 >> 0x13) & 0x7fff].
            encoded_value[0];
    if ((ulonglong)uVar1 != 0) {
      if ((uVar1 & 3) == 0) {
        return *(pas_heap **)(pas_compact_heap_reservation_base + 0x10 + (ulonglong)uVar1);
      }
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 3) != 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar7 = (uVar1 & 0xfffffff8) + pas_compact_heap_reservation_base;
        lVar4 = 0x40;
      }
      else {
        uVar7 = param_1 & 0xffffffffc000;
        lVar4 = 0x30;
      }
      ppVar2 = *(pas_segregated_view_opaque **)(uVar7 + 0x20 + lVar4);
      if (((uint)ppVar2 & 7) == 5) {
        ppVar5 = (pas_segregated_size_directory *)((ulonglong)ppVar2 & 0xfffffffffffffff8);
      }
      else {
        ppVar5 = pas_segregated_view_get_size_directory_slow(ppVar2);
      }
      ppVar6 = (pas_heap *)0x0;
      if (((((pas_heap *)ppVar5->heap)->segregated_heap).runtime_config)->is_part_of_heap) {
        ppVar6 = (pas_heap *)ppVar5->heap;
      }
      return ppVar6;
    }
  }
  return (pas_heap *)0x0;
}

// try_allocate_large @ 140d959f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d95dd4) */

void * __cdecl
try_allocate_large(pas_heap *param_1,ulong64 param_2,ulong64 param_3,
                  _func___cdecl_pas_allocation_result_pas_allocation_result *param_4)

{
  pas_heap_type *ppVar1;
  uint *puVar2;
  uint uVar3;
  pas_heap_type *ppVar4;
  byte bVar5;
  code *pcVar6;
  byte bVar7;
  BOOLEAN BVar8;
  bool bVar9;
  longlong lVar10;
  verse_heap_large_entry *pvVar11;
  void *pvVar12;
  uint uVar13;
  pas_zero_mode pVar14;
  pas_heap_type *ppVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  undefined1 auStackY_128 [32];
  pas_allocation_result local_e0;
  pas_physical_memory_transaction local_d0;
  pas_alignment local_c0;
  pas_allocation_result local_b0;
  undefined1 local_a0 [8];
  undefined8 local_98;
  code *local_90;
  pas_heap *local_88;
  _func___cdecl_void_void_ptr_ulong64_void_ptr *local_80;
  void *pvStack_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_64;
  undefined1 local_62;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1->config_kind != 3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  pas_physical_memory_transaction_construct(&local_d0);
  lVar10 = 0x7ffff;
  if (param_2 != 0) {
    lVar10 = param_2 - 1;
  }
  uVar19 = 0;
  do {
    if ((uVar19 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pas_physical_memory_transaction_begin(&local_d0);
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar8 != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    ppVar4 = param_1->type;
    ppVar15 = ppVar4;
    if (ppVar4 < param_3) {
      ppVar15 = (pas_heap_type *)param_3;
    }
    if ((pas_heap_type *)0x7ffff < ppVar15) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    ppVar1 = ppVar15 + -1;
    if ((pas_heap_type *)((ulonglong)ppVar15 ^ (ulonglong)ppVar1) <= ppVar1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (param_1->config_kind != 3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar23 = -(longlong)ppVar15;
    uVar16 = (ulonglong)(ppVar15 + lVar10) & uVar23;
    uVar20 = uVar16 + ((ulonglong)(ppVar15 + 0xfff) & uVar23) + 0x7ffff & 0xfffffffffff80000;
    local_98 = 0x80000;
    local_90 = large_heap_aligned_allocator;
    local_80 = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    pvStack_78 = (void *)0x0;
    local_c0.alignment = 0x80000;
    local_c0.alignment_begin = 0;
    local_a0 = (undefined1  [8])ppVar4;
    local_88 = param_1;
    pas_fast_large_free_heap_try_allocate
              (&local_b0,&(param_1->large_heap).free_heap,uVar20,&local_c0,
               (pas_large_free_heap_config *)local_a0);
    uVar22 = local_b0.begin;
    uVar19 = local_b0._8_8_ & 0xff;
    local_64 = local_b0._9_2_;
    local_62 = local_b0._11_1_;
    if ((local_b0._8_8_ & 1) == 0) {
LAB_140d95a90:
      pVar14 = pas_zero_mode_may_have_non_zero;
      uVar19 = 0;
      uVar23 = 0;
    }
    else {
      if ((local_b0.begin & (ulonglong)ppVar1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if ((local_b0.begin & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar21 = uVar20 + local_b0.begin;
      if (CARRY8(uVar20,local_b0.begin)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pVar14 = local_b0.zero_mode;
      local_b0._8_8_ = uVar21;
      bVar9 = pas_large_sharing_pool_allocate_and_commit
                        ((pas_range *)&local_b0,&local_d0,
                         pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
      if (!bVar9) {
        pas_fast_large_free_heap_deallocate
                  (&(param_1->large_heap).free_heap,uVar22,uVar21,pVar14,
                   (pas_large_free_heap_config *)local_a0);
        goto LAB_140d95a90;
      }
      local_66 = local_62;
      local_68 = local_64;
      uVar23 = (ulonglong)(ppVar15 + 0xfff + uVar22) & uVar23;
      if (uVar21 < uVar23 + uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pvVar11 = verse_heap_large_entry_create(uVar23,uVar23 + uVar16,param_1);
      if (pvVar11 == (verse_heap_large_entry *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar20 = (longlong)pvVar11 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if ((uVar20 & 3) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (verse_heap_allocating_black_version < 10) {
        if ((int)verse_heap_allocating_black_version == 0) goto LAB_140d95ce0;
        if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
LAB_140d95cea:
        bVar9 = true;
      }
      else {
        if (verse_heap_large_objects_header.version != verse_heap_allocating_black_version) {
          if (verse_heap_allocating_black_version <= verse_heap_large_objects_header.version) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          goto LAB_140d95cea;
        }
LAB_140d95ce0:
        bVar9 = false;
      }
      uVar17 = uVar23 & 0xfffffffffff80000;
      bVar7 = (byte)(uVar23 >> 4);
      uVar18 = (ulonglong)((uint)(uVar23 >> 9) & 0x3ff);
      bVar5 = bVar7 & 0x1f;
      if (bVar9) {
        do {
          uVar3 = *(uint *)(uVar17 + uVar18 * 4);
          uVar13 = uVar3 | 1 << (bVar7 & 0x1f);
          if (uVar3 == uVar13) break;
          puVar2 = (uint *)(uVar17 + uVar18 * 4);
          LOCK();
          bVar9 = uVar3 == *puVar2;
          if (bVar9) {
            *puVar2 = uVar13;
          }
          UNLOCK();
        } while (!bVar9);
      }
      else {
        do {
          uVar3 = *(uint *)(uVar17 + uVar18 * 4);
          uVar13 = uVar3 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          if (uVar3 == uVar13) break;
          puVar2 = (uint *)(uVar17 + uVar18 * 4);
          LOCK();
          bVar9 = uVar3 == *puVar2;
          if (bVar9) {
            *puVar2 = uVar13;
          }
          UNLOCK();
        } while (!bVar9);
      }
      if (uVar22 < uVar21) {
        uVar17 = uVar22 >> 0x13;
        do {
          if (uVar22 >> 0x30 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          verse_heap_first_level_chunk_map[uVar22 >> 0x22][(uint)uVar17 & 0x7fff].encoded_value[0] =
               (uint)uVar20;
          uVar22 = uVar22 + 0x80000;
          uVar17 = uVar17 + 1;
        } while (uVar22 < uVar21);
      }
      verse_heap_object_set_set_add_large_entry
                ((verse_heap_object_set_set *)
                 &(param_1->segregated_heap).runtime_config[5].
                  directory_size_bound_for_partial_views,pvVar11);
      if ((longlong)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar16 != 0) {
        uVar16 = verse_heap_live_bytes + uVar16;
        if (uVar16 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        LOCK();
        UNLOCK();
        verse_heap_live_bytes = uVar16;
        if (verse_heap_live_bytes_trigger_threshold <= uVar16) {
          (*verse_heap_live_bytes_trigger_callback)();
        }
      }
      local_6a = local_66;
      local_6c = local_68;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    bVar9 = pas_physical_memory_transaction_end(&local_d0);
    if (bVar9) {
      pas_scavenger_notify_eligibility_if_needed();
      local_98 = CONCAT44(pVar14,CONCAT13(local_6a,CONCAT21(local_6c,SUB81(uVar19,0))));
      local_a0 = (undefined1  [8])uVar23;
      (*param_4)(&local_e0,(pas_allocation_result *)local_a0);
      if ((local_60 ^ (ulonglong)auStackY_128) != __security_cookie.value) {
        pcVar6 = (code *)swi(3);
        pvVar12 = (void *)(*pcVar6)();
        return pvVar12;
      }
      return (void *)local_e0.begin;
    }
  } while( true );
}

// large_heap_aligned_allocator @ 140d95ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
large_heap_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_alignment local_38;
  pas_allocation_result local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if ((param_1 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment_begin != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment != 0x80000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __return_storage_ptr__->right_padding = (void *)0x0;
  __return_storage_ptr__->right_padding_size = 0;
  __return_storage_ptr__->left_padding = (void *)0x0;
  __return_storage_ptr__->left_padding_size = 0;
  __return_storage_ptr__->result = (void *)0x0;
  __return_storage_ptr__->result_size = 0;
  *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
  if ((*(uint *)((longlong)param_3 + 0x4c) & 0x3f) == 3) {
    local_38.alignment = param_2->alignment;
    local_38.alignment_begin = param_2->alignment_begin;
    pas_large_heap_physical_page_sharing_cache_try_allocate_with_alignment
              (&local_28,(pas_large_heap_physical_page_sharing_cache *)(*(longlong *)param_3 + 0x50)
               ,param_1,&local_38,&verse_heap_config);
    if ((local_28.did_succeed & 1U) != 0) {
      __return_storage_ptr__->result = (void *)local_28.begin;
      __return_storage_ptr__->result_size = param_1;
      __return_storage_ptr__->left_padding = (void *)local_28.begin;
      __return_storage_ptr__->left_padding_size = 0;
      __return_storage_ptr__->right_padding = (void *)(local_28.begin + param_1);
      __return_storage_ptr__->right_padding_size = 0;
      __return_storage_ptr__->zero_mode = local_28.zero_mode;
    }
    if ((local_18 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// filter_large_entries @ 140d95fd0

void __cdecl
filter_large_entries
          (verse_heap_object_set *param_1,
          _func___cdecl_bool_verse_heap_large_entry_ptr_void_ptr *param_2,void *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  verse_heap_compact_large_entry_ptr *pvVar4;
  undefined4 uVar5;
  verse_heap_large_entry *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->num_large_entries != 0) {
    lVar8 = 0;
    uVar10 = 0;
    uVar9 = 0;
    do {
      pvVar6 = (verse_heap_large_entry *)
               (((uint)param_1->large_entries->payload[lVar8 + 2] * 0x80000 +
                (uint)*(ushort *)(param_1->large_entries->payload + lVar8) * 8) +
               pas_compact_heap_reservation_base);
      bVar3 = (*param_2)(pvVar6,param_3);
      if (bVar3) {
        pvVar4 = param_1->large_entries + uVar10;
        if (pvVar6 == (verse_heap_large_entry *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar7 = (longlong)pvVar6 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar5 = (undefined4)(uVar7 >> 3);
        }
        pvVar4->payload[0] = (uchar)uVar5;
        pvVar4->payload[1] = (uchar)((uint)uVar5 >> 8);
        pvVar4->payload[2] = (uchar)((uint)uVar5 >> 0x10);
        uVar10 = uVar10 + 1;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 3;
    } while (uVar9 < param_1->num_large_entries);
    param_1->num_large_entries = uVar10;
    if (uVar10 != 0) {
      if (param_1->large_entries_capacity >> 2 <= uVar10) {
        return;
      }
      pvVar4 = pas_large_utility_free_heap_allocate
                         (uVar10 * 6,"verse_heap_object_set/large_entries");
      memcpy(pvVar4,param_1->large_entries,uVar10 * 3);
      pas_large_utility_free_heap_deallocate
                (param_1->large_entries,param_1->large_entries_capacity * 3);
      param_1->large_entries_capacity = uVar10 * 2;
      goto LAB_140d960fd;
    }
  }
  pas_large_utility_free_heap_deallocate(param_1->large_entries,param_1->large_entries_capacity * 3)
  ;
  param_1->large_entries_capacity = 0;
  pvVar4 = (verse_heap_compact_large_entry_ptr *)0x0;
LAB_140d960fd:
  param_1->large_entries = pvVar4;
  return;
}

// sweep_large_filter_without_deallocating_callback @ 140d96120

bool __cdecl
sweep_large_filter_without_deallocating_callback(verse_heap_large_entry *param_1,void *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  
  if (param_2 == (void *)0x0) {
    uVar1 = param_1->begin;
    return (*(uint *)((uVar1 & 0xfffffffffff80000) + (ulonglong)((uint)(uVar1 >> 7) & 0xffc)) >>
            ((uint)uVar1 >> 4 & 0x1f) & 1) != 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// sweep_large_filter_and_deallocate_callback @ 140d96160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
sweep_large_filter_and_deallocate_callback(verse_heap_large_entry *param_1,void *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong64 uVar5;
  code *pcVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_98 [32];
  pas_range local_70;
  pas_large_free_heap_config local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar8 = param_1->begin;
  uVar12 = uVar8 & 0xfffffffffff80000;
  uVar11 = (ulonglong)((uint)(uVar8 >> 9) & 0x3ff);
  uVar3 = *(uint *)(uVar12 + uVar11 * 4);
  uVar9 = uVar8 >> 4 & 0xfffffff;
  uVar13 = 1 << ((byte)uVar9 & 0x1f);
  if ((uVar3 >> ((uint)uVar9 & 0x1f) & 1) == 0) {
    uVar5 = param_1->end;
    uVar9 = uVar5 - uVar8;
    if ((longlong)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    puVar1 = (ulonglong *)((longlong)param_2 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    if (CARRY8(uVar11,uVar9)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar9 = uVar5 + 0x7ffff & 0xfffffffffff80000;
    if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar8 = uVar8 >> 0x13;
    uVar11 = uVar12;
    do {
      if (uVar11 >> 0x30 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      verse_heap_first_level_chunk_map[uVar11 >> 0x22][(uint)uVar8 & 0x7fff].encoded_value[0] = 0;
      uVar11 = uVar11 + 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar11 < uVar9);
    local_70.begin = uVar12;
    local_70.end = uVar9;
    pas_large_sharing_pool_free
              (&local_70,pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
    local_60.aligned_allocator_arg = param_1->heap;
    if ((local_60.aligned_allocator_arg)->config_kind != 3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    local_60.type_size = (ulong64)((pas_heap *)local_60.aligned_allocator_arg)->type;
    local_60.min_alignment = 0x80000;
    local_60.aligned_allocator = large_heap_aligned_allocator;
    local_60.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_60.deallocator_arg = (void *)0x0;
    pas_fast_large_free_heap_deallocate
              (&(((pas_heap *)local_60.aligned_allocator_arg)->large_heap).free_heap,uVar12,uVar9,
               pas_zero_mode_may_have_non_zero,&local_60);
    verse_heap_large_entry_destroy(param_1);
  }
  else {
    do {
      uVar4 = *(uint *)(uVar12 + uVar11 * 4);
      uVar10 = uVar4 & ~uVar13;
      if (uVar4 == uVar10) break;
      puVar2 = (uint *)(uVar12 + uVar11 * 4);
      LOCK();
      bVar14 = uVar4 == *puVar2;
      if (bVar14) {
        *puVar2 = uVar10;
      }
      UNLOCK();
    } while (!bVar14);
  }
  if ((local_30 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar6 = (code *)swi(3);
    uVar7 = (*pcVar6)();
    return (bool)uVar7;
  }
  return (uVar13 & uVar3) != 0;
}

