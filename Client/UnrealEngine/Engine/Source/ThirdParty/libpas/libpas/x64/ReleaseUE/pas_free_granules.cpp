// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_free_granules_compute_and_mark_decommitted @ 140d84dc0

void __cdecl
pas_free_granules_compute_and_mark_decommitted
          (pas_free_granules *param_1,uchar *param_2,pas_page_base_config *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3->page_size;
  uVar1 = param_3->granule_size;
  if ((uVar3 | uVar1) >> 0x20 == 0) {
    uVar3 = (uVar3 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar3 = uVar3 / uVar1;
  }
  if (1 < uVar3) {
    if (uVar3 < 0x401) {
      param_1->free_granules[0x1c] = 0;
      param_1->free_granules[0x1d] = 0;
      param_1->free_granules[0x1e] = 0;
      param_1->free_granules[0x1f] = 0;
      param_1->free_granules[0x18] = 0;
      param_1->free_granules[0x19] = 0;
      param_1->free_granules[0x1a] = 0;
      param_1->free_granules[0x1b] = 0;
      param_1->free_granules[0x14] = 0;
      param_1->free_granules[0x15] = 0;
      param_1->free_granules[0x16] = 0;
      param_1->free_granules[0x17] = 0;
      param_1->free_granules[0x10] = 0;
      param_1->free_granules[0x11] = 0;
      param_1->free_granules[0x12] = 0;
      param_1->free_granules[0x13] = 0;
      param_1->free_granules[0xc] = 0;
      param_1->free_granules[0xd] = 0;
      param_1->free_granules[0xe] = 0;
      param_1->free_granules[0xf] = 0;
      param_1->free_granules[8] = 0;
      param_1->free_granules[9] = 0;
      param_1->free_granules[10] = 0;
      param_1->free_granules[0xb] = 0;
      param_1->free_granules[4] = 0;
      param_1->free_granules[5] = 0;
      param_1->free_granules[6] = 0;
      param_1->free_granules[7] = 0;
      param_1->free_granules[0] = 0;
      param_1->free_granules[1] = 0;
      param_1->free_granules[2] = 0;
      param_1->free_granules[3] = 0;
      param_1->num_free_granules = 0;
      do {
        uVar3 = uVar3 - 1;
        if (((param_3->non_committable_granule_bitvector == (uint *)0x0) ||
            ((param_3->non_committable_granule_bitvector[uVar3 >> 5] >> ((uint)uVar3 & 0x1f) & 1) ==
             0)) && (param_2[uVar3] == '\0')) {
          param_1->free_granules[uVar3 >> 5] =
               param_1->free_granules[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
          param_1->num_free_granules = param_1->num_free_granules + 1;
          param_2[uVar3] = 0xff;
        }
      } while (uVar3 != 0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_free_granules_compute_not_decommitted @ 140d84eb0

void __cdecl
pas_free_granules_compute_not_decommitted
          (pas_free_granules *param_1,uchar *param_2,pas_page_base_config *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3->page_size;
  uVar1 = param_3->granule_size;
  if ((uVar3 | uVar1) >> 0x20 == 0) {
    uVar3 = (uVar3 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar3 = uVar3 / uVar1;
  }
  if (1 < uVar3) {
    if (0x400 < uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1->free_granules[0x1c] = 0;
    param_1->free_granules[0x1d] = 0;
    param_1->free_granules[0x1e] = 0;
    param_1->free_granules[0x1f] = 0;
    param_1->free_granules[0x18] = 0;
    param_1->free_granules[0x19] = 0;
    param_1->free_granules[0x1a] = 0;
    param_1->free_granules[0x1b] = 0;
    param_1->free_granules[0x14] = 0;
    param_1->free_granules[0x15] = 0;
    param_1->free_granules[0x16] = 0;
    param_1->free_granules[0x17] = 0;
    param_1->free_granules[0x10] = 0;
    param_1->free_granules[0x11] = 0;
    param_1->free_granules[0x12] = 0;
    param_1->free_granules[0x13] = 0;
    param_1->free_granules[0xc] = 0;
    param_1->free_granules[0xd] = 0;
    param_1->free_granules[0xe] = 0;
    param_1->free_granules[0xf] = 0;
    param_1->free_granules[8] = 0;
    param_1->free_granules[9] = 0;
    param_1->free_granules[10] = 0;
    param_1->free_granules[0xb] = 0;
    param_1->free_granules[4] = 0;
    param_1->free_granules[5] = 0;
    param_1->free_granules[6] = 0;
    param_1->free_granules[7] = 0;
    param_1->free_granules[0] = 0;
    param_1->free_granules[1] = 0;
    param_1->free_granules[2] = 0;
    param_1->free_granules[3] = 0;
    param_1->num_free_granules = 0;
    do {
      uVar3 = uVar3 - 1;
      if (((param_3->non_committable_granule_bitvector == (uint *)0x0) ||
          ((param_3->non_committable_granule_bitvector[uVar3 >> 5] >> ((uint)uVar3 & 0x1f) & 1) == 0
          )) && (param_2[uVar3] != 0xff)) {
        param_1->free_granules[uVar3 >> 5] =
             param_1->free_granules[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
        param_1->num_free_granules = param_1->num_free_granules + 1;
      }
    } while (uVar3 != 0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_free_granules_unmark_decommitted @ 140d84f90

void __cdecl
pas_free_granules_unmark_decommitted
          (pas_free_granules *param_1,uchar *param_2,pas_page_base_config *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  bool bVar5;
  
  uVar3 = param_3->page_size;
  uVar1 = param_3->granule_size;
  if ((uVar3 | uVar1) >> 0x20 == 0) {
    uVar3 = (uVar3 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar3 = uVar3 / uVar1;
  }
  if (1 < uVar3) {
    if (0x400 < uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = 0;
    while( true ) {
      do {
        bVar5 = uVar3 == 0;
        uVar3 = uVar3 - 1;
        if (bVar5) {
          if (uVar4 != param_1->num_free_granules) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          return;
        }
      } while ((param_1->free_granules[uVar3 >> 5] >> ((uint)uVar3 & 0x1f) & 1) == 0);
      if (param_2[uVar3] != 0xff) break;
      if ((param_3->non_committable_granule_bitvector != (uint *)0x0) &&
         ((param_3->non_committable_granule_bitvector[uVar3 >> 5] & 1 << ((byte)uVar3 & 0x1f)) != 0)
         ) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_2[uVar3] = '\0';
      uVar4 = uVar4 + 1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_free_granules_decommit_after_locking_range @ 140d85040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_free_granules_decommit_after_locking_range
          (pas_free_granules *param_1,pas_page_base *param_2,pas_deferred_decommit_log *param_3,
          pas_lock *param_4,pas_page_base_config *param_5,pas_lock_hold_mode param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined1 auStackY_a8 [32];
  pas_commit_span local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar2 = param_5->page_size;
  uVar4 = param_5->granule_size;
  if ((uVar2 | uVar4) >> 0x20 == 0) {
    uVar2 = (uVar2 & 0xffffffff) / (uVar4 & 0xffffffff);
  }
  else {
    uVar2 = uVar2 / uVar4;
  }
  if (uVar2 < 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (0x400 < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_commit_span_construct(&local_68,param_5->heap_config_ptr->mmap_capability);
  uVar4 = 0;
  do {
    while( true ) {
      if ((param_1->free_granules[uVar4 >> 5] >> ((uint)uVar4 & 0x1f) & 1) == 0) break;
      if ((param_5->non_committable_granule_bitvector != (uint *)0x0) &&
         ((param_5->non_committable_granule_bitvector[uVar4 >> 5] & 1 << ((byte)uVar4 & 0x1f)) != 0)
         ) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pas_commit_span_add_to_change(&local_68,uVar4);
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) goto LAB_140d85140;
    }
    pvVar3 = (*param_5->boundary_for_page_header)(param_2);
    pas_commit_span_add_unchanged_and_decommit
              (&local_68,pvVar3,uVar4,param_3,param_4,param_5,param_6);
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar2);
LAB_140d85140:
  pvVar3 = (*param_5->boundary_for_page_header)(param_2);
  pas_commit_span_add_unchanged_and_decommit(&local_68,pvVar3,uVar2,param_3,param_4,param_5,param_6)
  ;
  if ((local_48 ^ (ulonglong)auStackY_a8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

