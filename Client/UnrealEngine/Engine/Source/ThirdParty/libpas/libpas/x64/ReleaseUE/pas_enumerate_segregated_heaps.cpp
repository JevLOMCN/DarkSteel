// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 10

// pas_enumerate_segregated_heaps @ 140daa930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_enumerate_segregated_heaps(pas_enumerator *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  ulong64 uVar6;
  void *pvVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  pas_segregated_view_opaque *ppVar11;
  pas_local_allocator *ppVar12;
  pas_allocation_config *in_R9;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  enumeration_context *local_a8;
  uint *local_a0;
  enumeration_context local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98.objects_in_deallocation_log.table = (void **)0x0;
  local_98.objects_in_deallocation_log.table_size = 0;
  local_98.objects_in_deallocation_log.table_mask = 0;
  local_98.shared_page_directories.table_size = 0;
  local_98.shared_page_directories.table_mask = 0;
  local_98.shared_page_directories.key_count = 0;
  local_98.shared_page_directories.deleted_count = 0;
  local_98.allocators.key_count = 0;
  local_98.allocators.deleted_count = 0;
  local_98.shared_page_directories.table = (void **)0x0;
  local_98.allocators.table = (local_allocators_for_page *)0x0;
  local_98.allocators.table_size = 0;
  local_98.allocators.table_mask = 0;
  local_98.objects_in_deallocation_log.key_count = 0;
  local_98.objects_in_deallocation_log.deleted_count = 0;
  plVar4 = pas_enumerator_read(param_1,param_1->root->thread_local_cache_node_first,8);
  if ((plVar4 != (longlong *)0x0) &&
     (local_b0 = pas_enumerator_read(param_1,param_1->root->thread_local_cache_layout_first_segment,
                                     8), local_b0 != (longlong *)0x0)) {
    pvVar5 = (void *)*plVar4;
    if (pvVar5 != (void *)0x0) {
      do {
        pvVar5 = pas_enumerator_read(param_1,pvVar5,0x30);
        if (pvVar5 == (void *)0x0) goto LAB_140daad66;
        if (*(longlong *)((longlong)pvVar5 + 0x20) != 0) {
          uVar6 = pas_thread_local_cache_size_for_allocator_index_capacity(0);
          pvVar7 = pas_enumerator_read(param_1,*(void **)((longlong)pvVar5 + 0x20),uVar6);
          if (pvVar7 == (void *)0x0) goto LAB_140daad66;
          uVar6 = pas_thread_local_cache_size_for_allocator_index_capacity
                            (*(uint *)((longlong)pvVar7 + 0x1f78));
          pvVar7 = pas_enumerator_read(param_1,*(void **)((longlong)pvVar5 + 0x20),uVar6);
          if (pvVar7 == (void *)0x0) goto LAB_140daad66;
          lVar14 = 999;
          do {
            uVar9 = *(ulonglong *)((longlong)pvVar7 + lVar14 * 8);
            if (0x3f < uVar9) {
              pas_ptr_hash_set_set
                        (&local_98.objects_in_deallocation_log,(void *)(uVar9 >> 6),
                         (pas_ptr_hash_set_in_flux_stash *)&param_1->allocation_config,in_R9);
            }
            bVar15 = lVar14 != 0;
            lVar14 = lVar14 + -1;
          } while (bVar15);
          if ((void *)*local_b0 != (void *)0x0) {
            puVar8 = pas_enumerator_read(param_1,(void *)*local_b0,4);
            if (puVar8 != (uint *)0x0) {
              uVar9 = (ulonglong)*puVar8;
              if (7 < uVar9) {
                uVar9 = uVar9 + (longlong)param_1->compact_heap_copy_base;
              }
              lVar14 = 0;
              plVar4 = local_b0;
LAB_140daaaf0:
              if (uVar9 == 0) {
                plVar4 = pas_enumerator_read(param_1,(void *)(*plVar4 + 0x408),8);
                if (plVar4 == (longlong *)0x0) goto LAB_140daad66;
                if ((void *)*plVar4 == (void *)0x0) goto LAB_140daa9e0;
                puVar8 = pas_enumerator_read(param_1,(void *)*plVar4,4);
                if (puVar8 == (uint *)0x0) goto LAB_140daad66;
                uVar9 = (ulonglong)*puVar8;
                if (7 < uVar9) {
                  uVar9 = uVar9 + (longlong)param_1->compact_heap_copy_base;
                }
                if (uVar9 == 0) goto LAB_140daa9e0;
                lVar14 = 0;
              }
              switch((uint)uVar9 & 3) {
              case 0:
                uVar3 = *(uint *)(uVar9 + 0x2c);
                break;
              case 1:
                uVar3 = *(uint *)((uVar9 & 0xfffffffffffffffc) + 4);
                break;
              case 2:
                goto switchD_140daab69_caseD_2;
              case 3:
                    /* WARNING: Subroutine does not return */
                pas_assertion_failed_no_inline
                          ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x2dd,
                           "_Bool __cdecl pas_enumerate_segregated_heaps(pas_enumerator *)",
                           "pas_is_wrapped_local_view_cache_node(layout_node)");
              }
              if (((ulonglong)uVar3 == 0) || (*(uint *)((longlong)pvVar7 + 0x1f74) <= uVar3))
              goto LAB_140daa9e0;
              consider_allocator(param_1,&local_98,
                                 (pas_local_allocator *)
                                 ((longlong)pvVar7 + (ulonglong)uVar3 * 8 + 0x1f80));
switchD_140daab69_caseD_2:
              puVar8 = pas_enumerator_read(param_1,(void *)(lVar14 * 4 + 4 + *plVar4),4);
              if (puVar8 == (uint *)0x0) goto LAB_140daad66;
              lVar14 = lVar14 + 1;
              uVar9 = (ulonglong)*puVar8;
              if (7 < uVar9) {
                uVar9 = uVar9 + (longlong)param_1->compact_heap_copy_base;
              }
              goto LAB_140daaaf0;
            }
            goto LAB_140daad66;
          }
        }
LAB_140daa9e0:
        pvVar5 = *(void **)((longlong)pvVar5 + 8);
      } while (pvVar5 != (void *)0x0);
    }
    puVar10 = pas_enumerator_read(param_1,param_1->root->baseline_allocator_table,8);
    if (puVar10 != (undefined8 *)0x0) {
      if ((void *)*puVar10 != (void *)0x0) {
        pvVar5 = pas_enumerator_read(param_1,(void *)*puVar10,
                                     param_1->root->num_baseline_allocators * 0x148);
        if (pvVar5 == (void *)0x0) goto LAB_140daad66;
        uVar6 = param_1->root->num_baseline_allocators;
        if (uVar6 != 0) {
          ppVar12 = (pas_local_allocator *)((longlong)pvVar5 + uVar6 * 0x148 + -0x140);
          do {
            consider_allocator(param_1,&local_98,ppVar12);
            ppVar12 = (pas_local_allocator *)&ppVar12[-5].page_ish;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      bVar15 = pas_enumerator_for_each_heap
                         (param_1,collect_shared_page_directories_heap_callback,&local_98);
      if (bVar15) {
        uVar9 = local_98.shared_page_directories._8_8_ & 0xffffffff;
        if (uVar9 != 0) {
          do {
            puVar8 = local_98.shared_page_directories.table[uVar9 - 1];
            if (puVar8 < (uint *)0xfffffffffffffffe) {
              ppVar11 = (pas_segregated_view_opaque *)(ulonglong)*puVar8;
              if ((pas_segregated_view_opaque *)&DAT_00000007 < ppVar11) {
                ppVar11 = ppVar11 + (longlong)param_1->compact_heap_copy_base;
              }
              local_a8 = &local_98;
              local_a0 = puVar8;
              if (ppVar11 != (pas_segregated_view_opaque *)0x0) {
                bVar15 = shared_page_directory_view_callback(param_1,ppVar11,&local_a8);
                if (!bVar15) goto LAB_140daad66;
                if ((ulonglong)puVar8[1] != 0) {
                  pvVar5 = (void *)((ulonglong)puVar8[1] * 8 +
                                   (longlong)param_1->compact_heap_copy_base);
                  if (pvVar5 != (void *)0x0) {
                    uVar3 = *(uint *)((longlong)pvVar5 + 0x30);
                    pvVar7 = (void *)((longlong)param_1->compact_heap_copy_base +
                                     (ulonglong)*(uint *)((longlong)pvVar5 + 0x2c) * 8);
                    if ((ulonglong)*(uint *)((longlong)pvVar5 + 0x2c) == 0) {
                      pvVar7 = (void *)0x0;
                    }
                    if (uVar3 != 0) {
                      uVar13 = 0;
                      do {
                        ppVar11 = (pas_segregated_view_opaque *)
                                  (ulonglong)*(uint *)((longlong)pvVar7 + uVar13 * 4);
                        if ((pas_segregated_view_opaque *)&DAT_00000007 < ppVar11) {
                          ppVar11 = ppVar11 + (longlong)param_1->compact_heap_copy_base;
                        }
                        if (ppVar11 != (pas_segregated_view_opaque *)0x0) {
                          bVar15 = shared_page_directory_view_callback(param_1,ppVar11,&local_a8);
                          if (!bVar15) goto LAB_140daad66;
                          uVar3 = *(uint *)((longlong)pvVar5 + 0x30);
                        }
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < uVar3);
                    }
                  }
                }
              }
            }
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        bVar15 = pas_enumerator_for_each_heap(param_1,enumerate_segregated_heap_callback,&local_98);
        if ((local_48 ^ (ulonglong)auStack_d8) == __security_cookie.value) {
          return bVar15;
        }
        goto LAB_140daadba;
      }
    }
  }
LAB_140daad66:
  if ((local_48 ^ (ulonglong)auStack_d8) == __security_cookie.value) {
    return false;
  }
LAB_140daadba:
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// pas_ptr_hash_set_set @ 140daadf0

bool __cdecl
pas_ptr_hash_set_set
          (pas_ptr_hash_set *param_1,void *param_2,pas_ptr_hash_set_in_flux_stash *param_3,
          pas_allocation_config *param_4)

{
  void *pvVar1;
  code *pcVar2;
  uint uVar3;
  void **ppvVar4;
  void **ppvVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar3 = param_1->table_size;
  if (uVar3 <= (param_1->deleted_count + param_1->key_count) * 2) {
    uVar6 = uVar3 * 2;
    if (param_1->key_count * 6 < uVar3 * 2) {
      uVar6 = uVar3;
    }
    uVar10 = 0x10;
    if (uVar3 != 0) {
      uVar10 = (ulonglong)uVar6;
    }
    uVar3 = (uint)uVar10;
    if ((uVar3 == 0) ||
       (uVar6 = uVar3 - ((uint)(uVar10 >> 1) & 0x55555555),
       uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
       1 < ((uVar6 >> 4) + uVar6 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar7 = "pas_ptr_hash_set/table";
    lVar8 = 0;
    ppvVar4 = (void **)(*(code *)param_3->hashtable_being_resized)
                                 (uVar10 * 8,"pas_ptr_hash_set/table",0,
                                  param_3->table_size_before_resize);
    memset(ppvVar4,(int)CONCAT71((int7)((ulonglong)pcVar7 >> 8),0xff),uVar10 * 8);
    ppvVar5 = param_1->table;
    uVar10 = (ulonglong)param_1->table_size;
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        pvVar1 = ppvVar5[uVar9];
        if (pvVar1 < (void *)0xfffffffffffffffe) {
          uVar6 = (uint)((ulonglong)pvVar1 >> 4) & 0xfffffff ^ (uint)pvVar1;
          uVar11 = (uint)((ulonglong)pvVar1 >> 0x20);
          uVar11 = uVar11 >> 4 ^ uVar11;
          uVar6 = uVar11 * 0x20 + (uVar11 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
          uVar6 = uVar6 >> 0xb ^ uVar6;
          do {
            uVar11 = uVar6 & uVar3 - 1;
            uVar6 = uVar6 + 1;
          } while (ppvVar4[uVar11] < (void *)0xfffffffffffffffe);
          ppvVar4[uVar11] = pvVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
      lVar8 = uVar10 << 3;
    }
    param_1->table = ppvVar4;
    param_1->table_size = uVar3;
    param_1->table_mask = uVar3 - 1;
    param_1->deleted_count = 0;
    (*(code *)param_3->table_before_resize)(ppvVar5,lVar8,0,param_3->table_size_before_resize);
  }
  uVar3 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
  uVar6 = (uint)((ulonglong)param_2 >> 0x20);
  uVar6 = uVar6 >> 4 ^ uVar6;
  uVar3 = uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef) ^ uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef);
  uVar3 = uVar3 >> 0xb ^ uVar3;
  ppvVar5 = (void **)0x0;
  while( true ) {
    while( true ) {
      uVar6 = uVar3 & param_1->table_mask;
      ppvVar4 = param_1->table + uVar6;
      pvVar1 = param_1->table[uVar6];
      if (pvVar1 != (void *)0xfffffffffffffffe) break;
      if (ppvVar5 == (void **)0x0) {
        ppvVar5 = ppvVar4;
      }
      uVar3 = uVar3 + 1;
    }
    if (pvVar1 == (void *)0xffffffffffffffff) break;
    if (pvVar1 == param_2) goto LAB_140daafea;
    uVar3 = uVar3 + 1;
  }
  if (ppvVar5 != (void **)0x0) {
    param_1->deleted_count = param_1->deleted_count - 1;
    ppvVar4 = ppvVar5;
  }
  param_1->key_count = param_1->key_count + 1;
LAB_140daafea:
  *ppvVar4 = param_2;
  return SUB81(ppvVar5,0);
}

// consider_allocator @ 140dab010

/* WARNING: Type propagation algorithm not settling */

void __cdecl
consider_allocator(pas_enumerator *param_1,enumeration_context *param_2,pas_local_allocator *param_3
                  )

{
  uint *puVar1;
  local_allocators_for_page *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  local_allocators_for_page *plVar6;
  local_allocator_node *plVar7;
  uint uVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  local_allocators_for_page *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  
  uVar17 = param_3->page_ish;
  if (uVar17 == 0) {
    return;
  }
  uVar5 = (uint)(char)param_3->config_kind;
  if (uVar5 - 0xe < 4) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline_with_extra_detail
              ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x260,
               "void __cdecl consider_allocator(pas_enumerator *, enumeration_context *, pas_local_allocator *)"
               ,"!pas_local_allocator_config_kind_is_bitfit(allocator->config_kind)",
               (ulonglong)uVar5);
  }
  if (0xb < uVar5 - 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar11 = pas_segregated_page_config_kind_for_config_table
           [*(longlong *)(&DAT_1531ee168 + (ulonglong)(uVar5 - 2) * 8)]->page_size;
  if ((uVar11 ^ uVar11 - 1) <= uVar11 - 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = (param_2->allocators).table_size;
  uVar8 = (param_2->allocators).key_count;
  if (uVar5 <= ((param_2->allocators).deleted_count + uVar8) * 2) {
    uVar14 = uVar5 * 2;
    if (uVar8 * 6 < uVar5 * 2) {
      uVar14 = uVar5;
    }
    uVar10 = 0x10;
    if (uVar5 != 0) {
      uVar10 = (ulonglong)uVar14;
    }
    uVar5 = (uint)uVar10;
    if ((uVar5 == 0) ||
       (uVar8 = uVar5 - ((uint)(uVar10 >> 1) & 0x55555555),
       uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
       1 < ((uVar8 >> 4) + uVar8 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = 0;
    plVar6 = (*(param_1->allocation_config).allocate)
                       (uVar10 << 4,"local_allocator_map/table",pas_object_allocation,
                        (param_1->allocation_config).arg);
    memset(plVar6,0,uVar10 << 4);
    uVar8 = uVar5 - 1;
    plVar2 = (param_2->allocators).table;
    uVar10 = (ulonglong)(param_2->allocators).table_size;
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uVar3 = plVar2[uVar13].page_boundary;
        if ((uVar3 < 2) && (plVar2[uVar13].head != (local_allocator_node *)0x0)) {
LAB_140dab219:
                    /* WARNING: Subroutine does not return */
          pas_assertion_failed_no_inline
                    ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x59,
                     "_Bool __cdecl local_allocator_map_entry_is_empty_or_deleted(local_allocator_map_entry)"
                     ,"!entry.head");
        }
        if (1 < uVar3) {
          uVar16 = (uint)(uVar3 >> 4) & 0xfffffff ^ (uint)uVar3;
          uVar14 = (uint)(uVar3 >> 0x20);
          uVar14 = uVar14 >> 4 ^ uVar14;
          uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef) ^ uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
          uVar14 = uVar14 >> 0xb ^ uVar14;
          uVar15 = (ulonglong)(uVar14 & uVar8);
          uVar3 = plVar6[uVar15].page_boundary;
          if (uVar3 < 2) {
            plVar7 = plVar6[uVar15].head;
            goto joined_r0x000140dab1de;
          }
          while (1 < uVar3) {
            uVar14 = uVar14 + 1;
            uVar15 = (ulonglong)(uVar14 & uVar8);
            uVar3 = plVar6[uVar15].page_boundary;
            if (uVar3 < 2) {
              plVar7 = plVar6[uVar15].head;
joined_r0x000140dab1de:
              if (plVar7 != (local_allocator_node *)0x0) goto LAB_140dab219;
            }
          }
          plVar7 = plVar2[uVar13].head;
          plVar6[uVar15].page_boundary = plVar2[uVar13].page_boundary;
          plVar6[uVar15].head = plVar7;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar10);
      uVar9 = uVar10 << 4;
    }
    (param_2->allocators).table = plVar6;
    (param_2->allocators).table_size = uVar5;
    (param_2->allocators).table_mask = uVar8;
    (param_2->allocators).deleted_count = 0;
    (*(param_1->allocation_config).deallocate)
              (plVar2,uVar9,pas_object_allocation,(param_1->allocation_config).arg);
  }
  uVar17 = uVar17 & -uVar11;
  uVar5 = (uint)(uVar17 >> 4) & 0xfffffff ^ (uint)uVar17;
  uVar8 = (uint)(uVar17 >> 0x20);
  uVar8 = uVar8 >> 4 ^ uVar8;
  uVar8 = uVar8 * 0x20 + (uVar8 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
  uVar8 = uVar8 >> 0xb ^ uVar8;
  uVar5 = (param_2->allocators).table_mask;
  plVar2 = (param_2->allocators).table;
  uVar11 = (ulonglong)(uVar5 & uVar8);
  uVar9 = plVar2[uVar11].page_boundary;
  bVar18 = uVar9 == 0;
  bVar19 = plVar2[uVar11].head != (local_allocator_node *)0x0;
  if (!bVar18 || !bVar19) {
    plVar6 = (local_allocators_for_page *)0x0;
    do {
      uVar8 = uVar8 + 1;
      plVar12 = plVar2 + uVar11;
      if (bVar18) {
        if (plVar6 != (local_allocators_for_page *)0x0) {
          puVar1 = &(param_2->allocators).deleted_count;
          *puVar1 = *puVar1 - 1;
          plVar12 = plVar6;
        }
        puVar1 = &(param_2->allocators).key_count;
        *puVar1 = *puVar1 + 1;
        plVar12->page_boundary = uVar17;
        plVar12->head = (local_allocator_node *)0x0;
LAB_140dab34e:
        plVar7 = pas_enumerator_allocate(param_1,0x10);
        plVar7->next = plVar12->head;
        plVar7->allocator = param_3;
        plVar12->head = plVar7;
        return;
      }
      if ((bool)(uVar9 == 1 & bVar19)) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x6b,
                   "_Bool __cdecl local_allocator_map_entry_is_deleted(local_allocator_map_entry)",
                   "!entry.head");
      }
      if (uVar9 == 1) {
        if (plVar6 == (local_allocators_for_page *)0x0) {
          plVar6 = plVar12;
        }
      }
      else if (uVar9 == uVar17) goto LAB_140dab34e;
      uVar11 = (ulonglong)(uVar8 & uVar5);
      uVar9 = plVar2[uVar11].page_boundary;
      bVar18 = uVar9 == 0;
      bVar19 = plVar2[uVar11].head != (local_allocator_node *)0x0;
    } while (!bVar18 || !bVar19);
  }
                    /* WARNING: Subroutine does not return */
  pas_assertion_failed_no_inline
            ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x62,
             "_Bool __cdecl local_allocator_map_entry_is_empty(local_allocator_map_entry)",
             "!entry.head");
}

// collect_shared_page_directories_heap_callback @ 140dab3f0

bool __cdecl
collect_shared_page_directories_heap_callback
          (pas_enumerator *param_1,pas_heap *param_2,void *param_3)

{
  bool bVar1;
  
  if (pas_heap_config_kind_for_config_table
      [(longlong)((ulonglong)*(uint *)&param_2->field_0x4c << 0x3a) >> 0x3a] !=
      (pas_heap_config *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dab424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*pas_heap_config_kind_for_config_table
              [(longlong)((ulonglong)*(uint *)&param_2->field_0x4c << 0x3a) >> 0x3a]->
              for_each_shared_page_directory_remote)
                      (param_1,&param_2->segregated_heap,
                       collect_shared_page_directories_shared_page_directory_callback,param_3);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  pas_assertion_failed_no_inline
            ("src\\libpas\\pas_enumerate_segregated_heaps.c",200,
             "_Bool __cdecl collect_shared_page_directories_heap_callback(pas_enumerator *, pas_heap *, void *)"
             ,"config");
}

// shared_page_directory_view_callback @ 140dab450

bool __cdecl
shared_page_directory_view_callback
          (pas_enumerator *param_1,pas_segregated_view_opaque *param_2,void *param_3)

{
  pas_page_base_config *ppVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  pas_page_base *ppVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong *puVar9;
  void *pvVar10;
  uchar *puVar11;
  
  if (((uint)param_2 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x222,
               "_Bool __cdecl shared_page_directory_view_callback(pas_enumerator *, pas_segregated_view, void *)"
               ,"pas_segregated_view_get_kind(view) == pas_segregated_shared_view_kind");
  }
  puVar9 = (ulonglong *)((ulonglong)param_2 & 0xfffffffffffffff8);
  ppVar1 = pas_segregated_page_config_kind_for_config_table
           [*(char *)(*(longlong *)((longlong)param_3 + 8) + 0xc)];
  pvVar10 = (void *)*puVar9;
  if (((ulonglong)pvVar10 & 1) != 0) {
    puVar4 = pas_enumerator_read_compact(param_1,(void *)((ulonglong)pvVar10 & 0xfffffffffffffffe));
    pvVar10 = (void *)*puVar4;
    if ((*(byte *)((longlong)puVar9 + 0x1c) & 1) != 0) {
      ppVar5 = (*ppVar1->page_header_for_boundary_remote)(param_1,pvVar10);
      if (ppVar5 == (pas_page_base *)0x0) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x196,
                   "_Bool __cdecl enumerate_shared_view(pas_enumerator *, pas_segregated_shared_view *, pas_segregated_shared_page_directory *, enumeration_context *)"
                   ,"page");
      }
      uVar6 = ppVar1->page_size;
      uVar2 = ppVar1->granule_size;
      if ((uVar6 | uVar2) >> 0x20 == 0) {
        uVar6 = (uVar6 & 0xffffffff) / (uVar2 & 0xffffffff);
      }
      else {
        uVar6 = uVar6 / uVar2;
      }
      lVar7 = 4;
      if (uVar6 != 1) {
        lVar7 = uVar6 + 7;
      }
      pvVar8 = pas_enumerator_read(param_1,ppVar5,
                                   (lVar7 + (*(longlong *)&ppVar1[1].page_config_kind + 0x1fU >> 5)
                                            * 4 & 0xfffffffffffffff8) + 0x2c);
      if (pvVar8 == (void *)0x0) {
        return false;
      }
      goto LAB_140dab4eb;
    }
  }
  pvVar8 = (void *)0x0;
LAB_140dab4eb:
  if (pvVar10 == (void *)0x0) {
    if ((*(byte *)((longlong)puVar9 + 0x1c) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x1a4,
                 "_Bool __cdecl enumerate_shared_view(pas_enumerator *, pas_segregated_shared_view *, pas_segregated_shared_page_directory *, enumeration_context *)"
                 ,"!view->is_owned");
    }
  }
  else {
    pas_enumerator_exclude_accounted_pages(param_1,pvVar10,ppVar1->page_size);
    if ((*(byte *)((longlong)puVar9 + 0x1c) & 1) != 0) {
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x1b2,
                   "_Bool __cdecl enumerate_shared_view(pas_enumerator *, pas_segregated_shared_view *, pas_segregated_shared_page_directory *, enumeration_context *)"
                   ,"page");
      }
      lVar7 = 1L << (ppVar1->min_align_shift & 0x3f);
      uVar6 = ppVar1->page_size;
      uVar2 = ppVar1->granule_size;
      if (uVar6 == uVar2) {
        puVar11 = (uchar *)0x0;
      }
      else {
        if (uVar6 <= uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar11 = (uchar *)((longlong)pvVar8 +
                           (*(longlong *)&ppVar1[1].page_config_kind + 0x1fU >> 5) * 4 + 0x2c);
      }
      pas_enumerator_record_page_payload_and_meta
                (param_1,(ulong64)pvVar10,uVar6,uVar2,puVar11,
                 -lVar7 & (ppVar1[1].page_size + lVar7) - 1,
                 (longlong)ppVar1[1].non_committable_granule_bitvector + ppVar1[1].page_size);
    }
  }
  return true;
}

// enumerate_segregated_heap_callback @ 140dab670

bool __cdecl
enumerate_segregated_heap_callback(pas_enumerator *param_1,pas_heap *param_2,void *param_3)

{
  bool bVar1;
  uint uVar2;
  pas_segregated_view_opaque *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *pvVar7;
  
  uVar5 = (ulonglong)(param_2->segregated_heap).basic_size_directory_and_head.payload;
  if (uVar5 != 0) {
    for (puVar4 = (uint *)(uVar5 * 8 + (longlong)param_1->compact_heap_copy_base);
        puVar4 != (uint *)0x0;
        puVar4 = (uint *)((ulonglong)puVar4[0xd] * 8 + (longlong)param_1->compact_heap_copy_base)) {
      ppVar3 = (pas_segregated_view_opaque *)(ulonglong)*puVar4;
      if ((pas_segregated_view_opaque *)&DAT_00000007 < ppVar3) {
        ppVar3 = ppVar3 + (longlong)param_1->compact_heap_copy_base;
      }
      if (((ppVar3 != (pas_segregated_view_opaque *)0x0) &&
          (bVar1 = size_directory_view_callback(param_1,ppVar3,param_3), bVar1)) &&
         ((ulonglong)puVar4[1] != 0)) {
        pvVar6 = (void *)((ulonglong)puVar4[1] * 8 + (longlong)param_1->compact_heap_copy_base);
        if (pvVar6 != (void *)0x0) {
          uVar2 = *(uint *)((longlong)pvVar6 + 0x30);
          pvVar7 = (void *)((longlong)param_1->compact_heap_copy_base +
                           (ulonglong)*(uint *)((longlong)pvVar6 + 0x2c) * 8);
          if ((ulonglong)*(uint *)((longlong)pvVar6 + 0x2c) == 0) {
            pvVar7 = (void *)0x0;
          }
          if (uVar2 != 0) {
            uVar5 = 0;
            do {
              ppVar3 = (pas_segregated_view_opaque *)
                       (ulonglong)*(uint *)((longlong)pvVar7 + uVar5 * 4);
              if ((pas_segregated_view_opaque *)&DAT_00000007 < ppVar3) {
                ppVar3 = ppVar3 + (longlong)param_1->compact_heap_copy_base;
              }
              if (ppVar3 != (pas_segregated_view_opaque *)0x0) {
                bVar1 = size_directory_view_callback(param_1,ppVar3,param_3);
                if (!bVar1) break;
                uVar2 = *(uint *)((longlong)pvVar6 + 0x30);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
          }
        }
      }
      if ((ulonglong)puVar4[0xd] == 0) {
        return true;
      }
    }
  }
  return true;
}

// collect_shared_page_directories_shared_page_directory_callback @ 140dab770

bool __cdecl
collect_shared_page_directories_shared_page_directory_callback
          (pas_enumerator *param_1,pas_segregated_shared_page_directory *param_2,void *param_3)

{
  pas_allocation_config *in_R9;
  
  pas_ptr_hash_set_set
            ((pas_ptr_hash_set *)((longlong)param_3 + 0x18),param_2,
             (pas_ptr_hash_set_in_flux_stash *)&param_1->allocation_config,in_R9);
  return true;
}

// size_directory_view_callback @ 140dab7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
size_directory_view_callback
          (pas_enumerator *param_1,pas_segregated_view_opaque *param_2,void *param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  pas_page_base *ppVar8;
  ulonglong uVar9;
  pas_segregated_page *ppVar10;
  void *pvVar11;
  pas_segregated_view_kind pVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  pas_segregated_page_config *ppVar20;
  undefined8 *puVar21;
  pas_segregated_size_directory *ppVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStackY_b8 [32];
  undefined1 *puVar25;
  pas_local_allocator *local_70;
  pas_full_alloc_bits local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pVar12 = (pas_segregated_view_kind)param_2 &
           (pas_segregated_partial_view_kind|pas_segregated_shared_handle_kind);
  if (pVar12 < pas_segregated_shared_view_kind) {
    puVar21 = (undefined8 *)((ulonglong)param_2 & 0xfffffffffffffff8);
    if (*(uint3 *)(puVar21 + 1) == 0) {
      ppVar22 = (pas_segregated_size_directory *)0x0;
    }
    else {
      ppVar22 = (pas_segregated_size_directory *)
                ((ulonglong)*(uint3 *)(puVar21 + 1) * 8 + (longlong)param_1->compact_heap_copy_base)
      ;
    }
    ppVar20 = (pas_segregated_page_config *)
              pas_segregated_page_config_kind_for_config_table
              [(char)(ppVar22->base).page_config_kind];
    puVar25 = (undefined1 *)*puVar21;
    pas_enumerator_exclude_accounted_pages(param_1,puVar25,(ppVar20->base).page_size);
    if (*(char *)((longlong)puVar21 + 0xb) == '\x01') {
      uVar9 = (ulonglong)(ppVar22->data).payload;
      if (uVar9 == 0) {
        puVar15 = (uint *)0x0;
      }
      else {
        puVar15 = (uint *)(uVar9 * 8 + (longlong)param_1->compact_heap_copy_base);
      }
      ppVar8 = (*(ppVar20->base).page_header_for_boundary_remote)(param_1,puVar25);
      if (ppVar8 == (pas_page_base *)0x0) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x159,
                   "_Bool __cdecl enumerate_exclusive_view(pas_enumerator *, pas_segregated_exclusive_view *, enumeration_context *)"
                   ,"page");
      }
      uVar9 = (ppVar20->base).page_size;
      uVar7 = (ppVar20->base).granule_size;
      if ((uVar9 | uVar7) >> 0x20 == 0) {
        uVar9 = (uVar9 & 0xffffffff) / (uVar7 & 0xffffffff);
      }
      else {
        uVar9 = uVar9 / uVar7;
      }
      lVar18 = 4;
      if (uVar9 != 1) {
        lVar18 = uVar9 + 7;
      }
      ppVar10 = pas_enumerator_read(param_1,ppVar8,
                                    (lVar18 + (ppVar20->num_alloc_bits + 0x1f >> 3 &
                                              0x1ffffffffffffffc) & 0xfffffffffffffff8) + 0x2c);
      if (ppVar10 == (pas_segregated_page *)0x0) goto LAB_140dabdb0;
      lVar18 = *(longlong *)param_3;
      if (lVar18 != 0) {
        uVar13 = (uint)((ulonglong)puVar25 >> 4) & 0xfffffff ^ (uint)puVar25;
        uVar17 = (uint)((ulonglong)puVar25 >> 0x20);
        uVar17 = uVar17 >> 4 ^ uVar17;
        uVar13 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef) ^ uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
        uVar13 = uVar13 >> 0xb ^ uVar13;
        uVar9 = (ulonglong)(*(uint *)((longlong)param_3 + 0xc) & uVar13);
        puVar19 = *(undefined1 **)(lVar18 + uVar9 * 0x10);
        bVar23 = puVar19 < &DAT_00000002;
        bVar24 = *(longlong *)(lVar18 + 8 + uVar9 * 0x10) != 0;
        if (!bVar23 || !bVar24) {
          local_70 = (pas_local_allocator *)0x0;
          do {
            uVar13 = uVar13 + 1;
            if (bVar23) {
              if ((bool)(puVar19 == &DAT_00000001 & bVar24)) {
LAB_140dabdec:
                    /* WARNING: Subroutine does not return */
                pas_assertion_failed_no_inline
                          ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x6b,
                           "_Bool __cdecl local_allocator_map_entry_is_deleted(local_allocator_map_entry)"
                           ,"!entry.head");
              }
              if (puVar19 != &DAT_00000001) goto LAB_140dabad8;
            }
            else if (puVar19 == puVar25) {
              plVar16 = *(longlong **)(lVar18 + 8 + uVar9 * 0x10);
              if (plVar16 == (longlong *)0x0) goto LAB_140dabad6;
              if (*plVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                pas_assertion_failed_no_inline
                          ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x165,
                           "_Bool __cdecl enumerate_exclusive_view(pas_enumerator *, pas_segregated_exclusive_view *, enumeration_context *)"
                           ,"!allocator_node->next");
              }
              local_70 = (pas_local_allocator *)plVar16[1];
              if (local_70 == (pas_local_allocator *)0x0) {
                    /* WARNING: Subroutine does not return */
                pas_assertion_failed_no_inline
                          ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x167,
                           "_Bool __cdecl enumerate_exclusive_view(pas_enumerator *, pas_segregated_exclusive_view *, enumeration_context *)"
                           ,"allocator");
              }
              goto LAB_140dabad8;
            }
            uVar9 = (ulonglong)(uVar13 & *(uint *)((longlong)param_3 + 0xc));
            puVar19 = *(undefined1 **)(lVar18 + uVar9 * 0x10);
            bVar23 = puVar19 < &DAT_00000002;
            bVar24 = *(longlong *)(lVar18 + 8 + uVar9 * 0x10) != 0;
          } while (!bVar23 || !bVar24);
        }
LAB_140dabdcd:
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x59,
                   "_Bool __cdecl local_allocator_map_entry_is_empty_or_deleted(local_allocator_map_entry)"
                   ,"!entry.head");
      }
