// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 18

// pas_bootstrap_free_heap_try_allocate @ 140d70c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,char *param_2,
          pas_allocation_kind param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_48 [32];
  pas_alignment local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_48;
  local_20.alignment = 1;
  local_20.alignment_begin = 0;
  pas_bootstrap_free_heap_try_allocate_with_alignment
            (__return_storage_ptr__,param_1,&local_20,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_bootstrap_free_heap_try_allocate_with_alignment @ 140d70cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_try_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_allocation_kind param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  pas_allocation_result *ppVar7;
  ulonglong uVar8;
  undefined1 auStackY_a8 [32];
  pas_alignment local_68;
  pas_large_free_heap_config local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar2 = param_2->alignment;
  if ((uVar2 ^ uVar2 - 1) <= uVar2 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar2 <= param_2->alignment_begin) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar8 = 8;
  if (8 < uVar2) {
    uVar8 = uVar2;
  }
  if ((uVar8 & uVar8 - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  param_2->alignment = uVar8;
  uVar3 = param_2->alignment;
  uVar4 = param_2->alignment_begin;
  if (param_4 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
  local_58.type_size = 1;
  local_58.min_alignment = 1;
  local_58.aligned_allocator = bootstrap_source_allocate_aligned;
  local_58.aligned_allocator_arg = (void *)0x0;
  local_58.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_58.deallocator_arg = (void *)0x0;
  local_68.alignment = uVar3;
  local_68.alignment_begin = uVar4;
  pas_manually_decommittable_large_free_heap_try_allocate
            (__return_storage_ptr__,&pas_bootstrap_free_heap,param_1,&local_68,&local_58);
  if ((void *)__return_storage_ptr__->begin == (void *)0x0 ||
      pas_allocation_callback ==
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    cVar1 = __return_storage_ptr__->did_succeed;
  }
  else {
    (*pas_allocation_callback)
              ((void *)__return_storage_ptr__->begin,param_1,pas_bootstrap_free_heap_kind,param_3,
               pas_object_allocation);
    cVar1 = __return_storage_ptr__->did_succeed;
  }
  uVar2 = pas_bootstrap_free_heap_num_allocated_object_bytes_peak;
  if ((cVar1 == '\x01') &&
     (pas_bootstrap_free_heap_num_allocated_object_bytes =
           param_1 + pas_bootstrap_free_heap_num_allocated_object_bytes,
     uVar2 = pas_bootstrap_free_heap_num_allocated_object_bytes,
     pas_bootstrap_free_heap_num_allocated_object_bytes <=
     pas_bootstrap_free_heap_num_allocated_object_bytes_peak)) {
    uVar2 = pas_bootstrap_free_heap_num_allocated_object_bytes_peak;
  }
  pas_bootstrap_free_heap_num_allocated_object_bytes_peak = uVar2;
  if ((local_28 ^ (ulonglong)auStackY_a8) != __security_cookie.value) {
    pcVar5 = (code *)swi(3);
    ppVar7 = (pas_allocation_result *)(*pcVar5)();
    return ppVar7;
  }
  return __return_storage_ptr__;
}

// pas_bootstrap_free_heap_allocate @ 140d70ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_allocate
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,char *param_2,
          pas_allocation_kind param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_48 [32];
  pas_alignment local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_48;
  local_20.alignment = 1;
  local_20.alignment_begin = 0;
  pas_bootstrap_free_heap_try_allocate_with_alignment
            (__return_storage_ptr__,param_1,&local_20,param_2,param_3);
  if (__return_storage_ptr__->did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (__return_storage_ptr__->begin != 0) {
    if ((local_10 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
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

// pas_bootstrap_free_heap_allocate_with_alignment @ 140d70f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_allocate_with_alignment
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
  pas_bootstrap_free_heap_try_allocate_with_alignment
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

// pas_bootstrap_free_heap_try_allocate_with_manual_alignment @ 140d70f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_try_allocate_with_manual_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_allocation_kind param_4)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  BOOLEAN BVar4;
  pas_allocation_result *ppVar5;
  undefined1 auStackY_a8 [32];
  pas_alignment local_78;
  pas_large_free_heap_config local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_4 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
  local_60.type_size = 1;
  local_60.min_alignment = 1;
  local_60.aligned_allocator = bootstrap_source_allocate_aligned;
  local_60.aligned_allocator_arg = (void *)0x0;
  local_60.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_60.deallocator_arg = (void *)0x0;
  local_78.alignment = param_2->alignment;
  local_78.alignment_begin = param_2->alignment_begin;
  pas_manually_decommittable_large_free_heap_try_allocate
            (__return_storage_ptr__,&pas_bootstrap_free_heap,param_1,&local_78,&local_60);
  if ((void *)__return_storage_ptr__->begin == (void *)0x0 ||
      pas_allocation_callback ==
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    cVar1 = __return_storage_ptr__->did_succeed;
  }
  else {
    (*pas_allocation_callback)
              ((void *)__return_storage_ptr__->begin,param_1,pas_bootstrap_free_heap_kind,param_3,
               pas_object_allocation);
    cVar1 = __return_storage_ptr__->did_succeed;
  }
  uVar3 = pas_bootstrap_free_heap_num_allocated_object_bytes_peak;
  if ((cVar1 == '\x01') &&
     (pas_bootstrap_free_heap_num_allocated_object_bytes =
           param_1 + pas_bootstrap_free_heap_num_allocated_object_bytes,
     uVar3 = pas_bootstrap_free_heap_num_allocated_object_bytes,
     pas_bootstrap_free_heap_num_allocated_object_bytes <=
     pas_bootstrap_free_heap_num_allocated_object_bytes_peak)) {
    uVar3 = pas_bootstrap_free_heap_num_allocated_object_bytes_peak;
  }
  pas_bootstrap_free_heap_num_allocated_object_bytes_peak = uVar3;
  if ((local_30 ^ (ulonglong)auStackY_a8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    ppVar5 = (pas_allocation_result *)(*pcVar2)();
    return ppVar5;
  }
  return __return_storage_ptr__;
}

// pas_bootstrap_free_heap_allocate_with_manual_alignment @ 140d710f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_bootstrap_free_heap_allocate_with_manual_alignment
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_allocation_kind param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  BOOLEAN BVar4;
  pas_allocation_result *ppVar5;
  ulonglong uVar6;
  undefined1 auStackY_a8 [32];
  pas_alignment local_68;
  pas_large_free_heap_config local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar2 = param_2->alignment;
  uVar3 = param_2->alignment_begin;
  if (param_4 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
  local_58.type_size = 1;
  local_58.min_alignment = 1;
  local_58.aligned_allocator = bootstrap_source_allocate_aligned;
  local_58.aligned_allocator_arg = (void *)0x0;
  local_58.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_58.deallocator_arg = (void *)0x0;
  local_68.alignment = uVar2;
  local_68.alignment_begin = uVar3;
  pas_manually_decommittable_large_free_heap_try_allocate
            (__return_storage_ptr__,&pas_bootstrap_free_heap,param_1,&local_68,&local_58);
  if ((void *)__return_storage_ptr__->begin != (void *)0x0 &&
      pas_allocation_callback !=
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    (*pas_allocation_callback)
              ((void *)__return_storage_ptr__->begin,param_1,pas_bootstrap_free_heap_kind,param_3,
               pas_object_allocation);
  }
  if (__return_storage_ptr__->did_succeed != true) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_bootstrap_free_heap_num_allocated_object_bytes =
       param_1 + pas_bootstrap_free_heap_num_allocated_object_bytes;
  uVar6 = pas_bootstrap_free_heap_num_allocated_object_bytes;
  if (pas_bootstrap_free_heap_num_allocated_object_bytes <=
      pas_bootstrap_free_heap_num_allocated_object_bytes_peak) {
    uVar6 = pas_bootstrap_free_heap_num_allocated_object_bytes_peak;
  }
  pas_bootstrap_free_heap_num_allocated_object_bytes_peak = uVar6;
  if (__return_storage_ptr__->begin != 0) {
    if ((local_28 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar5 = (pas_allocation_result *)(*pcVar1)();
    return ppVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bootstrap_free_heap_deallocate @ 140d71240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_bootstrap_free_heap_deallocate(void *param_1,ulong64 param_2,pas_allocation_kind param_3)

{
  code *pcVar1;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_3 != pas_object_allocation) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 != 0) {
    pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
    if (param_1 != (void *)0x0 &&
        pas_deallocation_callback !=
        (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
      (*pas_deallocation_callback)
                (param_1,param_2,pas_bootstrap_free_heap_kind,pas_object_allocation);
    }
    local_48.type_size = 1;
    local_48.min_alignment = 1;
    local_48.aligned_allocator = bootstrap_source_allocate_aligned;
    local_48.aligned_allocator_arg = (void *)0x0;
    local_48.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
    local_48.deallocator_arg = (void *)0x0;
    pas_manually_decommittable_large_free_heap_deallocate
              (&pas_bootstrap_free_heap,(ulong64)param_1,(longlong)param_1 + param_2,
               pas_zero_mode_may_have_non_zero,&local_48);
    pas_bootstrap_free_heap_num_allocated_object_bytes =
         pas_bootstrap_free_heap_num_allocated_object_bytes - param_2;
  }
  if ((local_18 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_bootstrap_free_heap_get_num_free_bytes @ 140d71320

ulong64 __cdecl pas_bootstrap_free_heap_get_num_free_bytes(void)

{
  ulong64 uVar1;
  
  uVar1 = pas_simple_large_free_heap_get_num_free_bytes(&pas_bootstrap_free_heap.private_base);
  return uVar1;
}

// pas_bootstrap_free_heap_get_num_decommitted_bytes @ 140d71340

ulong64 __cdecl pas_bootstrap_free_heap_get_num_decommitted_bytes(void)

{
  ulong64 uVar1;
  
  uVar1 = pas_manually_decommittable_large_free_heap_get_num_decommitted_bytes
                    (&pas_bootstrap_free_heap);
  return uVar1;
}

// pas_bootstrap_free_heap_hold_lock_and_allocate @ 140d71360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_bootstrap_free_heap_hold_lock_and_allocate
          (ulong64 param_1,char *param_2,pas_allocation_kind param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_40;
  pas_alignment local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  local_30.alignment = 1;
  local_30.alignment_begin = 0;
  pas_bootstrap_free_heap_try_allocate_with_alignment(&local_40,param_1,&local_30,param_2,param_3);
  if (local_40.did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((void *)local_40.begin != (void *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if ((local_20 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
      return (void *)local_40.begin;
    }
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bootstrap_free_heap_hold_lock_and_deallocate @ 140d71410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_bootstrap_free_heap_hold_lock_and_deallocate
          (void *param_1,ulong64 param_2,pas_allocation_kind param_3)

{
  code *pcVar1;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_1 == (void *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (param_3 != pas_object_allocation) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 != 0) {
      pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
      if (pas_deallocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
        (*pas_deallocation_callback)
                  (param_1,param_2,pas_bootstrap_free_heap_kind,pas_object_allocation);
      }
      local_50.type_size = 1;
      local_50.min_alignment = 1;
      local_50.aligned_allocator = bootstrap_source_allocate_aligned;
      local_50.aligned_allocator_arg = (void *)0x0;
      local_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
      local_50.deallocator_arg = (void *)0x0;
      pas_manually_decommittable_large_free_heap_deallocate
                (&pas_bootstrap_free_heap,(ulong64)param_1,(longlong)param_1 + param_2,
                 pas_zero_mode_may_have_non_zero,&local_50);
      pas_bootstrap_free_heap_num_allocated_object_bytes =
           pas_bootstrap_free_heap_num_allocated_object_bytes - param_2;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_bootstrap_free_heap_hold_lock_and_allocate_for_config @ 140d71510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_bootstrap_free_heap_hold_lock_and_allocate_for_config
          (ulong64 param_1,char *param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_40;
  pas_alignment local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_4 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  local_30.alignment = 1;
  local_30.alignment_begin = 0;
  pas_bootstrap_free_heap_try_allocate_with_alignment(&local_40,param_1,&local_30,param_2,param_3);
  if (local_40.did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((void *)local_40.begin == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if ((local_20 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return (void *)local_40.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_bootstrap_free_heap_hold_lock_and_deallocate_for_config @ 140d715c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_bootstrap_free_heap_hold_lock_and_deallocate_for_config
          (void *param_1,ulong64 param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config pStack_50;
  ulonglong uStack_20;
  
  if (param_4 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_1 == (void *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (param_3 != pas_object_allocation) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 != 0) {
      pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
      if (pas_deallocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
        (*pas_deallocation_callback)
                  (param_1,param_2,pas_bootstrap_free_heap_kind,pas_object_allocation);
      }
      pStack_50.type_size = 1;
      pStack_50.min_alignment = 1;
      pStack_50.aligned_allocator = bootstrap_source_allocate_aligned;
      pStack_50.aligned_allocator_arg = (void *)0x0;
      pStack_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
      pStack_50.deallocator_arg = (void *)0x0;
      pas_manually_decommittable_large_free_heap_deallocate
                (&pas_bootstrap_free_heap,(ulong64)param_1,(longlong)param_1 + param_2,
                 pas_zero_mode_may_have_non_zero,&pStack_50);
      pas_bootstrap_free_heap_num_allocated_object_bytes =
           pas_bootstrap_free_heap_num_allocated_object_bytes - param_2;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if ((uStack_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_bootstrap_free_heap_allocate_simple_for_config @ 140d715e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_bootstrap_free_heap_allocate_simple_for_config
          (ulong64 param_1,char *param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_58 [32];
  pas_allocation_result local_28;
  pas_alignment local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (param_4 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18.alignment = 1;
  local_18.alignment_begin = 0;
  pas_bootstrap_free_heap_try_allocate_with_alignment(&local_28,param_1,&local_18,param_2,param_3);
  if (local_28.did_succeed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((void *)local_28.begin == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_8 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
    return (void *)local_28.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// pas_bootstrap_free_heap_deallocate_for_config @ 140d71660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_bootstrap_free_heap_deallocate_for_config
          (void *param_1,ulong64 param_2,pas_allocation_kind param_3,void *param_4)

{
  code *pcVar1;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_4 != (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == pas_object_allocation) {
    if (param_2 != 0) {
      pas_manually_decommittable_large_free_heap_commit(&pas_bootstrap_free_heap);
      if (param_1 != (void *)0x0 &&
          pas_deallocation_callback !=
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
        (*pas_deallocation_callback)
                  (param_1,param_2,pas_bootstrap_free_heap_kind,pas_object_allocation);
      }
      local_48.type_size = 1;
      local_48.min_alignment = 1;
      local_48.aligned_allocator = bootstrap_source_allocate_aligned;
      local_48.aligned_allocator_arg = (void *)0x0;
      local_48.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
      local_48.deallocator_arg = (void *)0x0;
      pas_manually_decommittable_large_free_heap_deallocate
                (&pas_bootstrap_free_heap,(ulong64)param_1,(longlong)param_1 + param_2,
                 pas_zero_mode_may_have_non_zero,&local_48);
      pas_bootstrap_free_heap_num_allocated_object_bytes =
           pas_bootstrap_free_heap_num_allocated_object_bytes - param_2;
    }
    if ((local_18 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bootstrap_free_heap_decommit @ 140d71750

ulong64 __cdecl pas_bootstrap_free_heap_decommit(void)

{
  ulong64 uVar1;
  
  uVar1 = pas_manually_decommittable_large_free_heap_decommit(&pas_bootstrap_free_heap);
  return uVar1;
}

// pas_bootstrap_free_heap_scavenge_periodic @ 140d71770

bool __cdecl pas_bootstrap_free_heap_scavenge_periodic(void)

{
  bool bVar1;
  
  bVar1 = pas_manually_decommittable_large_free_heap_scavenge_periodic(&pas_bootstrap_free_heap);
  return bVar1;
}

// bootstrap_source_allocate_aligned @ 140d71790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
bootstrap_source_allocate_aligned
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
  pas_enumerable_page_malloc_try_allocate_without_deallocating_padding
            (__return_storage_ptr__,param_1,&local_28,pas_committed);
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

