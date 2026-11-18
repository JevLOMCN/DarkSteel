// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_bitfit_page_config_kind_get_string @ 140d74d00

char * __cdecl pas_bitfit_page_config_kind_get_string(pas_bitfit_page_config_kind param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return (&PTR_s_null_1531eb610)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bitfit_page_config_kind_for_each @ 140d74d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
pas_bitfit_page_config_kind_for_each
          (_func___cdecl_bool_pas_bitfit_page_config_kind_pas_bitfit_page_config_ptr_void_ptr
           *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (_DAT_00000018 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar2 = (*param_1)(pas_bitfit_page_config_kind_null,(pas_bitfit_page_config *)0x0,param_2);
  if (bVar2) {
    if (bmalloc_heap_config.small_bitfit_config.base.page_config_kind != pas_page_config_kind_bitfit
       ) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    bVar2 = (*param_1)(pas_bitfit_page_config_kind_bmalloc_small_bitfit,
                       (pas_bitfit_page_config *)0x1531e98a0,param_2);
    if (bVar2) {
      if (bmalloc_heap_config.medium_bitfit_config.base.page_config_kind !=
          pas_page_config_kind_bitfit) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = (*param_1)(pas_bitfit_page_config_kind_bmalloc_medium_bitfit,
                         (pas_bitfit_page_config *)0x1531e9948,param_2);
      if (bVar2) {
        if (bmalloc_heap_config.marge_bitfit_config.base.page_config_kind ==
            pas_page_config_kind_bitfit) {
                    /* WARNING: Could not recover jumptable at 0x000140d74da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar2 = (*param_1)(pas_bitfit_page_config_kind_bmalloc_marge_bitfit,
                             (pas_bitfit_page_config *)0x1531e99f0,param_2);
          return bVar2;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  return false;
}