LAB_140dabad6:
      local_70 = (pas_local_allocator *)0x0;
LAB_140dabad8:
      uVar9 = (ppVar20->base).page_size;
      uVar7 = (ppVar20->base).granule_size;
      if (uVar9 == uVar7) {
        puVar14 = (uint *)0x0;
      }
      else {
        if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar14 = ppVar10->alloc_bits + (ppVar20->num_alloc_bits + 0x1f >> 5);
      }
      pas_enumerator_record_page_payload_and_meta
                (param_1,(ulong64)puVar25,uVar9,uVar7,(uchar *)puVar14,(ulonglong)*puVar15,
                 (ulonglong)puVar15[1]);
      local_58.bits = (uint *)(ulonglong)puVar15[3];
      if (&DAT_00000007 < local_58.bits) {
        local_58.bits =
             (uint *)((longlong)local_58.bits + (longlong)param_1->compact_heap_copy_base);
      }
      local_58.word_index_begin = 0;
      local_58.word_index_end = (uint)(ppVar20->num_alloc_bits + 0x1f >> 5);
      goto LAB_140dabb7b;
    }
  }
  else {
    if (pVar12 != pas_segregated_partial_view_kind) {
      pas_segregated_view_kind_get_string(pVar12);
      pas_log("Invalid view kind in size directory: %s\n");
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x23b,
                 "_Bool __cdecl size_directory_view_callback(pas_enumerator *, pas_segregated_view, void *)"
                 ,"!\"Should not be reached\"");
    }
    puVar21 = (undefined8 *)((ulonglong)param_2 & 0xfffffffffffffff8);
    if ((*(byte *)((longlong)puVar21 + 0x11) & 0x10) != 0) {
      if (*(uint3 *)(puVar21 + 1) == 0) {
LAB_140dabe9f:
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x1da,
                   "_Bool __cdecl enumerate_partial_view(pas_enumerator *, pas_segregated_partial_view *, enumeration_context *)"
                   ,"shared_view");
      }
      pvVar1 = param_1->compact_heap_copy_base;
      puVar5 = (ulonglong *)((ulonglong)*(uint3 *)(puVar21 + 1) * 8 + (longlong)pvVar1);
      if (puVar5 == (ulonglong *)0x0) goto LAB_140dabe9f;
      if ((*(byte *)((longlong)puVar5 + 0x1c) & 1) != 0) {
        if ((*puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar9 = (ulonglong)
                ((uint)*(byte *)((longlong)puVar21 + 0xd) * 0x80000 +
                (uint)*(ushort *)((longlong)puVar21 + 0xb) * 8);
        ppVar20 = (pas_segregated_page_config *)
                  pas_segregated_page_config_kind_for_config_table
                  [*(char *)(uVar9 + 0xc + (longlong)pvVar1)];
        puVar6 = pas_enumerator_read_compact(param_1,(void *)(*puVar5 & 0xfffffffffffffffe));
        puVar25 = (undefined1 *)*puVar6;
        ppVar8 = (*(ppVar20->base).page_header_for_boundary_remote)(param_1,puVar25);
        if (ppVar8 == (pas_page_base *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_assertion_failed_no_inline
                    ("src\\libpas\\pas_enumerate_segregated_heaps.c",0x1e6,
                     "_Bool __cdecl enumerate_partial_view(pas_enumerator *, pas_segregated_partial_view *, enumeration_context *)"
                     ,"page");
        }
        uVar7 = (ppVar20->base).page_size;
        uVar2 = (ppVar20->base).granule_size;
        if ((uVar7 | uVar2) >> 0x20 == 0) {
          uVar7 = (uVar7 & 0xffffffff) / (uVar2 & 0xffffffff);
        }
        else {
          uVar7 = uVar7 / uVar2;
        }
        lVar18 = 4;
        if (uVar7 != 1) {
          lVar18 = uVar7 + 7;
        }
        ppVar10 = pas_enumerator_read(param_1,ppVar8,
                                      (lVar18 + (ppVar20->num_alloc_bits + 0x1f >> 3 &
                                                0x1ffffffffffffffc) & 0xfffffffffffffff8) + 0x2c);
        if (ppVar10 == (pas_segregated_page *)0x0) goto LAB_140dabdb0;
        lVar18 = *(longlong *)param_3;
        if (lVar18 != 0) {
          uVar13 = (uint)((ulonglong)puVar25 >> 4) & 0xfffffff ^ (uint)puVar25;
          uVar17 = (uint)((ulonglong)puVar25 >> 0x20);
          uVar17 = uVar17 >> 4 ^ uVar17;
          uVar13 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef) ^ uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
          uVar13 = uVar13 >> 0xb ^ uVar13;
          uVar7 = (ulonglong)(*(uint *)((longlong)param_3 + 0xc) & uVar13);
          puVar19 = *(undefined1 **)(lVar18 + uVar7 * 0x10);
          bVar23 = puVar19 < &DAT_00000002;
          bVar24 = *(longlong *)(lVar18 + 8 + uVar7 * 0x10) != 0;
          if (!bVar23 || !bVar24) {
            local_70 = (pas_local_allocator *)0x0;
            do {
              uVar13 = uVar13 + 1;
              if (bVar23) {
                if ((bool)(puVar19 == &DAT_00000001 & bVar24)) goto LAB_140dabdec;
                if (puVar19 != &DAT_00000001) goto LAB_140dabd39;
              }
              else if (puVar19 == puVar25) {
                plVar16 = *(longlong **)(lVar18 + 8 + uVar7 * 0x10);
                if (plVar16 != (longlong *)0x0) {
                  local_70 = (pas_local_allocator *)0x0;
                  goto LAB_140dabcfd;
                }
                local_70 = (pas_local_allocator *)0x0;
                goto LAB_140dabd39;
              }
              uVar7 = (ulonglong)(uVar13 & *(uint *)((longlong)param_3 + 0xc));
              puVar19 = *(undefined1 **)(lVar18 + uVar7 * 0x10);
              bVar23 = puVar19 < &DAT_00000002;
              bVar24 = *(longlong *)(lVar18 + 8 + uVar7 * 0x10) != 0;
            } while (!bVar23 || !bVar24);
          }
          goto LAB_140dabdcd;
        }
        local_70 = (pas_local_allocator *)0x0;
        goto LAB_140dabd39;
      }
    }
  }
  goto LAB_140dabb83;
  while (plVar16 = (longlong *)*plVar16, plVar16 != (longlong *)0x0) {
LAB_140dabcfd:
    pvVar11 = pas_enumerator_read_compact(param_1,*(void **)(plVar16[1] + 0x38));
    if ((undefined8 *)((ulonglong)pvVar11 & 0xfffffffffffffff8) == puVar21) {
      local_70 = (pas_local_allocator *)plVar16[1];
      break;
    }
  }
