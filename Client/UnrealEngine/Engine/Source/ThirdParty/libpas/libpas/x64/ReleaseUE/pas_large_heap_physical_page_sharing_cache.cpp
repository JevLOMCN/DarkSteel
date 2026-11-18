// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_large_heap_physical_page_sharing_cache_construct @ 140da5a00

void __cdecl
pas_large_heap_physical_page_sharing_cache_construct
          (pas_large_heap_physical_page_sharing_cache *param_1,
          _func___cdecl_pas_allocation_result_ulong64_pas_alignment_char_ptr_pas_heap_ptr_pas_physical_memory_transaction_ptr_pas_primordial_page_state_void_ptr
          *param_2,void *param_3)

{
  pas_simple_large_free_heap_construct(&param_1->free_heap);
  param_1->provider = param_2;
  param_1->provider_arg = param_3;
  return;
}

// pas_large_heap_physical_page_sharing_cache_try_allocate_with_alignment @ 140da5a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_large_heap_physical_page_sharing_cache_try_allocate_with_alignment
          (pas_allocation_result *__return_storage_ptr__,
          pas_large_heap_physical_page_sharing_cache *param_1,ulong64 param_2,pas_alignment *param_3
          ,pas_heap_config *param_4)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_98 [32];
  pas_alignment local_68;
  pas_large_free_heap_config local_50;
  pas_large_heap_physical_page_sharing_cache *local_20;
  pas_heap_config *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_18 = param_4;
  local_50.type_size = 1;
  local_50.min_alignment = 1;
  local_50.aligned_allocator = large_aligned_allocator;
  local_50.aligned_allocator_arg = &local_20;
  local_50.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_50.deallocator_arg = (void *)0x0;
  local_68.alignment = param_3->alignment;
  local_68.alignment_begin = param_3->alignment_begin;
  local_20 = param_1;
  pas_simple_large_free_heap_try_allocate
            (__return_storage_ptr__,&param_1->free_heap,param_2,&local_68,&local_50);
  if ((local_10 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// large_aligned_allocator @ 140da5ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
large_aligned_allocator
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  pas_aligned_allocation_result *ppVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  pas_range local_60;
  ulonglong local_50;
  ulonglong local_48;
  void *local_40;
  byte local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
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
  local_50 = param_2->alignment;
  if ((local_50 ^ local_50 - 1) <= local_50 - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_48 = param_2->alignment_begin;
  if (local_48 < local_50) {
    if (local_50 <= pas_page_malloc_cached_alignment) {
      local_50 = pas_page_malloc_cached_alignment;
    }
    if ((local_50 ^ local_50 - 1) <= local_50 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = -pas_page_malloc_cached_alignment & (param_1 + pas_page_malloc_cached_alignment) - 1;
    __return_storage_ptr__->right_padding = (void *)0x0;
    __return_storage_ptr__->right_padding_size = 0;
    __return_storage_ptr__->left_padding = (void *)0x0;
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->result = (void *)0x0;
    __return_storage_ptr__->result_size = 0;
    *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
    local_70 = *(undefined8 *)(*(longlong *)param_3 + 0x28);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    (**(code **)(*(longlong *)param_3 + 0x20))
              (&local_40,uVar4,&local_50,"pas_large_heap_physical_page_sharing_cache/chunk");
    if ((local_38 & 1) != 0) {
      if (local_34 != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_60.end = (longlong)local_40 + uVar4;
      if (CARRY8((ulonglong)local_40,uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_60.begin = (ulong64)local_40;
      pas_enumerable_range_list_append
                (&pas_large_heap_physical_page_sharing_cache_page_list,&local_60);
      __return_storage_ptr__->result = local_40;
      __return_storage_ptr__->result_size = param_1;
      __return_storage_ptr__->left_padding = local_40;
      __return_storage_ptr__->left_padding_size = 0;
      __return_storage_ptr__->right_padding = (void *)((longlong)local_40 + param_1);
      __return_storage_ptr__->right_padding_size = uVar4 - param_1;
      __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
    }
    if ((local_30 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar3 = (pas_aligned_allocation_result *)(*pcVar1)();
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

