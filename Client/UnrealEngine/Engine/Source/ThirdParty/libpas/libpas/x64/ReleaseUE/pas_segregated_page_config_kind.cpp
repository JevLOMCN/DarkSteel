// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_segregated_page_config_kind_get_string @ 140d74f30

char * __cdecl pas_segregated_page_config_kind_get_string(pas_segregated_page_config_kind param_1)

{
  code *pcVar1;
  
  if (param_1 < (pas_segregated_page_config_kind_verse_small_segregated|
                pas_segregated_page_config_kind_bmalloc_small_segregated)) {
    return (&PTR_s_null_1531eb6a8)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_page_config_kind_for_each @ 140d74f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
pas_segregated_page_config_kind_for_each
          (_func___cdecl_bool_pas_segregated_page_config_kind_pas_segregated_page_config_ptr_void_ptr
           *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (_DAT_00000018 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar2 = (*param_1)(pas_segregated_page_config_kind_null,(pas_segregated_page_config *)0x0,param_2)
  ;
  if (bVar2) {
    if (pas_utility_heap_config.small_segregated_config.base.page_config_kind !=
        pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    bVar2 = (*param_1)(pas_segregated_page_config_kind_pas_utility_small,
                       (pas_segregated_page_config *)0x1531eb0e0,param_2);
    if (bVar2) {
      if (bmalloc_heap_config.small_segregated_config.base.page_config_kind !=
          pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = (*param_1)(pas_segregated_page_config_kind_bmalloc_small_segregated,
                         (pas_segregated_page_config *)0x1531e96d0,param_2);
      if (bVar2) {
        if (bmalloc_heap_config.medium_segregated_config.base.page_config_kind !=
            pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        bVar2 = (*param_1)(pas_segregated_page_config_kind_bmalloc_medium_segregated,
                           (pas_segregated_page_config *)0x1531e97b8,param_2);
        if (bVar2) {
          if (verse_heap_config.small_segregated_config.base.page_config_kind !=
              pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          bVar2 = (*param_1)(pas_segregated_page_config_kind_verse_small_segregated,
                             (pas_segregated_page_config *)0x1531ecb78,param_2);
          if (bVar2) {
            if (verse_heap_config.medium_segregated_config.base.page_config_kind ==
                pas_page_config_kind_segregated) {
                    /* WARNING: Could not recover jumptable at 0x000140d75023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              bVar2 = (*param_1)(pas_segregated_page_config_kind_verse_medium_segregated,
                                 (pas_segregated_page_config *)0x1531ecc60,param_2);
              return bVar2;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
      }
    }
  }
  return false;
}