LAB_140dabd39:
  local_58.bits =
       pas_enumerator_read(param_1,(void *)*puVar21,
                           ppVar20->num_alloc_bits + 0x1f >> 3 & 0x1ffffffffffffffc);
  if (local_58.bits == (uint *)0x0) {
LAB_140dabdb0:
    if ((local_48 ^ (ulonglong)auStackY_b8) == __security_cookie.value) {
      return false;
    }
    goto LAB_140dabdc7;
  }
  ppVar22 = (pas_segregated_size_directory *)(uVar9 + (longlong)pvVar1);
  local_58.word_index_begin = (uint)*(byte *)(puVar21 + 2);
  local_58.word_index_end = *(byte *)((longlong)puVar21 + 0xf) + local_58.word_index_begin;
LAB_140dabb7b:
  record_page_objects(param_1,param_3,ppVar22,ppVar20,(ulong64)puVar25,ppVar10,local_70,&local_58);
LAB_140dabb83:
  if ((local_48 ^ (ulonglong)auStackY_b8) == __security_cookie.value) {
    return true;
  }
LAB_140dabdc7:
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return (bool)uVar4;
}

// pas_segregated_view_kind_get_string @ 140dabed0

char * __cdecl pas_segregated_view_kind_get_string(pas_segregated_view_kind param_1)

