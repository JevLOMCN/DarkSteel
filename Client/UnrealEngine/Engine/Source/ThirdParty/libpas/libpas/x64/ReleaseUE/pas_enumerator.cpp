// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 14

// pas_enumerator_create @ 140da4450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_enumerator * __cdecl
pas_enumerator_create
          (pas_root *param_1,
          _func___cdecl_void_ptr_pas_enumerator_ptr_void_ptr_ulong64_void_ptr *param_2,void *param_3
          ,_func___cdecl_void_pas_enumerator_ptr_void_ptr_ulong64_pas_enumerator_record_kind_void_ptr
           *param_4,void *param_5,pas_enumerator_meta_recording_mode param_6,
          pas_enumerator_payload_recording_mode param_7,pas_enumerator_object_recording_mode param_8
          )

{
  _func___cdecl_void_ptr_pas_enumerator_ptr *p_Var1;
  code *pcVar2;
  pas_heap_config *ppVar3;
  pas_enumerator *ppVar4;
  void **ppvVar5;
  pas_root *ppVar6;
  undefined8 *puVar7;
  ulong64 *puVar8;
  void *pvVar9;
  pas_ptr_hash_set *ppVar10;
  void *pvVar11;
  undefined1 auStack_78 [40];
  pas_enumerator_region *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = (pas_enumerator_region *)0x0;
  ppVar4 = pas_enumerator_region_allocate(&local_50,0x88);
  if (ppVar4 != (pas_enumerator *)0x0) {
    ppVar4->region = local_50;
    (ppVar4->allocation_config).allocate = allocate;
    (ppVar4->allocation_config).deallocate = deallocate;
    (ppVar4->allocation_config).arg = ppVar4;
    ppvVar5 = pas_enumerator_region_allocate(&ppVar4->region,0x20);
    ppVar4->heap_config_datas = ppvVar5;
    *ppvVar5 = (void *)0x0;
    ppvVar5[1] = (void *)0x0;
    ppvVar5[2] = (void *)0x0;
    ppvVar5[3] = (void *)0x0;
    ppVar6 = (*param_2)(ppVar4,param_1,0xa8,param_3);
    ppVar4->root = ppVar6;
    if (ppVar6 != (pas_root *)0x0) {
      if (ppVar6->magic != 0xbeeeeeeeef) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x66,
                   "pas_enumerator *__cdecl pas_enumerator_create(pas_root *, pas_enumerator_reader, void *, pas_enumerator_recorder, void *, pas_enumerator_meta_recording_mode, pas_enumerator_payload_recording_mode, pas_enumerator_object_recording_mode)"
                   ,"result->root->magic == PAS_ROOT_MAGIC");
      }
      if (ppVar6->num_heap_configs != 4) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x67,
                   "pas_enumerator *__cdecl pas_enumerator_create(pas_root *, pas_enumerator_reader, void *, pas_enumerator_recorder, void *, pas_enumerator_meta_recording_mode, pas_enumerator_payload_recording_mode, pas_enumerator_object_recording_mode)"
                   ,"result->root->num_heap_configs == pas_heap_config_kind_num_kinds");
      }
      puVar7 = (*param_2)(ppVar4,ppVar6->compact_heap_reservation_base,8,param_3);
      if (puVar7 != (undefined8 *)0x0) {
        puVar8 = (*param_2)(ppVar4,ppVar4->root->compact_heap_reservation_size,8,param_3);
        if (puVar8 != (ulong64 *)0x0) {
          ppVar4->compact_heap_remote_base = (void *)*puVar7;
          pvVar9 = (*param_2)(ppVar4,(void *)*puVar7,*puVar8,param_3);
          ppVar4->compact_heap_copy_base = pvVar9;
          if (pvVar9 != (void *)0x0) {
            ppVar4->compact_heap_size = *puVar8;
            ppVar10 = pas_enumerator_region_allocate(&ppVar4->region,0x18);
            ppVar4->unaccounted_pages = ppVar10;
            ppVar10->table = (void **)0x0;
            ppVar10->table_size = 0;
            ppVar10->table_mask = 0;
            ppVar10->key_count = 0;
            ppVar10->deleted_count = 0;
            ppVar4->reader = param_2;
            ppVar4->reader_arg = param_3;
            ppVar4->recorder = param_4;
            ppVar4->recorder_arg = param_5;
            ppVar4->record_meta = param_6;
            ppVar4->record_payload = param_7;
            ppVar4->record_object = param_8;
            pvVar9 = (*param_2)(ppVar4,ppVar4->root->heap_configs,0x20,param_3);
            ppVar3 = pas_heap_config_kind_for_config_table[1];
            if (pvVar9 != (void *)0x0) {
              if (pas_heap_config_kind_for_config_table[1] == (pas_heap_config *)0x0)
              goto LAB_140da4793;
              pvVar11 = (*param_2)(ppVar4,*(void **)((longlong)pvVar9 +
                                                    (longlong)
                                                    (int)pas_heap_config_kind_for_config_table[1]->
                                                         kind * 8),0x498,param_3);
              if (pvVar11 != (void *)0x0) {
                if (*(pas_heap_config_kind *)((longlong)pvVar11 + 8) != ppVar3->kind)
                goto LAB_140da47b2;
                p_Var1 = ppVar3->prepare_to_enumerate;
                if (p_Var1 != (_func___cdecl_void_ptr_pas_enumerator_ptr *)0x0) {
                  pvVar11 = (*p_Var1)(ppVar4);
                  ppVar4->heap_config_datas[1] = pvVar11;
                  if (ppVar4->heap_config_datas[1] == (void *)0x0) goto LAB_140da4720;
                }
                ppVar3 = pas_heap_config_kind_for_config_table[2];
                if (pas_heap_config_kind_for_config_table[2] == (pas_heap_config *)0x0)
                goto LAB_140da4793;
                pvVar11 = (*param_2)(ppVar4,*(void **)((longlong)pvVar9 +
                                                      (longlong)
                                                      (int)pas_heap_config_kind_for_config_table[2]
                                                           ->kind * 8),0x498,param_3);
                if (pvVar11 != (void *)0x0) {
                  if (*(pas_heap_config_kind *)((longlong)pvVar11 + 8) != ppVar3->kind)
                  goto LAB_140da47b2;
                  p_Var1 = ppVar3->prepare_to_enumerate;
                  if (p_Var1 != (_func___cdecl_void_ptr_pas_enumerator_ptr *)0x0) {
                    pvVar11 = (*p_Var1)(ppVar4);
                    ppVar4->heap_config_datas[2] = pvVar11;
                    if (ppVar4->heap_config_datas[2] == (void *)0x0) goto LAB_140da4720;
                  }
                  ppVar3 = pas_heap_config_kind_for_config_table[3];
                  if (pas_heap_config_kind_for_config_table[3] == (pas_heap_config *)0x0) {
LAB_140da4793:
                    /* WARNING: Subroutine does not return */
                    pas_assertion_failed_no_inline
                              ("src\\libpas\\pas_enumerator.c",0x97,
                               "pas_enumerator *__cdecl pas_enumerator_create(pas_root *, pas_enumerator_reader, void *, pas_enumerator_recorder, void *, pas_enumerator_meta_recording_mode, pas_enumerator_payload_recording_mode, pas_enumerator_object_recording_mode)"
                               ,"config");
                  }
                  pvVar9 = (*param_2)(ppVar4,*(void **)((longlong)pvVar9 +
                                                       (longlong)
                                                       (int)pas_heap_config_kind_for_config_table[3]
                                                            ->kind * 8),0x498,param_3);
                  if (pvVar9 != (void *)0x0) {
                    if (*(pas_heap_config_kind *)((longlong)pvVar9 + 8) != ppVar3->kind) {
LAB_140da47b2:
                    /* WARNING: Subroutine does not return */
                      pas_assertion_failed_no_inline
                                ("src\\libpas\\pas_enumerator.c",0x9d,
                                 "pas_enumerator *__cdecl pas_enumerator_create(pas_root *, pas_enumerator_reader, void *, pas_enumerator_recorder, void *, pas_enumerator_meta_recording_mode, pas_enumerator_payload_recording_mode, pas_enumerator_object_recording_mode)"
                                 ,"remote_config->kind == config->kind");
                    }
                    p_Var1 = ppVar3->prepare_to_enumerate;
                    if (p_Var1 == (_func___cdecl_void_ptr_pas_enumerator_ptr *)0x0)
                    goto LAB_140da472a;
                    pvVar9 = (*p_Var1)(ppVar4);
                    ppVar4->heap_config_datas[3] = pvVar9;
                    if (ppVar4->heap_config_datas[3] != (void *)0x0) goto LAB_140da472a;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_140da4720:
    pas_enumerator_region_destroy(ppVar4->region);
  }
  ppVar4 = (pas_enumerator *)0x0;
LAB_140da472a:
  if ((local_48 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return ppVar4;
  }
  pcVar2 = (code *)swi(3);
  ppVar4 = (pas_enumerator *)(*pcVar2)();
  return ppVar4;
}

// allocate @ 140da47e0

void * __cdecl allocate(ulong64 param_1,char *param_2,pas_allocation_kind param_3,void *param_4)

{
  void *pvVar1;
  
  pvVar1 = pas_enumerator_region_allocate(param_4,param_1);
  return pvVar1;
}

// deallocate @ 140da4800

void __cdecl deallocate(void *param_1,ulong64 param_2,pas_allocation_kind param_3,void *param_4)

{
  return;
}

// pas_enumerator_allocate @ 140da4810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_enumerator_allocate(pas_enumerator *param_1,ulong64 param_2)

{
  pas_enumerator_region *ppVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  pas_alignment pStack_68;
  pas_aligned_allocation_result pStack_58;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar6 = param_2 + 7 & 0xfffffffffffffff8;
  ppVar1 = param_1->region;
  if (ppVar1 != (pas_enumerator_region *)0x0) {
    uVar2 = ppVar1->offset;
    uVar4 = ppVar1->size - uVar2;
    if (uVar6 <= uVar4) goto joined_r0x000140da9cc7;
  }
  pStack_68.alignment = 1;
  pStack_68.alignment_begin = 0;
  pas_page_malloc_try_allocate_without_deallocating_padding
            (&pStack_58,uVar6 + 0x18,&pStack_68,pas_committed);
  if (pStack_58.result == (pas_enumerator_region *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3a,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "allocation_result.result");
  }
  if (pStack_58.result != pStack_58.left_padding) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3b,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "allocation_result.result == allocation_result.left_padding");
  }
  if (pStack_58.left_padding_size != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x3c,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "!allocation_result.left_padding_size");
  }
  *(pas_enumerator_region **)pStack_58.result = ppVar1;
  *(ulong64 *)((longlong)pStack_58.result + 8) =
       (pStack_58.result_size + pStack_58.right_padding_size) - 0x18;
  *(ulong64 *)((longlong)pStack_58.result + 0x10) = 0;
  param_1->region = pStack_58.result;
  uVar2 = *(ulong64 *)((longlong)pStack_58.result + 0x10);
  uVar4 = *(ulong64 *)((longlong)pStack_58.result + 8) - uVar2;
  ppVar1 = pStack_58.result;
joined_r0x000140da9cc7:
  if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator_region.c",0x4a,
               "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
               "region->size - region->offset >= size");
  }
  ppVar1->offset = uVar6 + uVar2;
  if ((uStack_20 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return (void *)((longlong)ppVar1->payload + uVar2);
  }
  pcVar3 = (code *)swi(3);
  pvVar5 = (void *)(*pcVar3)();
  return pvVar5;
}

// pas_enumerator_destroy @ 140da4820

void __cdecl pas_enumerator_destroy(pas_enumerator *param_1)

{
  pas_enumerator_region_destroy(param_1->region);
  return;
}

// pas_enumerator_read_compact @ 140da4830

void * __cdecl pas_enumerator_read_compact(pas_enumerator *param_1,void *param_2)

{
  void *pvVar1;
  
  if (&DAT_00000007 < param_2) {
    pvVar1 = param_1->compact_heap_remote_base;
    if (param_2 < pvVar1) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerator.c",0xbf,
                 "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                 "remote_address >= (void*)((uintptr_t)enumerator->compact_heap_remote_base)");
    }
    if ((void *)(param_1->compact_heap_size + (longlong)pvVar1) <= param_2) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerator.c",0xc1,
                 "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                 "remote_address < (void*)((uintptr_t)enumerator->compact_heap_remote_base + enumerator->compact_heap_size)"
                );
    }
    param_2 = (void *)(((longlong)param_2 - (longlong)pvVar1) +
                      (longlong)param_1->compact_heap_copy_base);
  }
  return param_2;
}

