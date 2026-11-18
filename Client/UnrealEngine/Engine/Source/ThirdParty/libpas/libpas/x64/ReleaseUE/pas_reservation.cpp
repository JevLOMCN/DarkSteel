// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_reservation_try_allocate_without_deallocating_padding @ 140d84c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
pas_reservation_try_allocate_without_deallocating_padding
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStack_48 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_enumerable_page_malloc_try_allocate_without_deallocating_padding
            (__return_storage_ptr__,param_1,&local_28,pas_reservation_commit_mode);
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_reservation_commit @ 140d84cc0

void __cdecl pas_reservation_commit(void *param_1,ulong64 param_2)

{
  if (pas_reservation_commit_mode != pas_decommitted) {
    return;
  }
  pas_page_malloc_commit(param_1,param_2,pas_may_mmap);
  return;
}

// pas_reservation_convert_to_state @ 140d84ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_reservation_convert_to_state(void *param_1,ulong64 param_2,pas_primordial_page_state param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_58 [40];
  pas_range local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == pas_primordial_page_is_decommitted) {
    if (pas_reservation_commit_mode != pas_decommitted) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else if (param_3 == pas_primordial_page_is_shared) {
    local_30.end = param_2 + (longlong)param_1;
    if (CARRY8(param_2,(ulonglong)param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_30.begin = (ulong64)param_1;
    pas_large_sharing_pool_boot_reservation
              (&local_30,pas_physical_memory_is_locked_by_virtual_range_common_lock,pas_may_mmap);
  }
  else {
    if (param_3 != pas_primordial_page_is_committed) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_reservation_commit_mode == pas_decommitted) {
      pas_page_malloc_commit(param_1,param_2,pas_may_mmap);
      return;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

