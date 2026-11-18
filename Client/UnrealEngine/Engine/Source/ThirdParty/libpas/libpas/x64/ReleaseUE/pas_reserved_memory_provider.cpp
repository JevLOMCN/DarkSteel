// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_reserved_memory_provider_create @ 140da6060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_reserved_memory_provider * __cdecl
pas_reserved_memory_provider_create(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  pas_simple_large_free_heap *ppVar2;
  pas_reserved_memory_provider *ppVar3;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  ppVar2 = pas_immortal_heap_allocate(0x20,"pas_reserved_memory_provider",pas_object_allocation);
  local_50.type_size = 1;
  local_50.min_alignment = 1;
  local_50.aligned_allocator = null_aligned_allocator;
  local_50.aligned_allocator_arg = (void *)0x0;
  local_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_50.deallocator_arg = (void *)0x0;
  pas_simple_large_free_heap_construct(ppVar2);
  pas_simple_large_free_heap_deallocate(ppVar2,param_1,param_2,pas_zero_mode_is_all_zero,&local_50);
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return (pas_reserved_memory_provider *)ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar3 = (pas_reserved_memory_provider *)(*pcVar1)();
  return ppVar3;
}

// pas_reserved_memory_provider_construct @ 140da6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_reserved_memory_provider_construct
          (pas_reserved_memory_provider *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  undefined1 auStackY_78 [32];
  pas_large_free_heap_config local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_50.type_size = 1;
  local_50.min_alignment = 1;
  local_50.aligned_allocator = null_aligned_allocator;
  local_50.aligned_allocator_arg = (void *)0x0;
  local_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_50.deallocator_arg = (void *)0x0;
  pas_simple_large_free_heap_construct(&param_1->free_heap);
  pas_simple_large_free_heap_deallocate
            (&param_1->free_heap,param_2,param_3,pas_zero_mode_is_all_zero,&local_50);
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_reserved_memory_provider_try_allocate @ 140da61b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_reserved_memory_provider_try_allocate
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_heap *param_4,pas_physical_memory_transaction *param_5,
          pas_primordial_page_state param_6,void *param_7)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_88 [32];
  pas_alignment local_58;
  pas_large_free_heap_config local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48.type_size = 1;
  local_48.min_alignment = 1;
  local_48.aligned_allocator = null_aligned_allocator;
  local_48.aligned_allocator_arg = (void *)0x0;
  local_48.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_48.deallocator_arg = (void *)0x0;
  local_58.alignment = param_2->alignment;
  local_58.alignment_begin = param_2->alignment_begin;
  pas_simple_large_free_heap_try_allocate
            (__return_storage_ptr__,param_7,param_1,&local_58,&local_48);
  if (__return_storage_ptr__->did_succeed == true) {
    pas_reservation_convert_to_state((void *)__return_storage_ptr__->begin,param_1,param_6);
  }
  if ((local_18 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// null_aligned_allocator @ 140da6270

pas_aligned_allocation_result * __cdecl
null_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  __return_storage_ptr__->right_padding = (void *)0x0;
  __return_storage_ptr__->right_padding_size = 0;
  __return_storage_ptr__->left_padding = (void *)0x0;
  __return_storage_ptr__->left_padding_size = 0;
  __return_storage_ptr__->result = (void *)0x0;
  __return_storage_ptr__->result_size = 0;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  return __return_storage_ptr__;
}