{
  code *pcVar1;
  
  if (param_1 < (pas_segregated_partial_view_kind|pas_segregated_shared_view_kind)) {
    return (&PTR_s_exclusive_view_1531ee1c8)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// record_page_objects @ 140dabef0

void __cdecl
record_page_objects(pas_enumerator *param_1,enumeration_context *param_2,
                   pas_segregated_size_directory *param_3,pas_segregated_page_config *param_4,
                   ulong64 param_5,pas_segregated_page *param_6,pas_local_allocator *param_7,
                   pas_full_alloc_bits *param_8)

{
  ulonglong uVar1;
  void **ppvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_1->record_object != pas_enumerator_do_not_record_object_records) {
    uVar4 = param_8->word_index_end;
    uVar5 = param_8->word_index_begin << 5;
    if (uVar5 < uVar4 << 5) {
      uVar9 = (ulonglong)uVar5;
      do {
        uVar7 = uVar9 >> 5;
        uVar5 = 1 << ((byte)uVar9 & 0x1f);
        if (((param_8->bits[uVar7] >> ((uint)uVar9 & 0x1f) & 1) != 0) &&
           ((param_6->alloc_bits[uVar7] & uVar5) != 0)) {
          pvVar6 = (void *)((uVar9 << ((param_4->base).min_align_shift & 0x3f)) + param_5);
          if (param_7 == (pas_local_allocator *)0x0) {
LAB_140dac090:
            ppvVar2 = (param_2->objects_in_deallocation_log).table;
            if (ppvVar2 != (void **)0x0) {
              uVar5 = (uint)((ulonglong)pvVar6 >> 4) & 0xfffffff ^ (uint)pvVar6;
              uVar8 = (uint)((ulonglong)pvVar6 >> 0x20);
              uVar8 = uVar8 >> 4 ^ uVar8;
              uVar5 = uVar8 * 0x20 + (uVar8 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
              uVar5 = uVar5 >> 0xb ^ uVar5;
              do {
                pvVar3 = ppvVar2[uVar5 & (param_2->objects_in_deallocation_log).table_mask];
                if (pvVar3 < (void *)0xfffffffffffffffe) {
                  if (pvVar3 == pvVar6) goto LAB_140dabf80;
                }
                else if (pvVar3 != (void *)0xfffffffffffffffe) break;
                uVar5 = uVar5 + 1;
              } while( true );
            }
            pas_enumerator_record(param_1,pvVar6,param_3->object_size,pas_enumerator_object_record);
            uVar4 = param_8->word_index_end;
          }
          else if (((void *)param_7->payload_end <= pvVar6) ||
                  (pvVar6 < (void *)((longlong)param_7->payload_end - (ulonglong)param_7->remaining)
                  )) {
            if (param_7->end_offset <= param_7->current_offset) goto LAB_140dac090;
            if (((uVar9 >> 6 == (ulonglong)param_7->current_offset) &&
                (param_4->variant == pas_small_segregated_page_config_variant)) &&
               (param_7->current_word_is_valid == true)) {
              uVar1 = param_7->current_word;
              uVar7 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                      (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                      (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                      (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f) << 4 | uVar7 >> 4 & 0xf0f0f0f0f0f0f0f;
              uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333) * 4;
              uVar7 = (uVar7 >> 1 & 0x5555555555555555) + (uVar7 & 0x5555555555555555) * 2;
              if (param_4->use_reversed_current_word == false) {
                uVar7 = uVar1;
              }
              if ((uVar7 >> (uVar9 & 0x3f) & 1) == 0) goto LAB_140dac090;
            }
            else if ((*(uint *)((longlong)param_7->bits + uVar7 * 4) & uVar5) == 0)
            goto LAB_140dac090;
          }
        }
LAB_140dabf80:
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4 << 5);
    }
  }
  return;
}

