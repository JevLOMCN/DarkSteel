// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 12

// pas_large_heap_construct @ 140d835e0

void __cdecl pas_large_heap_construct(pas_large_heap *param_1)

{
  pas_cartesian_tree *ppVar1;
  
  ppVar1 = &(param_1->free_heap).tree;
  (ppVar1->minimum).payload[1] = '\0';
  (ppVar1->minimum).payload[2] = '\0';
  (param_1->free_heap).tree.root = (uchar  [3])0x0;
  (param_1->free_heap).tree.minimum.payload[0] = '\0';
  (param_1->free_heap).num_mapped_bytes = 0;
  return;
}

// pas_large_heap_try_allocate @ 140d835f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_large_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,pas_large_heap *param_1,ulong64 param_2,
          ulong64 param_3,pas_heap_config *param_4,pas_physical_memory_transaction *param_5)

{
  ulonglong uVar1;
  pas_heap_type *ppVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  ulonglong uVar6;
  pas_allocation_result *ppVar7;
  ulonglong uVar8;
  undefined1 auStackY_f8 [32];
  pas_range local_c8;
  pas_alignment local_b8;
  pas_allocation_result local_a8;
  _func___cdecl_pas_aligned_allocation_result_ulong64_pas_alignment_pas_large_heap_ptr_pas_heap_config_ptr
  *local_98;
  pas_large_heap *local_90;
  pas_heap_config *local_88;
  pas_large_free_heap_config local_80;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppVar2 = *(pas_heap_type **)&param_1[1].free_heap;
  if (param_2 == 0) {
    param_2 = (*param_4->get_type_size)(ppVar2);
  }
  uVar6 = (*param_4->get_type_alignment)(ppVar2);
  if (uVar6 < param_3) {
    uVar6 = param_3;
  }
  if (uVar6 <= param_4->large_alignment) {
    uVar6 = param_4->large_alignment;
  }
  uVar1 = uVar6 - 1;
  if ((uVar6 ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar8 = -uVar6 & (uVar6 + param_2) - 1;
  local_98 = param_4->aligned_allocator;
  local_88 = param_4;
  local_90 = param_1;
  local_80.type_size = (*param_4->get_type_size)(*(pas_heap_type **)&param_1[1].free_heap);
  local_80.min_alignment = param_4->large_alignment;
  local_80.aligned_allocator = aligned_allocator;
  local_80.aligned_allocator_arg = &local_98;
  local_80.deallocator = param_4->deallocator;
  local_b8.alignment_begin = 0;
  local_b8.alignment = uVar6;
  local_80.deallocator_arg = param_1;
  pas_fast_large_free_heap_try_allocate(&local_a8,&param_1->free_heap,uVar8,&local_b8,&local_80);
  local_4c = local_a8._9_2_;
  local_4a = local_a8._11_1_;
  if ((local_a8.did_succeed & 1U) == 0) {
LAB_140d83839:
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_48 ^ (ulonglong)auStackY_f8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_4->aligned_allocator_talks_to_sharing_pool == true) {
      if (CARRY8(local_a8.begin,uVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_c8.begin = local_a8.begin;
      local_c8.end = local_a8.begin + uVar8;
      bVar5 = pas_large_sharing_pool_allocate_and_commit
                        (&local_c8,param_5,
                         pas_physical_memory_is_locked_by_virtual_range_common_lock,
                         param_4->mmap_capability);
      if (!bVar5) {
        pas_fast_large_free_heap_deallocate
                  (&param_1->free_heap,local_a8.begin,local_a8.begin + uVar8,local_a8.zero_mode,
                   &local_80);
        goto LAB_140d83839;
      }
    }
    if ((local_a8.begin & uVar1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    __return_storage_ptr__->field_0xb = local_4a;
    *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_4c;
    __return_storage_ptr__->begin = local_a8.begin;
    __return_storage_ptr__->did_succeed = local_a8.did_succeed;
    __return_storage_ptr__->zero_mode = local_a8.zero_mode;
    local_80.min_alignment = uVar8 + local_a8.begin;
    local_80.type_size = local_a8.begin;
    local_80.aligned_allocator =
         (_func___cdecl_pas_aligned_allocation_result_ulong64_pas_alignment_void_ptr *)param_1;
    pas_large_map_add((pas_large_map_entry *)&local_80);
    if ((local_48 ^ (ulonglong)auStackY_f8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  pcVar3 = (code *)swi(3);
  ppVar7 = (pas_allocation_result *)(*pcVar3)();
  return ppVar7;
}

// pas_large_heap_try_deallocate @ 140d83890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_large_heap_try_deallocate(ulong64 param_1,pas_heap_config *param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  _func___cdecl_pas_aligned_allocation_result_ulong64_pas_alignment_void_ptr *p_Var4;
  BOOLEAN BVar5;
  undefined1 uVar6;
  undefined1 auStackY_98 [32];
  pas_range local_70;
  pas_large_free_heap_config local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_large_map_take((pas_large_map_entry *)&local_60,param_1);
  p_Var4 = local_60.aligned_allocator;
  uVar3 = local_60.min_alignment;
  uVar2 = local_60.type_size;
  if (local_60.type_size != 0) {
    if (pas_heap_config_kind_for_config_table
        [(longlong)
         ((ulonglong)
          *(uint *)((((pas_fast_large_free_heap *)((longlong)local_60.aligned_allocator + 0x20))->
                    tree).minimum.payload + 1) << 0x3a) >> 0x3a] != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2->aligned_allocator_talks_to_sharing_pool == true) {
      if (local_60.min_alignment < local_60.type_size) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_70.begin = local_60.type_size;
      local_70.end = local_60.min_alignment;
      pas_large_sharing_pool_free
                (&local_70,pas_physical_memory_is_locked_by_virtual_range_common_lock,
                 param_2->mmap_capability);
    }
    local_60.type_size =
         (*param_2->get_type_size)(*(pas_heap_type **)((longlong)local_60.aligned_allocator + 0x10))
    ;
    local_60.min_alignment = param_2->large_alignment;
    local_60.aligned_allocator = aligned_allocator;
    local_60.aligned_allocator_arg = (void *)0x0;
    local_60.deallocator = param_2->deallocator;
    local_60.deallocator_arg = p_Var4;
    pas_fast_large_free_heap_deallocate
              ((pas_fast_large_free_heap *)p_Var4,uVar2,uVar3,pas_zero_mode_may_have_non_zero,
               &local_60);
  }
  if ((local_30 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return uVar2 != 0;
  }
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return (bool)uVar6;
}

// pas_large_heap_try_shrink @ 140d839d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_large_heap_try_shrink(ulong64 param_1,ulong64 param_2,pas_heap_config *param_3)

{
  pas_heap_type *ppVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  _func___cdecl_pas_aligned_allocation_result_ulong64_pas_alignment_void_ptr *p_Var5;
  BOOLEAN BVar6;
  undefined1 uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  undefined1 auStackY_c8 [32];
  pas_large_map_entry local_a0;
  pas_range local_88;
  pas_large_free_heap_config local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_large_map_take((pas_large_map_entry *)&local_78,param_1);
  p_Var5 = local_78.aligned_allocator;
  uVar4 = local_78.min_alignment;
  uVar3 = local_78.type_size;
  if (local_78.type_size != 0) {
    ppVar1 = *(pas_heap_type **)((longlong)local_78.aligned_allocator + 0x10);
    if (param_2 == 0) {
      param_2 = (*param_3->get_type_size)(ppVar1);
    }
    uVar9 = param_3->large_alignment;
    uVar8 = (*param_3->get_type_alignment)(ppVar1);
    if (uVar9 < uVar8) {
      uVar9 = uVar8;
    }
    if ((uVar9 ^ uVar9 - 1) <= uVar9 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pas_heap_config_kind_for_config_table
        [(longlong)
         ((ulonglong)
          *(uint *)((((pas_fast_large_free_heap *)((longlong)local_78.aligned_allocator + 0x20))->
                    tree).minimum.payload + 1) << 0x3a) >> 0x3a] != param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar9 = -uVar9 & (param_2 + uVar9) - 1;
    if (param_3->aligned_allocator_talks_to_sharing_pool != false) {
      local_88.begin = uVar9 + local_78.type_size;
      if (local_78.min_alignment < local_88.begin) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_88.end = local_78.min_alignment;
      pas_large_sharing_pool_free
                (&local_88,pas_physical_memory_is_locked_by_virtual_range_common_lock,
                 param_3->mmap_capability);
    }
    uVar8 = uVar9 + local_78.type_size;
    local_78.type_size =
         (*param_3->get_type_size)(*(pas_heap_type **)((longlong)local_78.aligned_allocator + 0x10))
    ;
    local_78.min_alignment = param_3->large_alignment;
    local_78.aligned_allocator = aligned_allocator;
    local_78.aligned_allocator_arg = (void *)0x0;
    local_78.deallocator = param_3->deallocator;
    local_78.deallocator_arg = p_Var5;
    pas_fast_large_free_heap_deallocate
              ((pas_fast_large_free_heap *)p_Var5,uVar8,uVar4,pas_zero_mode_may_have_non_zero,
               &local_78);
    local_a0.begin = uVar3;
    local_a0.heap = (pas_large_heap *)p_Var5;
    local_a0.end = uVar8;
    pas_large_map_add(&local_a0);
  }
  if ((local_48 ^ (ulonglong)auStackY_c8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return uVar3 != 0;
}

// pas_large_heap_shove_into_free @ 140d83b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_large_heap_shove_into_free
          (pas_large_heap *param_1,ulong64 param_2,ulong64 param_3,pas_zero_mode param_4,
          pas_heap_config *param_5)

{
  code *pcVar1;
  undefined1 auStackY_88 [32];
  pas_large_free_heap_config local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_60.type_size = (*param_5->get_type_size)(*(pas_heap_type **)&param_1[1].free_heap);
  local_60.min_alignment = param_5->large_alignment;
  local_60.aligned_allocator = aligned_allocator;
  local_60.aligned_allocator_arg = (void *)0x0;
  local_60.deallocator = param_5->deallocator;
  local_60.deallocator_arg = param_1;
  pas_fast_large_free_heap_deallocate(&param_1->free_heap,param_2,param_3,param_4,&local_60);
  if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_large_heap_for_each_live_object @ 140d83c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_large_heap_for_each_live_object
          (pas_large_heap *param_1,
          _func___cdecl_bool_pas_large_heap_ptr_ulong64_ulong64_void_ptr *param_2,void *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 auStack_58 [32];
  pas_large_heap *local_38;
  _func___cdecl_bool_pas_large_heap_ptr_ulong64_ulong64_void_ptr *local_30;
  void *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  bVar3 = pas_large_map_for_each_entry(for_each_live_object_entry_callback,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return bVar3;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// for_each_live_object_entry_callback @ 140d83cb0

bool __cdecl for_each_live_object_entry_callback(pas_large_map_entry *param_1,void *param_2)

{
  undefined1 uVar1;
  
  if (param_1->heap != *(pas_large_heap **)param_2) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d83cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)param_2 + 8))
                    (*(pas_large_heap **)param_2,param_1->begin,param_1->end,
                     *(undefined8 *)((longlong)param_2 + 0x10));
  return (bool)uVar1;
}

// pas_large_heap_for_object @ 140d83ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_large_heap * __cdecl pas_large_heap_for_object(ulong64 param_1)

{
  code *pcVar1;
  pas_large_heap *ppVar2;
  undefined1 auStack_48 [40];
  pas_large_map_entry local_20;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_48;
  pas_large_map_find(&local_20,param_1);
  if (local_20.begin == 0) {
    local_20.heap = (pas_large_heap *)0x0;
  }
  else if (local_20.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_8 ^ (ulonglong)auStack_48) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    ppVar2 = (pas_large_heap *)(*pcVar1)();
    return ppVar2;
  }
  return local_20.heap;
}

// pas_large_heap_get_num_free_bytes @ 140d83d50

/* WARNING: Type propagation algorithm not settling */

ulong64 __cdecl pas_large_heap_get_num_free_bytes(pas_large_heap *param_1)

{
  uint3 uVar1;
  ulong64 uVar2;
  uint uVar3;
  uint3 *puVar4;
  uint3 *puVar5;
  
  uVar3 = (uint)*(uint3 *)(param_1->free_heap).tree.minimum.payload;
  puVar4 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)uVar3 * 8);
  if (puVar4 == (uint3 *)0x0 || uVar3 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    while( true ) {
      uVar2 = (uVar2 - (*(ulonglong *)(puVar4 + 4) & 0xffffffffffff)) +
              (*(ulonglong *)(puVar4 + 6) & 0xffffffffffff);
      puVar5 = (uint3 *)((ulonglong)*(uint3 *)((longlong)puVar4 + 6) * 8 +
                        pas_compact_heap_reservation_base);
      if (puVar5 != (uint3 *)0x0 && *(uint3 *)((longlong)puVar4 + 6) != 0) break;
      uVar1 = *puVar4;
      puVar5 = puVar4;
      while( true ) {
        if (uVar1 == 0) {
          return uVar2;
        }
        puVar4 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)(uint)uVar1 * 8);
        if (puVar4 == (uint3 *)0x0) {
          return uVar2;
        }
        if ((*(uint3 *)((longlong)puVar4 + 6) == 0) ||
           (puVar5 != (uint3 *)(pas_compact_heap_reservation_base +
                               (ulonglong)(uint)*(uint3 *)((longlong)puVar4 + 6) * 8))) break;
        uVar1 = *puVar4;
        puVar5 = puVar4;
      }
    }
    do {
      puVar4 = puVar5;
      puVar5 = (uint3 *)(pas_compact_heap_reservation_base +
                        (ulonglong)(uint)*(uint3 *)((longlong)puVar4 + 3) * 8);
      if (*(uint3 *)((longlong)puVar4 + 3) == 0) break;
    } while (puVar5 != (uint3 *)0x0);
  } while( true );
}

// pas_large_heap_compute_summary @ 140d83d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_large_heap_compute_summary(pas_heap_summary *__return_storage_ptr__,pas_large_heap *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  _func___cdecl_bool_pas_large_free_void_ptr *p_Var3;
  pas_heap_summary *ppVar4;
  undefined1 auStack_58 [40];
  pas_large_heap *local_30;
  code *local_28;
  pas_heap_summary *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    local_28 = compute_summary_live_object_callback;
    local_30 = param_1;
    local_20 = __return_storage_ptr__;
    pas_large_map_for_each_entry(for_each_live_object_entry_callback,&local_30);
    p_Var3 = pas_compute_summary_dead_object_callback_for_config
                       (pas_heap_config_kind_for_config_table
                        [(longlong)
                         ((ulonglong)*(uint *)(param_1[2].free_heap.tree.minimum.payload + 1) <<
                         0x3a) >> 0x3a]);
    pas_fast_large_free_heap_for_each_free(&param_1->free_heap,p_Var3,__return_storage_ptr__);
    if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar4 = (pas_heap_summary *)(*pcVar1)();
    return ppVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// compute_summary_live_object_callback @ 140d83e40

bool __cdecl
compute_summary_live_object_callback
          (pas_large_heap *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  bool bVar1;
  _func___cdecl_bool_ulong64_ulong64_void_ptr *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       pas_compute_summary_live_object_callback_for_config
                 (pas_heap_config_kind_for_config_table
                  [(longlong)
                   ((ulonglong)*(uint *)(param_1[2].free_heap.tree.minimum.payload + 1) << 0x3a) >>
                   0x3a]);
                    /* WARNING: Could not recover jumptable at 0x000140d83e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
  return bVar1;
}

// aligned_allocator @ 140d83e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
aligned_allocator(pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
                 pas_alignment *param_2,void *param_3)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_3 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = *(undefined8 *)((longlong)param_3 + 0x10);
  local_28 = (undefined4)param_2->alignment;
  uStack_24 = *(undefined4 *)((longlong)&param_2->alignment + 4);
  uStack_20 = (undefined4)param_2->alignment_begin;
  uStack_1c = *(undefined4 *)((longlong)&param_2->alignment_begin + 4);
  (**(code **)param_3)(local_28,param_1,&local_28,*(undefined8 *)((longlong)param_3 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

