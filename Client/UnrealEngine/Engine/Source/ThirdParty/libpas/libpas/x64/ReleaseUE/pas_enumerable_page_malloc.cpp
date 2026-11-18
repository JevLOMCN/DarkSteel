// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_enumerable_page_malloc_try_allocate_without_deallocating_padding @ 140d91940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
pas_enumerable_page_malloc_try_allocate_without_deallocating_padding
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,pas_commit_mode param_3)

{
  code *pcVar1;
  pas_aligned_allocation_result *ppVar2;
  undefined1 auStack_58 [32];
  pas_range local_38;
  pas_alignment local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28.alignment = param_2->alignment;
  local_28.alignment_begin = param_2->alignment_begin;
  pas_page_malloc_try_allocate_without_deallocating_padding
            (__return_storage_ptr__,param_1,&local_28,param_3);
  if (__return_storage_ptr__->result != (void *)0x0) {
    local_38.begin = (ulong64)__return_storage_ptr__->left_padding;
    local_38.end = __return_storage_ptr__->right_padding_size +
                   (longlong)__return_storage_ptr__->right_padding;
    if (local_38.end < local_38.begin) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_enumerable_range_list_append(&pas_enumerable_page_malloc_page_list,&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_aligned_allocation_result *)(*pcVar1)();
  return ppVar2;
}

