// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_global_physical_page_sharing_cache_try_allocate_with_alignment @ 140d841c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_global_physical_page_sharing_cache_try_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  pas_allocation_result *ppVar4;
  undefined1 auStackY_a8 [32];
  pas_alignment local_78;
  pas_range local_68;
  pas_large_free_heap_config local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_reservation_commit_mode == pas_committed) {
    local_58.type_size = param_2->alignment;
    local_58.min_alignment = param_2->alignment_begin;
    pas_reservation_free_heap_try_allocate_with_alignment
              (__return_storage_ptr__,param_1,(pas_alignment *)&local_58,param_3,
               pas_delegate_allocation);
    if (__return_storage_ptr__->did_succeed == true) {
      pas_physical_page_sharing_pool_take_later(param_1);
      local_68.begin = __return_storage_ptr__->begin;
      local_68.end = param_1 + local_68.begin;
      if (CARRY8(param_1,local_68.begin)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pas_large_sharing_pool_boot_free
                (&local_68,pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
    }
  }
  else {
    if (pas_reservation_commit_mode != pas_decommitted) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_58.type_size = 1;
    local_58.min_alignment = 1;
    local_58.aligned_allocator = global_physical_allocate_aligned;
    local_58.aligned_allocator_arg = (void *)0x0;
    local_58.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_58.deallocator_arg = (void *)0x0;
    local_78.alignment = param_2->alignment;
    local_78.alignment_begin = param_2->alignment_begin;
    pas_simple_large_free_heap_try_allocate
              (__return_storage_ptr__,&pas_global_physical_page_sharing_cache,param_1,&local_78,
               &local_58);
    if (__return_storage_ptr__->did_succeed == true) {
      pvVar1 = (void *)__return_storage_ptr__->begin;
      if (CARRY8((ulonglong)pvVar1,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (pvVar1 != (void *)0x0 &&
          pas_allocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
        (*pas_allocation_callback)
                  (pvVar1,param_1,pas_global_physical_page_sharing_cache_kind,param_3,
                   pas_delegate_allocation);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar4 = (pas_allocation_result *)(*pcVar2)();
  return ppVar4;
}

// pas_global_physical_page_sharing_cache_allocate_with_alignment @ 140d84350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_global_physical_page_sharing_cache_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStack_48 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_global_physical_page_sharing_cache_try_allocate_with_alignment
            (__return_storage_ptr__,param_1,&local_28,param_3);
  if (__return_storage_ptr__->did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (__return_storage_ptr__->begin != 0) {
    if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar2 = (pas_allocation_result *)(*pcVar1)();
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_global_physical_page_sharing_cache_try_allocate_committed_with_alignment @ 140d843b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_global_physical_page_sharing_cache_try_allocate_committed_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_physical_memory_transaction *param_4)

{
  code *pcVar1;
  bool bVar2;
  pas_allocation_result *ppVar3;
  undefined1 auStackY_d8 [32];
  pas_range local_a8;
  pas_allocation_result local_98;
  pas_large_free_heap_config local_88;
  pas_alignment local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (pas_reservation_commit_mode == pas_committed) {
    local_88.type_size = param_2->alignment;
    local_88.min_alignment = param_2->alignment_begin;
    pas_reservation_free_heap_try_allocate_with_alignment
              (__return_storage_ptr__,param_1,(pas_alignment *)&local_88,param_3,
               pas_delegate_allocation);
    if ((local_48 ^ (ulonglong)auStackY_d8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_4 == (pas_physical_memory_transaction *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_reservation_commit_mode != pas_decommitted) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_88.type_size = 1;
    local_88.min_alignment = 1;
    local_88.aligned_allocator = global_physical_allocate_aligned;
    local_88.aligned_allocator_arg = (void *)0x0;
    local_88.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_88.deallocator_arg = (void *)0x0;
    local_58.alignment = param_2->alignment;
    local_58.alignment_begin = param_2->alignment_begin;
    pas_simple_large_free_heap_try_allocate
              (&local_98,&pas_global_physical_page_sharing_cache,param_1,&local_58,&local_88);
    local_58.alignment._0_3_ = CONCAT12(local_98._11_1_,local_98._9_2_);
    if ((local_98.did_succeed & 1U) != 0) {
      if (CARRY8(local_98.begin,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_a8.begin = local_98.begin;
      local_a8.end = local_98.begin + param_1;
      bVar2 = pas_large_sharing_pool_allocate_and_commit
                        (&local_a8,param_4,
                         pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
      if (!bVar2) {
        if (param_4->lock_to_acquire_next_time == (pas_lock *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pas_simple_large_free_heap_deallocate
                  (&pas_global_physical_page_sharing_cache,local_98.begin,local_98.begin + param_1,
                   local_98.zero_mode,&local_88);
        __return_storage_ptr__->did_succeed = false;
        __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
        __return_storage_ptr__->begin = 0;
        if ((local_48 ^ (ulonglong)auStackY_d8) == __security_cookie.value) {
          return __return_storage_ptr__;
        }
        goto LAB_140d845c8;
      }
      if ((void *)local_98.begin != (void *)0x0 &&
          pas_allocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
        (*pas_allocation_callback)
                  ((void *)local_98.begin,param_1,pas_global_physical_page_sharing_cache_kind,
                   param_3,pas_delegate_allocation);
      }
    }
    __return_storage_ptr__->begin = local_98.begin;
    __return_storage_ptr__->did_succeed = local_98.did_succeed;
    *(undefined2 *)&__return_storage_ptr__->field_0x9 = (undefined2)local_58.alignment;
    __return_storage_ptr__->field_0xb = local_58.alignment._2_1_;
    __return_storage_ptr__->zero_mode = local_98.zero_mode;
    if ((local_48 ^ (ulonglong)auStackY_d8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
LAB_140d845c8:
  pcVar1 = (code *)swi(3);
  ppVar3 = (pas_allocation_result *)(*pcVar1)();
  return ppVar3;
}

// pas_global_physical_page_sharing_cache_allocate_committed_with_alignment @ 140d845e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_global_physical_page_sharing_cache_allocate_committed_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_physical_memory_transaction *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  pas_allocation_result *ppVar3;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_38;
  pas_alignment local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (pas_reservation_commit_mode == pas_committed) {
    local_38.begin = param_2->alignment;
    local_38._8_8_ = param_2->alignment_begin;
    pas_reservation_free_heap_allocate_with_alignment
              (__return_storage_ptr__,param_1,(pas_alignment *)&local_38,param_3,
               pas_delegate_allocation);
    if ((local_18 ^ (ulonglong)auStackY_68) != __security_cookie.value) {
LAB_140d846b4:
      pcVar1 = (code *)swi(3);
      ppVar3 = (pas_allocation_result *)(*pcVar1)();
      return ppVar3;
    }
  }
  else {
    local_28.alignment = param_2->alignment;
    local_28.alignment_begin = param_2->alignment_begin;
    pas_global_physical_page_sharing_cache_try_allocate_committed_with_alignment
              (&local_38,param_1,&local_28,param_3,param_4);
    uVar2 = local_38._9_4_;
    local_28.alignment._0_7_ = local_38._9_7_;
    if (param_4->lock_to_acquire_next_time == (pas_lock *)0x0) {
      if ((local_38._8_8_ & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else if ((local_38._8_8_ & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    __return_storage_ptr__->begin = local_38.begin;
    __return_storage_ptr__->did_succeed = local_38.did_succeed;
    *(undefined4 *)&__return_storage_ptr__->field_0x9 = uVar2;
    __return_storage_ptr__->zero_mode = local_38.zero_mode;
    if ((local_18 ^ (ulonglong)auStackY_68) != __security_cookie.value) goto LAB_140d846b4;
  }
  return __return_storage_ptr__;
}

// pas_global_physical_page_sharing_cache_provider @ 140d846d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_global_physical_page_sharing_cache_provider
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_heap *param_4,pas_physical_memory_transaction *param_5,
          pas_primordial_page_state param_6,void *param_7)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_58 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (param_7 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_6 == pas_primordial_page_is_committed) {
    local_28.alignment = param_2->alignment;
    local_28.alignment_begin = param_2->alignment_begin;
    pas_global_physical_page_sharing_cache_try_allocate_committed_with_alignment
              (__return_storage_ptr__,param_1,&local_28,param_3,param_5);
    if ((local_10 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_6 != pas_primordial_page_is_shared) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28.alignment = param_2->alignment;
    local_28.alignment_begin = param_2->alignment_begin;
    pas_global_physical_page_sharing_cache_try_allocate_with_alignment
              (__return_storage_ptr__,param_1,&local_28,param_3);
    if ((local_10 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// global_physical_allocate_aligned @ 140d84780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
global_physical_allocate_aligned
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  ulong64 uVar1;
  code *pcVar2;
  pas_aligned_allocation_result *ppVar3;
  undefined1 auStack_58 [32];
  pas_range local_38;
  pas_alignment local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (pas_reservation_commit_mode != pas_decommitted) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_enumerable_page_malloc_try_allocate_without_deallocating_padding
            (__return_storage_ptr__,param_1,&local_28,pas_committed);
  if (__return_storage_ptr__->result != (void *)0x0) {
    uVar1 = __return_storage_ptr__->right_padding_size;
    pas_physical_page_sharing_pool_take_later
              (__return_storage_ptr__->left_padding_size + __return_storage_ptr__->result_size +
               uVar1);
    if (__return_storage_ptr__->zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_38.end = uVar1 + (longlong)__return_storage_ptr__->right_padding;
    local_38.begin = (ulong64)__return_storage_ptr__->left_padding;
    if (local_38.end < local_38.begin) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_large_sharing_pool_boot_free
              (&local_38,pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar3 = (pas_aligned_allocation_result *)(*pcVar2)();
  return ppVar3;
}

