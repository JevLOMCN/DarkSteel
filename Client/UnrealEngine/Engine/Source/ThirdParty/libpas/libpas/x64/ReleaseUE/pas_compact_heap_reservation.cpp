// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_compact_heap_reservation_try_allocate @ 140d660e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
pas_compact_heap_reservation_try_allocate
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  pas_aligned_allocation_result *ppVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined1 auStack_a8 [32];
  pas_alignment local_88;
  pas_aligned_allocation_result local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_compact_heap_reservation_lock);
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar5 = pas_page_malloc_cached_alignment;
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_compact_heap_reservation_base == 0) {
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar9 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar9 & pas_compact_heap_reservation_size) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_88.alignment = 1;
    local_88.alignment_begin = 0;
    pas_page_malloc_try_allocate_without_deallocating_padding
              (&local_78,pas_compact_heap_reservation_size,&local_88,pas_reservation_commit_mode);
    if (local_78.left_padding_size != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (local_78.right_padding_size != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (local_78.result == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (local_78.result_size != pas_compact_heap_reservation_size) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_compact_heap_reservation_base = (ulong64)local_78.result;
    if (pas_page_malloc_cached_alignment == 0) {
      pas_compact_heap_reservation_bump = pas_page_malloc_alignment_slow();
      pas_page_malloc_cached_alignment = pas_compact_heap_reservation_bump;
      if (pas_compact_heap_reservation_bump == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
    }
    else {
      pas_compact_heap_reservation_bump = pas_page_malloc_cached_alignment;
    }
    uVar9 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((pas_compact_heap_reservation_base & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar9 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((pas_compact_heap_reservation_base & uVar9) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar4 = pas_compact_heap_reservation_bump;
  uVar3 = pas_compact_heap_reservation_base;
  uVar9 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar9 & pas_compact_heap_reservation_bump) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar8 = (void *)(pas_compact_heap_reservation_size + pas_compact_heap_reservation_base);
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar9 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar9 & (ulonglong)pvVar8) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar9 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar10 = (void *)(uVar3 + uVar4);
  if ((uVar9 & (ulonglong)pvVar10) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar9 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar7 = (void *)(-param_2 & (longlong)pvVar10 + (param_2 - 1));
  if ((uVar9 & (ulonglong)pvVar7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = -uVar5 & (param_1 + uVar5) - 1;
  if ((bool)(pvVar10 <= pvVar7 & ~(pvVar8 < pvVar7) &
            uVar9 <= (ulonglong)((longlong)pvVar8 - (longlong)pvVar7))) {
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar1 & (longlong)pvVar7 + uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_compact_heap_reservation_bump =
         ((longlong)pvVar7 + uVar9) - pas_compact_heap_reservation_base;
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((pas_compact_heap_reservation_bump & uVar1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_compact_heap_reservation_lock);
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar1 & (ulonglong)pvVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar1 & (longlong)pvVar7 - (longlong)pvVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar1 & (ulonglong)pvVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    uVar1 = pas_page_malloc_cached_alignment - 1;
    if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar1 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    __return_storage_ptr__->result = pvVar7;
    __return_storage_ptr__->result_size = param_1;
    __return_storage_ptr__->left_padding = pvVar10;
    __return_storage_ptr__->left_padding_size = (longlong)pvVar7 - (longlong)pvVar10;
    __return_storage_ptr__->right_padding = (void *)((longlong)pvVar7 + param_1);
    __return_storage_ptr__->right_padding_size = uVar9 - param_1;
    __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
    if ((local_40 ^ (ulonglong)auStack_a8) != __security_cookie.value) goto LAB_140d6653e;
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_compact_heap_reservation_lock);
    __return_storage_ptr__->right_padding = (void *)0x0;
    __return_storage_ptr__->right_padding_size = 0;
    __return_storage_ptr__->left_padding = (void *)0x0;
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->result = (void *)0x0;
    __return_storage_ptr__->result_size = 0;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_40 ^ (ulonglong)auStack_a8) != __security_cookie.value) {
LAB_140d6653e:
      pcVar2 = (code *)swi(3);
      ppVar6 = (pas_aligned_allocation_result *)(*pcVar2)();
      return ppVar6;
    }
  }
  return __return_storage_ptr__;
}

