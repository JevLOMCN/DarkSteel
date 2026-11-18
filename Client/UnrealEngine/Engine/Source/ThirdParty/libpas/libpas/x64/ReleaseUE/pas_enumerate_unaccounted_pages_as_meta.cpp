// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_enumerate_unaccounted_pages_as_meta @ 140dac600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_enumerate_unaccounted_pages_as_meta(pas_enumerator *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  code *pcVar5;
  void *pvVar6;
  pas_enumerator *ppVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  void *pvVar10;
  void **ppvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  ulonglong uVar16;
  void **ppvVar17;
  ulonglong uVar18;
  undefined1 auStack_e8 [40];
  pas_enumerator *local_c0;
  ulonglong local_b8;
  void *apvStack_b0 [11];
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->record_meta != pas_enumerator_do_not_record_meta_records) {
    apvStack_b0[9] = (void *)0x0;
    apvStack_b0[10] = (void *)0x0;
    apvStack_b0[7] = (void *)0x0;
    apvStack_b0[8] = (void *)0x0;
    apvStack_b0[5] = (void *)0x0;
    apvStack_b0[6] = (void *)0x0;
    apvStack_b0[3] = (void *)0x0;
    apvStack_b0[4] = (void *)0x0;
    apvStack_b0[1] = (void *)0x0;
    apvStack_b0[2] = (void *)0x0;
    local_b8 = 0;
    apvStack_b0[0] = (void *)0x0;
    local_58 = 0;
    uVar18 = (ulonglong)param_1->unaccounted_pages->table_size;
    ppVar7 = param_1;
    if (uVar18 != 0) {
      do {
        local_c0 = ppVar7;
        uVar9 = local_58;
        uVar13 = local_b8;
        pvVar14 = param_1->unaccounted_pages->table[uVar18 - 1];
        if (pvVar14 < (void *)0xfffffffffffffffe) {
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            pas_assertion_failed_no_inline
                      ("src\\libpas\\pas_enumerate_unaccounted_pages_as_meta.c",0x38,
                       "_Bool __cdecl pas_enumerate_unaccounted_pages_as_meta(pas_enumerator *)",
                       "page");
          }
          uVar12 = local_58 + 10;
          if (uVar12 <= local_b8) {
            if (local_b8 != uVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar16 = local_58 * 2;
            if (uVar16 < 5) {
              uVar16 = 4;
            }
            if (uVar16 <= local_58) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            pvVar10 = (*(local_c0->allocation_config).allocate)
                                (uVar16 * 8,"pas_ptr_min_heap/outline_array",pas_object_allocation,
                                 (local_c0->allocation_config).arg);
            uVar12 = uVar16 + 10;
            if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            memset(pvVar10,0,uVar16 * 8);
            pvVar6 = apvStack_b0[10];
            if (apvStack_b0[10] != (void *)0x0) {
              memcpy(pvVar10,apvStack_b0[10],uVar13 * 8 - 0x50);
            }
            (*(local_c0->allocation_config).deallocate)
                      (pvVar6,uVar9 << 3,pas_object_allocation,(local_c0->allocation_config).arg);
            apvStack_b0[10] = pvVar10;
            local_58 = uVar16;
          }
          if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar9 = uVar13 + 1;
          local_b8 = uVar9;
          if (uVar13 < 10) {
            apvStack_b0[uVar13] = (void *)0x0;
            if (uVar13 != 0) goto LAB_140dac7e0;
            uVar13 = 0;
            uVar9 = 1;
          }
          else {
            *(undefined8 *)((longlong)apvStack_b0[10] + uVar13 * 8 + -0x50) = 0;
LAB_140dac7e0:
            do {
              uVar12 = uVar9 >> 1;
              uVar13 = uVar12 - 1;
              uVar16 = local_58 + 10;
              if (uVar16 <= uVar13) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              ppvVar11 = (void **)((longlong)apvStack_b0[10] + uVar13 * 8 + -0x50);
              if (uVar9 < 0x16) {
                ppvVar11 = apvStack_b0 + (uVar12 - 1);
              }
              uVar1 = uVar9 - 1;
              if (*ppvVar11 <= pvVar14) {
                if (uVar16 <= uVar1) goto LAB_140dacb19;
                if (uVar9 < 0xb) goto LAB_140dac69e;
                ppvVar11 = (void **)((longlong)apvStack_b0[10] + uVar1 * 8 + -0x50);
                goto LAB_140dac6a6;
              }
              if (uVar16 <= uVar1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              ppvVar17 = (void **)((longlong)apvStack_b0[10] + uVar1 * 8 + -0x50);
              if (uVar9 < 0xb) {
                ppvVar17 = apvStack_b0 + (uVar9 - 1);
              }
              *ppvVar17 = *ppvVar11;
              bVar4 = 3 < uVar9;
              uVar9 = uVar12;
            } while (bVar4);
          }
          if (local_58 + 10 <= uVar13) {
LAB_140dacb19:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
LAB_140dac69e:
          ppvVar11 = apvStack_b0 + (uVar9 - 1);
LAB_140dac6a6:
          *ppvVar11 = pvVar14;
          param_1 = local_c0;
        }
        uVar18 = uVar18 - 1;
        ppVar7 = local_c0;
      } while (uVar18 != 0);
      if (local_b8 != 0) {
        pvVar10 = (void *)0x0;
        pvVar14 = (void *)0x0;
LAB_140dac8ac:
        pvVar6 = apvStack_b0[0];
        uVar18 = local_b8;
        if (local_58 == 0xfffffffffffffff6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar13 = local_b8 - 1;
        if (local_58 + 10 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        ppvVar11 = (void **)((longlong)apvStack_b0[10] + uVar13 * 8 + -0x50);
        if (local_b8 < 0xb) {
          ppvVar11 = apvStack_b0 + (local_b8 - 1);
        }
        pvVar2 = *ppvVar11;
        *ppvVar11 = (void *)0x0;
        if (local_58 == 0xfffffffffffffff6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        apvStack_b0[0] = (void *)0x0;
        local_b8 = uVar13;
        if (uVar18 != 1) {
          uVar18 = 1;
          do {
            uVar12 = uVar18 * 2;
            uVar9 = uVar18 * 2 + 1;
            if (uVar12 < uVar13) {
              if (local_58 + 10 <= uVar12) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              ppvVar11 = (void **)((longlong)apvStack_b0[10] + uVar18 * 0x10 + -0x50);
              if (uVar9 < 0xb) {
                ppvVar11 = apvStack_b0 + uVar18 * 2;
              }
              pvVar15 = *ppvVar11;
              bVar4 = pvVar2 <= pvVar15;
            }
            else {
              if (uVar13 < uVar12) goto LAB_140daca4c;
              bVar4 = true;
              pvVar15 = (void *)0x0;
            }
            if (uVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar16 = local_58 + 10;
            if (uVar16 <= uVar12 - 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            ppvVar11 = (void **)((longlong)apvStack_b0[10] + (uVar12 - 1) * 8 + -0x50);
            if (uVar12 < 0xb) {
              ppvVar11 = apvStack_b0 + uVar18 * 2 + -1;
            }
            pvVar3 = *ppvVar11;
            if (bVar4) {
              if (pvVar2 <= pvVar3) goto LAB_140daca4c;
LAB_140daca22:
              pvVar15 = pvVar3;
              uVar9 = uVar12;
              if (uVar16 <= uVar18 - 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
            }
            else {
              if ((pvVar3 < pvVar2) && (pvVar3 <= pvVar15)) goto LAB_140daca22;
              if (uVar16 <= uVar18 - 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
            }
            ppvVar11 = (void **)((longlong)apvStack_b0[10] + (uVar18 - 1) * 8 + -0x50);
            if (uVar18 < 0xb) {
              ppvVar11 = apvStack_b0 + (uVar18 - 1);
            }
            *ppvVar11 = pvVar15;
            uVar18 = uVar9;
          } while( true );
        }
        goto LAB_140daca76;
      }
    }
    pvVar14 = (void *)0x0;
    pvVar10 = (void *)0x0;
LAB_140dacaa4:
    pas_enumerator_record
              (param_1,pvVar14,(longlong)pvVar10 - (longlong)pvVar14,pas_enumerator_meta_record);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return true;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
LAB_140daca4c:
  if (local_58 + 10 <= uVar18 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  ppvVar11 = (void **)((longlong)apvStack_b0[10] + (uVar18 - 1) * 8 + -0x50);
  if (uVar18 < 0xb) {
    ppvVar11 = apvStack_b0 + (uVar18 - 1);
  }
  *ppvVar11 = pvVar2;
LAB_140daca76:
  if (pvVar6 == (void *)0x0) goto LAB_140dacaa4;
  if (pvVar10 != pvVar6) {
    if (pvVar6 <= pvVar10) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerate_unaccounted_pages_as_meta.c",0x41,
                 "_Bool __cdecl pas_enumerate_unaccounted_pages_as_meta(pas_enumerator *)",
                 "page > span_end");
    }
    pas_enumerator_record
              (param_1,pvVar14,(longlong)pvVar10 - (longlong)pvVar14,pas_enumerator_meta_record);
    pvVar14 = pvVar6;
  }
  pvVar10 = (void *)((longlong)pvVar6 + param_1->root->page_malloc_alignment);
  if (local_b8 == 0) goto LAB_140dacaa4;
  goto LAB_140dac8ac;
}

