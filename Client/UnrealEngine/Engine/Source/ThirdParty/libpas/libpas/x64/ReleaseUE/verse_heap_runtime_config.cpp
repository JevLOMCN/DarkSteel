// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// verse_heap_runtime_config_allocate_chunks @ 140da8970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
verse_heap_runtime_config_allocate_chunks
          (pas_allocation_result *__return_storage_ptr__,verse_heap_runtime_config *param_1,
          ulong64 param_2,pas_physical_memory_transaction *param_3,pas_primordial_page_state param_4
          )

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStackY_78 [32];
  pas_alignment local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((param_2 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_30.alignment = 0x80000;
  local_30.alignment_begin = 0;
  (*param_1->page_provider)
            (__return_storage_ptr__,param_2,&local_30,"verse_heap_chunk",(pas_heap *)0x0,param_3,
             param_4,param_1->page_provider_arg);
  if (__return_storage_ptr__->did_succeed == true) {
    if (__return_storage_ptr__->zero_mode == pas_zero_mode_may_have_non_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = __return_storage_ptr__->begin;
    uVar4 = param_2 + uVar3;
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x80000) {
      verse_heap_initialize_chunk_map_entry_ptr(uVar3);
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_78) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    ppVar2 = (pas_allocation_result *)(*pcVar1)();
    return ppVar2;
  }
  return __return_storage_ptr__;
}

// verse_heap_runtime_config_chunks_provider @ 140da8a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
verse_heap_runtime_config_chunks_provider
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,pas_alignment *param_2,
          char *param_3,pas_heap *param_4,pas_physical_memory_transaction *param_5,
          pas_primordial_page_state param_6,void *param_7)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  pas_physical_memory_transaction *local_50;
  pas_primordial_page_state local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_1 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment_begin != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->alignment != 0x80000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_40 = *(undefined8 *)((longlong)param_7 + 0x48);
  local_30 = 0x80000;
  local_28 = 0;
  local_48 = param_6;
  local_50 = param_5;
  local_58 = 0;
  (**(code **)((longlong)param_7 + 0x40))
            (__return_storage_ptr__,param_1,&local_30,"verse_heap_chunk");
  if (__return_storage_ptr__->did_succeed == true) {
    if (__return_storage_ptr__->zero_mode == pas_zero_mode_may_have_non_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = __return_storage_ptr__->begin;
    uVar4 = param_1 + uVar3;
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x80000) {
      verse_heap_initialize_chunk_map_entry_ptr(uVar3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

