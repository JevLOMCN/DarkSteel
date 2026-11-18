// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_reservation_free_heap_try_allocate_with_alignment @ 140d8c4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_reservation_free_heap_try_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_allocation_kind param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  pas_allocation_result *ppVar4;
  undefined1 auStackY_98 [32];
  pas_alignment local_68;
  pas_large_free_heap_config local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar1 & param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 == '\0') {
    local_58.type_size = 1;
    local_58.min_alignment = 1;
    local_58.aligned_allocator = reservation_source_allocate_aligned;
    local_58.aligned_allocator_arg = (void *)0x0;
    local_58.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_58.deallocator_arg = (void *)0x0;
    local_68.alignment = param_2->alignment;
    local_68.alignment_begin = param_2->alignment_begin;
    pas_simple_large_free_heap_try_allocate
              (__return_storage_ptr__,&pas_reservation_free_heap,param_1,&local_68,&local_58);
    if (__return_storage_ptr__->did_succeed == true) {
      if ((void *)__return_storage_ptr__->begin != (void *)0x0 &&
          pas_allocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
        (*pas_allocation_callback)
                  ((void *)__return_storage_ptr__->begin,param_1,pas_reservation_free_heap_kind,
                   param_3,param_4);
      }
    }
    if ((local_28 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    ppVar4 = (pas_allocation_result *)(*pcVar2)();
    return ppVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_reservation_free_heap_allocate_with_alignment @ 140d8c620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_reservation_free_heap_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_allocation_kind param_4)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_58 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_reservation_free_heap_try_allocate_with_alignment
            (__return_storage_ptr__,param_1,&local_28,param_3,param_4);
  if (__return_storage_ptr__->did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (__return_storage_ptr__->begin != 0) {
    if ((local_10 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
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

// reservation_source_allocate_aligned @ 140d8c690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
reservation_source_allocate_aligned
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

