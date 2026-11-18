// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_commit_span_construct @ 140d83150

void __cdecl pas_commit_span_construct(pas_commit_span *param_1,pas_mmap_capability param_2)

{
  param_1->index_of_start_of_span = 0xffffffffffffffff;
  param_1->did_add_first = false;
  param_1->total_bytes = 0;
  param_1->mmap_capability = param_2;
  return;
}

// pas_commit_span_add_to_change @ 140d83170

void __cdecl pas_commit_span_add_to_change(pas_commit_span *param_1,ulong64 param_2)

{
  code *pcVar1;
  
  if (param_1->index_of_start_of_span == 0xffffffffffffffff) {
    param_1->index_of_start_of_span = param_2;
    return;
  }
  if (param_1->index_of_start_of_span < param_2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_commit_span_add_unchanged @ 140d83190

void __cdecl
pas_commit_span_add_unchanged
          (pas_commit_span *param_1,void *param_2,ulong64 param_3,pas_page_base_config *param_4,
          _func___cdecl_void_void_ptr_ulong64_void_ptr *param_5,void *param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  ulong64 uVar3;
  
  uVar1 = param_1->index_of_start_of_span;
  if (uVar1 != 0xffffffffffffffff) {
    if (param_3 < uVar1 || param_3 - uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = (param_3 - uVar1) * param_4->granule_size;
    (*param_5)((void *)((longlong)param_2 + uVar1 * param_4->granule_size),uVar3,param_6);
    param_1->index_of_start_of_span = 0xffffffffffffffff;
    param_1->did_add_first = true;
    param_1->total_bytes = param_1->total_bytes + uVar3;
  }
  return;
}

// pas_commit_span_add_unchanged_and_commit @ 140d831f0

void __cdecl
pas_commit_span_add_unchanged_and_commit
          (pas_commit_span *param_1,void *param_2,ulong64 param_3,pas_page_base_config *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulong64 uVar3;
  
  uVar1 = param_1->index_of_start_of_span;
  if (uVar1 != 0xffffffffffffffff) {
    if (param_3 < uVar1 || param_3 - uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = (param_3 - uVar1) * param_4->granule_size;
    pas_page_malloc_commit
              ((void *)((longlong)param_2 + uVar1 * param_4->granule_size),uVar3,
               param_1->mmap_capability);
    param_1->index_of_start_of_span = 0xffffffffffffffff;
    param_1->did_add_first = true;
    param_1->total_bytes = param_1->total_bytes + uVar3;
  }
  return;
}

// pas_commit_span_add_unchanged_and_decommit @ 140d83250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_commit_span_add_unchanged_and_decommit
          (pas_commit_span *param_1,void *param_2,ulong64 param_3,pas_deferred_decommit_log *param_4
          ,pas_lock *param_5,pas_page_base_config *param_6,pas_lock_hold_mode param_7)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  pas_virtual_range local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = param_1->index_of_start_of_span;
  if (uVar1 != 0xffffffffffffffff) {
    if (param_3 < uVar1 || param_3 - uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = (param_3 - uVar1) * param_6->granule_size;
    local_38.begin = (longlong)param_2 + uVar1 * param_6->granule_size;
    local_38.mmap_capability = param_1->mmap_capability;
    local_38.lock_ptr = (pas_lock *)0x0;
    if (param_1->did_add_first == false) {
      local_38.lock_ptr = param_5;
    }
    local_38.end = lVar3 + local_38.begin;
    pas_deferred_decommit_log_add_already_locked(param_4,&local_38,param_7);
    param_1->index_of_start_of_span = 0xffffffffffffffff;
    param_1->did_add_first = true;
    param_1->total_bytes = param_1->total_bytes + lVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

