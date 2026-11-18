// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_compute_summary_live_object_callback @ 140da37a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_compute_summary_live_object_callback(ulong64 param_1,ulong64 param_2,void *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 uVar3;
  undefined1 auStack_c8 [32];
  pas_range local_a8;
  pas_heap_summary local_98;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_a8.begin = param_1;
  local_a8.end = param_2;
  pas_large_sharing_pool_compute_summary
            (&local_98,&local_a8,pas_large_sharing_pool_compute_summary_known_allocated,
             pas_lock_is_held);
  if (local_98.free != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_98.allocated == param_2 - param_1) {
    *(ulong64 *)((longlong)param_3 + 8) = *(longlong *)((longlong)param_3 + 8) + local_98.allocated;
    *(ulong64 *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + local_98.meta
    ;
    *(ulong64 *)((longlong)param_3 + 0x18) =
         *(longlong *)((longlong)param_3 + 0x18) + local_98.committed;
    *(ulong64 *)((longlong)param_3 + 0x20) =
         *(longlong *)((longlong)param_3 + 0x20) + local_98.decommitted;
    *(ulong64 *)((longlong)param_3 + 0x28) =
         *(longlong *)((longlong)param_3 + 0x28) + local_98.free_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_3 + 0x30) =
         *(longlong *)((longlong)param_3 + 0x30) + local_98.free_eligible_for_decommit;
    *(ulong64 *)((longlong)param_3 + 0x38) =
         *(longlong *)((longlong)param_3 + 0x38) + local_98.free_decommitted;
    *(ulong64 *)((longlong)param_3 + 0x40) =
         *(longlong *)((longlong)param_3 + 0x40) + local_98.meta_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_3 + 0x48) =
         *(longlong *)((longlong)param_3 + 0x48) + local_98.meta_eligible_for_decommit;
    *(ulong64 *)((longlong)param_3 + 0x50) =
         *(longlong *)((longlong)param_3 + 0x50) + local_98.cached;
    if ((local_40 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
      return true;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compute_summary_live_object_callback_without_physical_sharing @ 140da38e0

bool __cdecl
pas_compute_summary_live_object_callback_without_physical_sharing
          (ulong64 param_1,ulong64 param_2,void *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    *(longlong *)((longlong)param_3 + 8) =
         *(longlong *)((longlong)param_3 + 8) + (param_2 - param_1);
    *(longlong *)((longlong)param_3 + 0x18) =
         *(longlong *)((longlong)param_3 + 0x18) + (param_2 - param_1);
    return true;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compute_summary_live_object_callback_for_config @ 140da3920

_func___cdecl_bool_ulong64_ulong64_void_ptr * __cdecl
pas_compute_summary_live_object_callback_for_config(pas_heap_config *param_1)

{
  code *pcVar1;
  
  pcVar1 = pas_compute_summary_live_object_callback_without_physical_sharing;
  if (param_1->aligned_allocator_talks_to_sharing_pool != false) {
    pcVar1 = pas_compute_summary_live_object_callback;
  }
  return pcVar1;
}

// pas_compute_summary_dead_object_callback @ 140da3940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_compute_summary_dead_object_callback(pas_large_free *param_1,void *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 uVar3;
  undefined1 auStack_a8 [32];
  pas_range local_88;
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_88.end = *(ulonglong *)&param_1->end & 0xffffffffffff;
  local_88.begin = *(ulonglong *)param_1 & 0xffffffffffff;
  if (local_88.end < local_88.begin) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_large_sharing_pool_compute_summary
            (&local_78,&local_88,pas_large_sharing_pool_compute_summary_known_free,pas_lock_is_held)
  ;
  if (local_78.allocated != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_78.free ==
      (*(ulonglong *)&param_1->end & 0xffffffffffff) - (*(ulonglong *)param_1 & 0xffffffffffff)) {
    *(ulong64 *)param_2 = *(longlong *)param_2 + local_78.free;
    *(ulong64 *)((longlong)param_2 + 0x10) = *(longlong *)((longlong)param_2 + 0x10) + local_78.meta
    ;
    *(ulong64 *)((longlong)param_2 + 0x18) =
         *(longlong *)((longlong)param_2 + 0x18) + local_78.committed;
    *(ulong64 *)((longlong)param_2 + 0x20) =
         *(longlong *)((longlong)param_2 + 0x20) + local_78.decommitted;
    *(ulong64 *)((longlong)param_2 + 0x28) =
         *(longlong *)((longlong)param_2 + 0x28) + local_78.free_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x30) =
         *(longlong *)((longlong)param_2 + 0x30) + local_78.free_eligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x38) =
         *(longlong *)((longlong)param_2 + 0x38) + local_78.free_decommitted;
    *(ulong64 *)((longlong)param_2 + 0x40) =
         *(longlong *)((longlong)param_2 + 0x40) + local_78.meta_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x48) =
         *(longlong *)((longlong)param_2 + 0x48) + local_78.meta_eligible_for_decommit;
    *(longlong *)((longlong)param_2 + 0x50) =
         *(longlong *)((longlong)param_2 + 0x50) + local_78.cached;
    if ((local_20 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
      return true;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compute_summary_dead_object_callback_without_physical_sharing @ 140da3a80

bool __cdecl
pas_compute_summary_dead_object_callback_without_physical_sharing
          (pas_large_free *param_1,void *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    lVar3 = (*(ulonglong *)&param_1->end & 0xffffffffffff) -
            (*(ulonglong *)param_1 & 0xffffffffffff);
    *(longlong *)param_2 = *(longlong *)param_2 + lVar3;
    *(longlong *)((longlong)param_2 + 0x18) = *(longlong *)((longlong)param_2 + 0x18) + lVar3;
    *(longlong *)((longlong)param_2 + 0x28) = *(longlong *)((longlong)param_2 + 0x28) + lVar3;
    return true;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compute_summary_dead_object_callback_for_config @ 140da3ad0

_func___cdecl_bool_pas_large_free_void_ptr * __cdecl
pas_compute_summary_dead_object_callback_for_config(pas_heap_config *param_1)

{
  code *pcVar1;
  
  pcVar1 = pas_compute_summary_dead_object_callback_without_physical_sharing;
  if (param_1->aligned_allocator_talks_to_sharing_pool != false) {
    pcVar1 = pas_compute_summary_dead_object_callback;
  }
  return pcVar1;
}