// pas_enumerator_read @ 140da48b0

void * __cdecl pas_enumerator_read(pas_enumerator *param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xcd,
               "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)",
               "remote_address");
  }
  pvVar1 = param_1->compact_heap_remote_base;
  pvVar2 = (void *)(param_1->compact_heap_size + (longlong)pvVar1);
  if (param_2 < pvVar2 && pvVar1 <= param_2) {
    if ((void *)(param_3 + (longlong)param_2) <= pvVar2) {
      if (&DAT_00000007 < param_2) {
        param_2 = (void *)(((longlong)param_2 - (longlong)pvVar1) +
                          (longlong)param_1->compact_heap_copy_base);
      }
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xd4,
               "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)",
               "(uintptr_t)remote_address + size <= (uintptr_t)compact_heap_end");
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140da4909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*param_1->reader)(param_1,param_2,param_3,param_1->reader_arg);
    return pvVar1;
  }
  return &param_1->dummy_byte;
}

// pas_enumerator_add_unaccounted_pages @ 140da4960

void __cdecl
pas_enumerator_add_unaccounted_pages(pas_enumerator *param_1,void *param_2,ulong64 param_3)

{
  pas_ptr_hash_set *ppVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  void **ppvVar5;
  uint uVar6;
  uint uVar7;
  void **ppvVar8;
  char *pcVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = param_1->root->page_malloc_alignment;
  uVar13 = uVar14 - 1;
  if ((uVar14 ^ uVar13) <= uVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar13 & (ulonglong)param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xe4,
               "void __cdecl pas_enumerator_add_unaccounted_pages(pas_enumerator *, void *, size_t)"
               ,"pas_is_aligned((uintptr_t)remote_address, enumerator->root->page_malloc_alignment)"
              );
  }
  if ((uVar13 & param_3) != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xe5,
               "void __cdecl pas_enumerator_add_unaccounted_pages(pas_enumerator *, void *, size_t)"
               ,"pas_is_aligned(size, enumerator->root->page_malloc_alignment)");
  }
  if (param_3 >> 0x30 != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xe8,
               "void __cdecl pas_enumerator_add_unaccounted_pages(pas_enumerator *, void *, size_t)"
               ,"(uint64_t)size < ((uint64_t)1 << PAS_ADDRESS_BITS)");
  }
  if (param_3 != 0) {
    uVar13 = 0;
    do {
      ppVar1 = param_1->unaccounted_pages;
      uVar7 = ppVar1->table_size;
      if (uVar7 <= (ppVar1->deleted_count + ppVar1->key_count) * 2) {
        uVar6 = uVar7 * 2;
        if (ppVar1->key_count * 6 < uVar7 * 2) {
          uVar6 = uVar7;
        }
        uVar14 = (ulonglong)uVar6;
        if (uVar7 == 0) {
          uVar14 = 0x10;
        }
        uVar7 = (uint)uVar14;
        if ((uVar7 == 0) ||
           (uVar6 = uVar7 - ((uint)(uVar14 >> 1) & 0x55555555),
           uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
           1 < ((uVar6 >> 4) + uVar6 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pcVar9 = "pas_ptr_hash_set/table";
        ppvVar5 = (*(param_1->allocation_config).allocate)
                            (uVar14 * 8,"pas_ptr_hash_set/table",pas_object_allocation,
                             (param_1->allocation_config).arg);
        memset(ppvVar5,(int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),0xff),uVar14 * 8);
        ppvVar8 = ppVar1->table;
        uVar14 = (ulonglong)ppVar1->table_size;
        if (uVar14 == 0) {
          uVar10 = 0;
        }
        else {
          uVar11 = 0;
          do {
            pvVar2 = ppvVar8[uVar11];
            if (pvVar2 < (void *)0xfffffffffffffffe) {
              uVar6 = (uint)((ulonglong)pvVar2 >> 4) & 0xfffffff ^ (uint)pvVar2;
              uVar12 = (uint)((ulonglong)pvVar2 >> 0x20);
              uVar12 = uVar12 >> 4 ^ uVar12;
              uVar6 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
              uVar6 = uVar6 >> 0xb ^ uVar6;
              do {
                uVar12 = uVar6 & uVar7 - 1;
                uVar6 = uVar6 + 1;
              } while (ppvVar5[uVar12] < (void *)0xfffffffffffffffe);
              ppvVar5[uVar12] = pvVar2;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar14);
          uVar10 = uVar14 << 3;
        }
        ppVar1->table = ppvVar5;
        ppVar1->table_size = uVar7;
        ppVar1->table_mask = uVar7 - 1;
        ppVar1->deleted_count = 0;
        (*(param_1->allocation_config).deallocate)
                  (ppvVar8,uVar10,pas_object_allocation,(param_1->allocation_config).arg);
      }
      pvVar2 = (void *)((longlong)param_2 + uVar13);
      uVar7 = (uint)((ulonglong)pvVar2 >> 4) & 0xfffffff ^ (uint)pvVar2;
      uVar6 = (uint)((ulonglong)pvVar2 >> 0x20);
      uVar6 = uVar6 >> 4 ^ uVar6;
      uVar7 = uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef) ^ uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef);
      uVar7 = uVar7 >> 0xb ^ uVar7;
      ppvVar8 = (void **)0x0;
      while( true ) {
        while( true ) {
          uVar6 = uVar7 & ppVar1->table_mask;
          ppvVar5 = ppVar1->table + uVar6;
          pvVar3 = ppVar1->table[uVar6];
          if (pvVar3 != (void *)0xfffffffffffffffe) break;
          if (ppvVar8 == (void **)0x0) {
            ppvVar8 = ppvVar5;
          }
          uVar7 = uVar7 + 1;
        }
        if (pvVar3 == (void *)0xffffffffffffffff) break;
        if (pvVar3 == pvVar2) goto LAB_140da49d3;
        uVar7 = uVar7 + 1;
      }
      if (ppvVar8 != (void **)0x0) {
        ppVar1->deleted_count = ppVar1->deleted_count - 1;
        ppvVar5 = ppvVar8;
      }
      ppVar1->key_count = ppVar1->key_count + 1;
LAB_140da49d3:
      *ppvVar5 = pvVar2;
      uVar13 = uVar13 + param_1->root->page_malloc_alignment;
    } while (uVar13 < param_3);
  }
  return;
}

