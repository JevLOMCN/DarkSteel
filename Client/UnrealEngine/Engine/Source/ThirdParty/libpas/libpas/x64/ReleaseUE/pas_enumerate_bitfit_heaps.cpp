// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_enumerate_bitfit_heaps @ 140dac130

bool __cdecl pas_enumerate_bitfit_heaps(pas_enumerator *param_1)

{
  bool bVar1;
  
  bVar1 = pas_enumerator_for_each_heap(param_1,enumerate_bitfit_heap_callback,(void *)0x0);
  return bVar1;
}

// enumerate_bitfit_heap_callback @ 140dac150

bool __cdecl enumerate_bitfit_heap_callback(pas_enumerator *param_1,pas_heap *param_2,void *param_3)

{
  uint uVar1;
  void *pvVar2;
  pas_page_base_config *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  pas_page_base *ppVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  void *pvVar14;
  uchar *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  void *pvVar20;
  ulong64 uVar21;
  byte bVar22;
  ulonglong uVar23;
  ulong64 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  bool bVar28;
  
  if (param_3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerate_bitfit_heaps.c",0xa3,
               "_Bool __cdecl enumerate_bitfit_heap_callback(pas_enumerator *, pas_heap *, void *)",
               "!arg");
  }
  uVar11 = (ulonglong)(param_2->segregated_heap).bitfit_heap.payload;
  if ((uVar11 != 0) &&
     (pvVar12 = (void *)(uVar11 * 8 + (longlong)param_1->compact_heap_copy_base),
     pvVar12 != (void *)0x0)) {
    lVar13 = 0;
    do {
      lVar16 = lVar13 * 0x80;
      uVar11 = (ulonglong)*(uint *)((longlong)pvVar12 + lVar16 + 0x50);
      if (uVar11 == 0) {
        pvVar20 = (void *)0x0;
        uVar1 = *(uint *)((longlong)pvVar12 + lVar16 + 0x54);
      }
      else {
        pvVar20 = (void *)(uVar11 * 8 + (longlong)param_1->compact_heap_copy_base);
        uVar1 = *(uint *)((longlong)pvVar12 + lVar16 + 0x54);
      }
      uVar11 = (ulonglong)uVar1;
      if (uVar11 != 0) {
        bVar27 = false;
        uVar17 = uVar11;
        uVar23 = 0;
        do {
          uVar5 = 8;
          if (uVar17 < 8) {
            uVar5 = uVar17;
          }
          uVar26 = (ulonglong)*(uint *)((longlong)pvVar20 + uVar23 * 4);
          if (uVar26 == 0) {
            pvVar14 = (void *)0x0;
          }
          else {
            pvVar14 = (void *)(uVar26 * 8 + (longlong)param_1->compact_heap_copy_base);
          }
          lVar25 = 0;
          do {
            uVar26 = (ulonglong)*(uint *)((longlong)pvVar14 + lVar25 * 4);
            if ((uVar26 != 0) &&
               (puVar18 = (undefined8 *)(uVar26 * 8 + (longlong)param_1->compact_heap_copy_base),
               puVar18 != (undefined8 *)0x0)) {
              pvVar2 = (void *)*puVar18;
              if (pvVar2 == (void *)0x0) {
                if (*(char *)((longlong)puVar18 + 0xb) != '\0') {
                    /* WARNING: Subroutine does not return */
                  pas_assertion_failed_no_inline
                            ("src\\libpas\\pas_enumerate_bitfit_heaps.c",0x4e,
                             "_Bool __cdecl view_callback(pas_enumerator *, pas_compact_atomic_bitfit_view_ptr *, size_t, void *)"
                             ,"page_boundary");
                }
              }
              else {
                ppVar3 = pas_bitfit_page_config_kind_for_config_table
                         [*(char *)((longlong)pvVar12 + lVar16 + 0x7c)];
                pas_enumerator_exclude_accounted_pages(param_1,pvVar2,ppVar3->page_size);
                if (*(char *)((longlong)puVar18 + 0xb) != '\0') {
                  ppVar6 = (*ppVar3->page_header_for_boundary_remote)(param_1,pvVar2);
                  if (ppVar6 == (pas_page_base *)0x0) {
                    /* WARNING: Subroutine does not return */
                    pas_assertion_failed_no_inline
                              ("src\\libpas\\pas_enumerate_bitfit_heaps.c",0x52,
                               "_Bool __cdecl view_callback(pas_enumerator *, pas_compact_atomic_bitfit_view_ptr *, size_t, void *)"
                               ,"page");
                  }
                  uVar26 = ppVar3->page_size;
                  uVar7 = ppVar3->granule_size;
                  if ((uVar26 | uVar7) >> 0x20 == 0) {
                    uVar7 = (uVar26 & 0xffffffff) / (uVar7 & 0xffffffff);
                  }
                  else {
                    uVar7 = uVar26 / uVar7;
                  }
                  lVar9 = uVar7 + 7;
                  if (uVar7 == 1) {
                    lVar9 = 1;
                  }
                  pvVar8 = pas_enumerator_read(param_1,ppVar6,
                                               (lVar9 + ((uVar26 >> (ppVar3->min_align_shift & 0x3f)
                                                         ) + 0x3f >> 2 & 0x3ffffffffffffff0) &
                                               0xfffffffffffffff8) + 0x10);
                  if (pvVar8 == (void *)0x0) goto LAB_140dac1ca;
                  lVar9 = 1L << (ppVar3->min_align_shift & 0x3f);
                  uVar26 = ppVar3->page_size;
                  uVar7 = ppVar3->granule_size;
                  if (uVar26 == uVar7) {
                    puVar15 = (uchar *)0x0;
                  }
                  else {
                    if (uVar26 <= uVar7) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)invalidInstructionException();
                      (*pcVar4)();
                    }
                    puVar15 = (uchar *)((longlong)pvVar8 +
                                       ((uVar26 >> (ppVar3->min_align_shift & 0x3f)) + 0x3f >> 2 &
                                       0x3ffffffffffffff0) + 0x10);
                  }
                  uVar10 = -lVar9;
                  uVar19 = (longlong)ppVar3[1].heap_config_ptr + lVar9 + -1 & uVar10;
                  uVar10 = (ulonglong)
                           ((longlong)&(ppVar3[1].heap_config_ptr)->config_ptr +
                           (longlong)&(ppVar3[1].page_config_ptr)->is_enabled) & uVar10;
                  pas_enumerator_record_page_payload_and_meta
                            (param_1,(ulong64)pvVar2,uVar26,uVar7,puVar15,uVar19,uVar10);
                  if ((param_1->record_object != pas_enumerator_do_not_record_object_records) &&
                     (uVar19 < uVar10)) {
                    bVar22 = ppVar3->min_align_shift;
                    do {
                      uVar7 = uVar19 >> (bVar22 & 0x3f);
                      uVar26 = uVar19;
                      if (((*(uint *)((longlong)pvVar8 + (uVar7 >> 5) * 4 + 0x10) >>
                            ((uint)uVar7 & 0x1f) & 1) == 0) && (uVar19 < uVar10)) {
                        uVar24 = 1L << (bVar22 & 0x3f);
                        uVar21 = uVar24;
                        do {
                          uVar7 = uVar26 >> (bVar22 & 0x3f);
                          if ((*(uint *)((longlong)pvVar8 + (uVar7 >> 5) * 4 + 0x10) >>
                               ((uint)uVar7 & 0x1f) & 1) != 0) break;
                          if ((*(uint *)((longlong)pvVar8 +
                                        (uVar7 >> 5) * 4 +
                                        ((ppVar3->page_size >> (bVar22 & 0x3f)) + 0x3f >> 6) * 8 +
                                        0x10) & 1 << ((byte)uVar7 & 0x1f)) != 0) {
                            pas_enumerator_record
                                      (param_1,(void *)(uVar19 + (longlong)pvVar2),uVar21,
                                       pas_enumerator_object_record);
                            bVar22 = ppVar3->min_align_shift;
                            break;
                          }
                          uVar26 = uVar26 + uVar24;
                          uVar21 = uVar21 + uVar24;
                        } while (uVar26 < uVar10);
                      }
                      uVar19 = (1L << (bVar22 & 0x3f)) + uVar26;
                    } while (uVar19 < uVar10);
                  }
                }
              }
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 != uVar5 + (uVar5 == 0));
          bVar27 = uVar11 <= uVar23 * 8 + 8;
          uVar17 = uVar17 - 8;
          bVar28 = uVar23 != uVar11 - 1 >> 3;
          uVar23 = uVar23 + 1;
        } while (bVar28);
LAB_140dac1ca:
        if (!bVar27) {
          return false;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
  }
  return true;
}

