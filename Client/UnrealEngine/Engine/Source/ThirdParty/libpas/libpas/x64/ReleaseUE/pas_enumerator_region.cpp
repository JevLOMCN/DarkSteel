// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_enumerator_region_allocate @ 140da9bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_enumerator_region_allocate(pas_enumerator_region **param_1,ulong64 param_2)

{
  pas_enumerator_region *ppVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  pas_alignment local_68;
  pas_aligned_allocation_result local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar6 = param_2 + 7 & 0xfffffffffffffff8;
  ppVar1 = *param_1;
  if (ppVar1 != (pas_enumerator_region *)0x0) {
    uVar2 = ppVar1->offset;
    uVar4 = ppVar1->size - uVar2;
    if (uVar6 <= uVar4) goto joined_r0x000140da9cc7;
  }
  local_68.alignment = 1;
  local_68.alignment_begin = 0;
  pas_page_malloc_try_allocate_without_deallocating_padding
            (&local_58,uVar6 + 0x18,&local_68,pas_committed);
  if (local_58.result == (pas_enumerator_region *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3a,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "allocation_result.result");
  }
  if (local_58.result != local_58.left_padding) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3b,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "allocation_result.result == allocation_result.left_padding");
  }
  if (local_58.left_padding_size != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3c,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "!allocation_result.left_padding_size");
  }
  *(pas_enumerator_region **)local_58.result = ppVar1;
  *(ulong64 *)((longlong)local_58.result + 8) =
       (local_58.result_size + local_58.right_padding_size) - 0x18;
  *(ulong64 *)((longlong)local_58.result + 0x10) = 0;
  *param_1 = local_58.result;
  uVar2 = *(ulong64 *)((longlong)local_58.result + 0x10);
  uVar4 = *(ulong64 *)((longlong)local_58.result + 8) - uVar2;
  ppVar1 = local_58.result;
joined_r0x000140da9cc7:
  if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x4a,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "region->size - region->offset >= size");
  }
  ppVar1->offset = uVar6 + uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return (void *)((longlong)ppVar1->payload + uVar2);
  }
  pcVar3 = (code *)swi(3);
  pvVar5 = (void *)(*pcVar3)();
  return pvVar5;
}

// pas_enumerator_region_destroy @ 140da9d50

void __cdecl pas_enumerator_region_destroy(pas_enumerator_region *param_1)

{
  pas_enumerator_region *ppVar1;
  
  while (param_1 != (pas_enumerator_region *)0x0) {
    ppVar1 = param_1->previous;
    pas_page_malloc_deallocate(param_1,param_1->size + 0x18);
    param_1 = ppVar1;
  }
  return;
}

