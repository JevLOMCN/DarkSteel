// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_medium_megapage_cache_try_allocate @ 140d81390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_medium_megapage_cache_try_allocate
          (pas_megapage_cache *param_1,pas_page_base_config *param_2,bool param_3,pas_heap *param_4,
          pas_physical_memory_transaction *param_5)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_68 [40];
  pas_megapage_cache_config local_40;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40.megapage_size = 0x1000000;
  local_40.allocation_size = param_2->page_size;
  if ((local_40.allocation_size ^ local_40.allocation_size - 1) <= local_40.allocation_size - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_40.allocation_alignment.alignment_begin = 0;
  local_40.table_set_by_index = (_func___cdecl_void_ulong64_void_ptr *)0x0;
  local_40.table_set_by_index_arg = (void *)0x0;
  local_40.allocation_alignment.alignment = local_40.allocation_size;
  local_40.should_zero = param_3;
  pvVar2 = pas_megapage_cache_try_allocate(param_1,&local_40,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

