// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 31

// verse_heap_config_activate @ 140d96310

void __cdecl verse_heap_config_activate(void)

{
  code *pcVar1;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (pas_page_malloc_cached_alignment != 0x1000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment_shift == 0) {
    pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
  }
  if (pas_page_malloc_cached_alignment_shift == 0xc) {
    pas_heap_config_activate(&bmalloc_heap_config);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_type_get_size @ 140d96370

ulong64 __cdecl verse_heap_type_get_size(pas_heap_type *param_1)

{
  return (ulong64)param_1;
}

// verse_heap_type_get_alignment @ 140d96380

ulong64 __cdecl verse_heap_type_get_alignment(pas_heap_type *param_1)

{
  return (ulong64)param_1;
}

// verse_heap_small_segregated_page_base_for_boundary @ 140d96390

pas_page_base * __cdecl verse_heap_small_segregated_page_base_for_boundary(void *param_1)

{
  return (pas_page_base *)((longlong)param_1 + 0x30);
}

// verse_heap_small_segregated_boundary_for_page_base @ 140d963a0

void * __cdecl verse_heap_small_segregated_boundary_for_page_base(pas_page_base *param_1)

{
  return param_1 + -0x30;
}

// verse_heap_small_segregated_page_base_for_boundary_remote @ 140d963b0

pas_page_base * __cdecl
verse_heap_small_segregated_page_base_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  return (pas_page_base *)((longlong)param_2 + 0x30);
}

// verse_heap_create_page_base @ 140d963c0

pas_page_base * __cdecl
verse_heap_create_page_base(void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  code *pcVar1;
  verse_heap_medium_page_header_object *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  pas_segregated_page *ppVar5;
  
  if (param_2 == pas_small_exclusive_segregated_page_kind) {
    ppVar5 = (pas_segregated_page *)((longlong)param_1 + 0x30);
  }
  else {
    if (param_2 != pas_medium_exclusive_segregated_page_kind) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    pvVar2 = verse_heap_medium_page_header_object_create();
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    pvVar2->boundary = (ulong64)param_1;
    if ((ulonglong)param_1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = (uint)((ulonglong)param_1 >> 0x13) & 0x7fff;
    if (verse_heap_first_level_chunk_map[(ulonglong)param_1 >> 0x22][uVar4].encoded_value[0] != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (longlong)pvVar2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 3) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    verse_heap_first_level_chunk_map[(ulonglong)param_1 >> 0x22][uVar4].encoded_value[0] =
         (uint)uVar3 | 2;
    ppVar5 = &pvVar2->segregated;
  }
  return &ppVar5->base;
}

// verse_heap_destroy_page_base @ 140d96490

void __cdecl verse_heap_destroy_page_base(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  verse_heap_medium_page_header_object *pvVar5;
  
  if (param_1->page_kind != '\x02') {
    if (param_1->page_kind != '\x04') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(ulonglong *)(param_1 + -0x40);
    if (uVar2 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = (uint)(uVar2 >> 0x13) & 0x7fff;
    uVar1 = verse_heap_first_level_chunk_map[uVar2 >> 0x22][uVar4].encoded_value[0];
    if ((uVar1 & 3) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pvVar5 = (verse_heap_medium_page_header_object *)(param_1 + -0x40);
    if ((verse_heap_medium_page_header_object *)
        ((uVar1 & 0xfffffff8) + pas_compact_heap_reservation_base) != pvVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar1 & 4) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    verse_heap_first_level_chunk_map[uVar2 >> 0x22][uVar4].encoded_value[0] = 0;
    if (param_2 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      verse_heap_medium_page_header_object_destroy(pvVar5);
                    /* WARNING: Could not recover jumptable at 0x000140d96541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      return;
    }
    verse_heap_medium_page_header_object_destroy(pvVar5);
  }
  return;
}

// verse_heap_allocate_small_segregated_page @ 140d96560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
verse_heap_allocate_small_segregated_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2,
          pas_segregated_page_role param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_98 [32];
  pas_alignment local_68;
  pas_allocation_result local_58;
  pas_heap_runtime_config *local_48;
  pas_physical_memory_transaction *local_40;
  pas_large_free_heap_config local_38;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_3 != pas_segregated_page_exclusive_role) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_48 = param_1->runtime_config;
  local_38.type_size = 1;
  local_38.min_alignment = 1;
  local_38.aligned_allocator = small_segregated_page_allocate_aligned;
  local_38.aligned_allocator_arg = &local_48;
  local_38.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_38.deallocator_arg = (void *)0x0;
  local_68.alignment = 0x4000;
  local_68.alignment_begin = 0;
  local_40 = param_2;
  pas_reserve_commit_cache_large_free_heap_try_allocate
            (&local_58,
             (pas_reserve_commit_cache_large_free_heap *)
             &local_48[3].directory_size_bound_for_partial_views,0x4000,&local_68,&local_38);
  if ((local_58.did_succeed & 1U) == 0) {
    local_58.begin = 0;
  }
  else if (local_58.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_8 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return (void *)local_58.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// verse_heap_segregated_shared_page_directory_selector @ 140d96650

pas_segregated_shared_page_directory * __cdecl
verse_heap_segregated_shared_page_directory_selector
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view @ 140d96e60

void verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
               (void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_small_segregated_page_config_specialized_local_allocator_refill @ 140d96e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d972b4) */
/* WARNING: Removing unreachable block (ram,0x000140d97ae4) */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
verse_small_segregated_page_config_specialized_local_allocator_refill
          (pas_local_allocator *param_1,pas_allocator_counts *param_2)

{
  bool *SRWLock;
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  uchar uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  pas_segregated_heap *ppVar11;
  void *pvVar12;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar13;
  pas_thread_local_cache *ppVar14;
  ulong64 uVar15;
  verse_heap_chunk_map_entry *pvVar16;
  longlong lVar17;
  pas_heap_runtime_config *ppVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  longlong lVar21;
  code *pcVar22;
  uint3 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 uVar31;
  BOOLEAN BVar32;
  pas_segregated_view_opaque *ppVar33;
  undefined8 *puVar34;
  ulong64 uVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  pas_lock *ppVar39;
  longlong lVar40;
  pas_segregated_partial_view *ppVar41;
  uint uVar42;
  ulonglong uVar43;
  pas_segregated_page *ppVar44;
  pas_segregated_directory *ppVar45;
  uint uVar46;
  pas_lock *in_R8;
  uint uVar47;
  pas_segregated_view_opaque *ppVar48;
  ulonglong uVar49;
  ulonglong *puVar50;
  PSRWLOCK pRVar51;
  ulonglong uVar52;
  pas_segregated_size_directory *ppVar53;
  pas_segregated_size_directory *unaff_R15;
  bool bVar54;
  undefined1 auStackY_118 [32];
  PSRWLOCK local_f0;
  longlong local_e8;
  pas_physical_memory_transaction local_d0;
  pas_alignment local_c0;
  pas_allocation_result local_b0;
  longlong local_a0;
  pas_physical_memory_transaction *local_98;
  pas_large_free_heap_config local_90;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_118;
  ppVar48 = param_1->view;
  if (((uint)ppVar48 & 7) == 5) {
    ppVar53 = (pas_segregated_size_directory *)((ulonglong)ppVar48 & 0xfffffffffffffff8);
    ppVar11 = ppVar53->heap;
    bVar4 = ppVar11->runtime_config->field_0x4;
  }
  else {
    ppVar53 = pas_segregated_view_get_size_directory_slow(ppVar48);
    ppVar11 = ppVar53->heap;
    bVar4 = ppVar11->runtime_config->field_0x4;
  }
  if (((bVar4 & 1) == 0) && (uVar43 = (ulonglong)ppVar11->small_index_upper_bound, uVar43 != 0)) {
    puVar2 = ppVar11->index_to_small_allocator_index;
    if (puVar2 != (uint *)0x0) {
      in_R8 = (pas_lock *)((ulonglong)puVar2 & 0xfffffffffe000000);
      uVar49 = (ulonglong)((uint)puVar2 & 0x1ffffff);
      uVar52 = uVar49 - 0x4008 >> 0xe;
      uVar49 = (uVar49 + uVar43 * 4) - 0x4001 >> 0xe;
      do {
        pvVar12 = in_R8[uVar52 + 3].lock.Ptr;
        uVar47 = (uint)pvVar12 & 7;
        if (uVar47 == 2) break;
        if (uVar47 == 1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        if (((ulonglong)pvVar12 & 7) == 0) break;
        LOCK();
        bVar54 = pvVar12 == in_R8[uVar52 + 3].lock.Ptr;
        if (bVar54) {
          in_R8[uVar52 + 3].lock.Ptr = (void *)((ulonglong)pvVar12 & 0xfffffffffffffff8 | 2);
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar52 != uVar49) {
        do {
          pvVar12 = in_R8[uVar49 + 3].lock.Ptr;
          if (((uint)pvVar12 & 7) < 3) break;
          LOCK();
          bVar54 = pvVar12 == in_R8[uVar49 + 3].lock.Ptr;
          if (bVar54) {
            in_R8[uVar49 + 3].lock.Ptr = (void *)((ulonglong)pvVar12 & 0xfffffffffffffff8 | 2);
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
    ppVar13 = ppVar11->index_to_small_size_directory;
    if (ppVar13 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      in_R8 = (pas_lock *)((ulonglong)ppVar13 & 0xfffffffffe000000);
      uVar49 = (ulonglong)((uint)ppVar13 & 0x1ffffff);
      uVar52 = uVar49 - 0x4008 >> 0xe;
      uVar43 = (uVar49 + uVar43 * 4) - 0x4001 >> 0xe;
      do {
        pvVar12 = in_R8[uVar52 + 3].lock.Ptr;
        uVar47 = (uint)pvVar12 & 7;
        if (uVar47 == 2) break;
        if (uVar47 == 1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        if (((ulonglong)pvVar12 & 7) == 0) break;
        LOCK();
        bVar54 = pvVar12 == in_R8[uVar52 + 3].lock.Ptr;
        if (bVar54) {
          in_R8[uVar52 + 3].lock.Ptr = (void *)((ulonglong)pvVar12 & 0xfffffffffffffff8 | 2);
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar52 != uVar43) {
        do {
          pvVar12 = in_R8[uVar43 + 3].lock.Ptr;
          if (((uint)pvVar12 & 7) < 3) break;
          LOCK();
          bVar54 = pvVar12 == in_R8[uVar43 + 3].lock.Ptr;
          if (bVar54) {
            in_R8[uVar43 + 3].lock.Ptr = (void *)((ulonglong)pvVar12 & 0xfffffffffffffff8 | 2);
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  uVar43 = (ulonglong)(ppVar11->rare_data).payload;
  lVar37 = uVar43 * 8 + pas_compact_heap_reservation_base;
  if (lVar37 != 0 && uVar43 != 0) {
    lVar38 = (ulonglong)*(uint *)(lVar37 + 8) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar37 + 8) == 0) {
      lVar38 = 0;
    }
    if ((ulonglong)*(uint *)(lVar37 + 0xc) != 0) {
      if (lVar38 == 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      in_R8 = (pas_lock *)((lVar38 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe);
      ppVar39 = (pas_lock *)
                (((lVar38 - (longlong)pas_compact_expendable_memory_payload) +
                 (ulonglong)*(uint *)(lVar37 + 0xc) * 0x10) - 1 >> 0xe);
      do {
        uVar43 = *(ulonglong *)
                  ((longlong)&pas_compact_expendable_memory_header + (longlong)in_R8 * 8 + 0x10);
        uVar47 = (uint)uVar43 & 7;
        if (uVar47 == 2) break;
        if (uVar47 == 1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        if ((uVar43 & 7) == 0) break;
        puVar50 = (ulonglong *)
                  ((longlong)&pas_compact_expendable_memory_header + (longlong)in_R8 * 8 + 0x10);
        LOCK();
        bVar54 = uVar43 == *puVar50;
        if (bVar54) {
          *puVar50 = uVar43 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (in_R8 != ppVar39) {
        do {
          uVar43 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + (longlong)ppVar39 * 8 + 0x10)
          ;
          uVar47 = (uint)uVar43 & 7;
          in_R8 = (pas_lock *)(ulonglong)uVar47;
          if (uVar47 < 3) break;
          in_R8 = (pas_lock *)(uVar43 & 0xfffffffffffffff8 | 2);
          puVar50 = (ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + (longlong)ppVar39 * 8 + 0x10)
          ;
          LOCK();
          bVar54 = uVar43 == *puVar50;
          if (bVar54) {
            *puVar50 = (ulonglong)in_R8;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = true;
  bVar54 = pas_scavenger_did_create_eligible();
  if (bVar54) {
    pas_scavenger_notify_eligibility_if_needed();
  }
  if (param_1->page_ish == 0) {
    ppVar44 = (pas_segregated_page *)0x0;
    ppVar48 = (pas_segregated_view_opaque *)0x0;
  }
  else {
    uVar43 = param_1->page_ish & 0xffffffffffffc000;
    ppVar48 = *(pas_segregated_view_opaque **)(uVar43 + 0x50);
    ppVar44 = (pas_segregated_page *)(uVar43 | 0x30);
    if (((ulonglong)ppVar48 & 6) != 0) {
      if (((uint)ppVar48 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      ppVar48 = param_1->view;
      if (((uint)ppVar48 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
    }
  }
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar33 = (pas_segregated_view_opaque *)((ulonglong)ppVar53 | 5);
  if (ppVar53 == (pas_segregated_size_directory *)0x0) {
    ppVar33 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar33;
  param_1->config_kind = 10;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  ppVar14 = *(pas_thread_local_cache **)(lVar37 + 0x9c08);
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar14) {
    pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar14,param_1);
  }
  uVar47 = (uint)ppVar48;
  if (ppVar48 == (pas_segregated_view_opaque *)0x0) {
LAB_140d9733b:
    ppVar33 = pas_segregated_size_directory_take_first_eligible(ppVar53);
    uVar15 = pas_compact_heap_reservation_base;
    if (ppVar33 == (pas_segregated_view_opaque *)0x0) {
LAB_140d9793d:
      ppVar33 = (pas_segregated_view_opaque *)0x0;
      if (ppVar48 != (pas_segregated_view_opaque *)0x0) goto LAB_140d9772e;
LAB_140d97948:
      if (ppVar33 != (pas_segregated_view_opaque *)0x0) {
        local_f0 = (PSRWLOCK)0x0;
        if (((ulonglong)ppVar33 & 6) != 0) goto LAB_140d9795e;
        goto LAB_140d977bf;
      }
    }
    else {
      uVar46 = (uint)ppVar33 & 7;
      if (1 < uVar46) {
        if (uVar46 != 4) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      unaff_R15 = (pas_segregated_size_directory *)((ulonglong)ppVar33 & 0xfffffffffffffff8);
      if (*(char *)((longlong)&(unaff_R15->base).bits + 3) == '\0') {
        uVar43 = (ulonglong)(uint3)(unaff_R15->base).bits;
        lVar38._0_4_ = (unaff_R15->base).first_view;
        lVar38._4_4_ = (unaff_R15->base).data;
        if (lVar38 == 0) {
          cVar5 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar43 * 8);
          if (cVar5 != '\x01') {
            if (cVar5 != '\x02') {
              if (cVar5 != '\0') {
                    /* WARNING: Does not return */
                pcVar22 = (code *)invalidInstructionException();
                (*pcVar22)();
              }
                    /* WARNING: Does not return */
              pcVar22 = (code *)invalidInstructionException();
              (*pcVar22)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&verse_heap_config.small_segregated_config.base,pas_lock_is_not_held,
                       (pas_lock **)0x0,0);
            lVar40._0_4_ = (unaff_R15->base).first_view;
            lVar40._4_4_ = (unaff_R15->base).data;
            if (lVar40 != 0) goto LAB_140d976e6;
          }
          pas_physical_memory_transaction_construct(&local_d0);
          do {
            lVar17._0_4_ = (unaff_R15->base).first_view;
            lVar17._4_4_ = (unaff_R15->base).data;
            if (lVar17 != 0) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)invalidInstructionException();
              (*pcVar22)();
            }
            pas_physical_memory_transaction_begin(&local_d0);
            AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            local_a0 = **(longlong **)(uVar15 + 0x18 + uVar43 * 8);
            local_90.type_size = (ulong64)&DAT_00000001;
            local_90.min_alignment = 1;
            local_90.aligned_allocator = small_segregated_page_allocate_aligned;
            local_90.aligned_allocator_arg = &local_a0;
            local_90.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
            local_90.deallocator_arg = (void *)0x0;
            local_c0.alignment = 0x4000;
            local_c0.alignment_begin = 0;
            in_R8 = (pas_lock *)0x4000;
            local_98 = &local_d0;
            pas_reserve_commit_cache_large_free_heap_try_allocate
                      (&local_b0,(pas_reserve_commit_cache_large_free_heap *)(local_a0 + 0x80),
                       0x4000,&local_c0,&local_90);
            if ((local_b0.did_succeed & 1U) == 0) {
              uVar35 = 0;
            }
            else {
              uVar35 = local_b0.begin;
              if (local_b0.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)invalidInstructionException();
                (*pcVar22)();
              }
            }
            (unaff_R15->base).first_view = (pas_compact_atomic_segregated_view)(int)uVar35;
            (unaff_R15->base).data = (pas_segregated_directory_data_ptr)(int)(uVar35 >> 0x20);
            ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            bVar54 = pas_physical_memory_transaction_end(&local_d0);
          } while (!bVar54);
          lVar40._0_4_ = (unaff_R15->base).first_view;
          lVar40._4_4_ = (unaff_R15->base).data;
          if (lVar40 == 0) goto LAB_140d9793d;
        }
        else {
          SRWLock = &(unaff_R15->base).is_basic_size_directory;
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
          cVar5 = *(char *)(uVar15 + 0xd + uVar43 * 8);
          local_90.type_size = (ulong64)SRWLock;
          if (cVar5 != '\x01') {
            if (cVar5 != '\x02') {
              if (cVar5 != '\0') {
                    /* WARNING: Does not return */
                pcVar22 = (code *)invalidInstructionException();
                (*pcVar22)();
              }
                    /* WARNING: Does not return */
              pcVar22 = (code *)invalidInstructionException();
              (*pcVar22)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&verse_heap_config.small_segregated_config.base,pas_lock_is_not_held,
                       (pas_lock **)&local_90,1);
          }
          pas_page_base_commit_with_boundary
                    (*(void **)&unaff_R15->base,&verse_heap_config.small_segregated_config.base);
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
          lVar40._0_4_ = (unaff_R15->base).first_view;
          lVar40._4_4_ = (unaff_R15->base).data;
        }
LAB_140d976e6:
        in_R8 = (pas_lock *)0x0;
        pas_segregated_page_construct
                  ((pas_segregated_page *)(lVar40 + 0x30),
                   (pas_segregated_view_opaque *)
                   ((longlong)&(unaff_R15->base).first_view.payload + 1),false,
                   &verse_heap_config.small_segregated_config);
        verse_heap_page_header_construct(*(verse_heap_page_header **)&unaff_R15->base);
        AcquireSRWLockExclusive((PSRWLOCK)&unaff_R15->heap);
        *(undefined1 *)((longlong)&(unaff_R15->base).bits + 3) = 1;
        ReleaseSRWLockExclusive((PSRWLOCK)&unaff_R15->heap);
      }
      if (ppVar48 == (pas_segregated_view_opaque *)0x0) goto LAB_140d97948;
LAB_140d9772e:
      in_R8 = ppVar44->lock_ptr;
      if (in_R8 == (pas_lock *)0x0) {
        local_f0 = (PSRWLOCK)0x0;
        if (1 < (uVar47 & 7)) goto LAB_140d97ca5;
LAB_140d97753:
        uVar43 = (ulonglong)ppVar48 & 0xfffffffffffffff8;
        bVar54 = ppVar44->eligibility_notification_has_been_deferred;
        if (bVar54 == true) {
          ppVar44->eligibility_notification_has_been_deferred = false;
        }
        ppVar45 = (pas_segregated_directory *)
                  (((uint)*(byte *)(uVar43 + 10) * 0x80000 + (uint)*(ushort *)(uVar43 + 8) * 8) +
                  pas_compact_heap_reservation_base);
        uVar47 = *(uint *)(uVar43 + 0xc);
        uVar15 = (ppVar44->emptiness).num_non_empty_words_or_live_bytes;
        ppVar44->is_in_use_for_allocation = false;
        if (bVar54 != false) {
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar45,(ulonglong)uVar47);
        }
        unaff_R15 = ppVar53;
        if (uVar15 == 0) {
          pas_segregated_directory_view_did_become_empty_at_index(ppVar45,(ulonglong)uVar47);
        }
      }
      else {
        local_f0 = (PSRWLOCK)pas_segregated_page_switch_lock_slow(ppVar44,(pas_lock *)0x0,in_R8);
        if ((uVar47 & 7) < 2) goto LAB_140d97753;
LAB_140d97ca5:
        unaff_R15 = (pas_segregated_size_directory *)pas_compact_heap_reservation_base;
        if ((uVar47 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        uVar49 = (ulonglong)ppVar48 & 0xfffffffffffffff8;
        uVar52 = (ulonglong)
                 ((uint)*(byte *)(uVar49 + 10) * 0x80000 + (uint)*(ushort *)(uVar49 + 8) * 8);
        uVar43 = *(ulonglong *)(uVar52 + pas_compact_heap_reservation_base);
        if ((uVar43 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        if ((*(byte *)(uVar49 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        bVar4 = *(byte *)(uVar49 + 0xd);
        uVar8 = *(ushort *)(uVar49 + 0xb);
        ppVar45 = *(pas_segregated_directory **)((uVar43 & 0xfffffffffffffffe) + 8);
        if (((PSRWLOCK)ppVar44->lock_ptr != (PSRWLOCK)0x0) &&
           (BVar32 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar44->lock_ptr), BVar32 != '\0')) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        uVar52 = uVar52 + (longlong)unaff_R15;
        if (*(int *)(uVar52 + 0x24) == 1) {
          ppVar44 = (pas_segregated_page *)
                    CONCAT71((int7)((ulonglong)ppVar44 >> 8),
                             (ppVar44->emptiness).num_non_empty_words_or_live_bytes == 0);
        }
        else {
          ppVar44 = (pas_segregated_page *)0x0;
        }
        bVar7 = *(byte *)(uVar49 + 0x11);
        *(byte *)(uVar49 + 0x11) = bVar7 & 0xfc;
        iVar9 = *(int *)(uVar52 + 0x24);
        if ((bVar7 & 2) == 0) {
          if (iVar9 == 0) goto LAB_140d97e08;
          *(int *)(uVar52 + 0x24) = iVar9 + -1;
        }
        else {
          if (iVar9 == 0) {
LAB_140d97e08:
                    /* WARNING: Does not return */
            pcVar22 = (code *)invalidInstructionException();
            (*pcVar22)();
          }
          *(int *)(uVar52 + 0x24) = iVar9 + -1;
          if ((*(byte *)(uVar49 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)invalidInstructionException();
            (*pcVar22)();
          }
          pas_segregated_directory_view_did_become_eligible
                    ((pas_segregated_directory *)
                     ((ulonglong)((uint)bVar4 * 0x80000 + (uint)uVar8 * 8) + (longlong)unaff_R15),
                     (pas_segregated_view_opaque *)(uVar49 | 4));
        }
        if ((char)ppVar44 != '\0') {
          if (*(int *)(uVar52 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)invalidInstructionException();
            (*pcVar22)();
          }
          pas_segregated_directory_view_did_become_empty
                    (ppVar45,(pas_segregated_view_opaque *)(uVar52 | 2));
        }
      }
      if (ppVar33 != (pas_segregated_view_opaque *)0x0) {
        if (((ulonglong)ppVar33 & 6) == 0) {
LAB_140d977bf:
          puVar50 = (ulonglong *)((ulonglong)ppVar33 & 0xfffffffffffffff8);
          unaff_R15 = (pas_segregated_size_directory *)*puVar50;
          ppVar44 = (pas_segregated_page *)&unaff_R15->data;
          if (local_f0 != *(PSRWLOCK *)&unaff_R15[1].base) {
            local_f0 = (PSRWLOCK)
                       pas_segregated_page_switch_lock_slow
                                 (ppVar44,(pas_lock *)local_f0,
                                  (pas_lock *)*(PSRWLOCK *)&unaff_R15[1].base);
          }
          *(undefined1 *)((longlong)&(unaff_R15->data).payload + 1) = 1;
          unaff_R15[1].heap = (pas_segregated_heap *)((ulonglong)ppVar33 | 1);
          uVar15 = *(ulong64 *)&unaff_R15[1].base.is_basic_size_directory;
          uVar35 = verse_heap_current_iteration_state.version;
          goto joined_r0x000140d977f7;
        }
LAB_140d9795e:
        if (((uint)ppVar33 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        ppVar41 = (pas_segregated_partial_view *)((ulonglong)ppVar33 & 0xfffffffffffffff8);
        uVar23 = *(uint3 *)(ppVar41->shared_view).payload;
        param_1 = (pas_local_allocator *)((ulonglong)uVar23 * 8 + pas_compact_heap_reservation_base)
        ;
        lVar37 = CONCAT71((int7)((ulonglong)ppVar41 >> 8),
                          param_1 == (pas_local_allocator *)0x0 || uVar23 == 0);
        if (param_1 != (pas_local_allocator *)0x0 && uVar23 != 0) {
          uVar43 = *(ulonglong *)param_1;
          if ((uVar43 & 1) == 0) {
            pRVar51 = *(PSRWLOCK *)(uVar43 + 0x38);
            uVar49 = uVar43;
          }
          else {
            pRVar51 = *(PSRWLOCK *)(*(ulonglong *)(uVar43 & 0xfffffffffffffffe) + 0x38);
            uVar49 = *(ulonglong *)(uVar43 & 0xfffffffffffffffe);
          }
          if (local_f0 != pRVar51) {
            pas_segregated_page_switch_lock_slow
                      ((pas_segregated_page *)(uVar49 + 0x30),(pas_lock *)local_f0,
                       (pas_lock *)pRVar51);
            uVar43._0_1_ = (param_1->scavenger_data).is_in_use;
            uVar43._1_1_ = (param_1->scavenger_data).should_stop_count;
            uVar43._2_1_ = (param_1->scavenger_data).dirty;
            uVar43._3_1_ = (param_1->scavenger_data).encoded_kind_and_location;
            uVar43._4_1_ = param_1->alignment_shift;
            uVar43._5_3_ = *(undefined3 *)&param_1->field_0x5;
          }
          if ((uVar43 & 1) != 0) {
            pas_segregated_partial_view_set_is_in_use_for_allocation
                      (ppVar41,(pas_segregated_shared_view *)param_1,
                       (pas_segregated_shared_handle *)(uVar43 & 0xfffffffffffffffe));
                    /* WARNING: Does not return */
            pcVar22 = (code *)invalidInstructionException();
            (*pcVar22)();
          }
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        if (local_f0 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_f0);
          verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                    ();
LAB_140d97ec0:
          pas_segregated_page_switch_lock_slow(ppVar44,(pas_lock *)0x0,in_R8);
          ppVar41->eligibility_notification_has_been_deferred = false;
          ppVar41->eligibility_has_been_noted = false;
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                  ();
        local_f0 = (PSRWLOCK)0x0;
        if ((pas_segregated_view_opaque *)(lVar37 + -1) < ppVar33) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        goto LAB_140d979ba;
      }
      if (local_f0 == (PSRWLOCK)0x0) {
        if ((local_60 ^ (ulonglong)auStackY_118) == __security_cookie.value) {
          return false;
        }
        goto LAB_140d97b6d;
      }
      ReleaseSRWLockExclusive(local_f0);
    }
    if ((local_60 ^ (ulonglong)auStackY_118) == __security_cookie.value) {
      return false;
    }
    goto LAB_140d97b6d;
  }
  if ((uVar47 & 7) == 4) {
    ppVar41 = (pas_segregated_partial_view *)((ulonglong)ppVar48 & 0xfffffffffffffff8);
    if (ppVar41->eligibility_has_been_noted) {
      in_R8 = ppVar44->lock_ptr;
      if (in_R8 == (pas_lock *)0x0) {
        ppVar41->field_0x11 = ppVar41->field_0x11 & 0xf9;
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      goto LAB_140d97ec0;
    }
    goto LAB_140d9733b;
  }
  if (((ulonglong)ppVar48 & 7) != 0) goto LAB_140d9733b;
  puVar50 = (ulonglong *)((ulonglong)ppVar48 & 0xfffffffffffffff8);
  if (ppVar44->lock_ptr == (pas_lock *)0x0) {
    local_f0 = (PSRWLOCK)0x0;
  }
  else {
    local_f0 = (PSRWLOCK)
               pas_segregated_page_switch_lock_slow(ppVar44,(pas_lock *)0x0,ppVar44->lock_ptr);
  }
  ppVar44->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar48 | 1);
  ppVar44->eligibility_notification_has_been_deferred = false;
  unaff_R15 = (pas_segregated_size_directory *)(ppVar44 + -1);
  uVar15 = (ppVar44->emptiness).num_non_empty_words_or_live_bytes;
  uVar35 = verse_heap_current_iteration_state.version;
joined_r0x000140d977f7:
  verse_heap_current_iteration_state.version = uVar35;
  if (uVar15 == 0) {
    if ((uVar35 != 0) &&
       (uVar15._0_4_ = (unaff_R15->base).first_view, uVar15._4_4_ = (unaff_R15->base).data,
       uVar15 != uVar35)) {
      (unaff_R15->base).first_view = (pas_compact_atomic_segregated_view)(int)uVar35;
      (unaff_R15->base).data = (pas_segregated_directory_data_ptr)(int)(uVar35 >> 0x20);
    }
    lVar37._0_4_ = *(uint *)&ppVar44[-1].lock_ptr;
    lVar37._4_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 4);
    lVar37._5_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 5);
    lVar37._6_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 6);
    lVar37._7_1_ = *(undefined1 *)((longlong)&ppVar44[-1].lock_ptr + 7);
    if (lVar37 != 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    if ((ulonglong)unaff_R15 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    pvVar16 = verse_heap_first_level_chunk_map[(ulonglong)unaff_R15 >> 0x22];
    uVar46 = (uint)((ulonglong)unaff_R15 >> 0x13) & 0x7fff;
    uVar47 = pvVar16[uVar46].encoded_value[0];
    while ((uVar47 & 1) == 0) {
      if (uVar47 != 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      LOCK();
      if (pvVar16[uVar46].encoded_value[0] == 0) {
        pvVar16[uVar46].encoded_value[0] = 1;
      }
      UNLOCK();
      uVar47 = pvVar16[uVar46].encoded_value[0];
    }
    uVar47 = (uint)unaff_R15 & 0x7ffff;
    if (uVar47 < 0x4000) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    do {
      uVar42 = pvVar16[uVar46].encoded_value[0];
      uVar36 = uVar42 | 1 << (sbyte)(uVar47 >> 0xe);
      if (uVar42 == uVar36) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      LOCK();
      bVar54 = uVar42 == pvVar16[uVar46].encoded_value[0];
      if (bVar54) {
        pvVar16[uVar46].encoded_value[0] = uVar36;
      }
      uVar15 = pas_compact_heap_reservation_base;
      UNLOCK();
    } while (!bVar54);
    uVar49 = (ulonglong)(ppVar53->data).payload;
    iVar9 = *(int *)(pas_compact_heap_reservation_base + uVar49 * 8);
    uVar47 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar49 * 8);
    uVar43 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar49 * 8);
    (ppVar44->emptiness).num_non_empty_words_or_live_bytes = uVar43;
    if (uVar43 != 0) {
      uVar43 = verse_heap_live_bytes + uVar43;
      if (uVar43 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      LOCK();
      UNLOCK();
      verse_heap_live_bytes = uVar43;
      if (verse_heap_live_bytes_trigger_threshold <= uVar43) {
        (*verse_heap_live_bytes_trigger_callback)();
      }
    }
    param_1->payload_end = (longlong)&(unaff_R15->base).first_view.payload + (ulonglong)uVar47;
    param_1->remaining = uVar47 - iVar9;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->page_ish = (ulong64)unaff_R15;
    uVar43 = (ulonglong)*(uint *)(uVar15 + 0xc + uVar49 * 8);
    if (uVar43 < 8) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    puVar34 = (undefined8 *)(uVar43 + pas_compact_heap_reservation_base);
    if (verse_heap_allocating_black_version < 10) {
      if ((int)verse_heap_allocating_black_version != 0) {
        if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
LAB_140d97445:
        uVar43 = (ulonglong)unaff_R15 & 0xfffffffffff80000;
        uVar49 = (ulonglong)((uint)unaff_R15 >> 7 & 0xffc);
        uVar24 = puVar34[0xf];
        puVar3 = (undefined8 *)(uVar43 + 0x70 + uVar49);
        *puVar3 = puVar34[0xe];
        puVar3[1] = uVar24;
        uVar24 = puVar34[0xd];
        puVar3 = (undefined8 *)(uVar43 + 0x60 + uVar49);
        *puVar3 = puVar34[0xc];
        puVar3[1] = uVar24;
        uVar24 = puVar34[0xb];
        puVar3 = (undefined8 *)(uVar43 + 0x50 + uVar49);
        *puVar3 = puVar34[10];
        puVar3[1] = uVar24;
        uVar24 = puVar34[9];
        puVar3 = (undefined8 *)(uVar43 + 0x40 + uVar49);
        *puVar3 = puVar34[8];
        puVar3[1] = uVar24;
        uVar24 = *puVar34;
        uVar25 = puVar34[1];
        uVar26 = puVar34[2];
        uVar27 = puVar34[3];
        uVar28 = puVar34[4];
        uVar29 = puVar34[5];
        uVar30 = puVar34[7];
        puVar3 = (undefined8 *)(uVar43 + 0x30 + uVar49);
        *puVar3 = puVar34[6];
        puVar3[1] = uVar30;
        puVar3 = (undefined8 *)(uVar43 + 0x20 + uVar49);
        *puVar3 = uVar28;
        puVar3[1] = uVar29;
        puVar3 = (undefined8 *)(uVar43 + 0x10 + uVar49);
        *puVar3 = uVar26;
        puVar3[1] = uVar27;
        *(undefined8 *)(uVar43 + uVar49) = uVar24;
        ((undefined8 *)(uVar43 + uVar49))[1] = uVar25;
      }
    }
    else {
      uVar49._0_4_ = (unaff_R15->base).first_view;
      uVar49._4_4_ = (unaff_R15->base).data;
      if (uVar49 != verse_heap_allocating_black_version) {
        if (verse_heap_allocating_black_version <= uVar49) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        goto LAB_140d97445;
      }
    }
    uVar24 = puVar34[0xf];
    *(undefined8 *)((longlong)&ppVar44[3].lock_ptr + 4) = puVar34[0xe];
    *(undefined8 *)((longlong)&ppVar44[3].emptiness.use_epoch + 4) = uVar24;
    uVar24 = puVar34[0xd];
    *(undefined8 *)ppVar44[2].alloc_bits = puVar34[0xc];
    *(undefined8 *)&ppVar44[3].object_size = uVar24;
    uVar24 = puVar34[0xb];
    *(undefined8 *)((longlong)&ppVar44[2].emptiness.num_non_empty_words_or_live_bytes + 4) =
         puVar34[10];
    *(undefined8 *)((longlong)&ppVar44[2].owner + 4) = uVar24;
    uVar24 = puVar34[9];
    *(undefined8 *)((longlong)&ppVar44[2].lock_ptr + 4) = puVar34[8];
    *(undefined8 *)((longlong)&ppVar44[2].emptiness.use_epoch + 4) = uVar24;
    uVar24 = *puVar34;
    uVar25 = puVar34[1];
    uVar26 = puVar34[2];
    uVar27 = puVar34[3];
    uVar28 = puVar34[4];
    uVar29 = puVar34[5];
    uVar30 = puVar34[7];
    *(undefined8 *)ppVar44[1].alloc_bits = puVar34[6];
    *(undefined8 *)&ppVar44[2].object_size = uVar30;
    *(undefined8 *)((longlong)&ppVar44[1].emptiness.num_non_empty_words_or_live_bytes + 4) = uVar28;
    *(undefined8 *)((longlong)&ppVar44[1].owner + 4) = uVar29;
    *(undefined8 *)((longlong)&ppVar44[1].lock_ptr + 4) = uVar26;
    *(undefined8 *)((longlong)&ppVar44[1].emptiness.use_epoch + 4) = uVar27;
    *(undefined8 *)ppVar44->alloc_bits = uVar24;
    *(undefined8 *)&ppVar44[1].object_size = uVar25;
  }
  else {
    if (uVar35 != 0) {
      plVar1 = (longlong *)(lVar37 + 0x9c08);
      ppVar18 = ppVar53->heap->runtime_config;
      uVar43 = (ulonglong)ppVar18[5].directory_size_bound_for_no_view_cache;
      do {
        bVar54 = uVar43 == 0;
        uVar43 = uVar43 - 1;
        if (bVar54) goto LAB_140d979ba;
      } while (*(verse_heap_object_set **)
                (*(longlong *)&ppVar18[5].directory_size_bound_for_partial_views + uVar43 * 8) !=
               verse_heap_current_iteration_state.set_being_iterated);
      uVar19._0_4_ = (unaff_R15->base).first_view;
      uVar19._4_4_ = (unaff_R15->base).data;
      if (uVar19 != uVar35) {
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_e8 = *plVar1;
        if (local_e8 == 1) {
          local_e8 = 0;
        }
        uVar6 = (param_1->scavenger_data).encoded_kind_and_location;
        param_1->is_stashing_alloc_bits = true;
        (((pas_segregated_size_directory *)(ppVar44 + -1))->base).field_0x11 = 1;
        pRVar51 = (PSRWLOCK)(puVar50 + 3);
        ReleaseSRWLockExclusive(pRVar51);
        puVar34 = bmalloc_allocate(0x80);
        uVar24 = *(undefined8 *)&ppVar44[1].object_size;
        uVar25 = *(undefined8 *)((longlong)&ppVar44[1].lock_ptr + 4);
        uVar26 = *(undefined8 *)((longlong)&ppVar44[1].emptiness.use_epoch + 4);
        uVar27 = *(undefined8 *)
                  ((longlong)&ppVar44[1].emptiness.num_non_empty_words_or_live_bytes + 4);
        uVar28 = *(undefined8 *)((longlong)&ppVar44[1].owner + 4);
        uVar29 = *(undefined8 *)ppVar44[1].alloc_bits;
        uVar30 = *(undefined8 *)&ppVar44[2].object_size;
        *puVar34 = *(undefined8 *)ppVar44->alloc_bits;
        puVar34[1] = uVar24;
        puVar34[2] = uVar25;
        puVar34[3] = uVar26;
        puVar34[4] = uVar27;
        puVar34[5] = uVar28;
        puVar34[6] = uVar29;
        puVar34[7] = uVar30;
        uVar24 = *(undefined8 *)((longlong)&ppVar44[2].emptiness.use_epoch + 4);
        puVar34[8] = *(undefined8 *)((longlong)&ppVar44[2].lock_ptr + 4);
        puVar34[9] = uVar24;
        uVar24 = *(undefined8 *)((longlong)&ppVar44[2].owner + 4);
        puVar34[10] = *(undefined8 *)
                       ((longlong)&ppVar44[2].emptiness.num_non_empty_words_or_live_bytes + 4);
        puVar34[0xb] = uVar24;
        uVar24 = *(undefined8 *)&ppVar44[3].object_size;
        puVar34[0xc] = *(undefined8 *)ppVar44[2].alloc_bits;
        puVar34[0xd] = uVar24;
        uVar24 = *(undefined8 *)((longlong)&ppVar44[3].emptiness.use_epoch + 4);
        puVar34[0xe] = *(undefined8 *)((longlong)&ppVar44[3].lock_ptr + 4);
        puVar34[0xf] = uVar24;
        AcquireSRWLockExclusive(pRVar51);
        (((pas_segregated_size_directory *)(ppVar44 + -1))->base).field_0x11 = 0;
        uVar20._0_4_ = *(undefined4 *)&ppVar44[-1].base;
        uVar20._4_4_ = ppVar44[-1].object_size;
        if (uVar20 == uVar35) {
          ReleaseSRWLockExclusive(pRVar51);
          bmalloc_deallocate(puVar34);
          AcquireSRWLockExclusive(pRVar51);
        }
        else {
          *(int *)&ppVar44[-1].base = (int)uVar35;
          ppVar44[-1].object_size = (int)(uVar35 >> 0x20);
          lVar21._0_4_ = *(uint *)&ppVar44[-1].lock_ptr;
          lVar21._4_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 4);
          lVar21._5_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 5);
          lVar21._6_1_ = *(byte *)((longlong)&ppVar44[-1].lock_ptr + 6);
          lVar21._7_1_ = *(undefined1 *)((longlong)&ppVar44[-1].lock_ptr + 7);
          if (lVar21 != 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)invalidInstructionException();
            (*pcVar22)();
          }
          *(undefined8 **)&(((pas_segregated_size_directory *)(ppVar44 + -1))->base).bits = puVar34;
        }
        if (-1 < (char)uVar6) {
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
            lVar37 = *plVar1;
            if (lVar37 != 1) goto LAB_140d97c46;
LAB_140d97c67:
            lVar37 = 0;
            if (local_e8 == 0) goto LAB_140d97c50;
          }
          else {
            lVar37 = *plVar1;
            if (lVar37 == 1) goto LAB_140d97c67;
LAB_140d97c46:
            if (lVar37 == local_e8) goto LAB_140d97c50;
          }
          param_1 = (pas_local_allocator *)((longlong)param_1 + (lVar37 - local_e8));
        }
LAB_140d97c50:
        param_1->is_stashing_alloc_bits = false;
      }
    }
LAB_140d979ba:
    param_1->payload_end = 0;
    param_1->remaining = 0;
    uVar49 = (ulonglong)(ppVar53->data).payload;
    uVar43 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar49 * 8);
    if (uVar43 < 8) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    uVar47 = *(uint *)(pas_compact_heap_reservation_base + uVar49 * 8);
    uVar42 = uVar47 >> 10;
    uVar46 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar49 * 8);
    lVar37 = uVar43 + pas_compact_heap_reservation_base;
    param_1->current_offset = uVar42;
    param_1->end_offset = ((uVar46 >> 4) - 1 >> 6) + 1;
    param_1->bits[0] = 0;
    param_1[1].scavenger_data.is_in_use = false;
    param_1[1].scavenger_data.should_stop_count = '\0';
    param_1[1].scavenger_data.dirty = false;
    param_1[1].scavenger_data.encoded_kind_and_location = '\0';
    param_1[1].alignment_shift = '\0';
    *(undefined3 *)&param_1[1].field_0x5 = 0;
    param_1[1].config_kind = 0;
    *(undefined3 *)&param_1[1].field_0x9 = 0;
    param_1[1].current_word_is_valid = false;
    param_1[1].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[1].field_0xe = 0;
    param_1[1].payload_end = 0;
    param_1[1].remaining = 0;
    param_1[1].object_size = 0;
    param_1[1].page_ish = 0;
    param_1[1].current_offset = 0;
    param_1[1].end_offset = 0;
    param_1[1].current_word = 0;
    param_1[1].view = (pas_segregated_view_opaque *)0x0;
    param_1[1].bits[0] = 0;
    param_1[2].scavenger_data.is_in_use = false;
    param_1[2].scavenger_data.should_stop_count = '\0';
    param_1[2].scavenger_data.dirty = false;
    param_1[2].scavenger_data.encoded_kind_and_location = '\0';
    param_1[2].alignment_shift = '\0';
    *(undefined3 *)&param_1[2].field_0x5 = 0;
    param_1[2].config_kind = 0;
    *(undefined3 *)&param_1[2].field_0x9 = 0;
    param_1[2].current_word_is_valid = false;
    param_1[2].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[2].field_0xe = 0;
    param_1[2].payload_end = 0;
    param_1[2].remaining = 0;
    param_1[2].object_size = 0;
    param_1[2].page_ish = 0;
    param_1[2].current_offset = 0;
    param_1[2].end_offset = 0;
    param_1->page_ish =
         (longlong)&(unaff_R15->base).first_view.payload + (ulonglong)(uVar47 & 0xfffffc00);
    if (verse_heap_allocating_black_version < 10) {
      if ((int)verse_heap_allocating_black_version == 0) goto LAB_140d97a6d;
      if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
LAB_140d97b94:
      uVar43 = (ulonglong)((uint)((ulonglong)unaff_R15 >> 7) & 0xffc) |
               (ulonglong)unaff_R15 & 0xfffffffffff80000;
      lVar38 = 0;
      do {
        uVar47 = *(uint *)(lVar37 + lVar38 * 4);
        uVar46 = ppVar44->alloc_bits[lVar38];
        uVar36 = ~uVar46;
        *(uint *)((longlong)param_1->bits + lVar38 * 4) = uVar47 & uVar36;
        uVar36 = uVar36 & uVar47;
        if (uVar36 != 0) {
          if (uVar36 == uVar47) {
            *(uint *)(uVar43 + lVar38 * 4) = uVar47;
          }
          else {
            do {
              uVar10 = *(uint *)(uVar43 + lVar38 * 4);
              puVar2 = (uint *)(uVar43 + lVar38 * 4);
              LOCK();
              bVar54 = uVar10 == *puVar2;
              if (bVar54) {
                *puVar2 = uVar10 | uVar36;
              }
              UNLOCK();
            } while (!bVar54);
          }
        }
        ppVar44->alloc_bits[lVar38] = uVar46 | uVar47;
        lVar38 = lVar38 + 1;
      } while (lVar38 != 0x20);
    }
    else {
      uVar52._0_4_ = (unaff_R15->base).first_view;
      uVar52._4_4_ = (unaff_R15->base).data;
      if (uVar52 != verse_heap_allocating_black_version) {
        if (verse_heap_allocating_black_version <= uVar52) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        goto LAB_140d97b94;
      }
LAB_140d97a6d:
      lVar38 = 0;
      do {
        uVar47 = *(uint *)(lVar37 + lVar38 * 4);
        uVar46 = ppVar44->alloc_bits[lVar38];
        *(uint *)((longlong)param_1->bits + lVar38 * 4) = ~uVar46 & uVar47;
        ppVar44->alloc_bits[lVar38] = uVar46 | uVar47;
        lVar38 = lVar38 + 1;
      } while (lVar38 != 0x20);
    }
    param_1->current_word = param_1->bits[uVar42];
    param_1->current_word_is_valid = true;
    uVar43 = (ulonglong)
             *(uint *)(pas_compact_heap_reservation_base + 8 +
                      (ulonglong)(ppVar53->data).payload * 8);
    lVar37 = uVar43 - (ppVar44->emptiness).num_non_empty_words_or_live_bytes;
    if (lVar37 < 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)invalidInstructionException();
      (*pcVar22)();
    }
    if (lVar37 != 0) {
      uVar49 = verse_heap_live_bytes + lVar37;
      if (uVar49 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      LOCK();
      UNLOCK();
      verse_heap_live_bytes = uVar49;
      if (verse_heap_live_bytes_trigger_threshold <= uVar49) {
        (*verse_heap_live_bytes_trigger_callback)();
      }
    }
    (ppVar44->emptiness).num_non_empty_words_or_live_bytes = uVar43;
  }
  if (local_f0 == (PSRWLOCK)0x0) {
    if ((local_60 ^ (ulonglong)auStackY_118) != __security_cookie.value) {
LAB_140d97b6d:
      pcVar22 = (code *)swi(3);
      uVar31 = (*pcVar22)();
      return (bool)uVar31;
    }
  }
  else {
    ReleaseSRWLockExclusive(local_f0);
    if ((local_60 ^ (ulonglong)auStackY_118) != __security_cookie.value) goto LAB_140d97b6d;
  }
  return true;
}

// verse_heap_medium_segregated_page_base_for_boundary @ 140d98b70

pas_page_base * __cdecl verse_heap_medium_segregated_page_base_for_boundary(void *param_1)

{
  if (((ulonglong)param_1 >> 0x30 == 0) &&
     (verse_heap_first_level_chunk_map[(ulonglong)param_1 >> 0x22] !=
      (verse_heap_chunk_map_entry *)0x0)) {
    return (pas_page_base *)
           ((verse_heap_first_level_chunk_map[(ulonglong)param_1 >> 0x22]
             [(uint)((ulonglong)param_1 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9) +
            pas_compact_heap_reservation_base + 0x40);
  }
  return (pas_page_base *)(pas_compact_heap_reservation_base + 0x40);
}

// verse_heap_medium_segregated_boundary_for_page_base @ 140d98bd0

void * __cdecl verse_heap_medium_segregated_boundary_for_page_base(pas_page_base *param_1)

{
  return *(void **)(param_1 + -0x40);
}

// verse_heap_medium_segregated_page_base_for_boundary_remote @ 140d98be0

pas_page_base * __cdecl
verse_heap_medium_segregated_page_base_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  if (((ulonglong)param_2 >> 0x30 == 0) &&
     (verse_heap_first_level_chunk_map[(ulonglong)param_2 >> 0x22] !=
      (verse_heap_chunk_map_entry *)0x0)) {
    return (pas_page_base *)
           ((verse_heap_first_level_chunk_map[(ulonglong)param_2 >> 0x22]
             [(uint)((ulonglong)param_2 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9) +
            pas_compact_heap_reservation_base + 0x40);
  }
  return (pas_page_base *)(pas_compact_heap_reservation_base + 0x40);
}

// verse_heap_allocate_medium_segregated_page @ 140d98c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
verse_heap_allocate_medium_segregated_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2,
          pas_segregated_page_role param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_48 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_48;
  if (param_3 != pas_segregated_page_exclusive_role) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  verse_heap_runtime_config_allocate_chunks
            (&local_20,(verse_heap_runtime_config *)param_1->runtime_config,0x80000,param_2,
             pas_primordial_page_is_committed);
  if ((local_20.did_succeed & 1U) == 0) {
    if ((local_10 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
      return (void *)0x0;
    }
  }
  else {
    verse_heap_mark_bits_page_commit_controller_create_not_large(local_20.begin);
    if ((local_10 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
      return (void *)local_20.begin;
    }
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// verse_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view @ 140d99510

void verse_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
               (void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_medium_segregated_page_config_specialized_local_allocator_refill @ 140d99520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d9a2b9) */
/* WARNING: Removing unreachable block (ram,0x000140d9a73d) */
/* WARNING: Removing unreachable block (ram,0x000140d99994) */
/* WARNING: Removing unreachable block (ram,0x000140d9a464) */

bool __cdecl
verse_medium_segregated_page_config_specialized_local_allocator_refill
          (pas_local_allocator *param_1,pas_allocator_counts *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  byte *pbVar2;
  uint *puVar3;
  pas_segregated_shared_view *ppVar4;
  pas_lock *SRWLock_00;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uchar uVar8;
  ushort uVar9;
  int iVar10;
  pas_segregated_heap *ppVar11;
  ulonglong uVar12;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar13;
  pas_thread_local_cache *ppVar14;
  pas_segregated_directory *ppVar15;
  void *pvVar16;
  pas_heap_runtime_config *ppVar17;
  ulong64 uVar18;
  pas_shared_handle_or_page_boundary_opaque *ppVar19;
  code *pcVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  longlong lVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined4 uVar38;
  ulong64 uVar39;
  BOOLEAN BVar40;
  undefined1 uVar41;
  pas_segregated_view_opaque *ppVar42;
  verse_heap_medium_page_header_object *pvVar43;
  undefined8 *puVar44;
  pas_lock *ppVar45;
  pas_shared_handle_or_page_boundary_opaque *ppVar46;
  pas_compact_expendable_memory *ppVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  pas_compact_expendable_memory *ppVar51;
  verse_heap_chunk_map_entry **ppvVar52;
  pas_segregated_page *ppVar53;
  pas_segregated_size_directory *ppVar54;
  uint uVar55;
  uint uVar56;
  ulonglong uVar57;
  uint uVar58;
  pas_allocator_counts *ppVar59;
  ulong64 uVar60;
  pas_segregated_exclusive_view *ppVar61;
  ulonglong *puVar62;
  pas_segregated_view_opaque *ppVar63;
  ulonglong uVar64;
  bool bVar65;
  bool bVar66;
  undefined1 auStackY_c8 [32];
  longlong local_98;
  pas_compact_expendable_memory *local_70;
  pas_physical_memory_transaction local_68;
  pas_allocation_result local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ppVar63 = param_1->view;
  if (((uint)ppVar63 & 7) == 5) {
    ppVar54 = (pas_segregated_size_directory *)((ulonglong)ppVar63 & 0xfffffffffffffff8);
    ppVar11 = ppVar54->heap;
    bVar5 = ppVar11->runtime_config->field_0x4;
  }
  else {
    ppVar54 = pas_segregated_view_get_size_directory_slow(ppVar63);
    ppVar11 = ppVar54->heap;
    bVar5 = ppVar11->runtime_config->field_0x4;
  }
  if (((bVar5 & 1) == 0) &&
     (param_2 = (pas_allocator_counts *)(ulonglong)ppVar11->small_index_upper_bound,
     param_2 != (pas_allocator_counts *)0x0)) {
    puVar3 = ppVar11->index_to_small_allocator_index;
    if (puVar3 != (uint *)0x0) {
      uVar57 = (ulonglong)puVar3 & 0xfffffffffe000000;
      uVar50 = (ulonglong)((uint)puVar3 & 0x1ffffff);
      uVar64 = uVar50 - 0x4008 >> 0xe;
      uVar50 = (uVar50 + (longlong)param_2 * 4) - 0x4001 >> 0xe;
      do {
        uVar12 = *(ulonglong *)(uVar57 + 0x18 + uVar64 * 8);
        uVar58 = (uint)uVar12 & 7;
        if (uVar58 == 2) break;
        if (uVar58 == 1) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if ((uVar12 & 7) == 0) break;
        puVar62 = (ulonglong *)(uVar57 + 0x18 + uVar64 * 8);
        LOCK();
        bVar65 = uVar12 == *puVar62;
        if (bVar65) {
          *puVar62 = uVar12 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar65);
      if (uVar64 != uVar50) {
        do {
          uVar64 = *(ulonglong *)(uVar57 + 0x18 + uVar50 * 8);
          if (((uint)uVar64 & 7) < 3) break;
          puVar62 = (ulonglong *)(uVar57 + 0x18 + uVar50 * 8);
          LOCK();
          bVar65 = uVar64 == *puVar62;
          if (bVar65) {
            *puVar62 = uVar64 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar65);
      }
    }
    ppVar13 = ppVar11->index_to_small_size_directory;
    if (ppVar13 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      uVar57 = (ulonglong)ppVar13 & 0xfffffffffe000000;
      uVar50 = (ulonglong)((uint)ppVar13 & 0x1ffffff);
      ppVar59 = (pas_allocator_counts *)(uVar50 - 0x4008 >> 0xe);
      param_2 = (pas_allocator_counts *)((uVar50 + (longlong)param_2 * 4) - 0x4001 >> 0xe);
      do {
        uVar50 = *(ulonglong *)(uVar57 + 0x18 + (longlong)ppVar59 * 8);
        uVar58 = (uint)uVar50 & 7;
        if (uVar58 == 2) break;
        if (uVar58 == 1) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if ((uVar50 & 7) == 0) break;
        puVar62 = (ulonglong *)(uVar57 + 0x18 + (longlong)ppVar59 * 8);
        LOCK();
        bVar65 = uVar50 == *puVar62;
        if (bVar65) {
          *puVar62 = uVar50 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar65);
      if (ppVar59 != param_2) {
        do {
          uVar50 = *(ulonglong *)(uVar57 + 0x18 + (longlong)param_2 * 8);
          if (((uint)uVar50 & 7) < 3) break;
          puVar62 = (ulonglong *)(uVar57 + 0x18 + (longlong)param_2 * 8);
          LOCK();
          bVar65 = uVar50 == *puVar62;
          if (bVar65) {
            *puVar62 = uVar50 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar65);
      }
    }
  }
  uVar50 = (ulonglong)(ppVar11->rare_data).payload;
  lVar48 = uVar50 * 8 + pas_compact_heap_reservation_base;
  ppVar51 = (pas_compact_expendable_memory *)
            CONCAT71((int7)((ulonglong)param_2 >> 8),lVar48 == 0 || uVar50 == 0);
  if (lVar48 != 0 && uVar50 != 0) {
    ppVar51 = (pas_compact_expendable_memory *)(ulonglong)*(uint *)(lVar48 + 8);
    lVar49 = (longlong)ppVar51 * 8 + pas_compact_heap_reservation_base;
    if (ppVar51 == (pas_compact_expendable_memory *)0x0) {
      lVar49 = 0;
    }
    if ((ulonglong)*(uint *)(lVar48 + 0xc) != 0) {
      if (lVar49 == 0) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      uVar57 = (lVar49 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
      uVar50 = ((lVar49 - (longlong)pas_compact_expendable_memory_payload) +
               (ulonglong)*(uint *)(lVar48 + 0xc) * 0x10) - 1 >> 0xe;
      ppVar51 = &pas_compact_expendable_memory_header;
      do {
        uVar64 = *(ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar57 * 8 + 0x10)
        ;
        uVar58 = (uint)uVar64 & 7;
        if (uVar58 == 2) break;
        if (uVar58 == 1) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if ((uVar64 & 7) == 0) break;
        puVar62 = (ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar57 * 8 + 0x10)
        ;
        LOCK();
        bVar65 = uVar64 == *puVar62;
        if (bVar65) {
          *puVar62 = uVar64 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar65);
      if (uVar57 != uVar50) {
        do {
          uVar57 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar50 * 8 + 0x10);
          if (((uint)uVar57 & 7) < 3) break;
          puVar62 = (ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar50 * 8 + 0x10);
          LOCK();
          bVar65 = uVar57 == *puVar62;
          if (bVar65) {
            *puVar62 = uVar57 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar65);
      }
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = true;
  bVar65 = pas_scavenger_did_create_eligible();
  ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
  if (bVar65) {
    pas_scavenger_notify_eligibility_if_needed();
    ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
  }
  uVar50 = param_1->page_ish;
  if (uVar50 == 0) {
    ppVar53 = (pas_segregated_page *)0x0;
    ppVar63 = (pas_segregated_view_opaque *)0x0;
  }
  else {
    if ((uVar50 & 0xfffffffffff80000) < 0x1000000000000) {
      ppvVar52 = verse_heap_first_level_chunk_map;
      if (verse_heap_first_level_chunk_map[uVar50 >> 0x22] == (verse_heap_chunk_map_entry *)0x0)
      goto LAB_140d9977d;
      uVar50 = (ulonglong)
               (verse_heap_first_level_chunk_map[uVar50 >> 0x22][(uint)(uVar50 >> 0x13) & 0x7fff].
                encoded_value[0] & 0xfffffff9);
    }
    else {
LAB_140d9977d:
      uVar50 = 0;
    }
    ppVar53 = (pas_segregated_page *)(pas_compact_heap_reservation_base + uVar50 + 0x40);
    ppVar63 = *(pas_segregated_view_opaque **)(pas_compact_heap_reservation_base + 0x60 + uVar50);
    if (((ulonglong)ppVar63 & 6) != 0) {
      if (((uint)ppVar63 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      ppVar63 = param_1->view;
      if (((uint)ppVar63 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
    }
  }
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar42 = (pas_segregated_view_opaque *)((ulonglong)ppVar54 | 5);
  if (ppVar54 == (pas_segregated_size_directory *)0x0) {
    ppVar42 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar42;
  param_1->config_kind = 0xc;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar48 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  ppVar14 = *(pas_thread_local_cache **)(lVar48 + 0x9c08);
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar14) {
    ppvVar52 = (verse_heap_chunk_map_entry **)param_1;
    pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar14,param_1);
  }
  local_70 = (pas_compact_expendable_memory *)0x0;
  uVar58 = (uint)ppVar63;
  if (ppVar63 == (pas_segregated_view_opaque *)0x0) {
LAB_140d99a4f:
    ppVar42 = pas_segregated_size_directory_take_first_eligible(ppVar54);
    uVar60 = pas_compact_heap_reservation_base;
    ppVar51 = local_70;
    if (ppVar42 == (pas_segregated_view_opaque *)0x0) {
      ppVar42 = (pas_segregated_view_opaque *)0x0;
    }
    else {
      uVar56 = (uint)ppVar42 & 7;
      if (1 < uVar56) {
        if (uVar56 == 4) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        goto LAB_140d9a7b7;
      }
      puVar62 = (ulonglong *)((ulonglong)ppVar42 & 0xfffffffffffffff8);
      if (*(char *)((longlong)puVar62 + 0xb) == '\0') {
        uVar50 = (ulonglong)(uint3)puVar62[1];
        if (*puVar62 == 0) {
          cVar6 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar50 * 8);
          if (cVar6 != '\x01') {
            if (cVar6 != '\x02') {
              if (cVar6 != '\0') {
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
                    /* WARNING: Does not return */
              pcVar20 = (code *)invalidInstructionException();
              (*pcVar20)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x80000,&verse_heap_config.medium_segregated_config.base,pas_lock_is_not_held
                       ,(pas_lock **)0x0,0);
            uVar57 = *puVar62;
            if (uVar57 != 0) goto LAB_140d99b97;
          }
          pas_physical_memory_transaction_construct(&local_68);
          do {
            if (*puVar62 != 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)invalidInstructionException();
              (*pcVar20)();
            }
            pas_physical_memory_transaction_begin(&local_68);
            AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            ppvVar52 = (verse_heap_chunk_map_entry **)**(undefined8 **)(uVar60 + 0x18 + uVar50 * 8);
            verse_heap_runtime_config_allocate_chunks
                      (&local_58,(verse_heap_runtime_config *)ppvVar52,0x80000,&local_68,
                       pas_primordial_page_is_committed);
            uVar39 = local_58.begin;
            if ((local_58.did_succeed & 1U) == 0) {
              *puVar62 = 0;
            }
            else {
              verse_heap_mark_bits_page_commit_controller_create_not_large(local_58.begin);
              *puVar62 = uVar39;
              if ((PSRWLOCK)uVar39 != (PSRWLOCK)0x0) {
                pvVar43 = verse_heap_medium_page_header_object_create();
                pvVar43->boundary = uVar39;
                if ((PSRWLOCK)0xffffffffffff < uVar39) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                ppvVar52 = (verse_heap_chunk_map_entry **)
                           (ulonglong)((uint)(uVar39 >> 0x13) & 0x7fff);
                if (verse_heap_first_level_chunk_map[uVar39 >> 0x22][(longlong)ppvVar52].
                    encoded_value[0] != 0) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                uVar57 = (longlong)pvVar43 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar57) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                if ((uVar57 & 3) != 0) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                verse_heap_first_level_chunk_map[uVar39 >> 0x22][(longlong)ppvVar52].encoded_value
                [0] = (uint)uVar57 | 2;
              }
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            bVar65 = pas_physical_memory_transaction_end(&local_68);
          } while (!bVar65);
          uVar57 = *puVar62;
          if (uVar57 == 0) {
            ppVar42 = (pas_segregated_view_opaque *)0x0;
            ppVar51 = local_70;
            goto joined_r0x000140d9a000;
          }
        }
        else {
          SRWLock = (PSRWLOCK)(puVar62 + 2);
          AcquireSRWLockExclusive(SRWLock);
          cVar6 = *(char *)(uVar60 + 0xd + uVar50 * 8);
          local_58.begin = (ulong64)SRWLock;
          if (cVar6 != '\x01') {
            if (cVar6 != '\x02') {
              if (cVar6 != '\0') {
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
                    /* WARNING: Does not return */
              pcVar20 = (code *)invalidInstructionException();
              (*pcVar20)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x80000,&verse_heap_config.medium_segregated_config.base,pas_lock_is_not_held
                       ,(pas_lock **)&local_58,1);
          }
          pas_page_base_commit_with_boundary
                    ((void *)*puVar62,&verse_heap_config.medium_segregated_config.base);
          uVar50 = *puVar62;
          AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          pvVar43 = verse_heap_medium_page_header_object_create();
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          pvVar43->boundary = uVar50;
          if (0xffffffffffff < uVar50) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          uVar56 = (uint)(uVar50 >> 0x13) & 0x7fff;
          if (verse_heap_first_level_chunk_map[uVar50 >> 0x22][uVar56].encoded_value[0] != 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          uVar57 = (longlong)pvVar43 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar57) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          if ((uVar57 & 3) != 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          verse_heap_first_level_chunk_map[uVar50 >> 0x22][uVar56].encoded_value[0] =
               (uint)uVar57 | 2;
          ReleaseSRWLockExclusive(SRWLock);
          uVar57 = *puVar62;
        }
LAB_140d99b97:
        ppvVar52 = (verse_heap_chunk_map_entry **)((longlong)puVar62 + 1);
        if ((uVar57 < 0x1000000000000) &&
           (verse_heap_first_level_chunk_map[uVar57 >> 0x22] != (verse_heap_chunk_map_entry *)0x0))
        {
          uVar50 = (ulonglong)
                   (verse_heap_first_level_chunk_map[uVar57 >> 0x22]
                    [(uint)(uVar57 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9);
        }
        else {
          uVar50 = 0;
        }
        pas_segregated_page_construct
                  ((pas_segregated_page *)(pas_compact_heap_reservation_base + uVar50 + 0x40),
                   (pas_segregated_view_opaque *)ppvVar52,false,
                   &verse_heap_config.medium_segregated_config);
        uVar50 = *puVar62;
        uVar56 = 0;
        if (uVar50 < 0x1000000000000) {
          ppvVar52 = verse_heap_first_level_chunk_map;
          uVar56 = 0;
          if (verse_heap_first_level_chunk_map[uVar50 >> 0x22] != (verse_heap_chunk_map_entry *)0x0)
          {
            uVar56 = verse_heap_first_level_chunk_map[uVar50 >> 0x22]
                     [(uint)(uVar50 >> 0x13) & 0x7fff].encoded_value[0];
          }
        }
        verse_heap_page_header_construct
                  ((verse_heap_page_header *)
                   (pas_compact_heap_reservation_base + (uVar56 & 0xfffffff9) + 0x10));
        AcquireSRWLockExclusive((PSRWLOCK)(puVar62 + 3));
        *(undefined1 *)((longlong)puVar62 + 0xb) = 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar62 + 3));
        ppVar51 = local_70;
      }
    }
joined_r0x000140d9a000:
    local_70 = ppVar51;
    if (ppVar63 != (pas_segregated_view_opaque *)0x0) {
      ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
      uVar60 = pas_compact_heap_reservation_base;
      if (ppVar51 != (pas_compact_expendable_memory *)ppVar53->lock_ptr) {
        local_70 = (pas_compact_expendable_memory *)
                   pas_segregated_page_switch_lock_slow
                             (ppVar53,(pas_lock *)&ppVar51->header,
                              (pas_lock *)
                              &((pas_compact_expendable_memory *)ppVar53->lock_ptr)->header);
        ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
        uVar60 = pas_compact_heap_reservation_base;
      }
      pas_compact_heap_reservation_base = uVar60;
      if ((uVar58 & 7) < 2) {
        uVar50 = (ulonglong)ppVar63 & 0xfffffffffffffff8;
        bVar65 = ppVar53->eligibility_notification_has_been_deferred;
        if (bVar65 == true) {
          ppVar53->eligibility_notification_has_been_deferred = false;
        }
        uVar60 = pas_compact_heap_reservation_base;
        ppvVar52 = (verse_heap_chunk_map_entry **)(ulonglong)*(ushort *)(uVar50 + 8);
        uVar57 = (ulonglong)
                 ((uint)*(byte *)(uVar50 + 10) * 0x80000 + (uint)*(ushort *)(uVar50 + 8) * 8);
        ppVar51 = (pas_compact_expendable_memory *)(ulonglong)*(uint *)(uVar50 + 0xc);
        if ((ppVar53->emptiness).num_non_empty_words_or_live_bytes == 0) {
LAB_140d99df3:
          bVar66 = true;
          ppVar53->is_in_use_for_allocation = false;
        }
        else {
          lVar49 = 0;
          do {
            if (*(char *)((longlong)ppVar53[6].alloc_bits + lVar49 + -0x21) == '\0') {
              bVar66 = true;
              ppVar53->is_in_use_for_allocation = false;
              goto joined_r0x000140d9a01b;
            }
            if (*(char *)((longlong)ppVar53[6].alloc_bits + lVar49 + -0x22) == '\0')
            goto LAB_140d99df3;
            bVar66 = lVar49 != -0x7e;
          } while ((bVar66) &&
                  (lVar35 = lVar49 + -0x23, lVar49 = lVar49 + -3,
                  *(char *)((longlong)ppVar53[6].alloc_bits + lVar35) != '\0'));
          ppVar53->is_in_use_for_allocation = false;
        }
joined_r0x000140d9a01b:
        if (bVar65 != false) {
          ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
          pas_segregated_directory_view_did_become_eligible_at_index
                    ((pas_segregated_directory *)(uVar57 + uVar60),(ulong64)ppVar51);
        }
        if (bVar66) {
          pas_segregated_directory_view_did_become_empty_at_index
                    ((pas_segregated_directory *)(uVar57 + uVar60),(ulong64)ppVar51);
          ppvVar52 = (verse_heap_chunk_map_entry **)ppVar51;
        }
      }
      else {
        if ((uVar58 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        uVar64 = (ulonglong)ppVar63 & 0xfffffffffffffff8;
        uVar57 = (ulonglong)
                 ((uint)*(byte *)(uVar64 + 10) * 0x80000 + (uint)*(ushort *)(uVar64 + 8) * 8);
        uVar50 = *(ulonglong *)(uVar57 + uVar60);
        if ((uVar50 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if ((*(byte *)(uVar64 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        bVar5 = *(byte *)(uVar64 + 0xd);
        uVar9 = *(ushort *)(uVar64 + 0xb);
        ppVar15 = *(pas_segregated_directory **)((uVar50 & 0xfffffffffffffffe) + 8);
        if (((PSRWLOCK)ppVar53->lock_ptr != (PSRWLOCK)0x0) &&
           (BVar40 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar53->lock_ptr), BVar40 != '\0')) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        uVar57 = uVar57 + uVar60;
        if (*(int *)(uVar57 + 0x24) == 1) {
          if ((ppVar53->emptiness).num_non_empty_words_or_live_bytes == 0) {
LAB_140d9a115:
            bVar65 = true;
          }
          else {
            lVar49 = 0;
            do {
              if ((*(char *)((longlong)ppVar53[6].alloc_bits + lVar49 + -0x21) == '\0') ||
                 (*(char *)((longlong)ppVar53[6].alloc_bits + lVar49 + -0x22) == '\0'))
              goto LAB_140d9a115;
              bVar65 = lVar49 != -0x7e;
            } while ((bVar65) &&
                    (lVar35 = lVar49 + -0x23, lVar49 = lVar49 + -3,
                    *(char *)((longlong)ppVar53[6].alloc_bits + lVar35) != '\0'));
          }
        }
        else {
          bVar65 = false;
        }
        bVar7 = *(byte *)(uVar64 + 0x11);
        *(byte *)(uVar64 + 0x11) = bVar7 & 0xfc;
        iVar10 = *(int *)(uVar57 + 0x24);
        if ((bVar7 & 2) == 0) {
          if (iVar10 == 0) {
LAB_140d9a731:
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          *(int *)(uVar57 + 0x24) = iVar10 + -1;
        }
        else {
          if (iVar10 == 0) goto LAB_140d9a731;
          *(int *)(uVar57 + 0x24) = iVar10 + -1;
          if ((*(byte *)(uVar64 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          ppvVar52 = (verse_heap_chunk_map_entry **)(uVar64 | 4);
          pas_segregated_directory_view_did_become_eligible
                    ((pas_segregated_directory *)
                     (((uint)bVar5 * 0x80000 + (uint)uVar9 * 8) + uVar60),
                     (pas_segregated_view_opaque *)ppvVar52);
        }
        if (bVar65) {
          if (*(int *)(uVar57 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          ppvVar52 = (verse_heap_chunk_map_entry **)(uVar57 | 2);
          pas_segregated_directory_view_did_become_empty
                    (ppVar15,(pas_segregated_view_opaque *)ppvVar52);
        }
      }
    }
    if (ppVar42 == (pas_segregated_view_opaque *)0x0) {
      if (local_70 == (pas_compact_expendable_memory *)0x0) {
        bVar65 = false;
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&local_70->header);
        local_70 = (pas_compact_expendable_memory *)0x0;
        bVar65 = false;
      }
      goto LAB_140d9a493;
    }
    if (((ulonglong)ppVar42 & 6) != 0) {
      if (((uint)ppVar42 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      uVar58 = (uint)*(uint3 *)(((pas_segregated_partial_view *)
                                ((ulonglong)ppVar42 & 0xfffffffffffffff8))->shared_view).payload;
      ppVar4 = (pas_segregated_shared_view *)
               (pas_compact_heap_reservation_base + (ulonglong)uVar58 * 8);
      uVar60 = pas_compact_heap_reservation_base;
      if (ppVar4 == (pas_segregated_shared_view *)0x0 || uVar58 == 0) {
        if (local_70 == (pas_compact_expendable_memory *)0x0) {
          verse_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                    ();
LAB_140d9a7b7:
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        ppVar51 = local_70;
        ReleaseSRWLockExclusive((PSRWLOCK)&local_70->header);
        local_70 = (pas_compact_expendable_memory *)0x0;
        ppVar47 = (pas_compact_expendable_memory *)
                  verse_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                            ();
      }
      else {
        ppVar19 = ppVar4->shared_handle_or_page_boundary;
        ppVar46 = ppVar19;
        if (((ulonglong)ppVar19 & 1) != 0) {
          ppVar46 = *(pas_shared_handle_or_page_boundary_opaque **)
                     ((ulonglong)ppVar19 & 0xfffffffffffffffe);
        }
        if ((ppVar46 < (pas_shared_handle_or_page_boundary_opaque *)0x1000000000000) &&
           (verse_heap_first_level_chunk_map[(ulonglong)ppVar46 >> 0x22] !=
            (verse_heap_chunk_map_entry *)0x0)) {
          ppVar51 = (pas_compact_expendable_memory *)
                    (ulonglong)
                    (verse_heap_first_level_chunk_map[(ulonglong)ppVar46 >> 0x22]
                     [(uint)((ulonglong)ppVar46 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9);
        }
        else {
          ppVar51 = (pas_compact_expendable_memory *)0x0;
        }
        ppVar47 = *(pas_compact_expendable_memory **)
                   ((longlong)ppVar51 + pas_compact_heap_reservation_base + 0x48);
        ppvVar52 = (verse_heap_chunk_map_entry **)local_70;
        if (local_70 == ppVar47) goto joined_r0x000140d9a83e;
      }
      local_70 = (pas_compact_expendable_memory *)
                 pas_segregated_page_switch_lock_slow
                           ((pas_segregated_page *)((longlong)ppVar51 + uVar60 + 0x40),
                            (pas_lock *)ppvVar52,(pas_lock *)&ppVar47->header);
      ppVar19 = ppVar4->shared_handle_or_page_boundary;
joined_r0x000140d9a83e:
      if (((ulonglong)ppVar19 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      pas_segregated_partial_view_set_is_in_use_for_allocation
                ((pas_segregated_partial_view *)((ulonglong)ppVar42 & 0xfffffffffffffff8),ppVar4,
                 (pas_segregated_shared_handle *)((ulonglong)ppVar19 & 0xfffffffffffffffe));
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    ppVar61 = (pas_segregated_exclusive_view *)((ulonglong)ppVar42 & 0xfffffffffffffff8);
    pvVar16 = ppVar61->page_boundary;
    if ((pvVar16 < (void *)0x1000000000000) &&
       (verse_heap_first_level_chunk_map[(ulonglong)pvVar16 >> 0x22] !=
        (verse_heap_chunk_map_entry *)0x0)) {
      uVar50 = (ulonglong)
               (verse_heap_first_level_chunk_map[(ulonglong)pvVar16 >> 0x22]
                [(uint)((ulonglong)pvVar16 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9);
    }
    else {
      uVar50 = 0;
    }
    lVar49 = pas_compact_heap_reservation_base + uVar50;
    puVar44 = (undefined8 *)(pas_compact_heap_reservation_base + uVar50);
    ppVar53 = (pas_segregated_page *)(puVar44 + 8);
    ppVar51 = *(pas_compact_expendable_memory **)(pas_compact_heap_reservation_base + 0x48 + uVar50)
    ;
    if (local_70 != ppVar51) {
      local_70 = (pas_compact_expendable_memory *)
                 pas_segregated_page_switch_lock_slow
                           (ppVar53,(pas_lock *)&local_70->header,(pas_lock *)&ppVar51->header);
    }
    *(undefined1 *)(lVar49 + 0x41) = 1;
    pas_segregated_page_commit_fully
              (ppVar53,(pas_lock **)&local_70,pas_commit_fully_holding_page_lock);
    *(ulonglong *)(lVar49 + 0x60) = (ulonglong)ppVar42 | 1;
    ppVar63 = (pas_segregated_view_opaque *)*puVar44;
    if (puVar44[0xb] == 0) goto LAB_140d998a7;
LAB_140d9a249:
    uVar60 = verse_heap_current_iteration_state.version;
    if (verse_heap_current_iteration_state.version != 0) {
      plVar1 = (longlong *)(lVar48 + 0x9c08);
      ppVar17 = ppVar54->heap->runtime_config;
      uVar50 = (ulonglong)ppVar17[5].directory_size_bound_for_no_view_cache;
      do {
        bVar65 = uVar50 == 0;
        uVar50 = uVar50 - 1;
        if (bVar65) goto LAB_140d9a2ca;
      } while (*(verse_heap_object_set **)
                (*(longlong *)&ppVar17[5].directory_size_bound_for_partial_views + uVar50 * 8) !=
               verse_heap_current_iteration_state.set_being_iterated);
      uVar39._0_1_ = ppVar53[-1].base;
      uVar39._1_1_ = ppVar53[-1].is_in_use_for_allocation;
      uVar39._2_1_ = ppVar53[-1].eligibility_notification_has_been_deferred;
      uVar39._3_1_ = ppVar53[-1].is_committing_fully;
      uVar39._4_4_ = ppVar53[-1].object_size;
      if (uVar39 != verse_heap_current_iteration_state.version) {
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_98 = *plVar1;
        if (local_98 == 1) {
          local_98 = 0;
        }
        uVar8 = (param_1->scavenger_data).encoded_kind_and_location;
        param_1->is_stashing_alloc_bits = true;
        *(undefined1 *)((longlong)&ppVar53[-1].emptiness.use_epoch + 1) = 1;
        SRWLock_00 = &ppVar61->ownership_lock;
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
        ppVar45 = bmalloc_allocate(0x80);
        pvVar16 = *(void **)&ppVar53[1].object_size;
        pvVar29 = *(void **)((longlong)&ppVar53[1].lock_ptr + 4);
        pvVar30 = *(void **)((longlong)&ppVar53[1].emptiness.use_epoch + 4);
        pvVar31 = *(void **)((longlong)&ppVar53[1].emptiness.num_non_empty_words_or_live_bytes + 4);
        pvVar32 = *(void **)((longlong)&ppVar53[1].owner + 4);
        pvVar33 = *(void **)ppVar53[1].alloc_bits;
        pvVar34 = *(void **)&ppVar53[2].object_size;
        (ppVar45->lock).Ptr = *(void **)ppVar53->alloc_bits;
        ppVar45[1].lock.Ptr = pvVar16;
        ppVar45[2].lock.Ptr = pvVar29;
        ppVar45[3].lock.Ptr = pvVar30;
        ppVar45[4].lock.Ptr = pvVar31;
        ppVar45[5].lock.Ptr = pvVar32;
        ppVar45[6].lock.Ptr = pvVar33;
        ppVar45[7].lock.Ptr = pvVar34;
        pvVar16 = *(void **)((longlong)&ppVar53[2].emptiness.use_epoch + 4);
        ppVar45[8].lock.Ptr = *(void **)((longlong)&ppVar53[2].lock_ptr + 4);
        ppVar45[9].lock.Ptr = pvVar16;
        pvVar16 = *(void **)((longlong)&ppVar53[2].owner + 4);
        ppVar45[10].lock.Ptr =
             *(void **)((longlong)&ppVar53[2].emptiness.num_non_empty_words_or_live_bytes + 4);
        ppVar45[0xb].lock.Ptr = pvVar16;
        pvVar16 = *(void **)&ppVar53[3].object_size;
        ppVar45[0xc].lock.Ptr = *(void **)ppVar53[2].alloc_bits;
        ppVar45[0xd].lock.Ptr = pvVar16;
        pvVar16 = *(void **)((longlong)&ppVar53[3].emptiness.use_epoch + 4);
        ppVar45[0xe].lock.Ptr = *(void **)((longlong)&ppVar53[3].lock_ptr + 4);
        ppVar45[0xf].lock.Ptr = pvVar16;
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
        *(undefined1 *)((longlong)&ppVar53[-1].emptiness.use_epoch + 1) = 0;
        uVar39 = verse_heap_current_iteration_state.version;
        uVar18._0_1_ = ppVar53[-1].base;
        uVar18._1_1_ = ppVar53[-1].is_in_use_for_allocation;
        uVar18._2_1_ = ppVar53[-1].eligibility_notification_has_been_deferred;
        uVar18._3_1_ = ppVar53[-1].is_committing_fully;
        uVar18._4_4_ = ppVar53[-1].object_size;
        if (uVar18 == uVar60) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
          bmalloc_deallocate(ppVar45);
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
        }
        else {
          verse_heap_current_iteration_state.version._0_1_ = (undefined1)uVar60;
          verse_heap_current_iteration_state.version._1_1_ = SUB81(uVar60,1);
          uVar41 = verse_heap_current_iteration_state.version._1_1_;
          verse_heap_current_iteration_state.version._2_1_ = SUB81(uVar60,2);
          uVar36 = verse_heap_current_iteration_state.version._2_1_;
          verse_heap_current_iteration_state.version._3_1_ = SUB81(uVar60,3);
          uVar37 = verse_heap_current_iteration_state.version._3_1_;
          verse_heap_current_iteration_state.version._4_4_ = SUB84(uVar60,4);
          uVar38 = verse_heap_current_iteration_state.version._4_4_;
          ppVar53[-1].base = (pas_page_base)(undefined1)verse_heap_current_iteration_state.version;
          verse_heap_current_iteration_state.version = uVar39;
          ppVar53[-1].is_in_use_for_allocation = (bool)uVar41;
          ppVar53[-1].eligibility_notification_has_been_deferred = (bool)uVar36;
          ppVar53[-1].is_committing_fully = (bool)uVar37;
          ppVar53[-1].object_size = uVar38;
          if (ppVar53[-1].lock_ptr != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          ppVar53[-1].lock_ptr = ppVar45;
        }
        if (-1 < (char)uVar8) {
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
            lVar48 = *plVar1;
            if (lVar48 != 1) goto LAB_140d9a686;
LAB_140d9a6b5:
            lVar48 = 0;
            if (local_98 == 0) goto LAB_140d9a69d;
          }
          else {
            lVar48 = *plVar1;
            if (lVar48 == 1) goto LAB_140d9a6b5;
LAB_140d9a686:
            if (lVar48 == local_98) goto LAB_140d9a69d;
          }
          param_1 = (pas_local_allocator *)((longlong)param_1 + (lVar48 - local_98));
        }
LAB_140d9a69d:
        param_1->is_stashing_alloc_bits = false;
      }
    }
LAB_140d9a2ca:
    param_1->payload_end = 0;
    param_1->remaining = 0;
    pas_segregated_exclusive_view_install_full_use_counts(ppVar61);
    uVar60 = pas_compact_heap_reservation_base;
    uVar57 = (ulonglong)(ppVar54->data).payload;
    uVar50 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar57 * 8);
    if (uVar50 < 8) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    uVar58 = *(uint *)(pas_compact_heap_reservation_base + uVar57 * 8);
    uVar56 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar57 * 8);
    param_1->current_offset = uVar58 >> 0xf;
    param_1->end_offset = ((uVar56 >> 9) - 1 >> 6) + 1;
    param_1->bits[0] = 0;
    param_1[1].scavenger_data.is_in_use = false;
    param_1[1].scavenger_data.should_stop_count = '\0';
    param_1[1].scavenger_data.dirty = false;
    param_1[1].scavenger_data.encoded_kind_and_location = '\0';
    param_1[1].alignment_shift = '\0';
    *(undefined3 *)&param_1[1].field_0x5 = 0;
    param_1[1].config_kind = 0;
    *(undefined3 *)&param_1[1].field_0x9 = 0;
    param_1[1].current_word_is_valid = false;
    param_1[1].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[1].field_0xe = 0;
    param_1[1].payload_end = 0;
    param_1[1].remaining = 0;
    param_1[1].object_size = 0;
    param_1[1].page_ish = 0;
    param_1[1].current_offset = 0;
    param_1[1].end_offset = 0;
    param_1[1].current_word = 0;
    param_1[1].view = (pas_segregated_view_opaque *)0x0;
    param_1[1].bits[0] = 0;
    param_1[2].scavenger_data.is_in_use = false;
    param_1[2].scavenger_data.should_stop_count = '\0';
    param_1[2].scavenger_data.dirty = false;
    param_1[2].scavenger_data.encoded_kind_and_location = '\0';
    param_1[2].alignment_shift = '\0';
    *(undefined3 *)&param_1[2].field_0x5 = 0;
    param_1[2].config_kind = 0;
    *(undefined3 *)&param_1[2].field_0x9 = 0;
    param_1[2].current_word_is_valid = false;
    param_1[2].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[2].field_0xe = 0;
    param_1[2].payload_end = 0;
    param_1[2].remaining = 0;
    param_1[2].object_size = 0;
    param_1[2].page_ish = 0;
    param_1[2].current_offset = 0;
    param_1[2].end_offset = 0;
    param_1->page_ish = (ulong64)(ppVar63 + (uVar58 & 0xffff8000));
    if ((ppVar63 < (pas_segregated_view_opaque *)0x1000000000000) &&
       (verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22] !=
        (verse_heap_chunk_map_entry *)0x0)) {
      uVar57 = (ulonglong)
               (verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22]
                [(uint)((ulonglong)ppVar63 >> 0x13) & 0x7fff].encoded_value[0] & 0xfffffff9);
    }
    else {
      uVar57 = 0;
    }
    lVar48 = uVar60 + uVar50;
    if (verse_heap_allocating_black_version < 10) {
      if ((int)verse_heap_allocating_black_version == 0) goto LAB_140d9a3dd;
      if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
LAB_140d9a4cc:
      uVar50 = (ulonglong)((uint)((ulonglong)ppVar63 >> 7) & 0xffc) |
               (ulonglong)ppVar63 & 0xfffffffffff80000;
      lVar49 = 0;
      do {
        uVar58 = *(uint *)(lVar48 + lVar49 * 4);
        uVar56 = ppVar53->alloc_bits[lVar49];
        uVar55 = ~uVar56;
        *(uint *)((longlong)param_1->bits + lVar49 * 4) = uVar58 & uVar55;
        uVar55 = uVar55 & uVar58;
        if (uVar55 != 0) {
          do {
            iVar10 = 0;
            for (uVar21 = uVar55; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              iVar10 = iVar10 + 1;
            }
            uVar57 = ((ulonglong)(uint)(iVar10 << 9) | lVar49 << 0xe) >> 7;
            do {
              uVar21 = *(uint *)(uVar50 + uVar57);
              if (uVar21 == (uVar21 | 1)) break;
              puVar3 = (uint *)(uVar50 + uVar57);
              LOCK();
              bVar65 = uVar21 == *puVar3;
              if (bVar65) {
                *puVar3 = uVar21 | 1;
              }
              UNLOCK();
            } while (!bVar65);
            bVar5 = (byte)iVar10 & 0x1f;
            uVar55 = uVar55 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          } while (uVar55 != 0);
        }
        ppVar53->alloc_bits[lVar49] = uVar56 | uVar58;
        lVar49 = lVar49 + 1;
      } while (lVar49 != 0x20);
    }
    else {
      uVar50 = *(ulonglong *)(pas_compact_heap_reservation_base + 0x10 + uVar57);
      if (uVar50 != verse_heap_allocating_black_version) {
        if (verse_heap_allocating_black_version <= uVar50) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        goto LAB_140d9a4cc;
      }
LAB_140d9a3dd:
      lVar49 = 0;
      do {
        uVar58 = *(uint *)(lVar48 + lVar49 * 4);
        uVar56 = ppVar53->alloc_bits[lVar49];
        *(uint *)((longlong)param_1->bits + lVar49 * 4) = ~uVar56 & uVar58;
        ppVar53->alloc_bits[lVar49] = uVar56 | uVar58;
        lVar49 = lVar49 + 1;
      } while (lVar49 != 0x20);
    }
    param_1->current_word = 0;
    param_1->current_word_is_valid = true;
    uVar50 = (ulonglong)
             *(uint *)(pas_compact_heap_reservation_base + 8 +
                      (ulonglong)(ppVar54->data).payload * 8);
    lVar48 = uVar50 - (ppVar53->emptiness).num_non_empty_words_or_live_bytes;
    if (lVar48 < 0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if (lVar48 != 0) {
      uVar57 = verse_heap_live_bytes + lVar48;
      if (uVar57 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      LOCK();
      UNLOCK();
      verse_heap_live_bytes = uVar57;
      if (verse_heap_live_bytes_trigger_threshold <= uVar57) {
        (*verse_heap_live_bytes_trigger_callback)();
      }
    }
    (ppVar53->emptiness).num_non_empty_words_or_live_bytes = uVar50;
  }
  else {
    if ((uVar58 & 7) == 4) {
      uVar50 = (ulonglong)ppVar63 & 0xfffffffffffffff8;
      if ((*(byte *)(uVar50 + 0x11) & 4) != 0) {
        if (ppVar53->lock_ptr != (pas_lock *)0x0) {
          local_70 = (pas_compact_expendable_memory *)
                     pas_segregated_page_switch_lock_slow(ppVar53,(pas_lock *)0x0,ppVar53->lock_ptr)
          ;
          *(byte *)(uVar50 + 0x11) = *(byte *)(uVar50 + 0x11) & 0xf9;
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        *(byte *)(uVar50 + 0x11) = *(byte *)(uVar50 + 0x11) & 0xf9;
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      goto LAB_140d99a4f;
    }
    if (((ulonglong)ppVar63 & 7) != 0) goto LAB_140d99a4f;
    ppVar61 = (pas_segregated_exclusive_view *)((ulonglong)ppVar63 & 0xfffffffffffffff8);
    if (ppVar53->lock_ptr != (pas_lock *)0x0) {
      local_70 = (pas_compact_expendable_memory *)
                 pas_segregated_page_switch_lock_slow(ppVar53,(pas_lock *)0x0,ppVar53->lock_ptr);
    }
    ppVar53->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar63 | 1);
    ppVar53->eligibility_notification_has_been_deferred = false;
    ppVar63 = ppVar53[-2].owner;
    if ((ppVar53->emptiness).num_non_empty_words_or_live_bytes != 0) goto LAB_140d9a249;
LAB_140d998a7:
    if ((verse_heap_current_iteration_state.version != 0) &&
       (uVar60._0_1_ = ppVar53[-1].base, uVar60._1_1_ = ppVar53[-1].is_in_use_for_allocation,
       uVar60._2_1_ = ppVar53[-1].eligibility_notification_has_been_deferred,
       uVar60._3_1_ = ppVar53[-1].is_committing_fully, uVar60._4_4_ = ppVar53[-1].object_size,
       uVar60 != verse_heap_current_iteration_state.version)) {
      uVar41 = verse_heap_current_iteration_state.version._1_1_;
      uVar36 = verse_heap_current_iteration_state.version._2_1_;
      uVar37 = verse_heap_current_iteration_state.version._3_1_;
      uVar38 = verse_heap_current_iteration_state.version._4_4_;
      ppVar53[-1].base = (pas_page_base)(undefined1)verse_heap_current_iteration_state.version;
      ppVar53[-1].is_in_use_for_allocation = (bool)uVar41;
      ppVar53[-1].eligibility_notification_has_been_deferred = (bool)uVar36;
      ppVar53[-1].is_committing_fully = (bool)uVar37;
      ppVar53[-1].object_size = uVar38;
    }
    if (ppVar53[-1].lock_ptr != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if ((pas_segregated_view_opaque *)0xffffffffffff < ppVar63) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    uVar56 = (uint)((ulonglong)ppVar63 >> 0x13) & 0x7fff;
    uVar58 = verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22][uVar56].encoded_value[0];
    if ((uVar58 & 3) != 2) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    uVar50 = (ulonglong)(uVar58 & 0xfffffff8);
    if ((pas_segregated_page *)(pas_compact_heap_reservation_base + uVar50 + 0x40) != ppVar53) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if ((uVar58 & 4) != 0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if (pas_compact_heap_reservation_base + uVar50 == 0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if (pas_compact_heap_reservation_size <= uVar50) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22][uVar56].encoded_value[0] =
         uVar58 | 6;
    pas_segregated_exclusive_view_install_full_use_counts(ppVar61);
    uVar60 = pas_compact_heap_reservation_base;
    uVar57 = (ulonglong)(ppVar54->data).payload;
    iVar10 = *(int *)(pas_compact_heap_reservation_base + uVar57 * 8);
    uVar58 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar57 * 8);
    uVar50 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar57 * 8);
    (ppVar53->emptiness).num_non_empty_words_or_live_bytes = uVar50;
    if (uVar50 != 0) {
      uVar50 = verse_heap_live_bytes + uVar50;
      if (uVar50 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      LOCK();
      UNLOCK();
      verse_heap_live_bytes = uVar50;
      if (verse_heap_live_bytes_trigger_threshold <= uVar50) {
        (*verse_heap_live_bytes_trigger_callback)();
      }
    }
    param_1->payload_end = (ulong64)(ppVar63 + uVar58);
    param_1->remaining = uVar58 - iVar10;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->page_ish = (ulong64)ppVar63;
    uVar39 = pas_compact_heap_reservation_base;
    uVar50 = (ulonglong)*(uint *)(uVar60 + 0xc + uVar57 * 8);
    if (uVar50 < 8) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    if ((ppVar63 < (pas_segregated_view_opaque *)0x1000000000000) &&
       (verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22] !=
        (verse_heap_chunk_map_entry *)0x0)) {
      uVar57 = (ulonglong)
               (verse_heap_first_level_chunk_map[(ulonglong)ppVar63 >> 0x22][uVar56].encoded_value
                [0] & 0xfffffff9);
      if (verse_heap_allocating_black_version < 10) goto LAB_140d99bfb;
LAB_140d99a29:
      uVar57 = *(ulonglong *)(uVar57 + 0x10 + pas_compact_heap_reservation_base);
      if (uVar57 != verse_heap_allocating_black_version) {
        if (verse_heap_allocating_black_version <= uVar57) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        goto LAB_140d99c0e;
      }
    }
    else {
      uVar57 = 0;
      if (9 < verse_heap_allocating_black_version) goto LAB_140d99a29;
LAB_140d99bfb:
      if ((int)verse_heap_allocating_black_version != 0) {
        if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
LAB_140d99c0e:
        lVar48 = uVar50 + pas_compact_heap_reservation_base;
        lVar49 = 0;
        do {
          uVar58 = *(uint *)(lVar48 + lVar49 * 4);
          if (uVar58 != 0) {
            do {
              iVar10 = 0;
              for (uVar56 = uVar58; (uVar56 & 1) == 0; uVar56 = uVar56 >> 1 | 0x80000000) {
                iVar10 = iVar10 + 1;
              }
              pbVar2 = (byte *)(((ulonglong)((uint)((ulonglong)ppVar63 >> 7) & 0xffc) |
                                (ulonglong)ppVar63 & 0xfffffffffff80000) +
                               (((ulonglong)(uint)(iVar10 << 5) | lVar49 << 10) >> 3));
              *pbVar2 = *pbVar2 | 1;
              bVar5 = (byte)iVar10 & 0x1f;
              uVar58 = uVar58 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
            } while (uVar58 != 0);
          }
          lVar49 = lVar49 + 1;
        } while (lVar49 != 0x20);
      }
    }
    puVar44 = (undefined8 *)(uVar50 + uVar39);
    uVar22 = puVar44[0xf];
    *(undefined8 *)((longlong)&ppVar53[3].lock_ptr + 4) = puVar44[0xe];
    *(undefined8 *)((longlong)&ppVar53[3].emptiness.use_epoch + 4) = uVar22;
    uVar22 = puVar44[0xd];
    *(undefined8 *)ppVar53[2].alloc_bits = puVar44[0xc];
    *(undefined8 *)&ppVar53[3].object_size = uVar22;
    uVar22 = puVar44[0xb];
    *(undefined8 *)((longlong)&ppVar53[2].emptiness.num_non_empty_words_or_live_bytes + 4) =
         puVar44[10];
    *(undefined8 *)((longlong)&ppVar53[2].owner + 4) = uVar22;
    uVar22 = puVar44[9];
    *(undefined8 *)((longlong)&ppVar53[2].lock_ptr + 4) = puVar44[8];
    *(undefined8 *)((longlong)&ppVar53[2].emptiness.use_epoch + 4) = uVar22;
    uVar22 = *puVar44;
    uVar23 = puVar44[1];
    uVar24 = puVar44[2];
    uVar25 = puVar44[3];
    uVar26 = puVar44[4];
    uVar27 = puVar44[5];
    uVar28 = puVar44[7];
    *(undefined8 *)ppVar53[1].alloc_bits = puVar44[6];
    *(undefined8 *)&ppVar53[2].object_size = uVar28;
    *(undefined8 *)((longlong)&ppVar53[1].emptiness.num_non_empty_words_or_live_bytes + 4) = uVar26;
    *(undefined8 *)((longlong)&ppVar53[1].owner + 4) = uVar27;
    *(undefined8 *)((longlong)&ppVar53[1].lock_ptr + 4) = uVar24;
    *(undefined8 *)((longlong)&ppVar53[1].emptiness.use_epoch + 4) = uVar25;
    *(undefined8 *)ppVar53->alloc_bits = uVar22;
    *(undefined8 *)&ppVar53[1].object_size = uVar23;
  }
  bVar65 = true;
  if (local_70 != (pas_compact_expendable_memory *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_70->header);
    local_70 = (pas_compact_expendable_memory *)0x0;
  }
LAB_140d9a493:
  if ((local_48 ^ (ulonglong)auStackY_c8) != __security_cookie.value) {
    pcVar20 = (code *)swi(3);
    uVar41 = (*pcVar20)();
    return (bool)uVar41;
  }
  return bVar65;
}

// verse_heap_config_fast_megapage_kind @ 140d9b5f0

pas_fast_megapage_kind __cdecl verse_heap_config_fast_megapage_kind(ulong64 param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_config_page_base @ 140d9b600

pas_page_base * __cdecl verse_heap_config_page_base(ulong64 param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_config_aligned_allocator @ 140d9b610

pas_aligned_allocation_result * __cdecl
verse_heap_config_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,pas_large_heap *param_3,pas_heap_config *param_4)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_config_for_each_shared_page_directory @ 140d9b620

bool __cdecl
verse_heap_config_for_each_shared_page_directory
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_shared_page_directory_ptr_void_ptr *param_2,
          void *param_3)

{
  return true;
}

// verse_heap_config_for_each_shared_page_directory_remote @ 140d9b630

bool __cdecl
verse_heap_config_for_each_shared_page_directory_remote
          (pas_enumerator *param_1,pas_segregated_heap *param_2,
          _func___cdecl_bool_pas_enumerator_ptr_pas_segregated_shared_page_directory_ptr_void_ptr
          *param_3,void *param_4)

{
  return true;
}

// verse_heap_config_dump_shared_page_directory_arg @ 140d9b640

void __cdecl
verse_heap_config_dump_shared_page_directory_arg
          (pas_stream *param_1,pas_segregated_shared_page_directory *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow @ 140d9b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d9bb24) */
/* WARNING: Removing unreachable block (ram,0x000140d9c36e) */
/* WARNING: Removing unreachable block (ram,0x000140d9c379) */
/* WARNING: Removing unreachable block (ram,0x000140d9c534) */

pas_allocation_result * __cdecl
verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          pas_allocator_counts *param_2,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uchar uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  pas_segregated_heap *ppVar12;
  ulonglong uVar13;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar14;
  verse_heap_chunk_map_entry *pvVar15;
  pas_heap_runtime_config *ppVar16;
  pas_shared_handle_or_page_boundary_opaque *ppVar17;
  code *pcVar18;
  uint3 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  pas_shared_handle_or_page_boundary_opaque *ppVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined4 uVar37;
  ulong64 uVar38;
  BOOLEAN BVar39;
  undefined1 uVar40;
  uint uVar41;
  pas_segregated_view_opaque *ppVar42;
  ulong64 uVar43;
  pas_lock *ppVar44;
  ulong64 uVar45;
  pas_allocation_result *ppVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  pas_thread_local_cache *ppVar50;
  pas_local_allocator *ppVar51;
  pas_segregated_partial_view *ppVar52;
  ulonglong uVar53;
  pas_segregated_page *ppVar54;
  pas_segregated_page *ppVar55;
  pas_segregated_view_opaque *ppVar56;
  pas_segregated_shared_view *ppVar57;
  uint uVar58;
  pas_segregated_directory *ppVar59;
  ulonglong uVar60;
  undefined8 *puVar61;
  PSRWLOCK pRVar62;
  uint uVar63;
  uint uVar64;
  pas_compact_expendable_memory *ppVar65;
  ulong64 *puVar66;
  pas_segregated_size_directory *ppVar67;
  bool bVar68;
  undefined1 auStackY_148 [32];
  PSRWLOCK local_110;
  longlong local_f0;
  pas_physical_memory_transaction local_d0;
  pas_alignment local_c0;
  pas_allocation_result local_b0;
  longlong local_a0;
  pas_physical_memory_transaction *local_98;
  pas_large_free_heap_config local_90;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((param_1->scavenger_data).encoded_kind_and_location & 0x7f) == 2) {
    cVar5 = (param_1->scavenger_data).is_in_use;
  }
  else {
    param_2 = (pas_allocator_counts *)&DAT_00000002;
    pas_local_allocator_scavenger_data_commit_if_necessary_slow
              (&param_1->scavenger_data,
               pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
               ,pas_local_allocator_allocator_kind);
    cVar5 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
    pcVar18 = (code *)invalidInstructionException();
    (*pcVar18)();
  }
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  do {
    ppVar56 = param_1->view;
    if (((uint)ppVar56 & 7) == 5) {
      ppVar67 = (pas_segregated_size_directory *)((ulonglong)ppVar56 & 0xfffffffffffffff8);
      ppVar12 = ppVar67->heap;
      bVar6 = ppVar12->runtime_config->field_0x4;
      ppVar65 = (pas_compact_expendable_memory *)param_2;
    }
    else {
      ppVar67 = pas_segregated_view_get_size_directory_slow(ppVar56);
      ppVar12 = ppVar67->heap;
      bVar6 = ppVar12->runtime_config->field_0x4;
      ppVar65 = (pas_compact_expendable_memory *)param_2;
    }
    if (((bVar6 & 1) == 0) && (uVar49 = (ulonglong)ppVar12->small_index_upper_bound, uVar49 != 0)) {
      puVar2 = ppVar12->index_to_small_allocator_index;
      if (puVar2 != (uint *)0x0) {
        ppVar65 = (pas_compact_expendable_memory *)((ulonglong)puVar2 & 0xfffffffffe000000);
        uVar53 = (ulonglong)((uint)puVar2 & 0x1ffffff);
        uVar60 = uVar53 - 0x4008 >> 0xe;
        uVar53 = (uVar53 + uVar49 * 4) - 0x4001 >> 0xe;
        do {
          uVar13 = *(ulonglong *)((longlong)ppVar65 + uVar60 * 8 + 0x18);
          uVar63 = (uint)uVar13 & 7;
          if (uVar63 == 2) break;
          if (uVar63 == 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          if ((uVar13 & 7) == 0) break;
          puVar3 = (ulonglong *)((longlong)ppVar65 + uVar60 * 8 + 0x18);
          LOCK();
          bVar68 = uVar13 == *puVar3;
          if (bVar68) {
            *puVar3 = uVar13 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar68);
        if (uVar60 != uVar53) {
          do {
            uVar60 = *(ulonglong *)((longlong)ppVar65 + uVar53 * 8 + 0x18);
            if (((uint)uVar60 & 7) < 3) break;
            puVar3 = (ulonglong *)((longlong)ppVar65 + uVar53 * 8 + 0x18);
            LOCK();
            bVar68 = uVar60 == *puVar3;
            if (bVar68) {
              *puVar3 = uVar60 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar68);
        }
      }
      ppVar14 = ppVar12->index_to_small_size_directory;
      if (ppVar14 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
        ppVar65 = (pas_compact_expendable_memory *)((ulonglong)ppVar14 & 0xfffffffffe000000);
        uVar53 = (ulonglong)((uint)ppVar14 & 0x1ffffff);
        uVar60 = uVar53 - 0x4008 >> 0xe;
        uVar49 = (uVar53 + uVar49 * 4) - 0x4001 >> 0xe;
        do {
          uVar53 = *(ulonglong *)((longlong)ppVar65 + uVar60 * 8 + 0x18);
          uVar63 = (uint)uVar53 & 7;
          if (uVar63 == 2) break;
          if (uVar63 == 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          if ((uVar53 & 7) == 0) break;
          puVar3 = (ulonglong *)((longlong)ppVar65 + uVar60 * 8 + 0x18);
          LOCK();
          bVar68 = uVar53 == *puVar3;
          if (bVar68) {
            *puVar3 = uVar53 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar68);
        if (uVar60 != uVar49) {
          do {
            uVar53 = *(ulonglong *)((longlong)ppVar65 + uVar49 * 8 + 0x18);
            if (((uint)uVar53 & 7) < 3) break;
            puVar3 = (ulonglong *)((longlong)ppVar65 + uVar49 * 8 + 0x18);
            LOCK();
            bVar68 = uVar53 == *puVar3;
            if (bVar68) {
              *puVar3 = uVar53 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar68);
        }
      }
    }
    uVar49 = (ulonglong)(ppVar12->rare_data).payload;
    lVar47 = uVar49 * 8 + pas_compact_heap_reservation_base;
    if (lVar47 != 0 && uVar49 != 0) {
      lVar48 = (ulonglong)*(uint *)(lVar47 + 8) * 8 + pas_compact_heap_reservation_base;
      if ((ulonglong)*(uint *)(lVar47 + 8) == 0) {
        lVar48 = 0;
      }
      if ((ulonglong)*(uint *)(lVar47 + 0xc) != 0) {
        if (lVar48 == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        uVar53 = (lVar48 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
        uVar49 = ((lVar48 - (longlong)pas_compact_expendable_memory_payload) +
                 (ulonglong)*(uint *)(lVar47 + 0xc) * 0x10) - 1 >> 0xe;
        do {
          uVar60 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar53 * 8 + 0x10);
          uVar63 = (uint)uVar60 & 7;
          ppVar65 = (pas_compact_expendable_memory *)(ulonglong)uVar63;
          if (uVar63 == 2) break;
          if (uVar63 == 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          if ((uVar60 & 7) == 0) break;
          ppVar65 = (pas_compact_expendable_memory *)(uVar60 & 0xfffffffffffffff8 | 2);
          puVar3 = (ulonglong *)
                   ((longlong)&pas_compact_expendable_memory_header + uVar53 * 8 + 0x10);
          LOCK();
          bVar68 = uVar60 == *puVar3;
          if (bVar68) {
            *puVar3 = (ulonglong)ppVar65;
          }
          UNLOCK();
        } while (!bVar68);
        if (uVar53 != uVar49) {
          do {
            uVar53 = *(ulonglong *)
                      ((longlong)&pas_compact_expendable_memory_header + uVar49 * 8 + 0x10);
            if (((uint)uVar53 & 7) < 3) break;
            ppVar65 = &pas_compact_expendable_memory_header;
            puVar3 = (ulonglong *)
                     ((longlong)&pas_compact_expendable_memory_header + uVar49 * 8 + 0x10);
            LOCK();
            bVar68 = uVar53 == *puVar3;
            if (bVar68) {
              *puVar3 = uVar53 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar68);
        }
      }
    }
    (param_1->scavenger_data).should_stop_count = '\0';
    (param_1->scavenger_data).dirty = true;
    bVar68 = pas_scavenger_did_create_eligible();
    if (bVar68) {
      pas_scavenger_notify_eligibility_if_needed();
    }
    if (param_1->page_ish == 0) {
      ppVar54 = (pas_segregated_page *)0x0;
      ppVar56 = (pas_segregated_view_opaque *)0x0;
    }
    else {
      uVar49 = param_1->page_ish & 0xffffffffffffc000;
      ppVar56 = *(pas_segregated_view_opaque **)(uVar49 + 0x50);
      ppVar54 = (pas_segregated_page *)(uVar49 | 0x30);
      if (((ulonglong)ppVar56 & 6) != 0) {
        if (((uint)ppVar56 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        ppVar56 = param_1->view;
        if (((uint)ppVar56 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
      }
    }
    param_1->page_ish = 0;
    param_1->current_word_is_valid = false;
    param_1->payload_end = 0;
    param_1->remaining = 0;
    ppVar42 = (pas_segregated_view_opaque *)((ulonglong)ppVar67 | 5);
    if (ppVar67 == (pas_segregated_size_directory *)0x0) {
      ppVar42 = (pas_segregated_view_opaque *)0x0;
    }
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->view = ppVar42;
    param_1->config_kind = 10;
    uVar63 = (uint)ppVar56;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
      ppVar50 = (pas_thread_local_cache *)*plVar1;
      if ((pas_thread_local_cache *)&DAT_00000002 <= ppVar50) goto LAB_140d9b9bf;
LAB_140d9b993:
      if (ppVar56 == (pas_segregated_view_opaque *)0x0) goto LAB_140d9bbb3;
LAB_140d9b9d5:
      if ((uVar63 & 7) == 4) {
        ppVar52 = (pas_segregated_partial_view *)((ulonglong)ppVar56 & 0xfffffffffffffff8);
        if (ppVar52->eligibility_has_been_noted) {
          ppVar65 = (pas_compact_expendable_memory *)ppVar54->lock_ptr;
          if (ppVar65 == (pas_compact_expendable_memory *)0x0) {
            ppVar52->field_0x11 = ppVar52->field_0x11 & 0xf9;
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          goto LAB_140d9c8d9;
        }
        goto LAB_140d9bbb3;
      }
      if (((ulonglong)ppVar56 & 7) != 0) goto LAB_140d9bbb3;
      if (ppVar54->lock_ptr == (pas_lock *)0x0) {
        local_110 = (PSRWLOCK)0x0;
      }
      else {
        local_110 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar54,(pas_lock *)0x0,ppVar54->lock_ptr);
      }
      puVar61 = (undefined8 *)((ulonglong)ppVar56 & 0xfffffffffffffff8);
      ppVar54->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar56 | 1);
      ppVar54->eligibility_notification_has_been_deferred = false;
      ppVar55 = ppVar54 + -1;
      if ((ppVar54->emptiness).num_non_empty_words_or_live_bytes == 0) goto LAB_140d9ba28;
LAB_140d9c22d:
      uVar45 = verse_heap_current_iteration_state.version;
      ppVar51 = param_1;
      if (verse_heap_current_iteration_state.version != 0) {
        ppVar16 = ppVar67->heap->runtime_config;
        uVar49 = (ulonglong)ppVar16[5].directory_size_bound_for_no_view_cache;
        do {
          bVar68 = uVar49 == 0;
          uVar49 = uVar49 - 1;
          if (bVar68) goto LAB_140d9c3f0;
        } while (*(verse_heap_object_set **)
                  (*(longlong *)&ppVar16[5].directory_size_bound_for_partial_views + uVar49 * 8) !=
                 verse_heap_current_iteration_state.set_being_iterated);
        uVar60._0_1_ = ppVar55->base;
        uVar60._1_1_ = ppVar55->is_in_use_for_allocation;
        uVar60._2_1_ = ppVar55->eligibility_notification_has_been_deferred;
        uVar60._3_1_ = ppVar55->is_committing_fully;
        uVar60._4_4_ = ppVar55->object_size;
        if (uVar60 != verse_heap_current_iteration_state.version) {
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_f0 = *plVar1;
          if (local_f0 == 1) {
            local_f0 = 0;
          }
          uVar8 = (param_1->scavenger_data).encoded_kind_and_location;
          param_1->is_stashing_alloc_bits = true;
          *(undefined1 *)((longlong)&ppVar54[-1].emptiness.use_epoch + 1) = 1;
          pRVar62 = (PSRWLOCK)(puVar61 + 3);
          ReleaseSRWLockExclusive(pRVar62);
          ppVar44 = bmalloc_allocate(0x80);
          pvVar27 = *(void **)&ppVar54[1].object_size;
          pvVar28 = *(void **)((longlong)&ppVar54[1].lock_ptr + 4);
          pvVar29 = *(void **)((longlong)&ppVar54[1].emptiness.use_epoch + 4);
          pvVar30 = *(void **)((longlong)&ppVar54[1].emptiness.num_non_empty_words_or_live_bytes + 4
                              );
          pvVar31 = *(void **)((longlong)&ppVar54[1].owner + 4);
          pvVar32 = *(void **)ppVar54[1].alloc_bits;
          pvVar33 = *(void **)&ppVar54[2].object_size;
          (ppVar44->lock).Ptr = *(void **)ppVar54->alloc_bits;
          ppVar44[1].lock.Ptr = pvVar27;
          ppVar44[2].lock.Ptr = pvVar28;
          ppVar44[3].lock.Ptr = pvVar29;
          ppVar44[4].lock.Ptr = pvVar30;
          ppVar44[5].lock.Ptr = pvVar31;
          ppVar44[6].lock.Ptr = pvVar32;
          ppVar44[7].lock.Ptr = pvVar33;
          pvVar27 = *(void **)((longlong)&ppVar54[2].emptiness.use_epoch + 4);
          ppVar44[8].lock.Ptr = *(void **)((longlong)&ppVar54[2].lock_ptr + 4);
          ppVar44[9].lock.Ptr = pvVar27;
          pvVar27 = *(void **)((longlong)&ppVar54[2].owner + 4);
          ppVar44[10].lock.Ptr =
               *(void **)((longlong)&ppVar54[2].emptiness.num_non_empty_words_or_live_bytes + 4);
          ppVar44[0xb].lock.Ptr = pvVar27;
          pvVar27 = *(void **)&ppVar54[3].object_size;
          ppVar44[0xc].lock.Ptr = *(void **)ppVar54[2].alloc_bits;
          ppVar44[0xd].lock.Ptr = pvVar27;
          pvVar27 = *(void **)((longlong)&ppVar54[3].emptiness.use_epoch + 4);
          ppVar44[0xe].lock.Ptr = *(void **)((longlong)&ppVar54[3].lock_ptr + 4);
          ppVar44[0xf].lock.Ptr = pvVar27;
          AcquireSRWLockExclusive(pRVar62);
          *(undefined1 *)((longlong)&ppVar54[-1].emptiness.use_epoch + 1) = 0;
          uVar38 = verse_heap_current_iteration_state.version;
          uVar43._0_1_ = ppVar54[-1].base;
          uVar43._1_1_ = ppVar54[-1].is_in_use_for_allocation;
          uVar43._2_1_ = ppVar54[-1].eligibility_notification_has_been_deferred;
          uVar43._3_1_ = ppVar54[-1].is_committing_fully;
          uVar43._4_4_ = ppVar54[-1].object_size;
          if (uVar43 == uVar45) {
            ReleaseSRWLockExclusive(pRVar62);
            bmalloc_deallocate(ppVar44);
            AcquireSRWLockExclusive(pRVar62);
          }
          else {
            verse_heap_current_iteration_state.version._0_1_ = (undefined1)uVar45;
            verse_heap_current_iteration_state.version._1_1_ = SUB81(uVar45,1);
            uVar40 = verse_heap_current_iteration_state.version._1_1_;
            verse_heap_current_iteration_state.version._2_1_ = SUB81(uVar45,2);
            uVar35 = verse_heap_current_iteration_state.version._2_1_;
            verse_heap_current_iteration_state.version._3_1_ = SUB81(uVar45,3);
            uVar36 = verse_heap_current_iteration_state.version._3_1_;
            verse_heap_current_iteration_state.version._4_4_ = SUB84(uVar45,4);
            uVar37 = verse_heap_current_iteration_state.version._4_4_;
            ppVar54[-1].base = (pas_page_base)(undefined1)verse_heap_current_iteration_state.version
            ;
            verse_heap_current_iteration_state.version = uVar38;
            ppVar54[-1].is_in_use_for_allocation = (bool)uVar40;
            ppVar54[-1].eligibility_notification_has_been_deferred = (bool)uVar35;
            ppVar54[-1].is_committing_fully = (bool)uVar36;
            ppVar54[-1].object_size = uVar37;
            if (ppVar54[-1].lock_ptr != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            ppVar54[-1].lock_ptr = ppVar44;
          }
          if (-1 < (char)uVar8) {
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
              lVar47 = *plVar1;
              if (lVar47 == 1) goto LAB_140d9c667;
LAB_140d9c3d3:
              if (lVar47 == local_f0) goto LAB_140d9c3e1;
            }
            else {
              lVar47 = *plVar1;
              if (lVar47 != 1) goto LAB_140d9c3d3;
LAB_140d9c667:
              lVar47 = 0;
              if (local_f0 == 0) goto LAB_140d9c3e1;
            }
            ppVar51 = (pas_local_allocator *)((longlong)param_1 + (lVar47 - local_f0));
          }
LAB_140d9c3e1:
          ppVar51->is_stashing_alloc_bits = false;
        }
      }
LAB_140d9c3f0:
      ppVar51->payload_end = 0;
      ppVar51->remaining = 0;
      uVar53 = (ulonglong)(ppVar67->data).payload;
      uVar49 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar53 * 8);
      if (uVar49 < 8) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      uVar63 = *(uint *)(pas_compact_heap_reservation_base + uVar53 * 8);
      uVar64 = uVar63 >> 10;
      uVar41 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar53 * 8);
      lVar47 = uVar49 + pas_compact_heap_reservation_base;
      ppVar51->current_offset = uVar64;
      ppVar51->end_offset = ((uVar41 >> 4) - 1 >> 6) + 1;
      ppVar51->bits[0] = 0;
      ppVar51[1].scavenger_data.is_in_use = false;
      ppVar51[1].scavenger_data.should_stop_count = '\0';
      ppVar51[1].scavenger_data.dirty = false;
      ppVar51[1].scavenger_data.encoded_kind_and_location = '\0';
      ppVar51[1].alignment_shift = '\0';
      *(undefined3 *)&ppVar51[1].field_0x5 = 0;
      ppVar51[1].config_kind = 0;
      *(undefined3 *)&ppVar51[1].field_0x9 = 0;
      ppVar51[1].current_word_is_valid = false;
      ppVar51[1].is_stashing_alloc_bits = false;
      *(undefined2 *)&ppVar51[1].field_0xe = 0;
      ppVar51[1].payload_end = 0;
      ppVar51[1].remaining = 0;
      ppVar51[1].object_size = 0;
      ppVar51[1].page_ish = 0;
      ppVar51[1].current_offset = 0;
      ppVar51[1].end_offset = 0;
      ppVar51[1].current_word = 0;
      ppVar51[1].view = (pas_segregated_view_opaque *)0x0;
      ppVar51[1].bits[0] = 0;
      ppVar51[2].scavenger_data.is_in_use = false;
      ppVar51[2].scavenger_data.should_stop_count = '\0';
      ppVar51[2].scavenger_data.dirty = false;
      ppVar51[2].scavenger_data.encoded_kind_and_location = '\0';
      ppVar51[2].alignment_shift = '\0';
      *(undefined3 *)&ppVar51[2].field_0x5 = 0;
      ppVar51[2].config_kind = 0;
      *(undefined3 *)&ppVar51[2].field_0x9 = 0;
      ppVar51[2].current_word_is_valid = false;
      ppVar51[2].is_stashing_alloc_bits = false;
      *(undefined2 *)&ppVar51[2].field_0xe = 0;
      ppVar51[2].payload_end = 0;
      ppVar51[2].remaining = 0;
      ppVar51[2].object_size = 0;
      ppVar51[2].page_ish = 0;
      ppVar51[2].current_offset = 0;
      ppVar51[2].end_offset = 0;
      ppVar51->page_ish = (longlong)ppVar55->alloc_bits + ((ulonglong)(uVar63 & 0xfffffc00) - 0x2c);
      if (verse_heap_allocating_black_version < 10) {
        if ((int)verse_heap_allocating_black_version != 0) {
          if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          goto LAB_140d9c5d6;
        }
LAB_140d9c4b9:
        lVar48 = 0;
        do {
          uVar63 = *(uint *)(lVar47 + lVar48 * 4);
          uVar41 = ppVar54->alloc_bits[lVar48];
          *(uint *)((longlong)ppVar51->bits + lVar48 * 4) = ~uVar41 & uVar63;
          ppVar54->alloc_bits[lVar48] = uVar41 | uVar63;
          lVar48 = lVar48 + 1;
        } while (lVar48 != 0x20);
      }
      else {
        uVar13._0_1_ = ppVar55->base;
        uVar13._1_1_ = ppVar55->is_in_use_for_allocation;
        uVar13._2_1_ = ppVar55->eligibility_notification_has_been_deferred;
        uVar13._3_1_ = ppVar55->is_committing_fully;
        uVar13._4_4_ = ppVar55->object_size;
        if (uVar13 == verse_heap_allocating_black_version) goto LAB_140d9c4b9;
        if (verse_heap_allocating_black_version <= uVar13) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
LAB_140d9c5d6:
        uVar49 = (ulonglong)((uint)((ulonglong)ppVar55 >> 7) & 0xffc) |
                 (ulonglong)ppVar55 & 0xfffffffffff80000;
        lVar48 = 0;
        do {
          uVar63 = *(uint *)(lVar47 + lVar48 * 4);
          uVar41 = ppVar54->alloc_bits[lVar48];
          uVar58 = ~uVar41;
          *(uint *)((longlong)ppVar51->bits + lVar48 * 4) = uVar63 & uVar58;
          uVar58 = uVar58 & uVar63;
          if (uVar58 != 0) {
            if (uVar58 == uVar63) {
              *(uint *)(uVar49 + lVar48 * 4) = uVar63;
            }
            else {
              do {
                uVar11 = *(uint *)(uVar49 + lVar48 * 4);
                puVar2 = (uint *)(uVar49 + lVar48 * 4);
                LOCK();
                bVar68 = uVar11 == *puVar2;
                if (bVar68) {
                  *puVar2 = uVar11 | uVar58;
                }
                UNLOCK();
              } while (!bVar68);
            }
          }
          ppVar54->alloc_bits[lVar48] = uVar41 | uVar63;
          lVar48 = lVar48 + 1;
        } while (lVar48 != 0x20);
      }
      ppVar51->current_word = ppVar51->bits[uVar64];
      ppVar51->current_word_is_valid = true;
      uVar49 = (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 8 +
                        (ulonglong)(ppVar67->data).payload * 8);
      lVar47 = uVar49 - (ppVar54->emptiness).num_non_empty_words_or_live_bytes;
      if (lVar47 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      if (lVar47 != 0) {
        uVar53 = verse_heap_live_bytes + lVar47;
        if (uVar53 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        LOCK();
        UNLOCK();
        verse_heap_live_bytes = uVar53;
        if (verse_heap_live_bytes_trigger_threshold <= uVar53) {
          (*verse_heap_live_bytes_trigger_callback)();
        }
      }
      (ppVar54->emptiness).num_non_empty_words_or_live_bytes = uVar49;
    }
    else {
      ppVar50 = (pas_thread_local_cache *)*plVar1;
      if (ppVar50 <= (pas_thread_local_cache *)&DAT_00000001) goto LAB_140d9b993;
LAB_140d9b9bf:
      pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar50,param_1);
      if (ppVar56 != (pas_segregated_view_opaque *)0x0) goto LAB_140d9b9d5;
LAB_140d9bbb3:
      ppVar42 = pas_segregated_size_directory_take_first_eligible(ppVar67);
      uVar45 = pas_compact_heap_reservation_base;
      ppVar55 = ppVar54;
      if (ppVar42 == (pas_segregated_view_opaque *)0x0) {
        ppVar42 = (pas_segregated_view_opaque *)0x0;
joined_r0x000140d9bc06:
        if (ppVar56 != (pas_segregated_view_opaque *)0x0) goto LAB_140d9bfe6;
LAB_140d9c080:
        if (ppVar42 == (pas_segregated_view_opaque *)0x0) {
          local_90.type_size = 0;
          uVar40 = 0;
          goto LAB_140d9c773;
        }
        local_110 = (PSRWLOCK)0x0;
      }
      else {
        uVar41 = (uint)ppVar42 & 7;
        if (1 < uVar41) goto LAB_140d9c841;
        puVar66 = (ulong64 *)((ulonglong)ppVar42 & 0xfffffffffffffff8);
        if (*(char *)((longlong)puVar66 + 0xb) != '\0') goto joined_r0x000140d9bc06;
        uVar49 = (ulonglong)(uint3)puVar66[1];
        if (*puVar66 == 0) {
          cVar5 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar49 * 8);
          if (cVar5 != '\x01') {
            if (cVar5 != '\x02') {
              if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                pcVar18 = (code *)invalidInstructionException();
                (*pcVar18)();
              }
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&verse_heap_config.small_segregated_config.base,pas_lock_is_not_held,
                       (pas_lock **)0x0,0);
            uVar43 = *puVar66;
            if (uVar43 != 0) goto LAB_140d9bf90;
          }
          pas_physical_memory_transaction_construct(&local_d0);
          do {
            if (*puVar66 != 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            pas_physical_memory_transaction_begin(&local_d0);
            AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            local_a0 = **(longlong **)(uVar45 + 0x18 + uVar49 * 8);
            local_90.type_size = (ulong64)&DAT_00000001;
            local_90.min_alignment = 1;
            local_90.aligned_allocator = small_segregated_page_allocate_aligned;
            local_90.aligned_allocator_arg = &local_a0;
            local_90.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
            local_90.deallocator_arg = (void *)0x0;
            local_c0.alignment = 0x4000;
            local_c0.alignment_begin = 0;
            ppVar65 = (pas_compact_expendable_memory *)0x4000;
            local_98 = &local_d0;
            pas_reserve_commit_cache_large_free_heap_try_allocate
                      (&local_b0,(pas_reserve_commit_cache_large_free_heap *)(local_a0 + 0x80),
                       0x4000,&local_c0,&local_90);
            if ((local_b0.did_succeed & 1U) == 0) {
              uVar43 = 0;
            }
            else {
              uVar43 = local_b0.begin;
              if (local_b0.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)invalidInstructionException();
                (*pcVar18)();
              }
            }
            *puVar66 = uVar43;
            ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            bVar68 = pas_physical_memory_transaction_end(&local_d0);
          } while (!bVar68);
          uVar43 = *puVar66;
          if (uVar43 == 0) {
            ppVar42 = (pas_segregated_view_opaque *)0x0;
            goto joined_r0x000140d9bc06;
          }
        }
        else {
          pRVar62 = (PSRWLOCK)(puVar66 + 2);
          AcquireSRWLockExclusive(pRVar62);
          cVar5 = *(char *)(uVar45 + 0xd + uVar49 * 8);
          local_90.type_size = (ulong64)pRVar62;
          if (cVar5 != '\x01') {
            if (cVar5 != '\x02') {
              if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                pcVar18 = (code *)invalidInstructionException();
                (*pcVar18)();
              }
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&verse_heap_config.small_segregated_config.base,pas_lock_is_not_held,
                       (pas_lock **)&local_90,1);
          }
          pas_page_base_commit_with_boundary
                    ((void *)*puVar66,&verse_heap_config.small_segregated_config.base);
          ReleaseSRWLockExclusive(pRVar62);
          uVar43 = *puVar66;
        }
LAB_140d9bf90:
        ppVar65 = (pas_compact_expendable_memory *)0x0;
        pas_segregated_page_construct
                  ((pas_segregated_page *)(uVar43 + 0x30),
                   (pas_segregated_view_opaque *)((longlong)puVar66 + 1),false,
                   &verse_heap_config.small_segregated_config);
        verse_heap_page_header_construct((verse_heap_page_header *)*puVar66);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar66 + 3));
        *(undefined1 *)((longlong)puVar66 + 0xb) = 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar66 + 3));
        if (ppVar56 == (pas_segregated_view_opaque *)0x0) goto LAB_140d9c080;
LAB_140d9bfe6:
        ppVar65 = (pas_compact_expendable_memory *)ppVar54->lock_ptr;
        if (ppVar65 == (pas_compact_expendable_memory *)0x0) {
          local_110 = (PSRWLOCK)0x0;
          if ((uVar63 & 7) < 2) goto LAB_140d9c004;
LAB_140d9c0ac:
          uVar45 = pas_compact_heap_reservation_base;
          if ((uVar63 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          uVar53 = (ulonglong)ppVar56 & 0xfffffffffffffff8;
          uVar60 = (ulonglong)
                   ((uint)*(byte *)(uVar53 + 10) * 0x80000 + (uint)*(ushort *)(uVar53 + 8) * 8);
          uVar49 = *(ulonglong *)(uVar60 + pas_compact_heap_reservation_base);
          if ((uVar49 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          if ((*(byte *)(uVar53 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          bVar6 = *(byte *)(uVar53 + 0xd);
          uVar9 = *(ushort *)(uVar53 + 0xb);
          ppVar55 = *(pas_segregated_page **)((uVar49 & 0xfffffffffffffffe) + 8);
          if (((PSRWLOCK)ppVar54->lock_ptr != (PSRWLOCK)0x0) &&
             (BVar39 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar54->lock_ptr), BVar39 != '\0')) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          uVar60 = uVar60 + uVar45;
          if (*(int *)(uVar60 + 0x24) == 1) {
            bVar68 = (ppVar54->emptiness).num_non_empty_words_or_live_bytes == 0;
          }
          else {
            bVar68 = false;
          }
          bVar7 = *(byte *)(uVar53 + 0x11);
          *(byte *)(uVar53 + 0x11) = bVar7 & 0xfc;
          iVar10 = *(int *)(uVar60 + 0x24);
          if ((bVar7 & 2) == 0) {
            if (iVar10 == 0) {
LAB_140d9c74e:
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            *(int *)(uVar60 + 0x24) = iVar10 + -1;
          }
          else {
            if (iVar10 == 0) goto LAB_140d9c74e;
            *(int *)(uVar60 + 0x24) = iVar10 + -1;
            if ((*(byte *)(uVar53 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            pas_segregated_directory_view_did_become_eligible
                      ((pas_segregated_directory *)
                       (((uint)bVar6 * 0x80000 + (uint)uVar9 * 8) + uVar45),
                       (pas_segregated_view_opaque *)(uVar53 | 4));
          }
          if (bVar68) {
            if (*(int *)(uVar60 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            pas_segregated_directory_view_did_become_empty
                      ((pas_segregated_directory *)ppVar55,
                       (pas_segregated_view_opaque *)(uVar60 | 2));
          }
        }
        else {
          local_110 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar54,(pas_lock *)0x0,(pas_lock *)&ppVar65->header);
          if (1 < (uVar63 & 7)) goto LAB_140d9c0ac;
LAB_140d9c004:
          bVar68 = ppVar54->eligibility_notification_has_been_deferred;
          if (bVar68 == true) {
            ppVar54->eligibility_notification_has_been_deferred = false;
          }
          uVar49 = (ulonglong)ppVar56 & 0xfffffffffffffff8;
          ppVar59 = (pas_segregated_directory *)
                    (((uint)*(byte *)(uVar49 + 10) * 0x80000 + (uint)*(ushort *)(uVar49 + 8) * 8) +
                    pas_compact_heap_reservation_base);
          uVar63 = *(uint *)(uVar49 + 0xc);
          uVar45 = (ppVar54->emptiness).num_non_empty_words_or_live_bytes;
          ppVar54->is_in_use_for_allocation = false;
          if (bVar68 != false) {
            pas_segregated_directory_view_did_become_eligible_at_index(ppVar59,(ulonglong)uVar63);
          }
          if (uVar45 == 0) {
            pas_segregated_directory_view_did_become_empty_at_index(ppVar59,(ulonglong)uVar63);
          }
        }
        if (ppVar42 == (pas_segregated_view_opaque *)0x0) {
          if (local_110 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(local_110);
          }
          local_90.type_size = 0;
          uVar40 = 0;
          goto LAB_140d9c773;
        }
      }
      if (((ulonglong)ppVar42 & 6) != 0) {
        if (((uint)ppVar42 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        ppVar52 = (pas_segregated_partial_view *)((ulonglong)ppVar42 & 0xfffffffffffffff8);
        uVar19 = *(uint3 *)(ppVar52->shared_view).payload;
        ppVar57 = (pas_segregated_shared_view *)
                  ((ulonglong)uVar19 * 8 + pas_compact_heap_reservation_base);
        if (ppVar57 != (pas_segregated_shared_view *)0x0 && uVar19 != 0) {
          ppVar17 = ppVar57->shared_handle_or_page_boundary;
          if (((ulonglong)ppVar17 & 1) == 0) {
            pRVar62 = *(PSRWLOCK *)(ppVar17 + 0x38);
            ppVar34 = ppVar17;
          }
          else {
            pRVar62 = *(PSRWLOCK *)
                       (*(pas_shared_handle_or_page_boundary_opaque **)
                         ((ulonglong)ppVar17 & 0xfffffffffffffffe) + 0x38);
            ppVar34 = *(pas_shared_handle_or_page_boundary_opaque **)
                       ((ulonglong)ppVar17 & 0xfffffffffffffffe);
          }
          if (local_110 != pRVar62) {
            pas_segregated_page_switch_lock_slow
                      ((pas_segregated_page *)(ppVar34 + 0x30),(pas_lock *)local_110,
                       (pas_lock *)pRVar62);
            ppVar17 = ppVar57->shared_handle_or_page_boundary;
          }
          if (((ulonglong)ppVar17 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          pas_segregated_partial_view_set_is_in_use_for_allocation
                    (ppVar52,ppVar57,
                     (pas_segregated_shared_handle *)((ulonglong)ppVar17 & 0xfffffffffffffffe));
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        if (local_110 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_110);
          verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                    ();
          ppVar54 = ppVar55;
LAB_140d9c8d9:
          pas_segregated_page_switch_lock_slow(ppVar54,(pas_lock *)0x0,(pas_lock *)&ppVar65->header)
          ;
          ppVar52->eligibility_notification_has_been_deferred = false;
          ppVar52->eligibility_has_been_noted = false;
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        uVar41 = verse_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                           ();
LAB_140d9c841:
        if (uVar41 == 4) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      puVar61 = (undefined8 *)((ulonglong)ppVar42 & 0xfffffffffffffff8);
      ppVar55 = (pas_segregated_page *)*puVar61;
      ppVar54 = ppVar55 + 1;
      if (local_110 != (PSRWLOCK)ppVar55[1].lock_ptr) {
        local_110 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow
                              (ppVar54,(pas_lock *)local_110,ppVar55[1].lock_ptr);
      }
      ppVar55[1].is_in_use_for_allocation = true;
      ppVar55[1].owner = (pas_segregated_view_opaque *)((ulonglong)ppVar42 | 1);
      if (ppVar55[1].emptiness.num_non_empty_words_or_live_bytes != 0) goto LAB_140d9c22d;
LAB_140d9ba28:
      if ((verse_heap_current_iteration_state.version != 0) &&
         (uVar49._0_1_ = ppVar55->base, uVar49._1_1_ = ppVar55->is_in_use_for_allocation,
         uVar49._2_1_ = ppVar55->eligibility_notification_has_been_deferred,
         uVar49._3_1_ = ppVar55->is_committing_fully, uVar49._4_4_ = ppVar55->object_size,
         uVar49 != verse_heap_current_iteration_state.version)) {
        uVar40 = verse_heap_current_iteration_state.version._1_1_;
        uVar35 = verse_heap_current_iteration_state.version._2_1_;
        uVar36 = verse_heap_current_iteration_state.version._3_1_;
        uVar37 = verse_heap_current_iteration_state.version._4_4_;
        ppVar55->base = (pas_page_base)(undefined1)verse_heap_current_iteration_state.version;
        ppVar55->is_in_use_for_allocation = (bool)uVar40;
        ppVar55->eligibility_notification_has_been_deferred = (bool)uVar35;
        ppVar55->is_committing_fully = (bool)uVar36;
        ppVar55->object_size = uVar37;
      }
      if (ppVar54[-1].lock_ptr != (pas_lock *)0x0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      if ((ulonglong)ppVar55 >> 0x30 != 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      pvVar15 = verse_heap_first_level_chunk_map[(ulonglong)ppVar55 >> 0x22];
      uVar41 = (uint)((ulonglong)ppVar55 >> 0x13) & 0x7fff;
      uVar63 = pvVar15[uVar41].encoded_value[0];
      while ((uVar63 & 1) == 0) {
        if (uVar63 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        LOCK();
        if (pvVar15[uVar41].encoded_value[0] == 0) {
          pvVar15[uVar41].encoded_value[0] = 1;
        }
        UNLOCK();
        uVar63 = pvVar15[uVar41].encoded_value[0];
      }
      uVar63 = (uint)ppVar55 & 0x7ffff;
      if (uVar63 < 0x4000) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      do {
        uVar64 = pvVar15[uVar41].encoded_value[0];
        uVar58 = uVar64 | 1 << (sbyte)(uVar63 >> 0xe);
        if (uVar64 == uVar58) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        LOCK();
        bVar68 = uVar64 == pvVar15[uVar41].encoded_value[0];
        if (bVar68) {
          pvVar15[uVar41].encoded_value[0] = uVar58;
        }
        uVar45 = pas_compact_heap_reservation_base;
        UNLOCK();
      } while (!bVar68);
      uVar53 = (ulonglong)(ppVar67->data).payload;
      iVar10 = *(int *)(pas_compact_heap_reservation_base + uVar53 * 8);
      uVar63 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar53 * 8);
      uVar49 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar53 * 8);
      (ppVar54->emptiness).num_non_empty_words_or_live_bytes = uVar49;
      if (uVar49 != 0) {
        uVar49 = verse_heap_live_bytes + uVar49;
        if (uVar49 <= verse_heap_live_bytes) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)invalidInstructionException();
          (*pcVar18)();
        }
        LOCK();
        UNLOCK();
        verse_heap_live_bytes = uVar49;
        if (verse_heap_live_bytes_trigger_threshold <= uVar49) {
          (*verse_heap_live_bytes_trigger_callback)();
        }
      }
      param_1->payload_end = (longlong)ppVar55->alloc_bits + ((ulonglong)uVar63 - 0x2c);
      param_1->remaining = uVar63 - iVar10;
      param_1->current_offset = 0;
      param_1->end_offset = 0;
      param_1->current_word = 0;
      param_1->page_ish = (ulong64)ppVar55;
      uVar49 = (ulonglong)*(uint *)(uVar45 + 0xc + uVar53 * 8);
      if (uVar49 < 8) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      puVar61 = (undefined8 *)(uVar49 + pas_compact_heap_reservation_base);
      if (verse_heap_allocating_black_version < 10) {
        if ((int)verse_heap_allocating_black_version != 0) {
          if ((int)verse_heap_allocating_black_version != 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
LAB_140d9bcce:
          uVar49 = (ulonglong)ppVar55 & 0xfffffffffff80000;
          uVar53 = (ulonglong)((uint)ppVar55 >> 7 & 0xffc);
          uVar20 = puVar61[0xf];
          puVar4 = (undefined8 *)(uVar49 + 0x70 + uVar53);
          *puVar4 = puVar61[0xe];
          puVar4[1] = uVar20;
          uVar20 = puVar61[0xd];
          puVar4 = (undefined8 *)(uVar49 + 0x60 + uVar53);
          *puVar4 = puVar61[0xc];
          puVar4[1] = uVar20;
          uVar20 = puVar61[0xb];
          puVar4 = (undefined8 *)(uVar49 + 0x50 + uVar53);
          *puVar4 = puVar61[10];
          puVar4[1] = uVar20;
          uVar20 = puVar61[9];
          puVar4 = (undefined8 *)(uVar49 + 0x40 + uVar53);
          *puVar4 = puVar61[8];
          puVar4[1] = uVar20;
          uVar20 = *puVar61;
          uVar21 = puVar61[1];
          uVar22 = puVar61[2];
          uVar23 = puVar61[3];
          uVar24 = puVar61[4];
          uVar25 = puVar61[5];
          uVar26 = puVar61[7];
          puVar4 = (undefined8 *)(uVar49 + 0x30 + uVar53);
          *puVar4 = puVar61[6];
          puVar4[1] = uVar26;
          puVar4 = (undefined8 *)(uVar49 + 0x20 + uVar53);
          *puVar4 = uVar24;
          puVar4[1] = uVar25;
          puVar4 = (undefined8 *)(uVar49 + 0x10 + uVar53);
          *puVar4 = uVar22;
          puVar4[1] = uVar23;
          *(undefined8 *)(uVar49 + uVar53) = uVar20;
          ((undefined8 *)(uVar49 + uVar53))[1] = uVar21;
        }
      }
      else {
        uVar53._0_1_ = ppVar55->base;
        uVar53._1_1_ = ppVar55->is_in_use_for_allocation;
        uVar53._2_1_ = ppVar55->eligibility_notification_has_been_deferred;
        uVar53._3_1_ = ppVar55->is_committing_fully;
        uVar53._4_4_ = ppVar55->object_size;
        if (uVar53 != verse_heap_allocating_black_version) {
          if (verse_heap_allocating_black_version <= uVar53) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          goto LAB_140d9bcce;
        }
      }
      uVar20 = puVar61[0xf];
      *(undefined8 *)((longlong)&ppVar54[3].lock_ptr + 4) = puVar61[0xe];
      *(undefined8 *)((longlong)&ppVar54[3].emptiness.use_epoch + 4) = uVar20;
      uVar20 = puVar61[0xd];
      *(undefined8 *)ppVar54[2].alloc_bits = puVar61[0xc];
      *(undefined8 *)&ppVar54[3].object_size = uVar20;
      uVar20 = puVar61[0xb];
      *(undefined8 *)((longlong)&ppVar54[2].emptiness.num_non_empty_words_or_live_bytes + 4) =
           puVar61[10];
      *(undefined8 *)((longlong)&ppVar54[2].owner + 4) = uVar20;
      uVar20 = puVar61[9];
      *(undefined8 *)((longlong)&ppVar54[2].lock_ptr + 4) = puVar61[8];
      *(undefined8 *)((longlong)&ppVar54[2].emptiness.use_epoch + 4) = uVar20;
      uVar20 = *puVar61;
      uVar21 = puVar61[1];
      uVar22 = puVar61[2];
      uVar23 = puVar61[3];
      uVar24 = puVar61[4];
      uVar25 = puVar61[5];
      uVar26 = puVar61[7];
      *(undefined8 *)ppVar54[1].alloc_bits = puVar61[6];
      *(undefined8 *)&ppVar54[2].object_size = uVar26;
      *(undefined8 *)((longlong)&ppVar54[1].emptiness.num_non_empty_words_or_live_bytes + 4) =
           uVar24;
      *(undefined8 *)((longlong)&ppVar54[1].owner + 4) = uVar25;
      *(undefined8 *)((longlong)&ppVar54[1].lock_ptr + 4) = uVar22;
      *(undefined8 *)((longlong)&ppVar54[1].emptiness.use_epoch + 4) = uVar23;
      *(undefined8 *)ppVar54->alloc_bits = uVar20;
      *(undefined8 *)&ppVar54[1].object_size = uVar21;
    }
    if (local_110 == (PSRWLOCK)0x0) {
      uVar63 = param_1->remaining;
    }
    else {
      ReleaseSRWLockExclusive(local_110);
      uVar63 = param_1->remaining;
    }
    if ((ulonglong)uVar63 != 0) {
      param_1->remaining = uVar63 - param_1->object_size;
      local_90.type_size = param_1->payload_end - (ulonglong)uVar63;
      goto LAB_140d9c771;
    }
    uVar45 = param_1->page_ish;
    uVar43 = param_1->current_word;
    if (uVar43 != 0) {
LAB_140d9c75e:
      uVar49 = 0;
      for (uVar53 = uVar43; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x8000000000000000) {
        uVar49 = uVar49 + 1;
      }
      param_1->current_word = uVar43 & ~(1L << (uVar49 & 0x3f));
      local_90.type_size = (uint)((int)uVar49 << 4) + uVar45;
LAB_140d9c771:
      uVar40 = 1;
LAB_140d9c773:
      (param_1->scavenger_data).is_in_use = false;
      local_90.min_alignment = CONCAT71(local_90.min_alignment._1_7_,uVar40);
      local_90.min_alignment = local_90.min_alignment & 0xffffffff;
      (*param_3)(__return_storage_ptr__,(pas_allocation_result *)&local_90);
      if ((local_60 ^ (ulonglong)auStackY_148) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
      pcVar18 = (code *)swi(3);
      ppVar46 = (pas_allocation_result *)(*pcVar18)();
      return ppVar46;
    }
    param_2 = (pas_allocator_counts *)0x0;
    if (param_1->config_kind == 10) {
      uVar63 = param_1->end_offset;
      uVar41 = param_1->current_offset;
      uVar49 = (ulonglong)uVar41;
      if (uVar41 < uVar63) {
        param_1->bits[uVar49] = 0;
        lVar47 = 0;
        param_2 = (pas_allocator_counts *)(param_1 + 1);
        while ((uVar63 - 1) - uVar49 != lVar47) {
          uVar45 = uVar45 + 0x400;
          uVar43 = *(ulonglong *)((longlong)(param_1 + 1) + lVar47 * 8 + uVar49 * 8);
          lVar47 = lVar47 + 1;
          param_2 = (pas_allocator_counts *)0x0;
          if (uVar43 != 0) {
            param_1->current_offset = uVar41 + (int)lVar47;
            param_1->page_ish = uVar45;
            goto LAB_140d9c75e;
          }
        }
        param_1->current_offset = uVar63;
      }
    }
  } while( true );
}

// verse_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits @ 140d9c900

pas_allocation_result * __cdecl
verse_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  
  uVar5 = (ulonglong)param_1->current_offset;
  uVar1 = param_1->end_offset;
  if (uVar1 <= param_1->current_offset) {
LAB_140d9c964:
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    __return_storage_ptr__->begin = 0;
    return __return_storage_ptr__;
  }
  uVar6 = param_1->bits[uVar5];
  uVar4 = param_1->page_ish;
  if (uVar6 == 0) {
    do {
      uVar2 = uVar5 + 1;
      if (uVar1 <= uVar2) {
        param_1->current_offset = uVar1;
        goto LAB_140d9c964;
      }
      uVar4 = uVar4 + 0x8000;
      uVar6 = param_1[1].bits[uVar5 - 8];
      uVar5 = uVar2;
    } while (uVar6 == 0);
    param_1->current_offset = (uint)uVar2;
    param_1->page_ish = uVar4;
    uVar5 = uVar2 & 0xffffffff;
  }
  uVar2 = 0;
  for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    uVar2 = uVar2 + 1;
  }
  param_1->bits[uVar5] = uVar6 & ~(1L << (uVar2 & 0x3f));
  __return_storage_ptr__->did_succeed = true;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  __return_storage_ptr__->begin = (uint)((int)uVar2 << 9) + uVar4;
  return __return_storage_ptr__;
}

// verse_heap_config_specialized_local_allocator_try_allocate_inline_cases @ 140d9c990

pas_allocation_result * __cdecl
verse_heap_config_specialized_local_allocator_try_allocate_inline_cases
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  
  uVar1 = param_1->remaining;
  if ((ulonglong)uVar1 == 0) {
    uVar6 = param_1->page_ish;
    uVar8 = param_1->current_word;
    if (uVar8 == 0) {
      if (param_1->config_kind == 10) {
        uVar1 = param_1->end_offset;
        uVar2 = param_1->current_offset;
        uVar7 = (ulonglong)uVar2;
        if (uVar2 < uVar1) {
          param_1->bits[uVar7] = 0;
          lVar5 = 0;
          do {
            if ((uVar1 - 1) - uVar7 == lVar5) {
              param_1->current_offset = uVar1;
              goto LAB_140d9ca3d;
            }
            uVar6 = uVar6 + 0x400;
            uVar8 = param_1[1].bits[uVar7 + lVar5 + -8];
            lVar5 = lVar5 + 1;
          } while (uVar8 == 0);
          param_1->current_offset = uVar2 + (int)lVar5;
          param_1->page_ish = uVar6;
          goto LAB_140d9c9c1;
        }
      }
LAB_140d9ca3d:
      bVar4 = false;
      uVar6 = 0;
      goto LAB_140d9c9d7;
    }
LAB_140d9c9c1:
    uVar7 = 0;
    for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    param_1->current_word = uVar8 & ~(1L << (uVar7 & 0x3f));
    uVar6 = (uint)((int)uVar7 << 4) + uVar6;
  }
  else {
    param_1->remaining = uVar1 - param_1->object_size;
    uVar6 = param_1->payload_end - (ulonglong)uVar1;
  }
  bVar4 = true;
LAB_140d9c9d7:
  __return_storage_ptr__->did_succeed = bVar4;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  __return_storage_ptr__->begin = uVar6;
  return __return_storage_ptr__;
}

// verse_heap_config_specialized_local_allocator_try_allocate_slow @ 140d9ca50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
verse_heap_config_specialized_local_allocator_try_allocate_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          ulong64 param_2,ulong64 param_3,pas_allocator_counts *param_4,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_5)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  pas_allocation_result *ppVar5;
  undefined1 auStack_a8 [32];
  pas_allocation_result *local_88;
  pas_allocation_result local_80;
  pas_allocation_result local_70;
  pas_allocation_result local_60;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((param_1->scavenger_data).encoded_kind_and_location & 0x7f) == 2) {
    cVar1 = (param_1->scavenger_data).is_in_use;
  }
  else {
    pas_local_allocator_scavenger_data_commit_if_necessary_slow
              (&param_1->scavenger_data,
               pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
               ,pas_local_allocator_allocator_kind);
    cVar1 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar1 != '\x01') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_88 = __return_storage_ptr__;
  do {
    iVar4 = (int)(char)param_1->config_kind;
    if (iVar4 == 0xb) {
      verse_small_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
                (&local_70,param_1);
      ppVar5 = &local_70;
      bVar3 = local_70.did_succeed;
joined_r0x000140d9cae5:
      if (bVar3 != 0) {
        local_60.begin = ppVar5->begin;
        local_60.zero_mode = pas_zero_mode_may_have_non_zero;
        local_60.did_succeed = true;
        goto LAB_140d9cbb1;
      }
      iVar4 = (int)(char)param_1->config_kind;
    }
    else {
      if (iVar4 == 0xc) {
        verse_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits
                  (&local_60,param_1);
        ppVar5 = &local_60;
        bVar3 = local_60.did_succeed;
        goto joined_r0x000140d9cae5;
      }
      if (iVar4 == 0xd) {
        verse_medium_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
                  (&local_80,param_1);
        ppVar5 = &local_80;
        bVar3 = local_80.did_succeed;
        goto joined_r0x000140d9cae5;
      }
    }
    if (0xb < iVar4 - 2U) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)pas_segregated_page_config_kind_for_config_table
              [*(longlong *)(&DAT_1531ecfd8 + (ulonglong)(iVar4 - 2U) * 8)][2].heap_config_ptr)();
    if (param_1->page_ish == 0) {
      local_60.begin = 0;
      local_60.did_succeed = false;
      local_60.zero_mode = pas_zero_mode_may_have_non_zero;
      goto LAB_140d9cbb1;
    }
    verse_heap_config_specialized_local_allocator_try_allocate_inline_cases(&local_60,param_1);
    local_4c = local_60._9_2_;
    local_4a = local_60._11_1_;
  } while ((local_60.did_succeed & 1U) == 0);
  local_4e = local_60._11_1_;
  local_50 = local_60._9_2_;
LAB_140d9cbb1:
  ppVar5 = local_88;
  (param_1->scavenger_data).is_in_use = false;
  local_60._9_2_ = local_50;
  local_60._11_1_ = local_4e;
  (*param_5)(local_88,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    ppVar5 = (pas_allocation_result *)(*pcVar2)();
    return ppVar5;
  }
  return ppVar5;
}

// verse_heap_config_specialized_try_allocate_common_impl_slow @ 140d9cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
verse_heap_config_specialized_try_allocate_common_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,
          pas_heap_ref_kind param_2,ulong64 param_3,ulong64 param_4,pas_heap_runtime_config *param_5
          ,pas_allocator_counts *param_6,pas_size_lookup_mode param_7)

{
  uint uVar1;
  uint uVar2;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar3;
  pas_segregated_view_opaque *ppVar4;
  code *pcVar5;
  bool bVar6;
  pas_baseline_allocator *SRWLock;
  pas_segregated_size_directory *ppVar7;
  pas_allocation_result *ppVar8;
  pas_heap *ppVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  pas_local_allocator *ppVar12;
  ulonglong uVar13;
  pas_segregated_size_directory *ppVar14;
  undefined4 in_register_00000084;
  pas_heap_ref *ppVar15;
  ulong64 uVar16;
  longlong lVar17;
  pas_heap_ref *ppVar18;
  pas_heap_ref *ppVar19;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [9];
  undefined1 auStack_5f [23];
  ulonglong local_48;
  
  ppVar15 = (pas_heap_ref *)CONCAT44(in_register_00000084,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  __return_storage_ptr__->begin = 0;
  __return_storage_ptr__->did_succeed = false;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  ppVar9 = param_1->heap;
  ppVar19 = (pas_heap_ref *)param_1->type;
  if ((pas_heap_ref *)param_1->type < param_4) {
    ppVar19 = (pas_heap_ref *)param_4;
  }
  if (ppVar9 == (pas_heap *)0x0) {
    ppVar9 = pas_ensure_heap_slow(param_1,param_2,&verse_heap_config,param_5);
    ppVar15 = (pas_heap_ref *)(ulonglong)param_2;
  }
  ppVar18 = (pas_heap_ref *)0x0;
  if ((int)ppVar15 == 1) {
    ppVar18 = param_1 + 1;
  }
  uVar11 = param_3 + 0xf >> 4;
  if (((((((ppVar9->segregated_heap).small_index_upper_bound <= uVar11) ||
         (ppVar3 = (ppVar9->segregated_heap).index_to_small_size_directory,
         ppVar3 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
        (uVar13 = (ulonglong)ppVar3[uVar11].payload,
        ppVar14 = (pas_segregated_size_directory *)(uVar13 * 8 + pas_compact_heap_reservation_base),
        ppVar14 == (pas_segregated_size_directory *)0x0 || uVar13 == 0)) &&
       (ppVar15 = ppVar18,
       ppVar14 = pas_segregated_heap_size_directory_for_index_slow
                           (&ppVar9->segregated_heap,uVar11,(uint *)ppVar18,&verse_heap_config),
       ppVar14 == (pas_segregated_size_directory *)0x0)) ||
      ((pas_heap_ref *)(1L << ppVar14->alignment_shift) < ppVar19)) &&
     (ppVar15 = ppVar19,
     ppVar14 = pas_heap_ensure_size_directory_for_size_slow
                         (ppVar9,param_3,(ulong64)ppVar19,param_7,&verse_heap_config,(uint *)ppVar18
                         ), ppVar14 == (pas_segregated_size_directory *)0x0)) {
    pas_physical_memory_transaction_construct((pas_physical_memory_transaction *)local_68);
    do {
      if (__return_storage_ptr__->did_succeed == true) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pas_physical_memory_transaction_begin((pas_physical_memory_transaction *)local_68);
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      pas_large_heap_try_allocate
                (__return_storage_ptr__,&ppVar9->large_heap,param_3,(ulong64)ppVar19,
                 &verse_heap_config,(pas_physical_memory_transaction *)local_68);
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      bVar6 = pas_physical_memory_transaction_end((pas_physical_memory_transaction *)local_68);
    } while (!bVar6);
    pas_scavenger_notify_eligibility_if_needed();
    goto LAB_140d9cf8c;
  }
  if (ppVar14->allocator_index == 0) {
LAB_140d9ce8a:
    uVar1 = ppVar14->encoded_stuff;
    param_3 = (ulong64)ppVar15;
    while (uVar1 = uVar1 & 0x7f, uVar1 < 0x20) {
      SRWLock = pas_baseline_allocator_table + uVar1;
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if ((ppVar14->encoded_stuff & 0x7f) == uVar1) goto LAB_140d9ceec;
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      uVar1 = ppVar14->encoded_stuff;
    }
    SRWLock = pas_segregated_size_directory_select_allocator_slow(ppVar14);
LAB_140d9ceec:
    ppVar4 = (SRWLock->u).allocator.view;
    if (((uint)ppVar4 & 7) == 5) {
      ppVar7 = (pas_segregated_size_directory *)((ulonglong)ppVar4 & 0xfffffffffffffff8);
    }
    else {
      ppVar7 = pas_segregated_view_get_size_directory_slow(ppVar4);
    }
    if (ppVar7 != ppVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    ppVar12 = (pas_local_allocator *)&SRWLock->u;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar11 = *(ulonglong *)(lVar17 + 0x9c08);
    if (uVar11 < 2) {
      ppVar15 = ThreadLocalStoragePointer;
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
        uVar11 = *(ulonglong *)(lVar17 + 0x9c08);
      }
      if (uVar11 == 1) goto LAB_140d9ce8a;
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              ((pas_baseline_allocator_result *)local_68,ppVar14,param_3,param_7,&verse_heap_config,
               (uint *)ppVar18);
    ppVar12 = (pas_local_allocator *)
              CONCAT44(auStack_5f._3_4_,
                       CONCAT13(auStack_5f[2],CONCAT21(auStack_5f._0_2_,local_68[8])));
    SRWLock = (pas_baseline_allocator *)auStack_5f._7_8_;
  }
  (ppVar12->scavenger_data).is_in_use = true;
  uVar1 = ppVar12->remaining;
  if ((ulonglong)uVar1 == 0) {
    uVar10 = ppVar12->page_ish;
    uVar16 = ppVar12->current_word;
    if (uVar16 != 0) {
LAB_140d9cf4b:
      uVar11 = 0;
      for (uVar13 = uVar16; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
        uVar11 = uVar11 + 1;
      }
      ppVar12->current_word = uVar16 & ~(1L << (uVar11 & 0x3f));
      uVar10 = (uint)((int)uVar11 << 4) + uVar10;
      goto LAB_140d9cf5e;
    }
    if (ppVar12->config_kind == 10) {
      uVar1 = ppVar12->end_offset;
      uVar2 = ppVar12->current_offset;
      uVar11 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        ppVar12->bits[uVar11] = 0;
        lVar17 = 0;
        do {
          if ((uVar1 - 1) - uVar11 == lVar17) {
            ppVar12->current_offset = uVar1;
            goto LAB_140d9d074;
          }
          uVar10 = uVar10 + 0x400;
          uVar16 = ppVar12[1].bits[uVar11 + lVar17 + -8];
          lVar17 = lVar17 + 1;
        } while (uVar16 == 0);
        ppVar12->current_offset = uVar2 + (int)lVar17;
        ppVar12->page_ish = uVar10;
        goto LAB_140d9cf4b;
      }
LAB_140d9d074:
      verse_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_68,ppVar12,(pas_allocator_counts *)(ulonglong)uVar1,
                 pas_allocation_result_identity);
    }
    else {
      verse_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_68,ppVar12,param_3,0,param_6,
                 pas_allocation_result_identity);
    }
    uVar10 = CONCAT53(local_68._3_5_,CONCAT12(local_68[2],local_68._0_2_));
    local_68[2] = auStack_5f[2];
    local_68._0_2_ = auStack_5f._0_2_;
  }
  else {
    ppVar12->remaining = uVar1 - ppVar12->object_size;
    uVar10 = ppVar12->payload_end - (ulonglong)uVar1;
LAB_140d9cf5e:
    (ppVar12->scavenger_data).is_in_use = false;
    auStack_5f._3_4_ = pas_zero_mode_may_have_non_zero;
    local_68[8] = true;
  }
  __return_storage_ptr__->begin = uVar10;
  __return_storage_ptr__->did_succeed = (bool)local_68[8];
  __return_storage_ptr__->field_0xb = local_68[2];
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_68._0_2_;
  __return_storage_ptr__->zero_mode = auStack_5f._3_4_;
  if (SRWLock != (pas_baseline_allocator *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
LAB_140d9cf8c:
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar5 = (code *)swi(3);
  ppVar8 = (pas_allocation_result *)(*pcVar5)();
  return ppVar8;
}

// small_segregated_page_allocate_aligned @ 140d9d0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
small_segregated_page_allocate_aligned
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStackY_58 [32];
  pas_allocation_result local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (param_1 != 0x4000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment != 0x4000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment_begin != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  verse_heap_runtime_config_allocate_chunks
            (&local_28,*(verse_heap_runtime_config **)param_3,0x80000,
             *(pas_physical_memory_transaction **)((longlong)param_3 + 8),
             pas_primordial_page_is_committed);
  if ((local_28.did_succeed & 1U) == 0) {
    __return_storage_ptr__->right_padding = (void *)0x0;
    __return_storage_ptr__->right_padding_size = 0;
    __return_storage_ptr__->left_padding = (void *)0x0;
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->result = (void *)0x0;
    __return_storage_ptr__->result_size = 0;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_18 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  else {
    if (local_28.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    verse_heap_mark_bits_page_commit_controller_create_not_large(local_28.begin);
    __return_storage_ptr__->result = (void *)(local_28.begin + 0x4000);
    __return_storage_ptr__->result_size = 0x4000;
    __return_storage_ptr__->left_padding = (void *)(local_28.begin + 0x4000);
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->right_padding = (void *)(local_28.begin + 0x8000);
    __return_storage_ptr__->right_padding_size = 0x78000;
    __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
    if ((local_18 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_allocation_result_identity @ 140d9d1e0

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

