// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_fast_megapage_cache_try_allocate @ 140d7cdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_fast_megapage_cache_try_allocate
          (pas_megapage_cache *param_1,pas_fast_megapage_table *param_2,
          pas_page_base_config *param_3,pas_fast_megapage_kind param_4,bool param_5,
          pas_heap *param_6,pas_physical_memory_transaction *param_7)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_78 [40];
  pas_fast_megapage_table *local_50;
  pas_fast_megapage_kind local_48;
  pas_megapage_cache_config local_40;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_40.megapage_size = 0x1000000;
  local_40.allocation_size = param_3->page_size;
  local_50 = param_2;
  local_48 = param_4;
  if ((local_40.allocation_size ^ local_40.allocation_size - 1) <= local_40.allocation_size - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_40.allocation_alignment.alignment_begin = 0;
  local_40.table_set_by_index = table_set_by_index;
  local_40.table_set_by_index_arg = &local_50;
  local_40.should_zero = param_5;
  local_40.allocation_alignment.alignment = local_40.allocation_size;
  pvVar2 = pas_megapage_cache_try_allocate(param_1,&local_40,param_6,param_7);
  if ((local_8 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return pvVar2;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// table_set_by_index @ 140d7ce70

void __cdecl table_set_by_index(ulong64 param_1,void *param_2)

{
  pas_fast_megapage_table *ppVar1;
  pas_fast_megapage_table_impl *ppVar2;
  ulonglong *puVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  
  ppVar1 = *(pas_fast_megapage_table **)param_2;
  if ((0x7ffff < param_1) || ((ppVar1->fast_bits[param_1 >> 5] >> ((uint)param_1 & 0x1f) & 1) == 0))
  {
    ppVar2 = ppVar1->instance;
    uVar6 = param_1 - ppVar2->index_begin;
    if ((param_1 < ppVar2->index_begin) ||
       ((ppVar2->index_end <= param_1 ||
        ((*(uint *)((longlong)ppVar2->bits + (uVar6 >> 2 & 0x1ffffffffffffffc)) >>
          ((char)uVar6 * '\x02' & 0x1fU) & 3) == 0)))) {
      uVar5 = 1;
      pas_fast_megapage_table_set_by_index
                (ppVar1,param_1,*(pas_fast_megapage_kind *)((longlong)param_2 + 8),pas_lock_is_held)
      ;
      if ((0x7ffff < param_1) ||
         ((*(uint *)(*(longlong *)param_2 + (param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f) & 1) == 0)
         ) {
        puVar3 = *(ulonglong **)(*(longlong *)param_2 + 0x10000);
        uVar5 = 0;
        if ((*puVar3 <= param_1) && (param_1 < puVar3[1])) {
          uVar5 = *(uint *)((longlong)puVar3 + (param_1 - *puVar3 >> 2 & 0x1ffffffffffffffc) + 0x18)
                  >> ((char)(param_1 - *puVar3) * '\x02' & 0x1fU) & 3;
        }
      }
      if (uVar5 != *(uint *)((longlong)param_2 + 8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

