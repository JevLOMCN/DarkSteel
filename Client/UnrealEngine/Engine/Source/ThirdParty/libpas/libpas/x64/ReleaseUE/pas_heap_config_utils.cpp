// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_heap_config_utils_null_activate @ 140d83310

void __cdecl pas_heap_config_utils_null_activate(void)

{
  return;
}

// pas_heap_config_utils_for_each_shared_page_directory @ 140d83320

bool __cdecl
pas_heap_config_utils_for_each_shared_page_directory
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_shared_page_directory_ptr_void_ptr *param_2,
          void *param_3)

{
  pas_heap_runtime_config *ppVar1;
  bool bVar2;
  
  ppVar1 = param_1->runtime_config;
  bVar2 = pas_shared_page_directory_by_size_for_each
                    ((pas_shared_page_directory_by_size *)(*(longlong *)(ppVar1 + 1) + 0x90),param_2
                     ,param_3);
  if (bVar2) {
    bVar2 = pas_shared_page_directory_by_size_for_each
                      ((pas_shared_page_directory_by_size *)(*(longlong *)(ppVar1 + 1) + 0x160),
                       param_2,param_3);
    return bVar2;
  }
  return false;
}

// pas_heap_config_utils_for_each_shared_page_directory_remote @ 140d83370

bool __cdecl
pas_heap_config_utils_for_each_shared_page_directory_remote
          (pas_enumerator *param_1,pas_segregated_heap *param_2,
          _func___cdecl_bool_pas_enumerator_ptr_pas_segregated_shared_page_directory_ptr_void_ptr
          *param_3,void *param_4)

{
  bool bVar1;
  void *pvVar2;
  
  pvVar2 = pas_enumerator_read(param_1,param_2->runtime_config,0x30);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = pas_enumerator_read(param_1,*(void **)((longlong)pvVar2 + 0x28),0x170);
    if (pvVar2 != (void *)0x0) {
      bVar1 = pas_shared_page_directory_by_size_for_each_remote
                        ((pas_shared_page_directory_by_size *)((longlong)pvVar2 + 0x90),param_1,
                         param_3,param_4);
      if (bVar1) {
        bVar1 = pas_shared_page_directory_by_size_for_each_remote
                          ((pas_shared_page_directory_by_size *)((longlong)pvVar2 + 0x160),param_1,
                           param_3,param_4);
        return bVar1;
      }
    }
  }
  return false;
}

// pas_heap_config_utils_allocate_aligned @ 140d83400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
pas_heap_config_utils_allocate_aligned
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,pas_large_heap *param_3,pas_heap_config *param_4)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  ulonglong uVar3;
  undefined1 auStackY_78 [32];
  pas_alignment local_48;
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  __return_storage_ptr__->right_padding = (void *)0x0;
  __return_storage_ptr__->right_padding_size = 0;
  __return_storage_ptr__->left_padding = (void *)0x0;
  __return_storage_ptr__->left_padding_size = 0;
  __return_storage_ptr__->result = (void *)0x0;
  __return_storage_ptr__->result_size = 0;
  *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
  uVar3 = param_2->alignment;
  if ((uVar3 ^ uVar3 - 1) <= uVar3 - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = -uVar3 & (param_1 + uVar3) - 1;
  local_48.alignment = param_2->alignment;
  local_48.alignment_begin = param_2->alignment_begin;
  pas_large_heap_physical_page_sharing_cache_try_allocate_with_alignment
            (&local_30,
             *(pas_large_heap_physical_page_sharing_cache **)
              (param_3[-3].free_heap.num_mapped_bytes + 0x28),uVar3,&local_48,param_4);
  if ((local_30.did_succeed & 1U) != 0) {
    if (local_30.zero_mode == pas_zero_mode_may_have_non_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    __return_storage_ptr__->result = (void *)local_30.begin;
    __return_storage_ptr__->result_size = param_1;
    __return_storage_ptr__->left_padding = (void *)local_30.begin;
    __return_storage_ptr__->left_padding_size = 0;
    __return_storage_ptr__->right_padding = (void *)(local_30.begin + param_1);
    __return_storage_ptr__->right_padding_size = uVar3 - param_1;
    __return_storage_ptr__->zero_mode = local_30.zero_mode;
  }
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_heap_config_utils_prepare_to_enumerate @ 140d834f0

void * __cdecl
pas_heap_config_utils_prepare_to_enumerate(pas_enumerator *param_1,pas_heap_config *param_2)

{
  bool bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  pas_basic_heap_config_enumerator_data *ppVar4;
  pas_page_header_table *ppVar5;
  
  pvVar2 = pas_enumerator_read(param_1,param_1->root->heap_configs,0x20);
  if (((pvVar2 != (void *)0x0) &&
      (pvVar2 = pas_enumerator_read(param_1,*(void **)((longlong)pvVar2 +
                                                      (longlong)(int)param_2->kind * 8),0x498),
      pvVar2 != (void *)0x0)) &&
     (puVar3 = pas_enumerator_read(param_1,*(void **)((longlong)pvVar2 + 0x440),0x10),
     puVar3 != (undefined8 *)0x0)) {
    ppVar4 = pas_enumerator_allocate(param_1,0x18);
    (ppVar4->page_header_table).table = (pas_ptr_hash_map_entry *)0x0;
    (ppVar4->page_header_table).table_size = 0;
    (ppVar4->page_header_table).table_mask = 0;
    (ppVar4->page_header_table).key_count = 0;
    (ppVar4->page_header_table).deleted_count = 0;
    ppVar5 = pas_enumerator_read(param_1,(void *)*puVar3,0x10);
    bVar1 = pas_basic_heap_config_enumerator_data_add_page_header_table(ppVar4,param_1,ppVar5);
    if (bVar1) {
      ppVar5 = pas_enumerator_read(param_1,(void *)puVar3[1],0x10);
      bVar1 = pas_basic_heap_config_enumerator_data_add_page_header_table(ppVar4,param_1,ppVar5);
      if (!bVar1) {
        return (void *)0x0;
      }
      return ppVar4;
    }
  }
  return (void *)0x0;
}

