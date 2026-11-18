// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_reserve_commit_cache_large_free_heap_construct @ 140da8b50

void __cdecl
pas_reserve_commit_cache_large_free_heap_construct
          (pas_reserve_commit_cache_large_free_heap *param_1)

{
  if (pas_reservation_commit_mode == pas_decommitted) {
    pas_simple_decommittable_large_free_heap_construct(&param_1->private_base);
    return;
  }
  (param_1->private_base).private_base.private_base.free_list_capacity = 0;
  (param_1->private_base).private_base.private_base.num_mapped_bytes = 0;
  (param_1->private_base).private_base.private_base.free_list = (pas_large_free *)0x0;
  (param_1->private_base).private_base.private_base.free_list_size = 0;
  return;
}

// pas_reserve_commit_cache_large_free_heap_try_allocate @ 140da8b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_reserve_commit_cache_large_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,
          pas_reserve_commit_cache_large_free_heap *param_1,ulong64 param_2,pas_alignment *param_3,
          pas_large_free_heap_config *param_4)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_58 [32];
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (pas_reservation_commit_mode == pas_decommitted) {
    local_28.alignment = param_3->alignment;
    local_28.alignment_begin = param_3->alignment_begin;
    pas_simple_decommittable_large_free_heap_try_allocate
              (__return_storage_ptr__,&param_1->private_base,param_2,&local_28,param_4);
    if ((local_10 ^ (ulonglong)auStackY_58) != __security_cookie.value) goto LAB_140da8bf9;
  }
  else {
    local_28.alignment = param_3->alignment;
    local_28.alignment_begin = param_3->alignment_begin;
    pas_simple_large_free_heap_try_allocate
              (__return_storage_ptr__,(pas_simple_large_free_heap *)param_1,param_2,&local_28,
               param_4);
    if ((local_10 ^ (ulonglong)auStackY_58) != __security_cookie.value) {
LAB_140da8bf9:
      pcVar1 = (code *)swi(3);
      ppVar2 = (pas_allocation_result *)(*pcVar1)();
      return ppVar2;
    }
  }
  return __return_storage_ptr__;
}

// pas_reserve_commit_cache_large_free_heap_deallocate @ 140da8c10

void __cdecl
pas_reserve_commit_cache_large_free_heap_deallocate
          (pas_reserve_commit_cache_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,
          pas_zero_mode param_4,pas_large_free_heap_config *param_5)

{
  if (pas_reservation_commit_mode != pas_decommitted) {
    pas_simple_large_free_heap_deallocate
              ((pas_simple_large_free_heap *)param_1,param_2,param_3,param_4,param_5);
    return;
  }
  pas_simple_decommittable_large_free_heap_deallocate
            (&param_1->private_base,param_2,param_3,param_4,param_5);
  return;
}

