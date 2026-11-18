// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 9

// pas_large_utility_free_heap_try_allocate_with_alignment @ 140d795f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_large_utility_free_heap_try_allocate_with_alignment
          (ulong64 param_1,pas_alignment *param_2,char *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulong64 uVar3;
  BOOLEAN BVar4;
  bool bVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined1 auStackY_b8 [32];
  pas_range local_88;
  pas_alignment local_78;
  pas_allocation_result local_68;
  pas_large_free_heap_config local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_58.type_size = 1;
  local_58.min_alignment = 1;
  local_58.aligned_allocator = large_utility_aligned_allocator;
  local_58.aligned_allocator_arg = (void *)0x0;
  local_58.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_58.deallocator_arg = (void *)0x0;
  uVar1 = param_2->alignment;
  if ((uVar1 ^ uVar1 - 1) <= uVar1 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar1 <= param_2->alignment_begin) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = 8;
  if (8 < uVar1) {
    uVar7 = uVar1;
  }
  if ((uVar7 & uVar7 - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_2->alignment = uVar7;
  local_78.alignment = param_2->alignment;
  local_78.alignment_begin = param_2->alignment_begin;
  pas_fast_large_free_heap_try_allocate
            (&local_68,&pas_large_utility_free_heap,param_1,&local_78,&local_58);
  if ((void *)local_68.begin != (void *)0x0 &&
      pas_allocation_callback !=
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    (*pas_allocation_callback)
              ((void *)local_68.begin,param_1,pas_large_utility_free_heap_kind,param_3,
               pas_object_allocation);
  }
  uVar3 = pas_large_utility_free_heap_num_allocated_object_bytes_peak;
  if ((local_68.did_succeed & 1U) != 0) {
    if (pas_large_utility_free_heap_talks_to_large_sharing_pool == true) {
      local_88.end = local_68.begin + param_1;
      if (CARRY8(local_68.begin,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_88.begin = local_68.begin;
      bVar5 = pas_large_sharing_pool_allocate_and_commit
                        (&local_88,(pas_physical_memory_transaction *)0x0,
                         pas_physical_memory_is_locked_by_heap_lock,pas_may_mmap);
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    pas_large_utility_free_heap_num_allocated_object_bytes =
         param_1 + pas_large_utility_free_heap_num_allocated_object_bytes;
    uVar3 = pas_large_utility_free_heap_num_allocated_object_bytes;
    if (pas_large_utility_free_heap_num_allocated_object_bytes <=
        pas_large_utility_free_heap_num_allocated_object_bytes_peak) {
      uVar3 = pas_large_utility_free_heap_num_allocated_object_bytes_peak;
    }
  }
  pas_large_utility_free_heap_num_allocated_object_bytes_peak = uVar3;
  if ((local_28 ^ (ulonglong)auStackY_b8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar2)();
    return pvVar6;
  }
  return (void *)local_68.begin;
}

// pas_large_utility_free_heap_allocate_with_alignment @ 140d797a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_large_utility_free_heap_allocate_with_alignment
          (ulong64 param_1,pas_alignment *param_2,char *param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_48 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pvVar2 = pas_large_utility_free_heap_try_allocate_with_alignment(param_1,&local_28,param_3);
  if (param_1 != 0 && pvVar2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_large_utility_free_heap_try_allocate @ 140d79800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_large_utility_free_heap_try_allocate(ulong64 param_1,char *param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_alignment local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18.alignment = 1;
  local_18.alignment_begin = 0;
  pvVar2 = pas_large_utility_free_heap_try_allocate_with_alignment(param_1,&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_large_utility_free_heap_allocate @ 140d79860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_large_utility_free_heap_allocate(ulong64 param_1,char *param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_48 [40];
  pas_alignment local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_20.alignment = 1;
  local_20.alignment_begin = 0;
  pvVar2 = pas_large_utility_free_heap_try_allocate_with_alignment(param_1,&local_20,param_2);
  if (param_1 != 0 && pvVar2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_large_utility_free_heap_deallocate @ 140d798d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_large_utility_free_heap_deallocate(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  undefined1 auStackY_88 [32];
  pas_range local_60;
  pas_large_free_heap_config local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 != 0) {
    local_50.type_size = 1;
    local_50.min_alignment = 1;
    local_50.aligned_allocator = large_utility_aligned_allocator;
    local_50.aligned_allocator_arg = (void *)0x0;
    local_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_50.deallocator_arg = (void *)0x0;
    if (param_1 != (void *)0x0 &&
        pas_deallocation_callback !=
        (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
      (*pas_deallocation_callback)
                (param_1,param_2,pas_large_utility_free_heap_kind,pas_object_allocation);
    }
    pvVar1 = (void *)((longlong)param_1 + param_2);
    if (pas_large_utility_free_heap_talks_to_large_sharing_pool == true) {
      if (pvVar1 < param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_60.begin = (ulong64)param_1;
      local_60.end = (ulong64)pvVar1;
      pas_large_sharing_pool_free(&local_60,pas_physical_memory_is_locked_by_heap_lock,pas_may_mmap)
      ;
    }
    pas_fast_large_free_heap_deallocate
              (&pas_large_utility_free_heap,(ulong64)param_1,(ulong64)pvVar1,
               pas_zero_mode_may_have_non_zero,&local_50);
    pas_large_utility_free_heap_num_allocated_object_bytes =
         pas_large_utility_free_heap_num_allocated_object_bytes - param_2;
  }
  if ((local_20 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pas_large_utility_free_heap_compute_summary @ 140d799e0

pas_heap_summary * __cdecl
pas_large_utility_free_heap_compute_summary(pas_heap_summary *__return_storage_ptr__)

{
  ulong64 uVar1;
  BOOLEAN BVar2;
  code *pcVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
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
    pcVar3 = pas_compute_summary_dead_object_callback_without_physical_sharing;
    if (pas_large_utility_free_heap_talks_to_large_sharing_pool != false) {
      pcVar3 = pas_compute_summary_dead_object_callback;
    }
    pas_fast_large_free_heap_for_each_free
              (&pas_large_utility_free_heap,pcVar3,__return_storage_ptr__);
    uVar1 = pas_large_utility_free_heap_num_allocated_object_bytes;
    __return_storage_ptr__->allocated =
         __return_storage_ptr__->allocated + pas_large_utility_free_heap_num_allocated_object_bytes;
    __return_storage_ptr__->committed = __return_storage_ptr__->committed + uVar1;
    return __return_storage_ptr__;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

// pas_large_utility_free_heap_allocate_for_allocation_config @ 140d79a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_large_utility_free_heap_allocate_for_allocation_config
          (ulong64 param_1,char *param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_48 [40];
  pas_alignment local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_3 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_20.alignment = 1;
  local_20.alignment_begin = 0;
  pvVar2 = pas_large_utility_free_heap_try_allocate_with_alignment(param_1,&local_20,param_2);
  if (param_1 != 0 && pvVar2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_large_utility_free_heap_deallocate_for_allocation_config @ 140d79ae0

void __cdecl
pas_large_utility_free_heap_deallocate_for_allocation_config
          (void *param_1,ulong64 param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  
  if (param_3 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == (void *)0x0) {
    pas_large_utility_free_heap_deallocate(param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// large_utility_aligned_allocator @ 140d79b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
large_utility_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  pas_aligned_allocation_result *ppVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStackY_88 [32];
  pas_range local_60;
  pas_alignment local_50;
  pas_allocation_result local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (param_3 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar5 = param_2->alignment;
  if ((uVar5 ^ uVar5 - 1) <= uVar5 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = param_2->alignment_begin;
  if (uVar1 < uVar5) {
    if (uVar5 <= pas_page_malloc_cached_alignment) {
      uVar5 = pas_page_malloc_cached_alignment;
    }
    if ((uVar5 ^ uVar5 - 1) <= uVar5 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = -pas_page_malloc_cached_alignment & (param_1 + pas_page_malloc_cached_alignment) - 1;
    __return_storage_ptr__->right_padding = (void *)0x0;
    __return_storage_ptr__->right_padding_size = 0;
    __return_storage_ptr__->left_padding = (void *)0x0;
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->result = (void *)0x0;
    __return_storage_ptr__->result_size = 0;
    *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
    if (pas_large_utility_free_heap_talks_to_large_sharing_pool == true) {
      pas_physical_page_sharing_pool_take_later(uVar4);
    }
    local_50.alignment = uVar5;
    local_50.alignment_begin = uVar1;
    pas_reservation_free_heap_try_allocate_with_alignment
              (&local_40,uVar4,&local_50,"pas_large_utility_free_heap/chunk",pas_delegate_allocation
              );
    if ((local_40.did_succeed & 1U) == 0) {
      pas_physical_page_sharing_pool_give_back(uVar4);
      if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
    }
    else {
      if (local_40.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pas_reservation_commit((void *)local_40.begin,uVar4);
      if (pas_large_utility_free_heap_talks_to_large_sharing_pool == true) {
        local_60.end = local_40.begin + uVar4;
        if (CARRY8(local_40.begin,uVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_60.begin = local_40.begin;
        pas_large_sharing_pool_boot_free
                  (&local_60,pas_physical_memory_is_locked_by_heap_lock,pas_may_mmap);
      }
      __return_storage_ptr__->result = (void *)local_40.begin;
      __return_storage_ptr__->result_size = param_1;
      __return_storage_ptr__->left_padding = (void *)local_40.begin;
      __return_storage_ptr__->left_padding_size = 0;
      __return_storage_ptr__->right_padding = (void *)(local_40.begin + param_1);
      __return_storage_ptr__->right_padding_size = uVar4 - param_1;
      __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
      if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
    }
    pcVar2 = (code *)swi(3);
    ppVar3 = (pas_aligned_allocation_result *)(*pcVar2)();
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

