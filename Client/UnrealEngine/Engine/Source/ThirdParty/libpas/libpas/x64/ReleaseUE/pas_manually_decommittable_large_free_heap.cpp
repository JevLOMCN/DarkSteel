// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 7

// pas_manually_decommittable_large_free_heap_construct @ 140d92e80

void __cdecl
pas_manually_decommittable_large_free_heap_construct
          (pas_manually_decommittable_large_free_heap *param_1)

{
  pas_simple_large_free_heap_construct(&param_1->private_base);
  param_1->is_committed = true;
  param_1->clean_count = '\0';
  return;
}

// pas_manually_decommittable_large_free_heap_commit @ 140d92ea0

ulong64 __cdecl
pas_manually_decommittable_large_free_heap_commit
          (pas_manually_decommittable_large_free_heap *param_1)

{
  pas_large_free *ppVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *pvVar9;
  ulong64 uVar10;
  longlong lVar11;
  ulong64 uVar12;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  param_1->clean_count = '\0';
  if (param_1->is_committed == false) {
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar5 != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar12 = (param_1->private_base).free_list_size;
    if (uVar12 == 0) {
      uVar10 = 0;
    }
    else {
      lVar11 = uVar12 * 0x20 + -0x18;
      uVar10 = 0;
      uVar6 = pas_page_malloc_cached_alignment;
      do {
        ppVar1 = (param_1->private_base).free_list;
        uVar2 = *(ulonglong *)((longlong)ppVar1 + lVar11 + -8);
        uVar3 = *(ulonglong *)((longlong)&ppVar1->begin + lVar11);
        if (uVar6 == 0) {
          uVar6 = pas_page_malloc_alignment_slow();
          pas_page_malloc_cached_alignment = uVar6;
        }
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar7 = uVar6;
        if (uVar6 == 0) {
          uVar7 = pas_page_malloc_alignment_slow();
          pas_page_malloc_cached_alignment = uVar7;
        }
        if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pvVar8 = (void *)(-uVar6 & (uVar6 + (uVar2 & 0xffffffffffff)) - 1);
        pvVar9 = (void *)(-uVar7 & uVar3 & 0xffffffffffff);
        uVar6 = uVar7;
        if (pvVar8 <= pvVar9 && (longlong)pvVar9 - (longlong)pvVar8 != 0) {
          pas_page_malloc_commit(pvVar8,(longlong)pvVar9 - (longlong)pvVar8,pas_may_mmap);
          uVar10 = (uVar10 - (longlong)pvVar8) + (longlong)pvVar9;
          uVar6 = pas_page_malloc_cached_alignment;
        }
        uVar12 = uVar12 - 1;
        lVar11 = lVar11 + -0x20;
      } while (uVar12 != 0);
    }
    param_1->is_committed = true;
    pas_scavenger_did_create_eligible();
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

// pas_manually_decommittable_large_free_heap_decommit @ 140d93000

ulong64 __cdecl
pas_manually_decommittable_large_free_heap_decommit
          (pas_manually_decommittable_large_free_heap *param_1)

{
  pas_large_free *ppVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *pvVar9;
  ulong64 uVar10;
  longlong lVar11;
  ulong64 uVar12;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_1->is_committed == true) {
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar5 != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar12 = (param_1->private_base).free_list_size;
    if (uVar12 == 0) {
      uVar10 = 0;
    }
    else {
      lVar11 = uVar12 * 0x20 + -0x18;
      uVar10 = 0;
      uVar6 = pas_page_malloc_cached_alignment;
      do {
        ppVar1 = (param_1->private_base).free_list;
        uVar2 = *(ulonglong *)((longlong)ppVar1 + lVar11 + -8);
        uVar3 = *(ulonglong *)((longlong)&ppVar1->begin + lVar11);
        if (uVar6 == 0) {
          uVar6 = pas_page_malloc_alignment_slow();
          pas_page_malloc_cached_alignment = uVar6;
        }
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar7 = uVar6;
        if (uVar6 == 0) {
          uVar7 = pas_page_malloc_alignment_slow();
          pas_page_malloc_cached_alignment = uVar7;
        }
        if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pvVar8 = (void *)(-uVar6 & (uVar6 + (uVar2 & 0xffffffffffff)) - 1);
        pvVar9 = (void *)(-uVar7 & uVar3 & 0xffffffffffff);
        uVar6 = uVar7;
        if (pvVar8 <= pvVar9 && (longlong)pvVar9 - (longlong)pvVar8 != 0) {
          pas_page_malloc_decommit(pvVar8,(longlong)pvVar9 - (longlong)pvVar8,pas_may_mmap);
          uVar10 = (uVar10 - (longlong)pvVar8) + (longlong)pvVar9;
          uVar6 = pas_page_malloc_cached_alignment;
        }
        uVar12 = uVar12 - 1;
        lVar11 = lVar11 + -0x20;
      } while (uVar12 != 0);
    }
    param_1->is_committed = false;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

// pas_manually_decommittable_large_free_heap_scavenge_periodic @ 140d93160

bool __cdecl
pas_manually_decommittable_large_free_heap_scavenge_periodic
          (pas_manually_decommittable_large_free_heap *param_1)

{
  byte bVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_1->is_committed == true) {
    bVar1 = param_1->clean_count;
    if (3 < bVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (bVar1 != 3) {
      param_1->clean_count = bVar1 + 1;
      return true;
    }
    param_1->clean_count = '\0';
    pas_manually_decommittable_large_free_heap_decommit(param_1);
  }
  return false;
}

// pas_manually_decommittable_large_free_heap_try_allocate @ 140d931c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_manually_decommittable_large_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,
          pas_manually_decommittable_large_free_heap *param_1,ulong64 param_2,pas_alignment *param_3
          ,pas_large_free_heap_config *param_4)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_58 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (param_1->is_committed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28.alignment = param_3->alignment;
  local_28.alignment_begin = param_3->alignment_begin;
  pas_simple_large_free_heap_try_allocate
            (__return_storage_ptr__,&param_1->private_base,param_2,&local_28,param_4);
  if ((local_10 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_manually_decommittable_large_free_heap_deallocate @ 140d93230

void __cdecl
pas_manually_decommittable_large_free_heap_deallocate
          (pas_manually_decommittable_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,
          pas_zero_mode param_4,pas_large_free_heap_config *param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  pas_large_free_heap_config *in_stack_ffffffffffffffd0;
  
  if (param_1->is_committed == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    merge_physical(&param_1->private_base,param_2,param_3,(ulonglong)param_4,(pas_zero_mode)param_5,
                   in_stack_ffffffffffffffd0);
    fix_free_list_if_necessary(&param_1->private_base,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_manually_decommittable_large_free_heap_get_num_decommitted_bytes @ 140d93250

ulong64 __cdecl
pas_manually_decommittable_large_free_heap_get_num_decommitted_bytes
          (pas_manually_decommittable_large_free_heap *param_1)

{
  pas_large_free *ppVar1;
  ulonglong uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_1->is_committed == false) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = (param_1->private_base).free_list_size;
    if (uVar9 != 0) {
      lVar12 = uVar9 * 0x20 + -0x18;
      uVar10 = 0;
      uVar5 = pas_page_malloc_cached_alignment;
      uVar7 = pas_page_malloc_cached_alignment;
      while( true ) {
        ppVar1 = (param_1->private_base).free_list;
        uVar8 = *(ulonglong *)((longlong)ppVar1 + lVar12 + -8);
        uVar2 = *(ulonglong *)((longlong)&ppVar1->begin + lVar12);
        if (uVar7 == 0) {
          uVar5 = pas_page_malloc_alignment_slow();
          uVar7 = uVar5;
          pas_page_malloc_cached_alignment = uVar5;
        }
        if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar6 = uVar7;
        if (uVar7 == 0) {
          uVar5 = pas_page_malloc_alignment_slow();
          uVar6 = uVar5;
          pas_page_malloc_cached_alignment = uVar5;
        }
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) break;
        uVar9 = uVar9 - 1;
        uVar11 = -uVar7 & (uVar7 + (uVar8 & 0xffffffffffff)) - 1;
        uVar8 = -uVar6 & uVar2 & 0xffffffffffff;
        uVar7 = uVar6;
        if (uVar11 < uVar8) {
          uVar7 = uVar5;
          uVar10 = (uVar10 - uVar11) + uVar8;
        }
        lVar12 = lVar12 + -0x20;
        if (uVar9 == 0) {
          return uVar10;
        }
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  return 0;
}