// pas_enumerator_exclude_accounted_page @ 140da4c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl pas_enumerator_exclude_accounted_page(pas_enumerator *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  pas_ptr_hash_set *ppVar3;
  void **ppvVar4;
  void *pvVar5;
  code *pcVar6;
  void **_Dst;
  char *pcVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar12 = param_1->root->page_malloc_alignment;
  uVar8 = uVar12 - 1;
  if ((uVar12 ^ uVar8) <= uVar8) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if ((uVar8 & (ulonglong)param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0xf6,
               "_Bool __cdecl pas_enumerator_exclude_accounted_page(pas_enumerator *, void *)",
               "pas_is_aligned((uintptr_t)remote_address, enumerator->root->page_malloc_alignment)")
    ;
  }
  ppVar3 = param_1->unaccounted_pages;
  ppvVar4 = ppVar3->table;
  if (ppvVar4 == (void **)0x0) {
    return false;
  }
  uVar11 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
  uVar13 = (uint)((ulonglong)param_2 >> 0x20);
  uVar13 = uVar13 >> 4 ^ uVar13;
  uVar11 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef) ^ uVar11 * 0x20 + (uVar11 ^ 0xdeadbeef);
  uVar11 = uVar11 >> 0xb ^ uVar11;
  do {
    uVar13 = uVar11 & ppVar3->table_mask;
    pvVar5 = ppvVar4[uVar13];
    if (pvVar5 < (void *)0xfffffffffffffffe) {
      if (pvVar5 == param_2) {
        ppvVar4[uVar13] = (void *)0xfffffffffffffffe;
        uVar1 = ppVar3->key_count;
        uVar2 = ppVar3->deleted_count;
        iVar15 = uVar1 + ___xmm_000000000000000000000001ffffffff;
        iVar16 = uVar2 + _UNK_1531e9d14;
        ppVar3->key_count = iVar15;
        ppVar3->deleted_count = iVar16;
        uVar11 = ppVar3->table_size;
        if (uVar11 < 0x11 || uVar11 <= (uint)(iVar15 * 6)) {
          return true;
        }
        uVar11 = uVar11 >> 1;
        uVar13 = uVar11 - 1;
        if ((uVar11 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pcVar7 = "pas_ptr_hash_set/table";
        uVar9 = 0;
        _Dst = (*(param_1->allocation_config).allocate)
                         ((ulonglong)uVar11 * 8,"pas_ptr_hash_set/table",pas_object_allocation,
                          (param_1->allocation_config).arg);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)pcVar7 >> 8),0xff),(ulonglong)uVar11 * 8);
        ppvVar4 = ppVar3->table;
        uVar8 = (ulonglong)ppVar3->table_size;
        if (uVar8 != 0) {
          uVar12 = 0;
          do {
            pvVar5 = ppvVar4[uVar12];
            if (pvVar5 < (void *)0xfffffffffffffffe) {
              uVar14 = (uint)((ulonglong)pvVar5 >> 4) & 0xfffffff ^ (uint)pvVar5;
              uVar10 = (uint)((ulonglong)pvVar5 >> 0x20);
              uVar10 = uVar10 >> 4 ^ uVar10;
              uVar10 = uVar10 * 0x20 + (uVar10 ^ 0xdeadbeef) ^ uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef)
              ;
              uVar10 = uVar10 >> 0xb ^ uVar10;
              do {
                uVar14 = uVar10 & uVar13;
                uVar10 = uVar10 + 1;
              } while (_Dst[uVar14] < (void *)0xfffffffffffffffe);
              _Dst[uVar14] = pvVar5;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar8);
          uVar9 = uVar8 << 3;
        }
        ppVar3->table = _Dst;
        ppVar3->table_size = uVar11;
        ppVar3->table_mask = uVar13;
        ppVar3->deleted_count = 0;
        (*(param_1->allocation_config).deallocate)
                  (ppvVar4,uVar9,pas_object_allocation,(param_1->allocation_config).arg);
        return true;
      }
    }
    else if (pvVar5 != (void *)0xfffffffffffffffe) {
      return false;
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

// pas_enumerator_exclude_accounted_pages @ 140da4ea0

void __cdecl
pas_enumerator_exclude_accounted_pages(pas_enumerator *param_1,void *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar1 = param_1->root->page_malloc_alignment;
  uVar3 = uVar1 - 1;
  if ((uVar1 ^ uVar3) <= uVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar3 & (ulonglong)param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x108,
               "void __cdecl pas_enumerator_exclude_accounted_pages(pas_enumerator *, void *, size_t)"
               ,"pas_is_aligned((uintptr_t)remote_address, enumerator->root->page_malloc_alignment)"
              );
  }
  if ((uVar3 & param_3) != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x109,
               "void __cdecl pas_enumerator_exclude_accounted_pages(pas_enumerator *, void *, size_t)"
               ,"pas_is_aligned(size, enumerator->root->page_malloc_alignment)");
  }
  if (param_3 >> 0x30 == 0) {
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        pas_enumerator_exclude_accounted_page(param_1,(void *)(uVar3 + (longlong)param_2));
        uVar3 = uVar3 + param_1->root->page_malloc_alignment;
      } while (uVar3 < param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pas_assertion_failed_no_inline
            ("src\\libpas\\pas_enumerator.c",0x10c,
             "void __cdecl pas_enumerator_exclude_accounted_pages(pas_enumerator *, void *, size_t)"
             ,"(uint64_t)size < ((uint64_t)1 << PAS_ADDRESS_BITS)");
}

