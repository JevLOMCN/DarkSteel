// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_simple_decommittable_large_free_heap_construct @ 140da8750

void __cdecl
pas_simple_decommittable_large_free_heap_construct
          (pas_simple_decommittable_large_free_heap *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    pas_manually_decommittable_large_free_heap_construct(&param_1->private_base);
    pas_page_sharing_participant_payload_with_use_epoch_construct(&param_1->sharing_payload);
    param_1->is_added_to_sharing_pool = false;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_simple_decommittable_large_free_heap_commit @ 140da8790

ulong64 __cdecl
pas_simple_decommittable_large_free_heap_commit(pas_simple_decommittable_large_free_heap *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulong64 uVar3;
  pas_page_sharing_participant_opaque *ppVar4;
  ulong64 uVar5;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    uVar3 = pas_manually_decommittable_large_free_heap_commit(&param_1->private_base);
    if (param_1->is_added_to_sharing_pool == false) {
      ppVar4 = pas_page_sharing_participant_create
                         (param_1,pas_page_sharing_participant_simple_decommittable_large_free_heap)
      ;
      pas_page_sharing_pool_add(&pas_physical_page_sharing_pool,ppVar4);
      param_1->is_added_to_sharing_pool = true;
    }
    uVar5 = pas_get_epoch();
    (param_1->sharing_payload).use_epoch = uVar5;
    ppVar4 = pas_page_sharing_participant_create
                       (param_1,pas_page_sharing_participant_simple_decommittable_large_free_heap);
    pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar4);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_simple_decommittable_large_free_heap_is_eligible @ 140da8820

bool __cdecl
pas_simple_decommittable_large_free_heap_is_eligible
          (pas_simple_decommittable_large_free_heap *param_1)

{
  return (param_1->private_base).is_committed;
}

// pas_simple_decommittable_large_free_heap_decommit @ 140da8830

pas_page_sharing_pool_take_result __cdecl
pas_simple_decommittable_large_free_heap_decommit
          (pas_simple_decommittable_large_free_heap *param_1,pas_deferred_decommit_log *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulong64 uVar3;
  pas_page_sharing_participant_opaque *ppVar4;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->is_added_to_sharing_pool != false) {
    uVar3 = pas_manually_decommittable_large_free_heap_decommit(&param_1->private_base);
    param_2->total = param_2->total + uVar3;
    ppVar4 = pas_page_sharing_participant_create
                       (param_1,pas_page_sharing_participant_simple_decommittable_large_free_heap);
    pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar4);
    return (uint)(uVar3 != 0) * 3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_simple_decommittable_large_free_heap_try_allocate @ 140da88a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_simple_decommittable_large_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,
          pas_simple_decommittable_large_free_heap *param_1,ulong64 param_2,pas_alignment *param_3,
          pas_large_free_heap_config *param_4)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_78 [32];
  pas_alignment local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pas_simple_decommittable_large_free_heap_commit(param_1);
  local_48.alignment = param_3->alignment;
  local_48.alignment_begin = param_3->alignment_begin;
  pas_manually_decommittable_large_free_heap_try_allocate
            (__return_storage_ptr__,&param_1->private_base,param_2,&local_48,param_4);
  if ((local_30 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_simple_decommittable_large_free_heap_deallocate @ 140da8930

void __cdecl
pas_simple_decommittable_large_free_heap_deallocate
          (pas_simple_decommittable_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,
          pas_zero_mode param_4,pas_large_free_heap_config *param_5)

{
  pas_simple_decommittable_large_free_heap_commit(param_1);
  pas_manually_decommittable_large_free_heap_deallocate
            (&param_1->private_base,param_2,param_3,param_4,param_5);
  return;
}

