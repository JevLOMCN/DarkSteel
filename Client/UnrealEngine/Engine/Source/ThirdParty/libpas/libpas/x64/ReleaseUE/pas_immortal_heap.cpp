// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_immortal_heap_allocate_with_manual_alignment @ 140d694f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_immortal_heap_allocate_with_manual_alignment
          (ulong64 param_1,ulong64 param_2,char *param_3,pas_allocation_kind param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  BOOLEAN BVar3;
  ulong64 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined1 auStackY_a8 [32];
  pas_aligned_allocation_result local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  pas_immortal_heap_clean_count = '\0';
  uVar7 = param_2 - 1;
  if ((param_2 ^ uVar7) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pvVar5 = (void *)(-param_2 & (param_2 + pas_immortal_heap_current) - 1);
  if ((pas_immortal_heap_end - (longlong)pvVar5 < param_1 || pas_immortal_heap_end < pvVar5) ||
      pvVar5 < pas_immortal_heap_current) {
    if (pas_immortal_heap_is_committed != false) {
      decommit_slack();
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
    uVar4 = pas_immortal_heap_allocation_granule;
    if (pas_immortal_heap_allocation_granule < param_1) {
      uVar4 = param_1;
    }
    uVar6 = -pas_page_malloc_cached_alignment & (uVar4 + pas_page_malloc_cached_alignment) - 1;
    pas_compact_heap_reservation_try_allocate(&local_78,uVar6,param_2);
    if (local_78.result == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_78.result_size != uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_78.right_padding_size != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_reservation_commit(local_78.result,uVar6);
    pas_immortal_heap_current = (ulong64)local_78.result;
    pas_immortal_heap_end = (longlong)local_78.result + uVar6;
    pas_immortal_heap_allocated_external = pas_immortal_heap_allocated_external + uVar6;
    pas_immortal_heap_is_committed = true;
    pas_scavenger_did_create_eligible();
    if ((pas_immortal_heap_end < pas_immortal_heap_current) ||
       (pas_immortal_heap_end - pas_immortal_heap_current < param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pvVar5 = (void *)pas_immortal_heap_current;
    if ((pas_immortal_heap_current & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else if (pas_immortal_heap_is_committed == false) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar2 = pas_page_malloc_cached_alignment;
    uVar4 = pas_immortal_heap_end;
    if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
        pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar7 = (pas_page_malloc_cached_alignment - 1) + pas_immortal_heap_current;
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar6 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar6) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pvVar8 = (void *)(uVar7 & -uVar2);
    if ((uVar6 & (ulonglong)pvVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar7 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar7) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < pvVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 - (longlong)pvVar8 != 0) {
      pas_page_malloc_commit(pvVar8,uVar4 - (longlong)pvVar8,pas_may_mmap);
    }
    pas_immortal_heap_is_committed = true;
    pas_scavenger_did_create_eligible();
  }
  pas_immortal_heap_current = (longlong)pvVar5 + param_1;
  if (pvVar5 != (void *)0x0 &&
      pas_allocation_callback !=
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    (*pas_allocation_callback)(pvVar5,param_1,pas_immortal_heap_kind,param_3,param_4);
  }
  pas_immortal_heap_allocated_internal = pas_immortal_heap_allocated_internal + param_1;
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  if ((local_40 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
    return pvVar5;
  }
  pcVar1 = (code *)swi(3);
  pvVar5 = (void *)(*pcVar1)();
  return pvVar5;
}

// decommit_slack @ 140d697f0

ulong64 __cdecl decommit_slack(void)

{
  ulonglong uVar1;
  code *pcVar2;
  ulong64 uVar3;
  BOOLEAN BVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar5 = pas_page_malloc_cached_alignment;
  uVar3 = pas_immortal_heap_end;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar6 = (pas_page_malloc_cached_alignment - 1) + pas_immortal_heap_current;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar7 = (void *)(uVar6 & -uVar5);
  if ((uVar1 & (ulonglong)pvVar7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar6 = pas_page_malloc_cached_alignment - 1;
  if (uVar6 < (pas_page_malloc_cached_alignment ^ uVar6)) {
    if ((uVar6 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = uVar3 - (longlong)pvVar7;
    if (pvVar7 <= uVar3) {
      if (uVar5 != 0) {
        pas_page_malloc_decommit(pvVar7,uVar5,pas_may_mmap);
      }
      return uVar5;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_immortal_heap_allocate_with_alignment @ 140d698e0

void * __cdecl
pas_immortal_heap_allocate_with_alignment
          (ulong64 param_1,ulong64 param_2,char *param_3,pas_allocation_kind param_4)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_2 < 9) {
    param_2 = 8;
  }
  pvVar2 = pas_immortal_heap_allocate_with_manual_alignment(param_1,param_2,param_3,param_4);
  if (((ulonglong)pvVar2 & 7) == 0) {
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_immortal_heap_allocate @ 140d69910

void * __cdecl pas_immortal_heap_allocate(ulong64 param_1,char *param_2,pas_allocation_kind param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = pas_immortal_heap_allocate_with_manual_alignment(param_1,8,param_2,param_3);
  if (((ulonglong)pvVar2 & 7) == 0) {
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_immortal_heap_decommit @ 140d69940

ulong64 __cdecl pas_immortal_heap_decommit(void)

{
  ulong64 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  if (pas_immortal_heap_is_committed == true) {
    uVar1 = decommit_slack();
    pas_immortal_heap_is_committed = false;
  }
  else {
    uVar1 = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  return uVar1;
}

// pas_immortal_heap_scavenge_periodic @ 140d69990

bool __cdecl pas_immortal_heap_scavenge_periodic(void)

{
  bool bVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  if (pas_immortal_heap_is_committed == true) {
    bVar1 = pas_immortal_heap_clean_count < 3;
    if (bVar1) {
      pas_immortal_heap_clean_count = pas_immortal_heap_clean_count + '\x01';
    }
    else {
      decommit_slack();
      pas_immortal_heap_is_committed = false;
      pas_immortal_heap_clean_count = '\0';
    }
  }
  else {
    bVar1 = false;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  return bVar1;
}