// pas_enumerator_record @ 140da4f80

void __cdecl
pas_enumerator_record
          (pas_enumerator *param_1,void *param_2,ulong64 param_3,pas_enumerator_record_kind param_4)

{
  pas_enumerator_meta_recording_mode pVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 >> 0x30 != 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x11b,
               "void __cdecl pas_enumerator_record(pas_enumerator *, void *, size_t, pas_enumerator_record_kind)"
               ,"(uint64_t)size < ((uint64_t)1 << PAS_ADDRESS_BITS)");
  }
  if (param_4 == pas_enumerator_object_record) {
    pVar1 = param_1->record_object;
  }
  else if (param_4 == pas_enumerator_payload_record) {
    pVar1 = param_1->record_payload;
  }
  else {
    if (param_4 != pas_enumerator_meta_record) goto LAB_140da4fb1;
    pVar1 = param_1->record_meta;
  }
  if (pVar1 == pas_enumerator_do_not_record_meta_records) {
    return;
  }
LAB_140da4fb1:
  (*param_1->recorder)(param_1,param_2,param_3,param_4,param_1->recorder_arg);
  return;
}

// pas_enumerator_record_page_payload_and_meta @ 140da5000

void __cdecl
pas_enumerator_record_page_payload_and_meta
          (pas_enumerator *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,uchar *param_5,
          ulong64 param_6,ulong64 param_7)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  void *pvVar10;
  
  if (param_3 <= param_6) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x141,
               "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
               ,"payload_begin < page_size");
  }
  if (param_3 < param_7) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x142,
               "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
               ,"payload_end <= page_size");
  }
  uVar6 = param_7 - param_6;
  if (param_7 < param_6 || uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerator.c",0x143,
               "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
               ,"payload_begin < payload_end");
  }
  if (param_6 != 0) {
    if (0xffffffffffff < param_6) goto LAB_140da5230;
    if (param_1->record_meta != pas_enumerator_do_not_record_meta_records) {
      (*param_1->recorder)
                (param_1,(void *)param_2,param_6,pas_enumerator_meta_record,param_1->recorder_arg);
    }
  }
  uVar4 = param_3 - param_7;
  if (uVar4 != 0) {
    if (0xffffffffffff < uVar4) goto LAB_140da5230;
    if (param_1->record_meta != pas_enumerator_do_not_record_meta_records) {
      (*param_1->recorder)
                (param_1,(void *)(param_2 + param_7),uVar4,pas_enumerator_meta_record,
                 param_1->recorder_arg);
    }
  }
  if (param_1->record_payload != pas_enumerator_do_not_record_payload_records) {
    if (param_3 == param_4) {
      if (param_5 != (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x152,
                   "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
                   ,"!use_counts");
      }
      if (0xffffffffffff < uVar6) {
LAB_140da5230:
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x11b,
                   "void __cdecl pas_enumerator_record(pas_enumerator *, void *, size_t, pas_enumerator_record_kind)"
                   ,"(uint64_t)size < ((uint64_t)1 << PAS_ADDRESS_BITS)");
      }
      pvVar10 = param_1->recorder_arg;
      uVar2 = param_6;
    }
    else {
      if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x15b,
                   "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
                   ,"page_size > granule_size");
      }
      if (param_5 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerator.c",0x15c,
                   "void __cdecl pas_enumerator_record_page_payload_and_meta(pas_enumerator *, uintptr_t, uintptr_t, uintptr_t, pas_page_granule_use_count *, uintptr_t, uintptr_t)"
                   ,"use_counts");
      }
      if ((param_3 | param_4) >> 0x20 == 0) {
        uVar4 = (param_3 & 0xffffffff) / (param_4 & 0xffffffff);
      }
      else {
        uVar4 = param_3 / param_4;
      }
      uVar3 = 0;
      uVar6 = param_6;
      uVar7 = param_4;
      uVar8 = param_6;
      do {
        uVar9 = param_6;
        if (param_6 < uVar7) {
          uVar9 = uVar7;
        }
        if (param_7 <= uVar9) {
          uVar9 = param_7;
        }
        uVar2 = uVar6;
        if (param_5[uVar3] == 0xff) {
          if (uVar8 < uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar5 = uVar8 - uVar6;
          uVar2 = uVar9;
          if (uVar5 != 0) {
            if (0xffffffffffff < uVar5) goto LAB_140da5230;
            if (param_1->record_payload != pas_enumerator_do_not_record_payload_records) {
              (*param_1->recorder)
                        (param_1,(void *)(uVar6 + param_2),uVar5,pas_enumerator_payload_record,
                         param_1->recorder_arg);
            }
          }
        }
        uVar3 = uVar3 + 1;
        uVar7 = uVar7 + param_4;
        uVar6 = uVar2;
        uVar8 = uVar9;
      } while (uVar3 < uVar4);
      if (uVar9 < uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar6 = uVar9 - uVar2;
      if (uVar6 == 0) {
        return;
      }
      if (0xffffffffffff < uVar6) goto LAB_140da5230;
      if (param_1->record_payload == pas_enumerator_do_not_record_payload_records) {
        return;
      }
      pvVar10 = param_1->recorder_arg;
    }
    (*param_1->recorder)
              (param_1,(void *)(uVar2 + param_2),uVar6,pas_enumerator_payload_record,pvVar10);
  }
  return;
}

// pas_enumerator_for_each_heap @ 140da5320

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
pas_enumerator_for_each_heap
          (pas_enumerator *param_1,
          _func___cdecl_bool_pas_enumerator_ptr_pas_heap_ptr_void_ptr *param_2,void *param_3)

{
  ulong64 uVar1;
  pas_heap *ppVar2;
  uint3 uVar3;
  bool bVar4;
  pas_heap **pppVar5;
  pas_heap **pppVar6;
  pas_heap *ppVar7;
  pas_heap **pppVar8;
  pas_heap *ppVar9;
  char *pcVar10;
  ulong64 uVar11;
  
  pppVar5 = param_1->root->all_heaps_first_heap;
  if (pppVar5 == (pas_heap **)0x0) goto LAB_140da5529;
  pppVar6 = param_1->compact_heap_remote_base;
  pppVar8 = (pas_heap **)(param_1->compact_heap_size + (longlong)pppVar6);
  if (pppVar5 < pppVar8 && pppVar6 <= pppVar5) {
    if (pppVar8 < pppVar5 + 1) goto LAB_140da5548;
    if (&DAT_00000008 <= pppVar5) {
      pppVar5 = (pas_heap **)
                (((longlong)pppVar5 - (longlong)pppVar6) + (longlong)param_1->compact_heap_copy_base
                );
      goto joined_r0x000140da53a2;
    }
  }
  else {
    pppVar5 = (*param_1->reader)(param_1,pppVar5,8,param_1->reader_arg);
joined_r0x000140da53a2:
    if (pppVar5 == (pas_heap **)0x0) {
      return false;
    }
  }
  ppVar9 = *pppVar5;
  if ((pas_heap *)&DAT_00000007 < ppVar9) {
    ppVar2 = param_1->compact_heap_remote_base;
    if (ppVar9 < ppVar2) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerator.c",0xbf,
                 "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                 "remote_address >= (void*)((uintptr_t)enumerator->compact_heap_remote_base)");
    }
    if ((pas_heap *)
        ((ppVar2->large_heap).free_heap.tree.root.payload + (param_1->compact_heap_size - 0x28)) <=
        ppVar9) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerator.c",0xc1,
                 "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                 "remote_address < (void*)((uintptr_t)enumerator->compact_heap_remote_base + enumerator->compact_heap_size)"
                );
    }
    ppVar9 = (pas_heap *)
             (((longlong)ppVar9 - (longlong)ppVar2) + (longlong)param_1->compact_heap_copy_base);
  }
  while (ppVar9 != (pas_heap *)0x0) {
    bVar4 = (*param_2)(param_1,ppVar9,param_3);
    if (!bVar4) {
      return false;
    }
    uVar3 = *(uint3 *)(ppVar9->next_heap).payload;
    if (uVar3 == 0) break;
    ppVar9 = (pas_heap *)((ulonglong)uVar3 * 8 + (longlong)param_1->compact_heap_copy_base);
  }
  pcVar10 = (char *)param_1->root->static_heaps;
  if (pcVar10 == (char *)0x0) goto LAB_140da5529;
  uVar11 = param_1->root->num_static_heaps;
  uVar1 = uVar11 * 8;
  pppVar5 = param_1->compact_heap_remote_base;
  pppVar6 = (pas_heap **)(param_1->compact_heap_size + (longlong)pppVar5);
  if (pcVar10 < pppVar6 && pppVar5 <= pcVar10) {
    if (pppVar6 < pcVar10 + uVar1) {
LAB_140da5548:
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerator.c",0xd4,
                 "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)",
                 "(uintptr_t)remote_address + size <= (uintptr_t)compact_heap_end");
    }
    if (&DAT_00000007 < pcVar10) {
      pcVar10 = (char *)(((longlong)pcVar10 - (longlong)pppVar5) +
                        (longlong)param_1->compact_heap_copy_base);
      goto joined_r0x000140da5494;
    }
  }
  else if (uVar1 == 0) {
    pcVar10 = &param_1->dummy_byte;
  }
  else {
    pcVar10 = (*param_1->reader)(param_1,pcVar10,uVar1,param_1->reader_arg);
joined_r0x000140da5494:
    if (pcVar10 == (char *)0x0) {
      return false;
    }
    uVar11 = param_1->root->num_static_heaps;
  }
  while( true ) {
    bVar4 = uVar11 == 0;
    uVar11 = uVar11 - 1;
    if (bVar4) {
      return (bool)1;
    }
    ppVar9 = *(pas_heap **)(pcVar10 + uVar11 * 8);
    if (ppVar9 == (pas_heap *)0x0) break;
    ppVar2 = param_1->compact_heap_remote_base;
    ppVar7 = (pas_heap *)
             ((ppVar2->large_heap).free_heap.tree.root.payload + (param_1->compact_heap_size - 0x28)
             );
    if (ppVar9 < ppVar7 && ppVar2 <= ppVar9) {
      if (ppVar7 < ppVar9 + 1) goto LAB_140da5548;
      if ((pas_heap *)&DAT_00000007 < ppVar9) {
        ppVar9 = (pas_heap *)
                 (((longlong)ppVar9 - (longlong)ppVar2) + (longlong)param_1->compact_heap_copy_base)
        ;
        goto joined_r0x000140da54c6;
      }
    }
    else {
      ppVar9 = (*param_1->reader)(param_1,ppVar9,0x50,param_1->reader_arg);
joined_r0x000140da54c6:
      if (ppVar9 == (pas_heap *)0x0) {
        return (bool)0;
      }
    }
    bVar4 = (*param_2)(param_1,ppVar9,param_3);
    if (!bVar4) {
      return false;
    }
  }
LAB_140da5529:
                    /* WARNING: Subroutine does not return */
  pas_assertion_failed_no_inline
            ("src\\libpas\\pas_enumerator.c",0xcd,
             "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)","remote_address")
  ;
}

// pas_enumerator_enumerate_all @ 140da55b0

bool __cdecl pas_enumerator_enumerate_all(pas_enumerator *param_1)

{
  bool bVar1;
  
  bVar1 = pas_enumerate_initially_unaccounted_pages(param_1);
  if (bVar1) {
    bVar1 = pas_enumerate_large_heaps(param_1);
    if (bVar1) {
      bVar1 = pas_enumerate_segregated_heaps(param_1);
      if (bVar1) {
        bVar1 = pas_enumerate_bitfit_heaps(param_1);
        if (bVar1) {
          bVar1 = pas_enumerate_unaccounted_pages_as_meta(param_1);
          return bVar1;
        }
      }
    }
  }
  return false;
}

